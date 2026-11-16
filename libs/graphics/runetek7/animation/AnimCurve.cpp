// libs/graphics/runetek7/animation/AnimCurve.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "AnimCurve.h"

namespace jag::graphics {
    // 0x100009d00: AnimCurve::GetKeyList() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second()

    // 0x1006892b0: AnimCurve::GetPostInfinity() const has the same machine code as ui::ComponentDragConfig::GetRenderBehaviour() const

    // 0x100873200: AnimCurve::IsWeighted() const has the same machine code as Material::HasNormalMap() const

    // 0x100979e60
    void AnimCurve::GetNumKeys() const {
        field_24.end();
    }

    // 0x100981940
    unsigned long AnimCurve::LoadFromPacket(PacketT<Array<unsigned char>>& arg1) {
        unsigned long arg1_00;

        unsigned short uVar4 = arg1.g2();
        uint8_t uVar1 = arg1.g1();
        field_12 = uVar1;
        uVar1 = arg1.g1();
        m_preInfinity = uVar1;
        m_postInfinity = arg1.g1();
        m_weighted = arg1.g1() != '\0';
        unsigned long arg1_01 = (unsigned long)uVar4;
        field_24.set_max_size(arg1_01, 0);
        if (uVar4 != 0) {
            arg1_00 = 0;
            do {
                ((AnimKey*)field_24[arg1_00])->LoadFromPacket(arg1);
                arg1_00 = arg1_00 + 1;
            } while (arg1_01 != arg1_00);
        }
        AnimCurveSegmentCacheData local_60;
        short sVar5 = GetStart();
        unsigned int uVar6 = AnimCurveSampler::SampleCurve(this, (float)(int)sVar5 - 1.0, local_60);
        field_4 = uVar6;
        sVar5 = GetEnd();
        uVar6 = AnimCurveSampler::SampleCurve(this, (float)(int)sVar5 + 1.0, local_60);
        field_8 = uVar6;
        return arg1_01;
    }

    // 0x100981ff0
    int AnimCurve::GetStart() const {
        short sVar2;
        short* psVar3;

        if (field_24.empty() == '\0') {
            psVar3 = &field_24[0];
            sVar2 = *psVar3;
        } else {
            sVar2 = 0;
        }
        return (int)sVar2;
    }

    // 0x100982030
    int AnimCurve::GetEnd() const {
        short sVar2;
        long lVar3;
        short* psVar4;

        uint8_t* this_00 = &field_24;
        if (this_00->empty() == '\0') {
            lVar3 = this_00->end();
            psVar4 = (short*)(*this_00)[lVar3 - 1];
            sVar2 = *psVar4;
        } else {
            sVar2 = 0;
        }
        return (int)sVar2;
    }

    // 0x1009820f0
    int AnimCurve::GetDuration() const {
        short sVar1 = GetEnd();
        short sVar2 = GetStart();
        return (int)sVar1 - (int)sVar2;
    }

    // 0x100982120
    int AnimCurve::GetKeyIndexAtTime(float arg1, const AnimCurveSegmentCacheData& animCurveSegmentCacheData) const {
        short* psVar1;
        unsigned long uVar2;
        __1* in_RCX;
        uint8_t* puVar6;
        unsigned long arg1_00;
        int local_2c[2];

        if (-1 < (long)(int)animCurveSegmentCacheData.field_0) {
            puVar6 = &field_24;
            psVar1 = (short*)(*puVar6)[(long)(int)animCurveSegmentCacheData.field_0];
            if ((float)(int)*psVar1 <= arg1) {
                uVar2 = puVar6->end();
                arg1_00 = (long)(int)animCurveSegmentCacheData.field_0 + 1;
                if ((uVar2 == arg1_00) || (psVar1 = (short*)(*puVar6)[arg1_00], arg1 < (float)(int)*psVar1)) {
                    return animCurveSegmentCacheData.field_0;
                }
            }
        }
        AnimKey local_48;
        local_48.field_0 = (uint16_t)(int)arg1;
        puVar6 = &field_24;
        auto pAVar3 = puVar6->data();
        AnimKey* pAVar4 = (AnimKey*)puVar6->end();
        pAVar3 = std::upper_bound<AnimKey const*, AnimKey,
                                  float->GetKeyIndexAtTime(AnimCurveSegmentCacheData const&) const ::__1>(
            pAVar3, pAVar4, &local_48, in_RCX);
        pAVar4 = (AnimKey*)puVar6->data();
        local_2c[0] = std::distance<AnimKey const*>(pAVar4, pAVar3);
        local_2c[0] = local_2c[0] - 1;
        local_2c[1] = 0;
        auto piVar5 = std::max<int>(*local_2c, *(local_2c + 1));
        return *piVar5;
    }

    // 0x100982240
    short* AnimCurve::GetKeyFromIndex(int arg1) const {
        int iVar1;

        if (-1 < arg1) {
            iVar1 = field_24.end();
            if (arg1 < iVar1) {
                return (short*)field_24[(long)arg1];
            }
        }
        return nullptr;
    }

    // 0x100982280
    uint64_t AnimCurve::GetKeyAtTime(float arg1, AnimCurveSegmentCacheData& animCurveSegmentCacheData) const {
        uint64_t uVar2;

        int iVar1 = GetKeyIndexAtTime(arg1, animCurveSegmentCacheData);
        if (iVar1 < 0) {
            uVar2 = 0;
        } else {
            uVar2 = field_24[(long)iVar1];
        }
        return uVar2;
    }

    // 0x1009822b0
    uint64_t AnimCurve::GetNextKey(float arg1, AnimCurveSegmentCacheData& animCurveSegmentCacheData) const {
        uint64_t uVar3;

        int iVar1 = GetKeyIndexAtTime(arg1, animCurveSegmentCacheData);
        int iVar2 = field_24.end();
        if (iVar1 < iVar2 - 1) {
            uVar3 = field_24[(long)(iVar1 + 1)];
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x10099d240
    uint16_t AnimCurve::GetKeyIndexAtTime(float, AnimCurveSegmentCacheData const&) const ::$_1::operator()(
        const AnimKey& animKey1, const AnimKey& animKey2) const {
        return *(short*)this < (short)animKey1.field_0;
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x10097a0d0
    Matrix33T<float> Matrix33RotationSinCos<float>(const Vector3T<float>& vector31, const Vector3T<float>& vector32) {
        float* in_RDX;

        float fVar1 = *(float*)(vector32 + 8);
        float fVar2 = *(float*)vector32;
        float fVar3 = *(float*)(vector32 + 4);
        float fVar4 = in_RDX[2];
        float fVar5 = *in_RDX;
        float fVar6 = in_RDX[1];
        new (vector31) Matrix33T<float>(fVar6 * fVar4 + fVar2 * fVar1 * fVar3, fVar5 * fVar1,
                                        fVar2 * fVar1 * fVar6 - fVar4 * fVar3, fVar4 * fVar2 * fVar3 - fVar6 * fVar1,
                                        fVar5 * fVar4, fVar1 * fVar3 + fVar4 * fVar2 * fVar6, fVar3 * fVar5, -fVar2,
                                        fVar5 * fVar6);
        return vector31;
    }

    // 0x10097a2b0
    QuaternionT<float> QuaternionSLerpShortest<float>(const QuaternionT<float>& quaternion1,
                                                      QuaternionT<float> quaternion2, float arg3) {
        unsigned int* puVar1;
        QuaternionT<float>* in_RDX;
        float fVar2;
        float local_58[4];
        float local_48[4];

        float local_30 = QuaternionDot<float>(quaternion2, in_RDX);
        local_58[0] = -1.0;
        local_48[0] = 1.0;
        Clamp<float>(&local_30, local_58, local_48);
        if (0.0 <= local_30) {
            if (1.0 < local_30)
                goto LAB_10097a39c;
        } else {
            local_30 = -local_30;
            puVar1 = (unsigned int*)in_RDX->SSOBeginPtr();
            *(unsigned int*)in_RDX = *puVar1 ^ 2147483648;
            puVar1 = (unsigned int*)in_RDX->y();
            *(unsigned int*)(in_RDX + 4) = *puVar1 ^ 2147483648;
            puVar1 = (unsigned int*)in_RDX->second();
            *(unsigned int*)(in_RDX + 8) = *puVar1 ^ 2147483648;
            puVar1 = (unsigned int*)in_RDX->qw();
            *(unsigned int*)(in_RDX + 12) = *puVar1 ^ 2147483648;
        }
        float local_38 = (float)acos(local_30);
        float local_34 = (float)::sin(local_38);
        if (1e-05 <= local_34) {
            local_34 = 1.0 / local_34;
            fVar2 = (float)::sin((1.0 - arg3) * local_38);
            local_58*(fVar2 * local_34);
            fVar2 = (float)::sin(local_38 * arg3);
            local_48*(fVar2 * local_34);
            quaternion1 + *local_58;
            return quaternion1;
        }
    LAB_10097a39c:
        Lerp<QuaternionT<float>, float>(quaternion1, quaternion2, arg3);
        return quaternion1;
    }

} // namespace jag::math
