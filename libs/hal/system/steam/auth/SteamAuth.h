// libs/hal/system/steam/auth/SteamAuth.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::auth {
    class OAuth2TokenPair {
    public:
        ~OAuth2TokenPair();
        OAuth2TokenPair();
        OAuth2TokenPair* operator=(OAuth2TokenPair&& oAuth2TokenPair);

    private:
        uint8_t _unknown_0[64];
        uint64_t field_64;
    };

    // 0x1003b2bd0
    OAuth2TokenPair::OAuth2TokenPair() {

        new (this) eastl::string("");
        new (&field_32) eastl::string("");
        field_64 = 0;
    }

    // 0x1003b2c50
    GameSessionTokenCredentials::GameSessionTokenCredentials() : eastl::string() {}

    // 0x1003b2c80
    JagexConfig::JagexConfig() {

        new (this) eastl::string("");
        new (&field_32) eastl::string("");
        new (&field_64) eastl::string("");
        new (&field_96) eastl::string("");
        new (&field_128) eastl::string("");
    }

    // 0x1003b31a0
    OAuth2TokenPair* OAuth2TokenPair::operator=(OAuth2TokenPair&& oAuth2TokenPair) {
        *this = oAuth2TokenPair;
        field_32 = &oAuth2TokenPair.field_32;
        field_64 = oAuth2TokenPair.field_64;
        return this;
    }

    // 0x1003b3220
    FederatedLoginTokenPair::FederatedLoginTokenPair() {

        new (this) eastl::string("");
        new (&field_32) eastl::string("");
    }

} // namespace jag::auth

namespace jag {
    class SteamAuth {
    public:
        void GetTicketHexString();
        ~SteamAuth();
        void OpenTicket();
        void CancelTicket();
        void IsTwoFactorAuthEnabled();
        void GetTicketStatus();

        uint8_t _unknown_0[40];
    };

    // 0x100009ca0: SteamAuth::GetTicketHexString() has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100024070: SteamAuth::~SteamAuth() has the same machine code as eastl::pair<eastl::string, oldscape::option::IOption*>::~pair()

    // 0x10002dfe0: SteamAuth::~SteamAuth() has the same machine code as eastl::hash_node<eastl::string, false>::~hash_node()

    // 0x1003b20b0
    void SteamAuth::GetTicketStatus() {
        (&field_32)->operator_cast_to_TicketRequestState();
    }

} // namespace jag
