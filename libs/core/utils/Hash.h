// libs/core/utils/Hash.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class EnvBloomSettings {
    public:
        float GetWhitepoint() const;
        float GetBloomCoefficient() const;
        float GetBrightpassThreshold() const;
        void SetDefaults();
        void Set(PacketT<Array<unsigned char, eastl::allocator>>&);
        void ApplyOverride(EnvironmentOverride const&);
        bool operator==(EnvBloomSettings const&) const;
        ulong hash() const;
        EnvBloomSettings();

        // data members, from how the methods use this: 16 bytes
        float m_whitepoint;          // offset 0
        float m_bloomCoefficient;    // offset 4
        float m_brightpassThreshold; // offset 8
        char _unknown_12[4];
    };

    class EnvLightProbeSettings {
    public:
        float GetOverbright() const;
        GetPosOffset() const;
        void SetDefaults();
        void Set(PacketT<Array<unsigned char, eastl::allocator>>&);
        void ApplyOverride(EnvironmentOverride const&);
        bool operator==(EnvLightProbeSettings const&) const;
        ulong hash() const;
        EnvLightProbeSettings();

        // data members, from how the methods use this: 12 bytes
        float m_overbright; // offset 0
        char _unknown_4[8];
    };

    // 0x1004abd90, 32 bytes, placed by debug map only (low confidence)
    // EnvBloomSettings::SetDefaults()
    void EnvBloomSettings::SetDefaults() {
        m_whitepoint = 0.0;
        m_bloomCoefficient = 0.0;
        m_brightpassThreshold = 0.0;
    }

    // 0x1004abdb0, 176 bytes, placed by debug map only (low confidence)
    // EnvBloomSettings::Set(PacketT<Array<unsigned char, eastl::allocator> >&)
    void EnvBloomSettings::Set(PacketT* param_1) {
        uint uVar1;
        uint uVar2;
        uint uVar3;
        float fVar4;
        float fVar5;
        float fVar6;

        uVar1 = param_1->gFloat();
        uVar2 = param_1->gFloat();
        uVar3 = param_1->gFloat();
        fVar4 = (float)param_1->gFloat();
        fVar5 = (float)param_1->gFloat();
        fVar6 = (float)param_1->gFloat();
        m_whitepoint = (float)(~-(uint)(fVar4 != 0.0) & uVar1 | (uint)fVar4 & -(uint)(fVar4 != 0.0));
        m_bloomCoefficient = (float)(~-(uint)(fVar5 != 0.0) & uVar2 | (uint)fVar5 & -(uint)(fVar5 != 0.0));
        m_brightpassThreshold = (float)(~-(uint)(fVar6 != 0.0) & uVar3 | (uint)fVar6 & -(uint)(fVar6 != 0.0));
    }

    // 0x1004abe60, 80 bytes, placed by debug map only (low confidence)
    // EnvBloomSettings::ApplyOverride(EnvironmentOverride const&)
    void EnvBloomSettings::ApplyOverride(EnvironmentOverride* param_1) {
        long lVar1;

        lVar1 = param_1->GetModelCache();
        EnvironmentOverrideParam<float>::ApplyTo<float>((EnvironmentOverrideParam<float>*)(lVar1 + 4),
                                                        &m_bloomCoefficient);
        EnvironmentOverrideParam<float>::ApplyTo<float>((EnvironmentOverrideParam<float>*)(lVar1 + 12),
                                                        &m_brightpassThreshold);
        EnvironmentOverrideParam<float>::ApplyTo<float>((EnvironmentOverrideParam<float>*)(lVar1 + 20), &m_whitepoint);
    }

    // 0x1004abec0, 48 bytes, placed by debug map only (low confidence)
    // EnvBloomSettings::operator==(EnvBloomSettings const&) const
    /* EnvBloomSettings::TEMPNAMEPLACEHOLDERVALUE(EnvBloomSettings const&) const
    */

    bool EnvBloomSettings::operator==(EnvBloomSettings* param_1) {
        if ((m_whitepoint == param_1->m_whitepoint) && (m_bloomCoefficient == param_1->m_bloomCoefficient)) {
            return m_brightpassThreshold == param_1->m_brightpassThreshold;
        }
        return false;
    }

    // 0x1004abef0, 80 bytes, placed by debug map only (low confidence)
    // EnvBloomSettings::hash() const
    ulong EnvBloomSettings::hash() {
        ulong local_20;

        local_20 = 0;
        hash_combine<float>(&local_20, &m_whitepoint);
        hash_combine<float>(&local_20, &m_bloomCoefficient);
        hash_combine<float>(&local_20, &m_brightpassThreshold);
        return local_20;
    }

    // 0x1004abf40, 128 bytes, placed by debug map only (low confidence)
    // EnvColourGradingSettings::SetDefaults()
    void EnvColourGradingSettings::SetDefaults() {
        uint in_EAX;
        uint* puVar1;
        uint* puVar2;
        float* pfVar3;
        float* pfVar4;
        undefined8 uStack_28;

        field_0 = 1.0;
        uStack_28._0_4_ = in_EAX;
        puVar1 = (uint*)(&field_8)->HeapBeginPtr();
        puVar2 = (uint*)(&field_8)->end();
        eastl::fill<unsigned int>(puVar1, puVar2, 4294967295);
        pfVar3 = (float*)(&m_colourRemapWeightings)->HeapBeginPtr();
        pfVar4 = (float*)(&m_colourRemapWeightings)->end();
        uStack_28 = (ulong)(uint)uStack_28;
        eastl::fill<float*, float>(pfVar3, pfVar4, (float*)((long)&uStack_28 + 4));
    }

    // 0x1004abfc0, 240 bytes, placed by debug map only (low confidence)
    // EnvColourGradingSettings::Set(PacketT<Array<unsigned char, eastl::allocator> >&)
    void EnvColourGradingSettings::Set(PacketT* param_1) {
        undefined1* this_00;
        uint* puVar1;
        uint* puVar2;
        float* pfVar3;
        float* pfVar4;
        int* piVar5;
        undefined4* puVar6;
        short sVar7;
        undefined1* this_01;
        float local_30;
        undefined4 local_2c;

        this_00 = &field_8;
        puVar1 = (uint*)this_00->HeapBeginPtr();
        puVar2 = (uint*)this_00->end();
        eastl::fill<unsigned int>(puVar1, puVar2, 4294967295);
        this_01 = &m_colourRemapWeightings;
        pfVar3 = (float*)this_01->HeapBeginPtr();
        pfVar4 = (float*)this_01->end();
        local_30 = 0.0;
        eastl::fill<float*, float>(pfVar3, pfVar4, &local_30);
        sVar7 = param_1->g2s();
        piVar5 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>*)this_00, 0);
        *piVar5 = (int)sVar7;
        local_2c = param_1->gFloat();
        puVar6 = (undefined4*)
            eastl::vector<float, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<float, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>*)this_01, 0);
        *puVar6 = local_2c;
        sVar7 = param_1->g2s();
        piVar5 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>*)this_00, 0);
        *piVar5 = (int)sVar7;
        local_2c = param_1->gFloat();
        puVar6 = (undefined4*)
            eastl::vector<float, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<float, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>*)this_01, 0);
        *puVar6 = local_2c;
    }

    // 0x1004ac130, 176 bytes, placed by debug map only (low confidence)
    // EnvColourGradingSettings::ApplyOverride(EnvironmentOverride const&)
    void EnvColourGradingSettings::ApplyOverride(EnvironmentOverride* param_1) {
        char* pcVar2;
        WorldmapRenderer* this_00;
        undefined8 uVar3;
        undefined4* puVar4;
        ulong uVar5;

        pcVar2 = (char*)param_1->GetWorld();
        if (*pcVar2 != '\0') {
            uVar5 = 0;
            do {
                this_00 = (WorldmapRenderer*)std::
                    array<EnvironmentOverrideParam<ColourGradingEnvironmentOverrides::ColourRemap>, 3ul>::operator[](
                        (array<EnvironmentOverrideParam<ColourGradingEnvironmentOverrides::ColourRemap>, 3ul>*)(pcVar2 +
                                                                                                                4),
                        uVar5);
                if (this_00->IsValid() != '\0') {
                    uVar3 = this_00->HeapBeginPtr();
                    puVar4 = (undefined4*)
                        eastl::vector<int, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<int, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true,
                                                                              eastl::allocator>>*)&field_8,
                                   uVar5);
                    *puVar4 = (int)uVar3;
                    puVar4 = (undefined4*)eastl::vector<
                        float, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<float, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true,
                                                                     eastl::allocator>>*)&m_colourRemapWeightings,
                        uVar5);
                    *puVar4 = (int)((ulong)uVar3 >> 32);
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 != 3);
        }
    }

    // 0x1004ac1f0, 336 bytes, placed by debug map only (low confidence)
    // EnvColourGradingSettings::operator==(EnvColourGradingSettings const&) const
    /* EnvColourGradingSettings::TEMPNAMEPLACEHOLDERVALUE(EnvColourGradingSettings
   const&) const */

    bool EnvColourGradingSettings::operator==(EnvColourGradingSettings* param_1) {
        float fVar1;
        int iVar2;
        int* piVar3;
        float* pfVar4;
        undefined1* puVar5;
        undefined1* puVar6;

        if (field_0 == param_1->field_0) {
            puVar5 = &field_8;
            piVar3 = (int*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>*)puVar5, 0);
            iVar2 = *piVar3;
            puVar6 = &param_1->field_8;
            piVar3 = (int*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>*)puVar6, 0);
            if (iVar2 != *piVar3) {
                return false;
            }
            piVar3 = (int*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>*)puVar5, 1);
            iVar2 = *piVar3;
            piVar3 = (int*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>*)puVar6, 1);
            if (iVar2 == *piVar3) {
                piVar3 = (int*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>*)puVar5,
                        2);
                iVar2 = *piVar3;
                piVar3 = (int*)eastl::
                    vector<int, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>*)puVar6,
                        2);
                if (iVar2 == *piVar3) {
                    puVar5 = &m_colourRemapWeightings;
                    pfVar4 = (float*)eastl::vector<
                        float, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<float, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar5,
                        0);
                    fVar1 = *pfVar4;
                    puVar6 = &param_1->m_colourRemapWeightings;
                    pfVar4 = (float*)eastl::vector<
                        float, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<float, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar6,
                        0);
                    if (fVar1 != *pfVar4) {
                        return false;
                    }
                    pfVar4 = (float*)eastl::vector<
                        float, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<float, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar5,
                        1);
                    fVar1 = *pfVar4;
                    pfVar4 = (float*)eastl::vector<
                        float, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<float, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar6,
                        1);
                    if (fVar1 == *pfVar4) {
                        pfVar4 = (float*)eastl::vector<
                            float, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<float, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>*)
                                puVar5,
                            2);
                        fVar1 = *pfVar4;
                        pfVar4 = (float*)eastl::vector<
                            float, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<float, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>*)
                                puVar6,
                            2);
                        return fVar1 == *pfVar4;
                    }
                }
            }
        }
        return false;
    }

    // 0x1004ac3c0, 208 bytes, placed by debug map only (low confidence)
    // EnvColourGradingSettings::hash() const
    ulong EnvColourGradingSettings::hash() {
        int* piVar1;
        float* pfVar2;
        undefined1* puVar3;
        ulong local_28;

        local_28 = 0;
        hash_combine<float>(&local_28, &field_0);
        puVar3 = &field_8;
        piVar1 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>*)puVar3, 0);
        hash_combine<int>(&local_28, piVar1);
        piVar1 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>*)puVar3, 1);
        hash_combine<int>(&local_28, piVar1);
        piVar1 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>*)puVar3, 2);
        hash_combine<int>(&local_28, piVar1);
        puVar3 = &m_colourRemapWeightings;
        pfVar2 = (float*)
            eastl::vector<float, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<float, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>*)puVar3, 0);
        hash_combine<float>(&local_28, pfVar2);
        pfVar2 = (float*)
            eastl::vector<float, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<float, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>*)puVar3, 1);
        hash_combine<float>(&local_28, pfVar2);
        pfVar2 = (float*)
            eastl::vector<float, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<float, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>>*)puVar3, 2);
        hash_combine<float>(&local_28, pfVar2);
        return local_28;
    }

    // 0x1004ac490, 48 bytes, placed by debug map only (low confidence)
    // EnvLightProbeSettings::SetDefaults()
    void EnvLightProbeSettings::SetDefaults() {
        m_overbright = 0.25;
        (&field_4, (Vector3T*)PTR_ZERO_100ee66e8)->SetXYZ();
    }

    // 0x1004ac4c0, 80 bytes, placed by debug map only (low confidence)
    // EnvLightProbeSettings::Set(PacketT<Array<unsigned char, eastl::allocator> >&)
    void EnvLightProbeSettings::Set(PacketT* param_1) {
        float fVar1;
        Vector3T<float> local_30[16];

        fVar1 = (float)param_1->gFloat();
        m_overbright = fVar1;
        math::Vector3T<float>::Vector3T(local_30, param_1, false);
        (&field_4, (Vector3T*)local_30)->SetXYZ();
    }

    // 0x1004ac510, 48 bytes, placed by debug map only (low confidence)
    // EnvLightProbeSettings::ApplyOverride(EnvironmentOverride const&)
    void EnvLightProbeSettings::ApplyOverride(EnvironmentOverride* param_1) {
        char* pcVar1;

        pcVar1 = (char*)param_1->GetLightProbeOverrides();
        if (*pcVar1 != '\0') {
            EnvironmentOverrideParam<float>::ApplyTo<float>((EnvironmentOverrideParam<float>*)(pcVar1 + 4),
                                                            &m_overbright);
        }
    }

    // 0x1004ac540, 32 bytes, placed by debug map only (low confidence)
    // EnvLightProbeSettings::operator==(EnvLightProbeSettings const&) const
    /* EnvLightProbeSettings::TEMPNAMEPLACEHOLDERVALUE(EnvLightProbeSettings
   const&) const */

    bool EnvLightProbeSettings::operator==(EnvLightProbeSettings* param_1) {
        if (m_overbright == param_1->m_overbright) {
            return math::operator==((Vector3T*)&field_4, (Vector3T*)&param_1->field_4);
        }
        return false;
    }

    // 0x1004ac560, 128 bytes, placed by debug map only (low confidence)
    // EnvLightProbeSettings::hash() const
    ulong EnvLightProbeSettings::hash() {
        float* pfVar1;
        undefined1* this_00;
        ulong local_20;

        local_20 = 0;
        hash_combine<float>(&local_20, &m_overbright);
        this_00 = &field_4;
        pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_00, 0);
        hash_combine<float>(&local_20, pfVar1);
        pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_00, 1);
        hash_combine<float>(&local_20, pfVar1);
        pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_00, 2);
        hash_combine<float>(&local_20, pfVar1);
        return local_20;
    }

    // 0x1004af6a0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // EnvBloomSettings::EnvBloomSettings(): jumps straight to the base-object constructor

    // 0x1004af6e0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // EnvLightProbeSettings::EnvLightProbeSettings(): jumps straight to the base-object constructor

    // 0x1004b07b0, 16 bytes, base-object constructor, inline, placed by class header (inline)
    // EnvBloomSettings::EnvBloomSettings()
    void EnvBloomSettings::EnvBloomSettings() {
        SetDefaults(this);
    }

    // 0x1004b0c40, 48 bytes, base-object constructor, inline, placed by class header (inline)
    // EnvLightProbeSettings::EnvLightProbeSettings()
    void EnvLightProbeSettings::EnvLightProbeSettings() {
        new (&field_4) math::Vector3T<int>();
        SetDefaults(this);
    }

} // namespace jag::game

namespace jag {
    // 0x1004abc90, 64 bytes, inline, placed by debug map only (low confidence)
    // void hash_combine<postprocess::ToneMapOperator>(unsigned long&, postprocess::ToneMapOperator const&)
    void hash_combine<postprocess::ToneMapOperator>(ulong* param_1, ToneMapOperator* param_2) {
        ulong uVar1;
        long lVar2;
        hash<postprocess::ToneMapOperator> local_18[8];

        lVar2 = std::hash<postprocess::ToneMapOperator>::operator()(local_18, param_2);
        uVar1 = *param_1;
        *param_1 = (uVar1 >> 2) + uVar1 * 64 + lVar2 + 2654435769 ^ uVar1;
    }

} // namespace jag

namespace jag::postprocess {
    // 0x1004abcd0, 192 bytes, inline, placed by debug map only (low confidence)
    // PostProcessParams::hash() const
    undefined8 PostProcessParams::hash() {
        float* pfVar1;
        ulong local_20;

        local_20 = 0;
        pfVar1 = (float*)second();
        hash_combine<float>(&local_20, pfVar1);
        pfVar1 = (float*)(&field_32)->second();
        hash_combine<float>(&local_20, pfVar1);
        pfVar1 = (float*)(&field_64)->second();
        hash_combine<float>(&local_20, pfVar1);
        pfVar1 = (float*)(&field_96)->second();
        hash_combine<float>(&local_20, pfVar1);
        pfVar1 = (float*)(&field_128)->second();
        hash_combine<float>(&local_20, pfVar1);
        pfVar1 = (float*)(&field_160)->second();
        hash_combine<float>(&local_20, pfVar1);
        hash_combine<bool>(&local_20, &field_192);
        return 0;
    }

} // namespace jag::postprocess
