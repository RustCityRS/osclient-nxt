// libs/game/runetek5/config/quickchatphrasetype/QuickChatPhrase.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class QuickChatPhrase {
    public:
        ~QuickChatPhrase();

        uint8_t _unknown_0[32];
    };

    // 0x1003baa60
    QuickChatPhrase::~QuickChatPhrase() {
        field_24.~vector();
        field_8.~weak_ptr();
    }

} // namespace jag::game
