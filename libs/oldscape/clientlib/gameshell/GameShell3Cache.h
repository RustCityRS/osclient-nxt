// libs/oldscape/clientlib/gameshell/GameShell3Cache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class GameShell3Cache {
    public:
        char* GetOSRSCacheFolderName();
        void StartCommon(jagex3::PathProvider&, eastl::string const&, eastl::string const&, int, int);
        void StoreUID192(Array<unsigned char, eastl::allocator> const&, int);
        GameShell3Cache* LoadUID192();
        char* GetDataFolderName();
        GameShell3Cache* GetDataDirectory();
        void SetLoggedInAccountId(eastl::string const&);
        void CreateCache();
        byte HasLoggedInAccountId();
        void ClearLoggedInAccountId();
        void OpenUID(Filename const&);
        GameShell3Cache* GetAccountDirectory();
        GameShell3Cache* GetPrefFilePostfix(char const*);
        GameShell3Cache* GetRootStorage();
        GameShell3Cache* OpenPrefsForWrite(Filename&, Error&);
        GameShell3Cache* OpenPrefsForRead(Filename&, char const*, eastl::string const&, Error&);
        char* GetHistoricPostfix();
        static /* 8 bytes */ m_archiveCount;
        static eastl::string /* 32 bytes */ m_osName;      // = eastl::string()
        static eastl::string /* 32 bytes */ m_osNameRaw;   // = eastl::string()
        static eastl::string /* 32 bytes */ m_accountId;   // = eastl::string()
        static Filename /* 304 bytes */ m_homeDirectory;   // = Filename()
        static Filename /* 304 bytes */ m_cacheDirectory;  // = Filename()
        static Filename /* 304 bytes */ m_publicDirectory; // = Filename()
        static /* 8 bytes */ m_uidDat;
        static /* 8 bytes */ m_historicCacheId;

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[8];
        ulong field_8; // offset 8
        long field_16; // offset 16
    };

    // 0x1000dd4b0, 16 bytes, inline, placed by class name and debug map
    // GameShell3Cache::GetOSRSCacheFolderName()
    char* GameShell3Cache::GetOSRSCacheFolderName() {
        return "Old School Runescape";
    }

    // 0x1000df570, 320 bytes, inline, placed by class name
    // GameShell3Cache::StartCommon(jagex3::PathProvider&, eastl::string const&, eastl::string const&, int, int)
    void GameShell3Cache::StartCommon(PathProvider* param_1, basic_string* param_2, basic_string* param_3, int param_4,
                                      int param_5) {
        Filename local_168[19];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        m_archiveCount = param_5;
        (**(code**)(param_1->field_0 + 8))(local_168, param_1);
        Filename::operator=((Filename*)&m_homeDirectory, local_168);
        local_168->~pair();
        (**(code**)param_1->field_0)(local_168, param_1, param_2, param_3, param_4);
        Filename::operator=((Filename*)&m_cacheDirectory, local_168);
        local_168->~pair();
        (**(code**)(param_1->field_0 + 24))(local_168, param_1);
        Filename::operator=((Filename*)&m_publicDirectory, local_168);
        local_168->~pair();
        (**(code**)(param_1->field_0 + 16))(local_168, param_1, param_4);
        OpenUID(local_168);
        local_168->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1000e13a0, 144 bytes, inline, placed by class name
    // GameShell3Cache::StoreUID192(Array<unsigned char, eastl::allocator> const&, int)
    void GameShell3Cache::StoreUID192(Array* param_1, int param_2) {
        ClientCompositeZone* this;
        File* pFVar1;
        long lVar2;
        bool bVar3;
        undefined4 in_register_00000034;

        bVar3 =
            std::operator!=((unique_ptr*)&m_uidDat, (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_2));
        if (bVar3) {
            this = (ClientCompositeZone*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                (unique_ptr<File, std::default_delete<File>>*)&m_uidDat);
            if (IsValid() != '\0') {
                pFVar1 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                    (unique_ptr<File, std::default_delete<File>>*)&m_uidDat);
                pFVar1->seek(0, 0, 0);
                pFVar1 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                    (unique_ptr<File, std::default_delete<File>>*)&m_uidDat);
                lVar2 = param_1->data();
                pFVar1->write((uchar*)(param_2 + lVar2), 24, 0);
            }
        }
    }

    // 0x1000e14e0, 288 bytes, inline, placed by class name
    // GameShell3Cache::LoadUID192()
    GameShell3Cache* GameShell3Cache::LoadUID192() {
        bool bVar1;
        char cVar2;
        ClientCompositeZone* this_00;
        File* pFVar3;
        uchar* puVar4;
        char* pcVar6;
        undefined1* puVar7;
        ulong uVar8;

        new (this) Array<unsigned char, eastl::allocator>(24);
        bVar1 = std::operator!=((unique_ptr*)&m_uidDat, (_func_decltype_nullptr*)24);
        if (bVar1) {
            this_00 = (ClientCompositeZone*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                (unique_ptr<File, std::default_delete<File>>*)&m_uidDat);
            cVar2 = this_00->IsValid();
            if (cVar2 != '\0') {
                pFVar3 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                    (unique_ptr<File, std::default_delete<File>>*)&m_uidDat);
                cVar2 = pFVar3->seek(0, 0, 0);
                if (cVar2 != '\0') {
                    pFVar3 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                        (unique_ptr<File, std::default_delete<File>>*)&m_uidDat);
                    puVar4 = (uchar*)data();
                    if (pFVar3->read(puVar4, 24, 0, 0) != 0) {
                        bVar1 = true;
                        uVar8 = 0;
                        do {
                            pcVar6 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                                (Array<unsigned char, eastl::allocator>*)this, uVar8);
                            if (*pcVar6 != '\0')
                                break;
                            bVar1 = uVar8 < 23;
                            uVar8 = uVar8 + 1;
                        } while (uVar8 != 24);
                        if (bVar1) {
                            return this;
                        }
                    }
                }
            }
        }
        uVar8 = 0;
        do {
            puVar7 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                (Array<unsigned char, eastl::allocator>*)this, uVar8);
            *puVar7 = 255;
            uVar8 = uVar8 + 1;
        } while (uVar8 != 24);
        return this;
    }

    // 0x1000e2e10, 16 bytes, inline, placed by class name
    // GameShell3Cache::GetDataFolderName()
    char* GameShell3Cache::GetDataFolderName() {
        return "data";
    }

    // 0x1000e2e30, 144 bytes, inline, placed by class name
    // GameShell3Cache::GetDataDirectory()
    GameShell3Cache* GameShell3Cache::GetDataDirectory() {
        GameShell3Cache local_150[12];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        GetRootStorage(local_150);
        Filename::operator/((Filename*)this, (char*)local_150);
        local_150->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x100112830, 32 bytes, inline, placed by class name
    // GameShell3Cache::SetLoggedInAccountId(eastl::string const&)
    void GameShell3Cache::SetLoggedInAccountId(basic_string* param_1) {
        eastl::string::operator=((eastl::string*)&m_accountId, param_1);
    }

    // 0x100112850, 288 bytes, inline, placed by class name
    // GameShell3Cache::CreateCache()
    void GameShell3Cache::CreateCache() {
        char cVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined1 local_150[8];
        GameShell3Cache local_148[12];
        long local_18;

        local_18 = *(long*)PTR____stack_chk_guard_100ee9d98;
        GetAccountDirectory((GameShell3Cache*)(local_150 + 8));
        cVar1 = ((local_150 + 8))->Exists();
        if (cVar1 == '\0') {
            new (local_150) callstack::Callstack();
            ((local_150 + 8))->CreateDirectories(local_150);
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                "clientlib/gameshell/GameShell3Cache.h",
                                62, "Creating local cahce during login");
            cVar1 = local_150->IsValid();
            if (cVar1 != '\0') {
                uVar2 = logger::default_logger();
                uVar3 = ((local_150 + 8))->GetName();
                logger::Logger::Log(uVar2, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "clientlib/gameshell/GameShell3Cache.h",
                                    66, "Error creating account cache directory at %s", uVar3);
            }
        }
        ((local_150 + 8))->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_18) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100112970, 32 bytes, inline, placed by class name
    // GameShell3Cache::HasLoggedInAccountId()
    byte GameShell3Cache::HasLoggedInAccountId() {
        return eastl::basic_string<
                   char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ^
               1;
    }

    // 0x100112990, 32 bytes, inline, placed by class name
    // GameShell3Cache::ClearLoggedInAccountId()
    void GameShell3Cache::ClearLoggedInAccountId() {
        eastl::string::clear();
    }

    // 0x10012ccb0, 96 bytes, inline, placed by class name
    // GameShell3Cache::OpenUID(Filename const&)
    void GameShell3Cache::OpenUID(Filename* param_1) {
        Filename* pFVar2;
        ClientCompositeZone* this;
        undefined1 local_20[8];

        std::make_unique<File, Filename_const&, int const&>((Filename*)local_20, (int*)param_1);
        pFVar2 = (Filename*)local_20;
        std::unique_ptr<File, std::default_delete<File>>::operator=(
            (unique_ptr<File, std::default_delete<File>>*)&m_uidDat, (unique_ptr*)local_20);
        local_20->~unique_ptr();
        this = (ClientCompositeZone*)std::unique_ptr<File, std::default_delete<File>>::operator->(
            (unique_ptr<File, std::default_delete<File>>*)&m_uidDat);
        if (IsValid() == '\0') {
            std::unique_ptr<File, std::default_delete<File>>::operator=(
                (unique_ptr<File, std::default_delete<File>>*)this, (_func_decltype_nullptr*)pFVar2);
        }
    }

    // 0x100183ae0, 192 bytes, inline, placed by class name
    // GameShell3Cache::GetAccountDirectory()
    GameShell3Cache* GameShell3Cache::GetAccountDirectory() {
        GameShell3Cache local_280[12];
        Filename local_150[19];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        GetRootStorage(local_280);
        Filename::operator/(local_150, (char*)local_280);
        Filename::operator/((Filename*)this, local_150, (fixed_string*)&m_accountId);
        local_150->~pair();
        local_280->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x100183bd0, 48 bytes, inline, placed by class name
    // GameShell3Cache::GetPrefFilePostfix(char const*)
    GameShell3Cache* GameShell3Cache::GetPrefFilePostfix(char* param_1) {
        char* pcVar1;

        pcVar1 = "";
        if (param_1 != (char*)0) {
            pcVar1 = param_1;
        }
        eastl::string::basic_string(this, "preferences%s.dat", pcVar1);
        return this;
    }

    // 0x100189940, 176 bytes, inline, placed by class name
    // GameShell3Cache::GetRootStorage()
    GameShell3Cache* GameShell3Cache::GetRootStorage() {
        Filename local_150[19];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (this) Filename();
        Filename::operator/(local_150, &m_homeDirectory);
        Filename::operator=((Filename*)this, local_150);
        local_150->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

} // namespace jag::oldscape
