// projects/osclient/camera/tweens/ArcMovementTween.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ArcMovementTween.h"

namespace jag::oldscape {
    // 0x100022b10: ArcMovementTween::~ArcMovementTween() has the same machine code as option::ScriptOption<int, option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: ArcMovementTween::~ArcMovementTween() has the same machine code as void eastl::destruct<rs2lib::CoordMapSquare*>(rs2lib::CoordMapSquare*, rs2lib::CoordMapSquare*)

    // 0x100123e60
    ArcMovementTween::ArcMovementTween(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                                       int arg9, CinemaCameraTween::Easing easing)
        : CinemaCameraMovementTween(arg9, easing), field_40(0.0), field_48(0.0), field_56(0.0), field_64(0.0),
          field_72(0.0), field_28(arg3), field_32(arg6) {
        double dVar1;
        double dVar2;
        double dVar3;
        double dVar4;

        if ((arg5 - arg8) * (arg7 - arg1) == (arg8 - arg2) * (arg4 - arg7)) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/camera/"
                      "tweens/ArcMovementTween.cpp",
                      21,
                      "Error: ArcMovementTween - given points for an arc are co-linear and no circle can be found. "
                      "Points: Initial - (%d, %d), Tertiary - (%d, %d), Goal - (%d, %d).",
                      arg1, arg2, arg7, arg8, arg4, arg5);
            field_40 = (double)arg4;
            field_48 = (double)arg5;
        } else {
            dVar1 = (double)(arg7 + arg1) * 0.5;
            dVar2 = (double)(arg8 + arg2) * 0.5;
            dVar3 =
                (double)((unsigned long)(double)(arg7 - arg1) ^ (unsigned long)DAT_100d99950) / (double)(arg8 - arg2);
            dVar4 =
                (double)((unsigned long)(double)(arg4 - arg7) ^ (unsigned long)DAT_100d99950) / (double)(arg5 - arg8);
            dVar4 = ((dVar3 * dVar1 - dVar2) + ((double)(arg8 + arg5) - (double)(arg7 + arg4) * dVar4) * 0.5) /
                    (dVar3 - dVar4);
            field_40 = dVar4;
            dVar2 = (dVar4 - dVar1) * dVar3 + dVar2;
            field_48 = dVar2;
            dVar1 = (double)pow<double, int>(dVar4 - (double)arg1, 2);
            dVar3 = (double)pow<double, int>(dVar2 - (double)arg2, 2);
            field_56 = SQRT(dVar3 + dVar1);
            dVar3 = (double)_atan2((uint32_t)((double)arg2 - dVar2), (double)arg1 - dVar4);
            field_64 = dVar3;
            dVar1 = (double)_atan2((uint32_t)((double)arg8 - dVar2), (double)arg7 - dVar4);
            dVar4 = (double)_atan2((uint32_t)((double)arg5 - dVar2), (double)arg4 - dVar4);
            field_72 = dVar4;
            if (((dVar1 < dVar3) || (dVar4 < dVar1)) && ((dVar1 < dVar4 || (dVar3 < dVar1)))) {
                field_72 = dVar4 + *(double*)(&reinterpret_cast<const uint64_t*>(&g_lineTypeColour)[53] +
                                              (unsigned long)(0.0 < dVar3 - dVar4) * 8);
            }
        }
    }

    // 0x1001241f0
    int ArcMovementTween::GetValueX() const {
        double dVar1 = (double)GetAlpha();
        dVar1 = (double)_cos(dVar1 * (field_72 - field_64) + field_64);
        dVar1 = (double)_round(dVar1 * field_56 + field_40);
        return (int)dVar1;
    }

    // 0x100124250
    int ArcMovementTween::GetValueZ() const {
        double dVar1 = (double)GetAlpha();
        dVar1 = (double)_sin(dVar1 * (field_72 - field_64) + field_64);
        dVar1 = (double)_round(dVar1 * field_56 + field_48);
        return (int)dVar1;
    }

    // 0x1001242a0
    int ArcMovementTween::GetValueHeight() const {
        double dVar1 = (double)GetAlpha();
        dVar1 = (double)_round(dVar1 * (double)(field_32 - field_28) + (double)field_28);
        return (int)dVar1;
    }

} // namespace jag::oldscape
