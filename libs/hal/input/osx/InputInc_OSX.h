// libs/hal/input/osx/InputInc_OSX.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.input

namespace jag::input {
    // 0x100c9d2e0
    float Input::Update(float arg1) {
        if (field_8 != nullptr) {
            arg1 = (float)field_8->field_2216.Update();
        }
        return arg1;
    }

} // namespace jag::input
