// projects/osclient/clientplayer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class ClientPlayer : public ClientNpc // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ClientPlayer();
        virtual auto GetTempModel(int arg1);
        virtual bool Ready() const;
        virtual unsigned long HasAnyOverlays(int arg1, int arg2) const;
        void SetHighlight(const HighlightChannelProperties* highlightChannelProperties);
        HighlightChannelProperties* GetHighlight();
        void ResetIsFriendCachedState();
        void ResetIsFriendChatCachedState();
        void ResetIsClanCachedState();
        bool IsOnlineFriend();
        bool IsFriendChat();
        uint32_t GetSize();
        void AddRoutePoint(int arg1, int arg2, signed char arg3);
        void Init();
        unsigned long HasAppearance() const;
        void SetAppearance(PacketJ<Array<unsigned char>>& packetJ);
        void RecalcIsOnlineFriend();
        void RecalcIsFriendChat();
        bool IsGroup();
        void RecalcIsGroup();
        void AddToRoute(int arg1, int arg2, signed char arg3);
        void InstantMove(int arg1, int arg2);
        ClientPlayer();

    private:
        uint8_t _unknown_1088[40];
        uint64_t field_1128;
        int field_1136;
        int field_1140;
        int field_1144;
        int field_1148;
        int field_1152;
        int field_1156;
        uint8_t _unknown_1160[32];
        uint8_t field_1192;
        uint8_t _unknown_1193[3];
        uint32_t field_1196;
        uint8_t field_1200;
        uint8_t _unknown_1201[3];
        int field_1204;
        int field_1208;
        uint8_t field_1212;
        uint8_t _unknown_1213[11];
        unsigned int field_1224;
        int field_1228;
        uint32_t field_1232;
        uint8_t _unknown_1236[4];
        HighlightChannelProperties* m_pHighlight;
    };

    // 0x1000139a0
    void ClientPlayer::SetHighlight(const HighlightChannelProperties* highlightChannelProperties) {
        m_pHighlight = highlightChannelProperties;
    }

    // 0x1000de4a0
    HighlightChannelProperties* ClientPlayer::GetHighlight() {
        return m_pHighlight;
    }

    // 0x100131ef0
    ClientPlayer::~ClientPlayer() {
        field_1160.~shared_ptr();
        long lVar1 = 0;
        do {
            ((field_276 + lVar1 + 820))->~basic_string();
            lVar1 = lVar1 - 32;
        } while (lVar1 != -96);
        field_1008.~shared_ptr();
        field_992.~shared_ptr();
    }

    // 0x100153ed0
    ClientPlayer::ClientPlayer() : ClientEntity(), field_1024(-1), field_1028(-1) {
        long lVar1 = 0;
        do {
            new ((field_276 + lVar1 + 756)) eastl::string();
            lVar1 = lVar1 + 32;
        } while (lVar1 != 96);
        field_1128 = 0;
        field_1140 = 0;
        field_1144 = 0;
        new (&field_1160) shared_ptr();
        field_1192 = 0;
        field_1196 = 0;
        field_1200 = 0;
        field_1212 = 0;
        field_1224 = 0;
        field_1228 = 0;
        field_1232 = 0;
        m_pHighlight = nullptr;
    }

} // namespace jag::oldscape
