// libs/game/runetek5/scene/StaticPointLight.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class StaticPointLight {
    public:
        SetLevel(int);
        GetInfluenceRanges();
        GetInfluenceRanges() const;
        GetUseTerrainHeight() const;
        GetLightType() const;
        GetSourceMapSquareX() const;
        GetDynamicID() const;
        GetScriptId() const;
        GetLevel() const;
        float GetAttenuationFalloff() const;
        GetSourceMapSquareZ() const;
        GetPhase() const;
        GetPosition() const;
        byte GetLightLevelsBelow() const;
        void SetLightsLevelsAbove(bool);
        GetFlickerType() const;
        GetShadowsEnabled() const;
        void SetShadowsEnabled(bool);
        void SetAttenuation(float);
        void SetBacklightRatio(float);
        void SetPosition(math::Vector3T<float> const&);
        SetRGB(unsigned int);
        void SetFlickerType(constants::LightConstants::FlickerType);
        ~StaticPointLight();
        IsValid() const;
        void AddTerrainHeight(unsigned int);
        GetRadius() const;
        GetRGB() const;
        GetShadowStrength() const;
        float GetBacklightRatio() const;
        StaticPointLight();
        void AssignCalculatedParameters();
        StaticPointLight(StaticPointLight const*, math::Vector3T<float> const&, int);
        GetLightLevelsAbove() const;
        GetLightTypeToLoad() const;
        float GetIntensity() const;
        void Initialise(PacketT<Array<unsigned char, eastl::allocator>>&);
        void SetRadiusGrid(unsigned int, bool);
        void SetRadius(float, bool);
        bool AffectsLevel(int) const;
        ulong LoadLightType(ConfigProvider*);
        float CalculateIntensity(ConfigProvider*, unsigned int, bool);
        GetWorldAABB();
        void CalculatePositionJitter(ConfigProvider*, graphics::PointLightPositionJitterData&);
        bool operator==(StaticPointLight const&) const;
        void SetDynamicID(int);
        void SetUseTerrainHeight(bool);
        void SetIntensity(float);
        void SetShadowStrength(float);
        SetLightsLevelsBelow(bool);
        SetSourceMapSquare(int, int);
        static float /* 4 bytes */ m_positionJitterOverrideRadius;           // = 6.0f
        static /* 4 bytes */ m_positionJitterOverrideRadiusRandom;           // = 1
        static /* 4 bytes */ m_positionJitterOverrideIntensityStrength;      // = 1050253722
        static /* 4 bytes */ m_positionJitterOverrideMoveTimeMS;             // = 120
        static /* 4 bytes */ m_positionJitterOverrideMoveTimeOffsetRandomMS; // = 60
        static /* 4 bytes */ m_positionJitterOverrideMovePower;              // = 1058642330
        static /* 1 bytes */ m_forceShadowsOn;
        static /* 7 bytes */ m_positionJitterOverride;
        static Array<double, eastl::allocator> /* 24 bytes */ mPerlinNoise; // = Array<double,eastl::allocator>()

        // data members, from how the methods use this: 168 bytes
        uint field_0; // offset 0
        char _unknown_4[12];
        undefined4 field_16;      // offset 16
        undefined4 field_20;      // offset 20
        byte m_lightLevelsBelow;  // offset 24
        bool m_lightsLevelsAbove; // offset 25
        char _unknown_26[30];
        uint field_56;           // offset 56
        undefined4 field_60;     // offset 60
        undefined4 field_64;     // offset 64
        uint field_68;           // offset 68
        uint field_72;           // offset 72
        bool m_useTerrainHeight; // offset 76
        char _unknown_77[7];
        uint field_84;              // offset 84
        shared_ptr field_88;        // offset 88
        int field_104;              // offset 104
        int m_dynamicID;            // offset 108
        float m_intensity;          // offset 112
        float m_attenuationFalloff; // offset 116
        float m_backlightRatio;     // offset 120
        bool m_shadowsEnabled;      // offset 124
        char _unknown_125[3];
        float field_128;      // offset 128
        undefined4 field_132; // offset 132
        uint field_136;       // offset 136
        undefined4 field_140; // offset 140
        undefined4 field_144; // offset 144
        undefined1 m_valid;   // offset 148
        undefined1 field_149; // offset 149
        char _unknown_150[18];
    };

    class VisibleShadowCastingLightInfo {
    public:
        ~VisibleShadowCastingLightInfo();
        VisibleShadowCastingLightInfo(shared_ptr<LightSource> const&, unsigned long long);
        VisibleShadowCastingLightInfo(VisibleShadowCastingLightInfo&&);
        VisibleShadowCastingLightInfo(VisibleShadowCastingLightInfo const&);
        VisibleShadowCastingLightInfo* operator=(VisibleShadowCastingLightInfo&&);

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[16];
        ulonglong field_16; // offset 16
    };

    // 0x1001cd9f0, 16 bytes, inline, placed by class name and debug map
    // StaticPointLight::GetShadowsEnabled() const
    undefined1 StaticPointLight::GetShadowsEnabled() {
        return m_shadowsEnabled;
    }

    // 0x1001cdac0, 192 bytes, inline, placed by debug map only (low confidence)
    // LightShadowImportanceKeyGenerator::CalculateShadowCastingImportanceKey(ViewTransforms const&, math::Vector3T<float> const&, math::Sphere const&, float)
    ulong LightShadowImportanceKeyGenerator::CalculateShadowCastingImportanceKey(ViewTransforms* param_1,
                                                                                 Vector3T* param_2, Sphere* param_3,
                                                                                 float param_4) {
        uint uVar1;
        float fVar2;
        undefined8 local_68[2];
        undefined8 local_58[2];
        undefined8 local_48[2];
        undefined8 local_38[2];
        float local_24;

        local_38[0] = param_1->GetViewVector();
        local_48[0] = math::Vector3Normalize<float>((Vector3T*)local_38);
        fVar2 = (float)param_3->GetOutlineRadiusAdjustment();
        local_58[0] = math::operator*((Vector3T*)local_48, fVar2);
        local_68[0] = math::operator+(param_2, (Vector3T*)local_58);
        fVar2 = (float)local_68->Length();
        uVar1 = math::RoundFloatToInt(fVar2);
        local_24 = (float)~uVar1 * field_0;
        fVar2 = (float)param_3->GetOutlineRadiusAdjustment();
        return (long)(param_4 * field_8 + fVar2 * field_4 + local_24) & 4294967295;
    }

    // 0x1001cdbe0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // VisibleShadowCastingLightInfo::VisibleShadowCastingLightInfo(shared_ptr<LightSource> const&, unsigned long long): jumps straight to the base-object constructor

    // 0x1001cdd20, 16 bytes, inline, placed by class name and debug map
    // StaticPointLight::SetShadowsEnabled(bool)
    void StaticPointLight::SetShadowsEnabled(bool param_1) {
        m_shadowsEnabled = param_1;
    }

    // 0x1001cdd30, 16 bytes, inline, placed by class name and debug map
    // StaticPointLight::SetAttenuation(float)
    void StaticPointLight::SetAttenuation(float param_1) {
        m_attenuationFalloff = param_1;
    }

    // 0x1001cdd40, 16 bytes, inline, placed by class name and debug map
    // StaticPointLight::SetBacklightRatio(float)
    void StaticPointLight::SetBacklightRatio(float param_1) {
        m_backlightRatio = param_1;
    }

    // 0x1001cdd50, 32 bytes, inline, placed by class name and debug map
    // StaticPointLight::SetPosition(math::Vector3T<float> const&)
    void StaticPointLight::SetPosition(Vector3T* param_1) {
        field_149 = 1;
        (&field_4, param_1)->SetXYZ();
    }

    // 0x1001cdf70, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // StaticPointLight::SetRGB(unsigned int)
    /* PlayerGroupMember::SetStatus(PlayerGroupMemberStatus) */

    void PlayerGroupMember::SetStatus(uint param_2) {
        field_64 = param_2;
    }

    // 0x1001cdf80, 16 bytes, inline, placed by class name and debug map
    // StaticPointLight::SetFlickerType(constants::LightConstants::FlickerType)
    void StaticPointLight::SetFlickerType(uint param_2) {
        field_56 = param_2;
        AssignCalculatedParameters(this);
    }

    // 0x1001df2c0, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // VisibleShadowCastingLightInfo::VisibleShadowCastingLightInfo(shared_ptr<LightSource> const&, unsigned long long)
    void VisibleShadowCastingLightInfo::VisibleShadowCastingLightInfo(shared_ptr* param_1, ulonglong param_2) {
        new (this) weak_ptr<oldscape::dash3d::Decor>(param_1);
        field_16 = param_2;
    }

    // 0x1001eeda0, 16 bytes, complete-object destructor, inline, placed by class name
    // StaticPointLight::~StaticPointLight(): jumps straight to the base-object destructor

    // 0x1001eedb0, 48 bytes, base-object destructor, inline, placed by class name
    // StaticPointLight::~StaticPointLight()
    void StaticPointLight::~StaticPointLight() {
        field_88->~shared_ptr();
        (&field_32)->~Array();
    }

    // 0x1003de570, 112 bytes, inline, placed by class name
    // StaticPointLight::AddTerrainHeight(unsigned int)
    void StaticPointLight::AddTerrainHeight(uint param_1) {
        float* pfVar1;

        if (m_useTerrainHeight == false) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_useTerrainHeight",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "StaticPointLight.h",
                      93, (char*)0);
        }
        pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&field_4, 1);
        *pfVar1 = (float)param_1 + *pfVar1;
    }

    // 0x100429b10, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // StaticPointLight::GetRGB() const
    /* LightType::GetAmplitude() const */

    uint LightType::GetAmplitude() {
        return m_amplitude;
    }

    // 0x100429c00, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // StaticPointLight::GetShadowStrength() const
    /* graphics::Material::GetMaterialAnimationH() const */

    undefined4 graphics::Material::GetMaterialAnimationH() {
        return m_materialAnimationH;
    }

    // 0x100431b50, 16 bytes, inline, placed by class name
    // StaticPointLight::GetBacklightRatio() const
    float StaticPointLight::GetBacklightRatio() {
        return m_backlightRatio;
    }

    // 0x10043b770, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // StaticPointLight::GetLightLevelsAbove() const
    /* ui::ButtonElement::IsToggled() const */

    undefined1 ui::ButtonElement::IsToggled() {
        return m_toggled;
    }

    // 0x10043b780, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // StaticPointLight::GetLightTypeToLoad() const
    /* graphics::AnimationDescriptor::GetLoopLength() const */

    undefined4 graphics::AnimationDescriptor::GetLoopLength() {
        return m_loopLength;
    }

    // 0x10043b790, 16 bytes, inline, placed by class name
    // StaticPointLight::GetIntensity() const
    float StaticPointLight::GetIntensity() {
        return m_intensity;
    }

    // 0x1004981c0, 16 bytes, inline, placed by class name
    // StaticPointLight::SetDynamicID(int)
    void StaticPointLight::SetDynamicID(int param_1) {
        m_dynamicID = param_1;
    }

    // 0x100498720, 16 bytes, inline, placed by class name
    // StaticPointLight::SetUseTerrainHeight(bool)
    void StaticPointLight::SetUseTerrainHeight(bool param_1) {
        m_useTerrainHeight = param_1;
    }

    // 0x100498730, 16 bytes, inline, placed by class name
    // StaticPointLight::SetIntensity(float)
    void StaticPointLight::SetIntensity(float param_1) {
        m_intensity = param_1;
    }

    // 0x100498740, 80 bytes, inline, placed by class name
    // StaticPointLight::SetShadowStrength(float)
    void StaticPointLight::SetShadowStrength(float param_1) {
        float* pfVar1;
        float local_1c;
        float local_18;
        float local_14;

        local_18 = 0.0;
        local_14 = 1.0;
        local_1c = param_1;
        pfVar1 = std::clamp<float>(&local_1c, &local_18, &local_14);
        field_128 = *pfVar1;
    }

    // 0x100498790, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // StaticPointLight::SetLightsLevelsBelow(bool)
    /* DebugOverlay::SetShow(bool) */

    void DebugOverlay::SetShow(bool param_1) {
        m_show = param_1;
    }

    // 0x1004987a0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // StaticPointLight::SetSourceMapSquare(int, int)
    /* ui::SwipeState::SetStartPosition(int, int) */

    void ui::SwipeState::SetStartPosition(int param_1, int param_2) {
        m_startPosition = param_1;
        field_20 = param_2;
    }

} // namespace jag::game

namespace jag::math {
    // 0x1001cdd70, 512 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float> operator*<float>(Vector3T<float> const&, Matrix44T<float> const&)
    /* Vector3T<float> TEMPNAMEPLACEHOLDERVALUE(Vector3T<float> const&,
   Matrix44T<float> const&) */

    undefined8 operator*(Vector3T* param_1, Matrix44T* param_2) {
        float* pfVar1;
        long lVar2;
        undefined8 uVar3;
        ColourHSL local_38;
        float local_28;
        float local_24;
        float local_20;
        float local_1c;

        local_24 = *(float*)param_1;
        pfVar1 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_2, 0);
        local_24 = local_24 * *pfVar1;
        local_1c = *(float*)(param_1 + 4);
        pfVar1 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_2, 1);
        local_1c = local_1c * *pfVar1 + local_24;
        local_24 = *(float*)(param_1 + 8);
        pfVar1 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_2, 2);
        local_24 = local_24 * *pfVar1 + local_1c;
        pfVar1 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_2, 3);
        local_24 = local_24 + *pfVar1;
        local_1c = *(float*)param_1;
        lVar2 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_2, 0);
        local_1c = local_1c * *(float*)(lVar2 + 4);
        local_20 = *(float*)(param_1 + 4);
        lVar2 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_2, 1);
        local_20 = local_20 * *(float*)(lVar2 + 4) + local_1c;
        local_1c = *(float*)(param_1 + 8);
        lVar2 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_2, 2);
        local_1c = local_1c * *(float*)(lVar2 + 4) + local_20;
        lVar2 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_2, 3);
        local_1c = local_1c + *(float*)(lVar2 + 4);
        local_20 = *(float*)param_1;
        lVar2 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_2, 0);
        local_20 = local_20 * *(float*)(lVar2 + 8);
        local_28 = *(float*)(param_1 + 4);
        lVar2 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_2, 1);
        local_28 = local_28 * *(float*)(lVar2 + 8) + local_20;
        local_20 = *(float*)(param_1 + 8);
        lVar2 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_2, 2);
        local_20 = local_20 * *(float*)(lVar2 + 8) + local_28;
        lVar2 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_2, 3);
        new (&local_38) ColourHSL(local_24, local_1c, local_20 + *(float*)(lVar2 + 8));
        uVar3._0_4_ = local_38.field_0;
        uVar3._4_4_ = local_38.field_4;
        return uVar3;
    }

} // namespace jag::math
