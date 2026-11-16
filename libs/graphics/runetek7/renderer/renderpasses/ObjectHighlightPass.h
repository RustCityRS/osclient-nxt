// libs/graphics/runetek7/renderer/renderpasses/ObjectHighlightPass.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class ObjectHighlightPass {
    public:
        // virtual methods in vtable order
        virtual ~ObjectHighlightPass();
        virtual void PreparePass(RT7Core& rt7Core, EffectManager& effectManager, const SceneViewData& sceneViewData,
                                 DrawableQueue& drawableQueue);
        virtual unsigned long BeginPass(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        EffectManager& effectManager, const SceneViewData& sceneViewData,
                                        const DrawableQueue& drawableQueue);
        virtual void Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState, EffectManager& effectManager,
                            const SceneViewData& sceneViewData, DrawableQueue& drawableQueue);
        virtual void RenderDebug(EffectManager& effectManager, DrawableQueue& drawableQueue);
        virtual void RegisterTweakVarsOcclusion(tweak::Container& container);
        virtual ObjectHighlightPass* GetOcclusionRTName();
        virtual void CreateRenderingResources();
        virtual void DestroyRenderingResources();
        void SetEnabled(bool arg1);
        ObjectHighlightPass(render::RenderTargetsManager* renderTargetsManager, ThreadPool* threadPool);
        bool HasValidRenderTargets() const;
        bool NeedsResolve() const;
        void RenderOutlines(RT7Core& rt7Core, const render::DrawCallState& drawCallState, EffectManager& effectManager,
                            const SceneViewData& sceneViewData, DrawableQueue& drawableQueue,
                            OcclusionManager& occlusionManager, bool arg7);
        void RenderSilhouettes(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                               EffectManager& effectManager, const SceneViewData& sceneViewData,
                               DrawableQueue& drawableQueue, OcclusionManager& occlusionManager, bool arg7);
        void CompositeToScreen(RT7Core& rt7Core, const render::RenderTargets* renderTargets,
                               const render::Viewport& viewport);
        void ClearRenderTargets(RT7Core& rt7Core);
        void UnbindDepthTargets();
        unsigned long EnsureRenderTargets(render::Texture* texture);
        bool HasBlurRenderTargets() const;
        unsigned long InitBlurRenderTargets();
        void DestroyBlurRenderTargets();
        void DestroyRenderTargets();
        bool CheckMultiSampleCountChanged(unsigned int arg1) const;
        void RebindDepthRenderTargets(render::Texture* texture);
        void PerformBlur(RT7Core& rt7Core);
        void CreateBlurShader();
        void SetBlurSubPassEnabled(bool arg1);
        void SetSilhouetteDepthBias(float arg1, float arg2);
        void SetSilhouetteCoverPassEnabled(bool arg1);
        void SetDepthProviderRT(const shared_ptr<render::RenderTargets>& renderTargets);
        static bool m_enableOccludedOutlines; // = 1
        static bool m_showBuffer;

    private:
        EnumOptionToggle field_8;
        uint8_t _unknown_12[4];
        OcclusionManager field_16;
        uint8_t _unknown_729[47];
        bool field_776;
        bool field_777;
        uint8_t field_778;
        uint8_t _unknown_779[1];
        int field_780;
        RenderTargetsManager* field_784;
        uint32_t field_792;
        bool m_enabled;
        bool m_blurSubPassEnabled;
        uint8_t field_798;
        uint8_t _unknown_799[1];
        float m_silhouetteDepthBias;
        float field_804;
        bool m_silhouetteCoverPassEnabled;
        uint8_t _unknown_809[39];
        shared_ptr field_848;
        shared_ptr field_864;
        shared_ptr field_880;
        shared_ptr field_896;
        shared_ptr field_912;
        GeometryBatch field_928;
    };

    // 0x100601f10
    void ObjectHighlightPass::SetEnabled(bool arg1) {
        m_enabled = arg1;
    }

    // 0x1007a8d60
    bool ObjectHighlightPass::NeedsResolve() const {
        bool bVar2;

        if (field_880->operator_cast_to_bool() == '\0') {
            bVar2 = false;
        } else {
            bVar2 = *field_880 != *field_864;
        }
        return bVar2;
    }

    // 0x1007aa2e0
    bool ObjectHighlightPass::HasBlurRenderTargets() const {
        uint64_t uVar2;

        if (((field_928 + 440))->operator_cast_to_bool() == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = ((field_928 + 456))->operator_cast_to_bool();
        }
        return uVar2;
    }

    // 0x1007bc050
    ObjectHighlightPass* ObjectHighlightPass::GetOcclusionRTName() {

        new (this) eastl::string("ObjectHighlightOcclusion");
        return this;
    }

    // 0x1009810a0
    void ObjectHighlightPass::SetDepthProviderRT(const shared_ptr<render::RenderTargets>& renderTargets) {
        *field_848 = renderTargets;
    }

} // namespace jag::graphics
