// libs/graphics/runetek7/animation/AnimCurve.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "AnimCurve.h"

namespace jag::graphics {
    // 0x100009d00: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second(), which has identical code
    AnimCurve::GetKeyList() const;

    // 0x1006892b0: the linker folded this into ui::ComponentDragConfig::GetRenderBehaviour() const, which has identical code
    byte AnimCurve::GetPostInfinity() const;

    // 0x100873200: the linker folded this into Material::HasNormalMap() const, which has identical code
    bool AnimCurve::IsWeighted() const;

    // 0x100979e60, 16 bytes, placed by class name and debug map
    // AnimCurve::GetNumKeys() const
    void AnimCurve::GetNumKeys() {
        (&field_24)->end();
    }

    // 0x100981940, 272 bytes, placed by class name
    // AnimCurve::LoadFromPacket(PacketT<Array<unsigned char, eastl::allocator> >&)
    ulong AnimCurve::LoadFromPacket(PacketT* param_1) {
        undefined1 uVar1;
        byte bVar2;
        char cVar3;
        ushort uVar4;
        short sVar5;
        AnimKey* this_00;
        ulong uVar6;
        ulong uVar7;
        uint uVar8;
        AnimCurveSegmentCacheData local_60;

        uVar4 = param_1->g2();
        uVar1 = param_1->g1();
        field_12 = uVar1;
        uVar1 = param_1->g1();
        m_preInfinity = uVar1;
        bVar2 = param_1->g1();
        m_postInfinity = bVar2;
        cVar3 = param_1->g1();
        m_weighted = cVar3 != '\0';
        uVar7 = (ulong)uVar4;
        (&field_24, uVar7, 0)->set_max_size();
        if (uVar4 != 0) {
            uVar6 = 0;
            do {
                this_00 = (AnimKey*)Array<AnimKey, eastl::allocator>::operator[](
                    (Array<AnimKey, eastl::allocator>*)&field_24, uVar6);
                this_00->LoadFromPacket(param_1);
                uVar6 = uVar6 + 1;
            } while (uVar7 != uVar6);
        }
        new (&local_60) AnimCurveSegmentCacheData();
        sVar5 = GetStart(this);
        uVar8 = AnimCurveSampler::SampleCurve(this, (float)(int)sVar5 + -1.0, &local_60);
        field_4 = uVar8;
        sVar5 = GetEnd(this);
        uVar8 = AnimCurveSampler::SampleCurve(this, (float)(int)sVar5 + 1.0, &local_60);
        field_8 = uVar8;
        return uVar7;
    }

    // 0x100981ff0, 64 bytes, placed by class name
    // AnimCurve::GetStart() const
    int AnimCurve::GetStart() {
        char cVar1;
        short sVar2;
        short* psVar3;

        cVar1 = (&field_24)->empty();
        if (cVar1 == '\0') {
            psVar3 =
                (short*)Array<AnimKey, eastl::allocator>::operator[]((Array<AnimKey, eastl::allocator>*)&field_24, 0);
            sVar2 = *psVar3;
        } else {
            sVar2 = 0;
        }
        return (int)sVar2;
    }

    // 0x100982030, 64 bytes, placed by class name
    // AnimCurve::GetEnd() const
    int AnimCurve::GetEnd() {
        char cVar1;
        short sVar2;
        long lVar3;
        short* psVar4;
        undefined1* this_00;

        this_00 = &field_24;
        cVar1 = this_00->empty();
        if (cVar1 == '\0') {
            lVar3 = this_00->end();
            psVar4 = (short*)Array<AnimKey, eastl::allocator>::operator[]((Array<AnimKey, eastl::allocator>*)this_00,
                                                                          lVar3 - 1);
            sVar2 = *psVar4;
        } else {
            sVar2 = 0;
        }
        return (int)sVar2;
    }

    // 0x1009820f0, 48 bytes, placed by class name
    // AnimCurve::GetDuration() const
    int AnimCurve::GetDuration() {
        short sVar1;
        short sVar2;

        sVar1 = GetEnd(this);
        sVar2 = GetStart(this);
        return (int)sVar1 - (int)sVar2;
    }

    // 0x100982120, 240 bytes, placed by class name
    // AnimCurve::GetKeyIndexAtTime(float, AnimCurveSegmentCacheData const&) const
    int AnimCurve::GetKeyIndexAtTime(float param_1, AnimCurveSegmentCacheData* param_2) {
        short* psVar1;
        ulong uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        AnimKey* pAVar5;
        AnimKey* pAVar6;
        int* piVar7;
        undefined1* puVar8;
        ulong uVar9;
        AnimKey local_48;
        int local_2c[2];

        if (-1 < (long)(int)param_2->field_0) {
            puVar8 = &field_24;
            psVar1 = (short*)Array<AnimKey, eastl::allocator>::operator[]((Array<AnimKey, eastl::allocator>*)puVar8,
                                                                          (long)(int)param_2->field_0);
            if ((float)(int)*psVar1 <= param_1) {
                uVar2 = puVar8->end();
                uVar9 = (long)(int)param_2->field_0 + 1;
                if ((uVar2 == uVar9) || (psVar1 = (short*)Array<AnimKey, eastl::allocator>::operator[](
                                             (Array<AnimKey, eastl::allocator>*)puVar8, uVar9),
                                         param_1 < (float)(int)*psVar1)) {
                    return param_2->field_0;
                }
            }
        }
        new (&local_48) AnimKey();
        local_48.field_0 = (undefined2)(int)param_1;
        puVar8 = &field_24;
        uVar3 = puVar8->data();
        uVar4 = puVar8->end();
        pAVar5 = std::upper_bound<AnimKey_const*, AnimKey,
                                  float->GetKeyIndexAtTime(AnimCurveSegmentCacheData_const&) const ::__1>(uVar3, uVar4,
                                                                                                          &local_48);
        pAVar6 = (AnimKey*)puVar8->data();
        local_2c[0] = std::distance<AnimKey_const*>(pAVar6, pAVar5);
        local_2c[0] = local_2c[0] + -1;
        local_2c[1] = 0;
        piVar7 = std::max<int>(local_2c, local_2c + 1);
        return *piVar7;
    }

    // 0x100982240, 64 bytes, placed by class name
    // AnimCurve::GetKeyFromIndex(int) const
    undefined8 AnimCurve::GetKeyFromIndex(int param_1) {
        int iVar1;
        undefined8 uVar2;

        if (-1 < param_1) {
            iVar1 = (&field_24)->end();
            if (param_1 < iVar1) {
                uVar2 = Array<AnimKey, eastl::allocator>::operator[]((Array<AnimKey, eastl::allocator>*)&field_24,
                                                                     (long)param_1);
                return uVar2;
            }
        }
        return 0;
    }

    // 0x100982280, 48 bytes, placed by class name
    // AnimCurve::GetKeyAtTime(float, AnimCurveSegmentCacheData&) const
    undefined8 AnimCurve::GetKeyAtTime(float param_1, AnimCurveSegmentCacheData* param_2) {
        int iVar1;
        undefined8 uVar2;

        iVar1 = GetKeyIndexAtTime(this, param_1, param_2);
        if (iVar1 < 0) {
            uVar2 = 0;
        } else {
            uVar2 =
                Array<AnimKey, eastl::allocator>::operator[]((Array<AnimKey, eastl::allocator>*)&field_24, (long)iVar1);
        }
        return uVar2;
    }

    // 0x1009822b0, 64 bytes, placed by class name
    // AnimCurve::GetNextKey(float, AnimCurveSegmentCacheData&) const
    undefined8 AnimCurve::GetNextKey(float param_1, AnimCurveSegmentCacheData* param_2) {
        int iVar1;
        int iVar2;
        undefined8 uVar3;

        iVar1 = GetKeyIndexAtTime(this, param_1, param_2);
        iVar2 = (&field_24)->end();
        if (iVar1 < iVar2 + -1) {
            uVar3 = Array<AnimKey, eastl::allocator>::operator[]((Array<AnimKey, eastl::allocator>*)&field_24,
                                                                 (long)(iVar1 + 1));
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x10099d240, 16 bytes, placed by class name
    // AnimCurve::GetKeyIndexAtTime(float, AnimCurveSegmentCacheData const&) const::$_1::operator()(AnimKey const&, AnimKey const&) const
    /* AnimCurve::GetKeyIndexAtTime(float, AnimCurveSegmentCacheData
   const&) const::$_1::TEMPNAMEPLACEHOLDERVALUE(AnimKey const&,
   AnimKey const&) const */

    _func_GetKeyIndexAtTime_float_AnimCurveSegmentCacheData_const_ptr* const ::$_1::operator()(AnimKey * param_1,
                                                                                               AnimKey * param_2) {
        return (_func_GetKeyIndexAtTime_float_AnimCurveSegmentCacheData_const_ptr*)(ulong)CONCAT11(
            (char)((ushort)param_1->field_0 >> 8), (short)param_1->field_0 < (short)param_2->field_0);
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x10097a0d0, 192 bytes, inline, placed by debug map only (low confidence)
    // Matrix33T<float> Matrix33RotationSinCos<float>(Vector3T<float> const&, Vector3T<float> const&)
    math* Matrix33RotationSinCos<float>(Vector3T* param_1, Vector3T* param_2) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;

        fVar1 = *(float*)(param_1 + 8);
        fVar2 = *(float*)param_1;
        fVar3 = *(float*)(param_1 + 4);
        fVar4 = *(float*)(param_2 + 8);
        fVar5 = *(float*)param_2;
        fVar6 = *(float*)(param_2 + 4);
        new (this) Matrix33T<float>(fVar6 * fVar4 + fVar2 * fVar1 * fVar3, fVar5 * fVar1,
                                    fVar2 * fVar1 * fVar6 - fVar4 * fVar3, fVar4 * fVar2 * fVar3 - fVar6 * fVar1,
                                    fVar5 * fVar4, fVar1 * fVar3 + fVar4 * fVar2 * fVar6, fVar3 * fVar5, -fVar2,
                                    fVar5 * fVar6);
        return this;
    }

    // 0x10097a2b0, 384 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<float> QuaternionSLerpShortest<float>(QuaternionT<float> const&, QuaternionT<float>, float)
    math* QuaternionSLerpShortest<float>(float param_1_00, math* this, QuaternionT* param_1, QuaternionT* param_4) {
        vector* pvVar1;
        uint* puVar2;
        type* ptVar3;
        float fVar4;
        float local_58[4];
        float local_48[4];
        float local_38;
        float local_34;
        float local_30;

        local_30 = QuaternionDot<float>(param_1, param_4);
        local_58[0] = -1.0;
        local_48[0] = 1.0;
        ptVar3 = (type*)local_58;
        Clamp<float>(&local_30, (float*)ptVar3, local_48);
        if (0.0 <= local_30) {
            if (1.0 < local_30)
                goto LAB_10097a39c;
        } else {
            local_30 = -local_30;
            pvVar1 = param_4->SSOBeginPtr(ptVar3);
            *(uint*)param_4 = *(uint*)pvVar1 ^ 2147483648;
            puVar2 = (uint*)param_4->y();
            *(uint*)(param_4 + 4) = *puVar2 ^ 2147483648;
            puVar2 = (uint*)param_4->second();
            *(uint*)(param_4 + 8) = *puVar2 ^ 2147483648;
            puVar2 = (uint*)param_4->qw();
            *(uint*)(param_4 + 12) = *puVar2 ^ 2147483648;
        }
        local_38 = (float)acos(local_30);
        local_34 = (float)::sin(local_38);
        if (1e-05 <= local_34) {
            local_34 = 1.0 / local_34;
            fVar4 = (float)::sin((1.0 - param_1_00) * local_38);
            operator*((math*)local_58, param_1, fVar4 * local_34);
            fVar4 = (float)::sin(local_38 * param_1_00);
            operator*((math*)local_48, param_4, fVar4 * local_34);
            operator+(this, (QuaternionT*)local_58, (QuaternionT*)local_48);
            return this;
        }
    LAB_10097a39c:
        Lerp<QuaternionT<float>, float>(this, param_1, param_4, param_1_00);
        return this;
    }

} // namespace jag::math
