// libs/math/vector/Vector3.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.system.osclient

namespace jag::math {
    // 0x10000bf40
    void ___cxx_global_var_init_154(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10000bf80
    void ___cxx_global_var_init_155(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10000bfc0
    void __GLOBAL__sub_I_unity_0_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_130();
        _objc_autoreleasePoolPop(uVar1);
    }

    // 0x1002c8480
    void Vector3T<float>::Serialise<oldscape::PacketJ<Array<unsigned char>>>(
        oldscape::PacketJ<Array<unsigned char>>& packetJ, bool arg2) const {
        uint32_t in_register_00000011;

        if ((((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            packetJ.pT<float>(*(float*)this);
            packetJ.pT<float>(*(float*)(this + 4));
            packetJ.pT<float>(*(float*)(this + 8));
        } else {
            packetJ.pTPE<float>(*(float*)this);
            packetJ.pTPE<float>(*(float*)(this + 4));
            packetJ.pTPE<float>(*(float*)(this + 8));
        }
    }

    // 0x1002c88f0
    Vector4T<float>* QuaternionT<float>::Set(const QuaternionT<float>& quaternion) {
        *this = quaternion;
        return this;
    }

    // 0x1002c8960
    QuaternionT<float>* QuaternionT<float>::SetToIdentity() {
        Set(this, 0.0, 0.0, 0.0, 1.0);
        return this;
    }

    // 0x1002c8990
    auto Vector3T<float>::SetToZero() {
        auto result;
        result = (ReturnValue)0;
        *(uint32_t*)(&result + 1) = 0;
        return result;
    }

    // 0x1002c8ab0
    QuaternionT<float>* QuaternionT<float>::Conjugate() const {
        float* in_RSI;

        QuaternionT(this, -*in_RSI, -in_RSI[1], -in_RSI[2], in_RSI[3]);
        return this;
    }

    // 0x1002c8af0
    void Vector3T<float>::Negate() {
        *(unsigned int*)this = *(unsigned int*)this ^ 2147483648;
        *(unsigned int*)(this + 4) = *(unsigned int*)(this + 4) ^ 2147483648;
        *(unsigned int*)(this + 8) = *(unsigned int*)(this + 8) ^ 2147483648;
    }

    // 0x1002c8b30
    void Vector3T<float>::Rotate(const QuaternionT<float>& quaternion) {
        QuaternionT<float> local_50;
        float local_40;
        float local_3c;
        float local_38;

        QuaternionT<float> local_90;
        local_90.Set(*(float*)this, *(float*)(this + 4), *(float*)(this + 8), 0.0);
        QuaternionT<float> local_80(quaternion);
        local_40.Conjugate();
        local_40* local_80;
        QuaternionT<float> local_70(local_40);
        QuaternionT<float> local_60(quaternion);
        QuaternionMultiply<float>(&local_50, (QuaternionT<float>*)&local_40, &local_70);
        Set(this, local_40, local_3c, local_38);
    }

    // 0x1002c8dc0
    QuaternionT<float>* QuaternionT<float>::operator*=(const QuaternionT<float>& quaternion) {
        auto pfVar9 = SSOBeginPtr();
        float fVar1 = *pfVar9;
        pfVar9 = (float*)y();
        float fVar2 = *pfVar9;
        pfVar9 = (float*)second();
        float fVar3 = *pfVar9;
        pfVar9 = (float*)qw(this);
        float fVar4 = *pfVar9;
        pfVar9 = (float*)quaternion.SSOBeginPtr();
        float fVar5 = *pfVar9;
        pfVar9 = (float*)quaternion.y();
        float fVar6 = *pfVar9;
        pfVar9 = (float*)quaternion.second();
        float fVar7 = *pfVar9;
        pfVar9 = (float*)qw(quaternion);
        float fVar8 = *pfVar9;
        *(float*)this = (fVar5 * fVar4 - fVar6 * fVar3) + fVar7 * fVar2 + fVar8 * fVar1;
        *(float*)(this + 4) = ((fVar5 * fVar3 + fVar6 * fVar4) - fVar7 * fVar1) + fVar8 * fVar2;
        *(float*)(this + 8) = (fVar6 * fVar1 - fVar5 * fVar2) + fVar8 * fVar3 + fVar7 * fVar4;
        *(float*)(this + 12) = fVar8 * fVar4 - (fVar7 * fVar3 + fVar6 * fVar2 + fVar5 * fVar1);
        return this;
    }

    // 0x1002c8fc0
    Vector3T<float>* Vector3T<float>::operator*=(const QuaternionT<float>& quaternion) {
        auto pfVar2 = quaternion.y();
        float fVar6 = *pfVar2;
        pfVar2 = (float*)second();
        float fVar1 = *pfVar2;
        pfVar2 = (float*)quaternion.second();
        float fVar5 = *pfVar2;
        pfVar2 = (float*)y();
        float fVar3 = fVar6 * fVar1 - fVar5 * *pfVar2;
        pfVar2 = (float*)quaternion.second();
        fVar6 = *pfVar2;
        pfVar2 = (float*)SSOBeginPtr();
        fVar1 = *pfVar2;
        pfVar2 = (float*)quaternion.SSOBeginPtr();
        fVar5 = *pfVar2;
        pfVar2 = (float*)second();
        float fVar4 = fVar6 * fVar1 - fVar5 * *pfVar2;
        pfVar2 = (float*)quaternion.SSOBeginPtr();
        fVar6 = *pfVar2;
        pfVar2 = (float*)y();
        fVar1 = *pfVar2;
        pfVar2 = (float*)quaternion.y();
        fVar5 = *pfVar2;
        pfVar2 = (float*)SSOBeginPtr();
        fVar5 = fVar6 * fVar1 - fVar5 * *pfVar2;
        pfVar2 = (float*)quaternion.qw();
        fVar6 = *pfVar2;
        pfVar2 = (float*)quaternion.y();
        fVar1 = *pfVar2;
        pfVar2 = (float*)quaternion.second();
        fVar6 = (fVar1 * fVar5 + fVar6 * fVar3) - *pfVar2 * fVar4;
        *(float*)this = fVar6 + fVar6 + *(float*)this;
        pfVar2 = (float*)quaternion.qw();
        fVar6 = *pfVar2;
        pfVar2 = (float*)quaternion.second();
        fVar1 = *pfVar2;
        pfVar2 = (float*)quaternion.SSOBeginPtr();
        fVar6 = (fVar1 * fVar3 + fVar6 * fVar4) - *pfVar2 * fVar5;
        *(float*)(this + 4) = fVar6 + fVar6 + *(float*)(this + 4);
        pfVar2 = (float*)quaternion.qw();
        fVar6 = *pfVar2;
        pfVar2 = (float*)quaternion.SSOBeginPtr();
        fVar1 = *pfVar2;
        pfVar2 = (float*)quaternion.y();
        fVar6 = (fVar4 * fVar1 + fVar5 * fVar6) - fVar3 * *pfVar2;
        *(float*)(this + 8) = fVar6 + fVar6 + *(float*)(this + 8);
        return this;
    }

    // 0x1002c9350
    Vector4T<float>* QuaternionT<float>::operator*=(float arg1) {
        *(float*)this = *(float*)this * arg1;
        *(float*)(this + 4) = *(float*)(this + 4) * arg1;
        *(float*)(this + 8) = *(float*)(this + 8) * arg1;
        *(float*)(this + 12) = arg1 * *(float*)(this + 12);
        return this;
    }

    // 0x1002c94d0
    QuaternionT<float>* QuaternionT<float>::Interpolate(const QuaternionT<float>& quaternion, float arg2) const {
        QuaternionT<float>* in_RDX;
        QuaternionT<float> local_38;

        QuaternionT(this, quaternion);
        if ((float)Vector4Dot<float>((math*)quaternion, in_RDX) < 0.0) {
            Negate(&local_38);
        }
        *this *= (1.0 - arg2);
        QuaternionT(&local_38);
        SetToIdentity(&local_38);
        local_38 *= arg2;
        operator+=(this, &local_38);
        Normalise((ReturnValue*)this);
        return this;
    }

    // 0x1002c9570
    void Vector3T<float>::Interpolate(const Vector3T<float>& vector3, float arg2) {
        operator*=(this, 1.0 - arg2);
        uint64_t local_28 = *arg2 vector3;
        float local_20 = arg2;
        operator+=(this, (Vector3T<float>*)&local_28);
    }

} // namespace jag::math

namespace jag {
    // 0x1002c87b0
    shared_ptr_if_not_array<math::QuaternionT<float>>::type
    make_shared<math::QuaternionT<float>, oldscape::PacketJ<Array<unsigned char>>&>(
        oldscape::PacketJ<Array<unsigned char>>& packetJ) {
        ref_counter_shared_trivial<math::QuaternionT<float> _>* ref_counter_shared_trivial;
        int local_34;
        QuaternionT<float>* local_30[2];

        auto arg1 = aligned_alloc(32, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<math::QuaternionT<float>>::type result;
        } else {
            local_30[0] = placement_new<math::QuaternionT<float>, oldscape::PacketJ<Array<unsigned char>>&>(
                (void*)((long)arg1 + 16), packetJ);
            local_34 = 1;
            ref_counter_shared_trivial =
                placement_new<ref_counter_shared_trivial<math::QuaternionT<float>>, int, math::QuaternionT<float>*&>(
                    arg1, &local_34, local_30);
            ref_counter_shared_trivial->~AutoSingleton();
            ref_counter_shared_trivial->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared_trivial, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x1002c8850
    shared_ptr_if_not_array<math::Vector3T<float>>::type
    make_shared<math::Vector3T<float>, oldscape::PacketJ<Array<unsigned char>>&>(
        oldscape::PacketJ<Array<unsigned char>>& packetJ) {
        ref_counter_shared_trivial<math::Vector3T<float> _>* ref_counter_shared_trivial;
        int local_34;
        Vector3T<float>* local_30[2];

        auto arg1 = aligned_alloc(32, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<math::Vector3T<float>>::type result;
        } else {
            local_30[0] = placement_new<math::Vector3T<float>, oldscape::PacketJ<Array<unsigned char>>&>(
                (void*)((long)arg1 + 16), packetJ);
            local_34 = 1;
            ref_counter_shared_trivial =
                placement_new<ref_counter_shared_trivial<math::Vector3T<float>>, int, math::Vector3T<float>*&>(
                    arg1, &local_34, local_30);
            ref_counter_shared_trivial->~AutoSingleton();
            ref_counter_shared_trivial->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared_trivial, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x1002c8c40
    shared_ptr_if_not_array<oldscape::math::RotTrans>::type
    make_shared<oldscape::math::RotTrans, oldscape::math::RotTrans const&>(const oldscape::math::RotTrans& rotTrans) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        RotTrans* local_30[2];

        auto arg1 = aligned_alloc(80, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::math::RotTrans>::type result;
        } else {
            local_30[0] = placement_new<oldscape::math::RotTrans, oldscape::math::RotTrans const&>(
                (void*)((long)arg1 + 32), rotTrans);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::math::RotTrans>, int, oldscape::math::RotTrans*&>(
                    arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag
