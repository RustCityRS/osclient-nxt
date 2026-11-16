// libs/graphics/runetek7/renderer/DrawableElement.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.system.osclient

namespace jag::graphics {
    class DrawableElement {
    public:
        // virtual methods in vtable order
        virtual ~DrawableElement();
        virtual void __pure_slot_2() = 0;
        virtual void Render(RT7Core& arg1, const render::DrawCallState& arg2, const SceneViewData& arg3,
                            RenderPassType arg4, EffectManager& arg5);
        DrawableElement(const math::OBB& obb, unsigned int arg2, float arg3);
        DrawableElement();

    private:
        uint8_t _unknown_8[8];
        OBB field_16;
        uint8_t _unknown_88[8];
        unsigned int field_96;
        float field_100;
        uint8_t _unknown_104[4];
    };

    class DrawableElementDeleter {
    public:
        void operator()(DrawableElement* drawableElement) const;

        uint8_t _unknown_0[1];
    };

    class DrawableElementInfo {
    public:
        DrawableElementInfo* operator=(DrawableElementInfo&& drawableElementInfo);
        DrawableElementInfo(DrawableSortKey drawableSortKey,
                            std::unique_ptr<DrawableElement, DrawableElementDeleter>&& drawableElement,
                            Drawable* drawable);
        ~DrawableElementInfo();
        DrawableElementInfo(DrawableElementInfo&& drawableElementInfo);

    private:
        unique_ptr<DrawableElement, DrawableElementDeleter>* field_0;
        uint8_t _unknown_8[8];
        uint64_t field_16;
    };

    // 0x100009e70: DrawableElement::Render(RT7Core&, render::DrawCallState const&, SceneViewData const&, RenderPassType, EffectManager&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: DrawableElement::~DrawableElement() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1007b7990
    TerrainPatch_DE*
    DrawableElementPool<TerrainPatch_DE>::Create<TerrainPatch&, eastl::fixed_vector<unsigned char, 256ul> const&,
                                                 math::OBB&, float&, render::InputAssemblerState*>(
        TerrainPatch& terrainPatch, const eastl::fixed_vector<unsigned char, 256ul>& arg2, math::OBB& obb, float& arg4,
        render::InputAssemblerState*&& arg5) {
        uint32_t uVar3;
        TerrainPatch_DE* terrainPatch_DE;
        Logger* this_00;

        GetDrawableElementPool();
        int iVar1 = ((Option<game::option::EnumBrightness>*)&GetDrawableElementPool()::pool)->GetValue();
        int iVar2 = ((FastPool<audio::SoundInstance, int>*)&GetDrawableElementPool()::pool)->capacity();
        if (iVar1 < iVar2) {
            terrainPatch_DE = ((FastPool<TerrainPatch_DE, int>*)&GetDrawableElementPool()::pool)
                                  ->Create<TerrainPatch&, eastl::fixed_vector<unsigned char, 256ul> const&, math::OBB&,
                                           float&, render::InputAssemblerState*>(terrainPatch, arg2, obb, arg4, arg5);
        } else {
            this_00 = logger::default_logger();
            uVar3 = ((Option<game::option::EnumBrightness>*)&GetDrawableElementPool()::pool)->GetValue();
            this_00->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                         "renderer/DrawableElement.h",
                         142, "%s requires more entries in pool, size: %d", "Create", uVar3);
            terrainPatch_DE = (TerrainPatch_DE*)operator new(544);
            new (terrainPatch_DE) TerrainPatch_DE(terrainPatch, arg2, obb, arg4, arg5, nullptr);
        }
        return terrainPatch_DE;
    }

    // 0x1007c6100
    DrawableElement::DrawableElement(const math::OBB& obb, unsigned int arg2, float arg3)
        : field_16(obb), field_96(arg2), field_100(arg3) {}

    // 0x10093f1e0
    DrawableElement::DrawableElement() {
        new (field_16) math::OBB();
    }

} // namespace jag::graphics
