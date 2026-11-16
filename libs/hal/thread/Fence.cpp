// libs/hal/thread/Fence.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.thread

#include "Fence.h"

namespace jag {
    // 0x1000bb3f0: the linker folded this into oldscape::jagex3::ThreadSignal::~ThreadSignal(), which has identical code
    Fence::~Fence();

    // 0x1001260a0: the linker folded this into oldscape::jagex3::ThreadSignal::~ThreadSignal(), which has identical code
    Fence::~Fence();

    // 0x100c94c20, 64 bytes, placed by class name and debug map
    // Fence::Wait()
    void Fence::Wait() {
        unique_lock<std::mutex> local_28[16];

        std::unique_lock<std::mutex>::unique_lock(local_28, (mutex*)this);
        std::condition_variable::wait<Fence::Wait()::__0>((condition_variable*)&field_64, local_28, this);
        std::unique_lock<std::mutex>::~unique_lock(local_28);
    }

    // 0x100c94ce0, 64 bytes, placed by class name and debug map
    // Fence::Signal()
    void Fence::Signal() {
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)this);
        field_112 = 1;
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
        std::condition_variable::notify_all();
    }

    // 0x100c94d20, 64 bytes, placed by class name and debug map
    // Fence::Reset()
    void Fence::Reset() {
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)this);
        field_112 = 0;
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x100c97570, 16 bytes, placed by class name
    // Fence::Wait()::$_0::operator()() const
    /* Fence::Wait()::$_0::TEMPNAMEPLACEHOLDERVALUE() const */

    undefined8 Fence::Wait()::$_0::operator()() {
        return CONCAT71((int7)((ulong) * (long*)this >> 8), *(undefined1*)(*(long*)this + 112));
    }

} // namespace jag
