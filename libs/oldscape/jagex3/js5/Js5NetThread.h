// libs/oldscape/jagex3/js5/Js5NetThread.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::jagex3 {
    class Js5NetThread {
    public:
        Js5NetThread(LockFreeStack<Js5RemoteRequestData>&, Js5LocalCache&);
        bool Initialize(Js5RemoteServerInfo const*, bool);
        void SetWantConnection(bool);
        void SendRequest(Js5RemoteRequestData*);
        void RequestGroup(Js5RemoteRequestData*);
        void EndAndJoin();
        Run_AdoptRequestFromMain(Js5ArchiveId, Js5GroupId);
        uint Run_ReceivePacket(int);
        ulong Run_MakeConnection();
        void Run();
        ~Js5NetThread();

        // data members, from how the methods use this: 10328 bytes
        LockFreeStack* field_0; // offset 0
        char _unknown_8[24];
        Js5LocalCache* field_32; // offset 32
        char _unknown_40[208];
        WindowSavedPosition field_248; // offset 248
        char _unknown_280[8];
        uint field_288; // offset 288
        char _unknown_292[4];
        Fence field_296; // offset 296
        char _unknown_409[15];
        Js5RemoteRequestData* field_424; // offset 424
        char _unknown_432[9736];
        Js5RemoteRequestData field_10168; // offset 10168
        Js5RemoteRequestData field_10248; // offset 10248
    };

    class Js5RemoteServerInfo {
    public:
        IsOldscape() const;

        // data members, from how the methods use this: 8 bytes
        char* field_0; // offset 0
    };

    // 0x1002e1610, 16 bytes, inline, placed by class name
    // Js5NetThread::Js5NetThread(LockFreeStack<Js5RemoteRequestData>&, Js5LocalCache&)::$_2::operator()() const
    /* Js5NetThread::Js5NetThread(LockFreeStack<Js5RemoteRequestData>&,
   Js5LocalCache&)::$_2::TEMPNAMEPLACEHOLDERVALUE() const */

    void Js5NetThread::Js5NetThread(LockFreeStack<Js5RemoteRequestData>&, Js5LocalCache&)::$_2::operator()() {
        Run(*(Js5NetThread**)this);
    }

    // 0x1002e2060, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // Js5NetThread::~Js5NetThread(): jumps straight to the base-object destructor

    // 0x1002e2070, 112 bytes, base-object destructor, inline, placed by class name and debug map
    // Js5NetThread::~Js5NetThread()
    void Js5NetThread::~Js5NetThread() {
        field_10248->~QueueRequestItem();
        field_10168->~QueueRequestItem();
        (&field_424)->~fixed_hash_map();
        field_296->~Fence();
        (&field_280)->~thread();
        field_248->~WindowSavedPosition();
        (&field_40)->~BufferedSocket();
        (&field_8)->~Array();
    }

} // namespace jag::oldscape::jagex3
