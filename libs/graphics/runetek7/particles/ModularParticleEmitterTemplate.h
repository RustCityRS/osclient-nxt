// libs/graphics/runetek7/particles/ModularParticleEmitterTemplate.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ModularParticleEmitterTemplate {
    public:
        Callstack GetRenderPassBits() const;
        bool IsContinuous() const;
        GetRenderMode() const;
        GetTransform() const;
        uint GetMaterialID() const;
        GetModules() const;
        uchar GetNumTilesPerRow() const;
        float GetLifetime() const;
        void IsFlagSet(RenderFlag) const;
        float GetWarmupTime() const;
        ushort GetMaxActiveParticlesEstimate() const;
        void RenderDebug(math::Matrix44T<float>, float) const;
        uchar GetNumTiles() const;
        ushort GetMaxParticles() const;
        void ProcessTick(float, ParticleModuleUpdateParams const&, ParticleModuleUpdateState&, ParticleData&) const;
        ModularParticleEmitterTemplate();
        ModularParticleEmitterTemplate* operator=(ModularParticleEmitterTemplate&&);
        ~ModularParticleEmitterTemplate();
        ulong LoadFromPacket(ModularParticleSystemTemplate const*, unsigned char,
                             PacketT<Array<unsigned char, eastl::allocator>>&);
        ModularParticleEmitterTemplate(ModularParticleEmitterTemplate&&);

        // data members, from how the methods use this: 152 bytes
        ModularParticleSystemTemplate* field_0; // offset 0
        Callstack m_renderPassBits;             // offset 8
        char _unknown_24[32];
        uint m_materialID;                   // offset 56
        ushort m_maxParticles;               // offset 60
        ushort m_maxActiveParticlesEstimate; // offset 62
        uchar m_numTiles;                    // offset 64
        uchar m_numTilesPerRow;              // offset 65
        char _unknown_66[2];
        float m_warmupTime; // offset 68
        float m_lifetime;   // offset 72
        bool m_continuous;  // offset 76
        char _unknown_77[3];
        undefined8 m_transform; // offset 80
        undefined8 field_88;    // offset 88
        undefined8 field_96;    // offset 96
        undefined8 field_104;   // offset 104
        undefined8 field_112;   // offset 112
        undefined8 field_120;   // offset 120
        undefined8 field_128;   // offset 128
        undefined8 field_136;   // offset 136
        undefined1 m_modules;   // offset 144
        char _unknown_145[7];
    };

    // 0x1007e6fa0, 32 bytes, inline, placed by class name and debug map
    // ModularParticleEmitterTemplate::IsFlagSet(ModularParticleEmitterTemplate::RenderFlag) const
    void ModularParticleEmitterTemplate::IsFlagSet(int param_2) {
        ((m_renderPassBits + 8), (long)param_2)->test();
    }

    // 0x100828750, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ModularParticleEmitterTemplate::GetWarmupTime() const
    /* Material::GetEmissiveScale() const */

    undefined4 Material::GetEmissiveScale() {
        return m_emissiveScale;
    }

    // 0x1008287c0, 16 bytes, inline, placed by class name
    // ModularParticleEmitterTemplate::GetMaxActiveParticlesEstimate() const
    ushort ModularParticleEmitterTemplate::GetMaxActiveParticlesEstimate() {
        return m_maxActiveParticlesEstimate;
    }

    // 0x100829250, 16 bytes, inline, placed by class name
    // ModularParticleEmitterTemplate::GetNumTiles() const
    uchar ModularParticleEmitterTemplate::GetNumTiles() {
        return m_numTiles;
    }

    // 0x100829260, 16 bytes, inline, placed by class name
    // ModularParticleEmitterTemplate::GetMaxParticles() const
    ushort ModularParticleEmitterTemplate::GetMaxParticles() {
        return m_maxParticles;
    }

    // 0x1008501d0, 16 bytes, complete-object constructor, inline, placed by class name
    // ModularParticleEmitterTemplate::ModularParticleEmitterTemplate(ModularParticleEmitterTemplate&&): jumps straight to the base-object constructor

    // 0x1008501e0, 192 bytes, base-object constructor, inline, placed by class name
    // ModularParticleEmitterTemplate::ModularParticleEmitterTemplate(ModularParticleEmitterTemplate&&)
    void ModularParticleEmitterTemplate::ModularParticleEmitterTemplate(ModularParticleEmitterTemplate* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        field_0 = (ModularParticleSystemTemplate*)0;
        new (m_renderPassBits) callstack::Callstack();
        new ((m_renderPassBits + 8)) eastl::bitset<4ul, unsigned char>();
        new (&field_24) eastl::string();
        m_materialID = 3000;
        m_maxParticles = 1000;
        m_maxActiveParticlesEstimate = 0;
        m_numTiles = '\0';
        m_numTilesPerRow = '\0';
        m_warmupTime = 0.0;
        m_lifetime = 1.0;
        m_continuous = false;
        uVar1 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 8);
        uVar2 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 16);
        uVar3 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 24);
        uVar4 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 32);
        uVar5 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 40);
        uVar6 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 48);
        uVar7 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 56);
        m_transform = *(undefined8*)PTR_IDENTITY_100ee6730;
        field_88 = uVar1;
        field_96 = uVar2;
        field_104 = uVar3;
        field_112 = uVar4;
        field_120 = uVar5;
        field_128 = uVar6;
        field_136 = uVar7;
        new (&m_modules) eastl::fixed_vector<particlemodules::Module*, 1ul, true, eastl::allocator>();
        operator=(this, param_1);
    }

} // namespace jag::graphics

namespace jag {
    // 0x1007e8640, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // StipplePlaneClipParams::StipplePlaneClipParams()
    void StipplePlaneClipParams::StipplePlaneClipParams() {
        field_0 = 4333543704410193920;
    }

} // namespace jag

namespace jag::graphics::particlemodules {
    // 0x1007e8660, 64 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // Gravity::~Gravity()
    void Gravity::~Gravity() {
        field_0 = &PTR__Gravity_100f14dc0;
        (&field_96)->~ModulePropertyCurve();
        (&field_8)->~ModulePropertyCurve();
        ~AutoSingleton();
    }

} // namespace jag::graphics::particlemodules
