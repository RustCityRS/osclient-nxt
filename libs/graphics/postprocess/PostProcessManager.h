// libs/graphics/postprocess/PostProcessManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::postprocess {
    class PostProcessManager {
    public:
        GetPostProcessParams();
        RenderTargetsManager* GetRenderTargetsManager();
        GetBrightPassFilter();
        GetDownSampledSourceDepthMinRTs() const;
        GetDownSampledSourceRTs() const;
        PostProcessManager(render::RenderTargetsManager*, unsigned int);
        ~PostProcessManager();
        void Destroy();
        byte Init();
        void DestroyRenderingResources();
        ulong CreateRenderingResources();
        void DestroyRenderTargets();
        void AddEffect(shared_ptr<PostProcessEffect> const&);
        void RemoveEffect(shared_ptr<PostProcessEffect> const&);
        void RenderEffects(render::RenderContext&, render::RenderTargets const*, render::Texture const*,
                           render::Texture const*, render::Viewport const&, ViewTransforms const&, float, unsigned int,
                           bool, graphics::ViewRenderTargets*);
        int GetEnabledEffectCount() const;
        void PerformViewportResolve(render::RenderContext&, render::Texture const*, render::Texture const*,
                                    render::Viewport const&, unsigned char);
        ulong CreateRenderTargets(render::Texture::Desc const&, render::Texture::Desc const&, unsigned int,
                                  unsigned char);
        void RenderDebug(render::Viewport const&);
        shared_ptr<PostProcessEffect>* GetEffect(int) const;
        void GetAvgLuminanceFilter();
        GetKawaseBlurFilter();
        GetDualFilteringBlurFilter();
        GetGaussianBlurFilter();
        GetRenderToTexture() const;
        GetViewTransforms() const;

        // data members, from how the methods use this: 1240 bytes
        char field_0; // offset 0
        char field_1; // offset 1
        char _unknown_2[206];
        RenderTargetsManager* m_pRenderTargetsManager; // offset 208
        char _unknown_216[32];
        shared_ptr field_248; // offset 248
        shared_ptr field_264; // offset 264
        shared_ptr field_280; // offset 280
        char _unknown_296[72];
        shared_ptr field_368; // offset 368
        shared_ptr field_384; // offset 384
        char _unknown_400[840];
    };

    // 0x1009afd00, 32 bytes, inline, placed by class name and debug map
    // PostProcessManager::GetAvgLuminanceFilter()
    void PostProcessManager::GetAvgLuminanceFilter() {
        (&field_1016)->get();
    }

    // 0x1009b0370, 16 bytes, inline, placed by class name
    // PostProcessManager::GetKawaseBlurFilter()
    undefined1* PostProcessManager::GetKawaseBlurFilter() {
        return &field_728;
    }

    // 0x1009b0470, 16 bytes, inline, placed by class name
    // PostProcessManager::GetDualFilteringBlurFilter()
    undefined1* PostProcessManager::GetDualFilteringBlurFilter() {
        return &field_968;
    }

    // 0x1009b0c40, 16 bytes, inline, placed by class name
    // PostProcessManager::GetGaussianBlurFilter()
    undefined1* PostProcessManager::GetGaussianBlurFilter() {
        return &field_680;
    }

    // 0x1009b12d0, 16 bytes, inline, placed by class name
    // PostProcessManager::GetRenderToTexture() const
    undefined1* PostProcessManager::GetRenderToTexture() {
        return &field_1232;
    }

    // 0x1009b3320, 16 bytes, inline, placed by class name
    // PostProcessManager::GetViewTransforms() const
    undefined1* PostProcessManager::GetViewTransforms() {
        return &field_1024;
    }

    // 0x1009bc240, 64 bytes, inline, placed by class name
    // PostProcessManager::AddEffect(shared_ptr<PostProcessEffect> const&)::$_0::operator()(shared_ptr<PostProcessEffect> const&, shared_ptr<PostProcessEffect> const&) const
    /* PostProcessManager::AddEffect(shared_ptr<PostProcessEffect>
   const&)::$_0::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<PostProcessEffect>
   const&, shared_ptr<PostProcessEffect> const&) const */

    bool PostProcessManager::AddEffect(shared_ptr<PostProcessEffect> const&)::$_0::operator()(shared_ptr* param_1,
                                                                                              shared_ptr* param_2) {
        TextRun* pTVar1;
        int iVar2;

        pTVar1 = (TextRun*)shared_ptr<PostProcessEffect>::operator->((shared_ptr<PostProcessEffect>*)param_1);
        iVar2 = pTVar1->GetMaxLineWidth();
        pTVar1 = (TextRun*)shared_ptr<PostProcessEffect>::operator->((shared_ptr<PostProcessEffect>*)param_2);
        return pTVar1->GetMaxLineWidth() < iVar2;
    }

    // 0x1009bc910, 32 bytes, inline, placed by class name
    // PostProcessManager::RenderEffects(render::RenderContext&, render::RenderTargets const*, render::Texture const*, render::Texture const*, render::Viewport const&, ViewTransforms const&, float, unsigned int, bool, graphics::ViewRenderTargets*)::$_1::operator()(shared_ptr<PostProcessEffect> const&) const
    /* PostProcessManager::RenderEffects(render::RenderContext&,
   render::RenderTargets const*, render::Texture const*, render::Texture const*,
   render::Viewport const&, ViewTransforms const&, float, unsigned int, bool,
   graphics::ViewRenderTargets*)::$_1::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<PostProcessEffect>
   const&) const */

    void PostProcessManager::RenderEffects(render::RenderContext&, render::RenderTargets_const*, render::Texture_const*,
                                           render::Texture_const*, render::Viewport_const&, ViewTransforms_const&,
                                           float, unsigned int, bool,
                                           graphics::ViewRenderTargets*)::$_1::operator()(shared_ptr* param_1) {
        long* plVar1;

        plVar1 = (long*)shared_ptr<PostProcessEffect>::operator->((shared_ptr<PostProcessEffect>*)this);
        (**(code**)(*plVar1 + 32))(plVar1);
    }

} // namespace jag::postprocess
