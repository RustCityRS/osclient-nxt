// libs/oldscape/clientlib/gameshell/GameShell3Cache.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.clientlib

#include "GameShell3Cache.h"

namespace jag::oldscape {
    // 0x1039929f0
    int64_t GameShell3Cache::m_archiveCount;

    // 0x1039929f8, set at startup by ___cxx_global_var_init.83
    eastl::string GameShell3Cache::m_osName = eastl::string();

    // 0x103992a18, set at startup by ___cxx_global_var_init.84
    eastl::string GameShell3Cache::m_osNameRaw = eastl::string();

    // 0x103992a38, set at startup by ___cxx_global_var_init.85
    eastl::string GameShell3Cache::m_accountId = eastl::string();

    // 0x103992a58, set at startup by ___cxx_global_var_init.86
    Filename GameShell3Cache::m_homeDirectory = Filename();

    // 0x103992b88, set at startup by ___cxx_global_var_init.87
    Filename GameShell3Cache::m_cacheDirectory = Filename();

    // 0x103992cb8, set at startup by ___cxx_global_var_init.88
    Filename GameShell3Cache::m_publicDirectory = Filename();

    // 0x103992de8
    unique_ptr<File> GameShell3Cache::m_uidDat;

    // 0x103992df0
    int64_t GameShell3Cache::m_historicCacheId;

    // 0x100391ed0
    auto GameShell3Cache::OpenPrefsForWrite(Filename& filename, Error& error) {
        Logger* pLVar2;
        char* pcVar3;
        uint64_t uVar4;
        void* arg1;
        ReturnValue local_50;

        local_50[0] = (ReturnValue)error;
        auto local_30 =
            std::make_unique<File, Filename&, int const&, Error*>(filename, *(&File::DEFAULT_CREATE_MODE), local_50);
        if (error.IsValid() == '\0') {
            pLVar2 = logger::default_logger();
            pcVar3 = filename.GetName();
            pLVar2->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                        "gameshell/GameShell3Cache.cpp",
                        22, "Prefs: Opening prefs for writing at %s", pcVar3);
            auto result(local_30);
        } else {
            pLVar2 = logger::default_logger();
            pcVar3 = filename.GetName();
            local_50 = error.GetErrorString();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            arg1 = nullptr;
            pLVar2->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                        "gameshell/GameShell3Cache.cpp",
                        27, "Unable to open or create Preferences file for writing at %s: %s", pcVar3, uVar4);
            result.unique_ptr<true, void>(arg1);
        }
        return result;
    }

    // 0x100392090
    auto GameShell3Cache::OpenPrefsForRead(Filename& filename, const char* str1, const eastl::string& str2,
                                           Error& error) {
        Logger* pLVar2;
        char* pcVar3;
        uint64_t uVar4;
        uint64_t uVar5;
        void* arg1;
        Error* local_68[4];

        local_68[0] = error;
        eastl::string* local_38 = str2;
        auto result =
            std::make_unique<File, Filename&, int const&, Error*>(filename, *(&File::READONLY_OPEN_MODE), *local_68);
        if (!(error.IsValid())) {
            pLVar2 = logger::default_logger();
            pcVar3 = filename.GetName();
            pLVar2->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                        "gameshell/GameShell3Cache.cpp",
                        38, "Prefs: Opening existing prefs from %s", pcVar3);
        } else {
            result.~unique_ptr();
            pcVar3 = m_homeDirectory.GetName();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar5 = GetHistoricPostfix();
            new (local_68) eastl::string((CtorSprintf*)"%sjagex_%s_preferences%s%s.dat", pcVar3, uVar4, str1, uVar5);
            result = std::make_unique<File, eastl::stringconst&, Error*>(*local_68, error);
            if (!(error.IsValid())) {
                pLVar2 = logger::default_logger();
                pLVar2->Log(false, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "gameshell/GameShell3Cache.cpp",
                            58, "Prefs: Opening existing prefs in historic location: ");
            } else {
                result.~unique_ptr();
                pLVar2 = logger::default_logger();
                arg1 = nullptr;
                pLVar2->Log(false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "gameshell/GameShell3Cache.cpp",
                            63, "Unable to open or create Preferences file for reading.");
                result.unique_ptr<true, void>(arg1);
            }
        }
        return result;
    }

    // 0x100392250
    char* GameShell3Cache::GetHistoricPostfix() {
        char* pcVar2 = "";
        if (m_historicCacheId == 34) {
            pcVar2 = "_wip";
        }
        char* pcVar1 = "_rc";
        if (m_historicCacheId != 33) {
            pcVar1 = pcVar2;
        }
        return pcVar1;
    }

} // namespace jag::oldscape
