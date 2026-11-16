// libs/hal/thread/Fence.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class Fence {
    public:
        ~Fence();
        Fence();
        void Wait();
        void Signal();
        void Reset();

        // data members, from how the methods use this: 113 bytes
        char _unknown_0[112];
        undefined1 field_112; // offset 112
    };

    // 0x100c19940, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // Fence::Fence(): jumps straight to the base-object constructor

    // 0x100c32a30, 48 bytes, base-object constructor, inline, placed by class name
    // Fence::Fence()
    void Fence::Fence() {
        new (this) std::mutex();
        new (&field_64) std::condition_variable();
        field_112 = 0;
    }

} // namespace jag
