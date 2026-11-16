// libs/oldscape/jagex3/datastructure/RollingAverageCounter.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::datastructure {
    class RollingAverageCounter {
    public:
        RollingAverageCounter(int);
        ~RollingAverageCounter();
        long GetAverage();
        void Reset();
        ulong AddSample(long long);

        // data members, from how the methods use this: 56 bytes
        long field_0;    // offset 0
        NpcUID* field_8; // offset 8
        char _unknown_16[16];
        int field_32; // offset 32
        char _unknown_36[4];
        long field_40; // offset 40
        int field_48;  // offset 48
        char _unknown_52[4];
    };

    // 0x1000c42b0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // RollingAverageCounter::RollingAverageCounter(int): jumps straight to the base-object constructor

    // 0x1000c48c0, 16 bytes, complete-object destructor, inline, placed by class name
    // RollingAverageCounter::~RollingAverageCounter(): jumps straight to the base-object destructor

    // 0x100128330, 96 bytes, base-object constructor, inline, placed by class name
    // RollingAverageCounter::RollingAverageCounter(int)
    void RollingAverageCounter::RollingAverageCounter(int param_1) {
        new (this) eastl::vector<long long, eastl::allocator>();
        field_32 = 0;
        field_40 = 0;
        field_48 = 0;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<long long, eastl::allocator>::resize((ulong)this);
    }

    // 0x10012a100, 16 bytes, base-object destructor, inline, placed by class name
    // RollingAverageCounter::~RollingAverageCounter()
    void RollingAverageCounter::~RollingAverageCounter() {
        ~vector();
    }

    // 0x10017eb70, 32 bytes, inline, placed by class name
    // RollingAverageCounter::GetAverage()
    long RollingAverageCounter::GetAverage() {
        if ((long)field_48 == 0) {
            return 0;
        }
        return field_40 / (long)field_48;
    }

    // 0x10017eb90, 32 bytes, inline, placed by class name
    // RollingAverageCounter::Reset()
    void RollingAverageCounter::Reset() {
        field_40 = 0;
        field_48 = 0;
        field_32 = 0;
    }

    // 0x10017fdb0, 128 bytes, inline, placed by class name
    // RollingAverageCounter::AddSample(long long)
    ulong RollingAverageCounter::AddSample(longlong param_1) {
        int iVar1;
        int iVar2;
        long* plVar3;
        longlong* plVar4;
        ulong uVar5;
        ulong uVar6;

        iVar1 = field_48;
        iVar2 = size();
        if (iVar1 < iVar2) {
            field_48 = field_48 + 1;
        } else {
            plVar3 = (long*)eastl::vector<long long, eastl::allocator>::operator[](
                (vector<long long, eastl::allocator>*)this, (long)field_32);
            field_40 = field_40 - *plVar3;
        }
        field_40 = field_40 + param_1;
        plVar4 = (longlong*)eastl::vector<long long, eastl::allocator>::operator[](
            (vector<long long, eastl::allocator>*)this, (long)field_32);
        *plVar4 = param_1;
        uVar6 = (long)field_32 + 1;
        uVar5 = size();
        field_32 = (int)(uVar6 % uVar5);
        return uVar6 / uVar5;
    }

} // namespace jag::oldscape::datastructure
