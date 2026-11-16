// projects/osclient/debug/commands/ConsoleCommands_Public.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "projects/osclient/debug/ConsoleCommands.h"

namespace jag::oldscape {
    // 0x10005a840
    void ConsoleCommands::RegisterPublicCommands() {
        uint8_t auVar3[16];
        function<void(eastl::fixed_vector<StringView, 4ul> const&)> local_58[56];
        long local_20;

        void* local_60 = DoCommand_Cls;
        uint64_t local_68 = std::ref<OSClientConsole>(*field_0);
        void* pvVar1 = std::bind<void (*)(OSClientConsole&), std::reference_wrapper<OSClientConsole>>(
            (void_______jag__oldscape__OSClientConsole__)&local_60, local_68);
        local_58->function<std::__bind<void (*)(OSClientConsole&), std::reference_wrapper<OSClientConsole>>, void>(
            pvVar1);
        RegisterCommand("cls", "", "Clears the output window", *local_58);
        local_60 = DoCommand_Help;
        auVar3 = std::ref<OSClientConsole>(*field_0);
        local_68 = auVar3._0_8_;
        pvVar1 = std::bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul> const&),
                           std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>(
            &local_60, local_68, *auVar3._8_8_);
        local_58->function<std::__bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul> const&),
                                       std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>,
                           void>(pvVar1);
        RegisterCommand("?", "[<lt>command<gt>]",
                        "With no arguments shows the usage guide, otherwise shows help for <lt>command<gt>", *local_58);
        local_60 = DoCommand_ConsoleBounds;
        auVar3 = std::ref<OSClientConsole>(*field_0);
        local_68 = auVar3._0_8_;
        pvVar1 = std::bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul> const&),
                           std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>(
            &local_60, local_68, *auVar3._8_8_);
        local_58->function<std::__bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul> const&),
                                       std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>,
                           void>(pvVar1);
        RegisterCommand("consolebounds", "[<lt>x<gt> <lt>y<gt> <lt>w<gt> <lt>h<gt>] | default",
                        "Sets the console\'s bounds to the parameters specified, or to the default bounds", *local_58);
        local_60 = DoCommand_ToggleRoof;
        local_68 = std::ref<OSClientConsole>(*field_0);
        pvVar1 = std::bind<void (*)(OSClientConsole&), std::reference_wrapper<OSClientConsole>>(
            (void_______jag__oldscape__OSClientConsole__)&local_60, local_68);
        local_58->function<std::__bind<void (*)(OSClientConsole&), std::reference_wrapper<OSClientConsole>>, void>(
            pvVar1);
        char* pcVar2 = "toggleroof";
        RegisterCommand("toggleroof", "", "Toggles roof visibility between selective and hidden", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterPublicCommands()::__48, void>(local_58, (__48*)pcVar2);
        pcVar2 = "renderself";
        RegisterCommand("renderself", "", "Toggles drawing of the player character", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterPublicCommands()::__49, void>(local_58, (__49*)pcVar2);
        pcVar2 = "mouseovertext";
        RegisterCommand("mouseovertext", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterPublicCommands()::__50, void>(local_58, (__50*)pcVar2);
        RegisterCommand("toggleantidrag", "", "", *local_58);
        local_60 = DoCommand_ChatTimeStamp;
        pvVar1 = std::bind<void (*)()>((void________)&local_60);
        local_58->function<std::__bind<void (*)()>, void>(pvVar1);
        pcVar2 = "chattimestamp";
        RegisterCommand("chattimestamp", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterPublicCommands()::__51, void>(local_58, (__51*)pcVar2);
        RegisterCommand("displayfps", "", "Toggles display of FPS", *local_58);
        local_60 = DoCommand_UIQuality;
        auVar3 = std::ref<OSClientConsole>(*field_0);
        local_68 = auVar3._0_8_;
        pvVar1 = std::bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul> const&),
                           std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>(
            &local_60, local_68, *auVar3._8_8_);
        local_58->function<std::__bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul> const&),
                                       std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>,
                           void>(pvVar1);
        RegisterCommand("uiquality", "",
                        "Change the quality of the UI when the scaling is not 100%. Accepts 0, 1, or 2.", *local_58);
        local_60 = DoCommand_Prefs;
        auVar3 = std::ref<OSClientConsole>(*field_0);
        local_68 = auVar3._0_8_;
        pvVar1 = std::bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul> const&),
                           std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>(
            &local_60, local_68, *auVar3._8_8_);
        local_58->function<std::__bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul> const&),
                                       std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>,
                           void>(pvVar1);
        RegisterCommand("prefs",
                        "prefs -list Display all preferences and their values<br>prefs <lt>name<gt> Display preference "
                        "value<br>prefs <lt>name<gt> <lt>value<gt> Set preference to value",
                        "Get, set or list user preferences.", *local_58);
        local_60 = DoCommand_SetWindowSize;
        auVar3 = std::ref<OSClientConsole>(*field_0);
        local_68 = auVar3._0_8_;
        pvVar1 = std::bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul> const&),
                           std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>(
            &local_60, local_68, *auVar3._8_8_);
        local_58->function<std::__bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul> const&),
                                       std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>,
                           void>(pvVar1);
        RegisterCommand("setwindowsize", "<lt>width<gt> <lt>height<gt>", "Sets the size of the client window",
                        *local_58);
        local_60 = DoCommand_SetWindowTopmost;
        auVar3 = std::ref<OSClientConsole>(*field_0);
        local_68 = auVar3._0_8_;
        pvVar1 = std::bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul> const&),
                           std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>(
            &local_60, local_68, *auVar3._8_8_);
        local_58->function<std::__bind<void (*)(OSClientConsole&, eastl::fixed_vector<StringView, 4ul> const&),
                                       std::reference_wrapper<OSClientConsole>, std::placeholders::__ph<1> const&>,
                           void>(pvVar1);
        pcVar2 = "setwindowtopmost";
        RegisterCommand("setwindowtopmost", "0 : unset | 1 :set", "Sets/unsets the client window as topmost",
                        *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterPublicCommands()::__52, void>(local_58, (__52*)pcVar2);
        pcVar2 = "reloadhighlights";
        RegisterCommand("reloadhighlights", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterPublicCommands()::__53, void>(local_58, (__53*)pcVar2);
        RegisterCommand("redrawminimap", "", "Force the minimap to be redrawn", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterPublicCommands()::__54, void>(local_58, (__54*)this);
        RegisterCommand("buildinfo", "buildinfo [option]",
                        "buildinfo -> Toggles build info display.<br>buildinfo copy -> copies the build info to "
                        "clipboard.<br>buildinfo print -> prints the build info to the console. <br>buildinfo export "
                        "-> exports the build info to the local cache",
                        *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterPublicCommands()::__55, void>(local_58, (__55*)this);
        pcVar2 = "forceloginfailure";
        RegisterCommand("forceloginfailure", "[LOGINPROTOCOL::ID]",
                        "force the login failure to fail with the submitted ID code", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterPublicCommands()::__56, void>(local_58, (__56*)pcVar2);
        RegisterCommand("crash", "", "force the client to crash", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterPublicCommands()::__57, void>(local_58, (__57*)this);
        pcVar2 = "pricecache";
        RegisterCommand("pricecache", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterPublicCommands()::__58, void>(local_58, (__58*)pcVar2);
        RegisterCommand("toggleroutehighlight", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterPublicCommands()::__59, void>(local_58, (__59*)this);
        pcVar2 = "highlightroute";
        RegisterCommand("highlightroute", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterPublicCommands()::__60, void>(local_58, (__60*)pcVar2);
        RegisterCommand("clearroutehighlight", "", "", *local_58);
    }

    // 0x100068120
    void DoCommand_Prefs(OSClientConsole& osClientConsole, const eastl::fixed_vector<StringView, 4ul>& stringViews) {
        bool cVar1;
        unsigned long uVar6;
        uint64_t uVar7;
        uint64_t uVar8;
        ReturnValue* this_01;
        ReturnValue local_190;

        long lVar3 = osClientConsole.GetClient();
        OptionStore* optionStore = (OptionStore*)((lVar3 + 8376))->get();
        lVar3 = osClientConsole.GetClient();
        OptionStore* this_00 = (OptionStore*)((lVar3 + 8384))->get();
        if ((optionStore == nullptr) || (this_00 == nullptr)) {
            LogAssert("pDeviceOptions && pGameOptions",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/"
                      "commands/ConsoleCommands_Public.cpp",
                      64, nullptr);
        }
        OSClientConsole* local_170 = osClientConsole;
        lVar3 = stringViews.size();
        if (lVar3 == 0) {
            osClientConsole.PrintCommandHelp("prefs");
            goto LAB_10006849b;
        }
        StringView* pSVar4 = &stringViews[0];
        auto local_168 = pSVar4->to_owned_string<eastl::string>();
        int iVar2 = local_168.comparei("-list");
        if (iVar2 == 0) {
            std::function<void(option::IOption&)>::function<
                DoCommand_Prefs(OSClientConsole&, eastl::fixed_vector<StringView, 4ul> const&)::__86, void>(
                (function<void(option::IOption&)>*)&local_168, (__86*)osClientConsole);
            optionStore->ForEachOption(local_168);
            std::function<void(option::IOption&)>::function<
                DoCommand_Prefs(OSClientConsole&, eastl::fixed_vector<StringView, 4ul> const&)::__86, void>(
                (function<void(option::IOption&)>*)&local_168, (__86*)osClientConsole);
            this_00->ForEachOption(local_168);
            goto LAB_10006849b;
        }
        pSVar4 = &stringViews[0];
        auto local_1b0 = pSVar4->to_owned_string<eastl::string>();
        char* pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_168 = eastl::string(pcVar5);
        auto iOption = option::OptionStore::GetOptionByName(*optionStore);
        if (iOption == nullptr) {
            pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_168 = eastl::string(pcVar5);
            iOption = option::OptionStore::GetOptionByName(*this_00);
            if (iOption != nullptr)
                goto LAB_100068274;
        LAB_1000683b5:
            pSVar4 = &stringViews[0];
            local_168 = pSVar4->to_owned_string<eastl::string>();
            uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            osClientConsole.AddMessage(5, "Unknown preference \'%s\'", uVar7);
            this_01 = &local_168;
        LAB_10006848a:
            this_01->~basic_string();
        } else {
            if (iOption == nullptr)
                goto LAB_1000683b5;
        LAB_100068274:
            uVar6 = stringViews.size();
            if (1 < uVar6) {
                pSVar4 = &stringViews[1];
                local_190 = pSVar4->to_owned_string<eastl::string>();
                cVar1 = iOption->HasFlags(1);
                if (!cVar1) {
                    pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    local_168 = eastl::fixed_string<char, 256>(pcVar5);
                    (*iOption->_vptr[1]._x7e___2)(iOption, &local_168);
                }
                if (!cVar1) {
                }
                uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                osClientConsole.AddMessage(5, "Cannot set preference \'%s\' to \'%s\'", uVar7, uVar8);
                this_01 = &local_190;
                goto LAB_10006848a;
            }
            DoCommand_Prefs(OSClientConsole&,
                            eastl::fixed_vector<StringView, 4ul> const&)::$_86::operator()((__86*)&local_170, iOption);
        }
    LAB_10006849b:
    }

} // namespace jag::oldscape
