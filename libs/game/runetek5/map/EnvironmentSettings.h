// libs/game/runetek5/map/EnvironmentSettings.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class EnvColourGradingSettings {
    public:
        GetColourRemapIDs() const;
        GetColourRemapWeightings() const;
        EnvColourGradingSettings(EnvColourGradingSettings const&);
        ~EnvColourGradingSettings();
        void SetDefaults();
        void Set(PacketT<Array<unsigned char, eastl::allocator>>&);
        void ApplyOverride(EnvironmentOverride const&);
        bool operator==(EnvColourGradingSettings const&) const;
        ulong hash() const;
        EnvColourGradingSettings();

        // data members, from how the methods use this: 72 bytes
        float field_0; // offset 0
        char _unknown_4[4];
        undefined1 field_8; // offset 8
        char _unknown_9[55];
        undefined1 m_colourRemapWeightings; // offset 64
        char _unknown_65[7];
    };

    class EnvFogSettings {
    public:
        uint GetFogDepth() const;
        float GetFogMaxDistance() const;
        float GetFogConstantAngleFalloff() const;
        uint GetFogRGBA() const;
        float GetFogDepthAngleFalloff() const;
        GetFogAngleOffset() const;
        void SetDefaults();
        void Set(PacketT<Array<unsigned char, eastl::allocator>>&);
        void ApplyOverride(EnvironmentOverride const&);
        operator==(EnvFogSettings const&) const;
        ulong hash() const;
        EnvFogSettings();

        // data members, from how the methods use this: 32 bytes
        bool field_0; // offset 0
        char _unknown_1[3];
        uint m_fogRGBA;                  // offset 4
        uint m_fogDepth;                 // offset 8
        float m_fogMaxDistance;          // offset 12
        float m_fogConstantAngleFalloff; // offset 16
        float m_fogDepthAngleFalloff;    // offset 20
        float field_24;                  // offset 24
        char _unknown_28[4];
    };

    class EnvLightingSettings {
    public:
        float GetAmbientLight() const;
        float GetEnvMapIrradianceScale() const;
        uint GetSunRGBA() const;
        GetSunPosition() const;
        float GetContrast() const;
        float GetSunlightShadowStrength() const;
        float GetSpecularHorzOcclusionScale() const;
        void SetDefaults();
        void Set(PacketT<Array<unsigned char, eastl::allocator>>&);
        void ApplyOverride(EnvironmentOverride const&);
        operator==(EnvLightingSettings const&) const;
        ulong hash() const;
        EnvLightingSettings();

        // data members, from how the methods use this: 44 bytes
        uint m_sunRGBA; // offset 0
        char _unknown_4[12];
        float m_ambientLight;               // offset 16
        float m_contrast;                   // offset 20
        float field_24;                     // offset 24
        float m_specularHorzOcclusionScale; // offset 28
        float m_envMapIrradianceScale;      // offset 32
        float m_sunlightShadowStrength;     // offset 36
        char _unknown_40[4];
    };

    class EnvScatteringSettings {
    public:
        GetSimpleScatteringParams() const;
        void SetDefaults();
        void Set(PacketT<Array<unsigned char, eastl::allocator>>&);
        void ApplyOverride(EnvironmentOverride const&);
        operator==(EnvScatteringSettings const&) const;
        ulong hash() const;
        EnvScatteringSettings();

        // data members, from how the methods use this: 72 bytes
        undefined4 field_0;  // offset 0
        undefined4 field_4;  // offset 4
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        char _unknown_16[12];
        undefined4 field_28; // offset 28
        char _unknown_32[12];
        undefined4 field_44; // offset 44
        char _unknown_48[16];
        bool field_64; // offset 64
        char _unknown_65[7];
    };

    class EnvToneMapSettings {
    public:
        GetToneMapParams() const;
        EnvironmentOverrideParam<bool> GetToneMappingEnabled() const;
        uint GetToneMapOperator() const;
        void SetDefaults();
        void Set(PacketT<Array<unsigned char, eastl::allocator>>&);
        void ApplyOverride(EnvironmentOverride const&);
        operator==(EnvToneMapSettings const&) const;
        ulong hash() const;
        EnvToneMapSettings();

        // data members, from how the methods use this: 208 bytes
        EnvironmentOverrideParam<bool> m_toneMappingEnabled; // offset 0
        char _unknown_1[3];
        uint m_toneMapOperator;    // offset 4
        PostProcessParams field_8; // offset 8
    };

    class EnvVolumetricSettings {
    public:
        GetParams() const;
        void SetDefaults();
        void Set(PacketT<Array<unsigned char, eastl::allocator>>&);
        void ApplyOverride(EnvironmentOverride const&);
        EnvVolumetricSettings();

        // data members, from how the methods use this: 56 bytes
        float field_0;       // offset 0
        float field_4;       // offset 4
        float field_8;       // offset 8
        float field_12;      // offset 12
        float field_16;      // offset 16
        float field_20;      // offset 20
        float field_24;      // offset 24
        undefined4 field_28; // offset 28
        char _unknown_32[24];
    };

    // 0x100454140, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // EnvSkySettings::EnvSkySettings(EnvSkySettings const&): jumps straight to the base-object constructor

    // 0x100454150, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // EnvColourGradingSettings::EnvColourGradingSettings(EnvColourGradingSettings const&): jumps straight to the base-object constructor

    // 0x100454160, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // EnvSkySettings::~EnvSkySettings(): jumps straight to the base-object destructor

    // 0x100455000, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // EnvColourGradingSettings::~EnvColourGradingSettings(): jumps straight to the base-object destructor

    // 0x100455010, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // EnvColourGradingSettings::~EnvColourGradingSettings()
    void EnvColourGradingSettings::~EnvColourGradingSettings() {
        (&m_colourRemapWeightings)->~fixed_vector();
        (&field_8)->~fixed_vector();
    }

    // 0x100455270, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // EnvSkySettings::EnvSkySettings(EnvSkySettings const&)
    void EnvSkySettings::EnvSkySettings(EnvSkySettings* param_1) {
        m_skyBoxID = param_1->m_skyBoxID;
        new (&field_8, (shared_ptr*)&param_1->field_8) shared_ptr<oldscape::dash3d::Decor>();
        new (field_24, (BuildRequest*)param_1->field_24) BuildRequest<graphics::Model, BuildModelMain>();
    }

    // 0x100455320, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // EnvColourGradingSettings::EnvColourGradingSettings(EnvColourGradingSettings const&)
    void EnvColourGradingSettings::EnvColourGradingSettings(EnvColourGradingSettings* param_1) {
        field_0 = param_1->field_0;
        new (&field_8, (fixed_vector*)&param_1->field_8) eastl::fixed_vector<int, 3ul, true, eastl::allocator>();
        new (&m_colourRemapWeightings, (fixed_vector*)&param_1->m_colourRemapWeightings)
            eastl::fixed_vector<float, 3ul, true, eastl::allocator>();
    }

    // 0x1004558a0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // EnvSkySettings::~EnvSkySettings()
    void EnvSkySettings::~EnvSkySettings() {
        field_24->~ActiveComponent();
        (&field_8)->~shared_ptr();
    }

    // 0x10048fc90, 16 bytes, inline, placed by class header (inline)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // EnvLightingSettings::GetContrast() const
    /* EnvFogSettings::GetFogDepthAngleFalloff() const */

    float EnvFogSettings::GetFogDepthAngleFalloff() {
        return m_fogDepthAngleFalloff;
    }

    // 0x10048fca0, 16 bytes, inline, placed by class header (inline)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // EnvLightingSettings::GetSunlightShadowStrength() const
    /* graphics::ScaleManager::GetGameScale() */

    float graphics::ScaleManager::GetGameScale() {
        return m_gameScale;
    }

    // 0x10048fce0, 16 bytes, inline, placed by class header (inline)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // EnvLightingSettings::GetSpecularHorzOcclusionScale() const
    /* OpenGLView::GetMainRenderTargetScaleFactor() const */

    float OpenGLView::GetMainRenderTargetScaleFactor() {
        return m_mainRenderTargetScaleFactor;
    }

    // 0x1004af650, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // EnvLightingSettings::EnvLightingSettings(): jumps straight to the base-object constructor

    // 0x1004af660, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // EnvFogSettings::EnvFogSettings(): jumps straight to the base-object constructor

    // 0x1004af670, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // EnvScatteringSettings::EnvScatteringSettings(): jumps straight to the base-object constructor

    // 0x1004af680, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // EnvVolumetricSettings::EnvVolumetricSettings(): jumps straight to the base-object constructor

    // 0x1004af690, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // EnvToneMapSettings::EnvToneMapSettings(): jumps straight to the base-object constructor

    // 0x1004af6d0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // EnvColourGradingSettings::EnvColourGradingSettings(): jumps straight to the base-object constructor

    // 0x1004b0700, 48 bytes, base-object constructor, inline, placed by class header (inline)
    // EnvLightingSettings::EnvLightingSettings()
    void EnvLightingSettings::EnvLightingSettings() {
        new (&field_4) math::Vector3T<int>();
        SetDefaults(this);
    }

    // 0x1004b0730, 16 bytes, base-object constructor, inline, placed by class header (inline)
    // EnvFogSettings::EnvFogSettings()
    void EnvFogSettings::EnvFogSettings() {
        SetDefaults(this);
    }

    // 0x1004b0740, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // EnvScatteringSettings::EnvScatteringSettings()
    void EnvScatteringSettings::EnvScatteringSettings() {
        new (this) graphics::SimpleScatteringParams();
        SetDefaults(this);
    }

    // 0x1004b0760, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // EnvVolumetricSettings::EnvVolumetricSettings()
    void EnvVolumetricSettings::EnvVolumetricSettings() {
        new (this) graphics::VolumetricScatteringParams();
        SetDefaults(this);
    }

    // 0x1004b0780, 48 bytes, base-object constructor, inline, placed by class header (inline)
    // EnvToneMapSettings::EnvToneMapSettings()
    void EnvToneMapSettings::EnvToneMapSettings() {
        new (field_8) postprocess::PostProcessParams();
        SetDefaults(this);
    }

    // 0x1004b0810, 112 bytes, base-object constructor, inline, placed by class header (inline)
    // EnvColourGradingSettings::EnvColourGradingSettings()
    void EnvColourGradingSettings::EnvColourGradingSettings() {
        eastl::fixed_vector<int, 3ul, true, eastl::allocator>::fixed_vector((ulong)&field_8);
        eastl::fixed_vector<float, 3ul, true, eastl::allocator>::fixed_vector((ulong)&m_colourRemapWeightings);
        SetDefaults(this);
    }

} // namespace jag::game

namespace jag {
    // 0x1004558d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::MapEnvironmentSettings>::ref_counter_shared(unsigned long, game::MapEnvironmentSettings*): jumps straight to the base-object constructor

    // 0x1004558e0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::MapEnvironmentSettings>::ref_counter_shared(unsigned long, game::MapEnvironmentSettings*)
    void ref_counter_shared<game::MapEnvironmentSettings>::ref_counter_shared(ulong param_1,
                                                                              MapEnvironmentSettings* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7368 + 16;
        *(ulong*)(this + 16) = param_1;
        *(MapEnvironmentSettings**)(this + 24) = param_2;
    }

    // 0x100455920, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::MapEnvironmentSettings>::DeleteData()
    void ref_counter_shared<game::MapEnvironmentSettings>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~MapEnvironmentSettings();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 672;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100455970, 32 bytes, inline, placed by debug map only (low confidence)
    // game::MapEnvironmentSettings* placement_new<game::MapEnvironmentSettings>(void*)
    MapEnvironmentSettings* placement_new<game::MapEnvironmentSettings>(void* param_1) {
        game::MapEnvironmentSettings::MapEnvironmentSettings(param_1);
        return param_1;
    }

} // namespace jag
