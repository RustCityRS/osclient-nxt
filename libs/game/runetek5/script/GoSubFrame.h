// libs/game/runetek5/script/GoSubFrame.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class GoSubFrame {
    public:
        GoSubFrame();
        ~GoSubFrame();

    private:
        uint8_t _unknown_0[16];
        uint32_t field_16;
        uint8_t _unknown_20[60];
    };

    // 0x1003b7b60
    GoSubFrame::GoSubFrame() : shared_ptr(), field_16(4294967295) {}

    // 0x1003b7cc0
    GoSubFrame::~GoSubFrame() {
        field_72.~vector();
        field_48.~vector();
        field_24.~vector_set();
    }

} // namespace jag::game
