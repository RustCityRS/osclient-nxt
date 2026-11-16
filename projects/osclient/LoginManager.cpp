// projects/osclient/LoginManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "LoginManager.h"

namespace jag::oldscape {
    // 0x100049810: LoginManager::GetDevCredentialsOutputDirectory() has the same machine code as option::Option<WindowSavedPosition>::GetDefaultValue() const

    // 0x1000fcbb0: LoginManager::GetAuthWrapper() has the same machine code as ClientObj::GetHighlight()

    // 0x1001866f0
    LoginManager::LoginManager(auth::AuthLibWrapper* authLibWrapper)
        : field_0(4294967295), m_authenticatorUserHash(0), m_pAuthWrapper(authLibWrapper), field_56(0), field_64(""),
          field_368("") {
        ProcessLauncherCredentials();
    }

    // 0x1001867a0
    void LoginManager::ProcessLauncherCredentials() {
        unsigned long uVar4;

        eastl::string local_b8;
        if (SystemDetails::GetTargetEnvironmentVariable("JX_DISPLAY_NAME", local_b8) != '\0') {
            TitleScreen::SetDisplayName(local_b8);
        }
        eastl::string local_58;
        eastl::string local_98;
        eastl::string local_38;
        eastl::string local_78;
        SystemDetails::GetTargetEnvironmentVariable("JX_ACCESS_TOKEN", local_58);
        SystemDetails::GetTargetEnvironmentVariable("JX_REFRESH_TOKEN", local_98);
        SystemDetails::GetTargetEnvironmentVariable("JX_SESSION_ID", local_38);
        SystemDetails::GetTargetEnvironmentVariable("JX_CHARACTER_ID", local_78);
        long lVar2 = local_58.size();
        long lVar3 = local_38.size();
        if (lVar2 == lVar3) {
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                      "LoginManager.cpp",
                      158,
                      "[LoginManager] - No valid launcher tokens have been detected. Proceeding with Username/Password "
                      "login flow.");
        } else {
            uVar4 = local_58.size();
            if (local_38.size() < uVar4) {
                m_pAuthWrapper->SetOAuth2Credentials(local_58, local_98, 0);
            } else {
                m_pAuthWrapper->SetGameSessionCredentials(local_38, local_78);
            }
            field_56 = 257;
        }
    }

    // 0x100186980
    bool LoginManager::IsOneTimeLoginTokenRequested() const {
        return field_0 - 5 < 4;
    }

    // 0x1001869a0
    bool LoginManager::IsGameTokenLogin() const {
        return field_0 == 2;
    }

    // 0x1001869b0
    bool LoginManager::IsRefreshTokenAvailable() const {
        if (m_pAuthWrapper != nullptr) {
            (*m_pAuthWrapper->_vptr[1]._dtor)();
        }
        return 0;
    }

    // 0x1001869d0
    uint32_t LoginManager::GetAuthenticatorUserHash() const {
        return m_authenticatorUserHash;
    }

    // 0x1001869e0
    void LoginManager::PreparePasswordLogin(const eastl::string& str, bool arg2) {
        uint64_t in_register_00000011;

        PreparePasswordLogin(str, (int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) * 5);
    }

    // 0x1001869f0
    void LoginManager::PreparePasswordLogin(const eastl::string& str, LoginMode loginMode) {
        ResetLoginCredentials();
        field_0 = loginMode;
        LoginManager* this_00 = (LoginManager*)&field_8;
        *this_00 = str;
        m_authenticatorUserHash = GetAuthenticatorUserHashFromTitleScreen(this_00);
    }

    // 0x100186a30
    void LoginManager::PreparePasswordLoginForTokenOnlyRequest(const eastl::string& str) {
        PreparePasswordLogin(str, 6);
    }

    // 0x100186a40
    void LoginManager::ResetLoginCredentials() {
        field_0 = 4294967295;
        if (m_pAuthWrapper != nullptr) {
            (*m_pAuthWrapper->_vptr[32]._x7e___2)();
        }
        (&field_8)->assign("");
    }

    // 0x100186a80
    unsigned int LoginManager::GetAuthenticatorUserHashFromTitleScreen() const {
        ReturnValue local_30;

        bool cVar1 =
            ((basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)&TitleScreen::m_loginUser)
                ->empty();
        unsigned int uVar2 = 0;
        if (!cVar1) {
            local_30 =
                core::stringtools::general::UserhashTools::ToRawUsername((eastl::string*)&TitleScreen::m_loginUser);
            uVar2 = stringtools::hash32<eastl::fixed_string<char, 256>>(local_30);
        }
        return uVar2;
    }

    // 0x100186ae0
    void LoginManager::SaveDevCredentialsToFile() const {
        Logger* pLVar2;
        char* pcVar3;
        uint64_t uVar4;
        eastl::string local_3e8;
        uint8_t local_3c8[312];
        Callstack local_290;

        bool cVar1 = field_64 == "";
        if (cVar1)
            goto LAB_100186d1e;
        cVar1 = field_368 == "";
        if (cVar1)
            goto LAB_100186d1e;
        Filename local_158(&field_64);
        cVar1 = local_158.Exists();
        if (!cVar1) {
            local_290 = callstack::Callstack();
            local_158.CreateDirectories(&local_290);
            cVar1 = local_290.IsValid();
            if (!cVar1)
                goto LAB_100186bd0;
            pLVar2 = logger::default_logger();
            pcVar3 = local_158.GetName();
            pLVar2->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/LoginManager.cpp",
                85, "Error creating dev credentials directory at %s", pcVar3);
            if (!cVar1)
                goto LAB_100186bd0;
        } else {
        LAB_100186bd0:
            new (local_3c8) callstack::Callstack();
            *((local_3c8 + 8)) = local_158 / &field_368;
            local_290 = File((local_3c8 + 8), 1538, local_3c8);
            ((local_3c8 + 8))->~pair();
            cVar1 = local_3c8->IsValid();
            if (!cVar1) {
                stringtools::rot13<eastl::string, eastl::string>((eastl::string*)(local_3c8 + 8));
                local_3e8 + (*((value_type*)&TitleScreen::m_loginUser));
                local_290.write(&local_3e8, nullptr);
                local_290.write((local_3c8 + 8), nullptr);
            } else {
                pLVar2 = logger::default_logger();
                pcVar3 = local_158.GetName();
                *((local_3c8 + 8)) = local_3c8->GetErrorString();
                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pLVar2->Log(false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "LoginManager.cpp",
                            94, "Error creating command history file %s: %s", pcVar3, uVar4);
            }
            ((local_3c8 + 8))->~basic_string();
        }
    LAB_100186d1e:
    }

    // 0x100186ff0
    void LoginManager::PrepareGameTokenLogin(bool arg1) {
        ResetLoginCredentials();
        field_0 = 2;
        if (m_pAuthWrapper != nullptr) {
            (*m_pAuthWrapper->_vptr[32]._x7e___2)();
        }
    }

    // 0x100187040
    void LoginManager::InvalidateRefreshToken() {
        m_authenticatorUserHash = 0;
        if (m_pAuthWrapper != nullptr) {
            (*m_pAuthWrapper->_vptr[32]._x7e___2)();
        }
    }

    // 0x100187100
    void LoginManager::PackLoginRSAData(PacketJ<Array<unsigned char>>& packetJ) {
        char* pcVar2;
        GameToken local_40;

        packetJ.p1<unsigned long>((unsigned int)(uint8_t)(char)field_0);
        LoginMode LVar1 = field_0;
        if (8 < LVar1) {
            return;
        }
        if ((115U >> (LVar1 & 31) & 1) == 0) {
            if ((388U >> (LVar1 & 31) & 1) == 0) {
                return;
            }
            if (m_pAuthWrapper != nullptr) {
                (*m_pAuthWrapper->_vptr[3]._dtor)();
            }
            local_40 = auth::GameToken();
            if (m_pAuthWrapper != nullptr) {
                local_40.SSOBeginPtr();
                pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                packetJ.pStringUTF8ToCP1252(pcVar2, false);
                local_40.destruct<eastl::pair<eastl::string, option::IOption*>>();
                return;
            }
            local_40.destruct<eastl::pair<eastl::string, option::IOption*>>();
        }
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        packetJ.pStringUTF8ToCP1252(pcVar2, false);
    }

    // 0x100187240
    uint64_t LoginManager::GetFederatedSignInResult() const {
        if (m_pAuthWrapper != nullptr) {
            (*m_pAuthWrapper->_vptr[32]._dtor)();
        }
        return 0;
    }

    // 0x100187260
    void LoginManager::ClearFederatedSignInResult() {
        if (m_pAuthWrapper != nullptr) {
            (*m_pAuthWrapper->_vptr[32]._x7e___2)();
        }
    }

} // namespace jag::oldscape
