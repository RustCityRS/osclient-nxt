// libs/hal/render/shaders/Shader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class Shader {
    public:
        // virtual methods in vtable order
        virtual ~Shader();
        TextWrapMode GetNativeShader() const;
        Shader();
        void Destroy();
        bool IsReady() const;
        uint32_t PrepareForReuse(const char* str1, const char* str2, unsigned char arg3);
        void WaitForAsyncCompile() const;
        bool IsCreatedFromBinary() const;
        bool CreateFromSourceString(const char* str1, const char* str2, unsigned char arg3);
        bool IsCreated() const;
        void ReleaseNativeResources();
        uint64_t CreateFromBinary(const char* str, unsigned long arg2);

    private:
        uint8_t _unknown_8[33];
        unsigned char field_41;
        uint8_t _unknown_42[6];
        RadialHighlightState field_48;
        TextWrapMode m_nativeShader;
        uint8_t _unknown_76[12];
    };

    class ShaderPrecisionProfile {
    public:
        ShaderPrecisionProfile(ShaderVariablePrecision arg1, ShaderVariablePrecision arg2, ShaderVariablePrecision arg3,
                               ShaderVariablePrecision arg4, ShaderVariablePrecision arg5,
                               ShaderVariablePrecision arg6);

    private:
        int field_0;
        int field_4;
        int field_8;
        int field_12;
        int field_16;
        int field_20;
        uint8_t _unknown_24[4];
    };

    class ShaderTextureImageData {
    public:
        ShaderTextureImageData(unsigned int arg1, const Texture* texture, Access access);
        uint32_t operator==(const ShaderTextureImageData& shaderTextureImageData) const;

    private:
        Texture* field_0;
        unsigned int field_8;
        Access field_12;
        uint8_t _unknown_16[4];
    };

    class ShaderTextureSamplerData {
    public:
        ShaderTextureSamplerData(unsigned int arg1, const Texture* texture, int arg3, const SamplerState* samplerState,
                                 bool arg5);
        uint64_t operator==(const ShaderTextureSamplerData& shaderTextureSamplerData) const;

    private:
        Texture* field_0;
        SamplerState* field_8;
        unsigned int field_16;
        int field_20;
        bool field_24;
        uint8_t _unknown_25[3];
    };

    // 0x100be8b10
    bool Shader::IsCreatedFromBinary() const {
        return m_nativeShader == 4294967295;
    }

    // 0x100be8c20
    bool Shader::IsCreated() const {
        return m_nativeShader != 0;
    }

} // namespace jag::render
