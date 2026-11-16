// libs/oldscape/rs2lib/worldmap/MapSquareData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "MapSquareData.h"

namespace jag::oldscape::rs2lib::worldmap {
    // 0x10020be40
    MapSquareData::MapSquareData() : PackableArea() {}

    // 0x10020bf50
    MapSquareData::MapSquareData(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6)
        : PackableArea(arg1, arg2, arg3, arg4, arg5, arg6) {}

    // 0x10020c100
    void MapSquareData::DeserialiseCompositeMetaData(PacketJ<Array<unsigned char>>& packetJ,
                                                     ErrorCapture& errorCapture) {
        uint8_t bVar2;
        unsigned short uVar3;
        int iVar4;

        if (packetJ.g1() == '\0') {
            bVar2 = packetJ.g1();
            field_168 = (unsigned int)bVar2;
            bVar2 = packetJ.g1();
            field_184 = (unsigned int)bVar2;
            uVar3 = packetJ.g2();
            field_160 = (unsigned int)uVar3;
            uVar3 = packetJ.g2();
            field_164 = (unsigned int)uVar3;
            uVar3 = packetJ.g2();
            field_176 = (unsigned int)uVar3;
            uVar3 = packetJ.g2();
            field_180 = (unsigned int)uVar3;
            iVar4 = packetJ.gSmart2or4s();
            field_128 = iVar4;
            iVar4 = packetJ.gSmart2or4s();
            field_132 = iVar4;
        } else {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/worldmap/"
                      "MapSquareData.cpp",
                      44, "MapSquareData.unpack - composite map entry is not for a map square!");
            errorCapture.Raise("MapSquareData.unpack - composite map entry is not for a map square!");
        }
    }

    // 0x10020c200
    void MapSquareData::DeserialiseAreaGeography(PacketJ<Array<unsigned char>>& packetJ, ErrorCapture& errorCapture) {
        uint8_t bVar2;
        uint8_t bVar3;
        Logger* this_00;
        int arg2;
        char* str2;
        int iVar5;

        auto puVar4 = std::min<int>(field_184, 4);
        field_184 = *puVar4;
        field_8.set_max_size(1, 3);
        field_32.set_max_size((long)(int)field_184, 3);
        field_56.set_max_size((long)(int)field_184, 3);
        field_80.set_max_size((long)(int)field_184, 3);
        field_136.set_max_size((long)(int)field_184, 3);
        if (packetJ.g1() == '\0') {
            bVar2 = packetJ.g1();
            bVar3 = packetJ.g1();
            if ((field_176 == (unsigned int)bVar2) && (field_180 == (unsigned int)bVar3)) {
                iVar5 = 0;
                do {
                    arg2 = 0;
                    do {
                        UnpackColumn(iVar5, arg2, packetJ);
                        arg2 = arg2 + 1;
                    } while (arg2 != 64);
                    iVar5 = iVar5 + 1;
                } while (iVar5 != 64);
                return;
            }
            this_00 = logger::default_logger();
            str2 = "MapSquareData.unpack - area entry is not for the same target as the composite map entry!";
            iVar5 = 90;
        } else {
            this_00 = logger::default_logger();
            str2 = "MapSquareData.unpack - area entry is not for a map square!";
            iVar5 = 81;
        }
        this_00->Log(false, 3,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/worldmap/"
                     "MapSquareData.cpp",
                     iVar5, str2);
        errorCapture.Raise(str2);
    }

    // 0x10020c800
    uint64_t MapSquareData::GetZoneX() {
        return 4294967295;
    }

    // 0x10020c810
    uint64_t MapSquareData::GetZoneZ() {
        return 4294967295;
    }

    // 0x10020c820
    unsigned int MapSquareData::HashCode() {
        return field_180 << 8 | field_176;
    }

    // 0x10020c840
    void MapSquareData::SerialiseAreaGeography(PacketJ<Array<unsigned char>>& packetJ) {
        int arg2;

        int arg1 = 0;
        packetJ.p1<unsigned long>(0);
        packetJ.p1<unsigned long>(field_176);
        packetJ.p1<unsigned long>(field_180);
        do {
            arg2 = 0;
            do {
                PackColumn(arg1, arg2, packetJ);
                arg2 = arg2 + 1;
            } while (arg2 != 64);
            arg1 = arg1 + 1;
        } while (arg1 != 64);
    }

    // 0x10020c960
    void MapSquareData::SerialiseCompositeMetaData(PacketJ<Array<unsigned char>>& packetJ) {
        packetJ.p1<unsigned long>(0);
        packetJ.p1<unsigned long>(field_168);
        packetJ.p1<unsigned long>(field_184);
        packetJ.p2<unsigned long>((unsigned short)field_160);
        packetJ.p2<unsigned long>((unsigned short)field_164);
        packetJ.p2<unsigned long>((unsigned short)field_176);
        packetJ.p2<unsigned long>((unsigned short)field_180);
        packetJ.pSmart1or2s((short)field_128);
        packetJ.pSmart1or2s((short)field_132);
    }

    // 0x10020ca70
    uint64_t MapSquareData::GeneratePreviewInner(Array<Array<int>> arg1, int arg2, int arg3) {
        uint32_t uVar3;
        Array<int>* this_00;
        uint32_t* puVar5;
        unsigned long arg1_00;
        long lVar6;

        unsigned int uVar1 = field_176;
        unsigned int uVar2 = field_180;
        long lVar4 = arg1->end();
        long local_38 = 0;
        do {
            lVar6 = 0;
            arg1_00 = ~(long)(int)(uVar2 << 6) + arg3 + lVar4;
            do {
                uVar3 = GetGroundColour((int)local_38, (int)lVar6);
                this_00 = (Array<int>*)(*arg1)[arg1_00];
                puVar5 = (uint32_t*)(*this_00)[(int)(uVar1 * 64 - arg2) + local_38];
                *puVar5 = uVar3;
                lVar6 = lVar6 + 1;
                arg1_00 = arg1_00 - 1;
            } while (lVar6 != 64);
            local_38 = local_38 + 1;
        } while (local_38 != 64);
        return 64;
    }

} // namespace jag::oldscape::rs2lib::worldmap
