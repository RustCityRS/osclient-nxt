// libs/hal/render/shaders/PixelShader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "PixelShader.h"

namespace jag::render {
    // 0x100f487a8, 8 bytes, __data
    PixelShader::SHADER_TYPE_NAME = "PixelShader";

    // 0x103bdc75c, 4 bytes, __common; zero-initialised
    PixelShader::m_count;

    // 0x100be8920, 48 bytes, base-object constructor, placed by class name and debug map
    // PixelShader::PixelShader()
    void PixelShader::PixelShader() {
        new (this) Shader();
        field_0 = &PTR__PixelShader_100f28108;
        m_count = m_count + 1;
    }

    // 0x100be8950, 16 bytes, complete-object constructor, placed by class name and debug map
    // PixelShader::PixelShader(): jumps straight to the base-object constructor

    // 0x100be8960, 64 bytes, base-object destructor, placed by class name and debug map
    // PixelShader::~PixelShader()
    void PixelShader::~PixelShader() {
        field_0 = &PTR__PixelShader_100f28108;
        Destroy();
        m_count = m_count + -1;
        ~Shader();
    }

    // 0x100be89a0, 16 bytes, complete-object destructor, placed by class name and debug map
    // PixelShader::~PixelShader(): jumps straight to the base-object destructor

    // 0x100be89b0, 32 bytes, deleting destructor, placed by class name and debug map
    // PixelShader::~PixelShader()
    void PixelShader::~PixelShader() {
        ~PixelShader(this);
        operator_delete(this);
    }

} // namespace jag::render
