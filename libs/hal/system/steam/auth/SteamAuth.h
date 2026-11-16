// libs/hal/system/steam/auth/SteamAuth.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::auth {
    class OAuth2TokenPair {
    public:
        ~OAuth2TokenPair();
        OAuth2TokenPair();
        OAuth2TokenPair* operator=(OAuth2TokenPair&&);

        // data members, from how the methods use this: 72 bytes
        char _unknown_0[64];
        undefined8 field_64; // offset 64
    };

    // 0x1003ae060, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // OAuth2TokenPair::OAuth2TokenPair(): jumps straight to the base-object constructor

    // 0x1003b2bd0, 128 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // OAuth2TokenPair::OAuth2TokenPair()
    void OAuth2TokenPair::OAuth2TokenPair() {
        allocator local_28[8];

        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new (this) eastl::string("", local_28);
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new (&field_32, "", local_28) eastl::string();
        field_64 = 0;
    }

    // 0x1003b2c50, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // GameSessionTokenCredentials::GameSessionTokenCredentials()
    void GameSessionTokenCredentials::GameSessionTokenCredentials() {
        new (this) eastl::string();
        new (&field_32) eastl::string();
    }

    // 0x1003b2c80, 288 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // JagexConfig::JagexConfig()
    void JagexConfig::JagexConfig() {
        allocator local_38[8];

        eastl::allocator::allocator(local_38, "EASTL basic_string");
        new (this) eastl::string("", local_38);
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        new (&field_32, "", local_38) eastl::string();
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        new (&field_64, "", local_38) eastl::string();
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        new (&field_96, "", local_38) eastl::string();
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        new (&field_128, "", local_38) eastl::string();
    }

    // 0x1003b31a0, 48 bytes, inline, placed by debug map only (low confidence)
    // OAuth2TokenPair::operator=(OAuth2TokenPair&&)
    /* OAuth2TokenPair::TEMPNAMEPLACEHOLDERVALUE(OAuth2TokenPair&&) */

    OAuth2TokenPair* OAuth2TokenPair::operator=(OAuth2TokenPair* param_1) {
        eastl::string::operator=((eastl::string*)this, (basic_string*)param_1);
        eastl::string::operator=((eastl::string*)&field_32, (basic_string*)&param_1->field_32);
        field_64 = param_1->field_64;
        return this;
    }

    // 0x1003b3220, 128 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // FederatedLoginTokenPair::FederatedLoginTokenPair()
    void FederatedLoginTokenPair::FederatedLoginTokenPair() {
        allocator local_28[8];

        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new (this) eastl::string("", local_28);
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new (&field_32, "", local_28) eastl::string();
    }

} // namespace jag::auth

namespace jag {
    class SteamAuth {
    public:
        GetTicketHexString();
        ~SteamAuth();
        void OpenTicket();
        void CancelTicket();
        IsTwoFactorAuthEnabled();
        void GetTicketStatus();

        // data members, from how the methods use this: 40 bytes
        char _unknown_0[40];
    };

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    SteamAuth::GetTicketHexString();

    // 0x100024070: the linker folded this into eastl::pair<eastl::string, oldscape::option::IOption*>::~pair(), which has identical code
    SteamAuth::~SteamAuth();

    // 0x10002dfe0: the linker folded this into eastl::hash_node<eastl::string, false>::~hash_node(), which has identical code
    SteamAuth::~SteamAuth();

    // 0x1003b20b0, 16 bytes, inline, placed by class name and debug map
    // SteamAuth::GetTicketStatus()
    void SteamAuth::GetTicketStatus() {
        (&field_32)->operator_cast_to_TicketRequestState();
    }

} // namespace jag
