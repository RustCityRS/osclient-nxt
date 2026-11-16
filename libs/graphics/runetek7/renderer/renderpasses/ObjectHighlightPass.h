// libs/graphics/runetek7/renderer/renderpasses/ObjectHighlightPass.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ObjectHighlightPass {
    public:
        // virtual methods in vtable order
        virtual ~ObjectHighlightPass();
        virtual void PreparePass(RT7Core&, EffectManager&, SceneViewData const&, DrawableQueue&);
        virtual ulong BeginPass(render::DrawCallState&, render::RenderContext&, EffectManager&, SceneViewData const&,
                                DrawableQueue const&);
        virtual void Render(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&,
                            DrawableQueue&);
        virtual void RenderDebug(EffectManager&, DrawableQueue&);
        virtual void RegisterTweakVarsOcclusion(tweak::Container&);
        virtual ObjectHighlightPass* GetOcclusionRTName();
        virtual void CreateRenderingResources();
        virtual void DestroyRenderingResources();
        void SetEnabled(bool);
        ObjectHighlightPass(render::RenderTargetsManager*, ThreadPool*);
        bool HasValidRenderTargets() const;
        bool NeedsResolve() const;
        void RenderOutlines(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&,
                            DrawableQueue&, OcclusionManager&, bool);
        void RenderSilhouettes(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&,
                               DrawableQueue&, OcclusionManager&, bool);
        void CompositeToScreen(RT7Core&, render::RenderTargets const*, render::Viewport const&);
        void ClearRenderTargets(RT7Core&);
        void UnbindDepthTargets();
        ulong EnsureRenderTargets(render::Texture*);
        bool HasBlurRenderTargets() const;
        ulong InitBlurRenderTargets();
        void DestroyBlurRenderTargets();
        void DestroyRenderTargets();
        bool CheckMultiSampleCountChanged(unsigned int) const;
        void RebindDepthRenderTargets(render::Texture*);
        void PerformBlur(RT7Core&);
        void CreateBlurShader();
        void SetBlurSubPassEnabled(bool);
        void SetSilhouetteDepthBias(float, float);
        void SetSilhouetteCoverPassEnabled(bool);
        void SetDepthProviderRT(shared_ptr<render::RenderTargets> const&);
        static /* 1 bytes */ m_enableOccludedOutlines; // = 1
        static /* 1 bytes */ m_showBuffer;

        // data members, from how the methods use this: 2184 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        OcclusionManager field_16; // offset 16
        char _unknown_729[47];
        bool field_776;       // offset 776
        bool field_777;       // offset 777
        undefined1 field_778; // offset 778
        char _unknown_779[1];
        int field_780;             // offset 780
        undefined8 field_784;      // offset 784
        undefined4 field_792;      // offset 792
        bool m_enabled;            // offset 796
        bool m_blurSubPassEnabled; // offset 797
        undefined1 field_798;      // offset 798
        char _unknown_799[1];
        float m_silhouetteDepthBias;       // offset 800
        float field_804;                   // offset 804
        bool m_silhouetteCoverPassEnabled; // offset 808
        char _unknown_809[39];
        shared_ptr field_848;    // offset 848
        shared_ptr field_864;    // offset 864
        shared_ptr field_880;    // offset 880
        shared_ptr field_896;    // offset 896
        shared_ptr field_912;    // offset 912
        GeometryBatch field_928; // offset 928
    };

    // 0x100601f10, 16 bytes, inline, placed by class name and debug map
    // ObjectHighlightPass::SetEnabled(bool)
    void ObjectHighlightPass::SetEnabled(bool param_1) {
        m_enabled = param_1;
    }

    // 0x1007a8d60, 64 bytes, inline, placed by class name
    // ObjectHighlightPass::NeedsResolve() const
    bool ObjectHighlightPass::NeedsResolve() {
        bool bVar1;

        bVar1 = field_880->operator_cast_to_bool();
        if (bVar1) {
            bVar1 = operator!=((shared_ptr*)field_880, (shared_ptr*)field_864);
        } else {
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x1007aa2e0, 64 bytes, inline, placed by class name
    // ObjectHighlightPass::HasBlurRenderTargets() const
    bool ObjectHighlightPass::HasBlurRenderTargets() {
        bool bVar1;

        bVar1 = ((field_928 + 440))->operator_cast_to_bool();
        if (bVar1) {
            bVar1 = ((field_928 + 456))->operator_cast_to_bool();
        } else {
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x1007bc050, 64 bytes, inline, placed by class name
    // ObjectHighlightPass::GetOcclusionRTName()
    ObjectHighlightPass* ObjectHighlightPass::GetOcclusionRTName() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("ObjectHighlightOcclusion", local_20);
        return this;
    }

    // 0x1009810a0, 32 bytes, inline, placed by class name
    // ObjectHighlightPass::SetDepthProviderRT(shared_ptr<render::RenderTargets> const&)
    void ObjectHighlightPass::SetDepthProviderRT(shared_ptr* param_1) {
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)field_848, param_1);
    }

} // namespace jag::graphics
