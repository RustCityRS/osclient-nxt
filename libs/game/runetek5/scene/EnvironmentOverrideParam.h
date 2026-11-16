// libs/game/runetek5/scene/EnvironmentOverrideParam.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    template <typename...> // 5 instantiations, e.g. <bool>, <float>, <ColourGradingEnvironmentOverrides::ColourRemap>
    class EnvironmentOverrideParam {
    public:
        void Set(unsigned int);
        void Set(float);
        void Set(math::Vector3T<float>);
        void Set(ColourGradingEnvironmentOverrides::ColourRemap);
        void Set(bool);
        EnvironmentOverrideParam();
        EnvironmentOverrideParam<math::Vector3T<float>>* operator=(EnvironmentOverrideParam<math::Vector3T<float>>&&);
        unsigned int& ApplyTo<unsigned int>(unsigned int&) const;
        float& ApplyTo<float>(float&) const;
        math::Vector3T<float>& ApplyTo<math::Vector3T<float>>(math::Vector3T<float>&) const;
        bool& ApplyTo<bool>(bool&) const;
        math::Transitionable<float>& ApplyTo<math::Transitionable<float>>(math::Transitionable<float>&) const;
    };

    // 0x100491360, 16 bytes, inline, placed by class name and debug map
    // EnvironmentOverrideParam<unsigned int>::Set(unsigned int)
    /* EnvironmentOverrideParam<int>::Set(int) */

    void EnvironmentOverrideParam<int>::Set(int param_1) {
        *(int*)this = param_1;
        this[4] = (EnvironmentOverrideParam<int>)1;
    }

    // 0x100491370, 16 bytes, inline, placed by class name and debug map
    // EnvironmentOverrideParam<float>::Set(float)
    void EnvironmentOverrideParam<float>::Set(float param_1) {
        *(float*)this = param_1;
        this[4] = (EnvironmentOverrideParam<float>)1;
    }

    // 0x100491390, 48 bytes, inline, placed by class name and debug map
    // EnvironmentOverrideParam<math::Vector3T<float> >::Set(math::Vector3T<float>)
    void EnvironmentOverrideParam<math::Vector3T<float>>::Set(undefined8 param_1, undefined4 param_2,
                                                              Vector4T<float>* param_3) {
        undefined8 local_20;
        undefined4 local_18;

        local_20 = param_1;
        local_18 = param_2;
        math::Vector4T<float>::SetXYZ(param_3, (Vector3T*)&local_20);
        param_3[12] = (Vector4T<float>)1;
    }

    // 0x100491440, 16 bytes, inline, placed by class name and debug map
    // EnvironmentOverrideParam<ColourGradingEnvironmentOverrides::ColourRemap>::Set(ColourGradingEnvironmentOverrides::ColourRemap)
    void EnvironmentOverrideParam<ColourGradingEnvironmentOverrides::ColourRemap>::Set(undefined8 param_2) {
        *(undefined8*)this = param_2;
        this[8] = (EnvironmentOverrideParam<ColourGradingEnvironmentOverrides::ColourRemap>)1;
    }

    // 0x100491450, 16 bytes, inline, placed by class name and debug map
    // EnvironmentOverrideParam<bool>::Set(bool)
    void EnvironmentOverrideParam<bool>::Set(bool param_1) {
        *this = (EnvironmentOverrideParam<bool>)param_1;
        this[1] = (EnvironmentOverrideParam<bool>)1;
    }

    // 0x1004926e0, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // LightingEnvironmentOverrides::LightingEnvironmentOverrides()
    void LightingEnvironmentOverrides::LightingEnvironmentOverrides() {
        field_0 = 0;
        new (((long)&field_1 + 3)) EnvironmentOverrideParam<float>();
        new (((long)&field_8 + 4)) EnvironmentOverrideParam<float>();
        new (((long)&field_16 + 4)) EnvironmentOverrideParam<float>();
        new (((long)&field_24 + 4)) EnvironmentOverrideParam<float>();
        new (&field_36) EnvironmentOverrideParam<math::Vector3T<float>>();
        new (&field_52) EnvironmentOverrideParam<float>();
        new (&field_60) EnvironmentOverrideParam<float>();
        new (&field_68) EnvironmentOverrideParam<float>();
    }

    // 0x100492740, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // EnvironmentOverrideParam<unsigned int>::EnvironmentOverrideParam(): jumps straight to the base-object constructor

    // 0x100492750, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // EnvironmentOverrideParam<math::Vector3T<float> >::EnvironmentOverrideParam(): jumps straight to the base-object constructor

    // 0x100492760, 16 bytes, base-object constructor, inline, placed by class name and debug map
    // EnvironmentOverrideParam<unsigned int>::EnvironmentOverrideParam()
    /* EnvironmentOverrideParam<float>::EnvironmentOverrideParam() */

    void EnvironmentOverrideParam<float>::EnvironmentOverrideParam() {
        this[4] = (EnvironmentOverrideParam<float>)0;
    }

    // 0x100492770, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // EnvironmentOverrideParam<math::Vector3T<float> >::EnvironmentOverrideParam()
    void EnvironmentOverrideParam<math::Vector3T<float>>::EnvironmentOverrideParam() {
        new (this) math::Vector3T<int>();
        this[12] = (EnvironmentOverrideParam<math::Vector3T<float>>)0;
    }

    // 0x100492790, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // FogEnvironmentOverrides::FogEnvironmentOverrides()
    void FogEnvironmentOverrides::FogEnvironmentOverrides() {
        field_0 = 0;
        new (&field_4) EnvironmentOverrideParam<float>();
        new (&field_12) EnvironmentOverrideParam<float>();
        new (&field_20) EnvironmentOverrideParam<float>();
        new (&field_28) EnvironmentOverrideParam<float>();
        new (&field_36) EnvironmentOverrideParam<float>();
        new (&field_44) EnvironmentOverrideParam<float>();
    }

    // 0x1004927e0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BloomEnvironmentOverrides::BloomEnvironmentOverrides()
    void BloomEnvironmentOverrides::BloomEnvironmentOverrides() {
        field_0 = 0;
        new (&field_4) EnvironmentOverrideParam<float>();
        new (&field_12) EnvironmentOverrideParam<float>();
        new (&field_20) EnvironmentOverrideParam<float>();
    }

    // 0x100492820, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MapEnvironmentOverrides::MapEnvironmentOverrides()
    void MapEnvironmentOverrides::MapEnvironmentOverrides() {
        field_0 = 0;
        new (&field_4) EnvironmentOverrideParam<float>();
        new (&field_12) EnvironmentOverrideParam<float>();
    }

    // 0x100492850, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ColourGradingEnvironmentOverrides::ColourGradingEnvironmentOverrides()
    void ColourGradingEnvironmentOverrides::ColourGradingEnvironmentOverrides() {
        field_0 = 0;
        new (&field_4) std::array<EnvironmentOverrideParam<ColourGradingEnvironmentOverrides::ColourRemap>, 3ul>();
    }

    // 0x1004928b0, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ToneMapEnvironmentOverrides::ToneMapEnvironmentOverrides()
    void ToneMapEnvironmentOverrides::ToneMapEnvironmentOverrides() {
        field_0 = 0;
        new (&field_1) eastl::optional<unsigned char>();
        new (&field_4) EnvironmentOverrideParam<float>();
        new (&field_12) EnvironmentOverrideParam<float>();
        new (&field_20) EnvironmentOverrideParam<float>();
        new (&field_28) EnvironmentOverrideParam<float>();
        new (&field_36) EnvironmentOverrideParam<float>();
        new (&field_44) EnvironmentOverrideParam<float>();
    }

    // 0x100492910, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // EnvironmentOverrideParam<bool>::EnvironmentOverrideParam(): jumps straight to the base-object constructor

    // 0x100492920, 16 bytes, base-object constructor, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // EnvironmentOverrideParam<bool>::EnvironmentOverrideParam()
    /* eastl::Internal::optional_storage<unsigned char, true>::optional_storage() */

    void eastl::Internal::optional_storage<unsigned char, true>::optional_storage(
        optional_storage<unsigned char, true>* this) {
        this[1] = (optional_storage<unsigned char, true>)0;
    }

    // 0x100492930, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ScatteringEnvironmentOverrides::ScatteringEnvironmentOverrides()
    void ScatteringEnvironmentOverrides::ScatteringEnvironmentOverrides() {
        field_0 = 0;
        new (&field_1) eastl::optional<unsigned char>();
        new (((long)&field_1 + 3)) EnvironmentOverrideParam<float>();
        new (((long)&field_8 + 4)) EnvironmentOverrideParam<float>();
        new (((long)&field_16 + 4)) EnvironmentOverrideParam<float>();
        new (((long)&field_24 + 4)) EnvironmentOverrideParam<float>();
        new (&field_36) EnvironmentOverrideParam<math::Vector3T<float>>();
        new (&field_52) EnvironmentOverrideParam<math::Vector3T<float>>();
        new (&field_68) EnvironmentOverrideParam<math::Vector3T<float>>();
    }

    // 0x100492990, 112 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // VolumetricEnvironmentOverrides::VolumetricEnvironmentOverrides()
    void VolumetricEnvironmentOverrides::VolumetricEnvironmentOverrides() {
        field_0 = 0;
        new (((long)&field_1 + 3)) EnvironmentOverrideParam<float>();
        new (((long)&field_8 + 4)) EnvironmentOverrideParam<float>();
        new (((long)&field_16 + 4)) EnvironmentOverrideParam<float>();
        new (((long)&field_24 + 4)) EnvironmentOverrideParam<float>();
        new (((long)&field_32 + 4)) EnvironmentOverrideParam<float>();
        new (((long)&field_40 + 4)) EnvironmentOverrideParam<float>();
        new (((long)&field_48 + 4)) EnvironmentOverrideParam<float>();
        new (((long)&field_56 + 4)) EnvironmentOverrideParam<float>();
        new (&field_68) EnvironmentOverrideParam<math::Vector3T<float>>();
        new (&field_84) EnvironmentOverrideParam<math::Vector3T<float>>();
    }

    // 0x100492a00, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // LightProbeEnvironmentOverrides::LightProbeEnvironmentOverrides()
    void LightProbeEnvironmentOverrides::LightProbeEnvironmentOverrides() {
        field_0 = 0;
        new (&field_4) EnvironmentOverrideParam<float>();
    }

    // 0x100492a20, 48 bytes, inline, placed by class name and debug map
    // EnvironmentOverrideParam<math::Vector3T<float> >::operator=(EnvironmentOverrideParam<math::Vector3T<float> >&&)
    /* EnvironmentOverrideParam<math::Vector3T<float>
   >::TEMPNAMEPLACEHOLDERVALUE(EnvironmentOverrideParam<math::Vector3T<float> >&&)
    */

    EnvironmentOverrideParam<math::Vector3T<float>>*
    EnvironmentOverrideParam<math::Vector3T<float>>::operator=(EnvironmentOverrideParam* param_1) {
        SetXYZ(param_1);
        *(EnvironmentOverrideParam*)(this + 12) = param_1[12];
        return this;
    }

    // 0x1004aaed0, 32 bytes, inline, placed by class name
    // unsigned int& EnvironmentOverrideParam<unsigned int>::ApplyTo<unsigned int>(unsigned int&) const
    /* postprocess::ToneMapOperator& EnvironmentOverrideParam<unsigned
   int>::ApplyTo<postprocess::ToneMapOperator>(postprocess::ToneMapOperator&) const */

    ToneMapOperator*
    EnvironmentOverrideParam<unsigned int>::ApplyTo<postprocess::ToneMapOperator>(ToneMapOperator* param_1) {
        if (this[4] != (EnvironmentOverrideParam<unsigned int>)0) {
            *(undefined4*)param_1 = *(undefined4*)this;
        }
        return param_1;
    }

    // 0x1004aaef0, 32 bytes, inline, placed by class name
    // float& EnvironmentOverrideParam<float>::ApplyTo<float>(float&) const
    float* EnvironmentOverrideParam<float>::ApplyTo<float>(float* param_1) {
        if (this[4] != (EnvironmentOverrideParam<float>)0) {
            *param_1 = *(float*)this;
        }
        return param_1;
    }

    // 0x1004aaf10, 64 bytes, inline, placed by class name
    // math::Vector3T<float>& EnvironmentOverrideParam<math::Vector3T<float> >::ApplyTo<math::Vector3T<float> >(math::Vector3T<float>&) const
    Vector3T* EnvironmentOverrideParam<math::Vector3T<float>>::ApplyTo<math::Vector3T<float>>(Vector3T* param_1) {
        undefined8 local_20;
        undefined4 local_18;

        if (this[12] != (EnvironmentOverrideParam<math::Vector3T<float>>)0) {
            local_18 = *(undefined4*)(this + 8);
            local_20 = *(undefined8*)this;
            param_1->SetXYZ((Vector3T*)&local_20);
        }
        return param_1;
    }

    // 0x1004ab510, 32 bytes, inline, placed by class name
    // bool& EnvironmentOverrideParam<bool>::ApplyTo<bool>(bool&) const
    bool* EnvironmentOverrideParam<bool>::ApplyTo<bool>(bool* param_1) {
        if (this[1] != (EnvironmentOverrideParam<bool>)0) {
            *param_1 = (bool)*this;
        }
        return param_1;
    }

    // 0x1004abaa0, 64 bytes, inline, placed by class name
    // math::Transitionable<float>& EnvironmentOverrideParam<float>::ApplyTo<math::Transitionable<float> >(math::Transitionable<float>&) const
    Transitionable* EnvironmentOverrideParam<float>::ApplyTo<math::Transitionable<float>>(Transitionable* param_1) {
        undefined8 local_30;
        undefined4 uStack_28;
        undefined4 uStack_24;
        undefined4 uStack_20;
        undefined8 uStack_1c;

        if (this[4] != (EnvironmentOverrideParam<float>)0) {
            new (&local_30) math::Transitionable<float>(this);
            *(ulong*)(param_1 + 12) = CONCAT44(uStack_20, uStack_24);
            *(undefined8*)(param_1 + 20) = uStack_1c;
            *(undefined8*)param_1 = local_30;
            *(ulong*)(param_1 + 8) = CONCAT44(uStack_24, uStack_28);
        }
        return param_1;
    }

} // namespace jag::game

namespace jag {
    // 0x100491380, 16 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::gFloat()
    void PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gFloat(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this) {
        gT<float>(this);
    }

    // 0x1004913d0, 96 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::Skip(unsigned long)
    void
    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Skip(PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this,
                                                              ulong param_1) {
        long lVar1;
        ulong uVar2;

        lVar1 = *(long*)(this + 24);
        uVar2 = end();
        if (uVar2 < lVar1 + param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + _size <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.h", 170,
                      "Packet: Invalid pos");
        }
        *(ulong*)(this + 24) = *(long*)(this + 24) + param_1;
    }

    // 0x100494090, 144 bytes, inline, placed by debug map only (low confidence)
    // float PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::gT<float>()
    float PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gT<float>(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this) {
        ulong uVar1;
        long lVar2;
        undefined8 uVar3;
        long lVar4;
        ulong uVar5;
        undefined8 uVar6;
        float local_2c;

        lVar4 = data();
        lVar2 = *(long*)(this + 24);
        uVar1 = lVar2 + 4;
        *(ulong*)(this + 24) = uVar1;
        uVar5 = end();
        if (uVar5 < uVar1) {
            uVar3 = *(undefined8*)(this + 24);
            uVar6 = end();
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                13, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        local_2c = *(float*)(lVar4 + lVar2);
        ReorderToBE<float>(&local_2c);
        return local_2c;
    }

    // 0x100494190, 128 bytes, inline, placed by debug map only (low confidence)
    // float PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::gTPE<float>()
    float PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gTPE<float>(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this) {
        ulong uVar1;
        long lVar2;
        undefined8 uVar3;
        long lVar4;
        ulong uVar5;
        undefined8 uVar6;

        lVar4 = data();
        lVar2 = *(long*)(this + 24);
        uVar1 = lVar2 + 4;
        *(ulong*)(this + 24) = uVar1;
        uVar5 = end();
        if (uVar5 < uVar1) {
            uVar3 = *(undefined8*)(this + 24);
            uVar6 = end();
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                53, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        return *(float*)(lVar4 + lVar2);
    }

} // namespace jag

namespace jag::math {
    // 0x1004913c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Vector3T<float>::Vector3T(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&, bool): jumps straight to the base-object constructor

    // 0x100494120, 112 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Vector3T<float>::Vector3T(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&, bool)
    void Vector3T<float>::Vector3T(PacketT* param_1, bool param_2) {
        undefined3 in_register_00000011;
        float fVar1;

        if (CONCAT31(in_register_00000011, param_2) == 0) {
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gT<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)param_1);
            *(float*)this = fVar1;
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gT<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)param_1);
            *(float*)(this + 4) = fVar1;
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gT<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)param_1);
        } else {
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gTPE<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)param_1);
            *(float*)this = fVar1;
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gTPE<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)param_1);
            *(float*)(this + 4) = fVar1;
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gTPE<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)param_1);
        }
        *(float*)(this + 8) = fVar1;
    }

} // namespace jag::math

// 0x100492a50, 64 bytes, placed by debug map only (low confidence)
// sqrt(float)
undefined8 sqrt(float param_1) {
    uint in_XMM0_Db;
    undefined4 in_XMM0_Dc;
    undefined4 in_XMM0_Dd;
    undefined1 in_XMM1[16];
    undefined1 auVar1[16];
    float fVar2;

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = param_1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    fVar2 = param_1 * auVar1._0_4_;
    return CONCAT44(~(in_XMM0_Db & 2147483647) & in_XMM0_Db,
                    ~-(uint)(ABS(param_1) < 1.1754944e-38) & (uint)((fVar2 * auVar1._0_4_ + -3.0) * fVar2 * -0.5));
}

// 0x100494080, 16 bytes, placed by debug map only (low confidence)
// abs(float)
ulong abs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}
