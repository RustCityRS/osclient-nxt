// libs/framework/connectionhelpers/ConnectionSettings.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag {
    class ConnectionSettings {
    public:
        ~ConnectionSettings();
        ConnectionSettings();

        uint8_t _unknown_0[136];
    };

    // 0x10013c950: ConnectionSettings::~ConnectionSettings() has the same machine code as oldscape::LoginState_OneTimeLoginToken::~LoginState_OneTimeLoginToken()

    // 0x100b063a0
    ConnectionSettings::ConnectionSettings() : eastl::string() {

        new (&field_128) eastl::string("nxt");
    }

} // namespace jag
