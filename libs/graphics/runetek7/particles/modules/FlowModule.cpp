// libs/graphics/runetek7/particles/modules/FlowModule.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "FlowModule.h"

namespace jag::graphics::particlemodules {
    // 0x100f3dcf8, 8 bytes, __data
    Flow::m_particleCountMultiplier = 1065353216;

    // 0x1007d9160, 384 bytes, placed by debug map only (low confidence)
    // Flow::Shape::LoadFromPacket(unsigned char, PacketT<Array<unsigned char, eastl::allocator> >&)
    undefined8 Flow::Shape::LoadFromPacket(uchar param_1, PacketT* param_2) {
        byte bVar1;
        char cVar2;
        float extraout_XMM0_Da;
        float extraout_XMM0_Da_00;
        float fVar3;
        float extraout_XMM0_Da_01;
        Vector3T<float> local_58[40];
        float local_30;
        float local_2c;
        float local_28;

        bVar1 = param_2->g1();
        field_0 = (uint)bVar1;
        cVar2 = param_2->g1();
        field_4 = cVar2 == '\x01';
        math::Vector3T<float>::Vector3T(local_58, param_2, false);
        (&field_8, (Vector3T*)local_58)->SetXYZ();
        new (&local_30) math::Vector3T<float>(param_2, false);
        math::Matrix33RotationYawPitchRoll<float>((math*)local_58, local_30, local_2c, local_28);
        math::Matrix33T<float>::operator=((Matrix33T<float>*)&field_20, (Matrix33T*)local_58);
        switch (field_0 - 1) {
        case 0:
            break;
        case 1:
            fVar3 = (float)param_2->gFloat();
            field_64 = fVar3 * 0.5;
            break;
        case 2:
            fVar3 = (float)param_2->gFloat();
            field_64 = fVar3 * 0.5;
            fVar3 = (float)param_2->gFloat();
            field_60 = fVar3 * 0.5;
            break;
        case 3:
        case 5:
        case 6:
            param_2->gFloat();
            field_56 = extraout_XMM0_Da;
            return 1;
        case 4:
            fVar3 = (float)param_2->gFloat();
            field_60 = fVar3;
            fVar3 = (float)param_2->gFloat();
            field_56 = fVar3;
            param_2->gFloat();
            field_64 = extraout_XMM0_Da_01;
            return 1;
        case 7:
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "particles/modules/FlowModule.cpp",
                            51, (char*)0);
        default:
            goto switchD_1007d91ff_default;
        }
        param_2->gFloat();
        field_56 = extraout_XMM0_Da_00 * 0.5;
    switchD_1007d91ff_default:
        return 1;
    }

    // 0x1007d92e0, 416 bytes, placed by debug map only (low confidence)
    // Flow::Shape::GetRandomPoint(math::Random&) const
    undefined8 Flow::Shape::GetRandomPoint(Random* param_1) {
        ColourHSL* pCVar1;
        float fVar2;
        float in_XMM1_Da;
        ColourHSL local_40;
        ColourHSL local_30;

        switch (field_0) {
        case 0:
            return field_8;
        case 1:
            fVar2 = (float)param_1->FRandS(field_56);
            new (&local_40) math::ColourHSL(fVar2, 0.0, 0.0);
            local_30._0_8_ = math::operator*((Vector3T*)&local_40, &field_20);
            pCVar1 = &local_30;
            local_30.field_8 = 0.0;
            goto LAB_1007d944b;
        case 2:
            in_XMM1_Da = field_56;
            local_30._0_8_ = math::GetRandomPointPlane(param_1, field_64, in_XMM1_Da, field_4);
            break;
        case 3:
            in_XMM1_Da = field_60;
            local_30._0_8_ = math::GetRandomPointBox(param_1, field_64, in_XMM1_Da, field_56, field_4);
            break;
        case 4:
            local_30._0_8_ = math::GetRandomPointDisc(param_1, field_56, field_4);
            break;
        case 5:
            in_XMM1_Da = field_56;
            local_30._0_8_ = math::GetRandomPointCone(param_1, field_60, in_XMM1_Da, field_64, field_4);
            break;
        case 6:
            local_30._0_8_ = math::GetRandomPointSphere(param_1, field_56, field_4);
            pCVar1 = &local_30;
            local_30.field_8 = in_XMM1_Da;
            goto LAB_1007d944b;
        case 7:
            local_30._0_8_ = math::GetRandomPointHemisphere(param_1, field_56, field_4);
            break;
        default:
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "particles/modules/FlowModule.cpp",
                            102, (char*)0);
        }
        local_30.field_8 = in_XMM1_Da;
        local_40._0_8_ = math::operator*((Vector3T*)&local_30, &field_20);
        pCVar1 = &local_40;
        local_40.field_8 = in_XMM1_Da;
    LAB_1007d944b:
        return math::operator+((Vector3T*)&field_8, (Vector3T*)pCVar1);
    }

    // 0x1007d9480, 224 bytes, placed by neighbouring functions
    // Flow::LoadFromPacket(unsigned char, PacketT<Array<unsigned char, eastl::allocator> >&)
    undefined1 Flow::LoadFromPacket(uchar param_1, PacketT* param_2) {
        byte bVar1;
        float fVar2;
        undefined4 uVar3;
        bitset<3ul, unsigned char> local_28[8];

        bVar1 = param_2->g1();
        eastl::bitset<3ul, unsigned char>::bitset(local_28, (uint)bVar1);
        eastl::bitset<3ul, unsigned char>::operator|=((bitset<3ul, unsigned char>*)&field_8, (bitset*)local_28);
        (&field_12, '\0', param_2)->LoadFromPacket();
        (&field_80, '\0', param_2)->LoadFromPacket();
        fVar2 = (float)param_2->gFloat();
        field_148 = fVar2;
        fVar2 = (float)param_2->gFloat();
        field_152 = fVar2;
        fVar2 = (float)param_2->gFloat();
        field_156 = fVar2;
        fVar2 = (float)param_2->gFloat();
        field_160 = fVar2;
        fVar2 = (float)param_2->gFloat();
        field_164 = fVar2;
        uVar3 = param_2->gFloat();
        field_168 = uVar3;
        uVar3 = param_2->gFloat();
        field_172 = uVar3;
        return 1;
    }

    // 0x1007d9590, 1744 bytes, placed by debug map only (low confidence)
    // Flow::ProcessTick(float, ParticleModuleUpdateParams const&, ParticleModuleUpdateState&, ParticleData&) const
    void Flow::ProcessTick(float param_1, ParticleModuleUpdateParams* param_2, ParticleModuleUpdateState* param_3,
                           ParticleData* param_4) {
        undefined1* this_00;
        undefined2 uVar1;
        ushort uVar2;
        undefined8 uVar3;
        Flow* pFVar4;
        ParticleModuleUpdateState* pPVar5;
        char cVar6;
        long lVar7;
        undefined2* puVar8;
        ulong uVar9;
        ushort* puVar10;
        Random* pRVar11;
        float* pfVar12;
        Vector3T* extraout_RDX;
        short sVar13;
        uint uVar14;
        ulong uVar15;
        QuaternionT* pQVar17;
        Vector3T* pVVar18;
        float fVar19;
        float fVar20;
        ushort local_150[8];
        Shape* local_140;
        Shape* local_138;
        float* local_130;
        float* local_128;
        QuaternionT* local_120;
        Vector3T* local_118;
        math* local_110;
        QuaternionT* local_108;
        float* local_100;
        vector<float, SafeBucketAllocatorEASTL>* local_f8;
        vector<float, SafeBucketAllocatorEASTL>* local_f0;
        undefined8 local_e8;
        undefined4 local_e0;
        undefined8 local_d8;
        float local_d0;
        bitset<3ul, unsigned char>* local_c8;
        ParticleModuleUpdateParams* local_c0;
        undefined1 local_b8[16];
        undefined4 local_a0;
        uint local_9c;
        ParticleData* local_98;
        Flow* local_90;
        ushort local_88[4];
        float local_80;
        undefined8 local_78;
        float local_70;
        undefined8 local_68;
        float local_60;
        ParticleModuleUpdateState* local_58;
        Vector3T local_50[8];
        float local_48;
        float local_44;
        float local_40;
        float local_3c;
        undefined4 local_38;
        float local_34;

        if ((Module::m_debugDisabled == '\0') && (field_148 <= *(float*)&param_2[1].field_24)) {
            local_34 = field_148 + field_156;
            local_3c = param_1;
            cVar6 = IsSingleBurstSpawn(this);
            if ((cVar6 != '\0') && (local_34 <= *(float*)&param_2[1].field_24)) {
                local_3c = *(float*)&param_2[1].field_24 - local_3c;
                if (local_3c < 0.0 || local_34 <= local_3c) {
                    return;
                }
                local_3c = local_34 - local_3c;
            }
            local_90 = this;
            local_58 = param_3;
            local_34 = (float)GetSpawnRate(this);
            local_b8 = ZEXT416(~-(uint)(5.0 < local_34) & 1065353216 |
                               *(uint*)PTR_m_particleCountMultiplier_100ee69d8 & -(uint)(5.0 < local_34));
            cVar6 = param_4->CanRender();
            local_98 = param_4;
            if (cVar6 == '\0') {
                lVar7 = param_4->GetCount();
                if (lVar7 != 0) {
                    this_00 = &param_4->field_216;
                    uVar15 = 0;
                    do {
                        uVar1 = *(undefined2*)&param_2[1].field_8;
                        eastl::vector<ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>,
                                      SafeBucketAllocatorEASTL>::
                        operator[]((vector<ParticleVertexDataProxy<ParticleData::MaterialSlotRotationData>,
                                           SafeBucketAllocatorEASTL>*)this_00,
                                   uVar15);
                        eastl::rbtree<
                            unsigned int,
                            eastl::pair<unsigned int const,
                                        eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                            eastl::less<unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<
                                unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                            true, true>::end();
                        puVar8 = (undefined2*)local_150->HeapBeginPtr();
                        param_4 = local_98;
                        *puVar8 = uVar1;
                        local_150->~SplatOp();
                        uVar15 = uVar15 + 1;
                        uVar9 = param_4->GetCount();
                    } while (uVar15 < uVar9);
                }
            }
            pPVar5 = local_58;
            local_34 = local_34 * local_3c * (float)local_b8._0_4_ + *(float*)local_58;
            *(float*)local_58 = local_34;
            local_150[0] = (ushort)(int)((float)*(ushort*)&param_2[1].field_20 * (float)local_b8._0_4_);
            local_88[0] = (short)(int)local_34;
            puVar10 = std::min<unsigned short>(local_150, local_88);
            pFVar4 = local_90;
            uVar2 = *puVar10;
            if (uVar2 != 0) {
                *(float*)pPVar5 = local_34 - (float)uVar2;
                lVar7 = param_4->GetCount();
                param_4->Reserve(lVar7 + (ulong)uVar2);
                local_38 = (uint)local_38._2_2_ << 16;
                new (((long)&local_38 + 2)) eastl::bitset<4ul, unsigned char>();
                local_38 = local_38 & 16777215;
                if (param_2[1].field_10 != '\0') {
                    local_38.SetTilingData(param_2[1].field_10, param_2[1].field_11);
                }
                if (*(int*)&param_2[1].field_32 == 1) {
                    (((long)&local_38 + 2))->set(0, true);
                }
                local_44 = 0.0;
                if (((*PTR_m_enableFrameInterpolation_100ee6a68 != '\0') &&
                     (local_44 = 0.0, *(char*)param_2 != '\0')) &&
                    (local_44 = 0.0, 1 < uVar2)) {
                    local_44 = 1.0 / (float)(int)(uVar2 - 1);
                }
                pVVar18 = (Vector3T*)&param_2->field_32;
                pQVar17 = (QuaternionT*)&param_2->field_44;
                local_110 = (math*)&param_2->field_4;
                local_108 = (QuaternionT*)&param_2->field_16;
                local_140 = (Shape*)&pFVar4->field_12;
                local_138 = (Shape*)&pFVar4->field_80;
                local_c8 = (bitset<3ul, unsigned char>*)&pFVar4->field_8;
                local_130 = &pFVar4->field_160;
                local_128 = &pFVar4->field_164;
                local_100 = (float*)&pFVar4->field_168;
                local_90 = (Flow*)&pFVar4->field_172;
                uVar14 = 1;
                if (1 < uVar2) {
                    uVar14 = (uint)uVar2;
                }
                local_f8 = (vector<float, SafeBucketAllocatorEASTL>*)&local_98->field_48;
                local_f0 = (vector<float, SafeBucketAllocatorEASTL>*)&local_98->field_24;
                local_34 = 0.0;
                local_120 = pQVar17;
                local_118 = pVVar18;
                local_c0 = param_2;
                do {
                    local_e0 = *(undefined4*)(pVVar18 + 8);
                    local_e8 = *(undefined8*)pVVar18;
                    new (local_150) math::QuaternionT<float>(pQVar17);
                    fVar20 = local_44;
                    local_9c = uVar14;
                    if (local_44 != 0.0) {
                        local_88 = (ushort[4])math::Lerp<math::Vector3T<float>, float>(local_110, pVVar18, extraout_RDX,
                                                                                       local_34);
                        local_80 = fVar20;
                        local_e8.SetXYZ(local_88);
                        math::SLerp<float>((math*)local_88, local_108, pQVar17, local_34);
                        math::Rect<float>::operator=((Rect<float>*)local_150, (Rect*)local_88);
                        local_34 = local_34 + local_44;
                    }
                    pRVar11 = (Random*)Module::g_moduleRng();
                    local_78 = local_140->GetRandomPoint(pRVar11);
                    local_70 = fVar20;
                    local_88 = (ushort[4])math::operator*((Vector3T*)&local_78, (QuaternionT*)local_150);
                    local_80 = fVar20;
                    local_78 = math::operator+((Vector3T*)&local_e8, (Vector3T*)local_88);
                    local_70 = fVar20;
                    pRVar11 = (Random*)Module::g_moduleRng();
                    local_68 = local_138->GetRandomPoint(pRVar11);
                    local_60 = fVar20;
                    local_50 = (Vector3T[8])math::operator*((Vector3T*)&local_68, (QuaternionT*)local_150);
                    local_48 = fVar20;
                    local_d8 = math::operator+((Vector3T*)&local_e8, local_50);
                    local_d0 = fVar20;
                    cVar6 = eastl::bitset<3ul, unsigned char>::test(local_c8, 0);
                    if (cVar6 != '\0') {
                        math::Vector3T<float>::operator+=((Vector3T<float>*)&local_d8, (Vector3T*)local_88);
                    }
                    pRVar11 = (Random*)Module::g_moduleRng();
                    fVar19 = (float)pRVar11->FRand(1.0);
                    local_b8._0_4_ = fVar19;
                    fVar19 = math::Lerp<float, float>(local_130, local_128, fVar19);
                    local_58 = (ParticleModuleUpdateState*)CONCAT44(local_58._4_4_, fVar19);
                    uVar3 = math::operator-((Vector3T*)&local_d8, (Vector3T*)&local_78);
                    uVar14 = local_9c;
                    pVVar18 = local_118;
                    pQVar17 = local_120;
                    if ((local_34 == 0.0) || (local_34 * local_3c < local_58._0_4_)) {
                        local_50 = (Vector3T[8])uVar3;
                        local_48 = fVar20;
                        local_40 = local_34 * local_3c;
                        cVar6 = eastl::bitset<3ul, unsigned char>::test(local_c8, 2);
                        if (cVar6 != '\0') {
                            local_68 = math::operator-((math*)local_50, (Vector3T*)2);
                            local_60 = fVar20;
                            local_50->SetXYZ((Vector3T*)&local_68);
                        }
                        fVar20 = math::Lerp<float, float>(local_100, (float*)local_90, (float)local_b8._0_4_);
                        math::Vector3T<float>::operator*=((Vector3T<float>*)local_50, fVar20);
                        if (local_c0[1].field_10 != 0) {
                            local_38._0_2_ = CONCAT11((char)(((int)((float)local_b8._0_4_ * 65535.0) & 65535U) %
                                                             (uint)(byte)local_c0[1].field_10),
                                                      (uchar)local_38);
                        }
                        new (&local_68) math::Point<float>(50.0, 50.0);
                        new (&local_a0) math::ColourStorage8888<math::RGBA8StorageLayout>(1.0, 1.0, 1.0, 1.0);
                        local_b8._0_4_->Add(local_58._0_4_, local_98, &local_78, local_50, (Point<float>*)&local_68,
                                            local_a0, *(undefined2*)&local_c0[1].field_8, local_38);
                        if (local_34 != 0.0) {
                            pfVar12 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::back(local_f8);
                            local_40 = local_40 * *pfVar12;
                            if (1.0 < local_40) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("interpolatedLifetimeT <= 1.f",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek7/particles/modules/FlowModule.cpp",
                                          274, (char*)0);
                            }
                            pfVar12 = (float*)eastl::vector<float, SafeBucketAllocatorEASTL>::back(local_f0);
                            *pfVar12 = local_40;
                        }
                    }
                    sVar13 = (short)uVar14 + -1;
                    uVar14 = CONCAT22((short)(uVar14 >> 16), sVar13);
                } while (sVar13 != 0);
            }
        }
    }

    // 0x1007d9c80, 32 bytes, placed by neighbouring functions
    // Flow::GetSpawnRate() const
    float Flow::GetSpawnRate() {
        return field_152 / field_156;
    }

    // 0x1007da0f0, 1632 bytes, placed by __FILE__ string
    // Flow::Shape::RenderDebug(math::Matrix44T<float> const&, unsigned int) const
    void Flow::Shape::RenderDebug(Matrix44T* param_1, uint param_2) {
        long* plVar1;
        float in_XMM1_Da;
        float fVar2;
        float fVar3;
        ColourHSL local_110;
        undefined1 local_100[40];
        ColourHSL local_d8;
        undefined1 local_c8[40];
        ColourHSL local_a0;
        float local_90;
        float local_8c;
        OBB local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        switch (field_0) {
        case 0:
            local_c8._0_8_ = param_1->TransformPoint((Vector3T*)&field_8);
            fVar3 = 1.0;
            local_c8._8_4_ = in_XMM1_Da;
            goto LAB_1007da1ac;
        case 1:
            fVar3 = 0.0;
            local_8c = (float)param_2;
            new (&local_a0) math::ColourHSL(field_56 * -0.5, 0.0, 0.0);
            local_100._0_8_ = math::operator*((Vector3T*)&local_a0, &field_20);
            local_100._8_4_ = fVar3;
            local_c8._0_8_ = math::operator+((Vector3T*)&field_8, (Vector3T*)local_100);
            local_c8._8_4_ = fVar3;
            local_88._0_8_ = param_1->TransformPoint(local_c8);
            fVar2 = 0.0;
            local_88.field_8 = fVar3;
            new (&local_d8) math::ColourHSL(field_56 * 0.5, 0.0, 0.0);
            local_a0._0_8_ = math::operator*((Vector3T*)&local_d8, &field_20);
            local_a0.field_8 = fVar2;
            local_100._0_8_ = math::operator+((Vector3T*)&field_8, (Vector3T*)&local_a0);
            local_100._8_4_ = fVar2;
            local_c8._0_8_ = param_1->TransformPoint(local_100);
            local_c8._8_4_ = fVar2;
            plVar1 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != (long*)0) {
                new (local_100) oldscape::sidebars::SideBarData((int)local_8c, 3);
                (**(code**)(*plVar1 + 24))(plVar1, &local_88, local_c8, (SideBarData*)local_100);
            }
            break;
        case 2:
            local_c8._0_8_ = param_1->TransformPoint((Vector3T*)&field_8);
            fVar3 = 0.0;
            local_c8._8_4_ = in_XMM1_Da;
            new (&local_d8) math::ColourHSL(0.0, 0.0, 1.0);
            local_a0._0_8_ = math::operator*((Vector3T*)&local_d8, &field_20);
            local_a0.field_8 = fVar3;
            local_88.GetRot();
            local_100._0_8_ = math::operator*((Vector3T*)&local_a0, (Matrix33T*)&local_88);
            local_100._8_4_ = fVar3;
            new (&local_88) math::PlaneT<float>(local_100, local_c8);
            plVar1 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != (long*)0) {
                fVar3 = field_64;
                fVar2 = field_56;
                new (&local_a0) oldscape::sidebars::SideBarData(param_2, 3);
                (**(code**)(*plVar1 + 104))(plVar1, local_c8, &local_88, (int)fVar3, (int)fVar2, &local_a0);
            }
            break;
        case 3:
            local_100._0_8_ = param_1->TransformPoint((Vector3T*)&field_8);
            local_100._8_4_ = in_XMM1_Da;
            local_c8->GetRot();
            new (&local_a0) math::ColourHSL(field_64, field_60, field_56);
            new (&local_88) math::OBB(local_100, local_c8, (Vector3T*)&local_a0);
            plVar1 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != (long*)0) {
                new (local_c8) oldscape::sidebars::SideBarData(param_2, 3);
                (**(code**)(*plVar1 + 80))(plVar1, &local_88, (SideBarData*)local_c8);
            }
            break;
        case 4:
            local_90 = field_56 + field_56;
            local_8c = (float)param_2;
            local_100->GetRot();
            math::operator*(local_c8, &field_20);
            new (&local_a0) math::QuaternionT<float>(local_c8);
            local_d8._0_8_ = param_1->TransformPoint((Vector3T*)&field_8);
            new (&local_110) math::ColourHSL(local_90, 1.0, local_90);
            new (&local_88)
                math::Matrix44T<float>((QuaternionT*)&local_a0, (Vector3T*)&local_d8, (Vector3T*)&local_110);
            plVar1 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != (long*)0) {
                new (local_c8) oldscape::sidebars::SideBarData((int)local_8c, 3);
                (**(code**)(*plVar1 + 64))(plVar1, &local_88, (SideBarData*)local_c8);
            }
            break;
        case 5:
            local_100._36_4_ = field_56;
            local_90 = field_64;
            local_8c = (float)param_2;
            local_88.GetRot();
            math::operator*((Matrix33T<float>*)local_c8, (Matrix33T*)&local_88);
            math::Matrix33RotationX<float>((math*)local_100, 3.1415927);
            math::operator*((Matrix33T*)&local_88, (Matrix33T<float>*)local_c8);
            math::Matrix33T<float>::operator=((Matrix33T<float>*)local_c8, (Matrix33T*)&local_88);
            new (local_100) math::QuaternionT<float>(local_c8);
            local_a0._0_8_ = param_1->TransformPoint((Vector3T*)&field_8);
            local_a0.field_8 = in_XMM1_Da;
            new (&local_d8) math::ColourHSL((float)local_100._36_4_, local_90, (float)local_100._36_4_);
            new (&local_88) math::Matrix44T<float>(local_100, (Vector3T*)&local_a0, (Vector3T*)&local_d8);
            plVar1 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != (long*)0) {
                new (local_100) oldscape::sidebars::SideBarData((int)local_8c, 3);
                (**(code**)(*plVar1 + 56))(plVar1, &local_88, (SideBarData*)local_100);
            }
            break;
        case 6:
        case 7:
            local_8c = field_56 + field_56;
            local_c8._0_8_ = param_1->TransformPoint((Vector3T*)&field_8);
            fVar3 = local_8c;
            local_c8._8_4_ = in_XMM1_Da;
        LAB_1007da1ac:
            new (&local_88) math::Sphere(local_c8, fVar3);
            plVar1 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != (long*)0) {
                new (local_c8) oldscape::sidebars::SideBarData(param_2, 3);
                (**(code**)(*plVar1 + 32))(plVar1, &local_88, (SideBarData*)local_c8);
            }
            break;
        case 8:
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "particles/modules/FlowModule.cpp",
                            359, (char*)0);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::graphics::particlemodules
