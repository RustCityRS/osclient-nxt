// projects/osclient/LoginManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "LoginManager.h"

namespace jag::oldscape {
    // 0x100049810: the linker folded this into option::Option<WindowSavedPosition>::GetDefaultValue() const, which has identical code
    LoginManager::GetDevCredentialsOutputDirectory();

    // 0x1000fcbb0: the linker folded this into ClientObj::GetHighlight(), which has identical code
    LoginManager::GetAuthWrapper();

    // 0x1001866f0, 160 bytes, base-object constructor, placed by class name and debug map
    // LoginManager::LoginManager(auth::AuthLibWrapper*)
    void LoginManager::LoginManager(AuthLibWrapper* param_1) {
        field_0 = 4294967295;
        new (&field_8) eastl::string();
        m_authenticatorUserHash = 0;
        m_pAuthWrapper = param_1;
        field_56 = 0;
        new (&field_64, "") Filename();
        new (&field_368, "") Filename();
        ProcessLauncherCredentials(this);
    }

    // 0x1001867a0, 464 bytes, placed by class name and debug map
    // LoginManager::ProcessLauncherCredentials()
    void LoginManager::ProcessLauncherCredentials() {
        long lVar2;
        long lVar3;
        undefined8 uVar4;
        ulong uVar5;
        eastl::string local_b8[32];
        eastl::string local_98[32];
        eastl::string local_78[32];
        eastl::string local_58[32];
        eastl::string local_38[32];

        eastl::string::basic_string(local_b8);
        if (SystemDetails::GetTargetEnvironmentVariable("JX_DISPLAY_NAME", (basic_string*)local_b8) != '\0') {
            TitleScreen::SetDisplayName((basic_string*)local_b8);
        }
        eastl::string::basic_string(local_58);
        eastl::string::basic_string(local_98);
        eastl::string::basic_string(local_38);
        eastl::string::basic_string(local_78);
        SystemDetails::GetTargetEnvironmentVariable("JX_ACCESS_TOKEN", (basic_string*)local_58);
        SystemDetails::GetTargetEnvironmentVariable("JX_REFRESH_TOKEN", (basic_string*)local_98);
        SystemDetails::GetTargetEnvironmentVariable("JX_SESSION_ID", (basic_string*)local_38);
        SystemDetails::GetTargetEnvironmentVariable("JX_CHARACTER_ID", (basic_string*)local_78);
        lVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        lVar3 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (lVar2 == lVar3) {
            uVar4 = logger::default_logger();
            logger::Logger::Log(
                uVar4, 0, 8,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/LoginManager.cpp",
                158,
                "[LoginManager] - No valid launcher tokens have been detected. Proceeding with Username/Password login "
                "flow.");
        } else {
            uVar5 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() < uVar5) {
                (m_pAuthWrapper, (basic_string*)local_58, (basic_string*)local_98, 0)->SetOAuth2Credentials();
            } else {
                (m_pAuthWrapper, (basic_string*)local_38, (basic_string*)local_78)->SetGameSessionCredentials();
            }
            field_56 = 257;
        }
        eastl::string::~basic_string(local_78);
        eastl::string::~basic_string(local_38);
        eastl::string::~basic_string(local_98);
        eastl::string::~basic_string(local_58);
        eastl::string::~basic_string(local_b8);
    }

    // 0x100186970, 16 bytes, complete-object constructor, placed by class name and debug map
    // LoginManager::LoginManager(auth::AuthLibWrapper*): jumps straight to the base-object constructor

    // 0x100186980, 32 bytes, placed by class name and debug map
    // LoginManager::IsOneTimeLoginTokenRequested() const
    undefined4 LoginManager::IsOneTimeLoginTokenRequested() {
        uint uVar1;

        uVar1 = field_0 - 5;
        return CONCAT31((int3)(uVar1 >> 8), uVar1 < 4);
    }

    // 0x1001869a0, 16 bytes, placed by class name and debug map
    // LoginManager::IsGameTokenLogin() const
    bool LoginManager::IsGameTokenLogin() {
        return field_0 == 2;
    }

    // 0x1001869b0, 32 bytes, placed by class name and debug map
    // LoginManager::IsRefreshTokenAvailable() const
    undefined8 LoginManager::IsRefreshTokenAvailable() {
        if (m_pAuthWrapper == (AuthLibWrapper*)0) {
            return 0;
        }
        return (*(code*)m_pAuthWrapper->field_0[2])();
    }

    // 0x1001869d0, 16 bytes, placed by class name and debug map
    // LoginManager::GetAuthenticatorUserHash() const
    undefined4 LoginManager::GetAuthenticatorUserHash() {
        return m_authenticatorUserHash;
    }

    // 0x1001869e0, 16 bytes, placed by class name and debug map
    // LoginManager::PreparePasswordLogin(eastl::string const&, bool)
    void LoginManager::PreparePasswordLogin(basic_string* param_1, bool param_2) {
        undefined7 in_register_00000011;

        PreparePasswordLogin(this, param_1, (int)CONCAT71(in_register_00000011, param_2) * 5);
    }

    // 0x1001869f0, 64 bytes, placed by class name and debug map
    // LoginManager::PreparePasswordLogin(eastl::string const&, LoginMode)
    void LoginManager::PreparePasswordLogin(basic_string* param_1, uint param_3) {
        LoginManager* this_00;

        ResetLoginCredentials(this);
        field_0 = param_3;
        this_00 = (LoginManager*)&field_8;
        eastl::string::operator=((eastl::string*)this_00, param_1);
        m_authenticatorUserHash = GetAuthenticatorUserHashFromTitleScreen(this_00);
    }

    // 0x100186a30, 16 bytes, placed by class name and debug map
    // LoginManager::PreparePasswordLoginForTokenOnlyRequest(eastl::string const&)
    void LoginManager::PreparePasswordLoginForTokenOnlyRequest(basic_string* param_1) {
        PreparePasswordLogin(this, param_1, 6);
    }

    // 0x100186a40, 64 bytes, placed by class name and debug map
    // LoginManager::ResetLoginCredentials()
    void LoginManager::ResetLoginCredentials() {
        field_0 = 4294967295;
        if (m_pAuthWrapper != (AuthLibWrapper*)0) {
            (*(code*)m_pAuthWrapper->field_0[65])();
        }
        (&field_8, "")->assign();
    }

    // 0x100186a80, 96 bytes, placed by class name and debug map
    // LoginManager::GetAuthenticatorUserHashFromTitleScreen() const
    uint LoginManager::GetAuthenticatorUserHashFromTitleScreen() {
        char cVar1;
        uint uVar2;
        UserhashTools local_30[32];

        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        uVar2 = 0;
        if (cVar1 == '\0') {
            local_30->ToRawUsername((basic_string*)&TitleScreen::m_loginUser);
            uVar2 =
                stringtools::hash32<eastl::fixed_string<char, 256, true, eastl::allocator>>((fixed_string*)local_30);
            local_30->~basic_string();
        }
        return uVar2;
    }

    // 0x100186ae0, 720 bytes, placed by class name and debug map
    // LoginManager::SaveDevCredentialsToFile() const
    void LoginManager::SaveDevCredentialsToFile() {
        bool bVar1;
        char cVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        char* in_RDX;
        char* extraout_RDX;
        eastl local_3e8[32];
        undefined1 local_3c8[8];
        Filename local_3c0[19];
        File local_290[13];
        Filename local_158[19];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        bVar1 = eastl::operator==((eastl*)&field_64, (basic_string*)"", in_RDX);
        if (bVar1)
            goto LAB_100186d1e;
        bVar1 = eastl::operator==((eastl*)&field_368, (basic_string*)"", extraout_RDX);
        if (bVar1)
            goto LAB_100186d1e;
        Filename::Filename(local_158, (Filename*)&field_64);
        cVar2 = local_158->Exists();
        if (cVar2 == '\0') {
            new (local_290) callstack::Callstack();
            local_158->CreateDirectories(local_290);
            cVar2 = local_290->IsValid();
            if (cVar2 == '\0')
                goto LAB_100186bd0;
            uVar3 = logger::default_logger();
            uVar4 = local_158->GetName();
            logger::Logger::Log(
                uVar3, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/LoginManager.cpp",
                85, "Error creating dev credentials directory at %s", uVar4);
            if (cVar2 == '\0')
                goto LAB_100186bd0;
        } else {
        LAB_100186bd0:
            new (local_3c8) callstack::Callstack();
            Filename::operator/((Filename*)(local_3c8 + 8), local_158);
            File::File(local_290, (Filename*)(local_3c8 + 8), 1538, (Error*)local_3c8);
            ((local_3c8 + 8))->~pair();
            cVar2 = local_3c8->IsValid();
            if (cVar2 == '\0') {
                stringtools::rot13<eastl::string, eastl::string>((stringtools*)(local_3c8 + 8),
                                                                 (basic_string*)&TitleScreen::m_loginPass);
                eastl::operator+(local_3e8, (basic_string*)&TitleScreen::m_loginUser, (value_type*)&DAT_100e3824c);
                local_290->write(local_3e8, 0);
                local_3e8->~basic_string();
                local_290->write((basic_string*)(local_3c8 + 8), 0);
            } else {
                uVar3 = logger::default_logger();
                uVar4 = local_158->GetName();
                ((local_3c8 + 8))->GetErrorString();
                uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(uVar3, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/LoginManager.cpp",
                                    94, "Error creating command history file %s: %s", uVar4, uVar5);
            }
            ((local_3c8 + 8))->~basic_string();
            local_290->~File();
        }
        local_158->~pair();
    LAB_100186d1e:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100186ff0, 64 bytes, placed by class name
    // LoginManager::PrepareGameTokenLogin(bool)
    void LoginManager::PrepareGameTokenLogin(bool param_1) {
        ResetLoginCredentials(this);
        field_0 = 2;
        if (m_pAuthWrapper != (AuthLibWrapper*)0) {
            (*(code*)m_pAuthWrapper->field_0[65])();
            (m_pAuthWrapper, param_1)->SetIgnorePendingTransactionsOnFetchGameToken();
        }
    }

    // 0x100187040, 64 bytes, placed by class name
    // LoginManager::InvalidateRefreshToken()
    void LoginManager::InvalidateRefreshToken() {
        m_authenticatorUserHash = 0;
        if (m_pAuthWrapper != (AuthLibWrapper*)0) {
            (*(code*)m_pAuthWrapper->field_0[65])();
            (*(code*)m_pAuthWrapper->field_0[3])();
        }
    }

    // 0x100187100, 224 bytes, placed by class name
    // LoginManager::PackLoginRSAData(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void LoginManager::PackLoginRSAData(PacketJ* param_1) {
        uint uVar1;
        AuthLibWrapper* pAVar2;
        char* pcVar3;
        GameToken* pGVar4;
        pair* ppVar5;
        GameToken local_40;

        pGVar4 = (GameToken*)(ulong)(byte)field_0;
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)pGVar4);
        uVar1 = field_0;
        if (8 < uVar1) {
            return;
        }
        if ((115U >> (uVar1 & 31) & 1) == 0) {
            if ((388U >> (uVar1 & 31) & 1) == 0) {
                return;
            }
            if (m_pAuthWrapper == (AuthLibWrapper*)0) {
                new (&local_40) auth::GameToken();
                pAVar2 = m_pAuthWrapper;
            } else {
                pGVar4 = (GameToken*)(*(code*)m_pAuthWrapper->field_0[6])();
                new (&local_40) auth::GameToken(pGVar4);
                pAVar2 = m_pAuthWrapper;
            }
            if (pAVar2 != (AuthLibWrapper*)0) {
                local_40.SSOBeginPtr(pGVar4);
                ppVar5 = (pair*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                param_1->pStringUTF8ToCP1252(ppVar5, false);
                eastl::destruct<eastl::pair<eastl::string, option::IOption*>>((eastl*)&local_40, ppVar5);
                return;
            }
            eastl::destruct<eastl::pair<eastl::string, option::IOption*>>((eastl*)&local_40, (pair*)pGVar4);
        }
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        param_1->pStringUTF8ToCP1252(pcVar3, false);
    }

    // 0x100187240, 32 bytes, placed by class name
    // LoginManager::GetFederatedSignInResult() const
    undefined8 LoginManager::GetFederatedSignInResult() {
        if (m_pAuthWrapper == (AuthLibWrapper*)0) {
            return 0;
        }
        return (*(code*)m_pAuthWrapper->field_0[64])();
    }

    // 0x100187260, 32 bytes, placed by class name
    // LoginManager::ClearFederatedSignInResult()
    void LoginManager::ClearFederatedSignInResult() {
        if (m_pAuthWrapper != (AuthLibWrapper*)0) {
            (*(code*)m_pAuthWrapper->field_0[65])();
        }
    }

} // namespace jag::oldscape
