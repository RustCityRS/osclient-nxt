// libs/graphics/runetek7/renderer/renderpasses/QueryPass.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class QueryPass {
    public:
        // virtual methods in vtable order
        virtual ~QueryPass();
        virtual void PreparePass(RT7Core& rt7Core, EffectManager& effectManager, const SceneViewData& sceneViewData,
                                 DrawableQueue& drawableQueue);
        virtual uint64_t BeginPass(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                   EffectManager& effectManager, const SceneViewData& sceneViewData,
                                   const DrawableQueue& drawableQueue);
        virtual void Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState, EffectManager& effectManager,
                            const SceneViewData& sceneViewData, DrawableQueue& drawableQueue);
        virtual void RenderDebug(EffectManager& effectManager, DrawableQueue& drawableQueue);
        virtual void RegisterTweakVarsOcclusion(tweak::Container& container);
        virtual QueryPass* GetOcclusionRTName();
        virtual void DestroyRenderingResources();
        QueryPass(render::RenderTargetsManager* renderTargetsManager, ThreadPool* threadPool);
        void GetPreferredRT();
        void GetPreferredRT() const;
        uint32_t GetOcclusionTargetWidth() const;
        uint32_t GetOcclusionTargetHeight() const;
        unsigned long PrepareQueryRT(RT7Core& rt7Core);
        void SetupDistanceCulling(const math::AABB& aabb, const math::Matrix44T<float>& matrix44);
        void DisableDistanceCulling();
        Mode GetMode() const;
        bool IsDistanceCulled(float arg1) const;
        uint32_t GetEnabledDrawGroup(DrawableGroupType drawableGroupType) const;
        void SetMode(Mode mode);
        void SetQueryRenderTargetSize(unsigned int arg1, unsigned int arg2);
        static bool m_enablePreciseCulling; // = 1
        static bool m_DrawQueryTests;       // = 1
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
        unsigned int field_792;
        Mode m_mode;
        unsigned int field_800;
        unsigned int m_queryRenderTargetSize;
        unsigned int field_808;
        float field_812;
        shared_ptr field_816;
        uint8_t _unknown_832[8];
    };

    // 0x1007ab090
    void QueryPass::GetPreferredRT() {
        if (field_816->operator_cast_to_bool() == '\0') {
            *field_832;
        } else {
            field_816->end();
        }
    }

    // 0x1007ab900
    void QueryPass::DisableDistanceCulling() {
        field_812 = -1.0;
    }

    // 0x1007bc090
    QueryPass* QueryPass::GetOcclusionRTName() {

        new (this) eastl::string("QueryOcclusion");
        return this;
    }

    // 0x100813750
    bool QueryPass::IsDistanceCulled(float arg1) const {
        return field_812 < arg1 && 0.0 <= field_812;
    }

    // 0x100813770
    uint32_t QueryPass::GetEnabledDrawGroup(DrawableGroupType drawableGroupType) const {
        return (field_800 >> (drawableGroupType & 31) & 1) != 0;
    }

    // 0x100980b20
    void QueryPass::SetMode(QueryPass::Mode mode) {
        m_mode = mode;
    }

    // 0x1009810c0
    void QueryPass::SetQueryRenderTargetSize(unsigned int arg1, unsigned int arg2) {
        m_queryRenderTargetSize = arg1;
        field_808 = arg2;
    }

} // namespace jag::graphics

namespace jag {
    // 0x1007ab860
    float DstFromCameraPlaneUnclamped(const math::Vector3T<float>& vector3, const math::Matrix44T<float>& matrix44) {
        float* pfVar7 = (float*)math::Matrix44T<float>::operator()(matrix44, 2);
        float fVar1 = *(float*)vector3;
        float fVar2 = *pfVar7;
        pfVar7 = (float*)math::Matrix44T<float>::operator()(matrix44, 6);
        float fVar3 = *(float*)(vector3 + 4);
        float fVar4 = *pfVar7;
        pfVar7 = (float*)math::Matrix44T<float>::operator()(matrix44, 10);
        float fVar5 = *(float*)(vector3 + 8);
        float fVar6 = *pfVar7;
        pfVar7 = (float*)math::Matrix44T<float>::operator()(matrix44, 14);
        return fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + *pfVar7;
    }

} // namespace jag
