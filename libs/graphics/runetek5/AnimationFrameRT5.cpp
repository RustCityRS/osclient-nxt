// libs/graphics/runetek5/AnimationFrameRT5.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "AnimationFrameRT5.h"

namespace jag::graphics {
    // 0x103bc0ed0, set at startup by ___cxx_global_var_init.13
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> AnimationFrameRT5::NullAnimFrame =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100009d50: AnimationFrameRT5::GetBase() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x100023af0: AnimationFrameRT5::IsValid() const has the same machine code as hal::Haptics::GetEnabled() const

    // 0x10002d850: AnimationFrameRT5::GetTransformList() has the same machine code as oldscape::option::Option<int>::GetDefaultValue() const

    // 0x1009796e0
    AnimationFrameRT5Transform::AnimationFrameRT5Transform(AnimTransform animTransform, unsigned int arg2) {
        uint32_t result;

        &result = &field_4;
        auto result;
        new (&field_16) math::Vector3T();
        new ((Vector3T<int>*)((long)&field_24 + 4)) math::Vector3T();
        new (&field_40) math::QuaternionT<float>();
        field_0 = arg2;
        if (((char)animTransform == '\n') || ((char)animTransform == '\x03')) {
            result = math::Vector3T<float>::SetToOne();
        } else {
            result = math::Vector3T<float>::SetToZero();
        }
        field_40.SetToIdentity();
        field_56 = 18446744069414584320;
    }

    // 0x1009797a0
    void AnimationFrameRT5Transform::ConvertFromCurves(AnimTransform animTransform, unsigned int arg2,
                                                       const eastl::vector<AnimCurve>& animCurves,
                                                       WrapArray<AnimCurveSegmentCacheData>& wrapArray, float arg5,
                                                       const math::Vector3T<float>& vector3, Joint* joint) {
        int iVar3;
        AnimCurve* pAVar5;
        AnimCurveSegmentCacheData* pAVar6;
        uint32_t in_register_0000003c;
        Joint* in_stack_00000008;
        QuaternionT<float> local_148;
        ReturnValue local_138;
        ReturnValue local_f8;
        float local_f0;
        ReturnValue local_b8;
        float local_b0;
        uint64_t local_68;
        uint64_t local_58;
        float* local_40;

        uint32_t* puVar8 = (uint32_t*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)animTransform);
        local_58 = (float*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)arg5);
        local_40 = (float*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)arg2);
        *puVar8 = (int)animCurves;
        long lVar4 = wrapArray.size();
        float local_34 = 0.0;
        local_68._0_4_ = 0.0;
        if (lVar4 != 0) {
            pAVar5 = &wrapArray[0];
            pAVar6 = &vector3[0];
            local_68._0_4_ = (float)pAVar5->GetValue((float)local_58, *pAVar6);
        }
        unsigned long uVar7 = wrapArray.size();
        if (1 < uVar7) {
            pAVar5 = &wrapArray[1];
            pAVar6 = &vector3[1];
            local_34 = (float)pAVar5->GetValue((float)local_58, *pAVar6);
        }
        uVar7 = wrapArray.size();
        float fVar10 = 0.0;
        if (2 < uVar7) {
            pAVar5 = &wrapArray[2];
            pAVar6 = &vector3[2];
            fVar10 = (float)pAVar5->GetValue((float)local_58, *pAVar6);
        }
        Vector3T<float>* vector3T = (Vector3T<float>*)(puVar8 + 1);
        float fVar9 = local_34;
        vector3T->Set((float)local_68, local_34, fVar10);
        char cVar1 = (char)local_40;
        if ((cVar1 == '\x01') && (in_stack_00000008 != nullptr)) {
            local_58 = (float*)in_stack_00000008->GetLocalBindTranslate();
            local_34 = fVar9;
            lVar4 = wrapArray.size();
            if (lVar4 != 0) {
                pAVar5 = &wrapArray[0];
                iVar3 = pAVar5->GetNumKeys();
                if (iVar3 == 0) {
                    *(float*)vector3T = (float)local_58;
                }
            }
            uVar7 = wrapArray.size();
            if (1 < uVar7) {
                pAVar5 = &wrapArray[1];
                iVar3 = pAVar5->GetNumKeys();
                if (iVar3 == 0) {
                    puVar8[2] = local_58._4_4_;
                }
            }
            uVar7 = wrapArray.size();
            if (2 < uVar7) {
                pAVar5 = &wrapArray[2];
                iVar3 = pAVar5->GetNumKeys();
                if (iVar3 == 0) {
                    puVar8[3] = local_34;
                }
            }
            local_138 = in_stack_00000008->GetLocalBindInverse();
            local_f8 = (ReturnValue)local_138.TransformPoint(*vector3T);
            local_f0 = fVar9;
            local_b8 = in_stack_00000008->GetWorldBind();
            local_138* local_b8;
            local_b8 = (ReturnValue)local_138.TransformVector(local_f8);
            local_b0 = fVar9;
            vector3T->SetXYZ(local_b8);
            fVar9 = -(float)puVar8[2];
            puVar8[2] = fVar9;
            puVar8[3] = puVar8[3] ^ 2147483648;
            cVar1 = (char)local_40;
        }
        local_68 = (((uint64_t)local_68._4_4_ << 32) | (uint32_t)((float)local_68));
        switch (cVar1) {
        case '\0':
        case '\x01':
        case '\b':
            puVar8[2] = puVar8[2] ^ 2147483648;
            local_68 = (((uint64_t)local_68._4_4_ << 32) | (uint32_t)((float)local_68));
            break;
        case '\x02':
            local_68 = (((uint64_t)local_68._4_4_ << 32) | (uint32_t)((float)local_68));
            if (in_stack_00000008 != nullptr) {
                local_58 = (float*)in_stack_00000008->GetLocalBindRotate();
                local_40 = (float*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)fVar9);
                lVar4 = wrapArray.size();
                if (lVar4 != 0) {
                    pAVar5 = &wrapArray[0];
                    iVar3 = pAVar5->GetNumKeys();
                    if (iVar3 == 0) {
                        *(float*)vector3T = (float)local_58;
                    }
                }
                uVar7 = wrapArray.size();
                if (1 < uVar7) {
                    pAVar5 = &wrapArray[1];
                    iVar3 = pAVar5->GetNumKeys();
                    if (iVar3 == 0) {
                        puVar8[2] = local_58._4_4_;
                    }
                }
                uVar7 = wrapArray.size();
                if (2 < uVar7) {
                    pAVar5 = &wrapArray[2];
                    iVar3 = pAVar5->GetNumKeys();
                    if (iVar3 == 0) {
                        puVar8[3] = local_40._0_4_;
                    }
                }
                local_148 = math::QuaternionT<float>();
                local_40 = (float*)(puVar8 + 2);
                fVar10 = (float)puVar8[1];
                local_58 = (float*)(puVar8 + 3);
                local_148.FromYawPitchRoll((float)puVar8[2], fVar10, (float)puVar8[3]);
                local_138 = math::Matrix44T<float>(local_148, *PTR_ZERO_100ee66e8);
                if (in_stack_00000008->GetParentJointID() != -1) {
                    local_f8 = in_stack_00000008->GetParentJoint()->GetWorldBind();
                    local_b8* local_f8;
                    local_138 *= &local_b8;
                }
                local_138 = math::Matrix44T<float>::Invert(nullptr);
                local_f8 = in_stack_00000008->GetWorldBind();
                local_b8* local_f8;
                local_138 *= &local_b8;
                local_68 = local_138.ToEulerAnglesXYZ();
                local_34 = fVar10;
                math::SinCos(vector3T, (puVar8 + 4), -(float)local_68);
                math::SinCos(local_40, (puVar8 + 5), -local_68._4_4_);
                math::SinCos(local_58, (puVar8 + 6), local_34);
                math::Matrix33RotationSinCos<float>(local_b8, *vector3T);
                *((puVar8 + 10)) = math::QuaternionT<float>::FromRotationMatrix(local_b8);
            }
            break;
        case '\t':
            puVar8[1] = puVar8[3];
            local_68 = (((uint64_t)local_68._4_4_ << 32) | (uint32_t)((float)local_68));
        }
        puVar8[14] = 0;
        ((puVar8 + 7))->SetXYZ(*joint);
        puVar8[15] = 4294967295;
    }

    // 0x10097a190
    void AnimationFrameRT5Transform::Lerp(AnimationFrameRT5Transform& animationFrameRT5Transform1,
                                          const AnimationFrameRT5Transform& animationFrameRT5Transform2,
                                          const AnimationFrameRT5Transform& animationFrameRT5Transform3,
                                          AnimTransform animTransform, float arg5) {
        QuaternionT<float>* quaternion1;
        QuaternionT<float> local_50;
        uint64_t local_40[2];
        float local_2c;

        if (animationFrameRT5Transform2.field_0 != animationFrameRT5Transform3.field_0) {
            local_2c = arg5;
            LogAssert("transformBefore.m_transform == transformAfter.m_transform",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek5/"
                      "AnimationFrameRT5.cpp",
                      152, nullptr);
        }
        animationFrameRT5Transform1.field_0 = animationFrameRT5Transform2.field_0;
        *(uint32_t*)((long)&animationFrameRT5Transform1.field_56 + 4) = 4294967295;
        int iVar1 = *(int*)((long)&animationFrameRT5Transform2.field_56 + 4);
        if ((iVar1 != -1) || (iVar1 = *(int*)((long)&animationFrameRT5Transform3.field_56 + 4), iVar1 != -1)) {
            *(int*)((long)&animationFrameRT5Transform1.field_56 + 4) = iVar1;
        }
        if (((*(uint8_t*)&animationFrameRT5Transform2.field_56 & 2) == 0) &&
            ((*(uint8_t*)&animationFrameRT5Transform3.field_56 & 1) == 0)) {
            if ((char)animTransform != '\x02') {
                local_40[0] = math::Lerp<math::Vector3T<float>, float>(animationFrameRT5Transform2.field_4,
                                                                       animationFrameRT5Transform3.field_4, arg5);
                animationFrameRT5Transform1.field_4.SetXYZ(*local_40);
                return;
            }
            local_2c = arg5;
            local_50 = math::QuaternionT<float>(animationFrameRT5Transform3.field_40);
            quaternion1 = (QuaternionT<float>*)local_40;
            math::QuaternionSLerpShortest<float>(quaternion1,
                                                 (QuaternionT<float>*)&animationFrameRT5Transform2.field_40, local_2c);
        } else {
            animationFrameRT5Transform1.field_4.SetXYZ(animationFrameRT5Transform2.field_4);
            quaternion1 = (QuaternionT<float>*)&animationFrameRT5Transform2.field_40;
        }
        animationFrameRT5Transform1.field_40 = *quaternion1;
    }

    // 0x10097a430
    AnimationFrameRT5::AnimationFrameRT5() : MakeSharedPool<AnimationFrameRT5, 20480>(), m_valid(0), field_24(0) {}

    // 0x10097a500
    AnimationFrameRT5::AnimationFrameRT5(shared_ptr<AnimBase>& animBase, PacketT<Array<unsigned char>>& arg2)
        : MakeSharedPool<AnimationFrameRT5, 20480>(), m_valid(0) {
        Vector3T<float>* this_00;
        unsigned int uVar1;
        uint8_t bVar3;
        short sVar5;
        short sVar6;
        unsigned int* puVar9;
        float arg2_01;
        uint64_t local_d8;
        float local_d0;
        uint64_t local_90;
        float local_88;
        TextureAtlasReference* local_60;
        unsigned int local_58;
        unsigned int local_54;
        int local_50;
        int local_4c;
        int local_48;
        int local_44;
        int local_40;
        int local_38;
        uint8_t local_31;

        shared_ptr<AnimBase>* this_02 = (shared_ptr<AnimBase>*)&field_8;
        new (this_02) shared_ptr();
        field_24 = 0;
        vector<AnimationFrameRT5Transform>* local_70 = (vector<AnimationFrameRT5Transform>*)&field_32;
        new (local_70) eastl::vector<AnimationFrameRT5Transform>();
        *this_02 = animBase;
        uint8_t local_39 = arg2.g1();
        arg2.Skip(2);
        unsigned short uVar4 = arg2.g2();
        unsigned int uVar7 = (unsigned int)uVar4;
        unsigned int local_64 = uVar7;
        if (uVar4 != 0) {
            do {
                if (arg2.g1() != '\0') {
                    field_24 = field_24 + 1;
                }
                uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
        }
        arg2.SetPos(5);
        local_70->resize_uninitialized((unsigned long)field_24);
        field_24 = 0;
        shared_ptr<AnimBase>* local_78 = this_02;
        auto arg1 = arg2.GetDataPtr();
        unsigned long arg2_00 = arg2.GetTextureAtlas();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>> local_b0(arg1, arg2_00);
        long lVar8 = arg2.size();
        local_b0.SetPos((unsigned long)uVar4 + lVar8);
        if (uVar4 != 0) {
            uVar7 = 0;
            local_58 = 4294967295;
            local_54 = 4294967295;
            local_60 = (TextureAtlasReference*)arg2;
            do {
                bVar3 = ((AnimBase*)(*this_02).operator->())->GetTransformType(uVar7);
                if (bVar3 == 0) {
                    local_58 = uVar7;
                }
                local_31 = local_60->g1();
                if (local_31 != 0) {
                    if (bVar3 == 0) {
                        local_54 = uVar7;
                    }
                    local_38 = (unsigned int)(bVar3 == 10 || bVar3 == 3) << 7;
                    local_4c = local_38;
                    if ((local_39 < 2) || (bVar3 != 7)) {
                        if (bVar3 != 2) {
                            if ((local_31 & 1) != 0) {
                                sVar5 = local_b0.gSmart1or2s();
                                local_4c = (int)sVar5;
                            }
                            local_48 = local_38;
                            if ((local_31 & 2) != 0) {
                                sVar5 = local_b0.gSmart1or2s();
                                local_48 = (int)sVar5;
                            }
                            local_50 = 16383;
                            if ((local_31 & 4) != 0) {
                                sVar5 = local_b0.gSmart1or2s();
                                goto LAB_10097a80d;
                            }
                            goto LAB_10097a810;
                        }
                        local_44 = 16383;
                        local_48 = 0;
                        local_4c = 0;
                        local_50 = 16383;
                        if ((local_31 & 1) != 0) {
                            sVar5 = local_b0.gSmart1or2s();
                            sVar6 = local_b0.gSmart1or2s();
                            local_4c = (int)sVar5;
                            local_50 = (int)sVar6;
                        }
                        if ((local_31 & 2) != 0) {
                            sVar5 = local_b0.gSmart1or2s();
                            sVar6 = local_b0.gSmart1or2s();
                            local_48 = (int)sVar5;
                            local_44 = (int)sVar6;
                        }
                        if ((local_31 & 4) == 0) {
                            local_40 = 16383;
                            local_38 = 0;
                        } else {
                            sVar5 = local_b0.gSmart1or2s();
                            sVar6 = local_b0.gSmart1or2s();
                            local_38 = (int)sVar5;
                            local_40 = (int)sVar6;
                        }
                    } else {
                        if ((local_31 & 1) != 0) {
                            sVar5 = local_b0.gSmart1or2s();
                            local_b0.gSmart1or2s();
                            local_4c = (int)sVar5;
                        }
                        local_48 = local_38;
                        if ((local_31 & 2) != 0) {
                            sVar5 = local_b0.gSmart1or2s();
                            local_b0.gSmart1or2s();
                            local_48 = (int)sVar5;
                        }
                        local_50 = 16383;
                        if ((local_31 & 4) != 0) {
                            sVar5 = local_b0.gSmart1or2s();
                            local_b0.gSmart1or2s();
                        LAB_10097a80d:
                            local_38 = (int)sVar5;
                        }
                    LAB_10097a810:
                        local_44 = 16383;
                        local_40 = 16383;
                    }
                    uVar1 = 4294967295;
                    if ((uint8_t)(bVar3 - 1) < 3 && (int)local_54 < (int)local_58) {
                        local_54 = local_58;
                        uVar1 = local_58;
                    }
                    puVar9 = (unsigned int*)(*local_70)[(unsigned long)field_24];
                    *puVar9 = uVar7;
                    arg2_01 = (float)local_48;
                    this_00 = (Vector3T<float>*)(puVar9 + 1);
                    this_00->Set((float)local_4c, arg2_01, (float)local_38);
                    switch (bVar3 - 2) {
                    case 0:
                        ((puVar9 + 4))->Set((float)local_50, (float)local_44, (float)local_40);
                        *this_00 *= (6.103888e-05);
                        (*((puVar9 + 4))) *= (6.103888e-05);
                        math::Matrix33RotationSinCos<float>(local_d8, *this_00);
                        *((puVar9 + 10)) = math::QuaternionT<float>::FromRotationMatrix(local_d8);
                        break;
                    case 1:
                    case 8:
                        *this_00 /= 128.0;
                        break;
                    default:
                        if (bVar3 < 2) {
                            puVar9[2] = puVar9[2] ^ 2147483648;
                        }
                        break;
                    case 7:
                        *(unsigned int*)this_00 = *(unsigned int*)this_00 ^ 2147483648;
                        local_90 = *3.1415927f * *this_00;
                        local_88 = arg2_01;
                        local_d8 = local_90 / *16383.0;
                        local_d0 = arg2_01;
                        this_00->SetXYZ(local_d8);
                    }
                    puVar9[14] = local_31 >> 3 & 3;
                    puVar9[15] = uVar1;
                    field_24 = field_24 + 1;
                    this = this;
                    this_02 = local_78;
                }
                uVar7 = uVar7 + 1;
                arg2 = (PacketT<Array<unsigned char> _>*)local_60;
            } while (local_64 != uVar7);
        }
        lVar8 = local_b0.size();
        long lVar10 = arg2.GetTextureAtlas();
        if (lVar8 != lVar10) {
            LogAssert("dataPacket2.GetPos() == dataPacket.GetSize()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek5/"
                      "AnimationFrameRT5.cpp",
                      405, "AnimationFrameRT5: Unpack error - not at end of packet");
        }
        m_valid = 1;
    }

    // 0x10097abd0
    AnimationFrameRT5::AnimationFrameRT5(const shared_ptr<AnimBase>& animBase, const AnimKeyFrameSet& animKeyFrameSet,
                                         WrapArray<WrapArray<AnimCurveSegmentCacheData>>& wrapArray, float arg4)
        : MakeSharedPool<AnimationFrameRT5, 20480>(), m_valid(0) {
        uint8_t bVar1;
        unsigned char arg2;
        AnimTransform animTransform;
        uint8_t auVar4[8];
        unsigned long uVar6;
        AnimBase* pAVar7;
        Joint* this_00;
        WrapArray<AnimCurveSegmentCacheData>* wrapArray_00;
        Vector3T<float>* vector3;
        int iVar8;
        unsigned long arg1;
        uint8_t auVar9[16];
        ReturnValue local_d8;
        Vector4T<float> local_a8;
        uint64_t local_88[2];
        shared_ptr<AnimBase>* local_70;
        unsigned int local_60;
        uint8_t local_58[8];
        uint8_t local_50[8];
        uint8_t local_48[8];
        uint8_t local_40[8];
        unsigned int local_34;

        shared_ptr<AnimBase>* this_02 = (shared_ptr<AnimBase>*)&field_8;
        new (this_02) shared_ptr();
        field_24 = 0;
        local_50 = (uint8_t[8]) & field_32;
        new (local_50) eastl::vector<AnimationFrameRT5Transform>();
        local_40 = (uint8_t[8])this;
        *this_02 = animBase;
        auVar4 = (uint8_t[8])animKeyFrameSet.second();
        auto animCurves1 = auVar4->HeapBeginPtr();
        local_48 = auVar4;
        auVar9 = auVar4->end();
        unsigned int uVar3 =
            std::count_if<eastl::vector<AnimCurve> const*,
                          AnimationFrameRT5::AnimationFrameRT5(shared_ptr<AnimBase> const&, AnimKeyFrameSet const&,
                                                               WrapArray<WrapArray<AnimCurveSegmentCacheData>>&,
                                                               float)::__0>(animCurves1, auVar9._0_8_, auVar9._8_8_);
        auVar4 = local_40;
        *(unsigned int*)((long)local_40 + 24) = uVar3;
        local_50->resize((unsigned long)uVar3);
        *(unsigned int*)((long)auVar4 + 24) = 0;
        Vector3T<int> local_98;
        if (local_48->size() != 0) {
            local_58 = (uint8_t[8])1;
            arg1 = 0;
            this_00 = nullptr;
            local_34 = 0;
            local_70 = this_02;
            do {
                pAVar7 = (AnimBase*)(*this_02).operator->();
                local_60 = local_58._0_4_ - 1;
                bVar1 = pAVar7->GetTransformType(local_60);
                if (bVar1 == 0) {
                    pAVar7 = (AnimBase*)(*this_02).operator->();
                    arg2 = animKeyFrameSet.GetBindID();
                    this_00 = pAVar7->GetJointByOriginMappedID(local_34, arg2);
                    local_34 = local_34 + 1;
                LAB_10097ad2e:
                    if (this_00 != nullptr) {
                        local_d8 = this_00->GetWorldBind();
                        local_88[0] = local_a8.GetXYZ();
                        local_98.SetXYZ(*local_88);
                    }
                } else if (bVar1 == 0)
                    goto LAB_10097ad2e;
                if (((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(*local_48)[arg1])
                        ->empty() == '\0') {
                    if (bVar1 == 0) {
                        LogAssert("transformType != AnimTransform::ORIGIN",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek5/AnimationFrameRT5.cpp",
                                  445, nullptr);
                    }
                    animTransform = (*local_50)[(unsigned long)*(unsigned int*)((long)local_40 + 24)];
                    wrapArray_00 = (WrapArray<AnimCurveSegmentCacheData>*)(*local_48)[arg1];
                    vector3 = &wrapArray[arg1];
                    AnimationFrameRT5Transform::ConvertFromCurves(animTransform, (unsigned int)bVar1,
                                                                  *((vector<AnimCurve>*)(unsigned long)local_60),
                                                                  *wrapArray_00, arg4, *vector3, &local_98);
                    *(unsigned int*)((long)local_40 + 24) = *(unsigned int*)((long)local_40 + 24) + 1;
                    this_02 = local_70;
                }
                iVar8 = local_58._0_4_;
                arg1 = (unsigned long)local_58 & 4294967295;
                uVar6 = local_48->size();
                local_58._0_4_ = iVar8 + 1;
                local_58._4_4_ = 0;
            } while (arg1 < uVar6);
        }
        *(uint8_t*)local_40 = 1;
    }

} // namespace jag::graphics
