// libs/hal/render/shaders/VertexShader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "VertexShader.h"

namespace jag::render {
    // 0x100f487b0
    const char* VertexShader::SHADER_TYPE_NAME = "VertexShader";

    // 0x103bdc760
    int64_t VertexShader::m_count;

    // 0x100bee370
    VertexShader::VertexShader() : Shader() {
        m_count._0_4_ = (int)m_count + 1;
    }

    // 0x100bee3b0
    VertexShader::~VertexShader() {
        Destroy();
        m_count._0_4_ = (int)m_count - 1;
    }

} // namespace jag::render
