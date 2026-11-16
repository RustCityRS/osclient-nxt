// libs/graphics/runetek7/effects/skybox/SkyBoxDE.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "SkyBoxDE.h"
#include "libs/graphics/runetek7/model/GeometryBatchInstance.h"

namespace jag::graphics {
    // 0x100022b10: SkyBox_DE::~SkyBox_DE() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10091bc60
    void DrawableElementPool<SkyBox_DE>::GetDrawableElementPool() {
        int* piVar2;
        int local_18[2];

        if (GetDrawableElementPool()::pool == '\0') {
            if (___cxa_guard_acquire(&GetDrawableElementPool()::pool) != 0) {
                local_18[0] = 16;
                local_18[1] = 16;
                piVar2 = std::max<int>(*local_18, *(local_18 + 1));
                new ((FastPool<SkyBox_DE, int>*)&GetDrawableElementPool()::pool) FastPool<SkyBox_DE, int>(64, *piVar2);
                ___cxa_atexit(PTR__FastPool_100ee6870, &GetDrawableElementPool()::pool, 4294967296);
                ___cxa_guard_release(&GetDrawableElementPool()::pool);
            }
        }
        return &GetDrawableElementPool()::pool;
    }

    // 0x10091bd30
    void SkyBox_DE::Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                           const SceneViewData& sceneViewData, RenderPassType renderPassType,
                           EffectManager& effectManager) {
        Model* pMVar1;
        SkyBox_DE* pSVar3;
        Transitionable<float> local_60;
        float local_38;

        DrawCallState local_90(drawCallState);
        auto this_00 = local_90.GetRenderPipelineState();
        auto this_01 = rt7Core.GetSkyBoxRenderer();
        this_00->SetHeapSize((void*)this_01->GetImmediateThreadPool());
        if (((field_104 + 608))->operator_cast_to_bool()) {
            pMVar1 = (Model*)(*((field_104 + 608))).operator->();
            local_38 = -field_112;
            local_60 = math::Transitionable<float>(local_38);
            pMVar1->SetFadeTransitionable(local_60, 0);
            pSVar3 = (SkyBox_DE*)(field_104 + 608);
            pMVar1 = (Model*)**pSVar3;
            RenderSkyModel(pSVar3, rt7Core, &local_90, sceneViewData, renderPassType, effectManager, pMVar1,
                           (Array<eastl::pair<unsigned char, int>>*)(field_104 + 640));
        }
        if (((field_104 + 624))->operator_cast_to_bool()) {
            pMVar1 = (Model*)(*((field_104 + 624))).operator->();
            local_38 = field_112 - 1.0;
            local_60 = math::Transitionable<float>(local_38);
            pMVar1->SetFadeTransitionable(local_60, 0);
            pSVar3 = (SkyBox_DE*)(field_104 + 624);
            pMVar1 = (Model*)**pSVar3;
            RenderSkyModel(pSVar3, rt7Core, &local_90, sceneViewData, renderPassType, effectManager, pMVar1,
                           (Array<eastl::pair<unsigned char, int>>*)(field_104 + 664));
        }
        pSVar3 = (SkyBox_DE*)rt7Core.GetSkyBoxRenderer();
        auto drawCallState_00 = rt7Core.GetRenderContext();
        SkyBoxRenderer::Render(*pSVar3, *this, *drawCallState_00, local_90, (RenderPassType)sceneViewData,
                               *((EffectManager*)(unsigned long)renderPassType));
    }

    // 0x10091bf30
    void SkyBox_DE::RenderSkyModel(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                                   const SceneViewData& sceneViewData, RenderPassType renderPassType,
                                   EffectManager& effectManager, Model& model,
                                   const Array<eastl::pair<unsigned char, int>>& pairs) {
        Vector3T<float>* vector3;
        vector<std::unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>>*
            this_00;
        uint8_t* pbVar2;
        uint8_t* pbVar3;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_01;
        GeometryBatchInstance* this_02;
        AABB* aabb;
        GeometryBatch_DE* geometryBatch_DE;
        DrawCallState* pDVar4;
        Layout* this_04;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_05;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar5;
        BillboardBatchInstance* billboardBatchInstance;
        BillboardBatch_DE* billboardBatch_DE;
        RT7Core* pRVar6;
        uint64_t local_198;
        uint64_t uStack_190;
        uint64_t local_188;
        uint64_t uStack_180;
        uint64_t local_178;
        uint64_t uStack_170;
        uint64_t local_168;
        uint64_t uStack_160;
        EffectManager* local_138;
        OBB local_128;
        GeometryBatch_DE local_d8;

        if (model.IsReadyToRender()) {
            local_198 = *(uint64_t*)PTR_IDENTITY_100ee6730;
            uStack_190 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 8);
            local_188 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 16);
            uStack_180 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 24);
            local_178 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 32);
            uStack_170 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 40);
            local_168 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 48);
            uStack_160 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 56);
            local_138 = effectManager;
            vector3 = (Vector3T<float>*)sceneViewData.SSOBeginPtr();
            local_198.SetPos(*vector3);
            model.SetWorldTransform(local_198);
            this_00 = (vector<std::unique_ptr<GeometryBatchInstance,
                                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>>*)
                          model.GetBatchList();
            pbVar2 = (uint8_t*)pairs.data();
            pbVar3 = (uint8_t*)pairs.end();
            for (; pbVar2 != pbVar3; pbVar2 = pbVar2 + 8) {
                this_01 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::
                                                                 UniquePoolDeleter>*)(*this_00)[(unsigned long)*pbVar2];
                this_02 = (GeometryBatchInstance*)this_01->get();
                if (this_02 != nullptr) {
                    if (!(((GeometryBatch*)this_02->GetGeometryBatch())->IsHidden())) {
                        aabb = (AABB*)model.GetScreen();
                        local_128 = math::OBB(*aabb);
                        local_d8 = GeometryBatch_DE(local_128, 0.0, nullptr, 0, *this_02);
                        pRVar6 = rt7Core;
                        geometryBatch_DE = rt7Core.GetGeometryBatchRenderer();
                        pDVar4 = (DrawCallState*)pRVar6->GetRenderContext();
                        GeometryBatchRenderer::Render(*geometryBatch_DE, local_d8, *pDVar4, drawCallState,
                                                      (RenderPassType)sceneViewData,
                                                      *((EffectManager*)(unsigned long)renderPassType));
                    }
                }
            }
            if (renderPassType == 4) {
                this_04 = (Layout*)model.GetPointLightSMManager();
                this_05 =
                    (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                        this_04->HeapBeginPtr();
                puVar5 =
                    (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                        this_04->end();
                if (this_05 != puVar5) {
                    do {
                        billboardBatchInstance = (BillboardBatchInstance*)**this_05;
                        local_d8 = BillboardBatch_DE(0.0, nullptr, *billboardBatchInstance);
                        pRVar6 = rt7Core;
                        billboardBatch_DE = rt7Core.GetBillboardBatchRenderer();
                        pDVar4 = (DrawCallState*)pRVar6->GetRenderContext();
                        BillboardBatchRenderer::Render(*billboardBatch_DE, local_d8, *pDVar4, drawCallState,
                                                       (RenderPassType)sceneViewData, *4);
                        this_05 = this_05 + 8;
                    } while (this_05 != puVar5);
                }
            }
        }
    }

} // namespace jag::graphics
