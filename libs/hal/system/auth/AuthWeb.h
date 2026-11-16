// libs/hal/system/auth/AuthWeb.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::auth {
    class AuthWeb {
    public:
        AuthWeb();
        void Init(eastl::string const&, eastl::string const&, eastl::string const&, eastl::string const&,
                  eastl::string const&, eastl::string const&, eastl::string const&);
        void MainLogic();
        void DecodeOAuth2AccessTokenCheckResponse();
        void DecodeOAuth2TokenRequestResponse();
        void DecodeGameTokenRequestResponse();
        void DecodeRefreshOAuth2TokensResponse();
        void DecodeRevokeOAuth2TokensResponse();
        void InitiateRequest(ActionRequest);
        bool IsAccessTokenExpiryUnknown() const;
        void RequestAccessTokenCheck();
        HasAccessTokenExpired() const;
        void RequestRefreshOAuth2Tokens();
        void PerformQueuedAction();
        void RequestGameToken_OAuth2();
        void SetGameTokenCredentials(eastl::string const&, AuthSDKTokenResponse);
        void ConstructAuthorisationHeader(eastl::string&, eastl::string const&, eastl::string const&);
        void SetOAuthAccessTokenExpiryTime(unsigned long long);
        void RequestRevokeOAuth2Tokens();
        void SetOAuthTokenCredentials(eastl::string const&, eastl::string const&, unsigned long long);
        void RequestGameToken_GameSession();
        bool HasGameSessionCredentials() const;
        void HasOAuth2TokenPair() const;
        void RequestOAuth2Tokens(eastl::string const&, eastl::string const&, eastl::string const&,
                                 eastl::string const&);
        ~AuthWeb();
        AuthWeb* operator=(AuthWeb&&);
        void SetGameSessionCredentials(eastl::string const&, eastl::string const&);
        void ResetRequestState();
        void InvalidateRefreshToken();
        GetOAuthAccessTokenExpiryTime();
        GetToken();
        GetGameTokenRequestResultCode() const;
        bool IsStillRequestingOAuth2Tokens() const;

        // data members, from how the methods use this: 360 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[12];
        GameTokenResult field_16; // offset 16
        char _unknown_56[64];
        ulonglong m_oAuthAccessTokenExpiryTime; // offset 120
        char _unknown_128[224];
        uint field_352; // offset 352
        char _unknown_356[4];
    };

    class GameSessionTokenCredentials {
    public:
        ~GameSessionTokenCredentials();
        DisplayName* operator=(GameSessionTokenCredentials&&);
        GameSessionTokenCredentials();

        // data members, from how the methods use this: 40 bytes
        char _unknown_0[40];
    };

    class JagexConfig {
    public:
        ~JagexConfig();
        JagexConfig();
        JagexConfig* operator=(JagexConfig&&);

        // data members, from how the methods use this: 136 bytes
        char _unknown_0[136];
    };

    // 0x1003ae070, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // GameSessionTokenCredentials::GameSessionTokenCredentials(): jumps straight to the base-object constructor

    // 0x1003ae080, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // JagexConfig::JagexConfig(): jumps straight to the base-object constructor

    // 0x1003ae1c0, 96 bytes, inline, placed by class header (inline)
    // JagexConfig::operator=(JagexConfig&&)
    /* JagexConfig::TEMPNAMEPLACEHOLDERVALUE(JagexConfig&&) */

    JagexConfig* JagexConfig::operator=(JagexConfig* param_1) {
        eastl::string::operator=((eastl::string*)this, (basic_string*)param_1);
        eastl::string::operator=((eastl::string*)&field_32, (basic_string*)&param_1->field_32);
        eastl::string::operator=((eastl::string*)&field_64, (basic_string*)&param_1->field_64);
        eastl::string::operator=((eastl::string*)&field_96, (basic_string*)&param_1->field_96);
        eastl::string::operator=((eastl::string*)&field_128, (basic_string*)&param_1->field_128);
        return this;
    }

    // 0x1003ae220, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // JagexConfig::~JagexConfig(): jumps straight to the base-object destructor

    // 0x1003aefb0, 16 bytes, inline, placed by class name
    // AuthWeb::IsAccessTokenExpiryUnknown() const
    bool AuthWeb::IsAccessTokenExpiryUnknown() {
        return m_oAuthAccessTokenExpiryTime == 0;
    }

    // 0x1003af210, 32 bytes, inline, placed by class name
    // AuthWeb::HasAccessTokenExpired() const
    undefined8 AuthWeb::HasAccessTokenExpired() {
        ulonglong uVar1;

        uVar1 = SystemTimer::GetTimeSecs<std::chrono::system_clock>((SystemTimer*)this);
        return CONCAT71((int7)(uVar1 + 60 >> 8), m_oAuthAccessTokenExpiryTime < uVar1 + 60);
    }

    // 0x1003af780, 32 bytes, inline, placed by class name
    // AuthWeb::SetGameTokenCredentials(eastl::string const&, AuthSDKTokenResponse)
    void AuthWeb::SetGameTokenCredentials(basic_string* param_1, undefined4 param_3) {
        eastl::string::operator=((eastl::string*)field_16, param_1);
        *(undefined4*)(field_16 + 32) = param_3;
    }

    // 0x1003afa80, 16 bytes, inline, placed by class name
    // AuthWeb::SetOAuthAccessTokenExpiryTime(unsigned long long)
    void AuthWeb::SetOAuthAccessTokenExpiryTime(ulonglong param_1) {
        m_oAuthAccessTokenExpiryTime = param_1;
    }

    // 0x1003afcf0, 48 bytes, inline, placed by class name
    // AuthWeb::SetOAuthTokenCredentials(eastl::string const&, eastl::string const&, unsigned long long)
    void AuthWeb::SetOAuthTokenCredentials(basic_string* param_1, basic_string* param_2, ulonglong param_3) {
        m_oAuthAccessTokenExpiryTime = param_3;
        eastl::string::operator=((eastl::string*)&field_56, param_1);
        eastl::string::operator=((eastl::string*)&field_88, param_2);
    }

    // 0x1003b0010, 80 bytes, inline, placed by class name
    // AuthWeb::HasGameSessionCredentials() const
    bool AuthWeb::HasGameSessionCredentials() {
        bool bVar1;

        bVar1 = eastl::operator!=((basic_string*)&field_128, (value_type*)"");
        if (bVar1) {
            bVar1 = eastl::operator!=((basic_string*)&field_160, (value_type*)"");
        } else {
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x1003b0070, 80 bytes, inline, placed by class name
    // AuthWeb::HasOAuth2TokenPair() const
    void AuthWeb::HasOAuth2TokenPair() {
        if (field_0 == 2) {
            /* WARNING: Subroutine does not return */
            LogAssert("!(m_requestStatus == WAITING_INITIAL_OATH2TOKENS_RESPONSE)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.h",
                      276, "If we\'re still trying to resolve the request, something has probably gone wrong!");
        }
        eastl::operator!=((basic_string*)&field_56, (value_type*)"");
    }

    // 0x1003b0720, 16 bytes, complete-object destructor, inline, placed by class name
    // AuthWeb::~AuthWeb(): jumps straight to the base-object destructor

    // 0x1003b07d0, 128 bytes, inline, placed by class name
    // AuthWeb::operator=(AuthWeb&&)
    /* AuthWeb::TEMPNAMEPLACEHOLDERVALUE(AuthWeb&&) */

    AuthWeb* AuthWeb::operator=(AuthWeb* param_1) {
        field_0 = param_1->field_0;
        std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator=(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)&field_8,
            (unique_ptr*)&param_1->field_8);
        GameTokenResult::operator=((GameTokenResult*)field_16, (GameTokenResult*)param_1->field_16);
        OAuth2TokenPair::operator=((OAuth2TokenPair*)&field_56, (OAuth2TokenPair*)&param_1->field_56);
        oldscape::rs2lib::social::DisplayName::operator=((DisplayName*)&field_128, (DisplayName*)&param_1->field_128);
        JagexConfig::operator=((JagexConfig*)&field_192, (JagexConfig*)&param_1->field_192);
        field_352 = param_1->field_352;
        return this;
    }

    // 0x1003b0970, 48 bytes, inline, placed by class name
    // AuthWeb::SetGameSessionCredentials(eastl::string const&, eastl::string const&)
    void AuthWeb::SetGameSessionCredentials(basic_string* param_1, basic_string* param_2) {
        eastl::string::operator=((eastl::string*)&field_128, param_1);
        eastl::string::operator=((eastl::string*)&field_160, param_2);
    }

    // 0x1003b0a20, 64 bytes, inline, placed by class name
    // AuthWeb::ResetRequestState()
    void AuthWeb::ResetRequestState() {
        HTTPRequest* this_00;

        field_0 = 0;
        if ((&field_8)->operator_cast_to_bool()) {
            this_00 =
                (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)&field_8);
            this_00->Abort();
        }
    }

    // 0x1003b0aa0, 32 bytes, inline, placed by class name
    // AuthWeb::InvalidateRefreshToken()
    void AuthWeb::InvalidateRefreshToken() {
        (&field_88, "INVALID")->assign();
    }

    // 0x1003b0ae0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // AuthWeb::GetOAuthAccessTokenExpiryTime()
    /* render::InputAssemblerState::GetIndexBuffer() const */

    BufferInterface* render::InputAssemblerState::GetIndexBuffer() {
        return m_pIndexBuffer;
    }

    // 0x1003b0b30, 192 bytes, inline, placed by class name
    // AuthWeb::GetToken()
    AuthWeb* AuthWeb::GetToken() {
        long in_RSI;
        eastl::string local_40[32];
        allocator local_20[8];

        if (*(int*)(in_RSI + 48) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_currentGameToken.m_resultCode == auth::AuthSDKTokenResponse::SUCCESS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.h",
                      231, "Error - Tried to fetch a game token in a non-ready state! (Current state: %i)");
        }
        new (this) eastl::string((basic_string*)(in_RSI + 16));
        eastl::allocator::allocator(local_20, "EASTL basic_string");
        eastl::string::basic_string(local_40, "", local_20);
        SetGameTokenCredentials();
        eastl::string::~basic_string(local_40);
        return this;
    }

    // 0x1003b0c10, 80 bytes, inline, placed by class name
    // AuthWeb::GetGameTokenRequestResultCode() const
    undefined4 AuthWeb::GetGameTokenRequestResultCode() {
        if ((field_0 == 0) && (*(int*)(field_16 + 32) == -2)) {
            /* WARNING: Subroutine does not return */
            LogAssert("!(m_requestStatus == AuthWebRequestState::AUTH_IDLE && m_currentGameToken.m_resultCode == "
                      "auth::AuthSDKTokenResponse::RESULT_NOT_READY)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.h",
                      207, "Error - Checking state of GameToken, but no http request was made to get one!");
        }
        return *(undefined4*)(field_16 + 32);
    }

    // 0x1003b0cb0, 16 bytes, inline, placed by class name
    // AuthWeb::IsStillRequestingOAuth2Tokens() const
    bool AuthWeb::IsStillRequestingOAuth2Tokens() {
        return field_0 == 2;
    }

    // 0x1003b3150, 80 bytes, base-object destructor, inline, placed by class name
    // AuthWeb::~AuthWeb()
    void AuthWeb::~AuthWeb() {
        (&field_192)->~ConnectionSettings();
        (&field_128)->~pair();
        (&field_56)->~pair();
        field_16->~hash_node();
        (&field_8)->~unique_ptr();
    }

} // namespace jag::auth
