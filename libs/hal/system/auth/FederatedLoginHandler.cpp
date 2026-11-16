// libs/hal/system/auth/FederatedLoginHandler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.auth

#include "FederatedLoginHandler.h"

namespace jag::auth {
    // 0x1003b10e0
    FederatedLoginHandler::FederatedLoginHandler(const eastl::string& str, int arg2) : field_0(0), field_8(str) {
        long lVar1 = ((Language*)(unsigned long)(unsigned int)arg2)->GetByID((unsigned int)str);
        char* str_00 = *(char**)(lVar1 + 16);
        new (&field_16) eastl::string(str_00);
        new (&field_48) FederatedLoginTokenPair();
        new (field_112) GameTokenResult();
        field_152.unique_ptr<true, void>();
        field_160 = 2000;
        field_168 = 0;
    }

    // 0x1003b11b0
    void FederatedLoginHandler::MainLogic() {
        if (field_0 == 2) {
            DecodeFederatedLoginConfirmation();
        } else if (field_0 == 1) {
            DecodeUniqueLoginURLCodeRequest();
            return;
        }
    }

    // 0x1003b11d0
    void FederatedLoginHandler::DecodeUniqueLoginURLCodeRequest() {
        uint32_t uVar2;
        Logger* pLVar4;
        TerrainPatch* pTVar5;
        RT7Core* this_02;
        Array<unsigned char>* arg2;
        char* pcVar6;
        uint64_t uVar7;
        eastl::string* pbVar8;
        eastl::string local_128;
        eastl::string local_108;
        ReturnValue local_e8;
        Value local_a8;
        Value local_88;
        eastl::string local_60;

        if (field_0 != 1) {
            LogAssert("m_requestStatus == FederatedLoginState::WAITING_FEDERATED_UNIQUE_LOGIN_CODE_URL",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                      "FederatedLoginHandler.cpp",
                      99, "Error - tried to decode unique login URL while not in correct state");
        }
        uint8_t* this_00 = &field_152;
        if (((HTTPRequest*)(*this_00).operator->())->IsRequestComplete() != '\0') {
            pLVar4 = logger::default_logger();
            pTVar5 = (TerrainPatch*)(*this_00).operator->();
            uVar2 = pTVar5->GetGridSize();
            pLVar4->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                        "FederatedLoginHandler.cpp",
                        104, "%s : Response: %i ", "DecodeUniqueLoginURLCodeRequest", uVar2);
            pTVar5 = (TerrainPatch*)(*this_00).operator->();
            if (pTVar5->GetGridSize() == 200) {
                local_88 = Json::Value(0);
                this_02 = (RT7Core*)(*this_00).operator->();
                arg2 = (Array<unsigned char>*)this_02->GetMSAASampleCount();
                http::DecodeJSONResponseFromArray(local_88, *arg2);
                local_88["loginCode"];
                Json::Value::asString(&local_a8);
                pcVar6 = (char*)std::string::c_str(&local_a8);
                local_60 = eastl::string(pcVar6);
                std::string::~string(&local_a8);
                local_88["pollingCode"];
                Json::Value::asString(&local_40);
                pcVar6 = (char*)std::string::c_str(&local_40);
                local_a8 = eastl::string(pcVar6);
                std::string::~string(&local_40);
                SetFederatedTokenPairCredentials(*&local_60, local_a8);
                pbVar8 = field_8;
                GetSocialEndPoint(&local_e8, &local_60, field_176);
                local_108 + *pbVar8;
                local_128 + local_108;
                local_c8 + local_128;
                local_40 + local_c8;
                pLVar4 = logger::default_logger();
                uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pbVar8 = nullptr;
                pLVar4->Log(false, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                            "FederatedLoginHandler.cpp",
                            121, "Opening Social URL: %s", uVar7);
                local_40.OpenURLOverlaid(*pbVar8);
                ResetRequestState();
                RequestFederatedLoginConfirmation();
            } else {
                local_88 = eastl::string("");
                local_60 = eastl::string("");
                SetFederatedTokenPairCredentials(local_88, local_60);
                local_88 = eastl::string("");
                SetGameTokenCredentials(local_88, 1403);
                ResetRequestState();
            }
        }
    }

    // 0x1003b1640
    void FederatedLoginHandler::DecodeFederatedLoginConfirmation() {
        uint8_t* this_00;
        uint32_t uVar3;
        int iVar4;
        unsigned int uVar5;
        Logger* pLVar7;
        TerrainPatch* pTVar8;
        RT7Core* this_02;
        Array<unsigned char>* arg2;
        uint64_t uVar10;
        char* pcVar11;
        eastl::string local_78;
        eastl::string local_58;

        long lVar1 = field_160;
        unsigned long long uVar9 = field_168;
        unsigned long long uVar6 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
        if (lVar1 + uVar9 <= uVar6) {
            this_00 = &field_152;
            if (((HTTPRequest*)(*this_00).operator->())->IsRequestComplete() != '\0') {
                pLVar7 = logger::default_logger();
                pTVar8 = (TerrainPatch*)(*this_00).operator->();
                uVar3 = pTVar8->GetGridSize();
                pcVar11 = "DecodeFederatedLoginConfirmation";
                pLVar7->Log(false, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                            "FederatedLoginHandler.cpp",
                            176, "%s : Response: %i ", "DecodeFederatedLoginConfirmation", uVar3);
                pTVar8 = (TerrainPatch*)(*this_00).operator->();
                iVar4 = pTVar8->GetGridSize();
                if (iVar4 < 401) {
                    if (iVar4 == 200) {
                        local_58 = Json::Value(0);
                        this_02 = (RT7Core*)(*this_00).operator->();
                        arg2 = (Array<unsigned char>*)this_02->GetMSAASampleCount();
                        http::DecodeJSONResponseFromArray(local_58, *arg2);
                        local_58["otlToken"];
                        Json::Value::asString(&local_90);
                        pcVar11 = (char*)std::string::c_str(&local_90);
                        local_78 = eastl::string(pcVar11);
                        std::string::~string(&local_90);
                        SetGameTokenCredentials(local_78, 0);
                        ResetRequestState();
                    } else {
                        if (iVar4 != 202) {
                        LAB_1003b197b:
                            local_58 = eastl::string("");
                            local_78 = eastl::string("");
                            SetFederatedTokenPairCredentials(local_58, local_78);
                            local_58 = eastl::string("");
                            SetGameTokenCredentials(local_58, 1403);
                            uVar5 = ((Slider*)(*this_00).operator->())->GetCurrentValue();
                            uVar10 = ((EditLine*)(*this_00).operator->())->GetText();
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                            "system/auth/FederatedLoginHandler.cpp",
                                            239, "Error:(%i) while connecting to : %s", (unsigned long)uVar5, uVar10);
                        }
                        uVar9 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
                        field_168 = uVar9;
                        ResetRequestState();
                        RequestFederatedLoginConfirmation();
                    }
                } else {
                    if (iVar4 == 401) {
                        local_58 = eastl::string("");
                        local_78 = eastl::string("");
                        SetFederatedTokenPairCredentials(local_58, local_78);
                        local_58 = eastl::string("");
                        SetGameTokenCredentials(local_58, 1404);
                    } else {
                        if (iVar4 != 403)
                            goto LAB_1003b197b;
                        pLVar7 = logger::default_logger();
                        pLVar7->Log(false, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/"
                                    "auth/FederatedLoginHandler.cpp",
                                    212,
                                    "Invalid Login! - Implies bad credentials, or credentials have expired on the "
                                    "remote server",
                                    pcVar11, uVar3);
                        local_58 = eastl::string("");
                        local_78 = eastl::string("");
                        SetFederatedTokenPairCredentials(local_58, local_78);
                        local_58 = eastl::string("");
                        SetGameTokenCredentials(local_58, 1401);
                    }
                    ResetRequestState();
                }
            }
        }
    }

    // 0x1003b1af0
    void
    FederatedLoginHandler::AttemptAuthenticationUsingSocialNetworkFederated(SocialLoginPartners socialLoginPartners,
                                                                            AuthAccountHint authAccountHint) {
        uint64_t uVar1;
        uint32_t in_register_0000003c;

        *(AuthAccountHint*)((((uint64_t)in_register_0000003c << 32) | (uint32_t)socialLoginPartners) + 176) =
            authAccountHint;
        if ((authAccountHint == 8) || (uVar1 = 1, authAccountHint == 4)) {
            RequestUniqueLoginURLCode(
                (FederatedLoginHandler*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)socialLoginPartners));
            uVar1 = 2;
        }
        return uVar1;
    }

    // 0x1003b1b20
    void FederatedLoginHandler::RequestUniqueLoginURLCode() {
        if (field_0 != 0) {
            LogAssert("m_requestStatus == FederatedLoginState::FEDERATED_LOGIN_IDLE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                      "FederatedLoginHandler.cpp",
                      78,
                      "Error - Tried to request login confirmation while not in FEDERATED_LOGIN_IDLE state. Current "
                      "request status: %i");
        }
        auto local_48 = std::make_unique<http::HTTPRequest>();
        uint8_t* this_00 = &field_152;
        *this_00 = &local_48;
        http::ConfigureBasicHeader(*this_00, "application/x-www-form-urlencoded", "application/json");
        local_48 + *field_8;
        auto this_01 = logger::default_logger();
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        this_01->Log(false, 8,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                     "FederatedLoginHandler.cpp",
                     88, "Requesting federated login via: %s", uVar1);
        ((HTTPRequest*)(*this_00).operator->())->Get(&local_48);
        field_0 = 1;
    }

    // 0x1003b1c60
    auto FederatedLoginHandler::GetSocialEndPoint(SocialLoginPartners socialLoginPartners) {
        char* str;

        if (socialLoginPartners == 8) {
            str = "apple/v1/social/login/";
        } else {
            if (socialLoginPartners != 4) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                                "FederatedLoginHandler.cpp",
                                263, "Error: SocialLoginPartner not found: %s", (unsigned long)socialLoginPartners);
            }
            str = "google/v1/social/login/";
        }
        return auto(str);
    }

    // 0x1003b1d40
    void FederatedLoginHandler::RequestFederatedLoginConfirmation() {
        eastl::string local_60;

        if (field_0 != 0) {
            LogAssert("m_requestStatus == FederatedLoginState::FEDERATED_LOGIN_IDLE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                      "FederatedLoginHandler.cpp",
                      148,
                      "Error - Tried to request login confirmation while not in FEDERATED_LOGIN_IDLE state. Current "
                      "request status: %i");
        }
        auto local_40 = std::make_unique<http::HTTPRequest>();
        uint8_t* this_00 = &field_152;
        *this_00 = &local_40;
        http::ConfigureBasicHeader(*this_00, "application/x-www-form-urlencoded", "application/json");
        local_60 + *field_8;
        local_40 + local_60;
        auto this_01 = logger::default_logger();
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        this_01->Log(false, 8,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/"
                     "FederatedLoginHandler.cpp",
                     158, "Requesting federated login confirmation from: %s", uVar1);
        ((HTTPRequest*)(*this_00).operator->())->Get(&local_40);
        field_0 = 2;
    }

} // namespace jag::auth
