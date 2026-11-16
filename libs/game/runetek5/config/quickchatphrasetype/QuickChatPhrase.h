// libs/game/runetek5/config/quickchatphrasetype/QuickChatPhrase.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class QuickChatPhrase {
    public:
        ~QuickChatPhrase();

        // data members, from how the methods use this: 32 bytes
        char _unknown_0[32];
    };

    // 0x1003baa50, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // QuickChatPhrase::~QuickChatPhrase(): jumps straight to the base-object destructor

    // 0x1003baa60, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // QuickChatPhrase::~QuickChatPhrase()
    void QuickChatPhrase::~QuickChatPhrase() {
        (&field_24)->~vector();
        (&field_8)->~weak_ptr();
    }

} // namespace jag::game
