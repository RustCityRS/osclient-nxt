// libs/hal/network/Ping.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::network {
    class Ping {
    public:
        class Result;
        class ThreadInfo;
        // virtual methods in vtable order
        virtual ~Ping();
        void Shutdown();
        Ping(int);
        void InitialiseThreads();
        void ShutdownThreads();
        Get(PingResult&, IPAddress const&);
        void StartPing(IPAddress);
        ulong AllFinished();
        void Refresh();
        void NeedThreads(int);
        ulong IsQueued(IPAddress);
        ulong IsRunning(IPAddress);
        void PingThreadWrapper(ThreadInfo&);
        void PingThread();
        ulong GetNextIPAddress(IPAddress&);
        void InitialiseLibrary();
        void ShutdownLibrary();
        DoPing(IPAddress);

        // data members, from how the methods use this: 848 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        int field_24; // offset 24
        char _unknown_28[636];
        undefined4 field_664; // offset 664
        char _unknown_668[180];
    };

    class Ping::Result {
    public:
        Result();

        // data members, from how the methods use this: 12 bytes
        undefined2 field_0; // offset 0
        undefined1 field_2; // offset 2
        char _unknown_3[1];
        undefined4 field_4; // offset 4
        char _unknown_8[4];
    };

    class Ping::ThreadInfo {
    public:
        ~ThreadInfo();
        ThreadInfo();

        // data members, from how the methods use this: 24 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[3];
        undefined4 field_4; // offset 4
        char _unknown_8[16];
    };

    class PingResult {
    public:
        PingResult();
        ~PingResult();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100b0b940, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // PingResult::PingResult(): jumps straight to the base-object constructor

    // 0x100b0b990, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // PingResult::~PingResult(): jumps straight to the base-object destructor

    // 0x100b11810, 16 bytes, complete-object constructor, inline, placed by class name
    // Ping::ThreadInfo::ThreadInfo(): jumps straight to the base-object constructor

    // 0x100b11820, 80 bytes, base-object constructor, inline, placed by class name
    // Ping::ThreadInfo::ThreadInfo()
    void Ping::ThreadInfo::ThreadInfo() {
        _func_decltype_nullptr* in_RSI;

        field_0 = 0;
        field_4 = 4294967295;
        new (&field_8) std::thread();
        new (&field_16, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x100b15960, 16 bytes, complete-object constructor, inline, placed by class name
    // Ping::Result::Result(): jumps straight to the base-object constructor

    // 0x100b16040, 32 bytes, base-object constructor, inline, placed by class name
    // Ping::Result::Result()
    void Ping::Result::Result() {
        field_0 = 0;
        field_2 = 0;
        field_4 = 4294967295;
    }

} // namespace jag::network
