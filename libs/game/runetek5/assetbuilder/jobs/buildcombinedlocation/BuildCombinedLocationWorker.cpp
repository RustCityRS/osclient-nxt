// libs/game/runetek5/assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationWorker.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game {
    class BuildCombinedLocationWorker {
    public:
        // virtual methods in vtable order
        virtual ~BuildCombinedLocationWorker();
        virtual GetWorkerJobType() const;
        virtual Service(int);
        BuildCombinedLocationWorker();
        uint GetPerModelConstructedHash(BuildCombinedLocationRequest_Location const&);
        void AddSoundsToLists(BuildCombinedLocationRequest_Location&,
                              eastl::vector<LocationAudioProperties, eastl::allocator>&);
        void GenerateCombinedGroups(eastl::vector<BuildCombinedLocationResult_CombinableGroup, eastl::allocator>&,
                                    shared_ptr<BuildCombinedLocationResultData> const&);
        void UploadCombinedLocations(shared_ptr<BuildCombinedLocationResultData> const&);
        void GenerateIndividualLocations(eastl::vector<BuildCombinedLocationRequest_Location*, BucketAllocatorEASTL>&,
                                         shared_ptr<BuildCombinedLocationResultData> const&);
        void HillChangeLocation(BuildCombinedLocationRequest_Location&, graphics::Model&, Rotation90);
        void HillChangeUncombinableLocation(BuildCombinedLocationRequest_Location&, shared_ptr<graphics::Model> const&,
                                            Rotation90);

        // data members, from how the methods use this: 32 bytes
        undefined** field_0; // offset 0, vtable pointer
        shared_ptr field_8;  // offset 8
        char _unknown_24[8];
    };

    // 0x100269c10: the linker folded this into oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString::GetID() const, which has identical code
    BuildCombinedLocationWorker::GetWorkerJobType() const;

    // 0x1006333d0: the linker folded this into BuildSingleLocationWorker::~BuildSingleLocationWorker(), which has identical code
    BuildCombinedLocationWorker::~BuildCombinedLocationWorker();

    // 0x1006333e0: the linker folded this into BuildSingleLocationWorker::~BuildSingleLocationWorker(), which has identical code
    BuildCombinedLocationWorker::~BuildCombinedLocationWorker();

    // 0x1006339a0: the linker folded this into BuildSingleLocationWorker::~BuildSingleLocationWorker(), which has identical code
    BuildCombinedLocationWorker::~BuildCombinedLocationWorker();

    // 0x10064cab0, 32 bytes, base-object constructor, placed by class name and debug map
    // BuildCombinedLocationWorker::BuildCombinedLocationWorker()
    void BuildCombinedLocationWorker::BuildCombinedLocationWorker() {
        new (this) AssetWorker();
        field_0 = &PTR__BuildFunctionWorker_100f0d848;
    }

    // 0x10064cad0, 16 bytes, complete-object constructor, placed by class name and debug map
    // BuildCombinedLocationWorker::BuildCombinedLocationWorker(): jumps straight to the base-object constructor

    // 0x10064cae0, 80 bytes, placed by class name and debug map
    // BuildCombinedLocationWorker::GetPerModelConstructedHash(BuildCombinedLocationRequest_Location const&)
    uint BuildCombinedLocationWorker::GetPerModelConstructedHash(BuildCombinedLocationRequest_Location* param_1) {
        byte bVar1;
        byte bVar2;
        byte bVar3;

        bVar2 = param_1->field_48->GetShape();
        bVar1 = *(byte*)((long)&param_1->field_100 + 6);
        bVar3 = param_1->field_48->GetRot();
        return *(int*)param_1 << 8 | (uint)bVar3 << 6 | (uint)bVar2 | (uint)bVar1 << 5;
    }

    // 0x10064cb30, 1440 bytes, placed by class name and debug map
    // BuildCombinedLocationWorker::Service(int)
    /* WARNING: Removing unreachable block (ram,4301573979) */
    /* BuildCombinedLocationWorker::Service(int) */

    undefined* BuildCombinedLocationWorker::Service(int param_1) {
        vector* pvVar1;
        vector<BuildCombinedLocationResult_CombinableGroup, eastl::allocator>* this_00;
        bool bVar2;
        char cVar3;
        undefined1 uVar4;
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
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_04;
        vector* pvVar11;
        vector* pvVar12;
        ulong uVar13;
        undefined8 uVar14;
        int* piVar15;
        shared_ptr* extraout_RDX;
        undefined* puVar16;
        mutex* this_05;
        GeometryBatch* pGVar17;
        BuildCombinedLocationWorker* pBVar18;
        uint uVar19;
        int iVar20;
        byte bVar21;
        vector local_d8[24];
        BuildCombinedLocationRequest_Location* local_c0;
        BuildCombinedLocationRequest_Location* local_b8;
        hash_map<unsigned int, BuildCombinedLocationRequestData_PerModelData, eastl::hash<unsigned int>,
                 eastl::equal_to<unsigned int>, eastl::allocator, false>* local_b0;
        undefined* local_a8;
        BuildCombinedLocationWorker* local_a0;
        scoped_lock<std::mutex> local_98[8];
        BuildCombinedLocationWorker local_90;
        uint local_6c;
        shared_ptr local_68;
        shared_ptr* local_58;
        vector<BuildCombinedLocationResult_CombinableGroup, eastl::allocator>* local_50;
        uint local_44;
        BuildCombinedLocationRequest_Location* local_40;
        char local_32;
        byte local_31;

        bVar2 = field_8->operator_cast_to_bool();
        if (bVar2) {
            lVar6 = field_8->end();
            this_05 = (mutex*)(lVar6 + 112);
            std::scoped_lock<std::mutex>::scoped_lock(local_98, this_05);
            MakeSharedPool<BuildCombinedLocationResultData, 96>::MakeShared<>(
                &local_68, (MakeSharedPool<BuildCombinedLocationResultData, 96>*)this_05);
            local_50 = (vector<BuildCombinedLocationResult_CombinableGroup, eastl::allocator>*)
                shared_ptr<BuildCombinedLocationResultData>::operator*(
                    (shared_ptr<BuildCombinedLocationResultData>*)&local_68);
            eastl::vector<BuildCombinedLocationRequest_Location*, BucketAllocatorEASTL>::vector();
            eastl::vector<BuildCombinedLocationResult_CombinableGroup, eastl::allocator>::reserve(local_50, 16);
            this_02 = (GeometryBatch*)(lVar6 + 24);
            local_a0 = this;
            pBVar7 = (BuildCombinedLocationRequest_Location*)this_02->HeapBeginPtr();
            local_b8 = (BuildCombinedLocationRequest_Location*)this_02->end();
            bVar21 = pBVar7 == local_b8;
            if (!(bool)bVar21) {
                local_b0 =
                    (hash_map<unsigned int, BuildCombinedLocationRequestData_PerModelData, eastl::hash<unsigned int>,
                              eastl::equal_to<unsigned int>, eastl::allocator, false>*)(lVar6 + 56);
                do {
                    local_40 = pBVar7;
                    local_6c = GetPerModelConstructedHash((BuildCombinedLocationWorker*)this_02, pBVar7);
                    this_01 = (shared_ptr*)eastl::hash_map<unsigned int, BuildCombinedLocationRequestData_PerModelData,
                                                           eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                                                           eastl::allocator, false>::operator[](local_b0, &local_6c);
                    local_32 = shared_ptr::operator_cast_to_bool(this_01);
                    if ((bool)local_32) {
                        pMVar8 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_01);
                        cVar3 = pMVar8->GetConstructedState();
                        if (cVar3 != '\x03') {
                            /* WARNING: Subroutine does not return */
                            LogAssert(
                                "model->GetConstructedState() == graphics::ModelConstructedState::DATA_MAT_AND_ATLAS",
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationWorker.cpp",
                                60, (char*)0);
                        }
                        uVar19 = -(uint)(this_01[1].field_4 == '\0') | (uint)this_01[1].field_8;
                        local_58 = this_01;
                        local_31 = bVar21;
                        pMVar8 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_01);
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
                                pGVar10 =
                                    (GeometryBatchInstance*)
                                        std::unique_ptr<graphics::GeometryBatchInstance,
                                                        MakeUniquePool<graphics::GeometryBatchInstance,
                                                                       3072>::UniquePoolDeleter>::operator->(this_03);
                                this_04 =
                                    (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                               eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                               eastl::equal_to<long long>, eastl::hash<long long>,
                                               eastl::mod_range_hashing, eastl::default_ranged_hash,
                                               eastl::prime_rehash_policy, false, true, true>*)pGVar10->GetMaterial();
                                eastl::hashtable<long long, eastl::pair<long long const, unsigned int>,
                                                 eastl::allocator,
                                                 eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                                 eastl::equal_to<long long>, eastl::hash<long long>,
                                                 eastl::mod_range_hashing, eastl::default_ranged_hash,
                                                 eastl::prime_rehash_policy, false, true, true>::size(this_04);
                                pGVar10 =
                                    (GeometryBatchInstance*)
                                        std::unique_ptr<graphics::GeometryBatchInstance,
                                                        MakeUniquePool<graphics::GeometryBatchInstance,
                                                                       3072>::UniquePoolDeleter>::operator->(this_03);
                                this_02 = (GeometryBatch*)pGVar10->GetGeometryBatch();
                                iVar5 = this_02->GetIndexCount();
                                iVar20 = iVar20 + iVar5;
                                this_03 = this_03 + 8;
                            } while (this_03 != puVar9);
                        }
                        pBVar7 = local_40;
                        local_40->field_280 = 1;
                        if (*(char*)((long)&local_40->field_100 + 4) != '\0' || local_58[1].field_5 != '\0') {
                            local_90.field_0 = (undefined**)local_40;
                            this_02 = (GeometryBatch*)local_d8;
                            this_02->push_back((BuildCombinedLocationRequest_Location**)&local_90);
                            pBVar7->field_280 = 0;
                        }
                        this_00 = local_50;
                        if (pBVar7->field_280 == 0) {
                        LAB_10064cf60:
                            bVar21 = local_31;
                        } else {
                            pvVar11 = (vector*)local_50->HeapBeginPtr();
                            pvVar12 = (vector*)this_00->end();
                            if (pvVar11 == pvVar12) {
                                local_44 = 0;
                            } else {
                                pvVar11 = pvVar11 + 56;
                                local_44 = 0;
                                do {
                                    this_02 = (GeometryBatch*)(pvVar11 + -32);
                                    pGVar17 = this_02;
                                    uVar13 = this_02->size();
                                    if (((uVar13 < 300) &&
                                         ((((uVar19 == 4294967295 || (*(uint*)(pvVar11 + -44) == 4294967295)) ||
                                            (uVar19 == *(uint*)(pvVar11 + -44))) &&
                                           ((*(vector*)((long)&local_40->field_100 + 5) == pvVar11[-38] &&
                                             (*(vector*)((long)&local_40->field_100 + 1) == pvVar11[-37])))))) &&
                                        ((uint)(*(int*)(pvVar11 + -36) + iVar20) < 65536)) {
                                        *(int*)(pvVar11 + -36) = *(int*)(pvVar11 + -36) + iVar20;
                                        if (*(int*)(pvVar11 + -44) == -1) {
                                            *(uint*)(pvVar11 + -44) = uVar19;
                                        }
                                        local_90.field_0 = (undefined**)local_40;
                                        this_02->push_back((BuildCombinedLocationRequest_Location**)&local_90);
                                        bVar2 = true;
                                        uVar14 =
                                            AddSoundsToLists((BuildCombinedLocationWorker*)this_02, local_40, pvVar11);
                                        local_44 = (uint)CONCAT71((int7)((ulong)uVar14 >> 8), 1);
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
                            new (&local_90) eastl::vector<LocationAudioProperties, eastl::allocator>();
                            bVar21 = local_31;
                            AddSoundsToLists(pBVar18, local_40, (vector*)&local_90);
                            piVar15 = (int*)
                                eastl::vector<BuildCombinedLocationResult_CombinableGroup, eastl::allocator>::push_back(
                                    local_50);
                            *piVar15 = (int)local_40->field_4;
                            piVar15[1] = (int)(char)local_40->field_5;
                            piVar15[2] = (int)*(char*)((long)&local_40->field_100 + 2);
                            piVar15[3] = uVar19;
                            pMVar8 =
                                (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)local_58);
                            uVar4 = pMVar8->HasOpaqueOrTestedFaces();
                            *(undefined1*)(piVar15 + 4) = uVar4;
                            pMVar8 =
                                (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)local_58);
                            uVar4 = pMVar8->HasAlphaBlendedFaces();
                            *(undefined1*)((long)piVar15 + 17) = uVar4;
                            *(undefined1*)((long)piVar15 + 18) = *(undefined1*)((long)&local_40->field_100 + 5);
                            *(undefined1*)((long)piVar15 + 19) = *(undefined1*)((long)&local_40->field_100 + 1);
                            piVar15[5] = iVar20;
                            eastl::vector<LocationAudioProperties, eastl::allocator>::operator=(
                                (vector<LocationAudioProperties, eastl::allocator>*)(piVar15 + 14), (vector*)&local_90);
                            local_c0 = local_40;
                            ((piVar15 + 6))->push_back(&local_c0);
                            this_02 = (GeometryBatch*)&local_90;
                            this_02->~vector();
                        }
                    } else {
                        this_02 = (GeometryBatch*)logger::default_logger();
                        logger::Logger::Log(
                            this_02, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationWorker.cpp",
                            57, "%s: Passed location without corresponding model data", "Service");
                        local_a8 = DataStatus::MISSING;
                    }
                    if (local_32 == '\0')
                        break;
                    pBVar7 = (BuildCombinedLocationRequest_Location*)&local_40[1].field_7;
                    bVar21 = pBVar7 == local_b8;
                } while (!(bool)bVar21);
            }
            pBVar18 = local_a0;
            puVar16 = local_a8;
            if ((bVar21 & 1) != 0) {
                GenerateCombinedGroups(local_a0, (vector*)local_50, &local_68);
                UploadCombinedLocations(pBVar18, &local_68);
                GenerateIndividualLocations(pBVar18, local_d8, &local_68);
                static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(
                    (shared_ptr*)&local_90, (jag*)&local_68, extraout_RDX);
                shared_ptr<void>::operator=((shared_ptr<void>*)&pBVar18->field_24, (shared_ptr*)&local_90);
                local_90.~shared_ptr();
                puVar16 = DataStatus::READY;
            }
            local_d8->~vector();
            local_68.~shared_ptr();
            std::scoped_lock<std::mutex>::~scoped_lock(local_98);
        } else {
            shared_ptr<void>::reset();
            puVar16 = DataStatus::READY;
        }
        return puVar16;
    }

    // 0x10064d330, 256 bytes, placed by class name and debug map
    // BuildCombinedLocationWorker::AddSoundsToLists(BuildCombinedLocationRequest_Location&, eastl::vector<LocationAudioProperties, eastl::allocator>&)
    void BuildCombinedLocationWorker::AddSoundsToLists(BuildCombinedLocationRequest_Location* param_1,
                                                       vector* param_2) {
        char cVar1;
        undefined4* puVar2;
        ColourHSL local_30;

        if ((*(int*)&param_1->field_184 < 1) && (cVar1 = (&param_1->field_232)->empty(), cVar1 != '\0')) {
            return;
        }
        puVar2 = (undefined4*)param_2->push_back();
        *puVar2 = *(undefined4*)&param_1->field_184;
        *(undefined2*)(puVar2 + 1) = *(undefined2*)((long)&param_1->field_184 + 4);
        *(undefined2*)((long)puVar2 + 6) = *(undefined2*)((long)&param_1->field_184 + 6);
        *(undefined2*)(puVar2 + 2) = param_1->field_192;
        puVar2[3] = *(undefined4*)&param_1->field_196;
        puVar2[4] = *(undefined4*)((long)&param_1->field_196 + 4);
        *(undefined1*)(puVar2 + 5) = *(undefined1*)&param_1->field_204;
        new (&local_30)
            math::ColourHSL((float)*(int*)&param_1->field_32, 0.0, (float)*(int*)((long)&param_1->field_32 + 4));
        ((puVar2 + 15))->SetXYZ((Vector3T*)&local_30);
        puVar2[18] = (int)param_1->field_4;
        cVar1 = (&param_1->field_232)->empty();
        if (cVar1 == '\0') {
            Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)(puVar2 + 6),
                                                    (Array*)&param_1->field_232);
            puVar2[12] = *(undefined4*)&param_1->field_256;
            puVar2[13] = *(undefined4*)((long)&param_1->field_256 + 4);
            *(undefined1*)(puVar2 + 14) = param_1->field_264;
        }
    }

    // 0x10064d520, 2624 bytes, placed by class name and debug map
    // BuildCombinedLocationWorker::GenerateCombinedGroups(eastl::vector<BuildCombinedLocationResult_CombinableGroup, eastl::allocator>&, shared_ptr<BuildCombinedLocationResultData> const&)
    void BuildCombinedLocationWorker::GenerateCombinedGroups(vector* param_1, shared_ptr* param_2) {
        shared_ptr* this_00;
        uchar uVar1;
        short sVar2;
        ushort uVar3;
        BuildCombinedLocationRequest_Location* this_01;
        LocData* this_02;
        char cVar4;
        bool bVar5;
        undefined1 uVar6;
        undefined1 uVar7;
        byte bVar8;
        undefined4 uVar9;
        int iVar10;
        long lVar11;
        ulong uVar12;
        _func_decltype_nullptr* p_Var13;
        ulong uVar14;
        undefined8* puVar15;
        undefined8 uVar16;
        char* pcVar17;
        Model* pMVar18;
        unique_ptr* this_03;
        QuaternionT* pQVar19;
        vector* pvVar20;
        short* psVar21;
        int* piVar22;
        NXTPixToolkit* this_04;
        AABB* pAVar23;
        undefined1* puVar24;
        short sVar25;
        hashtable_iterator_base* extraout_RDX;
        uint uVar26;
        BuildCombinedLocationWorker* pBVar27;
        uint uVar28;
        eastl local_1d8[16];
        ModelCombineHelper local_1c8;
        ColourHSL local_170;
        vector<BuildCombinedLocationResult_GroupSection, eastl::allocator> local_160[32];
        vector<std::unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>, BucketAllocatorEASTL> local_140[24];
        BuildCombinedLocationWorker* local_128;
        TextureAtlasQuality* local_120;
        long local_118;
        vector<BuildCombinedLocationResult_CombinedLocation, eastl::allocator>* local_110;
        undefined1 local_108[24];
        long local_f0;
        shared_ptr local_e8;
        int local_d4;
        int local_d0;
        int local_cc;
        ulong local_c8;
        LocData* local_c0;
        long local_b8;
        float local_ac;
        float local_a8;
        float local_a4;
        BuildCombinedLocationWorker local_a0[3];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_f0 = field_8->end();
        lVar11 = shared_ptr<BuildCombinedLocationResultData>::operator*(
            (shared_ptr<BuildCombinedLocationResultData>*)param_2);
        uVar12 = param_1->size();
        local_110 = (vector<BuildCombinedLocationResult_CombinedLocation, eastl::allocator>*)(lVar11 + 32);
        ((lVar11 + 32))->reserve(uVar12);
        eastl::vector<std::unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>, BucketAllocatorEASTL>::vector();
        p_Var13 = (_func_decltype_nullptr*)param_1->size();
        eastl::vector<std::unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>, BucketAllocatorEASTL>::reserve(
            local_140, (ulong)p_Var13);
        new (&local_e8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var13);
        new (&local_1c8) graphics::ModelCombineHelper();
        lVar11 = param_1->HeapBeginPtr();
        local_118 = param_1->end();
        local_b8 = lVar11;
        if (lVar11 != local_118) {
            local_108._16_8_ = local_f0 + 56;
            local_120 = (TextureAtlasQuality*)(local_f0 + 176);
            do {
                eastl::vector<BuildCombinedLocationResult_GroupSection, eastl::allocator>::vector(local_160);
                pBVar27 = (BuildCombinedLocationWorker*)(local_b8 + 24);
                uVar12 = pBVar27->size();
                eastl::vector<BuildCombinedLocationResult_GroupSection, eastl::allocator>::reserve(local_160, uVar12);
                lVar11 = pBVar27->size();
                if (lVar11 != 0) {
                    local_c8 = 1;
                    uVar12 = 0;
                    local_128 = pBVar27;
                    do {
                        puVar15 = (undefined8*)
                            eastl::vector<BuildCombinedLocationRequest_Location*, eastl::allocator>::operator[](
                                (vector<BuildCombinedLocationRequest_Location*, eastl::allocator>*)pBVar27, uVar12);
                        this_01 = (BuildCombinedLocationRequest_Location*)*puVar15;
                        if (*(char*)((long)&this_01->field_100 + 7) == '\0') {
                        LAB_10064d70e:
                            local_a0[0].field_0._0_4_ = GetPerModelConstructedHash(pBVar27, this_01);
                            eastl::hashtable<
                                unsigned int,
                                eastl::pair<unsigned int const, BuildCombinedLocationRequestData_PerModelData>,
                                eastl::allocator,
                                eastl::use_first<
                                    eastl::pair<unsigned int const, BuildCombinedLocationRequestData_PerModelData>>,
                                eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                true>::find((uint*)local_1d8);
                            eastl::hashtable<
                                int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                                eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                            bVar5 = eastl::operator==(local_1d8, (hashtable_iterator_base*)local_a0, extraout_RDX);
                            if (bVar5) {
                                new (local_108) CoordFine((int)this_01->field_4, (float)*(int*)&this_01->field_32,
                                                          (float)*(int*)((long)&this_01->field_32 + 4));
                                pBVar27 = local_a0;
                                new (pBVar27) eastl::fixed_string<char, 64, true, eastl::allocator>();
                                uVar16 = logger::default_logger();
                                uVar9 = GetPerModelConstructedHash(pBVar27, this_01);
                                pcVar17 = CoordFine::ToString<64, true>((CoordFine*)local_108, (fixed_string*)local_a0);
                                logger::Logger::Log(
                                    uVar16, 0, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationWorker.cpp",
                                    249, "Model not present at index %u (hash: %u, location: %s)", (int)local_c8 + -1,
                                    uVar9, pcVar17);
                                /* WARNING: Subroutine does not return */
                                local_a0->~fixed_string();
                            }
                            lVar11 = local_1d8->HeapBeginPtr();
                            this_00 = (shared_ptr*)(lVar11 + 8);
                            bVar5 = operator!=(this_00, (_func_decltype_nullptr*)0);
                            if (!bVar5) {
                                /* WARNING: Subroutine does not return */
                                LogAssert(
                                    "perModelData.m_model != nullptr",
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationWorker.cpp",
                                    253, (char*)0);
                            }
                            pMVar18 =
                                (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_00);
                            cVar4 = pMVar18->GetConstructedState();
                            if (cVar4 != '\x03') {
                                /* WARNING: Subroutine does not return */
                                LogAssert(
                                    "perModelData.m_model->GetConstructedState() == "
                                    "graphics::ModelConstructedState::DATA_MAT_AND_ATLAS",
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationWorker.cpp",
                                    254, (char*)0);
                            }
                            iVar10 = this_01->MakeExternalID();
                            pMVar18 =
                                (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_00);
                            cVar4 = pMVar18->GetConstructedState();
                            if (cVar4 != '\x03') {
                                /* WARNING: Subroutine does not return */
                                LogAssert(
                                    "perModelData.m_model->GetConstructedState() == "
                                    "graphics::ModelConstructedState::DATA_MAT_AND_ATLAS",
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationWorker.cpp",
                                    259, (char*)0);
                            }
                            pMVar18 =
                                (Model*)shared_ptr<graphics::Model>::operator*((shared_ptr<graphics::Model>*)this_00);
                            local_108._0_4_ = 1.4013e-45;
                            bucket_make_unique<graphics::Model, graphics::Model&, graphics::ModelCopyType>(
                                (jag*)local_a0, pMVar18, (ModelCopyType*)local_108);
                            this_03 = eastl::vector<std::unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>,
                                                    BucketAllocatorEASTL>::
                                emplace_back<std::unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>>(
                                    local_140, (unique_ptr*)local_a0);
                            local_a0->~unique_ptr();
                            pMVar18 =
                                (Model*)std::unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>::operator->(
                                    (unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>*)this_03);
                            pMVar18->StartTransform();
                            pMVar18 =
                                (Model*)std::unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>::operator->(
                                    (unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>*)this_03);
                            pMVar18->SetExternalID(iVar10, true);
                            pMVar18 =
                                (Model*)std::unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>::operator->(
                                    (unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>*)this_03);
                            pMVar18->SetSavedModelHash(*(uint*)(lVar11 + 24));
                            pMVar18 =
                                (Model*)std::unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>::operator->(
                                    (unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>*)this_03);
                            puVar24 = this_01->field_48;
                            lVar11 = puVar24->y();
                            pMVar18->Scale((Vector3T*)(lVar11 + 32));
                            local_cc = iVar10;
                            uVar6 = puVar24->GetShape();
                            local_a8 = (float)CONCAT31(local_a8._1_3_, uVar6);
                            uVar7 = puVar24->GetRot();
                            local_a4 = (float)(int)(short)this_01->field_176;
                            uVar6 = this_01->field_178;
                            local_c0 = (LocData*)puVar24;
                            lVar11 = puVar24->y();
                            this_02 = local_c0;
                            LocShapes::GetShapeOffsetAndRotation(&local_ac, &local_d4, &local_d0, local_a8._0_1_, uVar7,
                                                                 local_a4, uVar6, lVar11 + 32);
                            local_a4 = local_ac;
                            bVar8 = this_02->GetRot();
                            if ((float)bVar8 * 1.5707964 == local_a4) {
                                cVar4 = this_02->GetRot();
                                if (cVar4 != '\0') {
                                    pMVar18 = (Model*)std::unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>::
                                              operator->((
                                                  unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>*)this_03);
                                    uVar6 = this_02->GetRot();
                                    pMVar18->Rotate90(uVar6, 1);
                                }
                            } else {
                                new (local_a0) math::QuaternionT<float>();
                                local_a0->FromAxisAngle(PTR_UP_100ee66d0, local_ac);
                                pMVar18 =
                                    (Model*)
                                        std::unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>::operator->(
                                            (unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>*)this_03);
                                pMVar18->Rotate(local_a0, true);
                            }
                            if ((*(char*)((long)&this_01->field_113 + 7) == '\0') &&
                                (*(int*)&this_01->field_112 != 0)) {
                                cVar4 = ((this_01->field_128 + 24))->empty();
                                if (cVar4 != '\0') {
                                    cVar4 = this_01->field_128->empty();
                                    if (cVar4 != '\0')
                                        goto LAB_10064dab0;
                                }
                                std::unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>::operator*(
                                    (unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>*)this_03);
                                HillChangeLocation();
                            }
                        LAB_10064dab0:
                            new (local_108) math::ColourHSL((float)local_d4, 0.0, (float)local_d0);
                            pMVar18 =
                                (Model*)std::unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>::operator->(
                                    (unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>*)this_03);
                            pMVar18->Translate(local_108);
                            pMVar18 =
                                (Model*)std::unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>::operator->(
                                    (unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>*)this_03);
                            pQVar19 = (QuaternionT*)this_02->y();
                            pMVar18->Rotate(pQVar19, true);
                            puVar24 = &this_01->field_10;
                            pvVar20 = puVar24->SSOBeginPtr(pQVar19);
                            local_a4 = (float)(int)*(short*)pvVar20;
                            psVar21 = (short*)puVar24->z();
                            sVar2 = *psVar21;
                            psVar21 = (short*)(&this_01->field_16)->z();
                            local_a8 = (float)((int)*psVar21 + (int)sVar2);
                            psVar21 = (short*)puVar24->y();
                            new (&local_170) math::ColourHSL(local_a4, local_a8, (float)(int)*psVar21);
                            lVar11 = local_c0->y();
                            math::Vector3T<float>::operator+=((Vector3T<float>*)&local_170, (Vector3T*)(lVar11 + 16));
                            pMVar18 =
                                (Model*)std::unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>::operator->(
                                    (unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>*)this_03);
                            pMVar18->Translate((Vector3T*)&local_170);
                            uVar26 = *(uint*)&this_01->field_40;
                            uVar28 = uVar26 + 127;
                            if (-1 < (short)uVar26) {
                                uVar28 = uVar26;
                            }
                            uVar3 = *(ushort*)((long)&this_01->field_40 + 2);
                            uVar26 = uVar3 + 127;
                            if (-1 < (short)uVar3) {
                                uVar26 = (uint)uVar3;
                            }
                            pMVar18 =
                                (Model*)std::unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>::operator->(
                                    (unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>*)this_03);
                            uVar1 = *(uchar*)((long)&this_01->field_8 + 1);
                            pMVar18->BakeTile(this_01->field_5, *(uchar*)&this_01->field_8, uVar1,
                                              this_01->field_6 + *(uchar*)&this_01->field_8, this_01->field_7 + uVar1,
                                              (uchar)(uVar28 >> 7), (uchar)(uVar26 >> 7));
                            iVar10 = local_cc;
                            pMVar18 =
                                (Model*)std::unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>::operator->(
                                    (unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>*)this_03);
                            pMVar18->EndTransform(true);
                            pMVar18 =
                                (Model*)std::unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>::operator->(
                                    (unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>*)this_03);
                            pMVar18->UpdateAABB();
                            bVar5 = shared_ptr::operator_cast_to_bool(&local_e8);
                            if (!bVar5) {
                                make_shared<graphics::Model>((jag*)local_a0);
                                shared_ptr<graphics::Model>::operator=((shared_ptr<graphics::Model>*)&local_e8,
                                                                       (shared_ptr*)local_a0);
                                local_a0->~shared_ptr();
                                pMVar18 = (Model*)local_e8.end();
                                local_1c8.Reset(pMVar18, false);
                            }
                            pMVar18 = (Model*)this_03->get();
                            local_1c8.Combine(pMVar18, local_120, *(bool*)(local_f0 + 212));
                            piVar22 = (int*)
                                eastl::vector<BuildCombinedLocationResult_GroupSection, eastl::allocator>::push_back(
                                    local_160);
                            *piVar22 = iVar10;
                            piVar22[1] = (int)this_01->field_4;
                            piVar22[2] = (int)(char)this_01->field_5;
                            piVar22[3] = (int)*(char*)((long)&this_01->field_100 + 2);
                            *(undefined2*)(piVar22 + 4) = *(undefined2*)((long)&this_01->field_40 + 6);
                            *(undefined2*)((long)piVar22 + 18) = *(undefined2*)((long)&this_01->field_40 + 4);
                            piVar22[5] = (int)*(short*)((long)&this_01->field_24 + 4);
                            piVar22[6] = (int)*(short*)((long)&this_01->field_24 + 6);
                            this_04 = (NXTPixToolkit*)
                                          std::unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>::operator->(
                                              (unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>*)this_03);
                            pAVar23 = (AABB*)this_04->GetScreen();
                            math::AABB::operator=((AABB*)(piVar22 + 12), pAVar23);
                            ((piVar22 + 7))->SetXYZ((Vector3T*)&local_170);
                            sVar2 = (short)*(undefined4*)&this_01->field_40;
                            sVar25 = sVar2 + 127;
                            if (-1 < sVar2) {
                                sVar25 = sVar2;
                            }
                            piVar22[10] = (int)sVar25 >> 7;
                            sVar2 = *(short*)((long)&this_01->field_40 + 2);
                            sVar25 = sVar2 + 127;
                            if (-1 < sVar2) {
                                sVar25 = sVar2;
                            }
                            piVar22[11] = (int)sVar25 >> 7;
                            *(undefined1*)(piVar22 + 45) = *(undefined1*)((long)&this_01->field_100 + 7);
                            *(undefined1*)(piVar22 + 47) = *(undefined1*)((long)&this_01->field_108 + 1);
                            *(undefined1*)(piVar22 + 20) = *(undefined1*)((long)&this_01->field_100 + 3);
                            piVar22[21] = *(int*)this_01;
                            LocData::operator=((LocData*)(piVar22 + 22), local_c0);
                            *(undefined1*)(piVar22 + 35) = *(undefined1*)((long)&this_01->field_100 + 1);
                            piVar22[46] = (int)(short)this_01->field_176;
                        } else {
                            pBVar27 = (BuildCombinedLocationWorker*)&this_01->field_232;
                            cVar4 = pBVar27->empty();
                            if ((cVar4 == '\0') || (*(int*)&this_01->field_184 != -1))
                                goto LAB_10064d70e;
                        }
                        pBVar27 = local_128;
                        iVar10 = (int)local_c8;
                        uVar12 = local_c8 & 4294967295;
                        uVar14 = local_128->size();
                        local_c8 = (ulong)(iVar10 + 1);
                    } while (uVar12 < uVar14);
                }
                bVar5 = shared_ptr::operator_cast_to_bool(&local_e8);
                if (bVar5) {
                    local_1c8.FinishCombine();
                    puVar24 = (undefined1*)
                        eastl::vector<BuildCombinedLocationResult_CombinedLocation, eastl::allocator>::push_back(
                            local_110);
                    pMVar18 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)&local_e8);
                    uVar6 = pMVar18->HasOpaqueOrTestedFaces();
                    puVar24[1] = uVar6;
                    pMVar18 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)&local_e8);
                    uVar6 = pMVar18->HasAlphaBlendedFaces();
                    *puVar24 = uVar6;
                    puVar24[2] = *(undefined1*)(local_b8 + 18);
                    puVar24[3] = *(undefined1*)(local_b8 + 19);
                    eastl::vector<LocationAudioProperties, eastl::allocator>::operator=(
                        (vector<LocationAudioProperties, eastl::allocator>*)(puVar24 + 88), (vector*)(local_b8 + 56));
                    ((puVar24 + 8))->swap(local_160);
                    shared_ptr<graphics::Model>::operator=((shared_ptr<graphics::Model>*)(puVar24 + 120), &local_e8);
                    shared_ptr<graphics::Model>::reset();
                    eastl::vector<std::unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>,
                                  BucketAllocatorEASTL>::clear(local_140);
                }
                eastl::vector<BuildCombinedLocationResult_GroupSection, eastl::allocator>::~vector(local_160);
                local_b8 = local_b8 + 88;
            } while (local_b8 != local_118);
        }
        local_1c8.~ModelCombineHelper();
        local_e8.~shared_ptr();
        eastl::vector<std::unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>, BucketAllocatorEASTL>::~vector(
            local_140);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10064df60, 672 bytes, placed by class name and debug map
    // BuildCombinedLocationWorker::UploadCombinedLocations(shared_ptr<BuildCombinedLocationResultData> const&)
    void BuildCombinedLocationWorker::UploadCombinedLocations(shared_ptr* param_1) {
        shared_ptr<graphics::Model>* this_00;
        char cVar1;
        bool bVar2;
        MapArea* this_01;
        long lVar3;
        RenderDevice* this_02;
        RenderContext* pRVar4;
        long lVar5;
        WaterType* this_03;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_04;
        uint* puVar6;
        uint* puVar7;
        undefined8 uVar8;
        undefined8* puVar9;
        Model* pMVar10;
        hashtable_iterator_base* extraout_RDX;
        equal_to local_2118[16];
        hash local_2108[16];
        shared_ptr<graphics::Model>* local_20f8;
        long local_20f0;
        long local_20e8;
        lock_guard<render::RenderContext> local_20e0[12];
        uint local_20d4;
        fixed_hash_map<unsigned int, graphics::Model_const*, 256ul, 257ul, true, eastl::hash<unsigned int>,
                       eastl::equal_to<unsigned int>, false, eastl::allocator>
            local_20d0[8344];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_01 = (MapArea*)Instance();
        lVar3 = this_01->GetOrigin();
        if (*(char*)(lVar3 + 227) != '\0') {
            this_02 = (RenderDevice*)this_01->Instance();
            pRVar4 = (RenderContext*)this_02->GetCurrentThreadRenderContext();
            lock_guard<render::RenderContext>::lock_guard(local_20e0, pRVar4);
            field_8->end();
            lVar3 = shared_ptr<BuildCombinedLocationResultData>::operator->(
                (shared_ptr<BuildCombinedLocationResultData>*)param_1);
            lVar5 = ((lVar3 + 32))->HeapBeginPtr();
            local_20e8 = ((lVar3 + 32))->end();
            if (lVar5 != local_20e8) {
                do {
                    this_03 = (WaterType*)shared_ptr<graphics::Model>::operator->(
                        (shared_ptr<graphics::Model>*)(lVar5 + 120));
                    this_04 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                                  this_03->GetEmissiveUVScale();
                    cVar1 = eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(this_04);
                    if (cVar1 != '\0') {
                        /* WARNING: Subroutine does not return */
                        LogAssert("!locationHashList.empty()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationWorker.cpp",
                                  380, (char*)0);
                    }
                    local_20f8 = (shared_ptr<graphics::Model>*)(lVar5 + 120);
                    local_20f0 = lVar5;
                    eastl::fixed_hash_map<unsigned int, graphics::Model_const*, 256ul, 257ul, true,
                                          eastl::hash<unsigned int>, eastl::equal_to<unsigned int>, false,
                                          eastl::allocator>::fixed_hash_map(local_20d0, local_2108, local_2118);
                    puVar6 = (uint*)this_04->HeapBeginPtr();
                    puVar7 = (uint*)this_04->end();
                    this_00 = local_20f8;
                    for (; local_20f8 = this_00, puVar6 != puVar7; puVar6 = puVar6 + 1) {
                        local_20d4 = *puVar6;
                        eastl::hashtable<unsigned int,
                                         eastl::pair<unsigned int const, BuildCombinedLocationRequestData_PerModelData>,
                                         eastl::allocator,
                                         eastl::use_first<eastl::pair<unsigned int const,
                                                                      BuildCombinedLocationRequestData_PerModelData>>,
                                         eastl::equal_to<unsigned int>, eastl::hash<unsigned int>,
                                         eastl::mod_range_hashing, eastl::default_ranged_hash,
                                         eastl::prime_rehash_policy, false, true, true>::find((uint*)local_2108);
                        eastl::hashtable<
                            int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                            eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                            eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                        bVar2 =
                            eastl::operator!=((eastl*)local_2108, (hashtable_iterator_base*)local_2118, extraout_RDX);
                        if (!bVar2) {
                            /* WARNING: Subroutine does not return */
                            LogAssert(
                                "perModelData != requestData.m_perModelData.end()",
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationWorker.cpp",
                                387, (char*)0);
                        }
                        lVar3 = local_2108->HeapBeginPtr();
                        uVar8 = ((lVar3 + 8))->end();
                        puVar9 = (undefined8*)eastl::hash_map<
                            unsigned int, graphics::Model_const*, eastl::hash<unsigned int>,
                            eastl::equal_to<unsigned int>,
                            eastl::fixed_hashtable_allocator<258ul, 24ul, 256ul, 8ul, 0ul, true, eastl::allocator>,
                            false>::operator[]((hash_map<unsigned int, graphics::Model_const*,
                                                         eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                                                         eastl::fixed_hashtable_allocator<258ul, 24ul, 256ul, 8ul, 0ul,
                                                                                          true, eastl::allocator>,
                                                         false>*)local_20d0,
                                               &local_20d4);
                        *puVar9 = uVar8;
                        this_00 = local_20f8;
                    }
                    pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->(this_00);
                    pMVar10->ConstructAtlasFromWorker(local_20d0, 0);
                    pMVar10 = (Model*)shared_ptr<graphics::Model>::operator->(this_00);
                    pMVar10->ConstructFinishAndUpload();
                    local_20d0->~fixed_hash_map();
                    lVar5 = local_20f0 + 136;
                } while (lVar5 != local_20e8);
            }
            local_20e0->~lock_guard();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10064e200, 1344 bytes, placed by class name and debug map
    // BuildCombinedLocationWorker::GenerateIndividualLocations(eastl::vector<BuildCombinedLocationRequest_Location*, BucketAllocatorEASTL>&, shared_ptr<BuildCombinedLocationResultData> const&)
    void BuildCombinedLocationWorker::GenerateIndividualLocations(vector* param_1, shared_ptr* param_2) {
        shared_ptr<graphics::Model>* this_00;
        undefined1* this_01;
        uchar uVar1;
        ushort uVar2;
        BuildCombinedLocationRequest_Location* this_02;
        short sVar3;
        char cVar5;
        undefined4 uVar6;
        int iVar7;
        long lVar8;
        MapArea* pMVar9;
        long lVar10;
        RenderDevice* this_03;
        RenderContext* pRVar11;
        ulong uVar12;
        undefined8* puVar13;
        undefined8 uVar14;
        char* pcVar15;
        Model* pMVar16;
        MakeSharedPool<graphics::Model, 3072>* this_04;
        Model* pMVar17;
        int* piVar18;
        short sVar19;
        uint uVar20;
        uint uVar21;
        ModelCopyType* in_RCX;
        hashtable_iterator_base* extraout_RDX;
        ulong uVar22;
        BuildCombinedLocationWorker* this_05;
        eastl local_f8[16];
        unique_lock<render::RenderContext> local_e8[16];
        BuildCombinedLocationWorker* local_d8;
        ulong local_d0;
        long local_c8;
        vector<BuildCombinedLocationResult_UncombinableLocation, eastl::allocator>* local_c0;
        CoordFine local_b8;
        signed local_a1;
        BuildCombinedLocationWorker local_a0[3];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        lVar8 = field_8->end();
        local_c0 = (vector<BuildCombinedLocationResult_UncombinableLocation, eastl::allocator>*)
            shared_ptr<BuildCombinedLocationResultData>::operator*(
                (shared_ptr<BuildCombinedLocationResultData>*)param_2);
        pMVar9 = (MapArea*)param_2->Instance();
        lVar10 = pMVar9->GetOrigin();
        local_c8 = lVar8;
        if (*(char*)(lVar10 + 227) == '\0') {
            std::unique_lock<render::RenderContext>::unique_lock(local_e8);
        } else {
            this_03 = (RenderDevice*)pMVar9->Instance();
            pRVar11 = (RenderContext*)this_03->GetCurrentThreadRenderContext();
            std::unique_lock<render::RenderContext>::unique_lock(local_e8, pRVar11);
        }
        lVar8 = param_1->size();
        if (lVar8 != 0) {
            local_c8 = local_c8 + 56;
            local_c0 = local_c0 + 64;
            uVar22 = 0;
            local_d8 = (BuildCombinedLocationWorker*)param_1;
            do {
                local_d0 = uVar22;
                puVar13 = (undefined8*)
                    eastl::vector<BuildCombinedLocationRequest_Location*, BucketAllocatorEASTL>::operator[](
                        (vector<BuildCombinedLocationRequest_Location*, BucketAllocatorEASTL>*)param_1, uVar22);
                this_02 = (BuildCombinedLocationRequest_Location*)*puVar13;
                local_a0[0].field_0._0_4_ = GetPerModelConstructedHash((BuildCombinedLocationWorker*)param_1, this_02);
                eastl::hashtable<
                    unsigned int, eastl::pair<unsigned int const, BuildCombinedLocationRequestData_PerModelData>,
                    eastl::allocator,
                    eastl::use_first<eastl::pair<unsigned int const, BuildCombinedLocationRequestData_PerModelData>>,
                    eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((uint*)local_f8);
                eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                if (eastl::operator==(local_f8, (hashtable_iterator_base*)local_a0, extraout_RDX)) {
                    new (&local_b8) CoordFine((int)this_02->field_4, (float)*(int*)&this_02->field_32,
                                              (float)*(int*)((long)&this_02->field_32 + 4));
                    this_05 = local_a0;
                    new (local_a0) eastl::fixed_string<char, 64, true, eastl::allocator>();
                    uVar14 = logger::default_logger();
                    uVar6 = GetPerModelConstructedHash(this_05, this_02);
                    pcVar15 = CoordFine::ToString<64, true>(&local_b8, (fixed_string*)local_a0);
                    logger::Logger::Log(
                        uVar14, 0, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                        "assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationWorker.cpp",
                        420, "Model not present at index %u (hash: %u, location: %s)", (int)local_d0, uVar6, pcVar15);
                    /* WARNING: Subroutine does not return */
                    local_a0->~fixed_string();
                }
                lVar8 = local_f8->HeapBeginPtr();
                this_00 = (shared_ptr<graphics::Model>*)(lVar8 + 8);
                pMVar16 = (Model*)shared_ptr<graphics::Model>::operator->(this_00);
                cVar5 = pMVar16->GetConstructedState();
                if (cVar5 != '\x03') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("perModelData.m_model->GetConstructedState() == "
                              "graphics::ModelConstructedState::DATA_MAT_AND_ATLAS",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationWorker.cpp",
                              425, (char*)0);
                }
                this_04 = (MakeSharedPool<graphics::Model, 3072>*)shared_ptr<graphics::Model>::operator*(this_00);
                local_b8.field_0 = 1;
                MakeSharedPool<graphics::Model, 3072>::MakeShared<graphics::Model&, graphics::ModelCopyType>(
                    (shared_ptr*)local_a0, this_04, (Model*)&local_b8, in_RCX);
                pMVar16 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)local_a0);
                pMVar16->StartTransform();
                pMVar16 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)local_a0);
                iVar7 = this_02->MakeExternalID();
                pMVar16->SetExternalID(iVar7, true);
                pMVar16 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)local_a0);
                pMVar16->SetSavedModelHash(*(uint*)(lVar8 + 24));
                if ((*(char*)((long)&this_02->field_113 + 7) == '\0') && (*(int*)&this_02->field_112 != 0)) {
                    cVar5 = this_02->field_128->empty();
                    if (cVar5 != '\0') {
                        cVar5 = ((this_02->field_128 + 24))->empty();
                        if (cVar5 != '\0')
                            goto LAB_10064e4d0;
                    }
                    this_02->field_48->GetRot();
                    HillChangeUncombinableLocation();
                }
            LAB_10064e4d0:
                uVar21 = *(uint*)&this_02->field_40;
                uVar20 = uVar21 + 127;
                if (-1 < (short)uVar21) {
                    uVar20 = uVar21;
                }
                local_b8.field_0 = CONCAT31(local_b8.field_0._1_3_, (char)(uVar20 >> 7));
                uVar2 = *(ushort*)((long)&this_02->field_40 + 2);
                uVar21 = uVar2 + 127;
                if (-1 < (short)uVar2) {
                    uVar21 = (uint)uVar2;
                }
                local_a1 = SUB41(uVar21 >> 7, 0);
                this_01 = this_02->field_48;
                cVar5 = this_01->GetRot();
                if (cVar5 == '\x01') {
                LAB_10064e51c:
                    eastl::swap<signed char>((signed*)&local_b8, &local_a1);
                } else {
                    cVar5 = this_01->GetRot();
                    if (cVar5 == '\x03')
                        goto LAB_10064e51c;
                }
                pMVar16 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)local_a0);
                uVar1 = *(uchar*)((long)&this_02->field_8 + 1);
                pMVar16->BakeTile(this_02->field_5, *(uchar*)&this_02->field_8, uVar1,
                                  this_02->field_6 + *(uchar*)&this_02->field_8, this_02->field_7 + uVar1,
                                  (uchar)local_b8.field_0, (uchar)local_a1);
                pMVar16 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)local_a0);
                pMVar16->EndTransform(true);
                pMVar16 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)local_a0);
                pMVar16->UpdateAABB();
                pMVar9 = (MapArea*)pMVar16->Instance();
                lVar8 = pMVar9->GetOrigin();
                if (*(char*)(lVar8 + 227) != '\0') {
                    pMVar16 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)local_a0);
                    pMVar17 = (Model*)this_00->end();
                    pMVar16->ConstructAtlasFromWorker(0, pMVar17);
                    pMVar16 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)local_a0);
                    pMVar16->ConstructFinishAndUpload();
                }
                piVar18 =
                    (int*)eastl::vector<BuildCombinedLocationResult_UncombinableLocation, eastl::allocator>::push_back(
                        local_c0);
                *piVar18 = (int)this_02->field_4;
                piVar18[1] = (int)*(char*)((long)&this_02->field_100 + 2);
                piVar18[2] = *(int*)this_02;
                *(undefined1*)(piVar18 + 3) = *(undefined1*)((long)&this_02->field_100 + 1);
                LocData::operator=((LocData*)(piVar18 + 4), (LocData*)this_01);
                *(undefined1*)(piVar18 + 17) = *(undefined1*)((long)&this_02->field_100 + 6);
                piVar18[18] = (int)(short)this_02->field_176;
                *(undefined1*)(piVar18 + 19) = this_02->field_178;
                piVar18[20] = (int)*(short*)((long)&this_02->field_24 + 4);
                piVar18[21] = (int)*(short*)((long)&this_02->field_24 + 6);
                *(undefined1*)(piVar18 + 24) = *(undefined1*)&this_02->field_108;
                shared_ptr<graphics::Model>::operator=((shared_ptr<graphics::Model>*)(piVar18 + 26),
                                                       (shared_ptr*)local_a0);
                sVar3 = (short)*(undefined4*)&this_02->field_40;
                sVar19 = sVar3 + 127;
                if (-1 < sVar3) {
                    sVar19 = sVar3;
                }
                piVar18[22] = (int)sVar19 >> 7;
                uVar2 = *(ushort*)((long)&this_02->field_40 + 2);
                uVar21 = uVar2 + 127;
                if (-1 < (short)uVar2) {
                    uVar21 = (uint)uVar2;
                }
                in_RCX = (ModelCopyType*)(ulong)uVar21;
                piVar18[23] = (int)(short)uVar21 >> 7;
                local_a0->~shared_ptr();
                param_1 = (vector*)local_d8;
                uVar22 = (ulong)((int)local_d0 + 1);
                uVar12 = local_d8->size();
            } while (uVar22 < uVar12);
        }
        std::unique_lock<render::RenderContext>::~unique_lock(local_e8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10064eab0, 320 bytes, placed by class name and debug map
    // BuildCombinedLocationWorker::HillChangeLocation(BuildCombinedLocationRequest_Location&, graphics::Model&, Rotation90)
    void BuildCombinedLocationWorker::HillChangeLocation(undefined8 param_1_00, long param_1, Model* param_2,
                                                         undefined4 param_4) {
        short sVar1;
        short sVar2;
        uint uVar3;
        undefined4 uVar4;
        char cVar5;
        short* psVar6;
        Matrix44T local_98;
        undefined4 local_4c;
        long local_48;
        Model* local_40;

        if (*(int*)(param_1 + 112) == 3) {
            uVar3 = *(uint*)(param_1 + 116);
            local_40 = param_2;
            new (&local_98) math::Matrix44T<float>();
            local_48 = param_1 + 128;
            psVar6 = (short*)((param_1 + 10))->z();
            cVar5 = graphics::LocationHelpers::CalculateHillRotateMatrix(
                &local_98, (uVar3 & 255) << 2, uVar3 >> 6 & 1020, uVar3 >> 14 & 1020, uVar3 >> 22 & 4294967292,
                (undefined1)param_4, local_48, (int)*psVar6);
            if (cVar5 != '\0') {
                local_40->Transform(&local_98);
            }
        } else {
            param_2->UpdateAABB();
            local_4c = *(undefined4*)(param_1 + 112);
            uVar4 = *(undefined4*)(param_1 + 116);
            sVar1 = *(short*)(param_1 + 40);
            sVar2 = *(short*)(param_1 + 42);
            local_48 = param_1 + 128;
            local_40 = (Model*)(param_1 + 152);
            psVar6 = (short*)((param_1 + 10))->z();
            param_2->HillChange(local_4c, uVar4, (int)sVar1, (int)sVar2, (undefined1)param_4, local_48, local_40,
                                (int)*psVar6);
        }
    }

    // 0x10064ef40, 352 bytes, placed by class name and debug map
    // BuildCombinedLocationWorker::HillChangeUncombinableLocation(BuildCombinedLocationRequest_Location&, shared_ptr<graphics::Model> const&, Rotation90)
    void BuildCombinedLocationWorker::HillChangeUncombinableLocation(undefined8 param_1_00, long param_1,
                                                                     shared_ptr<graphics::Model>* param_2,
                                                                     undefined4 param_4) {
        short sVar1;
        uint uVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        char cVar5;
        short* psVar6;
        Model* pMVar7;
        Matrix44T local_98;
        int local_4c;
        long local_48;
        shared_ptr<graphics::Model>* local_40;

        if (*(int*)(param_1 + 112) == 3) {
            uVar2 = *(uint*)(param_1 + 116);
            local_40 = param_2;
            new (&local_98) math::Matrix44T<float>();
            local_48 = param_1 + 128;
            psVar6 = (short*)((param_1 + 10))->z();
            cVar5 = graphics::LocationHelpers::CalculateHillRotateMatrix(
                &local_98, (uVar2 & 255) << 2, uVar2 >> 6 & 1020, uVar2 >> 14 & 1020, uVar2 >> 22 & 4294967292,
                (undefined1)param_4, local_48, (int)*psVar6);
            if (cVar5 != '\0') {
                pMVar7 = (Model*)shared_ptr<graphics::Model>::operator->(local_40);
                pMVar7->SetLocalTransform(&local_98);
            }
        } else {
            pMVar7 = (Model*)shared_ptr<graphics::Model>::operator->(param_2);
            pMVar7->UpdateAABB();
            pMVar7 = (Model*)shared_ptr<graphics::Model>::operator->(param_2);
            uVar3 = *(undefined4*)(param_1 + 112);
            uVar4 = *(undefined4*)(param_1 + 116);
            sVar1 = *(short*)(param_1 + 40);
            local_4c = (int)*(short*)(param_1 + 42);
            local_48 = param_1 + 128;
            local_40 = (shared_ptr<graphics::Model>*)(param_1 + 152);
            psVar6 = (short*)((param_1 + 10))->z();
            pMVar7->HillChange(uVar3, uVar4, (int)sVar1, local_4c, (undefined1)param_4, local_48, local_40,
                               (int)*psVar6);
        }
    }

} // namespace jag::game

namespace jag {
    // 0x10064ea10, 112 bytes, inline, placed by debug map only (low confidence)
    // std::enable_if<!std::is_array<graphics::Model>::value, std::unique_ptr<graphics::Model, BucketDeleter<graphics::Model> > >::type bucket_make_unique<graphics::Model, graphics::Model&, graphics::ModelCopyType>(graphics::Model&, graphics::ModelCopyType&&)
    /* std::enable_if<!std::is_array<graphics::Model>::value, std::unique_ptr<graphics::Model,
   BucketDeleter<graphics::Model> > >::type bucket_make_unique<graphics::Model,
   graphics::Model&, graphics::ModelCopyType>(graphics::Model&,
   graphics::ModelCopyType&&) */

    jag* bucket_make_unique<graphics::Model, graphics::Model&, graphics::ModelCopyType>(Model* param_1,
                                                                                        ModelCopyType* param_2) {
        Model* pMVar1;

        pMVar1 = (Model*)BucketManager::Allocate(944, 0, 16);
        if (pMVar1 == (Model*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "ptr != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/make_unique.h",
                37, (char*)0);
        }
        graphics::Model::Model(pMVar1, param_1, *(undefined4*)param_2);
        std::unique_ptr<graphics::Model, BucketDeleter<graphics::Model>>::unique_ptr<true, void>(this, pMVar1);
        return this;
    }

    // 0x10064fbe0, 32 bytes, inline, placed by debug map only (low confidence)
    // game::BuildAnimationRequestData* placement_new<game::BuildAnimationRequestData>(void*)
    BuildAnimationRequestData* placement_new<game::BuildAnimationRequestData>(void* param_1) {
        game::BuildAnimationRequestData::BuildAnimationRequestData(param_1);
        return param_1;
    }

    // 0x10064fc00, 32 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildAnimationRequestData>* placement_new<BucketRefCounter<game::BuildAnimationRequestData>, managed_ptr_counter_and_data<BucketRefCounter<game::BuildAnimationRequestData>, game::BuildAnimationRequestData>*&, game::BuildAnimationRequestData*&>(void*, managed_ptr_counter_and_data<BucketRefCounter<game::BuildAnimationRequestData>, game::BuildAnimationRequestData>*&, game::BuildAnimationRequestData*&)
    BucketRefCounter* jag::placement_new<BucketRefCounter<game::BuildAnimationRequestData>,
                                         managed_ptr_counter_and_data<BucketRefCounter<game::BuildAnimationRequestData>,
                                                                      game::BuildAnimationRequestData>*&,
                                         game::BuildAnimationRequestData*&>(void* param_1,
                                                                            managed_ptr_counter_and_data** param_2,
                                                                            BuildAnimationRequestData** param_3) {
        BucketRefCounter<game::BuildAnimationRequestData>::BucketRefCounter(param_1, *param_2, *param_3, 0);
        return param_1;
    }

} // namespace jag
