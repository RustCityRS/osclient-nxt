// libs/hal/render/shaders/PixelShader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class PixelShader {
    public:
        // virtual methods in vtable order
        virtual ~PixelShader();
        virtual uint64_t GetShaderType() const;
        PixelShader();
        void CreateFromSourceString(const char* str, unsigned char arg2);
        void PrepareForReuse(const char* str, unsigned char arg2);
        uint8_t CreateFromBinary(unsigned long arg1);
        static const char* SHADER_TYPE_NAME; // = "PixelShader"
        static int32_t m_count;

    private:
        uint8_t _unknown_8[33];
        uint8_t field_41;
        uint8_t _unknown_42[6];
        RadialHighlightState field_48;
        TextWrapMode field_72;
        uint8_t _unknown_76[12];
    };

    class PixelShaderSourceStream {
    public:
        // virtual methods in vtable order
        virtual ~PixelShaderSourceStream();
        PixelShaderSourceStream(ShaderVariablePrecision shaderVariablePrecision1,
                                ShaderVariablePrecision shaderVariablePrecision2,
                                ShaderVariablePrecision shaderVariablePrecision3,
                                ShaderVariablePrecision shaderVariablePrecision4,
                                ShaderVariablePrecision shaderVariablePrecision5,
                                ShaderVariablePrecision shaderVariablePrecision6, unsigned int arg7);

    private:
        uint8_t _unknown_8[8];
        uint8_t* field_16;
        uint8_t _unknown_24[104];
        uint8_t* field_128;
    };

    // 0x100bde800
    PixelShaderSourceStream::~PixelShaderSourceStream() {
        (&field_128)->~ios();
    }

    // 0x100bf6590
    uint64_t PixelShader::GetShaderType() const {
        return 35632;
    }

    // 0x100c042b0
    void PixelShader::CreateFromSourceString(const char* str, unsigned char arg2) {
        CreateFromSourceString(SHADER_TYPE_NAME, str, arg2);
    }

    // 0x100c04330
    void PixelShader::PrepareForReuse(const char* str, unsigned char arg2) {
        PrepareForReuse(SHADER_TYPE_NAME, str, arg2);
    }

    // 0x100c05930
    uint8_t PixelShader::CreateFromBinary(unsigned long arg1) {
        CreateFromBinary(SHADER_TYPE_NAME, arg1);
        return 1;
    }

} // namespace jag::render
