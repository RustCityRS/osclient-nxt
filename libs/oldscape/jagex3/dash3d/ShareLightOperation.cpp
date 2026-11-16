// libs/oldscape/jagex3/dash3d/ShareLightOperation.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "ShareLightOperation.h"

namespace jag::oldscape::dash3d {
    // 0x1002f2cd0
    ShareLightPointRSeven::ShareLightPointRSeven(const jag::graphics::GeometryBatch& geometryBatch, unsigned long arg2)
        : jag::math::Vector3T() {
        Vector3T<int> local_70;

        auto this_00 = geometryBatch.GetVertexDataBufferPos();
        uint64_t* puVar1 = (uint64_t*)(*this_00)[arg2];
        uint64_t local_50 = *puVar1;
        uint32_t local_48 = *(uint32_t*)(puVar1 + 1);
        auto pfVar2 = local_50.SSOBeginPtr();
        float local_38 = (float)round(*pfVar2);
        pfVar2 = (float*)local_50.y();
        float local_34 = (float)round(*pfVar2);
        pfVar2 = (float*)local_50.second();
        float arg3 = (float)round(*pfVar2);
        ColourHSL local_60(local_38, local_34, arg3);
        local_70.Vector3T<float>(local_60);
        *this = local_70;
        auto this_01 = geometryBatch.GetVertexDataBuffer();
        long lVar3 = (*this_01)[arg2];
        field_12 = (*((lVar3 + 4)));
    }

    // 0x1002f2e00
    uint8_t* ShareLightCache::GetPointNormals() const {
        if (field_152 == '\0') {
            LogAssert("m_resolved",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ShareLightOperation.cpp",
                      20, "Cache was not resolved before attempting to get point normals.");
        }
        return &field_32;
    }

    // 0x1002f2e50
    uint8_t* ShareLightCache::GetUniquePoints() const {
        return &field_88;
    }

    // 0x1002f2e60
    vector<unsigned int>* ShareLightCache::GetVertexToPointMap() const {
        return (vector<unsigned int>*)&field_120;
    }

    // 0x1002f2e70
    uint8_t* ShareLightCache::GetEditableModel() const {
        if (field_152 == '\0') {
            LogAssert("m_resolved",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ShareLightOperation.cpp",
                      36, "Cache was not resolved before attempting to get model.");
        }
        return &field_16;
    }

    // 0x1002f2ec0
    void ShareLightCache::Resolve(const ShareLightCache* shareLightCache) {
        Model* model;
        ReturnValue local_30;

        if (field_152 == '\0') {
            ResolveAndTransformModel(&local_30, this, (OperationBuffer*)shareLightCache);
            field_16 = local_30;
            model = (Model*)*field_16;
            GeneratePoints(*model);
            field_152 = 1;
        }
    }

    // 0x1002f2f40
    auto ShareLightCache::ResolveAndTransformModel(const OperationBuffer* operationBuffer) {
        auto result;

        auto this_00 = Resolve(operationBuffer);
        auto this_01 = this_00->GetAnimationState();
        if (shared_ptr::operator_cast_to_bool(this_01) != '\0') {
            LogAssert("!model.GetAnimationState()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ShareLightOperation.cpp",
                      106, "Animated models may not participate in ShareLight.");
        }
        auto this_02 = this_00->GetModel();
        Model* pMVar3 = (Model*)**this_02;
        local_68[0]._0_4_ = 1;
        make_shared<jag::graphics::Model, jag::graphics::Model const&, jag::graphics::ModelCopyType>(&result, pMVar3,
                                                                                                     &local_68);
        auto local_68 = this_00->GetLocalTransform();
        if (local_68 != *PTR_IDENTITY_100ee6730) {
            pMVar3 = (Model*)(result).operator->();
            pMVar3->StartTransform();
            pMVar3 = (Model*)(result).operator->();
            local_68 = this_00->GetLocalTransform();
            pMVar3->Transform(local_68);
            pMVar3 = (Model*)(result).operator->();
            local_68 = this_00->GetLocalTransform();
            pMVar3->TransformNormals(local_68, false);
            pMVar3 = (Model*)(result).operator->();
            pMVar3->EndTransform(true);
        }
        ClearCache();
        return result;
    }

    // 0x1002f3080
    void ShareLightCache::GeneratePoints(const jag::graphics::Model& model) {
        Layout* this_00;
        bool cVar1;
        bool cVar2;
        unsigned int uVar3;
        GeometryBatchInstance* this_03;
        GeometryBatch* this_04;
        vector<jag::graphics::GeometryBatchVertex>* this_05;
        long lVar5;
        char* pcVar6;
        Vector4T<int>* pVVar7;
        vector<unsigned int>* this_06;
        unsigned long arg1;
        vector<ShareLightPointRSeven>* this_07;
        uint8_t auVar8[12];
        LocationData local_b0;
        uint8_t local_a0[16];
        ReturnValue local_90;
        char local_80;
        vector<ShareLightPointRSeven>* local_78;
        vector<unsigned int>* local_70;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* local_68;
        uint8_t local_58[24];
        uint8_t local_40[12];

        hash_map<ShareLightPointRSeven, unsigned int> local_e8(local_90);
        auto this_01 = model.GetBatchList();
        auto this_02 = this_01->HeapBeginPtr();
        auto local_60 = this_01->end();
        if (this_02 != local_60) {
            this_07 = (vector<ShareLightPointRSeven>*)&field_88;
            this_06 = (vector<unsigned int>*)&field_120;
            local_58._16_8_ = &field_32;
            local_78 = this_07;
            local_70 = this_06;
            do {
                local_68 = this_02;
                this_03 = (GeometryBatchInstance*)(*this_02).operator->();
                this_04 = (GeometryBatch*)this_03->GetGeometryBatch();
                uVar3 = this_04->GetVertexCount();
                this_07->reserve((unsigned long)uVar3);
                uVar3 = this_04->GetVertexCount();
                this_06->reserve((unsigned long)uVar3);
                if (this_04->GetVertexCount() != 0) {
                    arg1 = 0;
                    do {
                        this_05 = (vector<jag::graphics::GeometryBatchVertex>*)this_04->GetVertexDataBuffer();
                        lVar5 = (*this_05)[arg1];
                        pcVar6 = (char*)((lVar5 + 8))->y();
                        if (*pcVar6 == '\0') {
                            new (local_a0) ShareLightPointRSeven(*this_04, arg1);
                            local_58._0_4_ = this_07->size();
                            local_90 = local_e8.emplace<ShareLightPointRSeven&, unsigned int>(*local_a0, *local_58);
                            if (local_80 == '\0') {
                                lVar5 = local_90.HeapBeginPtr();
                                this_06->push_back(*((lVar5 + 16)));
                            } else {
                                local_58._0_4_ = this_07->size();
                                this_06->push_back(*local_58);
                                this_07->push_back(*local_a0);
                                this_00 = (Layout*)(local_a0 + 12);
                                pcVar6 = (char*)this_00->SSOBeginPtr();
                                cVar1 = *pcVar6;
                                pcVar6 = (char*)this_00->y();
                                cVar2 = *pcVar6;
                                pcVar6 = (char*)this_00->z();
                                new (local_58) GridRect((int)cVar1, (int)cVar2, (int)*pcVar6, 1);
                                pVVar7 = (Vector4T<int>*)(*local_58._16_8_)[*local_a0];
                                *pVVar7 += *local_58;
                                local_b0 = rs2lib::worldmap::LocationData(-1, 0, 0);
                                auVar8 = *local_a0 + local_b0;
                                local_40 = auVar8;
                                pVVar7 = (Vector4T<int>*)(*local_58._16_8_)[*local_40];
                                *pVVar7 += *local_58;
                                local_b0 = rs2lib::worldmap::LocationData(1, 0, 0);
                                auVar8 = *local_a0 + local_b0;
                                local_40 = auVar8;
                                pVVar7 = (Vector4T<int>*)(*local_58._16_8_)[*local_40];
                                *pVVar7 += *local_58;
                                local_b0 = rs2lib::worldmap::LocationData(0, 4294967295, 0);
                                auVar8 = *local_a0 + local_b0;
                                local_40 = auVar8;
                                pVVar7 = (Vector4T<int>*)(*local_58._16_8_)[*local_40];
                                *pVVar7 += *local_58;
                                local_b0 = rs2lib::worldmap::LocationData(0, 1, 0);
                                auVar8 = *local_a0 + local_b0;
                                local_40 = auVar8;
                                pVVar7 = (Vector4T<int>*)(*local_58._16_8_)[*local_40];
                                *pVVar7 += *local_58;
                                local_b0 = rs2lib::worldmap::LocationData(0, 0, 4294967295);
                                auVar8 = *local_a0 + local_b0;
                                local_40 = auVar8;
                                pVVar7 = (Vector4T<int>*)(*local_58._16_8_)[*local_40];
                                *pVVar7 += *local_58;
                                local_b0 = rs2lib::worldmap::LocationData(0, 0, 1);
                                auVar8 = *local_a0 + local_b0;
                                local_40 = auVar8;
                                pVVar7 = (Vector4T<int>*)(*local_58._16_8_)[*local_40];
                                *pVVar7 += *local_58;
                                this_06 = local_70;
                                this_07 = local_78;
                            }
                        } else {
                            local_90[0]._0_4_ = 4294967295;
                            this_06->push_back(local_90);
                        }
                        arg1 = arg1 + 1;
                        uVar3 = this_04->GetVertexCount();
                    } while (arg1 < uVar3);
                }
                this_02 = local_68 + 8;
            } while (this_02 != local_60);
        }
    }

    // 0x1002f3660
    bool operator==(const ShareLightPointRSeven& shareLightPointRSeven1,
                    const ShareLightPointRSeven& shareLightPointRSeven2) {
        bool bVar1 = shareLightPointRSeven1 == shareLightPointRSeven2;
        if (bVar1) {
            bVar1 = shareLightPointRSeven1.field_12 == shareLightPointRSeven2.field_12;
        } else {
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x1002f36c0
    uint8_t operator!=(const ShareLightPointRSeven& shareLightPointRSeven1,
                       const ShareLightPointRSeven& shareLightPointRSeven2) {
        return shareLightPointRSeven1 == shareLightPointRSeven2 ^ 1;
    }

    // 0x1002f36d0
    void operator==(const ShareLightCache& shareLightCache1, const ShareLightCache& shareLightCache2) {
        shareLightCache1 == shareLightCache2;
    }

    // 0x1002f36e0
    uint8_t operator!=(const ShareLightCache& shareLightCache1, const ShareLightCache& shareLightCache2) {
        return shareLightCache1 == shareLightCache2 ^ 1;
    }

    // 0x1002f36f0
    void operator==(const ShareLightRequest& shareLightRequest1, const ShareLightRequest& shareLightRequest2) {
        bool bVar2;
        ShareLightCache* shareLightCache1;
        ShareLightCache* shareLightCache2;

        shareLightCache1 = (ShareLightCache*)shareLightRequest1;
        shareLightCache2 = (ShareLightCache*)shareLightRequest2;
        if ((*shareLightCache1 == *shareLightCache2 != '\0') &&
            (bVar2 = shareLightRequest1.field_16 == shareLightRequest2.field_16, bVar2)) {
            return *(char*)((long)&shareLightRequest1.field_21 + 7) == *(char*)((long)&shareLightRequest2.field_21 + 7);
        }
        return 0;
    }

    // 0x1002f3790
    uint8_t operator!=(const ShareLightRequest& shareLightRequest1, const ShareLightRequest& shareLightRequest2) {
        return shareLightRequest1 == shareLightRequest2 ^ 1;
    }

    // 0x1002f37a0
    ResolvedModel* ShareLightOperation::Apply(const ResolvedModel& resolvedModel,
                                              const OperationRecordEntry* operationRecordEntry) const {
        uint8_t* arg1;
        shared_ptr<Operation>* psVar3;
        long lVar4;
        ShareLightCache* pSVar6;
        OperationRecordEntry* pOVar7;
        ShareLightRequest* shareLightRequest;
        vector<EntityHighlight*, BucketAllocatorEASTL>* this_01;
        OperationRecordEntry* in_RCX;
        OperationRecordEntry* pOVar10;
        bool bVar11;
        vector<Nullable<Array<shared_ptr<rs2lib::IfType>>>, eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*
            local_78;
        vector<Nullable<Array<shared_ptr<rs2lib::IfType>>>, eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*
            local_70;
        OperationRecordEntry* local_48[2];

        OperationRecordEntry* matrix44 = in_RCX;
        if (in_RCX != nullptr) {
            psVar3 = in_RCX->GetOperation();
            if (((CommandLine*)(*psVar3).operator->())->GetPos() == 10) {
                psVar3 = in_RCX->GetOperation();
                lVar4 = psVar3->end();
                goto LAB_1002f37f7;
            }
        }
        lVar4 = 0;
    LAB_1002f37f7:
        ShareLightCache* pSVar5 = (ShareLightCache*)(resolvedModel.field_16).operator->();
        if (lVar4 == 0) {
            pSVar6 = nullptr;
        } else {
            pSVar6 = (ShareLightCache*)((lVar4 + 16))->end();
        }
        pSVar5->Resolve(pSVar6);
        vector<ShareLightNormalSum> local_98;
        pSVar5 = (ShareLightCache*)(resolvedModel.field_16).operator->();
        auto groundDecor = pSVar5->GetEditableModel();
        shared_ptr<Decor> local_60(groundDecor);
        long local_50 = lVar4;
        InitializeNormalSums((ShareLightOperation*)resolvedModel, &local_98);
        vector<Nullable<Array<shared_ptr<rs2lib::IfType>>>, eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*
            pvVar9 = (vector<Nullable<Array<shared_ptr<rs2lib::IfType>>>,
                             eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)resolvedModel.m_animationState;
        local_48[0] = nullptr;
        lVar4 = pvVar9->size();
        if (lVar4 != 0) {
            local_70 = (vector<Nullable<Array<shared_ptr<rs2lib::IfType>>>,
                               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)(local_50 + 32);
            pOVar10 = (OperationRecordEntry*)&DAT_00000001;
            local_78 = pvVar9;
            do {
                arg1 = pOVar10[-1].m_outputModel + 111;
                shareLightRequest = (ShareLightRequest*)(*pvVar9)[(unsigned long)arg1];
                pSVar5 = (ShareLightCache*)(*shareLightRequest).operator->();
                pvVar9 = local_70;
                if (local_50 == 0) {
                LAB_1002f3910:
                    pSVar6 = nullptr;
                } else {
                    if ((uint8_t*)local_70->size() <= arg1)
                        goto LAB_1002f3910;
                    this_01 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)(*pvVar9)[(unsigned long)arg1];
                    pSVar6 = (ShareLightCache*)this_01->end();
                }
                pSVar5->Resolve(pSVar6);
                SumNormalsFromRequest((ShareLightOperation*)resolvedModel, shareLightRequest, &local_98,
                                      (unsigned long*)local_48);
                if (*(char*)((long)&shareLightRequest->field_21 + 7) != '\0') {
                    DegenerateFacesFromIteration((ShareLightOperation*)resolvedModel, &local_60, &local_98,
                                                 (unsigned long*)local_48);
                }
                pvVar9 = local_78;
                local_48[0] = pOVar10;
                pOVar7 = (OperationRecordEntry*)local_78->size();
                matrix44 = (OperationRecordEntry*)&pOVar10->field_1;
                bVar11 = pOVar10 < pOVar7;
                pOVar10 = matrix44;
            } while (bVar11);
        }
        ApplyAveragedNormals((ShareLightOperation*)resolvedModel, &local_60, &local_98);
        new (local_48) shared_ptr();
        new (this) ResolvedModel(local_60, *local_48, matrix44);
        return (ResolvedModel*)this;
    }

    // 0x1002f3a70
    void ShareLightOperation::InitializeNormalSums(eastl::vector<ShareLightNormalSum>& shareLightNormalSums) const {
        Layout* this_00;
        bool cVar1;
        bool cVar2;
        char* pcVar5;
        ShareLightNormalSum local_58;
        Vector3T<int>* local_48[2];

        ShareLightCache* pSVar3 = (ShareLightCache*)(*field_16).operator->();
        shareLightNormalSums.reserve(
            ((vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>*)pSVar3->GetUniquePoints())->size());
        pSVar3 = (ShareLightCache*)(*field_16).operator->();
        auto this_02 = pSVar3->GetUniquePoints();
        long lVar4 = this_02->HeapBeginPtr();
        long local_38 = this_02->end();
        if (lVar4 != local_38) {
            do {
                this_00 = (Layout*)(lVar4 + 12);
                pcVar5 = (char*)this_00->SSOBeginPtr();
                cVar1 = *pcVar5;
                pcVar5 = (char*)this_00->y();
                cVar2 = *pcVar5;
                pcVar5 = (char*)this_00->z();
                new (local_48) rs2lib::worldmap::LocationData((int)cVar1, (int)cVar2, (int)*pcVar5);
                local_58 = ShareLightNormalSum(local_48[0], (unsigned short)(int)local_48[1], 1);
                shareLightNormalSums.push_back(local_58);
                lVar4 = lVar4 + 16;
            } while (lVar4 != local_38);
        }
    }

    // 0x1002f3bb0
    void ShareLightOperation::SumNormalsFromRequest(const ShareLightRequest& shareLightRequest,
                                                    eastl::vector<ShareLightNormalSum>& shareLightNormalSums,
                                                    const unsigned long& arg3) const {
        unsigned long uVar4;
        vector<ShareLightPointRSeven>* this_01;
        Vector3T<int>* pVVar5;
        short* psVar6;
        uint32_t extraout_EDX;
        uint32_t extraout_EDX_00;
        uint32_t extraout_var;
        uint32_t extraout_var_00;
        unsigned long arg1;
        uint8_t auVar7[12];
        uint64_t local_80;
        uint64_t local_78;
        uint8_t local_70[12];
        hashtable<
            jag::math::Vector3T<int>, eastl::pair<jag::math::Vector3T<int> const, jag::math::Vector4T<int>>,
            eastl::allocator, eastl::use_first<eastl::pair<jag::math::Vector3T<int> const, jag::math::Vector4T<int>>>,
            eastl::equal_to<jag::math::Vector3T<int>>, eastl::hash<jag::math::Vector3T<int>>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* local_58;
        uint64_t local_48;
        uint64_t uStack_40;

        ShareLightOperation* local_50 = this;
        auto pSVar2 = shareLightRequest.operator->();
        auto this_00 = pSVar2->GetPointNormals();
        long lVar3 = shareLightNormalSums.size();
        if (lVar3 != 0) {
            local_50 = (ShareLightOperation*)local_50->field_16;
            arg1 = 0;
            local_58 = this_00;
            do {
                pSVar2 = (ShareLightCache*)(*local_50).operator->();
                this_01 = (vector<ShareLightPointRSeven>*)pSVar2->GetUniquePoints();
                pVVar5 = (Vector3T<int>*)(*this_01)[arg1];
                auVar7 = *pVVar5 - shareLightRequest.field_16;
                local_48 = auVar7._0_8_;
                uStack_40 = (((uint64_t)uStack_40._4_4_ << 32) | (uint32_t)auVar7._8_4_);
                local_80 = this_00->find(local_48);
                local_78 = (((uint64_t)extraout_var << 32) | (uint32_t)extraout_EDX);
                local_48 = this_00->end();
                uStack_40 = (((uint64_t)extraout_var_00 << 32) | (uint32_t)extraout_EDX_00);
                if (local_80 != local_48 != '\0') {
                    lVar3 = local_80.HeapBeginPtr();
                    local_48 = *(uint64_t*)(lVar3 + 12);
                    uStack_40 = *(uint64_t*)(lVar3 + 20);
                    pVVar5 = &shareLightNormalSums[arg1];
                    auVar7 = local_48.GetXYZ();
                    local_70 = auVar7;
                    *pVVar5 += *local_70;
                    psVar6 = (short*)local_48.qw();
                    *(short*)(pVVar5 + 12) = *(short*)(pVVar5 + 12) + *psVar6;
                    *(short*)(pVVar5 + 14) = (short)*arg3;
                    this_00 = local_58;
                }
                arg1 = arg1 + 1;
                uVar4 = shareLightNormalSums.size();
            } while (arg1 < uVar4);
        }
    }

    // 0x1002f3d10
    void ShareLightOperation::DegenerateFacesFromIteration(shared_ptr<jag::graphics::Model>& model,
                                                           eastl::vector<ShareLightNormalSum>& shareLightNormalSums,
                                                           const unsigned long& arg3) const {
        unsigned int uVar2;
        GeometryBatchInstance* this_03;
        GeometryBatch* this_04;
        vector<unsigned short>* pvVar3;
        unsigned long arg1;
        uint64_t local_68;
        uint64_t local_60;
        uint64_t local_58;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* local_50;

        unsigned long local_38 = 0;
        auto this_00 = model.operator->();
        auto this_01 = this_00->GetBatchList();
        auto this_02 = this_01->HeapBeginPtr();
        auto local_40 = this_01->end();
        if (this_02 != local_40) {
            do {
                local_50 = this_02;
                this_03 = (GeometryBatchInstance*)(*this_02).operator->();
                this_04 = (GeometryBatch*)this_03->GetGeometryBatch();
                if (this_04->GetIndexCount() != 0) {
                    arg1 = 0;
                    do {
                        pvVar3 = (vector<unsigned short>*)this_04->GetVertexIndexBuffer();
                        local_68 = (*pvVar3)[arg1];
                        pvVar3 = (vector<unsigned short>*)this_04->GetVertexIndexBuffer();
                        local_60 = (*pvVar3)[arg1 + 1];
                        pvVar3 = (vector<unsigned short>*)this_04->GetVertexIndexBuffer();
                        local_58 = (*pvVar3)[arg1 + 2];
                        DegenerateFaceFromIteration(local_68, local_38, shareLightNormalSums, arg3);
                        uVar2 = this_04->GetIndexCount();
                        arg1 = arg1 + 3;
                    } while (arg1 < uVar2);
                }
                uVar2 = this_04->GetVertexCount();
                local_38 = local_38 + uVar2;
                this_02 = local_50 + 8;
            } while (this_02 != local_40);
        }
    }

    // 0x1002f3e50
    void ShareLightOperation::ApplyAveragedNormals(shared_ptr<jag::graphics::Model>& model,
                                                   eastl::vector<ShareLightNormalSum>& shareLightNormalSums) const {
        unsigned long arg1;
        unsigned int uVar2;
        GeometryBatchInstance* this_03;
        GeometryBatch* this_04;
        vector<jag::graphics::GeometryBatchVertex>* pvVar3;
        long lVar4;
        char* pcVar5;
        vector<unsigned int>* this_06;
        unsigned int* puVar6;
        Layout* this_07;
        int* piVar7;
        unsigned long arg1_00;
        uint8_t local_a8[32];
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* local_80;
        Vector3T<signed char> local_70;
        long local_68;
        int local_58[4];
        int local_48[3];
        int local_3c[3];

        ShareLightOperation* local_60 = this;
        auto this_00 = model.operator->();
        auto this_01 = this_00->GetBatchList();
        auto this_02 = this_01->HeapBeginPtr();
        auto local_78 = this_01->end();
        if (this_02 != local_78) {
            local_60 = (ShareLightOperation*)local_60->field_16;
            local_68 = 0;
            do {
                this_03 = (GeometryBatchInstance*)(*this_02).operator->();
                this_04 = (GeometryBatch*)this_03->GetGeometryBatch();
                if (this_04->GetVertexCount() != 0) {
                    arg1_00 = 0;
                    local_80 = this_02;
                    do {
                        pvVar3 = (vector<jag::graphics::GeometryBatchVertex>*)this_04->GetVertexDataBuffer();
                        lVar4 = (*pvVar3)[arg1_00];
                        pcVar5 = (char*)((lVar4 + 8))->y();
                        if (*pcVar5 == '\0') {
                            arg1 = local_68 + arg1_00;
                            new (local_a8) ShareLightPointRSeven(*this_04, arg1_00);
                            this_06 = ((ShareLightCache*)(*local_60).operator->())->GetVertexToPointMap();
                            puVar6 = (unsigned int*)(*this_06)[arg1];
                            this_07 = &shareLightNormalSums[(unsigned long)*puVar6];
                            if (1 < *(unsigned short*)(this_07 + 12)) {
                                piVar7 = (int*)this_07->SSOBeginPtr();
                                local_58[0] = *piVar7 / (int)(unsigned int)*(unsigned short*)(this_07 + 12);
                                local_58[1] = 4294967168;
                                local_58[2] = 127;
                                piVar7 = std::clamp<int>(*local_58, *(local_58 + 1), *(local_58 + 2));
                                local_3c[2] = *piVar7;
                                piVar7 = (int*)this_07->y();
                                local_58[3] = *piVar7 / (int)(unsigned int)*(unsigned short*)(this_07 + 12);
                                local_48[0] = -128;
                                local_48[1] = 127;
                                puVar6 = (unsigned int*)std::clamp<int>(*(local_58 + 3), *local_48, *(local_48 + 1));
                                uVar2 = *puVar6;
                                piVar7 = (int*)this_07->second();
                                local_48[2] = *piVar7 / (int)(unsigned int)*(unsigned short*)(this_07 + 12);
                                local_3c[0] = -128;
                                local_3c[1] = 127;
                                puVar6 = (unsigned int*)std::clamp<int>(*(local_48 + 2), *local_3c, *(local_3c + 1));
                                new ((local_a8 + 16)) rs2lib::worldmap::LocationData(local_3c[2], uVar2, *puVar6);
                                local_70.Vector3T<int>(*((local_a8 + 16)));
                                pvVar3 = (vector<jag::graphics::GeometryBatchVertex>*)this_04->GetVertexDataBuffer();
                                lVar4 = (*pvVar3)[arg1_00];
                                (*((lVar4 + 4))) = local_70;
                            }
                        }
                        arg1_00 = arg1_00 + 1;
                        uVar2 = this_04->GetVertexCount();
                    } while (arg1_00 < uVar2);
                    local_68 = local_68 + arg1_00;
                    this_02 = local_80;
                }
                this_02 = this_02 + 8;
            } while (this_02 != local_78);
        }
    }

    // 0x1002f4130
    void ShareLightOperation::DegenerateFaceFromIteration(std::array<unsigned short*, 3ul>& arg1,
                                                          const unsigned long& arg2,
                                                          eastl::vector<ShareLightNormalSum>& shareLightNormalSums,
                                                          const unsigned long& arg4) const {
        unsigned short* puVar1;
        bool bVar2;
        uint64_t* puVar3;
        vector<unsigned int>* this_01;
        unsigned int* puVar6;
        long lVar7;
        uint64_t* puVar8;

        uint64_t* puVar4 = (uint64_t*)std::array<unsigned short*, 3ul>::begin();
        uint64_t* puVar5 = (uint64_t*)std::array<unsigned short*, 3ul>::end();
        if (puVar4 == puVar5) {
            bVar2 = true;
        } else {
            puVar3 = puVar4;
            while (true) {
                puVar8 = puVar3 + 1;
                puVar1 = (unsigned short*)*puVar3;
                this_01 = ((ShareLightCache*)(*field_16).operator->())->GetVertexToPointMap();
                puVar6 = (unsigned int*)(*this_01)[(unsigned long)*puVar1 + arg2];
                if ((unsigned long)*puVar6 == 4294967295)
                    break;
                lVar7 = shareLightNormalSums[(unsigned long)*puVar6];
                bVar2 = false;
                if ((arg4 != (unsigned long)*(unsigned short*)(lVar7 + 14)) ||
                    (bVar2 = true, puVar3 = puVar8, puVar8 == puVar5))
                    goto LAB_1002f4221;
            }
            bVar2 = false;
        }
    LAB_1002f4221:
        if (bVar2) {
            for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
                *(uint16_t*)*puVar4 = 0;
            }
        }
    }

    // 0x1002f4450
    bool ShareLightOperation::IsEqual(const Operation& operation) const {
        uint8_t* objType;
        bool bVar1;
        bool bVar2;
        bool bVar3;
        ShareLightCache* shareLightCache1;
        ShareLightCache* shareLightCache2;

        if (operation.GetPos() == 10) {
            objType = field_16;
            bVar2 = false;
            bVar1 = *objType == nullptr;
            if (bVar1) {
                bVar2 = (*((operation + 1))) == nullptr;
            }
            bVar3 = false;
            bVar1 = *objType != nullptr;
            if (bVar1) {
                bVar3 = (*((operation + 1))) != nullptr;
            }
            if (bVar2 != false) {
            LAB_1002f44bc:
                bVar1 = field_32 == (*((operation + 2)));
                return bVar1;
            }
            if (bVar3 != false) {
                shareLightCache1 = (ShareLightCache*)**objType;
                shareLightCache2 = (ShareLightCache*)*(*((operation + 1)));
                if (*shareLightCache1 == *shareLightCache2 != '\0')
                    goto LAB_1002f44bc;
            }
        }
        return false;
    }

} // namespace jag::oldscape::dash3d

// 0x1002f2de0
void round(float arg1) {
    _roundf();
}

namespace jag::math {
    // 0x1002f36a0
    bool operator== <signed char>(const Vector3T<signed char>& vector31, const Vector3T<signed char>& vector32) {
        return vector31[2] == vector32[2] && *(short*)vector31 == *(short*)vector32;
    }

} // namespace jag::math
