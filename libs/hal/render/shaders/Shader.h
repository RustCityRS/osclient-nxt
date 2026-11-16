// libs/hal/render/shaders/Shader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class Shader {
    public:
        // virtual methods in vtable order
        virtual ~Shader();
        GetNativeShader() const;
        Shader();
        void Destroy();
        bool IsReady() const;
        PrepareForReuse(char const*, char const*, unsigned char);
        void WaitForAsyncCompile() const;
        bool IsCreatedFromBinary() const;
        bool CreateFromSourceString(char const*, char const*, unsigned char);
        bool IsCreated() const;
        void ReleaseNativeResources();
        CreateFromBinary(char const*, unsigned long);

        // data members, from how the methods use this: 88 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[32];
        undefined1 field_40; // offset 40
        uchar field_41;      // offset 41
        char _unknown_42[6];
        RadialHighlightState field_48; // offset 48
        int field_72;                  // offset 72
        char _unknown_76[12];
    };

    class ShaderPrecisionProfile {
    public:
        ShaderPrecisionProfile(ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision,
                               ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision);

        // data members, from how the methods use this: 28 bytes
        int field_0;  // offset 0
        int field_4;  // offset 4
        uint field_8; // offset 8
        int field_12; // offset 12
        int field_16; // offset 16
        int field_20; // offset 20
        char _unknown_24[4];
    };

    class ShaderTextureImageData {
    public:
        ShaderTextureImageData(unsigned int, Texture const*, Access);
        operator==(ShaderTextureImageData const&) const;

        // data members, from how the methods use this: 20 bytes
        undefined8 field_0;  // offset 0
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        char _unknown_16[4];
    };

    class ShaderTextureSamplerData {
    public:
        ShaderTextureSamplerData(unsigned int, Texture const*, int, SamplerState const*, bool);
        operator==(ShaderTextureSamplerData const&) const;

        // data members, from how the methods use this: 28 bytes
        Texture* field_0;      // offset 0
        SamplerState* field_8; // offset 8
        uint field_16;         // offset 16
        int field_20;          // offset 20
        bool field_24;         // offset 24
        char _unknown_25[3];
    };

    // 0x100be8b10, 16 bytes, inline, placed by class name
    // Shader::IsCreatedFromBinary() const
    bool Shader::IsCreatedFromBinary() {
        return field_72 == -1;
    }

    // 0x100be8c20, 16 bytes, inline, placed by class name
    // Shader::IsCreated() const
    bool Shader::IsCreated() {
        return field_72 != 0;
    }

} // namespace jag::render
