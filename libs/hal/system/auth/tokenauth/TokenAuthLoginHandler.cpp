// libs/hal/system/auth/tokenauth/TokenAuthLoginHandler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.auth

#include "TokenAuthLoginHandler.h"

namespace jag::auth {
    // 0x100f38210, 8 bytes, __data
    TokenAuthLoginHandler::ENDPOINT_INITIATE_AUTH = "v1/social/auth";

    // 0x100f38218, 8 bytes, __data
    TokenAuthLoginHandler::JSON_SOCIALPROVIDER = "socialProvider";

    // 0x100f38220, 8 bytes, __data
    TokenAuthLoginHandler::JSON_ACCOUNTHINT = "accountHint";

    // 0x100f38228, 8 bytes, __data
    TokenAuthLoginHandler::JSON_PARAMS = "parameters";

    // 0x100f38230, 8 bytes, __data
    TokenAuthLoginHandler::JSON_PARAMS_SESSIONTICKET = "sessionTicket";

    // 0x100f38238, 8 bytes, __data
    TokenAuthLoginHandler::JSON_PARAMS_APPID = "appId";

    // 0x100f38240, 8 bytes, __data
    TokenAuthLoginHandler::JSON_PARAMS_LANGUAGE = "clientLanguageCode";

    // 0x100f38248, 8 bytes, __data
    TokenAuthLoginHandler::ACCOUNT_HINT_NEW = "NEW";

    // 0x100f38250, 8 bytes, __data
    TokenAuthLoginHandler::ACCOUNT_HINT_EXISTING = "EXISTING";

    // 0x100f38258, 8 bytes, __data
    TokenAuthLoginHandler::ACCOUNT_HINT_CHECK = "CHECK";

    // 0x100f38260, 8 bytes, __data
    TokenAuthLoginHandler::SOCIAL_CHALLENGE_ERROR = "SOCIAL_CHALLENGE_ERROR";

    // 0x100f38268, 8 bytes, __data
    TokenAuthLoginHandler::SOCIAL_ACCOUNT_NOT_LINKED = "SOCIAL_ACCOUNT_NOT_LINKED";

    // 0x100f38270, 8 bytes, __data
    TokenAuthLoginHandler::SOCIAL_PROVIDER_NOT_SUPPORTED = "SOCIAL_PROVIDER_NOT_SUPPORTED";

    // 0x100f38278, 8 bytes, __data
    TokenAuthLoginHandler::JSON_SOCIAL_AUTH_RESPONSE_AUTH = "authCode";

    // 0x100f38280, 8 bytes, __data
    TokenAuthLoginHandler::JSON_ERROR_ID = "id";

    // 0x100f38288, 8 bytes, __data
    TokenAuthLoginHandler::JSON_ERROR_SPANID = "spanId";

    // 0x100f38290, 8 bytes, __data
    TokenAuthLoginHandler::JSON_ERROR_TRACEID = "traceId";

    // 0x100f38298, 8 bytes, __data
    TokenAuthLoginHandler::JSON_ERROR_STATUS = "status";

    // 0x100f382a0, 8 bytes, __data
    TokenAuthLoginHandler::JSON_ERROR_CODE = "code";

    // 0x100f382a8, 8 bytes, __data
    TokenAuthLoginHandler::JSON_ERROR_MESSAGE = "message";

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    int TokenAuthLoginHandler::GetTokenAuthLoginState();

    // 0x1003b1ea0, 176 bytes, base-object constructor, placed by class name and debug map
    // TokenAuthLoginHandler::TokenAuthLoginHandler(std::unique_ptr<Steam, std::default_delete<Steam> > const&, eastl::string&, int)
    /* TokenAuthLoginHandler::TokenAuthLoginHandler(std::unique_ptr<Steam,
   std::default_delete<Steam> > const&, eastl::string&, int) */

    void TokenAuthLoginHandler::TokenAuthLoginHandler(unique_ptr* param_1, basic_string* param_2, int param_3) {
        char* pcVar1;
        long lVar2;
        allocator local_38[8];

        m_tokenAuthLoginState = 0;
        field_4 = 0;
        new (&field_8, param_2) eastl::string();
        lVar2 = Language::GetByID(param_3);
        pcVar1 = *(char**)(lVar2 + 16);
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        new (&field_40, pcVar1, local_38) eastl::string();
        new (&field_72) eastl::string();
        std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::unique_ptr<true, void>(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)&field_104);
        field_116 = 4294967295;
        field_120 = param_1;
    }

    // 0x1003b1f50, 16 bytes, complete-object constructor, placed by class name and debug map
    // TokenAuthLoginHandler::TokenAuthLoginHandler(std::unique_ptr<Steam, std::default_delete<Steam> > const&, eastl::string&, int): jumps straight to the base-object constructor

    // 0x1003b1f60, 304 bytes, placed by class name and debug map
    // TokenAuthLoginHandler::MainLogic()
    void TokenAuthLoginHandler::MainLogic() {
        char cVar1;
        int iVar2;
        Steam* pSVar3;
        unique_ptr<SteamAuth, std::default_delete<SteamAuth>>* puVar4;
        SteamAuth* this_00;
        unique_ptr<SteamOverlay, std::default_delete<SteamOverlay>>* puVar5;
        undefined8 uVar6;

        iVar2 = m_tokenAuthLoginState;
        if (iVar2 == 4) {
            HandleLoginRequestResponse(this);
        } else if (iVar2 == 2) {
            pSVar3 = (Steam*)std::unique_ptr<Steam, std::default_delete<Steam>>::operator->(
                (unique_ptr<Steam, std::default_delete<Steam>>*)field_120);
            puVar5 = (unique_ptr<SteamOverlay, std::default_delete<SteamOverlay>>*)pSVar3->GetSteamOverlayModule();
            std::unique_ptr<SteamOverlay, std::default_delete<SteamOverlay>>::operator->(puVar5);
            cVar1 = SteamOverlay::IsOverlayActive();
            if (cVar1 == '\0') {
                pSVar3 = (Steam*)std::unique_ptr<Steam, std::default_delete<Steam>>::operator->(
                    (unique_ptr<Steam, std::default_delete<Steam>>*)field_120);
                puVar5 = (unique_ptr<SteamOverlay, std::default_delete<SteamOverlay>>*)pSVar3->GetSteamOverlayModule();
                std::unique_ptr<SteamOverlay, std::default_delete<SteamOverlay>>::operator->(puVar5);
                cVar1 = SteamOverlay::IsOverlayRequested();
                if (cVar1 == '\0') {
                    field_112 = 0;
                    m_tokenAuthLoginState = 1;
                }
            }
        } else if (iVar2 == 1) {
            pSVar3 = (Steam*)std::unique_ptr<Steam, std::default_delete<Steam>>::operator->(
                (unique_ptr<Steam, std::default_delete<Steam>>*)field_120);
            puVar4 = (unique_ptr<SteamAuth, std::default_delete<SteamAuth>>*)pSVar3->GetSteamAuthModule();
            this_00 = (SteamAuth*)std::unique_ptr<SteamAuth, std::default_delete<SteamAuth>>::operator->(puVar4);
            iVar2 = this_00->GetTicketStatus();
            if (iVar2 == 2) {
                uVar6 = logger::default_logger();
                logger::Logger::Log(uVar6, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/"
                                    "auth/tokenauth/TokenAuthLoginHandler.cpp",
                                    73, "SteamAuth failed to fetch a valid ticket");
                m_tokenAuthLoginState = 21;
            } else if (iVar2 == 1) {
                InitiateLoginRequest(this);
            } else if (iVar2 == 0) {
                pSVar3 = (Steam*)std::unique_ptr<Steam, std::default_delete<Steam>>::operator->(
                    (unique_ptr<Steam, std::default_delete<Steam>>*)field_120);
                puVar4 = (unique_ptr<SteamAuth, std::default_delete<SteamAuth>>*)pSVar3->GetSteamAuthModule();
                std::unique_ptr<SteamAuth, std::default_delete<SteamAuth>>::operator->(puVar4);
                SteamAuth::OpenTicket();
            }
        }
    }

    // 0x1003b20c0, 1040 bytes, placed by class name
    // TokenAuthLoginHandler::InitiateLoginRequest()
    void TokenAuthLoginHandler::InitiateLoginRequest() {
        undefined1* this_00;
        int iVar1;
        HTTPRequest* this_01;
        char* pcVar2;
        Value* pVVar3;
        Value* this_02;
        Steam* this_03;
        unique_ptr<SteamAuth, std::default_delete<SteamAuth>>* this_04;
        Layout* this_05;
        CoordMapSquare* this_06;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        basic_string* pbVar7;
        eastl::string local_e0[32];
        eastl local_c0[32];
        Json local_a0[24];
        Value local_88[40];
        allocator local_60[8];
        unique_ptr local_58[48];

        if (1 < m_tokenAuthLoginState - 1U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_requestStatus == TokenAuthLoginState::LOGIN_WAITING_PREREQUISITE || m_requestStatus == "
                      "TokenAuthLoginState::LOGIN_WAITING_LINK_COMPLETE_INTERAL_BROWSER",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/tokenauth/"
                      "TokenAuthLoginHandler.cpp",
                      138,
                      "Error - Tried to initiate login request while not in LOGIN_WAITING_PREREQUISITE state. Current "
                      "request status: %i");
        }
        std::make_unique<http::HTTPRequest>();
        this_00 = &field_104;
        std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator=(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00, local_58);
        local_58->~unique_ptr();
        if (field_112 == 2) {
            this_01 =
                (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
            this_01->SetFollowRedirects(false);
        }
        http::ConfigureBasicHeader((unique_ptr*)this_00, "application/json", "application/json");
        Json::Value::Value(local_88, 0);
        pcVar2 = (char*)GetSocialProvider();
        new (local_58) Json::Value(pcVar2);
        pVVar3 = (Value*)Json::Value::operator[](local_88, JSON_SOCIALPROVIDER);
        Json::Value::operator=(pVVar3, (Value*)local_58);
        local_58->~Value();
        pcVar2 = (char*)GetLoginHint(this);
        new (local_58) Json::Value(pcVar2);
        this_02 = (Value*)Json::Value::operator[](local_88, JSON_ACCOUNTHINT);
        pVVar3 = (Value*)local_58;
        Json::Value::operator=(this_02, pVVar3);
        local_58->~Value();
        this_03 = (Steam*)std::unique_ptr<Steam, std::default_delete<Steam>>::operator->(
            (unique_ptr<Steam, std::default_delete<Steam>>*)field_120);
        this_04 = (unique_ptr<SteamAuth, std::default_delete<SteamAuth>>*)this_03->GetSteamAuthModule();
        this_05 = (Layout*)std::unique_ptr<SteamAuth, std::default_delete<SteamAuth>>::operator->(this_04);
        eastl::string::Layout::SSOBeginPtr(this_05, (type*)pVVar3);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        new (local_58) Json::Value(pcVar2);
        pVVar3 = (Value*)Json::Value::operator[](local_88, JSON_PARAMS);
        pVVar3 = (Value*)Json::Value::operator[](pVVar3, JSON_PARAMS_SESSIONTICKET);
        Json::Value::operator=(pVVar3, (Value*)local_58);
        local_58->~Value();
        this_06 = (CoordMapSquare*)std::unique_ptr<Steam, std::default_delete<Steam>>::operator->(
            (unique_ptr<Steam, std::default_delete<Steam>>*)field_120);
        iVar1 = this_06->GetZ();
        new (local_58) Json::Value(iVar1);
        pVVar3 = (Value*)Json::Value::operator[](local_88, JSON_PARAMS);
        pVVar3 = (Value*)Json::Value::operator[](pVVar3, JSON_PARAMS_APPID);
        Json::Value::operator=(pVVar3, (Value*)local_58);
        local_58->~Value();
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        new (local_58) Json::Value(pcVar2);
        pVVar3 = (Value*)Json::Value::operator[](local_88, JSON_PARAMS);
        pVVar3 = (Value*)Json::Value::operator[](pVVar3, JSON_PARAMS_LANGUAGE);
        Json::Value::operator=(pVVar3, (Value*)local_58);
        local_58->~Value();
        new (local_58) Json::StreamWriterBuilder();
        Json::writeString(local_a0, (Factory*)local_58, local_88);
        uVar4 = logger::default_logger();
        uVar5 = local_a0->c_str();
        logger::Logger::Log(uVar4, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                            "tokenauth/TokenAuthLoginHandler.cpp",
                            164, "Sending Post Request: \n%s", uVar5);
        eastl::operator+(local_c0, (basic_string*)&field_8, (value_type*)ENDPOINT_INITIATE_AUTH);
        uVar4 = logger::default_logger();
        uVar5 = GetLoginHint(this);
        uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(uVar4, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                            "tokenauth/TokenAuthLoginHandler.cpp",
                            169, "%s : Attempting to initiate a %s request using our Steam Session Token via: %s",
                            "InitiateLoginRequest", uVar5, uVar6);
        pbVar7 = (basic_string*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
        pcVar2 = (char*)local_a0->c_str();
        eastl::allocator::allocator(local_60, "EASTL basic_string");
        eastl::string::basic_string(local_e0, pcVar2, local_60);
        pbVar7->Post(local_c0);
        eastl::string::~basic_string(local_e0);
        m_tokenAuthLoginState = 4;
        local_c0->~basic_string();
        local_a0->~string();
        local_58->~StreamWriterBuilder();
        Json::Value::~Value(local_88);
    }

    // 0x1003b24d0, 1264 bytes, placed by class name
    // TokenAuthLoginHandler::HandleLoginRequestResponse()
    void TokenAuthLoginHandler::HandleLoginRequestResponse() {
        undefined1* this_00;
        char cVar1;
        undefined4 uVar2;
        int iVar3;
        undefined4 uVar4;
        uint uVar5;
        HTTPRequest* pHVar6;
        undefined8 uVar7;
        TerrainPatch* pTVar8;
        Steam* pSVar9;
        unique_ptr<SteamAuth, std::default_delete<SteamAuth>>* this_01;
        basic_string* pbVar10;
        unique_ptr<SteamOverlay, std::default_delete<SteamOverlay>>* puVar11;
        SteamOverlay* this_02;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* pAVar12;
        Slider* this_03;
        EditLine* this_04;
        undefined8 uVar13;
        RT7Core* pRVar14;
        Array* pAVar15;
        char* pcVar16;
        int iVar17;
        undefined4 uVar18;
        undefined8 in_stack_ffffffffffffff40;
        eastl::string local_b0[32];
        Value local_90[40];
        string local_68[24];
        eastl::string local_50[32];
        allocator local_30[8];

        uVar4 = (undefined4)((ulong)in_stack_ffffffffffffff40 >> 32);
        this_00 = &field_104;
        pHVar6 = (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
        cVar1 = pHVar6->IsRequestComplete();
        if (cVar1 == '\0') {
            return;
        }
        uVar7 = logger::default_logger();
        pTVar8 = (TerrainPatch*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
        uVar2 = pTVar8->GetGridSize();
        uVar18 = 1;
        logger::Logger::Log(uVar7, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                            "tokenauth/TokenAuthLoginHandler.cpp",
                            182, "%s : Response: %i ", "HandleLoginRequestResponse", CONCAT44(uVar4, uVar2));
        pSVar9 = (Steam*)std::unique_ptr<Steam, std::default_delete<Steam>>::operator->(
            (unique_ptr<Steam, std::default_delete<Steam>>*)field_120);
        this_01 = (unique_ptr<SteamAuth, std::default_delete<SteamAuth>>*)pSVar9->GetSteamAuthModule();
        std::unique_ptr<SteamAuth, std::default_delete<SteamAuth>>::operator->(this_01);
        SteamAuth::CancelTicket();
        pTVar8 = (TerrainPatch*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
        iVar3 = pTVar8->GetGridSize();
        if (iVar3 < 422) {
            if (iVar3 == 200) {
                Json::Value::Value(local_90, 0);
                pRVar14 =
                    (RT7Core*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                        (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                pAVar15 = (Array*)pRVar14->GetMSAASampleCount();
                http::DecodeJSONResponseFromArray(local_90, pAVar15);
                Json::Value::operator[](local_90, JSON_SOCIAL_AUTH_RESPONSE_AUTH);
                Json::Value::asString();
                pcVar16 = (char*)std::string::c_str(local_68);
                eastl::allocator::allocator(local_30, "EASTL basic_string");
                eastl::string::basic_string(local_50, pcVar16, local_30);
                std::string::~string(local_68);
                uVar7 = logger::default_logger();
                uVar13 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(uVar7, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/"
                                    "auth/tokenauth/TokenAuthLoginHandler.cpp",
                                    196, "TokenAuth Success - Token received: %s", uVar13);
                SetGameTokenCredentials(this, (basic_string*)local_50);
                m_tokenAuthLoginState = 20;
            LAB_1003b2939:
                eastl::string::~basic_string(local_50);
                Json::Value::~Value(local_90);
                return;
            }
            if (iVar3 == 302) {
                pHVar6 = (HTTPRequest*)
                             std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                                 (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                pbVar10 = (basic_string*)pHVar6->GetRedirectLocation();
                pSVar9 = (Steam*)std::unique_ptr<Steam, std::default_delete<Steam>>::operator->(
                    (unique_ptr<Steam, std::default_delete<Steam>>*)field_120);
                puVar11 = (unique_ptr<SteamOverlay, std::default_delete<SteamOverlay>>*)pSVar9->GetSteamOverlayModule();
                this_02 = (SteamOverlay*)std::unique_ptr<SteamOverlay, std::default_delete<SteamOverlay>>::operator->(
                    puVar11);
                cVar1 = this_02->IsOverlayEnabled();
                if (cVar1 == '\0') {
                    Web::OpenURL(pbVar10, true);
                    m_tokenAuthLoginState = 3;
                    return;
                }
                pSVar9 = (Steam*)std::unique_ptr<Steam, std::default_delete<Steam>>::operator->(
                    (unique_ptr<Steam, std::default_delete<Steam>>*)field_120);
                puVar11 = (unique_ptr<SteamOverlay, std::default_delete<SteamOverlay>>*)pSVar9->GetSteamOverlayModule();
                uVar7 = std::unique_ptr<SteamOverlay, std::default_delete<SteamOverlay>>::operator->(puVar11);
                eastl::string::basic_string(local_b0, pbVar10);
                SteamOverlay::OpenBrowser(uVar7, local_b0);
                eastl::string::~basic_string(local_b0);
                m_tokenAuthLoginState = 2;
                return;
            }
        } else {
            if (iVar3 == 422) {
                uVar7 = logger::default_logger();
                pRVar14 =
                    (RT7Core*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                        (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                pAVar12 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                 std::default_delete<LoadingScreenScript::AnimLayer>>,
                                 eastl::allocator>*)pRVar14->GetMSAASampleCount();
                uVar13 = pAVar12->data();
                logger::Logger::Log(uVar7, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/"
                                    "auth/tokenauth/TokenAuthLoginHandler.cpp",
                                    227, "Error : %s ", uVar13);
                Json::Value::Value(local_90, 0);
                pRVar14 =
                    (RT7Core*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                        (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                pAVar15 = (Array*)pRVar14->GetMSAASampleCount();
                http::DecodeJSONResponseFromArray(local_90, pAVar15);
                Json::Value::operator[](local_90, "code");
                Json::Value::asString();
                pcVar16 = (char*)std::string::c_str(local_68);
                eastl::allocator::allocator(local_30, "EASTL basic_string");
                eastl::string::basic_string(local_50, pcVar16, local_30);
                std::string::~string(local_68);
                iVar3 = local_50->compare(SOCIAL_CHALLENGE_ERROR);
                iVar17 = 22;
                if ((iVar3 != 0) && (iVar3 = local_50->compare(SOCIAL_ACCOUNT_NOT_LINKED), iVar3 != 0)) {
                    iVar3 = local_50->compare(SOCIAL_PROVIDER_NOT_SUPPORTED);
                    if (iVar3 != 0) {
                        uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pTVar8 =
                            (TerrainPatch*)
                                std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                        uVar5 = pTVar8->GetGridSize();
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "system/auth/tokenauth/TokenAuthLoginHandler.cpp",
                                        245, "Unknown Error:(%s) with error code: %i", uVar7, (ulong)uVar5);
                    }
                    iVar17 = 23;
                }
                m_tokenAuthLoginState = iVar17;
                goto LAB_1003b2939;
            }
            if (iVar3 == 500) {
                uVar7 = logger::default_logger();
                pRVar14 =
                    (RT7Core*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                        (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                pAVar12 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                 std::default_delete<LoadingScreenScript::AnimLayer>>,
                                 eastl::allocator>*)pRVar14->GetMSAASampleCount();
                uVar13 = pAVar12->data();
                logger::Logger::Log(uVar7, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/"
                                    "auth/tokenauth/TokenAuthLoginHandler.cpp",
                                    253, "Internal Error  %s\n", uVar13);
                m_tokenAuthLoginState = 25;
                return;
            }
        }
        uVar7 = logger::default_logger();
        this_03 = (Slider*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
        uVar4 = this_03->GetCurrentValue();
        this_04 = (EditLine*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
        uVar13 = this_04->GetText();
        logger::Logger::Log(uVar7, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                            "tokenauth/TokenAuthLoginHandler.cpp",
                            263, "Error:(%i) while connecting to : %s", CONCAT44(uVar18, uVar4), uVar13);
        m_tokenAuthLoginState = 26;
    }

    // 0x1003b29d0, 192 bytes, placed by class name
    // TokenAuthLoginHandler::Init(AuthAccountHint, SocialLoginPartners)
    void TokenAuthLoginHandler::Init(int param_2, int param_3) {
        eastl::string local_50[32];
        allocator local_30[8];

        if (param_3 != 10) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                            "tokenauth/TokenAuthLoginHandler.cpp",
                            111, "Error - Only \'Steam\' is a supported provider using this flow, currently.");
        }
        ResetRequestState(this);
        eastl::allocator::allocator(local_30, "EASTL basic_string");
        eastl::string::basic_string(local_50, "", local_30);
        SetGameTokenCredentials(this, (basic_string*)local_50);
        eastl::string::~basic_string(local_50);
        field_112 = param_2;
        field_116 = 10;
        m_tokenAuthLoginState = 1;
        if (field_4 != 0) {
            m_tokenAuthLoginState = field_4;
            field_4 = 0;
        }
    }

    // 0x1003b2b00, 96 bytes, placed by class name
    // TokenAuthLoginHandler::GetLoginHint()
    undefined* TokenAuthLoginHandler::GetLoginHint() {
        int iVar1;

        iVar1 = field_112;
        if (iVar1 == 0) {
            return ACCOUNT_HINT_CHECK;
        }
        if (iVar1 == 2) {
            return ACCOUNT_HINT_EXISTING;
        }
        if (iVar1 != 1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                            "tokenauth/TokenAuthLoginHandler.cpp",
                            289, "Error: Account hint not for: %d");
        }
        return ACCOUNT_HINT_NEW;
    }

} // namespace jag::auth
