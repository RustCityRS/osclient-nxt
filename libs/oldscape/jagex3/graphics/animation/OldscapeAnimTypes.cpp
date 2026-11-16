// libs/oldscape/jagex3/graphics/animation/OldscapeAnimTypes.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

namespace jag::oldscape::graphics::animation {
    // 0x1003248d0, 192 bytes, placed by debug map only (low confidence)
    // GetName(AnimTargetType)
    animation* GetName(undefined1 param_2) {
        new (this) eastl::string();
        switch (param_2) {
        case 1:
            assign("joint");
            break;
        case 2:
            assign("billboard");
            break;
        case 3:
            assign("colour");
            break;
        case 4:
            assign("alpha");
            break;
        case 5:
            assign("transform");
            break;
        default:
            assign("unknown");
        }
        return this;
    }

    // 0x100324990, 48 bytes, placed by debug map only (low confidence)
    // GetTransformType(AnimTargetSubType)
    undefined4 GetTransformType(char param_1) {
        undefined4 uVar1;

        uVar1 = 4294967295;
        if ((byte)(param_1 - 1U) < 16) {
            uVar1 = *(undefined4*)(&DAT_100d42288 + (long)(char)(param_1 - 1U) * 4);
        }
        return uVar1;
    }

    // 0x1003249c0, 464 bytes, placed by debug map only (low confidence)
    // GetName(AnimTargetSubType)
    animation* GetName(undefined1 param_2) {
        new (this) eastl::string();
        switch (param_2) {
        case 1:
            assign("rotateX");
            break;
        case 2:
            assign("rotateY");
            break;
        case 3:
            assign("rotateZ");
            break;
        case 4:
            assign("translateX");
            break;
        case 5:
            assign("translateY");
            break;
        case 6:
            assign("translateZ");
            break;
        case 7:
            assign("scaleX");
            break;
        case 8:
            assign("scaleY");
            break;
        case 9:
            assign("scaleZ");
            break;
        case 10:
            assign("colourR");
            break;
        case 11:
            assign("colourG");
            break;
        case 12:
            assign("colourB");
            break;
        case 13:
            assign("colourH");
            break;
        case 14:
            assign("colourS");
            break;
        case 15:
            assign("colourL");
            break;
        case 16:
            assign("alpha");
            break;
        default:
            assign("unknown");
        }
        return this;
    }

    // 0x100324b90, 48 bytes, placed by debug map only (low confidence)
    // GetGroupIndex(AnimTargetSubType)
    undefined4 GetGroupIndex(char param_1) {
        undefined4 uVar1;

        uVar1 = 4294967295;
        if ((byte)(param_1 - 1U) < 16) {
            uVar1 = *(undefined4*)((long)&PTR___mh_execute_header_100d422c8 + (long)(char)(param_1 - 1U) * 4);
        }
        return uVar1;
    }

    // 0x100324bc0, 224 bytes, placed by debug map only (low confidence)
    // GetName(AnimRotationOrder)
    animation* GetName(undefined1 param_2) {
        new (this) eastl::string();
        switch (param_2) {
        case 1:
            assign("xyz");
            break;
        case 2:
            assign("yzx");
            break;
        case 3:
            assign("zxy");
            break;
        case 4:
            assign("xzy");
            break;
        case 5:
            assign("yxz");
            break;
        case 6:
            assign("zyx");
            break;
        default:
            assign("invalid");
        }
        return this;
    }

} // namespace jag::oldscape::graphics::animation

namespace jag::math::internal {
    // 0x100324e60, 1008 bytes, inline, placed by debug map only (low confidence)
    // MatrixMultSSE(Matrix43T<float> const&, Matrix43T<float> const&)
    internal* MatrixMultSSE(Matrix43T* param_1, Matrix43T* param_2) {
        float fVar1;
        internal* piVar2;
        Vector3T<float>* pVVar3;
        uint* puVar4;
        undefined4* puVar5;
        float* pfVar6;
        undefined8* puVar7;
        uint uVar8;
        long lVar9;
        float fVar10;
        Vector4T<float> local_e8[16];
        undefined1 local_d8[16];
        undefined1 local_c8[16];
        internal* local_b0;
        float local_a8;
        float fStack_a4;
        float fStack_a0;
        float fStack_9c;
        undefined1 local_98[8];
        undefined8 uStack_90;
        undefined1 local_88[8];
        undefined8 uStack_80;
        undefined1 local_78[8];
        undefined8 uStack_70;
        undefined1 local_68[8];
        undefined8 uStack_60;
        undefined8 local_58;
        float local_50;
        undefined1 local_48[8];
        undefined8 uStack_40;

        new (this) Matrix43T<float>();
        lVar9 = 0;
        pVVar3 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 0);
        puVar4 = (uint*)Vector3T<float>::operator[](pVVar3, 0);
        _local_48 = ZEXT416(*puVar4);
        pVVar3 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 0);
        puVar4 = (uint*)Vector3T<float>::operator[](pVVar3, 1);
        local_88._4_4_ = 0;
        local_88._0_4_ = *puVar4;
        uStack_80 = local_48;
        pVVar3 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 0);
        puVar5 = (undefined4*)Vector3T<float>::operator[](pVVar3, 2);
        local_88._4_4_ = local_88._0_4_;
        local_88._0_4_ = (float)uStack_80;
        uStack_80._0_4_ = (float)*puVar5;
        uStack_80._4_4_ = 0.0;
        pVVar3 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 1);
        puVar4 = (uint*)Vector3T<float>::operator[](pVVar3, 0);
        _local_48 = ZEXT416(*puVar4);
        pVVar3 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 1);
        puVar4 = (uint*)Vector3T<float>::operator[](pVVar3, 1);
        local_78._4_4_ = 0;
        local_78._0_4_ = *puVar4;
        uStack_70 = local_48;
        pVVar3 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 1);
        puVar5 = (undefined4*)Vector3T<float>::operator[](pVVar3, 2);
        local_78._4_4_ = local_78._0_4_;
        local_78._0_4_ = (float)uStack_70;
        uStack_70._0_4_ = (float)*puVar5;
        uStack_70._4_4_ = 0.0;
        pVVar3 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 2);
        puVar4 = (uint*)Vector3T<float>::operator[](pVVar3, 0);
        _local_48 = ZEXT416(*puVar4);
        pVVar3 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 2);
        puVar4 = (uint*)Vector3T<float>::operator[](pVVar3, 1);
        local_68._4_4_ = 0;
        local_68._0_4_ = *puVar4;
        uStack_60 = local_48;
        pVVar3 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 2);
        puVar5 = (undefined4*)Vector3T<float>::operator[](pVVar3, 2);
        local_68._4_4_ = local_68._0_4_;
        local_68._0_4_ = (float)uStack_60;
        uStack_60._0_4_ = (float)*puVar5;
        uStack_60._4_4_ = 0.0;
        pVVar3 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 3);
        puVar4 = (uint*)Vector3T<float>::operator[](pVVar3, 0);
        _local_98 = ZEXT416(*puVar4);
        pVVar3 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 3);
        puVar4 = (uint*)Vector3T<float>::operator[](pVVar3, 1);
        local_d8 = ZEXT416(*puVar4);
        pVVar3 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 3);
        puVar4 = (uint*)Vector3T<float>::operator[](pVVar3, 2);
        local_c8 = ZEXT416(*puVar4);
        local_b0 = this;
        do {
            uVar8 = (uint)lVar9;
            pVVar3 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_1, uVar8);
            puVar5 = (undefined4*)Vector3T<float>::operator[](pVVar3, 0);
            local_48._4_4_ = *puVar5;
            local_48._0_4_ = local_48._4_4_;
            uStack_40._0_4_ = (float)local_48._4_4_;
            uStack_40._4_4_ = (float)local_48._4_4_;
            pVVar3 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_1, uVar8);
            pfVar6 = (float*)Vector3T<float>::operator[](pVVar3, 1);
            local_a8 = *pfVar6;
            fStack_a4 = local_a8;
            fStack_a0 = local_a8;
            fStack_9c = local_a8;
            pVVar3 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_1, uVar8);
            pfVar6 = (float*)Vector3T<float>::operator[](pVVar3, 2);
            fVar1 = *pfVar6;
            fVar10 = local_a8 * (float)local_78._0_4_ + (float)local_48._0_4_ * (float)local_88._0_4_;
            local_48._4_4_ = fVar1 * (float)local_68._4_4_ + fStack_a4 * (float)local_78._4_4_ +
                             (float)local_48._4_4_ * (float)local_88._4_4_;
            local_48._0_4_ = fVar1 * (float)local_68._0_4_ + fVar10;
            uStack_40._0_4_ =
                fVar1 * (float)uStack_60 + fStack_a0 * (float)uStack_70 + (float)uStack_40 * (float)uStack_80;
            uStack_40._4_4_ = fVar1 * uStack_60._4_4_ + fStack_9c * uStack_70._4_4_ + uStack_40._4_4_ * uStack_80._4_4_;
            Vector4T<float>::Vector4T(local_e8);
            puVar7 = (undefined8*)Vector4T<float>::operator[](local_e8, 0);
            *puVar7 = local_48;
            puVar7[1] = uStack_40;
            local_58 = local_e8->GetXYZ();
            local_50 = fVar10;
            SetXYZ((Vector3T*)&local_58);
            lVar9 = lVar9 + 1;
            this = (internal*)&field_12;
        } while (lVar9 != 3);
        local_98._4_4_ = local_d8._0_4_;
        uStack_90._4_4_ = 1.0;
        uStack_90._0_4_ = (float)local_c8._0_4_;
        pVVar3 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_1, 3);
        puVar5 = (undefined4*)Vector3T<float>::operator[](pVVar3, 0);
        local_48._4_4_ = *puVar5;
        local_48._0_4_ = local_48._4_4_;
        uStack_40._0_4_ = (float)local_48._4_4_;
        uStack_40._4_4_ = (float)local_48._4_4_;
        pVVar3 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_1, 3);
        pfVar6 = (float*)Vector3T<float>::operator[](pVVar3, 1);
        local_a8 = *pfVar6;
        fStack_a4 = local_a8;
        fStack_a0 = local_a8;
        fStack_9c = local_a8;
        pVVar3 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_1, 3);
        pfVar6 = (float*)Vector3T<float>::operator[](pVVar3, 2);
        fVar1 = *pfVar6;
        fVar10 = fVar1 * (float)local_68._0_4_ + local_a8 * (float)local_78._0_4_ +
                 (float)local_48._0_4_ * (float)local_88._0_4_ + (float)local_98._0_4_;
        local_48._4_4_ = fVar1 * (float)local_68._4_4_ + fStack_a4 * (float)local_78._4_4_ +
                         (float)local_48._4_4_ * (float)local_88._4_4_ + (float)local_98._4_4_;
        local_48._0_4_ = fVar10;
        uStack_40._0_4_ = fVar1 * (float)uStack_60 + fStack_a0 * (float)uStack_70 +
                          (float)uStack_40 * (float)uStack_80 + (float)uStack_90;
        uStack_40._4_4_ =
            fVar1 * uStack_60._4_4_ + fStack_9c * uStack_70._4_4_ + uStack_40._4_4_ * uStack_80._4_4_ + uStack_90._4_4_;
        Vector4T<float>::Vector4T(local_e8);
        puVar7 = (undefined8*)Vector4T<float>::operator[](local_e8, 0);
        *puVar7 = local_48;
        puVar7[1] = uStack_40;
        local_58 = local_e8->GetXYZ();
        piVar2 = local_b0;
        local_50 = fVar10;
        local_b0[2].field_4.SetXYZ((Vector3T*)&local_58);
        return piVar2;
    }

    // 0x100325290, 992 bytes, inline, placed by debug map only (low confidence)
    // MatrixMultSSEInPlace(Matrix43T<float>&, Matrix43T<float> const&)
    Matrix43T* MatrixMultSSEInPlace(Matrix43T* param_1, Matrix43T* param_2) {
        float fVar1;
        Vector3T<float>* pVVar2;
        uint* puVar3;
        undefined4* puVar4;
        float* pfVar5;
        undefined8* puVar6;
        Matrix43T* this;
        uint uVar7;
        long lVar8;
        float fVar9;
        Vector4T<float> local_d8[16];
        undefined1 local_c8[16];
        undefined1 local_b8[16];
        float local_a8;
        float fStack_a4;
        float fStack_a0;
        float fStack_9c;
        undefined1 local_98[8];
        undefined8 uStack_90;
        undefined1 local_88[8];
        undefined8 uStack_80;
        undefined1 local_78[8];
        undefined8 uStack_70;
        undefined1 local_68[8];
        undefined8 uStack_60;
        undefined8 local_58;
        float local_50;
        undefined1 local_48[8];
        undefined8 uStack_40;

        lVar8 = 0;
        pVVar2 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 0);
        puVar3 = (uint*)Vector3T<float>::operator[](pVVar2, 0);
        _local_48 = ZEXT416(*puVar3);
        pVVar2 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 0);
        puVar3 = (uint*)Vector3T<float>::operator[](pVVar2, 1);
        local_88._4_4_ = 0;
        local_88._0_4_ = *puVar3;
        uStack_80 = local_48;
        pVVar2 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 0);
        puVar4 = (undefined4*)Vector3T<float>::operator[](pVVar2, 2);
        local_88._4_4_ = local_88._0_4_;
        local_88._0_4_ = (float)uStack_80;
        uStack_80._0_4_ = (float)*puVar4;
        uStack_80._4_4_ = 0.0;
        pVVar2 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 1);
        puVar3 = (uint*)Vector3T<float>::operator[](pVVar2, 0);
        _local_48 = ZEXT416(*puVar3);
        pVVar2 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 1);
        puVar3 = (uint*)Vector3T<float>::operator[](pVVar2, 1);
        local_78._4_4_ = 0;
        local_78._0_4_ = *puVar3;
        uStack_70 = local_48;
        pVVar2 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 1);
        puVar4 = (undefined4*)Vector3T<float>::operator[](pVVar2, 2);
        local_78._4_4_ = local_78._0_4_;
        local_78._0_4_ = (float)uStack_70;
        uStack_70._0_4_ = (float)*puVar4;
        uStack_70._4_4_ = 0.0;
        pVVar2 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 2);
        puVar3 = (uint*)Vector3T<float>::operator[](pVVar2, 0);
        _local_48 = ZEXT416(*puVar3);
        pVVar2 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 2);
        puVar3 = (uint*)Vector3T<float>::operator[](pVVar2, 1);
        local_68._4_4_ = 0;
        local_68._0_4_ = *puVar3;
        uStack_60 = local_48;
        pVVar2 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 2);
        puVar4 = (undefined4*)Vector3T<float>::operator[](pVVar2, 2);
        local_68._4_4_ = local_68._0_4_;
        local_68._0_4_ = (float)uStack_60;
        uStack_60._0_4_ = (float)*puVar4;
        uStack_60._4_4_ = 0.0;
        pVVar2 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 3);
        puVar3 = (uint*)Vector3T<float>::operator[](pVVar2, 0);
        _local_98 = ZEXT416(*puVar3);
        pVVar2 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 3);
        puVar3 = (uint*)Vector3T<float>::operator[](pVVar2, 1);
        local_c8 = ZEXT416(*puVar3);
        pVVar2 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 3);
        puVar3 = (uint*)Vector3T<float>::operator[](pVVar2, 2);
        local_b8 = ZEXT416(*puVar3);
        Vector4T<float>::Vector4T(local_d8);
        this = param_1;
        do {
            uVar7 = (uint)lVar8;
            pVVar2 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_1, uVar7);
            puVar4 = (undefined4*)Vector3T<float>::operator[](pVVar2, 0);
            local_48._4_4_ = *puVar4;
            local_48._0_4_ = local_48._4_4_;
            uStack_40._0_4_ = (float)local_48._4_4_;
            uStack_40._4_4_ = (float)local_48._4_4_;
            pVVar2 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_1, uVar7);
            pfVar5 = (float*)Vector3T<float>::operator[](pVVar2, 1);
            local_a8 = *pfVar5;
            fStack_a4 = local_a8;
            fStack_a0 = local_a8;
            fStack_9c = local_a8;
            pVVar2 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_1, uVar7);
            pfVar5 = (float*)Vector3T<float>::operator[](pVVar2, 2);
            fVar1 = *pfVar5;
            fVar9 = local_a8 * (float)local_78._0_4_ + (float)local_48._0_4_ * (float)local_88._0_4_;
            local_48._4_4_ = fVar1 * (float)local_68._4_4_ + fStack_a4 * (float)local_78._4_4_ +
                             (float)local_48._4_4_ * (float)local_88._4_4_;
            local_48._0_4_ = fVar1 * (float)local_68._0_4_ + fVar9;
            uStack_40._0_4_ =
                fVar1 * (float)uStack_60 + fStack_a0 * (float)uStack_70 + (float)uStack_40 * (float)uStack_80;
            uStack_40._4_4_ = fVar1 * uStack_60._4_4_ + fStack_9c * uStack_70._4_4_ + uStack_40._4_4_ * uStack_80._4_4_;
            puVar6 = (undefined8*)Vector4T<float>::operator[](local_d8, 0);
            *puVar6 = local_48;
            puVar6[1] = uStack_40;
            local_58 = local_d8->GetXYZ();
            local_50 = fVar9;
            SetXYZ((Vector3T*)&local_58);
            lVar8 = lVar8 + 1;
            this = this + 12;
        } while (lVar8 != 3);
        local_98._4_4_ = local_c8._0_4_;
        uStack_90._4_4_ = 1.0;
        uStack_90._0_4_ = (float)local_b8._0_4_;
        pVVar2 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_1, 3);
        puVar4 = (undefined4*)Vector3T<float>::operator[](pVVar2, 0);
        local_48._4_4_ = *puVar4;
        local_48._0_4_ = local_48._4_4_;
        uStack_40._0_4_ = (float)local_48._4_4_;
        uStack_40._4_4_ = (float)local_48._4_4_;
        pVVar2 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_1, 3);
        pfVar5 = (float*)Vector3T<float>::operator[](pVVar2, 1);
        local_a8 = *pfVar5;
        fStack_a4 = local_a8;
        fStack_a0 = local_a8;
        fStack_9c = local_a8;
        pVVar2 = (Vector3T<float>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_1, 3);
        pfVar5 = (float*)Vector3T<float>::operator[](pVVar2, 2);
        fVar1 = *pfVar5;
        fVar9 = local_a8 * (float)local_78._0_4_;
        local_48._4_4_ = fVar1 * (float)local_68._4_4_ + fStack_a4 * (float)local_78._4_4_ +
                         (float)local_48._4_4_ * (float)local_88._4_4_ + (float)local_98._4_4_;
        local_48._0_4_ = fVar1 * (float)local_68._0_4_ + fVar9 + (float)local_48._0_4_ * (float)local_88._0_4_ +
                         (float)local_98._0_4_;
        uStack_40._0_4_ = fVar1 * (float)uStack_60 + fStack_a0 * (float)uStack_70 +
                          (float)uStack_40 * (float)uStack_80 + (float)uStack_90;
        uStack_40._4_4_ =
            fVar1 * uStack_60._4_4_ + fStack_9c * uStack_70._4_4_ + uStack_40._4_4_ * uStack_80._4_4_ + uStack_90._4_4_;
        puVar6 = (undefined8*)Vector4T<float>::operator[](local_d8, 0);
        *puVar6 = local_48;
        puVar6[1] = uStack_40;
        local_58 = local_d8->GetXYZ();
        local_50 = fVar9;
        ((param_1 + 36))->SetXYZ((Vector3T*)&local_58);
        return param_1;
    }

} // namespace jag::math::internal

namespace jag {
    // 0x100323900, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>::type make_shared<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>()
    jag* jag::make_shared<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        OldscapeAnimCurveLoadJob* local_28[2];

        pvVar1 = (void*)aligned_alloc(56, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] =
                placement_new<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>(
                    (void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<
                ref_counter_shared<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob>,
                int, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag

namespace jag::math {
    // 0x1003246b0, 544 bytes, inline, placed by debug map only (low confidence)
    // Matrix44T<float>& FromQuaternion<float>(Matrix44T<float>&, QuaternionT<float> const&)
    Matrix44T* FromQuaternion<float>(Matrix44T* param_1, QuaternionT* param_2) {
        undefined1* puVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float* pfVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;

        fVar8 = *(float*)(param_2 + 12);
        fVar6 = fVar8 * fVar8;
        fVar2 = *(float*)param_2;
        fVar3 = *(float*)(param_2 + 4);
        fVar4 = *(float*)(param_2 + 8);
        fVar11 = fVar2 * fVar2;
        fVar9 = fVar3 * fVar3;
        fVar10 = fVar4 * fVar4;
        pfVar5 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)param_1, 0);
        *pfVar5 = (fVar11 + fVar6) - (fVar9 + fVar10);
        fVar7 = fVar8 * fVar4 + fVar3 * fVar2;
        pfVar5 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)param_1, 1);
        *pfVar5 = fVar7 + fVar7;
        fVar7 = fVar2 * fVar4 - fVar3 * fVar8;
        pfVar5 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)param_1, 2);
        *pfVar5 = fVar7 + fVar7;
        fVar7 = fVar3 * fVar2 - fVar8 * fVar4;
        puVar1 = &param_1->field_16;
        pfVar5 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)puVar1, 0);
        *pfVar5 = fVar7 + fVar7;
        pfVar5 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)puVar1, 1);
        *pfVar5 = (fVar6 + fVar9) - (fVar11 + fVar10);
        fVar7 = fVar4 * fVar3 + fVar2 * fVar8;
        pfVar5 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)puVar1, 2);
        *pfVar5 = fVar7 + fVar7;
        fVar7 = fVar2 * fVar4 + fVar3 * fVar8;
        puVar1 = &param_1->field_32;
        pfVar5 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)puVar1, 0);
        *pfVar5 = fVar7 + fVar7;
        fVar8 = fVar4 * fVar3 - fVar2 * fVar8;
        pfVar5 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)puVar1, 1);
        *pfVar5 = fVar8 + fVar8;
        pfVar5 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)puVar1, 2);
        *pfVar5 = (fVar6 - (fVar9 + fVar11)) + fVar10;
        return param_1;
    }

} // namespace jag::math
