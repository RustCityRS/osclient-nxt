// libs/game/runetek5/config/npctype/NPCType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class NPCType {
    public:
        // virtual methods in vtable order
        virtual ~NPCType();
        virtual uint8_t* DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        virtual void PostDecode();
        uint8_t* GetOpNames() const;
        uint8_t* GetHeadIconIndex() const;
        uint8_t* GetHeadList() const;
        uint8_t* GetHeadIconGraphic() const;
        uint32_t GetIcon() const;
        unsigned int GetBaseAnimationSet() const;
        unsigned int GetOverlayHeight() const;
        unsigned int GetAnimationStateMachineID() const;
        unsigned int GetTurnSpeed() const;
        uint8_t* GetName() const;
        unsigned int GetVisibleCombatLevel() const;
        uint8_t GetWalkSmoothing() const;
        bool IsMultiNPC() const;
        bool HasBackgroundMovementSound() const;
        unsigned int GetBackgroundSoundReady() const;
        unsigned int GetBackgroundSoundRun() const;
        unsigned int GetBackgroundSoundCrawl() const;
        unsigned int GetBackgroundSoundWalk() const;
        unsigned int GetBackgroundSoundVolume() const;
        unsigned int GetBackgroundSoundDropoffRange() const;
        unsigned int GetBackgroundSoundRange() const;
        bool IsFamiliar() const;
        bool IsAlwaysOnTop() const;
        bool IsAlwaysOnBottom() const;
        unsigned int GetGridSize() const;
        unsigned int GetFadeInDuration() const;
        void GetCustomBounding() const;
        uint8_t UseFastPickingTests() const;
        unsigned int GetRoughBounding() const;
        uint8_t CastsShadows() const;
        bool HasHighlightOverride() const;
        unsigned int GetHighlightOverride() const;
        int GetAttackOpIndex() const;
        int GetFirstUniqueOpIndex() const;
        int GetExamineOpIndex() const;
        unsigned int GetReprioritiseAttackOp() const;
        bool IsExamineOnly() const;
        NPCType(BaseTemplateConfigTypeList<NPCType>* baseTemplateConfigTypeList, int arg2);
        void GetBodyModels(graphics::RT7Core* rt7Core, AssetBuilder& assetBuilder,
                           BuildRequest<graphics::Model, BuildModelMain>& buildRequest,
                           const NPCTypeCustomisation* npcTypeCustomisation, const PlayerVarDomain* playerVarDomain,
                           const ConfigProvider* configProvider);
        NPCType* GetMultiNPC(bool& arg1, const PlayerVarDomain* playerVarDomain, const ConfigProvider& configProvider);
        uint8_t* GetModel(ModelType modelType, graphics::RT7Core* rt7Core, AssetBuilder& assetBuilder,
                          BuildRequest<graphics::Model, BuildModelMain>& buildRequest, const Array<int>& arg5,
                          const NPCTypeCustomisation* npcTypeCustomisation, const ConfigProvider* configProvider);
        void GetHeadModels(graphics::RT7Core* rt7Core, AssetBuilder& assetBuilder,
                           BuildRequest<graphics::Model, BuildModelMain>& buildRequest,
                           const NPCTypeCustomisation* npcTypeCustomisation, const PlayerVarDomain* playerVarDomain,
                           const ConfigProvider* configProvider);
        uint8_t* GetBodyList() const;
        uint8_t* GetRecolourDest() const;
        uint8_t* GetRematerialDest() const;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullNpcType; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()

    private:
        uint8_t _unknown_8[16];
        Js5HTTPQueueRequest* field_24;
        int field_32;
        uint8_t _unknown_36[4];
        shared_ptr field_40;
        uint8_t _unknown_56[440];
        unsigned int field_496;
        uint8_t _unknown_500[28];
        uint8_t m_headIconGraphic[1];
        uint8_t _unknown_529[71];
        uint8_t m_headIconIndex[1];
        uint8_t _unknown_601[71];
        uint32_t field_672;
        uint32_t m_icon;
        unsigned int m_overlayHeight;
        unsigned int m_reprioritiseAttackOp;
        unsigned int m_visibleCombatLevel;
        uint8_t field_692;
        uint8_t _unknown_693[3];
        unsigned int field_696;
        unsigned int field_700;
        int m_firstUniqueOpIndex;
        int m_attackOpIndex;
        int m_examineOpIndex;
        uint8_t _unknown_716[4];
        uint8_t m_bodyList[1];
        uint8_t _unknown_721[23];
        uint8_t m_headList[1];
        uint8_t _unknown_745[223];
        uint8_t field_968;
        uint8_t field_969;
        uint8_t field_970;
        uint8_t field_971;
        uint8_t _unknown_972[14];
        short field_986;
        uint8_t field_988;
        uint8_t _unknown_989[3];
        unsigned int m_fadeInDuration;
        unsigned int field_996;
        uint8_t _unknown_1000[8];
        uint8_t field_1008;
        uint8_t _unknown_1009[3];
        unsigned int m_roughBounding;
        uint8_t field_1016;
        uint8_t _unknown_1017[3];
        unsigned int m_highlightOverride;
        unsigned int m_baseAnimationSet;
        unsigned int m_animationStateMachineID;
        unsigned int m_gridSize;
        uint8_t m_alwaysOnTop;
        uint8_t m_alwaysOnBottom;
        uint8_t m_familiar;
        uint8_t _unknown_1039[1];
        unsigned int m_turnSpeed;
        uint8_t field_1044;
        uint8_t m_walkSmoothing;
        uint8_t field_1046;
        uint8_t _unknown_1047[1];
        unsigned int field_1048;
        float field_1052;
        uint8_t* field_1056;
        uint8_t field_1064;
        uint8_t _unknown_1065[3];
        unsigned int field_1068;
        uint8_t _unknown_1072[24];
        unsigned int field_1096;
        unsigned int field_1100;
        bool m_hasBackgroundMovementSound;
        uint8_t _unknown_1105[3];
        unsigned int m_backgroundSoundReady;
        unsigned int m_backgroundSoundCrawl;
        unsigned int m_backgroundSoundWalk;
        unsigned int m_backgroundSoundRun;
        unsigned int m_backgroundSoundRange;
        unsigned int m_backgroundSoundDropoffRange;
        unsigned int m_backgroundSoundVolume;
        unsigned int field_1136;
        unsigned int field_1140;
        uint8_t _unknown_1144[4];
    };

    // 0x100417fb0
    uint8_t* NPCType::GetHeadIconGraphic() const {
        return &field_528;
    }

    // 0x100418630
    uint32_t NPCType::GetIcon() const {
        return m_icon;
    }

    // 0x1004187c0
    unsigned int NPCType::GetBaseAnimationSet() const {
        return m_baseAnimationSet;
    }

    // 0x100418820
    unsigned int NPCType::GetOverlayHeight() const {
        return m_overlayHeight;
    }

    // 0x100418ef0
    unsigned int NPCType::GetAnimationStateMachineID() const {
        return m_animationStateMachineID;
    }

    // 0x100418f00
    unsigned int NPCType::GetTurnSpeed() const {
        return m_turnSpeed;
    }

    // 0x100418f30
    uint8_t* NPCType::GetName() const {
        return &field_440;
    }

    // 0x100418f40
    unsigned int NPCType::GetVisibleCombatLevel() const {
        return m_visibleCombatLevel;
    }

    // 0x100418f50
    uint8_t NPCType::GetWalkSmoothing() const {
        return m_walkSmoothing;
    }

    // 0x1004192e0
    bool NPCType::IsMultiNPC() const {
        return field_1072.empty() ^ 1;
    }

    // 0x100419b60
    bool NPCType::HasBackgroundMovementSound() const {
        return m_hasBackgroundMovementSound;
    }

    // 0x100419b70
    unsigned int NPCType::GetBackgroundSoundReady() const {
        return m_backgroundSoundReady;
    }

    // 0x100419ca0
    unsigned int NPCType::GetBackgroundSoundRun() const {
        return m_backgroundSoundRun;
    }

    // 0x100419cf0
    unsigned int NPCType::GetBackgroundSoundCrawl() const {
        return m_backgroundSoundCrawl;
    }

    // 0x100419d00
    unsigned int NPCType::GetBackgroundSoundWalk() const {
        return m_backgroundSoundWalk;
    }

    // 0x100419d10
    unsigned int NPCType::GetBackgroundSoundVolume() const {
        return m_backgroundSoundVolume;
    }

    // 0x100419d20
    unsigned int NPCType::GetBackgroundSoundDropoffRange() const {
        return m_backgroundSoundDropoffRange;
    }

    // 0x100419d30
    unsigned int NPCType::GetBackgroundSoundRange() const {
        return m_backgroundSoundRange;
    }

    // 0x100419f00
    bool NPCType::IsFamiliar() const {
        return m_familiar;
    }

    // 0x100419f10
    bool NPCType::IsAlwaysOnTop() const {
        return m_alwaysOnTop;
    }

    // 0x100419f20
    bool NPCType::IsAlwaysOnBottom() const {
        return m_alwaysOnBottom;
    }

    // 0x10041a180
    unsigned int NPCType::GetGridSize() const {
        return m_gridSize;
    }

    // 0x10041a190
    unsigned int NPCType::GetFadeInDuration() const {
        return m_fadeInDuration;
    }

    // 0x10041a300
    void NPCType::GetCustomBounding() const {
        field_1000.get();
    }

    // 0x10041a400
    uint8_t NPCType::UseFastPickingTests() const {
        return field_1008;
    }

    // 0x10041a510
    unsigned int NPCType::GetRoughBounding() const {
        return m_roughBounding;
    }

    // 0x10041af10
    uint8_t NPCType::CastsShadows() const {
        return field_692;
    }

    // 0x10041b1a0
    bool NPCType::HasHighlightOverride() const {
        return m_highlightOverride != 9;
    }

    // 0x10041b1b0
    unsigned int NPCType::GetHighlightOverride() const {
        return m_highlightOverride;
    }

    // 0x10041b1d0
    int NPCType::GetAttackOpIndex() const {
        return m_camHeight;
    }

    // 0x10041b1e0
    int NPCType::GetFirstUniqueOpIndex() const {
        return m_pendingSkyID;
    }

    // 0x10041b1f0
    int NPCType::GetExamineOpIndex() const {
        return m_camZoom;
    }

    // 0x10041b210
    unsigned int NPCType::GetReprioritiseAttackOp() const {
        return m_reprioritiseAttackOp;
    }

    // 0x10041b220
    bool NPCType::IsExamineOnly() const {
        if ((m_attackOpIndex == 6) && (m_firstUniqueOpIndex == 6)) {
            return m_examineOpIndex != 6;
        }
        return false;
    }

    // 0x100505580
    uint8_t* NPCType::GetBodyList() const {
        return &field_720;
    }

    // 0x1005056e0
    uint8_t* NPCType::GetRecolourDest() const {
        return &field_824;
    }

    // 0x1005056f0
    uint8_t* NPCType::GetRematerialDest() const {
        return &field_920;
    }

    // 0x10050b030
    NPCType::~NPCType() {
        field_1072.~Array();
        field_1000.~unique_ptr();
        field_944.~Array();
        field_920.~Array();
        field_896.~Array();
        field_872.~Array();
        field_848.~Array();
        field_824.~Array();
        field_800.~Array();
        field_768.~vector();
        m_headList->~Array();
        m_bodyList->~Array();
        m_headIconIndex->~fixed_vector();
        m_headIconGraphic->~fixed_vector();
        field_504.~Array();
        field_472.~Array();
        field_440.~basic_string();
        field_56.~array();
    }

} // namespace jag::game
