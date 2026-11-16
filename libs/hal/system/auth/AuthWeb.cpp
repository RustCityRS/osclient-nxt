// libs/hal/system/auth/AuthWeb.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.auth

#include "AuthWeb.h"

namespace jag::auth {
    // 0x1003adf90
    AuthWeb::AuthWeb() : field_0(0) {
        field_8.unique_ptr<true, void>();
        new (field_16) GameTokenResult();
        new (&field_56) OAuth2TokenPair();
        new (&field_128) GameSessionTokenCredentials();
        new (&field_192) JagexConfig();
        field_352 = 0;
    }

    // 0x1003ae0b0
    void AuthWeb::Init(const eastl::string& str1, const eastl::string& str2, const eastl::string& str3,
                       const eastl::string& str4, const eastl::string& str5, const eastl::string& str6,
                       const eastl::string& str7) {
        uint64_t local_58 = 0;
        uint64_t uStack_50 = 0;
        local_e8._128_8_ = 0;
        uint64_t uStack_60 = 0;
        local_e8._112_8_ = 0;
        local_e8._120_8_ = 0;
        local_e8._96_8_ = 0;
        local_e8._104_8_ = 0;
        local_e8._80_8_ = 0;
        local_e8._88_8_ = 0;
        local_e8._64_8_ = 0;
        local_e8._72_8_ = 0;
        local_e8._48_8_ = 0;
        local_e8._56_8_ = 0;
        local_e8._32_8_ = 0;
        local_e8._40_8_ = 0;
        local_e8._16_8_ = 0;
        local_e8._24_8_ = 0;
        local_e8._0_8_ = 0;
        local_e8._8_8_ = 0;
        JagexConfig local_e8;
        field_192 = local_e8;
        field_192 = str1;
        field_224 = str7;
        field_256 = str2;
        field_288 = str3;
        field_320 = str4;
    }

    // 0x1003ae230
    void AuthWeb::MainLogic() {
        switch (field_0) {
        case 1:
            DecodeOAuth2AccessTokenCheckResponse();
            return;
        case 2:
            DecodeOAuth2TokenRequestResponse();
            return;
        case 3:
            DecodeRefreshOAuth2TokensResponse();
            return;
        case 4:
            DecodeRevokeOAuth2TokensResponse();
            break;
        case 5:
            DecodeGameTokenRequestResponse();
            return;
        }
    }

    // 0x1003ae290
    void AuthWeb::DecodeOAuth2AccessTokenCheckResponse() {
        int iVar2;
        unsigned int uVar3;
        TerrainPatch* pTVar5;
        RT7Core* this_01;
        Array<unsigned char>* arg2;
        unsigned long long uVar6;
        uint64_t uVar7;
        Value local_50;

        uint8_t* this_00 = &field_8;
        HTTPRequest* pHVar4 = (HTTPRequest*)(*this_00).operator->();
        if (pHVar4->IsRequestComplete()) {
            field_0 = 0;
            pTVar5 = (TerrainPatch*)(*this_00).operator->();
            iVar2 = pTVar5->GetGridSize();
            if (iVar2 == 200) {
                local_50 = Json::Value(0);
                this_01 = (RT7Core*)(*this_00).operator->();
                arg2 = (Array<unsigned char>*)this_01->GetMSAASampleCount();
                http::DecodeJSONResponseFromArray(local_50, *arg2);
                uVar6 = ((Value*)local_50["exp"])->asInt64();
                SetOAuthAccessTokenExpiryTime(uVar6);
            } else {
                pTVar5 = (TerrainPatch*)(*this_00).operator->();
                iVar2 = pTVar5->GetGridSize();
                if (iVar2 == 400) {
                    uVar6 = SystemTimer::GetTimeSecs<std::chrono::system_clock>();
                    SetOAuthAccessTokenExpiryTime(uVar6);
                } else {
                    pHVar4 = (HTTPRequest*)(*this_00).operator->();
                    if (!(pHVar4->HasTimedOut())) {
                        uVar3 = ((Slider*)(*this_00).operator->())->GetCurrentValue();
                        uVar7 = ((EditLine*)(*this_00).operator->())->GetText();
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "system/auth/AuthWeb.cpp",
                                        239, "Error:(%i) while connecting to : %s", (unsigned long)uVar3, uVar7);
                    }
                    local_50 = eastl::string("");
                    SetGameTokenCredentials(local_50, 4294967292);
                }
            }
            this_00->reset(nullptr);
            if (!(HasAccessTokenExpired())) {
                PerformQueuedAction();
            } else {
                RequestRefreshOAuth2Tokens();
            }
        }
    }

    // 0x1003ae460
    void AuthWeb::DecodeOAuth2TokenRequestResponse() {
        int iVar2;
        unsigned int uVar3;
        TerrainPatch* pTVar5;
        RT7Core* this_01;
        Array<unsigned char>* arg2;
        char* pcVar6;
        Logger* this_02;
        uint64_t uVar7;
        uint64_t uVar8;
        long lVar9;
        unsigned long long uVar10;
        Value local_a8;
        Value local_70;
        eastl::string local_48;

        uint8_t* this_00 = &field_8;
        HTTPRequest* pHVar4 = (HTTPRequest*)(*this_00).operator->();
        if (pHVar4->IsRequestComplete()) {
            pTVar5 = (TerrainPatch*)(*this_00).operator->();
            iVar2 = pTVar5->GetGridSize();
            if (iVar2 == 200) {
                local_70 = Json::Value(0);
                this_01 = (RT7Core*)(*this_00).operator->();
                arg2 = (Array<unsigned char>*)this_01->GetMSAASampleCount();
                http::DecodeJSONResponseFromArray(local_70, *arg2);
                local_70["access_token"];
                Json::Value::asString(&local_a8);
                pcVar6 = (char*)std::string::c_str(&local_a8);
                local_48 = eastl::string(pcVar6);
                std::string::~string(&local_a8);
                local_70["refresh_token"];
                Json::Value::asString(&local_88);
                pcVar6 = (char*)std::string::c_str(&local_88);
                local_a8 = eastl::string(pcVar6);
                std::string::~string(&local_88);
                this_02 = logger::default_logger();
                uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                this_02->Log(
                    false, 8,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp",
                    487, "Got OAuth2TokenPair back: { %s , %s } ", uVar7, uVar8);
                lVar9 = ((Value*)local_70["expires_in"])->asInt64();
                uVar10 = SystemTimer::GetTimeSecs<std::chrono::system_clock>();
                SetOAuthTokenCredentials(local_48, local_a8, uVar10 + lVar9);
            } else {
                pTVar5 = (TerrainPatch*)(*this_00).operator->();
                iVar2 = pTVar5->GetGridSize();
                if (iVar2 == 400) {
                    local_70 = eastl::string("");
                    local_48 = eastl::string("");
                    SetOAuthTokenCredentials(local_70, local_48, 0);
                } else {
                    pHVar4 = (HTTPRequest*)(*this_00).operator->();
                    if (!(pHVar4->HasTimedOut())) {
                        uVar3 = ((Slider*)(*this_00).operator->())->GetCurrentValue();
                        uVar7 = ((EditLine*)(*this_00).operator->())->GetText();
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "system/auth/AuthWeb.cpp",
                                        508, "Error:(%i) while connecting to : %s", (unsigned long)uVar3, uVar7);
                    }
                    local_70 = eastl::string("");
                    SetGameTokenCredentials(local_70, 4294967292);
                }
            }
            this_00->reset(nullptr);
            field_0 = 0;
        }
    }

    // 0x1003ae860
    void AuthWeb::DecodeGameTokenRequestResponse() {
        unsigned int uVar4;
        unsigned int uVar5;
        basic_string<char, BucketAllocatorEASTL>* str;
        RT7Core* pRVar8;
        Array<unsigned char>* pAVar9;
        char* pcVar10;
        unsigned long arg2;
        Logger* this_01;
        uint64_t uVar11;
        eastl::string* this_04;
        eastl::string local_198;
        uint8_t local_178[328];

        uint8_t* this_00 = &field_8;
        HTTPRequest* pHVar6 = (HTTPRequest*)(*this_00).operator->();
        bool cVar1 = pHVar6->IsRequestComplete();
        if (!cVar1)
            goto LAB_1003aeb8f;
        TerrainPatch* pTVar7 = (TerrainPatch*)(*this_00).operator->();
        int iVar3 = pTVar7->GetGridSize();
        if (iVar3 == 200) {
            local_198 = eastl::string();
            pHVar6 = (HTTPRequest*)(*this_00).operator->();
            str = (basic_string<char, BucketAllocatorEASTL>*)pHVar6->GetContentType();
            if (!*str == (*((value_type*)"application/json"))) {
                pRVar8 = (RT7Core*)(*this_00).operator->();
                pAVar9 = (Array<unsigned char>*)pRVar8->GetMSAASampleCount();
                new (local_178) PacketT(pAVar9);
                new ((local_178 + 32)) eastl::fixed_string<char, 256>();
                pcVar10 = (char*)local_178->GetDataPtr();
                arg2 = local_178->GetTextureAtlas();
                stringtools::CP1252ToUTF8<eastl::fixed_string<char, 256>>(pcVar10, arg2, *((local_178 + 32)));
                pcVar10 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::string::assign(&local_198, pcVar10);
                ((local_178 + 32))->~fixed_string();
            }
            new ((local_178 + 32)) Json::Value(0);
            pRVar8 = (RT7Core*)(*this_00).operator->();
            pAVar9 = (Array<unsigned char>*)pRVar8->GetMSAASampleCount();
            http::DecodeJSONResponseFromArray(*((local_178 + 32)), *pAVar9);
            (*((local_178 + 32)))["token"];
            local_178->asString();
            pcVar10 = (char*)local_178->c_str();
            eastl::string::assign(&local_198, pcVar10);
            ((local_178 + 32))->~Value();
            this_01 = logger::default_logger();
            uVar11 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            this_01->Log(
                false, 8,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp",
                405, "%s : Response: %s ", "DecodeGameTokenRequestResponse", uVar11);
            pcVar10 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            new (local_178) eastl::allocator("EASTL basic_string");
            new ((local_178 + 32)) eastl::string(pcVar10, local_178);
            SetGameTokenCredentials(*((local_178 + 32)), 0);
            ((local_178 + 32))->~basic_string();
            this_04 = &local_198;
        } else {
            pTVar7 = (TerrainPatch*)(*this_00).operator->();
            iVar3 = pTVar7->GetGridSize();
            if (iVar3 == 401) {
                new ((local_178 + 32)) eastl::string("");
                SetGameTokenCredentials(*((local_178 + 32)), 1401);
            } else {
                pTVar7 = (TerrainPatch*)(*this_00).operator->();
                iVar3 = pTVar7->GetGridSize();
                if (iVar3 != 502) {
                    pTVar7 = (TerrainPatch*)(*this_00).operator->();
                    iVar3 = pTVar7->GetGridSize();
                    if (iVar3 != 404) {
                        pHVar6 = (HTTPRequest*)(*this_00).operator->();
                        cVar1 = pHVar6->HasTimedOut();
                        if (!cVar1) {
                            uVar4 = ((Slider*)(*this_00).operator->())->GetCurrentValue();
                            pTVar7 = (TerrainPatch*)(*this_00).operator->();
                            uVar5 = pTVar7->GetGridSize();
                            uVar11 = ((EditLine*)(*this_00).operator->())->GetText();
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                            "system/auth/AuthWeb.cpp",
                                            429, "Error Code: %i, Response Code: %i while connecting to : %s",
                                            (unsigned long)uVar4, (unsigned long)uVar5, uVar11);
                        }
                        new ((local_178 + 32)) eastl::string("");
                        SetGameTokenCredentials(*((local_178 + 32)), 4294967292);
                        goto LAB_1003aea3d;
                    }
                }
                new ((local_178 + 32)) eastl::string("");
                SetGameTokenCredentials(*((local_178 + 32)), 1403);
            }
        LAB_1003aea3d:
            this_04 = (eastl::string*)(local_178 + 32);
        }
        this_04->~basic_string();
        field_0 = 0;
        this_00->reset(nullptr);
    LAB_1003aeb8f:
    }

    // 0x1003aed40
    void AuthWeb::DecodeRefreshOAuth2TokensResponse() {
        DecodeOAuth2TokenRequestResponse();
        if (field_0 == 0) {
            PerformQueuedAction();
        }
    }

    // 0x1003aed70
    void AuthWeb::DecodeRevokeOAuth2TokensResponse() {
        uint32_t uVar2;
        uint32_t uVar4;
        Logger* pLVar5;
        TerrainPatch* pTVar6;
        uint64_t uVar7;
        eastl::string local_80;
        eastl::string local_58;

        uint8_t* this_00 = &field_8;
        if (((HTTPRequest*)(*this_00).operator->())->IsRequestComplete() != '\0') {
            pLVar5 = logger::default_logger();
            pTVar6 = (TerrainPatch*)(*this_00).operator->();
            uVar2 = pTVar6->GetGridSize();
            pLVar5->Log(
                false, 8,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp",
                298, "%s : Response: %i ", "DecodeRevokeOAuth2TokensResponse", uVar2);
            pTVar6 = (TerrainPatch*)(*this_00).operator->();
            if (pTVar6->GetGridSize() != 200) {
                pLVar5 = logger::default_logger();
                uVar2 = ((Slider*)(*this_00).operator->())->GetCurrentValue();
                pTVar6 = (TerrainPatch*)(*this_00).operator->();
                uVar4 = pTVar6->GetGridSize();
                uVar7 = ((EditLine*)(*this_00).operator->())->GetText();
                pLVar5->Log(
                    false, 3,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp",
                    304, "Error Code: %i, Response Code: %i, while connecting to : %s",
                    (((uint64_t)1 << 32) | (uint32_t)uVar2), uVar4, uVar7);
            }
            local_80 = eastl::string("");
            local_58 = eastl::string("");
            SetOAuthTokenCredentials(local_80, local_58, 0);
            field_0 = 0;
            this_00->reset(nullptr);
        }
    }

    // 0x1003aef30
    void AuthWeb::InitiateRequest(ActionRequest actionRequest) {

        if ((field_352 != 0) || (field_0 != 0)) {
            LogAssert(
                "m_queuedAction == ActionRequest::NOT_SELECTED && m_requestStatus == AuthWebRequestState::AUTH_IDLE",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp", 81,
                "Error - Tried to queue an action (%i) while not in AUTH_IDLE state!", (unsigned long)actionRequest);
        }
        field_352 = actionRequest;
        if (!(IsAccessTokenExpiryUnknown())) {
            if (!(HasAccessTokenExpired())) {
                PerformQueuedAction();
            } else {
                RequestRefreshOAuth2Tokens();
            }
        } else {
            RequestAccessTokenCheck();
        }
    }

    // 0x1003aefc0
    void AuthWeb::RequestAccessTokenCheck() {
        vector<std::pair<char const*, char const*>> local_c0[32];
        vector<std::pair<char const*, char const*>> local_a0[32];
        pair<char const*, char const*> local_50[32];

        if (field_56.empty() != '\0') {
            LogAssert(
                "!m_currentOAuth2TokenPair.m_OAuth2AccessToken.empty()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp",
                180, "Error - Tried to initiate a access token check without an access token!");
        }
        if (field_0 != 0) {
            LogAssert(
                "m_requestStatus == AUTH_IDLE",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp",
                183,
                "Error - Tried to initiate a token refresh request while not in AUTH_IDLE state. Current request "
                "status: %i");
        }
        auto local_80 = std::make_unique<http::HTTPRequest>();
        uint8_t* this_00 = &field_8;
        *this_00 = &local_80;
        local_80 = eastl::string();
        ConstructAuthorisationHeader(&local_80, &local_80, (eastl::string*)&field_192, (eastl::string*)&field_224);
        http::ConfigureBasicAuthHeader(*this_00, local_80);
        char* local_60 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_50->pair<char const*&, char const*, false>(HTTP_PARAM_TOKEN, local_60);
        new (local_c0) eastl::vector<std::pair<char const*, char const*>>(local_50, DAT_00000001);
        *local_50 + field_320;
        auto this_01 = logger::default_logger();
        uint64_t uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        this_01->Log(
            false, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp", 203,
            "%s : Attempting to check our OAuth2 Access Token via: %s", "RequestAccessTokenCheck", uVar2);
        HTTPRequest* this_02 = (HTTPRequest*)(*this_00).operator->();
        new (local_a0) eastl::vector<std::pair<char const*, char const*>>(*local_c0);
        this_02->Post(local_50, local_a0);
        field_0 = 1;
    }

    // 0x1003af230
    void AuthWeb::RequestRefreshOAuth2Tokens() {
        vector<std::pair<char const*, char const*>> local_c8[32];
        vector<std::pair<char const*, char const*>> local_a8[32];
        pair<char const*, char const*> local_58[16];
        pair<char const*, char const*> local_48[16];
        pair<char const*, char const*> local_38[16];

        if (field_0 != 0) {
            LogAssert(
                "m_requestStatus == AUTH_IDLE",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp",
                134,
                "Error - Tried to initiate a token refresh request while not in AUTH_IDLE state. Current request "
                "status: %i");
        }
        auto local_68 = std::make_unique<http::HTTPRequest>();
        uint8_t* this_00 = &field_8;
        *this_00 = &local_68;
        eastl::string local_e8;
        ConstructAuthorisationHeader(&local_e8, &local_e8, (eastl::string*)&field_192, (eastl::string*)&field_224);
        http::ConfigureBasicAuthHeader(*this_00, local_e8);
        char* local_88 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_68.pair<char const*&, char const*, false>(HTTP_PARAM_REFRESH_TOKEN, local_88);
        char* local_80 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_58->pair<char const*&, char const*, false>(HTTP_PARAM_SCOPE, local_80);
        char* local_78 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_48->pair<char const*&, char const*, false>(HTTP_PARAM_REDIRTO, local_78);
        local_38->pair<char const*&, char const*&, false>(HTTP_PARAM_GRANT_TYPE, HTTP_VALUE_GRANT_TYPE);
        new (local_c8) eastl::vector<std::pair<char const*, char const*>>(&local_68, *4);
        local_68 + field_320;
        auto this_01 = logger::default_logger();
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        this_01->Log(
            false, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp", 157,
            "%s : Attempting to refresh our OAuth2Access Token via: %s", "RequestRefreshOAuth2Tokens", uVar1);
        HTTPRequest* this_02 = (HTTPRequest*)(*this_00).operator->();
        new (local_a8) eastl::vector<std::pair<char const*, char const*>>(*local_c8);
        this_02->Post(&local_68, local_a8);
        field_0 = 3;
    }

    // 0x1003af4c0
    void AuthWeb::PerformQueuedAction() {
        eastl::string local_48;

        (logger::default_logger())
            ->Log(false, 8,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp",
                  105, "Performing queued action: %i", field_352);
        if (field_352 == 1) {
            if (field_56.empty() == '\0') {
                RequestGameToken_OAuth2();
            } else {
                local_48 = eastl::string("");
                SetGameTokenCredentials(local_48, 1401);
                field_352 = 0;
            }
        }
    }

    // 0x1003af590
    void AuthWeb::RequestGameToken_OAuth2() {
        if (HasOAuth2TokenPair() == '\0') {
            LogAssert(
                "HasOAuth2TokenPair()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp",
                356, "Error - Tried to request a GameToken without checking if IsUserAuthenticated!");
        }
        if (field_0 != 0) {
            LogAssert(
                "m_requestStatus == AuthWebRequestState::AUTH_IDLE",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp",
                358,
                "Error - Tried to initiate a token request while not in AUTH_IDLE state. Current request status: %i");
        }
        auto local_70 = std::make_unique<http::HTTPRequest>();
        uint8_t* this_00 = &field_8;
        *this_00 = &local_70;
        local_70 = eastl::string("Bearer");
        uint64_t uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_70.append_sprintf(" %s", uVar2);
        http::ConfigureBasicAuthHeader(*this_00, local_70);
        local_50 + field_320;
        auto this_01 = logger::default_logger();
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        this_01->Log(
            false, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp", 372,
            "Requesting GameToken with an OAuth2Access token via: %s", uVar2);
        HTTPRequest* this_02 = (HTTPRequest*)(*this_00).operator->();
        eastl::string local_90("");
        this_02->Post(&local_50, &local_90);
        field_0 = 5;
        field_352 = 0;
    }

    // 0x1003af820
    void AuthWeb::ConstructAuthorisationHeader(eastl::string& str1, const eastl::string& str2,
                                               const eastl::string& str3) {
        eastl::string local_48;
        uint64_t uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uint64_t uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_48.sprintf("%s:%s", uVar2, uVar3);
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        int iVar1 = PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252(str, false);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>> local_88((long)iVar1);
        local_88.pStringNoConversion<eastl::fixed_string<char, 32>>(local_48, false);
        eastl::string local_68;
        auto this_00 = Base64::Instance();
        auto arg2 = local_88.GetDataPtr();
        unsigned long arg3 = local_48.size();
        this_00->Encode(local_68, arg2, arg3);
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        str1.append_sprintf("%s %s", "Basic", uVar2);
    }

    // 0x1003afad0
    void AuthWeb::RequestRevokeOAuth2Tokens() {
        vector<std::pair<char const*, char const*>> local_b8[32];
        vector<std::pair<char const*, char const*>> local_98[32];
        pair<char const*, char const*> local_48[16];
        pair<char const*, char const*> local_38[16];

        if (field_0 != 0) {
            LogAssert(
                "m_requestStatus == AuthWebRequestState::AUTH_IDLE",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp",
                264,
                "Error - Tried to initiate a token revoke while not in AUTH_IDLE state. Current request status: %i");
        }
        auto local_78 = std::make_unique<http::HTTPRequest>();
        uint8_t* this_00 = &field_8;
        *this_00 = &local_78;
        local_78 = eastl::string();
        ConstructAuthorisationHeader(&local_78, &local_78, (eastl::string*)&field_192, (eastl::string*)&field_224);
        http::ConfigureBasicAuthHeader(*this_00, local_78);
        char* local_58 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_48->pair<char const*&, char const*, false>(HTTP_PARAM_TOKEN, local_58);
        local_38->pair<char const*&, char const*&, false>(HTTP_PARAM_TOKEN_TYPE_HINT, HTTP_VALUE_TOKEN_HINT_TYPE);
        new (local_b8) eastl::vector<std::pair<char const*, char const*>>(local_48, *2);
        *local_48 + field_320;
        auto this_01 = logger::default_logger();
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        this_01->Log(
            false, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp", 285,
            "Revoking our OAuth2Access Token via: %s", uVar1);
        HTTPRequest* this_02 = (HTTPRequest*)(*this_00).operator->();
        new (local_98) eastl::vector<std::pair<char const*, char const*>>(*local_b8);
        this_02->Post(local_48, local_98);
        field_0 = 4;
    }

    // 0x1003afd20
    void AuthWeb::RequestGameToken_GameSession() {
        eastl::string local_90;

        if (HasGameSessionCredentials() == '\0') {
            LogAssert(
                "HasGameSessionCredentials()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp",
                320, "Error - Tried to request a GameToken without checking if IsUserAuthenticated!");
        }
        if (field_0 != 0) {
            LogAssert(
                "m_requestStatus == AuthWebRequestState::AUTH_IDLE",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp",
                322,
                "Error - Tried to initiate a token request while not in AUTH_IDLE state. Current request status: %i");
        }
        StreamWriterBuilder local_70 = std::make_unique<http::HTTPRequest>();
        uint8_t* this_00 = &field_8;
        *this_00 = &local_70;
        eastl::string local_d8("Bearer");
        uint64_t uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_d8.append_sprintf(" %s", uVar2);
        http::ConfigureBasicJsonHeader(*this_00, local_d8);
        local_90 + field_320;
        auto pLVar3 = logger::default_logger();
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pLVar3->Log(false, 8,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp",
                    336, "Requesting GameToken with a GameSession token via: %s", uVar2);
        Value local_b8(0);
        char* pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_70 = Json::Value(pcVar4);
        Value* this_01 = &local_b8["accountId"];
        *this_01 = local_70;
        local_70 = Json::StreamWriterBuilder();
        auto local_40 = Json::writeString(local_70, local_b8);
        pLVar3 = logger::default_logger();
        uVar2 = std::string::c_str(&local_40);
        pLVar3->Log(false, 8,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp",
                    344, "Sending Post Request: \n%s", uVar2);
        HTTPRequest* this_02 = (HTTPRequest*)(*this_00).operator->();
        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        auto str2 = std::string::c_str(&local_40);
        this_02->Post(pcVar4, str2);
        field_0 = 5;
        field_352 = 0;
        std::string::~string(&local_40);
    }

    // 0x1003b00c0
    void AuthWeb::RequestOAuth2Tokens(const eastl::string& str1, const eastl::string& str2, const eastl::string& str3,
                                      const eastl::string& str4) {
        vector<std::pair<char const*, char const*>> local_f0[32];
        vector<std::pair<char const*, char const*>> local_d0[32];
        pair<char const*, char const*> local_68[16];
        pair<char const*, char const*> local_58[16];
        pair<char const*, char const*> local_48[16];

        eastl::string* local_88 = str4;
        eastl::string* local_80 = str3;
        if (field_0 != 0) {
            LogAssert(
                "m_requestStatus == AUTH_IDLE",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp",
                444,
                "Error - Tried to initiate a token request while not in AUTH_IDLE state. Current request status: %i");
        }
        auto local_78 = std::make_unique<http::HTTPRequest>();
        uint8_t* this_00 = &field_8;
        *this_00 = &local_78;
        eastl::string local_110;
        ConstructAuthorisationHeader(&local_110, &local_110, (eastl::string*)&field_192, (eastl::string*)&field_224);
        http::ConfigureBasicAuthHeader(*this_00, local_110);
        char* local_b0 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_78.pair<char const*&, char const*, false>(HTTP_PARAM_GRANT_TYPE, local_b0);
        char* local_a8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_68->pair<char const*&, char const*, false>(HTTP_PARAM_TOKEN, local_a8);
        char* local_a0 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_58->pair<char const*&, char const*, false>(HTTP_PARAM_REDIRTO, local_a0);
        char* local_98 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_48->pair<char const*&, char const*, false>(HTTP_PARAM_SIG, local_98);
        new (local_f0) eastl::vector<std::pair<char const*, char const*>>(&local_78, *4);
        local_78 + field_320;
        auto this_01 = logger::default_logger();
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        this_01->Log(
            false, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp", 467,
            "Requesting OAuth2TokenPair with an OTL token via: %s", uVar1);
        HTTPRequest* this_02 = (HTTPRequest*)(*this_00).operator->();
        new (local_d0) eastl::vector<std::pair<char const*, char const*>>(*local_f0);
        this_02->Post(&local_78, local_d0);
        field_0 = 2;
    }

} // namespace jag::auth
