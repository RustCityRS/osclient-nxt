// libs/hal/system/auth/AuthWeb.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.auth

#include "AuthWeb.h"

namespace jag::auth {
    // 0x1003adf90, 176 bytes, base-object constructor, placed by class name and debug map
    // AuthWeb::AuthWeb()
    void AuthWeb::AuthWeb() {
        field_0 = 0;
        std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::unique_ptr<true, void>(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)&field_8);
        new (field_16) GameTokenResult();
        new (&field_56) OAuth2TokenPair();
        new (&field_128) GameSessionTokenCredentials();
        new (&field_192) JagexConfig();
        field_352 = 0;
    }

    // 0x1003ae0a0, 16 bytes, complete-object constructor, placed by class name and debug map
    // AuthWeb::AuthWeb(): jumps straight to the base-object constructor

    // 0x1003ae0b0, 272 bytes, placed by class name and debug map
    // AuthWeb::Init(eastl::string const&, eastl::string const&, eastl::string const&, eastl::string const&, eastl::string const&, eastl::string const&, eastl::string const&)
    void AuthWeb::Init(basic_string* param_1, basic_string* param_2, basic_string* param_3, basic_string* param_4,
                       basic_string* param_5, basic_string* param_6, basic_string* param_7) {
        JagexConfig local_e8;
        undefined8 uStack_60;
        undefined8 local_58;
        undefined8 uStack_50;

        local_58 = 0;
        uStack_50 = 0;
        local_e8._128_8_ = 0;
        uStack_60 = 0;
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
        new (&local_e8) JagexConfig();
        JagexConfig::operator=((JagexConfig*)&field_192, &local_e8);
        local_e8.~ConnectionSettings();
        eastl::string::operator=((eastl::string*)&field_192, param_1);
        eastl::string::operator=((eastl::string*)&field_224, param_7);
        eastl::string::operator=((eastl::string*)&field_256, param_2);
        eastl::string::operator=((eastl::string*)&field_288, param_3);
        eastl::string::operator=((eastl::string*)&field_320, param_4);
    }

    // 0x1003ae230, 96 bytes, placed by class name and debug map
    // AuthWeb::MainLogic()
    void AuthWeb::MainLogic() {
        switch (field_0) {
        case 1:
            DecodeOAuth2AccessTokenCheckResponse(this);
            return;
        case 2:
            DecodeOAuth2TokenRequestResponse(this);
            return;
        case 3:
            DecodeRefreshOAuth2TokensResponse(this);
            return;
        case 4:
            DecodeRevokeOAuth2TokensResponse(this);
            break;
        case 5:
            DecodeGameTokenRequestResponse(this);
            return;
        }
    }

    // 0x1003ae290, 464 bytes, placed by class name and debug map
    // AuthWeb::DecodeOAuth2AccessTokenCheckResponse()
    void AuthWeb::DecodeOAuth2AccessTokenCheckResponse() {
        undefined1* this_00;
        char cVar1;
        int iVar2;
        uint uVar3;
        HTTPRequest* pHVar4;
        TerrainPatch* pTVar5;
        RT7Core* this_01;
        Array* pAVar6;
        ulonglong uVar7;
        Slider* this_02;
        EditLine* this_03;
        undefined8 uVar8;
        allocator local_58[8];
        Value local_50[40];

        this_00 = &field_8;
        pHVar4 = (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
        cVar1 = pHVar4->IsRequestComplete();
        if (cVar1 != '\0') {
            field_0 = 0;
            pTVar5 =
                (TerrainPatch*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
            iVar2 = pTVar5->GetGridSize();
            if (iVar2 == 200) {
                Json::Value::Value(local_50, 0);
                this_01 =
                    (RT7Core*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                        (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                pAVar6 = (Array*)this_01->GetMSAASampleCount();
                http::DecodeJSONResponseFromArray(local_50, pAVar6);
                Json::Value::operator[](local_50, "exp");
                uVar7 = Json::Value::asInt64();
                SetOAuthAccessTokenExpiryTime(this, uVar7);
                Json::Value::~Value(local_50);
            } else {
                pTVar5 = (TerrainPatch*)
                             std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                                 (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                iVar2 = pTVar5->GetGridSize();
                if (iVar2 == 400) {
                    uVar7 = SystemTimer::GetTimeSecs<std::chrono::system_clock>((SystemTimer*)pTVar5);
                    SetOAuthAccessTokenExpiryTime(this, uVar7);
                } else {
                    pHVar4 = (HTTPRequest*)
                                 std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                                     (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                    cVar1 = pHVar4->HasTimedOut();
                    if (cVar1 == '\0') {
                        this_02 =
                            (Slider*)
                                std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                        uVar3 = this_02->GetCurrentValue();
                        this_03 =
                            (EditLine*)
                                std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                        uVar8 = this_03->GetText();
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "system/auth/AuthWeb.cpp",
                                        239, "Error:(%i) while connecting to : %s", (ulong)uVar3, uVar8);
                    }
                    eastl::allocator::allocator(local_58, "EASTL basic_string");
                    new (local_50) eastl::string("", local_58);
                    SetGameTokenCredentials(this, (eastl::string*)local_50, 4294967292);
                    local_50->~basic_string();
                }
            }
            this_00->reset(0);
            cVar1 = HasAccessTokenExpired(this);
            if (cVar1 == '\0') {
                PerformQueuedAction(this);
            } else {
                RequestRefreshOAuth2Tokens(this);
            }
        }
    }

    // 0x1003ae460, 1024 bytes, placed by class name and debug map
    // AuthWeb::DecodeOAuth2TokenRequestResponse()
    void AuthWeb::DecodeOAuth2TokenRequestResponse() {
        undefined1* this_00;
        char cVar1;
        int iVar2;
        uint uVar3;
        HTTPRequest* pHVar4;
        TerrainPatch* pTVar5;
        RT7Core* this_01;
        Array* pAVar6;
        char* pcVar7;
        undefined8 uVar8;
        undefined8 uVar9;
        undefined8 uVar10;
        SystemTimer* this_02;
        long lVar11;
        ulonglong uVar12;
        Slider* this_03;
        EditLine* this_04;
        allocator local_b0[8];
        string local_a8[32];
        allocator local_88[24];
        Value local_70[40];
        eastl::string local_48[32];

        this_00 = &field_8;
        pHVar4 = (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
        cVar1 = pHVar4->IsRequestComplete();
        if (cVar1 != '\0') {
            pTVar5 =
                (TerrainPatch*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
            iVar2 = pTVar5->GetGridSize();
            if (iVar2 == 200) {
                Json::Value::Value(local_70, 0);
                this_01 =
                    (RT7Core*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                        (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                pAVar6 = (Array*)this_01->GetMSAASampleCount();
                http::DecodeJSONResponseFromArray(local_70, pAVar6);
                Json::Value::operator[](local_70, "access_token");
                Json::Value::asString();
                pcVar7 = (char*)std::string::c_str(local_a8);
                eastl::allocator::allocator(local_88, "EASTL basic_string");
                eastl::string::basic_string(local_48, pcVar7, local_88);
                std::string::~string(local_a8);
                Json::Value::operator[](local_70, "refresh_token");
                Json::Value::asString();
                pcVar7 = (char*)local_88->c_str();
                eastl::allocator::allocator(local_b0, "EASTL basic_string");
                new (local_a8) eastl::string(pcVar7, local_b0);
                local_88->~string();
                uVar8 = logger::default_logger();
                uVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(
                    uVar8, 0, 8,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp",
                    487, "Got OAuth2TokenPair back: { %s , %s } ", uVar9, uVar10);
                this_02 = (SystemTimer*)Json::Value::operator[](local_70, "expires_in");
                lVar11 = Json::Value::asInt64();
                uVar12 = SystemTimer::GetTimeSecs<std::chrono::system_clock>(this_02);
                SetOAuthTokenCredentials(this, (basic_string*)local_48, (basic_string*)local_a8, uVar12 + lVar11);
                local_a8->~basic_string();
                eastl::string::~basic_string(local_48);
                Json::Value::~Value(local_70);
            } else {
                pTVar5 = (TerrainPatch*)
                             std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                                 (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                iVar2 = pTVar5->GetGridSize();
                if (iVar2 == 400) {
                    new (local_a8) eastl::allocator("EASTL basic_string");
                    new (local_70) eastl::string("", local_a8);
                    eastl::allocator::allocator(local_88, "EASTL basic_string");
                    eastl::string::basic_string(local_48, "", local_88);
                    SetOAuthTokenCredentials(this, (basic_string*)local_70, (basic_string*)local_48, 0);
                    eastl::string::~basic_string(local_48);
                } else {
                    pHVar4 = (HTTPRequest*)
                                 std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                                     (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                    cVar1 = pHVar4->HasTimedOut();
                    if (cVar1 == '\0') {
                        this_03 =
                            (Slider*)
                                std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                        uVar3 = this_03->GetCurrentValue();
                        this_04 =
                            (EditLine*)
                                std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                        uVar8 = this_04->GetText();
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "system/auth/AuthWeb.cpp",
                                        508, "Error:(%i) while connecting to : %s", (ulong)uVar3, uVar8);
                    }
                    new (local_48) eastl::allocator("EASTL basic_string");
                    new (local_70) eastl::string("", local_48);
                    SetGameTokenCredentials(this, (eastl::string*)local_70, 4294967292);
                }
                local_70->~basic_string();
            }
            this_00->reset(0);
            field_0 = 0;
        }
    }

    // 0x1003ae860, 1248 bytes, placed by class name and debug map
    // AuthWeb::DecodeGameTokenRequestResponse()
    void AuthWeb::DecodeGameTokenRequestResponse() {
        undefined1* this_00;
        char cVar1;
        int iVar3;
        uint uVar4;
        uint uVar5;
        HTTPRequest* pHVar6;
        TerrainPatch* pTVar7;
        basic_string* pbVar8;
        RT7Core* pRVar9;
        Array* pAVar10;
        char* pcVar11;
        ulong uVar12;
        undefined8 uVar13;
        undefined8 uVar14;
        Slider* this_01;
        EditLine* this_02;
        eastl::string* this_03;
        eastl::string local_198[32];
        undefined1 local_178[328];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = &field_8;
        pHVar6 = (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
        cVar1 = pHVar6->IsRequestComplete();
        if (cVar1 == '\0')
            goto LAB_1003aeb8f;
        pTVar7 = (TerrainPatch*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
        iVar3 = pTVar7->GetGridSize();
        if (iVar3 == 200) {
            eastl::string::basic_string(local_198);
            pHVar6 =
                (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
            pbVar8 = (basic_string*)pHVar6->GetContentType();
            if (!eastl::operator==(pbVar8, (value_type*)"application/json")) {
                pRVar9 =
                    (RT7Core*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                        (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                pAVar10 = (Array*)pRVar9->GetMSAASampleCount();
                new (local_178) PacketT<Array<unsigned char, eastl::allocator>>(pAVar10);
                new ((local_178 + 32)) eastl::fixed_string<char, 256, true, eastl::allocator>();
                pcVar11 = (char*)local_178->GetDataPtr();
                uVar12 = local_178->GetTextureAtlas();
                stringtools::CP1252ToUTF8<eastl::fixed_string<char, 256, true, eastl::allocator>>(
                    pcVar11, uVar12, (fixed_string*)(local_178 + 32));
                pcVar11 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::string::assign(local_198, pcVar11);
                /* WARNING: Subroutine does not return */
                ((local_178 + 32))->~fixed_string();
            }
            new ((local_178 + 32)) Json::Value(0);
            pRVar9 = (RT7Core*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
            pAVar10 = (Array*)pRVar9->GetMSAASampleCount();
            http::DecodeJSONResponseFromArray((Value*)(local_178 + 32), pAVar10);
            Json::Value::operator[]((Value*)(local_178 + 32), "token");
            Json::Value::asString();
            pcVar11 = (char*)local_178->c_str();
            eastl::string::assign(local_198, pcVar11);
            local_178->~string();
            ((local_178 + 32))->~Value();
            uVar13 = logger::default_logger();
            uVar14 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(
                uVar13, 0, 8,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp",
                405, "%s : Response: %s ", "DecodeGameTokenRequestResponse", uVar14);
            pcVar11 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            new (local_178) eastl::allocator("EASTL basic_string");
            new ((local_178 + 32)) eastl::string(pcVar11, local_178);
            SetGameTokenCredentials(this, local_178 + 32, 0);
            ((local_178 + 32))->~basic_string();
            this_03 = local_198;
        } else {
            pTVar7 =
                (TerrainPatch*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
            iVar3 = pTVar7->GetGridSize();
            if (iVar3 == 401) {
                new (local_198) eastl::allocator("EASTL basic_string");
                new ((local_178 + 32)) eastl::string("", local_198);
                SetGameTokenCredentials(this, (eastl::string*)(local_178 + 32), 1401);
            } else {
                pTVar7 = (TerrainPatch*)
                             std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                                 (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                iVar3 = pTVar7->GetGridSize();
                if (iVar3 != 502) {
                    pTVar7 = (TerrainPatch*)
                                 std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                                     (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                    iVar3 = pTVar7->GetGridSize();
                    if (iVar3 != 404) {
                        pHVar6 =
                            (HTTPRequest*)
                                std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                        cVar1 = pHVar6->HasTimedOut();
                        if (cVar1 == '\0') {
                            this_01 =
                                (Slider*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::
                                operator->(
                                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                            uVar4 = this_01->GetCurrentValue();
                            pTVar7 =
                                (TerrainPatch*)std::
                                    unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->((
                                        unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                            uVar5 = pTVar7->GetGridSize();
                            this_02 =
                                (EditLine*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::
                                operator->(
                                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                            uVar13 = this_02->GetText();
                            /* WARNING: Subroutine does not return */
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                            "system/auth/AuthWeb.cpp",
                                            429, "Error Code: %i, Response Code: %i while connecting to : %s",
                                            (ulong)uVar4, (ulong)uVar5, uVar13);
                        }
                        new (local_198) eastl::allocator("EASTL basic_string");
                        new ((local_178 + 32)) eastl::string("", local_198);
                        SetGameTokenCredentials(this, (eastl::string*)(local_178 + 32), 4294967292);
                        goto LAB_1003aea3d;
                    }
                }
                new (local_198) eastl::allocator("EASTL basic_string");
                new ((local_178 + 32)) eastl::string("", local_198);
                SetGameTokenCredentials(this, (eastl::string*)(local_178 + 32), 1403);
            }
        LAB_1003aea3d:
            this_03 = (eastl::string*)(local_178 + 32);
        }
        eastl::string::~basic_string(this_03);
        field_0 = 0;
        this_00->reset(0);
    LAB_1003aeb8f:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003aed40, 48 bytes, placed by class name and debug map
    // AuthWeb::DecodeRefreshOAuth2TokensResponse()
    void AuthWeb::DecodeRefreshOAuth2TokensResponse() {
        DecodeOAuth2TokenRequestResponse(this);
        if (field_0 == 0) {
            PerformQueuedAction(this);
        }
    }

    // 0x1003aed70, 448 bytes, placed by class name and debug map
    // AuthWeb::DecodeRevokeOAuth2TokensResponse()
    void AuthWeb::DecodeRevokeOAuth2TokensResponse() {
        undefined1* this_00;
        undefined4 uVar2;
        undefined4 uVar4;
        HTTPRequest* this_01;
        undefined8 uVar5;
        TerrainPatch* pTVar6;
        Slider* this_02;
        EditLine* this_03;
        undefined8 uVar7;
        eastl::string local_80[32];
        allocator local_60[8];
        eastl::string local_58[32];
        allocator local_38[8];

        this_00 = &field_8;
        this_01 = (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
        if (this_01->IsRequestComplete() != '\0') {
            uVar5 = logger::default_logger();
            pTVar6 =
                (TerrainPatch*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
            uVar2 = pTVar6->GetGridSize();
            logger::Logger::Log(
                uVar5, 0, 8,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp",
                298, "%s : Response: %i ", "DecodeRevokeOAuth2TokensResponse", uVar2);
            pTVar6 =
                (TerrainPatch*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
            if (pTVar6->GetGridSize() != 200) {
                uVar5 = logger::default_logger();
                this_02 =
                    (Slider*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                        (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                uVar2 = this_02->GetCurrentValue();
                pTVar6 = (TerrainPatch*)
                             std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                                 (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                uVar4 = pTVar6->GetGridSize();
                this_03 =
                    (EditLine*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                        (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
                uVar7 = this_03->GetText();
                logger::Logger::Log(
                    uVar5, 0, 3,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp",
                    304, "Error Code: %i, Response Code: %i, while connecting to : %s", CONCAT44(1, uVar2), uVar4,
                    uVar7);
            }
            eastl::allocator::allocator(local_60, "EASTL basic_string");
            eastl::string::basic_string(local_80, "", local_60);
            eastl::allocator::allocator(local_38, "EASTL basic_string");
            eastl::string::basic_string(local_58, "", local_38);
            SetOAuthTokenCredentials(this, (basic_string*)local_80, (basic_string*)local_58, 0);
            eastl::string::~basic_string(local_58);
            eastl::string::~basic_string(local_80);
            field_0 = 0;
            this_00->reset(0);
        }
    }

    // 0x1003aef30, 128 bytes, placed by class name and debug map
    // AuthWeb::InitiateRequest(ActionRequest)
    void AuthWeb::InitiateRequest(uint param_2) {
        char cVar1;

        if ((field_352 != 0) || (field_0 != 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_queuedAction == ActionRequest::NOT_SELECTED && m_requestStatus == AuthWebRequestState::AUTH_IDLE",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp", 81,
                "Error - Tried to queue an action (%i) while not in AUTH_IDLE state!", (ulong)param_2);
        }
        field_352 = param_2;
        cVar1 = IsAccessTokenExpiryUnknown(this);
        if (cVar1 == '\0') {
            cVar1 = HasAccessTokenExpired(this);
            if (cVar1 == '\0') {
                PerformQueuedAction(this);
            } else {
                RequestRefreshOAuth2Tokens(this);
            }
        } else {
            RequestAccessTokenCheck(this);
        }
    }

    // 0x1003aefc0, 592 bytes, placed by class name and debug map
    // AuthWeb::RequestAccessTokenCheck()
    void AuthWeb::RequestAccessTokenCheck() {
        undefined1* this_00;
        undefined8 uVar2;
        undefined8 uVar3;
        HTTPRequest* pHVar4;
        eastl::string* pbVar5;
        vector local_c0[32];
        vector<std::pair<char const*, char const*>, eastl::allocator> local_a0[32];
        unique_ptr local_80[32];
        char* local_60;
        allocator local_58[8];
        pair<char const*, char const*> local_50[32];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() !=
            '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "!m_currentOAuth2TokenPair.m_OAuth2AccessToken.empty()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp",
                180, "Error - Tried to initiate a access token check without an access token!");
        }
        if (field_0 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_requestStatus == AUTH_IDLE",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp",
                183,
                "Error - Tried to initiate a token refresh request while not in AUTH_IDLE state. Current request "
                "status: %i");
        }
        std::make_unique<http::HTTPRequest>();
        this_00 = &field_8;
        std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator=(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00, local_80);
        local_80->~unique_ptr();
        pbVar5 = (eastl::string*)local_80;
        new (local_80) eastl::string();
        ConstructAuthorisationHeader((basic_string*)pbVar5, (basic_string*)local_80, (basic_string*)&field_192);
        http::ConfigureBasicAuthHeader((unique_ptr*)this_00, (basic_string*)local_80);
        local_60 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::pair<char const*, char const*>::pair<char const*&, char const*, false>(local_50, &HTTP_PARAM_TOKEN,
                                                                                    &local_60);
        eastl::allocator::allocator(local_58, "EASTL vector");
        eastl::vector<std::pair<char const*, char const*>, eastl::allocator>::vector(local_c0, local_50, 1, local_58);
        eastl::operator+((eastl*)local_50, (basic_string*)&field_320, (value_type*)"shield/oauth/check_token");
        uVar2 = logger::default_logger();
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(
            uVar2, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp", 203,
            "%s : Attempting to check our OAuth2 Access Token via: %s", "RequestAccessTokenCheck", uVar3);
        pHVar4 = (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
        eastl::vector<std::pair<char const*, char const*>, eastl::allocator>::vector(local_a0, local_c0);
        pHVar4->Post(local_50, local_a0);
        eastl::vector<std::pair<char const*, char const*>, eastl::allocator>::~vector(local_a0);
        field_0 = 1;
        local_50->~basic_string();
        local_c0->~vector();
        local_80->~basic_string();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003af230, 656 bytes, placed by class name and debug map
    // AuthWeb::RequestRefreshOAuth2Tokens()
    void AuthWeb::RequestRefreshOAuth2Tokens() {
        undefined1* this_00;
        undefined8 uVar1;
        undefined8 uVar2;
        HTTPRequest* pHVar3;
        eastl::string* pbVar4;
        eastl::string local_e8[32];
        vector local_c8[32];
        vector<std::pair<char const*, char const*>, eastl::allocator> local_a8[32];
        char* local_88;
        char* local_80;
        char* local_78;
        allocator local_70[8];
        unique_ptr local_68[16];
        pair<char const*, char const*> local_58[16];
        pair<char const*, char const*> local_48[16];
        pair<char const*, char const*> local_38[16];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (field_0 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_requestStatus == AUTH_IDLE",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp",
                134,
                "Error - Tried to initiate a token refresh request while not in AUTH_IDLE state. Current request "
                "status: %i");
        }
        std::make_unique<http::HTTPRequest>();
        this_00 = &field_8;
        std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator=(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00, local_68);
        local_68->~unique_ptr();
        pbVar4 = local_e8;
        eastl::string::basic_string(local_e8);
        ConstructAuthorisationHeader((basic_string*)pbVar4, (basic_string*)local_e8, (basic_string*)&field_192);
        http::ConfigureBasicAuthHeader((unique_ptr*)this_00, (basic_string*)local_e8);
        local_88 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::pair<char const*, char const*>::pair<char const*&, char const*, false>(
            (pair<char const*, char const*>*)local_68, &HTTP_PARAM_REFRESH_TOKEN, &local_88);
        local_80 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::pair<char const*, char const*>::pair<char const*&, char const*, false>(local_58, &HTTP_PARAM_SCOPE,
                                                                                    &local_80);
        local_78 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::pair<char const*, char const*>::pair<char const*&, char const*, false>(local_48, &HTTP_PARAM_REDIRTO,
                                                                                    &local_78);
        std::pair<char const*, char const*>::pair<char const*&, char const*&, false>(local_38, &HTTP_PARAM_GRANT_TYPE,
                                                                                     &HTTP_VALUE_GRANT_TYPE);
        eastl::allocator::allocator(local_70, "EASTL vector");
        eastl::vector<std::pair<char const*, char const*>, eastl::allocator>::vector(local_c8, local_68, 4, local_70);
        eastl::operator+((eastl*)local_68, (basic_string*)&field_320, (value_type*)"shield/oauth/token");
        uVar1 = logger::default_logger();
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(
            uVar1, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp", 157,
            "%s : Attempting to refresh our OAuth2Access Token via: %s", "RequestRefreshOAuth2Tokens", uVar2);
        pHVar3 = (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
        eastl::vector<std::pair<char const*, char const*>, eastl::allocator>::vector(local_a8, local_c8);
        pHVar3->Post(local_68, local_a8);
        eastl::vector<std::pair<char const*, char const*>, eastl::allocator>::~vector(local_a8);
        field_0 = 3;
        local_68->~basic_string();
        local_c8->~vector();
        eastl::string::~basic_string(local_e8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003af4c0, 208 bytes, placed by class name and debug map
    // AuthWeb::PerformQueuedAction()
    void AuthWeb::PerformQueuedAction() {
        undefined8 uVar2;
        eastl::string local_48[32];
        allocator local_28[8];

        uVar2 = logger::default_logger();
        logger::Logger::Log(
            uVar2, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp", 105,
            "Performing queued action: %i", field_352);
        if (field_352 == 1) {
            if (eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
                '\0') {
                RequestGameToken_OAuth2(this);
            } else {
                eastl::allocator::allocator(local_28, "EASTL basic_string");
                eastl::string::basic_string(local_48, "", local_28);
                SetGameTokenCredentials(this, local_48, 1401);
                eastl::string::~basic_string(local_48);
                field_352 = 0;
            }
        }
    }

    // 0x1003af590, 496 bytes, placed by class name and debug map
    // AuthWeb::RequestGameToken_OAuth2()
    void AuthWeb::RequestGameToken_OAuth2() {
        undefined1* this_00;
        undefined8 uVar2;
        undefined8 uVar3;
        basic_string* pbVar4;
        eastl::string local_90[32];
        unique_ptr local_70[32];
        allocator local_50[32];
        allocator local_30[8];

        if (HasOAuth2TokenPair(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "HasOAuth2TokenPair()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp",
                356, "Error - Tried to request a GameToken without checking if IsUserAuthenticated!");
        }
        if (field_0 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_requestStatus == AuthWebRequestState::AUTH_IDLE",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp",
                358,
                "Error - Tried to initiate a token request while not in AUTH_IDLE state. Current request status: %i");
        }
        std::make_unique<http::HTTPRequest>();
        this_00 = &field_8;
        std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator=(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00, local_70);
        local_70->~unique_ptr();
        eastl::allocator::allocator(local_50, "EASTL basic_string");
        new (local_70) eastl::string("Bearer", local_50);
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::string::append_sprintf((char*)local_70, " %s", uVar2);
        http::ConfigureBasicAuthHeader((unique_ptr*)this_00, (basic_string*)local_70);
        eastl::operator+((eastl*)local_50, (basic_string*)&field_320,
                         (value_type*)"public/v1/games/YCfdbvr2pM1zUYMxJRexZY/play");
        uVar2 = logger::default_logger();
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(
            uVar2, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp", 372,
            "Requesting GameToken with an OAuth2Access token via: %s", uVar3);
        pbVar4 = (basic_string*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
        eastl::allocator::allocator(local_30, "EASTL basic_string");
        eastl::string::basic_string(local_90, "", local_30);
        pbVar4->Post(local_50);
        eastl::string::~basic_string(local_90);
        field_0 = 5;
        field_352 = 0;
        local_50->~basic_string();
        local_70->~basic_string();
    }

    // 0x1003af820, 320 bytes, placed by class name and debug map
    // AuthWeb::ConstructAuthorisationHeader(eastl::string&, eastl::string const&, eastl::string const&)
    void AuthWeb::ConstructAuthorisationHeader(basic_string* param_1, basic_string* param_2, basic_string* param_3) {
        int iVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        char* pcVar4;
        Base64* this;
        uchar* puVar5;
        ulong uVar6;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>> local_88[32];
        eastl::string local_68[32];
        eastl::string local_48[32];

        eastl::string::basic_string(local_48);
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::string::sprintf((char*)local_48, "%s:%s", uVar2, uVar3);
        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        iVar1 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252(pcVar4, false);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(local_88, (long)iVar1);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringNoConversion<
            eastl::fixed_string<char, 32, true, eastl::allocator>>(local_88, (fixed_string*)local_48, false);
        eastl::string::basic_string(local_68);
        this = (Base64*)Base64::Instance();
        puVar5 = (uchar*)local_88->GetDataPtr();
        uVar6 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        Encode(local_68, puVar5, uVar6);
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::string::append_sprintf((char*)param_2, "%s %s", "Basic", uVar2);
        eastl::string::~basic_string(local_68);
        local_88->~PacketT();
        eastl::string::~basic_string(local_48);
    }

    // 0x1003afad0, 544 bytes, placed by class name and debug map
    // AuthWeb::RequestRevokeOAuth2Tokens()
    void AuthWeb::RequestRevokeOAuth2Tokens() {
        undefined1* this_00;
        undefined8 uVar1;
        undefined8 uVar2;
        HTTPRequest* pHVar3;
        eastl::string* pbVar4;
        vector local_b8[32];
        vector<std::pair<char const*, char const*>, eastl::allocator> local_98[32];
        unique_ptr local_78[32];
        char* local_58;
        allocator local_50[8];
        pair<char const*, char const*> local_48[16];
        pair<char const*, char const*> local_38[16];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (field_0 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_requestStatus == AuthWebRequestState::AUTH_IDLE",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp",
                264,
                "Error - Tried to initiate a token revoke while not in AUTH_IDLE state. Current request status: %i");
        }
        std::make_unique<http::HTTPRequest>();
        this_00 = &field_8;
        std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator=(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00, local_78);
        local_78->~unique_ptr();
        pbVar4 = (eastl::string*)local_78;
        new (local_78) eastl::string();
        ConstructAuthorisationHeader((basic_string*)pbVar4, (basic_string*)local_78, (basic_string*)&field_192);
        http::ConfigureBasicAuthHeader((unique_ptr*)this_00, (basic_string*)local_78);
        local_58 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::pair<char const*, char const*>::pair<char const*&, char const*, false>(local_48, &HTTP_PARAM_TOKEN,
                                                                                    &local_58);
        std::pair<char const*, char const*>::pair<char const*&, char const*&, false>(
            local_38, &HTTP_PARAM_TOKEN_TYPE_HINT, &HTTP_VALUE_TOKEN_HINT_TYPE);
        eastl::allocator::allocator(local_50, "EASTL vector");
        eastl::vector<std::pair<char const*, char const*>, eastl::allocator>::vector(local_b8, local_48, 2, local_50);
        eastl::operator+((eastl*)local_48, (basic_string*)&field_320, (value_type*)"shield/oauth/revoke");
        uVar1 = logger::default_logger();
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(
            uVar1, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp", 285,
            "Revoking our OAuth2Access Token via: %s", uVar2);
        pHVar3 = (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
        eastl::vector<std::pair<char const*, char const*>, eastl::allocator>::vector(local_98, local_b8);
        pHVar3->Post(local_48, local_98);
        eastl::vector<std::pair<char const*, char const*>, eastl::allocator>::~vector(local_98);
        field_0 = 4;
        local_48->~basic_string();
        local_b8->~vector();
        local_78->~basic_string();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003afd20, 752 bytes, placed by class name and debug map
    // AuthWeb::RequestGameToken_GameSession()
    void AuthWeb::RequestGameToken_GameSession() {
        undefined1* this_00;
        undefined8 uVar2;
        undefined8 uVar3;
        char* pcVar4;
        Value* this_01;
        HTTPRequest* this_02;
        char* pcVar5;
        eastl::string local_d8[32];
        Value local_b8[40];
        eastl local_90[32];
        unique_ptr local_70[48];
        Json local_40[24];

        if (HasGameSessionCredentials(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "HasGameSessionCredentials()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp",
                320, "Error - Tried to request a GameToken without checking if IsUserAuthenticated!");
        }
        if (field_0 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_requestStatus == AuthWebRequestState::AUTH_IDLE",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp",
                322,
                "Error - Tried to initiate a token request while not in AUTH_IDLE state. Current request status: %i");
        }
        std::make_unique<http::HTTPRequest>();
        this_00 = &field_8;
        std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator=(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00, local_70);
        local_70->~unique_ptr();
        new (local_70) eastl::allocator("EASTL basic_string");
        eastl::string::basic_string(local_d8, "Bearer", (allocator*)local_70);
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::string::append_sprintf((char*)local_d8, " %s", uVar2);
        http::ConfigureBasicJsonHeader((unique_ptr*)this_00, (basic_string*)local_d8);
        eastl::operator+(local_90, (basic_string*)&field_320, (value_type*)"game-session/v1/tokens");
        uVar2 = logger::default_logger();
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(
            uVar2, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp", 336,
            "Requesting GameToken with a GameSession token via: %s", uVar3);
        Json::Value::Value(local_b8, 0);
        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        new (local_70) Json::Value(pcVar4);
        this_01 = (Value*)Json::Value::operator[](local_b8, "accountId");
        Json::Value::operator=(this_01, (Value*)local_70);
        local_70->~Value();
        new (local_70) Json::StreamWriterBuilder();
        Json::writeString(local_40, (Factory*)local_70, local_b8);
        uVar2 = logger::default_logger();
        uVar3 = local_40->c_str();
        logger::Logger::Log(
            uVar2, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp", 344,
            "Sending Post Request: \n%s", uVar3);
        this_02 = (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pcVar5 = (char*)local_40->c_str();
        this_02->Post(pcVar4, pcVar5);
        field_0 = 5;
        field_352 = 0;
        local_40->~string();
        local_70->~StreamWriterBuilder();
        Json::Value::~Value(local_b8);
        local_90->~basic_string();
        eastl::string::~basic_string(local_d8);
    }

    // 0x1003b00c0, 704 bytes, placed by class name and debug map
    // AuthWeb::RequestOAuth2Tokens(eastl::string const&, eastl::string const&, eastl::string const&, eastl::string const&)
    void AuthWeb::RequestOAuth2Tokens(basic_string* param_1, basic_string* param_2, basic_string* param_3,
                                      basic_string* param_4) {
        undefined1* this_00;
        undefined8 uVar1;
        undefined8 uVar2;
        HTTPRequest* pHVar3;
        eastl::string* pbVar4;
        eastl::string local_110[32];
        vector local_f0[32];
        vector<std::pair<char const*, char const*>, eastl::allocator> local_d0[32];
        char* local_b0;
        char* local_a8;
        char* local_a0;
        char* local_98;
        allocator local_90[8];
        basic_string* local_88;
        basic_string* local_80;
        unique_ptr local_78[16];
        pair<char const*, char const*> local_68[16];
        pair<char const*, char const*> local_58[16];
        pair<char const*, char const*> local_48[16];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_88 = param_4;
        local_80 = param_3;
        if (field_0 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_requestStatus == AUTH_IDLE",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp",
                444,
                "Error - Tried to initiate a token request while not in AUTH_IDLE state. Current request status: %i");
        }
        std::make_unique<http::HTTPRequest>();
        this_00 = &field_8;
        std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator=(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00, local_78);
        local_78->~unique_ptr();
        pbVar4 = local_110;
        eastl::string::basic_string(local_110);
        ConstructAuthorisationHeader((basic_string*)pbVar4, (basic_string*)local_110, (basic_string*)&field_192);
        http::ConfigureBasicAuthHeader((unique_ptr*)this_00, (basic_string*)local_110);
        local_b0 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::pair<char const*, char const*>::pair<char const*&, char const*, false>(
            (pair<char const*, char const*>*)local_78, &HTTP_PARAM_GRANT_TYPE, &local_b0);
        local_a8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::pair<char const*, char const*>::pair<char const*&, char const*, false>(local_68, &HTTP_PARAM_TOKEN,
                                                                                    &local_a8);
        local_a0 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::pair<char const*, char const*>::pair<char const*&, char const*, false>(local_58, &HTTP_PARAM_REDIRTO,
                                                                                    &local_a0);
        local_98 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::pair<char const*, char const*>::pair<char const*&, char const*, false>(local_48, &HTTP_PARAM_SIG,
                                                                                    &local_98);
        eastl::allocator::allocator(local_90, "EASTL vector");
        eastl::vector<std::pair<char const*, char const*>, eastl::allocator>::vector(local_f0, local_78, 4, local_90);
        eastl::operator+((eastl*)local_78, (basic_string*)&field_320, (value_type*)"shield/oauth/token");
        uVar1 = logger::default_logger();
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(
            uVar1, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/auth/AuthWeb.cpp", 467,
            "Requesting OAuth2TokenPair with an OTL token via: %s", uVar2);
        pHVar3 = (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this_00);
        eastl::vector<std::pair<char const*, char const*>, eastl::allocator>::vector(local_d0, local_f0);
        pHVar3->Post(local_78, local_d0);
        eastl::vector<std::pair<char const*, char const*>, eastl::allocator>::~vector(local_d0);
        field_0 = 2;
        local_78->~basic_string();
        local_f0->~vector();
        eastl::string::~basic_string(local_110);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::auth
