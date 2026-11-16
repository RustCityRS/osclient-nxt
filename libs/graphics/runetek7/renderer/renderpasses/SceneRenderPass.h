// libs/graphics/runetek7/renderer/renderpasses/SceneRenderPass.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class SceneRenderPass : public RenderPass // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~SceneRenderPass();
        virtual void PreparePass(RT7Core& rt7Core, EffectManager& effectManager, const SceneViewData& sceneViewData,
                                 DrawableQueue& drawableQueue);
        virtual void OnOcclusionEnabled();
        virtual void __pure_slot_9() = 0;
        virtual void CreateRenderingResources();
        virtual void DestroyRenderingResources();
        OcclusionManager GetOcclusionManager();
        OcclusionManager GetOcclusionManager() const;
        void ClearRenderTargets(render::RenderContext& renderContext, const render::RenderTargetData& renderTargetData,
                                const eastl::fixed_vector<render::Viewport, 2ul>& viewports);
        SceneRenderPass(RenderPassType renderPassType, render::RenderTargetsManager* renderTargetsManager,
                        ThreadPool* threadPool);
        void SetOcclusionTestEnabled(bool arg1);
        uint64_t GetCPUOcclusionEnabled(const SceneViewData& sceneViewData) const;
        uint64_t GetOcclusionEnabled(const SceneViewData& sceneViewData) const;
        unsigned long IsViewChangeValidForOcclusion(const SceneViewData& sceneViewData);
        void RenderOccludedDrawableGroup(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                                         EffectManager& effectManager, const SceneViewData& sceneViewData,
                                         DrawableQueue& drawableQueue, DrawableGroupType drawableGroupType, bool arg7,
                                         OcclusionManager* occlusionManager, float arg9);
        void DownsampleGPUDepthBuffer(RT7Core& rt7Core, EffectManager& effectManager,
                                      const SceneViewData& sceneViewData, DrawableQueue& drawableQueue,
                                      const render::Texture* texture, bool arg6);
        uint64_t GetOcclusionSceneViewData() const;
        void RenderOccludedDrawableGroup(
            RT7Core& rt7Core, const render::DrawCallState& drawCallState, EffectManager& effectManager,
            const SceneViewData& sceneViewData, DrawableQueue& drawableQueue, DrawableGroupType drawableGroupType,
            RenderPassType renderPassType, bool arg8,
            std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&
                callback);
        uint64_t GetOcclusionEnabledIgnoringLocalBuffer(const SceneViewData& sceneViewData) const;
        uint64_t GetGPUOcclusionEnabled(const SceneViewData& sceneViewData) const;
        void InitOcclusion(render::RenderTargetsManager* renderTargetsManager, const char* str, bool arg3,
                           unsigned int arg4, unsigned int arg5);
        void DestroyOcclusion(render::RenderTargetsManager* renderTargetsManager);
        void OnOcclusionDisabled();
        uint32_t GetOcclusionEnabled() const;
        void ResolveOcclusionBuffer(RT7Core& rt7Core, const SceneViewData& sceneViewData);
        void UpdateMaterialDistanceKeys(DrawableQueue& drawableQueue, DrawableGroupType drawableGroupType);
        bool GetOcclusionTestEnabled() const;

    private:
        OcclusionManager m_occlusionManager;
        uint8_t _unknown_729[47];
        char field_776;
        bool field_777;
        uint8_t field_778;
        uint8_t _unknown_779[1];
        int field_780;
        RenderTargetsManager* field_784;
        unsigned int field_792;
        uint8_t _unknown_796[4];
    };

    // 0x1007a8410
    uint64_t SceneRenderPass::GetOcclusionSceneViewData() const {
        unsigned int uVar2;

        if (!(field_744.empty())) {
            if ((&field_736)->operator_cast_to_bool()) {
                uVar2 = ((BufferedRenderTargets*)field_736.operator->())->GetReadIndex();
                return field_744[(unsigned long)uVar2];
            }
        }
        return 0;
    }

    // 0x1008b20d0
    bool SceneRenderPass::GetOcclusionTestEnabled() const {
        if (field_776 == '\0') {
            return false;
        }
        return field_777 != false;
    }

} // namespace jag::graphics
