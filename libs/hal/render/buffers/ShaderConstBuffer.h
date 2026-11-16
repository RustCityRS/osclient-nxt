// libs/hal/render/buffers/ShaderConstBuffer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.render

namespace jag::render {
    class ShaderConstBuffer {
    public:
        bool IsRecyclable() const;
        ShaderConstBuffer(ShaderConstBuffer&& shaderConstBuffer);
        ShaderConstBuffer();
        ~ShaderConstBuffer();
        uint64_t Create(unsigned int arg1, unsigned int arg2, const void* arg3);
        void Update(unsigned int arg1, unsigned int arg2, const void* arg3, UpdateType updateType);
        void Destroy();
        auto MapRead(LockType lockType, unsigned int arg2, unsigned int arg3, unsigned int arg4);
        auto MapWrite(LockType lockType, unsigned int arg2, unsigned int arg3, unsigned int arg4);
        void Unmap();
        ShaderConstBuffer* operator=(ShaderConstBuffer&& vertexBuffer);
        static const char* BUFFER_TYPE_NAME; // = "ShaderConstBuffer"

    private:
        unsigned int field_0;
        uint8_t _unknown_4[4];
        unsigned int field_8;
        uint8_t _unknown_12[4];
        long field_16;
        LockType field_24;
        unsigned int field_28;
        unsigned int field_32;
        unsigned int field_36;
        unsigned int field_40;
        uint8_t field_44;
        uint8_t field_45[3];
        uint8_t _unknown_48[8];
        GPUMemoryTrackingEntry field_56;
    };

    template <
        typename...> // 9 instantiations, e.g. <graphics::ClipPlaneShaderConsts>, <graphics::DirLightCsmManager::ShaderConsts>, <graphics::DirectionalLight::ShaderConsts>
    class TypedShaderConstBuffer {
    public:
        void Update(unsigned int arg1, const graphics::DirectionalLight::ShaderConsts* shaderConsts);
        void Create(unsigned int arg1, const graphics::DirectionalLight::ShaderConsts* shaderConsts);
        void Update(unsigned int arg1, const graphics::PointLightSMPassEffect::ShaderConsts* shaderConsts);
        void Create(unsigned int arg1, const graphics::PointLightSMPassEffect::ShaderConsts* shaderConsts);
        TypedShaderConstBuffer();
        ~TypedShaderConstBuffer();
        void Update(unsigned int arg1, const graphics::PointLightShadows::ShaderConsts* shaderConsts);
        void Create(unsigned int arg1, const graphics::PointLightShadows::ShaderConsts* shaderConsts);
        void Update(unsigned int arg1, const graphics::DirLightCsmManager::ShaderConsts* shaderConsts);
        void Update(unsigned int arg1, const math::Matrix44T<float>* matrix44);
        void Create(unsigned int arg1, const graphics::DirLightCsmManager::ShaderConsts* shaderConsts);
        void Create(unsigned int arg1, const math::Matrix44T<float>* matrix44);
        void Update(unsigned int arg1, const graphics::ClipPlaneShaderConsts* clipPlaneShaderConsts);
        void Create(unsigned int arg1, const graphics::ClipPlaneShaderConsts* clipPlaneShaderConsts);
        void Update(unsigned int arg1, const graphics::ViewTransformsEffect::ShaderConsts* shaderConsts);
        void Create(unsigned int arg1, const graphics::ViewTransformsEffect::ShaderConsts* shaderConsts);
        void Create(unsigned int arg1, const graphics::WaterNormalMapsShaderEffect::SamplingConsts* samplingConsts);
        void Update(unsigned int arg1, const graphics::WaterNormalMapsShaderEffect::SamplingConsts* samplingConsts);
        void Update(unsigned int arg1, const graphics::FogShaderConsts* fogShaderConsts);
        void Create(unsigned int arg1, const graphics::FogShaderConsts* fogShaderConsts);
    };

    // 0x10002d860: ShaderConstBuffer::IsRecyclable() const has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x1009179a0
    void TypedShaderConstBuffer<graphics::DirectionalLight::ShaderConsts>::Update(
        unsigned int arg1, const graphics::DirectionalLight::ShaderConsts* shaderConsts) {
        Update(arg1, 48, shaderConsts);
    }

    // 0x100917c60
    void TypedShaderConstBuffer<graphics::DirectionalLight::ShaderConsts>::Create(
        unsigned int arg1, const graphics::DirectionalLight::ShaderConsts* shaderConsts) {
        Create(48, arg1, shaderConsts);
    }

    // 0x100918960
    void TypedShaderConstBuffer<graphics::PointLightSMPassEffect::ShaderConsts>::Update(
        unsigned int arg1, const graphics::PointLightSMPassEffect::ShaderConsts* shaderConsts) {
        Update(arg1, 96, shaderConsts);
    }

    // 0x100918be0
    void TypedShaderConstBuffer<graphics::PointLightSMPassEffect::ShaderConsts>::Create(
        unsigned int arg1, const graphics::PointLightSMPassEffect::ShaderConsts* shaderConsts) {
        Create(96, arg1, shaderConsts);
    }

    // 0x100918f40
    void TypedShaderConstBuffer<graphics::PointLightShadows::ShaderConsts>::Update(
        unsigned int arg1, const graphics::PointLightShadows::ShaderConsts* shaderConsts) {
        Update(arg1, 576, shaderConsts);
    }

    // 0x1009191a0
    void TypedShaderConstBuffer<graphics::PointLightShadows::ShaderConsts>::Create(
        unsigned int arg1, const graphics::PointLightShadows::ShaderConsts* shaderConsts) {
        Create(576, arg1, shaderConsts);
    }

    // 0x1009198c0
    void TypedShaderConstBuffer<graphics::DirLightCsmManager::ShaderConsts>::Update(
        unsigned int arg1, const graphics::DirLightCsmManager::ShaderConsts* shaderConsts) {
        Update(arg1, 656, shaderConsts);
    }

    // 0x100919e70
    void TypedShaderConstBuffer<math::Matrix44T<float>>::Update(unsigned int arg1,
                                                                const math::Matrix44T<float>* matrix44) {
        Update(arg1, 64, matrix44);
    }

    // 0x100919ee0
    void TypedShaderConstBuffer<graphics::DirLightCsmManager::ShaderConsts>::Create(
        unsigned int arg1, const graphics::DirLightCsmManager::ShaderConsts* shaderConsts) {
        Create(656, arg1, shaderConsts);
    }

    // 0x100919f00
    void TypedShaderConstBuffer<math::Matrix44T<float>>::Create(unsigned int arg1,
                                                                const math::Matrix44T<float>* matrix44) {
        Create(64, arg1, matrix44);
    }

    // 0x10091eda0
    void TypedShaderConstBuffer<graphics::ClipPlaneShaderConsts>::Update(
        unsigned int arg1, const graphics::ClipPlaneShaderConsts* clipPlaneShaderConsts) {
        Update(arg1, 16, clipPlaneShaderConsts);
    }

    // 0x10091ee90
    void TypedShaderConstBuffer<graphics::ClipPlaneShaderConsts>::Create(
        unsigned int arg1, const graphics::ClipPlaneShaderConsts* clipPlaneShaderConsts) {
        Create(16, arg1, clipPlaneShaderConsts);
    }

    // 0x10091f010
    void TypedShaderConstBuffer<graphics::ViewTransformsEffect::ShaderConsts>::Update(
        unsigned int arg1, const graphics::ViewTransformsEffect::ShaderConsts* shaderConsts) {
        Update(arg1, 224, shaderConsts);
    }

    // 0x10091f2f0
    void TypedShaderConstBuffer<graphics::ViewTransformsEffect::ShaderConsts>::Create(
        unsigned int arg1, const graphics::ViewTransformsEffect::ShaderConsts* shaderConsts) {
        Create(224, arg1, shaderConsts);
    }

    // 0x1009213f0
    void TypedShaderConstBuffer<graphics::WaterNormalMapsShaderEffect::SamplingConsts>::Create(
        unsigned int arg1, const graphics::WaterNormalMapsShaderEffect::SamplingConsts* samplingConsts) {
        Create(112, arg1, samplingConsts);
    }

    // 0x100921870
    void TypedShaderConstBuffer<graphics::WaterNormalMapsShaderEffect::SamplingConsts>::Update(
        unsigned int arg1, const graphics::WaterNormalMapsShaderEffect::SamplingConsts* samplingConsts) {
        Update(arg1, 112, samplingConsts);
    }

    // 0x100936530
    void TypedShaderConstBuffer<graphics::FogShaderConsts>::Update(unsigned int arg1,
                                                                   const graphics::FogShaderConsts* fogShaderConsts) {
        Update(arg1, 32, fogShaderConsts);
    }

    // 0x100936620
    void TypedShaderConstBuffer<graphics::FogShaderConsts>::Create(unsigned int arg1,
                                                                   const graphics::FogShaderConsts* fogShaderConsts) {
        Create(32, arg1, fogShaderConsts);
    }

    // 0x100bfc010: ShaderConstBuffer::ShaderConstBuffer(ShaderConstBuffer&&) has the same machine code as ShaderStorageBuffer::ShaderStorageBuffer(ShaderStorageBuffer&&)

    // 0x100c15190
    auto ShaderConstBuffer::MapRead(LockType lockType, unsigned int arg2, unsigned int arg3, unsigned int arg4) {
        auto result;
        result.MapReadBuffer(this, 15049807, 35345, 35044, 35048, lockType, arg2, arg3);
        return result;
    }

    // 0x100c151e0
    auto ShaderConstBuffer::MapWrite(LockType lockType, unsigned int arg2, unsigned int arg3, unsigned int arg4) {
        auto result;
        result.MapWriteBuffer(this, 15049807, 35345, 35044, 35048, lockType, arg2, arg3);
        return result;
    }

    // 0x100c15230
    void ShaderConstBuffer::Unmap() {
        UnmapBuffer("ShaderConstBuffer", 35345);
    }

    // 0x100c3b2a0: ShaderConstBuffer::operator=(ShaderConstBuffer&&) has the same machine code as VertexBuffer::operator=(VertexBuffer&&)

} // namespace jag::render
