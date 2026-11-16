// libs/hal/input/InputGestures.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.input

#include "InputGestures.h"

namespace jag::input {
    // 0x100c9d390
    bool Input::IsOnScreenKeyboardVisible() const {
        return 0;
    }

    // 0x100c9d3a0
    void Input::ShowOnScreenKeyboard(SoftKeyboardType softKeyboardType,
                                     eastl::basic_string<char, BucketAllocatorEASTL> str, int arg3, bool arg4,
                                     bool arg5) {}

    // 0x100c9d3b0
    void Input::HideOnScreenKeyboard() {}

    // 0x100c9d3c0
    void Input::SetOnScreenKeyboardText(eastl::basic_string<char, BucketAllocatorEASTL> str, int arg2, bool arg3) {}

    // 0x100c9d3d0
    void Input::SetOnScreenKeyboardSelection(int arg1, int arg2) {}

    // 0x100c9d3e0
    void Input::ShowEditMenu() {}

    // 0x100c9d3f0
    void Input::HideEditMenu() {}

} // namespace jag::input

namespace jag::input::gesture {
    // 0x100c9d300
    void GestureManager::Update() {
        uint64_t* puVar2;

        uint64_t local_28 = field_40.end();
        uint64_t local_20 = field_40.begin();
        bool cVar1 = local_20 != local_28;
        if (cVar1) {
            do {
                puVar2 = (uint64_t*)*local_20;
                (**(void (**)(...))(*(long*)*puVar2 + 40))();
                ++local_20;
                cVar1 = local_20 != local_28;
            } while (cVar1);
        }
    }

} // namespace jag::input::gesture
