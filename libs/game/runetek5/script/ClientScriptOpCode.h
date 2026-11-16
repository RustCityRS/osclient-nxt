// libs/game/runetek5/script/ClientScriptOpCode.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class ClientScriptOpCode {
    public:
        class AutoValidation;
        class Validation;
        ClientScriptOpCode();
        static std::array<ClientScriptOpCode, 2137ul> /* 136768 bytes */
            OPCODES;                                  // = array<ClientScriptOpCode,2137ul>()

        // data members, from how the methods use this: 60 bytes
        undefined8 field_0;  // offset 0
        undefined2 field_8;  // offset 8
        undefined1 field_10; // offset 10
        char _unknown_11[33];
        undefined8 field_44; // offset 44
        undefined8 field_52; // offset 52
    };

    class ClientScriptOpCode::AutoValidation {
    public:
        AutoValidation();
    };

    class ClientScriptOpCode::Validation {
    public:
        Validation();

        // data members, from how the methods use this: 13 bytes
        undefined8 field_0;  // offset 0
        undefined4 field_8;  // offset 8
        undefined1 field_12; // offset 12
    };

    // 0x103992f98, 136768 bytes, __common; set at startup by ___cxx_global_var_init
    std::array<ClientScriptOpCode, 2137ul> ClientScriptOpCode::OPCODES = array<ClientScriptOpCode, 2137ul>();

    // 0x1003b75f0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ClientScriptOpCode::ClientScriptOpCode(): jumps straight to the base-object constructor

    // 0x1003b7600, 64 bytes, base-object constructor, inline, placed by class name and debug map
    // ClientScriptOpCode::ClientScriptOpCode()
    void ClientScriptOpCode::ClientScriptOpCode() {
        field_0 = 0;
        field_8 = 65535;
        field_10 = 0;
        new (&field_12) Validation();
        new (&field_28) Validation();
        field_44 = 0;
        field_52 = 0;
    }

    // 0x1003b7640, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ClientScriptOpCode::Validation::Validation(): jumps straight to the base-object constructor

    // 0x1003b7650, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // ClientScriptOpCode::Validation::Validation()
    void ClientScriptOpCode::Validation::Validation() {
        new (this) math::Vector3T<int>();
        field_12 = 0;
    }

    // 0x1003bb3c0, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        new (&ClientScriptOpCode::OPCODES) std::array<ClientScriptOpCode, 2137ul>();
    }

} // namespace jag::game
