// libs/game/runetek5/scene/entities/ObjStackEntity.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag {
    class ObjStackEntity {
    public:
        // virtual methods in vtable order
        virtual ~ObjStackEntity();
        virtual void CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void MainLogic(graphics::RT7Core&, unsigned int, math::Matrix44T<float> const&);
        virtual void GatherDrawableElements(graphics::DrawableQueue&, graphics::RT7Core&, math::Matrix44T<float> const&,
                                            graphics::SceneViewData const&, graphics::EffectManager const&);
        virtual void AddPickableEntity(game::World&, math::Matrix44T<float> const&);
        virtual void Destruct();
        virtual void NotifyInteracted(unsigned int);
        virtual void NotifyMouseover(unsigned int);
        virtual void NotifyPickable(unsigned int, bool, float);
        virtual ulong CanRender() const;
        ObjStackEntity(graphics::GraphNode*, shared_ptr<game::World> const&, game::ConfigProvider const*,
                       game::CoordFine const&);
        void SetHeight();
        void AddObj(unsigned int, unsigned int);
        void SortAllObjs();
        void DelObj(unsigned int);
        void UpdateDisplayObjs();
        void AdjustCount(unsigned int, unsigned int, unsigned int);
        Build(graphics::RT7Core&, game::AssetBuilder&);
        void UpdateHighlighting(unsigned int);
        void IsEmpty() const;
        byte Contains(unsigned int);
        ulong FilterRenderPasses(graphics::SceneViewData const&);
        void DebugPrimitiveOutput(graphics::SceneViewData const&);
        void ClearHighlighting();
        static /* 16 bytes */ m_showObjStacks; // = { 1, 0, 0, 0 }
        static /* 1 bytes */ m_debugPrimitiveText;
        static /* 1 bytes */ m_debugPrimitiveTextOnMouseover;

        // data members, from how the methods use this: 328 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined** field_8; // offset 8
        char _unknown_16[52];
        uint field_68; // offset 68
        int field_72;  // offset 72
        char _unknown_76[132];
        float field_208; // offset 208
        char _unknown_212[68];
        ConfigProvider* field_280; // offset 280
        uint field_288;            // offset 288
        float field_292;           // offset 292
        float field_296;           // offset 296
        float field_300;           // offset 300
        char field_304;            // offset 304
        undefined1 field_305;      // offset 305
        char _unknown_306[2];
        EntityHighlightState field_308; // offset 308
    };

    class ObjStackEntry {
    public:
        ObjStackEntry(unsigned int, unsigned int);
        ~ObjStackEntry();
        long GetObjEntrySortValue(shared_ptr<game::ObjType> const&) const;
        ObjStackEntry(ObjStackEntry const&);
        ObjStackEntry* operator=(ObjStackEntry const&);

        // data members, from how the methods use this: 136 bytes
        uint field_0;            // offset 0
        uint field_4;            // offset 4
        ActiveComponent field_8; // offset 8
        char _unknown_32[32];
        undefined8 field_64;  // offset 64
        undefined8 field_72;  // offset 72
        undefined8 field_80;  // offset 80
        undefined8 field_88;  // offset 88
        undefined8 field_96;  // offset 96
        undefined8 field_104; // offset 104
        undefined8 field_112; // offset 112
        undefined8 field_120; // offset 120
        undefined4 field_128; // offset 128
        char _unknown_132[4];
    };

    // 0x1003ed110, 112 bytes, base-object constructor, placed by debug map only (low confidence)
    // ObjStackEntry::ObjStackEntry(unsigned int, unsigned int)
    void ObjStackEntry::ObjStackEntry(uint param_1, uint param_2) {
        undefined4 in_register_00000034;

        field_0 = param_1;
        field_4 = param_2;
        new (field_8) game::BuildRequest<graphics::Model, game::BuildModelMain>();
        new (&field_40, (_func_decltype_nullptr*)CONCAT44(in_register_00000034)
                            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1));
        new (&field_64) math::Matrix44T<float>();
        field_128 = 2;
    }

    // 0x1003ed180, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // ObjStackEntry::ObjStackEntry(unsigned int, unsigned int): jumps straight to the base-object constructor

    // 0x1003ed190, 48 bytes, base-object destructor, placed by debug map only (low confidence)
    // ObjStackEntry::~ObjStackEntry()
    void ObjStackEntry::~ObjStackEntry() {
        (&field_40)->~shared_ptr();
        field_8->~ActiveComponent();
    }

    // 0x1003ed1c0, 16 bytes, complete-object destructor, placed by debug map only (low confidence)
    // ObjStackEntry::~ObjStackEntry(): jumps straight to the base-object destructor

    // 0x1003ed1d0, 80 bytes, placed by debug map only (low confidence)
    // ObjStackEntry::GetObjEntrySortValue(shared_ptr<game::ObjType> const&) const
    long ObjStackEntry::GetObjEntrySortValue(shared_ptr* param_1) {
        ObjType* pOVar2;
        long lVar3;

        pOVar2 = (ObjType*)shared_ptr<game::ObjType>::operator->((shared_ptr<game::ObjType>*)param_1);
        lVar3 = pOVar2->GetCost();
        pOVar2 = (ObjType*)shared_ptr<game::ObjType>::operator->((shared_ptr<game::ObjType>*)param_1);
        if (pOVar2->GetStackable() == '\x01') {
            lVar3 = lVar3 * (ulong)(field_4 + 1);
        }
        return lVar3;
    }

    // 0x1003fdc00, 32 bytes, inline, placed by class name
    // ObjStackEntity::NotifyInteracted(unsigned int)
    void ObjStackEntity::NotifyInteracted(uint param_1) {
        game::EntityHighlightState::NotifyInteracted((int)this + 308);
    }

    // 0x1003fdc20, 32 bytes, inline, placed by class name
    // ObjStackEntity::NotifyMouseover(unsigned int)
    void ObjStackEntity::NotifyMouseover(uint param_1) {
        new (field_308) oldscape::ServerConnectionWorkItem();
    }

} // namespace jag
