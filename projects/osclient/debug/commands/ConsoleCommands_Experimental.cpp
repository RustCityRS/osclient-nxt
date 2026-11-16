// projects/osclient/debug/commands/ConsoleCommands_Experimental.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "projects/osclient/debug/ConsoleCommands.h"

namespace jag::oldscape {
    // 0x10005bac0
    void ConsoleCommands::RegisterExperimentalCommands() {
        uint8_t auVar3[16];
        member_function_ptr arg1_00;
        member_function_ptr arg1_01;
        member_function_ptr arg1_02;
        member_function_ptr arg1_03;
        member_function_ptr arg1_04;
        member_function_ptr arg1_05;
        member_function_ptr arg1_06;
        uint8_t local_138[24];
        uint8_t local_120[24];
        uint8_t local_108[24];
        uint8_t local_f0[24];
        uint8_t local_d8[24];
        uint8_t local_c0[24];
        uint8_t local_a8[24];
        uint8_t local_90[24];
        function<void(eastl::fixed_vector<StringView, 4ul> const&)> local_58[56];
        long local_20;

        auto local_60 = Client::Instance();
        Client* local_70 = (Client*)Client::SendTestNotification;
        uint64_t local_68 = 0;
        Client** ppCVar1 = &local_70;
        member_function_ptr mVar2 =
            std::bind<void (Client::*)(), Client*&>((void__jag__oldscape__Client________)local_138, *ppCVar1);
        mVar2.ptr = ppCVar1;
        local_58->function<std::__bind<void (Client::*)(), Client*&>, void>(mVar2);
        RegisterCommand("testnotify", "", "", *local_58);
        local_70 = (Client*)Client::PrintDrawDistance;
        local_68 = 0;
        ppCVar1 = &local_70;
        mVar2 = std::bind<void (Client::*)(), Client*&>((void__jag__oldscape__Client________)local_120, *ppCVar1);
        arg1_00.adj = mVar2.adj;
        arg1_00.ptr = ppCVar1;
        local_58->function<std::__bind<void (Client::*)(), Client*&>, void>(arg1_00);
        RegisterCommand("getdrawdistance", "", "", *local_58);
        local_70 = (Client*)DoCommand_SetDrawDistance;
        auVar3 = std::ref<OSClientConsole>(*field_0);
        uint64_t local_78 = auVar3._0_8_;
        void* arg1 = std::bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul> const&),
                               std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>(
            &local_70, local_78, *auVar3._8_8_);
        local_58->function<std::__bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul> const&),
                                       std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>,
                           void>(arg1);
        RegisterCommand("setdrawdistance", "", "", *local_58);
        local_70 = (Client*)Client::ToggleSkybox;
        local_68 = 0;
        ppCVar1 = &local_70;
        mVar2 = std::bind<void (Client::*)(), Client*&>((void__jag__oldscape__Client________)local_108, *ppCVar1);
        arg1_01.adj = mVar2.adj;
        arg1_01.ptr = ppCVar1;
        local_58->function<std::__bind<void (Client::*)(), Client*&>, void>(arg1_01);
        RegisterCommand("toggleskybox", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__26, void>(local_58, (__26*)this);
        RegisterCommand("setskyboxcolour", "", "", *local_58);
        local_70 = (Client*)Client::DefaultSkybox;
        local_68 = 0;
        ppCVar1 = &local_70;
        mVar2 = std::bind<void (Client::*)(), Client*&>((void__jag__oldscape__Client________)local_f0, *ppCVar1);
        arg1_02.adj = mVar2.adj;
        arg1_02.ptr = ppCVar1;
        local_58->function<std::__bind<void (Client::*)(), Client*&>, void>(arg1_02);
        RegisterCommand("defaultskybox", "", "", *local_58);
        local_70 = (Client*)Client::ToggleFog;
        local_68 = 0;
        ppCVar1 = &local_70;
        mVar2 = std::bind<void (Client::*)(), Client*&>((void__jag__oldscape__Client________)local_d8, *ppCVar1);
        arg1_03.adj = mVar2.adj;
        arg1_03.ptr = ppCVar1;
        local_58->function<std::__bind<void (Client::*)(), Client*&>, void>(arg1_03);
        RegisterCommand("togglefog", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__27, void>(local_58, (__27*)this);
        RegisterCommand("setfogintensity", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__28, void>(local_58, (__28*)this);
        RegisterCommand("setfogdistance", "", "", *local_58);
        local_70 = (Client*)Client::DefaultFogSettings;
        local_68 = 0;
        ppCVar1 = &local_70;
        mVar2 = std::bind<void (Client::*)(), Client*&>((void__jag__oldscape__Client________)local_c0, *ppCVar1);
        arg1_04.adj = mVar2.adj;
        arg1_04.ptr = ppCVar1;
        local_58->function<std::__bind<void (Client::*)(), Client*&>, void>(arg1_04);
        RegisterCommand("defaultfogsettings", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__29, void>(local_58, (__29*)this);
        RegisterCommand("setminimapdotstyle", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__30, void>(local_58, (__30*)this);
        RegisterCommand("exportobjsprite", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__31, void>(local_58, (__31*)this);
        RegisterCommand("exportobjspriteall", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__32, void>(local_58, (__32*)this);
        RegisterCommand("savelootsource", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__33, void>(local_58, (__33*)this);
        RegisterCommand("updatesource", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__34, void>(local_58, (__34*)this);
        RegisterCommand("resetsource", "", "", *local_58);
        local_70 = (Client*)Client::GetLootSourceCount;
        local_68 = 0;
        ppCVar1 = &local_70;
        mVar2 = std::bind<void (Client::*)(), Client*&>((void__jag__oldscape__Client________)local_a8, *ppCVar1);
        arg1_05.adj = mVar2.adj;
        arg1_05.ptr = ppCVar1;
        local_58->function<std::__bind<void (Client::*)(), Client*&>, void>(arg1_05);
        RegisterCommand("getnumofsources", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__35, void>(local_58, (__35*)this);
        RegisterCommand("getsourcecount", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__36, void>(local_58, (__36*)this);
        RegisterCommand("getsourcebyindex", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__37, void>(local_58, (__37*)this);
        RegisterCommand("ordersources", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__38, void>(local_58, (__38*)this);
        RegisterCommand("addlootitem", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__39, void>(local_58, (__39*)this);
        RegisterCommand("getlootitembyname", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__40, void>(local_58, (__40*)this);
        RegisterCommand("getlootcountvianame", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__41, void>(local_58, (__41*)this);
        RegisterCommand("addignoreitem", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__42, void>(local_58, (__42*)this);
        RegisterCommand("removedignoreitem", "", "", *local_58);
        local_70 = (Client*)Client::ResetLootTracker;
        local_68 = 0;
        ppCVar1 = &local_70;
        mVar2 = std::bind<void (Client::*)(), Client*&>((void__jag__oldscape__Client________)local_90, *ppCVar1);
        arg1_06.adj = mVar2.adj;
        arg1_06.ptr = ppCVar1;
        local_58->function<std::__bind<void (Client::*)(), Client*&>, void>(arg1_06);
        RegisterCommand("clearloottracker", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__43, void>(local_58, (__43*)this);
        RegisterCommand("clearsource", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__44, void>(local_58, (__44*)this);
        RegisterCommand("listsources", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__45, void>(local_58, (__45*)this);
        RegisterCommand("matchopgroup", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__46, void>(local_58, (__46*)local_60);
        RegisterCommand("highlightopgroup_add", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__47, void>(local_58, (__47*)local_60);
        RegisterCommand("tint", "", "", *local_58);
    }

} // namespace jag::oldscape
