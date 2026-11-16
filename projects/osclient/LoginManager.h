// projects/osclient/LoginManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape {
    class LoginManager {
    public:
        uint8_t* GetDevCredentialsOutputDirectory();
        void SetDevCredentialsOutputDirectory(const Filename& filename);
        void SetDevCredentialsFilename(const Filename& filename);
        bool IsUsingJagexLauncher() const;
        AuthLibWrapper* GetAuthWrapper();
        uint64_t GetThirdPartySignInResult() const;
        void SetAuthenticatorUserHash(int arg1);
        void PrepareFederatedLogin();
        uint64_t GetJagexWebAuthResult();
        void SetJagexWebAuthResult(jag::auth::AuthSDKTokenResponse authSDKTokenResponse);
        void SetThirdPartySignInResult(auth::ThirdPartySignInResult thirdPartySignInResult);
        uint8_t* GetDevCredentialsFilename();
        ~LoginManager();
        LoginManager(auth::AuthLibWrapper* authLibWrapper);
        void ProcessLauncherCredentials();
        bool IsOneTimeLoginTokenRequested() const;
        bool IsGameTokenLogin() const;
        bool IsRefreshTokenAvailable() const;
        uint32_t GetAuthenticatorUserHash() const;
        void PreparePasswordLogin(const eastl::string& str, bool arg2);
        void PreparePasswordLogin(const eastl::string& str, LoginMode loginMode);
        void PreparePasswordLoginForTokenOnlyRequest(const eastl::string& str);
        void ResetLoginCredentials();
        unsigned int GetAuthenticatorUserHashFromTitleScreen() const;
        void SaveDevCredentialsToFile() const;
        void PrepareGameTokenLogin(bool arg1);
        void InvalidateRefreshToken();
        void PackLoginRSAData(PacketJ<Array<unsigned char>>& packetJ);
        uint64_t GetFederatedSignInResult() const;
        void ClearFederatedSignInResult();

    private:
        LoginMode field_0;
        uint8_t _unknown_4[36];
        uint32_t m_authenticatorUserHash;
        uint8_t _unknown_44[4];
        AuthLibWrapper* m_pAuthWrapper;
        uint16_t field_56;
        uint8_t _unknown_58[318];
    };

    // 0x1000c5ec0
    void LoginManager::SetDevCredentialsOutputDirectory(const Filename& filename) {
        field_64 = filename;
    }

    // 0x1000c5ed0
    void LoginManager::SetDevCredentialsFilename(const Filename& filename) {
        field_368 = filename;
    }

    // 0x1000df780
    bool LoginManager::IsUsingJagexLauncher() const {
        return *(uint8_t*)((long)&field_56 + 1);
    }

    // 0x100121bf0
    uint64_t LoginManager::GetThirdPartySignInResult() const {
        if (m_pAuthWrapper != nullptr) {
            (*m_pAuthWrapper->_vptr[3]._dtor)();
        }
        return 4294967295;
    }

    // 0x100121c80
    void LoginManager::SetAuthenticatorUserHash(int arg1) {
        m_endPosition = arg1;
    }

    // 0x100121c90
    void LoginManager::PrepareFederatedLogin() {
        field_0 = 7;
    }

    // 0x100121ca0
    uint64_t LoginManager::GetJagexWebAuthResult() {
        if (m_pAuthWrapper != nullptr) {
            (*m_pAuthWrapper->_vptr[3]._dtor)();
        }
        return 4294967295;
    }

    // 0x100121cd0
    void LoginManager::SetJagexWebAuthResult(jag::auth::AuthSDKTokenResponse authSDKTokenResponse) {
        (*m_pAuthWrapper->_vptr[3]._dtor)();
    }

    // 0x100123cf0
    void LoginManager::SetThirdPartySignInResult(auth::ThirdPartySignInResult thirdPartySignInResult) {
        switch (thirdPartySignInResult) {
        case 1:
            LogAssert(
                "signInResult != ThirdPartySignInResult::SUCCESS",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/LoginManager.h",
                153, nullptr);
        case 4294967292:
        case 0:
            (*m_pAuthWrapper->_vptr[3]._dtor)();
        case 4294967293:
            (*m_pAuthWrapper->_vptr[3]._dtor)();
        case 4294967294:
            (*m_pAuthWrapper->_vptr[3]._dtor)();
        case 4294967295:
            (*m_pAuthWrapper->_vptr[3]._dtor)();
        default:
            return;
        }
    }

    // 0x100123da0
    uint8_t* LoginManager::GetDevCredentialsFilename() {
        return &field_368;
    }

    // 0x10013cca0
    LoginManager::~LoginManager() {
        field_368.~pair();
        field_64.~pair();
        field_8.~basic_string();
    }

} // namespace jag::oldscape

namespace jag::game {
    // 0x100121c80: TcpConnectionMessageBase::SetEndPosition(int) has the same machine code as oldscape::LoginManager::SetAuthenticatorUserHash(int)

} // namespace jag::game
