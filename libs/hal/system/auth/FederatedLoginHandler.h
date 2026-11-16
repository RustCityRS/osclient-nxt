// libs/hal/system/auth/FederatedLoginHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::auth {
    class FederatedLoginHandler {
    public:
        FederatedLoginHandler(const eastl::string& str, int arg2);
        void MainLogic();
        void DecodeUniqueLoginURLCodeRequest();
        void DecodeFederatedLoginConfirmation();
        void AttemptAuthenticationUsingSocialNetworkFederated(SocialLoginPartners socialLoginPartners,
                                                              AuthAccountHint authAccountHint);
        void RequestUniqueLoginURLCode();
        void SetFederatedTokenPairCredentials(const eastl::string& str1, const eastl::string& str2);
        auto GetSocialEndPoint(SocialLoginPartners socialLoginPartners);
        void ResetRequestState();
        void RequestFederatedLoginConfirmation();
        void SetGameTokenCredentials(const eastl::string& str, AuthSDKTokenResponse authSDKTokenResponse);

    private:
        uint32_t field_0;
        uint8_t _unknown_4[4];
        eastl::string* field_8;
        uint8_t _unknown_16[96];
        GameTokenResult field_112;
        uint8_t _unknown_152[8];
        long field_160;
        unsigned long long field_168;
        uint32_t field_176;
    };

    class FederatedLoginTokenPair {
    public:
        ~FederatedLoginTokenPair();
        FederatedLoginTokenPair();

        uint8_t _unknown_0[40];
    };

    // 0x1003b1c30
    void FederatedLoginHandler::SetFederatedTokenPairCredentials(const eastl::string& str1, const eastl::string& str2) {
        field_48 = str1;
        field_80 = str2;
    }

    // 0x1003b1d00
    void FederatedLoginHandler::ResetRequestState() {
        field_0 = 0;
        if ((&field_152)->operator_cast_to_bool() != '\0') {
            ((HTTPRequest*)field_152.operator->())->Abort();
        }
    }

    // 0x1003b1e70
    void FederatedLoginHandler::SetGameTokenCredentials(const eastl::string& str,
                                                        AuthSDKTokenResponse authSDKTokenResponse) {
        *field_112 = str;
        *(AuthSDKTokenResponse*)(field_112 + 32) = authSDKTokenResponse;
    }

} // namespace jag::auth
