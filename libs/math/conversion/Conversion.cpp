// libs/math/conversion/Conversion.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.math

#include "Conversion.h"

namespace jag::math::conversion {
    // 0x100c62d40, 80 bytes, placed by class name and debug map
    // JagexAngleToRadians(int)
    float JagexAngleToRadians(int param_1) {
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

    // 0x100c62d90, 96 bytes, placed by class name and debug map
    // PrincipleAngle(double)
    void PrincipleAngle(double param_1) {
        for (; 3.141592653589793 < param_1; param_1 = param_1 + -6.283185307) {
        }
        for (; param_1 <= -3.141592653589793; param_1 = param_1 + 6.283185307) {
        }
    }

    // 0x100c62df0, 48 bytes, placed by class name and debug map
    // CompassToRadians(int)
    double CompassToRadians(int param_1) {
        double dVar1;

        dVar1 = (double)PrincipleAngle((double)param_1 * 0.7853981633974483);
        return dVar1 + *(double*)(&DAT_100d99930 + (ulong)(0.0 < dVar1) * 8);
    }

    // 0x100c62e20, 80 bytes, placed by class name and debug map
    // JagAtan2(double, double)
    double JagAtan2(double param_1, double param_2) {
        double dVar1;

        dVar1 = 0.0;
        if (param_1 != 0.0 || param_2 != 0.0) {
            dVar1 = (double)_atan2(param_1);
            dVar1 = dVar1 + *(double*)(&DAT_100d99930 + (ulong)(0.0 < dVar1) * 8);
        }
        return dVar1;
    }

    // 0x100c62e70, 64 bytes, placed by class name and debug map
    // JagAtan2(float, float)
    undefined8 JagAtan2(float param_1, float param_2) {
        float fVar1;
        undefined4 uVar3;
        undefined8 uVar2;

        fVar1 = 0.0;
        uVar3 = 0;
        if (param_1 != 0.0 || param_2 != 0.0) {
            uVar2 = atan2(param_1, param_2);
            uVar3 = (undefined4)((ulong)uVar2 >> 32);
            fVar1 = (float)uVar2 + *(float*)(&DAT_100d999c8 + (ulong)(0.0 < (float)uVar2) * 4);
        }
        return CONCAT44(uVar3, fVar1);
    }

    // 0x100c62ec0, 96 bytes, placed by class name and debug map
    // PrincipleAngle(float)
    void PrincipleAngle(float param_1) {
        for (; 3.1415927 < param_1; param_1 = param_1 + -6.2831855) {
        }
        for (; param_1 <= -3.1415927; param_1 = param_1 + 6.2831855) {
        }
    }

} // namespace jag::math::conversion

// 0x100c62eb0, 16 bytes, placed by neighbouring functions
// atan2(float, float)
void atan2(float param_1, float param_2) {
    _atan2f();
}
