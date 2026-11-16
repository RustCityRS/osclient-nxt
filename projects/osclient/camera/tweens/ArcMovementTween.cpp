// projects/osclient/camera/tweens/ArcMovementTween.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ArcMovementTween.h"

namespace jag::oldscape {
    // 0x100022b10: the linker folded this into option::ScriptOption<int, option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ArcMovementTween::~ArcMovementTween();

    // 0x10002a770: the linker folded this into void eastl::destruct<rs2lib::CoordMapSquare*>(rs2lib::CoordMapSquare*, rs2lib::CoordMapSquare*), which has identical code
    ArcMovementTween::~ArcMovementTween();

    // 0x10004a690: the linker folded this into option::ScriptOption<bool, option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ArcMovementTween::~ArcMovementTween();

    // 0x100123e60, 784 bytes, base-object constructor, placed by class name
    // ArcMovementTween::ArcMovementTween(int, int, int, int, int, int, int, int, int, CinemaCameraTween::Easing)
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* ArcMovementTween::ArcMovementTween(int, int, int, int, int, int, int, int, int,
   CinemaCameraTween::Easing) */

    void ArcMovementTween::ArcMovementTween(int param_1, int param_2, undefined4 param_3, int param_4, int param_5,
                                            undefined4 param_6, int param_7, int param_8, undefined4 param_9,
                                            undefined4 param_11) {
        double dVar1;
        undefined8 uVar2;
        double dVar3;
        double dVar4;
        double dVar5;

        new (this) CinemaCameraMovementTween(param_9, param_11);
        field_0 = &PTR__ScriptOption_100ef40c8;
        field_40 = 0.0;
        field_48 = 0.0;
        field_56 = 0.0;
        field_64 = 0.0;
        field_72 = 0.0;
        field_28 = param_3;
        field_32 = param_6;
        if ((param_5 - param_8) * (param_7 - param_1) == (param_8 - param_2) * (param_4 - param_7)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "camera/tweens/ArcMovementTween.cpp",
                                21,
                                "Error: ArcMovementTween - given points for an arc are co-linear and no circle can be "
                                "found. Points: Initial - (%d, %d), Tertiary - (%d, %d), Goal - (%d, %d).",
                                param_1, param_2, param_7, param_8, param_4, param_5);
            field_40 = (double)param_4;
            field_48 = (double)param_5;
        } else {
            dVar1 = (double)(param_7 + param_1) * 0.5;
            dVar3 = (double)(param_8 + param_2) * 0.5;
            dVar4 = (double)((ulong)(double)(param_7 - param_1) ^ (ulong)DAT_100d99950) / (double)(param_8 - param_2);
            dVar5 = (double)((ulong)(double)(param_4 - param_7) ^ (ulong)DAT_100d99950) / (double)(param_5 - param_8);
            dVar5 =
                ((dVar4 * dVar1 - dVar3) + ((double)(param_8 + param_5) - (double)(param_7 + param_4) * dVar5) * 0.5) /
                (dVar4 - dVar5);
            field_40 = dVar5;
            dVar3 = (dVar5 - dVar1) * dVar4 + dVar3;
            field_48 = dVar3;
            dVar1 = (double)pow<double, int>(dVar5 - (double)param_1, 2);
            dVar4 = (double)pow<double, int>(dVar3 - (double)param_2, 2);
            field_56 = SQRT(dVar4 + dVar1);
            dVar4 = (double)_atan2(SUB84((double)param_2 - dVar3, 0), (double)param_1 - dVar5);
            field_64 = dVar4;
            dVar1 = (double)_atan2(SUB84((double)param_8 - dVar3, 0), (double)param_7 - dVar5);
            dVar5 = (double)_atan2(SUB84((double)param_5 - dVar3, 0), (double)param_4 - dVar5);
            field_72 = dVar5;
            if (((dVar1 < dVar4) || (dVar5 < dVar1)) && ((dVar1 < dVar5 || (dVar4 < dVar1)))) {
                field_72 = dVar5 + *(double*)(&DAT_100d3d560 + (ulong)(0.0 < dVar4 - dVar5) * 8);
            }
        }
    }

    // 0x1001241b0, 64 bytes, complete-object constructor, placed by class name
    // ArcMovementTween::ArcMovementTween(int, int, int, int, int, int, int, int, int, CinemaCameraTween::Easing)
    void ArcMovementTween::ArcMovementTween() {
        ArcMovementTween();
    }

    // 0x1001241f0, 80 bytes, placed by class name
    // ArcMovementTween::GetValueX() const
    int ArcMovementTween::GetValueX() {
        double dVar1;

        dVar1 = (double)GetAlpha();
        dVar1 = (double)_cos(dVar1 * (field_72 - field_64) + field_64);
        dVar1 = (double)_round(dVar1 * field_56 + field_40);
        return (int)dVar1;
    }

    // 0x100124250, 80 bytes, placed by class name
    // ArcMovementTween::GetValueZ() const
    int ArcMovementTween::GetValueZ() {
        double dVar1;

        dVar1 = (double)GetAlpha();
        dVar1 = (double)_sin(dVar1 * (field_72 - field_64) + field_64);
        dVar1 = (double)_round(dVar1 * field_56 + field_48);
        return (int)dVar1;
    }

    // 0x1001242a0, 64 bytes, placed by class name
    // ArcMovementTween::GetValueHeight() const
    int ArcMovementTween::GetValueHeight() {
        double dVar1;

        dVar1 = (double)GetAlpha();
        dVar1 = (double)_round(dVar1 * (double)(int)(field_32 - field_28) + (double)(int)field_28);
        return (int)dVar1;
    }

} // namespace jag::oldscape
