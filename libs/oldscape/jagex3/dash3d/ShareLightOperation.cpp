// libs/oldscape/jagex3/dash3d/ShareLightOperation.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "ShareLightOperation.h"

namespace jag::oldscape::dash3d {
    // 0x1002f2cd0, 256 bytes, base-object constructor, placed by debug map only (low confidence)
    // ShareLightPointRSeven::ShareLightPointRSeven(jag::graphics::GeometryBatch const&, unsigned long)
    void ShareLightPointRSeven::ShareLightPointRSeven(GeometryBatch* param_1, ulong param_2) {
        vector<jag::graphics::GeometryBatchVertexPos, eastl::allocator>* this_00;
        undefined8* puVar1;
        vector* pvVar2;
        float* pfVar3;
        vector<jag::graphics::GeometryBatchVertex, eastl::allocator>* this_01;
        long lVar4;
        float fVar5;
        Vector3T<int> local_70[16];
        ColourHSL local_60;
        undefined8 local_50;
        undefined4 local_48;
        float local_38;
        float local_34;

        new (this) jag::math::Vector3T<int>();
        new (&field_12) jag::math::Vector3T<unsigned char>();
        this_00 = (vector<jag::graphics::GeometryBatchVertexPos, eastl::allocator>*)param_1->GetVertexDataBufferPos();
        puVar1 = (undefined8*)eastl::vector<jag::graphics::GeometryBatchVertexPos, eastl::allocator>::operator[](
            this_00, param_2);
        local_50 = *puVar1;
        local_48 = *(undefined4*)(puVar1 + 1);
        pvVar2 = local_50.SSOBeginPtr(param_2);
        local_38 = (float)round(*(float*)pvVar2);
        pfVar3 = (float*)local_50.y();
        local_34 = (float)round(*pfVar3);
        pfVar3 = (float*)local_50.second();
        fVar5 = (float)round(*pfVar3);
        new (&local_60) jag::math::ColourHSL(local_38, local_34, fVar5);
        jag::math::Vector3T<int>::Vector3T<float>(local_70, (Vector3T*)&local_60);
        jag::math::Vector3T<int>::operator=((Vector3T<int>*)this, (Vector3T*)local_70);
        this_01 = (vector<jag::graphics::GeometryBatchVertex, eastl::allocator>*)param_1->GetVertexDataBuffer();
        lVar4 = eastl::vector<jag::graphics::GeometryBatchVertex, eastl::allocator>::operator[](this_01, param_2);
        jag::math::Vector3T<unsigned char>::operator=((Vector3T<unsigned char>*)&field_12, (Vector3T*)(lVar4 + 4));
    }

    // 0x1002f2df0, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // ShareLightPointRSeven::ShareLightPointRSeven(jag::graphics::GeometryBatch const&, unsigned long): jumps straight to the base-object constructor

    // 0x1002f2e00, 80 bytes, placed by debug map only (low confidence)
    // ShareLightCache::GetPointNormals() const
    undefined1* ShareLightCache::GetPointNormals() {
        if (field_152 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_resolved",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ShareLightOperation.cpp",
                      20, "Cache was not resolved before attempting to get point normals.");
        }
        return &field_32;
    }

    // 0x1002f2e50, 16 bytes, placed by neighbouring functions
    // ShareLightCache::GetUniquePoints() const
    undefined1* ShareLightCache::GetUniquePoints() {
        return &field_88;
    }

    // 0x1002f2e60, 16 bytes, placed by neighbouring functions
    // ShareLightCache::GetVertexToPointMap() const
    undefined1* ShareLightCache::GetVertexToPointMap() {
        return &field_120;
    }

    // 0x1002f2e70, 80 bytes, placed by debug map only (low confidence)
    // ShareLightCache::GetEditableModel() const
    undefined1* ShareLightCache::GetEditableModel() {
        if (field_152 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_resolved",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ShareLightOperation.cpp",
                      36, "Cache was not resolved before attempting to get model.");
        }
        return &field_16;
    }

    // 0x1002f2ec0, 128 bytes, placed by neighbouring functions
    // ShareLightCache::Resolve(ShareLightCache const*)
    void ShareLightCache::Resolve(ShareLightCache* param_1) {
        Model* pMVar1;
        shared_ptr<RSevenDebugPresetProvider> local_30[16];

        if (param_1->field_152 == '\0') {
            ResolveAndTransformModel((ShareLightCache*)local_30, (OperationBuffer*)param_1);
            shared_ptr<jag::graphics::Model>::operator=((shared_ptr<jag::graphics::Model>*)&param_1->field_16,
                                                        (shared_ptr*)local_30);
            local_30->~shared_ptr();
            pMVar1 = (Model*)shared_ptr<jag::graphics::Model>::operator*(
                (shared_ptr<jag::graphics::Model>*)&param_1->field_16);
            GeneratePoints(param_1, pMVar1);
            param_1->field_152 = 1;
        }
    }

    // 0x1002f2f40, 320 bytes, placed by debug map only (low confidence)
    // ShareLightCache::ResolveAndTransformModel(OperationBuffer const*)
    ShareLightCache* ShareLightCache::ResolveAndTransformModel(OperationBuffer* param_1) {
        bool bVar1;
        ResolvedModel* this_00;
        shared_ptr* this_01;
        shared_ptr<jag::graphics::Model>* this_02;
        Model* pMVar2;
        Matrix44T* pMVar3;
        OperationBuffer* in_RDX;
        Matrix44T local_68;

        this_00 = (ResolvedModel*)param_1->Resolve(in_RDX);
        this_01 = (shared_ptr*)this_00->GetAnimationState();
        bVar1 = shared_ptr::operator_cast_to_bool(this_01);
        if (bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("!model.GetAnimationState()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ShareLightOperation.cpp",
                      106, "Animated models may not participate in ShareLight.");
        }
        this_02 = (shared_ptr<jag::graphics::Model>*)this_00->GetModel();
        pMVar2 = (Model*)shared_ptr<jag::graphics::Model>::operator*(this_02);
        local_68._0_4_ = 1;
        make_shared<jag::graphics::Model, jag::graphics::Model_const&, jag::graphics::ModelCopyType>(
            (jag*)this, pMVar2, (ModelCopyType*)&local_68);
        local_68.GetLocalTransform();
        bVar1 = jag::math::operator!=(&local_68, (Matrix44T*)PTR_IDENTITY_100ee6730);
        if (bVar1) {
            pMVar2 = (Model*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)this);
            pMVar2->StartTransform();
            pMVar2 = (Model*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)this);
            local_68.GetLocalTransform();
            pMVar2->Transform(&local_68);
            pMVar3 = (Matrix44T*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)this);
            local_68.GetLocalTransform();
            jag::graphics::Model::TransformNormals(pMVar3, SUB81(&local_68, 0));
            pMVar2 = (Model*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)this);
            pMVar2->EndTransform(true);
        }
        param_1->ClearCache();
        return this;
    }

    // 0x1002f3080, 1024 bytes, placed by neighbouring functions
    // ShareLightCache::GeneratePoints(jag::graphics::Model const&)
    void ShareLightCache::GeneratePoints(Model* param_1) {
        Layout* this_00;
        vector vVar1;
        char cVar2;
        uint uVar3;
        int iVar4;
        Layout* this_01;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_02;
        GeometryBatchInstance* this_03;
        GeometryBatch* this_04;
        vector<jag::graphics::GeometryBatchVertex, eastl::allocator>* this_05;
        long lVar5;
        char* pcVar6;
        vector* pvVar7;
        Vector4T<int>* pVVar8;
        ShareLightPointRSeven* this_06;
        vector<unsigned int, eastl::allocator>* this_07;
        ulong uVar9;
        vector<ShareLightPointRSeven, eastl::allocator>* this_08;
        undefined1 auVar10[12];
        hash_map<ShareLightPointRSeven, unsigned int, eastl::hash<ShareLightPointRSeven>,
                 eastl::equal_to<ShareLightPointRSeven>, eastl::allocator, false>
            local_e8[56];
        LocationData local_b0;
        undefined1 local_a0[16];
        ShareLightPointRSeven local_90;
        vector<ShareLightPointRSeven, eastl::allocator>* local_78;
        vector<unsigned int, eastl::allocator>* local_70;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* local_68;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* local_60;
        undefined1 local_58[24];
        undefined1 local_40[12];

        new (&local_90) eastl::allocator("EASTL hash_map");
        eastl::hash_map<ShareLightPointRSeven, unsigned int, eastl::hash<ShareLightPointRSeven>,
                        eastl::equal_to<ShareLightPointRSeven>, eastl::allocator,
                        false>::hash_map(local_e8, (allocator*)&local_90);
        this_01 = (Layout*)param_1->GetBatchList();
        this_02 = (unique_ptr<jag::graphics::GeometryBatchInstance,
                              MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_01);
        local_60 =
            (unique_ptr<jag::graphics::GeometryBatchInstance,
                        MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)this_01->end();
        if (this_02 != local_60) {
            this_08 = (vector<ShareLightPointRSeven, eastl::allocator>*)&field_88;
            this_07 = (vector<unsigned int, eastl::allocator>*)&field_120;
            local_58._16_8_ = &field_32;
            local_78 = this_08;
            local_70 = this_07;
            do {
                local_68 = this_02;
                this_03 = (GeometryBatchInstance*)
                              std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                              MakeUniquePool<jag::graphics::GeometryBatchInstance,
                                                             3072>::UniquePoolDeleter>::operator->(this_02);
                this_04 = (GeometryBatch*)this_03->GetGeometryBatch();
                uVar3 = this_04->GetVertexCount();
                eastl::vector<ShareLightPointRSeven, eastl::allocator>::reserve(this_08, (ulong)uVar3);
                uVar3 = this_04->GetVertexCount();
                eastl::vector<unsigned int, eastl::allocator>::reserve(this_07, (ulong)uVar3);
                iVar4 = this_04->GetVertexCount();
                if (iVar4 != 0) {
                    uVar9 = 0;
                    do {
                        this_06 = (ShareLightPointRSeven*)local_a0;
                        this_05 = (vector<jag::graphics::GeometryBatchVertex, eastl::allocator>*)
                                      this_04->GetVertexDataBuffer();
                        lVar5 = eastl::vector<jag::graphics::GeometryBatchVertex, eastl::allocator>::operator[](this_05,
                                                                                                                uVar9);
                        pcVar6 = (char*)((lVar5 + 8))->y();
                        if (*pcVar6 == '\0') {
                            ShareLightPointRSeven::ShareLightPointRSeven(this_06, this_04, uVar9);
                            local_58._0_4_ = this_08->size();
                            eastl::hashtable<ShareLightPointRSeven,
                                             eastl::pair<ShareLightPointRSeven_const, unsigned int>, eastl::allocator,
                                             eastl::use_first<eastl::pair<ShareLightPointRSeven_const, unsigned int>>,
                                             eastl::equal_to<ShareLightPointRSeven>, eastl::hash<ShareLightPointRSeven>,
                                             eastl::mod_range_hashing, eastl::default_ranged_hash,
                                             eastl::prime_rehash_policy, false, true,
                                             true>::emplace<ShareLightPointRSeven&, unsigned int>(&local_90,
                                                                                                  (uint*)local_e8);
                            if (local_90._16_1_ == '\0') {
                                lVar5 = local_90.HeapBeginPtr();
                                eastl::vector<unsigned int, eastl::allocator>::push_back(this_07, (uint*)(lVar5 + 16));
                            } else {
                                local_58._0_4_ = this_08->size();
                                eastl::vector<unsigned int, eastl::allocator>::push_back(this_07, (uint*)local_58);
                                eastl::vector<ShareLightPointRSeven, eastl::allocator>::push_back(this_08, this_06);
                                this_00 = (Layout*)(local_a0 + 12);
                                pvVar7 = eastl::string::Layout::SSOBeginPtr(this_00, (type*)this_06);
                                vVar1 = *pvVar7;
                                pcVar6 = (char*)this_00->y();
                                cVar2 = *pcVar6;
                                pcVar6 = (char*)this_00->z();
                                new (local_58) GridRect((int)(char)vVar1, (int)cVar2, (int)*pcVar6, 1);
                                pVVar8 = (Vector4T<int>*)eastl::hash_map<
                                    jag::math::Vector3T<int>, jag::math::Vector4T<int>,
                                    eastl::hash<jag::math::Vector3T<int>>, eastl::equal_to<jag::math::Vector3T<int>>,
                                    eastl::allocator,
                                    false>::operator[]((hash_map<jag::math::Vector3T<int>, jag::math::Vector4T<int>,
                                                                 eastl::hash<jag::math::Vector3T<int>>,
                                                                 eastl::equal_to<jag::math::Vector3T<int>>,
                                                                 eastl::allocator, false>*)local_58._16_8_,
                                                       (Vector3T*)local_a0);
                                jag::math::Vector4T<int>::operator+=(pVVar8, (Vector4T*)local_58);
                                new (&local_b0) rs2lib::worldmap::LocationData(-1, 0, 0);
                                auVar10 = jag::math::operator+((Vector3T*)local_a0, (Vector3T*)&local_b0);
                                local_40 = auVar10;
                                pVVar8 = (Vector4T<int>*)eastl::hash_map<
                                    jag::math::Vector3T<int>, jag::math::Vector4T<int>,
                                    eastl::hash<jag::math::Vector3T<int>>, eastl::equal_to<jag::math::Vector3T<int>>,
                                    eastl::allocator,
                                    false>::operator[]((hash_map<jag::math::Vector3T<int>, jag::math::Vector4T<int>,
                                                                 eastl::hash<jag::math::Vector3T<int>>,
                                                                 eastl::equal_to<jag::math::Vector3T<int>>,
                                                                 eastl::allocator, false>*)local_58._16_8_,
                                                       (Vector3T*)local_40);
                                jag::math::Vector4T<int>::operator+=(pVVar8, (Vector4T*)local_58);
                                new (&local_b0) rs2lib::worldmap::LocationData(1, 0, 0);
                                auVar10 = jag::math::operator+((Vector3T*)local_a0, (Vector3T*)&local_b0);
                                local_40 = auVar10;
                                pVVar8 = (Vector4T<int>*)eastl::hash_map<
                                    jag::math::Vector3T<int>, jag::math::Vector4T<int>,
                                    eastl::hash<jag::math::Vector3T<int>>, eastl::equal_to<jag::math::Vector3T<int>>,
                                    eastl::allocator,
                                    false>::operator[]((hash_map<jag::math::Vector3T<int>, jag::math::Vector4T<int>,
                                                                 eastl::hash<jag::math::Vector3T<int>>,
                                                                 eastl::equal_to<jag::math::Vector3T<int>>,
                                                                 eastl::allocator, false>*)local_58._16_8_,
                                                       (Vector3T*)local_40);
                                jag::math::Vector4T<int>::operator+=(pVVar8, (Vector4T*)local_58);
                                new (&local_b0) rs2lib::worldmap::LocationData(0, -1, 0);
                                auVar10 = jag::math::operator+((Vector3T*)local_a0, (Vector3T*)&local_b0);
                                local_40 = auVar10;
                                pVVar8 = (Vector4T<int>*)eastl::hash_map<
                                    jag::math::Vector3T<int>, jag::math::Vector4T<int>,
                                    eastl::hash<jag::math::Vector3T<int>>, eastl::equal_to<jag::math::Vector3T<int>>,
                                    eastl::allocator,
                                    false>::operator[]((hash_map<jag::math::Vector3T<int>, jag::math::Vector4T<int>,
                                                                 eastl::hash<jag::math::Vector3T<int>>,
                                                                 eastl::equal_to<jag::math::Vector3T<int>>,
                                                                 eastl::allocator, false>*)local_58._16_8_,
                                                       (Vector3T*)local_40);
                                jag::math::Vector4T<int>::operator+=(pVVar8, (Vector4T*)local_58);
                                new (&local_b0) rs2lib::worldmap::LocationData(0, 1, 0);
                                auVar10 = jag::math::operator+((Vector3T*)local_a0, (Vector3T*)&local_b0);
                                local_40 = auVar10;
                                pVVar8 = (Vector4T<int>*)eastl::hash_map<
                                    jag::math::Vector3T<int>, jag::math::Vector4T<int>,
                                    eastl::hash<jag::math::Vector3T<int>>, eastl::equal_to<jag::math::Vector3T<int>>,
                                    eastl::allocator,
                                    false>::operator[]((hash_map<jag::math::Vector3T<int>, jag::math::Vector4T<int>,
                                                                 eastl::hash<jag::math::Vector3T<int>>,
                                                                 eastl::equal_to<jag::math::Vector3T<int>>,
                                                                 eastl::allocator, false>*)local_58._16_8_,
                                                       (Vector3T*)local_40);
                                jag::math::Vector4T<int>::operator+=(pVVar8, (Vector4T*)local_58);
                                new (&local_b0) rs2lib::worldmap::LocationData(0, 0, -1);
                                auVar10 = jag::math::operator+((Vector3T*)local_a0, (Vector3T*)&local_b0);
                                local_40 = auVar10;
                                pVVar8 = (Vector4T<int>*)eastl::hash_map<
                                    jag::math::Vector3T<int>, jag::math::Vector4T<int>,
                                    eastl::hash<jag::math::Vector3T<int>>, eastl::equal_to<jag::math::Vector3T<int>>,
                                    eastl::allocator,
                                    false>::operator[]((hash_map<jag::math::Vector3T<int>, jag::math::Vector4T<int>,
                                                                 eastl::hash<jag::math::Vector3T<int>>,
                                                                 eastl::equal_to<jag::math::Vector3T<int>>,
                                                                 eastl::allocator, false>*)local_58._16_8_,
                                                       (Vector3T*)local_40);
                                jag::math::Vector4T<int>::operator+=(pVVar8, (Vector4T*)local_58);
                                new (&local_b0) rs2lib::worldmap::LocationData(0, 0, 1);
                                auVar10 = jag::math::operator+((Vector3T*)local_a0, (Vector3T*)&local_b0);
                                local_40 = auVar10;
                                pVVar8 = (Vector4T<int>*)eastl::hash_map<
                                    jag::math::Vector3T<int>, jag::math::Vector4T<int>,
                                    eastl::hash<jag::math::Vector3T<int>>, eastl::equal_to<jag::math::Vector3T<int>>,
                                    eastl::allocator,
                                    false>::operator[]((hash_map<jag::math::Vector3T<int>, jag::math::Vector4T<int>,
                                                                 eastl::hash<jag::math::Vector3T<int>>,
                                                                 eastl::equal_to<jag::math::Vector3T<int>>,
                                                                 eastl::allocator, false>*)local_58._16_8_,
                                                       (Vector3T*)local_40);
                                jag::math::Vector4T<int>::operator+=(pVVar8, (Vector4T*)local_58);
                                this_07 = local_70;
                                this_08 = local_78;
                            }
                        } else {
                            local_90.field_0 = 4294967295;
                            eastl::vector<unsigned int, eastl::allocator>::push_back(this_07, (uint*)&local_90);
                        }
                        uVar9 = uVar9 + 1;
                        uVar3 = this_04->GetVertexCount();
                    } while (uVar9 < uVar3);
                }
                this_02 = local_68 + 8;
            } while (this_02 != local_60);
        }
        eastl::hash_map<ShareLightPointRSeven, unsigned int, eastl::hash<ShareLightPointRSeven>,
                        eastl::equal_to<ShareLightPointRSeven>, eastl::allocator, false>::~hash_map(local_e8);
    }

    // 0x1002f3660, 64 bytes, placed by neighbouring functions
    // operator==(ShareLightPointRSeven const&, ShareLightPointRSeven const&)
    /* TEMPNAMEPLACEHOLDERVALUE(ShareLightPointRSeven
   const&, ShareLightPointRSeven const&) */

    bool operator==(ShareLightPointRSeven* param_1, ShareLightPointRSeven* param_2) {
        bool bVar1;

        bVar1 = jag::math::operator==((Vector3T*)param_1, (Vector3T*)param_2);
        if (bVar1) {
            bVar1 = jag::math::operator==((Vector3T*)&param_1->field_12, (Vector3T*)&param_2->field_12);
        } else {
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x1002f36c0, 16 bytes, placed by neighbouring functions
    // operator!=(ShareLightPointRSeven const&, ShareLightPointRSeven const&)
    /* TEMPNAMEPLACEHOLDERVALUE(ShareLightPointRSeven
   const&, ShareLightPointRSeven const&) */

    byte operator!=(ShareLightPointRSeven* param_1, ShareLightPointRSeven* param_2) {
        return operator==(param_1, param_2) ^ 1;
    }

    // 0x1002f36d0, 16 bytes, placed by neighbouring functions
    // operator==(ShareLightCache const&, ShareLightCache const&)
    /* TEMPNAMEPLACEHOLDERVALUE(ShareLightCache const&,
   ShareLightCache const&) */

    void operator==(ShareLightCache* param_1, ShareLightCache* param_2) {
        operator==((OperationBuffer*)param_1, (OperationBuffer*)param_2);
    }

    // 0x1002f36e0, 16 bytes, placed by neighbouring functions
    // operator!=(ShareLightCache const&, ShareLightCache const&)
    /* TEMPNAMEPLACEHOLDERVALUE(ShareLightCache const&,
   ShareLightCache const&) */

    byte operator!=(ShareLightCache* param_1, ShareLightCache* param_2) {
        return operator==(param_1, param_2) ^ 1;
    }

    // 0x1002f36f0, 96 bytes, placed by neighbouring functions
    // operator==(ShareLightRequest const&, ShareLightRequest const&)
    /* TEMPNAMEPLACEHOLDERVALUE(ShareLightRequest const&,
   ShareLightRequest const&) */

    undefined8 operator==(ShareLightRequest* param_1, ShareLightRequest* param_2) {
        bool bVar2;
        ShareLightCache* pSVar3;
        ShareLightCache* pSVar4;
        undefined7 extraout_var;

        pSVar3 = (ShareLightCache*)shared_ptr<ShareLightCache>::operator*((shared_ptr<ShareLightCache>*)param_1);
        pSVar4 = (ShareLightCache*)shared_ptr<ShareLightCache>::operator*((shared_ptr<ShareLightCache>*)param_2);
        if ((operator==(pSVar3, pSVar4) != '\0') &&
            (bVar2 = jag::math::operator==((Vector3T*)&param_1->field_16, (Vector3T*)&param_2->field_16), bVar2)) {
            return CONCAT71(extraout_var,
                            *(char*)((long)&param_1->field_21 + 7) == *(char*)((long)&param_2->field_21 + 7));
        }
        return 0;
    }

    // 0x1002f3790, 16 bytes, placed by neighbouring functions
    // operator!=(ShareLightRequest const&, ShareLightRequest const&)
    /* TEMPNAMEPLACEHOLDERVALUE(ShareLightRequest const&,
   ShareLightRequest const&) */

    byte operator!=(ShareLightRequest* param_1, ShareLightRequest* param_2) {
        return operator==(param_1, param_2) ^ 1;
    }

    // 0x1002f37a0, 640 bytes, placed by class name and debug map
    // ShareLightOperation::Apply(ResolvedModel const&, OperationRecordEntry const*) const
    ResolvedModel* ShareLightOperation::Apply(ResolvedModel* param_1, OperationRecordEntry* param_2) {
        ResolvedModel* pRVar1;
        int iVar2;
        shared_ptr<Operation>* this_00;
        CommandLine* this_01;
        vector<EntityHighlight*, BucketAllocatorEASTL>* pvVar3;
        long lVar4;
        ShareLightCache* pSVar5;
        shared_ptr* psVar6;
        ulong uVar7;
        ShareLightRequest* this_02;
        ulong uVar8;
        OperationRecordEntry* in_RCX;
        vector<Nullable<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* pvVar9;
        ulong uVar10;
        bool bVar11;
        vector<ShareLightNormalSum, eastl::allocator> local_98[32];
        vector<Nullable<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* local_78;
        vector<Nullable<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* local_70;
        ResolvedModel* local_68;
        shared_ptr local_60;
        long local_50;
        shared_ptr local_48;
        ResolvedModel* local_38;

        if (in_RCX != (OperationRecordEntry*)0) {
            this_00 = (shared_ptr<Operation>*)in_RCX->GetOperation();
            this_01 = (CommandLine*)shared_ptr<Operation>::operator->(this_00);
            iVar2 = this_01->GetPos();
            if (iVar2 == 10) {
                pvVar3 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)in_RCX->GetOperation();
                lVar4 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar3);
                goto LAB_1002f37f7;
            }
        }
        lVar4 = 0;
    LAB_1002f37f7:
        pSVar5 =
            (ShareLightCache*)shared_ptr<ShareLightCache>::operator->((shared_ptr<ShareLightCache>*)&param_1->field_16);
        if (lVar4 != 0) {
            ((lVar4 + 16))->end();
        }
        ShareLightCache::Resolve(pSVar5);
        eastl::vector<ShareLightNormalSum, eastl::allocator>::vector(local_98);
        pSVar5 =
            (ShareLightCache*)shared_ptr<ShareLightCache>::operator->((shared_ptr<ShareLightCache>*)&param_1->field_16);
        psVar6 = (shared_ptr*)pSVar5->GetEditableModel();
        new (&local_60) shared_ptr<Decor>(psVar6);
        local_68 = (ResolvedModel*)this;
        local_50 = lVar4;
        InitializeNormalSums((ShareLightOperation*)param_1, (vector*)local_98);
        pvVar9 = (vector<Nullable<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>>,
                         eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)&param_1
                     ->m_animationState;
        local_48._0_8_ = 0;
        local_38 = param_1;
        lVar4 =
            eastl::vector<Nullable<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>>,
                          eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(pvVar9);
        if (lVar4 != 0) {
            local_70 =
                (vector<Nullable<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>>,
                        eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)(local_50 + 32);
            uVar10 = 1;
            local_78 = pvVar9;
            do {
                uVar7 = uVar10 - 1;
                this_02 = (ShareLightRequest*)eastl::vector<ShareLightRequest, eastl::allocator>::operator[](
                    (vector<ShareLightRequest, eastl::allocator>*)pvVar9, uVar7);
                pSVar5 =
                    (ShareLightCache*)shared_ptr<ShareLightCache>::operator->((shared_ptr<ShareLightCache>*)this_02);
                pvVar9 = local_70;
                if ((local_50 != 0) &&
                    (uVar8 = eastl::vector<
                         Nullable<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>>,
                         eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(local_70),
                     uVar7 < uVar8)) {
                    pvVar3 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)
                        eastl::vector<ShareLightRequest, eastl::allocator>::operator[](
                            (vector<ShareLightRequest, eastl::allocator>*)pvVar9, uVar7);
                    eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar3);
                }
                ShareLightCache::Resolve(pSVar5);
                SumNormalsFromRequest((ShareLightOperation*)local_38, this_02, (vector*)local_98, (ulong*)&local_48);
                if (*(char*)((long)&this_02->field_21 + 7) != '\0') {
                    DegenerateFacesFromIteration((ShareLightOperation*)local_38, &local_60, (vector*)local_98,
                                                 (ulong*)&local_48);
                }
                pvVar9 = local_78;
                local_48._0_8_ = uVar10;
                uVar7 = eastl::vector<
                    Nullable<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>>,
                    eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(local_78);
                bVar11 = uVar10 < uVar7;
                uVar10 = uVar10 + 1;
            } while (bVar11);
        }
        ApplyAveragedNormals((ShareLightOperation*)local_38, &local_60, (vector*)local_98);
        new (&local_48) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        pRVar1 = local_68;
        ResolvedModel::ResolvedModel(local_68, &local_60, &local_48, *(Matrix44T*)PTR_IDENTITY_100ee6730);
        local_48.~shared_ptr();
        local_60.~shared_ptr();
        eastl::vector<ShareLightNormalSum, eastl::allocator>::~vector(local_98);
        return pRVar1;
    }

    // 0x1002f3a70, 256 bytes, placed by class name and debug map
    // ShareLightOperation::InitializeNormalSums(eastl::vector<ShareLightNormalSum, eastl::allocator>&) const
    void ShareLightOperation::InitializeNormalSums(vector* param_1) {
        Layout* this_00;
        vector vVar1;
        char cVar2;
        ShareLightCache* pSVar3;
        vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>* this_01;
        ShareLightNormalSum* pSVar4;
        Layout* this_02;
        long lVar5;
        vector* pvVar6;
        char* pcVar7;
        ShareLightNormalSum local_58;
        LocationData local_48;
        long local_38;

        pSVar3 = (ShareLightCache*)shared_ptr<ShareLightCache>::operator->((shared_ptr<ShareLightCache>*)field_16);
        this_01 = (vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>*)pSVar3->GetUniquePoints();
        pSVar4 = (ShareLightNormalSum*)eastl::vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>::size(this_01);
        param_1->reserve((ulong)pSVar4);
        pSVar3 = (ShareLightCache*)shared_ptr<ShareLightCache>::operator->((shared_ptr<ShareLightCache>*)field_16);
        this_02 = (Layout*)pSVar3->GetUniquePoints();
        lVar5 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_02);
        local_38 = this_02->end();
        if (lVar5 != local_38) {
            do {
                this_00 = (Layout*)(lVar5 + 12);
                pvVar6 = eastl::string::Layout::SSOBeginPtr(this_00, (type*)pSVar4);
                vVar1 = *pvVar6;
                pcVar7 = (char*)this_00->y();
                cVar2 = *pcVar7;
                pcVar7 = (char*)this_00->z();
                new (&local_48) rs2lib::worldmap::LocationData((int)(char)vVar1, (int)cVar2, (int)*pcVar7);
                pSVar4 = &local_58;
                ShareLightNormalSum::ShareLightNormalSum(pSVar4, local_48._0_8_, local_48.field_8, 1, 65535);
                param_1->push_back(pSVar4);
                lVar5 = lVar5 + 16;
            } while (lVar5 != local_38);
        }
    }

    // 0x1002f3bb0, 352 bytes, placed by class name and debug map
    // ShareLightOperation::SumNormalsFromRequest(ShareLightRequest const&, eastl::vector<ShareLightNormalSum, eastl::allocator>&, unsigned long const&) const
    void ShareLightOperation::SumNormalsFromRequest(ShareLightRequest* param_1, vector* param_2, ulong* param_3) {
        bool bVar1;
        ShareLightCache* pSVar2;
        hashtable<
            jag::math::Vector3T<int>, eastl::pair<jag::math::Vector3T<int> const, jag::math::Vector4T<int>>,
            eastl::allocator, eastl::use_first<eastl::pair<jag::math::Vector3T<int> const, jag::math::Vector4T<int>>>,
            eastl::equal_to<jag::math::Vector3T<int>>, eastl::hash<jag::math::Vector3T<int>>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* this_00;
        long lVar3;
        ulong uVar4;
        vector<ShareLightPointRSeven, eastl::allocator>* this_01;
        Vector3T* pVVar5;
        Vector3T<int>* this_02;
        short* psVar6;
        undefined4 extraout_EDX;
        undefined4 extraout_EDX_00;
        undefined4 extraout_var;
        undefined4 extraout_var_00;
        ulong uVar7;
        undefined1 auVar8[12];
        undefined8 local_80;
        undefined8 local_78;
        undefined1 local_70[12];
        ulong* local_60;
        hashtable<
            jag::math::Vector3T<int>, eastl::pair<jag::math::Vector3T<int> const, jag::math::Vector4T<int>>,
            eastl::allocator, eastl::use_first<eastl::pair<jag::math::Vector3T<int> const, jag::math::Vector4T<int>>>,
            eastl::equal_to<jag::math::Vector3T<int>>, eastl::hash<jag::math::Vector3T<int>>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* local_58;
        ShareLightOperation* local_50;
        undefined8 local_48;
        undefined8 uStack_40;

        local_60 = param_3;
        local_50 = this;
        pSVar2 = (ShareLightCache*)shared_ptr<ShareLightCache>::operator->((shared_ptr<ShareLightCache>*)param_1);
        this_00 = (hashtable<jag::math::Vector3T<int>,
                             eastl::pair<jag::math::Vector3T<int> const, jag::math::Vector4T<int>>, eastl::allocator,
                             eastl::use_first<eastl::pair<jag::math::Vector3T<int> const, jag::math::Vector4T<int>>>,
                             eastl::equal_to<jag::math::Vector3T<int>>, eastl::hash<jag::math::Vector3T<int>>,
                             eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
                             true, true>*)pSVar2->GetPointNormals();
        lVar3 = param_2->size();
        if (lVar3 != 0) {
            local_50 = (ShareLightOperation*)local_50->field_16;
            uVar7 = 0;
            local_58 = this_00;
            do {
                pSVar2 =
                    (ShareLightCache*)shared_ptr<ShareLightCache>::operator->((shared_ptr<ShareLightCache>*)local_50);
                this_01 = (vector<ShareLightPointRSeven, eastl::allocator>*)pSVar2->GetUniquePoints();
                pVVar5 = (Vector3T*)eastl::vector<ShareLightPointRSeven, eastl::allocator>::operator[](this_01, uVar7);
                auVar8 = jag::math::operator-(pVVar5, (Vector3T*)&param_1->field_16);
                local_48 = auVar8._0_8_;
                uStack_40 = CONCAT44(uStack_40._4_4_, auVar8._8_4_);
                local_80 = eastl::hashtable<
                    jag::math::Vector3T<int>, eastl::pair<jag::math::Vector3T<int> const, jag::math::Vector4T<int>>,
                    eastl::allocator,
                    eastl::use_first<eastl::pair<jag::math::Vector3T<int> const, jag::math::Vector4T<int>>>,
                    eastl::equal_to<jag::math::Vector3T<int>>, eastl::hash<jag::math::Vector3T<int>>,
                    eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                    true>::find(this_00, (Vector3T*)&local_48);
                local_78 = CONCAT44(extraout_var, extraout_EDX);
                local_48 = this_00->end();
                uStack_40 = CONCAT44(extraout_var_00, extraout_EDX_00);
                bVar1 = eastl::operator!=((eastl*)&local_80, (hashtable_iterator_base*)&local_48,
                                          (hashtable_iterator_base*)CONCAT44(extraout_var_00, extraout_EDX_00));
                if (bVar1) {
                    lVar3 = local_80.HeapBeginPtr();
                    local_48 = *(undefined8*)(lVar3 + 12);
                    uStack_40 = *(undefined8*)(lVar3 + 20);
                    this_02 = (Vector3T<int>*)eastl::vector<ShareLightNormalSum, eastl::allocator>::operator[](
                        (vector<ShareLightNormalSum, eastl::allocator>*)param_2, uVar7);
                    auVar8 = local_48.GetXYZ();
                    local_70 = auVar8;
                    jag::math::Vector3T<int>::operator+=(this_02, (Vector3T*)local_70);
                    psVar6 = (short*)local_48.qw();
                    *(short*)(this_02 + 12) = *(short*)(this_02 + 12) + *psVar6;
                    *(short*)(this_02 + 14) = (short)*local_60;
                    this_00 = local_58;
                }
                uVar7 = uVar7 + 1;
                uVar4 = param_2->size();
            } while (uVar7 < uVar4);
        }
    }

    // 0x1002f3d10, 320 bytes, placed by class name and debug map
    // ShareLightOperation::DegenerateFacesFromIteration(shared_ptr<jag::graphics::Model>&, eastl::vector<ShareLightNormalSum, eastl::allocator>&, unsigned long const&) const
    void ShareLightOperation::DegenerateFacesFromIteration(shared_ptr* param_1, vector* param_2, ulong* param_3) {
        ulong* puVar1;
        int iVar2;
        uint uVar3;
        Model* this_00;
        Layout* this_01;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_02;
        GeometryBatchInstance* this_03;
        GeometryBatch* this_04;
        vector<unsigned short, eastl::allocator>* pvVar4;
        ulong uVar5;
        undefined8 local_68;
        undefined8 local_60;
        undefined8 local_58;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* local_50;
        ulong* local_48;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* local_40;
        ulong local_38;

        local_38 = 0;
        local_48 = param_3;
        this_00 = (Model*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)param_1);
        this_01 = (Layout*)this_00->GetBatchList();
        this_02 = (unique_ptr<jag::graphics::GeometryBatchInstance,
                              MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_01);
        local_40 =
            (unique_ptr<jag::graphics::GeometryBatchInstance,
                        MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)this_01->end();
        if (this_02 != local_40) {
            do {
                local_50 = this_02;
                this_03 = (GeometryBatchInstance*)
                              std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                              MakeUniquePool<jag::graphics::GeometryBatchInstance,
                                                             3072>::UniquePoolDeleter>::operator->(this_02);
                this_04 = (GeometryBatch*)this_03->GetGeometryBatch();
                iVar2 = this_04->GetIndexCount();
                puVar1 = local_48;
                if (iVar2 != 0) {
                    uVar5 = 0;
                    do {
                        pvVar4 = (vector<unsigned short, eastl::allocator>*)this_04->GetVertexIndexBuffer();
                        local_68 = eastl::vector<unsigned short, eastl::allocator>::operator[](pvVar4, uVar5);
                        pvVar4 = (vector<unsigned short, eastl::allocator>*)this_04->GetVertexIndexBuffer();
                        local_60 = eastl::vector<unsigned short, eastl::allocator>::operator[](pvVar4, uVar5 + 1);
                        pvVar4 = (vector<unsigned short, eastl::allocator>*)this_04->GetVertexIndexBuffer();
                        local_58 = eastl::vector<unsigned short, eastl::allocator>::operator[](pvVar4, uVar5 + 2);
                        DegenerateFaceFromIteration(this, (array*)&local_68, &local_38, param_2, puVar1);
                        uVar3 = this_04->GetIndexCount();
                        uVar5 = uVar5 + 3;
                    } while (uVar5 < uVar3);
                }
                uVar3 = this_04->GetVertexCount();
                local_38 = local_38 + uVar3;
                this_02 = local_50 + 8;
            } while (this_02 != local_40);
        }
    }

    // 0x1002f3e50, 544 bytes, placed by class name and debug map
    // ShareLightOperation::ApplyAveragedNormals(shared_ptr<jag::graphics::Model>&, eastl::vector<ShareLightNormalSum, eastl::allocator>&) const
    void ShareLightOperation::ApplyAveragedNormals(shared_ptr* param_1, vector* param_2) {
        ulong uVar1;
        int iVar2;
        uint uVar3;
        Model* this_00;
        Layout* this_01;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_02;
        GeometryBatchInstance* this_03;
        GeometryBatch* this_04;
        vector<jag::graphics::GeometryBatchVertex, eastl::allocator>* pvVar4;
        long lVar5;
        char* pcVar6;
        ShareLightCache* this_05;
        vector<unsigned int, eastl::allocator>* this_06;
        uint* puVar7;
        Layout* this_07;
        vector* pvVar8;
        int* piVar9;
        type* ptVar10;
        ulong uVar11;
        undefined1 local_a8[32];
        vector* local_88;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* local_80;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* local_78;
        Vector3T<signed char> local_70[8];
        long local_68;
        ShareLightOperation* local_60;
        int local_58[4];
        int local_48[3];
        int local_3c[3];

        local_88 = param_2;
        local_60 = this;
        this_00 = (Model*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)param_1);
        this_01 = (Layout*)this_00->GetBatchList();
        this_02 = (unique_ptr<jag::graphics::GeometryBatchInstance,
                              MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_01);
        local_78 =
            (unique_ptr<jag::graphics::GeometryBatchInstance,
                        MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)this_01->end();
        if (this_02 != local_78) {
            local_60 = (ShareLightOperation*)local_60->field_16;
            local_68 = 0;
            do {
                this_03 = (GeometryBatchInstance*)
                              std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                              MakeUniquePool<jag::graphics::GeometryBatchInstance,
                                                             3072>::UniquePoolDeleter>::operator->(this_02);
                this_04 = (GeometryBatch*)this_03->GetGeometryBatch();
                iVar2 = this_04->GetVertexCount();
                if (iVar2 != 0) {
                    uVar11 = 0;
                    local_80 = this_02;
                    do {
                        pvVar4 = (vector<jag::graphics::GeometryBatchVertex, eastl::allocator>*)
                                     this_04->GetVertexDataBuffer();
                        lVar5 = eastl::vector<jag::graphics::GeometryBatchVertex, eastl::allocator>::operator[](pvVar4,
                                                                                                                uVar11);
                        pcVar6 = (char*)((lVar5 + 8))->y();
                        if (*pcVar6 == '\0') {
                            uVar1 = local_68 + uVar11;
                            new (local_a8) ShareLightPointRSeven(this_04, uVar11);
                            this_05 = (ShareLightCache*)shared_ptr<ShareLightCache>::operator->(
                                (shared_ptr<ShareLightCache>*)local_60);
                            this_06 = (vector<unsigned int, eastl::allocator>*)this_05->GetVertexToPointMap();
                            puVar7 = (uint*)eastl::vector<unsigned int, eastl::allocator>::operator[](this_06, uVar1);
                            ptVar10 = (type*)(ulong)*puVar7;
                            this_07 = (Layout*)eastl::vector<ShareLightNormalSum, eastl::allocator>::operator[](
                                (vector<ShareLightNormalSum, eastl::allocator>*)local_88, (ulong)ptVar10);
                            if (1 < *(ushort*)(this_07 + 12)) {
                                pvVar8 = eastl::string::Layout::SSOBeginPtr(this_07, ptVar10);
                                local_58[0] = *(int*)pvVar8 / (int)(uint) * (ushort*)(this_07 + 12);
                                local_58[1] = 4294967168;
                                local_58[2] = 127;
                                piVar9 = std::clamp<int>(local_58, local_58 + 1, local_58 + 2);
                                local_3c[2] = *piVar9;
                                piVar9 = (int*)this_07->y();
                                local_58[3] = *piVar9 / (int)(uint) * (ushort*)(this_07 + 12);
                                local_48[0] = -128;
                                local_48[1] = 127;
                                piVar9 = std::clamp<int>(local_58 + 3, local_48, local_48 + 1);
                                iVar2 = *piVar9;
                                piVar9 = (int*)this_07->second();
                                local_48[2] = *piVar9 / (int)(uint) * (ushort*)(this_07 + 12);
                                local_3c[0] = -128;
                                local_3c[1] = 127;
                                piVar9 = std::clamp<int>(local_48 + 2, local_3c, local_3c + 1);
                                new ((local_a8 + 16)) rs2lib::worldmap::LocationData(local_3c[2], iVar2, *piVar9);
                                jag::math::Vector3T<signed char>::Vector3T<int>(local_70, (Vector3T*)(local_a8 + 16));
                                pvVar4 = (vector<jag::graphics::GeometryBatchVertex, eastl::allocator>*)
                                             this_04->GetVertexDataBuffer();
                                lVar5 = eastl::vector<jag::graphics::GeometryBatchVertex, eastl::allocator>::operator[](
                                    pvVar4, uVar11);
                                jag::math::Vector3T<unsigned char>::operator=((Vector3T<unsigned char>*)(lVar5 + 4),
                                                                              (Vector3T*)local_70);
                            }
                        }
                        uVar11 = uVar11 + 1;
                        uVar3 = this_04->GetVertexCount();
                    } while (uVar11 < uVar3);
                    local_68 = local_68 + uVar11;
                    this_02 = local_80;
                }
                this_02 = this_02 + 8;
            } while (this_02 != local_78);
        }
    }

    // 0x1002f4130, 304 bytes, placed by class name
    // ShareLightOperation::DegenerateFaceFromIteration(std::array<unsigned short*, 3ul>&, unsigned long const&, eastl::vector<ShareLightNormalSum, eastl::allocator>&, unsigned long const&) const
    /* ShareLightOperation::DegenerateFaceFromIteration(std::array<unsigned
   short*, 3ul>&, unsigned long const&, eastl::vector<ShareLightNormalSum,
   eastl::allocator>&, unsigned long const&) const */

    void ShareLightOperation::DegenerateFaceFromIteration(array* param_1, ulong* param_2, vector* param_3,
                                                          ulong* param_4) {
        ushort* puVar1;
        bool bVar2;
        undefined8* puVar3;
        undefined8* puVar4;
        undefined8* puVar5;
        ShareLightCache* this_00;
        vector<unsigned int, eastl::allocator>* this_01;
        uint* puVar6;
        long lVar7;
        undefined8* puVar8;

        puVar4 = (undefined8*)param_1->begin();
        puVar5 = (undefined8*)param_1->end();
        if (puVar4 == puVar5) {
            bVar2 = true;
        } else {
            puVar3 = puVar4;
            while (true) {
                puVar8 = puVar3 + 1;
                puVar1 = (ushort*)*puVar3;
                this_00 =
                    (ShareLightCache*)shared_ptr<ShareLightCache>::operator->((shared_ptr<ShareLightCache>*)field_16);
                this_01 = (vector<unsigned int, eastl::allocator>*)this_00->GetVertexToPointMap();
                puVar6 = (uint*)eastl::vector<unsigned int, eastl::allocator>::operator[](this_01,
                                                                                          (ulong)*puVar1 + *param_2);
                if ((ulong)*puVar6 == 4294967295)
                    break;
                lVar7 = eastl::vector<ShareLightNormalSum, eastl::allocator>::operator[](
                    (vector<ShareLightNormalSum, eastl::allocator>*)param_3, (ulong)*puVar6);
                bVar2 = false;
                if ((*param_4 != (ulong) * (ushort*)(lVar7 + 14)) || (bVar2 = true, puVar3 = puVar8, puVar8 == puVar5))
                    goto LAB_1002f4221;
            }
            bVar2 = false;
        }
    LAB_1002f4221:
        if (bVar2) {
            for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
                *(undefined2*)*puVar4 = 0;
            }
        }
    }

    // 0x1002f4450, 192 bytes, placed by class name
    // ShareLightOperation::IsEqual(Operation const&) const
    bool ShareLightOperation::IsEqual(Operation* param_1) {
        undefined1* this_00;
        bool bVar1;
        bool bVar2;
        bool bVar3;
        ShareLightCache* pSVar6;
        ShareLightCache* pSVar7;

        if (param_1->GetPos() == 10) {
            this_00 = field_16;
            bVar2 = false;
            bVar1 = operator==((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
            if (bVar1) {
                bVar2 = operator==((shared_ptr*)(param_1 + 1), (_func_decltype_nullptr*)0);
            }
            bVar3 = false;
            bVar1 = operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
            if (bVar1) {
                bVar3 = operator!=((shared_ptr*)(param_1 + 1), (_func_decltype_nullptr*)0);
            }
            if (bVar2 != false) {
            LAB_1002f44bc:
                bVar1 = eastl::operator==((vector*)&field_32, (vector*)(param_1 + 2));
                return bVar1;
            }
            if (bVar3 != false) {
                pSVar6 =
                    (ShareLightCache*)shared_ptr<ShareLightCache>::operator*((shared_ptr<ShareLightCache>*)this_00);
                pSVar7 = (ShareLightCache*)shared_ptr<ShareLightCache>::operator*(
                    (shared_ptr<ShareLightCache>*)(param_1 + 1));
                if (dash3d::operator==(pSVar6, pSVar7) != '\0')
                    goto LAB_1002f44bc;
            }
        }
        return false;
    }

} // namespace jag::oldscape::dash3d

// 0x1002f2de0, 16 bytes, placed by debug map only (low confidence)
// round(float)
void round(float param_1) {
    _roundf();
}

namespace jag::math {
    // 0x1002f36a0, 32 bytes, inline, placed by debug map only (low confidence)
    // bool operator==<signed char>(Vector3T<signed char> const&, Vector3T<signed char> const&)
    /* bool TEMPNAMEPLACEHOLDERVALUE(Vector3T<signed char> const&,
   Vector3T<signed char> const&) */

    bool operator==(Vector3T* param_1, Vector3T* param_2) {
        return param_1[2] == param_2[2] && *(short*)param_1 == *(short*)param_2;
    }

} // namespace jag::math
