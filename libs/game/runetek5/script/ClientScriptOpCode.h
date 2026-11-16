// libs/game/runetek5/script/ClientScriptOpCode.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class ClientScriptOpCode {
    public:
        class AutoValidation;
        class Validation;
        ClientScriptOpCode();
        static std::array<ClientScriptOpCode, 2137ul> OPCODES; // = array<ClientScriptOpCode, 2137ul>()

    private:
        uint64_t field_0;
        uint16_t field_8;
        uint8_t field_10;
        uint8_t _unknown_11[33];
        uint64_t field_44;
        uint64_t field_52;
    };

    class ClientScriptOpCode::AutoValidation {
    public:
        AutoValidation();
    };

    class ClientScriptOpCode::Validation {
    public:
        Validation();

    private:
        uint64_t field_0;
        uint32_t field_8;
        uint8_t field_12;
    };

    // 0x103992f98, set at startup by ___cxx_global_var_init
    std::array<ClientScriptOpCode, 2137ul> ClientScriptOpCode::OPCODES = array<ClientScriptOpCode, 2137ul>();

    // 0x1003b7600
    ClientScriptOpCode::ClientScriptOpCode() : field_0(0), field_8(65535), field_10(0), field_44(0), field_52(0) {}

    // 0x1003b7650
    ClientScriptOpCode::Validation::Validation() : math::Vector3T(), field_12(0) {}

} // namespace jag::game
