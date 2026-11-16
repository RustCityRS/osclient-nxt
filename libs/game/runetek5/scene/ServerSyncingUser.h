// libs/game/runetek5/scene/ServerSyncingUser.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class ServerSyncingUser {
    public:
        void SetDescription(const char* arg1);
        unsigned int GetSyncCycle() const;
        char* GetDescription() const;
        ServerSyncingUser(ServerSyncingPriority serverSyncingPriority);
        ~ServerSyncingUser();
        void UnSync();
        bool CanBuild();
        void SetReady(bool arg1);
        void Sync();
        void Sync(unsigned int arg1);
        bool IsCycleReady(unsigned int arg1);
        void swap(ServerSyncingUser& serverSyncingUser);

    private:
        ServerSyncingPriority field_0;
        int field_4;
        unsigned int m_syncCycle;
        unsigned char field_12;
        unsigned char field_13;
        uint8_t _unknown_14[7];
    };

    // 0x100469d00
    char* ServerSyncingUser::GetDescription() const {
        return "";
    }

    // 0x10046a9a0
    ServerSyncingCycle::ServerSyncingCycle(unsigned int arg1)
        : m_cycle(arg1), field_4(1), field_1688(99), field_1692(0) {}

    // 0x10046ab40
    uint32_t ServerSyncingCycle::operator==(const ServerSyncingCycle& serverSyncingCycle) const {
        return m_cycle == serverSyncingCycle.m_cycle;
    }

    // 0x100669790
    void ServerSyncingUser::swap(ServerSyncingUser& serverSyncingUser) {
        if (field_0 != serverSyncingUser.field_0) {
            LogAssert("m_priority == rhs.m_priority",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "ServerSyncingUser.h",
                      52, "Don\'t cross the streams!");
        }
        eastl::swap<unsigned int>(field_4, serverSyncingUser.field_4);
        eastl::swap<unsigned int>(m_syncCycle, serverSyncingUser.m_syncCycle);
        eastl::swap<signed char>(field_12, serverSyncingUser.field_12);
        eastl::swap<signed char>(field_13, serverSyncingUser.field_13);
    }

} // namespace jag::game
