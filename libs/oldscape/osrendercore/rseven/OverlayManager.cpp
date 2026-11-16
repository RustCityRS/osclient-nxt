// libs/oldscape/osrendercore/rseven/OverlayManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.osrendercore

#include "OverlayManager.h"

namespace jag::oldscape::rseven {
    // 0x1000e10d0: the linker folded this into FoundObject::~FoundObject(), which has identical code
    OverlayManager::ModelOverlay::~ModelOverlay();

    // 0x10012d160: the linker folded this into FoundObject::~FoundObject(), which has identical code
    OverlayManager::ModelOverlay::~ModelOverlay();

    // 0x1001cb430, 256 bytes, base-object constructor, placed by class name and debug map
    // OverlayManager::OverlayManager(jag::graphics::RT7Core&)
    void OverlayManager::OverlayManager(RT7Core* param_1) {
        allocator local_170[8];
        RenderPassDrawableGroupsConfig local_168;
        fixed_vector local_150[280];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        field_0 = param_1;
        new (&local_168) jag::graphics::DrawableQueue::RenderPassDrawableGroupsConfig(4, 16, 2);
        eastl::allocator::allocator(local_170, "EASTL fixed_vector");
        eastl::fixed_vector<jag::graphics::DrawableQueue::RenderPassDrawableGroupsConfig, 10ul, true,
                            eastl::allocator>::fixed_vector(local_150, &local_168, 1, local_170);
        new (&field_8, param_1, local_150, 16, 0) jag::graphics::Renderer();
        local_150->~fixed_vector();
        new (&field_6336) eastl::vector<OverlayManager::ModelOverlay, eastl::allocator>();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1001cb570, 16 bytes, complete-object constructor, placed by class name
    // OverlayManager::OverlayManager(jag::graphics::RT7Core&): jumps straight to the base-object constructor

    // 0x1001cb580, 976 bytes, placed by class name
    // OverlayManager::Render(unsigned int, int, jag::graphics::EffectManager&, jag::graphics::SceneViewData const&, render::Viewport const&, std::function<bool (std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&, jag::math::Frustum const&, int, jag::math::AABB const&, jag::math::OBB const&)>&, jag::graphics::GraphRoot*)
    /* OverlayManager::Render(unsigned int, int, jag::graphics::EffectManager&,
   jag::graphics::SceneViewData const&, render::Viewport const&, std::function<bool
   (std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&, jag::math::Frustum const&,
   int, jag::math::AABB const&, jag::math::OBB const&)>&, jag::graphics::GraphRoot*) */

    void OverlayManager::Render(uint param_1, int param_2, EffectManager* param_3, SceneViewData* param_4,
                                Viewport* param_5, function* param_6, GraphRoot* param_7) {
        Minimap* this;
        fixed_vector* this_00;
        Callstack* this_01;
        int iVar1;
        Renderer* this_02;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        uint uVar8;
        int iVar9;
        int iVar10;
        long lVar11;
        shared_ptr* this_03;
        RenderPass* pRVar12;
        RenderContext* pRVar13;
        long* plVar14;
        undefined8 uVar15;
        DrawableQueue* this_04;
        Viewport* pVVar16;
        undefined4 in_register_0000003c;
        undefined8* puVar17;
        SceneViewData* this_05;
        RT7Core* pRVar18;
        SamplerOverride local_3d8[3];
        allocator local_390[8];
        shared_ptr* local_388;
        SceneViewData* local_378;
        Renderer* local_368;
        undefined8* local_360;
        undefined1 local_351;
        undefined1 local_350[24];
        Callstack local_338[6];
        SceneViewData local_2d8;
        long local_38;

        puVar17 = (undefined8*)CONCAT44(in_register_0000003c, param_1);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_351 = param_4->IsEnabled(85);
        this_05 = param_4;
        param_4->EnableEffect(85, 0);
        pRVar18 = (RT7Core*)*puVar17;
        lVar11 = this_05->Instance();
        SamplerOverride::SamplerOverride(local_3d8, pRVar18, (SamplerState*)(lVar11 + 80));
        local_360 = puVar17;
        this_03 = (shared_ptr*)((puVar17 + 792))->HeapBeginPtr();
        local_388 = (shared_ptr*)((puVar17 + 792))->end();
        if (this_03 != local_388) {
            local_368 = (Renderer*)(local_360 + 1);
            local_378 = param_4;
            do {
                if (shared_ptr::operator_cast_to_bool(this_03)) {
                    new (&local_2d8) jag::graphics::SceneViewData(param_5);
                    this = (Minimap*)(this_03 + 1);
                    iVar1 = ((OverlayViewportState*)param_6)->field_0;
                    iVar4 = GetX();
                    iVar9 = ((OverlayViewportState*)param_6)->field_12;
                    iVar10 = ((OverlayViewportState*)param_6)->field_4;
                    iVar5 = MaxZ();
                    iVar6 = GetPos();
                    iVar7 = GetLevel();
                    new (local_350) render::Viewport(iVar1 + iVar4, (iVar9 + iVar10) - iVar5, iVar6, iVar7, 0.0, 1.0);
                    eastl::allocator::allocator(local_390, "EASTL fixed_vector");
                    this_00 = (fixed_vector*)(local_350 + 24);
                    eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>::fixed_vector(this_00, local_350,
                                                                                                     1, local_390);
                    local_2d8.SetRenderTargetViewports(this_00);
                    this_00->~fixed_vector();
                    uVar8 = GetX();
                    pVVar16 = (Viewport*)(ulong)uVar8;
                    iVar1 = ((OverlayViewportState*)param_6)->field_12;
                    iVar9 = MaxZ();
                    iVar10 = GetPos();
                    iVar4 = GetLevel();
                    new (local_350) dash3d::GridRect(uVar8, iVar1 - iVar9, iVar10, iVar4);
                    param_4 = local_378;
                    CreateProjectionMatrix((OverlayManager*)(local_350 + 24), pVVar16, (OverlayViewportState*)param_6);
                    pRVar18 = (RT7Core*)&local_2d8;
                    ((Matrix44T*)pRVar18)->SetTransforms(PTR_IDENTITY_100ee6730);
                    local_2d8._416_4_ = 0;
                    local_2d8.field_624 = 1;
                    pRVar12 = (RenderPass*)(*local_360)->GetForwardLightingPass();
                    pRVar18->RenderPassPushBack(pRVar12);
                    pRVar13 = (RenderContext*)pRVar18->GetRenderContext();
                    local_338[0].field_0 = 0;
                    new ((local_350 + 24)) callstack::Callstack();
                    local_368->RenderViewBegin(pRVar13, &local_2d8, param_4, (RenderPassBitSet*)(local_350 + 24));
                    plVar14 = (long*)shared_ptr<DynamicGeometry>::operator->((shared_ptr<DynamicGeometry>*)this_03);
                    uVar15 = local_368->GetOrigin();
                    (**(code**)(*plVar14 + 88))(plVar14, uVar15, *local_360, PTR_IDENTITY_100ee6730, &local_2d8,
                                                param_4);
                    this_01 = (Callstack*)(local_350 + 24);
                    callstack::Callstack::Callstack(this_01);
                    callstack::Callstack::Callstack(this_01);
                    this_01->AddFormatType(4);
                    this_02 = local_368;
                    local_368->RenderViewRenderPasses(&local_2d8, pRVar13, false, param_4, this_01);
                    this_04 = (DrawableQueue*)this_02->GetOrigin();
                    this_04->ClearAllGroupsInAllPasses();
                    jag::graphics::Renderer::RenderViewEnd((RenderContext*)this_02);
                    local_2d8.~SceneViewData();
                }
                this_03 = this_03 + 3;
            } while (this_03 != local_388);
        }
        param_4->EnableEffect(85, local_351);
        local_3d8->~SamplerOverride();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1001cb950, 16 bytes, complete-object constructor, placed by neighbouring functions
    // SamplerOverride::SamplerOverride(jag::graphics::RT7Core&, render::SamplerState const*): jumps straight to the base-object constructor

    // 0x1001cb9c0, 544 bytes, placed by class name
    // OverlayManager::CreateProjectionMatrix(render::Viewport const&, RenderState::OverlayViewportState const&)
    OverlayManager* OverlayManager::CreateProjectionMatrix(Viewport* param_1, OverlayViewportState* param_2) {
        undefined8 uVar1;
        uint uVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        vector* pvVar7;
        int* piVar8;
        Minimap* in_RCX;
        Matrix44T* pMVar9;
        type* ptVar10;
        Matrix44T local_158;
        undefined1 local_118[64];
        Matrix44T local_98;
        undefined1 local_58[28];
        float local_3c;
        float local_38;
        float local_34;

        local_58._16_8_ = this;
        new (&local_98) ImVec4(*(float*)&in_RCX->field_24 * 512.0, 0.0, 0.0, 0.0);
        new ((local_118 + 64)) ImVec4(0.0, *(float*)&in_RCX->field_24 * 512.0, 0.0, 0.0);
        new (local_118) ImVec4(0.0, 0.0, 1.0, 1.0);
        new (local_58) ImVec4(0.0, 0.0, 0.0, 0.0);
        pMVar9 = &local_98;
        new (&local_158) jag::math::Matrix44T<float>(pMVar9, (Vector4T*)(local_118 + 64), local_118, local_58);
        pvVar7 = (&in_RCX->field_16, (type*)pMVar9)->SSOBeginPtr();
        local_34 = (float)*(int*)pvVar7;
        iVar6 = param_2->field_12;
        piVar8 = (int*)(&in_RCX->field_16)->y();
        new ((local_118 + 64)) jag::math::ColourHSL(local_34, (float)(iVar6 - *piVar8), 0.0);
        new (&local_98) jag::math::Matrix44T<float>(PTR_IDENTITY_100ee6718, (Vector3T*)(local_118 + 64));
        uVar2 = in_RCX->GetX();
        ptVar10 = (type*)(ulong)uVar2;
        iVar6 = param_2->field_12;
        iVar3 = in_RCX->MaxZ();
        iVar4 = in_RCX->GetPos();
        iVar5 = in_RCX->GetLevel();
        new (local_58) dash3d::GridRect(uVar2, iVar6 - iVar3, iVar4, iVar5);
        pMVar9 = (Matrix44T*)(local_118 + 64);
        new (pMVar9) jag::math::Matrix44T<float>();
        pvVar7 = local_58->SSOBeginPtr(ptVar10);
        local_34 = (float)*(int*)pvVar7;
        iVar6 = local_58->Right();
        local_3c = (float)iVar6;
        piVar8 = (int*)local_58->y();
        local_38 = (float)*piVar8;
        iVar6 = local_58->MaxZ();
        jag::math::Matrix44OrthographicLH<float>(local_34, local_3c, local_38, (float)iVar6, 0, 1073741824, pMVar9, 0);
        jag::math::operator*((math*)local_118, &local_158, &local_98);
        uVar1 = local_58._16_8_;
        jag::math::operator*((math*)local_58._16_8_, (Matrix44T*)local_118, pMVar9);
        return (OverlayManager*)uVar1;
    }

    // 0x1001cbc50, 16 bytes, complete-object destructor, placed by neighbouring functions
    // SamplerOverride::~SamplerOverride(): jumps straight to the base-object destructor

    // 0x1001cbc60, 160 bytes, placed by class name
    // OverlayManager::UpdateModels(RenderState::OverlayRSeven*, RenderState::OverlayRSeven*)
    void OverlayManager::UpdateModels(OverlayRSeven* param_1, OverlayRSeven* param_2) {
        long lVar1;
        ModelOverlay* pMVar2;
        long lVar3;

        (&field_6336, ((long)param_2 - (long)param_1 >> 4) * -6148914691236517205)->resize();
        if (param_2 != param_1) {
            lVar3 = 0;
            do {
                pMVar2 = (ModelOverlay*)eastl::vector<OverlayManager::ModelOverlay, eastl::allocator>::operator[](
                    (vector<OverlayManager::ModelOverlay, eastl::allocator>*)&field_6336,
                    (lVar3 >> 4) * -6148914691236517205);
                UpdateModel(this, pMVar2, (OverlayRSeven*)(param_1->field_16 + lVar3 + -16));
                lVar1 = lVar3 + -16;
                lVar3 = lVar3 + 48;
            } while ((OverlayRSeven*)(param_1[1].field_16 + lVar1) != param_2);
        }
    }

    // 0x1001cbd60, 256 bytes, placed by class name
    // OverlayManager::UpdateModel(OverlayManager::ModelOverlay&, RenderState::OverlayRSeven const&)
    void OverlayManager::UpdateModel(ModelOverlay* param_1, OverlayRSeven* param_2) {
        long lVar1;
        shared_ptr* this_00;
        DynamicGeometry* this_01;
        ModelSubmissionRSeven* pMVar2;
        bool bVar3;
        _func_decltype_nullptr* local_40;
        shared_ptr local_38;

        bVar3 = param_2->operator_cast_to_bool();
        if (bVar3) {
            lVar1 = shared_ptr<RenderState::ModelSubmissionRSeven>::operator->(
                (shared_ptr<RenderState::ModelSubmissionRSeven>*)param_2);
            this_00 = (shared_ptr*)((lVar1 + 16))->GetModel();
            bVar3 = shared_ptr::operator_cast_to_bool(this_00);
            if (bVar3) {
                bVar3 = param_1->operator_cast_to_bool();
                if (!bVar3) {
                    local_40 = (_func_decltype_nullptr*)0;
                    make_shared<DynamicGeometry, decltype(nullptr)>((jag*)&local_38, &local_40);
                    shared_ptr<DynamicGeometry>::operator=((shared_ptr<DynamicGeometry>*)param_1, &local_38);
                    local_38.~shared_ptr();
                }
                this_01 =
                    (DynamicGeometry*)shared_ptr<DynamicGeometry>::operator->((shared_ptr<DynamicGeometry>*)param_1);
                pMVar2 = (ModelSubmissionRSeven*)shared_ptr<RenderState::ModelSubmissionRSeven>::operator*(
                    (shared_ptr<RenderState::ModelSubmissionRSeven>*)param_2);
                this_01->UpdateModel(pMVar2, field_0);
                RenderState::OverlayViewportState::operator=((OverlayViewportState*)param_1->field_16,
                                                             (OverlayViewportState*)param_2->field_16);
                return;
            }
        }
        new (&local_38) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<DynamicGeometry>::operator=((shared_ptr<DynamicGeometry>*)param_1, &local_38);
        local_38.~shared_ptr();
    }

    // 0x1001cc0e0, 160 bytes, placed by class name
    // OverlayManager::SetModelUnlit(jag::graphics::Model&)
    void OverlayManager::SetModelUnlit(Model* param_1) {
        Layout* this_00;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_01;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        GeometryBatchInstance* pGVar2;
        RenderMaterial* pRVar3;

        this_00 = (Layout*)param_1->GetBatchList();
        this_01 = (unique_ptr<jag::graphics::GeometryBatchInstance,
                              MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_00);
        puVar1 =
            (unique_ptr<jag::graphics::GeometryBatchInstance,
                        MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)this_00->end();
        for (; this_01 != puVar1; this_01 = this_01 + 8) {
            pGVar2 =
                (GeometryBatchInstance*)std::unique_ptr<
                    jag::graphics::GeometryBatchInstance,
                    MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_01);
            pRVar3 = (RenderMaterial*)pGVar2->GetMaterial();
            pRVar3->SetOption(7, false);
            pGVar2 =
                (GeometryBatchInstance*)std::unique_ptr<
                    jag::graphics::GeometryBatchInstance,
                    MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_01);
            pRVar3 = (RenderMaterial*)pGVar2->GetMaterial();
            pRVar3->SetOption(8, false);
            pGVar2 =
                (GeometryBatchInstance*)std::unique_ptr<
                    jag::graphics::GeometryBatchInstance,
                    MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_01);
            pRVar3 = (RenderMaterial*)pGVar2->GetMaterial();
            pRVar3->SetOption(6, true);
        }
    }

} // namespace jag::oldscape::rseven

namespace jag::render {
    // 0x1001cbc20: the linker folded this into graphics::RenderPassBitSet::AddRenderPass(unsigned int), which has identical code
    TextureFormatBitSet::AddFormatType(TextureFormatType);

} // namespace jag::render
