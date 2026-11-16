// libs/oldscape/rs2lib/worldmap/HslUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::rs2lib::worldmap {
    class HslUtils {
    public:
        int GetRgb(double, double, double);
    };

    // 0x10020b7d0, 560 bytes, inline, placed by class name and debug map
    // HslUtils::GetRgb(double, double, double)
    int HslUtils::GetRgb(double param_1, double param_2, double param_3) {
        double dVar1;
        ulong uVar2;
        double dVar3;
        double dVar4;
        double dVar5;
        double dVar6;

        if (param_2 == 0.0) {
            dVar4 = param_3;
            dVar5 = param_3;
        } else {
            if (0.5 <= param_3) {
                dVar3 = (param_3 + param_2) - param_2 * param_3;
            } else {
                dVar3 = (param_2 + 1.0) * param_3;
            }
            param_3 = (param_3 + param_3) - dVar3;
            uVar2 = -(ulong)(1.0 < param_1 + 0.3333333333333333);
            dVar5 = (double)(~uVar2 & (ulong)(param_1 + 0.3333333333333333) |
                             (ulong)(param_1 + -0.6666666666666667) & uVar2);
            uVar2 = -(ulong)(param_1 + -0.3333333333333333 < 0.0);
            dVar1 = (double)(~uVar2 & (ulong)(param_1 + -0.3333333333333333) |
                             (ulong)(param_1 + 0.6666666666666667) & uVar2);
            dVar6 = dVar5 * 6.0;
            if (1.0 <= dVar6) {
                dVar4 = dVar3;
                if ((1.0 <= dVar5 + dVar5) && (dVar4 = param_3, dVar5 * 3.0 < 2.0)) {
                    dVar4 = (4.0 - dVar6) * (dVar3 - param_3) + param_3;
                }
            } else {
                dVar4 = dVar6 * (dVar3 - param_3) + param_3;
            }
            dVar6 = param_1 * 6.0;
            if (1.0 <= dVar6) {
                dVar5 = dVar3;
                if ((1.0 <= param_1 + param_1) && (dVar5 = param_3, param_1 * 3.0 < 2.0)) {
                    dVar5 = (4.0 - dVar6) * (dVar3 - param_3) + param_3;
                }
            } else {
                dVar5 = dVar6 * (dVar3 - param_3) + param_3;
            }
            dVar6 = dVar1 * 6.0;
            if (1.0 <= dVar6) {
                if (1.0 <= dVar1 + dVar1) {
                    if (dVar1 * 3.0 < 2.0) {
                        param_3 = param_3 + (4.0 - dVar6) * (dVar3 - param_3);
                    }
                } else {
                    param_3 = dVar3;
                }
            } else {
                param_3 = param_3 + dVar6 * (dVar3 - param_3);
            }
        }
        return (int)(dVar5 * 256.0) * 256 + (int)(param_3 * 256.0) + (int)(dVar4 * 256.0) * 65536;
    }

} // namespace jag::oldscape::rs2lib::worldmap
