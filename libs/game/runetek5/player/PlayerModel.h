// libs/game/runetek5/player/PlayerModel.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class PlayerModel {
    public:
        uint64_t* GetPlayerRematerialSlots() const;
        uint8_t* GetPlayerRecolourSlots() const;
        PlayerGender GetGender() const;
        PlayerModel(ConfigProvider* configProvider, PlayerVarDomain* playerVarDomain);
        void SetAppearance(const Array<PlayerModelWearSlot>& playerModelWearSlots,
                           const Array<shared_ptr<ObjTypeCustomisation>>& objTypeCustomisations,
                           const Array<unsigned char>& arg3, const Array<unsigned char>& arg4,
                           PlayerGender playerGender, int arg6);
        void ClearAppearance();
        void ClearRecolouredCache();
        uint64_t GetPlayerAppearanceChangedTime();
        void SetIDKPart(unsigned int arg1, int arg2);
        void SetIDKRecolourSlot(unsigned int arg1, unsigned char arg2);
        void SetIDKRematerialSlot(unsigned int arg1, unsigned char arg2);
        void SetGender(PlayerGender playerGender);
        void SetObject(unsigned int arg1, int arg2);
        uint8_t* GetBodyModel(bool arg1, graphics::RT7Core& rt7Core, AssetBuilder& assetBuilder,
                              BuildRequest<graphics::Model, BuildModelMain>& buildRequest);
        uint32_t LoadFromBodyCache();
        void GetHeadModel(bool arg1, graphics::RT7Core& rt7Core, AssetBuilder& assetBuilder,
                          BuildRequest<graphics::Model, BuildModelMain>& buildRequest,
                          const Array<PlayerModelWearSlot>& playerModelWearSlots);
        uint32_t LoadFromHeadCache();
        Array<Array<unsigned short>>* GetPlayerRecolSource() const;
        Array<Array<Array<unsigned short>>>* GetPlayerRecolDest() const;
        Array<Array<unsigned short>>* GetPlayerRematSource() const;
        Array<Array<Array<unsigned short>>>* GetPlayerRematDest() const;
        void DoReplaceHeld(const SeqType& seqType);
        uint64_t ReplaceHeld(int arg1, bool arg2);
        uint32_t UnreplaceHeld(bool arg1);
        unsigned long GetIDKSlot(unsigned int arg1, bool arg2);
        unsigned long ReplaceHeldInner(PlayerModelReplaceHeldStatus& playerModelReplaceHeldStatus,
                                       PlayerModelWearSlot& playerModelWearSlot, int arg3, int arg4,
                                       const Array<unsigned int>& arg5);
        unsigned long UnreplaceHeldInner(PlayerModelReplaceHeldStatus& playerModelReplaceHeldStatus, int arg2);
        ~PlayerModel();
        AssetLRUHashCache<graphics::Model, BuildModelMain, _100ul, _101ul, false>* GetRecolouredModelsCache() const;
        static int32_t BASE_PART_MAP[8];    // = { 8, 11, 4, 6, 9, 7, 10, 0 }
        static int32_t BASE_PART_MALE[8];   // = { 0, 1, 2, 3, 4, 5, 6, 14 }
        static int32_t BASE_PART_FEMALE[8]; // = { 7, 8, 9, 10, 11, 12, 13, 15 }

    private:
        uint8_t _unknown_0[16];
        ConfigProvider* field_16;
        PlayerVarDomain* field_24;
        uint8_t _unknown_32[96];
        PlayerGender m_gender;
        int field_132;
        unsigned short field_136;
        uint8_t _unknown_138[6];
        uint64_t m_playerAppearanceChangedTime;
        PlayerModelReplaceHeldStatus field_152;
        uint8_t _unknown_184[24];
        PlayerModelReplaceHeldStatus field_208;
        uint8_t _unknown_240[9368];
        ActiveComponent field_9608;
        uint8_t _unknown_9632[32];
        ActiveComponent field_9664;
    };

    class PlayerModelReplaceHeldStatus {
    public:
        PlayerModelReplaceHeldStatus();
        ~PlayerModelReplaceHeldStatus();
        void Reset();

    private:
        uint8_t field_0;
        uint8_t _unknown_1[3];
        uint32_t field_4;
        uint8_t _unknown_8[24];
    };

    class PlayerModelWearSlot {
    public:
        PlayerModelWearSlot();
        uint32_t operator==(const PlayerModelWearSlot& point) const;

    private:
        uint64_t field_0;
        uint8_t _unknown_8[4];
    };

    // 0x1004956f0
    void PlayerModel::ClearAppearance() {
        field_9608->Clear();
        field_9664->Clear();
    }

    // 0x100495720
    void PlayerModel::ClearRecolouredCache() {
        field_1288.Reset();
    }

    // 0x100498c90
    PlayerModelReplaceHeldStatus::PlayerModelReplaceHeldStatus() : field_0(0), field_4(4294967295) {}

    // 0x100499170
    PlayerModelReplaceHeldStatus::~PlayerModelReplaceHeldStatus() {
        field_24.~vector_map();
        field_8.~shared_ptr();
    }

    // 0x10049b490
    PlayerModel::~PlayerModel() {
        field_9664->~ActiveComponent();
        field_9640.~vector();
        field_9608->~ActiveComponent();
        field_9584.~vector();
        field_1288.~AssetLRUHashCache();
        field_776.~PlayerModelCache();
        field_264.~PlayerModelCache();
        field_208->~PlayerModelReplaceHeldStatus();
        field_152->~PlayerModelReplaceHeldStatus();
        field_104.~Array();
        field_80.~Array();
        field_56.~Array();
        field_32.~Array();
    }

    // 0x100507f00
    AssetLRUHashCache<graphics::Model, BuildModelMain, _100ul, _101ul, false>*
    PlayerModel::GetRecolouredModelsCache() const {
        return (AssetLRUHashCache<graphics::Model, BuildModelMain, _100ul, _101ul, false>*)&field_1288;
    }

} // namespace jag::game
