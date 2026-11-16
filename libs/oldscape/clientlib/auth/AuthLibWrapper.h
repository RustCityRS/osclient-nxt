// libs/oldscape/clientlib/auth/AuthLibWrapper.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::auth {
    class AuthLibWrapper {
    public:
        // virtual methods in vtable order
        virtual ~AuthLibWrapper();
        void RequestReview();
        void AuthenticateWithJagexWeb();
        void LaunchAccountCreationFlow();
        uint64_t SupportsGameCenter();
        uint64_t SupportsSteamLogin();
        uint64_t SupportsGoogleLogin();
        uint64_t SupportsJagexWebLogin();
        auto GetApplyPendingTransactionResult();
        AuthLibWrapper(ApplicationContext* applicationContext, const eastl::string& str1, const eastl::string& str2,
                       const eastl::string& str3, const eastl::string& str4);
        unsigned int GetPurchaseShopItemStatus();
        uint32_t GetShopDataStatus();
        void SetIgnorePendingTransactionsOnFetchGameToken(bool arg1);
        void SendLocalNotification(const eastl::string& str1, const eastl::string& str2, int arg3, int arg4);
        void SendGroupedLocalNotification(const eastl::string& str1, const eastl::string& str2, int arg3, int arg4,
                                          const eastl::string& str3, int arg6);
        void CancelLocalNotification(int arg1);
        void IsLocalNotificationScheduledStart(int arg1);
        void IsLocalNotificationScheduled(int arg1);
        uint64_t GetNotificationEnabled();

    private:
        uint8_t _unknown_8[128];
        uint8_t field_136;
        uint8_t _unknown_137[2];
        uint8_t field_139;
        uint8_t _unknown_140[4];
        ApplicationContext* field_144;
        uint64_t m_purchaseShopItemStatus;
        uint64_t field_160;
        uint8_t _unknown_168[4];
        bool m_ignorePendingTransactionsOnFetchGameToken;
    };

    // 0x100121bc0
    auto AuthLibWrapper::GetApplyPendingTransactionResult() {
        return auto(&field_137);
    }

    // 0x10014d680
    AuthLibWrapper::AuthLibWrapper(ApplicationContext* applicationContext, const eastl::string& str1,
                                   const eastl::string& str2, const eastl::string& str3, const eastl::string& str4)
        : field_8(str1), field_40(str2), field_72(str3), field_104(str4), field_136(0), field_139(0),
          field_144(applicationContext), m_purchaseShopItemStatus(0), field_160(0) {
        *(uint64_t*)((long)&field_160 + 5) = 0;
    }

    // 0x10014d790
    AuthLibWrapper::~AuthLibWrapper() {
        field_104.~basic_string();
        field_72.~basic_string();
        field_40.~basic_string();
        field_8.~basic_string();
    }

    // 0x10015dc30
    unsigned int AuthLibWrapper::GetPurchaseShopItemStatus() {
        return m_currentIndex;
    }

    // 0x10015dc40
    uint32_t AuthLibWrapper::GetShopDataStatus() {
        return *(uint32_t*)((long)&m_purchaseShopItemStatus + 4);
    }

    // 0x100187030
    void AuthLibWrapper::SetIgnorePendingTransactionsOnFetchGameToken(bool arg1) {
        m_ignorePendingTransactionsOnFetchGameToken = arg1;
    }

} // namespace jag::oldscape::auth
