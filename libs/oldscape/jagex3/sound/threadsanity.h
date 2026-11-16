// libs/oldscape/jagex3/sound/threadsanity.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::sound {
    // 0x1000dfdc0, 32 bytes, inline, placed by debug map only (low confidence)
    // SetMainThread()
    void SetMainThread() {
        g_idMainThread = std::this_thread::get_id();
    }

} // namespace jag::oldscape::sound
