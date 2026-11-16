// libs/graphics/runetek5/AnimationFrameRT5.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "AnimationFrameRT5.h"

namespace jag::graphics {
    // 0x103bc0ed0, 16 bytes, __common; set at startup by ___cxx_global_var_init.13
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> AnimationFrameRT5::NullAnimFrame;

    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    AnimationFrameRT5::GetBase() const;

    // 0x100023af0: the linker folded this into hal::Haptics::GetEnabled() const, which has identical code
    AnimationFrameRT5::IsValid() const;

    // 0x10002d850: the linker folded this into oldscape::option::Option<int>::GetDefaultValue() const, which has identical code
    AnimationFrameRT5::GetTransformList();

    // 0x1009796e0, 144 bytes, base-object constructor, placed by debug map only (low confidence)
    // AnimationFrameRT5Transform::AnimationFrameRT5Transform(AnimTransform, unsigned int)
    void AnimationFrameRT5Transform::AnimationFrameRT5Transform(char param_2, undefined4 param_3) {
        undefined4* this_00;

        this_00 = &field_4;
        new (this_00) math::Vector3T<int>();
        new (&field_16) math::Vector3T<int>();
        new (((long)&field_24 + 4)) math::Vector3T<int>();
        new (&field_40) math::QuaternionT<float>();
        field_0 = param_3;
        if ((param_2 == '\n') || (param_2 == '\x03')) {
            this_00->SetToOne();
        } else {
            this_00->SetToZero();
        }
        (&field_40)->SetToIdentity();
        field_56 = 18446744069414584320;
    }

    // 0x100979790, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // AnimationFrameRT5Transform::AnimationFrameRT5Transform(AnimTransform, unsigned int): jumps straight to the base-object constructor

    // 0x1009797a0, 1328 bytes, placed by debug map only (low confidence)
    // AnimationFrameRT5Transform::ConvertFromCurves(AnimTransform, unsigned int, eastl::vector<AnimCurve, eastl::allocator> const&, WrapArray<AnimCurveSegmentCacheData>&, float, math::Vector3T<float> const&, Joint*)
    void AnimationFrameRT5Transform::ConvertFromCurves(
        undefined4 param_1, AnimationFrameRT5Transform* this, undefined4 param_3, undefined4 param_4,
        vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>* param_5,
        WrapArray<AnimCurveSegmentCacheData>* param_6, Vector3T* param_7, Joint* param_8) {
        undefined4* this_00;
        uint uVar1;
        char cVar2;
        int iVar4;
        long lVar5;
        AnimCurve* pAVar6;
        AnimCurveSegmentCacheData* pAVar7;
        ulong uVar8;
        float fVar9;
        float fVar10;
        QuaternionT<float> local_148[16];
        undefined1 local_138[64];
        undefined8 local_f8;
        float local_f0;
        undefined1 local_b8[80];
        undefined8 local_68;
        undefined8 local_58;
        float* local_40;
        float local_34;

        local_58 = (float*)CONCAT44(local_58._4_4_, param_1);
        local_40 = (float*)CONCAT44(local_40._4_4_, param_3);
        field_0 = param_4;
        local_b8._72_8_ = param_7;
        lVar5 = eastl::vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>::size(param_5);
        local_34 = 0.0;
        local_68._0_4_ = 0.0;
        if (lVar5 != 0) {
            pAVar6 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                (vector<AnimCurve, eastl::allocator>*)param_5, 0);
            pAVar7 = (AnimCurveSegmentCacheData*)WrapArray<AnimCurveSegmentCacheData>::operator[](param_6, 0);
            local_68._0_4_ = (float)pAVar6->GetValue((float)local_58, pAVar7);
        }
        uVar8 = eastl::vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>::size(param_5);
        if (1 < uVar8) {
            pAVar6 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                (vector<AnimCurve, eastl::allocator>*)param_5, 1);
            pAVar7 = (AnimCurveSegmentCacheData*)WrapArray<AnimCurveSegmentCacheData>::operator[](param_6, 1);
            local_34 = (float)pAVar6->GetValue((float)local_58, pAVar7);
        }
        uVar8 = eastl::vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>::size(param_5);
        fVar10 = 0.0;
        if (2 < uVar8) {
            pAVar6 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                (vector<AnimCurve, eastl::allocator>*)param_5, 2);
            pAVar7 = (AnimCurveSegmentCacheData*)WrapArray<AnimCurveSegmentCacheData>::operator[](param_6, 2);
            fVar10 = (float)pAVar6->GetValue((float)local_58, pAVar7);
        }
        this_00 = &field_4;
        fVar9 = local_34;
        this_00->Set((float)local_68, local_34, fVar10);
        cVar2 = (char)local_40;
        if ((cVar2 == '\x01') && (param_8 != (Joint*)0)) {
            local_58 = (float*)param_8->GetLocalBindTranslate();
            local_34 = fVar9;
            lVar5 = eastl::vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>::size(param_5);
            if (lVar5 != 0) {
                pAVar6 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                    (vector<AnimCurve, eastl::allocator>*)param_5, 0);
                iVar4 = pAVar6->GetNumKeys();
                if (iVar4 == 0) {
                    *this_00 = (float)local_58;
                }
            }
            uVar8 = eastl::vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>::size(param_5);
            if (1 < uVar8) {
                pAVar6 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                    (vector<AnimCurve, eastl::allocator>*)param_5, 1);
                iVar4 = pAVar6->GetNumKeys();
                if (iVar4 == 0) {
                    *(undefined4*)&field_8 = local_58._4_4_;
                }
            }
            uVar8 = eastl::vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>::size(param_5);
            if (2 < uVar8) {
                pAVar6 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                    (vector<AnimCurve, eastl::allocator>*)param_5, 2);
                iVar4 = pAVar6->GetNumKeys();
                if (iVar4 == 0) {
                    *(float*)((long)&field_8 + 4) = local_34;
                }
            }
            local_138->GetLocalBindInverse();
            local_f8 = local_138->TransformPoint(this_00);
            local_f0 = fVar9;
            local_b8->GetWorldBind();
            math::operator*((math*)local_138, (Matrix44T*)local_b8, (Matrix44T*)&graphics::MAYA_ANIM_INVERT_MATRIX);
            local_b8._0_8_ = local_138->TransformVector((Vector3T*)&local_f8);
            local_b8._8_4_ = fVar9;
            this_00->SetXYZ(local_b8);
            uVar1 = *(uint*)((long)&field_8 + 4);
            fVar9 = -*(float*)&field_8;
            *(float*)&field_8 = fVar9;
            *(uint*)((long)&field_8 + 4) = uVar1 ^ 2147483648;
            cVar2 = (char)local_40;
        }
        local_68 = CONCAT44(local_68._4_4_, (float)local_68);
        switch (cVar2) {
        case '\0':
        case '\x01':
        case '\b':
            *(uint*)&field_8 = *(uint*)&field_8 ^ 2147483648;
            local_68 = CONCAT44(local_68._4_4_, (float)local_68);
            break;
        case '\x02':
            local_68 = CONCAT44(local_68._4_4_, (float)local_68);
            if (param_8 != (Joint*)0) {
                local_58 = (float*)param_8->GetLocalBindRotate();
                local_40 = (float*)CONCAT44(local_40._4_4_, fVar9);
                lVar5 = eastl::vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>::size(param_5);
                if (lVar5 != 0) {
                    pAVar6 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                        (vector<AnimCurve, eastl::allocator>*)param_5, 0);
                    iVar4 = pAVar6->GetNumKeys();
                    if (iVar4 == 0) {
                        *this_00 = (float)local_58;
                    }
                }
                uVar8 = eastl::vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>::size(param_5);
                if (1 < uVar8) {
                    pAVar6 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                        (vector<AnimCurve, eastl::allocator>*)param_5, 1);
                    iVar4 = pAVar6->GetNumKeys();
                    if (iVar4 == 0) {
                        *(undefined4*)&field_8 = local_58._4_4_;
                    }
                }
                uVar8 = eastl::vector<oldscape::dash3d::DepthBiasComputer::Node, eastl::allocator>::size(param_5);
                if (2 < uVar8) {
                    pAVar6 = (AnimCurve*)eastl::vector<AnimCurve, eastl::allocator>::operator[](
                        (vector<AnimCurve, eastl::allocator>*)param_5, 2);
                    iVar4 = pAVar6->GetNumKeys();
                    if (iVar4 == 0) {
                        *(undefined4*)((long)&field_8 + 4) = local_40._0_4_;
                    }
                }
                math::QuaternionT<float>::QuaternionT(local_148);
                local_40 = (float*)&field_8;
                fVar10 = (float)field_4;
                local_58 = (float*)((long)&field_8 + 4);
                local_148->FromYawPitchRoll(*(float*)&field_8, fVar10, *(float*)((long)&field_8 + 4));
                new (local_138) math::Matrix44T<float>(local_148, PTR_ZERO_100ee66e8);
                if (param_8->GetParentJointID() != -1) {
                    param_8->GetParentJoint();
                    local_f8.GetWorldBind();
                    math::operator*((math*)local_b8, (Matrix44T*)&local_f8,
                                    (Matrix44T*)&graphics::MAYA_ANIM_INVERT_MATRIX);
                    math::Matrix44T<float>::operator*=((Matrix44T<float>*)local_138, (Matrix44T*)local_b8);
                }
                local_138->Invert(0);
                local_f8.GetWorldBind();
                math::operator*((math*)local_b8, (Matrix44T*)&local_f8, (Matrix44T*)&graphics::MAYA_ANIM_INVERT_MATRIX);
                math::Matrix44T<float>::operator*=((Matrix44T<float>*)local_138, (Matrix44T*)local_b8);
                local_68 = local_138->ToEulerAnglesXYZ();
                local_34 = fVar10;
                math::SinCos((float*)this_00, (float*)&field_16, -(float)local_68);
                math::SinCos(local_40, (float*)((long)&field_16 + 4), -local_68._4_4_);
                math::SinCos(local_58, (float*)&field_24, local_34);
                math::Matrix33RotationSinCos<float>((math*)local_b8, (Vector3T*)this_00, (Vector3T*)&field_16);
                (&field_40, (Matrix33T*)local_b8)->FromRotationMatrix();
            }
            break;
        case '\t':
            field_4 = *(undefined4*)((long)&field_8 + 4);
            local_68 = CONCAT44(local_68._4_4_, (float)local_68);
        }
        *(undefined4*)&field_56 = 0;
        (((long)&field_24 + 4), (Vector3T*)local_b8._72_8_)->SetXYZ();
        *(undefined4*)((long)&field_56 + 4) = 4294967295;
    }

    // 0x10097a190, 288 bytes, placed by __FILE__ string
    // AnimationFrameRT5Transform::Lerp(AnimationFrameRT5Transform&, AnimationFrameRT5Transform const&, AnimationFrameRT5Transform const&, AnimTransform, float)
    void AnimationFrameRT5Transform::Lerp(math* param_1_00, undefined4 param_2_00, AnimationFrameRT5Transform* this,
                                          int* param_1, Vector3T* param_2, char param_6) {
        int iVar1;
        Rect* pRVar2;
        QuaternionT<float> local_50[16];
        undefined8 local_40;
        undefined4 local_38;
        math* local_2c;

        if (*param_1 != *(int*)param_2) {
            local_2c._0_4_ = param_1_00._0_4_;
            /* WARNING: Subroutine does not return */
            LogAssert("transformBefore.m_transform == transformAfter.m_transform",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek5/"
                      "AnimationFrameRT5.cpp",
                      152, (char*)0);
        }
        field_0 = *param_1;
        *(undefined4*)((long)&field_56 + 4) = 4294967295;
        iVar1 = param_1[15];
        if ((iVar1 != -1) || (iVar1 = *(int*)(param_2 + 60), iVar1 != -1)) {
            *(int*)((long)&field_56 + 4) = iVar1;
        }
        if (((*(byte*)(param_1 + 14) & 2) == 0) && (((byte)param_2[56] & 1) == 0)) {
            if (param_6 != '\x02') {
                local_40 = math::Lerp<math::Vector3T<float>, float>((math*)(param_1 + 1), param_2 + 4, param_2,
                                                                    (float)param_1_00._0_4_);
                local_38 = param_2_00;
                (&field_4, (Vector3T*)&local_40)->SetXYZ();
                return;
            }
            local_2c._0_4_ = param_1_00._0_4_;
            math::QuaternionT<float>::QuaternionT(local_50, (QuaternionT*)(param_2 + 40));
            pRVar2 = (Rect*)&local_40;
            math::QuaternionSLerpShortest<float>(local_2c._0_4_, pRVar2, param_1 + 10, local_50);
        } else {
            (&field_4, (Vector3T*)(param_1 + 1))->SetXYZ();
            pRVar2 = (Rect*)(param_1 + 10);
        }
        math::Rect<float>::operator=((Rect<float>*)&field_40, pRVar2);
    }

    // 0x10097a430, 80 bytes, base-object constructor, placed by class name
    // AnimationFrameRT5::AnimationFrameRT5()
    void AnimationFrameRT5::AnimationFrameRT5() {
        _func_decltype_nullptr* in_RSI;

        new (this) MakeSharedPool<AnimationFrameRT5, 20480>();
        field_0 = 0;
        new (&field_8, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_24 = 0;
        new (&field_32) eastl::vector<AnimationFrameRT5Transform, eastl::allocator>();
    }

    // 0x10097a4f0, 16 bytes, complete-object constructor, placed by class name
    // AnimationFrameRT5::AnimationFrameRT5(): jumps straight to the base-object constructor

    // 0x10097a500, 1472 bytes, base-object constructor, placed by class name
    // AnimationFrameRT5::AnimationFrameRT5(shared_ptr<AnimBase>&, PacketT<Array<unsigned char, eastl::allocator> >&)
    void AnimationFrameRT5::AnimationFrameRT5(shared_ptr* param_1, PacketT* param_2) {
        Vector3T<float>* this_00;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* pPVar1;
        Vector3T<float>* this_01;
        uint uVar2;
        char cVar3;
        byte bVar4;
        ushort uVar5;
        short sVar6;
        short sVar7;
        uint uVar8;
        uchar* puVar9;
        ulong uVar10;
        long lVar11;
        AnimBase* this_02;
        uint* puVar12;
        long lVar13;
        shared_ptr<AnimBase>* this_03;
        float fVar15;
        undefined1 local_d8[72];
        undefined8 local_90;
        float local_88;
        shared_ptr<AnimBase>* local_78;
        vector<AnimationFrameRT5Transform, eastl::allocator>* local_70;
        uint local_64;
        TextureAtlasReference* local_60;
        uint local_58;
        uint local_54;
        int local_50;
        int local_4c;
        int local_48;
        int local_44;
        int local_40;
        byte local_39;
        int local_38;
        byte local_31;

        new (this) MakeSharedPool<AnimationFrameRT5, 20480>();
        field_0 = 0;
        this_03 = (shared_ptr<AnimBase>*)&field_8;
        new (this_03) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        field_24 = 0;
        local_70 = (vector<AnimationFrameRT5Transform, eastl::allocator>*)&field_32;
        eastl::vector<AnimationFrameRT5Transform, eastl::allocator>::vector(local_70);
        shared_ptr<AnimBase>::operator=(this_03, param_1);
        local_39 = param_2->g1();
        param_2->Skip(2);
        uVar5 = param_2->g2();
        uVar8 = (uint)uVar5;
        local_64 = uVar8;
        if (uVar5 != 0) {
            do {
                cVar3 = param_2->g1();
                if (cVar3 != '\0') {
                    field_24 = field_24 + 1;
                }
                uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
        }
        param_2->SetPos(5);
        eastl::vector<AnimationFrameRT5Transform, eastl::allocator>::resize_uninitialized((ulong)local_70);
        field_24 = 0;
        local_78 = this_03;
        puVar9 = (uchar*)param_2->GetDataPtr();
        uVar10 = param_2->GetTextureAtlas();
        new ((local_d8 + 40)) PacketT<Array<unsigned char, BucketAllocatorEASTL>>(puVar9, uVar10);
        lVar11 = param_2->size();
        ((local_d8 + 40))->SetPos((ulong)uVar5 + lVar11);
        if (uVar5 != 0) {
            uVar8 = 0;
            local_58 = 4294967295;
            local_54 = 4294967295;
            local_60 = (TextureAtlasReference*)param_2;
            do {
                this_02 = (AnimBase*)shared_ptr<AnimBase>::operator->(this_03);
                bVar4 = this_02->GetTransformType(uVar8);
                if (bVar4 == 0) {
                    local_58 = uVar8;
                }
                local_31 = local_60->g1();
                if (local_31 != 0) {
                    if (bVar4 == 0) {
                        local_54 = uVar8;
                    }
                    local_38 = (uint)(bVar4 == 10 || bVar4 == 3) << 7;
                    local_4c = local_38;
                    if ((local_39 < 2) || (bVar4 != 7)) {
                        pPVar1 =
                            (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)(local_d8 + 40);
                        if (bVar4 != 2) {
                            if ((local_31 & 1) != 0) {
                                sVar6 = pPVar1->gSmart1or2s();
                                local_4c = (int)sVar6;
                            }
                            local_48 = local_38;
                            if ((local_31 & 2) != 0) {
                                sVar6 = pPVar1->gSmart1or2s();
                                local_48 = (int)sVar6;
                            }
                            local_50 = 16383;
                            if ((local_31 & 4) != 0) {
                                sVar6 = pPVar1->gSmart1or2s();
                                goto LAB_10097a80d;
                            }
                            goto LAB_10097a810;
                        }
                        local_44 = 16383;
                        local_48 = 0;
                        local_4c = 0;
                        local_50 = 16383;
                        if ((local_31 & 1) != 0) {
                            sVar6 = pPVar1->gSmart1or2s();
                            sVar7 = pPVar1->gSmart1or2s();
                            local_4c = (int)sVar6;
                            local_50 = (int)sVar7;
                        }
                        if ((local_31 & 2) != 0) {
                            sVar6 = pPVar1->gSmart1or2s();
                            sVar7 = pPVar1->gSmart1or2s();
                            local_48 = (int)sVar6;
                            local_44 = (int)sVar7;
                        }
                        if ((local_31 & 4) == 0) {
                            local_40 = 16383;
                            local_38 = 0;
                        } else {
                            sVar6 = pPVar1->gSmart1or2s();
                            sVar7 = pPVar1->gSmart1or2s();
                            local_38 = (int)sVar6;
                            local_40 = (int)sVar7;
                        }
                    } else {
                        pPVar1 =
                            (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)(local_d8 + 40);
                        if ((local_31 & 1) != 0) {
                            sVar6 = pPVar1->gSmart1or2s();
                            pPVar1->gSmart1or2s();
                            local_4c = (int)sVar6;
                        }
                        local_48 = local_38;
                        if ((local_31 & 2) != 0) {
                            sVar6 = pPVar1->gSmart1or2s();
                            pPVar1->gSmart1or2s();
                            local_48 = (int)sVar6;
                        }
                        local_50 = 16383;
                        if ((local_31 & 4) != 0) {
                            sVar6 = pPVar1->gSmart1or2s();
                            pPVar1->gSmart1or2s();
                        LAB_10097a80d:
                            local_38 = (int)sVar6;
                        }
                    LAB_10097a810:
                        local_44 = 16383;
                        local_40 = 16383;
                    }
                    uVar2 = 4294967295;
                    if ((byte)(bVar4 - 1) < 3 && (int)local_54 < (int)local_58) {
                        local_54 = local_58;
                        uVar2 = local_58;
                    }
                    puVar12 = (uint*)eastl::vector<AnimationFrameRT5Transform, eastl::allocator>::operator[](
                        local_70, (ulong)field_24);
                    *puVar12 = uVar8;
                    fVar15 = (float)local_48;
                    this_00 = (Vector3T<float>*)(puVar12 + 1);
                    this_00->Set((float)local_4c, fVar15, (float)local_38);
                    switch (bVar4 - 2) {
                    case 0:
                        this_01 = (Vector3T<float>*)(puVar12 + 4);
                        this_01->Set((float)local_50, (float)local_44, (float)local_40);
                        math::Vector3T<float>::operator*=(this_00, 6.103888e-05);
                        math::Vector3T<float>::operator*=(this_01, 6.103888e-05);
                        math::Matrix33RotationSinCos<float>((math*)local_d8, (Vector3T*)this_00, (Vector3T*)this_01);
                        ((puVar12 + 10))->FromRotationMatrix(local_d8);
                        break;
                    case 1:
                    case 8:
                        math::Vector3T<float>::operator/=(this_00, 128.0);
                        break;
                    default:
                        if (bVar4 < 2) {
                            puVar12[2] = puVar12[2] ^ 2147483648;
                        }
                        break;
                    case 7:
                        *(uint*)this_00 = *(uint*)this_00 ^ 2147483648;
                        local_90 = math::operator*((Vector3T*)this_00, 3.1415927);
                        local_88 = fVar15;
                        local_d8._0_8_ = math::operator/((Vector3T*)&local_90, 16383.0);
                        local_d8._8_4_ = fVar15;
                        this_00->SetXYZ(local_d8);
                    }
                    puVar12[14] = local_31 >> 3 & 3;
                    puVar12[15] = uVar2;
                    ((AnimationFrameRT5*)this)->field_24 = ((AnimationFrameRT5*)this)->field_24 + 1;
                    this = (AnimationFrameRT5*)this;
                    this_03 = local_78;
                }
                uVar8 = uVar8 + 1;
                param_2 = (PacketT*)local_60;
            } while (local_64 != uVar8);
        }
        lVar11 = ((local_d8 + 40))->size();
        lVar13 = param_2->GetTextureAtlas();
        if (lVar11 != lVar13) {
            /* WARNING: Subroutine does not return */
            LogAssert("dataPacket2.GetPos() == dataPacket.GetSize()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek5/"
                      "AnimationFrameRT5.cpp",
                      405, "AnimationFrameRT5: Unpack error - not at end of packet");
        }
        field_0 = 1;
        ((local_d8 + 40))->~PacketT();
    }

    // 0x10097abc0, 16 bytes, complete-object constructor, placed by class name
    // AnimationFrameRT5::AnimationFrameRT5(shared_ptr<AnimBase>&, PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x10097abd0, 656 bytes, base-object constructor, placed by class name
    // AnimationFrameRT5::AnimationFrameRT5(shared_ptr<AnimBase> const&, AnimKeyFrameSet const&, WrapArray<WrapArray<AnimCurveSegmentCacheData> >&, float)
    void AnimationFrameRT5::AnimationFrameRT5(shared_ptr* param_1, AnimKeyFrameSet* param_2, WrapArray* param_3,
                                              float param_4) {
        char cVar2;
        uchar uVar3;
        uint uVar5;
        Layout* this_00;
        undefined8 uVar6;
        undefined8 uVar7;
        long lVar8;
        ulong uVar9;
        AnimBase* pAVar10;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_01;
        undefined8 uVar11;
        int iVar12;
        shared_ptr<AnimBase>* this_02;
        ulong uVar14;
        undefined1 local_d8[48];
        Vector4T<float> local_a8[16];
        Vector3T<int> local_98[16];
        undefined8 local_88[2];
        shared_ptr<AnimBase>* local_70;
        uint local_60;
        undefined1 local_5c[4];
        ulong local_58;
        vector<AnimationFrameRT5Transform, eastl::allocator>* local_50;
        Layout* local_48;
        uint local_34;

        local_5c = (undefined1[4])param_4;
        new (this) MakeSharedPool<AnimationFrameRT5, 20480>();
        field_0 = 0;
        this_02 = (shared_ptr<AnimBase>*)&field_8;
        new (this_02) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        field_24 = 0;
        local_50 = (vector<AnimationFrameRT5Transform, eastl::allocator>*)&field_32;
        eastl::vector<AnimationFrameRT5Transform, eastl::allocator>::vector(local_50);
        shared_ptr<AnimBase>::operator=(this_02, param_1);
        this_00 = (Layout*)param_2->second();
        uVar6 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_00);
        local_48 = this_00;
        uVar7 = this_00->end();
        uVar5 = std::count_if<eastl::vector<AnimCurve, eastl::allocator> const*,
                              AnimationFrameRT5::AnimationFrameRT5(shared_ptr<AnimBase> const&, AnimKeyFrameSet_const&,
                                                                   WrapArray<WrapArray<AnimCurveSegmentCacheData>>&,
                                                                   float)::__0>(uVar6, uVar7);
        ((AnimationFrameRT5*)this)->field_24 = uVar5;
        eastl::vector<AnimationFrameRT5Transform, eastl::allocator>::resize((ulong)local_50);
        ((AnimationFrameRT5*)this)->field_24 = 0;
        math::Vector3T<int>::Vector3T(local_98);
        lVar8 = local_48->size();
        if (lVar8 != 0) {
            local_58 = 1;
            uVar14 = 0;
            lVar8 = 0;
            local_34 = 0;
            local_70 = this_02;
            do {
                pAVar10 = (AnimBase*)shared_ptr<AnimBase>::operator->(this_02);
                local_60 = (int)local_58 - 1;
                cVar2 = pAVar10->GetTransformType(local_60);
                if (cVar2 == '\0') {
                    pAVar10 = (AnimBase*)shared_ptr<AnimBase>::operator->(this_02);
                    uVar3 = param_2->GetBindID();
                    lVar8 = pAVar10->GetJointByOriginMappedID(local_34, uVar3);
                    local_34 = local_34 + 1;
                LAB_10097ad2e:
                    if (lVar8 != 0) {
                        local_d8->GetWorldBind();
                        local_88[0] = local_a8->GetXYZ();
                        local_98->SetXYZ(local_88);
                    }
                } else if (cVar2 == '\0')
                    goto LAB_10097ad2e;
                this_01 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                    eastl::vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator>::operator[](
                        (vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator>*)local_48, uVar14);
                if (eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                     eastl::allocator>>::empty(this_01) == '\0') {
                    if (cVar2 == '\0') {
                        /* WARNING: Subroutine does not return */
                        LogAssert("transformType != AnimTransform::ORIGIN",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek5/AnimationFrameRT5.cpp",
                                  445, (char*)0);
                    }
                    uVar6 = eastl::vector<AnimationFrameRT5Transform, eastl::allocator>::operator[](
                        local_50, (ulong)((AnimationFrameRT5*)this)->field_24);
                    uVar7 = eastl::vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator>::operator[](
                        (vector<eastl::vector<AnimCurve, eastl::allocator>, eastl::allocator>*)local_48, uVar14);
                    uVar11 = WrapArray<WrapArray<AnimCurveSegmentCacheData>>::operator[](
                        (WrapArray<WrapArray<AnimCurveSegmentCacheData>>*)param_3, uVar14);
                    local_5c->ConvertFromCurves(uVar6, cVar2, local_60, uVar7, uVar11, local_98, lVar8);
                    ((AnimationFrameRT5*)this)->field_24 = ((AnimationFrameRT5*)this)->field_24 + 1;
                    this_02 = local_70;
                }
                iVar12 = (int)local_58;
                uVar14 = local_58 & 4294967295;
                uVar9 = local_48->size();
                local_58 = (ulong)(iVar12 + 1);
            } while (uVar14 < uVar9);
        }
        ((AnimationFrameRT5*)this)->field_0 = 1;
    }

    // 0x10097b050, 16 bytes, complete-object constructor, placed by class name
    // AnimationFrameRT5::AnimationFrameRT5(shared_ptr<AnimBase> const&, AnimKeyFrameSet const&, WrapArray<WrapArray<AnimCurveSegmentCacheData> >&, float): jumps straight to the base-object constructor

    // 0x1009a7060, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.13
    void ___cxx_global_var_init_13(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&AnimationFrameRT5::NullAnimFrame) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5370, &AnimationFrameRT5::NullAnimFrame, 4294967296);
    }

} // namespace jag::graphics
