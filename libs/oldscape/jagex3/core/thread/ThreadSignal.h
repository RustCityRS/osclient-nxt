// libs/oldscape/jagex3/core/thread/ThreadSignal.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::jagex3 {
    class ThreadSignal {
    public:
        ThreadSignal(bool arg1);
        ~ThreadSignal();
        void RaiseSignal();
        void WaitForAndLowerSignal();

    private:
        uint8_t _unknown_0[112];
        bool field_112;
    };

    // 0x1000bb5b0
    void ThreadSignal::RaiseSignal() {

        unique_lock<std::mutex> local_28(*this);
        field_112 = true;
        std::condition_variable::notify_one();
    }

    // 0x1000bd1c0
    void ThreadSignal::WaitForAndLowerSignal() {

        unique_lock<std::mutex> local_20(*this);
        if (field_112 == false) {
            (&field_64)->wait<ThreadSignal::WaitForAndLowerSignal()::_lambda() _1_>(&local_20, this);
        } else {
            field_112 = false;
        }
    }

    // 0x100125f70
    ThreadSignal::ThreadSignal(bool arg1) : std::mutex(), field_112(arg1) {}

    // 0x1001260a0
    ThreadSignal::~ThreadSignal() {
        (&field_64)->~condition_variable();
    }

    // 0x1001266a0
    void ThreadSignal::WaitForAndLowerSignal()::{
        lambda() #1
    }
    ::operator()() const {
        if (*(char*)(field_0 + 112) != '\0') {
            *(uint8_t*)(field_0 + 112) = 0;
        }
    }

} // namespace jag::oldscape::jagex3
