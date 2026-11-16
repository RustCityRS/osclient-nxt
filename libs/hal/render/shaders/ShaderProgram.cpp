// libs/hal/render/shaders/ShaderProgram.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "ShaderProgram.h"

namespace jag::render {
    // 0x100009d00: ShaderProgram::GetVertexDecl() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second()

    // 0x100324d40: ShaderProgram::GetPixelShaderSource() const has the same machine code as oldscape::graphics::NXTPixToolkit::GetPix2D()

    // 0x100324d50: ShaderProgram::GetComputeShaderSource() const has the same machine code as oldscape::graphics::NXTPixToolkit::GetPix3D()

    // 0x100496cd0: ShaderProgram::GetVertexShaderSource() const has the same machine code as game::GraphicsDefaults::GetPlayerRecolDest() const

    // 0x100bdf400
    unsigned int ShaderProgram::GetNativeShaderProgram() const {
        WaitForAsyncCompile();
        return m_nativeShaderProgram;
    }

    // 0x100bdf6a0
    void ShaderProgram::SetShaderConstVector4(const HashedString& hashedString, unsigned int arg2,
                                              const math::Vector4T<float>* vector4, unsigned int arg4) const {
        int arg1 = GetUniformLocationIndex(hashedString);
        if (-1 < arg1) {
            SetShaderConstVector4(arg1, arg2, vector4, arg4);
        }
    }

    // 0x100beb310
    void ShaderProgram::SetProgramActive() const {
        RenderContext* pRVar2;

        auto pRVar1 = InstancePtr();
        if (pRVar1 != nullptr) {
            pRVar1 = (RenderDevice*)Instance();
            pRVar2 = pRVar1->GetCurrentThreadRenderContext();
            if (pRVar2 != nullptr) {
                pRVar1 = (RenderDevice*)pRVar1->Instance();
                pRVar2 = pRVar1->GetCurrentThreadRenderContext();
                pRVar2->SetShaders(this);
                return;
            }
        }
        LogAssert("(RenderDevice::InstancePtr()) != nullptr && "
                  "(RenderDevice::Instance().GetCurrentThreadRenderContext() != nullptr)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                  "ShaderProgram.cpp",
                  410, nullptr);
    }

    // 0x100beb380
    void ShaderProgram::SetProgramActive(RenderContext& renderContext) const {
        renderContext.SetShaders(this);
    }

    // 0x100beb8f0
    void ShaderProgram::CreateFromSourceString(const char* str, unsigned char arg2) {
        m_compileFlags = arg2;
        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar1 + 226) == '\0') {
            m_compileFlags = m_compileFlags & 252;
        }
        field_232.SetSource(str);
        CreateFromSourceString();
    }

} // namespace jag::render
