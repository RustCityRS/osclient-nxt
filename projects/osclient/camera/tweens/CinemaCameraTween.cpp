// projects/osclient/camera/tweens/CinemaCameraTween.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "CinemaCameraTween.h"

namespace jag::oldscape {
    // 0x1000f7f10, 48 bytes, placed by class name and debug map
    // CinemaCameraTween::AdvanceCycle()
    void CinemaCameraTween::AdvanceCycle() {
        int iVar1;

        if (field_12 < (int)field_8) {
            iVar1 = field_12 + 1;
            field_12 = iVar1;
            m_alpha = CalculateEasedAlpha(iVar1, field_8, field_24);
        }
    }

    // 0x100124240, 16 bytes, placed by class name
    // CinemaCameraTween::GetAlpha() const
    undefined8 CinemaCameraTween::GetAlpha() {
        return m_alpha;
    }

    // 0x1001242e0, 144 bytes, base-object constructor, placed by class name
    // CinemaCameraTween::CinemaCameraTween(int, CinemaCameraTween::Easing)
    void CinemaCameraTween::CinemaCameraTween(undefined4 param_1, uint param_3) {
        undefined8 uVar1;
        uint uVar2;

        field_0 = &PTR__CinemaCameraTween_100ef4158;
        field_8 = 0;
        field_12 = 0;
        m_alpha = 0;
        field_24 = 0;
        field_8 = param_1;
        field_12 = 0;
        uVar2 = param_3;
        if (27 < param_3) {
            uVar1 = logger::default_logger();
            uVar2 = 0;
            logger::Logger::Log(
                uVar1, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/camera/tweens/"
                "CinemaCameraTween.cpp",
                19,
                "Error: CinemaCameraTween - Invalid easing mode provided, reverting to linear. Supplied easing: %d.",
                param_3);
        }
        field_24 = uVar2;
        uVar1 = CalculateEasedAlpha(field_12, field_8, uVar2);
        m_alpha = uVar1;
    }

    // 0x1001243c0, 1632 bytes, placed by class name
    // CinemaCameraTween::CalculateEasedAlpha(int, int, CinemaCameraTween::Easing)
    double CinemaCameraTween::CalculateEasedAlpha(int param_1, int param_2, undefined4 param_3) {
        double* pdVar1;
        int iVar2;
        double dVar4;
        undefined4 uVar5;
        undefined4 uVar6;
        double local_40;
        double local_38;
        double local_30;
        double local_28;
        undefined8 uStack_20;
        double local_18;

        if (param_2 < 1) {
            uVar5 = 0;
            uVar6 = 1072693248;
        } else {
            local_40 = 0.0;
            local_38 = 1.0;
            local_30 = (double)param_1 / (double)param_2;
            pdVar1 = std::min<double>(&local_38, &local_30);
            pdVar1 = std::max<double>(&local_40, pdVar1);
            param_1 = (int)&local_40;
            uVar5 = SUB84(*pdVar1, 0);
            uVar6 = (undefined4)((ulong)*pdVar1 >> 32);
        }
        local_18 = (double)CONCAT44(uVar6, uVar5);
        if (((double)CONCAT44(uVar6, uVar5) < 0.0 || (double)CONCAT44(uVar6, uVar5) == 0.0) ||
            (1.0 <= (double)CONCAT44(uVar6, uVar5))) {
            return (double)((ulong)(~(uint)(-(ulong)((double)CONCAT44(uVar6, uVar5) <= 0.0) >> 32) & 1072693248) << 32);
        }
        switch (param_3) {
        case 1:
            local_18 = (double)_cos((double)CONCAT44(uVar6, uVar5) * 1.5707963267948966);
            goto LAB_1001245f5;
        case 2:
            local_18 = (double)_sin((double)CONCAT44(uVar6, uVar5) * 1.5707963267948966);
            break;
        case 3:
            dVar4 = (double)_cos((double)CONCAT44(uVar6, uVar5) * 3.141592653589793);
            goto LAB_1001246cd;
        case 4:
            local_18 = (double)CONCAT44(uVar6, uVar5) * (double)CONCAT44(uVar6, uVar5);
            break;
        case 5:
            dVar4 = 1.0 - (double)CONCAT44(uVar6, uVar5);
            local_18 = 1.0 - dVar4 * dVar4;
            break;
        case 6:
            if ((double)CONCAT44(uVar6, uVar5) < 0.5) {
                dVar4 = (double)CONCAT44(uVar6, uVar5) * (double)CONCAT44(uVar6, uVar5);
                return dVar4 + dVar4;
            }
            dVar4 = 2.0 - ((double)CONCAT44(uVar6, uVar5) + (double)CONCAT44(uVar6, uVar5));
            iVar2 = 2;
            goto LAB_1001248e8;
        case 7:
            local_18 = (double)CONCAT44(uVar6, uVar5) * (double)CONCAT44(uVar6, uVar5) * (double)CONCAT44(uVar6, uVar5);
            break;
        case 8:
            dVar4 = 1.0 - (double)CONCAT44(uVar6, uVar5);
            iVar2 = 3;
            goto LAB_100124590;
        case 9:
            if ((double)CONCAT44(uVar6, uVar5) < 0.5) {
                return (double)CONCAT44(uVar6, uVar5) * (double)CONCAT44(uVar6, uVar5) *
                       (double)CONCAT44(uVar6, uVar5) * 4.0;
            }
            dVar4 = 2.0 - ((double)CONCAT44(uVar6, uVar5) + (double)CONCAT44(uVar6, uVar5));
            iVar2 = 3;
            goto LAB_1001248e8;
        case 10:
            local_18 = (double)CONCAT44(uVar6, uVar5) * (double)CONCAT44(uVar6, uVar5);
            local_18 = local_18 * local_18;
            break;
        case 11:
            dVar4 = 1.0 - (double)CONCAT44(uVar6, uVar5);
            iVar2 = 4;
            goto LAB_100124590;
        case 12:
            if ((double)CONCAT44(uVar6, uVar5) < 0.5) {
                dVar4 = (double)CONCAT44(uVar6, uVar5) * (double)CONCAT44(uVar6, uVar5);
                return dVar4 * dVar4 * 8.0;
            }
            dVar4 = 2.0 - ((double)CONCAT44(uVar6, uVar5) + (double)CONCAT44(uVar6, uVar5));
            iVar2 = 4;
            goto LAB_1001248e8;
        case 13:
            dVar4 = (double)CONCAT44(uVar6, uVar5) * (double)CONCAT44(uVar6, uVar5);
        LAB_1001245b5:
            local_18 = local_18 * dVar4 * dVar4;
            break;
        case 14:
            dVar4 = 1.0 - (double)CONCAT44(uVar6, uVar5);
            iVar2 = 5;
        LAB_100124590:
            local_18 = (double)pow<double, int>(dVar4, iVar2);
        LAB_1001245f5:
            local_18 = 1.0 - local_18;
            break;
        case 15:
            if ((double)CONCAT44(uVar6, uVar5) < 0.5) {
                dVar4 = (double)CONCAT44(uVar6, uVar5) * (double)CONCAT44(uVar6, uVar5);
                local_18 = (double)CONCAT44(uVar6, uVar5) * 8.0;
                goto LAB_1001245b5;
            }
            dVar4 = 2.0 - ((double)CONCAT44(uVar6, uVar5) + (double)CONCAT44(uVar6, uVar5));
            iVar2 = 5;
        LAB_1001248e8:
            local_18 = (double)pow<double, int>(dVar4, iVar2);
        LAB_100124900:
            local_18 = local_18 * -0.5;
        LAB_10012499f:
            local_18 = local_18 + 1.0;
            break;
        case 16:
            local_18 = (double)pow<int, double>(param_1, (double)CONCAT44(uVar6, uVar5) * 10.0 + -10.0);
            break;
        case 17:
            local_18 = (double)pow<int, double>(param_1, (double)CONCAT44(uVar6, uVar5) * -10.0);
            goto LAB_1001245f5;
        case 18:
            dVar4 = (double)CONCAT44(uVar6, uVar5) * 20.0;
            if ((double)CONCAT44(uVar6, uVar5) < 0.5) {
                dVar4 = (double)pow<int, double>(param_1, dVar4 + 10.0);
                return dVar4 * 0.5;
            }
            local_18 = (double)pow<int, double>(param_1, 10.0 - dVar4);
            goto LAB_100124900;
        case 19:
            dVar4 = (double)pow<double, int>((double)CONCAT44(uVar6, uVar5), 2);
            local_18 = 1.0 - SQRT(1.0 - dVar4);
            break;
        case 20:
            dVar4 = (double)pow<double, int>((double)CONCAT44(uVar6, uVar5) + -1.0, 2);
            local_18 = SQRT(1.0 - dVar4);
            break;
        case 21:
            dVar4 = (double)CONCAT44(uVar6, uVar5) + (double)CONCAT44(uVar6, uVar5);
            if (0.5 <= (double)CONCAT44(uVar6, uVar5)) {
                dVar4 = (double)pow<double, int>(2.0 - dVar4, 2);
                return SQRT(1.0 - dVar4) * 0.5 + 0.5;
            }
            dVar4 = (double)pow<double, int>(dVar4, 2);
            dVar4 = SQRT(1.0 - dVar4);
        LAB_1001246cd:
            local_18 = 0.5 - dVar4 * 0.5;
            break;
        case 22:
            local_18 = ((double)CONCAT44(uVar6, uVar5) * 2.70158 + -1.70158) * (double)CONCAT44(uVar6, uVar5) *
                       (double)CONCAT44(uVar6, uVar5);
            break;
        case 23:
            local_28 = (double)CONCAT44(uVar6, uVar5) + -1.0;
            uStack_20 = 0;
            dVar4 = (double)pow<double, int>(local_28, 3);
            local_18 = dVar4 * 2.70158 + 1.0;
            dVar4 = (double)pow<double, int>(local_28, 2);
            local_18 = dVar4 * 1.70158 + local_18;
            break;
        case 24:
            dVar4 = (double)CONCAT44(uVar6, uVar5) + (double)CONCAT44(uVar6, uVar5);
            if ((double)CONCAT44(uVar6, uVar5) < 0.5) {
                local_28 = (double)CONCAT44(uVar6, uVar5);
                uStack_20 = 0;
                dVar4 = (double)pow<double, int>(dVar4, 2);
                return (local_28 * 3.5949095 + -1.29745475) * dVar4;
            }
            local_28 = dVar4 + -2.0;
            dVar4 = (double)pow<double, int>(local_28, 2);
            local_18 = local_28 * 1.79745475 + 1.29745475;
            goto LAB_10012499b;
        case 25:
            local_28 = (double)CONCAT44(uVar6, uVar5);
            uStack_20 = 0;
            local_18 = (double)pow<int, double>(param_1, (double)CONCAT44(uVar6, uVar5) * 10.0 + -10.0);
            dVar4 = (double)_sin(local_28 * -20.94395102393195 + 22.51474735072685);
            local_18 = dVar4 * local_18;
            break;
        case 26:
            local_28 = (double)CONCAT44(uVar6, uVar5);
            uStack_20 = 0;
            local_18 = (double)pow<int, double>(param_1, (double)CONCAT44(uVar6, uVar5) * -10.0);
            dVar4 = (double)_sin(local_28 * 20.94395102393195 + -1.5707963267948966);
            local_18 = dVar4 * local_18;
            goto LAB_10012499f;
        case 27:
            local_28 = (double)CONCAT44(uVar6, uVar5);
            uStack_20 = 0;
            local_18 = (double)_sin((double)CONCAT44(uVar6, uVar5) * 27.925268031909273 + -15.533430342749533);
            if (local_28 < 0.5) {
                dVar4 = (double)pow<int, double>(param_1, local_28 * 20.0 + -10.0);
                return local_18 * -0.5 * dVar4;
            }
            dVar4 = (double)pow<int, double>(param_1, 10.0 - local_28 * 20.0);
            local_18 = local_18 * 0.5;
        LAB_10012499b:
            local_18 = local_18 * dVar4;
            goto LAB_10012499f;
        }
        return local_18;
    }

    // 0x100124a20, 16 bytes, complete-object constructor, placed by class name
    // CinemaCameraTween::CinemaCameraTween(int, CinemaCameraTween::Easing): jumps straight to the base-object constructor

    // 0x100124a30, 16 bytes, base-object destructor, placed by class name
    // CinemaCameraTween::~CinemaCameraTween()
    void CinemaCameraTween::~CinemaCameraTween() {}

    // 0x100124a40, 16 bytes, complete-object destructor, placed by class name
    // CinemaCameraTween::~CinemaCameraTween(): jumps straight to the base-object destructor

    // 0x100124a50, 16 bytes, deleting destructor, placed by class name
    // CinemaCameraTween::~CinemaCameraTween()
    void CinemaCameraTween::~CinemaCameraTween() {
        operator_delete(this);
    }

} // namespace jag::oldscape
