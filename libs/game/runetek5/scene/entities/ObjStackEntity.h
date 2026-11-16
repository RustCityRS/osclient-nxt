// libs/game/runetek5/scene/entities/ObjStackEntity.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    class ObjStackEntity {
    public:
        // virtual methods in vtable order
        virtual ~ObjStackEntity();
        virtual void CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void MainLogic(graphics::RT7Core& rt7Core, unsigned int arg2, const math::Matrix44T<float>& matrix44);
        virtual void GatherDrawableElements(graphics::DrawableQueue& drawableQueue, graphics::RT7Core& rt7Core,
                                            const math::Matrix44T<float>& matrix44,
                                            const graphics::SceneViewData& sceneViewData,
                                            const graphics::EffectManager& effectManager);
        virtual void AddPickableEntity(game::World& world, const math::Matrix44T<float>& matrix44);
        virtual void Destruct();
        virtual void NotifyInteracted(unsigned int arg1);
        virtual void NotifyMouseover(unsigned int arg1);
        virtual void NotifyPickable(unsigned int arg1, bool arg2, float arg3);
        virtual unsigned long CanRender() const;
        ObjStackEntity(graphics::GraphNode* graphNode, const shared_ptr<game::World>& world,
                       const game::ConfigProvider* configProvider, const game::CoordFine& coordFine);
        void SetHeight();
        void AddObj(unsigned int arg1, unsigned int arg2);
        void SortAllObjs();
        void DelObj(unsigned int arg1);
        void UpdateDisplayObjs();
        void AdjustCount(unsigned int arg1, unsigned int arg2, unsigned int arg3);
        uint64_t Build(graphics::RT7Core& rt7Core, game::AssetBuilder& assetBuilder);
        void UpdateHighlighting(unsigned int arg1);
        void IsEmpty() const;
        uint8_t Contains(unsigned int arg1);
        unsigned long FilterRenderPasses(const graphics::SceneViewData& sceneViewData);
        void DebugPrimitiveOutput(const graphics::SceneViewData& sceneViewData);
        void ClearHighlighting();
        static int32_t m_showObjStacks[4]; // = { 1, 0, 0, 0 }
        static bool m_debugPrimitiveText;
        static bool m_debugPrimitiveTextOnMouseover;

    private:
        uint8_t** field_8;
        uint8_t _unknown_16[48];
        uint8_t field_64;
        uint8_t field_65;
        char field_66;
        bool field_67;
        unsigned int field_68;
        int field_72;
        uint8_t _unknown_76[40];
        uint32_t field_116;
        uint8_t _unknown_120[88];
        float field_208;
        uint8_t _unknown_212[68];
        ConfigProvider* field_280;
        unsigned int field_288;
        float field_292;
        float field_296;
        float field_300;
        char field_304;
        uint8_t field_305;
        uint8_t _unknown_306[2];
        EntityHighlightState field_308;
    };

    class ObjStackEntry {
    public:
        ObjStackEntry(unsigned int arg1, unsigned int arg2);
        ~ObjStackEntry();
        long GetObjEntrySortValue(const shared_ptr<game::ObjType>& objType) const;
        ObjStackEntry(const ObjStackEntry& objStackEntry);
        ObjStackEntry* operator=(const ObjStackEntry& objStackEntry);

    private:
        unsigned int field_0;
        unsigned int field_4;
        ActiveComponent field_8;
        uint8_t _unknown_32[32];
        uint64_t field_64;
        uint64_t field_72;
        uint64_t field_80;
        uint64_t field_88;
        uint64_t field_96;
        uint64_t field_104;
        uint64_t field_112;
        uint64_t field_120;
        uint32_t field_128;
        uint8_t _unknown_132[4];
    };

    // 0x1003ed110
    ObjStackEntry::ObjStackEntry(unsigned int arg1, unsigned int arg2) : field_0(arg1), field_4(arg2) {
        new (&field_40) shared_ptr();
        new (&field_64) math::Matrix44T<float>();
        field_128 = 2;
    }

    // 0x1003ed190
    ObjStackEntry::~ObjStackEntry() {
        field_40.~shared_ptr();
        field_8->~ActiveComponent();
    }

    // 0x1003ed1d0
    long ObjStackEntry::GetObjEntrySortValue(const shared_ptr<game::ObjType>& objType) const {
        auto pOVar2 = objType.operator->();
        long lVar3 = pOVar2->GetCost();
        pOVar2 = (ObjType*)objType.operator->();
        if (pOVar2->GetStackable() == '\x01') {
            lVar3 = lVar3 * (unsigned long)(field_4 + 1);
        }
        return lVar3;
    }

    // 0x1003fdc00
    void ObjStackEntity::NotifyInteracted(unsigned int arg1) {
        field_308->NotifyInteracted(arg1);
    }

    // 0x1003fdc20
    void ObjStackEntity::NotifyMouseover(unsigned int arg1) {
        new (field_308) oldscape::ServerConnectionWorkItem(arg1);
    }

} // namespace jag
