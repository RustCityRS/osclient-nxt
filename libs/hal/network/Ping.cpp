// libs/hal/network/Ping.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.network

#include "Ping.h"

namespace jag::network {
    // 0x100b0f0e0, 304 bytes, base-object constructor, placed by class name and debug map
    // Ping::Ping(int)
    void Ping::Ping(int param_1) {
        new (&field_8) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        field_0 = &PTR__Ping_100f25348;
        field_24 = param_1;
        new (&field_32) std::array<Ping::ThreadInfo, 16ul>();
        new (&field_552) std::mutex();
        new (&field_616) std::condition_variable();
        field_664 = 0;
        new (&field_672) std::mutex();
        new (&field_736) eastl::vector_map<IPAddress, Ping::Result, eastl::less<IPAddress>, eastl::allocator,
                                           eastl::vector<eastl::pair<IPAddress, Ping::Result>, eastl::allocator>>();
        new (&field_776) std::mutex();
        new (&field_840) eastl::fixed_list<IPAddress, 128ul, true, eastl::allocator>();
        this[8].field_328 = 0;
        InitialiseLibrary();
        InitialiseThreads(this);
    }

    // 0x100b10eb0: the linker folded this into HostResolution::ThreadInfo::~ThreadInfo(), which has identical code
    Ping::ThreadInfo::~ThreadInfo();

    // 0x100b10f10: the linker folded this into HostResolution::ThreadInfo::~ThreadInfo(), which has identical code
    Ping::ThreadInfo::~ThreadInfo();

    // 0x100b15560, 160 bytes, placed by class name
    // Ping::NeedThreads(int)::$_1::operator()() const
    /* Ping::NeedThreads(int)::$_1::TEMPNAMEPLACEHOLDERVALUE() const */

    void Ping::NeedThreads(int)::$_1::operator()() {
        char* pcVar1;
        fixed_string<char, 40, true, eastl::allocator> local_60[56];
        undefined8 local_28;

        local_28 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 16, true, eastl::allocator>::fixed_string(local_60, "Ping %d",
                                                                            *(undefined4*)(field_0 + 4));
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        this_thread::SetThreadName(pcVar1);
        /* WARNING: Subroutine does not return */
        eastl::fixed_string<char, 40, true, eastl::allocator>::~fixed_string(local_60);
    }

} // namespace jag::network
