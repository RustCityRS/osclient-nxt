// libs/oldscape/rs2lib/worldmap/HslUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::rs2lib::worldmap {
    class HslUtils {
    public:
        int GetRgb(double arg1, double arg2, double arg3);

        uint8_t _unknown_0[1];
    };

    // 0x10020b7d0
    int HslUtils::GetRgb(double arg1, double arg2, double arg3) {
        double dVar1;
        unsigned long uVar2;
        double dVar3;
        double dVar4;
        double dVar5;
        double dVar6;

        if (arg2 == 0.0) {
            dVar4 = arg3;
            dVar5 = arg3;
        } else {
            if (0.5 <= arg3) {
                dVar3 = (arg3 + arg2) - arg2 * arg3;
            } else {
                dVar3 = (arg2 + 1.0) * arg3;
            }
            arg3 = (arg3 + arg3) - dVar3;
            uVar2 = -(unsigned long)(1.0 < arg1 + 0.3333333333333333);
            dVar5 = (double)(~uVar2 & (unsigned long)(arg1 + 0.3333333333333333) |
                             (unsigned long)(arg1 - 0.6666666666666667) & uVar2);
            uVar2 = -(unsigned long)(arg1 - 0.3333333333333333 < 0.0);
            dVar1 = (double)(~uVar2 & (unsigned long)(arg1 - 0.3333333333333333) |
                             (unsigned long)(arg1 + 0.6666666666666667) & uVar2);
            dVar6 = dVar5 * 6.0;
            if (1.0 <= dVar6) {
                dVar4 = dVar3;
                if ((1.0 <= dVar5 + dVar5) && (dVar4 = arg3, dVar5 * 3.0 < 2.0)) {
                    dVar4 = (4.0 - dVar6) * (dVar3 - arg3) + arg3;
                }
            } else {
                dVar4 = dVar6 * (dVar3 - arg3) + arg3;
            }
            dVar6 = arg1 * 6.0;
            if (1.0 <= dVar6) {
                dVar5 = dVar3;
                if ((1.0 <= arg1 + arg1) && (dVar5 = arg3, arg1 * 3.0 < 2.0)) {
                    dVar5 = (4.0 - dVar6) * (dVar3 - arg3) + arg3;
                }
            } else {
                dVar5 = dVar6 * (dVar3 - arg3) + arg3;
            }
            dVar6 = dVar1 * 6.0;
            if (1.0 <= dVar6) {
                if (1.0 <= dVar1 + dVar1) {
                    if (dVar1 * 3.0 < 2.0) {
                        arg3 = arg3 + (4.0 - dVar6) * (dVar3 - arg3);
                    }
                } else {
                    arg3 = dVar3;
                }
            } else {
                arg3 = arg3 + dVar6 * (dVar3 - arg3);
            }
        }
        return (int)(dVar5 * 256.0) * 256 + (int)(arg3 * 256.0) + (int)(dVar4 * 256.0) * 65536;
    }

} // namespace jag::oldscape::rs2lib::worldmap
