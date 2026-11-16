// libs/game/runetek5/scene/entities/LocationInterface.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "LocationInterface.h"

namespace jag::game {
    // 0x100009e70: LocationInterface::RequestOverrideAnimation(int, int, unsigned int, unsigned int) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100029ea0: LocationInterface::GetRotation90() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: LocationInterface::GetLocationWidth() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: LocationInterface::GetLocationLength() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: LocationInterface::GetShape() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100120420: LocationInterface::GetAttachedWallWidth() const has the same machine code as oldscape::javapal::GameShell::GetVisibleAppHeight()

    // 0x100410f70
    int LocationInterface::TicksSinceLastCall(unsigned int arg1) {
        unsigned int uVar1 = field_208;
        field_208 = arg1;
        int iVar2 = arg1 - uVar1;
        if (uVar1 == 0) {
            iVar2 = 0;
        }
        return iVar2;
    }

    // 0x100410f90
    int LocationInterface::AddRandomSound(int arg1, int arg2, unsigned int arg3, unsigned int arg4, unsigned int arg5,
                                          unsigned int arg6, unsigned int arg7, unsigned int arg8, unsigned int arg9,
                                          const math::Vector3T<float>& vector3, int arg11) {
        int iVar1 = math::Rand(arg7 - arg6);
        (*(void (*)(...))field_8[2])(&field_8, arg1, arg2, arg3, arg4 << 7, (arg5 + arg4) * 128, vector3, 0, 14, 2,
                                     arg11, iVar1 + arg6);
        iVar1 = math::Rand(arg9 - arg8);
        return iVar1 + arg8;
    }

    // 0x100431b80: LocationInterface::GetParentLocationType() const has the same machine code as LocationInterface::GetLocationType() const

    // 0x100c92b50: LocationInterface::~LocationInterface() has the same machine code as InlineFatalBreak()

} // namespace jag::game
