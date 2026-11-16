// libs/hal/render/buffers/ShaderConstBuffer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.render

namespace jag::render {
    class ShaderConstBuffer {
    public:
        IsRecyclable() const;
        ShaderConstBuffer(ShaderConstBuffer&&);
        ShaderConstBuffer();
        ~ShaderConstBuffer();
        Create(unsigned int, unsigned int, void const*);
        void Update(unsigned int, unsigned int, void const*, UpdateType);
        void Destroy();
        MapRead(LockType, unsigned int, unsigned int, unsigned int);
        MapWrite(LockType, unsigned int, unsigned int, unsigned int);
        void Unmap();
        ShaderConstBuffer* operator=(ShaderConstBuffer&&);
        static /* 8 bytes */ BUFFER_TYPE_NAME; // = "ShaderConstBuffer"

        // data members, from how the methods use this: 80 bytes
        uint field_0; // offset 0
        char _unknown_4[4];
        uint field_8; // offset 8
        char _unknown_12[4];
        long field_16;       // offset 16
        int field_24;        // offset 24
        uint field_28;       // offset 28
        int field_32;        // offset 32
        uint field_36;       // offset 36
        uint field_40;       // offset 40
        byte field_44;       // offset 44
        undefined3 field_45; // offset 45
        char _unknown_48[8];
        GPUMemoryTrackingEntry field_56; // offset 56
    };

    template <
        typename...> // 9 instantiations, e.g. <graphics::ClipPlaneShaderConsts>, <graphics::DirLightCsmManager::ShaderConsts>, <graphics::DirectionalLight::ShaderConsts>
    class TypedShaderConstBuffer {
    public:
        void Update(unsigned int, graphics::DirectionalLight::ShaderConsts const*);
        void Create(unsigned int, graphics::DirectionalLight::ShaderConsts const*);
        void Update(unsigned int, graphics::PointLightSMPassEffect::ShaderConsts const*);
        void Create(unsigned int, graphics::PointLightSMPassEffect::ShaderConsts const*);
        TypedShaderConstBuffer();
        ~TypedShaderConstBuffer();
        void Update(unsigned int, graphics::PointLightShadows::ShaderConsts const*);
        void Create(unsigned int, graphics::PointLightShadows::ShaderConsts const*);
        void Update(unsigned int, graphics::DirLightCsmManager::ShaderConsts const*);
        void Update(unsigned int, math::Matrix44T<float> const*);
        void Create(unsigned int, graphics::DirLightCsmManager::ShaderConsts const*);
        void Create(unsigned int, math::Matrix44T<float> const*);
        void Update(unsigned int, graphics::ClipPlaneShaderConsts const*);
        void Create(unsigned int, graphics::ClipPlaneShaderConsts const*);
        void Update(unsigned int, graphics::ViewTransformsEffect::ShaderConsts const*);
        void Create(unsigned int, graphics::ViewTransformsEffect::ShaderConsts const*);
        void Create(unsigned int, graphics::WaterNormalMapsShaderEffect::SamplingConsts const*);
        void Update(unsigned int, graphics::WaterNormalMapsShaderEffect::SamplingConsts const*);
        void Update(unsigned int, graphics::FogShaderConsts const*);
        void Create(unsigned int, graphics::FogShaderConsts const*);
    };

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    ShaderConstBuffer::IsRecyclable() const;

    // 0x1009179a0, 32 bytes, inline, placed by debug map only (low confidence)
    // TypedShaderConstBuffer<graphics::DirectionalLight::ShaderConsts>::Update(unsigned int, graphics::DirectionalLight::ShaderConsts const*)
    /* TypedShaderConstBuffer<graphics::ViewportLookupScale::Data>::Update(unsigned
   int, graphics::ViewportLookupScale::Data const*) */

    void TypedShaderConstBuffer<graphics::ViewportLookupScale::Data>::Update(uint param_1, Data* param_2) {
        Update(param_1, 48, param_2);
    }

    // 0x100917c60, 32 bytes, inline, placed by debug map only (low confidence)
    // TypedShaderConstBuffer<graphics::DirectionalLight::ShaderConsts>::Create(unsigned int, graphics::DirectionalLight::ShaderConsts const*)
    /* TypedShaderConstBuffer<graphics::ViewportLookupScale::Data>::Create(unsigned
   int, graphics::ViewportLookupScale::Data const*) */

    void TypedShaderConstBuffer<graphics::ViewportLookupScale::Data>::Create(uint param_1, Data* param_2) {
        Create(48, param_1, param_2);
    }

    // 0x100918960, 32 bytes, inline, placed by class header (inline)
    // TypedShaderConstBuffer<graphics::PointLightSMPassEffect::ShaderConsts>::Update(unsigned int, graphics::PointLightSMPassEffect::ShaderConsts const*)
    void TypedShaderConstBuffer<graphics::PointLightSMPassEffect::ShaderConsts>::Update(uint param_1,
                                                                                        ShaderConsts* param_2) {
        Update(param_1, 96, param_2);
    }

    // 0x100918be0, 32 bytes, inline, placed by class header (inline)
    // TypedShaderConstBuffer<graphics::PointLightSMPassEffect::ShaderConsts>::Create(unsigned int, graphics::PointLightSMPassEffect::ShaderConsts const*)
    void TypedShaderConstBuffer<graphics::PointLightSMPassEffect::ShaderConsts>::Create(uint param_1,
                                                                                        ShaderConsts* param_2) {
        Create(96, param_1, param_2);
    }

    // 0x100918d50, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // TypedShaderConstBuffer<graphics::PointLightShadows::ShaderConsts>::TypedShaderConstBuffer(): jumps straight to the base-object constructor

    // 0x100918d60, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // TypedShaderConstBuffer<graphics::PointLightShadows::ShaderConsts>::~TypedShaderConstBuffer(): jumps straight to the base-object destructor

    // 0x100918f40, 32 bytes, inline, placed by class header (inline)
    // TypedShaderConstBuffer<graphics::PointLightShadows::ShaderConsts>::Update(unsigned int, graphics::PointLightShadows::ShaderConsts const*)
    /* TypedShaderConstBuffer<graphics::WaterNormalMapsShaderEffect::TexCoordTransformConsts>::Update(unsigned
   int, graphics::WaterNormalMapsShaderEffect::TexCoordTransformConsts const*) */

    void render::TypedShaderConstBuffer<graphics::WaterNormalMapsShaderEffect::TexCoordTransformConsts>::Update(
        uint param_1, TexCoordTransformConsts* param_2) {
        Update(param_1, 576, param_2);
    }

    // 0x1009191a0, 32 bytes, inline, placed by class header (inline)
    // TypedShaderConstBuffer<graphics::PointLightShadows::ShaderConsts>::Create(unsigned int, graphics::PointLightShadows::ShaderConsts const*)
    /* TypedShaderConstBuffer<graphics::WaterNormalMapsShaderEffect::TexCoordTransformConsts>::Create(unsigned
   int, graphics::WaterNormalMapsShaderEffect::TexCoordTransformConsts const*) */

    void render::TypedShaderConstBuffer<graphics::WaterNormalMapsShaderEffect::TexCoordTransformConsts>::Create(
        uint param_1, TexCoordTransformConsts* param_2) {
        Create(576, param_1, param_2);
    }

    // 0x1009198c0, 32 bytes, inline, placed by class header (inline)
    // TypedShaderConstBuffer<graphics::DirLightCsmManager::ShaderConsts>::Update(unsigned int, graphics::DirLightCsmManager::ShaderConsts const*)
    void TypedShaderConstBuffer<graphics::DirLightCsmManager::ShaderConsts>::Update(uint param_1,
                                                                                    ShaderConsts* param_2) {
        Update(param_1, 656, param_2);
    }

    // 0x100919e70, 32 bytes, inline, placed by class header (inline)
    // TypedShaderConstBuffer<math::Matrix44T<float> >::Update(unsigned int, math::Matrix44T<float> const*)
    /* TypedShaderConstBuffer<graphics::SimpleScatteringParams>::Update(unsigned int,
   graphics::SimpleScatteringParams const*) */

    void TypedShaderConstBuffer<graphics::SimpleScatteringParams>::Update(uint param_1,
                                                                          SimpleScatteringParams* param_2) {
        Update(param_1, 64, param_2);
    }

    // 0x100919ee0, 32 bytes, inline, placed by class header (inline)
    // TypedShaderConstBuffer<graphics::DirLightCsmManager::ShaderConsts>::Create(unsigned int, graphics::DirLightCsmManager::ShaderConsts const*)
    void TypedShaderConstBuffer<graphics::DirLightCsmManager::ShaderConsts>::Create(uint param_1,
                                                                                    ShaderConsts* param_2) {
        Create(656, param_1, param_2);
    }

    // 0x100919f00, 32 bytes, inline, placed by class header (inline)
    // TypedShaderConstBuffer<math::Matrix44T<float> >::Create(unsigned int, math::Matrix44T<float> const*)
    /* TypedShaderConstBuffer<graphics::SimpleScatteringParams>::Create(unsigned int,
   graphics::SimpleScatteringParams const*) */

    void TypedShaderConstBuffer<graphics::SimpleScatteringParams>::Create(uint param_1,
                                                                          SimpleScatteringParams* param_2) {
        Create(64, param_1, param_2);
    }

    // 0x10091eda0, 32 bytes, inline, placed by class header (inline)
    // TypedShaderConstBuffer<graphics::ClipPlaneShaderConsts>::Update(unsigned int, graphics::ClipPlaneShaderConsts const*)
    void TypedShaderConstBuffer<graphics::ClipPlaneShaderConsts>::Update(uint param_1, ClipPlaneShaderConsts* param_2) {
        Update(param_1, 16, param_2);
    }

    // 0x10091ee90, 32 bytes, inline, placed by class header (inline)
    // TypedShaderConstBuffer<graphics::ClipPlaneShaderConsts>::Create(unsigned int, graphics::ClipPlaneShaderConsts const*)
    void TypedShaderConstBuffer<graphics::ClipPlaneShaderConsts>::Create(uint param_1, ClipPlaneShaderConsts* param_2) {
        Create(16, param_1, param_2);
    }

    // 0x10091f010, 32 bytes, inline, placed by class header (inline)
    // TypedShaderConstBuffer<graphics::ViewTransformsEffect::ShaderConsts>::Update(unsigned int, graphics::ViewTransformsEffect::ShaderConsts const*)
    void TypedShaderConstBuffer<graphics::ViewTransformsEffect::ShaderConsts>::Update(uint param_1,
                                                                                      ShaderConsts* param_2) {
        Update(param_1, 224, param_2);
    }

    // 0x10091f2f0, 32 bytes, inline, placed by class header (inline)
    // TypedShaderConstBuffer<graphics::ViewTransformsEffect::ShaderConsts>::Create(unsigned int, graphics::ViewTransformsEffect::ShaderConsts const*)
    void TypedShaderConstBuffer<graphics::ViewTransformsEffect::ShaderConsts>::Create(uint param_1,
                                                                                      ShaderConsts* param_2) {
        Create(224, param_1, param_2);
    }

    // 0x1009213f0, 32 bytes, inline, placed by class header (inline)
    // TypedShaderConstBuffer<graphics::WaterNormalMapsShaderEffect::SamplingConsts>::Create(unsigned int, graphics::WaterNormalMapsShaderEffect::SamplingConsts const*)
    void
    TypedShaderConstBuffer<graphics::WaterNormalMapsShaderEffect::SamplingConsts>::Create(uint param_1,
                                                                                          SamplingConsts* param_2) {
        Create(112, param_1, param_2);
    }

    // 0x100921870, 32 bytes, inline, placed by class header (inline)
    // TypedShaderConstBuffer<graphics::WaterNormalMapsShaderEffect::SamplingConsts>::Update(unsigned int, graphics::WaterNormalMapsShaderEffect::SamplingConsts const*)
    void
    TypedShaderConstBuffer<graphics::WaterNormalMapsShaderEffect::SamplingConsts>::Update(uint param_1,
                                                                                          SamplingConsts* param_2) {
        Update(param_1, 112, param_2);
    }

    // 0x100936530, 32 bytes, inline, placed by class header (inline)
    // TypedShaderConstBuffer<graphics::FogShaderConsts>::Update(unsigned int, graphics::FogShaderConsts const*)
    void TypedShaderConstBuffer<graphics::FogShaderConsts>::Update(uint param_1, FogShaderConsts* param_2) {
        Update(param_1, 32, param_2);
    }

    // 0x100936620, 32 bytes, inline, placed by class header (inline)
    // TypedShaderConstBuffer<graphics::FogShaderConsts>::Create(unsigned int, graphics::FogShaderConsts const*)
    void TypedShaderConstBuffer<graphics::FogShaderConsts>::Create(uint param_1, FogShaderConsts* param_2) {
        Create(32, param_1, param_2);
    }

    // 0x100bfc010: the linker folded this into ShaderStorageBuffer::ShaderStorageBuffer(ShaderStorageBuffer&&), which has identical code
    ShaderConstBuffer::ShaderConstBuffer(ShaderConstBuffer&&);

    // 0x100c15170, 16 bytes, complete-object constructor, placed by class name
    // ShaderConstBuffer::ShaderConstBuffer(): jumps straight to the base-object constructor

    // 0x100c15180, 16 bytes, complete-object destructor, placed by class name
    // ShaderConstBuffer::~ShaderConstBuffer(): jumps straight to the base-object destructor

    // 0x100c15190, 80 bytes, placed by class name
    // ShaderConstBuffer::MapRead(LockType, unsigned int, unsigned int, unsigned int)
    undefined8 ShaderConstBuffer::MapRead(undefined8 param_1, undefined8 param_2, undefined4 param_3,
                                          undefined4 param_4, undefined4 param_5, undefined4 param_6) {
        BufferInterface::MapReadBuffer(param_1, param_2, "ShaderConstBuffer", 35345, 35044, 35048, param_3, param_4,
                                       param_5, param_6);
        return param_1;
    }

    // 0x100c151e0, 80 bytes, placed by class name
    // ShaderConstBuffer::MapWrite(LockType, unsigned int, unsigned int, unsigned int)
    undefined8 ShaderConstBuffer::MapWrite(undefined8 param_1, undefined8 param_2, undefined4 param_3,
                                           undefined4 param_4, undefined4 param_5, undefined4 param_6) {
        BufferInterface::MapWriteBuffer(param_1, param_2, "ShaderConstBuffer", 35345, 35044, 35048, param_3, param_4,
                                        param_5, param_6);
        return param_1;
    }

    // 0x100c15230, 32 bytes, placed by class name
    // ShaderConstBuffer::Unmap()
    void ShaderConstBuffer::Unmap() {
        UnmapBuffer("ShaderConstBuffer", 35345);
    }

    // 0x100c3b2a0: the linker folded this into VertexBuffer::operator=(VertexBuffer&&), which has identical code
    ShaderConstBuffer::operator=(ShaderConstBuffer&&);

} // namespace jag::render
