// libs/hal/render/shaders/ComputeShader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class ComputeShader {
    public:
        // virtual methods in vtable order
        virtual ~ComputeShader();
        virtual GetShaderType() const;
        ComputeShader();
        void CreateFromSourceString(char const*, unsigned char);
        void PrepareForReuse(char const*, unsigned char);
        static /* 8 bytes */ SHADER_TYPE_NAME; // = "ComputeShader"
        static /* 4 bytes */ m_count;

        // data members, from how the methods use this: 88 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[32];
        undefined1 field_40; // offset 40
        undefined1 field_41; // offset 41
        char _unknown_42[6];
        RadialHighlightState field_48; // offset 48
        undefined4 field_72;           // offset 72
        char _unknown_76[12];
    };

    class ComputeShaderSourceStream {
    public:
        // virtual methods in vtable order
        virtual ~ComputeShaderSourceStream();
        ComputeShaderSourceStream(ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision,
                                  ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision,
                                  unsigned int);

        // data members, from how the methods use this: 136 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[8];
        undefined* field_16; // offset 16
        char _unknown_24[104];
        undefined* field_128; // offset 128
    };

    // 0x100bf6580, 16 bytes, inline, placed by class name and debug map
    // ComputeShader::GetShaderType() const
    undefined8 ComputeShader::GetShaderType() {
        return 37305;
    }

    // 0x100c04eb0, 32 bytes, inline, placed by class name
    // ComputeShader::CreateFromSourceString(char const*, unsigned char)
    void ComputeShader::CreateFromSourceString(char* param_1, uchar param_2) {
        CreateFromSourceString(SHADER_TYPE_NAME, param_1, param_2);
    }

    // 0x100c04f30, 32 bytes, inline, placed by class name
    // ComputeShader::PrepareForReuse(char const*, unsigned char)
    void ComputeShader::PrepareForReuse(char* param_1, uchar param_2) {
        PrepareForReuse(SHADER_TYPE_NAME, param_1, param_2);
    }

} // namespace jag::render
