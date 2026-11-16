// libs/oldscape/clientlib/auth/DesktopAuthLibWrapper.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::auth {
    class DesktopAuthLibWrapper : public SteamAuthLibWrapper // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~DesktopAuthLibWrapper();
        virtual void IsRefreshTokenAvailable();
        virtual void RequestOAuth2Tokens(const eastl::string& arg1, const eastl::string& arg2,
                                         const eastl::string& arg3, const eastl::string& arg4);
        virtual uint8_t RequestGameToken();
        virtual uint8_t* GetGameToken();
        virtual GameToken CreateGameTokenFromResult(const eastl::string& str,
                                                    jag::auth::AuthSDKTokenResponse authSDKTokenResponse);
        virtual void AuthenticateWithFederated(jag::auth::AuthAccountHint authAccountHint,
                                               jag::auth::SocialLoginPartners socialLoginPartners);
        virtual uint64_t SupportsSteamLogin();
        virtual void LaunchAccountCreationFlow();
        virtual void ShowMobileShop();
        virtual uint64_t ShowFederatedShop(jag::auth::SocialLoginPartners socialLoginPartners,
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
        virtual DesktopAuthLibWrapper* GetPendingTransactionResult();
        virtual void InitiatePendingTransactionsCheck();
        virtual void ApplyPendingTransactions();
        virtual void PurchaseShopItem(const eastl::string& str);
        virtual void RequestShopData();
        virtual uint64_t GetCategoryCount();
        virtual uint64_t GetCategoryID(int arg1);
        virtual uint64_t GetIndexForCategoryID(int arg1);
        virtual uint64_t GetIndexForCategoryName(const eastl::string& str);
        virtual DesktopAuthLibWrapper* GetCategoryDescription(int arg1);
        virtual uint64_t GetProductCount(int arg1);
        virtual bool IsProductAvailable(int arg1, int arg2);
        virtual bool IsProductRecommended(int arg1, int arg2);
        virtual DesktopAuthLibWrapper* GetProductID(int arg1, int arg2);
        virtual DesktopAuthLibWrapper* GetProductName(int arg1, int arg2);
        virtual DesktopAuthLibWrapper* GetProductType(int arg1, int arg2);
        virtual DesktopAuthLibWrapper* GetProductPrice(int arg1, int arg2);
        virtual DesktopAuthLibWrapper* GetProductPriceAsMicroUnits(int arg1, int arg2);
        virtual DesktopAuthLibWrapper* GetProductCurrencyCode(int arg1, int arg2);
        virtual DesktopAuthLibWrapper* GetProductIntroductoryPrice(int arg1, int arg2);
        virtual DesktopAuthLibWrapper* GetProductIntroductoryPriceAsMicroUnits(int arg1, int arg2);
        virtual DesktopAuthLibWrapper* GetProductFreeTrialPeriod(int arg1, int arg2);
        virtual void BeginFetchPurchaseHistory();
        virtual uint64_t PurchaseHistoryFetchCompleted();
        virtual uint64_t EligibleForFreeTrial();
        virtual uint64_t EligibleForIntroductoryPrice();
        virtual void NotificationAsyncStart();
        virtual void MainLogic();
        virtual uint64_t GetTokenAuthLoginState() const;
        virtual void ClearTokenAuthLogin();
        void InvalidateRefreshToken();
        void AuthenticateWithGameCenter();
        void AuthenticateWithGooglePlay();
        bool IsTwoFactorAuthEnabled();
        DesktopAuthLibWrapper(ApplicationContext* applicationContext, const eastl::string& str1,
                              const eastl::string& str2, const eastl::string& str3, const eastl::string& str4);
        void SetOAuth2Credentials(const eastl::string& str1, const eastl::string& str2, unsigned long long arg3);
        void SetGameSessionCredentials(const eastl::string& str1, const eastl::string& str2);
    };

    // 0x10014d920
    DesktopAuthLibWrapper::DesktopAuthLibWrapper(ApplicationContext* applicationContext, const eastl::string& str1,
                                                 const eastl::string& str2, const eastl::string& str3,
                                                 const eastl::string& str4)
        : AuthLibWrapper(applicationContext, str1, str2, str3, str4), field_176("com_jagex_auth_desktop_osrs"),
          field_184("gamesso.token.create") {
        uint8_t* local_38 = field_192;
        new (local_38) GameToken();
        char* pcVar1 = field_176;
        eastl::string local_118(pcVar1);
        pcVar1 = field_184;
        eastl::string local_f8(pcVar1);
        eastl::string local_d8("");
        eastl::string local_b8("");
        eastl::string local_98("");
        eastl::string local_178("");
        eastl::string local_158("");
        eastl::string local_138("public");
        jag::auth::Init(local_118, local_f8, local_d8, str1, local_b8, local_98, local_178, local_158, local_138);
    }

    // 0x100395470
    GameToken DesktopAuthLibWrapper::CreateGameTokenFromResult(const eastl::string& str,
                                                               jag::auth::AuthSDKTokenResponse authSDKTokenResponse) {
        return GameToken(str, authSDKTokenResponse);
    }

    // 0x100395490
    void DesktopAuthLibWrapper::LaunchAccountCreationFlow() {
        bool arg2;
        eastl::string local_30;

        local_30 + field_104;
        local_30.OpenURL(DAT_00000001, arg2);
    }

    // 0x1003954f0
    void DesktopAuthLibWrapper::ShowMobileShop() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  70, "DESKTOP NYI");
    }

    // 0x100395520
    void DesktopAuthLibWrapper::ShowMobileShopSubset(ShopView shopView, bool arg2) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  77, "DESKTOP NYI");
    }

    // 0x100395550
    void DesktopAuthLibWrapper::ShowMobileShopCategories(int arg1, int arg2) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  82, "DESKTOP NYI");
    }

    // 0x100395580
    void DesktopAuthLibWrapper::InitialiseAnalyticsService() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  87, "DESKTOP NYI");
    }

    // 0x1003955b0
    void DesktopAuthLibWrapper::InitialiseAttributionService() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  92, "DESKTOP NYI");
    }

    // 0x1003955e0
    void DesktopAuthLibWrapper::InitialiseNotificationService() {
        (logger::default_logger())
            ->Log(false, 8,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  97, "Notification Service initialized; no special work needed on desktop");
    }

    // 0x100395610
    void DesktopAuthLibWrapper::CopyDeviceTokenToClipboard() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  102, "DESKTOP NYI");
    }

    // 0x100395640
    void DesktopAuthLibWrapper::OpenNotificationSettings() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  107, "DESKTOP NYI");
    }

    // 0x100395670
    void DesktopAuthLibWrapper::OpenMobileBrowser(const eastl::string& str) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  112, "DESKTOP NYI");
    }

    // 0x1003956a0
    void DesktopAuthLibWrapper::SetAttributionAccountId(long long arg1) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  117, "DESKTOP NYI");
    }

    // 0x1003956d0
    void DesktopAuthLibWrapper::SendAnalyticsEvent(const eastl::string& str) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  122, "DESKTOP NYI");
    }

    // 0x100395700
    void DesktopAuthLibWrapper::SendAttributionEvent(const eastl::string& str) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  127, "DESKTOP NYI");
    }

    // 0x100395730
    DesktopAuthLibWrapper* DesktopAuthLibWrapper::GetPendingTransactionResult() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  133, "DESKTOP NYI");
        new (this) Nullable(0);
        return this;
    }

    // 0x100395780
    void DesktopAuthLibWrapper::InitiatePendingTransactionsCheck() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  139, "DESKTOP NYI");
    }

    // 0x1003957b0
    void DesktopAuthLibWrapper::ApplyPendingTransactions() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  144, "DESKTOP NYI");
    }

    // 0x1003957e0
    void DesktopAuthLibWrapper::PurchaseShopItem(const eastl::string& str) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  149, "DESKTOP NYI");
    }

    // 0x100395810
    void DesktopAuthLibWrapper::RequestShopData() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  154, "DESKTOP NYI");
    }

    // 0x100395840
    uint64_t DesktopAuthLibWrapper::GetCategoryCount() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  159, "DESKTOP NYI");
        return 0;
    }

    // 0x100395880
    uint64_t DesktopAuthLibWrapper::GetCategoryID(int arg1) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  165, "DESKTOP NYI");
        return 0;
    }

    // 0x1003958c0
    uint64_t DesktopAuthLibWrapper::GetIndexForCategoryID(int arg1) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  171, "DESKTOP NYI");
        return 0;
    }

    // 0x100395900
    uint64_t DesktopAuthLibWrapper::GetIndexForCategoryName(const eastl::string& str) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  177, "DESKTOP NYI");
        return 0;
    }

    // 0x100395940
    DesktopAuthLibWrapper* DesktopAuthLibWrapper::GetCategoryDescription(int arg1) {

        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  183, "DESKTOP NYI");
        new (this) eastl::string("");
        return this;
    }

    // 0x1003959b0
    uint64_t DesktopAuthLibWrapper::GetProductCount(int arg1) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  189, "DESKTOP NYI");
        return 0;
    }

    // 0x1003959f0
    bool DesktopAuthLibWrapper::IsProductAvailable(int arg1, int arg2) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  195, "DESKTOP NYI");
        return 0;
    }

    // 0x100395a30
    bool DesktopAuthLibWrapper::IsProductRecommended(int arg1, int arg2) {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  201, "DESKTOP NYI");
        return 0;
    }

    // 0x100395a70
    DesktopAuthLibWrapper* DesktopAuthLibWrapper::GetProductID(int arg1, int arg2) {

        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  207, "DESKTOP NYI");
        new (this) eastl::string("");
        return this;
    }

    // 0x100395ae0
    DesktopAuthLibWrapper* DesktopAuthLibWrapper::GetProductName(int arg1, int arg2) {

        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  213, "DESKTOP NYI");
        new (this) eastl::string("");
        return this;
    }

    // 0x100395b50
    DesktopAuthLibWrapper* DesktopAuthLibWrapper::GetProductType(int arg1, int arg2) {

        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  219, "DESKTOP NYI");
        new (this) eastl::string("");
        return this;
    }

    // 0x100395bc0
    DesktopAuthLibWrapper* DesktopAuthLibWrapper::GetProductPrice(int arg1, int arg2) {

        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  225, "DESKTOP NYI");
        new (this) eastl::string("");
        return this;
    }

    // 0x100395c30
    DesktopAuthLibWrapper* DesktopAuthLibWrapper::GetProductPriceAsMicroUnits(int arg1, int arg2) {

        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  231, "DESKTOP NYI");
        new (this) eastl::string("");
        return this;
    }

    // 0x100395ca0
    DesktopAuthLibWrapper* DesktopAuthLibWrapper::GetProductCurrencyCode(int arg1, int arg2) {

        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  237, "DESKTOP NYI");
        new (this) eastl::string("");
        return this;
    }

    // 0x100395d10
    DesktopAuthLibWrapper* DesktopAuthLibWrapper::GetProductIntroductoryPrice(int arg1, int arg2) {

        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  243, "DESKTOP NYI");
        new (this) eastl::string("");
        return this;
    }

    // 0x100395d80
    DesktopAuthLibWrapper* DesktopAuthLibWrapper::GetProductIntroductoryPriceAsMicroUnits(int arg1, int arg2) {

        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  249, "DESKTOP NYI");
        new (this) eastl::string("");
        return this;
    }

    // 0x100395df0
    DesktopAuthLibWrapper* DesktopAuthLibWrapper::GetProductFreeTrialPeriod(int arg1, int arg2) {

        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  255, "DESKTOP NYI");
        new (this) eastl::string("");
        return this;
    }

    // 0x100395e60
    void DesktopAuthLibWrapper::BeginFetchPurchaseHistory() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  261, "DESKTOP NYI");
    }

    // 0x100395e90
    uint64_t DesktopAuthLibWrapper::PurchaseHistoryFetchCompleted() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  266, "DESKTOP NYI");
        return 0;
    }

    // 0x100395ed0
    uint64_t DesktopAuthLibWrapper::EligibleForFreeTrial() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  272, "DESKTOP NYI");
        return 0;
    }

    // 0x100395f10
    uint64_t DesktopAuthLibWrapper::EligibleForIntroductoryPrice() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  278, "DESKTOP NYI");
        return 0;
    }

    // 0x100395f50
    void DesktopAuthLibWrapper::NotificationAsyncStart() {
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/auth/"
                  "DesktopAuthLibWrapper.h",
                  285, "DESKTOP NYI");
    }

    // 0x100395f80
    void DesktopAuthLibWrapper::ClearTokenAuthLogin() {

        GameToken local_40;
        *field_192 = local_40;
        local_40.destruct<eastl::pair<eastl::string, option::IOption*>>();
    }

    // 0x100397d80
    DesktopAuthLibWrapper::~DesktopAuthLibWrapper() {
        field_192->destruct<eastl::pair<eastl::string, option::IOption*>>();
    }

} // namespace jag::oldscape::auth
