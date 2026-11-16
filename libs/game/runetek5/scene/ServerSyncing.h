// libs/game/runetek5/scene/ServerSyncing.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class ServerSyncing {
    public:
        ServerSyncing();
        void Reset(int arg1);
        void NewCycle();
        void CheckForStaleCycles();
        void RemoveCycle(unsigned int arg1);
        void Add(ServerSyncingUser& serverSyncingUser);
        ServerSyncingCycle* GetSyncFrame(unsigned int arg1);
        unsigned int GetCurrentCycle() const;
        void Add(ServerSyncingUser& serverSyncingUser, unsigned int arg2);
        void Remove(ServerSyncingUser& serverSyncingUser);
        bool CanBuild(const ServerSyncingUser& serverSyncingUser);
        void SetReady(const ServerSyncingUser& serverSyncingUser, bool arg2);
        unsigned long IsSynced(const ServerSyncingUser& serverSyncingUser);
        unsigned long IsReady(unsigned int arg1, const ServerSyncingUser& serverSyncingUser);
        ~ServerSyncing();

    private:
        uint8_t _unknown_0[72];
        long field_72;
        uint8_t _unknown_80[56496];
        unsigned int m_currentCycle;
        uint32_t field_56580;
        uint8_t _unknown_56584[4];
    };

    class ServerSyncingCycle {
    public:
        unsigned int GetCycle() const;
        unsigned int AllReady() const;
        void Add(ServerSyncingUser& serverSyncingUser);
        void Remove(ServerSyncingUser& serverSyncingUser);
        bool CanBuild(const ServerSyncingUser& serverSyncingUser);
        void SetReady(const ServerSyncingUser& serverSyncingUser, bool arg2);
        void IsSynced(const ServerSyncingUser& serverSyncingUser);
        bool IsReady(unsigned int arg1, ServerSyncingPriority serverSyncingPriority) const;
        ServerSyncingCycle(unsigned int arg1);
        uint32_t operator==(const ServerSyncingCycle& serverSyncingCycle) const;
        ServerSyncingCycle(ServerSyncingCycle&& serverSyncingCycle);
        ServerSyncingCycle* operator=(ServerSyncingCycle&& serverSyncingCycle);
        ~ServerSyncingCycle();

    private:
        unsigned int m_cycle;
        int field_4;
        uint8_t _unknown_8[1680];
        ServerSyncingPriority field_1688;
        unsigned int field_1692;
        uint8_t _unknown_1696[4];
    };

    // 0x100469cf0
    unsigned int ServerSyncing::GetCurrentCycle() const {
        return m_currentCycle;
    }

    // 0x100570780
    ServerSyncing::~ServerSyncing() {}

} // namespace jag::game
