// libs/game/runetek5/scene/entities/LocationInterface.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "LocationInterface.h"

namespace jag::game {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    LocationInterface::RequestOverrideAnimation(int, int, unsigned int, unsigned int);

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    LocationInterface::GetRotation90() const;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    LocationInterface::GetLocationWidth() const;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    LocationInterface::GetLocationLength() const;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    LocationInterface::GetShape() const;

    // 0x100120420: the linker folded this into oldscape::javapal::GameShell::GetVisibleAppHeight(), which has identical code
    LocationInterface::GetAttachedWallWidth() const;

    // 0x100410f70, 32 bytes, placed by class name and debug map
    // LocationInterface::TicksSinceLastCall(unsigned int)
    int LocationInterface::TicksSinceLastCall(uint param_1) {
        uint uVar1;
        int iVar2;

        uVar1 = field_208;
        field_208 = param_1;
        iVar2 = param_1 - uVar1;
        if (uVar1 == 0) {
            iVar2 = 0;
        }
        return iVar2;
    }

    // 0x100410f90, 144 bytes, placed by class name and debug map
    // LocationInterface::AddRandomSound(int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, math::Vector3T<float> const&, int)
    int LocationInterface::AddRandomSound(int param_1, int param_2, uint param_3, uint param_4, uint param_5,
                                          uint param_6, uint param_7, uint param_8, uint param_9, Vector3T* param_10,
                                          int param_11) {
        int iVar1;

        iVar1 = math::Rand(param_7 - param_6);
        (*(code*)field_8[2])(&field_8, param_1, param_2, param_3, param_4 << 7, (param_5 + param_4) * 128, param_10, 0,
                             14, 2, param_11, iVar1 + param_6);
        iVar1 = math::Rand(param_9 - param_8);
        return iVar1 + param_8;
    }

    // 0x100431b80: the linker folded this into LocationInterface::GetLocationType() const, which has identical code
    LocationInterface::GetParentLocationType() const;

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    LocationInterface::~LocationInterface();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    LocationInterface::~LocationInterface();

} // namespace jag::game
