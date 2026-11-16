// libs/game/shared/utils/Conversion.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class Conversion {
    public:
        unsigned int Atan2InOldJagexAngles(int arg1, int arg2);
        int Sin(int arg1);
        int Cos(int arg1);
        unsigned int Atan2(int arg1, int arg2);
        void OldJagexAngleToRadians(int arg1);
        int RadiansToOldJagexAngle(float arg1);
        float JagexAngleToRadians(int arg1);
        int RadiansToJagexAngle(float arg1);

        uint8_t _unknown_0[1];
    };

    // 0x1000f9440
    unsigned int Conversion::Atan2InOldJagexAngles(int arg1, int arg2) {
        double dVar2 = (double)atan2<int, int>((int)this, arg1);
        return math::RoundFloatToInt(dVar2 * 325.9493f) & 2047;
    }

    // 0x100164770
    int Conversion::Sin(int arg1) {
        double dVar1 = (double)_sin((double)(arg1 & 16383) * 0.0003834951969714103);
        return (int)(dVar1 * 16384.0);
    }

    // 0x1001647a0
    int Conversion::Cos(int arg1) {
        double dVar1 = (double)_cos((double)(arg1 & 16383) * 0.0003834951969714103);
        return (int)(dVar1 * 16384.0);
    }

    // 0x1001647d0
    unsigned int Conversion::Atan2(int arg1, int arg2) {
        double dVar2 = (double)atan2<int, int>((int)this, arg1);
        return math::RoundFloatToInt(dVar2 * 2607.5945f) & 16383;
    }

    // 0x1002af5b0
    void Conversion::OldJagexAngleToRadians(int arg1) {
        JagexAngleToRadians(arg1 << 3);
    }

    // 0x1002d9b00
    float Conversion::JagexAngleToRadians(int arg1) {
        unsigned int uVar1 = arg1 + 16383;
        if (-1 < arg1) {
            uVar1 = arg1;
        }
        int iVar3 = arg1 % 16384;
        int iVar2 = (arg1 + 16384) - (uVar1 & 4294950912);
        if (iVar3 == 0) {
            iVar2 = iVar3;
        }
        if (-1 < arg1) {
            iVar2 = iVar3;
        }
        float fVar4 = (float)iVar2 * 0.0003834952f;
        if (8192 < iVar2) {
            fVar4 = fVar4 - 6.2831855f;
        }
        return fVar4;
    }

    // 0x1002d9b50
    int Conversion::RadiansToJagexAngle(float arg1) {
        float in_XMM1_Da;

        float fVar1 = (float)fmod(arg1, in_XMM1_Da);
        return (int)((float)(~-(unsigned int)(fVar1 < 0.0) & (unsigned int)fVar1 |
                             (unsigned int)(fVar1 + 6.2831855f) & -(unsigned int)(fVar1 < 0.0)) *
                     2607.5945);
    }

} // namespace jag::game

namespace jag::oldscape {
    // 0x1000facf0
    void OSRenderCore_LogicThread_Common::SetCameraPos(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
        new ((field_0 + 8)) Hitmark(arg1, arg2, arg3, arg4, arg5, arg6);
    }

} // namespace jag::oldscape
