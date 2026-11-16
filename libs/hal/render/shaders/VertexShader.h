// libs/hal/render/shaders/VertexShader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class DeviceCallbacks {
    public:
        DeviceCallbacks();
        ~DeviceCallbacks();

        // data members, from how the methods use this: 64 bytes
        char _unknown_0[64];
    };

    class VertexShader {
    public:
        // virtual methods in vtable order
        virtual ~VertexShader();
        virtual GetShaderType() const;
        VertexShader();
        void CreateFromSourceString(char const*, unsigned char);
        void PrepareForReuse(char const*, unsigned char);
        CreateFromBinary(unsigned long);
        static /* 8 bytes */ SHADER_TYPE_NAME; // = "VertexShader"
        static /* 8 bytes */ m_count;

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

    class VertexShaderSourceStream {
    public:
        // virtual methods in vtable order
        virtual ~VertexShaderSourceStream();
        VertexShaderSourceStream(ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision,
                                 ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision,
                                 unsigned int);

        // data members, from how the methods use this: 136 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[8];
        undefined* field_16; // offset 16
        char _unknown_24[104];
        undefined* field_128; // offset 128
    };

    // 0x100bde830, 48 bytes, complete-object destructor, inline, placed by class header (inline)
    // VertexShaderSourceStream::~VertexShaderSourceStream()
    void VertexShaderSourceStream::~VertexShaderSourceStream() {
        ~ComputeShaderSourceStream();
        (&field_128)->~ios();
    }

    // 0x100bf65a0, 16 bytes, inline, placed by class name and debug map
    // VertexShader::GetShaderType() const
    undefined8 VertexShader::GetShaderType() {
        return 35633;
    }

    // 0x100bf66d0, 48 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ShaderSourceStream::~ShaderSourceStream()
    void ShaderSourceStream::~ShaderSourceStream() {
        ~ShaderSourceStream(this);
        (&field_128)->~ios();
    }

    // 0x100bf6700, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // ShaderSourceStream::~ShaderSourceStream()
    void ShaderSourceStream::~ShaderSourceStream() {
        ~ShaderSourceStream(this);
        operator_delete(this);
    }

    // 0x100bf6800, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MemoryProfileInfo<CpuMemoryProfile>::MemoryProfileInfo()
    /* MemoryProfileInfo<GpuMemoryProfile>::MemoryProfileInfo() */

    void MemoryProfileInfo<GpuMemoryProfile>::MemoryProfileInfo() {
        *(undefined8*)this = 0;
        *(undefined4*)(this + 8) = 1;
        this[12] = (MemoryProfileInfo<GpuMemoryProfile>)0;
    }

    // 0x100bf6880, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DeviceCallbacks::DeviceCallbacks(): jumps straight to the base-object constructor

    // 0x100bf6890, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DeviceCallbacks::DeviceCallbacks()
    void DeviceCallbacks::DeviceCallbacks() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL hash_set");
        new (this) eastl::hash_set<RenderDeviceCallback*, eastl::hash<RenderDeviceCallback*>,
                                   eastl::equal_to<RenderDeviceCallback*>, eastl::allocator, false>(local_20);
        new (&field_56) eastl::vector<RenderDeviceCallback*, eastl::allocator>();
    }

    // 0x100bf69e0, 160 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // VertexElementDesc::VertexElementDesc(unsigned int, char const*, ShaderInputFormat, bool, VertexUsage, unsigned int)
    void VertexElementDesc::VertexElementDesc(uint param_1, char* param_2, uint param_4, byte param_5, uint param_6,
                                              uint param_7) {
        uint* puVar1;
        uint uVar2;
        undefined1 local_30[16];

        field_0 = param_1;
        field_8 = param_2;
        field_16 = param_4;
        field_20 = param_5;
        field_24 = param_6;
        field_28 = param_7;
        puVar1 = &field_32;
        field_32 = 0;
        hash_combine_32(puVar1, param_1);
        new (local_30) HashedString32(field_8);
        uVar2 = local_30->GetPos();
        hash_combine_32(puVar1, uVar2);
        hash_combine_32(puVar1, field_16);
        hash_combine_32(puVar1, (uint)field_20);
        hash_combine_32(puVar1, field_24);
        hash_combine_32(puVar1, field_28);
    }

    // 0x100c03650, 32 bytes, inline, placed by class name
    // VertexShader::CreateFromSourceString(char const*, unsigned char)
    void VertexShader::CreateFromSourceString(char* param_1, uchar param_2) {
        CreateFromSourceString(SHADER_TYPE_NAME, param_1, param_2);
    }

    // 0x100c036d0, 32 bytes, inline, placed by class name
    // VertexShader::PrepareForReuse(char const*, unsigned char)
    void VertexShader::PrepareForReuse(char* param_1, uchar param_2) {
        PrepareForReuse(SHADER_TYPE_NAME, param_1, param_2);
    }

    // 0x100c05910, 32 bytes, inline, placed by class name
    // VertexShader::CreateFromBinary(unsigned long)
    undefined1 VertexShader::CreateFromBinary(ulong param_1) {
        CreateFromBinary(SHADER_TYPE_NAME, param_1);
        return 1;
    }

} // namespace jag::render
