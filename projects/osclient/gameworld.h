// projects/osclient/gameworld.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class GameWorld {
    public:
        uint64_t ListFetch();
        GameWorld* GetByID(int arg1);
        GameWorld();
        bool IsBeta() const;
        ~GameWorld();
        void QuickSort(Array<std::unique_ptr<GameWorld>>& gameWorlds, int arg2, int arg3, std::array<int, 4ul>& arg4,
                       std::array<int, 4ul>& arg5);
        bool IsMembers() const;
        void ListSort(int arg1, bool arg2, int arg3, bool arg4);
        void ListSort(int arg1, int arg2, int arg3, bool arg4, int arg5, bool arg6);
        void ListStart();
        void ListNext();
        bool IsQuickChat() const;
        bool IsPVP() const;
        bool IsLootShare() const;
        bool IsDeadman() const;
        bool IsNoSave() const;
        bool IsSeasonal() const;
        bool IsPvpArena() const;
        bool IsSpeedrunWorld() const;
        bool IsFreshStart() const;
        void HasWorldListDownloadStarted();
        void ListReorder(int arg1, int arg2);
        int CompareTo(const GameWorld& gameWorld1, const GameWorld& gameWorld2, int arg3, bool arg4, int arg5,
                      bool arg6);
        unsigned long CompareTo(const GameWorld& gameWorld1, const GameWorld& gameWorld2, int arg3, bool arg4);
        static int32_t m_dirs[4];     // = { 1, 1, 1, 1 }
        static int32_t m_ordering[4]; // = { 0, 1, 2, 3 }
        static Array<std::unique_ptr<GameWorld>> m_list;
        static int32_t m_num;
        static int32_t m_next;
        static unique_ptr<http::HTTPRequest> m_gameworldListDownloadRequest;

    private:
        uint8_t _unknown_0[4];
        uint8_t field_4;
        uint8_t field_5;
        uint8_t field_6;
        uint8_t field_7;
        uint32_t field_8;
        uint8_t _unknown_12[68];
        uint32_t field_80;
        uint8_t _unknown_84[36];
        uint32_t field_120;
        uint8_t _unknown_124[4];
    };

    // 0x10012f5b0
    GameWorld::GameWorld() {
        *(uint64_t*)this = 0;
        field_8 = 0;
        new (&field_16) eastl::string();
        new (&field_48) eastl::string();
        field_80 = 0;
        new (&field_88) eastl::string();
        field_120 = 0;
    }

    // 0x10012f630
    GameWorld::~GameWorld() {
        field_88.~basic_string();
        field_48.~basic_string();
        field_16.~basic_string();
    }

} // namespace jag::oldscape
