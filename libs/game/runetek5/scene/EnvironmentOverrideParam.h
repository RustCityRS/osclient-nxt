// libs/game/runetek5/scene/EnvironmentOverrideParam.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    template <typename...> // 5 instantiations, e.g. <bool>, <float>, <ColourGradingEnvironmentOverrides::ColourRemap>
    class EnvironmentOverrideParam {
    public:
        void Set(unsigned int arg1);
        void Set(float arg1);
        void Set(math::Vector3T<float> vector3);
        void Set(ColourGradingEnvironmentOverrides::ColourRemap colourRemap);
        void Set(bool arg1);
        EnvironmentOverrideParam();
        EnvironmentOverrideParam<math::Vector3T<float>>*
        operator=(EnvironmentOverrideParam<math::Vector3T<float>>&& environmentOverrideParam);
        unsigned int& ApplyTo<unsigned int>(unsigned int& arg1) const;
        float& ApplyTo<float>(float& arg1) const;
        math::Vector3T<float>& ApplyTo<math::Vector3T<float>>(math::Vector3T<float>& vector3) const;
        bool& ApplyTo<bool>(bool& arg1) const;
        math::Transitionable<float>&
        ApplyTo<math::Transitionable<float>>(math::Transitionable<float>& transitionable) const;
    };

    // 0x100491360
    void EnvironmentOverrideParam<unsigned int>::Set(unsigned int arg1) {
        *(unsigned int*)this = arg1;
        this[4] = (EnvironmentOverrideParam<int>)1;
    }

    // 0x100491370
    void EnvironmentOverrideParam<float>::Set(float arg1) {
        *(float*)this = arg1;
        this[4] = (EnvironmentOverrideParam<float>)1;
    }

    // 0x100491390
    void EnvironmentOverrideParam<math::Vector3T<float>>::Set(math::Vector3T<float> vector3) {
        Vector3T<float> local_20;

        vector3->SetXYZ(local_20);
        vector3[12] = (Vector3T<float>)1;
    }

    // 0x100491440
    void EnvironmentOverrideParam<ColourGradingEnvironmentOverrides::ColourRemap>::Set(
        ColourGradingEnvironmentOverrides::ColourRemap colourRemap) {
        uint32_t in_register_00000034;

        *(unsigned long*)this = (((uint64_t)in_register_00000034 << 32) | (uint32_t)colourRemap);
        this[8] = (EnvironmentOverrideParam<ColourGradingEnvironmentOverrides::ColourRemap>)1;
    }

    // 0x100491450
    void EnvironmentOverrideParam<bool>::Set(bool arg1) {
        *this = (EnvironmentOverrideParam<bool>)arg1;
        this[1] = (EnvironmentOverrideParam<bool>)1;
    }

    // 0x1004926e0
    LightingEnvironmentOverrides::LightingEnvironmentOverrides() : field_0(0) {
        new ((EnvironmentOverrideParam<float>*)((long)&field_1 + 3)) EnvironmentOverrideParam();
        new ((EnvironmentOverrideParam<float>*)((long)&field_8 + 4)) EnvironmentOverrideParam();
        new ((EnvironmentOverrideParam<float>*)((long)&field_16 + 4)) EnvironmentOverrideParam();
        new ((EnvironmentOverrideParam<float>*)((long)&field_24 + 4)) EnvironmentOverrideParam();
        new (&field_36) EnvironmentOverrideParam<math::Vector3T<float>>();
        new (&field_52) EnvironmentOverrideParam();
        new (&field_60) EnvironmentOverrideParam();
        new (&field_68) EnvironmentOverrideParam();
    }

    // 0x100492760
    EnvironmentOverrideParam<unsigned int>::EnvironmentOverrideParam() {
        this[4] = (EnvironmentOverrideParam<float>)0;
    }

    // 0x100492770
    EnvironmentOverrideParam<math::Vector3T<float>>::EnvironmentOverrideParam() : math::Vector3T() {
        this[12] = (EnvironmentOverrideParam<math::Vector3T<float>>)0;
    }

    // 0x100492790
    FogEnvironmentOverrides::FogEnvironmentOverrides() : field_0(0) {}

    // 0x1004927e0
    BloomEnvironmentOverrides::BloomEnvironmentOverrides() : field_0(0) {}

    // 0x100492820
    MapEnvironmentOverrides::MapEnvironmentOverrides() : field_0(0) {}

    // 0x100492850
    ColourGradingEnvironmentOverrides::ColourGradingEnvironmentOverrides() : field_0(0) {}

    // 0x1004928b0
    ToneMapEnvironmentOverrides::ToneMapEnvironmentOverrides() : field_0(0) {}

    // 0x100492920
    EnvironmentOverrideParam<bool>::EnvironmentOverrideParam() {
        this[1] = (optional_storage<unsigned char, true>)0;
    }

    // 0x100492930
    ScatteringEnvironmentOverrides::ScatteringEnvironmentOverrides() : field_0(0) {
        new ((EnvironmentOverrideParam<float>*)((long)&field_1 + 3)) EnvironmentOverrideParam();
        new ((EnvironmentOverrideParam<float>*)((long)&field_8 + 4)) EnvironmentOverrideParam();
        new ((EnvironmentOverrideParam<float>*)((long)&field_16 + 4)) EnvironmentOverrideParam();
        new ((EnvironmentOverrideParam<float>*)((long)&field_24 + 4)) EnvironmentOverrideParam();
        new (&field_36) EnvironmentOverrideParam<math::Vector3T<float>>();
        new (&field_52) EnvironmentOverrideParam<math::Vector3T<float>>();
        new (&field_68) EnvironmentOverrideParam<math::Vector3T<float>>();
    }

    // 0x100492990
    VolumetricEnvironmentOverrides::VolumetricEnvironmentOverrides() : field_0(0) {
        new ((EnvironmentOverrideParam<float>*)((long)&field_1 + 3)) EnvironmentOverrideParam();
        new ((EnvironmentOverrideParam<float>*)((long)&field_8 + 4)) EnvironmentOverrideParam();
        new ((EnvironmentOverrideParam<float>*)((long)&field_16 + 4)) EnvironmentOverrideParam();
        new ((EnvironmentOverrideParam<float>*)((long)&field_24 + 4)) EnvironmentOverrideParam();
        new ((EnvironmentOverrideParam<float>*)((long)&field_32 + 4)) EnvironmentOverrideParam();
        new ((EnvironmentOverrideParam<float>*)((long)&field_40 + 4)) EnvironmentOverrideParam();
        new ((EnvironmentOverrideParam<float>*)((long)&field_48 + 4)) EnvironmentOverrideParam();
        new ((EnvironmentOverrideParam<float>*)((long)&field_56 + 4)) EnvironmentOverrideParam();
        new (&field_68) EnvironmentOverrideParam<math::Vector3T<float>>();
        new (&field_84) EnvironmentOverrideParam<math::Vector3T<float>>();
    }

    // 0x100492a00
    LightProbeEnvironmentOverrides::LightProbeEnvironmentOverrides() : field_0(0) {}

    // 0x100492a20
    EnvironmentOverrideParam<math::Vector3T<float>>* EnvironmentOverrideParam<math::Vector3T<float>>::operator=(
        EnvironmentOverrideParam<math::Vector3T<float>>&& environmentOverrideParam) {
        SetXYZ(environmentOverrideParam);
        *(EnvironmentOverrideParam<math::Vector3T<float> _>*)(this + 12) = environmentOverrideParam[12];
        return this;
    }

    // 0x1004aaed0
    unsigned int& EnvironmentOverrideParam<unsigned int>::ApplyTo<unsigned int>(unsigned int& arg1) const {
        if (this[4] != (EnvironmentOverrideParam<unsigned int>)0) {
            arg1 = *(unsigned int*)this;
        }
        return arg1;
    }

    // 0x1004aaef0
    float& EnvironmentOverrideParam<float>::ApplyTo<float>(float& arg1) const {
        if (this[4] != (EnvironmentOverrideParam<float>)0) {
            arg1 = *(float*)this;
        }
        return arg1;
    }

    // 0x1004aaf10
    math::Vector3T<float>& EnvironmentOverrideParam<math::Vector3T<float>>::ApplyTo<math::Vector3T<float>>(
        math::Vector3T<float>& vector3) const {
        uint32_t local_18;

        if (this[12] != (EnvironmentOverrideParam<math::Vector3T<float>>)0) {
            local_18 = *(uint32_t*)(this + 8);
            vector3.SetXYZ(*(uint64_t*)this);
        }
        return vector3;
    }

    // 0x1004ab510
    bool& EnvironmentOverrideParam<bool>::ApplyTo<bool>(bool& arg1) const {
        if (this[1] != (EnvironmentOverrideParam<bool>)0) {
            arg1 = (bool)*this;
        }
        return arg1;
    }

    // 0x1004abaa0
    math::Transitionable<float>& EnvironmentOverrideParam<float>::ApplyTo<math::Transitionable<float>>(
        math::Transitionable<float>& transitionable) const {
        uint64_t local_30;
        uint32_t uStack_28;
        uint32_t uStack_24;
        uint32_t uStack_20;
        uint64_t uStack_1c;

        if (this[4] != (EnvironmentOverrideParam<float>)0) {
            new (&local_30) math::Transitionable<float>(*this);
            *(unsigned long*)(transitionable + 12) = (((uint64_t)uStack_20 << 32) | (uint32_t)uStack_24);
            *(uint64_t*)(transitionable + 20) = uStack_1c;
            *(uint64_t*)transitionable = local_30;
            *(unsigned long*)(transitionable + 8) = (((uint64_t)uStack_24 << 32) | (uint32_t)uStack_28);
        }
        return transitionable;
    }

} // namespace jag::game

namespace jag {
    // 0x100491380
    void PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gFloat() {
        gT<float>(this);
    }

    // 0x1004913d0
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Skip(unsigned long arg1) {
        long lVar1 = *(long*)(this + 24);
        if (end() < lVar1 + arg1) {
            LogAssert("m_pos + _size <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.h", 170,
                      "Packet: Invalid pos");
        }
        *(unsigned long*)(this + 24) = *(long*)(this + 24) + arg1;
    }

    // 0x100494090
    float PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gT<float>() {
        uint64_t uVar3;
        uint64_t uVar6;

        long lVar4 = data();
        long lVar2 = *(long*)(this + 24);
        unsigned long uVar1 = lVar2 + 4;
        *(unsigned long*)(this + 24) = uVar1;
        if (end() < uVar1) {
            uVar3 = *(uint64_t*)(this + 24);
            uVar6 = end();
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                13, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        return local_2c = *(float*)(lVar4 + lVar2);
        ReorderToBE<float>(&local_2c);
        return local_2c;
    }

    // 0x100494190
    float PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gTPE<float>() {
        uint64_t uVar3;
        uint64_t uVar6;

        long lVar4 = data();
        long lVar2 = *(long*)(this + 24);
        unsigned long uVar1 = lVar2 + 4;
        *(unsigned long*)(this + 24) = uVar1;
        if (end() < uVar1) {
            uVar3 = *(uint64_t*)(this + 24);
            uVar6 = end();
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                53, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        return *(float*)(lVar4 + lVar2);
    }

} // namespace jag

// 0x100492a50
void sqrt(float arg1) {
    unsigned int in_XMM0_Db;
    uint32_t in_XMM0_Dc;
    uint32_t in_XMM0_Dd;
    uint8_t in_XMM1[16];
    uint8_t auVar1[16];

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = arg1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    float fVar2 = arg1 * auVar1._0_4_;
    return (((uint64_t)(~(in_XMM0_Db & 2147483647) & in_XMM0_Db) << 32) |
            (uint32_t)(~-(unsigned int)(ABS(arg1) < 1.1754944e-38) &
                       (unsigned int)((fVar2 * auVar1._0_4_ - 3.0) * fVar2 * -0.5)));
}

// 0x100494080
unsigned long abs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}

namespace jag::math {
    // 0x100494120
    Vector3T<float>::Vector3T(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1, bool arg2) {
        uint32_t in_register_00000011;
        float fVar1;

        if ((((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            fVar1 = arg1.gT<float>();
            *(float*)this = fVar1;
            fVar1 = arg1.gT<float>();
            *(float*)(this + 4) = fVar1;
            fVar1 = arg1.gT<float>();
        } else {
            fVar1 = arg1.gTPE<float>();
            *(float*)this = fVar1;
            fVar1 = arg1.gTPE<float>();
            *(float*)(this + 4) = fVar1;
            fVar1 = arg1.gTPE<float>();
        }
        *(float*)(this + 8) = fVar1;
    }

} // namespace jag::math
