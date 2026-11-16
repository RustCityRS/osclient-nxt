// libs/oldscape/osrendercore/rseven/OverlayManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.osrendercore

#include "OverlayManager.h"

namespace jag::oldscape::rseven {
    // 0x10012d160: OverlayManager::ModelOverlay::~ModelOverlay() has the same machine code as FoundObject::~FoundObject()

    // 0x1001cb430
    OverlayManager::OverlayManager(jag::graphics::RT7Core& rt7Core) : field_0(rt7Core) {

        RenderPassDrawableGroupsConfig local_168(4, 16, 2);
        fixed_vector<jag::graphics::DrawableQueue::RenderPassDrawableGroupsConfig, 10ul> local_150(&local_168,
                                                                                                   DAT_00000001);
        new (&field_8) jag::graphics::Renderer(rt7Core, local_150, 16, 0);
        new (&field_6336) eastl::vector<OverlayManager::ModelOverlay>();
    }

    // 0x1001cb580
    void OverlayManager::Render(
        unsigned int arg1, int arg2, jag::graphics::EffectManager& effectManager,
        const jag::graphics::SceneViewData& sceneViewData, const render::Viewport& viewport,
        std::function<bool(std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&,
                           jag::math::Frustum const&, int, jag::math::AABB const&, jag::math::OBB const&)>& callback,
        jag::graphics::GraphRoot* graphRoot) {
        Minimap* this_00;
        fixed_vector<render::Viewport, 2ul>* this_01;
        Callstack* this_02;
        int iVar1;
        OverlayViewportState* pOVar2;
        WorldmapAreaMetadata* this_03;
        int iVar4;
        int iVar5;
        int arg3;
        int arg4;
        unsigned int arg1_00;
        int iVar6;
        int iVar7;
        RenderContext* renderContext;
        long* plVar9;
        uint64_t uVar10;
        Viewport* viewport_00;
        EffectManager* local_378;
        WorldmapAreaMetadata* local_368;
        uint8_t local_350[24];
        Callstack local_338;
        SceneViewData local_2d8;

        SceneViewData* local_380 = sceneViewData;
        OverlayViewportState* local_370 = (OverlayViewportState*)viewport;
        bool local_351 = (bool)effectManager.IsEnabled(85);
        EffectManager* this_06 = effectManager;
        effectManager.EnableEffect(85, false);
        RT7Core* pRVar11 = field_0;
        long lVar8 = this_06->Instance();
        SamplerOverride local_3d8(*pRVar11, (lVar8 + 80));
        OverlayManager* local_360 = this;
        auto this_04 = field_6336.HeapBeginPtr();
        auto local_388 = field_6336.end();
        if (this_04 != local_388) {
            local_368 = (WorldmapAreaMetadata*)&local_360->field_8;
            local_378 = effectManager;
            do {
                if (shared_ptr::operator_cast_to_bool(this_04) != '\0') {
                    local_2d8 = jag::graphics::SceneViewData(*local_380);
                    pOVar2 = local_370;
                    this_00 = (Minimap*)(this_04 + 1);
                    iVar1 = local_370->field_0;
                    iVar4 = this_00->GetX();
                    iVar6 = pOVar2->field_12;
                    iVar7 = pOVar2->field_4;
                    iVar5 = this_00->MaxZ();
                    arg3 = this_00->GetPos();
                    arg4 = this_00->GetLevel();
                    new (local_350) render::Viewport(iVar1 + iVar4, (iVar6 + iVar7) - iVar5, arg3, arg4, 0.0, 1.0);
                    this_01 = (fixed_vector<render::Viewport, 2ul>*)(local_350 + 24);
                    new (this_01) eastl::fixed_vector<render::Viewport, 2ul>(local_350, DAT_00000001);
                    local_2d8.SetRenderTargetViewports(*this_01);
                    this_01->~fixed_vector();
                    arg1_00 = this_00->GetX();
                    viewport_00 = (Viewport*)(unsigned long)arg1_00;
                    iVar1 = local_370->field_12;
                    iVar6 = this_00->MaxZ();
                    iVar7 = this_00->GetPos();
                    iVar4 = this_00->GetLevel();
                    new (local_350) dash3d::GridRect(arg1_00, iVar1 - iVar6, iVar7, iVar4);
                    effectManager = local_378;
                    CreateProjectionMatrix((OverlayManager*)(local_350 + 24), viewport_00, local_370);
                    pRVar11 = (RT7Core*)&local_2d8;
                    pRVar11->SetTransforms(*PTR_IDENTITY_100ee6730, *((local_350 + 24)));
                    local_2d8._416_4_ = 0;
                    local_2d8.field_624 = 1;
                    pRVar11->RenderPassPushBack((RenderPass*)local_360->field_0->GetForwardLightingPass());
                    renderContext = (RenderContext*)pRVar11->GetRenderContext();
                    local_338[0].m_stackFrames = 0;
                    new ((local_350 + 24)) callstack::Callstack();
                    local_368->RenderViewBegin(*renderContext, local_2d8, effectManager, *((local_350 + 24)));
                    plVar9 = (long*)(*this_04).operator->();
                    uVar10 = local_368->GetOrigin();
                    (**(void (**)(...))(*plVar9 + 88))(plVar9, uVar10, local_360->field_0, PTR_IDENTITY_100ee6730,
                                                       &local_2d8, effectManager);
                    this_02 = (Callstack*)(local_350 + 24);
                    new (this_02) callstack::Callstack();
                    new (this_02) callstack::Callstack();
                    this_02->AddFormatType(4);
                    this_03 = local_368;
                    local_368->RenderViewRenderPasses(local_2d8, *renderContext, false, effectManager, *this_02);
                    ((DrawableQueue*)this_03->GetOrigin())->ClearAllGroupsInAllPasses();
                    this_03->RenderViewEnd(*renderContext);
                }
                this_04 = this_04 + 3;
            } while (this_04 != local_388);
        }
        effectManager.EnableEffect(85, local_351);
    }

    // 0x1001cb9c0
    OverlayManager*
    OverlayManager::CreateProjectionMatrix(const render::Viewport& viewport,
                                           const RenderState::OverlayViewportState& overlayViewportState) {
        Minimap* in_RCX;
        uint8_t local_58[28];

        local_58._16_8_ = this;
        ImVec4 local_98(*(float*)&in_RCX->field_24 * 512.0, 0.0, 0.0, 0.0);
        ColourHSL local_d8(0.0, *(float*)&in_RCX->field_24 * 512.0, 0.0, 0.0);
        ImVec4 local_118(0.0, 0.0, 1.0, 1.0);
        new (local_58) ImVec4(0.0, 0.0, 0.0, 0.0);
        Matrix44T<float> local_158(local_98, local_d8, local_118, *local_58);
        auto piVar4 = in_RCX->field_16.SSOBeginPtr();
        float local_34 = (float)*piVar4;
        int iVar3 = overlayViewportState.field_12;
        piVar4 = (int*)in_RCX->field_16.y();
        local_d8 = jag::math::ColourHSL(local_34, (float)(iVar3 - *piVar4), 0.0);
        local_98 = jag::math::Matrix44T<float>(*PTR_IDENTITY_100ee6718, local_d8);
        int arg1 = in_RCX->GetX();
        iVar3 = overlayViewportState.field_12;
        int iVar2 = in_RCX->MaxZ();
        int arg3 = in_RCX->GetPos();
        int arg4 = in_RCX->GetLevel();
        new (local_58) dash3d::GridRect(arg1, iVar3 - iVar2, arg3, arg4);
        local_d8 = jag::math::Matrix44T<float>();
        piVar4 = (int*)local_58->SSOBeginPtr();
        local_34 = (float)*piVar4;
        iVar3 = local_58->Right();
        float local_3c = (float)iVar3;
        piVar4 = (int*)local_58->y();
        float local_38 = (float)*piVar4;
        iVar3 = local_58->MaxZ();
        jag::math::Matrix44OrthographicLH<float>(local_d8, local_34, local_3c, local_38, (float)iVar3, 0.0, 2.0, 0);
        local_118* local_158;
        uint64_t uVar1 = local_58._16_8_;
        *local_58._16_8_* local_118;
        return (OverlayManager*)uVar1;
    }

    // 0x1001cbc60
    void OverlayManager::UpdateModels(RenderState::OverlayRSeven* overlayRSeven1,
                                      RenderState::OverlayRSeven* overlayRSeven2) {
        long lVar1;
        ModelOverlay* modelOverlay;
        long lVar2;

        field_6336.resize(((long)overlayRSeven2 - (long)overlayRSeven1 >> 4) * -6148914691236517205);
        if (overlayRSeven2 != overlayRSeven1) {
            lVar2 = 0;
            do {
                modelOverlay = &field_6336[(lVar2 >> 4) * -6148914691236517205];
                UpdateModel(*modelOverlay, *((overlayRSeven1->field_16 + lVar2 - 16)));
                lVar1 = lVar2 - 16;
                lVar2 = lVar2 + 48;
            } while ((OverlayRSeven*)(overlayRSeven1[1].field_16 + lVar1) != overlayRSeven2);
        }
    }

    // 0x1001cbd60
    void OverlayManager::UpdateModel(OverlayManager::ModelOverlay& modelOverlay,
                                     const RenderState::OverlayRSeven& overlayRSeven) {
        long lVar2;
        DynamicGeometry* this_01;
        ModelSubmissionRSeven* modelSubmissionRSeven;
        void* local_40;

        if (overlayRSeven.operator_cast_to_bool()) {
            lVar2 = overlayRSeven.operator->();
            if ((((lVar2 + 16))->GetModel())->operator_cast_to_bool()) {
                if (!(modelOverlay.operator_cast_to_bool())) {
                    local_40 = nullptr;
                    make_shared<DynamicGeometry, decltype(nullptr)>(&local_38, &local_40);
                    modelOverlay = local_38;
                }
                this_01 = (DynamicGeometry*)modelOverlay.operator->();
                modelSubmissionRSeven = (ModelSubmissionRSeven*)overlayRSeven;
                this_01->UpdateModel(*modelSubmissionRSeven, *field_0);
                modelOverlay.field_16 = overlayRSeven.field_16;
                return;
            }
        }
        shared_ptr local_38;
        modelOverlay = local_38;
    }

    // 0x1001cc0e0
    void OverlayManager::SetModelUnlit(jag::graphics::Model& model) {
        GeometryBatchInstance* pGVar2;
        RenderMaterial* pRVar3;

        auto this_00 = model.GetBatchList();
        auto this_01 = this_00->HeapBeginPtr();
        auto puVar1 = this_00->end();
        for (; this_01 != puVar1; this_01 = this_01 + 8) {
            pGVar2 = (GeometryBatchInstance*)(*this_01).operator->();
            pRVar3 = (RenderMaterial*)pGVar2->GetMaterial();
            pRVar3->SetOption(7, false);
            pGVar2 = (GeometryBatchInstance*)(*this_01).operator->();
            pRVar3 = (RenderMaterial*)pGVar2->GetMaterial();
            pRVar3->SetOption(8, false);
            pGVar2 = (GeometryBatchInstance*)(*this_01).operator->();
            pRVar3 = (RenderMaterial*)pGVar2->GetMaterial();
            pRVar3->SetOption(6, true);
        }
    }

} // namespace jag::oldscape::rseven

namespace jag::render {
    // 0x1001cbc20: TextureFormatBitSet::AddFormatType(TextureFormatType) has the same machine code as graphics::RenderPassBitSet::AddRenderPass(unsigned int)

} // namespace jag::render
