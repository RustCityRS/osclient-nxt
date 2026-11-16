// libs/oldscape/clientlib/auth/SteamAuthLibWrapper.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::auth {
    class SteamAuthLibWrapper {
    public:
        // virtual methods in vtable order
        virtual ~SteamAuthLibWrapper();
        virtual RequestGameToken();
        virtual RequestOAuth2Tokens(eastl::string const&, eastl::string const&, eastl::string const&,
                                    eastl::string const&);
        virtual GetGameToken();
        virtual CreateGameTokenFromResult(eastl::string const&, jag::auth::AuthSDKTokenResponse);
        virtual void AuthenticateWithFederated(jag::auth::AuthAccountHint, jag::auth::SocialLoginPartners);
        virtual SupportsSteamLogin();
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
        virtual SteamAuthLibWrapper* GetPendingTransactionResult();
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
        virtual IsTwoFactorAuthEnabled();
        InvalidateRefreshToken();
        AuthenticateWithGameCenter();
        AuthenticateWithGooglePlay();
        IsRefreshTokenAvailable();
        SteamAuthLibWrapper(ApplicationContext*, eastl::string const&, eastl::string const&, eastl::string const&,
                            eastl::string const&, std::unique_ptr<Steam, std::default_delete<Steam>>&);

        // data members, from how the methods use this: 232 bytes
        undefined** field_0; // offset 0, vtable pointer
        int field_8;         // offset 8
        char _unknown_12[124];
        undefined1 field_136; // offset 136
        char _unknown_137[2];
        undefined1 field_139; // offset 139
        char _unknown_140[4];
        ApplicationContext* field_144; // offset 144
        undefined8 field_152;          // offset 152
        undefined8 field_160;          // offset 160
        char _unknown_168[8];
        unique_ptr* field_176; // offset 176
        char _unknown_184[8];
        GameToken field_192; // offset 192
    };

    // 0x10014d5e0, 32 bytes, complete-object constructor, inline, placed by class name and debug map
    // SteamAuthLibWrapper::SteamAuthLibWrapper(ApplicationContext*, eastl::string const&, eastl::string const&, eastl::string const&, eastl::string const&, std::unique_ptr<Steam, std::default_delete<Steam> >&)
    /* SteamAuthLibWrapper::SteamAuthLibWrapper(ApplicationContext*,
   eastl::string const&, eastl::string
   const&, eastl::string const&, eastl::basic_string<char,
   eastl::allocator> const&, std::unique_ptr<Steam, std::default_delete<Steam> >&) */

    void SteamAuthLibWrapper::SteamAuthLibWrapper(ApplicationContext* param_1, basic_string* param_2,
                                                  basic_string* param_3, basic_string* param_4, basic_string* param_5,
                                                  unique_ptr* param_6) {
        SteamAuthLibWrapper(this, param_1, param_2, param_3, param_4, param_5, param_6);
    }

    // 0x10014d610, 112 bytes, base-object constructor, inline, placed by class name
    // SteamAuthLibWrapper::SteamAuthLibWrapper(ApplicationContext*, eastl::string const&, eastl::string const&, eastl::string const&, eastl::string const&, std::unique_ptr<Steam, std::default_delete<Steam> >&)
    /* SteamAuthLibWrapper::SteamAuthLibWrapper(ApplicationContext*,
   eastl::string const&, eastl::string
   const&, eastl::string const&, eastl::basic_string<char,
   eastl::allocator> const&, std::unique_ptr<Steam, std::default_delete<Steam> >&) */

    void SteamAuthLibWrapper::SteamAuthLibWrapper(ApplicationContext* param_1, basic_string* param_2,
                                                  basic_string* param_3, basic_string* param_4, basic_string* param_5,
                                                  unique_ptr* param_6) {
        new (this) AuthLibWrapper(param_1, param_2, param_3, param_4, param_5);
        field_0 = &PTR__SteamAuthLibWrapper_100efdb48;
        field_176 = param_6;
        std::unique_ptr<jag::auth::TokenAuthLoginHandler, std::default_delete<jag::auth::TokenAuthLoginHandler>>::
            unique_ptr<true, void>((unique_ptr<jag::auth::TokenAuthLoginHandler,
                                               std::default_delete<jag::auth::TokenAuthLoginHandler>>*)&field_184);
        new (field_192) GameToken();
    }

    // 0x100395fe0, 16 bytes, complete-object destructor, inline, placed by class name
    // SteamAuthLibWrapper::~SteamAuthLibWrapper(): jumps straight to the base-object destructor

    // 0x100395ff0, 32 bytes, deleting destructor, inline, placed by class name
    // SteamAuthLibWrapper::~SteamAuthLibWrapper()
    void SteamAuthLibWrapper::~SteamAuthLibWrapper() {
        ~SteamAuthLibWrapper(this);
        operator_delete(this);
    }

    // 0x100396010, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SteamAuthLibWrapper::GetGameToken()
    /* game::SceneManager::GetEntityHighlightGlobalState() */

    undefined1* game::SceneManager::GetEntityHighlightGlobalState() {
        return m_entityHighlightGlobalState;
    }

    // 0x100396020, 48 bytes, inline, placed by class name
    // SteamAuthLibWrapper::ShowMobileShop()
    void SteamAuthLibWrapper::ShowMobileShop() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            68, "STEAM NYI");
    }

    // 0x100396050, 48 bytes, inline, placed by class name
    // SteamAuthLibWrapper::ShowMobileShopSubset(ShopView, bool)
    void SteamAuthLibWrapper::ShowMobileShopSubset() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            75, "STEAM NYI");
    }

    // 0x100396080, 48 bytes, inline, placed by class name
    // SteamAuthLibWrapper::ShowMobileShopCategories(int, int)
    void SteamAuthLibWrapper::ShowMobileShopCategories(int param_1, int param_2) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            80, "STEAM NYI");
    }

    // 0x1003960b0, 48 bytes, inline, placed by class name
    // SteamAuthLibWrapper::InitialiseAnalyticsService()
    void SteamAuthLibWrapper::InitialiseAnalyticsService() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            85, "STEAM NYI");
    }

    // 0x1003960e0, 48 bytes, inline, placed by class name
    // SteamAuthLibWrapper::InitialiseAttributionService()
    void SteamAuthLibWrapper::InitialiseAttributionService() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            90, "STEAM NYI");
    }

    // 0x100396110, 48 bytes, inline, placed by class name
    // SteamAuthLibWrapper::InitialiseNotificationService()
    void SteamAuthLibWrapper::InitialiseNotificationService() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            95, "Notification Service initialized; no special work needed on Steam");
    }

    // 0x100396140, 48 bytes, inline, placed by class name
    // SteamAuthLibWrapper::CopyDeviceTokenToClipboard()
    void SteamAuthLibWrapper::CopyDeviceTokenToClipboard() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            100, "STEAM NYI");
    }

    // 0x100396170, 48 bytes, inline, placed by class name
    // SteamAuthLibWrapper::OpenNotificationSettings()
    void SteamAuthLibWrapper::OpenNotificationSettings() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            105, "STEAM NYI");
    }

    // 0x1003961a0, 48 bytes, inline, placed by class name
    // SteamAuthLibWrapper::OpenMobileBrowser(eastl::string const&)
    void SteamAuthLibWrapper::OpenMobileBrowser(basic_string* param_1) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            110, "STEAM NYI");
    }

    // 0x1003961d0, 48 bytes, inline, placed by class name
    // SteamAuthLibWrapper::SetAttributionAccountId(long long)
    void SteamAuthLibWrapper::SetAttributionAccountId(longlong param_1) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            115, "STEAM NYI");
    }

    // 0x100396200, 48 bytes, inline, placed by class name
    // SteamAuthLibWrapper::SendAnalyticsEvent(eastl::string const&)
    void SteamAuthLibWrapper::SendAnalyticsEvent(basic_string* param_1) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            120, "STEAM NYI");
    }

    // 0x100396230, 48 bytes, inline, placed by class name
    // SteamAuthLibWrapper::SendAttributionEvent(eastl::string const&)
    void SteamAuthLibWrapper::SendAttributionEvent(basic_string* param_1) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            125, "STEAM NYI");
    }

    // 0x100396260, 80 bytes, inline, placed by class name
    // SteamAuthLibWrapper::GetPendingTransactionResult()
    SteamAuthLibWrapper* SteamAuthLibWrapper::GetPendingTransactionResult() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            131, "STEAM NYI");
        new (this) Nullable<bool>(false);
        return this;
    }

    // 0x1003962b0, 48 bytes, inline, placed by class name
    // SteamAuthLibWrapper::InitiatePendingTransactionsCheck()
    void SteamAuthLibWrapper::InitiatePendingTransactionsCheck() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            137, "STEAM NYI");
    }

    // 0x1003962e0, 48 bytes, inline, placed by class name
    // SteamAuthLibWrapper::ApplyPendingTransactions()
    void SteamAuthLibWrapper::ApplyPendingTransactions() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            142, "STEAM NYI");
    }

    // 0x100396310, 48 bytes, inline, placed by class name
    // SteamAuthLibWrapper::PurchaseShopItem(eastl::string const&)
    void SteamAuthLibWrapper::PurchaseShopItem(basic_string* param_1) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            147, "STEAM NYI");
    }

    // 0x100396340, 48 bytes, inline, placed by class name
    // SteamAuthLibWrapper::RequestShopData()
    void SteamAuthLibWrapper::RequestShopData() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            152, "STEAM NYI");
    }

    // 0x100396370, 64 bytes, inline, placed by class name
    // SteamAuthLibWrapper::GetCategoryCount()
    undefined8 SteamAuthLibWrapper::GetCategoryCount() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            157, "STEAM NYI");
        return 0;
    }

    // 0x1003963b0, 64 bytes, inline, placed by class name
    // SteamAuthLibWrapper::GetCategoryID(int)
    undefined8 SteamAuthLibWrapper::GetCategoryID(int param_1) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            163, "STEAM NYI");
        return 0;
    }

    // 0x1003963f0, 64 bytes, inline, placed by class name
    // SteamAuthLibWrapper::GetIndexForCategoryID(int)
    undefined8 SteamAuthLibWrapper::GetIndexForCategoryID(int param_1) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            169, "STEAM NYI");
        return 0;
    }

    // 0x100396430, 64 bytes, inline, placed by class name
    // SteamAuthLibWrapper::GetIndexForCategoryName(eastl::string const&)
    undefined8 SteamAuthLibWrapper::GetIndexForCategoryName(basic_string* param_1) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            175, "STEAM NYI");
        return 0;
    }

    // 0x100396470, 112 bytes, inline, placed by class name
    // SteamAuthLibWrapper::GetCategoryDescription(int)
    SteamAuthLibWrapper* SteamAuthLibWrapper::GetCategoryDescription(int param_1) {
        undefined8 uVar1;
        allocator local_20[8];

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            181, "STEAM NYI");
        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("", local_20);
        return this;
    }

    // 0x1003964e0, 64 bytes, inline, placed by class name
    // SteamAuthLibWrapper::GetProductCount(int)
    undefined8 SteamAuthLibWrapper::GetProductCount(int param_1) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            187, "STEAM NYI");
        return 0;
    }

    // 0x100396520, 64 bytes, inline, placed by class name
    // SteamAuthLibWrapper::IsProductAvailable(int, int)
    undefined8 SteamAuthLibWrapper::IsProductAvailable(int param_1, int param_2) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            193, "STEAM NYI");
        return 0;
    }

    // 0x100396560, 64 bytes, inline, placed by class name
    // SteamAuthLibWrapper::IsProductRecommended(int, int)
    undefined8 SteamAuthLibWrapper::IsProductRecommended(int param_1, int param_2) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            199, "STEAM NYI");
        return 0;
    }

    // 0x1003965a0, 112 bytes, inline, placed by class name
    // SteamAuthLibWrapper::GetProductID(int, int)
    SteamAuthLibWrapper* SteamAuthLibWrapper::GetProductID(int param_1, int param_2) {
        undefined8 uVar1;
        allocator local_20[8];

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            205, "STEAM NYI");
        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("", local_20);
        return this;
    }

    // 0x100396610, 112 bytes, inline, placed by class name
    // SteamAuthLibWrapper::GetProductName(int, int)
    SteamAuthLibWrapper* SteamAuthLibWrapper::GetProductName(int param_1, int param_2) {
        undefined8 uVar1;
        allocator local_20[8];

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            211, "STEAM NYI");
        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("", local_20);
        return this;
    }

    // 0x100396680, 112 bytes, inline, placed by class name
    // SteamAuthLibWrapper::GetProductType(int, int)
    SteamAuthLibWrapper* SteamAuthLibWrapper::GetProductType(int param_1, int param_2) {
        undefined8 uVar1;
        allocator local_20[8];

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            217, "STEAM NYI");
        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("", local_20);
        return this;
    }

    // 0x1003966f0, 112 bytes, inline, placed by class name
    // SteamAuthLibWrapper::GetProductPrice(int, int)
    SteamAuthLibWrapper* SteamAuthLibWrapper::GetProductPrice(int param_1, int param_2) {
        undefined8 uVar1;
        allocator local_20[8];

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            223, "STEAM NYI");
        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("", local_20);
        return this;
    }

    // 0x100396760, 112 bytes, inline, placed by class name
    // SteamAuthLibWrapper::GetProductPriceAsMicroUnits(int, int)
    SteamAuthLibWrapper* SteamAuthLibWrapper::GetProductPriceAsMicroUnits(int param_1, int param_2) {
        undefined8 uVar1;
        allocator local_20[8];

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            229, "STEAM NYI");
        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("", local_20);
        return this;
    }

    // 0x1003967d0, 112 bytes, inline, placed by class name
    // SteamAuthLibWrapper::GetProductCurrencyCode(int, int)
    SteamAuthLibWrapper* SteamAuthLibWrapper::GetProductCurrencyCode(int param_1, int param_2) {
        undefined8 uVar1;
        allocator local_20[8];

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            235, "STEAM NYI");
        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("", local_20);
        return this;
    }

    // 0x100396840, 112 bytes, inline, placed by class name
    // SteamAuthLibWrapper::GetProductIntroductoryPrice(int, int)
    SteamAuthLibWrapper* SteamAuthLibWrapper::GetProductIntroductoryPrice(int param_1, int param_2) {
        undefined8 uVar1;
        allocator local_20[8];

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            241, "STEAM NYI");
        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("", local_20);
        return this;
    }

    // 0x1003968b0, 112 bytes, inline, placed by class name
    // SteamAuthLibWrapper::GetProductIntroductoryPriceAsMicroUnits(int, int)
    SteamAuthLibWrapper* SteamAuthLibWrapper::GetProductIntroductoryPriceAsMicroUnits(int param_1, int param_2) {
        undefined8 uVar1;
        allocator local_20[8];

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            247, "STEAM NYI");
        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("", local_20);
        return this;
    }

    // 0x100396920, 112 bytes, inline, placed by class name
    // SteamAuthLibWrapper::GetProductFreeTrialPeriod(int, int)
    SteamAuthLibWrapper* SteamAuthLibWrapper::GetProductFreeTrialPeriod(int param_1, int param_2) {
        undefined8 uVar1;
        allocator local_20[8];

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            253, "STEAM NYI");
        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("", local_20);
        return this;
    }

    // 0x100396990, 48 bytes, inline, placed by class name
    // SteamAuthLibWrapper::BeginFetchPurchaseHistory()
    void SteamAuthLibWrapper::BeginFetchPurchaseHistory() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            259, "STEAM NYI");
    }

    // 0x1003969c0, 64 bytes, inline, placed by class name
    // SteamAuthLibWrapper::PurchaseHistoryFetchCompleted()
    undefined8 SteamAuthLibWrapper::PurchaseHistoryFetchCompleted() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            264, "STEAM NYI");
        return 0;
    }

    // 0x100396a00, 64 bytes, inline, placed by class name
    // SteamAuthLibWrapper::EligibleForFreeTrial()
    undefined8 SteamAuthLibWrapper::EligibleForFreeTrial() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            270, "STEAM NYI");
        return 0;
    }

    // 0x100396a40, 64 bytes, inline, placed by class name
    // SteamAuthLibWrapper::EligibleForIntroductoryPrice()
    undefined8 SteamAuthLibWrapper::EligibleForIntroductoryPrice() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            276, "STEAM NYI");
        return 0;
    }

    // 0x100396a80, 48 bytes, inline, placed by class name
    // SteamAuthLibWrapper::NotificationAsyncStart()
    void SteamAuthLibWrapper::NotificationAsyncStart() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                            "auth/SteamAuthLibWrapper.h",
                            283, "STEAM NYI");
    }

    // 0x100396ab0, 96 bytes, inline, placed by class name
    // SteamAuthLibWrapper::ClearTokenAuthLogin()
    void SteamAuthLibWrapper::ClearTokenAuthLogin() {
        _func_decltype_nullptr* in_RSI;
        GameToken local_40;

        std::unique_ptr<jag::auth::TokenAuthLoginHandler, std::default_delete<jag::auth::TokenAuthLoginHandler>>::
        operator=((unique_ptr<jag::auth::TokenAuthLoginHandler,
                              std::default_delete<jag::auth::TokenAuthLoginHandler>>*)&field_184,
                  in_RSI);
        new (&local_40) GameToken();
        GameToken::operator=((GameToken*)field_192, &local_40);
        eastl::destruct<eastl::pair<eastl::string, option::IOption*>>((eastl*)&local_40, (pair*)&local_40);
    }

    // 0x100396b10, 112 bytes, inline, placed by class name
    // SteamAuthLibWrapper::IsTwoFactorAuthEnabled()
    undefined4 SteamAuthLibWrapper::IsTwoFactorAuthEnabled() {
        undefined4 uVar2;
        undefined8 uVar3;
        TokenAuthLoginHandler* this_00;
        _func_decltype_nullptr* in_RSI;

        if (std::operator==((unique_ptr*)&field_184, in_RSI)) {
            uVar3 = logger::default_logger();
            uVar2 = 0;
            logger::Logger::Log(uVar3, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                "clientlib/auth/SteamAuthLibWrapper.h",
                                304, "LoginHandler is null. Steam 2FA status could not be checked,");
        } else {
            this_00 = (TokenAuthLoginHandler*)std::unique_ptr<jag::auth::TokenAuthLoginHandler,
                                                              std::default_delete<jag::auth::TokenAuthLoginHandler>>::
                      operator->((unique_ptr<jag::auth::TokenAuthLoginHandler,
                                             std::default_delete<jag::auth::TokenAuthLoginHandler>>*)&field_184);
            uVar2 = this_00->IsSteamTwoFactorAuthEnabled();
        }
        return uVar2;
    }

    // 0x100397db0, 64 bytes, base-object destructor, inline, placed by class name
    // SteamAuthLibWrapper::~SteamAuthLibWrapper()
    void SteamAuthLibWrapper::~SteamAuthLibWrapper() {
        pair* in_RSI;

        field_0 = &PTR__SteamAuthLibWrapper_100efdb48;
        eastl::destruct<eastl::pair<eastl::string, option::IOption*>>((eastl*)field_192, in_RSI);
        (&field_184)->~unique_ptr();
        ~AuthLibWrapper();
    }

} // namespace jag::oldscape::auth
