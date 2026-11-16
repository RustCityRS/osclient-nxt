// libs/oldscape/jagex3/math/GaussianFunctions.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::math {
    class GaussianFunctions {
    public:
        GaussianFunctions* GenerateKernel(double, double, int);
        double PDF(double, double, double);
        double PDF(double);

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[8];
        ulong field_8; // offset 8
        long field_16; // offset 16
    };

    // 0x10000c8b0, 160 bytes, inline, placed by class name and debug map
    // GaussianFunctions::GenerateKernel(double, double, int)
    GaussianFunctions* GaussianFunctions::GenerateKernel(double param_1, double param_2, int param_3) {
        undefined8* puVar1;
        uint uVar2;
        ulong uVar3;
        undefined8 uVar4;

        uVar2 = param_3 * 2 + 1;
        new (this) Array<double, eastl::allocator>((long)(int)uVar2);
        if (-1 < param_3) {
            uVar3 = 0;
            do {
                uVar4 = PDF((double)((int)uVar3 - param_3), param_1, param_2);
                puVar1 = (undefined8*)Array<double, eastl::allocator>::operator[](
                    (Array<double, eastl::allocator>*)this, uVar3);
                *puVar1 = uVar4;
                uVar3 = uVar3 + 1;
            } while (uVar2 != uVar3);
        }
        return this;
    }

    // 0x10002a0c0, 64 bytes, inline, placed by class name
    // GaussianFunctions::PDF(double, double, double)
    double GaussianFunctions::PDF(double param_1, double param_2, double param_3) {
        return (double)PDF((param_1 - param_2) * (1.0 / param_3)) * (1.0 / param_3);
    }

    // 0x10002a360, 32 bytes, inline, placed by class name
    // GaussianFunctions::PDF(double)
    double GaussianFunctions::PDF(double param_1) {
        return (double)_exp(param_1 * param_1 * -0.5) * 0.39894228040148305;
    }

} // namespace jag::oldscape::math
