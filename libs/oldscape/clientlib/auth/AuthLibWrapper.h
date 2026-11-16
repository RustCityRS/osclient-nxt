// libs/oldscape/clientlib/auth/AuthLibWrapper.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::auth {
    class AuthLibWrapper {
    public:
        // virtual methods in vtable order
        virtual ~AuthLibWrapper();
        RequestReview();
        AuthenticateWithJagexWeb();
        LaunchAccountCreationFlow();
        SupportsGameCenter();
        SupportsSteamLogin();
        SupportsGoogleLogin();
        SupportsJagexWebLogin();
        GetApplyPendingTransactionResult();
        AuthLibWrapper(ApplicationContext*, eastl::string const&, eastl::string const&, eastl::string const&,
                       eastl::string const&);
        GetPurchaseShopItemStatus();
        GetShopDataStatus();
        void SetIgnorePendingTransactionsOnFetchGameToken(bool);
        void SendLocalNotification(eastl::string const&, eastl::string const&, int, int);
        void SendGroupedLocalNotification(eastl::string const&, eastl::string const&, int, int, eastl::string const&,
                                          int);
        void CancelLocalNotification(int);
        void IsLocalNotificationScheduledStart(int);
        void IsLocalNotificationScheduled(int);
        GetNotificationEnabled();

        // data members, from how the methods use this: 173 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[128];
        undefined1 field_136; // offset 136
        char _unknown_137[2];
        undefined1 field_139; // offset 139
        char _unknown_140[4];
        ApplicationContext* field_144;       // offset 144
        undefined8 m_purchaseShopItemStatus; // offset 152
        undefined8 field_160;                // offset 160
        char _unknown_168[4];
        bool m_ignorePendingTransactionsOnFetchGameToken; // offset 172
    };

    // 0x100121bc0, 32 bytes, inline, placed by class name and debug map
    // AuthLibWrapper::GetApplyPendingTransactionResult()
    AuthLibWrapper* AuthLibWrapper::GetApplyPendingTransactionResult() {
        long in_RSI;

        new (this) Nullable<bool>((Nullable*)(in_RSI + 137));
        return this;
    }

    // 0x10014d680, 240 bytes, base-object constructor, inline, placed by class name
    // AuthLibWrapper::AuthLibWrapper(ApplicationContext*, eastl::string const&, eastl::string const&, eastl::string const&, eastl::string const&)
    void AuthLibWrapper::AuthLibWrapper(ApplicationContext* param_1, basic_string* param_2, basic_string* param_3,
                                        basic_string* param_4, basic_string* param_5) {
        field_0 = &PTR__OptionStore_100efd6e8;
        new (&field_8, param_2) eastl::string();
        new (&field_40, param_3) eastl::string();
        new (&field_72, param_4) eastl::string();
        new (&field_104, param_5) eastl::string();
        field_136 = 0;
        new (&field_137) Nullable<LocLayer>();
        field_139 = 0;
        field_144 = param_1;
        m_purchaseShopItemStatus = 0;
        field_160 = 0;
        *(undefined8*)((long)&field_160 + 5) = 0;
    }

    // 0x10014d790, 80 bytes, base-object destructor, inline, placed by class name
    // AuthLibWrapper::~AuthLibWrapper()
    void AuthLibWrapper::~AuthLibWrapper() {
        field_0 = &PTR__OptionStore_100efd6e8;
        (&field_104)->~basic_string();
        (&field_72)->~basic_string();
        (&field_40)->~basic_string();
        (&field_8)->~basic_string();
    }

    // 0x10015dc30, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // AuthLibWrapper::GetPurchaseShopItemStatus()
    /* jag::graphics::AnimationParameters::GetCurrentIndex() const */

    uint jag::graphics::AnimationParameters::GetCurrentIndex() {
        return m_currentIndex;
    }

    // 0x10015dc40, 16 bytes, inline, placed by class name
    // AuthLibWrapper::GetShopDataStatus()
    undefined4 AuthLibWrapper::GetShopDataStatus() {
        return *(undefined4*)((long)&m_purchaseShopItemStatus + 4);
    }

    // 0x100187030, 16 bytes, inline, placed by class name
    // AuthLibWrapper::SetIgnorePendingTransactionsOnFetchGameToken(bool)
    void AuthLibWrapper::SetIgnorePendingTransactionsOnFetchGameToken(bool param_1) {
        m_ignorePendingTransactionsOnFetchGameToken = param_1;
    }

} // namespace jag::oldscape::auth
