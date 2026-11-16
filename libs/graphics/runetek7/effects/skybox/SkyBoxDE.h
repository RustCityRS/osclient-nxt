// libs/graphics/runetek7/effects/skybox/SkyBoxDE.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class SkyBox_DE {
    public:
        // virtual methods in vtable order
        virtual ~SkyBox_DE();
        virtual void Render(RT7Core&, render::DrawCallState const&, SceneViewData const&, RenderPassType,
                            EffectManager&);
        virtual void GetRenderer(RT7Core&);
        void RenderSkyModel(RT7Core&, render::DrawCallState const&, SceneViewData const&, RenderPassType,
                            EffectManager&, Model&, Array<eastl::pair<unsigned char, int>, eastl::allocator> const&);
        SkyBox_DE();

        // data members, from how the methods use this: 128 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[96];
        fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>* field_104; // offset 104
        float field_112;                                                                           // offset 112
        char _unknown_116[12];
    };

    // 0x100921fc0, 16 bytes, inline, placed by class name and debug map
    // SkyBox_DE::GetRenderer(RT7Core&)
    void SkyBox_DE::GetRenderer(RT7Core* param_1) {
        param_1->GetSkyBoxRenderer();
    }

    // 0x100922870, 16 bytes, complete-object constructor, inline, placed by class name
    // SkyBox_DE::SkyBox_DE(): jumps straight to the base-object constructor

    // 0x1009228e0, 48 bytes, base-object constructor, inline, placed by class name
    // SkyBox_DE::SkyBox_DE()
    void SkyBox_DE::SkyBox_DE() {
        new (this) DrawableElementPool<SkyBox_DE>();
        field_0 = &PTR__RefCounterAndData_100f19650;
        field_104 = (fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>*)0;
        field_112 = 0.0;
    }

} // namespace jag::graphics
