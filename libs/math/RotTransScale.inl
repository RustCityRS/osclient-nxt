// libs/math/RotTransScale.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::math {
    // 0x1003e5210
    void RotTransScale::Deserialise<PacketT<Array<unsigned char>>>(PacketT<Array<unsigned char>>& arg1) {
        short sVar2;
        float arg3;
        float local_3c;
        float local_38;
        float local_34;

        uint8_t bVar1 = arg1.g1();
        if ((bVar1 & 1) != 0) {
            sVar2 = arg1.g2s();
            local_34 = (float)(int)sVar2 * 3.0517578e-05;
            sVar2 = arg1.g2s();
            local_38 = (float)(int)sVar2 * 3.0517578e-05;
            sVar2 = arg1.g2s();
            local_3c = (float)(int)sVar2 * 3.0517578e-05;
            sVar2 = arg1.g2s();
            local_50 = QuaternionT<float>(local_34, local_38, local_3c, (float)(int)sVar2 * 3.0517578e-05);
            *this = local_50;
        }
        float fVar3 = 0.0;
        if ((bVar1 & 2) != 0) {
            sVar2 = arg1.g2s();
            fVar3 = (float)(int)sVar2;
        }
        float fVar4 = 0.0;
        local_34 = fVar3;
        if ((bVar1 & 4) != 0) {
            sVar2 = arg1.g2s();
            fVar4 = (float)(int)sVar2;
        }
        fVar3 = 0.0;
        if ((bVar1 & 8) != 0) {
            local_38 = fVar4;
            sVar2 = arg1.g2s();
            fVar3 = (float)(int)sVar2;
            fVar4 = local_38;
        }
        ColourHSL local_50(local_34, fVar4, fVar3);
        field_16.SetXYZ(local_50);
        if ((bVar1 & 16) == 0) {
            fVar3 = 1.0;
            if ((bVar1 & 32) != 0) {
                sVar2 = arg1.g2s();
                fVar3 = (float)(int)sVar2 * 0.0078125f;
            }
            fVar4 = 1.0;
            if ((bVar1 & 64) != 0) {
                local_34 = fVar3;
                sVar2 = arg1.g2s();
                fVar4 = (float)(int)sVar2 * 0.0078125f;
                fVar3 = local_34;
            }
            arg3 = 1.0;
            if ((char)bVar1 < '\0') {
                local_38 = fVar4;
                local_34 = fVar3;
                sVar2 = arg1.g2s();
                fVar3 = local_34;
                fVar4 = local_38;
                arg3 = (float)(int)sVar2 * 0.0078125f;
            }
        } else {
            sVar2 = arg1.g2s();
            fVar3 = (float)(int)sVar2 * 0.0078125f;
            fVar4 = fVar3;
            arg3 = fVar3;
        }
        local_50 = ColourHSL(fVar3, fVar4, arg3);
        field_32.SetXYZ(local_50);
    }

} // namespace jag::math

namespace jag {
    // 0x1003e5440
    game::MapSquareLocation* placement_new<game::MapSquareLocation, signed char&, unsigned char&, unsigned char&, int&,
                                           game::LocData&, bool, bool, bool>(void* arg1, signed char& arg2,
                                                                             unsigned char& arg3, unsigned char& arg4,
                                                                             int& arg5, game::LocData& locData,
                                                                             bool&& arg7, bool&& arg8, bool&& arg9) {
        new (arg1) game::MapSquareLocation(arg2, arg3, arg4, arg5, locData, arg7, arg8, arg9);
        return arg1;
    }

} // namespace jag

namespace jag::game {
    // 0x1003e54c0
    MapSquareLocation::MapSquareLocation(signed char arg1, signed char arg2, signed char arg3, int arg4,
                                         const LocData& locData, bool arg6, bool arg7, bool arg8)
        : MakeSharedPool<MapSquareLocation, 16384>(), field_0(arg4), field_4(arg1), field_5(arg2), field_6(arg3),
          field_8(locData), field_60(arg6), field_61(arg7) {
        field_62 = '\0';
        field_64 = 0;
        field_66 = arg8;
        field_67 = 6;
        new (&field_72) shared_ptr();
    }

} // namespace jag::game
