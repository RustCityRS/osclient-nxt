// libs/game/runetek5/map/MapEnvironmentSettings.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class EnvReflectionSettings {
    public:
        GetEnvironmentMaterialID() const;
        EnvReflectionSettings();
        void Set(PacketT<Array<unsigned char, eastl::allocator>>&);
        void SetDefaults();
        void ApplyOverride(EnvironmentOverride const&);
        operator==(EnvReflectionSettings const&) const;
        ulong hash() const;

        // data members, from how the methods use this: 12 bytes
        bool field_0; // offset 0
        char _unknown_1[3];
        int field_4; // offset 4
        char _unknown_8[4];
    };

    class MapEnvironmentSettings {
    public:
        GetLightingSettings() const;
        GetFogSettings();
        GetFogSettings() const;
        GetScatteringSettings() const;
        GetToneMapSettings() const;
        GetBloomSettings() const;
        GetColourGradingSettings() const;
        byte operator!=(MapEnvironmentSettings const&) const;
        GetReflectionSettings();
        GetSkySettings() const;
        MapEnvironmentSettings(MapEnvironmentSettings const&);
        ~MapEnvironmentSettings();
        GetLightProbeSettings();
        GetVolumetricSettings() const;
        MapEnvironmentSettings();
        void SetToDefaults();
        MapEnvironmentSettings(PacketT<Array<unsigned char, eastl::allocator>>&);
        void ApplyOverride(EnvironmentOverride const&);
        GetSkyBoxCubeMap(shared_ptr<render::TextureCube>&, graphics::RT7Core*, ConfigProvider*) const;
        GetSkyBoxModel(shared_ptr<graphics::Model>&, graphics::RT7Core*, ConfigProvider*, AssetBuilder&) const;
        GetEnvironmentCubeMap(shared_ptr<render::TextureCube>&, graphics::RT7Core*, int) const;
        operator==(MapEnvironmentSettings const&) const;
        ulong hash() const;

        // data members, from how the methods use this: 664 bytes
        uint field_0; // offset 0
        char _unknown_4[4];
        undefined8 field_8;  // offset 8
        float field_16;      // offset 16
        float field_20;      // offset 20
        float field_24;      // offset 24
        float field_28;      // offset 28
        float field_32;      // offset 32
        float field_36;      // offset 36
        undefined8 field_40; // offset 40
        char _unknown_48[4];
        undefined8 field_52; // offset 52
        undefined8 field_60; // offset 60
        char _unknown_68[12];
        undefined8 field_80;  // offset 80
        undefined8 field_88;  // offset 88
        undefined8 field_96;  // offset 96
        undefined8 field_104; // offset 104
        undefined8 field_112; // offset 112
        undefined8 field_120; // offset 120
        undefined8 field_128; // offset 128
        undefined8 field_136; // offset 136
        undefined8 field_144; // offset 144
        undefined8 field_152; // offset 152
        undefined8 field_160; // offset 160
        undefined8 field_168; // offset 168
        undefined8 field_176; // offset 176
        undefined8 field_184; // offset 184
        undefined8 field_192; // offset 192
        undefined8 field_200; // offset 200
        undefined8 field_208; // offset 208
        undefined8 field_216; // offset 216
        undefined8 field_224; // offset 224
        undefined8 field_232; // offset 232
        undefined1 field_240; // offset 240
        char _unknown_241[207];
        undefined8 field_448; // offset 448
        undefined4 field_456; // offset 456
        char _unknown_460[4];
        EnvSkySettings field_464; // offset 464
        char _unknown_512[8];
        undefined8 m_reflectionSettings; // offset 520
        char _unknown_528[120];
        undefined8 field_648; // offset 648
        undefined8 field_656; // offset 656
    };

    // 0x100441660, 16 bytes, inline, placed by class name and debug map
    // MapEnvironmentSettings::operator!=(MapEnvironmentSettings const&) const
    /* MapEnvironmentSettings::TEMPNAMEPLACEHOLDERVALUE(MapEnvironmentSettings
   const&) const */

    byte MapEnvironmentSettings::operator!=(MapEnvironmentSettings* param_1) {
        return operator==(this, param_1) ^ 1;
    }

    // 0x100441a20, 16 bytes, inline, placed by class name
    // MapEnvironmentSettings::GetReflectionSettings()
    undefined8* MapEnvironmentSettings::GetReflectionSettings() {
        return &m_reflectionSettings;
    }

    // 0x100441a50, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MapEnvironmentSettings::GetSkySettings() const
    /* ui::PagedLayer::GetDynamicChildren() */

    undefined1* ui::PagedLayer::GetDynamicChildren() {
        return &field_464;
    }

    // 0x100453f70, 16 bytes, complete-object constructor, inline, placed by class name
    // MapEnvironmentSettings::MapEnvironmentSettings(MapEnvironmentSettings const&): jumps straight to the base-object constructor

    // 0x100453f80, 352 bytes, base-object constructor, inline, placed by class name
    // MapEnvironmentSettings::MapEnvironmentSettings(MapEnvironmentSettings const&)
    void MapEnvironmentSettings::MapEnvironmentSettings(MapEnvironmentSettings* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        uint uVar11;
        undefined4 uVar12;

        new (this) MakeSharedPool<MapEnvironmentSettings, 48>();
        fVar8 = param_1->field_36;
        field_32 = param_1->field_32;
        field_36 = fVar8;
        uVar11 = param_1->field_0;
        uVar12 = *(undefined4*)&param_1->field_4;
        uVar1 = param_1->field_8;
        fVar8 = param_1->field_20;
        fVar9 = param_1->field_24;
        fVar10 = param_1->field_28;
        field_16 = param_1->field_16;
        field_20 = fVar8;
        field_24 = fVar9;
        field_28 = fVar10;
        field_0 = uVar11;
        *(undefined4*)&field_4 = uVar12;
        field_8 = uVar1;
        uVar1 = param_1->field_40;
        uVar2 = *(undefined8*)&param_1->field_48;
        uVar3 = param_1->field_60;
        field_52 = param_1->field_52;
        field_60 = uVar3;
        field_40 = uVar1;
        *(undefined8*)&field_48 = uVar2;
        uVar1 = param_1->field_88;
        uVar2 = param_1->field_96;
        uVar3 = param_1->field_104;
        uVar4 = param_1->field_112;
        uVar5 = param_1->field_120;
        uVar6 = param_1->field_128;
        uVar7 = param_1->field_136;
        field_80 = param_1->field_80;
        field_88 = uVar1;
        field_96 = uVar2;
        field_104 = uVar3;
        field_112 = uVar4;
        field_120 = uVar5;
        field_128 = uVar6;
        field_136 = uVar7;
        uVar1 = param_1->field_152;
        field_144 = param_1->field_144;
        field_152 = uVar1;
        uVar1 = param_1->field_160;
        uVar2 = param_1->field_168;
        uVar3 = param_1->field_176;
        uVar4 = param_1->field_184;
        uVar5 = param_1->field_192;
        uVar6 = param_1->field_200;
        uVar7 = param_1->field_216;
        field_208 = param_1->field_208;
        field_216 = uVar7;
        field_192 = uVar5;
        field_200 = uVar6;
        field_176 = uVar3;
        field_184 = uVar4;
        field_160 = uVar1;
        field_168 = uVar2;
        uVar1 = param_1->field_232;
        field_224 = param_1->field_224;
        field_232 = uVar1;
        _memcpy(&field_240, &param_1->field_240, 208);
        field_448 = param_1->field_448;
        field_456 = param_1->field_456;
        new (field_464, (EnvSkySettings*)param_1->field_464) EnvSkySettings();
        m_reflectionSettings = param_1->m_reflectionSettings;
        new (&field_528, (EnvColourGradingSettings*)&param_1->field_528) EnvColourGradingSettings();
        uVar1 = param_1->field_656;
        field_648 = param_1->field_648;
        field_656 = uVar1;
    }

    // 0x100454fc0, 16 bytes, complete-object destructor, inline, placed by class name
    // MapEnvironmentSettings::~MapEnvironmentSettings(): jumps straight to the base-object destructor

    // 0x100454fd0, 48 bytes, base-object destructor, inline, placed by class name
    // MapEnvironmentSettings::~MapEnvironmentSettings()
    void MapEnvironmentSettings::~MapEnvironmentSettings() {
        (&field_528)->~EnvColourGradingSettings();
        field_464->~EnvSkySettings();
    }

    // 0x1004797d0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MapEnvironmentSettings::GetLightProbeSettings()
    /* graphics::SceneViewData::GetStippleFarClipParams() const */

    float* graphics::SceneViewData::GetStippleFarClipParams() {
        return &m_stippleFarClipParams;
    }

    // 0x1004900d0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MapEnvironmentSettings::GetVolumetricSettings() const
    /* graphics::ParticleEmitter::GetParticles() const */

    undefined1* graphics::ParticleEmitter::GetParticles() {
        return &field_160;
    }

    // 0x1004af6c0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // EnvReflectionSettings::EnvReflectionSettings(): jumps straight to the base-object constructor

    // 0x1004af8f0, 48 bytes, inline, placed by class header (inline)
    // EnvReflectionSettings::Set(PacketT<Array<unsigned char, eastl::allocator> >&)
    void EnvReflectionSettings::Set(PacketT* param_1) {
        char cVar1;
        short sVar2;

        sVar2 = param_1->g2s();
        field_4 = (int)sVar2;
        cVar1 = param_1->g1();
        field_0 = cVar1 == '\x01';
    }

    // 0x1004af930, 16 bytes, inline, placed by class header (inline)
    // EnvReflectionSettings::SetDefaults()
    void EnvReflectionSettings::SetDefaults() {
        field_0 = false;
        field_4 = -1;
    }

    // 0x1004afa50, 48 bytes, inline, placed by class header (inline)
    // EnvReflectionSettings::ApplyOverride(EnvironmentOverride const&)
    void EnvReflectionSettings::ApplyOverride(EnvironmentOverride* param_1) {
        long lVar1;

        lVar1 = param_1->GetGLVertexBuffers();
        EnvironmentOverrideParam<unsigned int>::ApplyTo<postprocess::ToneMapOperator>(
            (EnvironmentOverrideParam<unsigned int>*)(lVar1 + 4), (ToneMapOperator*)&field_4);
    }

    // 0x1004aff60, 32 bytes, inline, placed by class header (inline)
    // EnvReflectionSettings::operator==(EnvReflectionSettings const&) const
    /* EnvReflectionSettings::TEMPNAMEPLACEHOLDERVALUE(EnvReflectionSettings
   const&) const */

    undefined4 EnvReflectionSettings::operator==(EnvReflectionSettings* param_1) {
        if (field_0 == param_1->field_0) {
            return CONCAT31((int3)((uint)field_4 >> 8), field_4 == param_1->field_4);
        }
        return 0;
    }

    // 0x1004b00a0, 80 bytes, inline, placed by class header (inline)
    // EnvReflectionSettings::hash() const
    ulong EnvReflectionSettings::hash() {
        ulong local_20;

        local_20 = 0;
        hash_combine<bool>(&local_20, &field_0);
        hash_combine<int>(&local_20, &field_4);
        return local_20;
    }

    // 0x1004b0800, 16 bytes, base-object constructor, inline, placed by class header (inline)
    // EnvReflectionSettings::EnvReflectionSettings()
    void EnvReflectionSettings::EnvReflectionSettings() {
        SetDefaults(this);
    }

} // namespace jag::game
