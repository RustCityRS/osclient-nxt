// libs/game/runetek5/scene/ServerSyncingUser.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class ServerSyncingUser {
    public:
        SetDescription(char const*);
        uint GetSyncCycle() const;
        char* GetDescription() const;
        ServerSyncingUser(ServerSyncingPriority);
        ~ServerSyncingUser();
        void UnSync();
        CanBuild();
        void SetReady(bool);
        void Sync();
        void Sync(unsigned int);
        char IsCycleReady(unsigned int);
        void swap(ServerSyncingUser&);

        // data members, from how the methods use this: 21 bytes
        undefined4 field_0; // offset 0
        uint field_4;       // offset 4
        uint m_syncCycle;   // offset 8
        char field_12;      // offset 12
        char field_13;      // offset 13
        char _unknown_14[7];
    };

    // 0x100469d00, 16 bytes, inline, placed by class name and debug map
    // ServerSyncingUser::GetDescription() const
    char* ServerSyncingUser::GetDescription() {
        return "";
    }

    // 0x10046a9a0, 48 bytes, base-object constructor, placed by debug map only (low confidence)
    // ServerSyncingCycle::ServerSyncingCycle(unsigned int)
    void ServerSyncingCycle::ServerSyncingCycle(uint param_1) {
        m_cycle = param_1;
        field_4 = 1;
        new (&field_8)
            eastl::fixed_map<int, ServerSyncingCycle::SyncUserEntry, 32ul, true, eastl::less<int>, eastl::allocator>();
        field_1688 = 99;
        field_1692 = 0;
    }

    // 0x10046a9e0, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // ServerSyncingCycle::ServerSyncingCycle(unsigned int): jumps straight to the base-object constructor

    // 0x10046ab40, 16 bytes, inline, placed by debug map only (low confidence)
    // ServerSyncingCycle::operator==(ServerSyncingCycle const&) const
    /* ServerSyncingCycle::TEMPNAMEPLACEHOLDERVALUE(ServerSyncingCycle const&)
   const */

    undefined4 ServerSyncingCycle::operator==(ServerSyncingCycle* param_1) {
        return CONCAT31((int3)(m_cycle >> 8), m_cycle == param_1->m_cycle);
    }

    // 0x100669790, 128 bytes, inline, placed by class name
    // ServerSyncingUser::swap(ServerSyncingUser&)
    void ServerSyncingUser::swap(ServerSyncingUser* param_1) {
        if (field_0 != param_1->field_0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_priority == rhs.m_priority",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "ServerSyncingUser.h",
                      52, "Don\'t cross the streams!");
        }
        eastl::swap<unsigned int>(&field_4, &param_1->field_4);
        eastl::swap<unsigned int>(&m_syncCycle, &param_1->m_syncCycle);
        eastl::swap<signed char>((signed*)&field_12, (signed*)&param_1->field_12);
        eastl::swap<signed char>((signed*)&field_13, (signed*)&param_1->field_13);
    }

} // namespace jag::game
