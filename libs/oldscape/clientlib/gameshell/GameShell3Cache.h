// libs/oldscape/clientlib/gameshell/GameShell3Cache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class GameShell3Cache {
    public:
        char* GetOSRSCacheFolderName();
        void StartCommon(jagex3::PathProvider& pathProvider, const eastl::string& str1, const eastl::string& str2,
                         int arg4, int arg5);
        void StoreUID192(const Array<unsigned char>& arg1, int arg2);
        auto LoadUID192();
        char* GetDataFolderName();
        auto GetDataDirectory();
        void SetLoggedInAccountId(const eastl::string& str);
        void CreateCache();
        bool HasLoggedInAccountId();
        void ClearLoggedInAccountId();
        void OpenUID(const Filename& filename);
        auto GetAccountDirectory();
        auto GetPrefFilePostfix(const char* str);
        Filename GetRootStorage();
        auto OpenPrefsForWrite(Filename& filename, Error& error);
        auto OpenPrefsForRead(Filename& filename, const char* str1, const eastl::string& str2, Error& error);
        char* GetHistoricPostfix();
        static int64_t m_archiveCount;
        static eastl::string m_osName;     // = eastl::string()
        static eastl::string m_osNameRaw;  // = eastl::string()
        static eastl::string m_accountId;  // = eastl::string()
        static Filename m_homeDirectory;   // = Filename()
        static Filename m_cacheDirectory;  // = Filename()
        static Filename m_publicDirectory; // = Filename()
        static unique_ptr<File> m_uidDat;
        static int64_t m_historicCacheId;

        uint8_t _unknown_0[1];
    };

    // 0x1000dd4b0
    char* GameShell3Cache::GetOSRSCacheFolderName() {
        return "Old School Runescape";
    }

    // 0x1000df570
    void GameShell3Cache::StartCommon(jagex3::PathProvider& pathProvider, const eastl::string& str1,
                                      const eastl::string& str2, int arg4, int arg5) {
        Filename local_168;

        m_archiveCount = arg5;
        (**(void (**)(...))(pathProvider.field_0 + 8))(&local_168, pathProvider);
        m_homeDirectory = local_168;
        (**(void (**)(...))pathProvider.field_0)(&local_168, pathProvider, str1, str2, arg4);
        m_cacheDirectory = local_168;
        (**(void (**)(...))(pathProvider.field_0 + 24))(&local_168, pathProvider);
        m_publicDirectory = local_168;
        (**(void (**)(...))(pathProvider.field_0 + 16))(&local_168, pathProvider, arg4);
        OpenUID(&local_168);
    }

    // 0x1000e13a0
    void GameShell3Cache::StoreUID192(const Array<unsigned char>& arg1, int arg2) {
        File* pFVar1;
        long lVar2;
        uint32_t in_register_00000034;

        if (&m_uidDat != ((void*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2))) {
            if (((ClientCompositeZone*)m_uidDat.operator->())->IsValid() != '\0') {
                pFVar1 = (File*)m_uidDat.operator->();
                pFVar1->seek(0, 0, nullptr);
                pFVar1 = (File*)m_uidDat.operator->();
                lVar2 = arg1.data();
                pFVar1->write((arg2 + lVar2), 24, nullptr);
            }
        }
    }

    // 0x1000e14e0
    auto GameShell3Cache::LoadUID192() {
        File* pFVar3;
        unsigned char* arg1;
        char* pcVar5;
        uint8_t* puVar6;
        unsigned long uVar7;

        auto result(24);
        bool bVar1 = &m_uidDat != 24;
        if (bVar1) {
            if (((ClientCompositeZone*)m_uidDat.operator->())->IsValid()) {
                pFVar3 = (File*)m_uidDat.operator->();
                if (pFVar3->seek(0, 0, nullptr)) {
                    pFVar3 = (File*)m_uidDat.operator->();
                    arg1 = result.data();
                    if (pFVar3->read(arg1, 24, 0, nullptr) != 0) {
                        bVar1 = true;
                        uVar7 = 0;
                        do {
                            pcVar5 = (char*)(result)[uVar7];
                            if (*pcVar5 != '\0')
                                break;
                            bVar1 = uVar7 < 23;
                            uVar7 = uVar7 + 1;
                        } while (uVar7 != 24);
                        if (bVar1) {
                            return result;
                        }
                    }
                }
            }
        }
        uVar7 = 0;
        do {
            puVar6 = (uint8_t*)(result)[uVar7];
            *puVar6 = 255;
            uVar7 = uVar7 + 1;
        } while (uVar7 != 24);
        return result;
    }

    // 0x1000e2e10
    char* GameShell3Cache::GetDataFolderName() {
        return "data";
    }

    // 0x1000e2e30
    auto GameShell3Cache::GetDataDirectory() {
        ReturnValue local_150;

        GetRootStorage(&local_150);
        auto result = local_150 / "data";
        return result;
    }

    // 0x100112830
    void GameShell3Cache::SetLoggedInAccountId(const eastl::string& str) {
        m_accountId = str;
    }

    // 0x100112850
    void GameShell3Cache::CreateCache() {
        Logger* pLVar2;
        char* pcVar3;
        uint8_t local_150[312];

        GetAccountDirectory((ReturnValue*)(local_150 + 8));
        if (!(((local_150 + 8))->Exists())) {
            new (local_150) callstack::Callstack();
            ((local_150 + 8))->CreateDirectories(local_150);
            pLVar2 = logger::default_logger();
            pLVar2->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                        "gameshell/GameShell3Cache.h",
                        62, "Creating local cahce during login");
            if (local_150->IsValid()) {
                pLVar2 = logger::default_logger();
                pcVar3 = ((local_150 + 8))->GetName();
                pLVar2->Log(false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "gameshell/GameShell3Cache.h",
                            66, "Error creating account cache directory at %s", pcVar3);
            }
        }
        ((local_150 + 8))->~pair();
    }

    // 0x100112970
    bool GameShell3Cache::HasLoggedInAccountId() {
        return m_accountId.empty() ^ 1;
    }

    // 0x100112990
    void GameShell3Cache::ClearLoggedInAccountId() {
        m_accountId.clear();
    }

    // 0x10012ccb0
    void GameShell3Cache::OpenUID(const Filename& filename) {
        Filename local_20;

        std::make_unique<File, Filename const&, int const&>(local_20, filename);
        m_uidDat = &local_20;
        auto clientCompositeZone = m_uidDat.operator->();
        if (clientCompositeZone->IsValid() == '\0') {
            *clientCompositeZone = &local_20;
        }
    }

    // 0x100183ae0
    auto GameShell3Cache::GetAccountDirectory() {
        ReturnValue local_280;

        GetRootStorage(&local_280);
        Filename local_150 = local_280 / "users";
        auto result = local_150 / &m_accountId;
        return result;
    }

    // 0x100183bd0
    auto GameShell3Cache::GetPrefFilePostfix(const char* str) {
        char* str_00 = "";
        if (str != nullptr) {
            str_00 = str;
        }
        return auto((CtorSprintf*)"preferences%s.dat", str_00);
    }

    // 0x100189940
    Filename GameShell3Cache::GetRootStorage() {

        Filename result;
        Filename local_150 = m_homeDirectory / "Old School Runescape";
        result = local_150;
        return result;
    }

} // namespace jag::oldscape
