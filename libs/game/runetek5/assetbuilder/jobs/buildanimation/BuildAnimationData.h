// libs/game/runetek5/assetbuilder/jobs/buildanimation/BuildAnimationData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class BuildAnimationRequestData {
    public:
        ~BuildAnimationRequestData();
        BuildAnimationRequestData();

        // data members, from how the methods use this: 160 bytes
        char _unknown_0[160];
    };

    class BuildAnimationResultData {
    public:
        ~BuildAnimationResultData();
        BuildAnimationResultData();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    class BuildCombinedLocationRequestData_PerModelData {
    public:
        ~BuildCombinedLocationRequestData_PerModelData();
        BuildCombinedLocationRequestData_PerModelData();

        // data members, from how the methods use this: 32 bytes
        char _unknown_0[20];
        undefined2 field_20; // offset 20
        char _unknown_22[2];
        undefined4 field_24; // offset 24
        char _unknown_28[4];
    };

    class BuildCombinedLocationRequest_Location {
    public:
        uint MakeExternalID() const;
        ~BuildCombinedLocationRequest_Location();
        BuildCombinedLocationRequest_Location(BuildCombinedLocationRequest_Location&&);
        BuildCombinedLocationRequest_Location();

        // data members, from how the methods use this: 281 bytes
        char _unknown_0[4];
        char field_4; // offset 4
        char _unknown_5[1];
        char field_6;       // offset 6
        char field_7;       // offset 7
        undefined2 field_8; // offset 8
        char _unknown_10[6];
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        undefined8 field_40; // offset 40
        LocData field_48;    // offset 48
        char _unknown_80[20];
        undefined8 field_100; // offset 100
        undefined2 field_108; // offset 108
        char _unknown_110[3];
        undefined8 field_113; // offset 113
        char _unknown_121[7];
        HillData field_128; // offset 128
        char _unknown_160[16];
        undefined2 field_176; // offset 176
        undefined1 field_178; // offset 178
        char _unknown_179[5];
        undefined8 field_184; // offset 184
        undefined2 field_192; // offset 192
        char _unknown_194[2];
        undefined8 field_196; // offset 196
        undefined2 field_204; // offset 204
        char _unknown_206[2];
        undefined8 field_208; // offset 208
        undefined8 field_216; // offset 216
        undefined1 field_224; // offset 224
        char _unknown_225[31];
        undefined8 field_256; // offset 256
        char _unknown_264[1];
        undefined8 field_265; // offset 265
        char _unknown_273[7];
        byte field_280; // offset 280
    };

    class BuildCombinedLocationResultData {
    public:
        ~BuildCombinedLocationResultData();
        BuildCombinedLocationResultData();

        // data members, from how the methods use this: 72 bytes
        char _unknown_0[72];
    };

    class BuildCombinedLocationResult_CombinableGroup {
    public:
        ~BuildCombinedLocationResult_CombinableGroup();
        BuildCombinedLocationResult_CombinableGroup(BuildCombinedLocationResult_CombinableGroup&&);
        BuildCombinedLocationResult_CombinableGroup();

        // data members, from how the methods use this: 64 bytes
        undefined8 field_0;  // offset 0
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        char _unknown_24[40];
    };

    class BuildCombinedLocationResult_CombinedLocation {
    public:
        ~BuildCombinedLocationResult_CombinedLocation();
        BuildCombinedLocationResult_CombinedLocation(BuildCombinedLocationResult_CombinedLocation&&);
        BuildCombinedLocationResult_CombinedLocation();

        // data members, from how the methods use this: 128 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[76];
        undefined2 field_80; // offset 80
        undefined1 field_82; // offset 82
        char _unknown_83[45];
    };

    class BuildCombinedLocationResult_UncombinableLocation {
    public:
        ~BuildCombinedLocationResult_UncombinableLocation();
        BuildCombinedLocationResult_UncombinableLocation();
        BuildCombinedLocationResult_UncombinableLocation(BuildCombinedLocationResult_UncombinableLocation&&);

        // data members, from how the methods use this: 112 bytes
        undefined8 field_0; // offset 0
        char _unknown_8[8];
        LocData field_16; // offset 16
        char _unknown_48[20];
        undefined8 field_68; // offset 68
        char _unknown_76[5];
        undefined8 field_81; // offset 81
        undefined8 field_89; // offset 89
        char _unknown_97[15];
    };

    // 0x10064e920, 128 bytes, inline, placed by class header (inline)
    // BuildCombinedLocationRequest_Location::MakeExternalID() const
    uint BuildCombinedLocationRequest_Location::MakeExternalID() {
        char cVar1;
        char cVar2;
        char cVar3;
        byte bVar4;
        byte bVar5;

        cVar1 = field_4;
        cVar2 = field_6;
        cVar3 = field_7;
        bVar4 = field_48->GetRot();
        bVar5 = field_48->GetShape();
        return (uint)field_280 << 23 | (uint)bVar5 << 17 | (uint)bVar4 << 15 | (int)cVar3 << 9 | (int)cVar2 << 3 |
               (int)cVar1 + 1U;
    }

    // 0x10064fd80, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // BuildAnimationRequestData::~BuildAnimationRequestData(): jumps straight to the base-object destructor

    // 0x10064fd90, 80 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // BuildAnimationRequestData::~BuildAnimationRequestData()
    void BuildAnimationRequestData::~BuildAnimationRequestData() {
        (&field_152)->~shared_ptr();
        (&field_128)->~Array();
        (&field_104)->~Array();
        (&field_80)->~Array();
        (&field_64)->~shared_ptr();
        ~mutex();
    }

    // 0x100650ea0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationRequest_Location::~BuildCombinedLocationRequest_Location(): jumps straight to the base-object destructor

    // 0x100650eb0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationRequest_Location::~BuildCombinedLocationRequest_Location()
    void BuildCombinedLocationRequest_Location::~BuildCombinedLocationRequest_Location() {
        (&field_232)->~Array();
        field_128->~HillData();
    }

    // 0x1006511a0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationRequestData::~BuildCombinedLocationRequestData(): jumps straight to the base-object destructor

    // 0x1006511b0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationRequestData::~BuildCombinedLocationRequestData()
    void BuildCombinedLocationRequestData::~BuildCombinedLocationRequestData() {
        (&field_112)->~mutex();
        (&field_56)->~hash_map();
        (&field_24)->~vector();
    }

    // 0x1006515f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationRequest_Location::BuildCombinedLocationRequest_Location(BuildCombinedLocationRequest_Location&&): jumps straight to the base-object constructor

    // 0x100651600, 208 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationRequest_Location::BuildCombinedLocationRequest_Location(BuildCombinedLocationRequest_Location&&)
    void BuildCombinedLocationRequest_Location::BuildCombinedLocationRequest_Location(
        BuildCombinedLocationRequest_Location* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined4 uVar5;
        char cVar6;
        undefined1 uVar7;
        char cVar8;
        char cVar9;
        undefined2 uVar10;
        undefined6 uVar11;
        undefined5 uVar12;
        undefined7 uVar13;
        byte bVar14;

        uVar5 = *(undefined4*)&param_1->field_0;
        cVar6 = param_1->field_4;
        uVar7 = param_1->field_5;
        cVar8 = param_1->field_6;
        cVar9 = param_1->field_7;
        uVar10 = param_1->field_8;
        uVar11 = *(undefined6*)&param_1->field_10;
        uVar1 = param_1->field_16;
        uVar2 = param_1->field_24;
        uVar3 = param_1->field_40;
        field_32 = param_1->field_32;
        field_40 = uVar3;
        field_16 = uVar1;
        field_24 = uVar2;
        *(undefined4*)&field_0 = uVar5;
        field_4 = cVar6;
        field_5 = uVar7;
        field_6 = cVar8;
        field_7 = cVar9;
        field_8 = uVar10;
        *(undefined6*)&field_10 = uVar11;
        new (field_48, (LocData*)param_1->field_48) LocData();
        field_113 = param_1->field_113;
        uVar1 = *(undefined8*)&param_1->field_108;
        field_100 = param_1->field_100;
        *(undefined8*)&field_108 = uVar1;
        new (field_128, (HillData*)param_1->field_128) graphics::HillData();
        field_224 = param_1->field_224;
        uVar10 = param_1->field_176;
        uVar7 = param_1->field_178;
        uVar12 = *(undefined5*)&param_1->field_179;
        uVar1 = param_1->field_184;
        uVar2 = *(undefined8*)&param_1->field_192;
        uVar3 = *(undefined8*)((long)&param_1->field_196 + 4);
        uVar4 = param_1->field_216;
        field_208 = param_1->field_208;
        field_216 = uVar4;
        *(undefined8*)&field_192 = uVar2;
        *(undefined8*)((long)&field_196 + 4) = uVar3;
        field_176 = uVar10;
        field_178 = uVar7;
        *(undefined5*)&field_179 = uVar12;
        field_184 = uVar1;
        new (&field_232, (Array*)&param_1->field_232) Array<int, eastl::allocator>();
        uVar1 = param_1->field_256;
        uVar2 = *(undefined8*)&param_1->field_264;
        uVar13 = *(undefined7*)&param_1->field_273;
        bVar14 = param_1->field_280;
        field_265 = param_1->field_265;
        *(undefined7*)&field_273 = uVar13;
        field_280 = bVar14;
        field_256 = uVar1;
        *(undefined8*)&field_264 = uVar2;
    }

    // 0x1006516d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationRequest_Location::BuildCombinedLocationRequest_Location(): jumps straight to the base-object constructor

    // 0x1006517c0, 304 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationRequest_Location::BuildCombinedLocationRequest_Location()
    void BuildCombinedLocationRequest_Location::BuildCombinedLocationRequest_Location() {
        *(undefined8*)this = 4294967295;
        field_8 = 0;
        new (&field_10) math::Vector3T<unsigned short>();
        new (&field_16) math::Vector3T<unsigned short>();
        new (((long)&field_16 + 6)) math::Vector3T<unsigned short>();
        *(undefined8*)((long)&field_24 + 4) = 0;
        *(undefined8*)((long)&field_32 + 4) = 0;
        *(undefined4*)((long)&field_40 + 4) = 0;
        new (field_48, 0, 0) LocData();
        field_100 = 0;
        field_108 = 6;
        *(undefined8*)&field_112 = 0;
        *(undefined1*)((long)&field_113 + 7) = 0;
        new (field_128) graphics::HillData();
        field_176 = 0;
        field_178 = 0;
        *(undefined8*)&field_180 = 18446744069414584320;
        *(undefined4*)((long)&field_184 + 4) = 255;
        field_192 = 0;
        field_196 = 1099511628032;
        field_204 = 0;
        field_208 = 0;
        field_216 = 18446744069414584320;
        field_224 = 0;
        new (&field_232) Array<int, eastl::allocator>();
        *(undefined2*)&field_264 = 0;
        field_256 = 0;
        *(undefined8*)((long)&field_265 + 3) = 0;
        *(undefined8*)&field_273 = 0;
    }

    // 0x100651bf0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationRequestData_PerModelData::BuildCombinedLocationRequestData_PerModelData(): jumps straight to the base-object constructor

    // 0x100651c00, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationRequestData_PerModelData::BuildCombinedLocationRequestData_PerModelData()
    void BuildCombinedLocationRequestData_PerModelData::BuildCombinedLocationRequestData_PerModelData() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        field_20 = 0;
        field_24 = 4294967295;
    }

    // 0x100652cd0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResult_CombinedLocation::~BuildCombinedLocationResult_CombinedLocation(): jumps straight to the base-object destructor

    // 0x100652ce0, 64 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResult_CombinedLocation::~BuildCombinedLocationResult_CombinedLocation()
    void BuildCombinedLocationResult_CombinedLocation::~BuildCombinedLocationResult_CombinedLocation() {
        (&field_120)->~shared_ptr();
        (&field_88)->~vector();
        (&field_40)->~vector_map();
        (&field_8)->~vector();
    }

    // 0x100652f70, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResult_UncombinableLocation::~BuildCombinedLocationResult_UncombinableLocation(): jumps straight to the base-object destructor

    // 0x100652f80, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResult_UncombinableLocation::~BuildCombinedLocationResult_UncombinableLocation()
    void BuildCombinedLocationResult_UncombinableLocation::~BuildCombinedLocationResult_UncombinableLocation() {
        (&field_104)->~shared_ptr();
    }

    // 0x100652fe0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResult_CombinableGroup::~BuildCombinedLocationResult_CombinableGroup(): jumps straight to the base-object destructor

    // 0x100652ff0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResult_CombinableGroup::~BuildCombinedLocationResult_CombinableGroup()
    void BuildCombinedLocationResult_CombinableGroup::~BuildCombinedLocationResult_CombinableGroup() {
        (&field_56)->~vector();
        (&field_24)->~vector();
    }

    // 0x1006536e0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResultData::~BuildCombinedLocationResultData(): jumps straight to the base-object destructor

    // 0x1006536f0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResultData::~BuildCombinedLocationResultData()
    void BuildCombinedLocationResultData::~BuildCombinedLocationResultData() {
        (&field_64)->~vector();
        (&field_32)->~vector();
        ~vector();
    }

    // 0x1006539d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResultData::BuildCombinedLocationResultData(): jumps straight to the base-object constructor

    // 0x1006539e0, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResultData::BuildCombinedLocationResultData()
    void BuildCombinedLocationResultData::BuildCombinedLocationResultData() {
        new (this) MakeSharedPool<BuildCombinedLocationResultData, 96>();
        new (this) eastl::vector<BuildCombinedLocationResult_CombinableGroup, eastl::allocator>();
        new (&field_32) eastl::vector<BuildCombinedLocationResult_CombinedLocation, eastl::allocator>();
        new (&field_64) eastl::vector<BuildCombinedLocationResult_UncombinableLocation, eastl::allocator>();
    }

    // 0x100654c30, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResult_CombinableGroup::BuildCombinedLocationResult_CombinableGroup(BuildCombinedLocationResult_CombinableGroup&&): jumps straight to the base-object constructor

    // 0x100654c40, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResult_CombinableGroup::BuildCombinedLocationResult_CombinableGroup(BuildCombinedLocationResult_CombinableGroup&&)
    void BuildCombinedLocationResult_CombinableGroup::BuildCombinedLocationResult_CombinableGroup(
        BuildCombinedLocationResult_CombinableGroup* param_1) {
        undefined8 uVar1;

        field_16 = param_1->field_16;
        uVar1 = param_1->field_8;
        field_0 = param_1->field_0;
        field_8 = uVar1;
        new (&field_24, (vector*)&param_1->field_24)
            eastl::vector<BuildCombinedLocationRequest_Location*, eastl::allocator>();
        new (&field_56, (vector*)&param_1->field_56) eastl::vector<LocationAudioProperties, eastl::allocator>();
    }

    // 0x100654fa0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResult_CombinableGroup::BuildCombinedLocationResult_CombinableGroup(): jumps straight to the base-object constructor

    // 0x100655090, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResult_CombinableGroup::BuildCombinedLocationResult_CombinableGroup()
    void BuildCombinedLocationResult_CombinableGroup::BuildCombinedLocationResult_CombinableGroup() {
        new (&field_24) eastl::vector<BuildCombinedLocationRequest_Location*, eastl::allocator>();
        new (&field_56) eastl::vector<LocationAudioProperties, eastl::allocator>();
    }

    // 0x1006551d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // LocationAudioProperties::LocationAudioProperties(): jumps straight to the base-object constructor

    // 0x1006552c0, 112 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // LocationAudioProperties::LocationAudioProperties()
    void LocationAudioProperties::LocationAudioProperties() {
        field_0 = 1099511627775;
        field_8 = 0;
        field_12 = 256;
        field_16 = 256;
        field_20 = 0;
        new (&field_24) Array<int, eastl::allocator>();
        field_56 = 0;
        field_48 = 0;
        new (&field_60) math::Vector3T<int>();
        field_72 = 4294967295;
    }

    // 0x1006553b0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // LocationAudioProperties::LocationAudioProperties(LocationAudioProperties&&): jumps straight to the base-object constructor

    // 0x1006554d0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // LocationAudioProperties::LocationAudioProperties(LocationAudioProperties&&)
    void LocationAudioProperties::LocationAudioProperties(LocationAudioProperties* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined2 uVar3;
        undefined2 uVar4;
        int iVar5;
        undefined4 uVar6;
        undefined4 uVar7;

        *(undefined8*)((long)&field_12 + 1) = *(undefined8*)((long)&param_1->field_12 + 1);
        uVar3 = param_1->field_8;
        uVar4 = param_1->field_10;
        iVar5 = param_1->field_12;
        field_0 = param_1->field_0;
        field_8 = uVar3;
        field_10 = uVar4;
        field_12 = iVar5;
        new (&field_24, (Array*)&param_1->field_24) Array<int, eastl::allocator>();
        uVar1 = param_1->field_48;
        uVar2 = *(undefined8*)&param_1->field_56;
        uVar6 = param_1->field_68;
        uVar7 = param_1->field_72;
        field_60 = param_1->field_60;
        field_68 = uVar6;
        field_72 = uVar7;
        field_48 = uVar1;
        *(undefined8*)&field_56 = uVar2;
    }

    // 0x100655740, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResult_CombinedLocation::BuildCombinedLocationResult_CombinedLocation(BuildCombinedLocationResult_CombinedLocation&&): jumps straight to the base-object constructor

    // 0x100655750, 176 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResult_CombinedLocation::BuildCombinedLocationResult_CombinedLocation(BuildCombinedLocationResult_CombinedLocation&&)
    void BuildCombinedLocationResult_CombinedLocation::BuildCombinedLocationResult_CombinedLocation(
        BuildCombinedLocationResult_CombinedLocation* param_1) {
        field_0 = param_1->field_0;
        new (&field_8, (vector*)&param_1->field_8)
            eastl::vector<BuildCombinedLocationResult_GroupSection, eastl::allocator>();
        new (&field_40, (vector_map*)&param_1->field_40)
            eastl::vector_map<int, bool, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, bool>, eastl::allocator>>();
        field_82 = param_1->field_82;
        field_80 = param_1->field_80;
        new (&field_88, (vector*)&param_1->field_88) eastl::vector<LocationAudioProperties, eastl::allocator>();
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&field_120, (shared_ptr*)&param_1->field_120);
    }

    // 0x100655ee0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResult_GroupSection::BuildCombinedLocationResult_GroupSection(BuildCombinedLocationResult_GroupSection&&): jumps straight to the base-object constructor

    // 0x100655ef0, 192 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResult_GroupSection::BuildCombinedLocationResult_GroupSection(BuildCombinedLocationResult_GroupSection&&)
    void BuildCombinedLocationResult_GroupSection::BuildCombinedLocationResult_GroupSection(
        BuildCombinedLocationResult_GroupSection* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined4 uVar5;
        undefined4 uVar6;
        undefined1 uVar7;
        undefined1 uVar8;
        undefined3 uVar9;

        uVar5 = param_1->field_0;
        uVar6 = *(undefined4*)&param_1->field_4;
        uVar1 = param_1->field_8;
        uVar2 = param_1->field_16;
        uVar3 = param_1->field_24;
        uVar4 = param_1->field_40;
        field_32 = param_1->field_32;
        field_40 = uVar4;
        field_16 = uVar2;
        field_24 = uVar3;
        field_0 = uVar5;
        *(undefined4*)&field_4 = uVar6;
        field_8 = uVar1;
        new (field_48, (AABB*)param_1->field_48) math::AABB();
        *(undefined8*)(field_48 + 32) = *(undefined8*)(param_1->field_48 + 32);
        new (field_88, (LocData*)param_1->field_88) LocData();
        field_140 = param_1->field_140;
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&field_144, (shared_ptr*)&param_1->field_144);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&field_160, (shared_ptr*)&param_1->field_160);
        uVar6 = param_1->field_176;
        uVar8 = param_1->field_180;
        uVar9 = *(undefined3*)&param_1->field_181;
        uVar5 = param_1->field_184;
        uVar7 = param_1->field_188;
        *(undefined3*)&field_181 = *(undefined3*)&param_1->field_181;
        field_184 = uVar5;
        field_188 = uVar7;
        field_176 = uVar6;
        field_180 = uVar8;
        *(undefined3*)&field_181 = uVar9;
    }

    // 0x1006561a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResult_GroupSection::BuildCombinedLocationResult_GroupSection(): jumps straight to the base-object constructor

    // 0x100656290, 176 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResult_GroupSection::BuildCombinedLocationResult_GroupSection()
    void BuildCombinedLocationResult_GroupSection::BuildCombinedLocationResult_GroupSection() {
        field_0 = 4294967295;
        *(undefined8*)&field_4 = 0;
        *(undefined8*)((long)&field_8 + 4) = 0;
        *(undefined8*)((long)&field_16 + 4) = 0;
        new (((long)&field_24 + 4)) math::Vector3T<int>();
        field_40 = 0;
        new (field_48) math::AABB();
        field_48[32] = 0;
        field_84 = 4294967295;
        new (field_88, 0, 0) LocData();
        field_140 = 0;
        new (&field_144, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_160, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_176 = 0;
        field_180 = 0;
        field_184 = 4294967295;
        field_188 = 0;
    }

    // 0x100656340, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResult_CombinedLocation::BuildCombinedLocationResult_CombinedLocation(): jumps straight to the base-object constructor

    // 0x100656430, 128 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResult_CombinedLocation::BuildCombinedLocationResult_CombinedLocation()
    void BuildCombinedLocationResult_CombinedLocation::BuildCombinedLocationResult_CombinedLocation() {
        _func_decltype_nullptr* in_RSI;

        new (&field_8) eastl::vector<BuildCombinedLocationResult_GroupSection, eastl::allocator>();
        new (&field_40) eastl::vector_map<int, bool, eastl::less<int>, eastl::allocator,
                                          eastl::vector<eastl::pair<int, bool>, eastl::allocator>>();
        field_80 = 0;
        field_82 = 0;
        new (&field_88) eastl::vector<LocationAudioProperties, eastl::allocator>();
        new (&field_120, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x100656870, 96 bytes, inline, placed by debug map only (low confidence)
    // LocationAudioProperties::operator=(LocationAudioProperties const&)
    /* LocationAudioProperties::TEMPNAMEPLACEHOLDERVALUE(LocationAudioProperties
   const&) */

    LocationAudioProperties* LocationAudioProperties::operator=(LocationAudioProperties* param_1) {
        undefined2 uVar1;
        undefined2 uVar2;
        int iVar3;

        *(undefined8*)((long)&field_12 + 1) = *(undefined8*)((long)&param_1->field_12 + 1);
        uVar1 = param_1->field_8;
        uVar2 = param_1->field_10;
        iVar3 = param_1->field_12;
        field_0 = param_1->field_0;
        field_8 = uVar1;
        field_10 = uVar2;
        field_12 = iVar3;
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&field_24, (Array*)&param_1->field_24);
        field_48 = param_1->field_48;
        field_56 = param_1->field_56;
        (&field_60, (Vector3T*)&param_1->field_60)->SetXYZ();
        field_72 = param_1->field_72;
        return this;
    }

    // 0x100656970, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // LocationAudioProperties::LocationAudioProperties(LocationAudioProperties const&): jumps straight to the base-object constructor

    // 0x100656980, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // LocationAudioProperties::LocationAudioProperties(LocationAudioProperties const&)
    void LocationAudioProperties::LocationAudioProperties(LocationAudioProperties* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined2 uVar3;
        undefined2 uVar4;
        int iVar5;
        undefined4 uVar6;
        undefined4 uVar7;

        *(undefined8*)((long)&field_12 + 1) = *(undefined8*)((long)&param_1->field_12 + 1);
        uVar3 = param_1->field_8;
        uVar4 = param_1->field_10;
        iVar5 = param_1->field_12;
        field_0 = param_1->field_0;
        field_8 = uVar3;
        field_10 = uVar4;
        field_12 = iVar5;
        new (&field_24, (Array*)&param_1->field_24) Array<int, eastl::allocator>();
        uVar1 = param_1->field_48;
        uVar2 = *(undefined8*)&param_1->field_56;
        uVar6 = param_1->field_68;
        uVar7 = param_1->field_72;
        field_60 = param_1->field_60;
        field_68 = uVar6;
        field_72 = uVar7;
        field_48 = uVar1;
        *(undefined8*)&field_56 = uVar2;
    }

    // 0x100656a20, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResult_UncombinableLocation::BuildCombinedLocationResult_UncombinableLocation(): jumps straight to the base-object constructor

    // 0x100656b10, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResult_UncombinableLocation::BuildCombinedLocationResult_UncombinableLocation()
    void BuildCombinedLocationResult_UncombinableLocation::BuildCombinedLocationResult_UncombinableLocation() {
        new (field_16, 0, 0) LocData();
        new (&field_104, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x100656bc0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResult_UncombinableLocation::BuildCombinedLocationResult_UncombinableLocation(BuildCombinedLocationResult_UncombinableLocation&&): jumps straight to the base-object constructor

    // 0x100656ce0, 82 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BuildCombinedLocationResult_UncombinableLocation::BuildCombinedLocationResult_UncombinableLocation(BuildCombinedLocationResult_UncombinableLocation&&)
    void BuildCombinedLocationResult_UncombinableLocation::BuildCombinedLocationResult_UncombinableLocation(
        BuildCombinedLocationResult_UncombinableLocation* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        uVar1 = param_1->field_0;
        *(undefined8*)((long)&field_0 + 5) = *(undefined8*)((long)&param_1->field_0 + 5);
        field_0 = uVar1;
        new (field_16, (LocData*)param_1->field_16) LocData();
        uVar1 = param_1->field_68;
        uVar2 = *(undefined8*)&param_1->field_76;
        uVar3 = param_1->field_89;
        field_81 = param_1->field_81;
        field_89 = uVar3;
        field_68 = uVar1;
        *(undefined8*)&field_76 = uVar2;
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&field_104, (shared_ptr*)&param_1->field_104);
    }

} // namespace jag::game

namespace jag {
    // 0x1006503b0, 32 bytes, inline, placed by debug map only (low confidence)
    // game::BuildAnimationWorker* placement_new<game::BuildAnimationWorker>(void*)
    BuildAnimationWorker* placement_new<game::BuildAnimationWorker>(void* param_1) {
        game::BuildAnimationWorker::BuildAnimationWorker(param_1);
        return param_1;
    }

    // 0x1006503d0, 32 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildAnimationWorker>* placement_new<BucketRefCounter<game::BuildAnimationWorker>, managed_ptr_counter_and_data<BucketRefCounter<game::BuildAnimationWorker>, game::BuildAnimationWorker>*&, game::BuildAnimationWorker*&>(void*, managed_ptr_counter_and_data<BucketRefCounter<game::BuildAnimationWorker>, game::BuildAnimationWorker>*&, game::BuildAnimationWorker*&)
    BucketRefCounter* jag::placement_new<
        BucketRefCounter<game::BuildAnimationWorker>,
        managed_ptr_counter_and_data<BucketRefCounter<game::BuildAnimationWorker>, game::BuildAnimationWorker>*&,
        game::BuildAnimationWorker*&>(void* param_1, managed_ptr_counter_and_data** param_2,
                                      BuildAnimationWorker** param_3) {
        BucketRefCounter<game::BuildAnimationWorker>::BucketRefCounter(param_1, *param_2, *param_3, 0);
        return param_1;
    }

    // 0x1006503f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildAnimationWorker>::BucketRefCounter(void*, game::BuildAnimationWorker*, unsigned int): jumps straight to the base-object constructor

    // 0x100650400, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildAnimationWorker>::BucketRefCounter(void*, game::BuildAnimationWorker*, unsigned int)
    void BucketRefCounter<game::BuildAnimationWorker>::BucketRefCounter(void* param_1, BuildAnimationWorker* param_2,
                                                                        uint param_3) {
        undefined8 uVar1;

        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee70f8 + 16;
        *(void**)(this + 16) = param_1;
        *(BuildAnimationWorker**)(this + 24) = param_2;
        uVar1 = this_thread::GetThreadID();
        *(undefined8*)(this + 32) = uVar1;
        *(uint*)(this + 40) = param_3;
    }

    // 0x100650460, 96 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildAnimationWorker>::DeleteSelf()
    void BucketRefCounter<game::BuildAnimationWorker>::DeleteSelf() {
        void* pvVar1;

        if (*(int*)(this + 40) != 4) {
            if (this_thread::GetThreadID() != *(long*)(this + 32)) {
                /* WARNING: Subroutine does not return */
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, (char*)0);
            }
        }
        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)(this);
        BucketManager::DeAllocate(pvVar1);
    }

    // 0x100650760, 32 bytes, inline, placed by debug map only (low confidence)
    // game::BuildAnimationResultData* placement_new<game::BuildAnimationResultData>(void*)
    BuildAnimationResultData* placement_new<game::BuildAnimationResultData>(void* param_1) {
        game::BuildAnimationResultData::BuildAnimationResultData(param_1);
        return param_1;
    }

    // 0x100650780, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildAnimationResultData, MakeSharedPool<game::BuildAnimationResultData, 96> >* placement_new<MakeSharedPoolRefCounter<game::BuildAnimationResultData, MakeSharedPool<game::BuildAnimationResultData, 96> >, MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData*&, game::BuildAnimationResultData*>(void*, MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData*&, game::BuildAnimationResultData*&&)
    MakeSharedPoolRefCounter* jag::placement_new<
        MakeSharedPoolRefCounter<game::BuildAnimationResultData, MakeSharedPool<game::BuildAnimationResultData, 96>>,
        MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData*&, game::BuildAnimationResultData*>(
        void* param_1, RefCounterAndData** param_2, BuildAnimationResultData** param_3) {
        MakeSharedPoolRefCounter<game::BuildAnimationResultData, MakeSharedPool<game::BuildAnimationResultData, 96>>::
            MakeSharedPoolRefCounter(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1006509e0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildAnimationResultData, MakeSharedPool<game::BuildAnimationResultData, 96> >::MakeSharedPoolRefCounter(void*, game::BuildAnimationResultData*): jumps straight to the base-object constructor

    // 0x1006509f0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildAnimationResultData, MakeSharedPool<game::BuildAnimationResultData, 96> >::MakeSharedPoolRefCounter(void*, game::BuildAnimationResultData*)
    void
    jag::MakeSharedPoolRefCounter<game::BuildAnimationResultData, MakeSharedPool<game::BuildAnimationResultData, 96>>::
        MakeSharedPoolRefCounter(MakeSharedPoolRefCounter<game::BuildAnimationResultData,
                                                          MakeSharedPool<game::BuildAnimationResultData, 96>>* this,
                                 void* param_1, BuildAnimationResultData* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7ab8 + 16;
        *(void**)(this + 16) = param_1;
        *(BuildAnimationResultData**)(this + 24) = param_2;
    }

    // 0x100650a30, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildAnimationResultData, MakeSharedPool<game::BuildAnimationResultData, 96> >::DeleteSelf()
    void
    jag::MakeSharedPoolRefCounter<game::BuildAnimationResultData, MakeSharedPool<game::BuildAnimationResultData, 96>>::
        DeleteSelf(MakeSharedPoolRefCounter<game::BuildAnimationResultData,
                                            MakeSharedPool<game::BuildAnimationResultData, 96>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::BuildAnimationResultData, 96>::deallocate(pvVar1);
    }

    // 0x100651060, 32 bytes, inline, placed by debug map only (low confidence)
    // game::BuildCombinedLocationRequestData* placement_new<game::BuildCombinedLocationRequestData, eastl::vector<game::LocationContainerLocation, eastl::allocator> const&, int&, int&>(void*, eastl::vector<game::LocationContainerLocation, eastl::allocator> const&, int&, int&)
    BuildCombinedLocationRequestData*
    jag::placement_new<game::BuildCombinedLocationRequestData,
                       eastl::vector<game::LocationContainerLocation, eastl::allocator> const&, int&, int&>(
        void* param_1, vector* param_2, int* param_3, int* param_4) {
        game::BuildCombinedLocationRequestData::BuildCombinedLocationRequestData(param_1, param_2, *param_3, *param_4);
        return param_1;
    }

    // 0x100651080, 32 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildCombinedLocationRequestData>* placement_new<BucketRefCounter<game::BuildCombinedLocationRequestData>, managed_ptr_counter_and_data<BucketRefCounter<game::BuildCombinedLocationRequestData>, game::BuildCombinedLocationRequestData>*&, game::BuildCombinedLocationRequestData*&>(void*, managed_ptr_counter_and_data<BucketRefCounter<game::BuildCombinedLocationRequestData>, game::BuildCombinedLocationRequestData>*&, game::BuildCombinedLocationRequestData*&)
    BucketRefCounter*
    jag::placement_new<BucketRefCounter<game::BuildCombinedLocationRequestData>,
                       managed_ptr_counter_and_data<BucketRefCounter<game::BuildCombinedLocationRequestData>,
                                                    game::BuildCombinedLocationRequestData>*&,
                       game::BuildCombinedLocationRequestData*&>(void* param_1, managed_ptr_counter_and_data** param_2,
                                                                 BuildCombinedLocationRequestData** param_3) {
        BucketRefCounter<game::BuildCombinedLocationRequestData>::BucketRefCounter(param_1, *param_2, *param_3, 0);
        return param_1;
    }

    // 0x1006510a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildCombinedLocationRequestData>::BucketRefCounter(void*, game::BuildCombinedLocationRequestData*, unsigned int): jumps straight to the base-object constructor

    // 0x1006510b0, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildCombinedLocationRequestData>::BucketRefCounter(void*, game::BuildCombinedLocationRequestData*, unsigned int)
    void BucketRefCounter<game::BuildCombinedLocationRequestData>::BucketRefCounter(
        void* param_1, BuildCombinedLocationRequestData* param_2, uint param_3) {
        undefined8 uVar1;

        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7148 + 16;
        *(void**)(this + 16) = param_1;
        *(BuildCombinedLocationRequestData**)(this + 24) = param_2;
        uVar1 = this_thread::GetThreadID();
        *(undefined8*)(this + 32) = uVar1;
        *(uint*)(this + 40) = param_3;
    }

    // 0x100651110, 48 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildCombinedLocationRequestData>::DeleteData()
    void BucketRefCounter<game::BuildCombinedLocationRequestData>::DeleteData() {
        if (*(BuildCombinedLocationRequestData**)(this + 24) != (BuildCombinedLocationRequestData*)0) {
            (*(BuildCombinedLocationRequestData**)(this + 24))->~BuildCombinedLocationRequestData();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100651140, 96 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildCombinedLocationRequestData>::DeleteSelf()
    void BucketRefCounter<game::BuildCombinedLocationRequestData>::DeleteSelf() {
        void* pvVar1;

        if (*(int*)(this + 40) != 4) {
            if (this_thread::GetThreadID() != *(long*)(this + 32)) {
                /* WARNING: Subroutine does not return */
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, (char*)0);
            }
        }
        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)(this);
        BucketManager::DeAllocate(pvVar1);
    }

    // 0x100651ec0, 32 bytes, inline, placed by debug map only (low confidence)
    // game::BuildCombinedLocationWorker* placement_new<game::BuildCombinedLocationWorker>(void*)
    BuildCombinedLocationWorker* placement_new<game::BuildCombinedLocationWorker>(void* param_1) {
        game::BuildCombinedLocationWorker::BuildCombinedLocationWorker(param_1);
        return param_1;
    }

    // 0x100651ee0, 32 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildCombinedLocationWorker>* placement_new<BucketRefCounter<game::BuildCombinedLocationWorker>, managed_ptr_counter_and_data<BucketRefCounter<game::BuildCombinedLocationWorker>, game::BuildCombinedLocationWorker>*&, game::BuildCombinedLocationWorker*&>(void*, managed_ptr_counter_and_data<BucketRefCounter<game::BuildCombinedLocationWorker>, game::BuildCombinedLocationWorker>*&, game::BuildCombinedLocationWorker*&)
    BucketRefCounter*
    jag::placement_new<BucketRefCounter<game::BuildCombinedLocationWorker>,
                       managed_ptr_counter_and_data<BucketRefCounter<game::BuildCombinedLocationWorker>,
                                                    game::BuildCombinedLocationWorker>*&,
                       game::BuildCombinedLocationWorker*&>(void* param_1, managed_ptr_counter_and_data** param_2,
                                                            BuildCombinedLocationWorker** param_3) {
        BucketRefCounter<game::BuildCombinedLocationWorker>::BucketRefCounter(param_1, *param_2, *param_3, 0);
        return param_1;
    }

    // 0x100651f00, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildCombinedLocationWorker>::BucketRefCounter(void*, game::BuildCombinedLocationWorker*, unsigned int): jumps straight to the base-object constructor

    // 0x100651f10, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildCombinedLocationWorker>::BucketRefCounter(void*, game::BuildCombinedLocationWorker*, unsigned int)
    void BucketRefCounter<game::BuildCombinedLocationWorker>::BucketRefCounter(void* param_1,
                                                                               BuildCombinedLocationWorker* param_2,
                                                                               uint param_3) {
        undefined8 uVar1;

        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7138 + 16;
        *(void**)(this + 16) = param_1;
        *(BuildCombinedLocationWorker**)(this + 24) = param_2;
        uVar1 = this_thread::GetThreadID();
        *(undefined8*)(this + 32) = uVar1;
        *(uint*)(this + 40) = param_3;
    }

    // 0x100651f70, 96 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildCombinedLocationWorker>::DeleteSelf()
    void BucketRefCounter<game::BuildCombinedLocationWorker>::DeleteSelf() {
        void* pvVar1;

        if (*(int*)(this + 40) != 4) {
            if (this_thread::GetThreadID() != *(long*)(this + 32)) {
                /* WARNING: Subroutine does not return */
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, (char*)0);
            }
        }
        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)(this);
        BucketManager::DeAllocate(pvVar1);
    }

    // 0x100652820, 80 bytes, inline, placed by debug map only (low confidence)
    // game::CombinedLocation* placement_new<game::CombinedLocation, graphics::RT7Core&, graphics::GraphNode*&, shared_ptr<game::World> const&, bool&, bool&, bool&, bool&, shared_ptr<graphics::Model>&, eastl::vector<game::BuildCombinedLocationResult_GroupSection, eastl::allocator>&>(void*, graphics::RT7Core&, graphics::GraphNode*&, shared_ptr<game::World> const&, bool&, bool&, bool&, bool&, shared_ptr<graphics::Model>&, eastl::vector<game::BuildCombinedLocationResult_GroupSection, eastl::allocator>&)
    CombinedLocation*
    jag::placement_new<game::CombinedLocation, graphics::RT7Core&, graphics::GraphNode*&,
                       shared_ptr<game::World> const&, bool&, bool&, bool&, bool&, shared_ptr<graphics::Model>&,
                       eastl::vector<game::BuildCombinedLocationResult_GroupSection, eastl::allocator>&>(
        void* param_1, RT7Core* param_2, GraphNode** param_3, shared_ptr* param_4, bool* param_5, bool* param_6,
        bool* param_7, bool* param_8, shared_ptr* param_9, vector* param_10) {
        game::CombinedLocation::CombinedLocation(param_1, param_2, *param_3, param_4, *param_5, *param_6, *param_7,
                                                 *param_8, param_9, param_10);
        return param_1;
    }

    // 0x100652870, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::CombinedLocation, MakeSharedPool<game::CombinedLocation, 128> >* placement_new<MakeSharedPoolRefCounter<game::CombinedLocation, MakeSharedPool<game::CombinedLocation, 128> >, MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData*&, game::CombinedLocation*>(void*, MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData*&, game::CombinedLocation*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::CombinedLocation, MakeSharedPool<game::CombinedLocation, 128>>,
                       MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData*&, game::CombinedLocation*>(
        void* param_1, RefCounterAndData** param_2, CombinedLocation** param_3) {
        MakeSharedPoolRefCounter<game::CombinedLocation,
                                 MakeSharedPool<game::CombinedLocation, 128>>::MakeSharedPoolRefCounter(param_1,
                                                                                                        *param_2,
                                                                                                        *param_3);
        return param_1;
    }

    // 0x100652890, 160 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::CombinedLocation>(ref_counter_base*, game::CombinedLocation*, game::CombinedLocation::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::CombinedLocation>(ref_counter_base* param_1,
                                                                       CombinedLocation* param_2,
                                                                       enable_shared_type* param_3) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48[16];
        weak_ptr<oldscape::dash3d::Decor> local_38[24];

        if (param_1 != (ref_counter_base*)0) {
            param_1->IncRef();
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
                local_48, (hash_node*)param_1, (hash_node**)param_2);
            weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_38, (weak_ptr*)local_48);
            (&param_2->field_192, (weak_ptr*)local_38)->__internal_set_weak_ptr();
            local_38->~weak_ptr();
            local_48->~shared_ptr();
        }
    }

    // 0x100652990, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::CombinedLocation, MakeSharedPool<game::CombinedLocation, 128> >::MakeSharedPoolRefCounter(void*, game::CombinedLocation*): jumps straight to the base-object constructor

    // 0x1006529a0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::CombinedLocation, MakeSharedPool<game::CombinedLocation, 128> >::MakeSharedPoolRefCounter(void*, game::CombinedLocation*)
    void jag::MakeSharedPoolRefCounter<game::CombinedLocation, MakeSharedPool<game::CombinedLocation, 128>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<game::CombinedLocation, MakeSharedPool<game::CombinedLocation, 128>>* this,
            void* param_1, CombinedLocation* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7a48 + 16;
        *(void**)(this + 16) = param_1;
        *(CombinedLocation**)(this + 24) = param_2;
    }

    // 0x1006529e0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::CombinedLocation, MakeSharedPool<game::CombinedLocation, 128> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<game::CombinedLocation, MakeSharedPool<game::CombinedLocation, 128>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::CombinedLocation, MakeSharedPool<game::CombinedLocation, 128>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::CombinedLocation, 128>::deallocate(pvVar1);
    }

    // 0x100652e80, 128 bytes, inline, placed by debug map only (low confidence)
    // game::Location* placement_new<game::Location, graphics::GraphNode*&, shared_ptr<game::World> const&, int&, int&, game::LocData&, bool&, bool&, int&, int&, int, int, shared_ptr<graphics::Model>&>(void*, graphics::GraphNode*&, shared_ptr<game::World> const&, int&, int&, game::LocData&, bool&, bool&, int&, int&, int&&, int&&, shared_ptr<graphics::Model>&)
    Location* jag::placement_new<game::Location, graphics::GraphNode*&, shared_ptr<game::World> const&, int&, int&,
                                 game::LocData&, bool&, bool&, int&, int&, int, int, shared_ptr<graphics::Model>&>(
        void* param_1, GraphNode** param_2, shared_ptr* param_3, int* param_4, int* param_5, LocData* param_6,
        bool* param_7, bool* param_8, int* param_9, int* param_10, int* param_11, int* param_12, shared_ptr* param_13) {
        game::Location::Location(param_1, *param_2, param_3, *param_4, *param_5, param_6, *param_7, *param_8, *param_9,
                                 *param_10, *param_11, *param_12, param_13);
        return param_1;
    }

    // 0x1006531e0, 32 bytes, inline, placed by debug map only (low confidence)
    // game::BuildCombinedLocationResultData* placement_new<game::BuildCombinedLocationResultData>(void*)
    BuildCombinedLocationResultData* placement_new<game::BuildCombinedLocationResultData>(void* param_1) {
        game::BuildCombinedLocationResultData::BuildCombinedLocationResultData(param_1);
        return param_1;
    }

    // 0x100653200, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildCombinedLocationResultData, MakeSharedPool<game::BuildCombinedLocationResultData, 96> >* placement_new<MakeSharedPoolRefCounter<game::BuildCombinedLocationResultData, MakeSharedPool<game::BuildCombinedLocationResultData, 96> >, MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData*&, game::BuildCombinedLocationResultData*>(void*, MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData*&, game::BuildCombinedLocationResultData*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::BuildCombinedLocationResultData,
                                                MakeSharedPool<game::BuildCombinedLocationResultData, 96>>,
                       MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData*&,
                       game::BuildCombinedLocationResultData*>(void* param_1, RefCounterAndData** param_2,
                                                               BuildCombinedLocationResultData** param_3) {
        MakeSharedPoolRefCounter<
            game::BuildCombinedLocationResultData,
            MakeSharedPool<game::BuildCombinedLocationResultData, 96>>::MakeSharedPoolRefCounter(param_1, *param_2,
                                                                                                 *param_3);
        return param_1;
    }

    // 0x1006546e0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildCombinedLocationResultData, MakeSharedPool<game::BuildCombinedLocationResultData, 96> >::MakeSharedPoolRefCounter(void*, game::BuildCombinedLocationResultData*): jumps straight to the base-object constructor

    // 0x1006546f0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildCombinedLocationResultData, MakeSharedPool<game::BuildCombinedLocationResultData, 96> >::MakeSharedPoolRefCounter(void*, game::BuildCombinedLocationResultData*)
    void jag::MakeSharedPoolRefCounter<game::BuildCombinedLocationResultData,
                                       MakeSharedPool<game::BuildCombinedLocationResultData, 96>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<game::BuildCombinedLocationResultData,
                                     MakeSharedPool<game::BuildCombinedLocationResultData, 96>>* this,
            void* param_1, BuildCombinedLocationResultData* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7ad8 + 16;
        *(void**)(this + 16) = param_1;
        *(BuildCombinedLocationResultData**)(this + 24) = param_2;
    }

    // 0x100654730, 48 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildCombinedLocationResultData, MakeSharedPool<game::BuildCombinedLocationResultData, 96> >::DeleteData()
    void jag::MakeSharedPoolRefCounter<game::BuildCombinedLocationResultData,
                                       MakeSharedPool<game::BuildCombinedLocationResultData, 96>>::
        DeleteData(MakeSharedPoolRefCounter<game::BuildCombinedLocationResultData,
                                            MakeSharedPool<game::BuildCombinedLocationResultData, 96>>* this) {
        if (*(BuildCombinedLocationResultData**)(this + 24) != (BuildCombinedLocationResultData*)0) {
            (*(BuildCombinedLocationResultData**)(this + 24))->~BuildCombinedLocationResultData();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100654760, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildCombinedLocationResultData, MakeSharedPool<game::BuildCombinedLocationResultData, 96> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<game::BuildCombinedLocationResultData,
                                       MakeSharedPool<game::BuildCombinedLocationResultData, 96>>::
        DeleteSelf(MakeSharedPoolRefCounter<game::BuildCombinedLocationResultData,
                                            MakeSharedPool<game::BuildCombinedLocationResultData, 96>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::BuildCombinedLocationResultData, 96>::deallocate(pvVar1);
    }

    // 0x100656060, 48 bytes, inline, placed by debug map only (low confidence)
    // BucketDeleter<graphics::Model>::operator()(graphics::Model*) const
    /* BucketDeleter<graphics::Model>::TEMPNAMEPLACEHOLDERVALUE(graphics::Model*) const
    */

    void BucketDeleter<graphics::Model>::operator()(Model* param_1) {
        (*(code*)*param_1->field_0)(param_1);
        BucketManager::DeAllocate(param_1, 944);
    }

} // namespace jag

// 0x100650c50, 16 bytes, placed by debug map only (low confidence)
// sin(float)
void sin(float param_1) {
    _sinf();
}

// 0x100650c60, 16 bytes, placed by debug map only (low confidence)
// cos(float)
void cos(float param_1) {
    _cosf();
}
