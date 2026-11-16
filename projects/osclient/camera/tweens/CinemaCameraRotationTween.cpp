// projects/osclient/camera/tweens/CinemaCameraRotationTween.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "CinemaCameraRotationTween.h"

namespace jag::oldscape {
    // 0x1000f7fa0, 64 bytes, placed by class name and debug map
    // CinemaCameraRotationTween::GetValue() const
    int CinemaCameraRotationTween::GetValue() {
        double dVar1;

        dVar1 = (double)GetAlpha();
        dVar1 = (double)_round(dVar1 * (double)(int)(field_32 - field_28) + (double)(int)field_28);
        return (int)dVar1;
    }

    // 0x100124370, 64 bytes, base-object constructor, placed by class name
    // CinemaCameraRotationTween::CinemaCameraRotationTween(int, int, int, CinemaCameraTween::Easing)
    void CinemaCameraRotationTween::CinemaCameraRotationTween(undefined4 param_1, undefined4 param_2,
                                                              undefined4 param_3, undefined4 param_5) {
        new (this) CinemaCameraTween(param_3, param_5);
        field_0 = (undefined**)(PTR_vtable_100ee8910 + 16);
        field_28 = param_1;
        field_32 = param_2;
    }

    // 0x1001243b0, 16 bytes, complete-object constructor, placed by class name
    // CinemaCameraRotationTween::CinemaCameraRotationTween(int, int, int, CinemaCameraTween::Easing): jumps straight to the base-object constructor

} // namespace jag::oldscape
