// libs/hal/thread/Fence.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.thread

#include "Fence.h"

namespace jag {
    // 0x1001260a0: Fence::~Fence() has the same machine code as oldscape::jagex3::ThreadSignal::~ThreadSignal()

    // 0x100c94c20
    void Fence::Wait() {

        unique_lock<std::mutex> local_28(*this);
        (&field_64)->wait<Fence::Wait()::__0>(&local_28, this);
    }

    // 0x100c94ce0
    void Fence::Signal() {

        scoped_lock<std::mutex> local_20(*this);
        field_112 = 1;
        std::condition_variable::notify_all();
    }

    // 0x100c94d20
    void Fence::Reset() {

        scoped_lock<std::mutex> local_20(*this);
        field_112 = 0;
    }

    // 0x100c97570
    uint64_t Fence::Wait()::$_0::operator()() const {
        return *(uint8_t*)(field_0 + 112);
    }

} // namespace jag
