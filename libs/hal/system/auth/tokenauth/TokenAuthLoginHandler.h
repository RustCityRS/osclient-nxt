// libs/hal/system/auth/tokenauth/TokenAuthLoginHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::auth {
    class TokenAuthLoginHandler {
    public:
        int GetTokenAuthLoginState();
        bool IsFinished(TokenAuthLoginState);
        ~TokenAuthLoginHandler();
        GetToken();
        IsSteamTwoFactorAuthEnabled();
        TokenAuthLoginHandler(std::unique_ptr<Steam, std::default_delete<Steam>> const&, eastl::string&, int);
        void MainLogic();
        void InitiateLoginRequest();
        void HandleLoginRequestResponse();
        void Init(AuthAccountHint, SocialLoginPartners);
        void ResetRequestState();
        void SetGameTokenCredentials(eastl::string const&);
        char* GetSocialProvider();
        GetLoginHint();
        static /* 8 bytes */ ENDPOINT_INITIATE_AUTH;         // = "v1/social/auth"
        static /* 8 bytes */ JSON_SOCIALPROVIDER;            // = "socialProvider"
        static /* 8 bytes */ JSON_ACCOUNTHINT;               // = "accountHint"
        static /* 8 bytes */ JSON_PARAMS;                    // = "parameters"
        static /* 8 bytes */ JSON_PARAMS_SESSIONTICKET;      // = "sessionTicket"
        static /* 8 bytes */ JSON_PARAMS_APPID;              // = "appId"
        static /* 8 bytes */ JSON_PARAMS_LANGUAGE;           // = "clientLanguageCode"
        static /* 8 bytes */ ACCOUNT_HINT_NEW;               // = "NEW"
        static /* 8 bytes */ ACCOUNT_HINT_EXISTING;          // = "EXISTING"
        static /* 8 bytes */ ACCOUNT_HINT_CHECK;             // = "CHECK"
        static /* 8 bytes */ SOCIAL_CHALLENGE_ERROR;         // = "SOCIAL_CHALLENGE_ERROR"
        static /* 8 bytes */ SOCIAL_ACCOUNT_NOT_LINKED;      // = "SOCIAL_ACCOUNT_NOT_LINKED"
        static /* 8 bytes */ SOCIAL_PROVIDER_NOT_SUPPORTED;  // = "SOCIAL_PROVIDER_NOT_SUPPORTED"
        static /* 8 bytes */ JSON_SOCIAL_AUTH_RESPONSE_AUTH; // = "authCode"
        static /* 8 bytes */ JSON_ERROR_ID;                  // = "id"
        static /* 8 bytes */ JSON_ERROR_SPANID;              // = "spanId"
        static /* 8 bytes */ JSON_ERROR_TRACEID;             // = "traceId"
        static /* 8 bytes */ JSON_ERROR_STATUS;              // = "status"
        static /* 8 bytes */ JSON_ERROR_CODE;                // = "code"
        static /* 8 bytes */ JSON_ERROR_MESSAGE;             // = "message"

        // data members, from how the methods use this: 128 bytes
        int m_tokenAuthLoginState; // offset 0
        int field_4;               // offset 4
        char _unknown_8[104];
        int field_112;         // offset 112
        undefined4 field_116;  // offset 116
        unique_ptr* field_120; // offset 120
    };

    // 0x100120430, 16 bytes, inline, placed by class name and debug map
    // TokenAuthLoginHandler::IsFinished(TokenAuthLoginState)
    bool TokenAuthLoginHandler::IsFinished(int param_1) {
        return 19 < param_1;
    }

    // 0x10014d8d0, 16 bytes, complete-object destructor, inline, placed by class name
    // TokenAuthLoginHandler::~TokenAuthLoginHandler(): jumps straight to the base-object destructor

    // 0x10014d8e0, 64 bytes, base-object destructor, inline, placed by class name
    // TokenAuthLoginHandler::~TokenAuthLoginHandler()
    void TokenAuthLoginHandler::~TokenAuthLoginHandler() {
        (&field_104)->~unique_ptr();
        (&field_72)->~basic_string();
        (&field_40)->~basic_string();
        (&field_8)->~basic_string();
    }

    // 0x100391050, 144 bytes, inline, placed by class name
    // TokenAuthLoginHandler::GetToken()
    TokenAuthLoginHandler* TokenAuthLoginHandler::GetToken() {
        uint* in_RSI;

        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() !=
            '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_currentGameToken.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/tokenauth/"
                      "TokenAuthLoginHandler.h",
                      161, "Error - Tried to fetch an empty game token! (Current state: %i)", (ulong)*in_RSI);
        }
        new (this) eastl::string((basic_string*)(in_RSI + 18));
        ((in_RSI + 18))->assign("");
        *in_RSI = 0;
        return this;
    }

    // 0x100397f10, 96 bytes, inline, placed by class name
    // TokenAuthLoginHandler::IsSteamTwoFactorAuthEnabled()
    undefined8 TokenAuthLoginHandler::IsSteamTwoFactorAuthEnabled() {
        Steam* pSVar2;
        unique_ptr* this_00;
        unique_ptr<SteamAuth, std::default_delete<SteamAuth>>* this_01;
        undefined8 uVar3;

        pSVar2 = (Steam*)std::unique_ptr<Steam, std::default_delete<Steam>>::operator->(
            (unique_ptr<Steam, std::default_delete<Steam>>*)field_120);
        this_00 = (unique_ptr*)pSVar2->GetSteamAuthModule();
        if (std::unique_ptr::operator_cast_to_bool(this_00)) {
            pSVar2 = (Steam*)std::unique_ptr<Steam, std::default_delete<Steam>>::operator->(
                (unique_ptr<Steam, std::default_delete<Steam>>*)field_120);
            this_01 = (unique_ptr<SteamAuth, std::default_delete<SteamAuth>>*)pSVar2->GetSteamAuthModule();
            std::unique_ptr<SteamAuth, std::default_delete<SteamAuth>>::operator->(this_01);
            uVar3 = SteamAuth::IsTwoFactorAuthEnabled();
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x1003b2a90, 64 bytes, inline, placed by class name
    // TokenAuthLoginHandler::ResetRequestState()
    void TokenAuthLoginHandler::ResetRequestState() {
        HTTPRequest* this_00;

        m_tokenAuthLoginState = 0;
        if ((&field_104)->operator_cast_to_bool()) {
            this_00 =
                (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)&field_104);
            this_00->Abort();
        }
    }

    // 0x1003b2ad0, 16 bytes, inline, placed by class name
    // TokenAuthLoginHandler::SetGameTokenCredentials(eastl::string const&)
    void TokenAuthLoginHandler::SetGameTokenCredentials(basic_string* param_1) {
        eastl::string::operator=((eastl::string*)&field_72, param_1);
    }

    // 0x1003b2af0, 16 bytes, inline, placed by class name
    // TokenAuthLoginHandler::GetSocialProvider()
    char* TokenAuthLoginHandler::GetSocialProvider() {
        return "steam";
    }

} // namespace jag::auth
