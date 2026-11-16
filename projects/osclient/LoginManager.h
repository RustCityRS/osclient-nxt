// projects/osclient/LoginManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape {
    class LoginManager {
    public:
        GetDevCredentialsOutputDirectory();
        void SetDevCredentialsOutputDirectory(Filename const&);
        void SetDevCredentialsFilename(Filename const&);
        IsUsingJagexLauncher() const;
        AuthLibWrapper* GetAuthWrapper();
        GetThirdPartySignInResult() const;
        SetAuthenticatorUserHash(int);
        void PrepareFederatedLogin();
        GetJagexWebAuthResult();
        void SetJagexWebAuthResult(jag::auth::AuthSDKTokenResponse);
        void SetThirdPartySignInResult(auth::ThirdPartySignInResult);
        GetDevCredentialsFilename();
        ~LoginManager();
        LoginManager(auth::AuthLibWrapper*);
        void ProcessLauncherCredentials();
        IsOneTimeLoginTokenRequested() const;
        bool IsGameTokenLogin() const;
        IsRefreshTokenAvailable() const;
        GetAuthenticatorUserHash() const;
        void PreparePasswordLogin(eastl::string const&, bool);
        void PreparePasswordLogin(eastl::string const&, LoginMode);
        void PreparePasswordLoginForTokenOnlyRequest(eastl::string const&);
        void ResetLoginCredentials();
        uint GetAuthenticatorUserHashFromTitleScreen() const;
        void SaveDevCredentialsToFile() const;
        void PrepareGameTokenLogin(bool);
        void InvalidateRefreshToken();
        void PackLoginRSAData(PacketJ<Array<unsigned char, eastl::allocator>>&);
        GetFederatedSignInResult() const;
        void ClearFederatedSignInResult();

        // data members, from how the methods use this: 376 bytes
        uint field_0; // offset 0
        char _unknown_4[36];
        undefined4 m_authenticatorUserHash; // offset 40
        char _unknown_44[4];
        AuthLibWrapper* m_pAuthWrapper; // offset 48
        undefined2 field_56;            // offset 56
        char _unknown_58[318];
    };

    // 0x1000c5ec0, 16 bytes, inline, placed by class name and debug map
    // LoginManager::SetDevCredentialsOutputDirectory(Filename const&)
    void LoginManager::SetDevCredentialsOutputDirectory(Filename* param_1) {
        Filename::operator=((Filename*)&field_64, param_1);
    }

    // 0x1000c5ed0, 32 bytes, inline, placed by class name and debug map
    // LoginManager::SetDevCredentialsFilename(Filename const&)
    void LoginManager::SetDevCredentialsFilename(Filename* param_1) {
        Filename::operator=((Filename*)&field_368, param_1);
    }

    // 0x1000df780, 16 bytes, inline, placed by class name
    // LoginManager::IsUsingJagexLauncher() const
    undefined1 LoginManager::IsUsingJagexLauncher() {
        return *(undefined1*)((long)&field_56 + 1);
    }

    // 0x100121bf0, 144 bytes, inline, placed by class name
    // LoginManager::GetThirdPartySignInResult() const
    undefined8 LoginManager::GetThirdPartySignInResult() {
        int iVar2;
        GameToken* this_00;
        type* in_RSI;

        if (m_pAuthWrapper != (AuthLibWrapper*)0) {
            this_00 = (GameToken*)(*(code*)m_pAuthWrapper->field_0[6])();
            this_00->SSOBeginPtr(in_RSI);
            if (eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
                '\0') {
                return 1;
            }
            iVar2 = this_00->GetStatus();
            if (iVar2 == -3) {
                return 0;
            }
            iVar2 = this_00->GetStatus();
            if (iVar2 == 1403) {
                return 4294967295;
            }
            iVar2 = this_00->GetStatus();
            if (iVar2 == 1402) {
                return 4294967294;
            }
        }
        return 4294967295;
    }

    // 0x100121c80, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LoginManager::SetAuthenticatorUserHash(int)
    /* game::TcpConnectionMessageBase::SetEndPosition(int) */

    void game::TcpConnectionMessageBase::SetEndPosition(int param_1) {
        m_endPosition = param_1;
    }

    // 0x100121c90, 16 bytes, inline, placed by class name
    // LoginManager::PrepareFederatedLogin()
    void LoginManager::PrepareFederatedLogin() {
        field_0 = 7;
    }

    // 0x100121ca0, 48 bytes, inline, placed by class name
    // LoginManager::GetJagexWebAuthResult()
    undefined8 LoginManager::GetJagexWebAuthResult() {
        GameToken* this_00;

        if (m_pAuthWrapper == (AuthLibWrapper*)0) {
            return 4294967295;
        }
        this_00 = (GameToken*)(*(code*)m_pAuthWrapper->field_0[6])();
        return this_00->GetStatus();
    }

    // 0x100121cd0, 48 bytes, inline, placed by class name
    // LoginManager::SetJagexWebAuthResult(jag::auth::AuthSDKTokenResponse)
    void LoginManager::SetJagexWebAuthResult(undefined4 param_2) {
        GameToken* pGVar1;

        pGVar1 = (GameToken*)(*(code*)m_pAuthWrapper->field_0[6])();
        pGVar1->Reset(param_2);
    }

    // 0x100123cf0, 176 bytes, inline, placed by class name
    // LoginManager::SetThirdPartySignInResult(auth::ThirdPartySignInResult)
    void LoginManager::SetThirdPartySignInResult(undefined4 param_2) {
        GameToken* pGVar1;
        undefined8 uVar2;

        switch (param_2) {
        case 1:
            /* WARNING: Subroutine does not return */
            LogAssert(
                "signInResult != ThirdPartySignInResult::SUCCESS",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/LoginManager.h",
                153, (char*)0);
        case 4294967292:
        case 0:
            pGVar1 = (GameToken*)(*(code*)m_pAuthWrapper->field_0[6])();
            uVar2 = 4294967294;
            break;
        case 4294967293:
            pGVar1 = (GameToken*)(*(code*)m_pAuthWrapper->field_0[6])();
            uVar2 = 1404;
            break;
        case 4294967294:
            pGVar1 = (GameToken*)(*(code*)m_pAuthWrapper->field_0[6])();
            uVar2 = 1402;
            break;
        case 4294967295:
            pGVar1 = (GameToken*)(*(code*)m_pAuthWrapper->field_0[6])();
            uVar2 = 4294967295;
            break;
        default:
            return;
        }
        pGVar1->Reset(uVar2);
    }

    // 0x100123da0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LoginManager::GetDevCredentialsFilename()
    /* jag::graphics::SceneViewData::GetRenderTargets() const */

    undefined1* jag::graphics::SceneViewData::GetRenderTargets() {
        return &field_368;
    }

    // 0x10013cc90, 16 bytes, complete-object destructor, inline, placed by class name
    // LoginManager::~LoginManager(): jumps straight to the base-object destructor

    // 0x10013cca0, 64 bytes, base-object destructor, inline, placed by class name
    // LoginManager::~LoginManager()
    void LoginManager::~LoginManager() {
        (&field_368)->~pair();
        (&field_64)->~pair();
        (&field_8)->~basic_string();
    }

} // namespace jag::oldscape

namespace jag::game {
    // 0x100121c80: the linker folded this into oldscape::LoginManager::SetAuthenticatorUserHash(int), which has identical code
    TcpConnectionMessageBase::SetEndPosition(int);

} // namespace jag::game
