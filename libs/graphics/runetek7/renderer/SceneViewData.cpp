// libs/graphics/runetek7/renderer/SceneViewData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "SceneViewData.h"

namespace jag::graphics {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    SceneViewData::GetViewTransforms() const;

    // 0x100123da0: the linker folded this into oldscape::LoginManager::GetDevCredentialsFilename(), which has identical code
    SceneViewData::GetRenderTargets() const;

    // 0x10042d4a0: the linker folded this into game::LocType::GetPostOffset() const, which has identical code
    float SceneViewData::GetStippleNearClipParams() const;

    // 0x1004797d0: the linker folded this into game::MapEnvironmentSettings::GetLightProbeSettings(), which has identical code
    float SceneViewData::GetStippleFarClipParams() const;

    // 0x1006adc50: the linker folded this into ui::PagedLayer::GetStaticChildren(), which has identical code
    SceneViewData::GetRenderTargetViewports() const;

    // 0x1007d31b0, 96 bytes, placed by class name and debug map
    // SceneViewData::GetRenderPass(RenderPassType) const
    RenderPass* SceneViewData::GetRenderPass(undefined4 param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        RenderPass** ppRVar3;
        RenderPass** ppRVar4;
        RenderPass* pRVar5;

        ppRVar4 = &field_520;
        uVar1 = ppRVar4->HeapBeginPtr();
        uVar2 = ppRVar4->end();
        ppRVar3 =
            std::find_if<RenderPass* const*, (RenderPassType)->GetRenderPass() const ::__24>(uVar1, uVar2, param_2);
        ppRVar4 = (RenderPass**)ppRVar4->end();
        if (ppRVar3 == ppRVar4) {
            pRVar5 = (RenderPass*)0;
        } else {
            pRVar5 = *ppRVar3;
        }
        return pRVar5;
    }

    // 0x1007e4c90, 240 bytes, base-object constructor, placed by class name
    // SceneViewData::SceneViewData()
    void SceneViewData::SceneViewData() {
        ImVec4 local_38[24];

        new (this) ViewTransforms();
        new (m_pViewFrustum, (Matrix44T*)PTR_IDENTITY_100ee6730, (Matrix44T*)PTR_IDENTITY_100ee6730) math::Frustum();
        ImVec4::ImVec4(local_38, 0.0, 0.0, 0.0, 1.0);
        new (&field_368, (RenderTargets*)0, (Vector4T*)local_38, 1, 1.0, 0) render::RenderTargetData();
        new (&field_432) eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>();
        new (&field_520) eastl::fixed_vector<RenderPass*, 8ul, true, eastl::allocator>();
        field_624 = 0;
        m_occlusionTestEnabled = false;
        m_minOcclusionDrawableRadius = 0.0;
        m_minOcclusionDrawableAxisLength = 0.0;
        new (&m_renderPassBits) callstack::Callstack();
        new (&m_stippleNearClipParams) StipplePlaneClipParams();
        new (&m_stippleFarClipParams) StipplePlaneClipParams();
        m_renderFlags = 0;
    }

    // 0x1007e4db0, 16 bytes, complete-object constructor, placed by class name
    // SceneViewData::SceneViewData(): jumps straight to the base-object constructor

    // 0x1007e4dc0, 160 bytes, placed by class name
    // SceneViewData::Clear()
    void SceneViewData::Clear() {
        undefined* puVar1;
        StipplePlaneClipParams local_20;

        puVar1 = PTR_IDENTITY_100ee6730;
        Set(PTR_IDENTITY_100ee6730, PTR_IDENTITY_100ee6730);
        (m_pViewFrustum, (Matrix44T*)puVar1, (Matrix44T*)puVar1)->Set();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        new (&m_renderPassBits) callstack::Callstack();
        local_20.field_0 = 0;
        new (&local_20) StipplePlaneClipParams();
        m_stippleNearClipParams = (float)(undefined4)local_20.field_0;
        field_644 = (float)local_20.field_0._4_4_;
        local_20.field_0 = 0;
        new (&local_20) StipplePlaneClipParams();
        m_stippleFarClipParams = (float)(undefined4)local_20.field_0;
        field_652 = (float)local_20.field_0._4_4_;
    }

    // 0x1007e4e60, 80 bytes, placed by class name
    // SceneViewData::SetTransforms(Camera const&)
    void SceneViewData::SetTransforms(Camera* param_1) {
        Matrix44T* pMVar1;
        Matrix44T* pMVar2;

        Set(param_1);
        pMVar1 = (Matrix44T*)GetScreen();
        pMVar2 = (Matrix44T*)GetOrigin();
        (m_pViewFrustum, pMVar1, pMVar2)->Set();
    }

    // 0x1007e4eb0, 80 bytes, placed by class name
    // SceneViewData::SetTransforms(ViewTransforms const&)
    void SceneViewData::SetTransforms(ViewTransforms* param_1) {
        Matrix44T* pMVar1;
        Matrix44T* pMVar2;

        ViewTransforms::operator=((ViewTransforms*)this, param_1);
        pMVar1 = (Matrix44T*)GetScreen();
        pMVar2 = (Matrix44T*)GetOrigin();
        (m_pViewFrustum, pMVar1, pMVar2)->Set();
    }

    // 0x1007e4f00, 80 bytes, placed by class name
    // SceneViewData::SetTransforms(math::Matrix44T<float> const&, math::Matrix44T<float> const&)
    void SceneViewData::SetTransforms(Matrix44T* param_1, Matrix44T* param_2) {
        Matrix44T* pMVar1;
        Matrix44T* pMVar2;
        Matrix44T* in_RDX;

        param_1->Set(param_2, in_RDX);
        pMVar1 = (Matrix44T*)param_1->GetScreen();
        pMVar2 = (Matrix44T*)param_1->GetOrigin();
        param_1[3].field_40.Set(pMVar1, pMVar2);
    }

    // 0x1007e4f50, 112 bytes, placed by class name
    // SceneViewData::RenderPassPushBack(RenderPass*)
    void SceneViewData::RenderPassPushBack(RenderPass* param_1) {
        undefined4 uVar1;

        if (param_1 == (RenderPass*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("renderPass",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/SceneViewData.cpp",
                      47, (char*)0);
        }
        eastl::fixed_vector<RenderPass*, 8ul, true, eastl::allocator>::push_back(&field_520);
        uVar1 = param_1->GetPos();
        (&m_renderPassBits, uVar1)->AddFormatType();
    }

    // 0x1007e4fd0, 176 bytes, placed by class name
    // SceneViewData::RenderPassPopBack()
    void SceneViewData::RenderPassPopBack() {
        RenderPass** this_00;
        CommandLine* this_01;
        char cVar1;
        uint uVar2;
        undefined8* puVar3;

        this_00 = &field_520;
        cVar1 = this_00->empty();
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_renderPasses.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/SceneViewData.cpp",
                      54, (char*)0);
        }
        cVar1 = this_00->empty();
        if (cVar1 == '\0') {
            puVar3 = (undefined8*)this_00->back();
            this_01 = (CommandLine*)*puVar3;
            if (this_01 == (CommandLine*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert("pRenderPass",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "renderer/SceneViewData.cpp",
                          58, (char*)0);
            }
            this_00->pop_back();
            uVar2 = this_01->GetPos();
            (&m_renderPassBits, uVar2)->RemoveRenderPass();
        }
    }

    // 0x100804200, 80 bytes, placed by class name
    // SceneViewData::GetRenderPass(RenderPassType) const::$_24::operator()(RenderPass const*) const
    /* SceneViewData::GetRenderPass(RenderPassType)
   const::$_24::TEMPNAMEPLACEHOLDERVALUE(RenderPass const*) const */

    _func_GetRenderPass_RenderPassType* const ::$_24::operator()(RenderPass * param_1) {
        undefined8 uVar1;

        if (param_1 == (RenderPass*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pRenderPass != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/SceneViewData.cpp",
                      69, (char*)0);
        }
        uVar1 = param_1->GetPos();
        return (_func_GetRenderPass_RenderPassType*)CONCAT71((int7)((ulong)uVar1 >> 8), (int)uVar1 == *(int*)this);
    }

} // namespace jag::graphics
