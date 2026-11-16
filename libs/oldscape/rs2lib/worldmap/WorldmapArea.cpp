// libs/oldscape/rs2lib/worldmap/WorldmapArea.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "WorldmapArea.h"

namespace jag::oldscape::rs2lib::worldmap {
    // 0x100214e10, 480 bytes, placed by class name and debug map
    // WorldmapArea::Unpack(PacketJ<Array<unsigned char, eastl::allocator> >&, PacketJ<Array<unsigned char, eastl::allocator> >&, int, bool, ErrorCapture&)
    void WorldmapArea::Unpack(PacketJ* param_1, PacketJ* param_2, int param_3, bool param_4, ErrorCapture* param_5) {
        undefined1* this_00;
        char cVar1;
        ushort uVar2;
        MapSquareData* this_01;
        MapZoneData* this_02;
        undefined3 in_register_00000081;
        uint uVar3;
        ErrorCapture local_3a0[17];
        shared_ptr local_50;
        WorldmapArea* local_40;
        undefined4 local_34;

        WorldmapAreaMetadata::Unpack((PacketJ*)this, (int)param_1, (ErrorCapture*)(ulong)(uint)param_3);
        cVar1 = param_5->IsRaised();
        if (cVar1 == '\0') {
            local_34 = CONCAT31(in_register_00000081, param_4);
            uVar2 = param_2->g2();
            local_40 = this;
            (&field_144)->clear();
            if (uVar2 != 0) {
                uVar3 = (uint)uVar2;
                do {
                    make_shared<MapSquareData>((jag*)&local_50);
                    ErrorCapture::ErrorCapture(local_3a0, true);
                    this_01 =
                        (MapSquareData*)shared_ptr<MapSquareData>::operator->((shared_ptr<MapSquareData>*)&local_50);
                    this_01->DeserialiseCompositeMetaData(param_2, local_3a0);
                    cVar1 = local_3a0->IsRaised();
                    if (cVar1 == '\0') {
                        (&field_144, &local_50)->push_back();
                    }
                    local_3a0->~LanguageMessage();
                    local_50.~shared_ptr();
                    uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
            }
            uVar2 = param_2->g2();
            this_00 = &local_40->field_176;
            this_00->clear();
            if (uVar2 != 0) {
                uVar3 = (uint)uVar2;
                do {
                    make_shared<MapZoneData>((jag*)&local_50);
                    ErrorCapture::ErrorCapture(local_3a0, true);
                    this_02 = (MapZoneData*)shared_ptr<MapZoneData>::operator->((shared_ptr<MapZoneData>*)&local_50);
                    this_02->DeserialiseCompositeMetaData(param_2, local_3a0);
                    cVar1 = local_3a0->IsRaised();
                    if (cVar1 == '\0') {
                        this_00->push_back(&local_50);
                    }
                    local_3a0->~LanguageMessage();
                    local_50.~shared_ptr();
                    uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
            }
            UnpackStaticMapElements(local_40, param_2, local_34._0_1_);
        }
    }

    // 0x1002152a0, 224 bytes, placed by class name
    // WorldmapArea::UnpackStaticMapElements(PacketJ<Array<unsigned char, eastl::allocator> >&, bool)
    void WorldmapArea::UnpackStaticMapElements(PacketJ* param_1, bool param_2) {
        char cVar1;
        ushort uVar2;
        int iVar3;
        uint uVar4;
        CoordGrid local_68;
        shared_ptr local_58;
        _func_decltype_nullptr* local_48;
        list<shared_ptr<StaticMapElement>, eastl::allocator>* local_40;
        int local_34;

        local_40 = (list<shared_ptr<StaticMapElement>, eastl::allocator>*)&field_208;
        local_40->clear();
        uVar2 = param_1->g2();
        if (uVar2 != 0) {
            uVar4 = (uint)uVar2;
            do {
                local_34 = param_1->gSmart2or4s();
                iVar3 = param_1->g4();
                new (&local_68) rs2lib::CoordGrid(iVar3);
                cVar1 = param_1->g1();
                if (param_2 || cVar1 != '\x01') {
                    local_48 = (_func_decltype_nullptr*)0;
                    make_shared<StaticMapElement, CoordGrid_const&, CoordGrid&, int&, decltype(nullptr)>(
                        (jag*)&local_58, (CoordGrid*)&rs2lib::CoordGrid::CoordGridNull, &local_68, &local_34,
                        &local_48);
                    eastl::list<shared_ptr<StaticMapElement>, eastl::allocator>::push_back(local_40, &local_58);
                    local_58.~shared_ptr();
                }
                uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
        }
    }

} // namespace jag::oldscape::rs2lib::worldmap
