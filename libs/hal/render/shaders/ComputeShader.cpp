// libs/hal/render/shaders/ComputeShader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "ComputeShader.h"

namespace jag::render {
    // 0x100f487a0
    const char* ComputeShader::SHADER_TYPE_NAME = "ComputeShader";

    // 0x103bdc758
    int32_t ComputeShader::m_count;

    // 0x100be8740
    ComputeShader::ComputeShader() : Shader() {
        m_count = m_count + 1;
    }

    // 0x100be87f0
    ComputeShader::~ComputeShader() {
        Destroy();
        m_count = m_count - 1;
    }

} // namespace jag::render
