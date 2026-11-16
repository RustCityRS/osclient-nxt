// libs/hal/render/shaders/VertexShader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class DeviceCallbacks {
    public:
        DeviceCallbacks();
        ~DeviceCallbacks();

        uint8_t _unknown_0[64];
    };

    class VertexShader {
    public:
        // virtual methods in vtable order
        virtual ~VertexShader();
        virtual uint64_t GetShaderType() const;
        VertexShader();
        void CreateFromSourceString(const char* str, unsigned char arg2);
        void PrepareForReuse(const char* str, unsigned char arg2);
        uint8_t CreateFromBinary(unsigned long arg1);
        static const char* SHADER_TYPE_NAME; // = "VertexShader"
        static int64_t m_count;

    private:
        uint8_t _unknown_8[33];
        unsigned char field_41;
        uint8_t _unknown_42[6];
        RadialHighlightState field_48;
        TextWrapMode field_72;
        uint8_t _unknown_76[12];
    };

    class VertexShaderSourceStream {
    public:
        // virtual methods in vtable order
        virtual ~VertexShaderSourceStream();
        VertexShaderSourceStream(ShaderVariablePrecision shaderVariablePrecision1,
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

    // 0x100bde830
    VertexShaderSourceStream::~VertexShaderSourceStream() {
        (&field_128)->~ios();
    }

    // 0x100bf65a0
    uint64_t VertexShader::GetShaderType() const {
        return 35633;
    }

    // 0x100bf66d0
    ShaderSourceStream::~ShaderSourceStream() {
        ~ShaderSourceStream(this, (void**)PTR_VTT_100ee6f88);
        (&field_128)->~ios();
    }

    // 0x100bf6800
    MemoryProfileInfo<CpuMemoryProfile>::MemoryProfileInfo() {
        *(uint64_t*)this = 0;
        *(uint32_t*)(this + 8) = 1;
        this[12] = (MemoryProfileInfo<GpuMemoryProfile>)0;
    }

    // 0x100bf6890
    DeviceCallbacks::DeviceCallbacks() {

        new (this) eastl::hash_set<RenderDeviceCallback*>(local_20);
        new (&field_56) eastl::vector<RenderDeviceCallback*>();
    }

    // 0x100bf69e0
    VertexElementDesc::VertexElementDesc(unsigned int arg1, const char* str, ShaderInputFormat shaderInputFormat,
                                         bool arg4, VertexUsage vertexUsage, unsigned int arg6)
        : field_0(arg1), field_8(str), field_16(shaderInputFormat), field_20(arg4), field_24(vertexUsage),
          field_28(arg6) {
        uint8_t local_30[16];

        unsigned int* arg1_00 = &field_32;
        field_32 = 0;
        hash_combine_32(arg1_00, arg1);
        new (local_30) HashedString32(field_8);
        unsigned int arg2 = local_30->GetPos();
        hash_combine_32(arg1_00, arg2);
        hash_combine_32(arg1_00, field_16);
        hash_combine_32(arg1_00, (unsigned int)field_20);
        hash_combine_32(arg1_00, field_24);
        hash_combine_32(arg1_00, field_28);
    }

    // 0x100c03650
    void VertexShader::CreateFromSourceString(const char* str, unsigned char arg2) {
        CreateFromSourceString(SHADER_TYPE_NAME, str, arg2);
    }

    // 0x100c036d0
    void VertexShader::PrepareForReuse(const char* str, unsigned char arg2) {
        PrepareForReuse(SHADER_TYPE_NAME, str, arg2);
    }

    // 0x100c05910
    uint8_t VertexShader::CreateFromBinary(unsigned long arg1) {
        CreateFromBinary(SHADER_TYPE_NAME, arg1);
        return 1;
    }

} // namespace jag::render
