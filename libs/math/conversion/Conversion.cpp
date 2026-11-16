// libs/math/conversion/Conversion.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.math

#include "Conversion.h"

namespace jag::math::conversion {
    // 0x100c62d40
    float JagexAngleToRadians(int arg1) {
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

    // 0x100c62d90
    void PrincipleAngle(double arg1) {
        for (; 3.141592653589793 < arg1; arg1 = arg1 - 6.283185307) {
        }
        for (; arg1 <= -3.141592653589793; arg1 = arg1 + 6.283185307) {
        }
    }

    // 0x100c62df0
    double CompassToRadians(int arg1) {
        double dVar1 = (double)PrincipleAngle((double)arg1 * 0.7853981633974483);
        return dVar1 + *(double*)(&DAT_100d99930 + (unsigned long)(0.0 < dVar1) * 8);
    }

    // 0x100c62e20
    double JagAtan2(double arg1, double arg2) {
        double dVar1 = 0.0;
        if (arg1 != 0.0 || arg2 != 0.0) {
            dVar1 = (double)_atan2(arg1);
            dVar1 = dVar1 + *(double*)(&DAT_100d99930 + (unsigned long)(0.0 < dVar1) * 8);
        }
        return dVar1;
    }

    // 0x100c62e70
    void JagAtan2(float arg1, float arg2) {
        uint64_t uVar2;

        float fVar1 = 0.0;
        uint32_t uVar3 = 0;
        if (arg1 != 0.0 || arg2 != 0.0) {
            uVar2 = atan2(arg1, arg2);
            uVar3 = (uint32_t)((unsigned long)uVar2 >> 32);
            fVar1 = (float)uVar2 + *(float*)(&DAT_100d999c8 + (unsigned long)(0.0 < (float)uVar2) * 4);
        }
        return (((uint64_t)uVar3 << 32) | (uint32_t)fVar1);
    }

    // 0x100c62ec0
    void PrincipleAngle(float arg1) {
        for (; 3.1415927f < arg1; arg1 = arg1 - 6.2831855f) {
        }
        for (; arg1 <= -3.1415927; arg1 = arg1 + 6.2831855f) {
        }
    }

} // namespace jag::math::conversion

// 0x100c62eb0
void atan2(float arg1, float arg2) {
    _atan2f();
}
