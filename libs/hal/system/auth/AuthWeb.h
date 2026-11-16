// libs/hal/system/auth/AuthWeb.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::auth {
    class AuthWeb {
    public:
        AuthWeb();
        void Init(const eastl::string& str1, const eastl::string& str2, const eastl::string& str3,
                  const eastl::string& str4, const eastl::string& str5, const eastl::string& str6,
                  const eastl::string& str7);
        void MainLogic();
        void DecodeOAuth2AccessTokenCheckResponse();
        void DecodeOAuth2TokenRequestResponse();
        void DecodeGameTokenRequestResponse();
        void DecodeRefreshOAuth2TokensResponse();
        void DecodeRevokeOAuth2TokensResponse();
        void InitiateRequest(ActionRequest actionRequest);
        bool IsAccessTokenExpiryUnknown() const;
        void RequestAccessTokenCheck();
        bool HasAccessTokenExpired() const;
        void RequestRefreshOAuth2Tokens();
        void PerformQueuedAction();
        void RequestGameToken_OAuth2();
        void SetGameTokenCredentials(const eastl::string& str, AuthSDKTokenResponse authSDKTokenResponse);
        void ConstructAuthorisationHeader(eastl::string& str1, const eastl::string& str2, const eastl::string& str3);
        void SetOAuthAccessTokenExpiryTime(unsigned long long arg1);
        void RequestRevokeOAuth2Tokens();
        void SetOAuthTokenCredentials(const eastl::string& str1, const eastl::string& str2, unsigned long long arg3);
        void RequestGameToken_GameSession();
        bool HasGameSessionCredentials() const;
        void HasOAuth2TokenPair() const;
        void RequestOAuth2Tokens(const eastl::string& str1, const eastl::string& str2, const eastl::string& str3,
                                 const eastl::string& str4);
        ~AuthWeb();
        AuthWeb* operator=(AuthWeb&& authWeb);
        void SetGameSessionCredentials(const eastl::string& str1, const eastl::string& str2);
        void ResetRequestState();
        void InvalidateRefreshToken();
        unsigned long long GetOAuthAccessTokenExpiryTime();
        auto GetToken();
        uint32_t GetGameTokenRequestResultCode() const;
        bool IsStillRequestingOAuth2Tokens() const;

    private:
        uint32_t field_0;
        uint8_t _unknown_4[12];
        GameTokenResult field_16;
        uint8_t _unknown_56[64];
        unsigned long long m_pOAuthAccessTokenExpiryTime;
        uint8_t _unknown_128[224];
        ActionRequest field_352;
        uint8_t _unknown_356[4];
    };

    class GameSessionTokenCredentials {
    public:
        ~GameSessionTokenCredentials();
        DisplayName* operator=(GameSessionTokenCredentials&& consoleCommandHelp);
        GameSessionTokenCredentials();

        uint8_t _unknown_0[40];
    };

    class JagexConfig {
    public:
        ~JagexConfig();
        JagexConfig();
        JagexConfig* operator=(JagexConfig&& jagexConfig);

        uint8_t _unknown_0[136];
    };

    // 0x1003ae1c0
    JagexConfig* JagexConfig::operator=(JagexConfig&& jagexConfig) {
        *this = jagexConfig;
        field_32 = &jagexConfig.field_32;
        field_64 = &jagexConfig.field_64;
        field_96 = &jagexConfig.field_96;
        field_128 = &jagexConfig.field_128;
        return this;
    }

    // 0x1003aefb0
    bool AuthWeb::IsAccessTokenExpiryUnknown() const {
        return m_pOAuthAccessTokenExpiryTime == 0;
    }

    // 0x1003af210
    bool AuthWeb::HasAccessTokenExpired() const {
        unsigned long long uVar1 = SystemTimer::GetTimeSecs<std::chrono::system_clock>();
        return m_pOAuthAccessTokenExpiryTime < uVar1 + 60;
    }

    // 0x1003af780
    void AuthWeb::SetGameTokenCredentials(const eastl::string& str, AuthSDKTokenResponse authSDKTokenResponse) {
        *field_16 = str;
        *(AuthSDKTokenResponse*)(field_16 + 32) = authSDKTokenResponse;
    }

    // 0x1003afa80
    void AuthWeb::SetOAuthAccessTokenExpiryTime(unsigned long long arg1) {
        m_pOAuthAccessTokenExpiryTime = arg1;
    }

    // 0x1003afcf0
    void AuthWeb::SetOAuthTokenCredentials(const eastl::string& str1, const eastl::string& str2,
                                           unsigned long long arg3) {
        m_pOAuthAccessTokenExpiryTime = arg3;
        field_56 = str1;
        field_88 = str2;
    }

    // 0x1003b0010
    bool AuthWeb::HasGameSessionCredentials() const {
        bool bVar1 = field_128 != (*((value_type*)""));
        if (bVar1) {
            bVar1 = field_160 != (*((value_type*)""));
        } else {
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x1003b0070
    void AuthWeb::HasOAuth2TokenPair() const {
        if (field_0 == 2) {
            LogAssert("!(m_requestStatus == WAITING_INITIAL_OATH2TOKENS_RESPONSE)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.h",
                      276, "If we\'re still trying to resolve the request, something has probably gone wrong!");
        }
        field_56 != (*((value_type*)""));
    }

    // 0x1003b07d0
    AuthWeb* AuthWeb::operator=(AuthWeb&& authWeb) {
        field_0 = authWeb.field_0;
        field_8 = &authWeb.field_8;
        *field_16 = authWeb.field_16;
        field_56 = authWeb.field_56;
        field_128 = authWeb.field_128;
        field_192 = authWeb.field_192;
        field_352 = authWeb.field_352;
        return this;
    }

    // 0x1003b0970
    void AuthWeb::SetGameSessionCredentials(const eastl::string& str1, const eastl::string& str2) {
        field_128 = str1;
        field_160 = str2;
    }

    // 0x1003b0a20
    void AuthWeb::ResetRequestState() {
        field_0 = 0;
        if ((&field_8)->operator_cast_to_bool() != '\0') {
            ((HTTPRequest*)field_8.operator->())->Abort();
        }
    }

    // 0x1003b0aa0
    void AuthWeb::InvalidateRefreshToken() {
        (&field_88)->assign("INVALID");
    }

    // 0x1003b0ae0
    unsigned long long AuthWeb::GetOAuthAccessTokenExpiryTime() {
        return m_pIndexBuffer;
    }

    // 0x1003b0b30
    auto AuthWeb::GetToken() {

        if (*(int*)(field_16 + 32) != 0) {
            LogAssert("m_currentGameToken.m_resultCode == auth::AuthSDKTokenResponse::SUCCESS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.h",
                      231, "Error - Tried to fetch a game token in a non-ready state! (Current state: %i)");
        }
        auto result(*field_16);
        eastl::string local_40("");
        SetGameTokenCredentials(local_40, 4294967294);
        return result;
    }

    // 0x1003b0c10
    uint32_t AuthWeb::GetGameTokenRequestResultCode() const {
        if ((field_0 == 0) && (*(int*)(field_16 + 32) == -2)) {
            LogAssert("!(m_requestStatus == AuthWebRequestState::AUTH_IDLE && m_currentGameToken.m_resultCode == "
                      "auth::AuthSDKTokenResponse::RESULT_NOT_READY)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.h",
                      207, "Error - Checking state of GameToken, but no http request was made to get one!");
        }
        return *(uint32_t*)(field_16 + 32);
    }

    // 0x1003b0cb0
    bool AuthWeb::IsStillRequestingOAuth2Tokens() const {
        return field_0 == 2;
    }

    // 0x1003b3150
    AuthWeb::~AuthWeb() {
        field_192.~ConnectionSettings();
        field_128.~pair();
        field_56.~pair();
        field_16->~hash_node();
        field_8.~unique_ptr();
    }

} // namespace jag::auth
