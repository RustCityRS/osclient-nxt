// libs/graphics/runetek7/particles/ModularParticleSystem.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class ModularParticleSystem {
    public:
        void GetTemplate() const;
        Option<float>* GetAABB() const;
        uint8_t* GetEmitters();
        long* GetDrawable();
        int GetParticleCount() const;
        ~ModularParticleSystem();
        auto GetAttachmentInfo() const;
        void SetEmitting(bool arg1);
        void SetLoopingAllowed(bool arg1);
        ModularParticleSystem(const shared_ptr<ModularParticleSystemTemplate>& modularParticleSystemTemplate,
                              const shared_ptr<VFXAttachmentInfo>& vfxAttachmentInfo);
        void Update(float arg1);
        uint64_t CalculateViewDistances(const math::Vector4T<float>& vector4);
        void SortParticles();
        unsigned long IsEmitting() const;
        unsigned long IsFinished() const;
        void TranslateParticles(const math::Vector3T<float>& vector3);
        uint32_t InitEmitters();

    private:
        uint8_t _unknown_0[8];
        long field_8;
        uint8_t _unknown_16[48];
        MSIType field_64;
        uint8_t _unknown_136[1336];
        uint16_t field_1472;
        bool m_loopingAllowed;
        uint8_t _unknown_1475[1];
        int m_particleCount;
        char field_1480;
        uint8_t _unknown_1481[3];
        uint64_t field_1484;
        uint8_t _unknown_1492[20];
    };

    class ModularParticleSystemTemplate {
    public:
        void GetName() const;
        uint8_t* GetEmitterTemplates() const;
        bool HasAlphaParticles() const;
        void HasDistortionParticles() const;
        void HasAlphaEarlyParticles() const;
        void HasAlphaLateParticles() const;
        ModularParticleSystemTemplate();
        ~ModularParticleSystemTemplate();
        unsigned long LoadFromPacket(PacketT<Array<unsigned char>>& arg1);
        uint8_t GetNumLoops() const;
        Callstack GetRenderPassBits() const;

    private:
        uint8_t _unknown_0[40];
        uint8_t m_numLoops;
        uint8_t _unknown_41[3];
        Callstack m_renderPassBits;
    };

    // 0x10042f4b0
    long* ModularParticleSystem::GetDrawable() {
        return (long*)&field_1504;
    }

    // 0x1007d0000
    int ModularParticleSystem::GetParticleCount() const {
        return m_particleCount;
    }

    // 0x1007f1970
    ModularParticleSystem::~ModularParticleSystem() {
        field_1504.~ModularParticleSystemDrawable();
        field_144.~fixed_vector();
        field_16.~shared_ptr();
    }

    // 0x10081ee90
    auto ModularParticleSystem::GetAttachmentInfo() const {
        return auto(&field_16);
    }

    // 0x10081ef70
    void ModularParticleSystem::SetLoopingAllowed(bool arg1) {
        m_loopingAllowed = arg1;
    }

    // 0x10082a210
    uint8_t ModularParticleSystemTemplate::GetNumLoops() const {
        return m_numLoops;
    }

} // namespace jag::graphics

namespace jag {
    // 0x10042fe70
    char const* ToText<64, true>(eastl::fixed_string<char, 64>& str, const math::Vector3T<float>& vector3) {
        char local_68[16];
        char local_58[16];
        char local_48[24];

        uint64_t uVar1 = ToText(local_48, 16, *(float*)vector3, 10);
        uint64_t uVar2 = ToText(local_58, 16, *(float*)(vector3 + 4), 10);
        uint64_t uVar3 = ToText(local_68, 16, *(float*)(vector3 + 8), 10);
        str.sprintf("{Vec3: %s, %s, %s}", uVar1, uVar2, uVar3);
        return (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

} // namespace jag
