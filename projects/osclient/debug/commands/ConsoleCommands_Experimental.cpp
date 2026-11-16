// projects/osclient/debug/commands/ConsoleCommands_Experimental.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "projects/osclient/debug/ConsoleCommands.h"

namespace jag::oldscape {
    // 0x10005bac0, 2304 bytes, placed by class name and debug map
    // ConsoleCommands::RegisterExperimentalCommands()
    void ConsoleCommands::RegisterExperimentalCommands() {
        undefined8 uVar1;
        undefined1 auVar2[16];
        undefined1 local_138[24];
        undefined1 local_120[24];
        undefined1 local_108[24];
        undefined1 local_f0[24];
        undefined1 local_d8[24];
        undefined1 local_c0[24];
        undefined1 local_a8[24];
        undefined1 local_90[24];
        undefined8 local_78;
        Client* local_70;
        undefined8 local_68;
        undefined8 local_60;
        function local_58[56];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_60 = Client::Instance();
        local_70 = (Client*)Client::SendTestNotification;
        local_68 = 0;
        std::bind<void (Client::*)(), Client*&>((_func_void*)local_138, &local_70);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            std::__bind<void (Client::*)(), Client*&>, void>(local_58);
        RegisterCommand(this, "testnotify", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        local_70 = (Client*)Client::PrintDrawDistance;
        local_68 = 0;
        std::bind<void (Client::*)(), Client*&>((_func_void*)local_120, &local_70);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            std::__bind<void (Client::*)(), Client*&>, void>(local_58);
        RegisterCommand(this, "getdrawdistance", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        local_70 = (Client*)DoCommand_SetDrawDistance;
        auVar2 = std::ref<OSClientConsole>(field_0);
        local_78 = auVar2._0_8_;
        uVar1 =
            std::bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&),
                      std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>(
                (_func_void_OSClientConsole_ptr_fixed_vector_ptr*)&local_70, (reference_wrapper*)&local_78,
                auVar2._8_8_);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            std::__bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&),
                        std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>,
            void>(local_58, uVar1);
        RegisterCommand(this, "setdrawdistance", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        local_70 = (Client*)Client::ToggleSkybox;
        local_68 = 0;
        std::bind<void (Client::*)(), Client*&>((_func_void*)local_108, &local_70);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            std::__bind<void (Client::*)(), Client*&>, void>(local_58);
        RegisterCommand(this, "toggleskybox", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__26, void>(local_58, this, local_60);
        RegisterCommand(this, "setskyboxcolour", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        local_70 = (Client*)Client::DefaultSkybox;
        local_68 = 0;
        std::bind<void (Client::*)(), Client*&>((_func_void*)local_f0, &local_70);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            std::__bind<void (Client::*)(), Client*&>, void>(local_58);
        RegisterCommand(this, "defaultskybox", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        local_70 = (Client*)Client::ToggleFog;
        local_68 = 0;
        std::bind<void (Client::*)(), Client*&>((_func_void*)local_d8, &local_70);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            std::__bind<void (Client::*)(), Client*&>, void>(local_58);
        RegisterCommand(this, "togglefog", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__27, void>(local_58, this, local_60);
        RegisterCommand(this, "setfogintensity", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__28, void>(local_58, this, local_60);
        RegisterCommand(this, "setfogdistance", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        local_70 = (Client*)Client::DefaultFogSettings;
        local_68 = 0;
        std::bind<void (Client::*)(), Client*&>((_func_void*)local_c0, &local_70);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            std::__bind<void (Client::*)(), Client*&>, void>(local_58);
        RegisterCommand(this, "defaultfogsettings", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__29, void>(local_58, this, local_60);
        RegisterCommand(this, "setminimapdotstyle", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__30, void>(local_58, this);
        RegisterCommand(this, "exportobjsprite", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__31, void>(local_58, this);
        RegisterCommand(this, "exportobjspriteall", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__32, void>(local_58, this);
        RegisterCommand(this, "savelootsource", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__33, void>(local_58, this);
        RegisterCommand(this, "updatesource", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__34, void>(local_58, this);
        RegisterCommand(this, "resetsource", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        local_70 = (Client*)Client::GetLootSourceCount;
        local_68 = 0;
        std::bind<void (Client::*)(), Client*&>((_func_void*)local_a8, &local_70);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            std::__bind<void (Client::*)(), Client*&>, void>(local_58);
        RegisterCommand(this, "getnumofsources", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__35, void>(local_58, this);
        RegisterCommand(this, "getsourcecount", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__36, void>(local_58, this);
        RegisterCommand(this, "getsourcebyindex", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__37, void>(local_58, this);
        RegisterCommand(this, "ordersources", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__38, void>(local_58, this);
        RegisterCommand(this, "addlootitem", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__39, void>(local_58, this);
        RegisterCommand(this, "getlootitembyname", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__40, void>(local_58, this);
        RegisterCommand(this, "getlootcountvianame", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__41, void>(local_58, this);
        RegisterCommand(this, "addignoreitem", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__42, void>(local_58, this);
        RegisterCommand(this, "removedignoreitem", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        local_70 = (Client*)Client::ResetLootTracker;
        local_68 = 0;
        std::bind<void (Client::*)(), Client*&>((_func_void*)local_90, &local_70);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            std::__bind<void (Client::*)(), Client*&>, void>(local_58);
        RegisterCommand(this, "clearloottracker", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__43, void>(local_58, this);
        RegisterCommand(this, "clearsource", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__44, void>(local_58, this);
        RegisterCommand(this, "listsources", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__45, void>(local_58, this);
        RegisterCommand(this, "matchopgroup", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__46, void>(local_58, local_60, this);
        RegisterCommand(this, "highlightopgroup_add", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterExperimentalCommands()::__47, void>(local_58, local_60, this);
        RegisterCommand(this, "tint", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10005c3d0, 16 bytes, complete-object constructor, placed by class name and debug map
    // ConsoleCommands::ConsoleCommands(OSClientConsole&): jumps straight to the base-object constructor

} // namespace jag::oldscape
