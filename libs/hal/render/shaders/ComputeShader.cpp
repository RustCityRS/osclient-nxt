// libs/hal/render/shaders/ComputeShader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "ComputeShader.h"

namespace jag::render {
    // 0x100f487a0, 8 bytes, __data
    ComputeShader::SHADER_TYPE_NAME = "ComputeShader";

    // 0x103bdc758, 4 bytes, __common; zero-initialised
    ComputeShader::m_count;

    // 0x100be8740, 48 bytes, base-object constructor, placed by class name and debug map
    // ComputeShader::ComputeShader()
    void ComputeShader::ComputeShader() {
        new (this) Shader();
        field_0 = &PTR__ComputeShader_100f280e0;
        m_count = m_count + 1;
    }

    // 0x100be87e0, 16 bytes, complete-object constructor, placed by class name
    // ComputeShader::ComputeShader(): jumps straight to the base-object constructor

    // 0x100be87f0, 64 bytes, base-object destructor, placed by class name
    // ComputeShader::~ComputeShader()
    void ComputeShader::~ComputeShader() {
        field_0 = &PTR__ComputeShader_100f280e0;
        Destroy();
        m_count = m_count + -1;
        ~Shader();
    }

    // 0x100be88f0, 16 bytes, complete-object destructor, placed by class name
    // ComputeShader::~ComputeShader(): jumps straight to the base-object destructor

    // 0x100be8900, 32 bytes, deleting destructor, placed by class name
    // ComputeShader::~ComputeShader()
    void ComputeShader::~ComputeShader() {
        ~ComputeShader(this);
        operator_delete(this);
    }

} // namespace jag::render
