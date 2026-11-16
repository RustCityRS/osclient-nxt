// libs/oldscape/jagex3/graphics/animation/OldscapeAnimTypes.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

namespace jag::oldscape::graphics::animation {
    // 0x1003248d0
    auto GetName(AnimTargetType animTargetType) {
        auto result;
        switch ((char)animTargetType) {
        case '\x01':
            result.assign("joint");
            break;
        case '\x02':
            result.assign("billboard");
            break;
        case '\x03':
            result.assign("colour");
            break;
        case '\x04':
            result.assign("alpha");
            break;
        case '\x05':
            result.assign("transform");
            break;
        default:
            result.assign("unknown");
        }
        return result;
    }

    // 0x100324990
    void GetTransformType(AnimTargetSubType animTargetSubType) {
        uint8_t bVar2 = (char)animTargetSubType - 1;
        uint32_t uVar1 = 4294967295;
        if (bVar2 < 16) {
            uVar1 =
                *(uint32_t*)(&reinterpret_cast<const uint64_t*>(&MAX_HARDWARE_THREAD_LIMIT)[3] + (long)(char)bVar2 * 4);
        }
        return uVar1;
    }

    // 0x1003249c0
    auto GetName(AnimTargetSubType animTargetSubType) {
        auto result;
        switch ((char)animTargetSubType) {
        case '\x01':
            result.assign("rotateX");
            break;
        case '\x02':
            result.assign("rotateY");
            break;
        case '\x03':
            result.assign("rotateZ");
            break;
        case '\x04':
            result.assign("translateX");
            break;
        case '\x05':
            result.assign("translateY");
            break;
        case '\x06':
            result.assign("translateZ");
            break;
        case '\a':
            result.assign("scaleX");
            break;
        case '\b':
            result.assign("scaleY");
            break;
        case '\t':
            result.assign("scaleZ");
            break;
        case '\n':
            result.assign("colourR");
            break;
        case '\v':
            result.assign("colourG");
            break;
        case '\f':
            result.assign("colourB");
            break;
        case '\r':
            result.assign("colourH");
            break;
        case '\x0e':
            result.assign("colourS");
            break;
        case '\x0f':
            result.assign("colourL");
            break;
        case '\x10':
            result.assign("alpha");
            break;
        default:
            result.assign("unknown");
        }
        return result;
    }

    // 0x100324b90
    void GetGroupIndex(AnimTargetSubType animTargetSubType) {
        uint8_t bVar2 = (char)animTargetSubType - 1;
        uint32_t uVar1 = 4294967295;
        if (bVar2 < 16) {
            uVar1 = *(uint32_t*)((long)&PTR___mh_execute_header_100d422c8 + (long)(char)bVar2 * 4);
        }
        return uVar1;
    }

    // 0x100324bc0
    auto GetName(AnimRotationOrder animRotationOrder) {
        auto result;
        switch ((char)animRotationOrder) {
        case '\x01':
            result.assign("xyz");
            break;
        case '\x02':
            result.assign("yzx");
            break;
        case '\x03':
            result.assign("zxy");
            break;
        case '\x04':
            result.assign("xzy");
            break;
        case '\x05':
            result.assign("yxz");
            break;
        case '\x06':
            result.assign("zyx");
            break;
        default:
            result.assign("invalid");
        }
        return result;
    }

} // namespace jag::oldscape::graphics::animation

namespace jag::math::internal {
    // 0x100324e60
    Matrix43T<float>* MatrixMultSSE(const Matrix43T<float>& matrix431, const Matrix43T<float>& matrix432) {
        float fVar1;
        float* pfVar6;
        uint64_t* puVar7;
        Matrix43T<float>* in_RDX;
        unsigned int arg1;
        float fVar9;
        uint8_t local_d8[16];
        uint8_t local_c8[16];
        float local_a8;
        float fStack_a4;
        float fStack_a0;
        float fStack_9c;
        uint8_t local_98[8];
        uint64_t uStack_90;
        uint8_t local_88[8];
        uint8_t local_78[8];
        uint8_t local_68[8];
        uint64_t local_58;
        float local_50;
        uint8_t local_48[8];
        uint64_t uStack_40;

        new (matrix431) Matrix43T<float>();
        long lVar8 = 0;
        Vector3T<float>* pVVar3 = (Vector3T<float>*)(*in_RDX)[0];
        unsigned int* puVar4 = (unsigned int*)(*pVVar3)[0];
        _local_48 = (unsigned __int128)(*puVar4);
        pVVar3 = (Vector3T<float>*)(*in_RDX)[0];
        puVar4 = (unsigned int*)(*pVVar3)[1];
        local_88._4_4_ = 0;
        local_88._0_4_ = *puVar4;
        uint64_t uStack_80 = local_48;
        pVVar3 = (Vector3T<float>*)(*in_RDX)[0];
        uint32_t* puVar5 = (uint32_t*)(*pVVar3)[2];
        local_88._4_4_ = local_88._0_4_;
        local_88._0_4_ = (float)uStack_80;
        uStack_80._0_4_ = (float)*puVar5;
        uStack_80._4_4_ = 0.0;
        pVVar3 = (Vector3T<float>*)(*in_RDX)[1];
        puVar4 = (unsigned int*)(*pVVar3)[0];
        _local_48 = (unsigned __int128)(*puVar4);
        pVVar3 = (Vector3T<float>*)(*in_RDX)[1];
        puVar4 = (unsigned int*)(*pVVar3)[1];
        local_78._4_4_ = 0;
        local_78._0_4_ = *puVar4;
        uint64_t uStack_70 = local_48;
        pVVar3 = (Vector3T<float>*)(*in_RDX)[1];
        puVar5 = (uint32_t*)(*pVVar3)[2];
        local_78._4_4_ = local_78._0_4_;
        local_78._0_4_ = (float)uStack_70;
        uStack_70._0_4_ = (float)*puVar5;
        uStack_70._4_4_ = 0.0;
        pVVar3 = (Vector3T<float>*)(*in_RDX)[2];
        puVar4 = (unsigned int*)(*pVVar3)[0];
        _local_48 = (unsigned __int128)(*puVar4);
        pVVar3 = (Vector3T<float>*)(*in_RDX)[2];
        puVar4 = (unsigned int*)(*pVVar3)[1];
        local_68._4_4_ = 0;
        local_68._0_4_ = *puVar4;
        uint64_t uStack_60 = local_48;
        pVVar3 = (Vector3T<float>*)(*in_RDX)[2];
        puVar5 = (uint32_t*)(*pVVar3)[2];
        local_68._4_4_ = local_68._0_4_;
        local_68._0_4_ = (float)uStack_60;
        uStack_60._0_4_ = (float)*puVar5;
        uStack_60._4_4_ = 0.0;
        pVVar3 = (Vector3T<float>*)(*in_RDX)[3];
        puVar4 = (unsigned int*)(*pVVar3)[0];
        _local_98 = (unsigned __int128)(*puVar4);
        pVVar3 = (Vector3T<float>*)(*in_RDX)[3];
        puVar4 = (unsigned int*)(*pVVar3)[1];
        local_d8 = (unsigned __int128)(*puVar4);
        pVVar3 = (Vector3T<float>*)(*in_RDX)[3];
        puVar4 = (unsigned int*)(*pVVar3)[2];
        local_c8 = (unsigned __int128)(*puVar4);
        Matrix43T<float>* local_b0 = matrix431;
        do {
            arg1 = (unsigned int)lVar8;
            pVVar3 = &matrix432[arg1];
            puVar5 = (uint32_t*)(*pVVar3)[0];
            local_48._4_4_ = *puVar5;
            local_48._0_4_ = local_48._4_4_;
            uStack_40._0_4_ = (float)local_48._4_4_;
            uStack_40._4_4_ = (float)local_48._4_4_;
            pVVar3 = &matrix432[arg1];
            pfVar6 = (float*)(*pVVar3)[1];
            local_a8 = *pfVar6;
            fStack_a4 = local_a8;
            fStack_a0 = local_a8;
            fStack_9c = local_a8;
            pVVar3 = &matrix432[arg1];
            pfVar6 = (float*)(*pVVar3)[2];
            fVar1 = *pfVar6;
            fVar9 = local_a8 * (float)local_78._0_4_ + (float)local_48._0_4_ * (float)local_88._0_4_;
            local_48._4_4_ = fVar1 * (float)local_68._4_4_ + fStack_a4 * (float)local_78._4_4_ +
                             (float)local_48._4_4_ * (float)local_88._4_4_;
            local_48._0_4_ = fVar1 * (float)local_68._0_4_ + fVar9;
            uStack_40._0_4_ =
                fVar1 * (float)uStack_60 + fStack_a0 * (float)uStack_70 + (float)uStack_40 * (float)uStack_80;
            uStack_40._4_4_ = fVar1 * uStack_60._4_4_ + fStack_9c * uStack_70._4_4_ + uStack_40._4_4_ * uStack_80._4_4_;
            local_e8 = Vector4T();
            puVar7 = &local_e8[0];
            *puVar7 = local_48;
            puVar7[1] = uStack_40;
            local_58 = local_e8.GetXYZ();
            local_50 = fVar9;
            matrix431.SetXYZ(local_58);
            lVar8 = lVar8 + 1;
            matrix431 = matrix431 + 12;
        } while (lVar8 != 3);
        local_98._4_4_ = local_d8._0_4_;
        uStack_90._4_4_ = 1.0;
        uStack_90._0_4_ = (float)local_c8._0_4_;
        pVVar3 = &matrix432[3];
        puVar5 = (uint32_t*)(*pVVar3)[0];
        local_48._4_4_ = *puVar5;
        local_48._0_4_ = local_48._4_4_;
        uStack_40._0_4_ = (float)local_48._4_4_;
        uStack_40._4_4_ = (float)local_48._4_4_;
        pVVar3 = &matrix432[3];
        pfVar6 = (float*)(*pVVar3)[1];
        local_a8 = *pfVar6;
        fStack_a4 = local_a8;
        fStack_a0 = local_a8;
        fStack_9c = local_a8;
        pVVar3 = &matrix432[3];
        pfVar6 = (float*)(*pVVar3)[2];
        fVar1 = *pfVar6;
        fVar9 = fVar1 * (float)local_68._0_4_ + local_a8 * (float)local_78._0_4_ +
                (float)local_48._0_4_ * (float)local_88._0_4_ + (float)local_98._0_4_;
        local_48._4_4_ = fVar1 * (float)local_68._4_4_ + fStack_a4 * (float)local_78._4_4_ +
                         (float)local_48._4_4_ * (float)local_88._4_4_ + (float)local_98._4_4_;
        local_48._0_4_ = fVar9;
        uStack_40._0_4_ = fVar1 * (float)uStack_60 + fStack_a0 * (float)uStack_70 +
                          (float)uStack_40 * (float)uStack_80 + (float)uStack_90;
        uStack_40._4_4_ =
            fVar1 * uStack_60._4_4_ + fStack_9c * uStack_70._4_4_ + uStack_40._4_4_ * uStack_80._4_4_ + uStack_90._4_4_;
        Vector4T<float> local_e8;
        puVar7 = &local_e8[0];
        *puVar7 = local_48;
        puVar7[1] = uStack_40;
        local_58 = local_e8.GetXYZ();
        Matrix43T<float>* pMVar2 = local_b0;
        local_50 = fVar9;
        ((local_b0 + 36))->SetXYZ(local_58);
        return pMVar2;
    }

    // 0x100325290
    Matrix43T<float>* MatrixMultSSEInPlace(Matrix43T<float>& matrix431, const Matrix43T<float>& matrix432) {
        float fVar1;
        float* pfVar5;
        uint64_t* puVar6;
        unsigned int arg1;
        float fVar8;
        uint8_t local_c8[16];
        uint8_t local_b8[16];
        float local_a8;
        float fStack_a4;
        float fStack_a0;
        float fStack_9c;
        uint8_t local_98[8];
        uint64_t uStack_90;
        uint8_t local_88[8];
        uint8_t local_78[8];
        uint8_t local_68[8];
        uint64_t local_58;
        float local_50;
        uint8_t local_48[8];
        uint64_t uStack_40;

        long lVar7 = 0;
        Vector3T<float>* pVVar2 = &matrix432[0];
        unsigned int* puVar3 = (unsigned int*)(*pVVar2)[0];
        _local_48 = (unsigned __int128)(*puVar3);
        pVVar2 = &matrix432[0];
        puVar3 = (unsigned int*)(*pVVar2)[1];
        local_88._4_4_ = 0;
        local_88._0_4_ = *puVar3;
        uint64_t uStack_80 = local_48;
        pVVar2 = &matrix432[0];
        uint32_t* puVar4 = (uint32_t*)(*pVVar2)[2];
        local_88._4_4_ = local_88._0_4_;
        local_88._0_4_ = (float)uStack_80;
        uStack_80._0_4_ = (float)*puVar4;
        uStack_80._4_4_ = 0.0;
        pVVar2 = &matrix432[1];
        puVar3 = (unsigned int*)(*pVVar2)[0];
        _local_48 = (unsigned __int128)(*puVar3);
        pVVar2 = &matrix432[1];
        puVar3 = (unsigned int*)(*pVVar2)[1];
        local_78._4_4_ = 0;
        local_78._0_4_ = *puVar3;
        uint64_t uStack_70 = local_48;
        pVVar2 = &matrix432[1];
        puVar4 = (uint32_t*)(*pVVar2)[2];
        local_78._4_4_ = local_78._0_4_;
        local_78._0_4_ = (float)uStack_70;
        uStack_70._0_4_ = (float)*puVar4;
        uStack_70._4_4_ = 0.0;
        pVVar2 = &matrix432[2];
        puVar3 = (unsigned int*)(*pVVar2)[0];
        _local_48 = (unsigned __int128)(*puVar3);
        pVVar2 = &matrix432[2];
        puVar3 = (unsigned int*)(*pVVar2)[1];
        local_68._4_4_ = 0;
        local_68._0_4_ = *puVar3;
        uint64_t uStack_60 = local_48;
        pVVar2 = &matrix432[2];
        puVar4 = (uint32_t*)(*pVVar2)[2];
        local_68._4_4_ = local_68._0_4_;
        local_68._0_4_ = (float)uStack_60;
        uStack_60._0_4_ = (float)*puVar4;
        uStack_60._4_4_ = 0.0;
        pVVar2 = &matrix432[3];
        puVar3 = (unsigned int*)(*pVVar2)[0];
        _local_98 = (unsigned __int128)(*puVar3);
        pVVar2 = &matrix432[3];
        puVar3 = (unsigned int*)(*pVVar2)[1];
        local_c8 = (unsigned __int128)(*puVar3);
        pVVar2 = &matrix432[3];
        puVar3 = (unsigned int*)(*pVVar2)[2];
        local_b8 = (unsigned __int128)(*puVar3);
        Vector4T<float> local_d8;
        Matrix43T<float>* matrix43T = matrix431;
        do {
            arg1 = (unsigned int)lVar7;
            pVVar2 = &matrix431[arg1];
            puVar4 = (uint32_t*)(*pVVar2)[0];
            local_48._4_4_ = *puVar4;
            local_48._0_4_ = local_48._4_4_;
            uStack_40._0_4_ = (float)local_48._4_4_;
            uStack_40._4_4_ = (float)local_48._4_4_;
            pVVar2 = &matrix431[arg1];
            pfVar5 = (float*)(*pVVar2)[1];
            local_a8 = *pfVar5;
            fStack_a4 = local_a8;
            fStack_a0 = local_a8;
            fStack_9c = local_a8;
            pVVar2 = &matrix431[arg1];
            pfVar5 = (float*)(*pVVar2)[2];
            fVar1 = *pfVar5;
            fVar8 = local_a8 * (float)local_78._0_4_ + (float)local_48._0_4_ * (float)local_88._0_4_;
            local_48._4_4_ = fVar1 * (float)local_68._4_4_ + fStack_a4 * (float)local_78._4_4_ +
                             (float)local_48._4_4_ * (float)local_88._4_4_;
            local_48._0_4_ = fVar1 * (float)local_68._0_4_ + fVar8;
            uStack_40._0_4_ =
                fVar1 * (float)uStack_60 + fStack_a0 * (float)uStack_70 + (float)uStack_40 * (float)uStack_80;
            uStack_40._4_4_ = fVar1 * uStack_60._4_4_ + fStack_9c * uStack_70._4_4_ + uStack_40._4_4_ * uStack_80._4_4_;
            puVar6 = &local_d8[0];
            *puVar6 = local_48;
            puVar6[1] = uStack_40;
            local_58 = local_d8.GetXYZ();
            local_50 = fVar8;
            matrix43T->SetXYZ(local_58);
            lVar7 = lVar7 + 1;
            matrix43T = matrix43T + 12;
        } while (lVar7 != 3);
        local_98._4_4_ = local_c8._0_4_;
        uStack_90._4_4_ = 1.0;
        uStack_90._0_4_ = (float)local_b8._0_4_;
        pVVar2 = &matrix431[3];
        puVar4 = (uint32_t*)(*pVVar2)[0];
        local_48._4_4_ = *puVar4;
        local_48._0_4_ = local_48._4_4_;
        uStack_40._0_4_ = (float)local_48._4_4_;
        uStack_40._4_4_ = (float)local_48._4_4_;
        pVVar2 = &matrix431[3];
        pfVar5 = (float*)(*pVVar2)[1];
        local_a8 = *pfVar5;
        fStack_a4 = local_a8;
        fStack_a0 = local_a8;
        fStack_9c = local_a8;
        pVVar2 = &matrix431[3];
        pfVar5 = (float*)(*pVVar2)[2];
        fVar1 = *pfVar5;
        fVar8 = local_a8 * (float)local_78._0_4_;
        local_48._4_4_ = fVar1 * (float)local_68._4_4_ + fStack_a4 * (float)local_78._4_4_ +
                         (float)local_48._4_4_ * (float)local_88._4_4_ + (float)local_98._4_4_;
        local_48._0_4_ = fVar1 * (float)local_68._0_4_ + fVar8 + (float)local_48._0_4_ * (float)local_88._0_4_ +
                         (float)local_98._0_4_;
        uStack_40._0_4_ = fVar1 * (float)uStack_60 + fStack_a0 * (float)uStack_70 +
                          (float)uStack_40 * (float)uStack_80 + (float)uStack_90;
        uStack_40._4_4_ =
            fVar1 * uStack_60._4_4_ + fStack_9c * uStack_70._4_4_ + uStack_40._4_4_ * uStack_80._4_4_ + uStack_90._4_4_;
        puVar6 = &local_d8[0];
        *puVar6 = local_48;
        puVar6[1] = uStack_40;
        local_58 = local_d8.GetXYZ();
        local_50 = fVar8;
        ((matrix431 + 36))->SetXYZ(local_58);
        return matrix431;
    }

} // namespace jag::math::internal

namespace jag {
    // 0x100323900
    shared_ptr_if_not_array<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>::type
    make_shared<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        OldscapeAnimCurveLoadJob* local_28[2];

        auto arg1 = aligned_alloc(56, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<
                oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>::type result;
        } else {
            local_28[0] =
                placement_new<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>(
                    (void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)placement_new<
                ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>,
                int, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob*&>(
                arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag

namespace jag::math {
    // 0x1003246b0
    Matrix44T<float>& FromQuaternion<float>(Matrix44T<float>& matrix44, const QuaternionT<float>& quaternion) {
        float fVar8 = *(float*)(quaternion + 12);
        float fVar6 = fVar8 * fVar8;
        float fVar2 = *(float*)quaternion;
        float fVar3 = *(float*)(quaternion + 4);
        float fVar4 = *(float*)(quaternion + 8);
        float fVar11 = fVar2 * fVar2;
        float fVar9 = fVar3 * fVar3;
        float fVar10 = fVar4 * fVar4;
        float* pfVar5 = &matrix44[0];
        *pfVar5 = (fVar11 + fVar6) - (fVar9 + fVar10);
        float fVar7 = fVar8 * fVar4 + fVar3 * fVar2;
        pfVar5 = &matrix44[1];
        *pfVar5 = fVar7 + fVar7;
        fVar7 = fVar2 * fVar4 - fVar3 * fVar8;
        pfVar5 = &matrix44[2];
        *pfVar5 = fVar7 + fVar7;
        fVar7 = fVar3 * fVar2 - fVar8 * fVar4;
        Vector4T<float>* pVVar1 = (Vector4T<float>*)(matrix44 + 16);
        pfVar5 = (float*)(*pVVar1)[0];
        *pfVar5 = fVar7 + fVar7;
        pfVar5 = (float*)(*pVVar1)[1];
        *pfVar5 = (fVar6 + fVar9) - (fVar11 + fVar10);
        fVar7 = fVar4 * fVar3 + fVar2 * fVar8;
        pfVar5 = (float*)(*pVVar1)[2];
        *pfVar5 = fVar7 + fVar7;
        fVar7 = fVar2 * fVar4 + fVar3 * fVar8;
        pVVar1 = (Vector4T<float>*)(matrix44 + 32);
        pfVar5 = (float*)(*pVVar1)[0];
        *pfVar5 = fVar7 + fVar7;
        fVar8 = fVar4 * fVar3 - fVar2 * fVar8;
        pfVar5 = (float*)(*pVVar1)[1];
        *pfVar5 = fVar8 + fVar8;
        pfVar5 = (float*)(*pVVar1)[2];
        *pfVar5 = (fVar6 - (fVar9 + fVar11)) + fVar10;
        return matrix44;
    }

} // namespace jag::math
