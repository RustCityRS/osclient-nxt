// libs/math/RotTransScale.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    // 0x1003e5490, 48 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MapSquareLocation::MapSquareLocation(signed char, signed char, signed char, int, LocData const&, bool, bool, bool)
    void MapSquareLocation::MapSquareLocation() {
        MapSquareLocation();
    }

    // 0x1003e54c0, 128 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MapSquareLocation::MapSquareLocation(signed char, signed char, signed char, int, LocData const&, bool, bool, bool)
    void MapSquareLocation::MapSquareLocation(undefined1 param_2, undefined1 param_3, undefined1 param_4,
                                              undefined4 param_5, LocData* param_6, undefined1 param_7,
                                              undefined1 param_8, undefined1 param_9) {
        new (this) MakeSharedPool<MapSquareLocation, 16384>();
        field_0 = param_5;
        field_4 = param_2;
        field_5 = param_3;
        field_6 = param_4;
        new (field_8, param_6) LocData();
        field_60 = param_7;
        field_61 = param_8;
        field_62 = 0;
        field_64 = 0;
        field_66 = param_9;
        field_67 = 6;
        new (&field_72, (_func_decltype_nullptr*)param_6)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

} // namespace jag::game

namespace jag::math {
    // 0x1003e5210, 560 bytes, inline, placed by class name and debug map
    // void RotTransScale::Deserialise<PacketT<Array<unsigned char, eastl::allocator> > >(PacketT<Array<unsigned char, eastl::allocator> >&)
    void RotTransScale::Deserialise<PacketT<Array<unsigned char, eastl::allocator>>>(PacketT* param_1) {
        byte bVar1;
        short sVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        ColourHSL local_50;
        float local_3c;
        float local_38;
        float local_34;

        bVar1 = param_1->g1();
        if ((bVar1 & 1) != 0) {
            sVar2 = param_1->g2s();
            local_34 = (float)(int)sVar2 * 3.0517578e-05;
            sVar2 = param_1->g2s();
            local_38 = (float)(int)sVar2 * 3.0517578e-05;
            sVar2 = param_1->g2s();
            local_3c = (float)(int)sVar2 * 3.0517578e-05;
            sVar2 = param_1->g2s();
            new (&local_50) QuaternionT<float>(local_34, local_38, local_3c, (float)(int)sVar2 * 3.0517578e-05);
            Rect<float>::operator=((Rect<float>*)this, (Rect*)&local_50);
        }
        fVar3 = 0.0;
        if ((bVar1 & 2) != 0) {
            sVar2 = param_1->g2s();
            fVar3 = (float)(int)sVar2;
        }
        fVar4 = 0.0;
        local_34 = fVar3;
        if ((bVar1 & 4) != 0) {
            sVar2 = param_1->g2s();
            fVar4 = (float)(int)sVar2;
        }
        fVar3 = 0.0;
        if ((bVar1 & 8) != 0) {
            local_38 = fVar4;
            sVar2 = param_1->g2s();
            fVar3 = (float)(int)sVar2;
            fVar4 = local_38;
        }
        new (&local_50) ColourHSL(local_34, fVar4, fVar3);
        (&field_16, (Vector3T*)&local_50)->SetXYZ();
        if ((bVar1 & 16) == 0) {
            fVar3 = 1.0;
            if ((bVar1 & 32) != 0) {
                sVar2 = param_1->g2s();
                fVar3 = (float)(int)sVar2 * 0.0078125;
            }
            fVar4 = 1.0;
            if ((bVar1 & 64) != 0) {
                local_34 = fVar3;
                sVar2 = param_1->g2s();
                fVar4 = (float)(int)sVar2 * 0.0078125;
                fVar3 = local_34;
            }
            fVar5 = 1.0;
            if ((char)bVar1 < '\0') {
                local_38 = fVar4;
                local_34 = fVar3;
                sVar2 = param_1->g2s();
                fVar3 = local_34;
                fVar4 = local_38;
                fVar5 = (float)(int)sVar2 * 0.0078125;
            }
        } else {
            sVar2 = param_1->g2s();
            fVar3 = (float)(int)sVar2 * 0.0078125;
            fVar4 = fVar3;
            fVar5 = fVar3;
        }
        new (&local_50) ColourHSL(fVar3, fVar4, fVar5);
        (&field_32, (Vector3T*)&local_50)->SetXYZ();
    }

} // namespace jag::math

namespace jag {
    // 0x1003e5440, 80 bytes, inline, placed by debug map only (low confidence)
    // game::MapSquareLocation* placement_new<game::MapSquareLocation, signed char&, unsigned char&, unsigned char&, int&, game::LocData&, bool, bool, bool>(void*, signed char&, unsigned char&, unsigned char&, int&, game::LocData&, bool&&, bool&&, bool&&)
    /* game::MapSquareLocation* placement_new<game::MapSquareLocation, signed char&,
   unsigned char&, unsigned char&, int&, game::LocData, bool, bool, bool>(void*, signed char&,
   unsigned char&, unsigned char&, int&, game::LocData&&, bool&&, bool&&, bool&&) */

    MapSquareLocation* jag::placement_new<game::MapSquareLocation, signed char&, unsigned char&, unsigned char&, int&,
                                          game::LocData, bool, bool, bool>(void* param_1, signed* param_2,
                                                                           uchar* param_3, uchar* param_4, int* param_5,
                                                                           LocData* param_6, bool* param_7,
                                                                           bool* param_8, bool* param_9) {
        game::MapSquareLocation::MapSquareLocation(param_1, (int)(char)*param_2, (int)(char)*param_3,
                                                   (int)(char)*param_4, *param_5, param_6, *param_7, *param_8,
                                                   *param_9);
        return param_1;
    }

} // namespace jag
