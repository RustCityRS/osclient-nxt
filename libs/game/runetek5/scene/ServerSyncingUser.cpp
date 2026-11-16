// libs/game/runetek5/scene/ServerSyncingUser.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ServerSyncingUser.h"

namespace jag::game {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ServerSyncingUser::SetDescription(char const*);

    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    ServerSyncingUser::GetSyncCycle() const;

    // 0x10046ad30, 32 bytes, base-object constructor, placed by class name and debug map
    // ServerSyncingUser::ServerSyncingUser(ServerSyncingPriority)
    void ServerSyncingUser::ServerSyncingUser(undefined4 param_2) {
        field_0 = param_2;
        field_4 = 4294967295;
        field_8 = 0;
        field_12 = '\0';
        field_13 = '\0';
    }

    // 0x10046ad50, 16 bytes, complete-object constructor, placed by class name and debug map
    // ServerSyncingUser::ServerSyncingUser(ServerSyncingPriority): jumps straight to the base-object constructor

    // 0x10046ad60, 16 bytes, base-object destructor, placed by class name and debug map
    // ServerSyncingUser::~ServerSyncingUser()
    void ServerSyncingUser::~ServerSyncingUser() {
        UnSync(this);
    }

    // 0x10046ad70, 48 bytes, placed by class name and debug map
    // ServerSyncingUser::UnSync()
    void ServerSyncingUser::UnSync() {
        ServerSyncing* this_00;

        if (field_8 != 0) {
            this_00 = (ServerSyncing*)Instance();
            this_00->Remove(this);
        }
    }

    // 0x10046ada0, 16 bytes, complete-object destructor, placed by class name and debug map
    // ServerSyncingUser::~ServerSyncingUser(): jumps straight to the base-object destructor

    // 0x10046adb0, 48 bytes, placed by class name and debug map
    // ServerSyncingUser::CanBuild()
    undefined1 ServerSyncingUser::CanBuild() {
        ServerSyncing* this_00;
        undefined1 uVar1;

        if (field_4 == 4294967295) {
            uVar1 = 1;
        } else {
            this_00 = (ServerSyncing*)Instance();
            uVar1 = this_00->CanBuild(this);
        }
        return uVar1;
    }

    // 0x10046ae20, 304 bytes, placed by class name and debug map
    // ServerSyncingUser::SetReady(bool)
    void ServerSyncingUser::SetReady(bool param_1) {
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        ServerSyncing* pSVar4;
        undefined8 uVar5;
        GraphicsApp* pGVar6;
        undefined8 uVar7;
        LogStream local_c0;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((field_4 != 4294967295) && (field_13 == '\0')) {
            field_13 = '\x01';
            pSVar4 = (ServerSyncing*)Instance();
            pSVar4->SetReady(this, param_1);
            uVar5 = logger::default_logger();
            pGVar6 = (GraphicsApp*)&local_c0;
            new (pGVar6) logger::LogStream((LogStream*)&LOGGER_SYNCING);
            pGVar6 = (GraphicsApp*)pGVar6->Instance();
            uVar1 = pGVar6->GetLogicTick();
            pSVar4 = (ServerSyncing*)pGVar6->Instance();
            uVar2 = pSVar4->GetCurrentCycle();
            uVar7 = GetDescription(this);
            pGVar6 = (GraphicsApp*)Instance();
            uVar3 = pGVar6->GetFrameCount();
            logger::Logger::Log(uVar5, 0, &local_c0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "scene/ServerSyncingUser.cpp",
                                69, "ServerSyncing[%4u/%4u] %s is now ready on frame %u", uVar1, uVar2, uVar7, uVar3);
            local_c0.~LogStream();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10046af50, 48 bytes, placed by class name and debug map
    // ServerSyncingUser::Sync()
    void ServerSyncingUser::Sync() {
        ServerSyncing* this_00;

        if (Singleton<ServerSyncing>::InstancePtr() != 0) {
            field_12 = '\0';
            field_13 = '\0';
            this_00 = (ServerSyncing*)((ServerSyncingUser*)this)->Instance();
            this_00->Add(this);
        }
    }

    // 0x10046af80, 112 bytes, placed by class name and debug map
    // ServerSyncingUser::Sync(unsigned int)
    void ServerSyncingUser::Sync(uint param_1) {
        ServerSyncing* pSVar3;

        if (Singleton<ServerSyncing>::InstancePtr() != 0) {
            pSVar3 = (ServerSyncing*)((ServerSyncingUser*)this)->Instance();
            if (pSVar3->IsSynced(this) != '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("!ServerSyncing::Instance().IsSynced(*this)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "ServerSyncingUser.cpp",
                          91, (char*)0);
            }
            field_12 = '\0';
            field_13 = '\0';
            pSVar3 = (ServerSyncing*)pSVar3->Instance();
            pSVar3->Add(this, param_1);
        }
    }

    // 0x10046aff0, 320 bytes, placed by class name and debug map
    // ServerSyncingUser::IsCycleReady(unsigned int)
    char ServerSyncingUser::IsCycleReady(uint param_1) {
        char cVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        ServerSyncing* pSVar4;
        undefined8 uVar5;
        GraphicsApp* pGVar6;
        undefined8 uVar7;
        LogStream local_c8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (field_12 == '\0') {
            if (field_4 == 4294967295) {
                cVar1 = '\x01';
            } else {
                pSVar4 = (ServerSyncing*)Instance();
                cVar1 = pSVar4->IsReady(param_1, this);
            }
            field_12 = cVar1;
            if ((cVar1 != '\0') && (field_4 != 4294967295)) {
                uVar5 = logger::default_logger();
                pGVar6 = (GraphicsApp*)&local_c8;
                new (pGVar6) logger::LogStream((LogStream*)&LOGGER_SYNCING);
                pGVar6 = (GraphicsApp*)pGVar6->Instance();
                uVar2 = pGVar6->GetLogicTick();
                pSVar4 = (ServerSyncing*)pGVar6->Instance();
                uVar3 = pSVar4->GetCurrentCycle();
                uVar7 = GetDescription(this);
                logger::Logger::Log(uVar5, 0, &local_c8, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/scene/ServerSyncingUser.cpp",
                                    121, "ServerSyncing[%4u/%4u] %s now running cycle on frame %u", uVar2, uVar3, uVar7,
                                    param_1);
                local_c8.~LogStream();
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return field_12;
    }

} // namespace jag::game

namespace jag {
    // 0x10046c750, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::EquirectangularRenderer* placement_new<graphics::EquirectangularRenderer, graphics::RT7Core*&>(void*, graphics::RT7Core*&)
    EquirectangularRenderer* placement_new<graphics::EquirectangularRenderer, graphics::RT7Core*&>(void* param_1,
                                                                                                   RT7Core** param_2) {
        graphics::EquirectangularRenderer::EquirectangularRenderer(param_1, *param_2);
        return param_1;
    }

    // 0x10046c770, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::EquirectangularRenderer>* placement_new<ref_counter_shared<graphics::EquirectangularRenderer>, int, graphics::EquirectangularRenderer*&>(void*, int&&, graphics::EquirectangularRenderer*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<graphics::EquirectangularRenderer>, int, graphics::EquirectangularRenderer*&>(
        void* param_1, int* param_2, EquirectangularRenderer** param_3) {
        ref_counter_shared<graphics::EquirectangularRenderer>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10046ca80, 256 bytes, inline, placed by debug map only (low confidence)
    // game::World* placement_new<game::World, game::SceneManager*, graphics::RT7Core*&, Js5ResourceProvider*&, game::ConfigProvider*&, game::PlayerVarDomain*&, game::AssetBuilder*&, shared_ptr<game::WorldAreaType> const&, game::BuildMode, int&, int&, int&, int&, decltype(nullptr)>(void*, game::SceneManager*&&, graphics::RT7Core*&, Js5ResourceProvider*&, game::ConfigProvider*&, game::PlayerVarDomain*&, game::AssetBuilder*&, shared_ptr<game::WorldAreaType> const&, game::BuildMode&&, int&, int&, int&, int&, decltype(nullptr)&&)
    World* jag::placement_new<game::World, game::SceneManager*, graphics::RT7Core*&, Js5ResourceProvider*&,
                              game::ConfigProvider*&, game::PlayerVarDomain*&, game::AssetBuilder*&,
                              shared_ptr<game::WorldAreaType> const&, game::BuildMode, int&, int&, int&, int&,
                              decltype(nullptr)>(void* param_1, SceneManager** param_2, RT7Core** param_3,
                                                 Js5ResourceProvider** param_4, ConfigProvider** param_5,
                                                 PlayerVarDomain** param_6, AssetBuilder** param_7, shared_ptr* param_8,
                                                 BuildMode* param_9, int* param_10, int* param_11, int* param_12,
                                                 int* param_13, _func_decltype_nullptr** param_14) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_80[16];
        SceneManager* local_70;
        RT7Core* local_68;
        Js5ResourceProvider* local_60;
        ConfigProvider* local_50;
        PlayerVarDomain* local_48;
        AssetBuilder* local_40;
        undefined4 local_34;

        local_70 = *param_2;
        local_68 = *param_3;
        local_60 = *param_4;
        local_50 = *param_5;
        local_48 = *param_6;
        local_40 = *param_7;
        local_34 = *(undefined4*)param_9;
        iVar1 = *param_10;
        iVar2 = *param_11;
        iVar3 = *param_12;
        iVar4 = *param_13;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_80, (_func_decltype_nullptr*)0);
        new (param_1) game::World(local_70, local_68, local_60, local_50, local_48, local_40, param_8, local_34, iVar1,
                                  iVar2, iVar3, iVar4, local_80);
        local_80->~shared_ptr();
        return (World*)param_1;
    }

    // 0x10046cb80, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::World>* placement_new<ref_counter_shared<game::World>, int, game::World*&>(void*, int&&, game::World*&)
    ref_counter_shared* placement_new<ref_counter_shared<game::World>, int, game::World*&>(void* param_1, int* param_2,
                                                                                           World** param_3) {
        ref_counter_shared<game::World>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10046cba0, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::World>(ref_counter_base*, game::World*, game::World::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::World>(ref_counter_base* param_1, World* param_2,
                                                            enable_shared_type* param_3) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48[16];
        weak_ptr<oldscape::dash3d::Decor> local_38[24];

        if (param_1 != (ref_counter_base*)0) {
            param_1->IncRef();
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
                local_48, (hash_node*)param_1, (hash_node**)param_2);
            weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_38, (weak_ptr*)local_48);
            (&param_2->field_8, (weak_ptr*)local_38)->__internal_set_weak_ptr();
            local_38->~weak_ptr();
            local_48->~shared_ptr();
        }
    }

    // 0x10046cf10, 224 bytes, inline, placed by debug map only (low confidence)
    // game::World* placement_new<game::World, game::SceneManager*, graphics::RT7Core*&, Js5ResourceProvider*&, game::ConfigProvider*&, game::PlayerVarDomain*&, game::AssetBuilder*&, decltype(nullptr), game::BuildMode&, int, int, int, int, shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul, true, eastl::allocator> > const&>(void*, game::SceneManager*&&, graphics::RT7Core*&, Js5ResourceProvider*&, game::ConfigProvider*&, game::PlayerVarDomain*&, game::AssetBuilder*&, decltype(nullptr)&&, game::BuildMode&, int&&, int&&, int&&, int&&, shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul, true, eastl::allocator> > const&)
    World* jag::placement_new<
        game::World, game::SceneManager*, graphics::RT7Core*&, Js5ResourceProvider*&, game::ConfigProvider*&,
        game::PlayerVarDomain*&, game::AssetBuilder*&, decltype(nullptr), game::BuildMode&, int, int, int, int,
        shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul, true,
                                       eastl::allocator>> const&>(
        void* param_1, SceneManager** param_2, RT7Core** param_3, Js5ResourceProvider** param_4,
        ConfigProvider** param_5, PlayerVarDomain** param_6, AssetBuilder** param_7, _func_decltype_nullptr** param_8,
        BuildMode* param_9, int* param_10, int* param_11, int* param_12, int* param_13, shared_ptr* param_14) {
        ConfigProvider* pCVar1;
        PlayerVarDomain* pPVar2;
        AssetBuilder* pAVar3;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        SceneManager* local_48;
        RT7Core* local_40;
        Js5ResourceProvider* local_38;

        local_48 = *param_2;
        local_40 = *param_3;
        local_38 = *param_4;
        pCVar1 = *param_5;
        pPVar2 = *param_6;
        pAVar3 = *param_7;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_58, (_func_decltype_nullptr*)0);
        game::World::World(param_1, local_48, local_40, local_38, pCVar1, pPVar2, pAVar3, local_58,
                           *(undefined4*)param_9, *param_10, *param_11, *param_12, *param_13, param_14);
        local_58->~shared_ptr();
        return param_1;
    }

} // namespace jag

// 0x10046b8e0, 16 bytes, placed by debug map only (low confidence)
// acos(float)
void acos(float param_1) {
    _acosf();
}

// 0x10046b8f0, 16 bytes, placed by debug map only (low confidence)
// cos(float)
void cos(float param_1) {
    _cosf();
}

// 0x10046b900, 16 bytes, placed by debug map only (low confidence)
// sin(float)
void sin(float param_1) {
    _sinf();
}

// 0x10046b9f0, 64 bytes, placed by debug map only (low confidence)
// sqrt(float)
undefined8 sqrt(float param_1) {
    uint in_XMM0_Db;
    undefined4 in_XMM0_Dc;
    undefined4 in_XMM0_Dd;
    undefined1 in_XMM1[16];
    undefined1 auVar1[16];
    float fVar2;

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = param_1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    fVar2 = param_1 * auVar1._0_4_;
    return CONCAT44(~(in_XMM0_Db & 2147483647) & in_XMM0_Db,
                    ~-(uint)(ABS(param_1) < 1.1754944e-38) & (uint)((fVar2 * auVar1._0_4_ + -3.0) * fVar2 * -0.5));
}
