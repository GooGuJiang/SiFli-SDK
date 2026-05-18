#!/usr/bin/env python3
#
# SPDX-FileCopyrightText: 2026 SiFli Technologies(Nanjing) Co., Ltd
#
# SPDX-License-Identifier: Apache-2.0

from __future__ import annotations

import os
import sys
import tempfile
import unittest
from pathlib import Path
from typing import Any

import yaml


ROOT = os.path.realpath(os.path.join(os.path.dirname(__file__), ".."))
sys.path.insert(0, os.path.join(ROOT, "tools", "build"))

import ptab  # noqa: E402
from validate_ptab_v3 import validate_ptab_v3  # noqa: E402


class ValidatePtabV3ReservedPartitionTests(unittest.TestCase):
    def load_ptab(self, data: dict[str, Any]):
        with tempfile.TemporaryDirectory() as temp_dir:
            path = Path(temp_dir) / "ptab.yaml"
            path.write_text(yaml.safe_dump(data, sort_keys=False), encoding="utf-8")
            return ptab.load_ptab(path, fatal=True)

    def validation_messages(self, data: dict[str, Any]) -> list[str]:
        ptab_obj = self.load_ptab(data)
        return [str(issue) for issue in validate_ptab_v3(ptab_obj)]

    @staticmethod
    def base_52_nand_partitions(factory_data: dict[str, Any] | None = None) -> dict[str, Any]:
        partitions = []
        if factory_data is not None:
            partitions.append(factory_data)
        partitions.append({
            "name": "hcpu_flash_code",
            "type": "app",
            "subtype": "factory",
            "region": "mpi2",
            "offset": 0x000A0000,
            "size": 0x00100000,
            "core": "HCPU",
        })
        return {
            "version": 3,
            "chip": "SF32LB52X",
            "memory": [
                {"mpi": "mpi2", "type": "nand", "size": 16 * 1024 * 1024},
            ],
            "partitions": partitions,
        }

    @staticmethod
    def base_52_sdmmc_partitions(
        mbr: dict[str, Any] | None = None,
        factory_data: dict[str, Any] | None = None,
    ) -> dict[str, Any]:
        partitions = []
        if mbr is not None:
            partitions.append(mbr)
        if factory_data is not None:
            partitions.append(factory_data)
        partitions.append({
            "name": "hcpu_flash_code",
            "type": "app",
            "subtype": "factory",
            "region": "sdmmc1",
            "offset": 0x00061000,
            "size": 0x00100000,
            "core": "HCPU",
        })
        return {
            "version": 3,
            "chip": "SF32LB52X",
            "memory": [
                {"sdmmc": "sdmmc1", "type": "sd", "size": 16 * 1024 * 1024},
            ],
            "partitions": partitions,
        }

    def assertNoReservationMessages(self, data: dict[str, Any]) -> None:
        messages = self.validation_messages(data)
        reservation_messages = [
            message for message in messages
            if "FACTORY_DATA" in message or "MBR" in message
        ]
        self.assertEqual(reservation_messages, [])

    def test_52_nand_requires_factory_data_partition(self) -> None:
        messages = self.validation_messages(self.base_52_nand_partitions())

        self.assertTrue(any("FACTORY_DATA" in message for message in messages), messages)

    def test_52_nand_accepts_128k_factory_data_partition(self) -> None:
        data = self.base_52_nand_partitions({
            "name": "factory_data",
            "type": "data",
            "subtype": "raw",
            "region": "mpi2",
            "offset": 0x00040000,
            "size": 0x00020000,
            "aliases": ["FACTORY_DATA"],
        })

        self.assertNoReservationMessages(data)

    def test_52_nand_accepts_256k_factory_data_partition_when_layout_does_not_overlap(self) -> None:
        data = {
            "version": 3,
            "chip": "SF32LB52X",
            "memory": [
                {"mpi": "mpi2", "type": "nand", "size": 16 * 1024 * 1024},
            ],
            "partitions": [
                {
                    "name": "flash_table",
                    "type": "ftab",
                    "region": "mpi2",
                    "offset": 0x00000000,
                    "size": 0x00020000,
                },
                {
                    "name": "factory_data",
                    "type": "data",
                    "subtype": "raw",
                    "region": "mpi2",
                    "offset": 0x00080000,
                    "size": 0x00040000,
                    "aliases": ["FACTORY_DATA"],
                },
                {
                    "name": "bootloader",
                    "type": "bootloader",
                    "region": "mpi2",
                    "offset": 0x000C0000,
                    "size": 0x00010000,
                    "core": "HCPU",
                    "exec": {
                        "region": "hpsys_ram",
                        "offset": 0x00020000,
                    },
                },
                {
                    "name": "hcpu_flash_code",
                    "type": "app",
                    "subtype": "factory",
                    "region": "mpi2",
                    "offset": 0x000D0000,
                    "size": 0x00100000,
                    "core": "HCPU",
                },
            ],
        }

        self.assertNoReservationMessages(data)

    def test_52_sdmmc_requires_mbr_partition(self) -> None:
        data = self.base_52_sdmmc_partitions(factory_data={
            "name": "factory_data",
            "type": "data",
            "subtype": "raw",
            "region": "sdmmc1",
            "offset": 0x00041000,
            "size": 0x00020000,
            "aliases": ["FACTORY_DATA"],
        })

        messages = self.validation_messages(data)

        self.assertTrue(any("MBR" in message for message in messages), messages)

    def test_52_sdmmc_requires_factory_data_partition(self) -> None:
        data = self.base_52_sdmmc_partitions(mbr={
            "name": "mbr",
            "type": "data",
            "subtype": "raw",
            "region": "sdmmc1",
            "offset": 0x00000000,
            "size": 0x00001000,
            "aliases": ["MBR"],
        })

        messages = self.validation_messages(data)

        self.assertTrue(any("FACTORY_DATA" in message for message in messages), messages)

    def test_52_sdmmc_rejects_reserved_partition_without_data_raw_type(self) -> None:
        data = self.base_52_sdmmc_partitions(
            mbr={
                "name": "mbr",
                "type": "data",
                "subtype": "raw",
                "region": "sdmmc1",
                "offset": 0x00000000,
                "size": 0x00001000,
                "aliases": ["MBR"],
            },
            factory_data={
                "name": "factory_data",
                "type": "data",
                "subtype": "filesystem",
                "region": "sdmmc1",
                "offset": 0x00041000,
                "size": 0x00020000,
                "aliases": ["FACTORY_DATA"],
            },
        )

        messages = self.validation_messages(data)

        self.assertTrue(any("FACTORY_DATA" in message and "data" in message and "raw" in message for message in messages), messages)

    def test_52_sdmmc_accepts_mbr_and_factory_data_partitions(self) -> None:
        data = self.base_52_sdmmc_partitions(
            mbr={
                "name": "mbr",
                "type": "data",
                "subtype": "raw",
                "region": "sdmmc1",
                "offset": 0x00000000,
                "size": 0x00001000,
                "aliases": ["MBR"],
            },
            factory_data={
                "name": "factory_data",
                "type": "data",
                "subtype": "raw",
                "region": "sdmmc1",
                "offset": 0x00041000,
                "size": 0x00020000,
                "aliases": ["FACTORY_DATA"],
            },
        )

        self.assertNoReservationMessages(data)


if __name__ == "__main__":
    unittest.main()
