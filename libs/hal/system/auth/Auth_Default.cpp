// libs/hal/system/auth/Auth_Default.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.auth

namespace jag::auth {
    // 0x1003b0730
    void Init(const eastl::string& str1, const eastl::string& str2, const eastl::string& str3,
              const eastl::string& str4, const eastl::string& str5, const eastl::string& str6,
              const eastl::string& str7, const eastl::string& str8, const eastl::string& str9) {
        eastl::string* in_stack_fffffffffffffe58;

        AuthWeb local_198;
        m_authWeb = local_198;
        m_authWeb.Init(str1, str2, str3, str4, str6, *in_stack_fffffffffffffe58, str9);
    }

    // 0x1003b0850
    void MainLogic() {
        m_authWeb.MainLogic();
    }

    // 0x1003b0870
    void RequestGameToken() {
        if (m_authWeb.HasGameSessionCredentials() == '\0') {
            m_authWeb.InitiateRequest(1);
            return;
        }
        m_authWeb.RequestGameToken_GameSession();
    }

    // 0x1003b08a0
    void RevokeStoredCredentials() {

        eastl::string local_40("");
        m_authWeb.SetGameTokenCredentials(local_40, 4294967294);
        if (m_authWeb.HasOAuth2TokenPair() != '\0') {
            m_authWeb.RequestRevokeOAuth2Tokens();
        }
    }

    // 0x1003b0930
    void SetOAuth2Credentials(const eastl::string& str1, const eastl::string& str2, unsigned long long arg3) {
        m_authWeb.SetOAuthTokenCredentials(str1, str2, arg3);
    }

    // 0x1003b0950
    void SetGameSessionCredentials(const eastl::string& str1, const eastl::string& str2) {
        m_authWeb.SetGameSessionCredentials(str1, str2);
    }

    // 0x1003b09a0
    void ResetRequestState() {

        eastl::string local_40("");
        m_authWeb.SetGameTokenCredentials(local_40, 4294967294);
        m_authWeb.ResetRequestState();
    }

    // 0x1003b0a60
    void SetOAuthAccessTokenExpiryTime(unsigned long long arg1) {
        m_authWeb.SetOAuthAccessTokenExpiryTime(arg1);
    }

    // 0x1003b0a80
    void InvalidateRefreshToken() {
        m_authWeb.InvalidateRefreshToken();
    }

    // 0x1003b0ac0
    void GetOAuthAccessTokenExpiryTime() {
        m_authWeb.GetIndexBuffer();
    }

    // 0x1003b0af0
    void OpenShop(int arg1) {}

    // 0x1003b0b00
    void OpenShopCategories(int arg1, int arg2) {}

    // 0x1003b0b10
    auto GetToken() {
        auto result;
        result = m_authWeb.GetToken();
        return result;
    }

    // 0x1003b0bf0
    void GetResultCode() {
        m_authWeb.GetGameTokenRequestResultCode();
    }

    // 0x1003b0c60
    void IsUserAuthenticated() {
        bool cVar1 = m_authWeb.HasOAuth2TokenPair();
        uint32_t uVar2 = 1;
        if (!cVar1) {
            uVar2 = m_authWeb.HasGameSessionCredentials();
        }
        return uVar2;
    }

    // 0x1003b0c90
    void IsOAuth2RequestInProcess() {
        m_authWeb.IsStillRequestingOAuth2Tokens();
    }

    // 0x1003b0cc0
    void ConfigureOAuth2Tokens(const eastl::string& str1, const eastl::string& str2, const eastl::string& str3,
                               const eastl::string& str4) {
        m_authWeb.RequestOAuth2Tokens(str1, str2, str3, str4);
    }

    // 0x1003b0ce0
    void AttemptAuthenticationUsingSocialNetwork(SocialLoginPartners socialLoginPartners,
                                                 AuthAccountHint authAccountHint) {
        return 0;
    }

    // 0x1003b0cf0
    void ApplyPendingTransactions() {}

    // 0x1003b0d00
    void GetPendingTransactionsApplicationState() {
        return 0;
    }

    // 0x1003b0d10
    void InitialiseAnalyticsService() {}

    // 0x1003b0d20
    void SendAnalyticsEvent(const eastl::string& str) {}

    // 0x1003b0d30
    void InitialiseAttributionService() {}

    // 0x1003b0d40
    void SendAttributionEvent(const eastl::string& str) {}

    // 0x1003b0d50
    void SetAttributionAccountId(unsigned long long arg1) {}

    // 0x1003b0d60
    void RequestShopData() {}

    // 0x1003b0d70
    void RequestShopDataStatus() {
        return 1;
    }

    // 0x1003b0d80
    void GetCategoryCount() {
        return 4294967295;
    }

    // 0x1003b0d90
    void GetCategoryID(int arg1) {
        return 4294967295;
    }

    // 0x1003b0da0
    eastl::string* GetCategoryNameForCategoryIndex(int arg1) {
        uint32_t in_register_0000003c;

        new ((eastl::string*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1)) eastl::string("");
        return (eastl::string*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
    }

    // 0x1003b0de0
    eastl::string* GetCategoryNameForCategoryID(int arg1) {
        uint32_t in_register_0000003c;

        new ((eastl::string*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1)) eastl::string("");
        return (eastl::string*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
    }

    // 0x1003b0e20
    void GetIndexForCategoryID(int arg1) {
        return 4294967295;
    }

    // 0x1003b0e30
    void GetIndexForCategoryName(const eastl::string& str) {
        return 4294967295;
    }

    // 0x1003b0e40
    void PurchaseItem(const eastl::string& str) {}

    // 0x1003b0e50
    void GetPurchaseItemStatus() {
        return 1;
    }

    // 0x1003b0e60
    eastl::string* GetCategoryDescription(int arg1) {
        uint32_t in_register_0000003c;

        new ((eastl::string*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1)) eastl::string("");
        return (eastl::string*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
    }

    // 0x1003b0ea0
    void GetProductCount(int arg1) {
        return 4294967295;
    }

    // 0x1003b0eb0
    void IsProductAvailable(int arg1, int arg2) {
        return 0;
    }

    // 0x1003b0ec0
    void IsProductRecommended(int arg1, int arg2) {
        return 0;
    }

    // 0x1003b0ed0
    eastl::string* GetProductID(int arg1, int arg2) {
        uint32_t in_register_0000003c;

        new ((eastl::string*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1)) eastl::string("");
        return (eastl::string*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
    }

    // 0x1003b0f10
    eastl::string* GetProductName(int arg1, int arg2) {
        uint32_t in_register_0000003c;

        new ((eastl::string*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1)) eastl::string("");
        return (eastl::string*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
    }

    // 0x1003b0f50
    eastl::string* GetProductType(int arg1, int arg2) {
        uint32_t in_register_0000003c;

        new ((eastl::string*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1)) eastl::string("");
        return (eastl::string*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
    }

    // 0x1003b0f90
    eastl::string* GetProductPrice(int arg1, int arg2) {
        uint32_t in_register_0000003c;

        new ((eastl::string*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1)) eastl::string("");
        return (eastl::string*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
    }

    // 0x1003b0fd0
    void GetProductPriceAsMicroUnits(int arg1, int arg2) {
        return 0;
    }

    // 0x1003b0fe0
    eastl::string* GetProductCurrencyCode(int arg1, int arg2) {
        uint32_t in_register_0000003c;

        new ((eastl::string*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1)) eastl::string("");
        return (eastl::string*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
    }

    // 0x1003b1020
    eastl::string* GetProductIntroductoryPrice(int arg1, int arg2) {
        uint32_t in_register_0000003c;

        new ((eastl::string*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1)) eastl::string("");
        return (eastl::string*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
    }

    // 0x1003b1060
    void GetProductIntroductoryPriceAsMicroUnits(int arg1, int arg2) {
        return 0;
    }

    // 0x1003b1070
    void GetProductIntroductoryPriceDiscount(int arg1, int arg2) {
        return 0;
    }

    // 0x1003b1080
    eastl::string* GetProductFreeTrialPeriod(int arg1, int arg2) {
        uint32_t in_register_0000003c;

        new ((eastl::string*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1)) eastl::string("");
        return (eastl::string*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
    }

    // 0x1003b10c0
    void RequestReview() {}

    // 0x1003b10d0
    void IsExternalTwoFactorAuthEnabled() {
        return 0;
    }

} // namespace jag::auth
