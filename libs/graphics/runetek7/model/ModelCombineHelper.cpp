// libs/graphics/runetek7/model/ModelCombineHelper.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ModelCombineHelper.h"

namespace jag::graphics {
    // 0x100820740, 112 bytes, base-object constructor, placed by class name and debug map
    // ModelCombineHelper::ModelCombineHelper()
    void ModelCombineHelper::ModelCombineHelper() {
        field_0 = (Model*)0;
        field_8 = false;
        eastl::vector<GeometryBatchCombineHelper, BucketAllocatorEASTL>::vector();
        eastl::vector<BillboardBatchCombineHelper, BucketAllocatorEASTL>::vector();
        new (&field_64) Array<LabelData, eastl::allocator>();
    }

    // 0x1008207d0, 16 bytes, complete-object constructor, placed by class name and debug map
    // ModelCombineHelper::ModelCombineHelper(): jumps straight to the base-object constructor

    // 0x1008207e0, 160 bytes, base-object constructor, placed by class name and debug map
    // ModelCombineHelper::ModelCombineHelper(Model*, bool)
    void ModelCombineHelper::ModelCombineHelper(Model* param_1, bool param_2) {
        Array* pAVar1;

        field_0 = param_1;
        field_8 = param_2;
        eastl::vector<GeometryBatchCombineHelper, BucketAllocatorEASTL>::vector();
        eastl::vector<BillboardBatchCombineHelper, BucketAllocatorEASTL>::vector();
        pAVar1 = (Array*)param_1->GetTextureAtlasManager();
        new (&field_64, pAVar1) Array<LabelData, eastl::allocator>();
        if (param_1 == (Model*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("destinationModel != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "ModelCombineHelper.cpp",
                      19, (char*)0);
        }
    }

    // 0x100820890, 16 bytes, complete-object constructor, placed by class name and debug map
    // ModelCombineHelper::ModelCombineHelper(Model*, bool): jumps straight to the base-object constructor

    // 0x1008208a0, 128 bytes, placed by class name and debug map
    // ModelCombineHelper::Reset(Model*, bool)
    void ModelCombineHelper::Reset(Model* param_1, bool param_2) {
        Array* pAVar1;
        Array<LabelData, eastl::allocator> local_28[24];

        field_0 = param_1;
        field_8 = param_2;
        if (param_1 == (Model*)0) {
            Array<LabelData, eastl::allocator>::Array(local_28);
        } else {
            pAVar1 = (Array*)param_1->GetTextureAtlasManager();
            Array<LabelData, eastl::allocator>::Array(local_28, pAVar1);
        }
        Array<LabelData, eastl::allocator>::operator=((Array<LabelData, eastl::allocator>*)&field_64, (Array*)local_28);
        local_28->~Array();
        (&field_16)->clear();
        (&field_40)->clear();
    }

    // 0x100820980, 1952 bytes, placed by class name and debug map
    // ModelCombineHelper::Combine(Model const*, graphicutils::TextureAtlasQuality const&, bool)
    void ModelCombineHelper::Combine(Model* param_1, TextureAtlasQuality* param_2, bool param_3) {
        MakeUniquePool<BillboardBatchInstance, 64>* this_00;
        PointLightShadows* this_01;
        bool bVar1;
        char cVar2;
        ModelConstructedState MVar3;
        uint uVar4;
        int iVar5;
        Matrix44T* pMVar6;
        ModelConstructedState* pMVar7;
        AABB* this_02;
        AABB* pAVar8;
        Layout* pLVar9;
        vector<shared_ptr<ModelParticleSource>, eastl::allocator>* pvVar10;
        shared_ptr* psVar11;
        shared_ptr* psVar12;
        undefined** ppuVar13;
        vector<eastl::pair<int, int>, eastl::allocator>* pvVar14;
        GeometryBatchInstance* pGVar15;
        unique_ptr* this_03;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* this_04;
        long lVar16;
        BillboardBatchInstance* pBVar17;
        ulong uVar18;
        unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>* puVar19;
        BillboardBatchInstance* pBVar20;
        BillboardBatchCombineHelper* pBVar21;
        undefined8 uVar22;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar23;
        GeometryBatchInstance* pGVar24;
        GeometryBatchCombineHelper* pGVar25;
        undefined7 in_register_00000009;
        Model* pMVar26;
        vector<BillboardBatchCombineHelper, BucketAllocatorEASTL>* this_05;
        ModelCombineHelper* pMVar27;
        ulong uVar28;
        undefined1 local_c8[32];
        GeometryBatchCombineHelper local_a8;
        unique_ptr* local_68;
        TextureAtlas* local_60;
        vector<BillboardBatchCombineHelper, BucketAllocatorEASTL>* local_58;
        undefined8 local_50;
        PointLightShadows* local_48;
        ModelCombineHelper* local_40;
        bool local_31;

        if (field_0 == (Model*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_destinationModel != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "ModelCombineHelper.cpp",
                      33, (char*)0);
        }
        if (param_1 == (Model*)0) {
            return;
        }
        local_60 = (TextureAtlas*)CONCAT44(local_60._4_4_, (int)CONCAT71(in_register_00000009, param_3));
        pMVar6 = (Matrix44T*)param_1->GetWorld();
        bVar1 = math::operator==(pMVar6, (Matrix44T*)PTR_IDENTITY_100ee6730);
        if (!bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("model->GetLocalTransform() == math::Matrix44::IDENTITY",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "ModelCombineHelper.cpp",
                      41, (char*)0);
        }
        cVar2 = field_0->GetConstructedState();
        if (cVar2 == '\0') {
            pMVar26 = field_0;
            MVar3 = (ModelConstructedState)param_1->GetConstructedState();
        } else {
            cVar2 = param_1->GetConstructedState();
            if (cVar2 == '\0')
                goto LAB_100820a7a;
            pMVar26 = field_0;
            local_a8.field_0._0_1_ = pMVar26->GetConstructedState();
            local_c8[0] = (ModelConstructedState)param_1->GetConstructedState();
            pMVar7 = std::min<ModelConstructedState>((ModelConstructedState*)(local_c8 + 32),
                                                     (ModelConstructedState*)local_c8);
            MVar3 = *pMVar7;
        }
        pMVar26->SetConstructedState(MVar3);
    LAB_100820a7a:
        this_02 = (AABB*)field_0->GetScreen();
        pAVar8 = (AABB*)param_1->GetScreen();
        new (local_c8) math::AABB(pAVar8);
        cVar2 = this_02->IsValid();
        if (cVar2 != '\0') {
            local_c8->Union(this_02);
        }
        (field_0, (AABB*)local_c8)->SetAABB();
        pMVar26 = field_0;
        uVar4 = param_1->GetEmissiveMapMaterialID();
        pMVar26->AddSavedModelHashList(uVar4);
        local_48 = (PointLightShadows*)param_1;
        pLVar9 = (Layout*)param_1->GetParticleEmitters();
        local_40 = this;
        pvVar10 = (vector<shared_ptr<ModelParticleSource>, eastl::allocator>*)field_0->GetParticleEmitters();
        psVar11 = (shared_ptr*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar9);
        psVar12 = (shared_ptr*)pLVar9->end();
        for (; psVar11 != psVar12; psVar11 = psVar11 + 1) {
            eastl::vector<shared_ptr<ModelParticleSource>,
                          eastl::allocator>::emplace_back<shared_ptr<ModelParticleSource> const&>(pvVar10, psVar11);
        }
        pLVar9 = (Layout*)local_48->GetParticleEffectors();
        pvVar10 = (vector<shared_ptr<ModelParticleSource>, eastl::allocator>*)local_40->field_0->GetParticleEffectors();
        psVar11 = (shared_ptr*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar9);
        psVar12 = (shared_ptr*)pLVar9->end();
        pMVar27 = local_40;
        for (; local_40 = pMVar27, psVar11 != psVar12; psVar11 = psVar11 + 1) {
            eastl::vector<shared_ptr<ModelParticleSource>,
                          eastl::allocator>::emplace_back<shared_ptr<ModelParticleSource> const&>(pvVar10, psVar11);
            pMVar27 = local_40;
        }
        cVar2 = pMVar27->field_0->GetUseUncompressedTextures();
        this_01 = local_48;
        if (cVar2 == '\0') {
            cVar2 = local_48->GetUseUncompressedTextures();
            if (cVar2 == '\0') {
                ppuVar13 = &graphicutils::TextureAtlasUsage::USAGE_COMPRESSED;
            } else {
                ppuVar13 = &graphicutils::TextureAtlasUsage::USAGE_UNCOMPRESSED;
            }
        } else {
            ppuVar13 = &graphicutils::TextureAtlasUsage::USAGE_UNCOMPRESSED;
        }
        local_60 = (TextureAtlas*)TextureAtlasManager::GetVirtualAtlas(param_2, (TextureAtlasUsage*)*ppuVar13,
                                                                       SUB81(local_60, 0));
        pvVar14 = (vector<eastl::pair<int, int>, eastl::allocator>*)pMVar27->field_0->GetBatchList();
        pGVar15 = (GeometryBatchInstance*)eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(pvVar14);
        local_58 = (vector<BillboardBatchCombineHelper, BucketAllocatorEASTL>*)&pMVar27->field_16;
        (&pMVar27->field_16, (ulong)pGVar15)->reserve();
        pLVar9 = (Layout*)this_01->GetBatchList();
        this_03 = (unique_ptr*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar9);
        local_68 = (unique_ptr*)pLVar9->end();
        if (this_03 != local_68) {
            do {
                bVar1 = std::operator!=(this_03, (_func_decltype_nullptr*)pGVar15);
                if (!bVar1) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("srcGeometryBatch != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "model/ModelCombineHelper.cpp",
                              89, (char*)0);
                }
                lVar16 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(pvVar14);
                if (lVar16 == 0) {
                    local_50 = 0;
                LAB_100820e80:
                    pGVar15 = (GeometryBatchInstance*)std::unique_ptr<
                        GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::
                    operator*((unique_ptr<GeometryBatchInstance,
                                          MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)this_03);
                    local_31 = false;
                    pGVar24 = (GeometryBatchInstance*)(local_c8 + 32);
                    MakeUniquePool<GeometryBatchInstance, 3072>::MakeUnique<GeometryBatchInstance&, Model&, bool>(
                        (MakeUniquePool<GeometryBatchInstance, 3072>*)pGVar24, pGVar15, pMVar27->field_0, &local_31);
                    eastl::vector<std::unique_ptr<GeometryBatchInstance,
                                                  MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                                  eastl::allocator>::
                        emplace_back<std::unique_ptr<GeometryBatchInstance,
                                                     MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>>(
                            (vector<std::unique_ptr<GeometryBatchInstance,
                                                    MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                                    eastl::allocator>*)pvVar14,
                            (unique_ptr*)pGVar24);
                    pGVar24->~unique_ptr();
                    puVar23 =
                        (unique_ptr<GeometryBatchInstance,
                                    MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)pvVar14->back();
                    pGVar15 = (GeometryBatchInstance*)
                        std::unique_ptr<GeometryBatchInstance,
                                        MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::get(puVar23);
                    iVar5 = local_48->GetExternalID();
                    new (pGVar24) GeometryBatchCombineHelper(pGVar15, iVar5, pMVar27->field_8);
                    pGVar15 = pGVar24;
                    eastl::vector<GeometryBatchCombineHelper, BucketAllocatorEASTL>::emplace_back<
                        GeometryBatchCombineHelper>((vector<GeometryBatchCombineHelper, BucketAllocatorEASTL>*)local_58,
                                                    (GeometryBatchCombineHelper*)pGVar24);
                    pGVar24->~GeometryBatchCombineHelper();
                } else {
                    local_50 = 0;
                    uVar28 = 0;
                    do {
                        uVar18 = local_58->size();
                        if (uVar18 <= uVar28) {
                            puVar23 = (unique_ptr<GeometryBatchInstance,
                                                  MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                                eastl::vector<
                                    std::unique_ptr<GeometryBatchInstance,
                                                    MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                                    eastl::allocator>::
                                operator[](
                                    (vector<
                                        std::unique_ptr<GeometryBatchInstance,
                                                        MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                                        eastl::allocator>*)pvVar14,
                                    uVar28);
                            pGVar15 = (GeometryBatchInstance*)std::unique_ptr<
                                GeometryBatchInstance,
                                MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::get(puVar23);
                            iVar5 = pMVar27->field_0->GetExternalID();
                            pGVar25 = (GeometryBatchCombineHelper*)(local_c8 + 32);
                            GeometryBatchCombineHelper::GeometryBatchCombineHelper(pGVar25, pGVar15, iVar5,
                                                                                   pMVar27->field_8);
                            eastl::vector<GeometryBatchCombineHelper, BucketAllocatorEASTL>::emplace_back<
                                GeometryBatchCombineHelper>(
                                (vector<GeometryBatchCombineHelper, BucketAllocatorEASTL>*)local_58, pGVar25);
                            pGVar25->~GeometryBatchCombineHelper();
                            pMVar27 = local_40;
                        }
                        puVar23 = (unique_ptr<GeometryBatchInstance,
                                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                            eastl::vector<
                                std::unique_ptr<GeometryBatchInstance,
                                                MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                                eastl::allocator>::
                            operator[](
                                (vector<std::unique_ptr<GeometryBatchInstance,
                                                        MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                                        eastl::allocator>*)pvVar14,
                                uVar28);
                        pGVar24 =
                            (GeometryBatchInstance*)std::unique_ptr<
                                GeometryBatchInstance,
                                MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(puVar23);
                        pGVar15 = (GeometryBatchInstance*)std::unique_ptr<
                            GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::
                        operator*((unique_ptr<GeometryBatchInstance,
                                              MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)this_03);
                        iVar5 = pGVar24->IsCombinableWith(pGVar15, false, true, pMVar27->field_8, local_60);
                        bVar1 = true;
                        if (iVar5 == 0) {
                            pGVar25 = (GeometryBatchCombineHelper*)
                                eastl::vector<GeometryBatchCombineHelper, BucketAllocatorEASTL>::operator[](
                                    (vector<GeometryBatchCombineHelper, BucketAllocatorEASTL>*)local_58, uVar28);
                            pGVar15 = (GeometryBatchInstance*)std::unique_ptr<
                                GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::
                            operator*(
                                (unique_ptr<GeometryBatchInstance,
                                            MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)this_03);
                            pMVar27 = local_40;
                            cVar2 = pGVar25->IsCombinableWith(pGVar15);
                            if (cVar2 != '\0') {
                                pGVar25 = (GeometryBatchCombineHelper*)
                                    eastl::vector<GeometryBatchCombineHelper, BucketAllocatorEASTL>::operator[](
                                        (vector<GeometryBatchCombineHelper, BucketAllocatorEASTL>*)local_58, uVar28);
                                pGVar15 = (GeometryBatchInstance*)
                                    std::unique_ptr<GeometryBatchInstance,
                                                    MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::
                                    operator*(
                                        (unique_ptr<GeometryBatchInstance,
                                                    MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                                            this_03);
                                uVar22 = pGVar25->Combine(pGVar15);
                                local_50 = CONCAT71((int7)((ulong)uVar22 >> 8), 1);
                                bVar1 = false;
                            }
                        }
                        if (!bVar1)
                            break;
                        uVar28 = uVar28 + 1;
                        uVar18 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(pvVar14);
                    } while (uVar28 < uVar18);
                    if ((local_50 & 1) == 0)
                        goto LAB_100820e80;
                }
                this_03 = this_03 + 8;
            } while (this_03 != local_68);
        }
        pvVar14 = (vector<eastl::pair<int, int>, eastl::allocator>*)pMVar27->field_0->GetPointLightSMManager();
        pLVar9 = (Layout*)local_48->GetPointLightSMManager();
        this_04 = (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar9);
        local_68 = (unique_ptr*)pLVar9->end();
        if (this_04 !=
            (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                local_68) {
            this_05 = (vector<BillboardBatchCombineHelper, BucketAllocatorEASTL>*)&local_40->field_40;
            local_58 = this_05;
            do {
                lVar16 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(pvVar14);
                if (lVar16 == 0) {
                    local_50 = (ulong)local_50._4_4_ << 32;
                } else {
                    uVar28 = 0;
                    local_50 = (ulong)local_50._4_4_ << 32;
                    do {
                        uVar18 = this_05->size();
                        if (uVar18 <= uVar28) {
                            puVar19 = (unique_ptr<BillboardBatchInstance,
                                                  MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                                eastl::vector<
                                    std::unique_ptr<BillboardBatchInstance,
                                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>,
                                    eastl::allocator>::
                                operator[](
                                    (vector<
                                        std::unique_ptr<BillboardBatchInstance,
                                                        MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>,
                                        eastl::allocator>*)pvVar14,
                                    uVar28);
                            pBVar20 = (BillboardBatchInstance*)std::unique_ptr<
                                BillboardBatchInstance,
                                MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::get(puVar19);
                            pMVar27 = local_40;
                            iVar5 = local_40->field_0->GetExternalID();
                            pBVar21 = (BillboardBatchCombineHelper*)(local_c8 + 32);
                            BillboardBatchCombineHelper::BillboardBatchCombineHelper(pBVar21, pBVar20, iVar5,
                                                                                     pMVar27->field_8);
                            this_05 = local_58;
                            eastl::vector<BillboardBatchCombineHelper,
                                          BucketAllocatorEASTL>::emplace_back<BillboardBatchCombineHelper>(local_58,
                                                                                                           pBVar21);
                            pBVar21->~BillboardBatchCombineHelper();
                        }
                        puVar19 = (unique_ptr<BillboardBatchInstance,
                                              MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                            eastl::vector<
                                std::unique_ptr<BillboardBatchInstance,
                                                MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>,
                                eastl::allocator>::
                            operator[](
                                (vector<std::unique_ptr<BillboardBatchInstance,
                                                        MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>,
                                        eastl::allocator>*)pvVar14,
                                uVar28);
                        pBVar20 =
                            (BillboardBatchInstance*)std::unique_ptr<
                                BillboardBatchInstance,
                                MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator->(puVar19);
                        pBVar17 = (BillboardBatchInstance*)std::unique_ptr<
                            BillboardBatchInstance,
                            MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator*(this_04);
                        iVar5 = pBVar20->IsCombinableWith(pBVar17, false, true, local_40->field_8, local_60);
                        if (iVar5 == 0) {
                            pBVar21 = (BillboardBatchCombineHelper*)
                                eastl::vector<BillboardBatchCombineHelper, BucketAllocatorEASTL>::operator[](this_05,
                                                                                                             uVar28);
                            pBVar20 = (BillboardBatchInstance*)std::unique_ptr<
                                BillboardBatchInstance,
                                MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator*(this_04);
                            cVar2 = pBVar21->IsCombinableWith(pBVar20);
                            if (cVar2 != '\0') {
                                pBVar21 = (BillboardBatchCombineHelper*)
                                    eastl::vector<BillboardBatchCombineHelper, BucketAllocatorEASTL>::operator[](
                                        this_05, uVar28);
                                pBVar20 = (BillboardBatchInstance*)std::unique_ptr<
                                    BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator*(this_04);
                                uVar22 = pBVar21->Combine(pBVar20);
                                local_50 = CONCAT44(local_50._4_4_, (int)CONCAT71((int7)((ulong)uVar22 >> 8), 1));
                            }
                        }
                        uVar28 = uVar28 + 1;
                        uVar18 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(pvVar14);
                    } while (uVar28 < uVar18);
                }
                if ((local_50 & 1) == 0) {
                    pBVar20 = (BillboardBatchInstance*)std::unique_ptr<
                        BillboardBatchInstance,
                        MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::operator*(this_04);
                    pMVar27 = local_40;
                    local_31 = false;
                    this_00 = (MakeUniquePool<BillboardBatchInstance, 64>*)(local_c8 + 32);
                    MakeUniquePool<BillboardBatchInstance, 64>::MakeUnique<BillboardBatchInstance&, Model&, bool>(
                        this_00, pBVar20, local_40->field_0, &local_31);
                    eastl::vector<std::unique_ptr<BillboardBatchInstance,
                                                  MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>,
                                  eastl::allocator>::
                        emplace_back<std::unique_ptr<BillboardBatchInstance,
                                                     MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>>(
                            (vector<std::unique_ptr<BillboardBatchInstance,
                                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>,
                                    eastl::allocator>*)pvVar14,
                            (unique_ptr*)this_00);
                    this_00->~unique_ptr();
                    puVar19 =
                        (unique_ptr<BillboardBatchInstance,
                                    MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)pvVar14->back();
                    pBVar20 = (BillboardBatchInstance*)
                        std::unique_ptr<BillboardBatchInstance,
                                        MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>::get(puVar19);
                    iVar5 = local_48->GetExternalID();
                    new ((local_c8 + 32)) BillboardBatchCombineHelper(pBVar20, iVar5, pMVar27->field_8);
                    eastl::vector<BillboardBatchCombineHelper, BucketAllocatorEASTL>::emplace_back<
                        BillboardBatchCombineHelper>(this_05, (BillboardBatchCombineHelper*)(local_c8 + 32));
                    ((local_c8 + 32))->~BillboardBatchCombineHelper();
                }
                this_04 = this_04 + 8;
            } while (
                this_04 !=
                (unique_ptr<BillboardBatchInstance, MakeUniquePool<BillboardBatchInstance, 64>::UniquePoolDeleter>*)
                    local_68);
        }
        AddLabelsFromModel(local_40, (Model*)local_48);
    }

    // 0x1008214a0, 400 bytes, placed by class name and debug map
    // ModelCombineHelper::AddLabelsFromModel(Model const&)
    void ModelCombineHelper::AddLabelsFromModel(Model* param_1) {
        int iVar1;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        ulong uVar2;
        ulong uVar3;
        long lVar4;
        Vector3T* pVVar5;
        Vector4T<float>* this_01;
        Vector3T<float>* this_02;
        undefined1* this_03;
        undefined8 local_60[2];
        undefined8 local_50[2];
        undefined8 local_40;
        float local_34;

        this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)param_1->GetTextureAtlasManager();
        this_03 = &field_64;
        uVar2 = this_03->end();
        uVar3 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        if (uVar2 < uVar3) {
            uVar2 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
            this_03->set_max_size(uVar2, 3);
        }
        lVar4 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        if (lVar4 != 0) {
            uVar2 = 0;
            do {
                pVVar5 = (Vector3T*)Array<LabelData, eastl::allocator>::operator[](
                    (Array<LabelData, eastl::allocator>*)this_03, uVar2);
                lVar4 =
                    Array<LabelData, eastl::allocator>::operator[]((Array<LabelData, eastl::allocator>*)this_03, uVar2);
                local_50[0] = math::operator*(pVVar5, (float)*(int*)(lVar4 + 12));
                pVVar5 = (Vector3T*)Array<LabelData, eastl::allocator>::operator[](
                    (Array<LabelData, eastl::allocator>*)this_00, uVar2);
                lVar4 =
                    Array<LabelData, eastl::allocator>::operator[]((Array<LabelData, eastl::allocator>*)this_00, uVar2);
                local_40 = math::operator*(pVVar5, (float)*(int*)(lVar4 + 12));
                local_60[0] = math::operator+((Vector3T*)local_50, (Vector3T*)&local_40);
                this_01 = (Vector4T<float>*)Array<LabelData, eastl::allocator>::operator[](
                    (Array<LabelData, eastl::allocator>*)this_03, uVar2);
                math::Vector4T<float>::SetXYZ(this_01, (Vector3T*)local_60);
                lVar4 =
                    Array<LabelData, eastl::allocator>::operator[]((Array<LabelData, eastl::allocator>*)this_00, uVar2);
                iVar1 = *(int*)(lVar4 + 12);
                lVar4 =
                    Array<LabelData, eastl::allocator>::operator[]((Array<LabelData, eastl::allocator>*)this_03, uVar2);
                *(int*)(lVar4 + 12) = *(int*)(lVar4 + 12) + iVar1;
                lVar4 =
                    Array<LabelData, eastl::allocator>::operator[]((Array<LabelData, eastl::allocator>*)this_03, uVar2);
                if (0 < *(int*)(lVar4 + 12)) {
                    lVar4 = Array<LabelData, eastl::allocator>::operator[]((Array<LabelData, eastl::allocator>*)this_03,
                                                                           uVar2);
                    local_34 = (float)*(int*)(lVar4 + 12);
                    this_02 = (Vector3T<float>*)Array<LabelData, eastl::allocator>::operator[](
                        (Array<LabelData, eastl::allocator>*)this_03, uVar2);
                    math::Vector3T<float>::operator/=(this_02, local_34);
                }
                uVar2 = uVar2 + 1;
                uVar3 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
            } while (uVar2 < uVar3);
        }
    }

    // 0x100821630, 176 bytes, placed by class name and debug map
    // ModelCombineHelper::FinishCombine()
    void ModelCombineHelper::FinishCombine() {
        GeometryBatchCombineHelper* this_00;
        GeometryBatchCombineHelper* pGVar1;
        BillboardBatchCombineHelper* this_01;
        BillboardBatchCombineHelper* pBVar2;

        this_00 = (GeometryBatchCombineHelper*)(&field_16)->HeapBeginPtr();
        pGVar1 = (GeometryBatchCombineHelper*)(&field_16)->end();
        for (; this_00 != pGVar1; this_00 = (GeometryBatchCombineHelper*)&this_00[1].field_16) {
            this_00->FinishCombine();
        }
        this_01 = (BillboardBatchCombineHelper*)(&field_40)->HeapBeginPtr();
        pBVar2 = (BillboardBatchCombineHelper*)(&field_40)->end();
        for (; this_01 != pBVar2; this_01 = (BillboardBatchCombineHelper*)&this_01[1].field_16) {
            this_01->FinishCombine();
        }
        field_0->BakeShareLight();
        field_0->SortSections();
        (field_0, (Array*)&field_64)->SetLabelCentres();
        Reset(this, (Model*)0, false);
    }

} // namespace jag::graphics
