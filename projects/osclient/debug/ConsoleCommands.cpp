// projects/osclient/debug/ConsoleCommands.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ConsoleCommands.h"

namespace jag::oldscape {
    // 0x10005a7a0
    ConsoleCommands::ConsoleCommands(OSClientConsole& osClientConsole) : field_0(osClientConsole) {
        field_8 = (Client*)osClientConsole.GetClient();
        new (&field_16) eastl::vector_map<eastl::string, ConsoleCommandHelp>();
        RegisterPublicCommands();
        RegisterTestCommands();
        if (field_8->IsPlayerAdmin() != '\0') {
            RegisterAdminCommands();
            RegisterDebugCommands();
            RegisterExperimentalCommands();
        }
    }

    // 0x10005c3e0
    void
    ConsoleCommands::RegisterCommand(const char* str1, const char* str2, const char* str3,
                                     std::function<void(eastl::fixed_vector<StringView, 4ul> const&)> const& callback) {
        void result;
        OSClientConsole result;
        function<void(eastl::fixed_vector<StringView, 4ul> const&)> local_68[48];
        long local_38;

        int arg3 = (int)callback;
        if (str1 == nullptr) {
            LogAssert("pName",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/"
                      "ConsoleCommands.cpp",
                      41, nullptr);
        }
        &result = field_0;
        new (local_68) std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>(callback);
        console::Console::AddCommand<std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>>(
            &result, (Console*)str1, (char*)local_68,
            (function<void_(eastl::fixed_vector<StringView, _4ul> const&)>*)4294967295, arg3);
        RegisterCommandHelp(str1, str2, str3);
    }

    // 0x10005c6a0
    void ConsoleCommands::RegisterCommandHelp(const char* str1, const char* str2, const char* str3) {
        pair<eastl::string, ConsoleCommandHelp> local_d0;

        if (str1 == nullptr) {
            LogAssert("pName",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/"
                      "ConsoleCommands.cpp",
                      54, nullptr);
        }
        if (str2 == nullptr) {
            LogAssert("pUsage",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/"
                      "ConsoleCommands.cpp",
                      55, nullptr);
        }
        if (str3 == nullptr) {
            LogAssert("pDescription",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/"
                      "ConsoleCommands.cpp",
                      56, nullptr);
        }
        ConsoleCommandHelp local_70(str2, str3);
        local_d0.pair<char const*&, void>(str1, local_70);
        eastl::vector_map<eastl::string, ConsoleCommandHelp>::insert<eastl::pair<eastl::string, ConsoleCommandHelp>,
                                                                     void>(
            (vector_map<eastl::string, ConsoleCommandHelp>*)&field_16, &local_d0);
    }

    // 0x10005c7d0
    void ConsoleCommands::RegisterCommandPrivate(
        const char* str, std::function<void(eastl::fixed_vector<StringView, 4ul> const&)> const& callback) {
        void result;
        OSClientConsole result;
        int in_R8D;
        function<void(eastl::fixed_vector<StringView, 4ul> const&)> local_68[56];
        long local_30;

        if (str == nullptr) {
            LogAssert("pName",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/"
                      "ConsoleCommands.cpp",
                      48, nullptr);
        }
        &result = field_0;
        new (local_68) std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>(callback);
        console::Console::AddCommand<std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>>(
            &result, (Console*)str, (char*)local_68,
            (function<void_(eastl::fixed_vector<StringView, _4ul> const&)>*)4294967295, in_R8D);
    }

    // 0x10005c9b0
    long ConsoleCommands::GetCommandHelp(const char* str) const {
        eastl::string local_50(str);
        long lVar1 = field_16.find(local_50);
        long lVar2 = field_16.end();
        long lVar3 = 0;
        if (lVar1 != lVar2) {
            lVar3 = lVar1 + 32;
        }
        return lVar3;
    }

    // 0x10005ca70
    void ConsoleCommands::ForEachCommandHelp(
        std::function<void(eastl::string const&, ConsoleCommandHelp const&)>&& callback) const {
        auto str = field_16.HeapBeginPtr();
        auto pbVar1 = field_16.end();
        for (; str != pbVar1; str = str + 96) {
            std::function<void(eastl::stringconst&, ConsoleCommandHelp const&)>::operator()(
                (function<void(eastl::stringconst&, ConsoleCommandHelp const&)>*)callback, str,
                (ConsoleCommandHelp*)(str + 32));
        }
    }

} // namespace jag::oldscape
