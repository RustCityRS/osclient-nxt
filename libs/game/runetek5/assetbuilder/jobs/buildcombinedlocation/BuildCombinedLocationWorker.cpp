// libs/game/runetek5/assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationWorker.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game {
    class BuildCombinedLocationWorker {
    public:
        // virtual methods in vtable order
        virtual ~BuildCombinedLocationWorker();
        virtual uint64_t GetWorkerJobType() const;
        virtual uint8_t* Service(int arg1);
        BuildCombinedLocationWorker();
        unsigned int
        GetPerModelConstructedHash(const BuildCombinedLocationRequest_Location& buildCombinedLocationRequest_Location);
        void AddSoundsToLists(BuildCombinedLocationRequest_Location& buildCombinedLocationRequest_Location,
                              eastl::vector<LocationAudioProperties>& locationAudioPropertiess);
        void GenerateCombinedGroups(
            eastl::vector<BuildCombinedLocationResult_CombinableGroup>& buildCombinedLocationResult_CombinableGroups,
            const shared_ptr<BuildCombinedLocationResultData>& buildCombinedLocationResultData);
        void
        UploadCombinedLocations(const shared_ptr<BuildCombinedLocationResultData>& buildCombinedLocationResultData);
        void GenerateIndividualLocations(
            eastl::vector<BuildCombinedLocationRequest_Location*>& buildCombinedLocationRequest_Locations,
            const shared_ptr<BuildCombinedLocationResultData>& buildCombinedLocationResultData);
        void HillChangeLocation(BuildCombinedLocationRequest_Location& buildCombinedLocationRequest_Location,
                                graphics::Model& model, Rotation90 rotation90);
        void
        HillChangeUncombinableLocation(BuildCombinedLocationRequest_Location& buildCombinedLocationRequest_Location,
                                       const shared_ptr<graphics::Model>& model, Rotation90 rotation90);

    private:
        shared_ptr field_8;
        uint8_t _unknown_24[8];
    };

    // 0x100269c10: BuildCombinedLocationWorker::GetWorkerJobType() const has the same machine code as oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString::GetID() const

    // 0x1006339a0: BuildCombinedLocationWorker::~BuildCombinedLocationWorker() has the same machine code as BuildSingleLocationWorker::~BuildSingleLocationWorker()

    // 0x10064cab0
    BuildCombinedLocationWorker::BuildCombinedLocationWorker() : AssetWorker() {}

    // 0x10064cae0
    unsigned int BuildCombinedLocationWorker::GetPerModelConstructedHash(
        const BuildCombinedLocationRequest_Location& buildCombinedLocationRequest_Location) {
        uint8_t bVar2 = buildCombinedLocationRequest_Location.field_48->GetShape();
        uint8_t bVar1 = *(uint8_t*)((long)&buildCombinedLocationRequest_Location.field_100 + 6);
        uint8_t bVar3 = buildCombinedLocationRequest_Location.field_48->GetRot();
        return *(int*)buildCombinedLocationRequest_Location << 8 | (unsigned int)bVar3 << 6 | (unsigned int)bVar2 |
               (unsigned int)bVar1 << 5;
    }

    // 0x10064cb30
    uint8_t* BuildCombinedLocationWorker::Service(int arg1) {
        vector<LocationAudioProperties>* pvVar1;
        bool bVar2;
        vector<BuildCombinedLocationResult_CombinableGroup>* this_00;
        uint8_t uVar4;
        int iVar5;
        long lVar6;
        BuildCombinedLocationRequest_Location* pBVar7;
        shared_ptr* this_01;
        Model* pMVar8;
        GeometryBatch* this_02;
        unique_ptr<graphics::GeometryBatchInstance,
                   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_03;
        unique_ptr<graphics::GeometryBatchInstance,
                   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar9;
        GeometryBatchInstance* pGVar10;
        vector<LocationAudioProperties>* pvVar11;
        vector<LocationAudioProperties>* pvVar12;
        uint64_t uVar14;
        int* piVar15;
        uint8_t* puVar16;
        GeometryBatch* pGVar17;
        BuildCombinedLocationWorker* pBVar18;
        unsigned int uVar19;
        int iVar20;
        uint8_t bVar21;
        vector<BuildCombinedLocationRequest_Location*, BucketAllocatorEASTL> local_d8[24];
        BuildCombinedLocationRequest_Location* local_c0;
        BuildCombinedLocationRequest_Location* local_b8;
        hash_map<unsigned int, BuildCombinedLocationRequestData_PerModelData>* local_b0;
        uint8_t* local_a8;
        scoped_lock<std::mutex> local_98;
        BuildCombinedLocationWorker local_90;
        unsigned int local_6c;
        shared_ptr<BuildCombinedLocationResultData> local_68;
        shared_ptr* local_58;
        vector<BuildCombinedLocationResult_CombinableGroup>* local_50;
        unsigned int local_44;
        BuildCombinedLocationRequest_Location* local_40;
        char local_32;
        uint8_t local_31;

        char cVar3 = field_8->operator_cast_to_bool();
        if (!cVar3) {
            field_24.reset();
            puVar16 = DataStatus::READY;
        } else {
            lVar6 = field_8->end();
            local_98 = std::scoped_lock(*((lVar6 + 112)));
            MakeSharedPool<BuildCombinedLocationResultData, 96>::MakeShared<>();
            local_50 = (vector<BuildCombinedLocationResult_CombinableGroup>*)*local_68;
            new (local_d8) eastl::vector<BuildCombinedLocationRequest_Location*, BucketAllocatorEASTL>();
            local_50->reserve(16);
            this_02 = (GeometryBatch*)(lVar6 + 24);
            pBVar7 = (BuildCombinedLocationRequest_Location*)this_02->HeapBeginPtr();
            local_b8 = (BuildCombinedLocationRequest_Location*)this_02->end();
            bVar21 = pBVar7 == local_b8;
            if (!bVar21) {
                local_b0 = (hash_map<unsigned int, BuildCombinedLocationRequestData_PerModelData>*)(lVar6 + 56);
                do {
                    local_40 = pBVar7;
                    local_6c = GetPerModelConstructedHash((BuildCombinedLocationWorker*)this_02, pBVar7);
                    this_01 = (shared_ptr*)(*local_b0)[local_6c];
                    local_32 = shared_ptr::operator_cast_to_bool(this_01);
                    if (local_32 == '\0') {
                        this_02 = (GeometryBatch*)logger::default_logger();
                        this_02->Log(false, 2,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                     "runetek5/assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationWorker.cpp",
                                     57, "%s: Passed location without corresponding model data", "Service");
                        local_a8 = DataStatus::MISSING;
                    } else {
                        pMVar8 = (Model*)(*this_01).operator->();
                        cVar3 = pMVar8->GetConstructedState();
                        if (cVar3 != '\x03') {
                            LogAssert(
                                "model->GetConstructedState() == graphics::ModelConstructedState::DATA_MAT_AND_ATLAS",
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationWorker.cpp",
                                60, nullptr);
                        }
                        uVar19 = -(unsigned int)(this_01[1].field_4 == '\0') | (unsigned int)this_01[1].field_8;
                        local_58 = this_01;
                        local_31 = bVar21;
                        pMVar8 = (Model*)(*this_01).operator->();
                        this_02 = (GeometryBatch*)pMVar8->GetBatchList();
                        this_03 =
                            (unique_ptr<graphics::GeometryBatchInstance,
                                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                                this_02->HeapBeginPtr();
                        puVar9 = (unique_ptr<graphics::GeometryBatchInstance,
                                             MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                                     this_02->end();
                        if (this_03 == puVar9) {
                            iVar20 = 0;
                        } else {
                            iVar20 = 0;
                            do {
                                pGVar10 = (GeometryBatchInstance*)(*this_03).operator->();
                                ((hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                            eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                            eastl::equal_to<long long>, eastl::hash<long long>,
                                            eastl::mod_range_hashing, eastl::default_ranged_hash,
                                            eastl::prime_rehash_policy, false, true, true>*)pGVar10->GetMaterial())
                                    ->size();
                                pGVar10 = (GeometryBatchInstance*)(*this_03).operator->();
                                this_02 = (GeometryBatch*)pGVar10->GetGeometryBatch();
                                iVar5 = this_02->GetIndexCount();
                                iVar20 = iVar20 + iVar5;
                                this_03 = this_03 + 8;
                            } while (this_03 != puVar9);
                        }
                        pBVar7 = local_40;
                        local_40->field_280 = 1;
                        if (*(char*)((long)&local_40->field_100 + 4) != '\0' || local_58[1].field_5 != '\0') {
                            local_90._vptr = (BuildCombinedLocationWorker_vtbl*)local_40;
                            this_02 = (GeometryBatch*)local_d8;
                            this_02->push_back(local_90);
                            pBVar7->field_280 = 0;
                        }
                        this_00 = local_50;
                        if (pBVar7->field_280 == 0) {
                        LAB_10064cf60:
                            bVar21 = local_31;
                        } else {
                            pvVar11 = (vector<LocationAudioProperties>*)local_50->HeapBeginPtr();
                            pvVar12 = (vector<LocationAudioProperties>*)this_00->end();
                            if (pvVar11 == pvVar12) {
                                local_44 = 0;
                            } else {
                                pvVar11 = pvVar11 + 56;
                                local_44 = 0;
                                do {
                                    this_02 = (GeometryBatch*)(pvVar11 - 32);
                                    pGVar17 = this_02;
                                    if (((this_02->size() < 300) &&
                                         ((((uVar19 == 4294967295 || (*(unsigned int*)(pvVar11 - 44) == 4294967295)) ||
                                            (uVar19 == *(unsigned int*)(pvVar11 - 44))) &&
                                           ((*(vector<LocationAudioProperties>*)((long)&local_40->field_100 + 5) ==
                                                 pvVar11[-38] &&
                                             (*(vector<LocationAudioProperties>*)((long)&local_40->field_100 + 1) ==
                                              pvVar11[-37])))))) &&
                                        ((unsigned int)(*(int*)(pvVar11 - 36) + iVar20) < 65536)) {
                                        *(int*)(pvVar11 - 36) = *(int*)(pvVar11 - 36) + iVar20;
                                        if (*(int*)(pvVar11 - 44) == -1) {
                                            *(unsigned int*)(pvVar11 - 44) = uVar19;
                                        }
                                        local_90._vptr = (BuildCombinedLocationWorker_vtbl*)local_40;
                                        this_02->push_back(local_90);
                                        bVar2 = true;
                                        uVar14 =
                                            AddSoundsToLists((BuildCombinedLocationWorker*)this_02, local_40, pvVar11);
                                        local_44 =
                                            (unsigned int)(((uint64_t)((int64_t)((unsigned long)uVar14 >> 8)) << 8) |
                                                           (uint8_t)1);
                                    } else {
                                        bVar2 = false;
                                        this_02 = pGVar17;
                                    }
                                } while ((!bVar2) &&
                                         (pvVar1 = pvVar11 + 32, pvVar11 = pvVar11 + 88, pvVar1 != pvVar12));
                                if ((local_44 & 1) != 0)
                                    goto LAB_10064cf60;
                            }
                            pBVar18 = &local_90;
                            local_90 = eastl::vector<LocationAudioProperties>();
                            bVar21 = local_31;
                            AddSoundsToLists(pBVar18, local_40, (vector<LocationAudioProperties>*)&local_90);
                            piVar15 = (int*)local_50->push_back();
                            *piVar15 = (int)local_40->field_4;
                            piVar15[1] = (int)(char)local_40->field_5;
                            piVar15[2] = (int)*(char*)((long)&local_40->field_100 + 2);
                            piVar15[3] = uVar19;
                            pMVar8 = (Model*)(*local_58).operator->();
                            uVar4 = pMVar8->HasOpaqueOrTestedFaces();
                            *(uint8_t*)(piVar15 + 4) = uVar4;
                            pMVar8 = (Model*)(*local_58).operator->();
                            uVar4 = pMVar8->HasAlphaBlendedFaces();
                            *(uint8_t*)((long)piVar15 + 17) = uVar4;
                            *(uint8_t*)((long)piVar15 + 18) = *(uint8_t*)((long)&local_40->field_100 + 5);
                            *(uint8_t*)((long)piVar15 + 19) = *(uint8_t*)((long)&local_40->field_100 + 1);
                            piVar15[5] = iVar20;
                            (*((piVar15 + 14))) = local_90;
                            local_c0 = local_40;
                            ((piVar15 + 6))->push_back(local_c0);
                            this_02 = (GeometryBatch*)&local_90;
                            this_02->~vector();
                        }
                    }
                    if (local_32 == '\0')
                        break;
                    pBVar7 = (BuildCombinedLocationRequest_Location*)&local_40[1].field_7;
                    bVar21 = pBVar7 == local_b8;
                } while (!bVar21);
            }
            pBVar18 = this;
            puVar16 = local_a8;
            if ((bVar21 & 1) != 0) {
                GenerateCombinedGroups(*local_50, local_68);
                UploadCombinedLocations(pBVar18, &local_68);
                GenerateIndividualLocations(
                    pBVar18, (vector<BuildCombinedLocationRequest_Location*, BucketAllocatorEASTL>*)local_d8,
                    &local_68);
                static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(
                    (shared_ptr<oldscape::ClientNpc>*)&local_90);
                pBVar18->field_24 = local_90;
                puVar16 = DataStatus::READY;
            }
        }
        return puVar16;
    }

    // 0x10064d330
    void BuildCombinedLocationWorker::AddSoundsToLists(
        BuildCombinedLocationRequest_Location& buildCombinedLocationRequest_Location,
        eastl::vector<LocationAudioProperties>& locationAudioPropertiess) {
        bool cVar1;

        if ((*(int*)&buildCombinedLocationRequest_Location.field_184 < 1) &&
            (cVar1 = buildCombinedLocationRequest_Location.field_232.empty(), cVar1)) {
            return;
        }
        auto puVar2 = locationAudioPropertiess.push_back();
        *puVar2 = *(uint32_t*)&buildCombinedLocationRequest_Location.field_184;
        *(uint16_t*)(puVar2 + 1) = *(uint16_t*)((long)&buildCombinedLocationRequest_Location.field_184 + 4);
        *(uint16_t*)((long)puVar2 + 6) = *(uint16_t*)((long)&buildCombinedLocationRequest_Location.field_184 + 6);
        *(uint16_t*)(puVar2 + 2) = buildCombinedLocationRequest_Location.field_192;
        puVar2[3] = *(uint32_t*)&buildCombinedLocationRequest_Location.field_196;
        puVar2[4] = *(uint32_t*)((long)&buildCombinedLocationRequest_Location.field_196 + 4);
        *(uint8_t*)(puVar2 + 5) = *(uint8_t*)&buildCombinedLocationRequest_Location.field_204;
        ColourHSL local_30((float)*(int*)&buildCombinedLocationRequest_Location.field_32, 0.0,
                           (float)*(int*)((long)&buildCombinedLocationRequest_Location.field_32 + 4));
        ((puVar2 + 15))->SetXYZ(local_30);
        puVar2[18] = (int)buildCombinedLocationRequest_Location.field_4;
        cVar1 = buildCombinedLocationRequest_Location.field_232.empty();
        if (!cVar1) {
            (*((puVar2 + 6))) = buildCombinedLocationRequest_Location.field_232;
            puVar2[12] = *(uint32_t*)&buildCombinedLocationRequest_Location.field_256;
            puVar2[13] = *(uint32_t*)((long)&buildCombinedLocationRequest_Location.field_256 + 4);
            *(uint8_t*)(puVar2 + 14) = buildCombinedLocationRequest_Location.field_264;
        }
    }

    // 0x10064d520
    void BuildCombinedLocationWorker::GenerateCombinedGroups(
        eastl::vector<BuildCombinedLocationResult_CombinableGroup>& buildCombinedLocationResult_CombinableGroups,
        const shared_ptr<BuildCombinedLocationResultData>& buildCombinedLocationResultData) {
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        unsigned char arg3;
        short sVar1;
        unsigned short uVar2;
        BuildCombinedLocationRequest_Location* buildCombinedLocationRequest_Location;
        LocData* this_00;
        char cVar3;
        uint8_t uVar5;
        uint8_t bVar6;
        uint32_t uVar7;
        int iVar8;
        LocShape LVar9;
        unsigned long uVar12;
        uint64_t* puVar13;
        Logger* this_01;
        char* pcVar14;
        Model* pMVar15;
        BuildCombinedLocationWorker* pBVar16;
        QuaternionT<float>* quaternion;
        short* psVar17;
        int* piVar18;
        NXTPixToolkit* this_02;
        AABB* aabb;
        uint8_t* puVar19;
        short sVar20;
        unsigned int uVar21;
        BuildCombinedLocationWorker* this_03;
        unsigned int uVar22;
        unsigned long in_stack_fffffffffffffe10;
        uint32_t uVar23;
        Vector3T<float>* in_stack_fffffffffffffe18;
        ReturnValue local_1d8;
        ColourHSL local_170;
        vector<BuildCombinedLocationResult_GroupSection> local_160;
        BuildCombinedLocationWorker* local_128;
        TextureAtlasQuality* local_120;
        uint8_t local_108[24];
        float local_d4;
        int local_d0;
        int local_cc;
        unsigned long local_c8;
        LocData* local_c0;
        LocShapes local_ac;
        float local_a8;
        float local_a4;
        BuildCombinedLocationWorker local_a0;

        long local_f0 = field_8->end();
        long lVar10 = buildCombinedLocationResultData;
        unsigned long uVar11 = buildCombinedLocationResult_CombinableGroups.size();
        vector<BuildCombinedLocationResult_CombinedLocation>* local_110 =
            (vector<BuildCombinedLocationResult_CombinedLocation>*)(lVar10 + 32);
        ((lVar10 + 32))->reserve(uVar11);
        vector<std::unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>, BucketAllocatorEASTL> local_140;
        uVar11 = buildCombinedLocationResult_CombinableGroups.size();
        local_140.reserve(uVar11);
        shared_ptr local_e8;
        ModelCombineHelper local_1c8;
        lVar10 = buildCombinedLocationResult_CombinableGroups.HeapBeginPtr();
        long local_118 = buildCombinedLocationResult_CombinableGroups.end();
        long local_b8 = lVar10;
        if (lVar10 != local_118) {
            local_108._16_8_ = local_f0 + 56;
            local_120 = (TextureAtlasQuality*)(local_f0 + 176);
            do {
                local_160 = eastl::vector<BuildCombinedLocationResult_GroupSection>();
                pBVar16 = (BuildCombinedLocationWorker*)(local_b8 + 24);
                uVar11 = pBVar16->size();
                local_160.reserve(uVar11);
                lVar10 = pBVar16->size();
                if (lVar10 != 0) {
                    local_c8 = 1;
                    uVar11 = 0;
                    local_128 = pBVar16;
                    do {
                        puVar13 = (uint64_t*)(*pBVar16)[uVar11];
                        uVar23 = (uint32_t)(in_stack_fffffffffffffe10 >> 32);
                        buildCombinedLocationRequest_Location = (BuildCombinedLocationRequest_Location*)*puVar13;
                        if (*(char*)((long)&buildCombinedLocationRequest_Location->field_100 + 7) == '\0') {
                        LAB_10064d70e:
                            local_a0[0]._vptr._0_4_ =
                                GetPerModelConstructedHash(pBVar16, buildCombinedLocationRequest_Location);
                            local_1d8 = local_108._16_8_->find(local_a0);
                            local_a0 = local_108._16_8_->end();
                            cVar3 = local_1d8 == local_a0;
                            if (cVar3) {
                                new (local_108) CoordFine(
                                    (int)buildCombinedLocationRequest_Location->field_4,
                                    (float)*(int*)&buildCombinedLocationRequest_Location->field_32,
                                    (float)*(int*)((long)&buildCombinedLocationRequest_Location->field_32 + 4));
                                pBVar16 = &local_a0;
                                new (pBVar16) eastl::fixed_string<char, 64>();
                                this_01 = logger::default_logger();
                                uVar7 = GetPerModelConstructedHash(pBVar16, buildCombinedLocationRequest_Location);
                                pcVar14 = local_108->ToString<64, true>(local_a0);
                                this_01->Log(
                                    false, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationWorker.cpp",
                                    249, "Model not present at index %u (hash: %u, location: %s)", (int)local_c8 - 1,
                                    (((uint64_t)uVar23 << 32) | (uint32_t)uVar7), pcVar14);
                            }
                            lVar10 = local_1d8.HeapBeginPtr();
                            midiPlayerMainThread = (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)(lVar10 + 8);
                            if (!*midiPlayerMainThread != nullptr) {
                                LogAssert(
                                    "perModelData.m_model != nullptr",
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationWorker.cpp",
                                    253, nullptr);
                            }
                            pMVar15 = (Model*)(*midiPlayerMainThread).operator->();
                            cVar3 = pMVar15->GetConstructedState();
                            if (cVar3 != '\x03') {
                                LogAssert(
                                    "perModelData.m_model->GetConstructedState() == "
                                    "graphics::ModelConstructedState::DATA_MAT_AND_ATLAS",
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationWorker.cpp",
                                    254, nullptr);
                            }
                            iVar8 = buildCombinedLocationRequest_Location->MakeExternalID();
                            pMVar15 = (Model*)(*midiPlayerMainThread).operator->();
                            cVar3 = pMVar15->GetConstructedState();
                            if (cVar3 != '\x03') {
                                LogAssert(
                                    "perModelData.m_model->GetConstructedState() == "
                                    "graphics::ModelConstructedState::DATA_MAT_AND_ATLAS",
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationWorker.cpp",
                                    259, nullptr);
                            }
                            pMVar15 = (Model*)**midiPlayerMainThread;
                            local_108._0_4_ = 1.4013e-45;
                            bucket_make_unique<graphics::Model, graphics::Model&, graphics::ModelCopyType>(
                                &local_a0, pMVar15, (ModelCopyType*)local_108);
                            pBVar16 = (BuildCombinedLocationWorker*)
                                eastl::vector<std::unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>,
                                              BucketAllocatorEASTL>::
                                    emplace_back<std::unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>>(
                                        &local_140, &local_a0);
                            pMVar15 = (Model*)(*pBVar16).operator->();
                            pMVar15->StartTransform();
                            pMVar15 = (Model*)(*pBVar16).operator->();
                            pMVar15->SetExternalID(iVar8, true);
                            pMVar15 = (Model*)(*pBVar16).operator->();
                            pMVar15->SetSavedModelHash(*(unsigned int*)(lVar10 + 24));
                            pMVar15 = (Model*)(*pBVar16).operator->();
                            puVar19 = buildCombinedLocationRequest_Location->field_48;
                            lVar10 = puVar19->y();
                            pMVar15->Scale(*((lVar10 + 32)));
                            local_cc = iVar8;
                            uVar5 = puVar19->GetShape();
                            local_a8 = (float)(((uint32_t)local_a8._1_3_ << 8) | (uint8_t)uVar5);
                            LVar9 = puVar19->GetRot();
                            local_a4 = (float)(int)(short)buildCombinedLocationRequest_Location->field_176;
                            bVar6 = buildCombinedLocationRequest_Location->field_178;
                            local_c0 = (LocData*)puVar19;
                            lVar10 = puVar19->y();
                            this_00 = local_c0;
                            lVar10 = lVar10 + 32;
                            local_ac.GetShapeOffsetAndRotation(
                                local_d4, local_d0, *((int*)(unsigned long)local_a8._0_1_), LVar9 & 255,
                                (Rotation90)local_a4, (unsigned int)bVar6, (uint8_t)lVar10, *in_stack_fffffffffffffe18);
                            uVar23 = (uint32_t)((unsigned long)lVar10 >> 32);
                            local_a4 = local_ac.field_0;
                            bVar6 = this_00->GetRot();
                            if ((float)bVar6 * 1.5707964f == local_a4) {
                                cVar3 = this_00->GetRot();
                                if (cVar3) {
                                    pMVar15 = (Model*)(*pBVar16).operator->();
                                    bVar6 = this_00->GetRot();
                                    pMVar15->Rotate90((unsigned int)bVar6, true);
                                }
                            } else {
                                local_a0 = math::QuaternionT<float>();
                                local_a0.FromAxisAngle(*PTR_UP_100ee66d0, local_ac.field_0);
                                pMVar15 = (Model*)(*pBVar16).operator->();
                                pMVar15->Rotate(local_a0, true);
                            }
                            if ((*(char*)((long)&buildCombinedLocationRequest_Location->field_113 + 7) == '\0') &&
                                (*(int*)&buildCombinedLocationRequest_Location->field_112 != 0)) {
                                cVar3 = ((buildCombinedLocationRequest_Location->field_128 + 24))->empty();
                                if (cVar3) {
                                    cVar3 = buildCombinedLocationRequest_Location->field_128->empty();
                                    if (cVar3)
                                        goto LAB_10064dab0;
                                }
                                this_03 = pBVar16;
                                pMVar15 = (Model*)**pBVar16;
                                HillChangeLocation(this_03, buildCombinedLocationRequest_Location, pMVar15, 0);
                            }
                        LAB_10064dab0:
                            new (local_108) math::ColourHSL((float)(int)local_d4, 0.0, (float)local_d0);
                            pMVar15 = (Model*)(*pBVar16).operator->();
                            pMVar15->Translate(*local_108);
                            pMVar15 = (Model*)(*pBVar16).operator->();
                            quaternion = (QuaternionT<float>*)this_00->y();
                            pMVar15->Rotate(*quaternion, true);
                            puVar19 = &buildCombinedLocationRequest_Location->field_10;
                            psVar17 = (short*)puVar19->SSOBeginPtr();
                            local_a4 = (float)(int)*psVar17;
                            psVar17 = (short*)puVar19->z();
                            sVar1 = *psVar17;
                            psVar17 = (short*)buildCombinedLocationRequest_Location->field_16.z();
                            local_a8 = (float)((int)*psVar17 + (int)sVar1);
                            psVar17 = (short*)puVar19->y();
                            local_170 = math::ColourHSL(local_a4, local_a8, (float)(int)*psVar17);
                            lVar10 = local_c0->y();
                            local_170 += (*((lVar10 + 16)));
                            pMVar15 = (Model*)(*pBVar16).operator->();
                            pMVar15->Translate(local_170);
                            uVar21 = *(unsigned int*)&buildCombinedLocationRequest_Location->field_40;
                            uVar22 = uVar21 + 127;
                            if (-1 < (short)uVar21) {
                                uVar22 = uVar21;
                            }
                            uVar2 = *(unsigned short*)((long)&buildCombinedLocationRequest_Location->field_40 + 2);
                            uVar21 = uVar2 + 127;
                            if (-1 < (short)uVar2) {
                                uVar21 = (unsigned int)uVar2;
                            }
                            pMVar15 = (Model*)(*pBVar16).operator->();
                            arg3 = *(unsigned char*)((long)&buildCombinedLocationRequest_Location->field_8 + 1);
                            in_stack_fffffffffffffe10 =
                                (((uint64_t)uVar23 << 32) | (uint32_t)(uVar21 >> 7)) & 18446744069414584575;
                            pMVar15->BakeTile(buildCombinedLocationRequest_Location->field_5,
                                              *(unsigned char*)&buildCombinedLocationRequest_Location->field_8, arg3,
                                              buildCombinedLocationRequest_Location->field_6 +
                                                  *(unsigned char*)&buildCombinedLocationRequest_Location->field_8,
                                              buildCombinedLocationRequest_Location->field_7 + arg3,
                                              (unsigned char)(uVar22 >> 7), (unsigned char)in_stack_fffffffffffffe10);
                            iVar8 = local_cc;
                            pMVar15 = (Model*)(*pBVar16).operator->();
                            pMVar15->EndTransform(true);
                            pMVar15 = (Model*)(*pBVar16).operator->();
                            pMVar15->UpdateAABB();
                            cVar3 = shared_ptr::operator_cast_to_bool(&local_e8);
                            if (!cVar3) {
                                make_shared<graphics::Model>(&local_a0);
                                local_e8 = local_a0;
                                pMVar15 = (Model*)local_e8.end();
                                local_1c8.Reset(pMVar15, false);
                            }
                            pMVar15 = (Model*)pBVar16->get();
                            local_1c8.Combine(pMVar15, *local_120, *(bool*)(local_f0 + 212));
                            piVar18 = (int*)local_160.push_back();
                            *piVar18 = iVar8;
                            piVar18[1] = (int)buildCombinedLocationRequest_Location->field_4;
                            piVar18[2] = (int)(char)buildCombinedLocationRequest_Location->field_5;
                            piVar18[3] = (int)*(char*)((long)&buildCombinedLocationRequest_Location->field_100 + 2);
                            *(uint16_t*)(piVar18 + 4) =
                                *(uint16_t*)((long)&buildCombinedLocationRequest_Location->field_40 + 6);
                            *(uint16_t*)((long)piVar18 + 18) =
                                *(uint16_t*)((long)&buildCombinedLocationRequest_Location->field_40 + 4);
                            piVar18[5] = (int)*(short*)((long)&buildCombinedLocationRequest_Location->field_24 + 4);
                            piVar18[6] = (int)*(short*)((long)&buildCombinedLocationRequest_Location->field_24 + 6);
                            this_02 = (NXTPixToolkit*)(*pBVar16).operator->();
                            aabb = (AABB*)this_02->GetScreen();
                            (*((piVar18 + 12))) = *aabb;
                            ((piVar18 + 7))->SetXYZ(local_170);
                            sVar1 = (short)*(uint32_t*)&buildCombinedLocationRequest_Location->field_40;
                            sVar20 = sVar1 + 127;
                            if (-1 < sVar1) {
                                sVar20 = sVar1;
                            }
                            piVar18[10] = (int)sVar20 >> 7;
                            sVar1 = *(short*)((long)&buildCombinedLocationRequest_Location->field_40 + 2);
                            sVar20 = sVar1 + 127;
                            if (-1 < sVar1) {
                                sVar20 = sVar1;
                            }
                            piVar18[11] = (int)sVar20 >> 7;
                            *(uint8_t*)(piVar18 + 45) =
                                *(uint8_t*)((long)&buildCombinedLocationRequest_Location->field_100 + 7);
                            *(uint8_t*)(piVar18 + 47) =
                                *(uint8_t*)((long)&buildCombinedLocationRequest_Location->field_108 + 1);
                            *(uint8_t*)(piVar18 + 20) =
                                *(uint8_t*)((long)&buildCombinedLocationRequest_Location->field_100 + 3);
                            piVar18[21] = *(int*)buildCombinedLocationRequest_Location;
                            (*((piVar18 + 22))) = *local_c0;
                            *(uint8_t*)(piVar18 + 35) =
                                *(uint8_t*)((long)&buildCombinedLocationRequest_Location->field_100 + 1);
                            piVar18[46] = (int)(short)buildCombinedLocationRequest_Location->field_176;
                        } else {
                            pBVar16 = (BuildCombinedLocationWorker*)&buildCombinedLocationRequest_Location->field_232;
                            cVar3 = pBVar16->empty();
                            uVar23 = (uint32_t)(in_stack_fffffffffffffe10 >> 32);
                            if ((!cVar3) || (*(int*)&buildCombinedLocationRequest_Location->field_184 != -1))
                                goto LAB_10064d70e;
                        }
                        pBVar16 = local_128;
                        iVar8 = (int)local_c8;
                        uVar11 = local_c8 & 4294967295;
                        uVar12 = local_128->size();
                        local_c8 = (unsigned long)(iVar8 + 1);
                    } while (uVar11 < uVar12);
                }
                cVar3 = shared_ptr::operator_cast_to_bool(&local_e8);
                if (cVar3) {
                    local_1c8.FinishCombine();
                    puVar19 = (uint8_t*)local_110->push_back();
                    pMVar15 = (Model*)local_e8.operator->();
                    uVar5 = pMVar15->HasOpaqueOrTestedFaces();
                    puVar19[1] = uVar5;
                    pMVar15 = (Model*)local_e8.operator->();
                    uVar5 = pMVar15->HasAlphaBlendedFaces();
                    *puVar19 = uVar5;
                    puVar19[2] = *(uint8_t*)(local_b8 + 18);
                    puVar19[3] = *(uint8_t*)(local_b8 + 19);
                    (*((puVar19 + 88))) = (*((local_b8 + 56)));
                    ((puVar19 + 8))->swap(local_160);
                    (*((puVar19 + 120))) = local_e8;
                    local_e8.reset();
                    local_140.clear();
                }
                local_b8 = local_b8 + 88;
            } while (local_b8 != local_118);
        }
    }

    // 0x10064df60
    void BuildCombinedLocationWorker::UploadCombinedLocations(
        const shared_ptr<BuildCombinedLocationResultData>& buildCombinedLocationResultData) {
        shared_ptr<graphics::Model>* this_00;
        RenderContext* renderContext;
        long lVar3;
        long lVar4;
        WaterType* this_03;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_04;
        unsigned int* puVar5;
        unsigned int* puVar6;
        uint64_t uVar7;
        uint64_t* puVar8;
        Model* pMVar9;
        ReturnValue local_2118;
        ReturnValue local_2108;
        shared_ptr<graphics::Model>* local_20f8;
        long local_20f0;
        long local_20e8;
        lock_guard<render::RenderContext> local_20e0;
        unsigned int local_20d4;
        fixed_hash_map<unsigned int, graphics::Model const*, 256ul, 257ul, true, eastl::hash<unsigned int>,
                       eastl::equal_to<unsigned int>, false>
            local_20d0[8344];

        auto this_01 = Instance();
        long lVar2 = this_01->GetOrigin();
        if (*(char*)(lVar2 + 227) != '\0') {
            renderContext = ((RenderDevice*)this_01->Instance())->GetCurrentThreadRenderContext();
            local_20e0 = lock_guard<render::RenderContext>(*renderContext);
            lVar2 = field_8->end();
            lVar3 = buildCombinedLocationResultData.operator->();
            lVar4 = ((lVar3 + 32))->HeapBeginPtr();
            local_20e8 = ((lVar3 + 32))->end();
            if (lVar4 != local_20e8) {
                do {
                    this_03 = (WaterType*)(*((lVar4 + 120))).operator->();
                    this_04 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)
                                  this_03->GetEmissiveUVScale();
                    if (this_04->empty()) {
                        LogAssert("!locationHashList.empty()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationWorker.cpp",
                                  380, nullptr);
                    }
                    local_20f8 = (shared_ptr<graphics::Model>*)(lVar4 + 120);
                    local_20f0 = lVar4;
                    new (local_20d0)
                        eastl::fixed_hash_map<unsigned int, graphics::Model const*, 256ul, 257ul, true,
                                              eastl::hash<unsigned int>, eastl::equal_to<unsigned int>, false>(
                            local_2108, local_2118);
                    puVar5 = (unsigned int*)this_04->HeapBeginPtr();
                    puVar6 = (unsigned int*)this_04->end();
                    this_00 = local_20f8;
                    for (; local_20f8 = this_00, puVar5 != puVar6; puVar5 = puVar5 + 1) {
                        local_20d4 = *puVar5;
                        local_2108 = ((lVar2 + 56))->find(local_20d4);
                        local_2118 = ((lVar2 + 56))->end();
                        if (!(local_2108 != local_2118)) {
                            LogAssert(
                                "perModelData != requestData.m_perModelData.end()",
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationWorker.cpp",
                                387, nullptr);
                        }
                        lVar3 = local_2108.HeapBeginPtr();
                        uVar7 = ((lVar3 + 8))->end();
                        puVar8 = (uint64_t*)(*local_20d0)[local_20d4];
                        *puVar8 = uVar7;
                        this_00 = local_20f8;
                    }
                    pMVar9 = (Model*)(*this_00).operator->();
                    pMVar9->ConstructAtlasFromWorker(local_20d0, nullptr);
                    pMVar9 = (Model*)(*this_00).operator->();
                    pMVar9->ConstructFinishAndUpload();
                    lVar4 = local_20f0 + 136;
                } while (lVar4 != local_20e8);
            }
        }
    }

    // 0x10064e200
    void BuildCombinedLocationWorker::GenerateIndividualLocations(
        eastl::vector<BuildCombinedLocationRequest_Location*, BucketAllocatorEASTL>&
            buildCombinedLocationRequest_Locations,
        const shared_ptr<BuildCombinedLocationResultData>& buildCombinedLocationResultData) {
        shared_ptr<graphics::Model>* this_00;
        uint8_t* this_01;
        unsigned char arg3;
        unsigned short uVar1;
        short sVar2;
        BuildCombinedLocationRequest_Location* buildCombinedLocationRequest_Location;
        char cVar3;
        uint8_t bVar4;
        uint32_t uVar5;
        RenderContext* renderContext;
        unsigned long uVar9;
        uint64_t* puVar10;
        Logger* this_03;
        char* pcVar11;
        Model* pMVar12;
        ModelCopyType* modelCopyType;
        Model* model;
        int* piVar13;
        short sVar14;
        unsigned int uVar15;
        unsigned int uVar16;
        unsigned long arg1_00;
        BuildCombinedLocationWorker* this_04;
        ReturnValue local_f8;
        unique_lock<render::RenderContext> local_e8;
        BuildCombinedLocationWorker* local_d8;
        unsigned long local_d0;
        CoordFine local_b8;
        unsigned char local_a1;
        uint32_t local_a0[26];

        auto phVar6 = field_8->end();
        vector<BuildCombinedLocationResult_UncombinableLocation>* local_c0 =
            (vector<BuildCombinedLocationResult_UncombinableLocation>*)*buildCombinedLocationResultData;
        auto pMVar7 = buildCombinedLocationResultData.Instance();
        long lVar8 = pMVar7->GetOrigin();
        hashtable<unsigned int, eastl::pair<unsigned int const, BuildCombinedLocationRequestData_PerModelData>,
                  eastl::allocator,
                  eastl::use_first<eastl::pair<unsigned int const, BuildCombinedLocationRequestData_PerModelData>>,
                  eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* local_c8 = phVar6;
        if (*(char*)(lVar8 + 227) == '\0') {
            local_e8 = std::unique_lock<render::RenderContext>();
        } else {
            renderContext = ((RenderDevice*)pMVar7->Instance())->GetCurrentThreadRenderContext();
            local_e8 = std::unique_lock<render::RenderContext>(*renderContext);
        }
        lVar8 = buildCombinedLocationRequest_Locations.size();
        if (lVar8 != 0) {
            local_c8 = local_c8 + 56;
            local_c0 = local_c0 + 64;
            arg1_00 = 0;
            local_d8 = (BuildCombinedLocationWorker*)buildCombinedLocationRequest_Locations;
            do {
                local_d0 = arg1_00;
                puVar10 = &buildCombinedLocationRequest_Locations[arg1_00];
                buildCombinedLocationRequest_Location = (BuildCombinedLocationRequest_Location*)*puVar10;
                local_a0[0] =
                    GetPerModelConstructedHash((BuildCombinedLocationWorker*)buildCombinedLocationRequest_Locations,
                                               buildCombinedLocationRequest_Location);
                phVar6 = local_c8;
                local_f8 = local_c8->find(*local_a0);
                *local_a0 = phVar6->end();
                cVar3 = local_f8 == *local_a0;
                if (cVar3) {
                    local_b8 = CoordFine((int)buildCombinedLocationRequest_Location->field_4,
                                         (float)*(int*)&buildCombinedLocationRequest_Location->field_32,
                                         (float)*(int*)((long)&buildCombinedLocationRequest_Location->field_32 + 4));
                    pMVar12 = (Model*)local_a0;
                    new (local_a0) eastl::fixed_string<char, 64>();
                    this_03 = logger::default_logger();
                    uVar5 = GetPerModelConstructedHash((BuildCombinedLocationWorker*)pMVar12,
                                                       buildCombinedLocationRequest_Location);
                    pcVar11 = local_b8.ToString<64, true>(*local_a0);
                    this_03->Log(false, 3,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                 "assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationWorker.cpp",
                                 420, "Model not present at index %u (hash: %u, location: %s)", (int)local_d0, uVar5,
                                 pcVar11);
                }
                lVar8 = local_f8.HeapBeginPtr();
                this_00 = (shared_ptr<graphics::Model>*)(lVar8 + 8);
                pMVar12 = (Model*)(*this_00).operator->();
                cVar3 = pMVar12->GetConstructedState();
                if (cVar3 != '\x03') {
                    LogAssert("perModelData.m_model->GetConstructedState() == "
                              "graphics::ModelConstructedState::DATA_MAT_AND_ATLAS",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationWorker.cpp",
                              425, nullptr);
                }
                modelCopyType = (ModelCopyType*)**this_00;
                local_b8.field_0 = 1;
                MakeSharedPool<graphics::Model, 3072>::MakeShared<graphics::Model&, graphics::ModelCopyType>(
                    (Model*)local_a0, modelCopyType);
                pMVar12 = (Model*)(*local_a0).operator->();
                pMVar12->StartTransform();
                pMVar12 = (Model*)(*local_a0).operator->();
                pMVar12->SetExternalID(buildCombinedLocationRequest_Location->MakeExternalID(), true);
                pMVar12 = (Model*)(*local_a0).operator->();
                pMVar12->SetSavedModelHash(*(unsigned int*)(lVar8 + 24));
                if ((*(char*)((long)&buildCombinedLocationRequest_Location->field_113 + 7) == '\0') &&
                    (*(int*)&buildCombinedLocationRequest_Location->field_112 != 0)) {
                    cVar3 = buildCombinedLocationRequest_Location->field_128->empty();
                    if (cVar3) {
                        cVar3 = ((buildCombinedLocationRequest_Location->field_128 + 24))->empty();
                        if (cVar3)
                            goto LAB_10064e4d0;
                    }
                    this_04 = (BuildCombinedLocationWorker*)buildCombinedLocationRequest_Location->field_48;
                    bVar4 = this_04->GetRot();
                    HillChangeUncombinableLocation(this_04, buildCombinedLocationRequest_Location,
                                                   (shared_ptr<graphics::Model>*)local_a0, (unsigned int)bVar4);
                }
            LAB_10064e4d0:
                uVar16 = *(unsigned int*)&buildCombinedLocationRequest_Location->field_40;
                uVar15 = uVar16 + 127;
                if (-1 < (short)uVar16) {
                    uVar15 = uVar16;
                }
                local_b8.field_0 = (((uint32_t)local_b8.field_0._1_3_ << 8) | (uint8_t)((char)(uVar15 >> 7)));
                uVar1 = *(unsigned short*)((long)&buildCombinedLocationRequest_Location->field_40 + 2);
                uVar16 = uVar1 + 127;
                if (-1 < (short)uVar1) {
                    uVar16 = (unsigned int)uVar1;
                }
                local_a1 = (unsigned char)(uVar16 >> 7);
                this_01 = buildCombinedLocationRequest_Location->field_48;
                cVar3 = this_01->GetRot();
                if (cVar3 == '\x01') {
                LAB_10064e51c:
                    eastl::swap<signed char>(local_b8, local_a1);
                } else {
                    cVar3 = this_01->GetRot();
                    if (cVar3 == '\x03')
                        goto LAB_10064e51c;
                }
                pMVar12 = (Model*)(*local_a0).operator->();
                arg3 = *(unsigned char*)((long)&buildCombinedLocationRequest_Location->field_8 + 1);
                pMVar12->BakeTile(buildCombinedLocationRequest_Location->field_5,
                                  *(unsigned char*)&buildCombinedLocationRequest_Location->field_8, arg3,
                                  buildCombinedLocationRequest_Location->field_6 +
                                      *(unsigned char*)&buildCombinedLocationRequest_Location->field_8,
                                  buildCombinedLocationRequest_Location->field_7 + arg3,
                                  (unsigned char)local_b8.field_0, local_a1);
                pMVar12 = (Model*)(*local_a0).operator->();
                pMVar12->EndTransform(true);
                pMVar12 = (Model*)(*local_a0).operator->();
                pMVar12->UpdateAABB();
                pMVar7 = (MapArea*)pMVar12->Instance();
                lVar8 = pMVar7->GetOrigin();
                if (*(char*)(lVar8 + 227) != '\0') {
                    pMVar12 = (Model*)(*local_a0).operator->();
                    model = (Model*)this_00->end();
                    pMVar12->ConstructAtlasFromWorker(0, model);
                    pMVar12 = (Model*)(*local_a0).operator->();
                    pMVar12->ConstructFinishAndUpload();
                }
                piVar13 = (int*)local_c0->push_back();
                *piVar13 = (int)buildCombinedLocationRequest_Location->field_4;
                piVar13[1] = (int)*(char*)((long)&buildCombinedLocationRequest_Location->field_100 + 2);
                piVar13[2] = *(int*)buildCombinedLocationRequest_Location;
                *(uint8_t*)(piVar13 + 3) = *(uint8_t*)((long)&buildCombinedLocationRequest_Location->field_100 + 1);
                (*((piVar13 + 4))) = *this_01;
                *(uint8_t*)(piVar13 + 17) = *(uint8_t*)((long)&buildCombinedLocationRequest_Location->field_100 + 6);
                piVar13[18] = (int)(short)buildCombinedLocationRequest_Location->field_176;
                *(uint8_t*)(piVar13 + 19) = buildCombinedLocationRequest_Location->field_178;
                piVar13[20] = (int)*(short*)((long)&buildCombinedLocationRequest_Location->field_24 + 4);
                piVar13[21] = (int)*(short*)((long)&buildCombinedLocationRequest_Location->field_24 + 6);
                *(uint8_t*)(piVar13 + 24) = *(uint8_t*)&buildCombinedLocationRequest_Location->field_108;
                (*((piVar13 + 26))) = *local_a0;
                sVar2 = (short)*(uint32_t*)&buildCombinedLocationRequest_Location->field_40;
                sVar14 = sVar2 + 127;
                if (-1 < sVar2) {
                    sVar14 = sVar2;
                }
                piVar13[22] = (int)sVar14 >> 7;
                sVar2 = *(short*)((long)&buildCombinedLocationRequest_Location->field_40 + 2);
                sVar14 = sVar2 + 127;
                if (-1 < sVar2) {
                    sVar14 = sVar2;
                }
                piVar13[23] = (int)sVar14 >> 7;
                buildCombinedLocationRequest_Locations =
                    (vector<BuildCombinedLocationRequest_Location*, BucketAllocatorEASTL>*)local_d8;
                arg1_00 = (unsigned long)((int)local_d0 + 1);
                uVar9 = local_d8->size();
            } while (arg1_00 < uVar9);
        }
    }

    // 0x10064eab0
    void BuildCombinedLocationWorker::HillChangeLocation(
        BuildCombinedLocationRequest_Location& buildCombinedLocationRequest_Location, graphics::Model& model,
        Rotation90 rotation90) {
        short sVar1;
        short sVar2;
        unsigned int uVar3;
        uint32_t uVar4;
        uint32_t uVar5;
        short* psVar7;
        int in_stack_ffffffffffffff68;
        Matrix44T<float> aMStack_92;

        if (*(int*)&buildCombinedLocationRequest_Location.field_112 == 3) {
            uVar3 = *(unsigned int*)((long)&buildCombinedLocationRequest_Location.field_113 + 3);
            new (&aMStack_92 - 6) math::Matrix44T<float>();
            psVar7 = (short*)buildCombinedLocationRequest_Location.field_10.z();
            if (((&aMStack_92 - 6))
                    ->CalculateHillRotateMatrix(
                        *((Matrix44T<float>*)(unsigned long)((uVar3 & 255) << 2)), uVar3 >> 6 & 1020,
                        uVar3 >> 14 & 1020, uVar3 >> 22 & 4294967292, rotation90 & 255,
                        (int)buildCombinedLocationRequest_Location + 128,
                        *((Array<Array<int, BucketAllocatorEASTL>,
                                 BucketAllocatorEASTL>*)(unsigned long)(unsigned int)(int)*psVar7),
                        in_stack_ffffffffffffff68) != '\0') {
                model.Transform(*(&aMStack_92 - 6));
            }
        } else {
            model.UpdateAABB();
            uVar4 = *(uint32_t*)&buildCombinedLocationRequest_Location.field_112;
            uVar5 = *(uint32_t*)((long)&buildCombinedLocationRequest_Location.field_113 + 3);
            sVar1 = *(short*)&buildCombinedLocationRequest_Location.field_40;
            sVar2 = *(short*)((long)&buildCombinedLocationRequest_Location.field_40 + 2);
            psVar7 = (short*)buildCombinedLocationRequest_Location.field_10.z();
            model.HillChange(uVar4, uVar5, (int)sVar1, (int)sVar2, (uint8_t)rotation90,
                             buildCombinedLocationRequest_Location.field_128,
                             *(buildCombinedLocationRequest_Location.field_128 + 24), (int)*psVar7);
        }
    }

    // 0x10064ef40
    void BuildCombinedLocationWorker::HillChangeUncombinableLocation(
        BuildCombinedLocationRequest_Location& buildCombinedLocationRequest_Location,
        const shared_ptr<graphics::Model>& model, Rotation90 rotation90) {
        short sVar1;
        short sVar2;
        unsigned int uVar3;
        uint32_t uVar4;
        uint32_t uVar5;
        short* psVar7;
        Model* pMVar8;
        int in_stack_ffffffffffffff68;
        Matrix44T<float> aMStack_92;

        if (*(int*)&buildCombinedLocationRequest_Location.field_112 == 3) {
            uVar3 = *(unsigned int*)((long)&buildCombinedLocationRequest_Location.field_113 + 3);
            new (&aMStack_92 - 6) math::Matrix44T<float>();
            psVar7 = (short*)buildCombinedLocationRequest_Location.field_10.z();
            if (((&aMStack_92 - 6))
                    ->CalculateHillRotateMatrix(
                        *((Matrix44T<float>*)(unsigned long)((uVar3 & 255) << 2)), uVar3 >> 6 & 1020,
                        uVar3 >> 14 & 1020, uVar3 >> 22 & 4294967292, rotation90 & 255,
                        (int)buildCombinedLocationRequest_Location + 128,
                        *((Array<Array<int, BucketAllocatorEASTL>,
                                 BucketAllocatorEASTL>*)(unsigned long)(unsigned int)(int)*psVar7),
                        in_stack_ffffffffffffff68) != '\0') {
                pMVar8 = (Model*)model.operator->();
                pMVar8->SetLocalTransform(*(&aMStack_92 - 6));
            }
        } else {
            pMVar8 = (Model*)model.operator->();
            pMVar8->UpdateAABB();
            pMVar8 = (Model*)model.operator->();
            uVar4 = *(uint32_t*)&buildCombinedLocationRequest_Location.field_112;
            uVar5 = *(uint32_t*)((long)&buildCombinedLocationRequest_Location.field_113 + 3);
            sVar1 = *(short*)&buildCombinedLocationRequest_Location.field_40;
            sVar2 = *(short*)((long)&buildCombinedLocationRequest_Location.field_40 + 2);
            psVar7 = (short*)buildCombinedLocationRequest_Location.field_10.z();
            pMVar8->HillChange(uVar4, uVar5, (int)sVar1, (int)sVar2, (uint8_t)rotation90,
                               buildCombinedLocationRequest_Location.field_128,
                               *(buildCombinedLocationRequest_Location.field_128 + 24), (int)*psVar7);
        }
    }

} // namespace jag::game

namespace jag {
    // 0x10064ea10
    std::enable_if<!std::is_array<graphics::Model>::value,
                   std::unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>>::type
    bucket_make_unique<graphics::Model, graphics::Model&, graphics::ModelCopyType>(
        graphics::Model& model, graphics::ModelCopyType&& modelCopyType) {
        std::enable_if<!std::is_array<graphics::Model>::value,
                       std::unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>>::type result;
        __good_rval_ref_type* good_rval_ref_type;

        auto model_00 = BucketManager::Allocate(944, 0, 16);
        if (model_00 == nullptr) {
            LogAssert(
                "ptr != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/make_unique.h",
                37, nullptr);
        }
        new (model_00) graphics::Model(model, *(uint32_t*)modelCopyType);
        result.unique_ptr<true, void>(model_00, good_rval_ref_type);
        return result;
    }

    // 0x10064fbe0
    game::BuildAnimationRequestData* placement_new<game::BuildAnimationRequestData>(void* arg1) {
        new (arg1) game::BuildAnimationRequestData();
        return arg1;
    }

    // 0x10064fc00
    BucketRefCounter<game::BuildAnimationRequestData>*
    placement_new<BucketRefCounter<game::BuildAnimationRequestData>,
                  managed_ptr_counter_and_data<BucketRefCounter<game::BuildAnimationRequestData>,
                                               game::BuildAnimationRequestData>*&,
                  game::BuildAnimationRequestData*&>(
        void* arg1,
        managed_ptr_counter_and_data<BucketRefCounter<game::BuildAnimationRequestData>,
                                     game::BuildAnimationRequestData>*& arg2,
        game::BuildAnimationRequestData*& arg3) {
        new (arg1) BucketRefCounter<game::BuildAnimationRequestData>(arg2, arg3, 0);
        return arg1;
    }

} // namespace jag
