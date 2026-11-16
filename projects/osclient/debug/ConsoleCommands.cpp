// projects/osclient/debug/ConsoleCommands.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ConsoleCommands.h"

namespace jag::oldscape {
    // 0x10005a7a0, 128 bytes, base-object constructor, placed by class name and debug map
    // ConsoleCommands::ConsoleCommands(OSClientConsole&)
    void ConsoleCommands::ConsoleCommands(OSClientConsole* param_1) {
        field_0 = param_1;
        field_8 = (Client*)param_1->GetClient();
        new (&field_16)
            eastl::vector_map<eastl::string, ConsoleCommandHelp, eastl::less<eastl::string>, eastl::allocator,
                              eastl::vector<eastl::pair<eastl::string, ConsoleCommandHelp>, eastl::allocator>>();
        RegisterPublicCommands(this);
        RegisterTestCommands(this);
        if (field_8->IsPlayerAdmin() != '\0') {
            RegisterAdminCommands(this);
            RegisterDebugCommands(this);
            RegisterExperimentalCommands(this);
        }
    }

    // 0x10005c3e0, 208 bytes, placed by __FILE__ string
    // ConsoleCommands::RegisterCommand(char const*, char const*, char const*, std::function<void (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)> const&)
    /* ConsoleCommands::RegisterCommand(char const*, char const*, char const*,
   std::function<void (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>
   const&) */

    void ConsoleCommands::RegisterCommand(char* param_1, char* param_2, char* param_3, function* param_4) {
        OSClientConsole* pOVar1;
        function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)> local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_1 == (char*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pName",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/"
                      "ConsoleCommands.cpp",
                      41, (char*)0);
        }
        pOVar1 = field_0;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function(local_68,
                                                                                                           param_4);
        console::Console::AddCommand<
            std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>>(
            (Console*)pOVar1, param_1, local_68, 4294967295);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(local_68);
        RegisterCommandHelp(this, param_1, param_2, param_3);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10005c6a0, 304 bytes, placed by class name
    // ConsoleCommands::RegisterCommandHelp(char const*, char const*, char const*)
    void ConsoleCommands::RegisterCommandHelp(char* param_1, char* param_2, char* param_3) {
        pair<eastl::string, ConsoleCommandHelp> local_d0[96];
        ConsoleCommandHelp local_70;
        char* local_30;

        local_30 = param_1;
        if (param_1 == (char*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pName",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/"
                      "ConsoleCommands.cpp",
                      54, (char*)0);
        }
        if (param_2 == (char*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pUsage",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/"
                      "ConsoleCommands.cpp",
                      55, (char*)0);
        }
        if (param_3 == (char*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pDescription",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/"
                      "ConsoleCommands.cpp",
                      56, (char*)0);
        }
        new (&local_70) ConsoleCommandHelp(param_2, param_3);
        eastl::pair<eastl::string, ConsoleCommandHelp>::pair<char const*&, void>(local_d0, &local_30, &local_70);
        eastl::vector_map<eastl::string, ConsoleCommandHelp, eastl::less<eastl::string>, eastl::allocator,
                          eastl::vector<eastl::pair<eastl::string, ConsoleCommandHelp>, eastl::allocator>>::
            insert<eastl::pair<eastl::string, ConsoleCommandHelp>, void>(
                (vector_map<eastl::string, ConsoleCommandHelp, eastl::less<eastl::string>, eastl::allocator,
                            eastl::vector<eastl::pair<eastl::string, ConsoleCommandHelp>, eastl::allocator>>*)&field_16,
                (pair*)local_d0);
        eastl::pair<eastl::string, ConsoleCommandHelp>::~pair(local_d0);
        local_70.~pair();
    }

    // 0x10005c7d0, 176 bytes, placed by class name
    // ConsoleCommands::RegisterCommandPrivate(char const*, std::function<void (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)> const&)
    /* ConsoleCommands::RegisterCommandPrivate(char const*, std::function<void
   (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)> const&) */

    void ConsoleCommands::RegisterCommandPrivate(char* param_1, function* param_2) {
        OSClientConsole* pOVar1;
        function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)> local_68[56];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_1 == (char*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pName",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/"
                      "ConsoleCommands.cpp",
                      48, (char*)0);
        }
        pOVar1 = field_0;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function(local_68,
                                                                                                           param_2);
        console::Console::AddCommand<
            std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>>(
            (Console*)pOVar1, param_1, local_68, 4294967295);
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(local_68);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10005c9b0, 144 bytes, placed by class name
    // ConsoleCommands::GetCommandHelp(char const*) const
    long ConsoleCommands::GetCommandHelp(char* param_1) {
        long lVar1;
        long lVar2;
        long lVar3;
        eastl::string local_50[32];
        allocator local_30[8];

        eastl::allocator::allocator(local_30, "EASTL basic_string");
        eastl::string::basic_string(local_50, param_1, local_30);
        lVar1 = (&field_16, (basic_string*)local_50)->find();
        eastl::string::~basic_string(local_50);
        lVar2 = (&field_16)->end();
        lVar3 = 0;
        if (lVar1 != lVar2) {
            lVar3 = lVar1 + 32;
        }
        return lVar3;
    }

    // 0x10005ca70, 96 bytes, placed by class name
    // ConsoleCommands::ForEachCommandHelp(std::function<void (eastl::string const&, ConsoleCommandHelp const&)>&&) const
    /* ConsoleCommands::ForEachCommandHelp(std::function<void (eastl::basic_string<char,
   eastl::allocator> const&, ConsoleCommandHelp const&)>&&) const */

    void ConsoleCommands::ForEachCommandHelp(function* param_1) {
        ConsoleCommandHelp* pCVar1;
        ConsoleCommandHelp* pCVar2;

        pCVar1 = (ConsoleCommandHelp*)(&field_16)->HeapBeginPtr();
        pCVar2 = (ConsoleCommandHelp*)(&field_16)->end();
        for (; pCVar1 != pCVar2; pCVar1 = (ConsoleCommandHelp*)&pCVar1[2].field_16) {
            std::function<void(eastl::stringconst&, ConsoleCommandHelp_const&)>::operator()((basic_string*)param_1,
                                                                                            pCVar1);
        }
    }

} // namespace jag::oldscape
