// libs/oldscape/rs2lib/worldmap/MapSquareData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "MapSquareData.h"

namespace jag::oldscape::rs2lib::worldmap {
    // 0x10020be40, 32 bytes, base-object constructor, placed by class name and debug map
    // MapSquareData::MapSquareData()
    void MapSquareData::MapSquareData() {
        new (this) PackableArea();
        field_0 = &PTR_DeserialiseCompositeMetaData_100ef7548;
    }

    // 0x10020bf40, 16 bytes, complete-object constructor, placed by class name
    // MapSquareData::MapSquareData(): jumps straight to the base-object constructor

    // 0x10020bf50, 48 bytes, base-object constructor, placed by class name
    // MapSquareData::MapSquareData(int, int, int, int, int, int)
    void MapSquareData::MapSquareData(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6) {
        new (this) PackableArea(param_1, param_2, param_3, param_4, param_5, param_6);
        field_0 = &PTR_DeserialiseCompositeMetaData_100ef7548;
    }

    // 0x10020c0e0, 32 bytes, complete-object constructor, placed by class name
    // MapSquareData::MapSquareData(int, int, int, int, int, int)
    void MapSquareData::MapSquareData(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6) {
        MapSquareData(this, param_1, param_2, param_3, param_4, param_5, param_6);
    }

    // 0x10020c100, 256 bytes, placed by class name
    // MapSquareData::DeserialiseCompositeMetaData(PacketJ<Array<unsigned char, eastl::allocator> >&, ErrorCapture&)
    void MapSquareData::DeserialiseCompositeMetaData(PacketJ* param_1, ErrorCapture* param_2) {
        char cVar1;
        byte bVar2;
        ushort uVar3;
        int iVar4;
        uint uVar5;
        undefined8 uVar6;

        cVar1 = param_1->g1();
        if (cVar1 == '\0') {
            bVar2 = param_1->g1();
            field_168 = (uint)bVar2;
            bVar2 = param_1->g1();
            field_184 = (uint)bVar2;
            uVar3 = param_1->g2();
            field_160 = (uint)uVar3;
            uVar3 = param_1->g2();
            field_164 = (uint)uVar3;
            uVar3 = param_1->g2();
            field_176 = (uint)uVar3;
            uVar3 = param_1->g2();
            field_180 = (uint)uVar3;
            iVar4 = param_1->gSmart2or4s();
            field_128 = iVar4;
            uVar5 = param_1->gSmart2or4s();
            field_132 = uVar5;
        } else {
            uVar6 = logger::default_logger();
            logger::Logger::Log(uVar6, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "worldmap/MapSquareData.cpp",
                                44, "MapSquareData.unpack - composite map entry is not for a map square!");
            param_2->Raise("MapSquareData.unpack - composite map entry is not for a map square!");
        }
    }

    // 0x10020c200, 400 bytes, placed by class name
    // MapSquareData::DeserialiseAreaGeography(PacketJ<Array<unsigned char, eastl::allocator> >&, ErrorCapture&)
    void MapSquareData::DeserialiseAreaGeography(PacketJ* param_1, ErrorCapture* param_2) {
        char cVar1;
        byte bVar2;
        byte bVar3;
        uint* puVar4;
        undefined8 uVar5;
        int iVar6;
        char* pcVar7;
        undefined8 uVar8;
        int iVar9;
        int local_2c;

        local_2c = 4;
        puVar4 = (uint*)std::min<int>((int*)&field_184, &local_2c);
        field_184 = *puVar4;
        (&field_8, 1, 3)->set_max_size();
        (&field_32, (long)(int)field_184, 3)->set_max_size();
        (&field_56, (long)(int)field_184, 3)->set_max_size();
        (&field_80, (long)(int)field_184, 3)->set_max_size();
        (&field_136, (long)(int)field_184, 3)->set_max_size();
        cVar1 = param_1->g1();
        if (cVar1 == '\0') {
            bVar2 = param_1->g1();
            bVar3 = param_1->g1();
            if ((field_176 == (uint)bVar2) && (field_180 == (uint)bVar3)) {
                iVar9 = 0;
                do {
                    iVar6 = 0;
                    do {
                        UnpackColumn(iVar9, iVar6, param_1);
                        iVar6 = iVar6 + 1;
                    } while (iVar6 != 64);
                    iVar9 = iVar9 + 1;
                } while (iVar9 != 64);
                return;
            }
            uVar5 = logger::default_logger();
            pcVar7 = "MapSquareData.unpack - area entry is not for the same target as the composite map entry!";
            uVar8 = 90;
        } else {
            uVar5 = logger::default_logger();
            pcVar7 = "MapSquareData.unpack - area entry is not for a map square!";
            uVar8 = 81;
        }
        logger::Logger::Log(uVar5, 0, 3,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                            "worldmap/MapSquareData.cpp",
                            uVar8, pcVar7);
        param_2->Raise(pcVar7);
    }

    // 0x10020c800, 16 bytes, placed by class name
    // MapSquareData::GetZoneX()
    undefined8 MapSquareData::GetZoneX() {
        return 4294967295;
    }

    // 0x10020c810, 16 bytes, placed by class name
    // MapSquareData::GetZoneZ()
    undefined8 MapSquareData::GetZoneZ() {
        return 4294967295;
    }

    // 0x10020c820, 32 bytes, placed by class name
    // MapSquareData::HashCode()
    uint MapSquareData::HashCode() {
        return field_180 << 8 | field_176;
    }

    // 0x10020c840, 128 bytes, placed by class name
    // MapSquareData::SerialiseAreaGeography(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void MapSquareData::SerialiseAreaGeography(PacketJ* param_1) {
        int iVar1;
        int iVar2;

        iVar2 = 0;
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, 0);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_176);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_180);
        do {
            iVar1 = 0;
            do {
                PackColumn(iVar2, iVar1, param_1);
                iVar1 = iVar1 + 1;
            } while (iVar1 != 64);
            iVar2 = iVar2 + 1;
        } while (iVar2 != 64);
    }

    // 0x10020c960, 160 bytes, placed by class name
    // MapSquareData::SerialiseCompositeMetaData(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void MapSquareData::SerialiseCompositeMetaData(PacketJ* param_1) {
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, 0);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_168);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_184);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_160);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_164);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_176);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_180);
        param_1->pSmart1or2s((short)field_128);
        param_1->pSmart1or2s((short)field_132);
    }

    // 0x10020ca70, 240 bytes, placed by class name
    // MapSquareData::GeneratePreviewInner(Array<Array<int, eastl::allocator>, eastl::allocator>, int, int)
    undefined8 MapSquareData::GeneratePreviewInner(vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* param_2,
                                                   int param_3, int param_4) {
        uint uVar1;
        uint uVar2;
        undefined4 uVar3;
        long lVar4;
        Array<int, eastl::allocator>* this_00;
        undefined4* puVar5;
        ulong uVar6;
        long lVar7;
        long local_38;

        uVar1 = field_176;
        uVar2 = field_180;
        lVar4 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(param_2);
        local_38 = 0;
        do {
            lVar7 = 0;
            uVar6 = ~(long)(int)(uVar2 << 6) + param_4 + lVar4;
            do {
                uVar3 = GetGroundColour((int)local_38, (int)lVar7);
                this_00 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)param_2, uVar6);
                puVar5 = (undefined4*)Array<int, eastl::allocator>::operator[](this_00,
                                                                               (int)(uVar1 * 64 - param_3) + local_38);
                *puVar5 = uVar3;
                lVar7 = lVar7 + 1;
                uVar6 = uVar6 - 1;
            } while (lVar7 != 64);
            local_38 = local_38 + 1;
        } while (local_38 != 64);
        return 64;
    }

} // namespace jag::oldscape::rs2lib::worldmap
