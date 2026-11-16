// libs/hal/system/auth/Auth_Default.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.auth

namespace jag::auth {
    // 0x1003b0730, 160 bytes, placed by class name and debug map
    // Init(eastl::string const&, eastl::string const&, eastl::string const&, eastl::string const&, eastl::string const&, eastl::string const&, eastl::string const&, eastl::string const&, eastl::string const&)
    void Init(basic_string* param_1, basic_string* param_2, basic_string* param_3, basic_string* param_4,
              basic_string* param_5, basic_string* param_6, basic_string* param_7, basic_string* param_8,
              basic_string* param_9) {
        basic_string* in_stack_fffffffffffffe58;
        AuthWeb local_198;

        new (&local_198) AuthWeb();
        AuthWeb::operator=((AuthWeb*)&m_authWeb, &local_198);
        local_198.~AuthWeb();
        m_authWeb.Init(param_1, param_2, param_3, param_4, param_6, in_stack_fffffffffffffe58, param_9);
    }

    // 0x1003b0850, 32 bytes, placed by class name and debug map
    // MainLogic()
    void MainLogic() {
        m_authWeb.MainLogic();
    }

    // 0x1003b0870, 48 bytes, placed by class name and debug map
    // RequestGameToken()
    void RequestGameToken() {
        if (m_authWeb.HasGameSessionCredentials() == '\0') {
            m_authWeb.InitiateRequest(1);
            return;
        }
        m_authWeb.RequestGameToken_GameSession();
    }

    // 0x1003b08a0, 144 bytes, placed by class name and debug map
    // RevokeStoredCredentials()
    void RevokeStoredCredentials() {
        eastl::string local_40[32];
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        eastl::string::basic_string(local_40, "", local_20);
        m_authWeb.SetGameTokenCredentials(local_40, 4294967294);
        eastl::string::~basic_string(local_40);
        if (m_authWeb.HasOAuth2TokenPair() != '\0') {
            m_authWeb.RequestRevokeOAuth2Tokens();
        }
    }

    // 0x1003b0930, 32 bytes, placed by class name and debug map
    // SetOAuth2Credentials(eastl::string const&, eastl::string const&, unsigned long long)
    void SetOAuth2Credentials(basic_string* param_1, basic_string* param_2, ulonglong param_3) {
        m_authWeb.SetOAuthTokenCredentials(param_1, param_2, param_3);
    }

    // 0x1003b0950, 32 bytes, placed by class name and debug map
    // SetGameSessionCredentials(eastl::string const&, eastl::string const&)
    void SetGameSessionCredentials(basic_string* param_1, basic_string* param_2) {
        m_authWeb.SetGameSessionCredentials(param_1, param_2);
    }

    // 0x1003b09a0, 128 bytes, placed by class name and debug map
    // ResetRequestState()
    void ResetRequestState() {
        eastl::string local_40[32];
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        eastl::string::basic_string(local_40, "", local_20);
        m_authWeb.SetGameTokenCredentials(local_40, 4294967294);
        eastl::string::~basic_string(local_40);
        m_authWeb.ResetRequestState();
    }

    // 0x1003b0a60, 32 bytes, placed by class name and debug map
    // SetOAuthAccessTokenExpiryTime(unsigned long long)
    void SetOAuthAccessTokenExpiryTime(ulonglong param_1) {
        m_authWeb.SetOAuthAccessTokenExpiryTime(param_1);
    }

    // 0x1003b0a80, 32 bytes, placed by class name and debug map
    // InvalidateRefreshToken()
    void InvalidateRefreshToken() {
        m_authWeb.InvalidateRefreshToken();
    }

    // 0x1003b0ac0, 32 bytes, placed by class name and debug map
    // GetOAuthAccessTokenExpiryTime()
    void GetOAuthAccessTokenExpiryTime() {
        m_authWeb.GetIndexBuffer();
    }

    // 0x1003b0af0, 16 bytes, placed by class name and debug map
    // OpenShop(int)
    void OpenShop(int param_1) {}

    // 0x1003b0b00, 16 bytes, placed by class name and debug map
    // OpenShopCategories(int, int)
    void OpenShopCategories(int param_1, int param_2) {}

    // 0x1003b0b10, 32 bytes, placed by class name and debug map
    // GetToken()
    auth* GetToken() {
        GetToken();
        return this;
    }

    // 0x1003b0bf0, 32 bytes, placed by class name and debug map
    // GetResultCode()
    void GetResultCode() {
        m_authWeb.GetGameTokenRequestResultCode();
    }

    // 0x1003b0c60, 48 bytes, placed by class name and debug map
    // IsUserAuthenticated()
    undefined4 IsUserAuthenticated() {
        char cVar1;
        undefined4 uVar2;

        cVar1 = m_authWeb.HasOAuth2TokenPair();
        uVar2 = 1;
        if (cVar1 == '\0') {
            uVar2 = m_authWeb.HasGameSessionCredentials();
        }
        return uVar2;
    }

    // 0x1003b0c90, 32 bytes, placed by class name and debug map
    // IsOAuth2RequestInProcess()
    void IsOAuth2RequestInProcess() {
        m_authWeb.IsStillRequestingOAuth2Tokens();
    }

    // 0x1003b0cc0, 32 bytes, placed by class name and debug map
    // ConfigureOAuth2Tokens(eastl::string const&, eastl::string const&, eastl::string const&, eastl::string const&)
    void ConfigureOAuth2Tokens(basic_string* param_1, basic_string* param_2, basic_string* param_3,
                               basic_string* param_4) {
        m_authWeb.RequestOAuth2Tokens(param_1, param_2, param_3, param_4);
    }

    // 0x1003b0ce0, 16 bytes, placed by class name and debug map
    // AttemptAuthenticationUsingSocialNetwork(SocialLoginPartners, AuthAccountHint)
    undefined8 AttemptAuthenticationUsingSocialNetwork() {
        return 0;
    }

    // 0x1003b0cf0, 16 bytes, placed by class name and debug map
    // ApplyPendingTransactions()
    void ApplyPendingTransactions() {}

    // 0x1003b0d00, 16 bytes, placed by class name and debug map
    // GetPendingTransactionsApplicationState()
    undefined8 GetPendingTransactionsApplicationState() {
        return 0;
    }

    // 0x1003b0d10, 16 bytes, placed by class name and debug map
    // InitialiseAnalyticsService()
    void InitialiseAnalyticsService() {}

    // 0x1003b0d20, 16 bytes, placed by class name and debug map
    // SendAnalyticsEvent(eastl::string const&)
    void SendAnalyticsEvent(basic_string* param_1) {}

    // 0x1003b0d30, 16 bytes, placed by class name and debug map
    // InitialiseAttributionService()
    void InitialiseAttributionService() {}

    // 0x1003b0d40, 16 bytes, placed by class name and debug map
    // SendAttributionEvent(eastl::string const&)
    void SendAttributionEvent(basic_string* param_1) {}

    // 0x1003b0d50, 16 bytes, placed by class name and debug map
    // SetAttributionAccountId(unsigned long long)
    void SetAttributionAccountId(ulonglong param_1) {}

    // 0x1003b0d60, 16 bytes, placed by class name and debug map
    // RequestShopData()
    void RequestShopData() {}

    // 0x1003b0d70, 16 bytes, placed by class name and debug map
    // RequestShopDataStatus()
    undefined8 RequestShopDataStatus() {
        return 1;
    }

    // 0x1003b0d80, 16 bytes, placed by class name and debug map
    // GetCategoryCount()
    undefined8 GetCategoryCount() {
        return 4294967295;
    }

    // 0x1003b0d90, 16 bytes, placed by class name and debug map
    // GetCategoryID(int)
    undefined8 GetCategoryID(int param_1) {
        return 4294967295;
    }

    // 0x1003b0da0, 64 bytes, placed by class name and debug map
    // GetCategoryNameForCategoryIndex(int)
    eastl::string* GetCategoryNameForCategoryIndex(int param_1) {
        undefined4 in_register_0000003c;
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (CONCAT44(in_register_0000003c, param_1)) eastl::string("", local_20);
        return (eastl::string*)CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1003b0de0, 64 bytes, placed by class name and debug map
    // GetCategoryNameForCategoryID(int)
    eastl::string* GetCategoryNameForCategoryID(int param_1) {
        undefined4 in_register_0000003c;
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (CONCAT44(in_register_0000003c, param_1)) eastl::string("", local_20);
        return (eastl::string*)CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1003b0e20, 16 bytes, placed by class name and debug map
    // GetIndexForCategoryID(int)
    undefined8 GetIndexForCategoryID(int param_1) {
        return 4294967295;
    }

    // 0x1003b0e30, 16 bytes, placed by class name and debug map
    // GetIndexForCategoryName(eastl::string const&)
    undefined8 GetIndexForCategoryName(basic_string* param_1) {
        return 4294967295;
    }

    // 0x1003b0e40, 16 bytes, placed by class name and debug map
    // PurchaseItem(eastl::string const&)
    void PurchaseItem(basic_string* param_1) {}

    // 0x1003b0e50, 16 bytes, placed by class name and debug map
    // GetPurchaseItemStatus()
    undefined8 GetPurchaseItemStatus() {
        return 1;
    }

    // 0x1003b0e60, 64 bytes, placed by class name and debug map
    // GetCategoryDescription(int)
    eastl::string* GetCategoryDescription(int param_1) {
        undefined4 in_register_0000003c;
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (CONCAT44(in_register_0000003c, param_1)) eastl::string("", local_20);
        return (eastl::string*)CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1003b0ea0, 16 bytes, placed by class name and debug map
    // GetProductCount(int)
    undefined8 GetProductCount(int param_1) {
        return 4294967295;
    }

    // 0x1003b0eb0, 16 bytes, placed by class name and debug map
    // IsProductAvailable(int, int)
    undefined8 IsProductAvailable(int param_1, int param_2) {
        return 0;
    }

    // 0x1003b0ec0, 16 bytes, placed by class name and debug map
    // IsProductRecommended(int, int)
    undefined8 IsProductRecommended(int param_1, int param_2) {
        return 0;
    }

    // 0x1003b0ed0, 64 bytes, placed by class name and debug map
    // GetProductID(int, int)
    eastl::string* GetProductID(int param_1, int param_2) {
        undefined4 in_register_0000003c;
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (CONCAT44(in_register_0000003c, param_1)) eastl::string("", local_20);
        return (eastl::string*)CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1003b0f10, 64 bytes, placed by class name and debug map
    // GetProductName(int, int)
    eastl::string* GetProductName(int param_1, int param_2) {
        undefined4 in_register_0000003c;
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (CONCAT44(in_register_0000003c, param_1)) eastl::string("", local_20);
        return (eastl::string*)CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1003b0f50, 64 bytes, placed by class name and debug map
    // GetProductType(int, int)
    eastl::string* GetProductType(int param_1, int param_2) {
        undefined4 in_register_0000003c;
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (CONCAT44(in_register_0000003c, param_1)) eastl::string("", local_20);
        return (eastl::string*)CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1003b0f90, 64 bytes, placed by class name and debug map
    // GetProductPrice(int, int)
    eastl::string* GetProductPrice(int param_1, int param_2) {
        undefined4 in_register_0000003c;
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (CONCAT44(in_register_0000003c, param_1)) eastl::string("", local_20);
        return (eastl::string*)CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1003b0fd0, 16 bytes, placed by class name and debug map
    // GetProductPriceAsMicroUnits(int, int)
    undefined8 GetProductPriceAsMicroUnits(int param_1, int param_2) {
        return 0;
    }

    // 0x1003b0fe0, 64 bytes, placed by class name and debug map
    // GetProductCurrencyCode(int, int)
    eastl::string* GetProductCurrencyCode(int param_1, int param_2) {
        undefined4 in_register_0000003c;
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (CONCAT44(in_register_0000003c, param_1)) eastl::string("", local_20);
        return (eastl::string*)CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1003b1020, 64 bytes, placed by class name and debug map
    // GetProductIntroductoryPrice(int, int)
    eastl::string* GetProductIntroductoryPrice(int param_1, int param_2) {
        undefined4 in_register_0000003c;
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (CONCAT44(in_register_0000003c, param_1)) eastl::string("", local_20);
        return (eastl::string*)CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1003b1060, 16 bytes, placed by class name and debug map
    // GetProductIntroductoryPriceAsMicroUnits(int, int)
    undefined8 GetProductIntroductoryPriceAsMicroUnits(int param_1, int param_2) {
        return 0;
    }

    // 0x1003b1070, 16 bytes, placed by class name and debug map
    // GetProductIntroductoryPriceDiscount(int, int)
    undefined8 GetProductIntroductoryPriceDiscount(int param_1, int param_2) {
        return 0;
    }

    // 0x1003b1080, 64 bytes, placed by class name and debug map
    // GetProductFreeTrialPeriod(int, int)
    eastl::string* GetProductFreeTrialPeriod(int param_1, int param_2) {
        undefined4 in_register_0000003c;
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (CONCAT44(in_register_0000003c, param_1)) eastl::string("", local_20);
        return (eastl::string*)CONCAT44(in_register_0000003c, param_1);
    }

    // 0x1003b10c0, 16 bytes, placed by class name and debug map
    // RequestReview()
    void RequestReview() {}

    // 0x1003b10d0, 16 bytes, placed by class name and debug map
    // IsExternalTwoFactorAuthEnabled()
    undefined8 IsExternalTwoFactorAuthEnabled() {
        return 0;
    }

} // namespace jag::auth
