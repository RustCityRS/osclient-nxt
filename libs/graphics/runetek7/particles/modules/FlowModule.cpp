// libs/graphics/runetek7/particles/modules/FlowModule.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "FlowModule.h"

namespace jag::graphics::particlemodules {
    // 0x100f3dcf8
    int64_t Flow::m_particleCountMultiplier = 1065353216;

    // 0x1007d9160
    uint64_t Flow::Shape::LoadFromPacket(unsigned char arg1, PacketT<Array<unsigned char>>& arg2) {
        float extraout_XMM0_Da;
        float extraout_XMM0_Da_00;
        float fVar3;
        float extraout_XMM0_Da_01;
        float local_30;
        float local_2c;
        float local_28;

        uint8_t bVar1 = arg2.g1();
        field_0 = (unsigned int)bVar1;
        field_4 = arg2.g1() == '\x01';
        Vector3T<float> local_58(arg2, false);
        field_8.SetXYZ(local_58);
        new (&local_30) math::Vector3T(arg2, false);
        math::Matrix33RotationYawPitchRoll<float>(local_30, local_2c, local_28);
        field_20 = local_58;
        switch (field_0 - 1) {
        case 0:
            break;
        case 1:
            fVar3 = (float)arg2.gFloat();
            field_64 = fVar3 * 0.5;
            break;
        case 2:
            fVar3 = (float)arg2.gFloat();
            field_64 = fVar3 * 0.5;
            fVar3 = (float)arg2.gFloat();
            field_60 = fVar3 * 0.5;
            break;
        case 3:
        case 5:
        case 6:
            arg2.gFloat();
            field_56 = extraout_XMM0_Da;
            return 1;
        case 4:
            fVar3 = (float)arg2.gFloat();
            field_60 = fVar3;
            fVar3 = (float)arg2.gFloat();
            field_56 = fVar3;
            arg2.gFloat();
            field_64 = extraout_XMM0_Da_01;
            return 1;
        case 7:
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "particles/modules/FlowModule.cpp",
                            51, nullptr);
        default:
            goto switchD_1007d91ff_default;
        }
        arg2.gFloat();
        field_56 = extraout_XMM0_Da_00 * 0.5;
    switchD_1007d91ff_default:
        return 1;
    }

    // 0x1007d92e0
    uint64_t Flow::Shape::GetRandomPoint(math::Random& random) const {
        ColourHSL* vector32;
        float arg1;
        float in_XMM1_Da;
        ColourHSL local_40;
        ColourHSL local_30;

        switch (field_0) {
        case 0:
            return field_8;
        case 1:
            arg1 = (float)random.FRandS(field_56);
            local_40 = math::ColourHSL(arg1, 0.0, 0.0);
            local_30._0_8_ = local_40 * field_20;
            vector32 = &local_30;
            local_30.field_8 = 0.0;
            goto LAB_1007d944b;
        case 2:
            in_XMM1_Da = field_56;
            local_30._0_8_ = math::GetRandomPointPlane(random, field_64, in_XMM1_Da, field_4);
            break;
        case 3:
            in_XMM1_Da = field_60;
            local_30._0_8_ = math::GetRandomPointBox(random, field_64, in_XMM1_Da, field_56, field_4);
            break;
        case 4:
            local_30._0_8_ = math::GetRandomPointDisc(random, field_56, field_4);
            break;
        case 5:
            in_XMM1_Da = field_56;
            local_30._0_8_ = math::GetRandomPointCone(random, field_60, in_XMM1_Da, field_64, field_4);
            break;
        case 6:
            local_30._0_8_ = math::GetRandomPointSphere(random, field_56, field_4);
            vector32 = &local_30;
            local_30.field_8 = in_XMM1_Da;
            goto LAB_1007d944b;
        case 7:
            local_30._0_8_ = math::GetRandomPointHemisphere(random, field_56, field_4);
            break;
        default:
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "particles/modules/FlowModule.cpp",
                            102, nullptr);
        }
        local_30.field_8 = in_XMM1_Da;
        local_40._0_8_ = local_30 * field_20;
        vector32 = &local_40;
        local_40.field_8 = in_XMM1_Da;
    LAB_1007d944b:
        return field_8 + *vector32;
    }

    // 0x1007d9480
    uint8_t Flow::LoadFromPacket(unsigned char arg1, PacketT<Array<unsigned char>>& arg2) {
        uint8_t bVar1 = arg2.g1();
        bitset<3ul, unsigned char> local_28((unsigned int)bVar1);
        field_8 |= local_28;
        field_12.LoadFromPacket('\0', arg2);
        field_80.LoadFromPacket('\0', arg2);
        float fVar2 = (float)arg2.gFloat();
        field_148 = fVar2;
        fVar2 = (float)arg2.gFloat();
        field_152 = fVar2;
        fVar2 = (float)arg2.gFloat();
        field_156 = fVar2;
        fVar2 = (float)arg2.gFloat();
        field_160 = fVar2;
        fVar2 = (float)arg2.gFloat();
        field_164 = fVar2;
        uint32_t uVar3 = arg2.gFloat();
        field_168 = uVar3;
        uVar3 = arg2.gFloat();
        field_172 = uVar3;
        return 1;
    }

    // 0x1007d9590
    void Flow::ProcessTick(float arg1, const ParticleModuleUpdateParams& particleModuleUpdateParams,
                           ParticleModuleUpdateState& particleModuleUpdateState, ParticleData& particleData) const {
        uint8_t* puVar1;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>* this_00;
        QuaternionT<float>* this_01;
        unsigned short uVar2;
        uint64_t uVar3;
        UVAnimationData uvAnimationData;
        Flow* pFVar4;
        ParticleModuleUpdateState* pPVar5;
        bool cVar6;
        uint16_t uVar7;
        long lVar8;
        uint16_t* puVar9;
        unsigned long uVar10;
        unsigned short* puVar11;
        uint8_t* this_02;
        Random* pRVar12;
        float* pfVar13;
        short sVar14;
        unsigned int uVar15;
        unsigned long arg1_00;
        float fVar16;
        float fVar17;
        uint32_t in_stack_fffffffffffffeac;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            arStack_14c;
        uint64_t local_e8;
        uint32_t local_e0;
        uint64_t local_d8;
        float local_d0;
        bitset<3ul, unsigned char>* local_c8;
        ParticleModuleUpdateParams* local_c0;
        uint8_t local_b8[16];
        unsigned int local_a0;
        unsigned int local_9c;
        ParticleData* local_98;
        Flow* local_90;
        uint64_t local_88;
        float local_80;
        uint64_t local_78;
        float local_70;
        uint64_t local_68;
        float local_60;
        ParticleModuleUpdateState* local_58;
        uint64_t local_50;
        float local_48;
        float local_44;
        float local_40;
        float local_3c;
        uint32_t local_38;
        float local_34;

        if ((Module::m_debugDisabled == '\0') && (field_148 <= *(float*)&particleModuleUpdateParams[1].field_24)) {
            local_34 = field_148 + field_156;
            local_3c = arg1;
            cVar6 = IsSingleBurstSpawn();
            if ((cVar6) && (local_34 <= *(float*)&particleModuleUpdateParams[1].field_24)) {
                local_3c = *(float*)&particleModuleUpdateParams[1].field_24 - local_3c;
                if (local_3c < 0.0 || local_34 <= local_3c) {
                    return;
                }
                local_3c = local_34 - local_3c;
            }
            local_90 = this;
            local_58 = particleModuleUpdateState;
            local_34 = (float)GetSpawnRate();
            local_b8 = (unsigned __int128)(~-(unsigned int)(5.0 < local_34) & 1065353216 |
                                           *(unsigned int*)PTR_m_particleCountMultiplier_100ee69d8 &
                                               -(unsigned int)(5.0 < local_34));
            cVar6 = particleData.CanRender();
            local_98 = particleData;
            if (!cVar6) {
                lVar8 = particleData.GetCount();
                if (lVar8 != 0) {
                    puVar1 = &particleData.field_216;
                    arg1_00 = 0;
                    this_00 = &arStack_14c - 4;
                    do {
                        uVar7 = *(uint16_t*)&particleModuleUpdateParams[1].field_8;
                        (*puVar1)[arg1_00];
                        this_00->end();
                        puVar9 = (uint16_t*)this_00->HeapBeginPtr();
                        particleData = local_98;
                        *puVar9 = uVar7;
                        this_00->~SplatOp();
                        arg1_00 = arg1_00 + 1;
                        uVar10 = particleData.GetCount();
                    } while (arg1_00 < uVar10);
                }
            }
            pPVar5 = local_58;
            local_34 = local_34 * local_3c * (float)local_b8._0_4_ + *(float*)local_58;
            *(float*)local_58 = local_34;
            uVar7 = (uint16_t)(int)((float)*(unsigned short*)&particleModuleUpdateParams[1].field_20 *
                                    (float)local_b8._0_4_);
            local_88 = (((uint64_t)local_88._2_6_ << 16) | (uint16_t)((short)(int)local_34));
            puVar11 = std::min<unsigned short>(*((&arStack_14c - 4)), local_88);
            pFVar4 = local_90;
            uVar2 = *puVar11;
            if (uVar2 != 0) {
                *(float*)pPVar5 = local_34 - (float)uVar2;
                lVar8 = particleData.GetCount();
                particleData.Reserve(lVar8 + (unsigned long)uVar2);
                local_38 = (unsigned int)local_38._2_2_ << 16;
                new ((bitset<4ul, unsigned char>*)((long)&local_38 + 2)) eastl::bitset();
                local_38 = local_38 & 16777215;
                if (particleModuleUpdateParams[1].field_10 != '\0') {
                    local_38.SetTilingData(particleModuleUpdateParams[1].field_10,
                                           particleModuleUpdateParams[1].field_11);
                }
                if (*(int*)&particleModuleUpdateParams[1].field_32 == 1) {
                    *((ReturnValue*)((long)&local_38 + 2)) = eastl::bitset<7ul, unsigned char>::set(0, true);
                }
                local_44 = 0.0;
                if (((*PTR_m_enableFrameInterpolation_100ee6a68 != '\0') &&
                     (local_44 = 0.0, *(char*)particleModuleUpdateParams != '\0')) &&
                    (local_44 = 0.0, 1 < uVar2)) {
                    local_44 = 1.0 / (float)(int)(uVar2 - 1);
                }
                local_c8 = (bitset<3ul, unsigned char>*)&pFVar4->field_8;
                local_90 = (Flow*)&pFVar4->field_172;
                uVar15 = 1;
                if (1 < uVar2) {
                    uVar15 = (unsigned int)uVar2;
                }
                puVar1 = &local_98->field_48;
                this_02 = &local_98->field_24;
                local_34 = 0.0;
                this_01 = (QuaternionT<float>*)(&arStack_14c - 4);
                local_c0 = particleModuleUpdateParams;
                do {
                    local_e0 = *(uint32_t*)&particleModuleUpdateParams.field_40;
                    local_e8 = *(uint64_t*)&particleModuleUpdateParams.field_32;
                    new (this_01) math::QuaternionT<float>(particleModuleUpdateParams.field_44);
                    fVar17 = local_44;
                    local_9c = uVar15;
                    if (local_44 != 0.0) {
                        local_88 = math::Lerp<math::Vector3T<float>, float>(
                            particleModuleUpdateParams.field_4, particleModuleUpdateParams.field_32, local_34);
                        local_80 = fVar17;
                        local_e8.SetXYZ(local_88);
                        math::SLerp<float>(local_88, particleModuleUpdateParams.field_16, local_34);
                        *this_01 = local_88;
                        local_34 = local_34 + local_44;
                    }
                    pRVar12 = (Random*)Module::g_moduleRng();
                    local_78 = pFVar4->field_12.GetRandomPoint(*pRVar12);
                    local_70 = fVar17;
                    local_88 = local_78 * *this_01;
                    local_80 = fVar17;
                    local_78 = local_e8 + local_88;
                    local_70 = fVar17;
                    pRVar12 = (Random*)Module::g_moduleRng();
                    local_68 = pFVar4->field_80.GetRandomPoint(*pRVar12);
                    local_60 = fVar17;
                    local_50 = local_68 * *this_01;
                    local_48 = fVar17;
                    local_d8 = local_e8 + local_50;
                    local_d0 = fVar17;
                    cVar6 = local_c8->test(0);
                    if (cVar6) {
                        local_d8 += local_88;
                    }
                    pRVar12 = (Random*)Module::g_moduleRng();
                    fVar16 = (float)pRVar12->FRand(1.0);
                    local_b8._0_4_ = fVar16;
                    fVar16 = math::Lerp<float, float>(pFVar4->field_160, pFVar4->field_164, fVar16);
                    local_58 = (ParticleModuleUpdateState*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)fVar16);
                    uVar3 = local_d8 - local_78;
                    uVar15 = local_9c;
                    if ((local_34 == 0.0) || (local_34 * local_3c < local_58._0_4_)) {
                        local_50 = uVar3;
                        local_48 = fVar17;
                        local_40 = local_34 * local_3c;
                        cVar6 = local_c8->test(2);
                        if (cVar6) {
                            local_68 = math::operator-((Vector3T<float>*)&local_50);
                            local_60 = fVar17;
                            local_50.SetXYZ(local_68);
                        }
                        fVar17 = math::Lerp<float, float>(pFVar4->field_168, *local_90, (float)local_b8._0_4_);
                        local_50 *= fVar17;
                        if (local_c0[1].field_10 != 0) {
                            local_38._0_2_ = (((uint16_t)((char)(((int)((float)local_b8._0_4_ * 65535.0) & 65535U) %
                                                                 (unsigned int)(uint8_t)local_c0[1].field_10))
                                               << 8) |
                                              (uint8_t)((unsigned char)local_38));
                        }
                        new (&local_68) math::Point(50.0, 50.0);
                        new (&local_a0) math::ColourStorage8888(1.0, 1.0, 1.0, 1.0);
                        uvAnimationData._4_4_ = in_stack_fffffffffffffeac;
                        uvAnimationData.field_0 = (unsigned char)local_38;
                        uvAnimationData._1_2_ = local_38._1_2_;
                        uvAnimationData.field_3 = local_38._3_1_;
                        uvAnimationData._8_2_ = uVar7;
                        local_98->Add((float)local_b8._0_4_, local_58._0_4_, local_78, local_50, local_68,
                                      (ColourStorage8888<math::RGBA8StorageLayout>*)(unsigned long)local_a0,
                                      *(unsigned short*)&local_c0[1].field_8, 0.0, uvAnimationData);
                        if (local_34 != 0.0) {
                            pfVar13 = (float*)puVar1->back();
                            local_40 = local_40 * *pfVar13;
                            if (1.0 < local_40) {
                                LogAssert("interpolatedLifetimeT <= 1.f",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek7/particles/modules/FlowModule.cpp",
                                          274, nullptr);
                            }
                            pfVar13 = (float*)this_02->back();
                            *pfVar13 = local_40;
                        }
                    }
                    sVar14 = (short)uVar15 - 1;
                    uVar15 = (((uint32_t)((short)(uVar15 >> 16)) << 16) | (uint16_t)sVar14);
                } while (sVar14 != 0);
            }
        }
    }

    // 0x1007d9c80
    float Flow::GetSpawnRate() const {
        return field_152 / field_156;
    }

    // 0x1007da0f0
    void Flow::Shape::RenderDebug(const math::Matrix44T<float>& matrix44, unsigned int arg2) const {
        long* plVar1;
        float in_XMM1_Da;
        float fVar2;
        float fVar3;
        ColourHSL local_110;
        uint8_t local_100[36];
        float local_dc;
        ColourHSL local_d8;
        uint8_t local_c8[40];
        ColourHSL local_a0;
        float local_90;
        float local_8c;
        OBB local_88;

        switch (field_0) {
        case 0:
            local_c8._0_8_ = matrix44.TransformPoint(field_8);
            fVar3 = 1.0;
            local_c8._8_4_ = in_XMM1_Da;
            goto LAB_1007da1ac;
        case 1:
            fVar3 = 0.0;
            local_8c = (float)arg2;
            local_a0 = math::ColourHSL(field_56 * -0.5, 0.0, 0.0);
            local_100._0_8_ = local_a0 * field_20;
            local_100._8_4_ = fVar3;
            local_c8._0_8_ = field_8 + *local_100;
            local_c8._8_4_ = fVar3;
            local_88._0_8_ = matrix44.TransformPoint(*local_c8);
            fVar2 = 0.0;
            local_88.field_8 = fVar3;
            local_d8 = math::ColourHSL(field_56 * 0.5, 0.0, 0.0);
            local_a0._0_8_ = local_d8 * field_20;
            local_a0.field_8 = fVar2;
            local_100._0_8_ = field_8 + local_a0;
            local_100._8_4_ = fVar2;
            local_c8._0_8_ = matrix44.TransformPoint(*local_100);
            local_c8._8_4_ = fVar2;
            plVar1 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != nullptr) {
                new (local_100) oldscape::sidebars::SideBarData((int)local_8c, 3);
                (**(void (**)(...))(*plVar1 + 24))(plVar1, &local_88, local_c8, (SideBarData*)local_100);
            }
            break;
        case 2:
            local_c8._0_8_ = matrix44.TransformPoint(field_8);
            fVar3 = 0.0;
            local_c8._8_4_ = in_XMM1_Da;
            local_d8 = math::ColourHSL(0.0, 0.0, 1.0);
            local_a0._0_8_ = local_d8 * field_20;
            local_a0.field_8 = fVar3;
            local_88.GetRot();
            local_100._0_8_ = local_a0 * local_88;
            local_100._8_4_ = fVar3;
            local_88 = math::PlaneT<float>(local_100, local_c8);
            plVar1 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != nullptr) {
                fVar3 = field_64;
                fVar2 = field_56;
                local_a0 = oldscape::sidebars::SideBarData(arg2, 3);
                (**(void (**)(...))(*plVar1 + 104))(plVar1, local_c8, &local_88, (int)fVar3, (int)fVar2, &local_a0);
            }
            break;
        case 3:
            local_100._0_8_ = matrix44.TransformPoint(field_8);
            local_100._8_4_ = in_XMM1_Da;
            local_c8->GetRot();
            local_a0 = math::ColourHSL(field_64, field_60, field_56);
            local_88 = math::OBB(*local_100, *local_c8, local_a0);
            plVar1 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != nullptr) {
                new (local_c8) oldscape::sidebars::SideBarData(arg2, 3);
                (**(void (**)(...))(*plVar1 + 80))(plVar1, &local_88, (SideBarData*)local_c8);
            }
            break;
        case 4:
            local_90 = field_56 + field_56;
            local_8c = (float)arg2;
            local_100->GetRot();
            *local_c8* field_20;
            local_a0 = math::QuaternionT<float>(*local_c8);
            local_d8._0_8_ = matrix44.TransformPoint(field_8);
            local_110 = math::ColourHSL(local_90, 1.0, local_90);
            local_88 = math::Matrix44T<float>(local_a0, local_d8, local_110);
            plVar1 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != nullptr) {
                new (local_c8) oldscape::sidebars::SideBarData((int)local_8c, 3);
                (**(void (**)(...))(*plVar1 + 64))(plVar1, &local_88, (SideBarData*)local_c8);
            }
            break;
        case 5:
            local_dc = field_56;
            local_90 = field_64;
            local_8c = (float)arg2;
            local_88.GetRot();
            *local_c8* local_88;
            math::Matrix33RotationX<float>(3.1415927f);
            local_88** local_c8;
            *local_c8 = local_88;
            new (local_100) math::QuaternionT<float>(*local_c8);
            local_a0._0_8_ = matrix44.TransformPoint(field_8);
            local_a0.field_8 = in_XMM1_Da;
            local_d8 = math::ColourHSL(local_dc, local_90, local_dc);
            local_88 = math::Matrix44T<float>(*local_100, local_a0, local_d8);
            plVar1 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != nullptr) {
                new (local_100) oldscape::sidebars::SideBarData((int)local_8c, 3);
                (**(void (**)(...))(*plVar1 + 56))(plVar1, &local_88, (SideBarData*)local_100);
            }
            break;
        case 6:
        case 7:
            local_8c = field_56 + field_56;
            local_c8._0_8_ = matrix44.TransformPoint(field_8);
            fVar3 = local_8c;
            local_c8._8_4_ = in_XMM1_Da;
        LAB_1007da1ac:
            local_88 = math::Sphere(*local_c8, fVar3);
            plVar1 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != nullptr) {
                new (local_c8) oldscape::sidebars::SideBarData(arg2, 3);
                (**(void (**)(...))(*plVar1 + 32))(plVar1, &local_88, (SideBarData*)local_c8);
            }
            break;
        case 8:
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "particles/modules/FlowModule.cpp",
                            359, nullptr);
        }
    }

} // namespace jag::graphics::particlemodules
