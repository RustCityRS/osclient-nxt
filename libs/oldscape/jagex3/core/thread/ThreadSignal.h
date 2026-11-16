// libs/oldscape/jagex3/core/thread/ThreadSignal.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::jagex3 {
    class ThreadSignal {
    public:
        ThreadSignal(bool);
        ~ThreadSignal();
        void RaiseSignal();
        void WaitForAndLowerSignal();

        // data members, from how the methods use this: 113 bytes
        char _unknown_0[112];
        bool field_112; // offset 112
    };

    // 0x1000bb390, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ThreadSignal::ThreadSignal(bool): jumps straight to the base-object constructor

    // 0x1000bb3f0, 16 bytes, complete-object destructor, inline, placed by class name
    // ThreadSignal::~ThreadSignal(): jumps straight to the base-object destructor

    // 0x1000bb5b0, 64 bytes, inline, placed by class name
    // ThreadSignal::RaiseSignal()
    void ThreadSignal::RaiseSignal() {
        unique_lock<std::mutex> local_28[16];

        std::unique_lock<std::mutex>::unique_lock(local_28, (mutex*)this);
        field_112 = true;
        std::unique_lock<std::mutex>::~unique_lock(local_28);
        std::condition_variable::notify_one();
    }

    // 0x1000bd1c0, 96 bytes, inline, placed by class name
    // ThreadSignal::WaitForAndLowerSignal()
    void ThreadSignal::WaitForAndLowerSignal() {
        unique_lock<std::mutex> local_20[16];

        std::unique_lock<std::mutex>::unique_lock(local_20, (mutex*)this);
        if (field_112 == false) {
            std::condition_variable::wait<ThreadSignal::WaitForAndLowerSignal()::_lambda() _1_>(
                (condition_variable*)&field_64, local_20, this);
        } else {
            field_112 = false;
        }
        std::unique_lock<std::mutex>::~unique_lock(local_20);
    }

    // 0x100125f70, 48 bytes, base-object constructor, inline, placed by class name
    // ThreadSignal::ThreadSignal(bool)
    void ThreadSignal::ThreadSignal(bool param_1) {
        new (this) std::mutex();
        new (&field_64) std::condition_variable();
        field_112 = param_1;
    }

    // 0x1001260a0, 48 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ThreadSignal::~ThreadSignal()
    /* Fence::~Fence() */

    void Fence::~Fence() {
        (&field_64)->~condition_variable();
        ~mutex();
    }

    // 0x1001266a0, 32 bytes, inline, placed by class name
    // ThreadSignal::WaitForAndLowerSignal()::{lambda()#1}::operator()() const
    /* ThreadSignal::WaitForAndLowerSignal()::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE()
   const */

    void ThreadSignal::WaitForAndLowerSignal()::{
        lambda() #1
    }
    ::operator()() {
        if (*(char*)(*(long*)this + 112) != '\0') {
            *(undefined1*)(*(long*)this + 112) = 0;
        }
    }

} // namespace jag::oldscape::jagex3
