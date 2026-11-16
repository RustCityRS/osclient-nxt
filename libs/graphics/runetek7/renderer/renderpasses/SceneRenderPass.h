// libs/graphics/runetek7/renderer/renderpasses/SceneRenderPass.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class SceneRenderPass : public RenderPass // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~SceneRenderPass();
        virtual void PreparePass(RT7Core&, EffectManager&, SceneViewData const&, DrawableQueue&);
        virtual void OnOcclusionEnabled();
        virtual void __pure_slot_9() = 0;
        virtual void CreateRenderingResources();
        virtual void DestroyRenderingResources();
        GetOcclusionManager();
        GetOcclusionManager() const;
        void ClearRenderTargets(render::RenderContext&, render::RenderTargetData const&,
                                eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator> const&);
        SceneRenderPass(RenderPassType, render::RenderTargetsManager*, ThreadPool*);
        void SetOcclusionTestEnabled(bool);
        GetCPUOcclusionEnabled(SceneViewData const&) const;
        GetOcclusionEnabled(SceneViewData const&) const;
        ulong IsViewChangeValidForOcclusion(SceneViewData const&);
        void RenderOccludedDrawableGroup(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&,
                                         DrawableQueue&, DrawableGroupType, bool, OcclusionManager*, float);
        void DownsampleGPUDepthBuffer(RT7Core&, EffectManager&, SceneViewData const&, DrawableQueue&,
                                      render::Texture const*, bool);
        GetOcclusionSceneViewData() const;
        void RenderOccludedDrawableGroup(
            RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&, DrawableQueue&,
            DrawableGroupType, RenderPassType, bool,
            std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&);
        GetOcclusionEnabledIgnoringLocalBuffer(SceneViewData const&) const;
        bool GetGPUOcclusionEnabled(SceneViewData const&) const;
        void InitOcclusion(render::RenderTargetsManager*, char const*, bool, unsigned int, unsigned int);
        void DestroyOcclusion(render::RenderTargetsManager*);
        void OnOcclusionDisabled();
        GetOcclusionEnabled() const;
        void ResolveOcclusionBuffer(RT7Core&, SceneViewData const&);
        void UpdateMaterialDistanceKeys(DrawableQueue&, DrawableGroupType);
        bool GetOcclusionTestEnabled() const;

        // data members, from how the methods use this: 800 bytes, the first 16 are RenderPass
        OcclusionManager field_16; // offset 16
        char _unknown_729[47];
        char field_776;       // offset 776
        bool field_777;       // offset 777
        undefined1 field_778; // offset 778
        char _unknown_779[1];
        int field_780;        // offset 780
        undefined8 field_784; // offset 784
        uint field_792;       // offset 792
        char _unknown_796[4];
    };

    // 0x1007a8410, 96 bytes, inline, placed by class name
    // SceneRenderPass::GetOcclusionSceneViewData() const
    undefined8 SceneRenderPass::GetOcclusionSceneViewData() {
        char cVar1;
        uint uVar3;
        BufferedRenderTargets* this_00;
        undefined8 uVar4;

        cVar1 = (&field_744)->empty();
        if (cVar1 == '\0') {
            if ((&field_736)->operator_cast_to_bool()) {
                this_00 = (BufferedRenderTargets*)std::unique_ptr<render::BufferedRenderTargets,
                                                                  std::default_delete<render::BufferedRenderTargets>>::
                          operator->((unique_ptr<render::BufferedRenderTargets,
                                                 std::default_delete<render::BufferedRenderTargets>>*)&field_736);
                uVar3 = this_00->GetReadIndex();
                uVar4 = Array<SceneViewData, eastl::allocator>::operator[](
                    (Array<SceneViewData, eastl::allocator>*)&field_744, (ulong)uVar3);
                return uVar4;
            }
        }
        return 0;
    }

    // 0x1008b20d0, 32 bytes, inline, placed by class name
    // SceneRenderPass::GetOcclusionTestEnabled() const
    bool SceneRenderPass::GetOcclusionTestEnabled() {
        if (field_776 == '\0') {
            return false;
        }
        return field_777 != false;
    }

} // namespace jag::graphics

namespace jag::fixedfunction {
    // 0x1007a6e50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState const&, graphics::EffectManager&, graphics::SceneViewData const&, graphics::DrawableQueue&)::$_0, void>(graphics::ForwardLightingPass::Render(graphics::RT7Core&, render::DrawCallState const&, graphics::EffectManager&, graphics::SceneViewData const&, graphics::DrawableQueue&)::$_0&&): jumps straight to the base-object constructor

} // namespace jag::fixedfunction
