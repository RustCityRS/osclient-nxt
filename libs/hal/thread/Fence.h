// libs/hal/thread/Fence.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class Fence {
    public:
        ~Fence();
        Fence();
        void Wait();
        void Signal();
        void Reset();

    private:
        uint8_t _unknown_0[112];
        uint8_t field_112;
    };

    // 0x100c32a30
    Fence::Fence() : std::mutex(), field_112(0) {}

} // namespace jag
