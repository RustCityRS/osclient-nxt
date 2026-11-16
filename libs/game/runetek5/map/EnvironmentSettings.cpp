// libs/game/runetek5/map/EnvironmentSettings.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "EnvironmentSettings.h"

namespace jag::game {
    // 0x1004aac90
    void EnvLightingSettings::SetDefaults() {
        m_sunRGBA = 4294967295;
        field_4.Set(-50.0, 60.0, -60.0);
        m_ambientLight = 1.1523438f;
        m_contrast = 0.69921875f;
        field_24 = 1.2;
        m_sunlightShadowStrength = 1.0;
        m_specularHorzOcclusionScale = 1.1;
        m_envMapIrradianceScale = 2.75;
    }

    // 0x1004aad10
    void EnvLightingSettings::Set(PacketT<Array<unsigned char>>& arg1) {
        m_sunRGBA = arg1.g4() << 8 | 255;
        short sVar1 = arg1.g2s();
        uint8_t* this_00 = &field_4;
        auto pfVar4 = this_00->SSOBeginPtr();
        *pfVar4 = (float)(int)sVar1;
        sVar1 = arg1.g2s();
        pfVar4 = (float*)this_00->y();
        *pfVar4 = (float)-(int)sVar1;
        sVar1 = arg1.g2s();
        pfVar4 = (float*)this_00->second();
        *pfVar4 = (float)(int)sVar1;
        unsigned short uVar2 = arg1.g2();
        m_ambientLight = (float)uVar2 * 0.00390625f;
        uVar2 = arg1.g2();
        m_contrast = (float)uVar2 * 0.00390625f;
        uVar2 = arg1.g2();
        field_24 = (float)uVar2 * 0.00390625f;
        float fVar5 = (float)arg1.gFloat();
        m_specularHorzOcclusionScale = fVar5;
        fVar5 = (float)arg1.gFloat();
        m_envMapIrradianceScale = fVar5;
        fVar5 = (float)arg1.gFloat();
        m_sunlightShadowStrength = fVar5;
    }

    // 0x1004aae40
    void EnvLightingSettings::ApplyOverride(const EnvironmentOverride& environmentOverride) {
        auto pcVar1 = environmentOverride.SSOBeginPtr();
        if (*pcVar1 != '\0') {
            ((pcVar1 + 4))->ApplyTo<postprocess::ToneMapOperator>(m_sunRGBA);
            ((pcVar1 + 12))->ApplyTo<float>(m_ambientLight);
            ((pcVar1 + 20))->ApplyTo<float>(m_contrast);
            ((pcVar1 + 28))->ApplyTo<float>(field_24);
            ((pcVar1 + 36))->ApplyTo<math::Vector3T<float>>(field_4);
            ((pcVar1 + 52))->ApplyTo<float>(m_sunlightShadowStrength);
            ((pcVar1 + 60))->ApplyTo<float>(m_specularHorzOcclusionScale);
            ((pcVar1 + 68))->ApplyTo<float>(m_envMapIrradianceScale);
        }
    }

    // 0x1004aaf50
    uint64_t EnvLightingSettings::operator==(const EnvLightingSettings& envLightingSettings) const {
        bool bVar1;

        if ((((m_sunRGBA == envLightingSettings.m_sunRGBA) &&
              (bVar1 = field_4 == envLightingSettings.field_4, bVar1)) &&
             (m_ambientLight == envLightingSettings.m_ambientLight)) &&
            (((m_contrast == envLightingSettings.m_contrast && (field_24 == envLightingSettings.field_24)) &&
              ((m_sunlightShadowStrength == envLightingSettings.m_sunlightShadowStrength &&
                (m_specularHorzOcclusionScale == envLightingSettings.m_specularHorzOcclusionScale)))))) {
            return m_envMapIrradianceScale == envLightingSettings.m_envMapIrradianceScale;
        }
        return 0;
    }

    // 0x1004aafd0
    unsigned long EnvLightingSettings::hash() const {
        return local_20 = 0;
        hash_combine<unsigned int>(&local_20, &m_sunRGBA);
        unsigned long arg2 = field_4.hash();
        hash_combine(&local_20, arg2);
        hash_combine<float>(&local_20, &m_ambientLight);
        hash_combine<float>(&local_20, &m_contrast);
        hash_combine<float>(&local_20, &field_24);
        hash_combine<float>(&local_20, &m_sunlightShadowStrength);
        hash_combine<float>(&local_20, &m_specularHorzOcclusionScale);
        hash_combine<float>(&local_20, &m_envMapIrradianceScale);
        return local_20;
    }

    // 0x1004ab070
    void EnvFogSettings::SetDefaults() {
        field_0 = true;
        m_fogRGBA = 3368069375;
        m_fogDepth = 0;
        m_fogMaxDistance = 0.0;
        m_fogConstantAngleFalloff = 32.0;
        m_fogDepthAngleFalloff = 8.0;
        field_24 = 0.0;
    }

    // 0x1004ab0c0
    void EnvFogSettings::Set(PacketT<Array<unsigned char>>& arg1) {
        m_fogRGBA = arg1.g4() << 8 | 255;
        unsigned short uVar2 = arg1.g2();
        m_fogDepth = (unsigned int)uVar2;
        field_0 = arg1.g1() == '\x01';
        float fVar4 = (float)arg1.gFloat();
        m_fogMaxDistance = fVar4;
        fVar4 = (float)arg1.gFloat();
        m_fogConstantAngleFalloff = fVar4;
        fVar4 = (float)arg1.gFloat();
        m_fogDepthAngleFalloff = fVar4;
        fVar4 = (float)arg1.gFloat();
        field_24 = fVar4;
        if (field_0 == false) {
            m_fogDepth = 0;
            m_fogMaxDistance = 3.4028235e+38;
        }
    }

    // 0x1004ab150
    void EnvFogSettings::ApplyOverride(const EnvironmentOverride& environmentOverride) {
        long lVar1 = environmentOverride.GetFogOverrides();
        ((lVar1 + 4))->ApplyTo<postprocess::ToneMapOperator>(m_fogRGBA);
        ((lVar1 + 12))->ApplyTo<postprocess::ToneMapOperator>(m_fogDepth);
        ((lVar1 + 20))->ApplyTo<float>(m_fogMaxDistance);
        ((lVar1 + 28))->ApplyTo<float>(m_fogConstantAngleFalloff);
        ((lVar1 + 36))->ApplyTo<float>(m_fogDepthAngleFalloff);
        ((lVar1 + 44))->ApplyTo<float>(field_24);
    }

    // 0x1004ab1c0
    uint32_t EnvFogSettings::operator==(const EnvFogSettings& envFogSettings) const {
        if ((((field_0 == envFogSettings.field_0) && (m_fogRGBA == envFogSettings.m_fogRGBA)) &&
             (m_fogDepth == envFogSettings.m_fogDepth)) &&
            (((m_fogMaxDistance == envFogSettings.m_fogMaxDistance &&
               (m_fogConstantAngleFalloff == envFogSettings.m_fogConstantAngleFalloff)) &&
              (m_fogDepthAngleFalloff == envFogSettings.m_fogDepthAngleFalloff)))) {
            return field_24 == envFogSettings.field_24;
        }
        return 0;
    }

    // 0x1004ab210
    unsigned long EnvFogSettings::hash() const {

        return local_20 = 0;
        hash_combine<bool>(&local_20, &field_0);
        hash_combine<unsigned int>(&local_20, &m_fogRGBA);
        hash_combine<unsigned int>(&local_20, &m_fogDepth);
        hash_combine<float>(&local_20, &m_fogMaxDistance);
        hash_combine<float>(&local_20, &m_fogConstantAngleFalloff);
        hash_combine<float>(&local_20, &m_fogDepthAngleFalloff);
        hash_combine<float>(&local_20, &field_24);
        return local_20;
    }

    // 0x1004ab290
    void EnvScatteringSettings::SetDefaults() {
        field_64 = true;
        local_58._48_8_ = 0;
        uint64_t uStack_20 = 0;
        local_58.field_32 = 0;
        local_58.field_40 = 0;
        local_58.field_44 = 0;
        local_58.field_16 = 0;
        local_58.field_24 = 0;
        local_58.field_28 = 0;
        local_58.field_0 = 0.0;
        local_58.field_4 = 0.0;
        local_58.field_8 = 0.0;
        local_58.field_12 = 0;
        SimpleScatteringParams local_58;
        *this = local_58;
    }

    // 0x1004ab2e0
    void EnvScatteringSettings::Set(PacketT<Array<unsigned char>>& arg1) {
        field_64 = arg1.g1() == '\x01';
        uint32_t local_2c = arg1.gFloat();
        uint8_t* this_00 = &field_48;
        auto puVar2 = this_00->SSOBeginPtr();
        *puVar2 = local_2c;
        local_2c = arg1.gFloat();
        puVar2 = (uint32_t*)this_00->y();
        *puVar2 = local_2c;
        local_2c = arg1.gFloat();
        puVar2 = (uint32_t*)this_00->second();
        *puVar2 = local_2c;
        local_2c = arg1.gFloat();
        puVar2 = (uint32_t*)this_00->qw();
        *puVar2 = local_2c;
        Vector3T<float> local_38(arg1, false);
        field_32.SetXYZ(local_38);
        local_38 = math::Vector3T(arg1, false);
        SetXYZ(local_38);
        local_38 = math::Vector3T(arg1, false);
        field_16.SetXYZ(local_38);
        if (field_64 == false) {
            puVar2 = (uint32_t*)this_00->SSOBeginPtr();
            *puVar2 = 0;
            *this = math::Vector3T<float>::SetToZero();
            field_16 = math::Vector3T<float>::SetToZero();
        }
    }

    // 0x1004ab410
    void EnvScatteringSettings::ApplyOverride(const EnvironmentOverride& environmentOverride) {
        uint8_t* this_00;
        float* pfVar2;
        uint32_t* puVar3;

        auto pcVar1 = environmentOverride.GetError();
        if (*pcVar1 != '\0') {
            this_00 = &field_48;
            ((pcVar1 + 1))->ApplyTo<bool>(field_64);
            pfVar2 = (float*)this_00->SSOBeginPtr();
            ((pcVar1 + 4))->ApplyTo<float>(*pfVar2);
            pfVar2 = (float*)this_00->y();
            ((pcVar1 + 12))->ApplyTo<float>(*pfVar2);
            pfVar2 = (float*)this_00->second();
            ((pcVar1 + 20))->ApplyTo<float>(*pfVar2);
            pfVar2 = (float*)this_00->qw();
            ((pcVar1 + 28))->ApplyTo<float>(*pfVar2);
            ((pcVar1 + 36))->ApplyTo<math::Vector3T<float>>(field_32);
            ((pcVar1 + 52))->ApplyTo<math::Vector3T<float>>(*this);
            ((pcVar1 + 68))->ApplyTo<math::Vector3T<float>>(field_16);
            if (field_64 == false) {
                puVar3 = (uint32_t*)this_00->SSOBeginPtr();
                *puVar3 = 0;
                *this = math::Vector3T<float>::SetToZero();
                field_16 = math::Vector3T<float>::SetToZero();
            }
        }
    }

    // 0x1004ab530
    uint64_t EnvScatteringSettings::operator==(const EnvScatteringSettings& envScatteringSettings) const {
        if (field_64 == envScatteringSettings.field_64) {
            return *this == envScatteringSettings;
        }
        return 0;
    }

    // 0x1004ab5b0
    unsigned long EnvScatteringSettings::hash() const {
        return local_20 = 0;
        hash_combine<bool>(&local_20, &field_64);
        unsigned long arg2 = hash();
        hash_combine(&local_20, arg2);
        return local_20;
    }

    // 0x1004ab680
    void EnvVolumetricSettings::SetDefaults() {

        field_0 = 0.0;
        field_4 = 1.0;
        field_8 = 1.0;
        field_12 = 1.0;
        field_16 = 1.0;
        field_20 = 0.8;
        field_24 = 0.8;
        field_28 = 1109393408;
        ColourHSL local_28(1.0, 0.7, 0.5);
        field_32.SetXYZ(local_28);
        local_28 = math::ColourHSL(0.025, 0.025, 0.025);
        field_48.SetXYZ(local_28);
    }

    // 0x1004ab710
    void EnvVolumetricSettings::Set(PacketT<Array<unsigned char>>& arg1) {
        uint64_t local_28[2];

        float fVar2 = (float)arg1.gFloat();
        field_0 = fVar2;
        fVar2 = (float)arg1.gFloat();
        field_4 = fVar2;
        fVar2 = (float)arg1.gFloat();
        field_8 = fVar2;
        fVar2 = (float)arg1.gFloat();
        field_12 = fVar2;
        fVar2 = (float)arg1.gFloat();
        field_16 = fVar2;
        fVar2 = (float)arg1.gFloat();
        field_20 = fVar2;
        fVar2 = (float)arg1.gFloat();
        field_24 = fVar2;
        field_28 = arg1.gFloat();
        int iVar1 = arg1.g4();
        local_28[0] = math::Colour3FromR8G8B8A8(iVar1 * 256 + 255);
        field_32.SetXYZ(*local_28);
        iVar1 = arg1.g4();
        local_28[0] = math::Colour3FromR8G8B8A8(iVar1 * 256 + 255);
        field_48.SetXYZ(*local_28);
    }

    // 0x1004ab800
    void EnvVolumetricSettings::ApplyOverride(const EnvironmentOverride& environmentOverride) {
        auto pcVar1 = environmentOverride.GetEmissiveUVScale();
        if (*pcVar1 != '\0') {
            ((pcVar1 + 4))->ApplyTo<float>(field_0);
            ((pcVar1 + 12))->ApplyTo<float>(field_4);
            ((pcVar1 + 20))->ApplyTo<float>(field_8);
            ((pcVar1 + 28))->ApplyTo<float>(field_12);
            ((pcVar1 + 36))->ApplyTo<float>(field_16);
            ((pcVar1 + 44))->ApplyTo<float>(field_20);
            ((pcVar1 + 52))->ApplyTo<float>(field_24);
            ((pcVar1 + 68))->ApplyTo<math::Vector3T<float>>(field_32);
            ((pcVar1 + 84))->ApplyTo<math::Vector3T<float>>(field_48);
        }
    }

    // 0x1004ab8b0
    void EnvToneMapSettings::SetDefaults() {
        m_toneMappingEnabled[0] = 1;
        m_toneMapOperator = 3;
        *field_8 = (*((float*)&graphics::DEF_RS_MIN_BLACK_LUM));
        (*((field_8 + 32))) = (*((float*)&graphics::DEF_RS_MAX_WHITE_LUM));
        (*((field_8 + 64))) = (*((float*)&graphics::DEF_RS_EXPOSURE_KEY));
        (*((field_8 + 96))) = (*((float*)&postprocess::DEF_MIN_AUTO_EXPOSURE));
        (*((field_8 + 128))) = (*((float*)&graphics::DEF_RS_MAX_AUTO_EXPOSURE));
        (*((field_8 + 160))) = (*((float*)&postprocess::DEF_EXPOSURE_SPEED_MUL));
    }

    // 0x1004ab940
    void EnvToneMapSettings::Set(PacketT<Array<unsigned char>>& arg1) {
        char cVar1 = arg1.g1();
        m_toneMappingEnabled[0] = cVar1 == '\x01';
        uint8_t bVar2 = arg1.g1();
        m_toneMapOperator = (unsigned int)bVar2;
        float local_1c = (float)arg1.gFloat();
        *field_8 = local_1c;
        local_1c = (float)arg1.gFloat();
        (*((field_8 + 32))) = local_1c;
        local_1c = (float)arg1.gFloat();
        (*((field_8 + 64))) = local_1c;
        local_1c = (float)arg1.gFloat();
        (*((field_8 + 128))) = local_1c;
        local_1c = (float)arg1.gFloat();
        (*((field_8 + 160))) = local_1c;
    }

    // 0x1004aba00
    void EnvToneMapSettings::ApplyOverride(const EnvironmentOverride& environmentOverride) {
        auto pcVar1 = environmentOverride.GetToneMapOverrides();
        if (*pcVar1 != '\0') {
            ((pcVar1 + 1))->ApplyTo<bool>(*this);
            ((pcVar1 + 4))->ApplyTo<postprocess::ToneMapOperator>(m_toneMapOperator);
            ((pcVar1 + 12))->ApplyTo<math::Transitionable<float>>(*field_8);
            ((pcVar1 + 20))->ApplyTo<math::Transitionable<float>>(*((field_8 + 32)));
            ((pcVar1 + 28))->ApplyTo<math::Transitionable<float>>(*((field_8 + 64)));
            ((pcVar1 + 36))->ApplyTo<math::Transitionable<float>>(*((field_8 + 128)));
            ((pcVar1 + 44))->ApplyTo<math::Transitionable<float>>(*((field_8 + 160)));
        }
    }

    // 0x1004abae0
    uint64_t EnvToneMapSettings::operator==(const EnvToneMapSettings& envToneMapSettings) const {
        if ((m_toneMappingEnabled[0] == envToneMapSettings.m_toneMappingEnabled[0]) &&
            (m_toneMapOperator == envToneMapSettings.m_toneMapOperator)) {
            return *field_8 == envToneMapSettings.field_8;
        }
        return 0;
    }

    // 0x1004abc30
    unsigned long EnvToneMapSettings::hash() const {
        return local_20 = 0;
        hash_combine<bool>(&local_20, (bool*)this);
        hash_combine<postprocess::ToneMapOperator>(&local_20, (ToneMapOperator*)&m_toneMapOperator);
        unsigned long arg2 = field_8->hash();
        hash_combine(&local_20, arg2);
        return local_20;
    }

} // namespace jag::game
