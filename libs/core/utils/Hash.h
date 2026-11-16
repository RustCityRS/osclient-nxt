// libs/core/utils/Hash.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class EnvBloomSettings {
    public:
        float GetWhitepoint() const;
        float GetBloomCoefficient() const;
        float GetBrightpassThreshold() const;
        void SetDefaults();
        void Set(PacketT<Array<unsigned char>>& arg1);
        void ApplyOverride(const EnvironmentOverride& environmentOverride);
        bool operator==(const EnvBloomSettings& envBloomSettings) const;
        unsigned long hash() const;
        EnvBloomSettings();

    private:
        float m_whitepoint;
        float m_bloomCoefficient;
        float m_brightpassThreshold;
        uint8_t _unknown_12[4];
    };

    class EnvLightProbeSettings {
    public:
        float GetOverbright() const;
        Vector2T<int>* GetPosOffset() const;
        void SetDefaults();
        void Set(PacketT<Array<unsigned char>>& arg1);
        void ApplyOverride(const EnvironmentOverride& environmentOverride);
        bool operator==(const EnvLightProbeSettings& envLightProbeSettings) const;
        unsigned long hash() const;
        EnvLightProbeSettings();

    private:
        float m_overbright;
        uint8_t _unknown_4[8];
    };

    // 0x1004abd90
    void EnvBloomSettings::SetDefaults() {
        m_whitepoint = 0.0;
        m_bloomCoefficient = 0.0;
        m_brightpassThreshold = 0.0;
    }

    // 0x1004abdb0
    void EnvBloomSettings::Set(PacketT<Array<unsigned char>>& arg1) {
        unsigned int uVar1 = arg1.gFloat();
        unsigned int uVar2 = arg1.gFloat();
        unsigned int uVar3 = arg1.gFloat();
        float fVar4 = (float)arg1.gFloat();
        float fVar5 = (float)arg1.gFloat();
        float fVar6 = (float)arg1.gFloat();
        m_whitepoint =
            (float)(~-(unsigned int)(fVar4 != 0.0) & uVar1 | (unsigned int)fVar4 & -(unsigned int)(fVar4 != 0.0));
        m_bloomCoefficient =
            (float)(~-(unsigned int)(fVar5 != 0.0) & uVar2 | (unsigned int)fVar5 & -(unsigned int)(fVar5 != 0.0));
        m_brightpassThreshold =
            (float)(~-(unsigned int)(fVar6 != 0.0) & uVar3 | (unsigned int)fVar6 & -(unsigned int)(fVar6 != 0.0));
    }

    // 0x1004abe60
    void EnvBloomSettings::ApplyOverride(const EnvironmentOverride& environmentOverride) {
        long lVar1 = environmentOverride.GetModelCache();
        ((lVar1 + 4))->ApplyTo<float>(m_bloomCoefficient);
        ((lVar1 + 12))->ApplyTo<float>(m_brightpassThreshold);
        ((lVar1 + 20))->ApplyTo<float>(m_whitepoint);
    }

    // 0x1004abec0
    bool EnvBloomSettings::operator==(const EnvBloomSettings& envBloomSettings) const {
        if ((m_whitepoint == envBloomSettings.m_whitepoint) &&
            (m_bloomCoefficient == envBloomSettings.m_bloomCoefficient)) {
            return m_brightpassThreshold == envBloomSettings.m_brightpassThreshold;
        }
        return false;
    }

    // 0x1004abef0
    unsigned long EnvBloomSettings::hash() const {

        return local_20 = 0;
        hash_combine<float>(&local_20, &m_whitepoint);
        hash_combine<float>(&local_20, &m_bloomCoefficient);
        hash_combine<float>(&local_20, &m_brightpassThreshold);
        return local_20;
    }

    // 0x1004abf40
    void EnvColourGradingSettings::SetDefaults() {
        unsigned int in_EAX;
        uint64_t uStack_28;

        field_0 = 1.0;
        uStack_28._0_4_ = in_EAX;
        auto arg1 = field_8.HeapBeginPtr();
        auto arg2 = field_8.end();
        eastl::fill<unsigned int>(arg1, arg2, 4294967295);
        auto arg1_00 = m_colourRemapWeightings->HeapBeginPtr();
        auto arg2_00 = m_colourRemapWeightings->end();
        uStack_28 = (unsigned long)(unsigned int)uStack_28;
        eastl::fill<float*, float>(arg1_00, arg2_00, *((float*)((long)&uStack_28 + 4)));
    }

    // 0x1004abfc0
    void EnvColourGradingSettings::Set(PacketT<Array<unsigned char>>& arg1) {
        uint8_t* this_00 = &field_8;
        auto arg1_00 = this_00->HeapBeginPtr();
        auto arg2 = this_00->end();
        eastl::fill<unsigned int>(arg1_00, arg2, 4294967295);
        uint8_t* this_01 = m_colourRemapWeightings;
        auto arg1_01 = this_01->HeapBeginPtr();
        auto arg2_00 = this_01->end();
        eastl::fill<float*, float>(arg1_01, arg2_00, 0.0);
        short sVar3 = arg1.g2s();
        int* piVar1 = (int*)(*this_00)[0];
        *piVar1 = (int)sVar3;
        uint32_t local_2c = arg1.gFloat();
        uint32_t* puVar2 = (uint32_t*)(*this_01)[0];
        *puVar2 = local_2c;
        sVar3 = arg1.g2s();
        piVar1 = (int*)(*this_00)[0];
        *piVar1 = (int)sVar3;
        local_2c = arg1.gFloat();
        puVar2 = (uint32_t*)(*this_01)[0];
        *puVar2 = local_2c;
    }

    // 0x1004ac130
    void EnvColourGradingSettings::ApplyOverride(const EnvironmentOverride& environmentOverride) {
        WorldmapRenderer* this_00;
        uint64_t uVar3;
        uint32_t* puVar4;
        unsigned long arg1;

        auto pcVar2 = environmentOverride.GetWorld();
        if (*pcVar2 != '\0') {
            arg1 = 0;
            do {
                this_00 = (WorldmapRenderer*)(*((pcVar2 + 4)))[arg1];
                if (this_00->IsValid() != '\0') {
                    uVar3 = this_00->HeapBeginPtr();
                    puVar4 = &field_8[arg1];
                    *puVar4 = (int)uVar3;
                    puVar4 = (uint32_t*)(*m_colourRemapWeightings)[arg1];
                    *puVar4 = (int)((unsigned long)uVar3 >> 32);
                }
                arg1 = arg1 + 1;
            } while (arg1 != 3);
        }
    }

    // 0x1004ac1f0
    bool EnvColourGradingSettings::operator==(const EnvColourGradingSettings& envColourGradingSettings) const {
        float fVar1;
        int iVar2;
        int* piVar3;
        float* pfVar4;
        uint8_t* puVar5;
        uint8_t* puVar6;

        if (field_0 == envColourGradingSettings.field_0) {
            puVar5 = &field_8;
            piVar3 = (int*)(*puVar5)[0];
            iVar2 = *piVar3;
            puVar6 = &envColourGradingSettings.field_8;
            piVar3 = (int*)(*puVar6)[0];
            if (iVar2 != *piVar3) {
                return false;
            }
            piVar3 = (int*)(*puVar5)[1];
            iVar2 = *piVar3;
            piVar3 = (int*)(*puVar6)[1];
            if (iVar2 == *piVar3) {
                piVar3 = (int*)(*puVar5)[2];
                iVar2 = *piVar3;
                piVar3 = (int*)(*puVar6)[2];
                if (iVar2 == *piVar3) {
                    puVar5 = m_colourRemapWeightings;
                    pfVar4 = (float*)(*puVar5)[0];
                    fVar1 = *pfVar4;
                    puVar6 = envColourGradingSettings.m_colourRemapWeightings;
                    pfVar4 = (float*)(*puVar6)[0];
                    if (fVar1 != *pfVar4) {
                        return false;
                    }
                    pfVar4 = (float*)(*puVar5)[1];
                    fVar1 = *pfVar4;
                    pfVar4 = (float*)(*puVar6)[1];
                    if (fVar1 == *pfVar4) {
                        pfVar4 = (float*)(*puVar5)[2];
                        fVar1 = *pfVar4;
                        pfVar4 = (float*)(*puVar6)[2];
                        return fVar1 == *pfVar4;
                    }
                }
            }
        }
        return false;
    }

    // 0x1004ac3c0
    unsigned long EnvColourGradingSettings::hash() const {
        return local_28 = 0;
        hash_combine<float>(&local_28, &field_0);
        uint8_t* puVar3 = &field_8;
        int* piVar1 = (int*)(*puVar3)[0];
        hash_combine<int>(&local_28, piVar1);
        piVar1 = (int*)(*puVar3)[1];
        hash_combine<int>(&local_28, piVar1);
        piVar1 = (int*)(*puVar3)[2];
        hash_combine<int>(&local_28, piVar1);
        puVar3 = m_colourRemapWeightings;
        float* pfVar2 = (float*)(*puVar3)[0];
        hash_combine<float>(&local_28, pfVar2);
        pfVar2 = (float*)(*puVar3)[1];
        hash_combine<float>(&local_28, pfVar2);
        pfVar2 = (float*)(*puVar3)[2];
        hash_combine<float>(&local_28, pfVar2);
        return local_28;
    }

    // 0x1004ac490
    void EnvLightProbeSettings::SetDefaults() {
        m_overbright = 0.25;
        field_4.SetXYZ(*PTR_ZERO_100ee66e8);
    }

    // 0x1004ac4c0
    void EnvLightProbeSettings::Set(PacketT<Array<unsigned char>>& arg1) {

        m_overbright = (float)arg1.gFloat();
        Vector3T<float> local_30(arg1, false);
        field_4.SetXYZ(local_30);
    }

    // 0x1004ac510
    void EnvLightProbeSettings::ApplyOverride(const EnvironmentOverride& environmentOverride) {
        auto pcVar1 = environmentOverride.GetLightProbeOverrides();
        if (*pcVar1 != '\0') {
            ((pcVar1 + 4))->ApplyTo<float>(m_overbright);
        }
    }

    // 0x1004ac540
    bool EnvLightProbeSettings::operator==(const EnvLightProbeSettings& envLightProbeSettings) const {
        if (m_overbright == envLightProbeSettings.m_overbright) {
            return field_4 == envLightProbeSettings.field_4;
        }
        return false;
    }

    // 0x1004ac560
    unsigned long EnvLightProbeSettings::hash() const {
        return local_20 = 0;
        hash_combine<float>(&local_20, &m_overbright);
        uint8_t* this_00 = &field_4;
        float* pfVar1 = (float*)(*this_00)[0];
        hash_combine<float>(&local_20, pfVar1);
        pfVar1 = (float*)(*this_00)[1];
        hash_combine<float>(&local_20, pfVar1);
        pfVar1 = (float*)(*this_00)[2];
        hash_combine<float>(&local_20, pfVar1);
        return local_20;
    }

    // 0x1004b07b0
    EnvBloomSettings::EnvBloomSettings() {
        SetDefaults();
    }

    // 0x1004b0c40
    EnvLightProbeSettings::EnvLightProbeSettings() {
        new (&field_4) math::Vector3T();
        SetDefaults();
    }

} // namespace jag::game

namespace jag {
    // 0x1004abc90
    void hash_combine<postprocess::ToneMapOperator>(unsigned long& arg1,
                                                    const postprocess::ToneMapOperator& toneMapOperator) {
        hash<postprocess::ToneMapOperator> local_18;

        long lVar2 = std::hash<postprocess::ToneMapOperator>::operator()(&local_18, toneMapOperator);
        unsigned long uVar1 = arg1;
        arg1 = (uVar1 >> 2) + uVar1 * 64 + lVar2 + 2654435769 ^ uVar1;
    }

} // namespace jag

namespace jag::postprocess {
    // 0x1004abcd0
    uint64_t PostProcessParams::hash() const {
        unsigned long local_20 = 0;
        auto pfVar1 = second();
        hash_combine<float>(&local_20, pfVar1);
        pfVar1 = (float*)field_32.second();
        hash_combine<float>(&local_20, pfVar1);
        pfVar1 = (float*)field_64.second();
        hash_combine<float>(&local_20, pfVar1);
        pfVar1 = (float*)field_96.second();
        hash_combine<float>(&local_20, pfVar1);
        pfVar1 = (float*)field_128.second();
        hash_combine<float>(&local_20, pfVar1);
        pfVar1 = (float*)field_160.second();
        hash_combine<float>(&local_20, pfVar1);
        hash_combine<bool>(&local_20, &field_192);
        return 0;
    }

} // namespace jag::postprocess
