// projects/osclient/debug/commands/ConsoleCommands_Admin.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "projects/osclient/debug/ConsoleCommands.h"

namespace jag::oldscape {
    // 0x10005b020, 2048 bytes, placed by class name and debug map
    // ConsoleCommands::RegisterAdminCommands()
    void ConsoleCommands::RegisterAdminCommands() {
        undefined8 uVar1;
        undefined1 auVar2[16];
        undefined1 local_108[24];
        undefined1 local_f0[24];
        undefined1 local_d8[24];
        undefined1 local_c0[24];
        undefined1 local_a8[24];
        undefined1 local_90[24];
        undefined8 local_78;
        undefined8 local_70;
        Client* local_68;
        undefined8 local_60;
        function local_58[48];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        RegisterCommandHelp(this, "give", "<lt>item<gt> <lt>amount<gt>", "Adds the items(s) to your inventory");
        RegisterCommandHelp(this, "givemany", "<lt>item<gt>", "Adds up to 1000 of the item to your inventory");
        RegisterCommandHelp(this, "givecrap", "", "Fills your inventory with random items");
        RegisterCommandHelp(this, "setstat", "<lt>skill<gt> <lt>level<gt>", "Sets the skill to specified level");
        RegisterCommandHelp(this, "advancestat", "<lt>skill<gt> <lt>level<gt>",
                            "Advances skill to specified level, generates level up message etc.");
        RegisterCommandHelp(this, "getvar", "<lt>variable<gt>", "Displays value of specified variable");
        RegisterCommandHelp(this, "setvar", "<lt>variable<gt> <lt>value<gt>", "Sets variable to specified value");
        RegisterCommandHelp(this, "tele", "x,xx,xx[,xx,xx]",
                            "Teleports you to the coordinate. In order, the parts are level, horizontal map square, "
                            "vertical map square, horizontal tile, vertical tile.");
        RegisterCommandHelp(this, "getcoord", "", "Displays current coordinate");
        RegisterCommandHelp(this, "reboot", "", "Reboots the game world, applying packed changes");
        RegisterCommandHelp(this, "slowreboot", "", "Reboots the game world, with a timer");
        RegisterCommandHelp(this, "setvis", "<lt>value<gt>",
                            "Set character visibility to value. 0 = visible, 2 = hidden");
        RegisterCommandHelp(this, "idkit", "", "Set character base look. Log out and in to trigger.");
        RegisterCommandHelp(this, "logout", "", "Log out of this game world.");
        RegisterCommandHelp(this, "hop", "<lt>world<gt>", "Attempt to hop to the specified game world.");
        RegisterCommandHelp(
            this, "perfcapture", "op",
            "do a performance capture related operation. Call perfcapture help to get full helper list.");
        RegisterCommandHelp(this, "clienterror", "[message]", "send a client error up to the server.");
        local_70 = Client::Instance();
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterAdminCommands()::__4, void>(local_58, local_70);
        RegisterCommand(this, "fpson", "", "Turns on display of FPS", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterAdminCommands()::__5, void>(local_58, local_70);
        RegisterCommand(this, "fpsoff", "", "Turns off display of FPS", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        local_68 = (Client*)DoCommand_FpsLimit;
        auVar2 = std::ref<OSClientConsole>(field_0);
        local_78 = auVar2._0_8_;
        uVar1 =
            std::bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&),
                      std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>(
                (_func_void_OSClientConsole_ptr_fixed_vector_ptr*)&local_68, (reference_wrapper*)&local_78,
                auVar2._8_8_);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            std::__bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&),
                        std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>,
            void>(local_58, uVar1);
        RegisterCommand(this, "fpslimit", "", "Limits maximum FPS", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        local_68 = (Client*)Client::ToggleUI;
        local_60 = 0;
        std::bind<void (Client::*)(), Client*&>((_func_void*)local_108, &local_68);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            std::__bind<void (Client::*)(), Client*&>, void>(local_58);
        RegisterCommand(this, "toggleui", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        local_68 = (Client*)Client::ClientDrop;
        local_60 = 0;
        std::bind<void (Client::*)(), Client*&>((_func_void*)local_f0, &local_68);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            std::__bind<void (Client::*)(), Client*&>, void>(local_58);
        RegisterCommand(this, "clientdrop", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        local_68 = (Client*)Client::SetClanTransit;
        local_60 = 0;
        std::bind<void (Client::*)(), Client*&>((_func_void*)local_d8, &local_68);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            std::__bind<void (Client::*)(), Client*&>, void>(local_58);
        RegisterCommand(this, "setclantransmit", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        local_68 = (Client*)Client::ShowCoord;
        local_60 = 0;
        std::bind<void (Client::*)(), Client*&>((_func_void*)local_c0, &local_68);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            std::__bind<void (Client::*)(), Client*&>, void>(local_58);
        RegisterCommand(this, "showcoord", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        local_68 = (Client*)Client::HardError;
        local_60 = 0;
        std::bind<void (Client::*)(), Client*&>((_func_void*)local_a8, &local_68);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            std::__bind<void (Client::*)(), Client*&>, void>(local_58);
        RegisterCommand(this, "harderror", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        local_68 = (Client*)Client::SteamShop;
        local_60 = 0;
        std::bind<void (Client::*)(), Client*&>((_func_void*)local_90, &local_68);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            std::__bind<void (Client::*)(), Client*&>, void>(local_58);
        RegisterCommand(this, "steamshop", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterAdminCommands()::__6, void>(local_58);
        RegisterCommand(this, "gimcrown", "", "Test Chat with Group Hardcore Ironman ChatCrown", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterAdminCommands()::__7, void>(local_58);
        RegisterCommand(this, "ghimcrown", "", "Test Chat with Group Hardcore Ironman ChatCrown", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        local_68 = (Client*)DoCommand_DebugSpam;
        local_78 = std::ref<OSClientConsole>(field_0);
        uVar1 = std::bind<void (*)(OSClientConsole&), std::reference_wrapper<OSClientConsole>>(
            (_func_void_OSClientConsole_ptr*)&local_68, (reference_wrapper*)&local_78);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            std::__bind<void (*)(OSClientConsole&), std::reference_wrapper<OSClientConsole>>, void>(local_58, uVar1);
        RegisterCommandPrivate(this, "debugspam", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterAdminCommands()::__8, void>(local_58);
        RegisterCommandPrivate(this, "asserttest", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterAdminCommands()::__9, void>(local_58);
        RegisterCommandPrivate(this, "crashtest", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterAdminCommands()::__10, void>(local_58, local_70);
        RegisterCommandPrivate(this, "toggleconsole", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        local_68 = (Client*)PerfCaptureInputArgumentHandler;
        auVar2 = std::ref<OSClientConsole>(field_0);
        local_78 = auVar2._0_8_;
        uVar1 =
            std::bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&),
                      std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>(
                (_func_void_OSClientConsole_ptr_fixed_vector_ptr*)&local_68, (reference_wrapper*)&local_78,
                auVar2._8_8_);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            std::__bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&),
                        std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>,
            void>(local_58, uVar1);
        RegisterCommandPrivate(this, "perfcapture", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        local_68 = (Client*)DoCommand_ClientError;
        auVar2 = std::ref<OSClientConsole>(field_0);
        local_78 = auVar2._0_8_;
        uVar1 =
            std::bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&),
                      std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>(
                (_func_void_OSClientConsole_ptr_fixed_vector_ptr*)&local_68, (reference_wrapper*)&local_78,
                auVar2._8_8_);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            std::__bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&),
                        std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>,
            void>(local_58, uVar1);
        RegisterCommandPrivate(this, "clienterror", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterAdminCommands()::__11, void>(local_58, this);
        RegisterCommand(this, "vibratepower", "vibratepower <lt>option<gt>",
                        "Sets vibration strength. Accepts one of \"light\", \"med\", or \"heavy\" as argument.",
                        local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterAdminCommands()::__12, void>(local_58);
        RegisterCommand(this, "safearea", "",
                        "Sets a safe area of N pixels on each edge of the screen (to simulate notches)", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::oldscape
