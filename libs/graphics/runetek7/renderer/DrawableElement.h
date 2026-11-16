// libs/graphics/runetek7/renderer/DrawableElement.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.system.osclient

namespace jag::graphics {
    class DrawableElement {
    public:
        // virtual methods in vtable order
        virtual ~DrawableElement();
        virtual void __pure_slot_2() = 0;
        virtual Render(RT7Core&, render::DrawCallState const&, SceneViewData const&, RenderPassType, EffectManager&);
        DrawableElement(math::OBB const&, unsigned int, float);
        DrawableElement();

        // data members, from how the methods use this: 108 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[8];
        OBB field_16; // offset 16
        char _unknown_88[8];
        uint field_96;   // offset 96
        float field_100; // offset 100
        char _unknown_104[4];
    };

    class DrawableElementDeleter {
    public:
        void operator()(DrawableElement*) const;

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    class DrawableElementInfo {
    public:
        DrawableElementInfo* operator=(DrawableElementInfo&&);
        DrawableElementInfo(DrawableSortKey, std::unique_ptr<DrawableElement, DrawableElementDeleter>&&, Drawable*);
        ~DrawableElementInfo();
        DrawableElementInfo(DrawableElementInfo&&);

        // data members, from how the methods use this: 24 bytes
        undefined8 field_0; // offset 0
        char _unknown_8[8];
        undefined8 field_16; // offset 16
    };

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    DrawableElement::Render(RT7Core&, render::DrawCallState const&, SceneViewData const&, RenderPassType,
                            EffectManager&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    DrawableElement::~DrawableElement();

    // 0x1007b7990, 272 bytes, inline, placed by debug map only (low confidence)
    // TerrainPatch_DE* DrawableElementPool<TerrainPatch_DE>::Create<TerrainPatch&, eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator> const&, math::OBB&, float&, render::InputAssemblerState*>(TerrainPatch&, eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator> const&, math::OBB&, float&, render::InputAssemblerState*&&)
    TerrainPatch_DE* DrawableElementPool<TerrainPatch_DE>::Create<
        TerrainPatch&, eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator> const&, math::OBB&, float&,
        render::InputAssemblerState*>(TerrainPatch* param_1, fixed_vector* param_2, OBB* param_3, float* param_4,
                                      InputAssemblerState** param_5) {
        int iVar1;
        int iVar2;
        undefined4 uVar3;
        TerrainPatch_DE* this;
        undefined8 uVar4;

        GetDrawableElementPool();
        iVar1 = (&GetDrawableElementPool()::pool)->GetValue();
        iVar2 = (&GetDrawableElementPool()::pool)->capacity();
        if (iVar1 < iVar2) {
            this = FastPool<TerrainPatch_DE, int>::Create<
                TerrainPatch&, eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator> const&, math::OBB&,
                float&, render::InputAssemblerState*>((FastPool<TerrainPatch_DE, int>*)&GetDrawableElementPool()::pool,
                                                      param_1, param_2, param_3, param_4, param_5);
        } else {
            uVar4 = logger::default_logger();
            uVar3 = (&GetDrawableElementPool()::pool)->GetValue();
            logger::Logger::Log(uVar4, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/renderer/DrawableElement.h",
                                142, "%s requires more entries in pool, size: %d", "Create", uVar3);
            this = operator_new(544);
            TerrainPatch_DE::TerrainPatch_DE(this, param_1, param_2, param_3, *param_4, *param_5,
                                             (RenderPipelineState*)0);
        }
        return this;
    }

    // 0x1007c6100, 80 bytes, base-object constructor, inline, placed by class name
    // DrawableElement::DrawableElement(math::OBB const&, unsigned int, float)
    void DrawableElement::DrawableElement(OBB* param_1, uint param_2, float param_3) {
        field_0 = PTR_vtable_100ee8770 + 16;
        new (field_16, param_1) math::OBB();
        field_96 = param_2;
        field_100 = param_3;
    }

    // 0x10093f1e0, 32 bytes, base-object constructor, inline, placed by class name
    // DrawableElement::DrawableElement()
    void DrawableElement::DrawableElement() {
        field_0 = PTR_vtable_100ee8770 + 16;
        new (field_16) math::OBB();
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    DrawableElement::~DrawableElement();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    DrawableElement::~DrawableElement();

} // namespace jag::graphics
