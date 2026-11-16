// libs/game/runetek5/config/ConfigProvider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ConfigProvider.h"

namespace jag::game {
    // 0x100564000, 1968 bytes, base-object constructor, placed by class name and debug map
    // ConfigProvider::ConfigProvider(Js5ResourceProvider&, Language const*, ModeGame const*, bool, PlayerVarDomain*, Array<ConfigTypeListContainerStrategy, eastl::allocator>&, bool)
    void ConfigProvider::ConfigProvider(Js5ResourceProvider* param_1, Language* param_2, ModeGame* param_3,
                                        bool param_4, PlayerVarDomain* param_5, Array* param_6, bool param_7) {
        allocator local_1e0[8];
        undefined1* local_1d8;
        undefined1* local_1d0;
        undefined1* local_1c8;
        undefined1* local_1c0;
        undefined1* local_1b8;
        undefined1* local_1b0;
        undefined1* local_1a8;
        undefined1* local_1a0;
        undefined1* local_198;
        undefined1* local_190;
        undefined1* local_188;
        undefined1* local_180;
        undefined1* local_178;
        undefined1* local_170;
        undefined1* local_168;
        undefined1* local_160;
        undefined1* local_158;
        undefined1* local_150;
        undefined1* local_148;
        undefined1* local_140;
        undefined1* local_138;
        undefined1* local_130;
        undefined1* local_128;
        undefined1* local_120;
        undefined1* local_118;
        undefined1* local_110;
        undefined1* local_108;
        undefined1* local_100;
        undefined1* local_f8;
        undefined1* local_f0;
        undefined1* local_e8;
        undefined1* local_e0;
        undefined1* local_d8;
        undefined1* local_d0;
        undefined1* local_c8;
        undefined1* local_c0;
        undefined1* local_b8;
        undefined1* local_b0;
        undefined1* local_a8;
        undefined1* local_a0;
        undefined1* local_98;
        undefined1* local_90;
        undefined1* local_88;
        undefined1* local_80;
        undefined1* local_78;
        undefined1* local_70;
        undefined1* local_68;
        undefined1* local_60;
        undefined1* local_58;
        undefined1* local_50;
        undefined1* local_48;
        PlayerVarDomain* local_40;

        local_40 = param_5;
        new (this) IConfigProvider();
        new (&field_8) PlayerGroupResourceProvider();
        field_0 = &PTR__ConfigProvider_100f047d8;
        field_8 = &PTR_GetVarPlayerTypeList_100f04828;
        field_16 = param_1;
        field_24 = param_2;
        field_32 = param_3;
        field_40 = param_4;
        field_48 = local_40;
        new (&field_56, param_6) Array<ConfigTypeListContainerStrategy, eastl::allocator>();
        field_80 = param_7;
        field_96 = 0;
        field_84 = 0;
        field_88 = 0;
        field_92 = 0;
        local_40 = (PlayerVarDomain*)&field_56;
        eastl::allocator::allocator(local_1e0, "EASTL hash_map");
        new (&field_104, local_1e0)
            eastl::hash_map<Js5ArchiveSettings_const*, ConfigDecoderInfo, eastl::hash<Js5ArchiveSettings_const*>,
                            eastl::equal_to<Js5ArchiveSettings_const*>, eastl::allocator, false>();
        local_1d8 = &field_104;
        new (&field_160) Array<BaseConfigTypeList*, eastl::allocator>();
        local_1d0 = &field_160;
        new (&field_184) Array<BaseConfigTypeList*, eastl::allocator>();
        local_1c0 = &field_208;
        std::unique_ptr<BASTypeList, std::default_delete<BASTypeList>>::unique_ptr<true, void>(
            (unique_ptr<BASTypeList, std::default_delete<BASTypeList>>*)local_1c0);
        local_1b8 = &field_216;
        std::unique_ptr<CursorTypeList, std::default_delete<CursorTypeList>>::unique_ptr<true, void>(
            (unique_ptr<CursorTypeList, std::default_delete<CursorTypeList>>*)local_1b8);
        local_1b0 = &field_224;
        std::unique_ptr<DBRowTypeList, std::default_delete<DBRowTypeList>>::unique_ptr<true, void>(
            (unique_ptr<DBRowTypeList, std::default_delete<DBRowTypeList>>*)local_1b0);
        local_1a8 = &field_232;
        std::unique_ptr<DBTableTypeList, std::default_delete<DBTableTypeList>>::unique_ptr<true, void>(
            (unique_ptr<DBTableTypeList, std::default_delete<DBTableTypeList>>*)local_1a8);
        local_1a0 = &field_240;
        std::unique_ptr<EffectAnimTypeList, std::default_delete<EffectAnimTypeList>>::unique_ptr<true, void>(
            (unique_ptr<EffectAnimTypeList, std::default_delete<EffectAnimTypeList>>*)local_1a0);
        local_198 = &field_248;
        std::unique_ptr<FloorOverlayTypeList, std::default_delete<FloorOverlayTypeList>>::unique_ptr<true, void>(
            (unique_ptr<FloorOverlayTypeList, std::default_delete<FloorOverlayTypeList>>*)local_198);
        local_190 = &field_256;
        std::unique_ptr<FloorUnderlayTypeList, std::default_delete<FloorUnderlayTypeList>>::unique_ptr<true, void>(
            (unique_ptr<FloorUnderlayTypeList, std::default_delete<FloorUnderlayTypeList>>*)local_190);
        local_188 = &field_264;
        std::unique_ptr<EnumTypeList, std::default_delete<EnumTypeList>>::unique_ptr<true, void>(
            (unique_ptr<EnumTypeList, std::default_delete<EnumTypeList>>*)local_188);
        local_180 = &field_272;
        std::unique_ptr<HeadbarTypeList, std::default_delete<HeadbarTypeList>>::unique_ptr<true, void>(
            (unique_ptr<HeadbarTypeList, std::default_delete<HeadbarTypeList>>*)local_180);
        local_178 = &field_280;
        std::unique_ptr<HitmarkTypeList, std::default_delete<HitmarkTypeList>>::unique_ptr<true, void>(
            (unique_ptr<HitmarkTypeList, std::default_delete<HitmarkTypeList>>*)local_178);
        local_170 = &field_288;
        std::unique_ptr<IDKTypeList, std::default_delete<IDKTypeList>>::unique_ptr<true, void>(
            (unique_ptr<IDKTypeList, std::default_delete<IDKTypeList>>*)local_170);
        local_168 = &field_296;
        std::unique_ptr<InvTypeList, std::default_delete<InvTypeList>>::unique_ptr<true, void>(
            (unique_ptr<InvTypeList, std::default_delete<InvTypeList>>*)local_168);
        local_160 = &field_304;
        std::unique_ptr<LocTypeList, std::default_delete<LocTypeList>>::unique_ptr<true, void>(
            (unique_ptr<LocTypeList, std::default_delete<LocTypeList>>*)local_160);
        local_158 = &field_312;
        std::unique_ptr<MapElementTypeList, std::default_delete<MapElementTypeList>>::unique_ptr<true, void>(
            (unique_ptr<MapElementTypeList, std::default_delete<MapElementTypeList>>*)local_158);
        local_150 = &field_320;
        std::unique_ptr<MSITypeList, std::default_delete<MSITypeList>>::unique_ptr<true, void>(
            (unique_ptr<MSITypeList, std::default_delete<MSITypeList>>*)local_150);
        local_148 = &field_328;
        std::unique_ptr<NPCTypeList, std::default_delete<NPCTypeList>>::unique_ptr<true, void>(
            (unique_ptr<NPCTypeList, std::default_delete<NPCTypeList>>*)local_148);
        local_140 = &field_336;
        std::unique_ptr<ObjTypeList, std::default_delete<ObjTypeList>>::unique_ptr<true, void>(
            (unique_ptr<ObjTypeList, std::default_delete<ObjTypeList>>*)local_140);
        local_138 = &field_344;
        std::unique_ptr<ParamTypeList, std::default_delete<ParamTypeList>>::unique_ptr<true, void>(
            (unique_ptr<ParamTypeList, std::default_delete<ParamTypeList>>*)local_138);
        local_130 = &field_352;
        std::unique_ptr<QuestTypeList, std::default_delete<QuestTypeList>>::unique_ptr<true, void>(
            (unique_ptr<QuestTypeList, std::default_delete<QuestTypeList>>*)local_130);
        local_128 = &field_360;
        std::unique_ptr<QuickChatCatTypeList, std::default_delete<QuickChatCatTypeList>>::unique_ptr<true, void>(
            (unique_ptr<QuickChatCatTypeList, std::default_delete<QuickChatCatTypeList>>*)local_128);
        local_120 = &field_368;
        std::unique_ptr<QuickChatPhraseTypeList, std::default_delete<QuickChatPhraseTypeList>>::unique_ptr<true, void>(
            (unique_ptr<QuickChatPhraseTypeList, std::default_delete<QuickChatPhraseTypeList>>*)local_120);
        local_118 = &field_376;
        std::unique_ptr<SeqGroupTypeList, std::default_delete<SeqGroupTypeList>>::unique_ptr<true, void>(
            (unique_ptr<SeqGroupTypeList, std::default_delete<SeqGroupTypeList>>*)local_118);
        local_110 = &field_384;
        std::unique_ptr<SeqTypeList, std::default_delete<SeqTypeList>>::unique_ptr<true, void>(
            (unique_ptr<SeqTypeList, std::default_delete<SeqTypeList>>*)local_110);
        local_108 = &field_392;
        std::unique_ptr<SkyBoxTypeList, std::default_delete<SkyBoxTypeList>>::unique_ptr<true, void>(
            (unique_ptr<SkyBoxTypeList, std::default_delete<SkyBoxTypeList>>*)local_108);
        local_100 = &field_400;
        std::unique_ptr<StructTypeList, std::default_delete<StructTypeList>>::unique_ptr<true, void>(
            (unique_ptr<StructTypeList, std::default_delete<StructTypeList>>*)local_100);
        local_f8 = &field_408;
        std::unique_ptr<WaterTypeList, std::default_delete<WaterTypeList>>::unique_ptr<true, void>(
            (unique_ptr<WaterTypeList, std::default_delete<WaterTypeList>>*)local_f8);
        local_f0 = &field_416;
        std::unique_ptr<WorldAreaTypeList, std::default_delete<WorldAreaTypeList>>::unique_ptr<true, void>(
            (unique_ptr<WorldAreaTypeList, std::default_delete<WorldAreaTypeList>>*)local_f0);
        local_e8 = &field_424;
        std::unique_ptr<LightTypeList, std::default_delete<LightTypeList>>::unique_ptr<true, void>(
            (unique_ptr<LightTypeList, std::default_delete<LightTypeList>>*)local_e8);
        local_e0 = &field_432;
        std::unique_ptr<AchievementTypeList, std::default_delete<AchievementTypeList>>::unique_ptr<true, void>(
            (unique_ptr<AchievementTypeList, std::default_delete<AchievementTypeList>>*)local_e0);
        local_d8 = &field_440;
        std::unique_ptr<VarTypeList, std::default_delete<VarTypeList>>::unique_ptr<true, void>(
            (unique_ptr<VarTypeList, std::default_delete<VarTypeList>>*)local_d8);
        local_d0 = &field_448;
        std::unique_ptr<VarTypeList, std::default_delete<VarTypeList>>::unique_ptr<true, void>(
            (unique_ptr<VarTypeList, std::default_delete<VarTypeList>>*)local_d0);
        local_c8 = &field_456;
        std::unique_ptr<VarTypeList, std::default_delete<VarTypeList>>::unique_ptr<true, void>(
            (unique_ptr<VarTypeList, std::default_delete<VarTypeList>>*)local_c8);
        local_c0 = &field_464;
        std::unique_ptr<VarTypeList, std::default_delete<VarTypeList>>::unique_ptr<true, void>(
            (unique_ptr<VarTypeList, std::default_delete<VarTypeList>>*)local_c0);
        local_b8 = &field_472;
        std::unique_ptr<VarTypeList, std::default_delete<VarTypeList>>::unique_ptr<true, void>(
            (unique_ptr<VarTypeList, std::default_delete<VarTypeList>>*)local_b8);
        local_b0 = &field_480;
        std::unique_ptr<VarTypeList, std::default_delete<VarTypeList>>::unique_ptr<true, void>(
            (unique_ptr<VarTypeList, std::default_delete<VarTypeList>>*)local_b0);
        local_a8 = &field_488;
        std::unique_ptr<VarTypeList, std::default_delete<VarTypeList>>::unique_ptr<true, void>(
            (unique_ptr<VarTypeList, std::default_delete<VarTypeList>>*)local_a8);
        local_a0 = &field_496;
        std::unique_ptr<VarBitTypeList, std::default_delete<VarBitTypeList>>::unique_ptr<true, void>(
            (unique_ptr<VarBitTypeList, std::default_delete<VarBitTypeList>>*)local_a0);
        local_98 = &field_504;
        std::unique_ptr<AudioDefaults, std::default_delete<AudioDefaults>>::unique_ptr<true, void>(
            (unique_ptr<AudioDefaults, std::default_delete<AudioDefaults>>*)local_98);
        local_90 = &field_512;
        std::unique_ptr<GraphicsDefaults, std::default_delete<GraphicsDefaults>>::unique_ptr<true, void>(
            (unique_ptr<GraphicsDefaults, std::default_delete<GraphicsDefaults>>*)local_90);
        local_88 = &field_520;
        std::unique_ptr<MapDefaults, std::default_delete<MapDefaults>>::unique_ptr<true, void>(
            (unique_ptr<MapDefaults, std::default_delete<MapDefaults>>*)local_88);
        local_80 = &field_528;
        std::unique_ptr<MiniMenuDefaults, std::default_delete<MiniMenuDefaults>>::unique_ptr<true, void>(
            (unique_ptr<MiniMenuDefaults, std::default_delete<MiniMenuDefaults>>*)local_80);
        local_78 = &field_536;
        std::unique_ptr<SkillDefaults, std::default_delete<SkillDefaults>>::unique_ptr<true, void>(
            (unique_ptr<SkillDefaults, std::default_delete<SkillDefaults>>*)local_78);
        local_70 = &field_544;
        std::unique_ptr<WearposDefaults, std::default_delete<WearposDefaults>>::unique_ptr<true, void>(
            (unique_ptr<WearposDefaults, std::default_delete<WearposDefaults>>*)local_70);
        local_68 = &field_552;
        std::unique_ptr<WorldMapDefaults, std::default_delete<WorldMapDefaults>>::unique_ptr<true, void>(
            (unique_ptr<WorldMapDefaults, std::default_delete<WorldMapDefaults>>*)local_68);
        local_60 = &field_560;
        std::unique_ptr<CustomizationDefaults, std::default_delete<CustomizationDefaults>>::unique_ptr<true, void>(
            (unique_ptr<CustomizationDefaults, std::default_delete<CustomizationDefaults>>*)local_60);
        local_58 = &field_568;
        local_1c8 = &field_184;
        new (local_58) Array<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>();
        local_50 = &field_592;
        new (local_50)
            Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>, eastl::allocator>();
        local_48 = &field_616;
        new (local_48)
            Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>, eastl::allocator>();
        new (&field_640)
            Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>, eastl::allocator>();
        new (&field_664) eastl::vector_map<
            int, shared_ptr<graphics::AnimationStateMachineProvider>, eastl::less<int>, eastl::allocator,
            eastl::vector<eastl::pair<int, shared_ptr<graphics::AnimationStateMachineProvider>>, eastl::allocator>>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)&field_704);
        new (&field_712) eastl::vector<shared_ptr<ConfigProviderBatchInterface>, eastl::allocator>();
        field_744 = 0;
        field_748 = 0;
        field_752 = -1;
        field_760 = (ServerSyncing*)0;
        BaseVarType::Initialise();
        ScriptVarType::Initialise();
        VarDomainType::Initialise();
    }

    // 0x100564dc0, 32 bytes, complete-object constructor, placed by class name
    // ConfigProvider::ConfigProvider(Js5ResourceProvider&, Language const*, ModeGame const*, bool, PlayerVarDomain*, Array<ConfigTypeListContainerStrategy, eastl::allocator>&, bool)
    void ConfigProvider::ConfigProvider(Js5ResourceProvider* param_1, Language* param_2, ModeGame* param_3,
                                        bool param_4, PlayerVarDomain* param_5, Array* param_6, bool param_7) {
        ConfigProvider(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7);
    }

    // 0x100564de0, 1424 bytes, base-object destructor, placed by class name
    // ConfigProvider::~ConfigProvider()
    void ConfigProvider::~ConfigProvider() {
        field_0 = &PTR__ConfigProvider_100f047d8;
        field_8 = &PTR_GetVarPlayerTypeList_100f04828;
        BaseVarType::Destroy();
        ScriptVarType::Destroy();
        VarDomainType::Destroy();
        ((ConfigProvider*)this)->Destroy();
        (&field_712)->~vector();
        (&field_704)->~unique_ptr();
        (&field_664)->~vector_map();
        (&field_640)->~Array();
        (&field_616)->~Array();
        (&field_592)->~Array();
        (&field_568)->~Array();
        (&field_560)->~unique_ptr();
        (&field_552)->~unique_ptr();
        (&field_544)->~unique_ptr();
        (&field_536)->~unique_ptr();
        (&field_528)->~unique_ptr();
        (&field_520)->~unique_ptr();
        (&field_512)->~unique_ptr();
        (&field_504)->~unique_ptr();
        (&field_496)->~unique_ptr();
        (&field_488)->~unique_ptr();
        (&field_480)->~unique_ptr();
        (&field_472)->~unique_ptr();
        (&field_464)->~unique_ptr();
        (&field_456)->~unique_ptr();
        (&field_448)->~unique_ptr();
        (&field_440)->~unique_ptr();
        (&field_432)->~unique_ptr();
        (&field_424)->~unique_ptr();
        (&field_416)->~unique_ptr();
        (&field_408)->~unique_ptr();
        (&field_400)->~unique_ptr();
        (&field_392)->~unique_ptr();
        (&field_384)->~unique_ptr();
        (&field_376)->~unique_ptr();
        (&field_368)->~unique_ptr();
        (&field_360)->~unique_ptr();
        (&field_352)->~unique_ptr();
        (&field_344)->~unique_ptr();
        (&field_336)->~unique_ptr();
        (&field_328)->~unique_ptr();
        (&field_320)->~unique_ptr();
        (&field_312)->~unique_ptr();
        (&field_304)->~unique_ptr();
        (&field_296)->~unique_ptr();
        (&field_288)->~unique_ptr();
        (&field_280)->~unique_ptr();
        (&field_272)->~unique_ptr();
        (&field_264)->~unique_ptr();
        (&field_256)->~unique_ptr();
        (&field_248)->~unique_ptr();
        (&field_240)->~unique_ptr();
        (&field_232)->~unique_ptr();
        (&field_224)->~unique_ptr();
        (&field_216)->~unique_ptr();
        (&field_208)->~unique_ptr();
        (&field_184)->~Array();
        (&field_160)->~Array();
        (&field_104)->~hash_map();
        (&field_56)->~Array();
        ~AutoSingleton();
    }

    // 0x100565390, 16 bytes, complete-object destructor, placed by class name
    // ConfigProvider::~ConfigProvider(): jumps straight to the base-object destructor

    // 0x1005653a0, 32 bytes, deleting destructor, placed by class name
    // ConfigProvider::~ConfigProvider()
    void ConfigProvider::~ConfigProvider() {
        ~ConfigProvider(this);
        operator_delete(this);
    }

    // 0x1005653c0, 32 bytes, placed by class name
    // ConfigProvider::EnableServerSyncing()
    void ConfigProvider::EnableServerSyncing() {
        ServerSyncing* pSVar1;

        pSVar1 = Singleton<ServerSyncing>::Create<>((Singleton<ServerSyncing>*)this);
        field_760 = pSVar1;
    }

    // 0x100565430, 112 bytes, placed by class name
    // ConfigProvider::SetMembersServer(bool)
    void ConfigProvider::SetMembersServer(bool param_1) {
        NPCTypeList* pNVar1;
        ObjTypeList* this_00;

        if (field_40 != param_1) {
            field_40 = param_1;
            pNVar1 = (NPCTypeList*)std::unique_ptr<LocTypeList, std::default_delete<LocTypeList>>::operator->(
                (unique_ptr<LocTypeList, std::default_delete<LocTypeList>>*)&field_304);
            pNVar1->SetMembersServer(param_1);
            pNVar1 = (NPCTypeList*)std::unique_ptr<NPCTypeList, std::default_delete<NPCTypeList>>::operator->(
                (unique_ptr<NPCTypeList, std::default_delete<NPCTypeList>>*)&field_328);
            pNVar1->SetMembersServer(param_1);
            this_00 = (ObjTypeList*)std::unique_ptr<ObjTypeList, std::default_delete<ObjTypeList>>::operator->(
                (unique_ptr<ObjTypeList, std::default_delete<ObjTypeList>>*)&field_336);
            this_00->SetMembersServer(param_1);
        }
    }

    // 0x1005654f0, 240 bytes, placed by class name
    // ConfigProvider::GetVarType(VarDomainType*, int) const
    undefined1* ConfigProvider::GetVarType(VarDomainType* param_1, int param_2) {
        BaseTemplateConfigTypeList<VarType>* this_00;
        undefined1* puVar1;
        unique_ptr<VarTypeList, std::default_delete<VarTypeList>>* this_01;

        puVar1 = &NullVarType;
        if (field_96 == 4) {
            if (VarDomainType::PLAYER == param_1) {
                this_01 = (unique_ptr<VarTypeList, std::default_delete<VarTypeList>>*)&field_440;
            } else if (VarDomainType::NPC == param_1) {
                this_01 = (unique_ptr<VarTypeList, std::default_delete<VarTypeList>>*)&field_448;
            } else if (VarDomainType::CLIENT == param_1) {
                this_01 = (unique_ptr<VarTypeList, std::default_delete<VarTypeList>>*)&field_456;
            } else if (VarDomainType::OBJECT == param_1) {
                this_01 = (unique_ptr<VarTypeList, std::default_delete<VarTypeList>>*)&field_464;
            } else if (VarDomainType::CLAN == param_1) {
                this_01 = (unique_ptr<VarTypeList, std::default_delete<VarTypeList>>*)&field_472;
            } else if (VarDomainType::CLAN_SETTING == param_1) {
                this_01 = (unique_ptr<VarTypeList, std::default_delete<VarTypeList>>*)&field_480;
            } else {
                if (VarDomainType::PLAYER_GROUP != param_1) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/config/ConfigProvider.cpp",
                                    142, "ConfigProvider: Unsupported var domain type: %u", (ulong)param_1->field_8);
                }
                this_01 = (unique_ptr<VarTypeList, std::default_delete<VarTypeList>>*)&field_488;
            }
            this_00 = (BaseTemplateConfigTypeList<VarType>*)
                          std::unique_ptr<VarTypeList, std::default_delete<VarTypeList>>::operator->(this_01);
            puVar1 = (undefined1*)this_00->List(param_2, 0);
        }
        return puVar1;
    }

    // 0x100565620, 64 bytes, placed by class name
    // ConfigProvider::GetVarBitType(int) const
    undefined1* ConfigProvider::GetVarBitType(int param_1) {
        BaseTemplateConfigTypeList<VarBitType>* this_00;
        undefined1* puVar1;

        if (field_96 == 4) {
            this_00 = (BaseTemplateConfigTypeList<VarBitType>*)
                          std::unique_ptr<VarBitTypeList, std::default_delete<VarBitTypeList>>::operator->(
                              (unique_ptr<VarBitTypeList, std::default_delete<VarBitTypeList>>*)&field_496);
            puVar1 = (undefined1*)this_00->List(param_1, 0);
        } else {
            puVar1 = &NullVarBitType;
        }
        return puVar1;
    }

    // 0x1005656a0, 112 bytes, placed by class name
    // ConfigProvider::CacheReset()
    void ConfigProvider::CacheReset() {
        long lVar1;
        ulong uVar2;
        long* plVar3;
        undefined8* puVar4;
        ulong uVar5;
        undefined1* this_00;

        this_00 = &field_160;
        lVar1 = this_00->end();
        if (lVar1 != 0) {
            uVar5 = 0;
            do {
                plVar3 = (long*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                    (Array<BaseConfigTypeList*, eastl::allocator>*)this_00, uVar5);
                if (*plVar3 != 0) {
                    puVar4 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                        (Array<BaseConfigTypeList*, eastl::allocator>*)this_00, uVar5);
                    (**(code**)(*(long*)*puVar4 + 32))();
                }
                uVar5 = uVar5 + 1;
                uVar2 = this_00->end();
            } while (uVar5 < uVar2);
        }
    }

    // 0x100565710, 192 bytes, placed by class name
    // ConfigProvider::CheckLoaded(bool&, bool, Js5ArchiveSettings const&)
    void ConfigProvider::CheckLoaded(bool* param_1, bool param_2, Js5ArchiveSettings* param_3) {
        char cVar1;
        int iVar2;
        DownloadWaitHandler* this_00;
        undefined3 in_register_00000011;

        iVar2 = param_3->GetX();
        this_00 = (DownloadWaitHandler*)
            std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator*(
                (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)&field_704);
        if (CONCAT31(in_register_00000011, param_2) != 0) {
            this_00->SetExists(iVar2);
        }
        cVar1 = this_00->CanCheck(iVar2);
        if (cVar1 == '\0') {
            cVar1 = this_00->IsComplete(iVar2);
            if (cVar1 == '\0') {
                *param_1 = false;
            }
        } else {
            if ((undefined*)(*(code*)field_16->field_0[2])(field_16, param_3) == DataStatus::READY) {
                this_00->Completed(iVar2);
            } else {
                *param_1 = false;
                this_00->Request(iVar2);
            }
        }
    }

    // 0x1005657e0, 8880 bytes, placed by class name
    // ConfigProvider::MainLogic()
    void ConfigProvider::MainLogic() {
        Js5ResourceProvider** ppJVar1;
        undefined1* puVar2;
        undefined1* puVar3;
        ConfigProvider* pCVar4;
        long* plVar5;
        BaseConfigTypeList* this_00;
        bool bVar6;
        char cVar7;
        bool bVar8;
        uint uVar9;
        int iVar10;
        shared_ptr* this_01;
        shared_ptr* psVar11;
        long* plVar12;
        int* piVar13;
        ModeGame** ppMVar14;
        ulong uVar15;
        long* plVar16;
        long lVar17;
        undefined8 uVar18;
        ulong uVar19;
        undefined8* puVar20;
        undefined* puVar21;
        ulong uVar22;
        Js5ConfigGroup* pJVar23;
        uint uVar24;
        shared_ptr local_78[2];
        long local_58;
        Array* local_50;
        shared_ptr local_48;
        ConfigProvider* local_38;

        ppJVar1 = &field_16;
        pCVar4 = (ConfigProvider*)field_16;
        puVar3 = &field_712;
        this_01 = (shared_ptr*)puVar3->HeapBeginPtr();
        do {
            psVar11 = (shared_ptr*)puVar3->end();
            if (this_01 == psVar11)
                break;
            plVar12 = (long*)shared_ptr<ConfigProviderBatchInterface>::operator*(
                (shared_ptr<ConfigProviderBatchInterface>*)this_01);
            cVar7 = (**(code**)(*plVar12 + 16))(plVar12);
            if (cVar7 == '\0') {
                this_01 = this_01 + 1;
                bVar8 = true;
            } else {
                this_01 = (shared_ptr*)puVar3->erase(this_01);
                cVar7 = puVar3->empty();
                bVar8 = true;
                if (cVar7 != '\0') {
                    new (local_78) eastl::vector<shared_ptr<ConfigProviderBatchInterface>, eastl::allocator>();
                    eastl::vector<shared_ptr<ConfigProviderBatchInterface>, eastl::allocator>::operator=(
                        (vector<shared_ptr<ConfigProviderBatchInterface>, eastl::allocator>*)puVar3, (vector*)local_78);
                    local_78->~vector();
                    bVar8 = false;
                }
            }
        } while (bVar8);
        switch (field_96) {
        case 0:
            uVar18 = logger::default_logger();
            logger::Logger::Log(uVar18, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.cpp",
                                226, "ConfigProvider: Initialising Script/Interface loaders...");
            if (field_80 != false) {
                local_50 = (Array*)&field_568;
                local_38 = this;
                make_shared<ConfigProviderMultiGroupSingleFileLoader, ConfigProvider*, Js5ResourceProvider*&,
                            Js5ArchiveSettings*&,
                            Array<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*>(
                    (jag*)&local_48, &local_38, ppJVar1, (Js5ArchiveSettings**)&Js5Archive::JS5_CLIENTSCRIPTS,
                    &local_50);
                shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider,
                                                                            void>(
                    (shared_ptr<oldscape::RSevenDebugPresetProvider>*)local_78, &local_48);
                puVar3->push_back(local_78);
                local_78->~shared_ptr();
                local_48.~shared_ptr();
                local_50 = (Array*)&field_592;
                local_38 = this;
                make_shared<ConfigProviderMultiGroupMultiFileLoader, ConfigProvider*, Js5ResourceProvider*&,
                            Js5ArchiveSettings*&,
                            Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>,
                                  eastl::allocator>*>((jag*)&local_48, &local_38, ppJVar1,
                                                      (Js5ArchiveSettings**)&Js5Archive::JS5_INTERFACES, &local_50);
                shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider,
                                                                            void>(
                    (shared_ptr<oldscape::RSevenDebugPresetProvider>*)local_78, &local_48);
                puVar3->push_back(local_78);
                local_78->~shared_ptr();
                local_48.~shared_ptr();
                local_50 = (Array*)&field_616;
                local_38 = this;
                make_shared<ConfigProviderMultiGroupMultiFileLoader, ConfigProvider*, Js5ResourceProvider*&,
                            Js5ArchiveSettings*&,
                            Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>,
                                  eastl::allocator>*>((jag*)&local_48, &local_38, ppJVar1,
                                                      (Js5ArchiveSettings**)&Js5Archive::JS5_DBTABLEINDEX, &local_50);
                shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider,
                                                                            void>(
                    (shared_ptr<oldscape::RSevenDebugPresetProvider>*)local_78, &local_48);
                puVar3->push_back(local_78);
                local_78->~shared_ptr();
                local_48.~shared_ptr();
                local_50 = (Array*)&field_640;
                local_38 = this;
                make_shared<ConfigProviderMultiGroupMultiFileLoader, ConfigProvider*, Js5ResourceProvider*&,
                            Js5ArchiveSettings*&,
                            Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>,
                                  eastl::allocator>*>((jag*)&local_48, &local_38, ppJVar1,
                                                      (Js5ArchiveSettings**)&Js5Archive::JS5_QUICKCHAT, &local_50);
                shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider,
                                                                            void>(
                    (shared_ptr<oldscape::RSevenDebugPresetProvider>*)local_78, &local_48);
                puVar3->push_back(local_78);
                local_78->~shared_ptr();
                local_48.~shared_ptr();
                local_38 = this;
                make_shared<ConfigProviderMultiGroupSingleFileLoader, ConfigProvider*, Js5ResourceProvider*&,
                            Js5ArchiveSettings*&>((jag*)&local_48, &local_38, ppJVar1,
                                                  (Js5ArchiveSettings**)&Js5Archive::JS5_STYLESHEETS);
                shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider,
                                                                            void>(
                    (shared_ptr<oldscape::RSevenDebugPresetProvider>*)local_78, &local_48);
                puVar3->push_back(local_78);
                local_78->~shared_ptr();
                local_48.~shared_ptr();
                local_38 = this;
                make_shared<ConfigProviderMultiGroupMultiFileLoader, ConfigProvider*, Js5ResourceProvider*&,
                            Js5ArchiveSettings*&>((jag*)&local_48, &local_38, ppJVar1,
                                                  (Js5ArchiveSettings**)&Js5Archive::JS5_UI_ANIMATIONS);
                shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider,
                                                                            void>(
                    (shared_ptr<oldscape::RSevenDebugPresetProvider>*)local_78, &local_48);
                puVar3->push_back(local_78);
                local_78->~shared_ptr();
                local_48.~shared_ptr();
                local_38 = this;
                make_shared<ConfigProviderMultiGroupSingleFileLoader, ConfigProvider*, Js5ResourceProvider*&,
                            Js5ArchiveSettings*&>((jag*)&local_48, &local_38, ppJVar1,
                                                  (Js5ArchiveSettings**)&Js5Archive::JS5_CUTSCENES2D);
                shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider,
                                                                            void>(
                    (shared_ptr<oldscape::RSevenDebugPresetProvider>*)local_78, &local_48);
                puVar3->push_back(local_78);
                local_78->~shared_ptr();
                local_48.~shared_ptr();
            }
            local_38 = this;
            make_shared<ConfigProviderMultiGroupSingleFileLoader, ConfigProvider*, Js5ResourceProvider*&,
                        Js5ArchiveSettings*&>((jag*)&local_48, &local_38, ppJVar1,
                                              (Js5ArchiveSettings**)&Js5Archive::JS5_VFX);
            shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
                (shared_ptr<oldscape::RSevenDebugPresetProvider>*)local_78, &local_48);
            puVar3->push_back(local_78);
            local_78->~shared_ptr();
            local_48.~shared_ptr();
            local_38 = this;
            make_shared<ConfigProviderFontMetricsLoader, ConfigProvider*, Js5ResourceProvider*&, Js5ArchiveSettings*&>(
                (jag*)&local_48, &local_38, ppJVar1, (Js5ArchiveSettings**)&Js5Archive::JS5_FONTMETRICSRT7);
            shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
                (shared_ptr<oldscape::RSevenDebugPresetProvider>*)local_78, &local_48);
            puVar3->push_back(local_78);
            local_78->~shared_ptr();
            local_48.~shared_ptr();
            local_38 = this;
            make_shared<ConfigProviderAnimationStateMachineLoader, ConfigProvider*, Js5ResourceProvider*&,
                        Js5ArchiveSettings*&>((jag*)&local_48, &local_38, ppJVar1,
                                              (Js5ArchiveSettings**)&Js5Archive::JS5_ANIMSTATEMACHINES);
            shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
                (shared_ptr<oldscape::RSevenDebugPresetProvider>*)local_78, &local_48);
            puVar3->push_back(local_78);
            local_78->~shared_ptr();
            local_48.~shared_ptr();
            local_38 = this;
            make_shared<ConfigProviderDefaultsLoader, ConfigProvider*, Js5ResourceProvider*&, Js5ArchiveSettings*&>(
                (jag*)&local_48, &local_38, ppJVar1, (Js5ArchiveSettings**)&Js5Archive::JS5_DEFAULTS);
            shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
                (shared_ptr<oldscape::RSevenDebugPresetProvider>*)local_78, &local_48);
            puVar3->push_back(local_78);
            local_78->~shared_ptr();
            local_48.~shared_ptr();
            iVar10 = puVar3->size();
            field_752 = iVar10;
            iVar10 = Js5ConfigGroup::GetMaximumConfigGroupID();
            uVar24 = 0;
            (&field_160, (ulong)(iVar10 + 1), 0)->set_max_size();
            Js5ConfigGroup::GetMaximumConfigGroupID();
            do {
                puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                    (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (ulong)uVar24);
                *puVar20 = 0;
                uVar24 = uVar24 + 1;
                uVar9 = Js5ConfigGroup::GetMaximumConfigGroupID();
            } while (uVar24 <= uVar9);
            field_96 = 1;
            break;
        case 1:
            if ((field_92 == '\0') &&
                (puVar21 = (undefined*)(*(code*)pCVar4->field_0[5])(pCVar4, local_78), puVar21 == DataStatus::READY)) {
                PerformIndexDownload(this, (Js5ResourceProvider*)pCVar4);
                field_92 = 1;
            }
            uVar18 = (*(code*)pCVar4->field_0[3])(pCVar4, &local_48, Js5Archive::JS5_CONFIG);
            local_58._0_4_ = (undefined4)CONCAT71((int7)((ulong)uVar18 >> 8), local_48._0_8_ != 0);
            if (local_48._0_8_ != 0) {
                puVar3 = &field_344;
                bVar8 = puVar3->operator_cast_to_bool();
                if (!bVar8) {
                    iVar10 = (Js5ConfigGroup::PARAMTYPE)->GetX();
                    piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                        (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                    if (*piVar13 != 0) {
                        iVar10 = (Js5ConfigGroup::PARAMTYPE)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<ParamTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&>(
                            (unique_ptr*)&local_38, ppMVar14, (Language**)&field_32, (Js5ResourceProvider*)&field_24);
                        std::unique_ptr<ParamTypeList, std::default_delete<ParamTypeList>>::operator=(
                            (unique_ptr<ParamTypeList, std::default_delete<ParamTypeList>>*)puVar3,
                            (unique_ptr*)&local_38);
                        local_38.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::PARAMTYPE)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    }
                }
                puVar3 = &field_224;
                bVar8 = puVar3->operator_cast_to_bool();
                if (!bVar8) {
                    iVar10 = (Js5ConfigGroup::DBROWTYPE)->GetX();
                    piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                        (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                    if (*piVar13 != 0) {
                        iVar10 = (Js5ConfigGroup::DBROWTYPE)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<DBRowTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&>(
                            (unique_ptr*)&local_38, ppMVar14, (Language**)&field_32, (Js5ResourceProvider*)&field_24);
                        std::unique_ptr<DBRowTypeList, std::default_delete<DBRowTypeList>>::operator=(
                            (unique_ptr<DBRowTypeList, std::default_delete<DBRowTypeList>>*)puVar3,
                            (unique_ptr*)&local_38);
                        local_38.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::DBROWTYPE)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    }
                }
                puVar3 = &field_232;
                bVar8 = puVar3->operator_cast_to_bool();
                if (!bVar8) {
                    iVar10 = (Js5ConfigGroup::DBTABLETYPE)->GetX();
                    piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                        (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                    if (*piVar13 != 0) {
                        iVar10 = (Js5ConfigGroup::DBTABLETYPE)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<DBTableTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&>(
                            (unique_ptr*)&local_38, ppMVar14, (Language**)&field_32, (Js5ResourceProvider*)&field_24);
                        std::unique_ptr<DBTableTypeList, std::default_delete<DBTableTypeList>>::operator=(
                            (unique_ptr<DBTableTypeList, std::default_delete<DBTableTypeList>>*)puVar3,
                            (unique_ptr*)&local_38);
                        local_38.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::DBTABLETYPE)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    }
                }
                puVar3 = &field_296;
                bVar8 = puVar3->operator_cast_to_bool();
                if (!bVar8) {
                    iVar10 = (Js5ConfigGroup::INVTYPE)->GetX();
                    piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                        (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                    if (*piVar13 != 0) {
                        iVar10 = (Js5ConfigGroup::INVTYPE)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<InvTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&>(
                            (unique_ptr*)&local_38, ppMVar14, (Language**)&field_32, (Js5ResourceProvider*)&field_24);
                        std::unique_ptr<InvTypeList, std::default_delete<InvTypeList>>::operator=(
                            (unique_ptr<InvTypeList, std::default_delete<InvTypeList>>*)puVar3, (unique_ptr*)&local_38);
                        local_38.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::INVTYPE)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    }
                }
                puVar3 = &field_496;
                bVar8 = puVar3->operator_cast_to_bool();
                if (!bVar8) {
                    iVar10 = (Js5ConfigGroup::VAR_BIT)->GetX();
                    piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                        (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                    if (*piVar13 != 0) {
                        iVar10 = (Js5ConfigGroup::VAR_BIT)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<VarBitTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&, ConfigProvider&>(
                            (unique_ptr*)&local_38, ppMVar14, (Language**)&field_32, (Js5ResourceProvider*)&field_24,
                            pCVar4);
                        std::unique_ptr<VarBitTypeList, std::default_delete<VarBitTypeList>>::operator=(
                            (unique_ptr<VarBitTypeList, std::default_delete<VarBitTypeList>>*)puVar3,
                            (unique_ptr*)&local_38);
                        local_38.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::VAR_BIT)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    }
                }
                puVar3 = &field_472;
                bVar8 = puVar3->operator_cast_to_bool();
                if (!bVar8) {
                    iVar10 = (Js5ConfigGroup::VAR_CLAN)->GetX();
                    piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                        (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                    if (*piVar13 != 0) {
                        iVar10 = (Js5ConfigGroup::VAR_CLAN)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<VarTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&, Js5ConfigGroup_const*&,
                                         VarDomainType*&>((unique_ptr*)&local_38, ppMVar14, (Language**)&field_32,
                                                          (Js5ResourceProvider*)&field_24, (Js5ConfigGroup**)pCVar4,
                                                          (VarDomainType**)&Js5ConfigGroup::VAR_CLAN);
                        std::unique_ptr<VarTypeList, std::default_delete<VarTypeList>>::operator=(
                            (unique_ptr<VarTypeList, std::default_delete<VarTypeList>>*)puVar3, (unique_ptr*)&local_38);
                        local_38.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::VAR_CLAN)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    }
                }
                puVar3 = &field_480;
                bVar8 = puVar3->operator_cast_to_bool();
                if (!bVar8) {
                    iVar10 = (Js5ConfigGroup::VAR_CLAN)->GetX();
                    piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                        (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                    if (*piVar13 != 0) {
                        iVar10 = (Js5ConfigGroup::VAR_CLAN)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<VarTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&, Js5ConfigGroup_const*&,
                                         VarDomainType*&>((unique_ptr*)&local_38, ppMVar14, (Language**)&field_32,
                                                          (Js5ResourceProvider*)&field_24, (Js5ConfigGroup**)pCVar4,
                                                          (VarDomainType**)&Js5ConfigGroup::VAR_CLAN_SETTING);
                        std::unique_ptr<VarTypeList, std::default_delete<VarTypeList>>::operator=(
                            (unique_ptr<VarTypeList, std::default_delete<VarTypeList>>*)puVar3, (unique_ptr*)&local_38);
                        local_38.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::VAR_CLAN_SETTING)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    }
                }
                puVar3 = &field_456;
                bVar8 = puVar3->operator_cast_to_bool();
                if (!bVar8) {
                    iVar10 = (Js5ConfigGroup::VAR_CLIENT)->GetX();
                    piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                        (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                    if (*piVar13 != 0) {
                        iVar10 = (Js5ConfigGroup::VAR_CLIENT)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<VarTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&, Js5ConfigGroup_const*&,
                                         VarDomainType*&>((unique_ptr*)&local_38, ppMVar14, (Language**)&field_32,
                                                          (Js5ResourceProvider*)&field_24, (Js5ConfigGroup**)pCVar4,
                                                          (VarDomainType**)&Js5ConfigGroup::VAR_CLIENT);
                        std::unique_ptr<VarTypeList, std::default_delete<VarTypeList>>::operator=(
                            (unique_ptr<VarTypeList, std::default_delete<VarTypeList>>*)puVar3, (unique_ptr*)&local_38);
                        local_38.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::VAR_CLIENT)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    }
                }
                puVar3 = &field_464;
                bVar8 = puVar3->operator_cast_to_bool();
                if (!bVar8) {
                    iVar10 = (Js5ConfigGroup::VAR_OBJECT)->GetX();
                    piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                        (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                    if (*piVar13 != 0) {
                        iVar10 = (Js5ConfigGroup::VAR_OBJECT)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<VarTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&, Js5ConfigGroup_const*&,
                                         VarDomainType*&>((unique_ptr*)&local_38, ppMVar14, (Language**)&field_32,
                                                          (Js5ResourceProvider*)&field_24, (Js5ConfigGroup**)pCVar4,
                                                          (VarDomainType**)&Js5ConfigGroup::VAR_OBJECT);
                        std::unique_ptr<VarTypeList, std::default_delete<VarTypeList>>::operator=(
                            (unique_ptr<VarTypeList, std::default_delete<VarTypeList>>*)puVar3, (unique_ptr*)&local_38);
                        local_38.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::VAR_OBJECT)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    }
                }
                puVar3 = &field_448;
                bVar8 = puVar3->operator_cast_to_bool();
                if (!bVar8) {
                    iVar10 = (Js5ConfigGroup::VAR_NPC)->GetX();
                    piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                        (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                    if (*piVar13 != 0) {
                        iVar10 = (Js5ConfigGroup::VAR_NPC)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<VarTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&, Js5ConfigGroup_const*&,
                                         VarDomainType*&>((unique_ptr*)&local_38, ppMVar14, (Language**)&field_32,
                                                          (Js5ResourceProvider*)&field_24, (Js5ConfigGroup**)pCVar4,
                                                          (VarDomainType**)&Js5ConfigGroup::VAR_NPC);
                        std::unique_ptr<VarTypeList, std::default_delete<VarTypeList>>::operator=(
                            (unique_ptr<VarTypeList, std::default_delete<VarTypeList>>*)puVar3, (unique_ptr*)&local_38);
                        local_38.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::VAR_NPC)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    }
                }
                puVar3 = &field_440;
                bVar8 = puVar3->operator_cast_to_bool();
                if (!bVar8) {
                    iVar10 = (Js5ConfigGroup::VAR_PLAYER)->GetX();
                    piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                        (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                    if (*piVar13 != 0) {
                        iVar10 = (Js5ConfigGroup::VAR_PLAYER)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<VarTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&, Js5ConfigGroup_const*&,
                                         VarDomainType*&>((unique_ptr*)&local_38, ppMVar14, (Language**)&field_32,
                                                          (Js5ResourceProvider*)&field_24, (Js5ConfigGroup**)pCVar4,
                                                          (VarDomainType**)&Js5ConfigGroup::VAR_PLAYER);
                        std::unique_ptr<VarTypeList, std::default_delete<VarTypeList>>::operator=(
                            (unique_ptr<VarTypeList, std::default_delete<VarTypeList>>*)puVar3, (unique_ptr*)&local_38);
                        local_38.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::VAR_PLAYER)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    }
                }
                puVar3 = &field_488;
                bVar8 = puVar3->operator_cast_to_bool();
                if (!bVar8) {
                    iVar10 = (Js5ConfigGroup::VAR_PLAYER_GROUP)->GetX();
                    piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                        (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                    if (*piVar13 != 0) {
                        iVar10 = (Js5ConfigGroup::VAR_PLAYER_GROUP)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<VarTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&, Js5ConfigGroup_const*&,
                                         VarDomainType*&>((unique_ptr*)&local_38, ppMVar14, (Language**)&field_32,
                                                          (Js5ResourceProvider*)&field_24, (Js5ConfigGroup**)pCVar4,
                                                          (VarDomainType**)&Js5ConfigGroup::VAR_PLAYER_GROUP);
                        std::unique_ptr<VarTypeList, std::default_delete<VarTypeList>>::operator=(
                            (unique_ptr<VarTypeList, std::default_delete<VarTypeList>>*)puVar3, (unique_ptr*)&local_38);
                        local_38.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::VAR_PLAYER_GROUP)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    }
                }
                puVar3 = &field_208;
                bVar8 = puVar3->operator_cast_to_bool();
                if (!bVar8) {
                    iVar10 = (Js5ConfigGroup::BASTYPE)->GetX();
                    piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                        (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                    if (*piVar13 != 0) {
                        iVar10 = (Js5ConfigGroup::BASTYPE)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<BASTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&>(
                            (unique_ptr*)&local_38, ppMVar14, (Language**)&field_32, (Js5ResourceProvider*)&field_24);
                        std::unique_ptr<BASTypeList, std::default_delete<BASTypeList>>::operator=(
                            (unique_ptr<BASTypeList, std::default_delete<BASTypeList>>*)puVar3, (unique_ptr*)&local_38);
                        local_38.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::BASTYPE)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    }
                }
                puVar3 = &field_256;
                bVar8 = puVar3->operator_cast_to_bool();
                if (!bVar8) {
                    iVar10 = (Js5ConfigGroup::FLUTYPE)->GetX();
                    piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                        (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                    if (*piVar13 != 0) {
                        iVar10 = (Js5ConfigGroup::FLUTYPE)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<FloorUnderlayTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&>(
                            (unique_ptr*)&local_38, ppMVar14, (Language**)&field_32, (Js5ResourceProvider*)&field_24);
                        std::unique_ptr<FloorUnderlayTypeList, std::default_delete<FloorUnderlayTypeList>>::operator=(
                            (unique_ptr<FloorUnderlayTypeList, std::default_delete<FloorUnderlayTypeList>>*)puVar3,
                            (unique_ptr*)&local_38);
                        local_38.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::FLUTYPE)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    }
                }
                puVar3 = &field_248;
                bVar8 = puVar3->operator_cast_to_bool();
                if (!bVar8) {
                    iVar10 = (Js5ConfigGroup::FLOTYPE)->GetX();
                    piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                        (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                    if (*piVar13 != 0) {
                        iVar10 = (Js5ConfigGroup::FLOTYPE)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<FloorOverlayTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&>(
                            (unique_ptr*)&local_38, ppMVar14, (Language**)&field_32, (Js5ResourceProvider*)&field_24);
                        std::unique_ptr<FloorOverlayTypeList, std::default_delete<FloorOverlayTypeList>>::operator=(
                            (unique_ptr<FloorOverlayTypeList, std::default_delete<FloorOverlayTypeList>>*)puVar3,
                            (unique_ptr*)&local_38);
                        local_38.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::FLOTYPE)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    }
                }
                puVar3 = &field_280;
                bVar8 = puVar3->operator_cast_to_bool();
                if (!bVar8) {
                    iVar10 = (Js5ConfigGroup::HITMARKTYPE)->GetX();
                    piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                        (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                    if (*piVar13 != 0) {
                        iVar10 = (Js5ConfigGroup::HITMARKTYPE)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<HitmarkTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&>(
                            (unique_ptr*)&local_38, ppMVar14, (Language**)&field_32, (Js5ResourceProvider*)&field_24);
                        std::unique_ptr<HitmarkTypeList, std::default_delete<HitmarkTypeList>>::operator=(
                            (unique_ptr<HitmarkTypeList, std::default_delete<HitmarkTypeList>>*)puVar3,
                            (unique_ptr*)&local_38);
                        local_38.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::HITMARKTYPE)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    }
                }
                puVar3 = &field_272;
                bVar8 = puVar3->operator_cast_to_bool();
                if (!bVar8) {
                    iVar10 = (Js5ConfigGroup::HEADBARTYPE)->GetX();
                    piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                        (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                    if (*piVar13 != 0) {
                        iVar10 = (Js5ConfigGroup::HEADBARTYPE)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<HeadbarTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&>(
                            (unique_ptr*)&local_38, ppMVar14, (Language**)&field_32, (Js5ResourceProvider*)&field_24);
                        std::unique_ptr<HeadbarTypeList, std::default_delete<HeadbarTypeList>>::operator=(
                            (unique_ptr<HeadbarTypeList, std::default_delete<HeadbarTypeList>>*)puVar3,
                            (unique_ptr*)&local_38);
                        local_38.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::HEADBARTYPE)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    }
                }
                puVar3 = &field_288;
                bVar8 = puVar3->operator_cast_to_bool();
                if (!bVar8) {
                    iVar10 = (Js5ConfigGroup::IDKTYPE)->GetX();
                    piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                        (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                    if (*piVar13 != 0) {
                        iVar10 = (Js5ConfigGroup::IDKTYPE)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<IDKTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&>(
                            (unique_ptr*)&local_38, ppMVar14, (Language**)&field_32, (Js5ResourceProvider*)&field_24);
                        std::unique_ptr<IDKTypeList, std::default_delete<IDKTypeList>>::operator=(
                            (unique_ptr<IDKTypeList, std::default_delete<IDKTypeList>>*)puVar3, (unique_ptr*)&local_38);
                        local_38.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::IDKTYPE)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    }
                }
                puVar3 = &field_312;
                bVar8 = puVar3->operator_cast_to_bool();
                if (!bVar8) {
                    iVar10 = (Js5ConfigGroup::MELTYPE)->GetX();
                    piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                        (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                    if (*piVar13 != 0) {
                        iVar10 = (Js5ConfigGroup::MELTYPE)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<MapElementTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&>(
                            (unique_ptr*)&local_38, ppMVar14, (Language**)&field_32, (Js5ResourceProvider*)&field_24);
                        std::unique_ptr<MapElementTypeList, std::default_delete<MapElementTypeList>>::operator=(
                            (unique_ptr<MapElementTypeList, std::default_delete<MapElementTypeList>>*)puVar3,
                            (unique_ptr*)&local_38);
                        local_38.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::MELTYPE)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    }
                }
                puVar3 = &field_320;
                bVar8 = puVar3->operator_cast_to_bool();
                if (!bVar8) {
                    iVar10 = (Js5ConfigGroup::MSITYPE)->GetX();
                    piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                        (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                    if (*piVar13 != 0) {
                        iVar10 = (Js5ConfigGroup::MSITYPE)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<MSITypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&>(
                            (unique_ptr*)&local_38, ppMVar14, (Language**)&field_32, (Js5ResourceProvider*)&field_24);
                        std::unique_ptr<MSITypeList, std::default_delete<MSITypeList>>::operator=(
                            (unique_ptr<MSITypeList, std::default_delete<MSITypeList>>*)puVar3, (unique_ptr*)&local_38);
                        local_38.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::MSITYPE)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    }
                }
                puVar3 = &field_352;
                bVar8 = puVar3->operator_cast_to_bool();
                if (!bVar8) {
                    iVar10 = (Js5ConfigGroup::QUESTTYPE)->GetX();
                    piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                        (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                    if (*piVar13 != 0) {
                        iVar10 = (Js5ConfigGroup::QUESTTYPE)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<QuestTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&, ConfigProvider&>(
                            (unique_ptr*)&local_38, ppMVar14, (Language**)&field_32, (Js5ResourceProvider*)&field_24,
                            pCVar4);
                        std::unique_ptr<QuestTypeList, std::default_delete<QuestTypeList>>::operator=(
                            (unique_ptr<QuestTypeList, std::default_delete<QuestTypeList>>*)puVar3,
                            (unique_ptr*)&local_38);
                        local_38.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::QUESTTYPE)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    }
                }
                puVar3 = &field_376;
                bVar8 = puVar3->operator_cast_to_bool();
                if (!bVar8) {
                    iVar10 = (Js5ConfigGroup::SEQGROUPTYPE)->GetX();
                    piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                        (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                    if (*piVar13 != 0) {
                        iVar10 = (Js5ConfigGroup::SEQGROUPTYPE)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<SeqGroupTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&>(
                            (unique_ptr*)&local_38, ppMVar14, (Language**)&field_32, (Js5ResourceProvider*)&field_24);
                        std::unique_ptr<SeqGroupTypeList, std::default_delete<SeqGroupTypeList>>::operator=(
                            (unique_ptr<SeqGroupTypeList, std::default_delete<SeqGroupTypeList>>*)puVar3,
                            (unique_ptr*)&local_38);
                        local_38.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::SEQGROUPTYPE)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    }
                }
                puVar3 = &field_424;
                bVar8 = puVar3->operator_cast_to_bool();
                if (!bVar8) {
                    iVar10 = (Js5ConfigGroup::LIGHTTYPE)->GetX();
                    piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                        (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                    if (*piVar13 != 0) {
                        iVar10 = (Js5ConfigGroup::LIGHTTYPE)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<LightTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&>(
                            (unique_ptr*)&local_38, ppMVar14, (Language**)&field_32, (Js5ResourceProvider*)&field_24);
                        std::unique_ptr<LightTypeList, std::default_delete<LightTypeList>>::operator=(
                            (unique_ptr<LightTypeList, std::default_delete<LightTypeList>>*)puVar3,
                            (unique_ptr*)&local_38);
                        local_38.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::LIGHTTYPE)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    }
                }
                puVar3 = &field_392;
                bVar8 = puVar3->operator_cast_to_bool();
                if (!bVar8) {
                    iVar10 = (Js5ConfigGroup::SKYBOXTYPE)->GetX();
                    piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                        (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                    if (*piVar13 != 0) {
                        iVar10 = (Js5ConfigGroup::SKYBOXTYPE)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<SkyBoxTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&>(
                            (unique_ptr*)&local_38, ppMVar14, (Language**)&field_32, (Js5ResourceProvider*)&field_24);
                        std::unique_ptr<SkyBoxTypeList, std::default_delete<SkyBoxTypeList>>::operator=(
                            (unique_ptr<SkyBoxTypeList, std::default_delete<SkyBoxTypeList>>*)puVar3,
                            (unique_ptr*)&local_38);
                        local_38.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::SKYBOXTYPE)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    }
                }
                puVar3 = &field_408;
                bVar8 = puVar3->operator_cast_to_bool();
                if (!bVar8) {
                    iVar10 = (Js5ConfigGroup::WATERTYPE)->GetX();
                    piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                        (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                    if (*piVar13 != 0) {
                        iVar10 = (Js5ConfigGroup::WATERTYPE)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<WaterTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&>(
                            (unique_ptr*)&local_38, ppMVar14, (Language**)&field_32, (Js5ResourceProvider*)&field_24);
                        std::unique_ptr<WaterTypeList, std::default_delete<WaterTypeList>>::operator=(
                            (unique_ptr<WaterTypeList, std::default_delete<WaterTypeList>>*)puVar3,
                            (unique_ptr*)&local_38);
                        local_38.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::WATERTYPE)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    }
                }
                puVar3 = &field_216;
                bVar8 = puVar3->operator_cast_to_bool();
                if (!bVar8) {
                    iVar10 = (Js5ConfigGroup::CURSORTYPE)->GetX();
                    piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                        (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                    if (*piVar13 != 0) {
                        iVar10 = (Js5ConfigGroup::CURSORTYPE)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<CursorTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&>(
                            (unique_ptr*)&local_38, ppMVar14, (Language**)&field_32, (Js5ResourceProvider*)&field_24);
                        std::unique_ptr<CursorTypeList, std::default_delete<CursorTypeList>>::operator=(
                            (unique_ptr<CursorTypeList, std::default_delete<CursorTypeList>>*)puVar3,
                            (unique_ptr*)&local_38);
                        local_38.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::CURSORTYPE)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    }
                }
                puVar3 = &field_416;
                bVar8 = puVar3->operator_cast_to_bool();
                if (!bVar8) {
                    puVar2 = &field_56;
                    iVar10 = (Js5ConfigGroup::WORLDAREATYPE)->GetX();
                    piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                        (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)puVar2, (long)iVar10);
                    if (*piVar13 != 0) {
                        iVar10 = (Js5ConfigGroup::WORLDAREATYPE)->GetX();
                        piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)puVar2, (long)iVar10);
                        if (*piVar13 != 3) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("m_configGroupsToLoad[Js5ConfigGroup::WORLDAREATYPE->GetGroupID()] == "
                                      "ConfigTypeListContainerStrategy::PRELOAD_ALL",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/config/ConfigProvider.cpp",
                                      460, "Only the PRELOAD_ALL strategy is supported for WorldAreaTypeList");
                        }
                        iVar10 = (Js5ConfigGroup::WORLDAREATYPE)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)puVar2, (long)iVar10);
                        std::make_unique<WorldAreaTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&>(
                            (unique_ptr*)&local_38, ppMVar14, (Language**)&field_32, (Js5ResourceProvider*)&field_24);
                        std::unique_ptr<WorldAreaTypeList, std::default_delete<WorldAreaTypeList>>::operator=(
                            (unique_ptr<WorldAreaTypeList, std::default_delete<WorldAreaTypeList>>*)puVar3,
                            (unique_ptr*)&local_38);
                        local_38.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::WORLDAREATYPE)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    }
                }
            }
            puVar3 = &field_264;
            bVar8 = puVar3->operator_cast_to_bool();
            if (!bVar8) {
                iVar10 = (Js5ConfigGroup::ENUMTYPE)->GetX();
                piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                    (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                if (*piVar13 != 0) {
                    puVar21 = (undefined*)(*(code*)pCVar4->field_0[3])(pCVar4, &local_38, Js5Archive::JS5_CONFIG_ENUM);
                    if (puVar21 == DataStatus::READY) {
                        iVar10 = (Js5ConfigGroup::ENUMTYPE)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<EnumTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&>(
                            (unique_ptr*)&local_50, ppMVar14, (Language**)&field_32, (Js5ResourceProvider*)&field_24);
                        std::unique_ptr<EnumTypeList, std::default_delete<EnumTypeList>>::operator=(
                            (unique_ptr<EnumTypeList, std::default_delete<EnumTypeList>>*)puVar3,
                            (unique_ptr*)&local_50);
                        local_50.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::ENUMTYPE)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    } else {
                        local_58._0_4_ = 0;
                    }
                }
            }
            puVar3 = &field_336;
            bVar8 = puVar3->operator_cast_to_bool();
            if (!bVar8) {
                iVar10 = (Js5ConfigGroup::OBJTYPE)->GetX();
                piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                    (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                if (*piVar13 != 0) {
                    puVar21 = (undefined*)(*(code*)pCVar4->field_0[3])(pCVar4, &local_38, Js5Archive::JS5_CONFIG_OBJ);
                    if (puVar21 == DataStatus::READY) {
                        iVar10 = (Js5ConfigGroup::OBJTYPE)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<ObjTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&, ConfigProvider&, bool&>(
                            (unique_ptr*)&local_50, ppMVar14, (Language**)&field_32, (Js5ResourceProvider*)&field_24,
                            pCVar4, (bool*)this);
                        std::unique_ptr<ObjTypeList, std::default_delete<ObjTypeList>>::operator=(
                            (unique_ptr<ObjTypeList, std::default_delete<ObjTypeList>>*)puVar3, (unique_ptr*)&local_50);
                        local_50.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::OBJTYPE)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    } else {
                        local_58._0_4_ = 0;
                    }
                }
            }
            bVar8 = (&field_360)->operator_cast_to_bool();
            if (!bVar8) {
                std::make_unique<QuickChatCatTypeList,
                                 Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>,
                                       eastl::allocator>&>((Array*)&local_38);
                std::unique_ptr<QuickChatCatTypeList, std::default_delete<QuickChatCatTypeList>>::operator=(
                    (unique_ptr<QuickChatCatTypeList, std::default_delete<QuickChatCatTypeList>>*)&field_360,
                    (unique_ptr*)&local_38);
                local_38.~unique_ptr();
            }
            bVar8 = (&field_368)->operator_cast_to_bool();
            if (!bVar8) {
                std::make_unique<QuickChatPhraseTypeList,
                                 Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>,
                                       eastl::allocator>&>((Array*)&local_38);
                std::unique_ptr<QuickChatPhraseTypeList, std::default_delete<QuickChatPhraseTypeList>>::operator=(
                    (unique_ptr<QuickChatPhraseTypeList, std::default_delete<QuickChatPhraseTypeList>>*)&field_368,
                    (unique_ptr*)&local_38);
                local_38.~unique_ptr();
            }
            puVar3 = &field_240;
            bVar8 = puVar3->operator_cast_to_bool();
            if (!bVar8) {
                iVar10 = (Js5ConfigGroup::SPOTTYPE)->GetX();
                piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                    (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                if (*piVar13 != 0) {
                    puVar21 = (undefined*)(*(code*)pCVar4->field_0[3])(pCVar4, &local_38, Js5Archive::JS5_CONFIG_SPOT);
                    if (puVar21 == DataStatus::READY) {
                        iVar10 = (Js5ConfigGroup::SPOTTYPE)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<EffectAnimTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&>(
                            (unique_ptr*)&local_50, ppMVar14, (Language**)&field_32, (Js5ResourceProvider*)&field_24);
                        std::unique_ptr<EffectAnimTypeList, std::default_delete<EffectAnimTypeList>>::operator=(
                            (unique_ptr<EffectAnimTypeList, std::default_delete<EffectAnimTypeList>>*)puVar3,
                            (unique_ptr*)&local_50);
                        local_50.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::SPOTTYPE)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    } else {
                        local_58._0_4_ = 0;
                    }
                }
            }
            puVar3 = &field_304;
            bVar8 = puVar3->operator_cast_to_bool();
            if (!bVar8) {
                iVar10 = (Js5ConfigGroup::LOCTYPE)->GetX();
                piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                    (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                if (*piVar13 != 0) {
                    puVar21 = (undefined*)(*(code*)pCVar4->field_0[3])(pCVar4, &local_38, Js5Archive::JS5_CONFIG_LOC);
                    if (puVar21 == DataStatus::READY) {
                        iVar10 = (Js5ConfigGroup::LOCTYPE)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<LocTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&, bool&>(
                            (unique_ptr*)&local_50, ppMVar14, (Language**)&field_32, (Js5ResourceProvider*)&field_24,
                            (bool*)pCVar4);
                        std::unique_ptr<LocTypeList, std::default_delete<LocTypeList>>::operator=(
                            (unique_ptr<LocTypeList, std::default_delete<LocTypeList>>*)puVar3, (unique_ptr*)&local_50);
                        local_50.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::LOCTYPE)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    } else {
                        local_58._0_4_ = 0;
                    }
                }
            }
            puVar3 = &field_328;
            bVar8 = puVar3->operator_cast_to_bool();
            if (!bVar8) {
                iVar10 = (Js5ConfigGroup::NPCTYPE)->GetX();
                piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                    (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                if (*piVar13 != 0) {
                    puVar21 = (undefined*)(*(code*)pCVar4->field_0[3])(pCVar4, &local_38, Js5Archive::JS5_CONFIG_NPC);
                    if (puVar21 == DataStatus::READY) {
                        iVar10 = (Js5ConfigGroup::NPCTYPE)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<NPCTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&, bool&>(
                            (unique_ptr*)&local_50, ppMVar14, (Language**)&field_32, (Js5ResourceProvider*)&field_24,
                            (bool*)pCVar4);
                        std::unique_ptr<NPCTypeList, std::default_delete<NPCTypeList>>::operator=(
                            (unique_ptr<NPCTypeList, std::default_delete<NPCTypeList>>*)puVar3, (unique_ptr*)&local_50);
                        local_50.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::NPCTYPE)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    } else {
                        local_58._0_4_ = 0;
                    }
                }
            }
            puVar3 = &field_384;
            bVar8 = puVar3->operator_cast_to_bool();
            if (!bVar8) {
                iVar10 = (Js5ConfigGroup::SEQTYPE)->GetX();
                piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                    (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                if (*piVar13 != 0) {
                    bVar8 = (&field_376)->operator_cast_to_bool();
                    if ((bVar8) && (puVar21 = (undefined*)(*(code*)pCVar4->field_0[3])(pCVar4, &local_38,
                                                                                       Js5Archive::JS5_CONFIG_SEQ),
                                    puVar21 == DataStatus::READY)) {
                        iVar10 = (Js5ConfigGroup::SEQTYPE)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        (&field_376)->get();
                        std::make_unique<SeqTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&, SeqGroupTypeList&>(
                            (unique_ptr*)&local_50, ppMVar14, (Language**)&field_32, (Js5ResourceProvider*)&field_24,
                            (SeqGroupTypeList*)pCVar4);
                        std::unique_ptr<SeqTypeList, std::default_delete<SeqTypeList>>::operator=(
                            (unique_ptr<SeqTypeList, std::default_delete<SeqTypeList>>*)puVar3, (unique_ptr*)&local_50);
                        local_50.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::SEQTYPE)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    } else {
                        local_58._0_4_ = 0;
                    }
                }
            }
            puVar3 = &field_400;
            bVar8 = puVar3->operator_cast_to_bool();
            if (!bVar8) {
                iVar10 = (Js5ConfigGroup::STRUCTTYPE)->GetX();
                piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                    (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                if (*piVar13 != 0) {
                    puVar21 =
                        (undefined*)(*(code*)pCVar4->field_0[3])(pCVar4, &local_38, Js5Archive::JS5_CONFIG_STRUCT);
                    if (puVar21 == DataStatus::READY) {
                        iVar10 = (Js5ConfigGroup::STRUCTTYPE)->GetX();
                        ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                            (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                        std::make_unique<StructTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                         Language_const*&, Js5ResourceProvider&>(
                            (unique_ptr*)&local_50, ppMVar14, (Language**)&field_32, (Js5ResourceProvider*)&field_24);
                        std::unique_ptr<StructTypeList, std::default_delete<StructTypeList>>::operator=(
                            (unique_ptr<StructTypeList, std::default_delete<StructTypeList>>*)puVar3,
                            (unique_ptr*)&local_50);
                        local_50.~unique_ptr();
                        uVar18 = puVar3->get();
                        iVar10 = (Js5ConfigGroup::STRUCTTYPE)->GetX();
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                        *puVar20 = uVar18;
                    } else {
                        local_58._0_4_ = 0;
                    }
                }
            }
            puVar3 = &field_432;
            bVar8 = puVar3->operator_cast_to_bool();
            if (bVar8) {
            LAB_1005678d5:
            } else {
                iVar10 = (Js5ConfigGroup::ACHIEVEMENTTYPE)->GetX();
                piVar13 = (int*)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                    (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                if (*piVar13 == 0)
                    goto LAB_1005678d5;
                local_38 = (ConfigProvider*)0;
                puVar21 =
                    (undefined*)(*(code*)pCVar4->field_0[3])(pCVar4, &local_38, Js5Archive::JS5_CONFIG_ACHIEVEMENT);
                if (puVar21 == DataStatus::READY) {
                    iVar10 = (Js5ConfigGroup::ACHIEVEMENTTYPE)->GetX();
                    ppMVar14 = (ModeGame**)Array<ConfigTypeListContainerStrategy, eastl::allocator>::operator[](
                        (Array<ConfigTypeListContainerStrategy, eastl::allocator>*)&field_56, (long)iVar10);
                    std::make_unique<AchievementTypeList, ConfigTypeListContainerStrategy&, ModeGame_const*&,
                                     Language_const*&, Js5ResourceProvider&, ConfigProvider&>(
                        (unique_ptr*)&local_50, ppMVar14, (Language**)&field_32, (Js5ResourceProvider*)&field_24,
                        pCVar4);
                    std::unique_ptr<AchievementTypeList, std::default_delete<AchievementTypeList>>::operator=(
                        (unique_ptr<AchievementTypeList, std::default_delete<AchievementTypeList>>*)puVar3,
                        (unique_ptr*)&local_50);
                    local_50.~unique_ptr();
                    uVar18 = puVar3->get();
                    iVar10 = (Js5ConfigGroup::ACHIEVEMENTTYPE)->GetX();
                    puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                        (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar10);
                    *puVar20 = uVar18;
                    goto LAB_1005678d5;
                }
                local_58._0_1_ = '\0';
            }
            if ((char)local_58 != '\0') {
                field_96 = 2;
            }
            break;
        case 2:
            puVar3 = &field_184;
            puVar2 = &field_160;
            uVar19 = puVar2->end();
            puVar3->set_max_size(uVar19, 0);
            lVar17 = puVar2->end();
            if (lVar17 != 0) {
                uVar24 = 1;
                uVar19 = 0;
                do {
                    puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                        (Array<BaseConfigTypeList*, eastl::allocator>*)puVar2, uVar19);
                    uVar18 = *puVar20;
                    puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                        (Array<BaseConfigTypeList*, eastl::allocator>*)puVar3, uVar19);
                    *puVar20 = uVar18;
                    uVar19 = (ulong)uVar24;
                    uVar15 = puVar2->end();
                    uVar24 = uVar24 + 1;
                } while (uVar19 < uVar15);
            }
            cVar7 = puVar3->empty();
            if ((cVar7 == '\0') && (lVar17 = puVar3->end(), lVar17 != 0)) {
                uVar24 = 1;
                uVar19 = 0;
                do {
                    puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                        (Array<BaseConfigTypeList*, eastl::allocator>*)puVar3, uVar19);
                    if ((BaseConfigTypeList*)*puVar20 != (BaseConfigTypeList*)0) {
                        iVar10 = (*puVar20)->GetProgressTarget();
                        field_84 = field_84 + iVar10;
                    }
                    uVar19 = (ulong)uVar24;
                    uVar15 = puVar3->end();
                    uVar24 = uVar24 + 1;
                } while (uVar19 < uVar15);
            }
            uVar18 = logger::default_logger();
            logger::Logger::Log(uVar18, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.cpp",
                                641, "ConfigProvider: Prepared configuration listings!");
            field_96 = 3;
            break;
        case 3:
            cVar7 = PerformIndexDownload(this, (Js5ResourceProvider*)pCVar4);
            if ((cVar7 != '\0') && (cVar7 = puVar3->empty(), cVar7 != '\0')) {
                uVar18 = logger::default_logger();
                logger::Logger::Log(uVar18, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/config/ConfigProvider.cpp",
                                    648, "ConfigProvider: Finished Checking Indexes...");
                field_96 = 4;
            }
            break;
        case 4:
            puVar3 = &field_184;
            cVar7 = puVar3->empty();
            if (cVar7 == '\0') {
                field_88 = 0;
                lVar17 = puVar3->end();
                if (lVar17 == 0) {
                    bVar8 = false;
                } else {
                    bVar8 = false;
                    uVar19 = 0;
                    uVar15 = 1;
                    do {
                        puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                            (Array<BaseConfigTypeList*, eastl::allocator>*)puVar3, uVar19);
                        this_00 = (BaseConfigTypeList*)*puVar20;
                        if (this_00 != (BaseConfigTypeList*)0) {
                            cVar7 = (*(code*)this_00->field_0[6])(this_00);
                            if (cVar7 == '\0') {
                                puVar21 = (undefined*)(*(code*)this_00->field_0[3])(this_00);
                                bVar8 = true;
                                if (puVar21 == DataStatus::READY) {
                                    uVar22 = this_00->GetLoadTime();
                                    puVar20 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                                        (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, uVar19);
                                    pJVar23 = (Js5ConfigGroup*)(*puVar20)->GetConfigGroup();
                                    local_58 = Js5ConfigGroup::GetTypeName(pJVar23);
                                    if (local_58 == 0) {
                                        /* WARNING: Subroutine does not return */
                                        LogAssert("archive",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/game/runetek5/config/ConfigProvider.cpp",
                                                  675, (char*)0);
                                    }
                                    plVar12 = (long*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                                        (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, uVar19);
                                    *(int*)(*plVar12 + 8) = (int)(uVar22 / 1000000);
                                    uVar18 = logger::default_logger();
                                    bVar8 = true;
                                    logger::Logger::Log((double)((float)(uVar22 / 1000000 & 4294967295) * 0.001),
                                                        uVar18, 0, 8,
                                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                        "OSRS-OS1669-BOXR/libs/game/runetek5/config/ConfigProvider.cpp",
                                                        678, "Pre-loaded config %s in %.3f seconds", local_58);
                                }
                            }
                            iVar10 = (*(code*)this_00->field_0[7])(this_00);
                            field_88 = field_88 + iVar10;
                        }
                        uVar19 = puVar3->end();
                        bVar6 = uVar15 < uVar19;
                        uVar19 = uVar15;
                        uVar15 = (ulong)((int)uVar15 + 1);
                    } while (bVar6);
                }
                if (!bVar8) {
                    puVar3->clear();
                }
            } else {
                plVar12 = (long*)(&field_160)->data();
                plVar16 = (long*)(&field_160)->end();
                for (; plVar12 != plVar16; plVar12 = plVar12 + 1) {
                    plVar5 = (long*)*plVar12;
                    if (plVar5 != (long*)0) {
                        (**(code**)(*plVar5 + 40))(plVar5, 2000);
                    }
                }
            }
        }
    }

    // 0x100568200, 720 bytes, placed by class name
    // ConfigProvider::PerformIndexDownload(Js5ResourceProvider&)
    bool ConfigProvider::PerformIndexDownload(Js5ResourceProvider* param_1) {
        bool bVar1;
        undefined8 uVar3;
        unique_ptr local_40[8];
        CoordMapSquare* local_38;
        int local_30;
        bool local_29;

        uVar3 = logger::default_logger();
        logger::Logger::Log(uVar3, 1, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "config/ConfigProvider.cpp",
                            767, "ConfigProvider: Starting Preload");
        local_29 = true;
        bVar1 = (&field_704)->operator_cast_to_bool();
        if (!bVar1) {
            if ((undefined*)(*(code*)param_1->field_0[5])(param_1, &local_38) != DataStatus::READY) {
                return false;
            }
            local_30 = local_38->GetX();
            local_30 = local_30 + 1;
            std::make_unique<DownloadWaitHandler, unsigned int>((uint*)local_40);
            std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::operator=(
                (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)&field_704, local_40);
            local_40->~unique_ptr();
        }
        bVar1 = !bVar1;
        CheckLoaded(this, &local_29, bVar1, Js5Archive::JS5_CONFIG);
        CheckLoaded(this, &local_29, bVar1, Js5Archive::JS5_CONFIG_ACHIEVEMENT);
        CheckLoaded(this, &local_29, bVar1, Js5Archive::JS5_CONFIG_LOC);
        CheckLoaded(this, &local_29, bVar1, Js5Archive::JS5_CONFIG_ENUM);
        CheckLoaded(this, &local_29, bVar1, Js5Archive::JS5_CONFIG_NPC);
        CheckLoaded(this, &local_29, bVar1, Js5Archive::JS5_CONFIG_OBJ);
        CheckLoaded(this, &local_29, bVar1, Js5Archive::JS5_CONFIG_SEQ);
        CheckLoaded(this, &local_29, bVar1, Js5Archive::JS5_CONFIG_SPOT);
        CheckLoaded(this, &local_29, bVar1, Js5Archive::JS5_CONFIG_STRUCT);
        CheckLoaded(this, &local_29, bVar1, Js5Archive::JS5_DEFAULTS);
        CheckLoaded(this, &local_29, bVar1, Js5Archive::JS5_FONTMETRICS);
        CheckLoaded(this, &local_29, bVar1, Js5Archive::JS5_FONTMETRICSRT7);
        CheckLoaded(this, &local_29, bVar1, Js5Archive::JS5_TRUETYPEFONTS);
        if (field_80 != false) {
            CheckLoaded(this, &local_29, bVar1, Js5Archive::JS5_CLIENTSCRIPTS);
            CheckLoaded(this, &local_29, bVar1, Js5Archive::JS5_INTERFACES);
            CheckLoaded(this, &local_29, bVar1, Js5Archive::JS5_SPRITES);
            CheckLoaded(this, &local_29, bVar1, Js5Archive::JS5_QUICKCHAT);
            CheckLoaded(this, &local_29, bVar1, Js5Archive::JS5_CONFIG_PARTICLE);
            CheckLoaded(this, &local_29, bVar1, Js5Archive::JS5_CONFIG_BILLBOARD);
            CheckLoaded(this, &local_29, bVar1, Js5Archive::JS5_MATERIALS);
            if (Version::ConnectedServerMeetsVersion(928) != '\0') {
                CheckLoaded(this, &local_29, bVar1, Js5Archive::JS5_UI_ANIMATIONS);
            }
        }
        return local_29 != false;
    }

    // 0x10056a0d0, 384 bytes, placed by class name
    // ConfigProvider::GetPreloadProgress() const
    undefined8 ConfigProvider::GetPreloadProgress() {
        undefined1* this_00;
        char cVar1;
        int iVar2;
        uint uVar3;
        long* plVar4;
        uint uVar5;
        int iVar6;
        float fVar7;
        undefined4 extraout_XMM0_Db;
        undefined4 uVar8;
        undefined4 extraout_XMM0_Db_00;

        switch (field_96) {
        case 0:
            goto switchD_10056a0f5_caseD_0;
        case 1:
        case 2:
            this_00 = &field_160;
            cVar1 = this_00->empty();
            if (cVar1 == '\0') {
                iVar2 = this_00->end();
                Js5ConfigGroup::GetMaximumConfigGroupID();
                uVar5 = 0;
                iVar6 = 0;
                do {
                    plVar4 = (long*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                        (Array<BaseConfigTypeList*, eastl::allocator>*)this_00, (ulong)uVar5);
                    iVar6 = (iVar6 + 1) - (uint)(*plVar4 == 0);
                    uVar5 = uVar5 + 1;
                    uVar3 = Js5ConfigGroup::GetMaximumConfigGroupID();
                } while (uVar5 <= uVar3);
                fVar7 = ((float)iVar6 * 10.0) / (float)iVar2 + 1.0;
                uVar8 = extraout_XMM0_Db_00;
                goto LAB_10056a22d;
            }
        switchD_10056a0f5_caseD_0:
            fVar7 = 1.0;
            uVar8 = 0;
            if (field_752 != 0)
                goto LAB_10056a22d;
            goto LAB_10056a208;
        case 3:
            fVar7 = 11.0;
            iVar2 = field_752;
        joined_r0x00010056a149:
            uVar8 = 0;
            break;
        case 4:
            cVar1 = (&field_184)->empty();
            if (cVar1 != '\0') {
                fVar7 = 45.0;
                iVar2 = field_752;
                goto joined_r0x00010056a149;
            }
            fVar7 = ((float)field_88 * 34.0) / (float)field_84 + 11.0;
            iVar2 = field_752;
            uVar8 = extraout_XMM0_Db;
            break;
        default:
            fVar7 = 0.0;
            uVar8 = 0;
            iVar2 = field_752;
        }
        if (iVar2 == 0) {
        LAB_10056a208:
            fVar7 = fVar7 + ((float)field_748 * 30.0) / (float)field_744;
        }
    LAB_10056a22d:
        return CONCAT44(uVar8, fVar7);
    }

    // 0x10056a300, 512 bytes, placed by class name
    // ConfigProvider::Reload()
    void ConfigProvider::Reload() {
        _func_decltype_nullptr* in_RSI;

        field_96 = 0;
        field_744 = 0;
        field_748 = 0;
        field_84 = 0;
        field_88 = 0;
        (&field_184)->clear();
        std::unique_ptr<AchievementTypeList, std::default_delete<AchievementTypeList>>::operator=(
            (unique_ptr<AchievementTypeList, std::default_delete<AchievementTypeList>>*)&field_432, in_RSI);
        std::unique_ptr<BASTypeList, std::default_delete<BASTypeList>>::operator=(
            (unique_ptr<BASTypeList, std::default_delete<BASTypeList>>*)&field_208, in_RSI);
        std::unique_ptr<CursorTypeList, std::default_delete<CursorTypeList>>::operator=(
            (unique_ptr<CursorTypeList, std::default_delete<CursorTypeList>>*)&field_216, in_RSI);
        std::unique_ptr<DBRowTypeList, std::default_delete<DBRowTypeList>>::operator=(
            (unique_ptr<DBRowTypeList, std::default_delete<DBRowTypeList>>*)&field_224, in_RSI);
        std::unique_ptr<DBTableTypeList, std::default_delete<DBTableTypeList>>::operator=(
            (unique_ptr<DBTableTypeList, std::default_delete<DBTableTypeList>>*)&field_232, in_RSI);
        std::unique_ptr<EffectAnimTypeList, std::default_delete<EffectAnimTypeList>>::operator=(
            (unique_ptr<EffectAnimTypeList, std::default_delete<EffectAnimTypeList>>*)&field_240, in_RSI);
        std::unique_ptr<FloorOverlayTypeList, std::default_delete<FloorOverlayTypeList>>::operator=(
            (unique_ptr<FloorOverlayTypeList, std::default_delete<FloorOverlayTypeList>>*)&field_248, in_RSI);
        std::unique_ptr<FloorUnderlayTypeList, std::default_delete<FloorUnderlayTypeList>>::operator=(
            (unique_ptr<FloorUnderlayTypeList, std::default_delete<FloorUnderlayTypeList>>*)&field_256, in_RSI);
        std::unique_ptr<EnumTypeList, std::default_delete<EnumTypeList>>::operator=(
            (unique_ptr<EnumTypeList, std::default_delete<EnumTypeList>>*)&field_264, in_RSI);
        std::unique_ptr<HeadbarTypeList, std::default_delete<HeadbarTypeList>>::operator=(
            (unique_ptr<HeadbarTypeList, std::default_delete<HeadbarTypeList>>*)&field_272, in_RSI);
        std::unique_ptr<HitmarkTypeList, std::default_delete<HitmarkTypeList>>::operator=(
            (unique_ptr<HitmarkTypeList, std::default_delete<HitmarkTypeList>>*)&field_280, in_RSI);
        std::unique_ptr<IDKTypeList, std::default_delete<IDKTypeList>>::operator=(
            (unique_ptr<IDKTypeList, std::default_delete<IDKTypeList>>*)&field_288, in_RSI);
        std::unique_ptr<InvTypeList, std::default_delete<InvTypeList>>::operator=(
            (unique_ptr<InvTypeList, std::default_delete<InvTypeList>>*)&field_296, in_RSI);
        std::unique_ptr<LightTypeList, std::default_delete<LightTypeList>>::operator=(
            (unique_ptr<LightTypeList, std::default_delete<LightTypeList>>*)&field_424, in_RSI);
        std::unique_ptr<LocTypeList, std::default_delete<LocTypeList>>::operator=(
            (unique_ptr<LocTypeList, std::default_delete<LocTypeList>>*)&field_304, in_RSI);
        std::unique_ptr<MapElementTypeList, std::default_delete<MapElementTypeList>>::operator=(
            (unique_ptr<MapElementTypeList, std::default_delete<MapElementTypeList>>*)&field_312, in_RSI);
        std::unique_ptr<MSITypeList, std::default_delete<MSITypeList>>::operator=(
            (unique_ptr<MSITypeList, std::default_delete<MSITypeList>>*)&field_320, in_RSI);
        std::unique_ptr<NPCTypeList, std::default_delete<NPCTypeList>>::operator=(
            (unique_ptr<NPCTypeList, std::default_delete<NPCTypeList>>*)&field_328, in_RSI);
        std::unique_ptr<ObjTypeList, std::default_delete<ObjTypeList>>::operator=(
            (unique_ptr<ObjTypeList, std::default_delete<ObjTypeList>>*)&field_336, in_RSI);
        std::unique_ptr<ParamTypeList, std::default_delete<ParamTypeList>>::operator=(
            (unique_ptr<ParamTypeList, std::default_delete<ParamTypeList>>*)&field_344, in_RSI);
        std::unique_ptr<QuestTypeList, std::default_delete<QuestTypeList>>::operator=(
            (unique_ptr<QuestTypeList, std::default_delete<QuestTypeList>>*)&field_352, in_RSI);
        std::unique_ptr<QuickChatCatTypeList, std::default_delete<QuickChatCatTypeList>>::operator=(
            (unique_ptr<QuickChatCatTypeList, std::default_delete<QuickChatCatTypeList>>*)&field_360, in_RSI);
        std::unique_ptr<QuickChatPhraseTypeList, std::default_delete<QuickChatPhraseTypeList>>::operator=(
            (unique_ptr<QuickChatPhraseTypeList, std::default_delete<QuickChatPhraseTypeList>>*)&field_368, in_RSI);
        std::unique_ptr<SeqGroupTypeList, std::default_delete<SeqGroupTypeList>>::operator=(
            (unique_ptr<SeqGroupTypeList, std::default_delete<SeqGroupTypeList>>*)&field_376, in_RSI);
        std::unique_ptr<SeqTypeList, std::default_delete<SeqTypeList>>::operator=(
            (unique_ptr<SeqTypeList, std::default_delete<SeqTypeList>>*)&field_384, in_RSI);
        std::unique_ptr<SkyBoxTypeList, std::default_delete<SkyBoxTypeList>>::operator=(
            (unique_ptr<SkyBoxTypeList, std::default_delete<SkyBoxTypeList>>*)&field_392, in_RSI);
        std::unique_ptr<StructTypeList, std::default_delete<StructTypeList>>::operator=(
            (unique_ptr<StructTypeList, std::default_delete<StructTypeList>>*)&field_400, in_RSI);
        std::unique_ptr<WaterTypeList, std::default_delete<WaterTypeList>>::operator=(
            (unique_ptr<WaterTypeList, std::default_delete<WaterTypeList>>*)&field_408, in_RSI);
        std::unique_ptr<WorldAreaTypeList, std::default_delete<WorldAreaTypeList>>::operator=(
            (unique_ptr<WorldAreaTypeList, std::default_delete<WorldAreaTypeList>>*)&field_416, in_RSI);
        std::unique_ptr<VarTypeList, std::default_delete<VarTypeList>>::operator=(
            (unique_ptr<VarTypeList, std::default_delete<VarTypeList>>*)&field_440, in_RSI);
        std::unique_ptr<VarTypeList, std::default_delete<VarTypeList>>::operator=(
            (unique_ptr<VarTypeList, std::default_delete<VarTypeList>>*)&field_448, in_RSI);
        std::unique_ptr<VarTypeList, std::default_delete<VarTypeList>>::operator=(
            (unique_ptr<VarTypeList, std::default_delete<VarTypeList>>*)&field_456, in_RSI);
        std::unique_ptr<VarTypeList, std::default_delete<VarTypeList>>::operator=(
            (unique_ptr<VarTypeList, std::default_delete<VarTypeList>>*)&field_464, in_RSI);
        std::unique_ptr<VarTypeList, std::default_delete<VarTypeList>>::operator=(
            (unique_ptr<VarTypeList, std::default_delete<VarTypeList>>*)&field_472, in_RSI);
        std::unique_ptr<VarTypeList, std::default_delete<VarTypeList>>::operator=(
            (unique_ptr<VarTypeList, std::default_delete<VarTypeList>>*)&field_480, in_RSI);
        std::unique_ptr<VarTypeList, std::default_delete<VarTypeList>>::operator=(
            (unique_ptr<VarTypeList, std::default_delete<VarTypeList>>*)&field_488, in_RSI);
        std::unique_ptr<VarBitTypeList, std::default_delete<VarBitTypeList>>::operator=(
            (unique_ptr<VarBitTypeList, std::default_delete<VarBitTypeList>>*)&field_496, in_RSI);
    }

    // 0x10056a6f0, 400 bytes, placed by class name
    // ConfigProvider::DumpUsage()
    void ConfigProvider::DumpUsage() {
        int iVar1;
        BaseConfigTypeList* this_00;
        undefined8* puVar2;
        undefined8* puVar3;
        Js5ConfigGroup* pJVar4;
        long lVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        char* pcVar8;

        puVar2 = (undefined8*)(&field_160)->data();
        puVar3 = (undefined8*)(&field_160)->end();
        do {
            if (puVar2 == puVar3) {
                return;
            }
            this_00 = (BaseConfigTypeList*)*puVar2;
            if ((this_00 != (BaseConfigTypeList*)0) &&
                ((*(int*)(this_00->field_8 + 8) != 0 || (*(int*)(this_00->field_8 + 16) != 0)))) {
                pJVar4 = (Js5ConfigGroup*)this_00->GetConfigGroup();
                lVar5 = Js5ConfigGroup::GetTypeName(pJVar4);
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("archive",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/ConfigProvider.cpp",
                              888, (char*)0);
                }
                if (*(int*)(this_00->field_8 + 12) == 0) {
                    iVar1 = *(int*)(this_00->field_8 + 20);
                    uVar6 = logger::default_logger();
                    if (iVar1 == 0) {
                        uVar7 = 900;
                        pcVar8 = "%s: %d misses, %d LRU hits";
                    } else {
                        uVar7 = 896;
                        pcVar8 = "%s: %d misses, %d LRU hits, %d misses for loading";
                    }
                    logger::Logger::Log(uVar6, 0, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/config/ConfigProvider.cpp",
                                        uVar7, pcVar8, lVar5, *(undefined4*)(this_00->field_8 + 16),
                                        *(undefined4*)(this_00->field_8 + 8));
                } else {
                    uVar6 = logger::default_logger();
                    logger::Logger::Log(uVar6, 0, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/config/ConfigProvider.cpp",
                                        892, "%s: %d misses, %d LRU hits, %d weak hits", lVar5,
                                        *(undefined4*)(this_00->field_8 + 16), *(undefined4*)(this_00->field_8 + 8),
                                        *(undefined4*)(this_00->field_8 + 12));
                }
            }
            puVar2 = puVar2 + 1;
        } while (true);
    }

    // 0x10056a880, 144 bytes, placed by class name
    // ConfigProvider::ResetUsage()
    void ConfigProvider::ResetUsage() {
        long lVar1;
        long* plVar2;
        long* plVar3;
        AABB local_38;

        plVar2 = (long*)(&field_160)->data();
        plVar3 = (long*)(&field_160)->end();
        if (plVar2 != plVar3) {
            do {
                if (*plVar2 != 0) {
                    local_38.field_0 = 0;
                    local_38.field_4 = 0;
                    local_38.field_8 = 0;
                    local_38.field_12 = 0;
                    local_38.field_16 = 0;
                    local_38.field_20 = 0;
                    new (&local_38) oldscape::dash3d::ModelLit::AABB();
                    lVar1 = *plVar2;
                    *(undefined8*)(lVar1 + 24) = local_38._16_8_;
                    *(undefined4*)(lVar1 + 8) = local_38.field_0;
                    *(undefined4*)(lVar1 + 12) = local_38.field_4;
                    *(undefined4*)(lVar1 + 16) = local_38.field_8;
                    *(undefined4*)(lVar1 + 20) = local_38.field_12;
                }
                plVar2 = plVar2 + 1;
            } while (plVar2 != plVar3);
        }
    }

} // namespace jag::game
