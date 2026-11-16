// libs/graphics/runetek7/materials/shaders/ShaderType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class ShaderTypeValue {
    public:
        ~ShaderTypeValue();

        uint8_t _unknown_0[16];
    };

    // 0x100898c50
    ShaderTypeValue::~ShaderTypeValue() {
        field_8.~unique_ptr();
    }

} // namespace jag::graphics
