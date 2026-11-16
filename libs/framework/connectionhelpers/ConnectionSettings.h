// libs/framework/connectionhelpers/ConnectionSettings.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag {
    class ConnectionSettings {
    public:
        ~ConnectionSettings();
        ConnectionSettings();

        // data members, from how the methods use this: 136 bytes
        char _unknown_0[136];
    };

    // 0x10013c950: the linker folded this into oldscape::LoginState_OneTimeLoginToken::~LoginState_OneTimeLoginToken(), which has identical code
    ConnectionSettings::~ConnectionSettings();

    // 0x1003ae220: the linker folded this into auth::JagexConfig::~JagexConfig(), which has identical code
    ConnectionSettings::~ConnectionSettings();

    // 0x100b038c0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ConnectionSettings::ConnectionSettings(): jumps straight to the base-object constructor

    // 0x100b063a0, 176 bytes, base-object constructor, inline, placed by class name
    // ConnectionSettings::ConnectionSettings()
    void ConnectionSettings::ConnectionSettings() {
        allocator local_38[8];

        new (this) eastl::string();
        new (&field_32) eastl::string();
        new (&field_64) eastl::string();
        new (&field_96) eastl::string();
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        new (&field_128, "nxt", local_38) eastl::string();
    }

} // namespace jag
