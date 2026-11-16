// libs/hal/render/shaders/PixelShader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class PixelShader {
    public:
        // virtual methods in vtable order
        virtual ~PixelShader();
        virtual GetShaderType() const;
        PixelShader();
        void CreateFromSourceString(char const*, unsigned char);
        void PrepareForReuse(char const*, unsigned char);
        CreateFromBinary(unsigned long);
        static /* 8 bytes */ SHADER_TYPE_NAME; // = "PixelShader"
        static /* 4 bytes */ m_count;

        // data members, from how the methods use this: 88 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[32];
        undefined1 field_40; // offset 40
        undefined1 field_41; // offset 41
        char _unknown_42[6];
        RadialHighlightState field_48; // offset 48
        int field_72;                  // offset 72
        char _unknown_76[12];
    };

    class PixelShaderSourceStream {
    public:
        // virtual methods in vtable order
        virtual ~PixelShaderSourceStream();
        PixelShaderSourceStream(ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision,
                                ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision,
                                unsigned int);

        // data members, from how the methods use this: 136 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[8];
        undefined* field_16; // offset 16
        char _unknown_24[104];
        undefined* field_128; // offset 128
    };

    // 0x100bde800, 48 bytes, complete-object destructor, inline, placed by class header (inline)
    // PixelShaderSourceStream::~PixelShaderSourceStream()
    void PixelShaderSourceStream::~PixelShaderSourceStream() {
        ~ComputeShaderSourceStream();
        (&field_128)->~ios();
    }

    // 0x100bf6590, 16 bytes, inline, placed by class name and debug map
    // PixelShader::GetShaderType() const
    undefined8 PixelShader::GetShaderType() {
        return 35632;
    }

    // 0x100c042b0, 32 bytes, inline, placed by class name
    // PixelShader::CreateFromSourceString(char const*, unsigned char)
    void PixelShader::CreateFromSourceString(char* param_1, uchar param_2) {
        CreateFromSourceString(SHADER_TYPE_NAME, param_1, param_2);
    }

    // 0x100c04330, 32 bytes, inline, placed by class name
    // PixelShader::PrepareForReuse(char const*, unsigned char)
    void PixelShader::PrepareForReuse(char* param_1, uchar param_2) {
        PrepareForReuse(SHADER_TYPE_NAME, param_1, param_2);
    }

    // 0x100c05930, 32 bytes, inline, placed by class name
    // PixelShader::CreateFromBinary(unsigned long)
    undefined1 PixelShader::CreateFromBinary(ulong param_1) {
        CreateFromBinary(SHADER_TYPE_NAME, param_1);
        return 1;
    }

} // namespace jag::render
