// projects/osclient/debug/commands/ConsoleCommands_Debug.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "projects/osclient/debug/ConsoleCommands.h"

namespace jag::oldscape {
    // 0x10005b820, 672 bytes, placed by class name and debug map
    // ConsoleCommands::RegisterDebugCommands()
    void ConsoleCommands::RegisterDebugCommands() {
        function local_58[56];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterDebugCommands()::__13, void>(local_58, this);
        RegisterCommandPrivate(this, "gpu", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterDebugCommands()::__14, void>(local_58);
        RegisterCommandPrivate(this, "suspend", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterDebugCommands()::__15, void>(local_58);
        RegisterCommandPrivate(this, "models", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterDebugCommands()::__16, void>(local_58);
        RegisterCommandPrivate(this, "ground", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterDebugCommands()::__17, void>(local_58);
        RegisterCommandPrivate(this, "minimap", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterDebugCommands()::__18, void>(local_58);
        RegisterCommandPrivate(this, "world", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterDebugCommands()::__19, void>(local_58, this);
        RegisterCommandPrivate(this, "clickbox", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterDebugCommands()::__20, void>(local_58);
        RegisterCommandPrivate(this, "aabb", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterDebugCommands()::__21, void>(local_58);
        RegisterCommandPrivate(this, "copydevicetoken", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterDebugCommands()::__22, void>(local_58, this);
        RegisterCommand(this, "zbuffer", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterDebugCommands()::__23, void>(local_58, this);
        RegisterCommand(this, "deeplink_add", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterDebugCommands()::__24, void>(local_58, this);
        RegisterCommand(this, "deeplink_show", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function<
            ConsoleCommands::RegisterDebugCommands()::__25, void>(local_58, this);
        RegisterCommand(this, "deeplink_clear_index", "", "", local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::oldscape
