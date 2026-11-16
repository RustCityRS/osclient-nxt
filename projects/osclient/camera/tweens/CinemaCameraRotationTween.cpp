// projects/osclient/camera/tweens/CinemaCameraRotationTween.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "CinemaCameraRotationTween.h"

namespace jag::oldscape {
    // 0x1000f7fa0
    int CinemaCameraRotationTween::GetValue() const {
        double dVar1 = (double)GetAlpha();
        dVar1 = (double)_round(dVar1 * (double)(field_32 - field_28) + (double)field_28);
        return (int)dVar1;
    }

    // 0x100124370
    CinemaCameraRotationTween::CinemaCameraRotationTween(int arg1, int arg2, int arg3, CinemaCameraTween::Easing easing)
        : CinemaCameraTween(arg3, easing), field_28(arg1), field_32(arg2) {}

} // namespace jag::oldscape
