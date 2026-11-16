// libs/game/runetek5/scene/ServerSyncing.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class ServerSyncing {
    public:
        ServerSyncing();
        void Reset(int);
        void NewCycle();
        void CheckForStaleCycles();
        void RemoveCycle(unsigned int);
        void Add(ServerSyncingUser&);
        ServerSyncingCycle* GetSyncFrame(unsigned int);
        uint GetCurrentCycle() const;
        void Add(ServerSyncingUser&, unsigned int);
        void Remove(ServerSyncingUser&);
        byte CanBuild(ServerSyncingUser const&);
        void SetReady(ServerSyncingUser const&, bool);
        ulong IsSynced(ServerSyncingUser const&);
        ulong IsReady(unsigned int, ServerSyncingUser const&);
        ~ServerSyncing();

        // data members, from how the methods use this: 56588 bytes
        char _unknown_0[72];
        long field_72; // offset 72
        char _unknown_80[56496];
        uint m_currentCycle;    // offset 56576
        undefined4 field_56580; // offset 56580
        char _unknown_56584[4];
    };

    class ServerSyncingCycle {
    public:
        uint GetCycle() const;
        ulong AllReady() const;
        void Add(ServerSyncingUser&);
        void Remove(ServerSyncingUser&);
        ulong CanBuild(ServerSyncingUser const&);
        void SetReady(ServerSyncingUser const&, bool);
        void IsSynced(ServerSyncingUser const&);
        bool IsReady(unsigned int, ServerSyncingPriority) const;
        ServerSyncingCycle(unsigned int);
        operator==(ServerSyncingCycle const&) const;
        ServerSyncingCycle(ServerSyncingCycle&&);
        ServerSyncingCycle* operator=(ServerSyncingCycle&&);
        ~ServerSyncingCycle();

        // data members, from how the methods use this: 1700 bytes
        uint m_cycle;       // offset 0
        int field_4;        // offset 4
        undefined1 field_8; // offset 8
        char _unknown_9[1679];
        int field_1688;  // offset 1688
        uint field_1692; // offset 1692
        char _unknown_1696[4];
    };

    // 0x100469cf0, 16 bytes, inline, placed by class name and debug map
    // ServerSyncing::GetCurrentCycle() const
    uint ServerSyncing::GetCurrentCycle() {
        return m_currentCycle;
    }

    // 0x100570770, 16 bytes, complete-object destructor, inline, placed by class name
    // ServerSyncing::~ServerSyncing(): jumps straight to the base-object destructor

    // 0x100570780, 32 bytes, base-object destructor, inline, placed by class name
    // ServerSyncing::~ServerSyncing()
    void ServerSyncing::~ServerSyncing() {
        ~fixed_list();
        ~AutoSingleton();
    }

} // namespace jag::game
