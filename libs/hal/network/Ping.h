// libs/hal/network/Ping.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::network {
    class Ping {
    public:
        class Result;
        class ThreadInfo;
        // virtual methods in vtable order
        virtual ~Ping();
        void Shutdown();
        Ping(int arg1);
        void InitialiseThreads();
        void ShutdownThreads();
        uint64_t Get(PingResult& pingResult, const IPAddress& ipAddress);
        void StartPing(IPAddress ipAddress);
        unsigned long AllFinished();
        void Refresh();
        void NeedThreads(int arg1);
        bool IsQueued(IPAddress ipAddress);
        unsigned long IsRunning(IPAddress ipAddress);
        void PingThreadWrapper(ThreadInfo& threadInfo);
        void PingThread();
        unsigned long GetNextIPAddress(IPAddress& ipAddress);
        void InitialiseLibrary();
        void ShutdownLibrary();
        uint64_t DoPing(IPAddress ipAddress);

    private:
        uint8_t _unknown_8[16];
        int field_24;
        uint8_t _unknown_28[636];
        uint32_t field_664;
        uint8_t _unknown_668[68];
        IPAddress field_736;
        uint8_t _unknown_772[76];
    };

    class Ping::Result {
    public:
        Result();

    private:
        uint16_t field_0;
        uint8_t field_2;
        uint8_t _unknown_3[1];
        uint32_t field_4;
        uint8_t _unknown_8[4];
    };

    class Ping::ThreadInfo {
    public:
        ~ThreadInfo();
        ThreadInfo();

    private:
        uint8_t field_0;
        uint8_t _unknown_1[3];
        uint32_t field_4;
        uint8_t _unknown_8[16];
    };

    class PingResult {
    public:
        PingResult();
        ~PingResult();

        uint8_t _unknown_0[1];
    };

    // 0x100b11820
    Ping::ThreadInfo::ThreadInfo() : field_0(0), field_4(4294967295) {
        new (&field_16) shared_ptr();
    }

    // 0x100b16040
    Ping::Result::Result() : field_0(0), field_2(0), field_4(4294967295) {}

} // namespace jag::network
