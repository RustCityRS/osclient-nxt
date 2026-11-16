// libs/hal/system/auth/FederatedLoginHandler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.auth

#include "FederatedLoginHandler.h"

namespace jag::auth {
    // 0x1003b10e0, 176 bytes, base-object constructor, placed by class name
    // FederatedLoginHandler::FederatedLoginHandler(eastl::string const&, int)
    void FederatedLoginHandler::FederatedLoginHandler(basic_string* param_1, int param_2) {
        char* pcVar1;
        long lVar2;
        allocator local_30[8];

        field_0 = 0;
        field_8 = param_1;
        lVar2 = Language::GetByID(param_2);
        pcVar1 = *(char**)(lVar2 + 16);
        eastl::allocator::allocator(local_30, "EASTL basic_string");
        new (&field_16, pcVar1, local_30) eastl::string();
        new (&field_48) FederatedLoginTokenPair();
        new (field_112) GameTokenResult();
        std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::unique_ptr<true, void>(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)&field_152);
        field_160 = 2000;
        field_168 = 0;
    }

    // 0x1003b11a0, 16 bytes, complete-object constructor, placed by class name
    // FederatedLoginHandler::FederatedLoginHandler(eastl::string const&, int): jumps straight to the base-object constructor

    // 0x1003b11b0, 32 bytes, placed by class name
    // FederatedLoginHandler::MainLogic()
    void FederatedLoginHandler::MainLogic() {
        if (field_0 == 2) {
            DecodeFederatedLoginConfirmation(this);
        } else if (field_0 == 1) {
            DecodeUniqueLoginURLCodeRequest(this);
            return;
        }
    }

    // 0x1003b11d0, 1136 bytes, placed by class name
    // FederatedLoginHandler::DecodeUniqueLoginURLCodeRequest()
    void FederatedLoginHandler::DecodeUniqueLoginURLCodeRequest() {
        undefined1* this_00;
        basic_string* pbVar1;
        undefined4 uVar3;
        HTTPRequest* this_01;
        undefined8 uVar5;
        TerrainPatch* pTVar6;
        RT7Core* this_02;
        Array* pAVar7;
        char* pcVar8;
        undefined8 uVar9;
        eastl local_128[32];
        basic_string local_108[32];
        eastl::string local_e8[32];
        allocator local_c8[32];
        string local_a8[32];
        Value local_88[40];
        eastl::string local_60[32];
        allocator local_40[32];

        if (field_0 != 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_requestStatus == FederatedLoginState::WAITING_FEDERATED_UNIQUE_LOGIN_CODE_URL",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                      "FederatedLoginHandler.cpp",
                      99, "Error - tried to decode unique login URL while not in correct state");
        }
        this_00 = &field_152;
        this_01 = (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
        if (this_01->IsRequestComplete() != '\0') {
            uVar5 = logger::default_logger();
            pTVar6 =
                (TerrainPatch*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
            uVar3 = pTVar6->GetGridSize();
            logger::Logger::Log(uVar5, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                                "FederatedLoginHandler.cpp",
                                104, "%s : Response: %i ", "DecodeUniqueLoginURLCodeRequest", uVar3);
            pTVar6 =
                (TerrainPatch*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
            if (pTVar6->GetGridSize() == 200) {
                Json::Value::Value(local_88, 0);
                this_02 =
                    (RT7Core*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                        (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                pAVar7 = (Array*)this_02->GetMSAASampleCount();
                http::DecodeJSONResponseFromArray(local_88, pAVar7);
                Json::Value::operator[](local_88, "loginCode");
                Json::Value::asString();
                pcVar8 = (char*)std::string::c_str(local_a8);
                eastl::allocator::allocator(local_40, "EASTL basic_string");
                eastl::string::basic_string(local_60, pcVar8, local_40);
                std::string::~string(local_a8);
                Json::Value::operator[](local_88, "pollingCode");
                Json::Value::asString();
                pcVar8 = (char*)local_40->c_str();
                eastl::allocator::allocator(local_c8, "EASTL basic_string");
                new (local_a8) eastl::string(pcVar8, local_c8);
                local_40->~string();
                SetFederatedTokenPairCredentials(this, (basic_string*)local_60, (basic_string*)local_a8);
                pbVar1 = field_8;
                GetSocialEndPoint(local_e8);
                eastl::operator+(local_108, pbVar1);
                eastl::operator+(local_128, local_108, (basic_string*)&field_16);
                eastl::operator+((eastl*)local_c8, (basic_string*)local_128, (value_type*)"?loginCode=");
                eastl::operator+((eastl*)local_40, (basic_string*)local_c8, (basic_string*)local_60);
                local_c8->~basic_string();
                local_128->~basic_string();
                local_108->~basic_string();
                eastl::string::~basic_string(local_e8);
                uVar5 = logger::default_logger();
                uVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(uVar5, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/"
                                    "auth/FederatedLoginHandler.cpp",
                                    121, "Opening Social URL: %s", uVar9);
                Web::OpenURLOverlaid((basic_string*)local_40);
                ResetRequestState(this);
                RequestFederatedLoginConfirmation(this);
                local_40->~basic_string();
                local_a8->~basic_string();
                eastl::string::~basic_string(local_60);
                Json::Value::~Value(local_88);
            } else {
                new (local_a8) eastl::allocator("EASTL basic_string");
                new (local_88) eastl::string("", local_a8);
                eastl::allocator::allocator(local_40, "EASTL basic_string");
                eastl::string::basic_string(local_60, "", local_40);
                SetFederatedTokenPairCredentials(this, (basic_string*)local_88, (basic_string*)local_60);
                eastl::string::~basic_string(local_60);
                local_88->~basic_string();
                new (local_60) eastl::allocator("EASTL basic_string");
                new (local_88) eastl::string("", local_60);
                SetGameTokenCredentials(this, (eastl::string*)local_88, 1403);
                local_88->~basic_string();
                ResetRequestState(this);
            }
        }
    }

    // 0x1003b1640, 1200 bytes, placed by class name
    // FederatedLoginHandler::DecodeFederatedLoginConfirmation()
    void FederatedLoginHandler::DecodeFederatedLoginConfirmation() {
        undefined1* this_00;
        long lVar1;
        undefined4 uVar3;
        int iVar4;
        uint uVar5;
        ulonglong uVar6;
        HTTPRequest* this_01;
        undefined8 uVar7;
        TerrainPatch* pTVar8;
        ulonglong uVar9;
        RT7Core* this_02;
        Array* pAVar10;
        Slider* this_03;
        EditLine* this_04;
        char* pcVar11;
        allocator local_90[24];
        eastl::string local_78[32];
        eastl::string local_58[40];
        allocator local_30[8];

        lVar1 = field_160;
        uVar9 = field_168;
        uVar6 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this);
        if (lVar1 + uVar9 <= uVar6) {
            this_00 = &field_152;
            this_01 =
                (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
            if (this_01->IsRequestComplete() != '\0') {
                uVar7 = logger::default_logger();
                pTVar8 = (TerrainPatch*)
                             std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                                 (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                uVar3 = pTVar8->GetGridSize();
                pcVar11 = "DecodeFederatedLoginConfirmation";
                logger::Logger::Log(uVar7, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/"
                                    "auth/FederatedLoginHandler.cpp",
                                    176, "%s : Response: %i ", "DecodeFederatedLoginConfirmation", uVar3);
                pTVar8 = (TerrainPatch*)
                             std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                                 (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                iVar4 = pTVar8->GetGridSize();
                if (iVar4 < 401) {
                    if (iVar4 == 200) {
                        new (local_58) Json::Value(0);
                        this_02 =
                            (RT7Core*)
                                std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                        pAVar10 = (Array*)this_02->GetMSAASampleCount();
                        http::DecodeJSONResponseFromArray((Value*)local_58, pAVar10);
                        Json::Value::operator[]((Value*)local_58, "otlToken");
                        Json::Value::asString();
                        pcVar11 = (char*)local_90->c_str();
                        eastl::allocator::allocator(local_30, "EASTL basic_string");
                        eastl::string::basic_string(local_78, pcVar11, local_30);
                        local_90->~string();
                        SetGameTokenCredentials(this, local_78, 0);
                        ResetRequestState(this);
                        eastl::string::~basic_string(local_78);
                        local_58->~Value();
                    } else {
                        if (iVar4 != 202) {
                        LAB_1003b197b:
                            eastl::allocator::allocator(local_90, "EASTL basic_string");
                            eastl::string::basic_string(local_58, "", local_90);
                            eastl::allocator::allocator(local_30, "EASTL basic_string");
                            eastl::string::basic_string(local_78, "", local_30);
                            SetFederatedTokenPairCredentials(this, (basic_string*)local_58, (basic_string*)local_78);
                            eastl::string::~basic_string(local_78);
                            eastl::string::~basic_string(local_58);
                            new (local_78) eastl::allocator("EASTL basic_string");
                            eastl::string::basic_string(local_58, "", (allocator*)local_78);
                            SetGameTokenCredentials(this, local_58, 1403);
                            eastl::string::~basic_string(local_58);
                            this_03 =
                                (Slider*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::
                                operator->(
                                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                            uVar5 = this_03->GetCurrentValue();
                            this_04 =
                                (EditLine*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::
                                operator->(
                                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                            uVar7 = this_04->GetText();
                            /* WARNING: Subroutine does not return */
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                            "system/auth/FederatedLoginHandler.cpp",
                                            239, "Error:(%i) while connecting to : %s", (ulong)uVar5, uVar7);
                        }
                        uVar9 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)pTVar8);
                        field_168 = uVar9;
                        ResetRequestState(this);
                        RequestFederatedLoginConfirmation(this);
                    }
                } else {
                    if (iVar4 == 401) {
                        eastl::allocator::allocator(local_90, "EASTL basic_string");
                        eastl::string::basic_string(local_58, "", local_90);
                        eastl::allocator::allocator(local_30, "EASTL basic_string");
                        eastl::string::basic_string(local_78, "", local_30);
                        SetFederatedTokenPairCredentials(this, (basic_string*)local_58, (basic_string*)local_78);
                        eastl::string::~basic_string(local_78);
                        eastl::string::~basic_string(local_58);
                        new (local_78) eastl::allocator("EASTL basic_string");
                        eastl::string::basic_string(local_58, "", (allocator*)local_78);
                        SetGameTokenCredentials(this, local_58, 1404);
                    } else {
                        if (iVar4 != 403)
                            goto LAB_1003b197b;
                        uVar7 = logger::default_logger();
                        logger::Logger::Log(uVar7, 0, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                            "system/auth/FederatedLoginHandler.cpp",
                                            212,
                                            "Invalid Login! - Implies bad credentials, or credentials have expired on "
                                            "the remote server",
                                            pcVar11, uVar3);
                        eastl::allocator::allocator(local_90, "EASTL basic_string");
                        eastl::string::basic_string(local_58, "", local_90);
                        eastl::allocator::allocator(local_30, "EASTL basic_string");
                        eastl::string::basic_string(local_78, "", local_30);
                        SetFederatedTokenPairCredentials(this, (basic_string*)local_58, (basic_string*)local_78);
                        eastl::string::~basic_string(local_78);
                        eastl::string::~basic_string(local_58);
                        new (local_78) eastl::allocator("EASTL basic_string");
                        eastl::string::basic_string(local_58, "", (allocator*)local_78);
                        SetGameTokenCredentials(this, local_58, 1401);
                    }
                    eastl::string::~basic_string(local_58);
                    ResetRequestState(this);
                }
            }
        }
    }

    // 0x1003b1af0, 48 bytes, placed by class name
    // FederatedLoginHandler::AttemptAuthenticationUsingSocialNetworkFederated(SocialLoginPartners, AuthAccountHint)
    undefined8 FederatedLoginHandler::AttemptAuthenticationUsingSocialNetworkFederated(FederatedLoginHandler* param_1,
                                                                                       int param_2) {
        undefined8 uVar1;

        param_1[1].field_0 = param_2;
        if ((param_2 == 8) || (uVar1 = 1, param_2 == 4)) {
            RequestUniqueLoginURLCode(param_1);
            uVar1 = 2;
        }
        return uVar1;
    }

    // 0x1003b1b20, 272 bytes, placed by class name
    // FederatedLoginHandler::RequestUniqueLoginURLCode()
    void FederatedLoginHandler::RequestUniqueLoginURLCode() {
        undefined1* this_00;
        undefined8 uVar1;
        undefined8 uVar2;
        basic_string* pbVar3;
        unique_ptr local_48[32];

        if (field_0 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_requestStatus == FederatedLoginState::FEDERATED_LOGIN_IDLE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                      "FederatedLoginHandler.cpp",
                      78,
                      "Error - Tried to request login confirmation while not in FEDERATED_LOGIN_IDLE state. Current "
                      "request status: %i");
        }
        std::make_unique<http::HTTPRequest>();
        this_00 = &field_152;
        std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator=(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00, local_48);
        local_48->~unique_ptr();
        http::ConfigureBasicHeader((unique_ptr*)this_00, "application/x-www-form-urlencoded", "application/json");
        eastl::operator+((eastl*)local_48, field_8, (value_type*)"pts/v1/initiate/");
        uVar1 = logger::default_logger();
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(uVar1, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                            "FederatedLoginHandler.cpp",
                            88, "Requesting federated login via: %s", uVar2);
        pbVar3 = (basic_string*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
        pbVar3->Get();
        field_0 = 1;
        local_48->~basic_string();
    }

    // 0x1003b1c60, 160 bytes, placed by class name
    // FederatedLoginHandler::GetSocialEndPoint(SocialLoginPartners)
    eastl::string* FederatedLoginHandler::GetSocialEndPoint(eastl::string* param_1, undefined8 param_2, uint param_3) {
        char* pcVar1;
        allocator local_20[8];

        if (param_3 == 8) {
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "apple/v1/social/login/";
        } else {
            if (param_3 != 4) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                                "FederatedLoginHandler.cpp",
                                263, "Error: SocialLoginPartner not found: %s", (ulong)param_3);
            }
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            pcVar1 = "google/v1/social/login/";
        }
        eastl::string::basic_string(param_1, pcVar1, local_20);
        return param_1;
    }

    // 0x1003b1d40, 304 bytes, placed by class name
    // FederatedLoginHandler::RequestFederatedLoginConfirmation()
    void FederatedLoginHandler::RequestFederatedLoginConfirmation() {
        undefined1* this_00;
        undefined8 uVar1;
        undefined8 uVar2;
        basic_string* pbVar3;
        eastl local_60[32];
        unique_ptr local_40[32];

        if (field_0 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_requestStatus == FederatedLoginState::FEDERATED_LOGIN_IDLE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                      "FederatedLoginHandler.cpp",
                      148,
                      "Error - Tried to request login confirmation while not in FEDERATED_LOGIN_IDLE state. Current "
                      "request status: %i");
        }
        std::make_unique<http::HTTPRequest>();
        this_00 = &field_152;
        std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator=(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00, local_40);
        local_40->~unique_ptr();
        http::ConfigureBasicHeader((unique_ptr*)this_00, "application/x-www-form-urlencoded", "application/json");
        eastl::operator+(local_60, field_8, (value_type*)"pts/v1/poll/");
        eastl::operator+((eastl*)local_40, (basic_string*)local_60, (basic_string*)&field_80);
        local_60->~basic_string();
        uVar1 = logger::default_logger();
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(uVar1, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                            "FederatedLoginHandler.cpp",
                            158, "Requesting federated login confirmation from: %s", uVar2);
        pbVar3 = (basic_string*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
        pbVar3->Get();
        field_0 = 2;
        local_40->~basic_string();
    }

} // namespace jag::auth
