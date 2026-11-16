// libs/game/shared/utils/Conversion.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class Conversion {
    public:
        uint Atan2InOldJagexAngles(int, int);
        int Sin(int);
        int Cos(int);
        uint Atan2(int, int);
        void OldJagexAngleToRadians(int);
        int RadiansToOldJagexAngle(float);
        float JagexAngleToRadians(int);
        int RadiansToJagexAngle(float);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1000f9440, 32 bytes, inline, placed by class name and debug map
    // Conversion::Atan2InOldJagexAngles(int, int)
    uint Conversion::Atan2InOldJagexAngles(int param_1, int param_2) {
        double dVar2;

        dVar2 = (double)atan2<int, int>(param_1, param_2);
        return math::RoundFloatToInt(dVar2 * 325.9493103027344) & 2047;
    }

    // 0x100164770, 48 bytes, inline, placed by class name
    // Conversion::Sin(int)
    int Conversion::Sin(int param_1) {
        double dVar1;

        dVar1 = (double)_sin((double)(param_1 & 16383) * 0.0003834951969714103);
        return (int)(dVar1 * 16384.0);
    }

    // 0x1001647a0, 48 bytes, inline, placed by class name
    // Conversion::Cos(int)
    int Conversion::Cos(int param_1) {
        double dVar1;

        dVar1 = (double)_cos((double)(param_1 & 16383) * 0.0003834951969714103);
        return (int)(dVar1 * 16384.0);
    }

    // 0x1001647d0, 32 bytes, inline, placed by class name
    // Conversion::Atan2(int, int)
    uint Conversion::Atan2(int param_1, int param_2) {
        double dVar2;

        dVar2 = (double)atan2<int, int>(param_1, param_2);
        return math::RoundFloatToInt(dVar2 * 2607.594482421875) & 16383;
    }

    // 0x1002af5b0, 16 bytes, inline, placed by class name
    // Conversion::OldJagexAngleToRadians(int)
    void Conversion::OldJagexAngleToRadians(int param_1) {
        JagexAngleToRadians(param_1 << 3);
    }

    // 0x1002d9b00, 80 bytes, inline, placed by class name
    // Conversion::JagexAngleToRadians(int)
    float Conversion::JagexAngleToRadians(int param_1) {
        uint uVar1;
        int iVar2;
        int iVar3;
        float fVar4;

        uVar1 = param_1 + 16383;
        if (-1 < param_1) {
            uVar1 = param_1;
        }
        iVar3 = param_1 % 16384;
        iVar2 = (param_1 + 16384) - (uVar1 & 4294950912);
        if (iVar3 == 0) {
            iVar2 = iVar3;
        }
        if (-1 < param_1) {
            iVar2 = iVar3;
        }
        fVar4 = (float)iVar2 * 0.0003834952;
        if (8192 < iVar2) {
            fVar4 = fVar4 + -6.2831855;
        }
        return fVar4;
    }

    // 0x1002d9b50, 64 bytes, inline, placed by class name
    // Conversion::RadiansToJagexAngle(float)
    int Conversion::RadiansToJagexAngle(float param_1) {
        float fVar1;
        float in_XMM1_Da;

        fVar1 = (float)fmod(param_1, in_XMM1_Da);
        return (int)((float)(~-(uint)(fVar1 < 0.0) & (uint)fVar1 | (uint)(fVar1 + 6.2831855) & -(uint)(fVar1 < 0.0)) *
                     2607.5945);
    }

} // namespace jag::game

namespace jag::oldscape {
    // 0x1000facf0, 32 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_Common::SetCameraPos(int, int, int, int, int, int)
    void OSRenderCore_LogicThread_Common::SetCameraPos(int param_1, int param_2, int param_3, int param_4, int param_5,
                                                       int param_6) {
        new ((field_0 + 8), param_1, param_2, param_3, param_4, param_5, param_6) Hitmark();
    }

} // namespace jag::oldscape
