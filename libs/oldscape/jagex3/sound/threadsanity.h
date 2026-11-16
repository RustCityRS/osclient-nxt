// libs/oldscape/jagex3/sound/threadsanity.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::sound {
    // 0x1000dfdc0
    void SetMainThread() {
        g_idMainThread = std::this_thread::get_id();
    }

} // namespace jag::oldscape::sound
