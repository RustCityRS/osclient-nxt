// libs/oldscape/clientlib/auth/SteamAuthLibWrapper.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::auth {
    class SteamAuthLibWrapper {
    public:
        // virtual methods in vtable order
        virtual ~SteamAuthLibWrapper();
        virtual uint64_t RequestGameToken();
        virtual void RequestOAuth2Tokens(const eastl::string& arg1, const eastl::string& arg2,
                                         const eastl::string& arg3, const eastl::string& arg4);
        virtual GameToken GetGameToken();
        virtual GameToken CreateGameTokenFromResult(const eastl::string& str,
                                                    jag::auth::AuthSDKTokenResponse authSDKTokenResponse);
        virtual void AuthenticateWithFederated(jag::auth::AuthAccountHint authAccountHint,
                                               jag::auth::SocialLoginPartners socialLoginPartners);
        virtual uint8_t SupportsSteamLogin();
        virtual void ShowMobileShop();
        virtual unsigned long ShowFederatedShop(jag::auth::SocialLoginPartners socialLoginPartners,
                                                const eastl::string& str);
        virtual void ShowMobileShopSubset(ShopView shopView, bool arg2);
        virtual void ShowMobileShopCategories(int arg1, int arg2);
        virtual void InitialiseAnalyticsService();
        virtual void InitialiseAttributionService();
        virtual void InitialiseNotificationService();
        virtual void CopyDeviceTokenToClipboard();
        virtual void OpenNotificationSettings();
        virtual void OpenMobileBrowser(const eastl::string& str);
        virtual void SetAttributionAccountId(long long arg1);
        virtual void SendAnalyticsEvent(const eastl::string& str);
        virtual void SendAttributionEvent(const eastl::string& str);
        virtual SteamAuthLibWrapper* GetPendingTransactionResult();
        virtual void InitiatePendingTransactionsCheck();
        virtual void ApplyPendingTransactions();
        virtual void PurchaseShopItem(const eastl::string& str);
        virtual void RequestShopData();
        virtual uint64_t GetCategoryCount();
        virtual uint64_t GetCategoryID(int arg1);
        virtual uint64_t GetIndexForCategoryID(int arg1);
        virtual uint64_t GetIndexForCategoryName(const eastl::string& str);
        virtual SteamAuthLibWrapper* GetCategoryDescription(int arg1);
        virtual uint64_t GetProductCount(int arg1);
        virtual bool IsProductAvailable(int arg1, int arg2);
        virtual bool IsProductRecommended(int arg1, int arg2);
        virtual SteamAuthLibWrapper* GetProductID(int arg1, int arg2);
        virtual SteamAuthLibWrapper* GetProductName(int arg1, int arg2);
        virtual SteamAuthLibWrapper* GetProductType(int arg1, int arg2);
        virtual SteamAuthLibWrapper* GetProductPrice(int arg1, int arg2);
        virtual SteamAuthLibWrapper* GetProductPriceAsMicroUnits(int arg1, int arg2);
        virtual SteamAuthLibWrapper* GetProductCurrencyCode(int arg1, int arg2);
        virtual SteamAuthLibWrapper* GetProductIntroductoryPrice(int arg1, int arg2);
        virtual SteamAuthLibWrapper* GetProductIntroductoryPriceAsMicroUnits(int arg1, int arg2);
        virtual SteamAuthLibWrapper* GetProductFreeTrialPeriod(int arg1, int arg2);
        virtual void BeginFetchPurchaseHistory();
        virtual uint64_t PurchaseHistoryFetchCompleted();
        virtual uint64_t EligibleForFreeTrial();
        virtual uint64_t EligibleForIntroductoryPrice();
        virtual void NotificationAsyncStart();
        virtual void MainLogic();
        virtual uint64_t GetTokenAuthLoginState() const;
        virtual void ClearTokenAuthLogin();
        virtual bool IsTwoFactorAuthEnabled();
        void InvalidateRefreshToken();
        void AuthenticateWithGameCenter();
        void AuthenticateWithGooglePlay();
        bool IsRefreshTokenAvailable();
        SteamAuthLibWrapper(ApplicationContext* applicationContext, const eastl::string& str1,
                            const eastl::string& str2, const eastl::string& str3, const eastl::string& str4,
                            std::unique_ptr<Steam>& steam);

    private:
        uint8_t _unknown_8[128];
        uint8_t field_136;
        uint8_t _unknown_137[2];
        uint8_t field_139;
        uint8_t _unknown_140[4];
        ApplicationContext* field_144;
        uint64_t field_152;
        uint64_t field_160;
        uint8_t _unknown_168[8];
        unique_ptr<Steam>* field_176;
        uint8_t field_184;
        uint8_t _unknown_185[7];
        GameToken m_gameToken;
    };

    // 0x10014d610
    SteamAuthLibWrapper::SteamAuthLibWrapper(ApplicationContext* applicationContext, const eastl::string& str1,
                                             const eastl::string& str2, const eastl::string& str3,
                                             const eastl::string& str4, std::unique_ptr<Steam>& steam)
        : AuthLibWrapper(applicationContext, str1, str2, str3, str4), field_176(steam) {
        field_184.unique_ptr<true, void>();
        new (m_gameToken) GameToken();
    }

    // 0x100396010
    GameToken SteamAuthLibWrapper::GetGameToken() {
        return m_entityHighlightGlobalState;
    }

    // 0x100396020
    void SteamAuthLibWrapper::ShowMobileShop() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  68, "STEAM NYI");
    }

    // 0x100396050
    void SteamAuthLibWrapper::ShowMobileShopSubset(ShopView shopView, bool arg2) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  75, "STEAM NYI");
    }

    // 0x100396080
    void SteamAuthLibWrapper::ShowMobileShopCategories(int arg1, int arg2) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  80, "STEAM NYI");
    }

    // 0x1003960b0
    void SteamAuthLibWrapper::InitialiseAnalyticsService() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  85, "STEAM NYI");
    }

    // 0x1003960e0
    void SteamAuthLibWrapper::InitialiseAttributionService() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  90, "STEAM NYI");
    }

    // 0x100396110
    void SteamAuthLibWrapper::InitialiseNotificationService() {
        (logger::default_logger())
            ->Log(false, 8,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  95, "Notification Service initialized; no special work needed on Steam");
    }

    // 0x100396140
    void SteamAuthLibWrapper::CopyDeviceTokenToClipboard() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  100, "STEAM NYI");
    }

    // 0x100396170
    void SteamAuthLibWrapper::OpenNotificationSettings() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  105, "STEAM NYI");
    }

    // 0x1003961a0
    void SteamAuthLibWrapper::OpenMobileBrowser(const eastl::string& str) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  110, "STEAM NYI");
    }

    // 0x1003961d0
    void SteamAuthLibWrapper::SetAttributionAccountId(long long arg1) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  115, "STEAM NYI");
    }

    // 0x100396200
    void SteamAuthLibWrapper::SendAnalyticsEvent(const eastl::string& str) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  120, "STEAM NYI");
    }

    // 0x100396230
    void SteamAuthLibWrapper::SendAttributionEvent(const eastl::string& str) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  125, "STEAM NYI");
    }

    // 0x100396260
    SteamAuthLibWrapper* SteamAuthLibWrapper::GetPendingTransactionResult() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  131, "STEAM NYI");
        new (this) Nullable(0);
        return this;
    }

    // 0x1003962b0
    void SteamAuthLibWrapper::InitiatePendingTransactionsCheck() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  137, "STEAM NYI");
    }

    // 0x1003962e0
    void SteamAuthLibWrapper::ApplyPendingTransactions() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  142, "STEAM NYI");
    }

    // 0x100396310
    void SteamAuthLibWrapper::PurchaseShopItem(const eastl::string& str) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  147, "STEAM NYI");
    }

    // 0x100396340
    void SteamAuthLibWrapper::RequestShopData() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  152, "STEAM NYI");
    }

    // 0x100396370
    uint64_t SteamAuthLibWrapper::GetCategoryCount() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  157, "STEAM NYI");
        return 0;
    }

    // 0x1003963b0
    uint64_t SteamAuthLibWrapper::GetCategoryID(int arg1) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  163, "STEAM NYI");
        return 0;
    }

    // 0x1003963f0
    uint64_t SteamAuthLibWrapper::GetIndexForCategoryID(int arg1) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  169, "STEAM NYI");
        return 0;
    }

    // 0x100396430
    uint64_t SteamAuthLibWrapper::GetIndexForCategoryName(const eastl::string& str) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  175, "STEAM NYI");
        return 0;
    }

    // 0x100396470
    SteamAuthLibWrapper* SteamAuthLibWrapper::GetCategoryDescription(int arg1) {

        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  181, "STEAM NYI");
        new (this) eastl::string("");
        return this;
    }

    // 0x1003964e0
    uint64_t SteamAuthLibWrapper::GetProductCount(int arg1) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  187, "STEAM NYI");
        return 0;
    }

    // 0x100396520
    bool SteamAuthLibWrapper::IsProductAvailable(int arg1, int arg2) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  193, "STEAM NYI");
        return 0;
    }

    // 0x100396560
    bool SteamAuthLibWrapper::IsProductRecommended(int arg1, int arg2) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  199, "STEAM NYI");
        return 0;
    }

    // 0x1003965a0
    SteamAuthLibWrapper* SteamAuthLibWrapper::GetProductID(int arg1, int arg2) {

        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  205, "STEAM NYI");
        new (this) eastl::string("");
        return this;
    }

    // 0x100396610
    SteamAuthLibWrapper* SteamAuthLibWrapper::GetProductName(int arg1, int arg2) {

        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  211, "STEAM NYI");
        new (this) eastl::string("");
        return this;
    }

    // 0x100396680
    SteamAuthLibWrapper* SteamAuthLibWrapper::GetProductType(int arg1, int arg2) {

        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  217, "STEAM NYI");
        new (this) eastl::string("");
        return this;
    }

    // 0x1003966f0
    SteamAuthLibWrapper* SteamAuthLibWrapper::GetProductPrice(int arg1, int arg2) {

        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  223, "STEAM NYI");
        new (this) eastl::string("");
        return this;
    }

    // 0x100396760
    SteamAuthLibWrapper* SteamAuthLibWrapper::GetProductPriceAsMicroUnits(int arg1, int arg2) {

        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  229, "STEAM NYI");
        new (this) eastl::string("");
        return this;
    }

    // 0x1003967d0
    SteamAuthLibWrapper* SteamAuthLibWrapper::GetProductCurrencyCode(int arg1, int arg2) {

        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  235, "STEAM NYI");
        new (this) eastl::string("");
        return this;
    }

    // 0x100396840
    SteamAuthLibWrapper* SteamAuthLibWrapper::GetProductIntroductoryPrice(int arg1, int arg2) {

        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  241, "STEAM NYI");
        new (this) eastl::string("");
        return this;
    }

    // 0x1003968b0
    SteamAuthLibWrapper* SteamAuthLibWrapper::GetProductIntroductoryPriceAsMicroUnits(int arg1, int arg2) {

        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  247, "STEAM NYI");
        new (this) eastl::string("");
        return this;
    }

    // 0x100396920
    SteamAuthLibWrapper* SteamAuthLibWrapper::GetProductFreeTrialPeriod(int arg1, int arg2) {

        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  253, "STEAM NYI");
        new (this) eastl::string("");
        return this;
    }

    // 0x100396990
    void SteamAuthLibWrapper::BeginFetchPurchaseHistory() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  259, "STEAM NYI");
    }

    // 0x1003969c0
    uint64_t SteamAuthLibWrapper::PurchaseHistoryFetchCompleted() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  264, "STEAM NYI");
        return 0;
    }

    // 0x100396a00
    uint64_t SteamAuthLibWrapper::EligibleForFreeTrial() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  270, "STEAM NYI");
        return 0;
    }

    // 0x100396a40
    uint64_t SteamAuthLibWrapper::EligibleForIntroductoryPrice() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  276, "STEAM NYI");
        return 0;
    }

    // 0x100396a80
    void SteamAuthLibWrapper::NotificationAsyncStart() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "SteamAuthLibWrapper.h",
                  283, "STEAM NYI");
    }

    // 0x100396ab0
    void SteamAuthLibWrapper::ClearTokenAuthLogin() {
        void* in_RSI;

        field_184 = in_RSI;
        GameToken local_40;
        *m_gameToken = local_40;
        local_40.destruct<eastl::pair<eastl::string, option::IOption*>>();
    }

    // 0x100396b10
    bool SteamAuthLibWrapper::IsTwoFactorAuthEnabled() {
        uint32_t uVar2;
        Logger* this_00;
        void* in_RSI;

        if (&field_184 == in_RSI) {
            this_00 = logger::default_logger();
            uVar2 = 0;
            this_00->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                         "auth/SteamAuthLibWrapper.h",
                         304, "LoginHandler is null. Steam 2FA status could not be checked,");
        } else {
            uVar2 = ((TokenAuthLoginHandler*)field_184.operator->())->IsSteamTwoFactorAuthEnabled();
        }
        return uVar2;
    }

    // 0x100397db0
    SteamAuthLibWrapper::~SteamAuthLibWrapper() {
        m_gameToken->destruct<eastl::pair<eastl::string, option::IOption*>>();
    }

} // namespace jag::oldscape::auth
