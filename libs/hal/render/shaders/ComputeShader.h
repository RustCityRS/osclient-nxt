// libs/hal/render/shaders/ComputeShader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class ComputeShader {
    public:
        // virtual methods in vtable order
        virtual ~ComputeShader();
        virtual uint64_t GetShaderType() const;
        ComputeShader();
        void CreateFromSourceString(const char* str, unsigned char arg2);
        void PrepareForReuse(const char* str, unsigned char arg2);
        static const char* SHADER_TYPE_NAME; // = "ComputeShader"
        static int32_t m_count;

    private:
        uint8_t _unknown_8[33];
        uint8_t field_41;
        uint8_t _unknown_42[6];
        RadialHighlightState field_48;
        uint32_t field_72;
        uint8_t _unknown_76[12];
    };

    class ComputeShaderSourceStream {
    public:
        // virtual methods in vtable order
        virtual ~ComputeShaderSourceStream();
        ComputeShaderSourceStream(ShaderVariablePrecision shaderVariablePrecision1,
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

    // 0x100bf6580
    uint64_t ComputeShader::GetShaderType() const {
        return 37305;
    }

    // 0x100c04eb0
    void ComputeShader::CreateFromSourceString(const char* str, unsigned char arg2) {
        CreateFromSourceString(SHADER_TYPE_NAME, str, arg2);
    }

    // 0x100c04f30
    void ComputeShader::PrepareForReuse(const char* str, unsigned char arg2) {
        PrepareForReuse(SHADER_TYPE_NAME, str, arg2);
    }

} // namespace jag::render
