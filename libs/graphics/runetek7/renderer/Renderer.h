// libs/graphics/runetek7/renderer/Renderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class Renderer {
    public:
        // virtual methods in vtable order
        virtual ~Renderer();
        virtual void
        GatherSceneGraphDrawableElements(eastl::vector<std::pair<GraphEntity*, GraphEntityTransformData>>& arg1,
                                         const SceneViewData& arg2, GraphNode* arg3, const EffectManager& arg4);
        void GatherSceneGraphDrawableElements(unsigned int arg1, const SceneViewData& arg2, GraphNode* arg3, int arg4,
                                              const EffectManager& arg5);
        uint8_t* GetDrawableQueue();
        void Clear();
        Renderer(RT7Core* rt7Core,
                 const eastl::fixed_vector<DrawableQueue::RenderPassDrawableGroupsConfig, 10ul>&
                     renderPassDrawableGroupsConfigs,
                 unsigned long arg3, unsigned long arg4);
        void AddDrawableList(DrawableList* drawableList);
        void RemoveDrawableList(DrawableList* drawableList);
        void AddDrawable(Drawable* drawable);
        void RemoveDrawable(Drawable* drawable);
        void RenderView(unsigned int arg1, int arg2, const SceneViewData& sceneViewData, GraphNode* graphNode,
                        EffectManager& effectManager, bool arg6);
        void RenderViewBegin(render::RenderContext& renderContext, const SceneViewData& sceneViewData,
                             EffectManager& effectManager, const RenderPassBitSet& renderPassBitSet);
        void GatherDrawableElements(unsigned int arg1, const SceneViewData& sceneViewData, GraphNode* graphNode,
                                    int arg4, const EffectManager& effectManager);
        void RenderViewRenderPasses(const SceneViewData& sceneViewData, render::RenderContext& renderContext, bool arg3,
                                    EffectManager& effectManager, const RenderPassBitSet& renderPassBitSet);
        void RenderViewEnd(render::RenderContext& renderContext);
        void RenderView(eastl::vector<std::pair<GraphEntity*, GraphEntityTransformData>>& pairs,
                        const SceneViewData& sceneViewData, GraphNode* graphNode, EffectManager& effectManager,
                        bool arg5, const RenderPassBitSet& renderPassBitSet);
        void GatherDrawableElements(eastl::vector<std::pair<GraphEntity*, GraphEntityTransformData>>& pairs,
                                    const SceneViewData& sceneViewData, GraphNode* graphNode,
                                    const EffectManager& effectManager);
        void RenderView(const SceneViewData& sceneViewData, EffectManager& effectManager, bool arg3,
                        const RenderPassBitSet& renderPassBitSet);
        void SetupDrawableGroups();

    private:
        RT7Core* field_8;
        uint8_t _unknown_16[64];
        uint8_t m_drawableQueue;
        uint8_t _unknown_81[7];
    };

    // 0x1001cf5f0
    void Renderer::Clear() {
        field_16.clear();
        field_48.clear();
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x1001cf640
    auto Matrix44T<float>::Invert(float* arg1) {
        auto result;

        float* pfVar17 = (float*)(result)[0];
        float fVar1 = *pfVar17;
        pfVar17 = (float*)(result)[1];
        float fVar2 = *pfVar17;
        pfVar17 = (float*)(result)[2];
        float fVar3 = *pfVar17;
        pfVar17 = (float*)(result)[3];
        float fVar4 = *pfVar17;
        ReturnValue* returnValue = &result + 2;
        pfVar17 = (float*)(*returnValue)[0];
        float fVar5 = *pfVar17;
        pfVar17 = (float*)(*returnValue)[1];
        float fVar6 = *pfVar17;
        pfVar17 = (float*)(*returnValue)[2];
        float fVar7 = *pfVar17;
        pfVar17 = (float*)(*returnValue)[3];
        float fVar8 = *pfVar17;
        ReturnValue* this_00 = &result + 4;
        pfVar17 = (float*)(*this_00)[0];
        float fVar9 = *pfVar17;
        pfVar17 = (float*)(*this_00)[1];
        float fVar10 = *pfVar17;
        pfVar17 = (float*)(*this_00)[2];
        float fVar11 = *pfVar17;
        pfVar17 = (float*)(*this_00)[3];
        float fVar12 = *pfVar17;
        ReturnValue* this_01 = &result + 6;
        pfVar17 = (float*)(*this_01)[0];
        float fVar13 = *pfVar17;
        pfVar17 = (float*)(*this_01)[1];
        float fVar14 = *pfVar17;
        pfVar17 = (float*)(*this_01)[2];
        float fVar15 = *pfVar17;
        pfVar17 = (float*)(*this_01)[3];
        float fVar16 = *pfVar17;
        float fVar28 = fVar6 * fVar1 - fVar5 * fVar2;
        float fVar30 = fVar7 * fVar1 - fVar5 * fVar3;
        float fVar24 = fVar8 * fVar1 - fVar5 * fVar4;
        float fVar29 = fVar7 * fVar2 - fVar6 * fVar3;
        float fVar27 = fVar8 * fVar2 - fVar6 * fVar4;
        float fVar26 = fVar8 * fVar3 - fVar7 * fVar4;
        float fVar21 = fVar16 * fVar11 - fVar15 * fVar12;
        float fVar19 = fVar16 * fVar10 - fVar14 * fVar12;
        float fVar23 = fVar15 * fVar10 - fVar14 * fVar11;
        float fVar20 = fVar16 * fVar9 - fVar13 * fVar12;
        float fVar22 = fVar15 * fVar9 - fVar13 * fVar11;
        float fVar25 = fVar14 * fVar9 - fVar13 * fVar10;
        float fVar18 = (fVar25 * fVar26 + fVar23 * fVar24 + fVar20 * fVar29 + fVar21 * fVar28) -
                       (fVar22 * fVar27 + fVar19 * fVar30);
        if (arg1 != nullptr) {
            *arg1 = fVar18;
        }
        if (fVar18 != 0.0) {
            fVar18 = 1.0 / fVar18;
            pfVar17 = (float*)(result)[0];
            *pfVar17 = ((fVar23 * fVar8 + fVar21 * fVar6) - fVar19 * fVar7) * fVar18;
            pfVar17 = (float*)(result)[1];
            *pfVar17 = (fVar19 * fVar3 - (fVar21 * fVar2 + fVar23 * fVar4)) * fVar18;
            pfVar17 = (float*)(result)[2];
            *pfVar17 = (fVar16 * fVar29 + (fVar14 * fVar26 - fVar15 * fVar27)) * fVar18;
            pfVar17 = (float*)(result)[3];
            *pfVar17 = (fVar11 * fVar27 - (fVar12 * fVar29 + fVar10 * fVar26)) * fVar18;
            pfVar17 = (float*)(*returnValue)[0];
            *pfVar17 = (fVar20 * fVar7 - (fVar21 * fVar5 + fVar22 * fVar8)) * fVar18;
            pfVar17 = (float*)(*returnValue)[1];
            *pfVar17 = ((fVar22 * fVar4 + fVar21 * fVar1) - fVar20 * fVar3) * fVar18;
            pfVar17 = (float*)(*returnValue)[2];
            *pfVar17 = (fVar15 * fVar24 - (fVar16 * fVar30 + fVar13 * fVar26)) * fVar18;
            pfVar17 = (float*)(*returnValue)[3];
            *pfVar17 = (fVar12 * fVar30 + (fVar26 * fVar9 - fVar11 * fVar24)) * fVar18;
            pfVar17 = (float*)(*this_00)[0];
            *pfVar17 = ((fVar8 * fVar25 + fVar19 * fVar5) - fVar20 * fVar6) * fVar18;
            pfVar17 = (float*)(*this_00)[1];
            *pfVar17 = (fVar20 * fVar2 - (fVar19 * fVar1 + fVar4 * fVar25)) * fVar18;
            pfVar17 = (float*)(*this_00)[2];
            *pfVar17 = (fVar16 * fVar28 + (fVar13 * fVar27 - fVar14 * fVar24)) * fVar18;
            pfVar17 = (float*)(*this_00)[3];
            *pfVar17 = (fVar24 * fVar10 - (fVar12 * fVar28 + fVar27 * fVar9)) * fVar18;
            pfVar17 = (float*)(*this_01)[0];
            *pfVar17 = (fVar6 * fVar22 - (fVar5 * fVar23 + fVar7 * fVar25)) * fVar18;
            pfVar17 = (float*)(*this_01)[1];
            *pfVar17 = ((fVar25 * fVar3 + fVar23 * fVar1) - fVar22 * fVar2) * fVar18;
            pfVar17 = (float*)(*this_01)[2];
            *pfVar17 = (fVar14 * fVar30 - (fVar15 * fVar28 + fVar13 * fVar29)) * fVar18;
            pfVar17 = (float*)(*this_01)[3];
            *pfVar17 = (fVar11 * fVar28 + (fVar9 * fVar29 - fVar10 * fVar30)) * fVar18;
        }
        return result;
    }

} // namespace jag::math
