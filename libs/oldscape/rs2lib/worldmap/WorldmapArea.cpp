// libs/oldscape/rs2lib/worldmap/WorldmapArea.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "WorldmapArea.h"

namespace jag::oldscape::rs2lib::worldmap {
    // 0x100214e10
    void WorldmapArea::Unpack(PacketJ<Array<unsigned char>>& packetJ1, PacketJ<Array<unsigned char>>& packetJ2,
                              int arg3, bool arg4, ErrorCapture& errorCapture) {
        uint8_t* this_00;
        unsigned short uVar2;
        uint32_t in_register_00000081;
        unsigned int uVar3;
        ErrorCapture local_3a0;
        ReturnValue local_50;
        WorldmapArea* local_40;
        uint32_t local_34;

        Unpack(packetJ1, arg3, errorCapture);
        if (!(errorCapture.IsRaised())) {
            local_34 = (((uint32_t)in_register_00000081 << 8) | (uint8_t)arg4);
            uVar2 = packetJ2.g2();
            local_40 = this;
            field_144.clear();
            if (uVar2 != 0) {
                uVar3 = (unsigned int)uVar2;
                do {
                    make_shared<MapSquareData>(&local_50);
                    local_3a0 = ErrorCapture(true);
                    ((MapSquareData*)local_50.operator->())->DeserialiseCompositeMetaData(packetJ2, local_3a0);
                    if (!(local_3a0.IsRaised())) {
                        field_144.push_back(local_50);
                    }
                    uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
            }
            uVar2 = packetJ2.g2();
            this_00 = &local_40->field_176;
            this_00->clear();
            if (uVar2 != 0) {
                uVar3 = (unsigned int)uVar2;
                do {
                    make_shared<MapZoneData>(&local_50);
                    local_3a0 = ErrorCapture(true);
                    ((MapZoneData*)local_50.operator->())->DeserialiseCompositeMetaData(packetJ2, local_3a0);
                    if (!(local_3a0.IsRaised())) {
                        this_00->push_back(local_50);
                    }
                    uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
            }
            UnpackStaticMapElements(local_40, packetJ2, local_34._0_1_);
        }
    }

    // 0x1002152a0
    void WorldmapArea::UnpackStaticMapElements(PacketJ<Array<unsigned char>>& packetJ, bool arg2) {
        char cVar1;
        int arg1;
        unsigned int uVar3;
        CoordGrid local_68;
        ReturnValue local_58;
        void* local_48;
        int local_34;

        list<shared_ptr<StaticMapElement>>* local_40 = (list<shared_ptr<StaticMapElement>>*)&field_208;
        local_40->clear();
        unsigned short uVar2 = packetJ.g2();
        if (uVar2 != 0) {
            uVar3 = (unsigned int)uVar2;
            do {
                local_34 = packetJ.gSmart2or4s();
                arg1 = packetJ.g4();
                local_68 = rs2lib::CoordGrid(arg1);
                cVar1 = packetJ.g1();
                if (arg2 || cVar1 != '\x01') {
                    local_48 = nullptr;
                    make_shared<StaticMapElement, CoordGrid const&, CoordGrid&, int&, decltype(nullptr)>(
                        &local_58, (CoordGrid*)&rs2lib::CoordGrid::CoordGridNull, &local_68, &local_34, &local_48);
                    local_40->push_back(local_58);
                }
                uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
        }
    }

} // namespace jag::oldscape::rs2lib::worldmap
