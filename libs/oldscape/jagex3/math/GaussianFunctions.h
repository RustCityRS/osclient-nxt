// libs/oldscape/jagex3/math/GaussianFunctions.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::math {
    class GaussianFunctions {
    public:
        GaussianFunctions* GenerateKernel(double arg1, double arg2, int arg3);
        double PDF(double arg1, double arg2, double arg3);
        double PDF(double arg1);

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        long field_16;
    };

    // 0x10000c8b0
    GaussianFunctions* GaussianFunctions::GenerateKernel(double arg1, double arg2, int arg3) {
        uint64_t* puVar1;
        unsigned long arg1_00;
        uint64_t uVar3;

        unsigned int uVar2 = arg3 * 2 + 1;
        new (this) Array<double>((long)(int)uVar2);
        if (-1 < arg3) {
            arg1_00 = 0;
            do {
                uVar3 = PDF((double)((int)arg1_00 - arg3), arg1, arg2);
                puVar1 = (uint64_t*)(*this)[arg1_00];
                *puVar1 = uVar3;
                arg1_00 = arg1_00 + 1;
            } while (uVar2 != arg1_00);
        }
        return this;
    }

    // 0x10002a0c0
    double GaussianFunctions::PDF(double arg1, double arg2, double arg3) {
        return (double)PDF((arg1 - arg2) * (1.0 / arg3)) * (1.0 / arg3);
    }

    // 0x10002a360
    double GaussianFunctions::PDF(double arg1) {
        return (double)_exp(arg1 * arg1 * -0.5) * 0.39894228040148305;
    }

} // namespace jag::oldscape::math
