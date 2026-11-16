// libs/oldscape/jagex3/js5/Js5NetThread.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::jagex3 {
    class Js5NetThread {
    public:
        Js5NetThread(LockFreeStack<Js5RemoteRequestData>& lockFreeStack, Js5LocalCache& js5LocalCache);
        bool Initialize(const Js5RemoteServerInfo* js5RemoteServerInfo, bool arg2);
        void SetWantConnection(bool arg1);
        void SendRequest(Js5RemoteRequestData* js5RemoteRequestData);
        void RequestGroup(Js5RemoteRequestData* js5RemoteRequestData);
        void EndAndJoin();
        uint64_t Run_AdoptRequestFromMain(Js5ArchiveId js5ArchiveId, Js5GroupId js5GroupId);
        Js5GroupId Run_ReceivePacket(int arg1);
        unsigned long Run_MakeConnection();
        void Run();
        ~Js5NetThread();

    private:
        LockFreeStack<Js5RemoteRequestData>* field_0;
        uint8_t _unknown_8[24];
        Js5LocalCache* field_32;
        uint8_t _unknown_40[208];
        WindowSavedPosition field_248;
        uint8_t _unknown_280[8];
        unsigned int field_288;
        uint8_t _unknown_292[4];
        Fence field_296;
        uint8_t _unknown_409[9759];
        Js5RemoteRequestData field_10168;
        Js5RemoteRequestData field_10248;
    };

    class Js5RemoteServerInfo {
    public:
        bool IsOldscape() const;

    private:
        char* field_0;
    };

    // 0x1002e1610
    void Js5NetThread::Js5NetThread(LockFreeStack<Js5RemoteRequestData>&, Js5LocalCache&)::$_2::operator()() const {
        Run(*(Js5NetThread**)this);
    }

    // 0x1002e2070
    Js5NetThread::~Js5NetThread() {
        field_10248->~QueueRequestItem();
        field_10168->~QueueRequestItem();
        field_424.~fixed_hash_map();
        field_296->~Fence();
        (&field_280)->~thread();
        field_248->~WindowSavedPosition();
        field_40.~BufferedSocket();
        field_8.~Array();
    }

} // namespace jag::oldscape::jagex3
