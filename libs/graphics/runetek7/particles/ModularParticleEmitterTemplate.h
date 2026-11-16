// libs/graphics/runetek7/particles/ModularParticleEmitterTemplate.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class ModularParticleEmitterTemplate {
    public:
        Callstack GetRenderPassBits() const;
        bool IsContinuous() const;
        Callstack GetRenderMode() const;
        uint8_t* GetTransform() const;
        unsigned int GetMaterialID() const;
        uint8_t* GetModules() const;
        unsigned char GetNumTilesPerRow() const;
        float GetLifetime() const;
        void IsFlagSet(RenderFlag renderFlag) const;
        float GetWarmupTime() const;
        unsigned short GetMaxActiveParticlesEstimate() const;
        void RenderDebug(math::Matrix44T<float> matrix44, float arg2) const;
        unsigned char GetNumTiles() const;
        unsigned short GetMaxParticles() const;
        void ProcessTick(float arg1, const ParticleModuleUpdateParams& particleModuleUpdateParams,
                         ParticleModuleUpdateState& particleModuleUpdateState, ParticleData& particleData) const;
        ModularParticleEmitterTemplate();
        ModularParticleEmitterTemplate* operator=(ModularParticleEmitterTemplate&& modularParticleEmitterTemplate);
        ~ModularParticleEmitterTemplate();
        unsigned long LoadFromPacket(const ModularParticleSystemTemplate* modularParticleSystemTemplate,
                                     unsigned char arg2, PacketT<Array<unsigned char>>& arg3);
        ModularParticleEmitterTemplate(ModularParticleEmitterTemplate&& modularParticleEmitterTemplate);

    private:
        ModularParticleSystemTemplate* field_0;
        Callstack m_renderPassBits;
        uint8_t _unknown_24[32];
        unsigned int m_materialID;
        unsigned short m_maxParticles;
        unsigned short m_maxActiveParticlesEstimate;
        unsigned char m_numTiles;
        unsigned char m_numTilesPerRow;
        uint8_t _unknown_66[2];
        float m_warmupTime;
        float m_lifetime;
        bool m_continuous;
        uint8_t _unknown_77[3];
        uint64_t m_transform;
        uint64_t field_88;
        uint64_t field_96;
        uint64_t field_104;
        uint64_t field_112;
        uint64_t field_120;
        uint64_t field_128;
        uint64_t field_136;
        uint8_t m_modules[1];
        uint8_t _unknown_145[7];
    };

    // 0x1007e6fa0
    void ModularParticleEmitterTemplate::IsFlagSet(ModularParticleEmitterTemplate::RenderFlag renderFlag) const {
        ((m_renderPassBits + 8))->test((long)(int)renderFlag);
    }

    // 0x100828750
    float ModularParticleEmitterTemplate::GetWarmupTime() const {
        return m_emissiveScale;
    }

    // 0x1008287c0
    unsigned short ModularParticleEmitterTemplate::GetMaxActiveParticlesEstimate() const {
        return m_maxActiveParticlesEstimate;
    }

    // 0x100829250
    unsigned char ModularParticleEmitterTemplate::GetNumTiles() const {
        return m_numTiles;
    }

    // 0x100829260
    unsigned short ModularParticleEmitterTemplate::GetMaxParticles() const {
        return m_maxParticles;
    }

    // 0x1008501e0
    ModularParticleEmitterTemplate::ModularParticleEmitterTemplate(
        ModularParticleEmitterTemplate&& modularParticleEmitterTemplate)
        : field_0(nullptr) {
        new ((m_renderPassBits + 8)) eastl::bitset();
        new (&field_24) eastl::string();
        m_materialID = 3000;
        m_maxParticles = 1000;
        m_maxActiveParticlesEstimate = 0;
        m_numTiles = '\0';
        m_numTilesPerRow = '\0';
        m_warmupTime = 0.0;
        m_lifetime = 1.0;
        m_continuous = false;
        uint64_t uVar1 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 8);
        uint64_t uVar2 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 16);
        uint64_t uVar3 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 24);
        uint64_t uVar4 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 32);
        uint64_t uVar5 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 40);
        uint64_t uVar6 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 48);
        uint64_t uVar7 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 56);
        m_transform = *(uint64_t*)PTR_IDENTITY_100ee6730;
        field_88 = uVar1;
        field_96 = uVar2;
        field_104 = uVar3;
        field_112 = uVar4;
        field_120 = uVar5;
        field_128 = uVar6;
        field_136 = uVar7;
        new (m_modules) eastl::fixed_vector<particlemodules::Module*, 1ul>();
        operator=(this, modularParticleEmitterTemplate);
    }

} // namespace jag::graphics

namespace jag {
    // 0x1007e8640
    StipplePlaneClipParams::StipplePlaneClipParams() : field_0(4333543704410193920) {}

} // namespace jag

namespace jag::graphics::particlemodules {
    // 0x1007e8660
    Gravity::~Gravity() {
        field_96.~ModulePropertyCurve();
        field_8.~ModulePropertyCurve();
    }

} // namespace jag::graphics::particlemodules
