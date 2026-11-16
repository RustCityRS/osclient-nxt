// libs/graphics/postprocess/PostProcessManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::postprocess {
    class PostProcessManager {
    public:
        void GetPostProcessParams();
        RenderTargetsManager* GetRenderTargetsManager();
        uint8_t* GetBrightPassFilter();
        uint8_t* GetDownSampledSourceDepthMinRTs() const;
        uint8_t* GetDownSampledSourceRTs() const;
        PostProcessManager(render::RenderTargetsManager* renderTargetsManager, unsigned int arg2);
        ~PostProcessManager();
        void Destroy();
        uint8_t Init();
        void DestroyRenderingResources();
        unsigned long CreateRenderingResources();
        void DestroyRenderTargets();
        void AddEffect(const shared_ptr<PostProcessEffect>& postProcessEffect);
        void RemoveEffect(const shared_ptr<PostProcessEffect>& postProcessEffect);
        void RenderEffects(render::RenderContext& renderContext, const render::RenderTargets* renderTargets,
                           const render::Texture* texture1, const render::Texture* texture2,
                           const render::Viewport& viewport, const ViewTransforms& viewTransforms, float arg7,
                           unsigned int arg8, bool arg9, graphics::ViewRenderTargets* viewRenderTargets);
        int GetEnabledEffectCount() const;
        void PerformViewportResolve(render::RenderContext& renderContext, const render::Texture* texture1,
                                    const render::Texture* texture2, const render::Viewport& viewport,
                                    unsigned char arg5);
        unsigned long CreateRenderTargets(const render::Texture::Desc& desc1, const render::Texture::Desc& desc2,
                                          unsigned int arg3, unsigned char arg4);
        void RenderDebug(const render::Viewport& viewport);
        shared_ptr* GetEffect(int arg1) const;
        void GetAvgLuminanceFilter();
        KawaseBlurFilter* GetKawaseBlurFilter();
        uint8_t* GetDualFilteringBlurFilter();
        uint8_t* GetGaussianBlurFilter();
        uint8_t* GetRenderToTexture() const;
        ViewTransforms* GetViewTransforms() const;

    private:
        char field_0;
        char field_1;
        uint8_t _unknown_2[206];
        RenderTargetsManager* m_pRenderTargetsManager;
        uint8_t _unknown_216[152];
        shared_ptr field_368;
        shared_ptr field_384;
        uint8_t _unknown_400[840];
    };

    // 0x1009afd00
    void PostProcessManager::GetAvgLuminanceFilter() {
        field_1016.get();
    }

    // 0x1009b0370
    KawaseBlurFilter* PostProcessManager::GetKawaseBlurFilter() {
        return (KawaseBlurFilter*)&field_728;
    }

    // 0x1009b0470
    uint8_t* PostProcessManager::GetDualFilteringBlurFilter() {
        return &field_968;
    }

    // 0x1009b0c40
    uint8_t* PostProcessManager::GetGaussianBlurFilter() {
        return &field_680;
    }

    // 0x1009b12d0
    uint8_t* PostProcessManager::GetRenderToTexture() const {
        return &field_1232;
    }

    // 0x1009b3320
    ViewTransforms* PostProcessManager::GetViewTransforms() const {
        return (ViewTransforms*)&field_1024;
    }

    // 0x1009bc240
    bool PostProcessManager::AddEffect(shared_ptr<PostProcessEffect> const&)::$_0::operator()(
        const shared_ptr<PostProcessEffect>& postProcessEffect1,
        const shared_ptr<PostProcessEffect>& postProcessEffect2) const {
        TextRun* pTVar1 = (TextRun*)(*this).operator->();
        int iVar2 = pTVar1->GetMaxLineWidth();
        pTVar1 = (TextRun*)postProcessEffect1.operator->();
        return pTVar1->GetMaxLineWidth() < iVar2;
    }

    // 0x1009bc910
    void PostProcessManager::RenderEffects(
        render::RenderContext&, render::RenderTargets const*, render::Texture const*, render::Texture const*,
        render::Viewport const&, ViewTransforms const&, float, unsigned int, bool,
        graphics::ViewRenderTargets*)::$_1::operator()(const shared_ptr<PostProcessEffect>& postProcessEffect) const {
        long* plVar1 = (long*)(*this).operator->();
        (**(void (**)(...))(*plVar1 + 32))(plVar1);
    }

} // namespace jag::postprocess
