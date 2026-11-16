// libs/oldscape/jagex3/math/RotTrans.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "RotTrans.h"
#include "libs/oldscape/jagex3/dash3d/Operation.h"

namespace jag::oldscape::math {
    // 0x1002c7920
    RotTrans::RotTrans(PacketJ<Array<unsigned char>>& packetJ, bool arg2) : shared_ptr() {
        new (&field_16) shared_ptr();
        new (&field_32) shared_ptr();
        Deserialise(packetJ, arg2);
    }

    // 0x1002c79a0
    void RotTrans::Deserialise(PacketJ<Array<unsigned char>>& packetJ, bool arg2) {
        uint32_t in_register_00000011;
        ReturnValue local_30;

        if ((((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            make_shared<jag::math::QuaternionT<float>, PacketJ<Array<unsigned char>>&>(&local_30, packetJ);
            *this = local_30;
            make_shared<jag::math::Vector3T<float>, PacketJ<Array<unsigned char>>&>(&local_30, packetJ);
            field_32 = local_30;
            make_shared<jag::math::Vector3T<float>, PacketJ<Array<unsigned char>>&>(&local_30, packetJ);
            field_16 = local_30;
        } else {
            DeserialiseLightweight(packetJ);
        }
    }

    // 0x1002c7a80
    RotTrans::RotTrans() : shared_ptr() {
        ReturnValue local_38;

        new (&field_16) shared_ptr();
        new (&field_32) shared_ptr();
        make_shared<jag::math::QuaternionT<float>>(&local_38);
        *this = local_38;
        make_shared<jag::math::Vector3T<float>>(&local_38);
        field_32 = local_38;
        float local_44 = 1.0;
        float local_40 = 1.0;
        float local_3c = 1.0;
        make_shared<jag::math::Vector3T<float>, float&, float&, float&>(&local_38, &local_44, &local_40, &local_3c);
        field_16 = local_38;
    }

    // 0x1002c7df0
    RotTrans::RotTrans(const RotTrans& rotTrans) : shared_ptr() {
        RotTrans local_58;

        new (&field_16) shared_ptr();
        new (&field_32) shared_ptr();
        RotTrans(&local_58);
        Set(rotTrans);
    }

    // 0x1002c7e90
    void RotTrans::Set(const RotTrans& rotTrans) {
        ((Vector4T<float>*)(*this).operator->())->Set(*(QuaternionT<float>*)rotTrans);
        auto pVVar1 = field_32.operator->();
        Vector3T<float>* pVVar2 = (Vector3T<float>*)rotTrans.field_32;
        pVVar1->Set(*pVVar2);
        pVVar1 = (Vector3T<float>*)field_16.operator->();
        pVVar2 = (Vector3T<float>*)rotTrans.field_16;
        pVVar1->Set(*pVVar2);
    }

    // 0x1002c7f20
    int RotTrans::GetLightweightPacketSize() {
        int result;
        ReturnValue result;
        int iVar3;
        int iVar4;

        &result = (ReturnValue*)(*this).operator->();
        result = jag::math::QuaternionT<float>::Normalise();
        unsigned int uVar1 = GetLightweightMask();
        int iVar2 = ((uVar1 & 8) >> 2) + ((uVar1 & 4) >> 1) + (uVar1 & 2) + (uVar1 & 1) * 8;
        if ((uVar1 & 16) == 0) {
            iVar3 = iVar2 + 3;
            if ((uVar1 & 32) == 0) {
                iVar3 = iVar2 + 1;
            }
            iVar4 = iVar3 + 2;
            if ((uVar1 & 64) == 0) {
                iVar4 = iVar3;
            }
            iVar2 = iVar4 + 2;
            if (-1 < (char)uVar1) {
                iVar2 = iVar4;
            }
        } else {
            iVar2 = iVar2 + 3;
        }
        return iVar2;
    }

    // 0x1002c7ff0
    unsigned int RotTrans::GetLightweightMask() {
        QuaternionT<float>* this_00 = (QuaternionT<float>*)**this;
        uint8_t bVar1 = *this_00 != *PTR_IDENTITY_100ee6678;
        uint8_t* puVar11 = &field_32;
        Layout* pLVar4 = (Layout*)(*puVar11).operator->();
        auto pfVar5 = pLVar4->SSOBeginPtr();
        unsigned int uVar9 = bVar1 + 2;
        if (*pfVar5 == 0.0) {
            uVar9 = (unsigned int)bVar1;
        }
        Vector2T<int>* pVVar6 = (Vector2T<int>*)(*puVar11).operator->();
        pfVar5 = (float*)pVVar6->y();
        unsigned int uVar10 = uVar9 + 4;
        if (*pfVar5 == 0.0) {
            uVar10 = uVar9;
        }
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* pcVar7 =
            (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*puVar11).operator->();
        pfVar5 = (float*)pcVar7->second();
        uVar9 = uVar10 + 8;
        if (*pfVar5 == 0.0) {
            uVar9 = uVar10;
        }
        puVar11 = &field_16;
        Vector3T<float>* pVVar8 = (Vector3T<float>*)**puVar11;
        if (*pVVar8 != *PTR_ONE_100ee66d8) {
            pVVar8 = (Vector3T<float>*)(*puVar11).operator->();
            if (pVVar8->IsUniform() == '\0') {
                pLVar4 = (Layout*)(*puVar11).operator->();
                pfVar5 = (float*)pLVar4->SSOBeginPtr();
                uVar10 = uVar9;
                if (*pfVar5 != 0.0) {
                    uVar10 = uVar9 + 32;
                }
                pVVar6 = (Vector2T<int>*)(*puVar11).operator->();
                pfVar5 = (float*)pVVar6->y();
                uVar9 = uVar10 + 64;
                if (*pfVar5 == 0.0) {
                    uVar9 = uVar10;
                }
                pcVar7 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*puVar11)
                             .operator->();
                pfVar5 = (float*)pcVar7->second();
                if (*pfVar5 != 0.0) {
                    uVar9 = uVar9 + 128;
                }
            } else {
                uVar9 = uVar9 + 16;
            }
        }
        return uVar9;
    }

    // 0x1002c8120
    void RotTrans::Serialise(PacketJ<Array<unsigned char>>& packetJ, bool arg2) {
        Vector3T<float>* pVVar1;
        uint64_t in_register_00000011;

        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            ((QuaternionT<float>*)(*this).operator->())->Serialise<PacketJ<Array<unsigned char>>>(packetJ, false);
            pVVar1 = (Vector3T<float>*)field_32.operator->();
            pVVar1->Serialise<PacketJ<Array<unsigned char>>>(packetJ, false);
            pVVar1 = (Vector3T<float>*)field_16.operator->();
            pVVar1->Serialise<PacketJ<Array<unsigned char>>>(packetJ, false);
        } else {
            SerialiseLightweight(packetJ);
        }
    }

    // 0x1002c8190
    void RotTrans::SerialiseLightweight(PacketJ<Array<unsigned char>>& packetJ) {
        void result;
        ReturnValue result;
        long lVar1;
        Layout* pLVar2;
        Vector2T<int>* pVVar3;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* pcVar4;
        float* pfVar5;

        &result = (ReturnValue*)(*this).operator->();
        result = jag::math::QuaternionT<float>::Normalise();
        auto id = GetLightweightMask();
        packetJ.p1<unsigned long>(id);
        if ((id & 1) != 0) {
            pfVar5 = (float*)(*this).operator->();
            packetJ.p2<unsigned long>((unsigned short)(int)(*pfVar5 * 32768.0));
            lVar1 = (*this).operator->();
            packetJ.p2<unsigned long>((unsigned short)(int)(*(float*)(lVar1 + 4) * 32768.0));
            lVar1 = (*this).operator->();
            packetJ.p2<unsigned long>((unsigned short)(int)(*(float*)(lVar1 + 8) * 32768.0));
            lVar1 = (*this).operator->();
            packetJ.p2<unsigned long>((unsigned short)(int)(*(float*)(lVar1 + 12) * 32768.0));
        }
        if ((id & 2) != 0) {
            pLVar2 = (Layout*)field_32.operator->();
            pfVar5 = (float*)pLVar2->SSOBeginPtr();
            packetJ.p2<unsigned long>((unsigned short)(int)*pfVar5);
        }
        if ((id & 4) != 0) {
            pVVar3 = (Vector2T<int>*)field_32.operator->();
            pfVar5 = (float*)pVVar3->y();
            packetJ.p2<unsigned long>((unsigned short)(int)*pfVar5);
        }
        if ((id & 8) != 0) {
            pcVar4 =
                (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)field_32.operator->();
            pfVar5 = (float*)pcVar4->second();
            packetJ.p2<unsigned long>((unsigned short)(int)*pfVar5);
        }
        if ((id & 16) == 0) {
            if ((id & 32) != 0) {
                pLVar2 = (Layout*)field_16.operator->();
                pfVar5 = (float*)pLVar2->SSOBeginPtr();
                packetJ.p2<unsigned long>((unsigned short)(int)(*pfVar5 * 128.0));
            }
            if ((id & 64) != 0) {
                pVVar3 = (Vector2T<int>*)field_16.operator->();
                pfVar5 = (float*)pVVar3->y();
                packetJ.p2<unsigned long>((unsigned short)(int)(*pfVar5 * 128.0));
            }
            if (-1 < (char)id) {
                return;
            }
            pcVar4 =
                (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)field_16.operator->();
            pfVar5 = (float*)pcVar4->second();
        } else {
            pLVar2 = (Layout*)field_16.operator->();
            pfVar5 = (float*)pLVar2->SSOBeginPtr();
        }
        packetJ.p2<unsigned long>((unsigned short)(int)(*pfVar5 * 128.0));
    }

    // 0x1002c84e0
    void RotTrans::DeserialiseLightweight(PacketJ<Array<unsigned char>>& packetJ) {
        short sVar2;
        ReturnValue local_60;

        uint8_t bVar1 = packetJ.g1();
        float local_50 = 0.0;
        float local_4c = 0.0;
        float local_48 = 0.0;
        float local_44 = 1.0;
        if ((bVar1 & 1) != 0) {
            sVar2 = packetJ.g2s();
            local_50 = (float)(int)sVar2 * 3.0517578e-05;
            sVar2 = packetJ.g2s();
            local_4c = (float)(int)sVar2 * 3.0517578e-05;
            sVar2 = packetJ.g2s();
            local_48 = (float)(int)sVar2 * 3.0517578e-05;
            sVar2 = packetJ.g2s();
            local_44 = (float)(int)sVar2 * 3.0517578e-05;
        }
        make_shared<jag::math::QuaternionT<float>, float&, float&, float&, float&>(&local_60, &local_50, &local_4c,
                                                                                   &local_48, &local_44);
        *this = local_60;
        float local_40 = 0.0;
        float local_3c = 0.0;
        float local_38 = 0.0;
        if ((bVar1 & 2) != 0) {
            sVar2 = packetJ.g2s();
            local_40 = (float)(int)sVar2;
        }
        if ((bVar1 & 4) != 0) {
            sVar2 = packetJ.g2s();
            local_3c = (float)(int)sVar2;
        }
        if ((bVar1 & 8) != 0) {
            sVar2 = packetJ.g2s();
            local_38 = (float)(int)sVar2;
        }
        make_shared<jag::math::Vector3T<float>, float&, float&, float&>(&local_60, &local_40, &local_3c, &local_38);
        field_32 = local_60;
        float local_34 = 1.0;
        float local_30 = 1.0;
        float local_2c = 1.0;
        if ((bVar1 & 16) == 0) {
            if ((bVar1 & 32) != 0) {
                sVar2 = packetJ.g2s();
                local_34 = (float)(int)sVar2 * 0.0078125f;
            }
            if ((bVar1 & 64) != 0) {
                sVar2 = packetJ.g2s();
                local_30 = (float)(int)sVar2 * 0.0078125f;
            }
            if ((char)bVar1 < '\0') {
                sVar2 = packetJ.g2s();
                local_2c = (float)(int)sVar2 * 0.0078125f;
            }
        } else {
            sVar2 = packetJ.g2s();
            local_34 = (float)(int)sVar2 * 0.0078125f;
            local_30 = local_34;
            local_2c = local_34;
        }
        make_shared<jag::math::Vector3T<float>, float&, float&, float&>(&local_60, &local_34, &local_30, &local_2c);
        field_16 = local_60;
    }

    // 0x1002c8910
    void RotTrans::Idenity() {
        void result;
        ReturnValue result;

        ((QuaternionT<float>*)(*this).operator->())->SetToIdentity();
        &result = (ReturnValue*)field_32.operator->();
        result = jag::math::Vector3T<float>::SetToZero();
        ((Vector3T<float>*)field_16.operator->())->Set(1.0, 1.0, 1.0);
    }

    // 0x1002c89b0
    void RotTrans::Inverse() {
        QuaternionT<float> local_30;

        (*this).operator->();
        local_30.Conjugate();
        auto pVVar1 = field_32.operator->();
        pVVar1->Negate();
        pVVar1 = (Vector3T<float>*)field_32.operator->();
        QuaternionT<float>* quaternion = (QuaternionT<float>*)**this;
        pVVar1->Rotate(*quaternion);
        uint8_t* this_03 = &field_16;
        Layout* this_00 = (Layout*)(*this_03).operator->();
        auto pfVar2 = this_00->SSOBeginPtr();
        float local_20 = 1.0;
        float local_1c = 1.0 / *pfVar2;
        pfVar2 = (float*)(*this_03).operator->();
        *pfVar2 = local_1c;
        Vector2T<int>* this_01 = (Vector2T<int>*)(*this_03).operator->();
        pfVar2 = (float*)this_01->y();
        local_1c = 1.0 / *pfVar2;
        long lVar3 = (*this_03).operator->();
        *(float*)(lVar3 + 4) = local_1c;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_02 =
            (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_03).operator->();
        pfVar2 = (float*)this_02->second();
        local_20 = local_20 / *pfVar2;
        lVar3 = (*this_03).operator->();
        *(float*)(lVar3 + 8) = local_20;
    }

    // 0x1002c8c00
    auto RotTrans::Inverse(const RotTrans& rotTrans) {
        auto result;
        make_shared<RotTrans, RotTrans const&>(&result, rotTrans);
        Inverse((RotTrans*)(result).operator->());
        return result;
    }

    // 0x1002c8d20
    void RotTrans::Multiply(const RotTrans& rotTrans) {
        QuaternionT<float>* pQVar1 = (QuaternionT<float>*)rotTrans;
        QuaternionT<float>* this_00 = (QuaternionT<float>*)**this;
        *this_00 *= pQVar1;
        auto pVVar2 = field_32.operator->();
        pQVar1 = (QuaternionT<float>*)rotTrans;
        pVVar2->Rotate(*pQVar1);
        pVVar2 = (Vector3T<float>*)rotTrans.field_32;
        Vector3T<float>* pVVar3 = (Vector3T<float>*)*field_32;
        *pVVar3 += *pVVar2;
        pVVar2 = (Vector3T<float>*)rotTrans.field_16;
        pVVar3 = (Vector3T<float>*)*field_16;
        *pVVar3 *= pVVar2;
    }

    // 0x1002c8f40
    auto RotTrans::Multiply(const RotTrans& rotTrans1, const RotTrans& rotTrans2) {
        auto result;
        make_shared<RotTrans, RotTrans const&>(&result, rotTrans1);
        Multiply((RotTrans*)(result).operator->(), rotTrans2);
        return result;
    }

    // 0x1002c8f80
    void RotTrans::Prerotate(jag::math::QuaternionT<float>& quaternion) {
        QuaternionT<float>* this_00 = (QuaternionT<float>*)**this;
        *this_00 *= quaternion;
        Vector3T<float>* this_01 = (Vector3T<float>*)*field_16;
        *this_01 *= quaternion;
    }

    // 0x1002c9200
    void RotTrans::Rotate(jag::math::QuaternionT<float>& quaternion) {
        QuaternionT<float>* this_00 = (QuaternionT<float>*)**this;
        *this_00 *= quaternion;
        auto pVVar1 = field_32.operator->();
        pVVar1->Rotate(quaternion);
        pVVar1 = (Vector3T<float>*)field_16.operator->();
        pVVar1->Rotate(quaternion);
    }

    // 0x1002c9250
    void RotTrans::Translate(jag::math::Vector3T<float> vector3) {
        Vector3T<float> local_18;

        auto vector3T = *(*((vector3 + 32)));
        *vector3T += local_18;
    }

    // 0x1002c9280
    void RotTrans::Translate(float arg1, float arg2, float arg3) {
        uint8_t* this_00 = &field_32;
        float* pfVar1 = (float*)(*this_00).operator->();
        *pfVar1 = arg1 + *pfVar1;
        long lVar2 = (*this_00).operator->();
        *(float*)(lVar2 + 4) = arg2 + *(float*)(lVar2 + 4);
        lVar2 = (*this_00).operator->();
        *(float*)(lVar2 + 8) = arg3 + *(float*)(lVar2 + 8);
    }

    // 0x1002c92f0
    void RotTrans::Multiply(float arg1) {
        Vector4T<float>* this_00 = (Vector4T<float>*)**this;
        *this_00 *= arg1;
        Vector3T<float>* pVVar1 = (Vector3T<float>*)*field_32;
        *pVVar1 *= arg1;
        pVVar1 = (Vector3T<float>*)*field_16;
        *pVVar1 *= arg1;
    }

    // 0x1002c9390
    void RotTrans::Add(const RotTrans& rotTrans) {
        QuaternionT<float>* this_00 = (QuaternionT<float>*)**this;
        *this_00 += *(Vector4T<float>*)rotTrans;
        Vector3T<float>* pVVar1 = (Vector3T<float>*)rotTrans.field_32;
        Vector3T<float>* pVVar2 = (Vector3T<float>*)*field_32;
        *pVVar2 += *pVVar1;
        pVVar1 = (Vector3T<float>*)rotTrans.field_16;
        pVVar2 = (Vector3T<float>*)*field_16;
        *pVVar2 += *pVVar1;
    }

    // 0x1002c9410
    void RotTrans::Normalize() {
        void result;
        ReturnValue result;

        &result = (ReturnValue*)(*this).operator->();
        result = jag::math::QuaternionT<float>::Normalise();
    }

    // 0x1002c9430
    void RotTrans::Interpolate(RotTrans& rotTrans, float arg2) {
        QuaternionT<float> local_38;

        QuaternionT<float>* quaternion = (QuaternionT<float>*)(*this).operator->();
        rotTrans;
        local_38.Interpolate(*quaternion, arg2);
        auto pVVar1 = field_32.operator->();
        Vector3T<float>* pVVar2 = (Vector3T<float>*)rotTrans.field_32;
        pVVar1->Interpolate(*pVVar2, arg2);
        pVVar1 = (Vector3T<float>*)field_16.operator->();
        pVVar2 = (Vector3T<float>*)rotTrans.field_16;
        pVVar1->Interpolate(*pVVar2, arg2);
    }

    // 0x1002c95d0
    auto RotTrans::ToString() {

        eastl::string local_30;
        auto result;
        return result;
    }

    // 0x1002c9620
    uint64_t RotTrans::ToAffineTransform3() {
        ReturnValue local_28;

        make_shared<AffineTransform3>(&local_28);
        ((AffineTransform3*)local_28.operator->())->Set(*this);
        uint64_t uVar1 = *local_28;
        return uVar1;
    }

    // 0x1002c9690
    bool RotTrans::IsIdentity() const {
        bool bVar2;
        Vector3T<float>* pVVar3;

        QuaternionT<float>* this_00 = (QuaternionT<float>*)**this;
        if (*this_00 == *PTR_IDENTITY_100ee6678 != '\0') {
            pVVar3 = (Vector3T<float>*)*field_32;
            bVar2 = *pVVar3 == *PTR_ZERO_100ee66e8;
            if (bVar2) {
                pVVar3 = (Vector3T<float>*)*field_16;
                bVar2 = *pVVar3 == *PTR_ONE_100ee66d8;
                return bVar2;
            }
        }
        return false;
    }

} // namespace jag::oldscape::math

namespace jag {
    // 0x1002c7b90
    shared_ptr_if_not_array<math::QuaternionT<float>>::type make_shared<math::QuaternionT<float>>() {
        ref_counter_shared_trivial<math::QuaternionT<float> _>* ref_counter_shared_trivial;
        int local_2c;
        QuaternionT<float>* local_28[2];

        auto arg1 = aligned_alloc(32, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<math::QuaternionT<float>>::type result;
        } else {
            local_28[0] = placement_new<math::QuaternionT<float>>((void*)((long)arg1 + 16));
            local_2c = 1;
            ref_counter_shared_trivial =
                placement_new<ref_counter_shared_trivial<math::QuaternionT<float>>, int, math::QuaternionT<float>*&>(
                    arg1, &local_2c, local_28);
            ref_counter_shared_trivial->~AutoSingleton();
            ref_counter_shared_trivial->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared_trivial, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x1002c7c60
    shared_ptr_if_not_array<math::Vector3T<float>>::type make_shared<math::Vector3T<float>>() {
        ref_counter_shared_trivial<math::Vector3T<float> _>* ref_counter_shared_trivial;
        int local_2c;
        Vector3T<float>* local_28[2];

        auto arg1 = aligned_alloc(32, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<math::Vector3T<float>>::type result;
        } else {
            local_28[0] = placement_new<math::Vector3T<float>>((void*)((long)arg1 + 16));
            local_2c = 1;
            ref_counter_shared_trivial =
                placement_new<ref_counter_shared_trivial<math::Vector3T<float>>, int, math::Vector3T<float>*&>(
                    arg1, &local_2c, local_28);
            ref_counter_shared_trivial->~AutoSingleton();
            ref_counter_shared_trivial->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared_trivial, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x1002c7d30
    shared_ptr_if_not_array<math::Vector3T<float>>::type
    make_shared<math::Vector3T<float>, float, float, float>(float&& arg1, float&& arg2, float&& arg3) {
        ref_counter_shared_trivial<math::Vector3T<float> _>* ref_counter_shared_trivial;
        int local_44;
        Vector3T<float>* local_40[2];

        auto arg1_00 = aligned_alloc(32, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<math::Vector3T<float>>::type result;
        } else {
            local_40[0] = placement_new<math::Vector3T<float>, float&, float&, float&>((void*)((long)arg1_00 + 16),
                                                                                       arg1, arg2, arg3);
            local_44 = 1;
            ref_counter_shared_trivial =
                placement_new<ref_counter_shared_trivial<math::Vector3T<float>>, int, math::Vector3T<float>*&>(
                    arg1_00, &local_44, local_40);
            ref_counter_shared_trivial->~AutoSingleton();
            ref_counter_shared_trivial->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared_trivial, (unsigned long)local_40[0]);
        }
        return result;
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    // 0x1002c7e80: ResolvedModel::~ResolvedModel() has the same machine code as math::RotTrans::~RotTrans()

} // namespace jag::oldscape::dash3d
