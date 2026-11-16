// libs/hal/input/osx/InputInc_OSX.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.input

namespace jag::input {
    // 0x100c9d2e0, 32 bytes, placed by debug map only (low confidence)
    // Input::Update(float)
    float Input::Update(float param_1) {
        if (field_8 != (InputHandler*)0) {
            param_1 = (float)gesture::GestureManager::Update();
        }
        return param_1;
    }

} // namespace jag::input
