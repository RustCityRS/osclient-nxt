// projects/osclient/camera/tweens/CinemaCameraTween.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "CinemaCameraTween.h"

namespace jag::oldscape {
    // 0x1000f7f10
    void CinemaCameraTween::AdvanceCycle() {
        int arg1;

        if (field_12 < field_8) {
            arg1 = field_12 + 1;
            field_12 = arg1;
            m_alpha = CalculateEasedAlpha(arg1, field_8, field_24);
        }
    }

    // 0x100124240
    uint64_t CinemaCameraTween::GetAlpha() const {
        return m_alpha;
    }

    // 0x1001242e0
    CinemaCameraTween::CinemaCameraTween(int arg1, CinemaCameraTween::Easing easing)
        : field_8(0), field_12(0), m_alpha(0), field_24(0), field_8(arg1), field_12(0) {
        Logger* this_00;

        Easing easing_00 = easing;
        if (27 < easing) {
            this_00 = logger::default_logger();
            easing_00 = 0;
            this_00->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/camera/tweens/"
                "CinemaCameraTween.cpp",
                19,
                "Error: CinemaCameraTween - Invalid easing mode provided, reverting to linear. Supplied easing: %d.",
                easing);
        }
        field_24 = easing_00;
        m_alpha = CalculateEasedAlpha(field_12, field_8, easing_00);
    }

    // 0x1001243c0
    double CinemaCameraTween::CalculateEasedAlpha(int arg1, int arg2, CinemaCameraTween::Easing easing) {
        double* pdVar1;
        int iVar2;
        double dVar3;
        uint32_t uVar4;
        uint32_t uVar5;
        double local_40;
        double local_30;
        double local_28;
        uint64_t uStack_20;

        if (arg2 < 1) {
            uVar4 = 0;
            uVar5 = 1072693248;
        } else {
            local_40 = 0.0;
            local_30 = (double)arg1 / (double)arg2;
            pdVar1 = std::min<double>(1.0, local_30);
            pdVar1 = std::max<double>(local_40, *pdVar1);
            arg1 = (int)&local_40;
            uVar4 = (uint32_t)(*pdVar1);
            uVar5 = (uint32_t)((unsigned long)*pdVar1 >> 32);
        }
        return local_18 = (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4);
        if (((double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) < 0.0 ||
             (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) == 0.0) ||
            (1.0 <= (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4))) {
            return (double)((unsigned long)(~(unsigned int)(-(unsigned long)((double)(((uint64_t)uVar5 << 32) |
                                                                                      (uint32_t)uVar4) <= 0.0) >>
                                                            32) &
                                            1072693248)
                            << 32);
        }
        switch (easing) {
        case 1:
            local_18 = (double)_cos((double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) * 1.5707963267948966);
            goto LAB_1001245f5;
        case 2:
            local_18 = (double)_sin((double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) * 1.5707963267948966);
            break;
        case 3:
            dVar3 = (double)_cos((double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) * 3.141592653589793);
            goto LAB_1001246cd;
        case 4:
            local_18 = (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) *
                       (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4);
            break;
        case 5:
            dVar3 = 1.0 - (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4);
            local_18 = 1.0 - dVar3 * dVar3;
            break;
        case 6:
            if ((double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) < 0.5) {
                dVar3 = (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) *
                        (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4);
                return dVar3 + dVar3;
            }
            dVar3 = 2.0 - ((double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) +
                           (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4));
            iVar2 = 2;
            goto LAB_1001248e8;
        case 7:
            local_18 = (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) *
                       (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) *
                       (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4);
            break;
        case 8:
            dVar3 = 1.0 - (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4);
            iVar2 = 3;
            goto LAB_100124590;
        case 9:
            if ((double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) < 0.5) {
                return (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) *
                       (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) *
                       (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) * 4.0;
            }
            dVar3 = 2.0 - ((double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) +
                           (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4));
            iVar2 = 3;
            goto LAB_1001248e8;
        case 10:
            local_18 = (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) *
                       (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4);
            local_18 = local_18 * local_18;
            break;
        case 11:
            dVar3 = 1.0 - (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4);
            iVar2 = 4;
            goto LAB_100124590;
        case 12:
            if ((double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) < 0.5) {
                dVar3 = (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) *
                        (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4);
                return dVar3 * dVar3 * 8.0;
            }
            dVar3 = 2.0 - ((double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) +
                           (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4));
            iVar2 = 4;
            goto LAB_1001248e8;
        case 13:
            dVar3 = (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) *
                    (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4);
        LAB_1001245b5:
            local_18 = local_18 * dVar3 * dVar3;
            break;
        case 14:
            dVar3 = 1.0 - (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4);
            iVar2 = 5;
        LAB_100124590:
            local_18 = (double)pow<double, int>(dVar3, iVar2);
        LAB_1001245f5:
            local_18 = 1.0 - local_18;
            break;
        case 15:
            if ((double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) < 0.5) {
                dVar3 = (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) *
                        (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4);
                local_18 = (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) * 8.0;
                goto LAB_1001245b5;
            }
            dVar3 = 2.0 - ((double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) +
                           (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4));
            iVar2 = 5;
        LAB_1001248e8:
            local_18 = (double)pow<double, int>(dVar3, iVar2);
        LAB_100124900:
            local_18 = local_18 * -0.5;
        LAB_10012499f:
            local_18 = local_18 + 1.0;
            break;
        case 16:
            local_18 =
                (double)pow<int, double>(arg1, (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) * 10.0 - 10.0);
            break;
        case 17:
            local_18 = (double)pow<int, double>(arg1, (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) * -10.0);
            goto LAB_1001245f5;
        case 18:
            dVar3 = (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) * 20.0;
            if ((double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) < 0.5) {
                dVar3 = (double)pow<int, double>(arg1, dVar3 + 10.0);
                return dVar3 * 0.5;
            }
            local_18 = (double)pow<int, double>(arg1, 10.0 - dVar3);
            goto LAB_100124900;
        case 19:
            dVar3 = (double)pow<double, int>((double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4), 2);
            local_18 = 1.0 - SQRT(1.0 - dVar3);
            break;
        case 20:
            dVar3 = (double)pow<double, int>((double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) - 1.0, 2);
            local_18 = SQRT(1.0 - dVar3);
            break;
        case 21:
            dVar3 = (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) +
                    (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4);
            if (0.5 <= (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4)) {
                dVar3 = (double)pow<double, int>(2.0 - dVar3, 2);
                return SQRT(1.0 - dVar3) * 0.5 + 0.5;
            }
            dVar3 = (double)pow<double, int>(dVar3, 2);
            dVar3 = SQRT(1.0 - dVar3);
        LAB_1001246cd:
            local_18 = 0.5 - dVar3 * 0.5;
            break;
        case 22:
            local_18 = ((double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) * 2.70158 - 1.70158) *
                       (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) *
                       (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4);
            break;
        case 23:
            local_28 = (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) - 1.0;
            uStack_20 = 0;
            dVar3 = (double)pow<double, int>(local_28, 3);
            local_18 = dVar3 * 2.70158 + 1.0;
            dVar3 = (double)pow<double, int>(local_28, 2);
            local_18 = dVar3 * 1.70158 + local_18;
            break;
        case 24:
            dVar3 = (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) +
                    (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4);
            if ((double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) < 0.5) {
                local_28 = (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4);
                uStack_20 = 0;
                dVar3 = (double)pow<double, int>(dVar3, 2);
                return (local_28 * 3.5949095 - 1.29745475) * dVar3;
            }
            local_28 = dVar3 - 2.0;
            dVar3 = (double)pow<double, int>(local_28, 2);
            local_18 = local_28 * 1.79745475 + 1.29745475;
            goto LAB_10012499b;
        case 25:
            local_28 = (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4);
            uStack_20 = 0;
            local_18 =
                (double)pow<int, double>(arg1, (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) * 10.0 - 10.0);
            dVar3 = (double)_sin(local_28 * -20.94395102393195 + 22.51474735072685);
            local_18 = dVar3 * local_18;
            break;
        case 26:
            local_28 = (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4);
            uStack_20 = 0;
            local_18 = (double)pow<int, double>(arg1, (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) * -10.0);
            dVar3 = (double)_sin(local_28 * 20.94395102393195 - 1.5707963267948966);
            local_18 = dVar3 * local_18;
            goto LAB_10012499f;
        case 27:
            local_28 = (double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4);
            uStack_20 = 0;
            local_18 = (double)_sin((double)(((uint64_t)uVar5 << 32) | (uint32_t)uVar4) * 27.925268031909273 -
                                    15.533430342749533);
            if (local_28 < 0.5) {
                dVar3 = (double)pow<int, double>(arg1, local_28 * 20.0 - 10.0);
                return local_18 * -0.5 * dVar3;
            }
            dVar3 = (double)pow<int, double>(arg1, 10.0 - local_28 * 20.0);
            local_18 = local_18 * 0.5;
        LAB_10012499b:
            local_18 = local_18 * dVar3;
            goto LAB_10012499f;
        }
        return local_18;
    }

    // 0x100124a30
    CinemaCameraTween::~CinemaCameraTween() {}

} // namespace jag::oldscape
