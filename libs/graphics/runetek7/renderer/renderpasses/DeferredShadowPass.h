// libs/graphics/runetek7/renderer/renderpasses/DeferredShadowPass.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x1009811b0
    shared_ptr_if_not_array<postprocess::ColourGradingBloomEffect>::type
    make_shared<postprocess::ColourGradingBloomEffect, render::RenderTargetsManager&, postprocess::AvgLuminanceFilter*>(
        render::RenderTargetsManager& renderTargetsManager, postprocess::AvgLuminanceFilter*&& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        ColourGradingBloomEffect* local_38[2];

        auto arg1 = aligned_alloc(6736, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<postprocess::ColourGradingBloomEffect>::type result;
        } else {
            local_38[0] =
                placement_new<postprocess::ColourGradingBloomEffect, render::RenderTargetsManager&,
                              postprocess::AvgLuminanceFilter*>((void*)((long)arg1 + 32), renderTargetsManager, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<postprocess::ColourGradingBloomEffect>, int,
                              postprocess::ColourGradingBloomEffect*&>(arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x1009812a0
    shared_ptr_if_not_array<postprocess::FXAAEffect>::type make_shared<postprocess::FXAAEffect>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        FXAAEffect* local_28[2];

        auto arg1 = aligned_alloc(264, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<postprocess::FXAAEffect>::type result;
        } else {
            local_28[0] = placement_new<postprocess::FXAAEffect>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<postprocess::FXAAEffect>, int, postprocess::FXAAEffect*&>(
                    arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x1009813b0
    shared_ptr_if_not_array<postprocess::OutlineAndShadowEffect>::type
    make_shared<postprocess::OutlineAndShadowEffect>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        OutlineAndShadowEffect* local_28[2];

        auto arg1 = aligned_alloc(80, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<postprocess::OutlineAndShadowEffect>::type result;
        } else {
            local_28[0] = placement_new<postprocess::OutlineAndShadowEffect>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<postprocess::OutlineAndShadowEffect>, int,
                              postprocess::OutlineAndShadowEffect*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x1009814c0
    shared_ptr_if_not_array<postprocess::EquirectangularEffect>::type
    make_shared<postprocess::EquirectangularEffect>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        EquirectangularEffect* local_28[2];

        auto arg1 = aligned_alloc(88, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<postprocess::EquirectangularEffect>::type result;
        } else {
            local_28[0] = placement_new<postprocess::EquirectangularEffect>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<postprocess::EquirectangularEffect>, int,
                              postprocess::EquirectangularEffect*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x1009815d0
    shared_ptr_if_not_array<postprocess::DepthOfFieldEffect>::type make_shared<postprocess::DepthOfFieldEffect>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        DepthOfFieldEffect* local_28[2];

        auto arg1 = aligned_alloc(464, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<postprocess::DepthOfFieldEffect>::type result;
        } else {
            local_28[0] = placement_new<postprocess::DepthOfFieldEffect>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<postprocess::DepthOfFieldEffect>, int,
                              postprocess::DepthOfFieldEffect*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag

namespace jag::graphics {
    class DeferredShadowPass : public FullscreenQuadPass // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~DeferredShadowPass();
        virtual uint32_t BeginPass(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                   EffectManager& effectManager, const SceneViewData& sceneViewData,
                                   const DrawableQueue& drawableQueue);
        virtual void Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState, EffectManager& effectManager,
                            const SceneViewData& sceneViewData, DrawableQueue& drawableQueue);
        virtual void RenderDebug(EffectManager& effectManager, DrawableQueue& drawableQueue);
        DeferredShadowPass();
        void SetShaderConstants(render::DrawCallState& drawCallState, EffectManager& effectManager,
                                render::RenderContext& renderContext, const render::ShaderProgram& shaderProgram,
                                const SceneViewData& sceneViewData);
        void BlurPass(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                      EffectManager& effectManager, const SceneViewData& sceneViewData, ShaderManager& shaderManager);
        void SetGBufferRT(const shared_ptr<render::RenderTargets>& renderTargets);
        void SetShadowBufferRT(const shared_ptr<render::RenderTargets>& renderTargets);

    private:
        uint8_t _unknown_568[88];
        shared_ptr field_656;
        HashedString field_672;
        uint8_t _unknown_688[16];
        HashedString field_704;
        uint8_t _unknown_720[16];
        HashedString field_736;
        uint8_t _unknown_752[616];
    };

    // 0x100981060
    void DeferredShadowPass::SetGBufferRT(const shared_ptr<render::RenderTargets>& renderTargets) {
        field_640 = renderTargets;
    }

    // 0x100981080
    void DeferredShadowPass::SetShadowBufferRT(const shared_ptr<render::RenderTargets>& renderTargets) {
        *field_656 = renderTargets;
    }

} // namespace jag::graphics
