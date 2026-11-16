// libs/game/runetek5/player/PlayerModel.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class PlayerModel {
    public:
        GetPlayerRematerialSlots() const;
        GetPlayerRecolourSlots() const;
        GetGender() const;
        PlayerModel(ConfigProvider*, PlayerVarDomain*);
        void SetAppearance(Array<PlayerModelWearSlot, BucketAllocatorEASTL> const&,
                           Array<shared_ptr<ObjTypeCustomisation>, BucketAllocatorEASTL> const&,
                           Array<unsigned char, BucketAllocatorEASTL> const&,
                           Array<unsigned char, BucketAllocatorEASTL> const&, PlayerGender, int);
        void ClearAppearance();
        void ClearRecolouredCache();
        GetPlayerAppearanceChangedTime();
        void SetIDKPart(unsigned int, int);
        void SetIDKRecolourSlot(unsigned int, unsigned char);
        void SetIDKRematerialSlot(unsigned int, unsigned char);
        void SetGender(PlayerGender);
        void SetObject(unsigned int, int);
        GetBodyModel(bool, graphics::RT7Core&, AssetBuilder&, BuildRequest<graphics::Model, BuildModelMain>&);
        ulong LoadFromBodyCache();
        GetHeadModel(bool, graphics::RT7Core&, AssetBuilder&, BuildRequest<graphics::Model, BuildModelMain>&,
                     Array<PlayerModelWearSlot, BucketAllocatorEASTL> const&);
        ulong LoadFromHeadCache();
        void GetPlayerRecolSource() const;
        void GetPlayerRecolDest() const;
        void GetPlayerRematSource() const;
        void GetPlayerRematDest() const;
        void DoReplaceHeld(SeqType const&);
        ReplaceHeld(int, bool);
        UnreplaceHeld(bool);
        ulong GetIDKSlot(unsigned int, bool);
        ulong ReplaceHeldInner(PlayerModelReplaceHeldStatus&, PlayerModelWearSlot&, int, int,
                               Array<unsigned int, eastl::allocator> const&);
        ulong UnreplaceHeldInner(PlayerModelReplaceHeldStatus&, int);
        ~PlayerModel();
        GetRecolouredModelsCache() const;
        static /* 32 bytes */ BASE_PART_MAP;    // = { 8, 11, 4, 6, 9, 7, 10, 0 }
        static /* 32 bytes */ BASE_PART_MALE;   // = { 0, 1, 2, 3, 4, 5, 6, 14 }
        static /* 32 bytes */ BASE_PART_FEMALE; // = { 7, 8, 9, 10, 11, 12, 13, 15 }

        // data members, from how the methods use this: 9688 bytes
        char _unknown_0[16];
        ConfigProvider* field_16;  // offset 16
        PlayerVarDomain* field_24; // offset 24
        char _unknown_32[96];
        int field_128;    // offset 128
        uint field_132;   // offset 132
        ushort field_136; // offset 136
        char _unknown_138[6];
        undefined8 m_playerAppearanceChangedTime; // offset 144
        PlayerModelReplaceHeldStatus field_152;   // offset 152
        char _unknown_184[24];
        PlayerModelReplaceHeldStatus field_208; // offset 208
        char _unknown_240[9368];
        ActiveComponent field_9608; // offset 9608
        char _unknown_9632[32];
        ActiveComponent field_9664; // offset 9664
    };

    class PlayerModelReplaceHeldStatus {
    public:
        PlayerModelReplaceHeldStatus();
        ~PlayerModelReplaceHeldStatus();
        void Reset();

        // data members, from how the methods use this: 32 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[3];
        undefined4 field_4; // offset 4
        char _unknown_8[24];
    };

    class PlayerModelWearSlot {
    public:
        PlayerModelWearSlot();
        operator==(PlayerModelWearSlot const&) const;

        // data members, from how the methods use this: 12 bytes
        undefined8 field_0; // offset 0
        char _unknown_8[4];
    };

    // 0x100495120, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // PlayerModelReplaceHeldStatus::PlayerModelReplaceHeldStatus(): jumps straight to the base-object constructor

    // 0x1004956f0, 48 bytes, inline, placed by class name
    // PlayerModel::ClearAppearance()
    void PlayerModel::ClearAppearance() {
        field_9608->Clear();
        field_9664->Clear();
    }

    // 0x100495720, 32 bytes, inline, placed by class name
    // PlayerModel::ClearRecolouredCache()
    void PlayerModel::ClearRecolouredCache() {
        (&field_1288)->Reset();
    }

    // 0x100498c90, 80 bytes, base-object constructor, inline, placed by class header (inline)
    // PlayerModelReplaceHeldStatus::PlayerModelReplaceHeldStatus()
    void PlayerModelReplaceHeldStatus::PlayerModelReplaceHeldStatus() {
        _func_decltype_nullptr* in_RSI;

        field_0 = 0;
        field_4 = 4294967295;
        new (&field_8, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_24) eastl::vector_map<
            unsigned int, eastl::pair<int, shared_ptr<ObjTypeCustomisation>>, eastl::less<unsigned int>,
            BucketAllocatorEASTL,
            eastl::vector<eastl::pair<unsigned int, eastl::pair<int, shared_ptr<ObjTypeCustomisation>>>,
                          BucketAllocatorEASTL>>();
    }

    // 0x100499170, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // PlayerModelReplaceHeldStatus::~PlayerModelReplaceHeldStatus()
    void PlayerModelReplaceHeldStatus::~PlayerModelReplaceHeldStatus() {
        (&field_24)->~vector_map();
        (&field_8)->~shared_ptr();
    }

    // 0x10049b480, 16 bytes, complete-object destructor, inline, placed by class name
    // PlayerModel::~PlayerModel(): jumps straight to the base-object destructor

    // 0x10049b490, 176 bytes, base-object destructor, inline, placed by class name
    // PlayerModel::~PlayerModel()
    void PlayerModel::~PlayerModel() {
        field_9664->~ActiveComponent();
        (&field_9640)->~vector();
        field_9608->~ActiveComponent();
        (&field_9584)->~vector();
        (&field_1288)->~AssetLRUHashCache();
        (&field_776)->~PlayerModelCache();
        (&field_264)->~PlayerModelCache();
        field_208->~PlayerModelReplaceHeldStatus();
        field_152->~PlayerModelReplaceHeldStatus();
        (&field_104)->~Array();
        (&field_80)->~Array();
        (&field_56)->~Array();
        (&field_32)->~Array();
        ~enable_shared_from_this();
    }

    // 0x100507f00, 16 bytes, inline, placed by class name
    // PlayerModel::GetRecolouredModelsCache() const
    undefined1* PlayerModel::GetRecolouredModelsCache() {
        return &field_1288;
    }

} // namespace jag::game
