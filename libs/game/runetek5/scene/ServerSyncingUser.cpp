// libs/game/runetek5/scene/ServerSyncingUser.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ServerSyncingUser.h"

namespace jag::game {
    // 0x100009e70: ServerSyncingUser::SetDescription(char const*) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100024170: ServerSyncingUser::GetSyncCycle() const has the same machine code as oldscape::option::IScriptOption::GetId() const

    // 0x10046ad30
    ServerSyncingUser::ServerSyncingUser(ServerSyncingPriority serverSyncingPriority)
        : field_0(serverSyncingPriority), field_4(-1), m_syncCycle(0) {
        field_12 = '\0';
        field_13 = '\0';
    }

    // 0x10046ad60
    ServerSyncingUser::~ServerSyncingUser() {
        UnSync();
    }

    // 0x10046ad70
    void ServerSyncingUser::UnSync() {
        if (m_syncCycle != 0) {
            ((ServerSyncing*)Instance())->Remove(*this);
        }
    }

    // 0x10046adb0
    bool ServerSyncingUser::CanBuild() {
        uint8_t uVar1;

        if (field_4 == -1) {
            uVar1 = 1;
        } else {
            uVar1 = ((ServerSyncing*)Instance())->CanBuild(*this);
        }
        return uVar1;
    }

    // 0x10046ae20
    void ServerSyncingUser::SetReady(bool arg1) {
        uint32_t uVar1;
        uint32_t uVar2;
        uint32_t uVar3;
        ServerSyncing* pSVar4;
        Logger* pLVar5;
        GraphicsApp* pGVar6;
        uint64_t uVar7;
        LogStream local_c0;

        if ((field_4 != -1) && (field_13 == '\0')) {
            field_13 = '\x01';
            pSVar4 = (ServerSyncing*)Instance();
            pSVar4->SetReady(*this, arg1);
            pLVar5 = logger::default_logger();
            local_c0 = logger::LogStream(LOGGER_SYNCING);
            pGVar6 = (GraphicsApp*)GraphicsApp::Instance();
            uVar1 = pGVar6->GetLogicTick();
            pSVar4 = (ServerSyncing*)pGVar6->Instance();
            uVar2 = pSVar4->GetCurrentCycle();
            uVar7 = GetDescription();
            pGVar6 = (GraphicsApp*)GraphicsApp::Instance();
            uVar3 = pGVar6->GetFrameCount();
            ((uint8_t)pLVar5)
                ->Log(nullptr, (LogLevel)&local_c0, 8, 14438308, 69,
                      "ServerSyncing[%4u/%4u] %s is now ready on frame %u", uVar1, uVar2, uVar7, uVar3);
        }
    }

    // 0x10046af50
    void ServerSyncingUser::Sync() {
        if (InstancePtr() != 0) {
            field_12 = '\0';
            field_13 = '\0';
            ((ServerSyncing*)Instance())->Add(*this);
        }
    }

    // 0x10046af80
    void ServerSyncingUser::Sync(unsigned int arg1) {
        ServerSyncing* pSVar3;

        if (InstancePtr() != 0) {
            pSVar3 = (ServerSyncing*)Instance();
            if (pSVar3->IsSynced(*this) != '\0') {
                LogAssert("!ServerSyncing::Instance().IsSynced(*this)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "ServerSyncingUser.cpp",
                          91, nullptr);
            }
            field_12 = '\0';
            field_13 = '\0';
            pSVar3 = (ServerSyncing*)pSVar3->Instance();
            pSVar3->Add(*this, arg1);
        }
    }

    // 0x10046aff0
    bool ServerSyncingUser::IsCycleReady(unsigned int arg1) {
        unsigned char uVar1;
        uint32_t uVar2;
        uint32_t uVar3;
        ServerSyncing* pSVar4;
        Logger* pLVar5;
        GraphicsApp* this_00;
        uint64_t uVar6;
        LogStream local_c8;

        if (field_12 == '\0') {
            if (field_4 == -1) {
                uVar1 = '\x01';
            } else {
                pSVar4 = (ServerSyncing*)Instance();
                uVar1 = pSVar4->IsReady(arg1, *this);
            }
            field_12 = uVar1;
            if ((uVar1 != '\0') && (field_4 != -1)) {
                pLVar5 = logger::default_logger();
                local_c8 = logger::LogStream(LOGGER_SYNCING);
                this_00 = (GraphicsApp*)GraphicsApp::Instance();
                uVar2 = this_00->GetLogicTick();
                pSVar4 = (ServerSyncing*)this_00->Instance();
                uVar3 = pSVar4->GetCurrentCycle();
                uVar6 = GetDescription();
                ((uint8_t)pLVar5)
                    ->Log(nullptr, (LogLevel)&local_c8, 8, 14438308, 121,
                          "ServerSyncing[%4u/%4u] %s now running cycle on frame %u", uVar2, uVar3, uVar6, arg1);
            }
        }
        return field_12;
    }

} // namespace jag::game

namespace jag {
    // 0x10046c750
    graphics::EquirectangularRenderer*
    placement_new<graphics::EquirectangularRenderer, graphics::RT7Core*&>(void* arg1, graphics::RT7Core*& arg2) {
        new (arg1) graphics::EquirectangularRenderer(arg2);
        return arg1;
    }

    // 0x10046c770
    ref_counter_shared<graphics::EquirectangularRenderer>*
    placement_new<ref_counter_shared<graphics::EquirectangularRenderer>, int, graphics::EquirectangularRenderer*&>(
        void* arg1, int&& arg2, graphics::EquirectangularRenderer*& arg3) {
        new (arg1) ref_counter_shared<graphics::EquirectangularRenderer>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10046ca80
    game::World*
    placement_new<game::World, game::SceneManager*, graphics::RT7Core*&, Js5ResourceProvider*&, game::ConfigProvider*&,
                  game::PlayerVarDomain*&, game::AssetBuilder*&, shared_ptr<game::WorldAreaType> const&,
                  game::BuildMode, int&, int&, int&, int&, decltype(nullptr)>(
        void* arg1, game::SceneManager*&& arg2, graphics::RT7Core*& arg3, Js5ResourceProvider*& arg4,
        game::ConfigProvider*& arg5, game::PlayerVarDomain*& arg6, game::AssetBuilder*& arg7,
        const shared_ptr<game::WorldAreaType>& worldAreaType, game::BuildMode&& buildMode, int& arg10, int& arg11,
        int& arg12, int& arg13, decltype(nullptr)&& arg14) {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_80;
        new (arg1) game::World((SceneManager*)arg2, (RT7Core*)arg3, (Js5ResourceProvider*)arg4, (ConfigProvider*)arg5,
                               (PlayerVarDomain*)arg6, (AssetBuilder*)arg7, worldAreaType, (BuildMode)buildMode,
                               (int)arg10, (int)arg11, (int)arg12, (int)arg13, local_80);
        return (World*)arg1;
    }

    // 0x10046cb80
    ref_counter_shared<game::World>*
    placement_new<ref_counter_shared<game::World>, int, game::World*&>(void* arg1, int&& arg2, game::World*& arg3) {
        new (arg1) ref_counter_shared<game::World>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10046cba0
    void shared_ptr_do_enable_shared_from_this<game::World>(ref_counter_base* ref_counter_base, game::World* world,
                                                            game::World::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)world);
            local_38 = weak_ptr(local_48);
            world->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x10046cf10
    game::World*
    placement_new<game::World, game::SceneManager*, graphics::RT7Core*&, Js5ResourceProvider*&, game::ConfigProvider*&,
                  game::PlayerVarDomain*&, game::AssetBuilder*&, decltype(nullptr), game::BuildMode&, int, int, int,
                  int, shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>> const&>(
        void* arg1, game::SceneManager*&& arg2, graphics::RT7Core*& arg3, Js5ResourceProvider*& arg4,
        game::ConfigProvider*& arg5, game::PlayerVarDomain*& arg6, game::AssetBuilder*& arg7, decltype(nullptr)&& arg8,
        game::BuildMode& buildMode, int&& arg10, int&& arg11, int&& arg12, int&& arg13,
        const shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>& arg14) {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        new (arg1) game::World((SceneManager*)arg2, (RT7Core*)arg3, (Js5ResourceProvider*)arg4, (ConfigProvider*)arg5,
                               (PlayerVarDomain*)arg6, (AssetBuilder*)arg7, local_58, buildMode, arg10, arg11, arg12,
                               arg13, arg14);
        return arg1;
    }

} // namespace jag

// 0x10046b8e0
void acos(float arg1) {
    _acosf();
}

// 0x10046b8f0
void cos(float arg1) {
    _cosf();
}

// 0x10046b900
void sin(float arg1) {
    _sinf();
}

// 0x10046b9f0
void sqrt(float arg1) {
    unsigned int in_XMM0_Db;
    uint32_t in_XMM0_Dc;
    uint32_t in_XMM0_Dd;
    uint8_t in_XMM1[16];
    uint8_t auVar1[16];

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = arg1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    float fVar2 = arg1 * auVar1._0_4_;
    return (((uint64_t)(~(in_XMM0_Db & 2147483647) & in_XMM0_Db) << 32) |
            (uint32_t)(~-(unsigned int)(ABS(arg1) < 1.1754944e-38) &
                       (unsigned int)((fVar2 * auVar1._0_4_ - 3.0) * fVar2 * -0.5)));
}
