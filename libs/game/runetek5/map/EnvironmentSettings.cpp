// libs/game/runetek5/map/EnvironmentSettings.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "EnvironmentSettings.h"

namespace jag::game {
    // 0x1004aac90, 128 bytes, placed by debug map only (low confidence)
    // EnvLightingSettings::SetDefaults()
    void EnvLightingSettings::SetDefaults() {
        m_sunRGBA = 4294967295;
        (&field_4, -50.0, 60.0, -60.0)->Set();
        m_ambientLight = 1.1523438;
        m_contrast = 0.69921875;
        field_24 = 1.2;
        m_sunlightShadowStrength = 1.0;
        m_specularHorzOcclusionScale = 1.1;
        m_envMapIrradianceScale = 2.75;
    }

    // 0x1004aad10, 304 bytes, placed by debug map only (low confidence)
    // EnvLightingSettings::Set(PacketT<Array<unsigned char, eastl::allocator> >&)
    void EnvLightingSettings::Set(PacketT* param_1) {
        undefined1* this_00;
        short sVar1;
        ushort uVar2;
        int iVar3;
        vector* pvVar4;
        float* pfVar5;
        float fVar7;

        iVar3 = param_1->g4();
        m_sunRGBA = iVar3 << 8 | 255;
        sVar1 = param_1->g2s();
        this_00 = &field_4;
        pvVar4 = this_00->SSOBeginPtr(param_1);
        *(float*)pvVar4 = (float)(int)sVar1;
        sVar1 = param_1->g2s();
        pfVar5 = (float*)this_00->y();
        *pfVar5 = (float)-(int)sVar1;
        sVar1 = param_1->g2s();
        pfVar5 = (float*)this_00->second();
        *pfVar5 = (float)(int)sVar1;
        uVar2 = param_1->g2();
        m_ambientLight = (float)uVar2 * 0.00390625;
        uVar2 = param_1->g2();
        m_contrast = (float)uVar2 * 0.00390625;
        uVar2 = param_1->g2();
        field_24 = (float)uVar2 * 0.00390625;
        fVar7 = (float)param_1->gFloat();
        m_specularHorzOcclusionScale = fVar7;
        fVar7 = (float)param_1->gFloat();
        m_envMapIrradianceScale = fVar7;
        fVar7 = (float)param_1->gFloat();
        m_sunlightShadowStrength = fVar7;
    }

    // 0x1004aae40, 144 bytes, placed by debug map only (low confidence)
    // EnvLightingSettings::ApplyOverride(EnvironmentOverride const&)
    void EnvLightingSettings::ApplyOverride(EnvironmentOverride* param_1) {
        vector* pvVar1;

        pvVar1 = param_1->SSOBeginPtr(param_1);
        if (*pvVar1 != (vector)0) {
            EnvironmentOverrideParam<unsigned int>::ApplyTo<postprocess::ToneMapOperator>(
                (EnvironmentOverrideParam<unsigned int>*)(pvVar1 + 4), (ToneMapOperator*)this);
            EnvironmentOverrideParam<float>::ApplyTo<float>((EnvironmentOverrideParam<float>*)(pvVar1 + 12),
                                                            &m_ambientLight);
            EnvironmentOverrideParam<float>::ApplyTo<float>((EnvironmentOverrideParam<float>*)(pvVar1 + 20),
                                                            &m_contrast);
            EnvironmentOverrideParam<float>::ApplyTo<float>((EnvironmentOverrideParam<float>*)(pvVar1 + 28), &field_24);
            EnvironmentOverrideParam<math::Vector3T<float>>::ApplyTo<math::Vector3T<float>>(
                (EnvironmentOverrideParam<math::Vector3T<float>>*)(pvVar1 + 36), (Vector3T*)&field_4);
            EnvironmentOverrideParam<float>::ApplyTo<float>((EnvironmentOverrideParam<float>*)(pvVar1 + 52),
                                                            &m_sunlightShadowStrength);
            EnvironmentOverrideParam<float>::ApplyTo<float>((EnvironmentOverrideParam<float>*)(pvVar1 + 60),
                                                            &m_specularHorzOcclusionScale);
            EnvironmentOverrideParam<float>::ApplyTo<float>((EnvironmentOverrideParam<float>*)(pvVar1 + 68),
                                                            &m_envMapIrradianceScale);
        }
    }

    // 0x1004aaf50, 128 bytes, placed by debug map only (low confidence)
    // EnvLightingSettings::operator==(EnvLightingSettings const&) const
    /* EnvLightingSettings::TEMPNAMEPLACEHOLDERVALUE(EnvLightingSettings const&)
   const */

    undefined8 EnvLightingSettings::operator==(EnvLightingSettings* param_1) {
        bool bVar1;
        undefined7 extraout_var;

        if ((((m_sunRGBA == param_1->m_sunRGBA) &&
              (bVar1 = math::operator==((Vector3T*)&field_4, (Vector3T*)&param_1->field_4), bVar1)) &&
             (m_ambientLight == param_1->m_ambientLight)) &&
            (((m_contrast == param_1->m_contrast && (field_24 == param_1->field_24)) &&
              ((m_sunlightShadowStrength == param_1->m_sunlightShadowStrength &&
                (m_specularHorzOcclusionScale == param_1->m_specularHorzOcclusionScale)))))) {
            return CONCAT71(extraout_var, m_envMapIrradianceScale == param_1->m_envMapIrradianceScale);
        }
        return 0;
    }

    // 0x1004aafd0, 160 bytes, placed by debug map only (low confidence)
    // EnvLightingSettings::hash() const
    ulong EnvLightingSettings::hash() {
        ulong uVar1;
        ulong local_20;

        local_20 = 0;
        hash_combine<unsigned int>(&local_20, &m_sunRGBA);
        uVar1 = (&field_4)->hash();
        hash_combine(&local_20, uVar1);
        hash_combine<float>(&local_20, &m_ambientLight);
        hash_combine<float>(&local_20, &m_contrast);
        hash_combine<float>(&local_20, &field_24);
        hash_combine<float>(&local_20, &m_sunlightShadowStrength);
        hash_combine<float>(&local_20, &m_specularHorzOcclusionScale);
        hash_combine<float>(&local_20, &m_envMapIrradianceScale);
        return local_20;
    }

    // 0x1004ab070, 80 bytes, placed by debug map only (low confidence)
    // EnvFogSettings::SetDefaults()
    void EnvFogSettings::SetDefaults() {
        field_0 = true;
        m_fogRGBA = 3368069375;
        m_fogDepth = 0;
        m_fogMaxDistance = 0.0;
        m_fogConstantAngleFalloff = 32.0;
        m_fogDepthAngleFalloff = 8.0;
        field_24 = 0.0;
    }

    // 0x1004ab0c0, 144 bytes, placed by debug map only (low confidence)
    // EnvFogSettings::Set(PacketT<Array<unsigned char, eastl::allocator> >&)
    void EnvFogSettings::Set(PacketT* param_1) {
        char cVar1;
        ushort uVar2;
        int iVar3;
        float fVar4;

        iVar3 = param_1->g4();
        m_fogRGBA = iVar3 << 8 | 255;
        uVar2 = param_1->g2();
        m_fogDepth = (uint)uVar2;
        cVar1 = param_1->g1();
        field_0 = cVar1 == '\x01';
        fVar4 = (float)param_1->gFloat();
        m_fogMaxDistance = fVar4;
        fVar4 = (float)param_1->gFloat();
        m_fogConstantAngleFalloff = fVar4;
        fVar4 = (float)param_1->gFloat();
        m_fogDepthAngleFalloff = fVar4;
        fVar4 = (float)param_1->gFloat();
        field_24 = fVar4;
        if (field_0 == false) {
            m_fogDepth = 0;
            m_fogMaxDistance = 3.4028235e+38;
        }
    }

    // 0x1004ab150, 112 bytes, placed by debug map only (low confidence)
    // EnvFogSettings::ApplyOverride(EnvironmentOverride const&)
    void EnvFogSettings::ApplyOverride(EnvironmentOverride* param_1) {
        long lVar1;

        lVar1 = param_1->GetFogOverrides();
        EnvironmentOverrideParam<unsigned int>::ApplyTo<postprocess::ToneMapOperator>(
            (EnvironmentOverrideParam<unsigned int>*)(lVar1 + 4), (ToneMapOperator*)&m_fogRGBA);
        EnvironmentOverrideParam<unsigned int>::ApplyTo<postprocess::ToneMapOperator>(
            (EnvironmentOverrideParam<unsigned int>*)(lVar1 + 12), (ToneMapOperator*)&m_fogDepth);
        EnvironmentOverrideParam<float>::ApplyTo<float>((EnvironmentOverrideParam<float>*)(lVar1 + 20),
                                                        &m_fogMaxDistance);
        EnvironmentOverrideParam<float>::ApplyTo<float>((EnvironmentOverrideParam<float>*)(lVar1 + 28),
                                                        &m_fogConstantAngleFalloff);
        EnvironmentOverrideParam<float>::ApplyTo<float>((EnvironmentOverrideParam<float>*)(lVar1 + 36),
                                                        &m_fogDepthAngleFalloff);
        EnvironmentOverrideParam<float>::ApplyTo<float>((EnvironmentOverrideParam<float>*)(lVar1 + 44), &field_24);
    }

    // 0x1004ab1c0, 80 bytes, placed by debug map only (low confidence)
    // EnvFogSettings::operator==(EnvFogSettings const&) const
    /* EnvFogSettings::TEMPNAMEPLACEHOLDERVALUE(EnvFogSettings const&) const */

    undefined4 EnvFogSettings::operator==(EnvFogSettings* param_1) {
        if ((((field_0 == param_1->field_0) && (m_fogRGBA == param_1->m_fogRGBA)) &&
             (m_fogDepth == param_1->m_fogDepth)) &&
            (((m_fogMaxDistance == param_1->m_fogMaxDistance &&
               (m_fogConstantAngleFalloff == param_1->m_fogConstantAngleFalloff)) &&
              (m_fogDepthAngleFalloff == param_1->m_fogDepthAngleFalloff)))) {
            return CONCAT31((int3)(m_fogDepth >> 8), field_24 == param_1->field_24);
        }
        return 0;
    }

    // 0x1004ab210, 128 bytes, placed by debug map only (low confidence)
    // EnvFogSettings::hash() const
    ulong EnvFogSettings::hash() {
        ulong local_20;

        local_20 = 0;
        hash_combine<bool>(&local_20, &field_0);
        hash_combine<unsigned int>(&local_20, &m_fogRGBA);
        hash_combine<unsigned int>(&local_20, &m_fogDepth);
        hash_combine<float>(&local_20, &m_fogMaxDistance);
        hash_combine<float>(&local_20, &m_fogConstantAngleFalloff);
        hash_combine<float>(&local_20, &m_fogDepthAngleFalloff);
        hash_combine<float>(&local_20, &field_24);
        return local_20;
    }

    // 0x1004ab290, 80 bytes, placed by debug map only (low confidence)
    // EnvScatteringSettings::SetDefaults()
    void EnvScatteringSettings::SetDefaults() {
        SimpleScatteringParams local_58;
        undefined8 uStack_20;

        field_64 = true;
        local_58._48_8_ = 0;
        uStack_20 = 0;
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
        new (&local_58) graphics::SimpleScatteringParams();
        graphics::SimpleScatteringParams::operator=((SimpleScatteringParams*)this, &local_58);
    }

    // 0x1004ab2e0, 304 bytes, placed by debug map only (low confidence)
    // EnvScatteringSettings::Set(PacketT<Array<unsigned char, eastl::allocator> >&)
    void EnvScatteringSettings::Set(PacketT* param_1) {
        undefined1* this_00;
        char cVar1;
        vector* pvVar2;
        undefined4* puVar3;
        Vector3T<float>* this_01;
        Vector3T<float> local_38[12];
        undefined4 local_2c;

        cVar1 = param_1->g1();
        field_64 = cVar1 == '\x01';
        local_2c = param_1->gFloat();
        this_00 = &field_48;
        pvVar2 = this_00->SSOBeginPtr(param_1);
        *(undefined4*)pvVar2 = local_2c;
        local_2c = param_1->gFloat();
        puVar3 = (undefined4*)this_00->y();
        *puVar3 = local_2c;
        local_2c = param_1->gFloat();
        puVar3 = (undefined4*)this_00->second();
        *puVar3 = local_2c;
        local_2c = param_1->gFloat();
        puVar3 = (undefined4*)this_00->qw();
        *puVar3 = local_2c;
        math::Vector3T<float>::Vector3T(local_38, param_1, false);
        (&field_32, (Vector3T*)local_38)->SetXYZ();
        math::Vector3T<float>::Vector3T(local_38, param_1, false);
        SetXYZ(local_38);
        this_01 = local_38;
        math::Vector3T<float>::Vector3T(this_01, param_1, false);
        (&field_16, (Vector3T*)this_01)->SetXYZ();
        if (field_64 == false) {
            pvVar2 = this_00->SSOBeginPtr(this_01);
            *(undefined4*)pvVar2 = 0;
            SetToZero();
            (&field_16)->SetToZero();
        }
    }

    // 0x1004ab410, 240 bytes, placed by debug map only (low confidence)
    // EnvScatteringSettings::ApplyOverride(EnvironmentOverride const&)
    void EnvScatteringSettings::ApplyOverride(EnvironmentOverride* param_1) {
        undefined1* this_00;
        undefined1* this_01;
        char* pcVar1;
        vector* pvVar2;
        float* pfVar3;
        type* ptVar4;

        pcVar1 = (char*)param_1->GetError();
        if (*pcVar1 != '\0') {
            this_00 = &field_48;
            ptVar4 = (type*)&field_64;
            EnvironmentOverrideParam<bool>::ApplyTo<bool>((EnvironmentOverrideParam<bool>*)(pcVar1 + 1), (bool*)ptVar4);
            pvVar2 = this_00->SSOBeginPtr(ptVar4);
            EnvironmentOverrideParam<float>::ApplyTo<float>((EnvironmentOverrideParam<float>*)(pcVar1 + 4),
                                                            (float*)pvVar2);
            pfVar3 = (float*)this_00->y();
            EnvironmentOverrideParam<float>::ApplyTo<float>((EnvironmentOverrideParam<float>*)(pcVar1 + 12), pfVar3);
            pfVar3 = (float*)this_00->second();
            EnvironmentOverrideParam<float>::ApplyTo<float>((EnvironmentOverrideParam<float>*)(pcVar1 + 20), pfVar3);
            pfVar3 = (float*)this_00->qw();
            EnvironmentOverrideParam<float>::ApplyTo<float>((EnvironmentOverrideParam<float>*)(pcVar1 + 28), pfVar3);
            EnvironmentOverrideParam<math::Vector3T<float>>::ApplyTo<math::Vector3T<float>>(
                (EnvironmentOverrideParam<math::Vector3T<float>>*)(pcVar1 + 36), (Vector3T*)&field_32);
            EnvironmentOverrideParam<math::Vector3T<float>>::ApplyTo<math::Vector3T<float>>(
                (EnvironmentOverrideParam<math::Vector3T<float>>*)(pcVar1 + 52), (Vector3T*)this);
            this_01 = &field_16;
            ptVar4 = (type*)this_01;
            EnvironmentOverrideParam<math::Vector3T<float>>::ApplyTo<math::Vector3T<float>>(
                (EnvironmentOverrideParam<math::Vector3T<float>>*)(pcVar1 + 68), (Vector3T*)this_01);
            if (field_64 == false) {
                pvVar2 = this_00->SSOBeginPtr(ptVar4);
                *(undefined4*)pvVar2 = 0;
                SetToZero();
                this_01->SetToZero();
            }
        }
    }

    // 0x1004ab530, 32 bytes, placed by debug map only (low confidence)
    // EnvScatteringSettings::operator==(EnvScatteringSettings const&) const
    /* EnvScatteringSettings::TEMPNAMEPLACEHOLDERVALUE(EnvScatteringSettings
   const&) const */

    undefined8 EnvScatteringSettings::operator==(EnvScatteringSettings* param_1) {
        undefined8 uVar1;

        if (field_64 == param_1->field_64) {
            uVar1 = graphics::SimpleScatteringParams::operator==((SimpleScatteringParams*)this,
                                                                 (SimpleScatteringParams*)param_1);
            return uVar1;
        }
        return 0;
    }

    // 0x1004ab5b0, 80 bytes, placed by debug map only (low confidence)
    // EnvScatteringSettings::hash() const
    ulong EnvScatteringSettings::hash() {
        ulong uVar1;
        ulong local_20;

        local_20 = 0;
        hash_combine<bool>(&local_20, &field_64);
        uVar1 = hash();
        hash_combine(&local_20, uVar1);
        return local_20;
    }

    // 0x1004ab680, 144 bytes, placed by debug map only (low confidence)
    // EnvVolumetricSettings::SetDefaults()
    void EnvVolumetricSettings::SetDefaults() {
        ColourHSL local_28;

        field_0 = 0.0;
        field_4 = 1.0;
        field_8 = 1.0;
        field_12 = 1.0;
        field_16 = 1.0;
        field_20 = 0.8;
        field_24 = 0.8;
        field_28 = 1109393408;
        new (&local_28) math::ColourHSL(1.0, 0.7, 0.5);
        (&field_32, (Vector3T*)&local_28)->SetXYZ();
        new (&local_28) math::ColourHSL(0.025, 0.025, 0.025);
        (&field_48, (Vector3T*)&local_28)->SetXYZ();
    }

    // 0x1004ab710, 240 bytes, placed by debug map only (low confidence)
    // EnvVolumetricSettings::Set(PacketT<Array<unsigned char, eastl::allocator> >&)
    void EnvVolumetricSettings::Set(PacketT* param_1) {
        int iVar1;
        float fVar2;
        undefined4 uVar3;
        undefined8 local_28[2];

        fVar2 = (float)param_1->gFloat();
        field_0 = fVar2;
        fVar2 = (float)param_1->gFloat();
        field_4 = fVar2;
        fVar2 = (float)param_1->gFloat();
        field_8 = fVar2;
        fVar2 = (float)param_1->gFloat();
        field_12 = fVar2;
        fVar2 = (float)param_1->gFloat();
        field_16 = fVar2;
        fVar2 = (float)param_1->gFloat();
        field_20 = fVar2;
        fVar2 = (float)param_1->gFloat();
        field_24 = fVar2;
        uVar3 = param_1->gFloat();
        field_28 = uVar3;
        iVar1 = param_1->g4();
        local_28[0] = math::Colour3FromR8G8B8A8(iVar1 * 256 + 255);
        (&field_32, (Vector3T*)local_28)->SetXYZ();
        iVar1 = param_1->g4();
        local_28[0] = math::Colour3FromR8G8B8A8(iVar1 * 256 + 255);
        (&field_48, (Vector3T*)local_28)->SetXYZ();
    }

    // 0x1004ab800, 160 bytes, placed by debug map only (low confidence)
    // EnvVolumetricSettings::ApplyOverride(EnvironmentOverride const&)
    void EnvVolumetricSettings::ApplyOverride(EnvironmentOverride* param_1) {
        char* pcVar1;

        pcVar1 = (char*)param_1->GetEmissiveUVScale();
        if (*pcVar1 != '\0') {
            EnvironmentOverrideParam<float>::ApplyTo<float>((EnvironmentOverrideParam<float>*)(pcVar1 + 4), &field_0);
            EnvironmentOverrideParam<float>::ApplyTo<float>((EnvironmentOverrideParam<float>*)(pcVar1 + 12), &field_4);
            EnvironmentOverrideParam<float>::ApplyTo<float>((EnvironmentOverrideParam<float>*)(pcVar1 + 20), &field_8);
            EnvironmentOverrideParam<float>::ApplyTo<float>((EnvironmentOverrideParam<float>*)(pcVar1 + 28), &field_12);
            EnvironmentOverrideParam<float>::ApplyTo<float>((EnvironmentOverrideParam<float>*)(pcVar1 + 36), &field_16);
            EnvironmentOverrideParam<float>::ApplyTo<float>((EnvironmentOverrideParam<float>*)(pcVar1 + 44), &field_20);
            EnvironmentOverrideParam<float>::ApplyTo<float>((EnvironmentOverrideParam<float>*)(pcVar1 + 52), &field_24);
            EnvironmentOverrideParam<math::Vector3T<float>>::ApplyTo<math::Vector3T<float>>(
                (EnvironmentOverrideParam<math::Vector3T<float>>*)(pcVar1 + 68), (Vector3T*)&field_32);
            EnvironmentOverrideParam<math::Vector3T<float>>::ApplyTo<math::Vector3T<float>>(
                (EnvironmentOverrideParam<math::Vector3T<float>>*)(pcVar1 + 84), (Vector3T*)&field_48);
        }
    }

    // 0x1004ab8b0, 144 bytes, placed by debug map only (low confidence)
    // EnvToneMapSettings::SetDefaults()
    void EnvToneMapSettings::SetDefaults() {
        m_toneMappingEnabled[0] = 1;
        m_toneMapOperator = 3;
        math::Transitionable<float>::operator=((Transitionable<float>*)field_8,
                                               (float*)&graphics::DEF_RS_MIN_BLACK_LUM);
        math::Transitionable<float>::operator=((Transitionable<float>*)(field_8 + 32),
                                               (float*)&graphics::DEF_RS_MAX_WHITE_LUM);
        math::Transitionable<float>::operator=((Transitionable<float>*)(field_8 + 64),
                                               (float*)&graphics::DEF_RS_EXPOSURE_KEY);
        math::Transitionable<float>::operator=((Transitionable<float>*)(field_8 + 96),
                                               (float*)&postprocess::DEF_MIN_AUTO_EXPOSURE);
        math::Transitionable<float>::operator=((Transitionable<float>*)(field_8 + 128),
                                               (float*)&graphics::DEF_RS_MAX_AUTO_EXPOSURE);
        math::Transitionable<float>::operator=((Transitionable<float>*)(field_8 + 160),
                                               (float*)&postprocess::DEF_EXPOSURE_SPEED_MUL);
    }

    // 0x1004ab940, 192 bytes, placed by debug map only (low confidence)
    // EnvToneMapSettings::Set(PacketT<Array<unsigned char, eastl::allocator> >&)
    void EnvToneMapSettings::Set(PacketT* param_1) {
        char cVar1;
        byte bVar2;
        float local_1c;

        cVar1 = param_1->g1();
        m_toneMappingEnabled[0] = cVar1 == '\x01';
        bVar2 = param_1->g1();
        m_toneMapOperator = (uint)bVar2;
        local_1c = (float)param_1->gFloat();
        math::Transitionable<float>::operator=((Transitionable<float>*)field_8, &local_1c);
        local_1c = (float)param_1->gFloat();
        math::Transitionable<float>::operator=((Transitionable<float>*)(field_8 + 32), &local_1c);
        local_1c = (float)param_1->gFloat();
        math::Transitionable<float>::operator=((Transitionable<float>*)(field_8 + 64), &local_1c);
        local_1c = (float)param_1->gFloat();
        math::Transitionable<float>::operator=((Transitionable<float>*)(field_8 + 128), &local_1c);
        local_1c = (float)param_1->gFloat();
        math::Transitionable<float>::operator=((Transitionable<float>*)(field_8 + 160), &local_1c);
    }

    // 0x1004aba00, 144 bytes, placed by debug map only (low confidence)
    // EnvToneMapSettings::ApplyOverride(EnvironmentOverride const&)
    void EnvToneMapSettings::ApplyOverride(EnvironmentOverride* param_1) {
        char* pcVar1;

        pcVar1 = (char*)param_1->GetToneMapOverrides();
        if (*pcVar1 != '\0') {
            EnvironmentOverrideParam<bool>::ApplyTo<bool>((EnvironmentOverrideParam<bool>*)(pcVar1 + 1), (bool*)this);
            EnvironmentOverrideParam<unsigned int>::ApplyTo<postprocess::ToneMapOperator>(
                (EnvironmentOverrideParam<unsigned int>*)(pcVar1 + 4), (ToneMapOperator*)&m_toneMapOperator);
            EnvironmentOverrideParam<float>::ApplyTo<math::Transitionable<float>>(
                (EnvironmentOverrideParam<float>*)(pcVar1 + 12), (Transitionable*)field_8);
            EnvironmentOverrideParam<float>::ApplyTo<math::Transitionable<float>>(
                (EnvironmentOverrideParam<float>*)(pcVar1 + 20), (Transitionable*)(field_8 + 32));
            EnvironmentOverrideParam<float>::ApplyTo<math::Transitionable<float>>(
                (EnvironmentOverrideParam<float>*)(pcVar1 + 28), (Transitionable*)(field_8 + 64));
            EnvironmentOverrideParam<float>::ApplyTo<math::Transitionable<float>>(
                (EnvironmentOverrideParam<float>*)(pcVar1 + 36), (Transitionable*)(field_8 + 128));
            EnvironmentOverrideParam<float>::ApplyTo<math::Transitionable<float>>(
                (EnvironmentOverrideParam<float>*)(pcVar1 + 44), (Transitionable*)(field_8 + 160));
        }
    }

    // 0x1004abae0, 48 bytes, placed by debug map only (low confidence)
    // EnvToneMapSettings::operator==(EnvToneMapSettings const&) const
    /* EnvToneMapSettings::TEMPNAMEPLACEHOLDERVALUE(EnvToneMapSettings const&)
   const */

    undefined8 EnvToneMapSettings::operator==(EnvToneMapSettings* param_1) {
        undefined8 uVar1;

        if ((m_toneMappingEnabled[0] == param_1->m_toneMappingEnabled[0]) &&
            (m_toneMapOperator == param_1->m_toneMapOperator)) {
            uVar1 = postprocess::PostProcessParams::operator==((PostProcessParams*)field_8,
                                                               (PostProcessParams*)param_1->field_8);
            return uVar1;
        }
        return 0;
    }

    // 0x1004abc30, 96 bytes, placed by debug map only (low confidence)
    // EnvToneMapSettings::hash() const
    ulong EnvToneMapSettings::hash() {
        ulong uVar1;
        ulong local_20;

        local_20 = 0;
        hash_combine<bool>(&local_20, (bool*)this);
        hash_combine<postprocess::ToneMapOperator>(&local_20, (ToneMapOperator*)&m_toneMapOperator);
        uVar1 = field_8->hash();
        hash_combine(&local_20, uVar1);
        return local_20;
    }

} // namespace jag::game
