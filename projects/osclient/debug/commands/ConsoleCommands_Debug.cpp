// projects/osclient/debug/commands/ConsoleCommands_Debug.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "projects/osclient/debug/ConsoleCommands.h"

namespace jag::oldscape {
    // 0x10005b820
    void ConsoleCommands::RegisterDebugCommands() {
        function<void(eastl::fixed_vector<StringView, 4ul> const&)> local_58[56];
        long local_20;

        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterDebugCommands()::__13, void>(local_58, (__13*)this);
        char* pcVar1 = "gpu";
        RegisterCommandPrivate("gpu", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterDebugCommands()::__14, void>(local_58, (__14*)pcVar1);
        pcVar1 = "suspend";
        RegisterCommandPrivate("suspend", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterDebugCommands()::__15, void>(local_58, (__15*)pcVar1);
        pcVar1 = "models";
        RegisterCommandPrivate("models", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterDebugCommands()::__16, void>(local_58, (__16*)pcVar1);
        pcVar1 = "ground";
        RegisterCommandPrivate("ground", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterDebugCommands()::__17, void>(local_58, (__17*)pcVar1);
        pcVar1 = "minimap";
        RegisterCommandPrivate("minimap", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterDebugCommands()::__18, void>(local_58, (__18*)pcVar1);
        RegisterCommandPrivate("world", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterDebugCommands()::__19, void>(local_58, (__19*)this);
        __20 arg1 = 14305103;
        RegisterCommandPrivate("clickbox", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterDebugCommands()::__20, void>(local_58, arg1);
        pcVar1 = "aabb";
        RegisterCommandPrivate("aabb", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterDebugCommands()::__21, void>(local_58, (__21*)pcVar1);
        RegisterCommandPrivate("copydevicetoken", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterDebugCommands()::__22, void>(local_58, (__22*)this);
        RegisterCommand("zbuffer", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterDebugCommands()::__23, void>(local_58, (__23*)this);
        RegisterCommand("deeplink_add", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterDebugCommands()::__24, void>(local_58, (__24*)this);
        RegisterCommand("deeplink_show", "", "", *local_58);
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>::function<
            ConsoleCommands::RegisterDebugCommands()::__25, void>(local_58, (__25*)this);
        RegisterCommand("deeplink_clear_index", "", "", *local_58);
    }

} // namespace jag::oldscape
