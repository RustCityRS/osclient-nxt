// libs/hal/system/auth/tokenauth/TokenAuthLoginHandler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.auth

#include "TokenAuthLoginHandler.h"

namespace jag::auth {
    // 0x100f38210
    const char* TokenAuthLoginHandler::ENDPOINT_INITIATE_AUTH = "v1/social/auth";

    // 0x100f38218
    const char* TokenAuthLoginHandler::JSON_SOCIALPROVIDER = "socialProvider";

    // 0x100f38220
    const char* TokenAuthLoginHandler::JSON_ACCOUNTHINT = "accountHint";

    // 0x100f38228
    const char* TokenAuthLoginHandler::JSON_PARAMS = "parameters";

    // 0x100f38230
    const char* TokenAuthLoginHandler::JSON_PARAMS_SESSIONTICKET = "sessionTicket";

    // 0x100f38238
    const char* TokenAuthLoginHandler::JSON_PARAMS_APPID = "appId";

    // 0x100f38240
    const char* TokenAuthLoginHandler::JSON_PARAMS_LANGUAGE = "clientLanguageCode";

    // 0x100f38248
    const char* TokenAuthLoginHandler::ACCOUNT_HINT_NEW = "NEW";

    // 0x100f38250
    const char* TokenAuthLoginHandler::ACCOUNT_HINT_EXISTING = "EXISTING";

    // 0x100f38258
    const char* TokenAuthLoginHandler::ACCOUNT_HINT_CHECK = "CHECK";

    // 0x100f38260
    const char* TokenAuthLoginHandler::SOCIAL_CHALLENGE_ERROR = "SOCIAL_CHALLENGE_ERROR";

    // 0x100f38268
    const char* TokenAuthLoginHandler::SOCIAL_ACCOUNT_NOT_LINKED = "SOCIAL_ACCOUNT_NOT_LINKED";

    // 0x100f38270
    const char* TokenAuthLoginHandler::SOCIAL_PROVIDER_NOT_SUPPORTED = "SOCIAL_PROVIDER_NOT_SUPPORTED";

    // 0x100f38278
    const char* TokenAuthLoginHandler::JSON_SOCIAL_AUTH_RESPONSE_AUTH = "authCode";

    // 0x100f38280
    const char* TokenAuthLoginHandler::JSON_ERROR_ID = "id";

    // 0x100f38288
    const char* TokenAuthLoginHandler::JSON_ERROR_SPANID = "spanId";

    // 0x100f38290
    const char* TokenAuthLoginHandler::JSON_ERROR_TRACEID = "traceId";

    // 0x100f38298
    const char* TokenAuthLoginHandler::JSON_ERROR_STATUS = "status";

    // 0x100f382a0
    const char* TokenAuthLoginHandler::JSON_ERROR_CODE = "code";

    // 0x100f382a8
    const char* TokenAuthLoginHandler::JSON_ERROR_MESSAGE = "message";

    // 0x1000b9960: TokenAuthLoginHandler::GetTokenAuthLoginState() has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x1003b1ea0
    TokenAuthLoginHandler::TokenAuthLoginHandler(const std::unique_ptr<Steam>& steam, eastl::string& str, int arg3)
        : m_tokenAuthLoginState(0), field_4(0), field_8(str) {
        long lVar1 = ((Language*)(unsigned long)(unsigned int)arg3)->GetByID((unsigned int)str);
        char* str_00 = *(char**)(lVar1 + 16);
        new (&field_40) eastl::string(str_00);
        new (&field_72) eastl::string();
        field_104.unique_ptr<true, void>();
        field_116 = 4294967295;
        field_120 = steam;
    }

    // 0x1003b1f60
    void TokenAuthLoginHandler::MainLogic() {
        int iVar3;
        Steam* pSVar4;
        unique_ptr<SteamAuth, std::default_delete<SteamAuth> _>* puVar5;
        unique_ptr<SteamOverlay, std::default_delete<SteamOverlay> _>* puVar6;

        unsigned int uVar1 = m_tokenAuthLoginState;
        if (uVar1 == 4) {
            HandleLoginRequestResponse();
        } else if (uVar1 == 2) {
            pSVar4 = (Steam*)(*field_120).operator->();
            puVar6 = pSVar4->GetSteamOverlayModule();
            (*puVar6).operator->();
            if (!(SteamOverlay::IsOverlayActive())) {
                pSVar4 = (Steam*)(*field_120).operator->();
                puVar6 = pSVar4->GetSteamOverlayModule();
                (*puVar6).operator->();
                if (!(SteamOverlay::IsOverlayRequested())) {
                    field_112 = 0;
                    m_tokenAuthLoginState = 1;
                }
            }
        } else if (uVar1 == 1) {
            pSVar4 = (Steam*)(*field_120).operator->();
            puVar5 = pSVar4->GetSteamAuthModule();
            iVar3 = ((SteamAuth*)(*puVar5).operator->())->GetTicketStatus();
            if (iVar3 == 2) {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                          "tokenauth/TokenAuthLoginHandler.cpp",
                          73, "SteamAuth failed to fetch a valid ticket");
                m_tokenAuthLoginState = 21;
            } else if (iVar3 == 1) {
                InitiateLoginRequest();
            } else if (iVar3 == 0) {
                pSVar4 = (Steam*)(*field_120).operator->();
                puVar5 = pSVar4->GetSteamAuthModule();
                (*puVar5).operator->();
                SteamAuth::OpenTicket();
            }
        }
    }

    // 0x1003b20c0
    void TokenAuthLoginHandler::InitiateLoginRequest() {
        HTTPRequest* pHVar1;
        eastl::string local_c0;

        if (1 < m_tokenAuthLoginState - 1) {
            LogAssert("m_requestStatus == TokenAuthLoginState::LOGIN_WAITING_PREREQUISITE || m_requestStatus == "
                      "TokenAuthLoginState::LOGIN_WAITING_LINK_COMPLETE_INTERAL_BROWSER",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/tokenauth/"
                      "TokenAuthLoginHandler.cpp",
                      138,
                      "Error - Tried to initiate login request while not in LOGIN_WAITING_PREREQUISITE state. Current "
                      "request status: %i");
        }
        StreamWriterBuilder local_58 = std::make_unique<http::HTTPRequest>();
        uint8_t* this_00 = &field_104;
        *this_00 = &local_58;
        if (field_112 == 2) {
            pHVar1 = (HTTPRequest*)(*this_00).operator->();
            pHVar1->SetFollowRedirects(false);
        }
        http::ConfigureBasicHeader(*this_00, "application/json", "application/json");
        Value local_88(0);
        auto pcVar2 = GetSocialProvider();
        local_58 = Json::Value(pcVar2);
        Value* pVVar3 = &local_88[JSON_SOCIALPROVIDER];
        *pVVar3 = local_58;
        pcVar2 = (char*)GetLoginHint();
        local_58 = Json::Value(pcVar2);
        pVVar3 = &local_88[JSON_ACCOUNTHINT];
        *pVVar3 = local_58;
        unique_ptr<SteamAuth, std::default_delete<SteamAuth> _>* this_02 =
            ((Steam*)(*field_120).operator->())->GetSteamAuthModule();
        ((Layout*)(*this_02).operator->())->SSOBeginPtr();
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_58 = Json::Value(pcVar2);
        pVVar3 = &local_88[JSON_PARAMS];
        pVVar3 = (Value*)(*pVVar3)[JSON_PARAMS_SESSIONTICKET];
        *pVVar3 = local_58;
        int arg1 = ((CoordMapSquare*)(*field_120).operator->())->GetZ();
        local_58 = Json::Value(arg1);
        pVVar3 = &local_88[JSON_PARAMS];
        pVVar3 = (Value*)(*pVVar3)[JSON_PARAMS_APPID];
        *pVVar3 = local_58;
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_58 = Json::Value(pcVar2);
        pVVar3 = &local_88[JSON_PARAMS];
        pVVar3 = (Value*)(*pVVar3)[JSON_PARAMS_LANGUAGE];
        *pVVar3 = local_58;
        local_58 = Json::StreamWriterBuilder();
        auto local_a0 = Json::writeString(local_58, local_88);
        auto pLVar4 = logger::default_logger();
        uint64_t uVar5 = std::string::c_str(&local_a0);
        pLVar4->Log(false, 8,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/tokenauth/"
                    "TokenAuthLoginHandler.cpp",
                    164, "Sending Post Request: \n%s", uVar5);
        local_c0 + field_8;
        pLVar4 = logger::default_logger();
        uVar5 = GetLoginHint();
        uint64_t uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pLVar4->Log(false, 8,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/tokenauth/"
                    "TokenAuthLoginHandler.cpp",
                    169, "%s : Attempting to initiate a %s request using our Steam Session Token via: %s",
                    "InitiateLoginRequest", uVar5, uVar6);
        pHVar1 = (HTTPRequest*)(*this_00).operator->();
        pcVar2 = (char*)std::string::c_str(&local_a0);
        eastl::string local_e0(pcVar2);
        pHVar1->Post(&local_c0, &local_e0);
        m_tokenAuthLoginState = 4;
        std::string::~string(&local_a0);
    }

    // 0x1003b24d0
    void TokenAuthLoginHandler::HandleLoginRequestResponse() {
        unsigned int uVar5;
        eastl::string* this_02;
        unique_ptr<SteamOverlay, std::default_delete<SteamOverlay> _>* puVar10;
        SteamOverlay* pSVar11;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* pAVar12;
        uint64_t uVar13;
        RT7Core* pRVar14;
        Array<unsigned char>* pAVar15;
        char* pcVar16;
        bool arg2;
        uint64_t in_stack_ffffffffffffff40;
        eastl::string local_b0;
        Value local_90;
        Value local_68;
        eastl::string local_50;

        uint32_t uVar4 = (uint32_t)((unsigned long)in_stack_ffffffffffffff40 >> 32);
        uint8_t* this_00 = &field_104;
        HTTPRequest* pHVar6 = (HTTPRequest*)(*this_00).operator->();
        if (!(pHVar6->IsRequestComplete())) {
            return;
        }
        auto pLVar7 = logger::default_logger();
        TerrainPatch* pTVar8 = (TerrainPatch*)(*this_00).operator->();
        uint32_t uVar2 = pTVar8->GetGridSize();
        pLVar7->Log(false, 8,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/tokenauth/"
                    "TokenAuthLoginHandler.cpp",
                    182, "%s : Response: %i ", "HandleLoginRequestResponse",
                    (((uint64_t)uVar4 << 32) | (uint32_t)uVar2));
        Steam* pSVar9 = (Steam*)(*field_120).operator->();
        auto this_01 = pSVar9->GetSteamAuthModule();
        (*this_01).operator->();
        SteamAuth::CancelTicket();
        pTVar8 = (TerrainPatch*)(*this_00).operator->();
        int iVar3 = pTVar8->GetGridSize();
        if (iVar3 < 422) {
            if (iVar3 == 200) {
                local_90 = Json::Value(0);
                pRVar14 = (RT7Core*)(*this_00).operator->();
                pAVar15 = (Array<unsigned char>*)pRVar14->GetMSAASampleCount();
                http::DecodeJSONResponseFromArray(local_90, *pAVar15);
                local_90[JSON_SOCIAL_AUTH_RESPONSE_AUTH];
                Json::Value::asString(&local_68);
                pcVar16 = (char*)std::string::c_str(&local_68);
                local_50 = eastl::string(pcVar16);
                std::string::~string(&local_68);
                pLVar7 = logger::default_logger();
                uVar13 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pLVar7->Log(false, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                            "tokenauth/TokenAuthLoginHandler.cpp",
                            196, "TokenAuth Success - Token received: %s", uVar13);
                SetGameTokenCredentials(local_50);
                m_tokenAuthLoginState = 20;
            LAB_1003b2939:
                return;
            }
            if (iVar3 == 302) {
                pHVar6 = (HTTPRequest*)(*this_00).operator->();
                this_02 = (eastl::string*)pHVar6->GetRedirectLocation();
                pSVar9 = (Steam*)(*field_120).operator->();
                puVar10 = pSVar9->GetSteamOverlayModule();
                pSVar11 = (SteamOverlay*)(*puVar10).operator->();
                if (!(pSVar11->IsOverlayEnabled())) {
                    this_02->OpenURL(DAT_00000001, arg2);
                    m_tokenAuthLoginState = 3;
                    return;
                }
                pSVar9 = (Steam*)(*field_120).operator->();
                puVar10 = pSVar9->GetSteamOverlayModule();
                pSVar11 = (SteamOverlay*)(*puVar10).operator->();
                local_b0 = eastl::string(*this_02);
                pSVar11->OpenBrowser(&local_b0);
                m_tokenAuthLoginState = 2;
                return;
            }
        } else {
            if (iVar3 == 422) {
                pLVar7 = logger::default_logger();
                pRVar14 = (RT7Core*)(*this_00).operator->();
                pAVar12 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)pRVar14->GetMSAASampleCount();
                uVar13 = pAVar12->data();
                pLVar7->Log(false, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                            "tokenauth/TokenAuthLoginHandler.cpp",
                            227, "Error : %s ", uVar13);
                local_90 = Json::Value(0);
                pRVar14 = (RT7Core*)(*this_00).operator->();
                pAVar15 = (Array<unsigned char>*)pRVar14->GetMSAASampleCount();
                http::DecodeJSONResponseFromArray(local_90, *pAVar15);
                local_90["code"];
                Json::Value::asString(&local_68);
                pcVar16 = (char*)std::string::c_str(&local_68);
                local_50 = eastl::string(pcVar16);
                std::string::~string(&local_68);
                iVar3 = local_50.compare(SOCIAL_CHALLENGE_ERROR);
                uVar5 = 22;
                if ((iVar3 != 0) && (iVar3 = local_50.compare(SOCIAL_ACCOUNT_NOT_LINKED), iVar3 != 0)) {
                    iVar3 = local_50.compare(SOCIAL_PROVIDER_NOT_SUPPORTED);
                    if (iVar3 != 0) {
                        uVar13 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pTVar8 = (TerrainPatch*)(*this_00).operator->();
                        uVar5 = pTVar8->GetGridSize();
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "system/auth/tokenauth/TokenAuthLoginHandler.cpp",
                                        245, "Unknown Error:(%s) with error code: %i", uVar13, (unsigned long)uVar5);
                    }
                    uVar5 = 23;
                }
                m_tokenAuthLoginState = uVar5;
                goto LAB_1003b2939;
            }
            if (iVar3 == 500) {
                pLVar7 = logger::default_logger();
                pRVar14 = (RT7Core*)(*this_00).operator->();
                pAVar12 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)pRVar14->GetMSAASampleCount();
                uVar13 = pAVar12->data();
                pLVar7->Log(false, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                            "tokenauth/TokenAuthLoginHandler.cpp",
                            253, "Internal Error %s\n", uVar13);
                m_tokenAuthLoginState = 25;
                return;
            }
        }
        pLVar7 = logger::default_logger();
        uVar4 = ((Slider*)(*this_00).operator->())->GetCurrentValue();
        uVar13 = ((EditLine*)(*this_00).operator->())->GetText();
        pLVar7->Log(false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/tokenauth/"
                    "TokenAuthLoginHandler.cpp",
                    263, "Error:(%i) while connecting to : %s", (((uint64_t)1 << 32) | (uint32_t)uVar4), uVar13);
        m_tokenAuthLoginState = 26;
    }

    // 0x1003b29d0
    void TokenAuthLoginHandler::Init(AuthAccountHint authAccountHint, SocialLoginPartners socialLoginPartners) {

        if (socialLoginPartners != 10) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                            "tokenauth/TokenAuthLoginHandler.cpp",
                            111, "Error - Only \'Steam\' is a supported provider using this flow, currently.");
        }
        ResetRequestState();
        eastl::string local_50("");
        SetGameTokenCredentials(local_50);
        field_112 = authAccountHint;
        field_116 = 10;
        m_tokenAuthLoginState = 1;
        if (field_4 != 0) {
            m_tokenAuthLoginState = field_4;
            field_4 = 0;
        }
    }

    // 0x1003b2b00
    uint8_t* TokenAuthLoginHandler::GetLoginHint() {
        AuthAccountHint AVar1 = field_112;
        if (AVar1 == 0) {
            return ACCOUNT_HINT_CHECK;
        }
        if (AVar1 == 2) {
            return ACCOUNT_HINT_EXISTING;
        }
        if (AVar1 != 1) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                            "tokenauth/TokenAuthLoginHandler.cpp",
                            289, "Error: Account hint not for: %d");
        }
        return ACCOUNT_HINT_NEW;
    }

} // namespace jag::auth
