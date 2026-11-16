// libs/hal/input/InputGestures.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::input::gesture {
    // 0x100199960
    GestureManager::GestureManager() : m_numTouches(0) {

        new (&field_8) eastl::vector<TouchPoint>(256, local_28);
        new (&field_40) eastl::map(local_28);
    }

    // 0x100199b70
    TouchPoint::TouchPoint() : field_0(4294967295), field_8(0.0), field_12(0.0), field_16(0) {}

    // 0x100199b70: TouchPoint::Reset() has the same machine code as TouchPoint::TouchPoint()

    // 0x100199bd0
    GestureManager::~GestureManager() {
        field_40.~map();
        field_8.~vector();
    }

} // namespace jag::input::gesture
