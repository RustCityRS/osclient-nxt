// libs/oldscape/clientlib/auth/DesktopAuthLibWrapper.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::auth {
    class DesktopAuthLibWrapper : public SteamAuthLibWrapper // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~DesktopAuthLibWrapper();
        virtual void IsRefreshTokenAvailable();
        virtual RequestOAuth2Tokens(eastl::string const&, eastl::string const&, eastl::string const&,
                                    eastl::string const&);
        virtual RequestGameToken();
        virtual GetGameToken();
        virtual SteamAuthLibWrapper* CreateGameTokenFromResult(eastl::string const&, jag::auth::AuthSDKTokenResponse);
        virtual void AuthenticateWithFederated(jag::auth::AuthAccountHint, jag::auth::SocialLoginPartners);
        virtual SupportsSteamLogin();
        virtual void LaunchAccountCreationFlow();
        virtual void ShowMobileShop();
        virtual ShowFederatedShop(jag::auth::SocialLoginPartners, eastl::string const&);
        virtual void ShowMobileShopSubset(ShopView, bool);
        virtual void ShowMobileShopCategories(int, int);
        virtual void InitialiseAnalyticsService();
        virtual void InitialiseAttributionService();
        virtual void InitialiseNotificationService();
        virtual void CopyDeviceTokenToClipboard();
        virtual void OpenNotificationSettings();
        virtual void OpenMobileBrowser(eastl::string const&);
        virtual void SetAttributionAccountId(long long);
        virtual void SendAnalyticsEvent(eastl::string const&);
        virtual void SendAttributionEvent(eastl::string const&);
        virtual DesktopAuthLibWrapper* GetPendingTransactionResult();
        virtual void InitiatePendingTransactionsCheck();
        virtual void ApplyPendingTransactions();
        virtual void PurchaseShopItem(eastl::string const&);
        virtual void RequestShopData();
        virtual GetCategoryCount();
        virtual GetCategoryID(int);
        virtual GetIndexForCategoryID(int);
        virtual GetIndexForCategoryName(eastl::string const&);
        virtual GetCategoryDescription(int);
        virtual GetProductCount(int);
        virtual IsProductAvailable(int, int);
        virtual IsProductRecommended(int, int);
        virtual GetProductID(int, int);
        virtual GetProductName(int, int);
        virtual GetProductType(int, int);
        virtual GetProductPrice(int, int);
        virtual GetProductPriceAsMicroUnits(int, int);
        virtual GetProductCurrencyCode(int, int);
        virtual GetProductIntroductoryPrice(int, int);
        virtual GetProductIntroductoryPriceAsMicroUnits(int, int);
        virtual GetProductFreeTrialPeriod(int, int);
        virtual void BeginFetchPurchaseHistory();
        virtual PurchaseHistoryFetchCompleted();
        virtual EligibleForFreeTrial();
        virtual EligibleForIntroductoryPrice();
        virtual void NotificationAsyncStart();
        virtual void MainLogic();
        virtual GetTokenAuthLoginState() const;
        virtual void ClearTokenAuthLogin();
        InvalidateRefreshToken();
        AuthenticateWithGameCenter();
        AuthenticateWithGooglePlay();
        IsTwoFactorAuthEnabled();
        DesktopAuthLibWrapper(ApplicationContext*, eastl::string const&, eastl::string const&, eastl::string const&,
                              eastl::string const&);
        void SetOAuth2Credentials(eastl::string const&, eastl::string const&, unsigned long long);
        void SetGameSessionCredentials(eastl::string const&, eastl::string const&);

        // data members, from how the methods use this: 232 bytes, the first 232 are SteamAuthLibWrapper
    };

    // 0x10014d600, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // DesktopAuthLibWrapper::DesktopAuthLibWrapper(ApplicationContext*, eastl::string const&, eastl::string const&, eastl::string const&, eastl::string const&): jumps straight to the base-object constructor

    // 0x10014d920, 768 bytes, base-object constructor, inline, placed by class name and debug map
    // DesktopAuthLibWrapper::DesktopAuthLibWrapper(ApplicationContext*, eastl::string const&, eastl::string const&, eastl::string const&, eastl::string const&)
    void DesktopAuthLibWrapper::DesktopAuthLibWrapper(ApplicationContext* param_1, basic_string* param_2,
                                                      basic_string* param_3, basic_string* param_4,
                                                      basic_string* param_5) {
        char* pcVar1;
        eastl::string local_178[32];
        eastl::string local_158[32];
        eastl::string local_138[32];
        eastl::string local_118[32];
        eastl::string local_f8[32];
        eastl::string local_d8[32];
        eastl::string local_b8[32];
        eastl::string local_98[32];
        allocator local_78[8];
        allocator local_70[8];
        allocator local_68[8];
        allocator local_60[8];
        allocator local_58[8];
        allocator local_50[8];
        allocator local_48[8];
        allocator local_40[8];
        undefined1* local_38;

        new (this) AuthLibWrapper(param_1, param_2, param_3, param_4, param_5);
        field_0 = &PTR__DesktopAuthLibWrapper_100efd918;
        field_176 = "com_jagex_auth_desktop_osrs";
        field_184 = "gamesso.token.create";
        local_38 = field_192;
        new (local_38) GameToken();
        pcVar1 = field_176;
        eastl::allocator::allocator(local_78, "EASTL basic_string");
        eastl::string::basic_string(local_118, pcVar1, local_78);
        pcVar1 = field_184;
        eastl::allocator::allocator(local_70, "EASTL basic_string");
        eastl::string::basic_string(local_f8, pcVar1, local_70);
        eastl::allocator::allocator(local_68, "EASTL basic_string");
        eastl::string::basic_string(local_d8, "", local_68);
        eastl::allocator::allocator(local_60, "EASTL basic_string");
        eastl::string::basic_string(local_b8, "", local_60);
        eastl::allocator::allocator(local_58, "EASTL basic_string");
        eastl::string::basic_string(local_98, "", local_58);
        eastl::allocator::allocator(local_50, "EASTL basic_string");
        eastl::string::basic_string(local_178, "", local_50);
        eastl::allocator::allocator(local_48, "EASTL basic_string");
        eastl::string::basic_string(local_158, "", local_48);
        eastl::allocator::allocator(local_40, "EASTL basic_string");
        eastl::string::basic_string(local_138, "public", local_40);
        jag::auth::Init((basic_string*)local_118, (basic_string*)local_f8, (basic_string*)local_d8, param_2,
                        (basic_string*)local_b8, (basic_string*)local_98, (basic_string*)local_178,
                        (basic_string*)local_158, (basic_string*)local_138);
        eastl::string::~basic_string(local_138);
        eastl::string::~basic_string(local_158);
        eastl::string::~basic_string(local_178);
        eastl::string::~basic_string(local_98);
        eastl::string::~basic_string(local_b8);
        eastl::string::~basic_string(local_d8);
        eastl::string::~basic_string(local_f8);
        eastl::string::~basic_string(local_118);
    }

    // 0x100395440, 16 bytes, complete-object destructor, inline, placed by class name
    // DesktopAuthLibWrapper::~DesktopAuthLibWrapper(): jumps straight to the base-object destructor

    // 0x100395450, 32 bytes, deleting destructor, inline, placed by class name
    // DesktopAuthLibWrapper::~DesktopAuthLibWrapper()
    void DesktopAuthLibWrapper::~DesktopAuthLibWrapper() {
        ~DesktopAuthLibWrapper(this);
        operator_delete(this);
    }

    // 0x100395470, 32 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::CreateGameTokenFromResult(eastl::string const&, jag::auth::AuthSDKTokenResponse)
    /* SteamAuthLibWrapper::CreateGameTokenFromResult(eastl::basic_string<char,
   eastl::allocator> const&, jag::auth::AuthSDKTokenResponse) */

    SteamAuthLibWrapper* SteamAuthLibWrapper::CreateGameTokenFromResult(undefined8 param_2, undefined8 param_3,
                                                                        undefined4 param_4) {
        new (this) GameToken(param_3, param_4);
        return this;
    }

    // 0x100395490, 96 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::LaunchAccountCreationFlow()
    void DesktopAuthLibWrapper::LaunchAccountCreationFlow() {
        eastl local_30[32];

        eastl::operator+(local_30, (basic_string*)&field_104,
                         (value_type*)"m=account-creation/g=oldscape/create_account_funnel.ws");
        Web::OpenURL((basic_string*)local_30, true);
        local_30->~basic_string();
    }

    // 0x1003954f0, 48 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::ShowMobileShop()
    void DesktopAuthLibWrapper::ShowMobileShop() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            70, "DESKTOP NYI");
    }

    // 0x100395520, 48 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::ShowMobileShopSubset(ShopView, bool)
    void DesktopAuthLibWrapper::ShowMobileShopSubset() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            77, "DESKTOP NYI");
    }

    // 0x100395550, 48 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::ShowMobileShopCategories(int, int)
    void DesktopAuthLibWrapper::ShowMobileShopCategories(int param_1, int param_2) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            82, "DESKTOP NYI");
    }

    // 0x100395580, 48 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::InitialiseAnalyticsService()
    void DesktopAuthLibWrapper::InitialiseAnalyticsService() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            87, "DESKTOP NYI");
    }

    // 0x1003955b0, 48 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::InitialiseAttributionService()
    void DesktopAuthLibWrapper::InitialiseAttributionService() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            92, "DESKTOP NYI");
    }

    // 0x1003955e0, 48 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::InitialiseNotificationService()
    void DesktopAuthLibWrapper::InitialiseNotificationService() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            97, "Notification Service initialized; no special work needed on desktop");
    }

    // 0x100395610, 48 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::CopyDeviceTokenToClipboard()
    void DesktopAuthLibWrapper::CopyDeviceTokenToClipboard() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            102, "DESKTOP NYI");
    }

    // 0x100395640, 48 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::OpenNotificationSettings()
    void DesktopAuthLibWrapper::OpenNotificationSettings() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            107, "DESKTOP NYI");
    }

    // 0x100395670, 48 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::OpenMobileBrowser(eastl::string const&)
    void DesktopAuthLibWrapper::OpenMobileBrowser(basic_string* param_1) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            112, "DESKTOP NYI");
    }

    // 0x1003956a0, 48 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::SetAttributionAccountId(long long)
    void DesktopAuthLibWrapper::SetAttributionAccountId(longlong param_1) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            117, "DESKTOP NYI");
    }

    // 0x1003956d0, 48 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::SendAnalyticsEvent(eastl::string const&)
    void DesktopAuthLibWrapper::SendAnalyticsEvent(basic_string* param_1) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            122, "DESKTOP NYI");
    }

    // 0x100395700, 48 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::SendAttributionEvent(eastl::string const&)
    void DesktopAuthLibWrapper::SendAttributionEvent(basic_string* param_1) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            127, "DESKTOP NYI");
    }

    // 0x100395730, 80 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::GetPendingTransactionResult()
    DesktopAuthLibWrapper* DesktopAuthLibWrapper::GetPendingTransactionResult() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            133, "DESKTOP NYI");
        new (this) Nullable<bool>(false);
        return this;
    }

    // 0x100395780, 48 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::InitiatePendingTransactionsCheck()
    void DesktopAuthLibWrapper::InitiatePendingTransactionsCheck() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            139, "DESKTOP NYI");
    }

    // 0x1003957b0, 48 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::ApplyPendingTransactions()
    void DesktopAuthLibWrapper::ApplyPendingTransactions() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            144, "DESKTOP NYI");
    }

    // 0x1003957e0, 48 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::PurchaseShopItem(eastl::string const&)
    void DesktopAuthLibWrapper::PurchaseShopItem(basic_string* param_1) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            149, "DESKTOP NYI");
    }

    // 0x100395810, 48 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::RequestShopData()
    void DesktopAuthLibWrapper::RequestShopData() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            154, "DESKTOP NYI");
    }

    // 0x100395840, 64 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::GetCategoryCount()
    undefined8 DesktopAuthLibWrapper::GetCategoryCount() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            159, "DESKTOP NYI");
        return 0;
    }

    // 0x100395880, 64 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::GetCategoryID(int)
    undefined8 DesktopAuthLibWrapper::GetCategoryID(int param_1) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            165, "DESKTOP NYI");
        return 0;
    }

    // 0x1003958c0, 64 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::GetIndexForCategoryID(int)
    undefined8 DesktopAuthLibWrapper::GetIndexForCategoryID(int param_1) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            171, "DESKTOP NYI");
        return 0;
    }

    // 0x100395900, 64 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::GetIndexForCategoryName(eastl::string const&)
    undefined8 DesktopAuthLibWrapper::GetIndexForCategoryName(basic_string* param_1) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            177, "DESKTOP NYI");
        return 0;
    }

    // 0x100395940, 112 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::GetCategoryDescription(int)
    DesktopAuthLibWrapper* DesktopAuthLibWrapper::GetCategoryDescription(int param_1) {
        undefined8 uVar1;
        allocator local_20[8];

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            183, "DESKTOP NYI");
        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("", local_20);
        return this;
    }

    // 0x1003959b0, 64 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::GetProductCount(int)
    undefined8 DesktopAuthLibWrapper::GetProductCount(int param_1) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            189, "DESKTOP NYI");
        return 0;
    }

    // 0x1003959f0, 64 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::IsProductAvailable(int, int)
    undefined8 DesktopAuthLibWrapper::IsProductAvailable(int param_1, int param_2) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            195, "DESKTOP NYI");
        return 0;
    }

    // 0x100395a30, 64 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::IsProductRecommended(int, int)
    undefined8 DesktopAuthLibWrapper::IsProductRecommended(int param_1, int param_2) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            201, "DESKTOP NYI");
        return 0;
    }

    // 0x100395a70, 112 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::GetProductID(int, int)
    DesktopAuthLibWrapper* DesktopAuthLibWrapper::GetProductID(int param_1, int param_2) {
        undefined8 uVar1;
        allocator local_20[8];

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            207, "DESKTOP NYI");
        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("", local_20);
        return this;
    }

    // 0x100395ae0, 112 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::GetProductName(int, int)
    DesktopAuthLibWrapper* DesktopAuthLibWrapper::GetProductName(int param_1, int param_2) {
        undefined8 uVar1;
        allocator local_20[8];

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            213, "DESKTOP NYI");
        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("", local_20);
        return this;
    }

    // 0x100395b50, 112 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::GetProductType(int, int)
    DesktopAuthLibWrapper* DesktopAuthLibWrapper::GetProductType(int param_1, int param_2) {
        undefined8 uVar1;
        allocator local_20[8];

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            219, "DESKTOP NYI");
        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("", local_20);
        return this;
    }

    // 0x100395bc0, 112 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::GetProductPrice(int, int)
    DesktopAuthLibWrapper* DesktopAuthLibWrapper::GetProductPrice(int param_1, int param_2) {
        undefined8 uVar1;
        allocator local_20[8];

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            225, "DESKTOP NYI");
        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("", local_20);
        return this;
    }

    // 0x100395c30, 112 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::GetProductPriceAsMicroUnits(int, int)
    DesktopAuthLibWrapper* DesktopAuthLibWrapper::GetProductPriceAsMicroUnits(int param_1, int param_2) {
        undefined8 uVar1;
        allocator local_20[8];

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            231, "DESKTOP NYI");
        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("", local_20);
        return this;
    }

    // 0x100395ca0, 112 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::GetProductCurrencyCode(int, int)
    DesktopAuthLibWrapper* DesktopAuthLibWrapper::GetProductCurrencyCode(int param_1, int param_2) {
        undefined8 uVar1;
        allocator local_20[8];

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            237, "DESKTOP NYI");
        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("", local_20);
        return this;
    }

    // 0x100395d10, 112 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::GetProductIntroductoryPrice(int, int)
    DesktopAuthLibWrapper* DesktopAuthLibWrapper::GetProductIntroductoryPrice(int param_1, int param_2) {
        undefined8 uVar1;
        allocator local_20[8];

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            243, "DESKTOP NYI");
        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("", local_20);
        return this;
    }

    // 0x100395d80, 112 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::GetProductIntroductoryPriceAsMicroUnits(int, int)
    DesktopAuthLibWrapper* DesktopAuthLibWrapper::GetProductIntroductoryPriceAsMicroUnits(int param_1, int param_2) {
        undefined8 uVar1;
        allocator local_20[8];

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            249, "DESKTOP NYI");
        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("", local_20);
        return this;
    }

    // 0x100395df0, 112 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::GetProductFreeTrialPeriod(int, int)
    DesktopAuthLibWrapper* DesktopAuthLibWrapper::GetProductFreeTrialPeriod(int param_1, int param_2) {
        undefined8 uVar1;
        allocator local_20[8];

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            255, "DESKTOP NYI");
        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("", local_20);
        return this;
    }

    // 0x100395e60, 48 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::BeginFetchPurchaseHistory()
    void DesktopAuthLibWrapper::BeginFetchPurchaseHistory() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            261, "DESKTOP NYI");
    }

    // 0x100395e90, 64 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::PurchaseHistoryFetchCompleted()
    undefined8 DesktopAuthLibWrapper::PurchaseHistoryFetchCompleted() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            266, "DESKTOP NYI");
        return 0;
    }

    // 0x100395ed0, 64 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::EligibleForFreeTrial()
    undefined8 DesktopAuthLibWrapper::EligibleForFreeTrial() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            272, "DESKTOP NYI");
        return 0;
    }

    // 0x100395f10, 64 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::EligibleForIntroductoryPrice()
    undefined8 DesktopAuthLibWrapper::EligibleForIntroductoryPrice() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            278, "DESKTOP NYI");
        return 0;
    }

    // 0x100395f50, 48 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::NotificationAsyncStart()
    void DesktopAuthLibWrapper::NotificationAsyncStart() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/DesktopAuthLibWrapper.h",
                            285, "DESKTOP NYI");
    }

    // 0x100395f80, 96 bytes, inline, placed by class name
    // DesktopAuthLibWrapper::ClearTokenAuthLogin()
    void DesktopAuthLibWrapper::ClearTokenAuthLogin() {
        GameToken local_40;

        new (&local_40) GameToken();
        GameToken::operator=((GameToken*)field_192, &local_40);
        eastl::destruct<eastl::pair<eastl::string, option::IOption*>>((eastl*)&local_40, (pair*)&local_40);
    }

    // 0x100397d80, 48 bytes, base-object destructor, inline, placed by class name
    // DesktopAuthLibWrapper::~DesktopAuthLibWrapper()
    void DesktopAuthLibWrapper::~DesktopAuthLibWrapper() {
        pair* in_RSI;

        field_0 = &PTR__DesktopAuthLibWrapper_100efd918;
        eastl::destruct<eastl::pair<eastl::string, option::IOption*>>((eastl*)field_192, in_RSI);
        ~AuthLibWrapper();
    }

} // namespace jag::oldscape::auth
