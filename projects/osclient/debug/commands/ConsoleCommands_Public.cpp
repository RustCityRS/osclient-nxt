// projects/osclient/debug/commands/ConsoleCommands_Public.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "projects/osclient/debug/ConsoleCommands.h"

namespace jag::oldscape {
    // 0x10005a840, 1616 bytes, placed by class name and debug map
    // ConsoleCommands::RegisterPublicCommands()
    void ConsoleCommands::RegisterPublicCommands() {
        undefined8 uVar1;
        undefined1 auVar2[16];
        undefined8 local_68;
        code* local_60;
        function local_58[56];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_60 = DoCommand_Cls;
        local_68 = std::ref<OSClientConsole>(field_0);
        uVar1 = std::bind<void (*)(OSClientConsole&), std::reference_wrapper<OSClientConsole>>(
            (_func_void_OSClientConsole_ptr*)&local_60, (reference_wrapper*)&local_68);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            std::__bind<void (*)(OSClientConsole&), std::reference_wrapper<OSClientConsole>>, void>(local_58, uVar1);
        RegisterCommand(this, "cls", "", "Clears the output window", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        local_60 = DoCommand_Help;
        auVar2 = std::ref<OSClientConsole>(field_0);
        local_68 = auVar2._0_8_;
        uVar1 =
            std::bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&),
                      std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>(
                (_func_void_OSClientConsole_ptr_fixed_vector_ptr*)&local_60, (reference_wrapper*)&local_68,
                auVar2._8_8_);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            std::__bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&),
                        std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>,
            void>(local_58, uVar1);
        RegisterCommand(this, "?", "[<lt>command<gt>]",
                        "With no arguments shows the usage guide, otherwise shows help for <lt>command<gt>", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        local_60 = DoCommand_ConsoleBounds;
        auVar2 = std::ref<OSClientConsole>(field_0);
        local_68 = auVar2._0_8_;
        uVar1 =
            std::bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&),
                      std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>(
                (_func_void_OSClientConsole_ptr_fixed_vector_ptr*)&local_60, (reference_wrapper*)&local_68,
                auVar2._8_8_);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            std::__bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&),
                        std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>,
            void>(local_58, uVar1);
        RegisterCommand(this, "consolebounds", "[<lt>x<gt> <lt>y<gt> <lt>w<gt> <lt>h<gt>] | default",
                        "Sets the console\'s bounds to the parameters specified, or to the default bounds", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        local_60 = DoCommand_ToggleRoof;
        local_68 = std::ref<OSClientConsole>(field_0);
        uVar1 = std::bind<void (*)(OSClientConsole&), std::reference_wrapper<OSClientConsole>>(
            (_func_void_OSClientConsole_ptr*)&local_60, (reference_wrapper*)&local_68);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            std::__bind<void (*)(OSClientConsole&), std::reference_wrapper<OSClientConsole>>, void>(local_58, uVar1);
        RegisterCommand(this, "toggleroof", "", "Toggles roof visibility between selective and hidden", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterPublicCommands()::__48, void>(local_58);
        RegisterCommand(this, "renderself", "", "Toggles drawing of the player character", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterPublicCommands()::__49, void>(local_58);
        RegisterCommand(this, "mouseovertext", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterPublicCommands()::__50, void>(local_58);
        RegisterCommand(this, "toggleantidrag", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        local_60 = DoCommand_ChatTimeStamp;
        uVar1 = std::bind<void (*)()>((_func_void*)&local_60);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            std::__bind<void (*)()>, void>(local_58, uVar1);
        RegisterCommand(this, "chattimestamp", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterPublicCommands()::__51, void>(local_58);
        RegisterCommand(this, "displayfps", "", "Toggles display of FPS", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        local_60 = DoCommand_UIQuality;
        auVar2 = std::ref<OSClientConsole>(field_0);
        local_68 = auVar2._0_8_;
        uVar1 =
            std::bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&),
                      std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>(
                (_func_void_OSClientConsole_ptr_fixed_vector_ptr*)&local_60, (reference_wrapper*)&local_68,
                auVar2._8_8_);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            std::__bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&),
                        std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>,
            void>(local_58, uVar1);
        RegisterCommand(this, "uiquality", "",
                        "Change the quality of the UI when the scaling is not 100%. Accepts 0, 1, or 2.", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        local_60 = DoCommand_Prefs;
        auVar2 = std::ref<OSClientConsole>(field_0);
        local_68 = auVar2._0_8_;
        uVar1 =
            std::bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&),
                      std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>(
                (_func_void_OSClientConsole_ptr_fixed_vector_ptr*)&local_60, (reference_wrapper*)&local_68,
                auVar2._8_8_);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            std::__bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&),
                        std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>,
            void>(local_58, uVar1);
        RegisterCommand(this, "prefs",
                        "prefs -list Display all preferences and their values<br>prefs <lt>name<gt> Display preference "
                        "value<br>prefs <lt>name<gt> <lt>value<gt> Set preference to value",
                        "Get, set or list user preferences.", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        local_60 = DoCommand_SetWindowSize;
        auVar2 = std::ref<OSClientConsole>(field_0);
        local_68 = auVar2._0_8_;
        uVar1 =
            std::bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&),
                      std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>(
                (_func_void_OSClientConsole_ptr_fixed_vector_ptr*)&local_60, (reference_wrapper*)&local_68,
                auVar2._8_8_);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            std::__bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&),
                        std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>,
            void>(local_58, uVar1);
        RegisterCommand(this, "setwindowsize", "<lt>width<gt> <lt>height<gt>", "Sets the size of the client window",
                        local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        local_60 = DoCommand_SetWindowTopmost;
        auVar2 = std::ref<OSClientConsole>(field_0);
        local_68 = auVar2._0_8_;
        uVar1 =
            std::bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&),
                      std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>(
                (_func_void_OSClientConsole_ptr_fixed_vector_ptr*)&local_60, (reference_wrapper*)&local_68,
                auVar2._8_8_);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            std::__bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&),
                        std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>,
            void>(local_58, uVar1);
        RegisterCommand(this, "setwindowtopmost", "0 : unset | 1 :set", "Sets/unsets the client window as topmost",
                        local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterPublicCommands()::__52, void>(local_58);
        RegisterCommand(this, "reloadhighlights", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterPublicCommands()::__53, void>(local_58);
        RegisterCommand(this, "redrawminimap", "", "Force the minimap to be redrawn", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterPublicCommands()::__54, void>(local_58, this);
        RegisterCommand(this, "buildinfo", "buildinfo [option]",
                        "buildinfo -> Toggles build info display.<br>buildinfo copy -> copies the build info to "
                        "clipboard.<br>buildinfo print -> prints the build info to the console. <br>buildinfo export "
                        "-> exports the build info to the local cache",
                        local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterPublicCommands()::__55, void>(local_58, this);
        RegisterCommand(this, "forceloginfailure", "[LOGINPROTOCOL::ID]",
                        "force the login failure to fail with the submitted ID code", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterPublicCommands()::__56, void>(local_58);
        RegisterCommand(this, "crash", "", "force the client to crash", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterPublicCommands()::__57, void>(local_58, this);
        RegisterCommand(this, "pricecache", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterPublicCommands()::__58, void>(local_58);
        RegisterCommand(this, "toggleroutehighlight", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterPublicCommands()::__59, void>(local_58, this);
        RegisterCommand(this, "highlightroute", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterPublicCommands()::__60, void>(local_58);
        RegisterCommand(this, "clearroutehighlight", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100068120, 1056 bytes, placed by __FILE__ string
    // DoCommand_Prefs(OSClientConsole&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)
    /* WARNING: Removing unreachable block (ram,4295394375) */
    /* WARNING: Removing unreachable block (ram,4295394007) */
    /* DoCommand_Prefs(OSClientConsole&,
   eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) */

    void DoCommand_Prefs(OSClientConsole* param_1, fixed_vector* param_2) {
        char cVar1;
        int iVar2;
        long lVar3;
        OptionStore* this;
        OptionStore* this_00;
        char* pcVar4;
        IOption* pIVar5;
        ulong uVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        StringView* this_01;
        StringView local_1b0[2];
        StringView local_190[2];
        OSClientConsole* local_170;
        StringView local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        lVar3 = param_1->GetClient();
        this = (OptionStore*)((lVar3 + 8376))->get();
        lVar3 = param_1->GetClient();
        this_00 = (OptionStore*)((lVar3 + 8384))->get();
        if ((this == (OptionStore*)0) || (this_00 == (OptionStore*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("pDeviceOptions && pGameOptions",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/"
                      "commands/ConsoleCommands_Public.cpp",
                      64, (char*)0);
        }
        local_170 = param_1;
        lVar3 = param_2->size();
        if (lVar3 == 0) {
            param_1->PrintCommandHelp("prefs");
            goto LAB_10006849b;
        }
        eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
        operator[](
            (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)param_2,
            0);
        StringView::to_owned_string<eastl::string>(local_168);
        iVar2 = local_168->comparei("-list");
        local_168->~basic_string();
        if (iVar2 == 0) {
            std::function<void(option::IOption&)>::function<
                DoCommand_Prefs(OSClientConsole&,
                                eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)::__86,
                void>(local_168, param_1);
            ForEachOption(local_168);
            std::function<void(option::IOption&)>::~function((function<void(option::IOption&)>*)local_168);
            std::function<void(option::IOption&)>::function<
                DoCommand_Prefs(OSClientConsole&,
                                eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)::__86,
                void>(local_168, param_1);
            this_00->ForEachOption(local_168);
            std::function<void(option::IOption&)>::~function((function<void(option::IOption&)>*)local_168);
            goto LAB_10006849b;
        }
        eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
        operator[](
            (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)param_2,
            0);
        StringView::to_owned_string<eastl::string>(local_1b0);
        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        new (local_190) eastl::allocator("EASTL basic_string");
        new (local_168) eastl::string(pcVar4, local_190);
        pIVar5 = (IOption*)option::OptionStore::GetOptionByName((basic_string*)this);
        local_168->~basic_string();
        if (pIVar5 == (IOption*)0) {
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            new (local_190) eastl::allocator("EASTL basic_string");
            new (local_168) eastl::string(pcVar4, local_190);
            pIVar5 = (IOption*)option::OptionStore::GetOptionByName((basic_string*)this_00);
            local_168->~basic_string();
            if (pIVar5 == (IOption*)0)
                goto LAB_1000683b5;
        LAB_100068274:
            uVar6 = param_2->size();
            if (1 < uVar6) {
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_2,
                    1);
                StringView::to_owned_string<eastl::string>(local_190);
                cVar1 = pIVar5->HasFlags(1);
                if (cVar1 == '\0') {
                    pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    new (local_168) eastl::fixed_string<char, 256, true, eastl::allocator>(pcVar4);
                    (**(code**)(pIVar5->field_0 + 24))(pIVar5, local_168);
                LAB_1000682c2:
                    /* WARNING: Subroutine does not return */
                    local_168->~fixed_string();
                }
                if (cVar1 == '\0')
                    goto LAB_1000682c2;
                uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                console::Console::AddMessage(param_1, 5, "Cannot set preference \'%s\' to \'%s\'", uVar7, uVar8);
                this_01 = local_190;
                goto LAB_10006848a;
            }
            DoCommand_Prefs(OSClientConsole&,
                            eastl::fixed_vector<StringView, 4ul, true,
                                                eastl::allocator> const&)::$_86::operator()((__86*)&local_170, pIVar5);
        } else {
            if (pIVar5 != (IOption*)0)
                goto LAB_100068274;
        LAB_1000683b5:
            eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                           param_2,
                       0);
            StringView::to_owned_string<eastl::string>(local_168);
            uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            console::Console::AddMessage(param_1, 5, "Unknown preference \'%s\'", uVar7);
            this_01 = local_168;
        LAB_10006848a:
            this_01->~basic_string();
        }
        local_1b0->~basic_string();
    LAB_10006849b:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::oldscape
