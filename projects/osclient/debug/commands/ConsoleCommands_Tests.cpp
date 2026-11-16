// projects/osclient/debug/commands/ConsoleCommands_Tests.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "projects/osclient/debug/ConsoleCommands.h"

namespace jag::oldscape {
    // 0x10005ae90
    void ConsoleCommands::RegisterTestCommands() {
        function<void(eastl::fixed_vector<StringView, 4ul> const&)> local_58[56];
        long local_20;

        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterTestCommands()::__61, void>(local_58, (__61*)this);
        RegisterCommand("test_highlights", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterTestCommands()::__62, void>(local_58, (__62*)this);
        RegisterCommand("test_opgroups", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterTestCommands()::__63, void>(local_58, (__63*)this);
        RegisterCommand("userenderer", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterTestCommands()::__64, void>(local_58, (__64*)this);
        char* pcVar1 = "debugvis";
        RegisterCommand("debugvis", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterTestCommands()::__65, void>(local_58, (__65*)pcVar1);
        pcVar1 = "tweak_rt7";
        RegisterCommand("tweak_rt7", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterTestCommands()::__66, void>(local_58, (__66*)pcVar1);
        RegisterCommand("toggleblobshadows_rt7", "", "", *local_58);
    }

} // namespace jag::oldscape
