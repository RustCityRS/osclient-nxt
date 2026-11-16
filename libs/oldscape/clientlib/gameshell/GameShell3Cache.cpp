// libs/oldscape/clientlib/gameshell/GameShell3Cache.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.clientlib

#include "GameShell3Cache.h"

namespace jag::oldscape {
    // 0x1039929f0, 8 bytes, __common; zero-initialised
    GameShell3Cache::m_archiveCount;

    // 0x1039929f8, 32 bytes, __common; set at startup by ___cxx_global_var_init.83
    eastl::string GameShell3Cache::m_osName = eastl::string();

    // 0x103992a18, 32 bytes, __common; set at startup by ___cxx_global_var_init.84
    eastl::string GameShell3Cache::m_osNameRaw = eastl::string();

    // 0x103992a38, 32 bytes, __common; set at startup by ___cxx_global_var_init.85
    eastl::string GameShell3Cache::m_accountId = eastl::string();

    // 0x103992a58, 304 bytes, __common; set at startup by ___cxx_global_var_init.86
    Filename GameShell3Cache::m_homeDirectory = Filename();

    // 0x103992b88, 304 bytes, __common; set at startup by ___cxx_global_var_init.87
    Filename GameShell3Cache::m_cacheDirectory = Filename();

    // 0x103992cb8, 304 bytes, __common; set at startup by ___cxx_global_var_init.88
    Filename GameShell3Cache::m_publicDirectory = Filename();

    // 0x103992de8, 8 bytes, __common; zero-initialised
    GameShell3Cache::m_uidDat;

    // 0x103992df0, 8 bytes, __common; zero-initialised
    GameShell3Cache::m_historicCacheId;

    // 0x100391ed0, 304 bytes, placed by class name and debug map
    // GameShell3Cache::OpenPrefsForWrite(Filename&, Error&)
    GameShell3Cache* GameShell3Cache::OpenPrefsForWrite(Filename* param_1, Error* param_2) {
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        Error* local_50[4];
        unique_ptr local_30[8];

        local_50[0] = param_2;
        std::make_unique<File, Filename&, int const&, Error*>((Filename*)local_30, (int*)param_1,
                                                              (Error**)&File::DEFAULT_CREATE_MODE);
        if (param_2->IsValid() == '\0') {
            uVar2 = logger::default_logger();
            uVar3 = param_1->GetName();
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                "clientlib/gameshell/GameShell3Cache.cpp",
                                22, "Prefs: Opening prefs for writing at %s", uVar3);
            new (this) std::unique_ptr<File, std::default_delete<File>>(local_30);
        } else {
            uVar2 = logger::default_logger();
            uVar3 = param_1->GetName();
            local_50->GetErrorString();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                "clientlib/gameshell/GameShell3Cache.cpp",
                                27, "Unable to open or create Preferences file for writing at %s: %s", uVar3, uVar4);
            local_50->~basic_string();
            std::unique_ptr<File, std::default_delete<File>>::unique_ptr<true, void>((_func_decltype_nullptr*)this);
        }
        local_30->~unique_ptr();
        return this;
    }

    // 0x100392090, 448 bytes, placed by class name and debug map
    // GameShell3Cache::OpenPrefsForRead(Filename&, char const*, eastl::string const&, Error&)
    GameShell3Cache* GameShell3Cache::OpenPrefsForRead(Filename* param_1, char* param_2, basic_string* param_3,
                                                       Error* param_4) {
        char cVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        Error* local_68[4];
        Error* local_48;
        basic_string* local_38;

        local_68[0] = param_4;
        local_38 = param_3;
        std::make_unique<File, Filename&, int const&, Error*>((Filename*)this, (int*)param_1,
                                                              (Error**)&File::READONLY_OPEN_MODE);
        cVar1 = param_4->IsValid();
        if (cVar1 == '\0') {
            uVar2 = logger::default_logger();
            uVar3 = param_1->GetName();
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                "clientlib/gameshell/GameShell3Cache.cpp",
                                38, "Prefs: Opening existing prefs from %s", uVar3);
        } else {
            ~unique_ptr();
            uVar2 = m_homeDirectory.GetName();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar4 = GetHistoricPostfix();
            eastl::string::basic_string(local_68, "%sjagex_%s_preferences%s%s.dat", uVar2, uVar3, param_2, uVar4);
            local_48 = param_4;
            std::make_unique<File, eastl::stringconst&, Error*>((basic_string*)this, local_68);
            cVar1 = param_4->IsValid();
            if (cVar1 == '\0') {
                uVar2 = logger::default_logger();
                logger::Logger::Log(uVar2, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "clientlib/gameshell/GameShell3Cache.cpp",
                                    58, "Prefs: Opening existing prefs in historic location: ");
                local_68->~basic_string();
            } else {
                ~unique_ptr();
                local_68->~basic_string();
                uVar2 = logger::default_logger();
                logger::Logger::Log(uVar2, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "clientlib/gameshell/GameShell3Cache.cpp",
                                    63, "Unable to open or create Preferences file for reading.");
                std::unique_ptr<File, std::default_delete<File>>::unique_ptr<true, void>((_func_decltype_nullptr*)this);
            }
        }
        return this;
    }

    // 0x100392250, 48 bytes, placed by class name and debug map
    // GameShell3Cache::GetHistoricPostfix()
    char* GameShell3Cache::GetHistoricPostfix() {
        char* pcVar1;
        char* pcVar2;

        pcVar2 = "";
        if (m_historicCacheId == 34) {
            pcVar2 = "_wip";
        }
        pcVar1 = "_rc";
        if (m_historicCacheId != 33) {
            pcVar1 = pcVar2;
        }
        return pcVar1;
    }

    // 0x1003a0da0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.83
    void ___cxx_global_var_init_83() {
        new (&GameShell3Cache::m_osName) eastl::string();
        ___cxa_atexit(PTR__basic_string_100ee6c80, &GameShell3Cache::m_osName, 4294967296);
    }

    // 0x1003a0de0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.84
    void ___cxx_global_var_init_84() {
        new (&GameShell3Cache::m_osNameRaw) eastl::string();
        ___cxa_atexit(PTR__basic_string_100ee6c80, &GameShell3Cache::m_osNameRaw, 4294967296);
    }

    // 0x1003a0e20, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.85
    void ___cxx_global_var_init_85() {
        new (&GameShell3Cache::m_accountId) eastl::string();
        ___cxa_atexit(PTR__basic_string_100ee6c80, &GameShell3Cache::m_accountId, 4294967296);
    }

    // 0x1003a0e60, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.86
    void ___cxx_global_var_init_86() {
        new (&GameShell3Cache::m_homeDirectory) Filename();
        ___cxa_atexit(PTR__pair_100ee6878, &GameShell3Cache::m_homeDirectory, 4294967296);
    }

    // 0x1003a0ea0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.87
    void ___cxx_global_var_init_87() {
        new (&GameShell3Cache::m_cacheDirectory) Filename();
        ___cxa_atexit(PTR__pair_100ee6878, &GameShell3Cache::m_cacheDirectory, 4294967296);
    }

    // 0x1003a0ee0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.88
    void ___cxx_global_var_init_88() {
        new (&GameShell3Cache::m_publicDirectory) Filename();
        ___cxa_atexit(PTR__pair_100ee6878, &GameShell3Cache::m_publicDirectory, 4294967296);
    }

} // namespace jag::oldscape
