// libs/graphics/runetek7/materials/shaders/ShaderType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ShaderTypeValue {
    public:
        ~ShaderTypeValue();

        // data members, from how the methods use this: 16 bytes
        char _unknown_0[16];
    };

    // 0x100893e50, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ShaderTypeValue::~ShaderTypeValue(): jumps straight to the base-object destructor

    // 0x100898c50, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // ShaderTypeValue::~ShaderTypeValue()
    void ShaderTypeValue::~ShaderTypeValue() {
        (&field_8)->~unique_ptr();
        ~unique_ptr();
    }

} // namespace jag::graphics
