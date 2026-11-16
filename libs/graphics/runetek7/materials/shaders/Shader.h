// libs/graphics/runetek7/materials/shaders/Shader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class Shader {
    public:
        void GetConstructedEffects();
        ShaderType GetType() const;
        void GetSourceHash() const;
        uint8_t* GetProgramUnchecked() const;
        unsigned int GetConstructedShaderId() const;
        void GetShaderCount();
        void WaitForAsyncCompile() const;
        Shader(ShaderType shaderType,
               const std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>& str1,
               const std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>& str2,
               unsigned long arg4, const EffectList& effectList, const render::VertexDeclaration& vertexDeclaration,
               const EffectManager& effectManager, unsigned char arg8, RenderPassType renderPassType);
        void ValidateShader(ShaderType shaderType, const ShaderSource& shaderSource1, const ShaderSource& shaderSource2,
                            const EffectList& effectList, const render::VertexDeclaration& vertexDeclaration,
                            const std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>& str);
        void ReloadProgramFromSource(const EffectManager& effectManager, ShaderReloadMode shaderReloadMode);
        void PostBuild(const EffectManager& effectManager);
        void RebuildProgramFromInternalSource(const EffectManager& effectManager);
        unsigned long IsReady() const;
        void PreRender(const EffectManager& effectManager);
        void DestroyProgram();
        ~Shader();
        ShaderProgram* GetProgram() const;
        static uint8_t m_constructedShaderCount[16];

    private:
        ShaderType m_type;
        uint8_t _unknown_4[4];
        uint8_t field_8;
        uint8_t _unknown_9[7];
        uint64_t field_16;
        unsigned int m_constructedShaderId;
        RenderPassType field_28;
        unsigned long field_32;
        uint8_t _unknown_40[8];
        uint8_t m_program;
        uint8_t _unknown_49[1855];
        unsigned char field_1904;
        char field_1905;
    };

    // 0x1007ae1e0
    void Shader::GetShaderCount() {
        return m_constructedShaderCount;
    }

    // 0x1007e40a0
    void Shader::WaitForAsyncCompile() const {
        m_program.WaitForAsyncCompile();
    }

    // 0x10089c220
    Shader::~Shader() {}

    // 0x1008f2a10
    ShaderProgram* Shader::GetProgram() const {
        if (IsReady() == '\0') {
            LogAssert("IsReady()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/shaders/Shader.h",
                      59, nullptr);
        }
        return (ShaderProgram*)&m_program;
    }

} // namespace jag::graphics

namespace jag {
    class ShaderThreadPoolSingleton {
    public:
        ~ShaderThreadPoolSingleton();

        uint8_t _unknown_0[1];
    };

} // namespace jag
