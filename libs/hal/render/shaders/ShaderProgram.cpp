// libs/hal/render/shaders/ShaderProgram.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "ShaderProgram.h"

namespace jag::render {
    // 0x100009d00: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second(), which has identical code
    ShaderProgram::GetVertexDecl() const;

    // 0x100324d40: the linker folded this into oldscape::graphics::NXTPixToolkit::GetPix2D(), which has identical code
    ShaderProgram::GetPixelShaderSource() const;

    // 0x100324d50: the linker folded this into oldscape::graphics::NXTPixToolkit::GetPix3D(), which has identical code
    ShaderProgram::GetComputeShaderSource() const;

    // 0x100496cd0: the linker folded this into game::GraphicsDefaults::GetPlayerRecolDest() const, which has identical code
    ShaderProgram::GetVertexShaderSource() const;

    // 0x100bdf400, 32 bytes, placed by class name
    // ShaderProgram::GetNativeShaderProgram() const
    uint ShaderProgram::GetNativeShaderProgram() {
        WaitForAsyncCompile(this);
        return m_nativeShaderProgram;
    }

    // 0x100bdf6a0, 64 bytes, placed by class name and debug map
    // ShaderProgram::SetShaderConstVector4(HashedString const&, unsigned int, math::Vector4T<float> const*, unsigned int) const
    void ShaderProgram::SetShaderConstVector4(HashedString* param_1, uint param_2, Vector4T* param_3, uint param_4) {
        int iVar1;

        iVar1 = GetUniformLocationIndex(this, param_1);
        if (-1 < iVar1) {
            SetShaderConstVector4(this, iVar1, param_2, param_3, param_4);
        }
    }

    // 0x100be2de0, 16 bytes, complete-object constructor, placed by class name
    // ShaderProgram::ShaderProgram(char const*): jumps straight to the base-object constructor

    // 0x100be2df0, 16 bytes, complete-object destructor, placed by class name
    // ShaderProgram::~ShaderProgram(): jumps straight to the base-object destructor

    // 0x100beb310, 112 bytes, placed by class name
    // ShaderProgram::SetProgramActive() const
    void ShaderProgram::SetProgramActive() {
        long lVar1;
        RenderDevice* pRVar2;
        RenderContext* this_00;

        lVar1 = Singleton<RenderDevice>::InstancePtr();
        if (lVar1 != 0) {
            pRVar2 = (RenderDevice*)((ShaderProgram*)this)->Instance();
            lVar1 = pRVar2->GetCurrentThreadRenderContext();
            if (lVar1 != 0) {
                pRVar2 = (RenderDevice*)pRVar2->Instance();
                this_00 = (RenderContext*)pRVar2->GetCurrentThreadRenderContext();
                this_00->SetShaders(this);
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("(RenderDevice::InstancePtr()) != nullptr && "
                  "(RenderDevice::Instance().GetCurrentThreadRenderContext() != nullptr)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/shaders/"
                  "ShaderProgram.cpp",
                  410, (char*)0);
    }

    // 0x100beb380, 32 bytes, placed by class name
    // ShaderProgram::SetProgramActive(RenderContext&) const
    void ShaderProgram::SetProgramActive(RenderContext* param_1) {
        param_1->SetShaders(this);
    }

    // 0x100beb8f0, 80 bytes, placed by class name
    // ShaderProgram::CreateFromSourceString(char const*, unsigned char)
    void ShaderProgram::CreateFromSourceString(char* param_1, uchar param_2) {
        MapArea* this_00;
        long lVar1;

        m_compileFlags = param_2;
        this_00 = (MapArea*)Instance();
        lVar1 = this_00->GetOrigin();
        if (*(char*)(lVar1 + 226) == '\0') {
            m_compileFlags = m_compileFlags & 252;
        }
        (&field_232, param_1)->SetSource();
        CreateFromSourceString(this);
    }

} // namespace jag::render
