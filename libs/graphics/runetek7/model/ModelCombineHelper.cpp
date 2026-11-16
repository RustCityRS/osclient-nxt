// libs/graphics/runetek7/model/ModelCombineHelper.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ModelCombineHelper.h"

namespace jag::graphics {
    // 0x100820740
    ModelCombineHelper::ModelCombineHelper() : field_0(nullptr), field_8(false) {}

    // 0x1008207e0
    ModelCombineHelper::ModelCombineHelper(Model* model, bool arg2) : field_0(model), field_8(arg2) {
        auto labelDatas = model->GetTextureAtlasManager();
        new (&field_64) Array<LabelData>(labelDatas);
        if (model == nullptr) {
            LogAssert("destinationModel != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "ModelCombineHelper.cpp",
                      19, nullptr);
        }
    }

    // 0x1008208a0
    void ModelCombineHelper::Reset(Model* model, bool arg2) {
        Array<LabelData>* labelDatas;
        Array<LabelData> local_28;

        field_0 = model;
        field_8 = arg2;
        if (model == nullptr) {
            local_28 = Array<LabelData>();
        } else {
            labelDatas = (Array<LabelData>*)model->GetTextureAtlasManager();
            local_28 = Array<LabelData>(labelDatas);
        }
        field_64 = local_28;
        field_16.clear();
        field_40.clear();
    }

    // 0x100820980
    void ModelCombineHelper::Combine(const Model* model, const graphicutils::TextureAtlasQuality& textureAtlasQuality,
                                     bool arg3) {
        ModelConstructedState MVar3;
        int iVar4;
        ModelConstructedState* pMVar5;
        uint8_t** ppuVar10;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, _3072>::UniquePoolDeleter>*
            geometryBatchInstance;
        long lVar13;
        BillboardBatchInstance* billboardBatchInstance;
        unsigned long uVar14;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar15;
        BillboardBatchInstance* pBVar16;
        BillboardBatchCombineHelper* pBVar17;
        uint64_t uVar18;
        Model* pMVar19;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar20;
        GeometryBatchInstance* pGVar21;
        GeometryBatchCombineHelper* pGVar22;
        uint64_t in_register_00000009;
        vector<BillboardBatchCombineHelper, BucketAllocatorEASTL>* this_03;
        unsigned long uVar24;
        uint8_t local_c8[32];
        GeometryBatchCombineHelper local_a8;
        TextureAtlas* local_60;
        uint64_t local_50;
        uint8_t local_31;

        if (field_0 == nullptr) {
            LogAssert("m_destinationModel != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "ModelCombineHelper.cpp",
                      33, nullptr);
        }
        if (model == nullptr) {
            return;
        }
        local_60 = (TextureAtlas*)(((uint64_t)local_60._4_4_ << 32) |
                                   (uint32_t)((int)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3)));
        auto matrix441 = model->GetWorld();
        bool bVar1 = *matrix441 == *PTR_IDENTITY_100ee6730;
        if (!bVar1) {
            LogAssert("model->GetLocalTransform() == math::Matrix44::IDENTITY",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "ModelCombineHelper.cpp",
                      41, nullptr);
        }
        bool cVar2 = field_0->GetConstructedState();
        if (!cVar2) {
            pMVar19 = field_0;
            MVar3 = (ModelConstructedState)model->GetConstructedState();
        } else {
            cVar2 = model->GetConstructedState();
            if (!cVar2)
                goto LAB_100820a7a;
            pMVar19 = field_0;
            local_a8.field_0._0_1_ = pMVar19->GetConstructedState();
            local_c8[0] = (ModelConstructedState)model->GetConstructedState();
            pMVar5 = std::min<ModelConstructedState>(*((local_c8 + 32)), *local_c8);
            MVar3 = *pMVar5;
        }
        pMVar19->SetConstructedState(MVar3);
    LAB_100820a7a:
        auto this_01 = field_0->GetScreen();
        auto aabb = model->GetScreen();
        new (local_c8) math::AABB(*aabb);
        cVar2 = this_01->IsValid();
        if (cVar2) {
            local_c8->Union(*this_01);
        }
        field_0->SetAABB(*local_c8);
        pMVar19 = field_0;
        pMVar19->AddSavedModelHashList(model->GetEmissiveMapMaterialID());
        auto pLVar6 = model->GetParticleEmitters();
        ModelCombineHelper* local_40 = this;
        auto pvVar7 = field_0->GetParticleEmitters();
        auto psVar8 = pLVar6->HeapBeginPtr();
        auto psVar9 = pLVar6->end();
        for (; psVar8 != psVar9; psVar8 = psVar8 + 16) {
            pvVar7->emplace_back<shared_ptr<ModelParticleSource> const&>(*psVar8);
        }
        pLVar6 = (Layout*)((Model*)(PointLightShadows*)model)->GetParticleEffectors();
        pvVar7 = (vector<shared_ptr<ModelParticleSource>>*)local_40->field_0->GetParticleEffectors();
        psVar8 = (shared_ptr<ModelParticleSource>*)pLVar6->HeapBeginPtr();
        psVar9 = (shared_ptr<ModelParticleSource>*)pLVar6->end();
        ModelCombineHelper* pMVar23 = local_40;
        for (; local_40 = pMVar23, psVar8 != psVar9; psVar8 = psVar8 + 16) {
            pvVar7->emplace_back<shared_ptr<ModelParticleSource> const&>(*psVar8);
            pMVar23 = local_40;
        }
        cVar2 = pMVar23->field_0->GetUseUncompressedTextures();
        if (!cVar2) {
            cVar2 = ((Model*)(PointLightShadows*)model)->GetUseUncompressedTextures();
            if (!cVar2) {
                ppuVar10 = &graphicutils::TextureAtlasUsage::USAGE_COMPRESSED;
            } else {
                ppuVar10 = &graphicutils::TextureAtlasUsage::USAGE_UNCOMPRESSED;
            }
        } else {
            ppuVar10 = &graphicutils::TextureAtlasUsage::USAGE_UNCOMPRESSED;
        }
        local_60 =
            (TextureAtlas*)TextureAtlasManager::GetVirtualAtlas(textureAtlasQuality, *ppuVar10, (uint8_t)local_60);
        auto pvVar11 = pMVar23->field_0->GetBatchList();
        auto pGVar12 = pvVar11->size();
        vector<BillboardBatchCombineHelper, BucketAllocatorEASTL>* local_58 =
            (vector<BillboardBatchCombineHelper, BucketAllocatorEASTL>*)&pMVar23->field_16;
        pMVar23->field_16.reserve((unsigned long)pGVar12);
        pLVar6 = (Layout*)((Model*)(PointLightShadows*)model)->GetBatchList();
        geometryBatchInstance =
            (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, _3072>::UniquePoolDeleter>*)
                pLVar6->HeapBeginPtr();
        auto local_68 = pLVar6->end();
        if (geometryBatchInstance != local_68) {
            do {
                bVar1 = geometryBatchInstance != pGVar12;
                if (!bVar1) {
                    LogAssert("srcGeometryBatch != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "model/ModelCombineHelper.cpp",
                              89, nullptr);
                }
                lVar13 = pvVar11->size();
                if (lVar13 == 0) {
                    local_50 = 0;
                LAB_100820e80:
                    pMVar19 = (Model*)**geometryBatchInstance;
                    local_31 = 0;
                    pGVar21 = (GeometryBatchInstance*)(local_c8 + 32);
                    MakeUniquePool<GeometryBatchInstance, 3072>::MakeUnique<GeometryBatchInstance&, Model&, bool>(
                        pGVar21, pMVar19, (bool*)pMVar23->field_0);
                    eastl::vector<std::unique_ptr<GeometryBatchInstance,
                                                  MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>>::
                        emplace_back<std::unique_ptr<GeometryBatchInstance,
                                                     MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>>(
                            (vector<std::unique_ptr<GeometryBatchInstance,
                                                    MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>>*)
                                pvVar11,
                            (unique_ptr<GeometryBatchInstance,
                                        MakeUniquePool<GeometryBatchInstance, _3072>::UniquePoolDeleter>*)pGVar21);
                    pGVar21->~unique_ptr();
                    puVar20 =
                        (unique_ptr<GeometryBatchInstance,
                                    MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)pvVar11->back();
                    pGVar12 = (GeometryBatchInstance*)puVar20->get();
                    iVar4 = ((Model*)(PointLightShadows*)model)->GetExternalID();
                    new (pGVar21) GeometryBatchCombineHelper(pGVar12, iVar4, pMVar23->field_8);
                    pGVar12 = pGVar21;
                    local_58->emplace_back<GeometryBatchCombineHelper>(*pGVar21);
                    pGVar21->~GeometryBatchCombineHelper();
                } else {
                    local_50 = 0;
                    uVar24 = 0;
                    do {
                        uVar14 = local_58->size();
                        if (uVar14 <= uVar24) {
                            puVar20 =
                                (unique_ptr<
                                    GeometryBatchInstance,
                                    MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(*pvVar11)[uVar24];
                            pGVar12 = (GeometryBatchInstance*)puVar20->get();
                            iVar4 = pMVar23->field_0->GetExternalID();
                            pGVar22 = (GeometryBatchCombineHelper*)(local_c8 + 32);
                            new (pGVar22) GeometryBatchCombineHelper(pGVar12, iVar4, pMVar23->field_8);
                            local_58->emplace_back<GeometryBatchCombineHelper>(*pGVar22);
                            pGVar22->~GeometryBatchCombineHelper();
                            pMVar23 = local_40;
                        }
                        puVar20 = (unique_ptr<
                                   GeometryBatchInstance,
                                   MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)(*pvVar11)[uVar24];
                        pGVar21 = (GeometryBatchInstance*)(*puVar20).operator->();
                        pGVar12 = (GeometryBatchInstance*)**geometryBatchInstance;
                        iVar4 = pGVar21->IsCombinableWith(*pGVar12, false, true, pMVar23->field_8, *local_60);
                        bVar1 = true;
                        if (iVar4 == 0) {
                            pGVar22 = (GeometryBatchCombineHelper*)(*local_58)[uVar24];
                            pGVar12 = (GeometryBatchInstance*)**geometryBatchInstance;
                            pMVar23 = local_40;
                            cVar2 = pGVar22->IsCombinableWith(*pGVar12);
                            if (cVar2) {
                                pGVar22 = (GeometryBatchCombineHelper*)(*local_58)[uVar24];
                                pGVar12 = (GeometryBatchInstance*)**geometryBatchInstance;
                                uVar18 = pGVar22->Combine(*pGVar12);
                                local_50 = (((uint64_t)((int64_t)((unsigned long)uVar18 >> 8)) << 8) | (uint8_t)1);
                                bVar1 = false;
                            }
                        }
                        if (!bVar1)
                            break;
                        uVar24 = uVar24 + 1;
                        uVar14 = pvVar11->size();
                    } while (uVar24 < uVar14);
                    if ((local_50 & 1) == 0)
                        goto LAB_100820e80;
                }
                geometryBatchInstance = geometryBatchInstance + 8;
            } while (geometryBatchInstance != local_68);
        }
        pvVar11 = (vector<eastl::pair<int, int>>*)pMVar23->field_0->GetPointLightSMManager();
        pLVar6 = (Layout*)model->GetPointLightSMManager();
        auto this_02 = pLVar6->HeapBeginPtr();
        local_68 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, _3072>::UniquePoolDeleter>*)
                       pLVar6->end();
        if (this_02 !=
            (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                local_68) {
            this_03 = (vector<BillboardBatchCombineHelper, BucketAllocatorEASTL>*)&local_40->field_40;
            local_58 = this_03;
            do {
                lVar13 = pvVar11->size();
                if (lVar13 == 0) {
                    local_50 = (unsigned long)local_50._4_4_ << 32;
                } else {
                    uVar24 = 0;
                    local_50 = (unsigned long)local_50._4_4_ << 32;
                    do {
                        uVar14 = this_03->size();
                        if (uVar14 <= uVar24) {
                            puVar15 =
                                (unique_ptr<
                                    BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(*pvVar11)[uVar24];
                            pBVar16 = (BillboardBatchInstance*)puVar15->get();
                            pMVar23 = local_40;
                            iVar4 = local_40->field_0->GetExternalID();
                            pBVar17 = (BillboardBatchCombineHelper*)(local_c8 + 32);
                            new (pBVar17) BillboardBatchCombineHelper(pBVar16, iVar4, pMVar23->field_8);
                            this_03 = local_58;
                            local_58->emplace_back<BillboardBatchCombineHelper>(*pBVar17);
                            pBVar17->~BillboardBatchCombineHelper();
                        }
                        puVar15 = (unique_ptr<
                                   BillboardBatchInstance,
                                   MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)(*pvVar11)[uVar24];
                        pBVar16 = (BillboardBatchInstance*)(*puVar15).operator->();
                        billboardBatchInstance = (BillboardBatchInstance*)**this_02;
                        iVar4 = pBVar16->IsCombinableWith(*billboardBatchInstance, false, true, local_40->field_8,
                                                          *local_60);
                        if (iVar4 == 0) {
                            pBVar17 = (BillboardBatchCombineHelper*)(*this_03)[uVar24];
                            pBVar16 = (BillboardBatchInstance*)**this_02;
                            cVar2 = pBVar17->IsCombinableWith(*pBVar16);
                            if (cVar2) {
                                pBVar17 = (BillboardBatchCombineHelper*)(*this_03)[uVar24];
                                pBVar16 = (BillboardBatchInstance*)**this_02;
                                uVar18 = pBVar17->Combine(*pBVar16);
                                local_50 = (((uint64_t)local_50._4_4_ << 32) |
                                            (uint32_t)((int)(((uint64_t)((int64_t)((unsigned long)uVar18 >> 8)) << 8) |
                                                             (uint8_t)1)));
                            }
                        }
                        uVar24 = uVar24 + 1;
                        uVar14 = pvVar11->size();
                    } while (uVar24 < uVar14);
                }
                if ((local_50 & 1) == 0) {
                    pMVar19 = (Model*)**this_02;
                    pMVar23 = local_40;
                    local_31 = 0;
                    pBVar16 = (BillboardBatchInstance*)(local_c8 + 32);
                    MakeUniquePool<BillboardBatchInstance, 64>::MakeUnique<BillboardBatchInstance&, Model&, bool>(
                        pBVar16, pMVar19, (bool*)local_40->field_0);
                    eastl::vector<std::unique_ptr<BillboardBatchInstance,
                                                  MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>>::
                        emplace_back<std::unique_ptr<BillboardBatchInstance,
                                                     MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>>(
                            (vector<std::unique_ptr<BillboardBatchInstance,
                                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>>*)
                                pvVar11,
                            (unique_ptr<BillboardBatchInstance,
                                        MakeUniquePool<BillboardBatchInstance, _64>::UniquePoolDeleter>*)pBVar16);
                    pBVar16->~unique_ptr();
                    puVar15 =
                        (unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)pvVar11->back();
                    pBVar16 = (BillboardBatchInstance*)puVar15->get();
                    iVar4 = ((Model*)(PointLightShadows*)model)->GetExternalID();
                    new ((local_c8 + 32)) BillboardBatchCombineHelper(pBVar16, iVar4, pMVar23->field_8);
                    this_03->emplace_back<BillboardBatchCombineHelper>(*((local_c8 + 32)));
                    ((local_c8 + 32))->~BillboardBatchCombineHelper();
                }
                this_02 = this_02 + 8;
            } while (
                this_02 !=
                (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                    local_68);
        }
        AddLabelsFromModel(local_40, (Model*)(PointLightShadows*)model);
    }

    // 0x1008214a0
    void ModelCombineHelper::AddLabelsFromModel(const Model& model) {
        int iVar1;
        Vector3T<float>* pVVar5;
        uint64_t local_60[2];
        uint64_t local_50[2];
        uint64_t local_40;
        float local_34;

        auto this_00 = model.GetTextureAtlasManager();
        uint8_t* this_02 = &field_64;
        unsigned long uVar2 = this_02->end();
        unsigned long uVar3 = this_00->end();
        if (uVar2 < uVar3) {
            uVar2 = this_00->end();
            this_02->set_max_size(uVar2, 3);
        }
        long lVar4 = this_00->end();
        if (lVar4 != 0) {
            uVar2 = 0;
            do {
                pVVar5 = (Vector3T<float>*)(*this_02)[uVar2];
                lVar4 = (*this_02)[uVar2];
                local_50[0] = (*((float)*(int*)(lVar4 + 12))) * *pVVar5;
                pVVar5 = (Vector3T<float>*)(*this_00)[uVar2];
                lVar4 = (*this_00)[uVar2];
                local_40 = (*((float)*(int*)(lVar4 + 12))) * *pVVar5;
                local_60[0] = *local_50 + local_40;
                ((Vector4T<float>*)(*this_02)[uVar2])->SetXYZ(*local_60);
                lVar4 = (*this_00)[uVar2];
                iVar1 = *(int*)(lVar4 + 12);
                lVar4 = (*this_02)[uVar2];
                *(int*)(lVar4 + 12) = *(int*)(lVar4 + 12) + iVar1;
                lVar4 = (*this_02)[uVar2];
                if (0 < *(int*)(lVar4 + 12)) {
                    lVar4 = (*this_02)[uVar2];
                    local_34 = (float)*(int*)(lVar4 + 12);
                    pVVar5 = (Vector3T<float>*)(*this_02)[uVar2];
                    *pVVar5 /= local_34;
                }
                uVar2 = uVar2 + 1;
                uVar3 = this_00->end();
            } while (uVar2 < uVar3);
        }
    }

    // 0x100821630
    void ModelCombineHelper::FinishCombine() {
        auto this_00 = field_16.HeapBeginPtr();
        auto pGVar1 = field_16.end();
        for (; this_00 != pGVar1; this_00 = (GeometryBatchCombineHelper*)&this_00[1].m_vertexCount) {
            this_00->FinishCombine();
        }
        auto this_01 = field_40.HeapBeginPtr();
        auto pBVar2 = field_40.end();
        for (; this_01 != pBVar2; this_01 = (BillboardBatchCombineHelper*)&this_01[1].m_vertexCount) {
            this_01->FinishCombine();
        }
        field_0->BakeShareLight();
        field_0->SortSections();
        field_0->SetLabelCentres(field_64);
        Reset(nullptr, false);
    }

} // namespace jag::graphics
