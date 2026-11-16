// libs/hal/render/shaders/VertexShader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "VertexShader.h"

namespace jag::render {
    // 0x100f487b0, 8 bytes, __data
    VertexShader::SHADER_TYPE_NAME = "VertexShader";

    // 0x103bdc760, 8 bytes, __common; zero-initialised
    VertexShader::m_count;

    // 0x100bee370, 48 bytes, base-object constructor, placed by class name and debug map
    // VertexShader::VertexShader()
    void VertexShader::VertexShader() {
        new (this) Shader();
        field_0 = &PTR__VertexShader_100f28230;
        m_count._0_4_ = (int)m_count + 1;
    }

    // 0x100bee3a0, 16 bytes, complete-object constructor, placed by class name and debug map
    // VertexShader::VertexShader(): jumps straight to the base-object constructor

    // 0x100bee3b0, 64 bytes, base-object destructor, placed by class name and debug map
    // VertexShader::~VertexShader()
    void VertexShader::~VertexShader() {
        field_0 = &PTR__VertexShader_100f28230;
        Destroy();
        m_count._0_4_ = (int)m_count + -1;
        ~Shader();
    }

    // 0x100bee3f0, 16 bytes, complete-object destructor, placed by class name and debug map
    // VertexShader::~VertexShader(): jumps straight to the base-object destructor

    // 0x100bee400, 32 bytes, deleting destructor, placed by class name and debug map
    // VertexShader::~VertexShader()
    void VertexShader::~VertexShader() {
        ~VertexShader(this);
        operator_delete(this);
    }

} // namespace jag::render
