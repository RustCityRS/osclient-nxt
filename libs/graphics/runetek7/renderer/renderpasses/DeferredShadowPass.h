// libs/graphics/runetek7/renderer/renderpasses/DeferredShadowPass.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x1009811b0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<postprocess::ColourGradingBloomEffect>::type make_shared<postprocess::ColourGradingBloomEffect, render::RenderTargetsManager&, postprocess::AvgLuminanceFilter*>(render::RenderTargetsManager&, postprocess::AvgLuminanceFilter*&&)
    jag* jag::make_shared<postprocess::ColourGradingBloomEffect, render::RenderTargetsManager&,
                          postprocess::AvgLuminanceFilter*>(RenderTargetsManager* param_1,
                                                            AvgLuminanceFilter** param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        ColourGradingBloomEffect* local_38[2];

        pvVar1 = (void*)aligned_alloc(6736, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<postprocess::ColourGradingBloomEffect, render::RenderTargetsManager&,
                                        postprocess::AvgLuminanceFilter*>((void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<postprocess::ColourGradingBloomEffect>, int,
                                   postprocess::ColourGradingBloomEffect*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x1009812a0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<postprocess::FXAAEffect>::type make_shared<postprocess::FXAAEffect>()
    jag* make_shared<postprocess::FXAAEffect>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        FXAAEffect* local_28[2];

        pvVar1 = (void*)aligned_alloc(264, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<postprocess::FXAAEffect>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<postprocess::FXAAEffect>, int, postprocess::FXAAEffect*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x1009813b0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<postprocess::OutlineAndShadowEffect>::type make_shared<postprocess::OutlineAndShadowEffect>()
    jag* make_shared<postprocess::OutlineAndShadowEffect>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        OutlineAndShadowEffect* local_28[2];

        pvVar1 = (void*)aligned_alloc(80, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<postprocess::OutlineAndShadowEffect>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<postprocess::OutlineAndShadowEffect>, int,
                                   postprocess::OutlineAndShadowEffect*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x1009814c0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<postprocess::EquirectangularEffect>::type make_shared<postprocess::EquirectangularEffect>()
    jag* make_shared<postprocess::EquirectangularEffect>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        EquirectangularEffect* local_28[2];

        pvVar1 = (void*)aligned_alloc(88, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<postprocess::EquirectangularEffect>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<postprocess::EquirectangularEffect>, int,
                                   postprocess::EquirectangularEffect*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x1009815d0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<postprocess::DepthOfFieldEffect>::type make_shared<postprocess::DepthOfFieldEffect>()
    jag* make_shared<postprocess::DepthOfFieldEffect>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        DepthOfFieldEffect* local_28[2];

        pvVar1 = (void*)aligned_alloc(464, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<postprocess::DepthOfFieldEffect>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<postprocess::DepthOfFieldEffect>, int,
                                   postprocess::DepthOfFieldEffect*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag

namespace jag::graphics {
    class DeferredShadowPass : public FullscreenQuadPass // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~DeferredShadowPass();
        virtual ulong BeginPass(render::DrawCallState&, render::RenderContext&, EffectManager&, SceneViewData const&,
                                DrawableQueue const&);
        virtual void Render(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&,
                            DrawableQueue&);
        virtual void RenderDebug(EffectManager&, DrawableQueue&);
        DeferredShadowPass();
        void SetShaderConstants(render::DrawCallState&, EffectManager&, render::RenderContext&,
                                render::ShaderProgram const&, SceneViewData const&);
        void BlurPass(render::RenderContext&, render::DrawCallState const&, EffectManager&, SceneViewData const&,
                      ShaderManager&);
        void SetGBufferRT(shared_ptr<render::RenderTargets> const&);
        void SetShadowBufferRT(shared_ptr<render::RenderTargets> const&);

        // data members, from how the methods use this: 1368 bytes, the first 568 are FullscreenQuadPass
        char _unknown_568[88];
        shared_ptr field_656;   // offset 656
        HashedString field_672; // offset 672
        char _unknown_688[16];
        HashedString field_704; // offset 704
        char _unknown_720[16];
        HashedString field_736; // offset 736
        char _unknown_752[616];
    };

    // 0x100981060, 32 bytes, inline, placed by class name and debug map
    // DeferredShadowPass::SetGBufferRT(shared_ptr<render::RenderTargets> const&)
    void DeferredShadowPass::SetGBufferRT(shared_ptr* param_1) {
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)&field_640, param_1);
    }

    // 0x100981080, 32 bytes, inline, placed by class name and debug map
    // DeferredShadowPass::SetShadowBufferRT(shared_ptr<render::RenderTargets> const&)
    void DeferredShadowPass::SetShadowBufferRT(shared_ptr* param_1) {
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)field_656, param_1);
    }

} // namespace jag::graphics
