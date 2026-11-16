// libs/hal/system/auth/tokenauth/TokenAuthLoginHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::auth {
    class TokenAuthLoginHandler {
    public:
        unsigned int GetTokenAuthLoginState();
        bool IsFinished(TokenAuthLoginState tokenAuthLoginState);
        ~TokenAuthLoginHandler();
        auto GetToken();
        bool IsSteamTwoFactorAuthEnabled();
        TokenAuthLoginHandler(const std::unique_ptr<Steam>& steam, eastl::string& str, int arg3);
        void MainLogic();
        void InitiateLoginRequest();
        void HandleLoginRequestResponse();
        void Init(AuthAccountHint authAccountHint, SocialLoginPartners socialLoginPartners);
        void ResetRequestState();
        void SetGameTokenCredentials(const eastl::string& str);
        char* GetSocialProvider();
        uint8_t* GetLoginHint();
        static const char* ENDPOINT_INITIATE_AUTH;         // = "v1/social/auth"
        static const char* JSON_SOCIALPROVIDER;            // = "socialProvider"
        static const char* JSON_ACCOUNTHINT;               // = "accountHint"
        static const char* JSON_PARAMS;                    // = "parameters"
        static const char* JSON_PARAMS_SESSIONTICKET;      // = "sessionTicket"
        static const char* JSON_PARAMS_APPID;              // = "appId"
        static const char* JSON_PARAMS_LANGUAGE;           // = "clientLanguageCode"
        static const char* ACCOUNT_HINT_NEW;               // = "NEW"
        static const char* ACCOUNT_HINT_EXISTING;          // = "EXISTING"
        static const char* ACCOUNT_HINT_CHECK;             // = "CHECK"
        static const char* SOCIAL_CHALLENGE_ERROR;         // = "SOCIAL_CHALLENGE_ERROR"
        static const char* SOCIAL_ACCOUNT_NOT_LINKED;      // = "SOCIAL_ACCOUNT_NOT_LINKED"
        static const char* SOCIAL_PROVIDER_NOT_SUPPORTED;  // = "SOCIAL_PROVIDER_NOT_SUPPORTED"
        static const char* JSON_SOCIAL_AUTH_RESPONSE_AUTH; // = "authCode"
        static const char* JSON_ERROR_ID;                  // = "id"
        static const char* JSON_ERROR_SPANID;              // = "spanId"
        static const char* JSON_ERROR_TRACEID;             // = "traceId"
        static const char* JSON_ERROR_STATUS;              // = "status"
        static const char* JSON_ERROR_CODE;                // = "code"
        static const char* JSON_ERROR_MESSAGE;             // = "message"

    private:
        unsigned int m_tokenAuthLoginState;
        unsigned int field_4;
        uint8_t _unknown_8[104];
        AuthAccountHint field_112;
        uint32_t field_116;
        unique_ptr<Steam>* field_120;
    };

    // 0x100120430
    bool TokenAuthLoginHandler::IsFinished(TokenAuthLoginState tokenAuthLoginState) {
        return 19 < (int)tokenAuthLoginState;
    }

    // 0x10014d8e0
    TokenAuthLoginHandler::~TokenAuthLoginHandler() {
        field_104.~unique_ptr();
        field_72.~basic_string();
        field_40.~basic_string();
        field_8.~basic_string();
    }

    // 0x100391050
    auto TokenAuthLoginHandler::GetToken() {
        uint8_t* this_00 = &field_72;
        if (this_00->empty() != '\0') {
            LogAssert("!m_currentGameToken.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/tokenauth/"
                      "TokenAuthLoginHandler.h",
                      161, "Error - Tried to fetch an empty game token! (Current state: %i)",
                      (unsigned long)m_tokenAuthLoginState);
        }
        auto result(*this_00);
        this_00->assign("");
        m_tokenAuthLoginState = 0;
        return result;
    }

    // 0x100397f10
    bool TokenAuthLoginHandler::IsSteamTwoFactorAuthEnabled() {
        uint64_t uVar4;

        Steam* pSVar2 = (Steam*)(*field_120).operator->();
        auto puVar3 = pSVar2->GetSteamAuthModule();
        if (puVar3->operator_cast_to_bool() == '\0') {
            uVar4 = 0;
        } else {
            pSVar2 = (Steam*)(*field_120).operator->();
            puVar3 = pSVar2->GetSteamAuthModule();
            (*puVar3).operator->();
            uVar4 = SteamAuth::IsTwoFactorAuthEnabled();
        }
        return uVar4;
    }

    // 0x1003b2a90
    void TokenAuthLoginHandler::ResetRequestState() {
        m_tokenAuthLoginState = 0;
        if ((&field_104)->operator_cast_to_bool() != '\0') {
            ((HTTPRequest*)field_104.operator->())->Abort();
        }
    }

    // 0x1003b2ad0
    void TokenAuthLoginHandler::SetGameTokenCredentials(const eastl::string& str) {
        field_72 = str;
    }

    // 0x1003b2af0
    char* TokenAuthLoginHandler::GetSocialProvider() {
        return "steam";
    }

} // namespace jag::auth
