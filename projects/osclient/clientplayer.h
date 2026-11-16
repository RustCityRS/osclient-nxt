// projects/osclient/clientplayer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class ClientPlayer : public ClientNpc // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ClientPlayer();
        virtual GetTempModel(int);
        virtual bool Ready() const;
        virtual ulong HasAnyOverlays(int, int) const;
        void SetHighlight(HighlightChannelProperties const*);
        HighlightChannelProperties* GetHighlight();
        void ResetIsFriendCachedState();
        void ResetIsFriendChatCachedState();
        void ResetIsClanCachedState();
        bool IsOnlineFriend();
        bool IsFriendChat();
        GetSize();
        void AddRoutePoint(int, int, signed char);
        void Init();
        ulong HasAppearance() const;
        void SetAppearance(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        void RecalcIsOnlineFriend();
        void RecalcIsFriendChat();
        bool IsGroup();
        void RecalcIsGroup();
        void AddToRoute(int, int, signed char);
        void InstantMove(int, int);
        ClientPlayer();

        // data members, from how the methods use this: 1248 bytes, the first 1088 are ClientNpc
        char _unknown_1088[40];
        undefined8 field_1128; // offset 1128
        char _unknown_1136[4];
        undefined8 field_1140; // offset 1140
        char _unknown_1148[44];
        undefined1 field_1192; // offset 1192
        char _unknown_1193[3];
        undefined4 field_1196; // offset 1196
        undefined1 field_1200; // offset 1200
        char _unknown_1201[3];
        int field_1204;        // offset 1204
        int field_1208;        // offset 1208
        undefined1 field_1212; // offset 1212
        char _unknown_1213[11];
        uint field_1224;       // offset 1224
        int field_1228;        // offset 1228
        undefined4 field_1232; // offset 1232
        char _unknown_1236[4];
        HighlightChannelProperties* m_pHighlight; // offset 1240
    };

    // 0x1000139a0, 16 bytes, inline, placed by class name and debug map
    // ClientPlayer::SetHighlight(HighlightChannelProperties const*)
    void ClientPlayer::SetHighlight(HighlightChannelProperties* param_1) {
        m_pHighlight = param_1;
    }

    // 0x1000de4a0, 16 bytes, inline, placed by class name
    // ClientPlayer::GetHighlight()
    HighlightChannelProperties* ClientPlayer::GetHighlight() {
        return m_pHighlight;
    }

    // 0x100124ac0, 16 bytes, complete-object destructor, inline, placed by class name
    // ClientPlayer::~ClientPlayer(): jumps straight to the base-object destructor

    // 0x100124ad0, 32 bytes, deleting destructor, inline, placed by class name
    // ClientPlayer::~ClientPlayer()
    void ClientPlayer::~ClientPlayer() {
        ~ClientPlayer(this);
        operator_delete(this);
    }

    // 0x100131ef0, 112 bytes, base-object destructor, inline, placed by class name
    // ClientPlayer::~ClientPlayer()
    void ClientPlayer::~ClientPlayer() {
        long lVar1;

        (&field_1160)->~shared_ptr();
        lVar1 = 0;
        do {
            ((field_276 + lVar1 + 820))->~basic_string();
            lVar1 = lVar1 + -32;
        } while (lVar1 != -96);
        (&field_1008)->~shared_ptr();
        (&field_992)->~shared_ptr();
        ~ClientEntity();
    }

    // 0x100153ec0, 16 bytes, complete-object constructor, inline, placed by class name
    // ClientPlayer::ClientPlayer(): jumps straight to the base-object constructor

    // 0x100153ed0, 368 bytes, base-object constructor, inline, placed by class name
    // ClientPlayer::ClientPlayer()
    void ClientPlayer::ClientPlayer() {
        long lVar1;
        _func_decltype_nullptr* in_RSI;

        new (this) ClientEntity();
        field_0 = &PTR__ClientPlayer_100ef42b8;
        new (&field_992, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_1008, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_1024 = -1;
        field_1028 = -1;
        lVar1 = 0;
        do {
            new ((field_276 + lVar1 + 756)) eastl::string();
            lVar1 = lVar1 + 32;
        } while (lVar1 != 96);
        field_1128 = 0;
        field_1140 = 0;
        new (&field_1160, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_1192 = 0;
        field_1196 = 0;
        field_1200 = 0;
        field_1212 = 0;
        field_1224 = 0;
        field_1228 = 0;
        field_1232 = 0;
        m_pHighlight = (HighlightChannelProperties*)0;
    }

} // namespace jag::oldscape
