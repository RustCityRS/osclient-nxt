// projects/osclient/debug/commands/ConsoleCommands_Tests.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "projects/osclient/debug/ConsoleCommands.h"

namespace jag::oldscape {
    // 0x10005ae90, 400 bytes, placed by class name and debug map
    // ConsoleCommands::RegisterTestCommands()
    void ConsoleCommands::RegisterTestCommands() {
        function local_58[56];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterTestCommands()::__61, void>(local_58, this);
        RegisterCommand(this, "test_highlights", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterTestCommands()::__62, void>(local_58, this);
        RegisterCommand(this, "test_opgroups", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterTestCommands()::__63, void>(local_58, this);
        RegisterCommand(this, "userenderer", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterTestCommands()::__64, void>(local_58, this);
        RegisterCommand(this, "debugvis", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterTestCommands()::__65, void>(local_58);
        RegisterCommand(this, "tweak_rt7", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterTestCommands()::__66, void>(local_58);
        RegisterCommand(this, "toggleblobshadows_rt7", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::oldscape
