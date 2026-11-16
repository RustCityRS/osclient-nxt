// libs/game/runetek5/assetbuilder/jobs/buildanimation/BuildAnimationData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class BuildAnimationRequestData {
    public:
        ~BuildAnimationRequestData();
        BuildAnimationRequestData();

        uint8_t _unknown_0[160];
    };

    class BuildAnimationResultData {
    public:
        ~BuildAnimationResultData();
        BuildAnimationResultData();

        uint8_t _unknown_0[1];
    };

    class BuildCombinedLocationRequestData_PerModelData {
    public:
        ~BuildCombinedLocationRequestData_PerModelData();
        BuildCombinedLocationRequestData_PerModelData();

    private:
        uint8_t _unknown_0[20];
        uint16_t field_20;
        uint8_t _unknown_22[2];
        uint32_t field_24;
        uint8_t _unknown_28[4];
    };

    class BuildCombinedLocationRequest_Location {
    public:
        unsigned int MakeExternalID() const;
        ~BuildCombinedLocationRequest_Location();
        BuildCombinedLocationRequest_Location(
            BuildCombinedLocationRequest_Location&& buildCombinedLocationRequest_Location);
        BuildCombinedLocationRequest_Location();

    private:
        uint8_t _unknown_0[4];
        char field_4;
        uint8_t _unknown_5[1];
        char field_6;
        char field_7;
        uint16_t field_8;
        uint8_t _unknown_10[6];
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint64_t field_40;
        LocData field_48;
        uint8_t _unknown_80[20];
        uint64_t field_100;
        uint16_t field_108;
        uint8_t _unknown_110[3];
        uint64_t field_113;
        uint8_t _unknown_121[7];
        HillData field_128;
        uint8_t _unknown_160[16];
        uint16_t field_176;
        uint8_t field_178;
        uint8_t _unknown_179[5];
        uint64_t field_184;
        uint16_t field_192;
        uint8_t _unknown_194[2];
        uint64_t field_196;
        uint16_t field_204;
        uint8_t _unknown_206[2];
        uint64_t field_208;
        uint64_t field_216;
        uint8_t field_224;
        uint8_t _unknown_225[31];
        uint64_t field_256;
        uint8_t _unknown_264[1];
        uint64_t field_265;
        uint8_t _unknown_273[7];
        uint8_t field_280;
    };

    class BuildCombinedLocationResultData {
    public:
        ~BuildCombinedLocationResultData();
        BuildCombinedLocationResultData();

        uint8_t _unknown_0[72];
    };

    class BuildCombinedLocationResult_CombinableGroup {
    public:
        ~BuildCombinedLocationResult_CombinableGroup();
        BuildCombinedLocationResult_CombinableGroup(
            BuildCombinedLocationResult_CombinableGroup&& buildCombinedLocationResult_CombinableGroup);
        BuildCombinedLocationResult_CombinableGroup();

    private:
        uint64_t field_0;
        uint64_t field_8;
        uint64_t field_16;
        uint8_t _unknown_24[40];
    };

    class BuildCombinedLocationResult_CombinedLocation {
    public:
        ~BuildCombinedLocationResult_CombinedLocation();
        BuildCombinedLocationResult_CombinedLocation(
            BuildCombinedLocationResult_CombinedLocation&& buildCombinedLocationResult_CombinedLocation);
        BuildCombinedLocationResult_CombinedLocation();

    private:
        uint32_t field_0;
        uint8_t _unknown_4[76];
        uint16_t field_80;
        uint8_t field_82;
        uint8_t _unknown_83[45];
    };

    class BuildCombinedLocationResult_UncombinableLocation {
    public:
        ~BuildCombinedLocationResult_UncombinableLocation();
        BuildCombinedLocationResult_UncombinableLocation();
        BuildCombinedLocationResult_UncombinableLocation(
            BuildCombinedLocationResult_UncombinableLocation&& buildCombinedLocationResult_UncombinableLocation);

    private:
        uint64_t field_0;
        uint8_t _unknown_8[8];
        LocData field_16;
        uint8_t _unknown_48[20];
        uint64_t field_68;
        uint8_t _unknown_76[5];
        uint64_t field_81;
        uint64_t field_89;
        uint8_t _unknown_97[15];
    };

    // 0x10064e920
    unsigned int BuildCombinedLocationRequest_Location::MakeExternalID() const {
        char cVar1 = field_4;
        bool cVar2 = field_6;
        bool cVar3 = field_7;
        uint8_t bVar4 = field_48->GetRot();
        uint8_t bVar5 = field_48->GetShape();
        return (unsigned int)field_280 << 23 | (unsigned int)bVar5 << 17 | (unsigned int)bVar4 << 15 | (int)cVar3 << 9 |
               (int)cVar2 << 3 | (int)cVar1 + 1U;
    }

    // 0x10064fd90
    BuildAnimationRequestData::~BuildAnimationRequestData() {
        field_152.~shared_ptr();
        field_128.~Array();
        field_104.~Array();
        field_80.~Array();
        field_64.~shared_ptr();
    }

    // 0x100650eb0
    BuildCombinedLocationRequest_Location::~BuildCombinedLocationRequest_Location() {
        field_232.~Array();
        field_128->~HillData();
    }

    // 0x1006511b0
    BuildCombinedLocationRequestData::~BuildCombinedLocationRequestData() {
        (&field_112)->~mutex();
        field_56.~hash_map();
        field_24.~vector();
    }

    // 0x100651600
    BuildCombinedLocationRequest_Location::BuildCombinedLocationRequest_Location(
        BuildCombinedLocationRequest_Location&& buildCombinedLocationRequest_Location) {
        uint32_t uVar5 = *(uint32_t*)&buildCombinedLocationRequest_Location.field_0;
        char cVar6 = buildCombinedLocationRequest_Location.field_4;
        uint8_t uVar7 = buildCombinedLocationRequest_Location.field_5;
        char cVar8 = buildCombinedLocationRequest_Location.field_6;
        char cVar9 = buildCombinedLocationRequest_Location.field_7;
        uint16_t uVar10 = buildCombinedLocationRequest_Location.field_8;
        uint64_t uVar11 = *(uint64_t*)&buildCombinedLocationRequest_Location.field_10;
        uint64_t uVar1 = buildCombinedLocationRequest_Location.field_16;
        uint64_t uVar2 = buildCombinedLocationRequest_Location.field_24;
        uint64_t uVar3 = buildCombinedLocationRequest_Location.field_40;
        field_32 = buildCombinedLocationRequest_Location.field_32;
        field_40 = uVar3;
        field_16 = uVar1;
        field_24 = uVar2;
        *(uint32_t*)&field_0 = uVar5;
        field_4 = cVar6;
        field_5 = uVar7;
        field_6 = cVar8;
        field_7 = cVar9;
        field_8 = uVar10;
        *(uint64_t*)&field_10 = uVar11;
        new (field_48) LocData(buildCombinedLocationRequest_Location.field_48);
        field_113 = buildCombinedLocationRequest_Location.field_113;
        uVar1 = *(uint64_t*)&buildCombinedLocationRequest_Location.field_108;
        field_100 = buildCombinedLocationRequest_Location.field_100;
        *(uint64_t*)&field_108 = uVar1;
        new (field_128) graphics::HillData(buildCombinedLocationRequest_Location.field_128);
        field_224 = buildCombinedLocationRequest_Location.field_224;
        uVar10 = buildCombinedLocationRequest_Location.field_176;
        uVar7 = buildCombinedLocationRequest_Location.field_178;
        uint64_t uVar12 = *(uint64_t*)&buildCombinedLocationRequest_Location.field_179;
        uVar1 = buildCombinedLocationRequest_Location.field_184;
        uVar2 = *(uint64_t*)&buildCombinedLocationRequest_Location.field_192;
        uVar3 = *(uint64_t*)((long)&buildCombinedLocationRequest_Location.field_196 + 4);
        uint64_t uVar4 = buildCombinedLocationRequest_Location.field_216;
        field_208 = buildCombinedLocationRequest_Location.field_208;
        field_216 = uVar4;
        *(uint64_t*)&field_192 = uVar2;
        *(uint64_t*)((long)&field_196 + 4) = uVar3;
        field_176 = uVar10;
        field_178 = uVar7;
        *(uint64_t*)&field_179 = uVar12;
        field_184 = uVar1;
        new (&field_232) Array<int>(&buildCombinedLocationRequest_Location.field_232);
        uVar1 = buildCombinedLocationRequest_Location.field_256;
        uVar2 = *(uint64_t*)&buildCombinedLocationRequest_Location.field_264;
        uint64_t uVar13 = *(uint64_t*)&buildCombinedLocationRequest_Location.field_273;
        uint8_t bVar14 = buildCombinedLocationRequest_Location.field_280;
        field_265 = buildCombinedLocationRequest_Location.field_265;
        *(uint64_t*)&field_273 = uVar13;
        field_280 = bVar14;
        field_256 = uVar1;
        *(uint64_t*)&field_264 = uVar2;
    }

    // 0x1006517c0
    BuildCombinedLocationRequest_Location::BuildCombinedLocationRequest_Location() {
        *(uint64_t*)this = 4294967295;
        field_8 = 0;
        new (&field_10) math::Vector3T();
        new (&field_16) math::Vector3T();
        new ((Vector3T<unsigned short>*)((long)&field_16 + 6)) math::Vector3T();
        *(uint64_t*)((long)&field_24 + 4) = 0;
        *(uint64_t*)((long)&field_32 + 4) = 0;
        *(uint32_t*)((long)&field_40 + 4) = 0;
        new (field_48) LocData(0, 0);
        field_100 = 0;
        field_108 = 6;
        *(uint64_t*)&field_112 = 0;
        *(uint8_t*)((long)&field_113 + 7) = 0;
        new (field_128) graphics::HillData();
        field_176 = 0;
        field_178 = 0;
        *(uint64_t*)&field_180 = 18446744069414584320;
        *(uint32_t*)((long)&field_184 + 4) = 255;
        field_192 = 0;
        field_196 = 1099511628032;
        field_204 = 0;
        field_208 = 0;
        field_216 = 18446744069414584320;
        field_224 = 0;
        new (&field_232) Array<int>();
        *(uint16_t*)&field_264 = 0;
        field_256 = 0;
        *(uint64_t*)((long)&field_265 + 3) = 0;
        *(uint64_t*)&field_273 = 0;
    }

    // 0x100651c00
    BuildCombinedLocationRequestData_PerModelData::BuildCombinedLocationRequestData_PerModelData()
        : shared_ptr(), field_20(0), field_24(4294967295) {}

    // 0x100652ce0
    BuildCombinedLocationResult_CombinedLocation::~BuildCombinedLocationResult_CombinedLocation() {
        field_120.~shared_ptr();
        field_88.~vector();
        field_40.~vector_map();
        field_8.~vector();
    }

    // 0x100652f80
    BuildCombinedLocationResult_UncombinableLocation::~BuildCombinedLocationResult_UncombinableLocation() {
        field_104.~shared_ptr();
    }

    // 0x100652ff0
    BuildCombinedLocationResult_CombinableGroup::~BuildCombinedLocationResult_CombinableGroup() {
        field_56.~vector();
        field_24.~vector();
    }

    // 0x1006536f0
    BuildCombinedLocationResultData::~BuildCombinedLocationResultData() {
        field_64.~vector();
        field_32.~vector();
    }

    // 0x1006539e0
    BuildCombinedLocationResultData::BuildCombinedLocationResultData()
        : MakeSharedPool<BuildCombinedLocationResultData, 96>(),
          eastl::vector<BuildCombinedLocationResult_CombinableGroup>() {}

    // 0x100654c40
    BuildCombinedLocationResult_CombinableGroup::BuildCombinedLocationResult_CombinableGroup(
        BuildCombinedLocationResult_CombinableGroup&& buildCombinedLocationResult_CombinableGroup)
        : field_16(buildCombinedLocationResult_CombinableGroup.field_16) {
        uint64_t uVar1 = buildCombinedLocationResult_CombinableGroup.field_8;
        field_0 = buildCombinedLocationResult_CombinableGroup.field_0;
        field_8 = uVar1;
        new (&field_24)
            eastl::vector<BuildCombinedLocationRequest_Location*>(buildCombinedLocationResult_CombinableGroup.field_24);
        new (&field_56) eastl::vector<LocationAudioProperties>(buildCombinedLocationResult_CombinableGroup.field_56);
    }

    // 0x100655090
    BuildCombinedLocationResult_CombinableGroup::BuildCombinedLocationResult_CombinableGroup() {
        new (&field_24) eastl::vector<BuildCombinedLocationRequest_Location*>();
        new (&field_56) eastl::vector<LocationAudioProperties>();
    }

    // 0x1006552c0
    LocationAudioProperties::LocationAudioProperties()
        : field_0(1099511627775), field_8(0), field_12(256), field_16(256), field_20(0), field_56(0), field_48(0),
          field_72(4294967295) {}

    // 0x1006554d0
    LocationAudioProperties::LocationAudioProperties(LocationAudioProperties&& locationAudioProperties) {
        *(uint64_t*)((long)&field_12 + 1) = *(uint64_t*)((long)&locationAudioProperties.field_12 + 1);
        uint16_t uVar3 = locationAudioProperties.field_8;
        uint16_t uVar4 = locationAudioProperties.field_10;
        int iVar5 = locationAudioProperties.field_12;
        field_0 = locationAudioProperties.field_0;
        field_8 = uVar3;
        field_10 = uVar4;
        field_12 = iVar5;
        new (&field_24) Array<int>(&locationAudioProperties.field_24);
        uint64_t uVar1 = locationAudioProperties.field_48;
        uint64_t uVar2 = *(uint64_t*)&locationAudioProperties.field_56;
        uint32_t uVar6 = locationAudioProperties.field_68;
        uint32_t uVar7 = locationAudioProperties.field_72;
        field_60 = locationAudioProperties.field_60;
        field_68 = uVar6;
        field_72 = uVar7;
        field_48 = uVar1;
        *(uint64_t*)&field_56 = uVar2;
    }

    // 0x100655750
    BuildCombinedLocationResult_CombinedLocation::BuildCombinedLocationResult_CombinedLocation(
        BuildCombinedLocationResult_CombinedLocation&& buildCombinedLocationResult_CombinedLocation)
        : field_0(buildCombinedLocationResult_CombinedLocation.field_0),
          field_8(buildCombinedLocationResult_CombinedLocation.field_8),
          field_40(buildCombinedLocationResult_CombinedLocation.field_40),
          field_82(buildCombinedLocationResult_CombinedLocation.field_82),
          field_80(buildCombinedLocationResult_CombinedLocation.field_80),
          field_88(buildCombinedLocationResult_CombinedLocation.field_88) {
        field_120.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            buildCombinedLocationResult_CombinedLocation.field_120);
    }

    // 0x100655ef0
    BuildCombinedLocationResult_GroupSection::BuildCombinedLocationResult_GroupSection(
        BuildCombinedLocationResult_GroupSection&& buildCombinedLocationResult_GroupSection) {
        uint32_t uVar5 = buildCombinedLocationResult_GroupSection.field_0;
        uint32_t uVar6 = *(uint32_t*)&buildCombinedLocationResult_GroupSection.field_4;
        uint64_t uVar1 = buildCombinedLocationResult_GroupSection.field_8;
        uint64_t uVar2 = buildCombinedLocationResult_GroupSection.field_16;
        uint64_t uVar3 = buildCombinedLocationResult_GroupSection.field_24;
        uint64_t uVar4 = buildCombinedLocationResult_GroupSection.field_40;
        field_32 = buildCombinedLocationResult_GroupSection.field_32;
        field_40 = uVar4;
        field_16 = uVar2;
        field_24 = uVar3;
        field_0 = uVar5;
        *(uint32_t*)&field_4 = uVar6;
        field_8 = uVar1;
        new (field_48) math::AABB(buildCombinedLocationResult_GroupSection.field_48);
        *(uint64_t*)(field_48 + 32) = *(uint64_t*)(buildCombinedLocationResult_GroupSection.field_48 + 32);
        new (field_88) LocData(buildCombinedLocationResult_GroupSection.field_88);
        field_140 = buildCombinedLocationResult_GroupSection.field_140;
        field_144.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            buildCombinedLocationResult_GroupSection.field_144);
        field_160.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            buildCombinedLocationResult_GroupSection.field_160);
        uVar6 = buildCombinedLocationResult_GroupSection.field_176;
        uint8_t uVar8 = buildCombinedLocationResult_GroupSection.field_180;
        uint32_t uVar9 = *(uint32_t*)&buildCombinedLocationResult_GroupSection.field_181;
        uVar5 = buildCombinedLocationResult_GroupSection.field_184;
        uint8_t uVar7 = buildCombinedLocationResult_GroupSection.field_188;
        *(uint32_t*)&field_181 = *(uint32_t*)&buildCombinedLocationResult_GroupSection.field_181;
        field_184 = uVar5;
        field_188 = uVar7;
        field_176 = uVar6;
        field_180 = uVar8;
        *(uint32_t*)&field_181 = uVar9;
    }

    // 0x100656290
    BuildCombinedLocationResult_GroupSection::BuildCombinedLocationResult_GroupSection() : field_0(4294967295) {
        *(uint64_t*)&field_4 = 0;
        *(uint64_t*)((long)&field_8 + 4) = 0;
        *(uint64_t*)((long)&field_16 + 4) = 0;
        new ((Vector3T<int>*)((long)&field_24 + 4)) math::Vector3T();
        field_40 = 0;
        new (field_48) math::AABB();
        field_48[32] = 0;
        field_84 = 4294967295;
        new (field_88) LocData(0, 0);
        field_140 = 0;
        new (&field_144) shared_ptr();
        new (&field_160) shared_ptr();
        field_176 = 0;
        field_180 = 0;
        field_184 = 4294967295;
        field_188 = 0;
    }

    // 0x100656430
    BuildCombinedLocationResult_CombinedLocation::BuildCombinedLocationResult_CombinedLocation()
        : field_80(0), field_82(0) {
        new (&field_120) shared_ptr();
    }

    // 0x100656870
    LocationAudioProperties*
    LocationAudioProperties::operator=(const LocationAudioProperties& locationAudioProperties) {
        *(uint64_t*)((long)&field_12 + 1) = *(uint64_t*)((long)&locationAudioProperties.field_12 + 1);
        uint16_t uVar1 = locationAudioProperties.field_8;
        uint16_t uVar2 = locationAudioProperties.field_10;
        int iVar3 = locationAudioProperties.field_12;
        field_0 = locationAudioProperties.field_0;
        field_8 = uVar1;
        field_10 = uVar2;
        field_12 = iVar3;
        field_24 = locationAudioProperties.field_24;
        field_48 = locationAudioProperties.field_48;
        field_56 = locationAudioProperties.field_56;
        field_60.SetXYZ(locationAudioProperties.field_60);
        field_72 = locationAudioProperties.field_72;
        return this;
    }

    // 0x100656980
    LocationAudioProperties::LocationAudioProperties(const LocationAudioProperties& locationAudioProperties) {
        *(uint64_t*)((long)&field_12 + 1) = *(uint64_t*)((long)&locationAudioProperties.field_12 + 1);
        uint16_t uVar3 = locationAudioProperties.field_8;
        uint16_t uVar4 = locationAudioProperties.field_10;
        int iVar5 = locationAudioProperties.field_12;
        field_0 = locationAudioProperties.field_0;
        field_8 = uVar3;
        field_10 = uVar4;
        field_12 = iVar5;
        new (&field_24) Array<int>(&locationAudioProperties.field_24);
        uint64_t uVar1 = locationAudioProperties.field_48;
        uint64_t uVar2 = *(uint64_t*)&locationAudioProperties.field_56;
        uint32_t uVar6 = locationAudioProperties.field_68;
        uint32_t uVar7 = locationAudioProperties.field_72;
        field_60 = locationAudioProperties.field_60;
        field_68 = uVar6;
        field_72 = uVar7;
        field_48 = uVar1;
        *(uint64_t*)&field_56 = uVar2;
    }

    // 0x100656b10
    BuildCombinedLocationResult_UncombinableLocation::BuildCombinedLocationResult_UncombinableLocation()
        : field_16(0, 0) {
        new (&field_104) shared_ptr();
    }

    // 0x100656ce0
    BuildCombinedLocationResult_UncombinableLocation::BuildCombinedLocationResult_UncombinableLocation(
        BuildCombinedLocationResult_UncombinableLocation&& buildCombinedLocationResult_UncombinableLocation) {
        uint64_t uVar1 = buildCombinedLocationResult_UncombinableLocation.field_0;
        *(uint64_t*)((long)&field_0 + 5) =
            *(uint64_t*)((long)&buildCombinedLocationResult_UncombinableLocation.field_0 + 5);
        field_0 = uVar1;
        new (field_16) LocData(buildCombinedLocationResult_UncombinableLocation.field_16);
        uVar1 = buildCombinedLocationResult_UncombinableLocation.field_68;
        uint64_t uVar2 = *(uint64_t*)&buildCombinedLocationResult_UncombinableLocation.field_76;
        uint64_t uVar3 = buildCombinedLocationResult_UncombinableLocation.field_89;
        field_81 = buildCombinedLocationResult_UncombinableLocation.field_81;
        field_89 = uVar3;
        field_68 = uVar1;
        *(uint64_t*)&field_76 = uVar2;
        field_104.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            buildCombinedLocationResult_UncombinableLocation.field_104);
    }

} // namespace jag::game

namespace jag {
    // 0x1006503b0
    game::BuildAnimationWorker* placement_new<game::BuildAnimationWorker>(void* arg1) {
        new (arg1) game::BuildAnimationWorker();
        return arg1;
    }

    // 0x1006503d0
    BucketRefCounter<game::BuildAnimationWorker>* placement_new<
        BucketRefCounter<game::BuildAnimationWorker>,
        managed_ptr_counter_and_data<BucketRefCounter<game::BuildAnimationWorker>, game::BuildAnimationWorker>*&,
        game::BuildAnimationWorker*&>(
        void* arg1,
        managed_ptr_counter_and_data<BucketRefCounter<game::BuildAnimationWorker>, game::BuildAnimationWorker>*& arg2,
        game::BuildAnimationWorker*& arg3) {
        new (arg1) BucketRefCounter<game::BuildAnimationWorker>(arg2, arg3, 0);
        return arg1;
    }

    // 0x100650400
    BucketRefCounter<game::BuildAnimationWorker>::BucketRefCounter(void* arg1,
                                                                   game::BuildAnimationWorker* buildAnimationWorker,
                                                                   unsigned int arg3)
        : ref_counter_base() {}

    // 0x100650460
    void BucketRefCounter<game::BuildAnimationWorker>::DeleteSelf() {
        BucketRefCounter<game::BuildAnimationWorker> _vtbl* pBVar1;

        if (*(int*)&this[5]._vptr != 4) {
            pBVar1 = (BucketRefCounter<game::BuildAnimationWorker> _vtbl*)this_thread::GetThreadID();
            if (pBVar1 != this[4]._vptr) {
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, nullptr);
            }
        }
        pBVar1 = this[2]._vptr;
        std::destroy_at(this);
        BucketManager::DeAllocate(pBVar1);
    }

    // 0x100650760
    game::BuildAnimationResultData* placement_new<game::BuildAnimationResultData>(void* arg1) {
        new (arg1) game::BuildAnimationResultData();
        return arg1;
    }

    // 0x100650780
    MakeSharedPoolRefCounter<game::BuildAnimationResultData, MakeSharedPool<game::BuildAnimationResultData, 96>>*
    placement_new<
        MakeSharedPoolRefCounter<game::BuildAnimationResultData, MakeSharedPool<game::BuildAnimationResultData, 96>>,
        MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData*&, game::BuildAnimationResultData*>(
        void* arg1, MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData*& arg2,
        game::BuildAnimationResultData*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::BuildAnimationResultData,
                                            MakeSharedPool<game::BuildAnimationResultData, 96>>(arg2, arg3);
        return arg1;
    }

    // 0x1006509f0
    MakeSharedPoolRefCounter<game::BuildAnimationResultData, MakeSharedPool<game::BuildAnimationResultData, 96>>::
        MakeSharedPoolRefCounter(void* arg1, game::BuildAnimationResultData* buildAnimationResultData)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7ab8 + 16;
        *(void**)(this + 16) = arg1;
        *(BuildAnimationResultData**)(this + 24) = buildAnimationResultData;
    }

    // 0x100650a30
    void MakeSharedPoolRefCounter<game::BuildAnimationResultData,
                                  MakeSharedPool<game::BuildAnimationResultData, 96>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::BuildAnimationResultData, 96>::deallocate(arg1);
    }

    // 0x100651060
    game::BuildCombinedLocationRequestData*
    placement_new<game::BuildCombinedLocationRequestData, eastl::vector<game::LocationContainerLocation> const&, int&,
                  int&>(void* arg1, const eastl::vector<game::LocationContainerLocation>& locationContainerLocations,
                        int& arg3, int& arg4) {
        new (arg1) game::BuildCombinedLocationRequestData(locationContainerLocations, arg3, arg4);
        return arg1;
    }

    // 0x100651080
    BucketRefCounter<game::BuildCombinedLocationRequestData>*
    placement_new<BucketRefCounter<game::BuildCombinedLocationRequestData>,
                  managed_ptr_counter_and_data<BucketRefCounter<game::BuildCombinedLocationRequestData>,
                                               game::BuildCombinedLocationRequestData>*&,
                  game::BuildCombinedLocationRequestData*&>(
        void* arg1,
        managed_ptr_counter_and_data<BucketRefCounter<game::BuildCombinedLocationRequestData>,
                                     game::BuildCombinedLocationRequestData>*& arg2,
        game::BuildCombinedLocationRequestData*& arg3) {
        new (arg1) BucketRefCounter<game::BuildCombinedLocationRequestData>(arg2, arg3, 0);
        return arg1;
    }

    // 0x1006510b0
    BucketRefCounter<game::BuildCombinedLocationRequestData>::BucketRefCounter(
        void* arg1, game::BuildCombinedLocationRequestData* buildCombinedLocationRequestData, unsigned int arg3)
        : ref_counter_base() {}

    // 0x100651110
    void BucketRefCounter<game::BuildCombinedLocationRequestData>::DeleteData() {
        if ((BuildCombinedLocationRequestData*)this[3]._vptr != nullptr) {
            this[3]._vptr->~BuildCombinedLocationRequestData();
            this[3]._vptr = nullptr;
        }
    }

    // 0x100651140
    void BucketRefCounter<game::BuildCombinedLocationRequestData>::DeleteSelf() {
        BucketRefCounter<game::BuildCombinedLocationRequestData> _vtbl* pBVar1;

        if (*(int*)&this[5]._vptr != 4) {
            pBVar1 = (BucketRefCounter<game::BuildCombinedLocationRequestData> _vtbl*)this_thread::GetThreadID();
            if (pBVar1 != this[4]._vptr) {
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, nullptr);
            }
        }
        pBVar1 = this[2]._vptr;
        std::destroy_at(this);
        BucketManager::DeAllocate(pBVar1);
    }

    // 0x100651ec0
    game::BuildCombinedLocationWorker* placement_new<game::BuildCombinedLocationWorker>(void* arg1) {
        new (arg1) game::BuildCombinedLocationWorker();
        return arg1;
    }

    // 0x100651ee0
    BucketRefCounter<game::BuildCombinedLocationWorker>*
    placement_new<BucketRefCounter<game::BuildCombinedLocationWorker>,
                  managed_ptr_counter_and_data<BucketRefCounter<game::BuildCombinedLocationWorker>,
                                               game::BuildCombinedLocationWorker>*&,
                  game::BuildCombinedLocationWorker*&>(
        void* arg1,
        managed_ptr_counter_and_data<BucketRefCounter<game::BuildCombinedLocationWorker>,
                                     game::BuildCombinedLocationWorker>*& arg2,
        game::BuildCombinedLocationWorker*& arg3) {
        new (arg1) BucketRefCounter<game::BuildCombinedLocationWorker>(arg2, arg3, 0);
        return arg1;
    }

    // 0x100651f10
    BucketRefCounter<game::BuildCombinedLocationWorker>::BucketRefCounter(
        void* arg1, game::BuildCombinedLocationWorker* buildCombinedLocationWorker, unsigned int arg3)
        : ref_counter_base() {}

    // 0x100651f70
    void BucketRefCounter<game::BuildCombinedLocationWorker>::DeleteSelf() {
        BucketRefCounter<game::BuildCombinedLocationWorker> _vtbl* pBVar1;

        if (*(int*)&this[5]._vptr != 4) {
            pBVar1 = (BucketRefCounter<game::BuildCombinedLocationWorker> _vtbl*)this_thread::GetThreadID();
            if (pBVar1 != this[4]._vptr) {
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, nullptr);
            }
        }
        pBVar1 = this[2]._vptr;
        std::destroy_at(this);
        BucketManager::DeAllocate(pBVar1);
    }

    // 0x100652820
    game::CombinedLocation*
    placement_new<game::CombinedLocation, graphics::RT7Core&, graphics::GraphNode*&, shared_ptr<game::World> const&,
                  bool&, bool&, bool&, bool&, shared_ptr<graphics::Model>&,
                  eastl::vector<game::BuildCombinedLocationResult_GroupSection>&>(
        void* arg1, graphics::RT7Core& rt7Core, graphics::GraphNode*& arg3, const shared_ptr<game::World>& world,
        bool& arg5, bool& arg6, bool& arg7, bool& arg8, shared_ptr<graphics::Model>& model,
        eastl::vector<game::BuildCombinedLocationResult_GroupSection>& buildCombinedLocationResult_GroupSections) {
        new (arg1) game::CombinedLocation(rt7Core, arg3, world, arg5, arg6, arg7, arg8, model,
                                          buildCombinedLocationResult_GroupSections);
        return arg1;
    }

    // 0x100652870
    MakeSharedPoolRefCounter<game::CombinedLocation, MakeSharedPool<game::CombinedLocation, 128>>*
    placement_new<MakeSharedPoolRefCounter<game::CombinedLocation, MakeSharedPool<game::CombinedLocation, 128>>,
                  MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData*&, game::CombinedLocation*>(
        void* arg1, MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData*& arg2,
        game::CombinedLocation*&& arg3) {
        new (arg1)
            MakeSharedPoolRefCounter<game::CombinedLocation, MakeSharedPool<game::CombinedLocation, 128>>(arg2, arg3);
        return arg1;
    }

    // 0x100652890
    void shared_ptr_do_enable_shared_from_this<game::CombinedLocation>(
        ref_counter_base* ref_counter_base, game::CombinedLocation* combinedLocation,
        game::CombinedLocation::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)combinedLocation);
            local_38 = weak_ptr(local_48);
            combinedLocation->field_192.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x1006529a0
    MakeSharedPoolRefCounter<game::CombinedLocation, MakeSharedPool<game::CombinedLocation, 128>>::
        MakeSharedPoolRefCounter(void* arg1, game::CombinedLocation* combinedLocation)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7a48 + 16;
        *(void**)(this + 16) = arg1;
        *(CombinedLocation**)(this + 24) = combinedLocation;
    }

    // 0x1006529e0
    void MakeSharedPoolRefCounter<game::CombinedLocation, MakeSharedPool<game::CombinedLocation, 128>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::CombinedLocation, 128>::deallocate(arg1);
    }

    // 0x100652e80
    game::Location* placement_new<game::Location, graphics::GraphNode*&, shared_ptr<game::World> const&, int&, int&,
                                  game::LocData&, bool&, bool&, int&, int&, int, int, shared_ptr<graphics::Model>&>(
        void* arg1, graphics::GraphNode*& arg2, const shared_ptr<game::World>& world, int& arg4, int& arg5,
        game::LocData& locData, bool& arg7, bool& arg8, int& arg9, int& arg10, int&& arg11, int&& arg12,
        shared_ptr<graphics::Model>& model) {
        new (arg1) game::Location(arg2, world, arg4, arg5, locData, arg7, arg8, arg9, arg10, arg11, arg12, model);
        return arg1;
    }

    // 0x1006531e0
    game::BuildCombinedLocationResultData* placement_new<game::BuildCombinedLocationResultData>(void* arg1) {
        new (arg1) game::BuildCombinedLocationResultData();
        return arg1;
    }

    // 0x100653200
    MakeSharedPoolRefCounter<game::BuildCombinedLocationResultData,
                             MakeSharedPool<game::BuildCombinedLocationResultData, 96>>*
    placement_new<MakeSharedPoolRefCounter<game::BuildCombinedLocationResultData,
                                           MakeSharedPool<game::BuildCombinedLocationResultData, 96>>,
                  MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData*&,
                  game::BuildCombinedLocationResultData*>(
        void* arg1, MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData*& arg2,
        game::BuildCombinedLocationResultData*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::BuildCombinedLocationResultData,
                                            MakeSharedPool<game::BuildCombinedLocationResultData, 96>>(arg2, arg3);
        return arg1;
    }

    // 0x1006546f0
    MakeSharedPoolRefCounter<game::BuildCombinedLocationResultData,
                             MakeSharedPool<game::BuildCombinedLocationResultData, 96>>::
        MakeSharedPoolRefCounter(void* arg1, game::BuildCombinedLocationResultData* buildCombinedLocationResultData)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7ad8 + 16;
        *(void**)(this + 16) = arg1;
        *(BuildCombinedLocationResultData**)(this + 24) = buildCombinedLocationResultData;
    }

    // 0x100654730
    void MakeSharedPoolRefCounter<game::BuildCombinedLocationResultData,
                                  MakeSharedPool<game::BuildCombinedLocationResultData, 96>>::DeleteData() {
        if (*(BuildCombinedLocationResultData**)(this + 24) != nullptr) {
            (*(BuildCombinedLocationResultData**)(this + 24))->~BuildCombinedLocationResultData();
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x100654760
    void MakeSharedPoolRefCounter<game::BuildCombinedLocationResultData,
                                  MakeSharedPool<game::BuildCombinedLocationResultData, 96>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::BuildCombinedLocationResultData, 96>::deallocate(arg1);
    }

    // 0x100656060
    void BucketDeleter<graphics::Model>::operator()(graphics::Model* model) const {
        unsigned long arg2;

        std::destroy_at(model);
        model->DeAllocate(944, arg2);
    }

} // namespace jag

// 0x100650c50
void sin(float arg1) {
    _sinf();
}

// 0x100650c60
void cos(float arg1) {
    _cosf();
}
