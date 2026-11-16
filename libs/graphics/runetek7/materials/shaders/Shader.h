// libs/graphics/runetek7/materials/shaders/Shader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class Shader {
    public:
        GetConstructedEffects();
        GetType() const;
        GetSourceHash() const;
        GetProgramUnchecked() const;
        GetConstructedShaderId() const;
        GetShaderCount();
        void WaitForAsyncCompile() const;
        Shader(ShaderType, std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> const&,
               std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> const&, unsigned long,
               EffectList const&, render::VertexDeclaration const&, EffectManager const&, unsigned char,
               RenderPassType);
        void ValidateShader(ShaderType, ShaderSource const&, ShaderSource const&, EffectList const&,
                            render::VertexDeclaration const&,
                            std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> const&);
        void ReloadProgramFromSource(EffectManager const&, ShaderReloadMode);
        void PostBuild(EffectManager const&);
        void RebuildProgramFromInternalSource(EffectManager const&);
        ulong IsReady() const;
        void PreRender(EffectManager const&);
        void DestroyProgram();
        ~Shader();
        GetProgram() const;
        static /* 16 bytes */ m_constructedShaderCount;

        // data members, from how the methods use this: 1906 bytes
        graphics* field_0;  // offset 0
        undefined1 field_8; // offset 8
        char _unknown_9[7];
        undefined8 field_16; // offset 16
        uint field_24;       // offset 24
        undefined4 field_28; // offset 28
        undefined8 field_32; // offset 32
        char _unknown_40[1864];
        byte field_1904; // offset 1904
        char field_1905; // offset 1905
    };

    // 0x1007ae1e0, 16 bytes, inline, placed by class name and debug map
    // Shader::GetShaderCount()
    undefined2 Shader::GetShaderCount() {
        return m_constructedShaderCount;
    }

    // 0x1007e40a0, 16 bytes, inline, placed by class name
    // Shader::WaitForAsyncCompile() const
    void Shader::WaitForAsyncCompile() {
        (&field_48)->WaitForAsyncCompile();
    }

    // 0x10089c210, 16 bytes, complete-object destructor, inline, placed by class name
    // Shader::~Shader(): jumps straight to the base-object destructor

    // 0x10089c220, 16 bytes, base-object destructor, inline, placed by class name
    // Shader::~Shader()
    void Shader::~Shader() {
        (&field_48)->~ShaderProgram();
    }

    // 0x1008f2a10, 64 bytes, inline, placed by class name
    // Shader::GetProgram() const
    undefined1* Shader::GetProgram() {
        if (IsReady(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsReady()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/shaders/Shader.h",
                      59, (char*)0);
        }
        return &field_48;
    }

} // namespace jag::graphics

namespace jag {
    class ShaderThreadPoolSingleton {
    public:
        ~ShaderThreadPoolSingleton();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

} // namespace jag
