// libs/hal/render/shaders/PixelShader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "PixelShader.h"

namespace jag::render {
    // 0x100f487a8
    const char* PixelShader::SHADER_TYPE_NAME = "PixelShader";

    // 0x103bdc75c
    int32_t PixelShader::m_count;

    // 0x100be8920
    PixelShader::PixelShader() : Shader() {
        m_count = m_count + 1;
    }

    // 0x100be8960
    PixelShader::~PixelShader() {
        Destroy();
        m_count = m_count - 1;
    }

} // namespace jag::render
