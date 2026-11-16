// libs/hal/network/Ping.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.network

#include "Ping.h"

namespace jag::network {
    // 0x100b0f0e0
    Ping::Ping(int arg1) : field_24(arg1), field_664(0) {
        this[8].field_328 = 0;
        InitialiseLibrary();
        InitialiseThreads();
    }

    // 0x100b10f10: Ping::ThreadInfo::~ThreadInfo() has the same machine code as HostResolution::ThreadInfo::~ThreadInfo()

    // 0x100b15560
    void Ping::NeedThreads(int)::$_1::operator()() const {

        fixed_string<char, 16> local_60((CtorSprintf*)"Ping %d", (char*)(unsigned long)*(unsigned int*)(field_0 + 4));
        this_thread::SetThreadName((char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin());
    }

} // namespace jag::network
