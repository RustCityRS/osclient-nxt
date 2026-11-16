// libs/graphics/runetek7/renderer/SceneViewData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "SceneViewData.h"

namespace jag::graphics {
    // 0x100009ca0: SceneViewData::GetViewTransforms() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100123da0: SceneViewData::GetRenderTargets() const has the same machine code as oldscape::LoginManager::GetDevCredentialsFilename()

    // 0x10042d4a0: SceneViewData::GetStippleNearClipParams() const has the same machine code as game::LocType::GetPostOffset() const

    // 0x1004797d0: SceneViewData::GetStippleFarClipParams() const has the same machine code as game::MapEnvironmentSettings::GetLightProbeSettings()

    // 0x1006adc50: SceneViewData::GetRenderTargetViewports() const has the same machine code as ui::PagedLayer::GetStaticChildren()

    // 0x1007d31b0
    RenderPass* SceneViewData::GetRenderPass(RenderPassType renderPassType) const {
        RenderPass* pRVar3;

        uint8_t* this_00 = &field_520;
        auto ppRVar1 = this_00->HeapBeginPtr();
        auto ppRVar2 = this_00->end();
        ppRVar1 = std::find_if<RenderPass* const*, (RenderPassType)->GetRenderPass() const ::__24>(
            ppRVar1, ppRVar2, (__24*)(unsigned long)renderPassType);
        ppRVar2 = (RenderPass**)this_00->end();
        if (ppRVar1 == ppRVar2) {
            pRVar3 = nullptr;
        } else {
            pRVar3 = *ppRVar1;
        }
        return pRVar3;
    }

    // 0x1007e4c90
    SceneViewData::SceneViewData()
        : ViewTransforms(), m_pViewFrustum(*PTR_IDENTITY_100ee6730, *PTR_IDENTITY_100ee6730) {

        ImVec4 local_38(0.0, 0.0, 0.0, 1.0);
        new (&field_368) render::RenderTargetData(nullptr, local_38, 1, 1.0, 0);
        new (&field_432) eastl::fixed_vector<render::Viewport, 2ul>();
        new (&field_520) eastl::fixed_vector<RenderPass*, 8ul>();
        field_624 = 0;
        m_occlusionTestEnabled = false;
        m_minOcclusionDrawableRadius = 0.0;
        m_minOcclusionDrawableAxisLength = 0.0;
        new (&m_renderPassBits) callstack::Callstack();
        new (&m_stippleNearClipParams) StipplePlaneClipParams();
        new (&m_stippleFarClipParams) StipplePlaneClipParams();
        m_renderFlags = 0;
    }

    // 0x1007e4dc0
    void SceneViewData::Clear() {
        uint8_t* matrix441 = PTR_IDENTITY_100ee6730;
        Set(*PTR_IDENTITY_100ee6730, *PTR_IDENTITY_100ee6730);
        m_pViewFrustum->Set(*matrix441, *matrix441);
        field_432.clear();
        field_520.clear();
        new (&m_renderPassBits) callstack::Callstack();
        local_20.field_0 = 0;
        StipplePlaneClipParams local_20;
        m_stippleNearClipParams = (float)(uint32_t)local_20.field_0;
        field_644 = (float)local_20.field_0._4_4_;
        local_20.field_0 = 0;
        local_20 = StipplePlaneClipParams();
        m_stippleFarClipParams = (float)(uint32_t)local_20.field_0;
        field_652 = (float)local_20.field_0._4_4_;
    }

    // 0x1007e4e60
    void SceneViewData::SetTransforms(const Camera& camera) {
        Set(camera);
        auto matrix441 = GetScreen();
        auto matrix442 = GetOrigin();
        m_pViewFrustum->Set(*matrix441, *matrix442);
    }

    // 0x1007e4eb0
    void SceneViewData::SetTransforms(const ViewTransforms& viewTransforms) {
        *this = viewTransforms;
        auto matrix441 = GetScreen();
        auto matrix442 = GetOrigin();
        m_pViewFrustum->Set(*matrix441, *matrix442);
    }

    // 0x1007e4f00
    void SceneViewData::SetTransforms(const math::Matrix44T<float>& matrix441,
                                      const math::Matrix44T<float>& matrix442) {
        Set(matrix441, matrix442);
        auto matrix441_00 = GetScreen();
        auto matrix442_00 = GetOrigin();
        m_pViewFrustum->Set(*matrix441_00, *matrix442_00);
    }

    // 0x1007e4f50
    void SceneViewData::RenderPassPushBack(RenderPass* renderPass) {
        if (renderPass == nullptr) {
            LogAssert("renderPass",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/SceneViewData.cpp",
                      47, nullptr);
        }
        field_520.push_back((CommandLine*)renderPass);
        m_renderPassBits.AddFormatType(((CommandLine*)renderPass)->GetPos());
    }

    // 0x1007e4fd0
    void SceneViewData::RenderPassPopBack() {
        CommandLine* this_01;
        uint64_t* puVar2;

        uint8_t* this_00 = &field_520;
        if (this_00->empty()) {
            LogAssert("!m_renderPasses.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/SceneViewData.cpp",
                      54, nullptr);
        }
        if (!(this_00->empty())) {
            puVar2 = (uint64_t*)this_00->back();
            this_01 = (CommandLine*)*puVar2;
            if (this_01 == nullptr) {
                LogAssert("pRenderPass",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "renderer/SceneViewData.cpp",
                          58, nullptr);
            }
            this_00->pop_back();
            m_renderPassBits.RemoveRenderPass(this_01->GetPos());
        }
    }

    // 0x100804200
    bool SceneViewData::GetRenderPass(RenderPassType) const ::$_24::operator()(const RenderPass* renderPass) const {
        if (renderPass == nullptr) {
            LogAssert("pRenderPass != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/SceneViewData.cpp",
                      69, nullptr);
        }
        return renderPass->GetPos() == *(int*)this;
    }

} // namespace jag::graphics
