// libs/hal/system/auth/FederatedLoginHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::auth {
    class FederatedLoginHandler {
    public:
        FederatedLoginHandler(eastl::string const&, int);
        void MainLogic();
        void DecodeUniqueLoginURLCodeRequest();
        void DecodeFederatedLoginConfirmation();
        AttemptAuthenticationUsingSocialNetworkFederated(SocialLoginPartners, AuthAccountHint);
        void RequestUniqueLoginURLCode();
        void SetFederatedTokenPairCredentials(eastl::string const&, eastl::string const&);
        eastl::string* GetSocialEndPoint(SocialLoginPartners);
        void ResetRequestState();
        void RequestFederatedLoginConfirmation();
        void SetGameTokenCredentials(eastl::string const&, AuthSDKTokenResponse);

        // data members, from how the methods use this: 176 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[4];
        basic_string* field_8; // offset 8
        char _unknown_16[96];
        GameTokenResult field_112; // offset 112
        char _unknown_152[8];
        long field_160;      // offset 160
        ulonglong field_168; // offset 168
    };

    class FederatedLoginTokenPair {
    public:
        ~FederatedLoginTokenPair();
        FederatedLoginTokenPair();

        // data members, from how the methods use this: 40 bytes
        char _unknown_0[40];
    };

    // 0x1003b1190, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // FederatedLoginTokenPair::FederatedLoginTokenPair(): jumps straight to the base-object constructor

    // 0x1003b1c30, 48 bytes, inline, placed by class name and debug map
    // FederatedLoginHandler::SetFederatedTokenPairCredentials(eastl::string const&, eastl::string const&)
    void FederatedLoginHandler::SetFederatedTokenPairCredentials(basic_string* param_1, basic_string* param_2) {
        eastl::string::operator=((eastl::string*)&field_48, param_1);
        eastl::string::operator=((eastl::string*)&field_80, param_2);
    }

    // 0x1003b1d00, 64 bytes, inline, placed by class name and debug map
    // FederatedLoginHandler::ResetRequestState()
    void FederatedLoginHandler::ResetRequestState() {
        HTTPRequest* this_00;

        field_0 = 0;
        if ((&field_152)->operator_cast_to_bool()) {
            this_00 =
                (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)&field_152);
            this_00->Abort();
        }
    }

    // 0x1003b1e70, 48 bytes, inline, placed by class name and debug map
    // FederatedLoginHandler::SetGameTokenCredentials(eastl::string const&, AuthSDKTokenResponse)
    void FederatedLoginHandler::SetGameTokenCredentials(basic_string* param_1, undefined4 param_3) {
        eastl::string::operator=((eastl::string*)field_112, param_1);
        *(undefined4*)(field_112 + 32) = param_3;
    }

} // namespace jag::auth
