// libs/game/runetek5/config/npctype/NPCType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class NPCType {
    public:
        // virtual methods in vtable order
        virtual ~NPCType();
        virtual DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        virtual void PostDecode();
        GetOpNames() const;
        GetHeadIconIndex() const;
        GetHeadList() const;
        GetHeadIconGraphic() const;
        GetIcon() const;
        uint GetBaseAnimationSet() const;
        uint GetOverlayHeight() const;
        uint GetAnimationStateMachineID() const;
        uint GetTurnSpeed() const;
        GetName() const;
        uint GetVisibleCombatLevel() const;
        GetWalkSmoothing() const;
        byte IsMultiNPC() const;
        bool HasBackgroundMovementSound() const;
        uint GetBackgroundSoundReady() const;
        uint GetBackgroundSoundRun() const;
        uint GetBackgroundSoundCrawl() const;
        uint GetBackgroundSoundWalk() const;
        uint GetBackgroundSoundVolume() const;
        uint GetBackgroundSoundDropoffRange() const;
        uint GetBackgroundSoundRange() const;
        IsFamiliar() const;
        IsAlwaysOnTop() const;
        IsAlwaysOnBottom() const;
        uint GetGridSize() const;
        uint GetFadeInDuration() const;
        void GetCustomBounding() const;
        UseFastPickingTests() const;
        uint GetRoughBounding() const;
        CastsShadows() const;
        bool HasHighlightOverride() const;
        uint GetHighlightOverride() const;
        int GetAttackOpIndex() const;
        int GetFirstUniqueOpIndex() const;
        int GetExamineOpIndex() const;
        uint GetReprioritiseAttackOp() const;
        bool IsExamineOnly() const;
        NPCType(BaseTemplateConfigTypeList<NPCType>*, int);
        GetBodyModels(graphics::RT7Core*, AssetBuilder&, BuildRequest<graphics::Model, BuildModelMain>&,
                      NPCTypeCustomisation const*, PlayerVarDomain const*, ConfigProvider const*);
        GetMultiNPC(bool&, PlayerVarDomain const*, ConfigProvider const&);
        GetModel(ModelType, graphics::RT7Core*, AssetBuilder&, BuildRequest<graphics::Model, BuildModelMain>&,
                 Array<int, eastl::allocator> const&, NPCTypeCustomisation const*, ConfigProvider const*);
        GetHeadModels(graphics::RT7Core*, AssetBuilder&, BuildRequest<graphics::Model, BuildModelMain>&,
                      NPCTypeCustomisation const*, PlayerVarDomain const*, ConfigProvider const*);
        GetBodyList() const;
        GetRecolourDest() const;
        GetRematerialDest() const;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullNpcType;

        // data members, from how the methods use this: 1148 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        Js5HTTPQueueRequest* field_24; // offset 24
        int field_32;                  // offset 32
        char _unknown_36[4];
        shared_ptr field_40; // offset 40
        char _unknown_56[440];
        uint field_496; // offset 496
        char _unknown_500[28];
        undefined1 m_headIconGraphic; // offset 528
        char _unknown_529[71];
        undefined1 m_headIconIndex; // offset 600
        char _unknown_601[71];
        undefined4 field_672;        // offset 672
        undefined4 m_icon;           // offset 676
        uint m_overlayHeight;        // offset 680
        uint m_reprioritiseAttackOp; // offset 684
        uint m_visibleCombatLevel;   // offset 688
        undefined1 field_692;        // offset 692
        char _unknown_693[3];
        uint field_696;           // offset 696
        uint field_700;           // offset 700
        int m_firstUniqueOpIndex; // offset 704
        int m_attackOpIndex;      // offset 708
        int m_examineOpIndex;     // offset 712
        char _unknown_716[4];
        undefined1 m_bodyList; // offset 720
        char _unknown_721[23];
        undefined1 m_headList; // offset 744
        char _unknown_745[223];
        undefined1 field_968; // offset 968
        undefined1 field_969; // offset 969
        undefined1 field_970; // offset 970
        undefined1 field_971; // offset 971
        char _unknown_972[14];
        short field_986;      // offset 986
        undefined1 field_988; // offset 988
        char _unknown_989[3];
        uint m_fadeInDuration; // offset 992
        uint field_996;        // offset 996
        char _unknown_1000[8];
        undefined1 field_1008; // offset 1008
        char _unknown_1009[3];
        uint m_roughBounding;  // offset 1012
        undefined1 field_1016; // offset 1016
        char _unknown_1017[3];
        uint m_highlightOverride;       // offset 1020
        uint m_baseAnimationSet;        // offset 1024
        uint m_animationStateMachineID; // offset 1028
        uint m_gridSize;                // offset 1032
        undefined1 m_alwaysOnTop;       // offset 1036
        undefined1 m_alwaysOnBottom;    // offset 1037
        undefined1 m_familiar;          // offset 1038
        char _unknown_1039[1];
        uint m_turnSpeed;           // offset 1040
        undefined1 field_1044;      // offset 1044
        undefined1 m_walkSmoothing; // offset 1045
        undefined1 field_1046;      // offset 1046
        char _unknown_1047[1];
        uint field_1048;       // offset 1048
        float field_1052;      // offset 1052
        undefined* field_1056; // offset 1056
        undefined1 field_1064; // offset 1064
        char _unknown_1065[3];
        uint field_1068; // offset 1068
        char _unknown_1072[24];
        uint field_1096;                   // offset 1096
        uint field_1100;                   // offset 1100
        bool m_hasBackgroundMovementSound; // offset 1104
        char _unknown_1105[3];
        uint m_backgroundSoundReady;        // offset 1108
        uint m_backgroundSoundCrawl;        // offset 1112
        uint m_backgroundSoundWalk;         // offset 1116
        uint m_backgroundSoundRun;          // offset 1120
        uint m_backgroundSoundRange;        // offset 1124
        uint m_backgroundSoundDropoffRange; // offset 1128
        uint m_backgroundSoundVolume;       // offset 1132
        uint field_1136;                    // offset 1136
        uint field_1140;                    // offset 1140
        char _unknown_1144[4];
    };

    // 0x100417fb0, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // NPCType::GetHeadIconGraphic() const
    /* graphics::Model::GetIrradianceEffect() */

    undefined1* graphics::Model::GetIrradianceEffect() {
        return &field_528;
    }

    // 0x100418630, 16 bytes, inline, placed by class name
    // NPCType::GetIcon() const
    undefined4 NPCType::GetIcon() {
        return m_icon;
    }

    // 0x1004187c0, 16 bytes, inline, placed by class name
    // NPCType::GetBaseAnimationSet() const
    uint NPCType::GetBaseAnimationSet() {
        return m_baseAnimationSet;
    }

    // 0x100418820, 16 bytes, inline, placed by class name
    // NPCType::GetOverlayHeight() const
    uint NPCType::GetOverlayHeight() {
        return m_overlayHeight;
    }

    // 0x100418ef0, 16 bytes, inline, placed by class name
    // NPCType::GetAnimationStateMachineID() const
    uint NPCType::GetAnimationStateMachineID() {
        return m_animationStateMachineID;
    }

    // 0x100418f00, 16 bytes, inline, placed by class name
    // NPCType::GetTurnSpeed() const
    uint NPCType::GetTurnSpeed() {
        return m_turnSpeed;
    }

    // 0x100418f30, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // NPCType::GetName() const
    /* ui::ComponentCollection::GetStaticChildren() */

    undefined1* ui::ComponentCollection::GetStaticChildren() {
        return &field_440;
    }

    // 0x100418f40, 16 bytes, inline, placed by class name
    // NPCType::GetVisibleCombatLevel() const
    uint NPCType::GetVisibleCombatLevel() {
        return m_visibleCombatLevel;
    }

    // 0x100418f50, 16 bytes, inline, placed by class name
    // NPCType::GetWalkSmoothing() const
    undefined1 NPCType::GetWalkSmoothing() {
        return m_walkSmoothing;
    }

    // 0x1004192e0, 32 bytes, inline, placed by class name
    // NPCType::IsMultiNPC() const
    byte NPCType::IsMultiNPC() {
        byte bVar1;

        bVar1 = (&field_1072)->empty();
        return bVar1 ^ 1;
    }

    // 0x100419b60, 16 bytes, inline, placed by class name
    // NPCType::HasBackgroundMovementSound() const
    undefined1 NPCType::HasBackgroundMovementSound() {
        return m_hasBackgroundMovementSound;
    }

    // 0x100419b70, 16 bytes, inline, placed by class name
    // NPCType::GetBackgroundSoundReady() const
    uint NPCType::GetBackgroundSoundReady() {
        return m_backgroundSoundReady;
    }

    // 0x100419ca0, 16 bytes, inline, placed by class name
    // NPCType::GetBackgroundSoundRun() const
    uint NPCType::GetBackgroundSoundRun() {
        return m_backgroundSoundRun;
    }

    // 0x100419cf0, 16 bytes, inline, placed by class name
    // NPCType::GetBackgroundSoundCrawl() const
    uint NPCType::GetBackgroundSoundCrawl() {
        return m_backgroundSoundCrawl;
    }

    // 0x100419d00, 16 bytes, inline, placed by class name
    // NPCType::GetBackgroundSoundWalk() const
    uint NPCType::GetBackgroundSoundWalk() {
        return m_backgroundSoundWalk;
    }

    // 0x100419d10, 16 bytes, inline, placed by class name
    // NPCType::GetBackgroundSoundVolume() const
    uint NPCType::GetBackgroundSoundVolume() {
        return m_backgroundSoundVolume;
    }

    // 0x100419d20, 16 bytes, inline, placed by class name
    // NPCType::GetBackgroundSoundDropoffRange() const
    uint NPCType::GetBackgroundSoundDropoffRange() {
        return m_backgroundSoundDropoffRange;
    }

    // 0x100419d30, 16 bytes, inline, placed by class name
    // NPCType::GetBackgroundSoundRange() const
    uint NPCType::GetBackgroundSoundRange() {
        return m_backgroundSoundRange;
    }

    // 0x100419f00, 16 bytes, inline, placed by class name
    // NPCType::IsFamiliar() const
    undefined1 NPCType::IsFamiliar() {
        return m_familiar;
    }

    // 0x100419f10, 16 bytes, inline, placed by class name
    // NPCType::IsAlwaysOnTop() const
    undefined1 NPCType::IsAlwaysOnTop() {
        return m_alwaysOnTop;
    }

    // 0x100419f20, 16 bytes, inline, placed by class name
    // NPCType::IsAlwaysOnBottom() const
    undefined1 NPCType::IsAlwaysOnBottom() {
        return m_alwaysOnBottom;
    }

    // 0x10041a180, 16 bytes, inline, placed by class name
    // NPCType::GetGridSize() const
    uint NPCType::GetGridSize() {
        return m_gridSize;
    }

    // 0x10041a190, 16 bytes, inline, placed by class name
    // NPCType::GetFadeInDuration() const
    uint NPCType::GetFadeInDuration() {
        return m_fadeInDuration;
    }

    // 0x10041a300, 32 bytes, inline, placed by class name
    // NPCType::GetCustomBounding() const
    void NPCType::GetCustomBounding() {
        (&field_1000)->get();
    }

    // 0x10041a400, 16 bytes, inline, placed by class name
    // NPCType::UseFastPickingTests() const
    undefined1 NPCType::UseFastPickingTests() {
        return field_1008;
    }

    // 0x10041a510, 16 bytes, inline, placed by class name
    // NPCType::GetRoughBounding() const
    uint NPCType::GetRoughBounding() {
        return m_roughBounding;
    }

    // 0x10041af10, 16 bytes, inline, placed by class name
    // NPCType::CastsShadows() const
    undefined1 NPCType::CastsShadows() {
        return field_692;
    }

    // 0x10041b1a0, 16 bytes, inline, placed by class name
    // NPCType::HasHighlightOverride() const
    bool NPCType::HasHighlightOverride() {
        return m_highlightOverride != 9;
    }

    // 0x10041b1b0, 16 bytes, inline, placed by class name
    // NPCType::GetHighlightOverride() const
    uint NPCType::GetHighlightOverride() {
        return m_highlightOverride;
    }

    // 0x10041b1d0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // NPCType::GetAttackOpIndex() const
    /* OldCamera::GetCamHeight() const */

    int OldCamera::GetCamHeight() {
        return m_camHeight;
    }

    // 0x10041b1e0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // NPCType::GetFirstUniqueOpIndex() const
    /* graphics::SkyBox::GetPendingSkyID() const */

    int graphics::SkyBox::GetPendingSkyID() {
        return m_pendingSkyID;
    }

    // 0x10041b1f0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // NPCType::GetExamineOpIndex() const
    /* OldCamera::GetCamZoom() const */

    int OldCamera::GetCamZoom() {
        return m_camZoom;
    }

    // 0x10041b210, 16 bytes, inline, placed by class name
    // NPCType::GetReprioritiseAttackOp() const
    uint NPCType::GetReprioritiseAttackOp() {
        return m_reprioritiseAttackOp;
    }

    // 0x10041b220, 48 bytes, inline, placed by class name
    // NPCType::IsExamineOnly() const
    bool NPCType::IsExamineOnly() {
        if ((m_attackOpIndex == 6) && (m_firstUniqueOpIndex == 6)) {
            return m_examineOpIndex != 6;
        }
        return false;
    }

    // 0x100505580, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // NPCType::GetBodyList() const
    /* graphics::Model::GetParticleEmitters() */

    undefined1* graphics::Model::GetParticleEmitters() {
        return &field_720;
    }

    // 0x1005056e0, 16 bytes, inline, placed by class name
    // NPCType::GetRecolourDest() const
    undefined1* NPCType::GetRecolourDest() {
        return &field_824;
    }

    // 0x1005056f0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // NPCType::GetRematerialDest() const
    /* ObjType::GetWomanAppearance() const */

    undefined1* ObjType::GetWomanAppearance() {
        return &field_920;
    }

    // 0x10050a070, 16 bytes, complete-object destructor, inline, placed by class name
    // NPCType::~NPCType(): jumps straight to the base-object destructor

    // 0x10050a080, 32 bytes, deleting destructor, inline, placed by class name
    // NPCType::~NPCType()
    void NPCType::~NPCType() {
        ~NPCType(this);
        operator_delete(this);
    }

    // 0x10050b030, 256 bytes, base-object destructor, inline, placed by class name
    // NPCType::~NPCType()
    void NPCType::~NPCType() {
        field_0 = &PTR__NPCType_100f02fd8;
        (&field_1072)->~Array();
        (&field_1000)->~unique_ptr();
        (&field_944)->~Array();
        (&field_920)->~Array();
        (&field_896)->~Array();
        (&field_872)->~Array();
        (&field_848)->~Array();
        (&field_824)->~Array();
        (&field_800)->~Array();
        (&field_768)->~vector();
        (&m_headList)->~Array();
        (&m_bodyList)->~Array();
        (&m_headIconIndex)->~fixed_vector();
        (&m_headIconGraphic)->~fixed_vector();
        (&field_504)->~Array();
        (&field_472)->~Array();
        (&field_440)->~basic_string();
        (&field_56)->~array();
        ~ConfigType();
    }

} // namespace jag::game
