// projects/osclient/gameworld.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class GameWorld {
    public:
        ListFetch();
        GetByID(int);
        GameWorld();
        byte IsBeta() const;
        ~GameWorld();
        void QuickSort(Array<std::unique_ptr<GameWorld, std::default_delete<GameWorld>>, eastl::allocator>&, int, int,
                       std::array<int, 4ul>&, std::array<int, 4ul>&);
        byte IsMembers() const;
        void ListSort(int, bool, int, bool);
        void ListSort(int, int, int, bool, int, bool);
        void ListStart();
        ListNext();
        byte IsQuickChat() const;
        byte IsPVP() const;
        byte IsLootShare() const;
        byte IsDeadman() const;
        byte IsNoSave() const;
        byte IsSeasonal() const;
        byte IsPvpArena() const;
        byte IsSpeedrunWorld() const;
        byte IsFreshStart() const;
        void HasWorldListDownloadStarted();
        void ListReorder(int, int);
        int CompareTo(GameWorld const&, GameWorld const&, int, bool, int, bool);
        ulong CompareTo(GameWorld const&, GameWorld const&, int, bool);
        static /* 16 bytes */ m_dirs;     // = { 1, 1, 1, 1 }
        static /* 16 bytes */ m_ordering; // = { 0, 1, 2, 3 }
        static /* 24 bytes */ m_list;
        static /* 4 bytes */ m_num;
        static /* 4 bytes */ m_next;
        static /* 8 bytes */ m_gameworldListDownloadRequest;

        // data members, from how the methods use this: 128 bytes
        char _unknown_0[4];
        undefined1 field_4; // offset 4
        undefined1 field_5; // offset 5
        byte field_6;       // offset 6
        undefined1 field_7; // offset 7
        undefined4 field_8; // offset 8
        char _unknown_12[68];
        undefined4 field_80; // offset 80
        char _unknown_84[36];
        undefined4 field_120; // offset 120
        char _unknown_124[4];
    };

    // 0x1001134a0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // GameWorld::GameWorld(): jumps straight to the base-object constructor

    // 0x1001134f0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // GameWorld::~GameWorld(): jumps straight to the base-object destructor

    // 0x10012f5b0, 128 bytes, base-object constructor, inline, placed by class name
    // GameWorld::GameWorld()
    void GameWorld::GameWorld() {
        *(undefined8*)this = 0;
        field_8 = 0;
        new (&field_16) eastl::string();
        new (&field_48) eastl::string();
        field_80 = 0;
        new (&field_88) eastl::string();
        field_120 = 0;
    }

    // 0x10012f630, 48 bytes, base-object destructor, inline, placed by class name
    // GameWorld::~GameWorld()
    void GameWorld::~GameWorld() {
        (&field_88)->~basic_string();
        (&field_48)->~basic_string();
        (&field_16)->~basic_string();
    }

} // namespace jag::oldscape
