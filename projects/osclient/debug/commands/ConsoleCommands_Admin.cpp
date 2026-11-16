// projects/osclient/debug/commands/ConsoleCommands_Admin.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "projects/osclient/debug/ConsoleCommands.h"

namespace jag::oldscape {
    // 0x10005b020
    void ConsoleCommands::RegisterAdminCommands() {
        uint8_t auVar4[16];
        member_function_ptr arg1;
        member_function_ptr arg1_00;
        member_function_ptr arg1_01;
        member_function_ptr arg1_02;
        member_function_ptr arg1_03;
        uint8_t local_108[24];
        uint8_t local_f0[24];
        uint8_t local_d8[24];
        uint8_t local_c0[24];
        uint8_t local_a8[24];
        uint8_t local_90[24];
        function<void(eastl::fixed_vector<StringView, 4ul> const&)> local_58[48];
        long local_28;

        RegisterCommandHelp("give", "<lt>item<gt> <lt>amount<gt>", "Adds the items(s) to your inventory");
        RegisterCommandHelp("givemany", "<lt>item<gt>", "Adds up to 1000 of the item to your inventory");
        RegisterCommandHelp("givecrap", "", "Fills your inventory with random items");
        RegisterCommandHelp("setstat", "<lt>skill<gt> <lt>level<gt>", "Sets the skill to specified level");
        RegisterCommandHelp("advancestat", "<lt>skill<gt> <lt>level<gt>",
                            "Advances skill to specified level, generates level up message etc.");
        RegisterCommandHelp("getvar", "<lt>variable<gt>", "Displays value of specified variable");
        RegisterCommandHelp("setvar", "<lt>variable<gt> <lt>value<gt>", "Sets variable to specified value");
        RegisterCommandHelp("tele", "x,xx,xx[,xx,xx]",
                            "Teleports you to the coordinate. In order, the parts are level, horizontal map square, "
                            "vertical map square, horizontal tile, vertical tile.");
        RegisterCommandHelp("getcoord", "", "Displays current coordinate");
        RegisterCommandHelp("reboot", "", "Reboots the game world, applying packed changes");
        RegisterCommandHelp("slowreboot", "", "Reboots the game world, with a timer");
        RegisterCommandHelp("setvis", "<lt>value<gt>", "Set character visibility to value. 0 = visible, 2 = hidden");
        RegisterCommandHelp("idkit", "", "Set character base look. Log out and in to trigger.");
        RegisterCommandHelp("logout", "", "Log out of this game world.");
        RegisterCommandHelp("hop", "<lt>world<gt>", "Attempt to hop to the specified game world.");
        RegisterCommandHelp(
            "perfcapture", "op",
            "do a performance capture related operation. Call perfcapture help to get full helper list.");
        RegisterCommandHelp("clienterror", "[message]", "send a client error up to the server.");
        auto local_70 = Client::Instance();
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterAdminCommands()::__4, void>(local_58, (__4*)local_70);
        RegisterCommand("fpson", "", "Turns on display of FPS", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterAdminCommands()::__5, void>(local_58, (__5*)local_70);
        RegisterCommand("fpsoff", "", "Turns off display of FPS", *local_58);
        Client* local_68 = (Client*)DoCommand_FpsLimit;
        auVar4 = std::ref<OSClientConsole>(*field_0);
        uint64_t local_78 = auVar4._0_8_;
        void* pvVar1 = std::bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul> const&),
                                 std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>(
            &local_68, local_78, *auVar4._8_8_);
        local_58->function<std::__bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul> const&),
                                       std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>,
                           void>(pvVar1);
        RegisterCommand("fpslimit", "", "Limits maximum FPS", *local_58);
        local_68 = (Client*)Client::ToggleUI;
        uint64_t local_60 = 0;
        Client** ppCVar2 = &local_68;
        member_function_ptr mVar5 =
            std::bind<void (Client::*)(), Client*&>((void__jag__oldscape__Client________)local_108, *ppCVar2);
        mVar5.ptr = ppCVar2;
        local_58->function<std::__bind<void (Client::*)(), Client*&>, void>(mVar5);
        RegisterCommand("toggleui", "", "", *local_58);
        local_68 = (Client*)Client::ClientDrop;
        local_60 = 0;
        ppCVar2 = &local_68;
        mVar5 = std::bind<void (Client::*)(), Client*&>((void__jag__oldscape__Client________)local_f0, *ppCVar2);
        arg1.adj = mVar5.adj;
        arg1.ptr = ppCVar2;
        local_58->function<std::__bind<void (Client::*)(), Client*&>, void>(arg1);
        RegisterCommand("clientdrop", "", "", *local_58);
        local_68 = (Client*)Client::SetClanTransit;
        local_60 = 0;
        ppCVar2 = &local_68;
        mVar5 = std::bind<void (Client::*)(), Client*&>((void__jag__oldscape__Client________)local_d8, *ppCVar2);
        arg1_00.adj = mVar5.adj;
        arg1_00.ptr = ppCVar2;
        local_58->function<std::__bind<void (Client::*)(), Client*&>, void>(arg1_00);
        RegisterCommand("setclantransmit", "", "", *local_58);
        local_68 = (Client*)Client::ShowCoord;
        local_60 = 0;
        ppCVar2 = &local_68;
        mVar5 = std::bind<void (Client::*)(), Client*&>((void__jag__oldscape__Client________)local_c0, *ppCVar2);
        arg1_01.adj = mVar5.adj;
        arg1_01.ptr = ppCVar2;
        local_58->function<std::__bind<void (Client::*)(), Client*&>, void>(arg1_01);
        RegisterCommand("showcoord", "", "", *local_58);
        local_68 = (Client*)Client::HardError;
        local_60 = 0;
        ppCVar2 = &local_68;
        mVar5 = std::bind<void (Client::*)(), Client*&>((void__jag__oldscape__Client________)local_a8, *ppCVar2);
        arg1_02.adj = mVar5.adj;
        arg1_02.ptr = ppCVar2;
        local_58->function<std::__bind<void (Client::*)(), Client*&>, void>(arg1_02);
        RegisterCommand("harderror", "", "", *local_58);
        local_68 = (Client*)Client::SteamShop;
        local_60 = 0;
        ppCVar2 = &local_68;
        mVar5 = std::bind<void (Client::*)(), Client*&>((void__jag__oldscape__Client________)local_90, *ppCVar2);
        arg1_03.adj = mVar5.adj;
        arg1_03.ptr = ppCVar2;
        local_58->function<std::__bind<void (Client::*)(), Client*&>, void>(arg1_03);
        char* pcVar3 = "steamshop";
        RegisterCommand("steamshop", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterAdminCommands()::__6, void>(local_58, (__6*)pcVar3);
        pcVar3 = "gimcrown";
        RegisterCommand("gimcrown", "", "Test Chat with Group Hardcore Ironman ChatCrown", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterAdminCommands()::__7, void>(local_58, (__7*)pcVar3);
        RegisterCommand("ghimcrown", "", "Test Chat with Group Hardcore Ironman ChatCrown", *local_58);
        local_68 = (Client*)DoCommand_DebugSpam;
        local_78 = std::ref<OSClientConsole>(*field_0);
        pvVar1 = std::bind<void (*)(OSClientConsole&), std::reference_wrapper<OSClientConsole>>(
            (void_______jag__oldscape__OSClientConsole__)&local_68, local_78);
        local_58->function<std::__bind<void (*)(OSClientConsole&), std::reference_wrapper<OSClientConsole>>, void>(
            pvVar1);
        pcVar3 = "debugspam";
        RegisterCommandPrivate("debugspam", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterAdminCommands()::__8, void>(local_58, (__8*)pcVar3);
        pcVar3 = "asserttest";
        RegisterCommandPrivate("asserttest", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterAdminCommands()::__9, void>(local_58, (__9*)pcVar3);
        RegisterCommandPrivate("crashtest", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterAdminCommands()::__10, void>(local_58, (__10*)local_70);
        RegisterCommandPrivate("toggleconsole", *local_58);
        local_68 = (Client*)PerfCaptureInputArgumentHandler;
        auVar4 = std::ref<OSClientConsole>(*field_0);
        local_78 = auVar4._0_8_;
        pvVar1 = std::bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul> const&),
                           std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>(
            &local_68, local_78, *auVar4._8_8_);
        local_58->function<std::__bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul> const&),
                                       std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>,
                           void>(pvVar1);
        RegisterCommandPrivate("perfcapture", *local_58);
        local_68 = (Client*)DoCommand_ClientError;
        auVar4 = std::ref<OSClientConsole>(*field_0);
        local_78 = auVar4._0_8_;
        pvVar1 = std::bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul> const&),
                           std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>(
            &local_68, local_78, *auVar4._8_8_);
        local_58->function<std::__bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul> const&),
                                       std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>,
                           void>(pvVar1);
        RegisterCommandPrivate("clienterror", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterAdminCommands()::__11, void>(local_58, (__11*)this);
        pcVar3 = "vibratepower";
        RegisterCommand("vibratepower", "vibratepower <lt>option<gt>",
                        "Sets vibration strength. Accepts one of \"light\", \"med\", or \"heavy\" as argument.",
                        *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterAdminCommands()::__12, void>(local_58, (__12*)pcVar3);
        RegisterCommand("safearea", "", "Sets a safe area of N pixels on each edge of the screen (to simulate notches)",
                        *local_58);
    }

} // namespace jag::oldscape
