// libs/graphics/runetek7/renderer/renderpasses/QueryPass.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class QueryPass {
    public:
        // virtual methods in vtable order
        virtual ~QueryPass();
        virtual void PreparePass(RT7Core&, EffectManager&, SceneViewData const&, DrawableQueue&);
        virtual BeginPass(render::DrawCallState&, render::RenderContext&, EffectManager&, SceneViewData const&,
                          DrawableQueue const&);
        virtual void Render(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&,
                            DrawableQueue&);
        virtual void RenderDebug(EffectManager&, DrawableQueue&);
        virtual void RegisterTweakVarsOcclusion(tweak::Container&);
        virtual QueryPass* GetOcclusionRTName();
        virtual void DestroyRenderingResources();
        QueryPass(render::RenderTargetsManager*, ThreadPool*);
        void GetPreferredRT();
        void GetPreferredRT() const;
        GetOcclusionTargetWidth() const;
        GetOcclusionTargetHeight() const;
        ulong PrepareQueryRT(RT7Core&);
        void SetupDistanceCulling(math::AABB const&, math::Matrix44T<float> const&);
        void DisableDistanceCulling();
        int GetMode() const;
        bool IsDistanceCulled(float) const;
        GetEnabledDrawGroup(DrawableGroupType) const;
        void SetMode(Mode);
        void SetQueryRenderTargetSize(unsigned int, unsigned int);
        static /* 1 bytes */ m_enablePreciseCulling; // = 1
        static /* 1 bytes */ m_DrawQueryTests;       // = 1
        static /* 1 bytes */ m_showBuffer;

        // data members, from how the methods use this: 848 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        OcclusionManager field_16; // offset 16
        char _unknown_729[47];
        bool field_776;       // offset 776
        bool field_777;       // offset 777
        undefined1 field_778; // offset 778
        char _unknown_779[1];
        int field_780;                   // offset 780
        RenderTargetsManager* field_784; // offset 784
        uint field_792;                  // offset 792
        int m_mode;                      // offset 796
        uint field_800;                  // offset 800
        uint m_queryRenderTargetSize;    // offset 804
        uint field_808;                  // offset 808
        float field_812;                 // offset 812
        shared_ptr field_816;            // offset 816
        shared_ptr field_832;            // offset 832
    };

    // 0x1007ab090, 64 bytes, inline, placed by class name and debug map
    // QueryPass::GetPreferredRT()
    /* QueryPass::GetPreferredRT() const */

    void QueryPass::GetPreferredRT() {
        if (field_816->operator_cast_to_bool()) {
            field_816->end();
        } else {
            shared_ptr<render::RenderTargets>::operator*((shared_ptr<render::RenderTargets>*)field_832);
        }
    }

    // 0x1007ab900, 16 bytes, inline, placed by class name and debug map
    // QueryPass::DisableDistanceCulling()
    void QueryPass::DisableDistanceCulling() {
        field_812 = -1.0;
    }

    // 0x1007bc090, 64 bytes, inline, placed by class name
    // QueryPass::GetOcclusionRTName()
    QueryPass* QueryPass::GetOcclusionRTName() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("QueryOcclusion", local_20);
        return this;
    }

    // 0x100813750, 32 bytes, inline, placed by class name
    // QueryPass::IsDistanceCulled(float) const
    bool QueryPass::IsDistanceCulled(float param_1) {
        return field_812 < param_1 && 0.0 <= field_812;
    }

    // 0x100813770, 32 bytes, inline, placed by class name
    // QueryPass::GetEnabledDrawGroup(DrawableGroupType) const
    undefined4 QueryPass::GetEnabledDrawGroup(uint param_2) {
        return CONCAT31((int3)(field_800 >> 8), (field_800 >> (param_2 & 31) & 1) != 0);
    }

    // 0x100980b20, 16 bytes, inline, placed by class name
    // QueryPass::SetMode(QueryPass::Mode)
    void QueryPass::SetMode(int param_2) {
        m_mode = param_2;
    }

    // 0x1009810c0, 32 bytes, inline, placed by class name
    // QueryPass::SetQueryRenderTargetSize(unsigned int, unsigned int)
    void QueryPass::SetQueryRenderTargetSize(uint param_1, uint param_2) {
        m_queryRenderTargetSize = param_1;
        field_808 = param_2;
    }

} // namespace jag::graphics

namespace jag {
    // 0x1007ab860, 144 bytes, inline, placed by debug map only (low confidence)
    // DstFromCameraPlaneUnclamped(math::Vector3T<float> const&, math::Matrix44T<float> const&)
    /* graphics::DstFromCameraPlaneUnclamped(math::Vector3T<float> const&,
   math::Matrix44T<float> const&) */

    float graphics::DstFromCameraPlaneUnclamped(Vector3T* param_1, Matrix44T* param_2) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float* pfVar7;

        pfVar7 = (float*)math::Matrix44T<float>::operator()((Matrix44T<float>*)param_2, 2);
        fVar1 = *(float*)param_1;
        fVar2 = *pfVar7;
        pfVar7 = (float*)math::Matrix44T<float>::operator()((Matrix44T<float>*)param_2, 6);
        fVar3 = *(float*)(param_1 + 4);
        fVar4 = *pfVar7;
        pfVar7 = (float*)math::Matrix44T<float>::operator()((Matrix44T<float>*)param_2, 10);
        fVar5 = *(float*)(param_1 + 8);
        fVar6 = *pfVar7;
        pfVar7 = (float*)math::Matrix44T<float>::operator()((Matrix44T<float>*)param_2, 14);
        return fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + *pfVar7;
    }

} // namespace jag
