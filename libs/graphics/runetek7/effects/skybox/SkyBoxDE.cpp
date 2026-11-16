// libs/graphics/runetek7/effects/skybox/SkyBoxDE.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "SkyBoxDE.h"
#include "libs/graphics/runetek7/model/GeometryBatchInstance.h"

namespace jag::graphics {
    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    SkyBox_DE::~SkyBox_DE();

    // 0x100153080: the linker folded this into oldscape::ClientObj::~ClientObj(), which has identical code
    SkyBox_DE::~SkyBox_DE();

    // 0x100153090: the linker folded this into oldscape::ClientObj::~ClientObj(), which has identical code
    SkyBox_DE::~SkyBox_DE();

    // 0x10091bc60, 160 bytes, placed by debug map only (low confidence)
    // DrawableElementPool<SkyBox_DE>::GetDrawableElementPool()
    undefined1* DrawableElementPool<SkyBox_DE>::GetDrawableElementPool() {
        int* piVar2;
        int local_18[2];

        if (GetDrawableElementPool()::pool == '\0') {
            if (___cxa_guard_acquire(&GetDrawableElementPool()::pool) != 0) {
                local_18[0] = 16;
                local_18[1] = 16;
                piVar2 = std::max<int>(local_18, local_18 + 1);
                new (&GetDrawableElementPool()::pool) FastPool<SkyBox_DE, int>(64, *piVar2);
                ___cxa_atexit(PTR__FastPool_100ee6870, &GetDrawableElementPool()::pool, 4294967296);
                ___cxa_guard_release(&GetDrawableElementPool()::pool);
            }
        }
        return &GetDrawableElementPool()::pool;
    }

    // 0x10091bd30, 480 bytes, placed by class name and debug map
    // SkyBox_DE::Render(RT7Core&, render::DrawCallState const&, SceneViewData const&, RenderPassType, EffectManager&)
    void SkyBox_DE::Render(RT7Core* param_1, DrawCallState* param_2, undefined8 param_3, undefined4 param_5,
                           undefined8 param_6) {
        Layout* this_00;
        RT7Core* this_01;
        ulong uVar1;
        Model* pMVar2;
        SkyBoxRenderer* pSVar3;
        undefined8 uVar4;
        bool bVar5;
        DrawCallState local_90;
        Transitionable<float> local_60[32];
        float local_38;

        new (&local_90) render::DrawCallState(param_2);
        this_00 = (Layout*)local_90.GetRenderPipelineState();
        this_01 = (RT7Core*)param_1->GetSkyBoxRenderer();
        uVar1 = this_01->GetImmediateThreadPool();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::SetHeapSize(this_00, uVar1);
        bVar5 = ((field_104 + 608))->operator_cast_to_bool();
        if (bVar5) {
            pMVar2 = (Model*)shared_ptr<Model>::operator->((shared_ptr<Model>*)(field_104 + 608));
            local_38 = -field_112;
            math::Transitionable<float>::Transitionable(local_60, &local_38);
            pMVar2->SetFadeTransitionable(local_60, 0);
            shared_ptr<Model>::operator*((shared_ptr<Model>*)(field_104 + 608));
            RenderSkyModel();
        }
        bVar5 = ((field_104 + 624))->operator_cast_to_bool();
        if (bVar5) {
            pMVar2 = (Model*)shared_ptr<Model>::operator->((shared_ptr<Model>*)(field_104 + 624));
            local_38 = field_112 + -1.0;
            math::Transitionable<float>::Transitionable(local_60, &local_38);
            pMVar2->SetFadeTransitionable(local_60, 0);
            shared_ptr<Model>::operator*((shared_ptr<Model>*)(field_104 + 624));
            RenderSkyModel();
        }
        pSVar3 = (SkyBoxRenderer*)param_1->GetSkyBoxRenderer();
        uVar4 = param_1->GetRenderContext();
        pSVar3->Render(this, uVar4, &local_90, param_3, param_5, param_6);
        local_90.~DrawCallState();
    }

    // 0x10091bf30, 704 bytes, placed by class name
    // SkyBox_DE::RenderSkyModel(RT7Core&, render::DrawCallState const&, SceneViewData const&, RenderPassType, EffectManager&, Model&, Array<eastl::pair<unsigned char, int>, eastl::allocator> const&)
    void SkyBox_DE::RenderSkyModel(
        undefined8 param_1_00, RT7Core* param_1, undefined8 param_2, Layout* param_3, int param_5, undefined8 param_6,
        NXTPixToolkit* param_7,
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* param_8) {
        char cVar1;
        vector* pvVar2;
        vector<std::unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
               eastl::allocator>* this;
        byte* pbVar3;
        byte* pbVar4;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        GeometryBatchInstance* this_01;
        GeometryBatch* this_02;
        AABB* pAVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        Layout* this_03;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_04;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar8;
        BillboardBatchInstance* pBVar9;
        BillboardBatchRenderer* pBVar10;
        RT7Core* pRVar11;
        Matrix44T local_198;
        undefined8 uStack_160;
        RT7Core* local_150;
        undefined8 local_148;
        Layout* local_140;
        undefined8 local_138;
        int local_12c;
        OBB local_128;
        GeometryBatch_DE local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_150 = param_1;
        local_148 = param_2;
        local_12c = param_5;
        cVar1 = param_7->IsReadyToRender();
        if (cVar1 != '\0') {
            local_198._0_8_ = *(undefined8*)PTR_IDENTITY_100ee6730;
            local_198._8_8_ = *(undefined8*)(PTR_IDENTITY_100ee6730 + 8);
            local_198._16_8_ = *(undefined8*)(PTR_IDENTITY_100ee6730 + 16);
            local_198._24_8_ = *(undefined8*)(PTR_IDENTITY_100ee6730 + 24);
            local_198._32_8_ = *(undefined8*)(PTR_IDENTITY_100ee6730 + 32);
            local_198._40_8_ = *(undefined8*)(PTR_IDENTITY_100ee6730 + 40);
            local_198._48_8_ = *(undefined8*)(PTR_IDENTITY_100ee6730 + 48);
            uStack_160 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 56);
            local_140 = param_3;
            local_138 = param_6;
            pvVar2 = eastl::string::Layout::SSOBeginPtr(param_3, (type*)param_1);
            local_198.SetPos(pvVar2);
            param_7->SetWorldTransform(&local_198);
            this = (vector<std::unique_ptr<GeometryBatchInstance,
                                           MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                           eastl::allocator>*)param_7->GetBatchList();
            pbVar3 = (byte*)param_8->data();
            pbVar4 = (byte*)param_8->end();
            uVar6 = local_138;
            for (; local_138 = uVar6, pbVar3 != pbVar4; pbVar3 = pbVar3 + 8) {
                this_00 =
                    (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                        eastl::vector<std::unique_ptr<GeometryBatchInstance,
                                                      MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                                      eastl::allocator>::operator[](this, (ulong)*pbVar3);
                this_01 = (GeometryBatchInstance*)
                    std::unique_ptr<GeometryBatchInstance,
                                    MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::get(this_00);
                if (this_01 != (GeometryBatchInstance*)0) {
                    this_02 = (GeometryBatch*)this_01->GetGeometryBatch();
                    cVar1 = this_02->IsHidden();
                    if (cVar1 == '\0') {
                        pAVar5 = (AABB*)param_7->GetScreen();
                        new (&local_128) math::OBB(pAVar5);
                        new (&local_d8) GeometryBatch_DE(&local_128, 0.0, 0, 0, this_01);
                        pRVar11 = local_150;
                        uVar6 = local_150->GetGeometryBatchRenderer();
                        uVar7 = pRVar11->GetRenderContext();
                        GeometryBatchRenderer::Render(uVar6, &local_d8, uVar7, local_148, local_140, local_12c,
                                                      local_138);
                        local_d8.~RefCounterAndData();
                    }
                }
                uVar6 = local_138;
            }
            if (local_12c == 4) {
                this_03 = (Layout*)param_7->GetPointLightSMManager();
                this_04 =
                    (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(this_03);
                puVar8 =
                    (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                        this_03->end();
                if (this_04 != puVar8) {
                    do {
                        pBVar9 = (BillboardBatchInstance*)std::unique_ptr<
                            BillboardBatchInstance,
                            MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator*(this_04);
                        new (&local_d8) BillboardBatch_DE(0.0, 0, pBVar9);
                        pRVar11 = local_150;
                        pBVar10 = (BillboardBatchRenderer*)local_150->GetBillboardBatchRenderer();
                        uVar7 = pRVar11->GetRenderContext();
                        pBVar10->Render(&local_d8, uVar7, local_148, local_140, 4, uVar6);
                        local_d8.~RefCounterAndData();
                        this_04 = this_04 + 8;
                    } while (this_04 != puVar8);
                }
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::graphics
