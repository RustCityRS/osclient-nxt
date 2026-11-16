// libs/game/runetek5/config/watertype/WaterType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "WaterType.h"

namespace jag::game {
    // 0x1003c3e20: WaterType::GetEmissiveMapMaterialID() const has the same machine code as MapElementType::GetHAlign() const

    // 0x1003efcf0: WaterType::GetExtinctionRGBDepthMetres() const has the same machine code as ObjType::GetName() const

    // 0x1003f65a0: WaterType::GetFoamMaterialID() const has the same machine code as EntityRoute::GetStalledTickCount() const

    // 0x100429b10: WaterType::GetDepthFoam() const has the same machine code as StaticPointLight::GetRGB() const

    // 0x1004ab8a0: WaterType::GetEmissiveUVScale() const has the same machine code as EnvironmentOverride::GetVolumetricOverrides() const

    // 0x1004c60a0
    WaterType::WaterType(BaseTemplateConfigTypeList<WaterType>* baseTemplateConfigTypeList, int arg2)
        : ConfigType<WaterType>(baseTemplateConfigTypeList, arg2), MakeSharedPool<WaterType, 16>(), field_56(false),
          m_flowNoise(1048576000), m_depthFoam(32), m_foamMaterialID(4294967295), m_foamMaterialScale(1.0),
          field_76(18446744073709551615), field_84(4294967295), field_88(1065353216), field_92(1065353216),
          field_96(1065353216) {
        uint8_t* this_00 = &field_100;
        new (this_00) std::array<graphics::WaterNormalMapParams, 3ul>();
        uint8_t* this_01 = &field_220;
        new (this_01) std::array<graphics::WaterNormalMapParams, 3ul>();
        m_stillWaterNormalStrength = 1056964608;
        m_emissiveMapMaterialID = 4294967295;
        m_emissiveMapMaterialScale = 6.0;
        uint64_t uVar1 = *(uint64_t*)PTR_ONE_100ee66a0;
        m_emissiveUVScale = (int)uVar1;
        field_356 = (int)((unsigned long)uVar1 >> 32);
        m_emissiveSource = 1065353216;
        m_emissiveScale = 1065353216;
        m_emissiveMapRefractionDepth = 0;
        m_emissiveUVMode = 1;
        m_emissiveFlowSpeed = 0;
        m_emissiveFlowRotationDegrees = 0.0;
        m_emissiveBlend = 0;
        m_specularShininess = 0.5;
        m_specularFactor = 800;
        m_fresnelBias = 0;
        m_reflectionStrength = 1.0;
        new (m_extinctionRGBDepthMetres) math::ColourHSL(45.0, 75.0, 300.0);
        *(uint64_t*)(m_extinctionRGBDepthMetres + 12) = 4776067407470763519;
        m_causticsScale = 1084227584;
        m_causticsRefractionScale = 1043878380;
        m_causticsDepthFadeCutoff = 1159069696;
        m_causticsDepthFadeScale = 1077936128;
        m_causticsEdgeFadeStart = 100.0;
        m_causticsEdgeFadeEnd = 1128792064;
        m_causticsOverWaterFadeStart = 1143930880;
        m_causticsOverWaterFadeEnd = 1158660096;
        m_baseRGBA = 1365822685;
        field_464 = 4294967295;
        field_468 = 4294967295;
        field_472 = 0;
        field_476 = 4294967295;
        field_480 = 1.0;
        field_484 = 0.0;
        field_488 = 0.9;
        field_492 = 0.9;
        field_496 = 0.17;
        field_500 = 16777215;
        field_504 = 0;
        field_508 = 0;
        field_512 = 0;
        field_516 = 1;
        field_520 = 0;
        field_524 = 128;
        field_528 = 256;
        field_532 = 4294967043;
        field_536 = 0;
        new (field_540) math::ColourHSL(0.0, 0.0, 0.0);
        Point<float> local_30(-0.87, -1.2);
        long lVar2 = (*this_00)[0];
        (*((lVar2 + 16))) = local_30;
        *(uint64_t*)(lVar2 + 8) = 4503599628436688077;
        lVar2 = (*this_00)[1];
        *(uint32_t*)(lVar2 + 36) = 3251109888;
        *(uint64_t*)(lVar2 + 8) = 4503599628432493773;
        lVar2 = (*this_00)[2];
        *(uint64_t*)(lVar2 + 8) = 4503599628432493773;
        *(uint64_t*)(lVar2 + 32) = 4740038611074023424;
        lVar2 = (*this_01)[0];
        *(uint64_t*)(lVar2 + 4) = 4561245704516796416;
        *(uint32_t*)(lVar2 + 20) = 1073741824;
        *(uint32_t*)(lVar2 + 32) = 3258187776;
        lVar2 = (*this_01)[1];
        *(uint64_t*)(lVar2 + 4) = 4575657222470421709;
        *(uint32_t*)(lVar2 + 36) = 1127481344;
        *(uint32_t*)(lVar2 + 20) = 1073741824;
        lVar2 = (*this_01)[2];
        *(uint64_t*)(lVar2 + 4) = 4515128845357610435;
        *(uint64_t*)(lVar2 + 32) = 4728779609858113536;
    }

    // 0x1004c64a0
    void WaterType::ApplyToWaterPatchConfig(graphics::WaterPatchConfig& waterPatchConfig) const {
        uint32_t* puVar4;
        WaterNormalMapParams* pWVar5;
        uint64_t local_40[2];

        uint32_t uVar2 = GetStatus();
        waterPatchConfig.field_0 = uVar2;
        uVar2 = GetFlowNoise();
        *(uint32_t*)&waterPatchConfig.field_48 = uVar2;
        uVar2 = GetAmplitude();
        *(uint32_t*)((long)&waterPatchConfig.field_48 + 4) = uVar2;
        uVar2 = GetDuration();
        *(uint32_t*)&waterPatchConfig.field_56 = uVar2;
        uVar2 = GetPlaybackStart();
        *(uint32_t*)((long)&waterPatchConfig.field_56 + 4) = uVar2;
        WaterNormalMapParams* this_00 = (WaterNormalMapParams*)&waterPatchConfig.field_148;
        unsigned long arg1 = 0;
        do {
            uVar2 = GetNormalMapMaterialID(arg1);
            puVar4 = (uint32_t*)waterPatchConfig.field_64[arg1];
            *puVar4 = uVar2;
            uVar2 = GetNormalMapMaterialScale(arg1);
            puVar4 = &waterPatchConfig.field_76[arg1];
            *puVar4 = uVar2;
            pWVar5 = (WaterNormalMapParams*)GetNormalMapParams(arg1);
            *this_00 = *pWVar5;
            pWVar5 = (WaterNormalMapParams*)GetNormalMapMacroParams(arg1);
            (*(this_00 + 3)) = *pWVar5;
            arg1 = arg1 + 1;
            this_00 = this_00 + 1;
        } while (arg1 != 3);
        uVar2 = GetStillWaterNormalStrength();
        *(uint32_t*)((long)&waterPatchConfig.field_140 + 4) = uVar2;
        uVar2 = GetSpecularShininess();
        *(uint32_t*)&waterPatchConfig.field_388 = uVar2;
        uVar2 = GetSpecularFactor();
        *(uint32_t*)((long)&waterPatchConfig.field_388 + 4) = uVar2;
        uVar2 = GetFresnelBias();
        *(uint32_t*)&waterPatchConfig.field_396 = uVar2;
        uVar2 = GetReflectionStrength();
        *(uint32_t*)((long)&waterPatchConfig.field_396 + 4) = uVar2;
        uVar2 = GetEmissiveMapMaterialID();
        *(uint32_t*)&waterPatchConfig.field_88 = uVar2;
        uVar2 = GetEmissiveMapMaterialScale();
        *(uint32_t*)((long)&waterPatchConfig.field_88 + 4) = uVar2;
        auto vector2 = GetEmissiveUVScale();
        waterPatchConfig.field_96 = *vector2;
        unsigned int uVar3 = GetEmissiveRGB();
        local_40[0] = math::Colour3FromR8G8B8A8(uVar3);
        waterPatchConfig.field_104.SetXYZ(*local_40);
        uVar2 = GetEmissiveSource();
        *(uint32_t*)((long)&waterPatchConfig.field_112 + 4) = uVar2;
        uVar2 = GetEmissiveScale();
        *(uint32_t*)&waterPatchConfig.field_120 = uVar2;
        uVar2 = GetEmissiveMapRefractionDepth();
        *(uint32_t*)((long)&waterPatchConfig.field_120 + 4) = uVar2;
        uint8_t uVar1 = GetEmissiveMapMode();
        waterPatchConfig.field_128 = uVar1;
        uVar2 = GetEmissiveFlowSpeed();
        *(uint32_t*)&waterPatchConfig.field_132 = uVar2;
        uVar2 = GetEmissiveMapMaterialScale();
        *(uint32_t*)((long)&waterPatchConfig.field_132 + 4) = uVar2;
        uVar1 = GetEmissiveUVMode();
        waterPatchConfig.field_129 = uVar1;
        uVar2 = GetEmissiveBlend();
        *(uint32_t*)&waterPatchConfig.field_140 = uVar2;
        auto vector3 = GetScaledMousePosition();
        waterPatchConfig.field_404.SetXYZ(*vector3);
        uVar3 = GetExtinctionOpaqueWaterColour();
        local_40[0] = math::Colour3FromR8G8B8A8(uVar3);
        ((Vector4T<float>*)((long)&waterPatchConfig.field_412 + 4))->SetXYZ(*local_40);
        uVar2 = GetExtinctionVisibilityMetres();
        *(uint32_t*)&waterPatchConfig.field_428 = uVar2;
        uVar2 = GetCausticsScale();
        *(uint32_t*)((long)&waterPatchConfig.field_428 + 4) = uVar2;
        uVar2 = GetCausticsRefractionScale();
        *(uint32_t*)&waterPatchConfig.field_436 = uVar2;
        uVar2 = GetCausticsDepthFadeCutoff();
        *(uint32_t*)((long)&waterPatchConfig.field_436 + 4) = uVar2;
        uVar2 = GetCausticsDepthFadeScale();
        *(uint32_t*)&waterPatchConfig.field_444 = uVar2;
        uVar2 = GetIntensity();
        *(uint32_t*)((long)&waterPatchConfig.field_444 + 4) = uVar2;
        uVar2 = GetCausticsEdgeFadeEnd();
        *(uint32_t*)&waterPatchConfig.field_452 = uVar2;
        uVar2 = GetCausticsOverWaterFadeStart();
        *(uint32_t*)((long)&waterPatchConfig.field_452 + 4) = uVar2;
        uVar2 = GetCausticsOverWaterFadeEnd();
        *(uint32_t*)&waterPatchConfig.field_460 = uVar2;
        uVar2 = GetHTTPImage();
        *(uint32_t*)((long)&waterPatchConfig.field_460 + 4) = uVar2;
    }

    // 0x1004c6a80
    uint8_t* WaterType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        uint64_t in_RAX;

        uint32_t uVar2 = (uint32_t)((unsigned long)in_RAX >> 32);
        char cVar1 = DecodeUnusedParams(arg1, arg2);
        if (!cVar1) {
            cVar1 = DecodeLegacyParams(arg1, arg2);
            if (!cVar1) {
                cVar1 = DecodeFoamParams(arg1, arg2);
                if (!cVar1) {
                    cVar1 = DecodeLightingReflectionParams(arg1, arg2);
                    if (!cVar1) {
                        cVar1 = DecodeMaterialScaleParams(arg1, arg2);
                        if (!cVar1) {
                            cVar1 = DecodeNormalParams(arg1, arg2);
                            if (!cVar1) {
                                cVar1 = DecodeEmissiveParams(arg1, arg2);
                                if (!cVar1) {
                                    cVar1 = DecodeExtinctionParams(arg1, arg2);
                                    if (!cVar1) {
                                        cVar1 = DecodeCausticsParams(arg1, arg2);
                                        if (!cVar1) {
                                            if (arg2 == 81) {
                                                uVar2 = arg1.gFloat();
                                                m_stillWaterNormalStrength = uVar2;
                                            } else if (arg2 == 82) {
                                                uVar2 = arg1.gFloat();
                                                m_flowNoise = uVar2;
                                            } else if (arg2 == 85) {
                                                cVar1 = arg1.g1();
                                                field_56 = cVar1;
                                            } else {
                                                (logger::default_logger())
                                                    ->Log(false, 2,
                                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                          "OSRS-OS1669-BOXR/libs/game/runetek5/config/watertype/"
                                                          "WaterType.cpp",
                                                          143, "Unrecognised .water config code: %u",
                                                          (((uint64_t)uVar2 << 32) | (uint32_t)arg2));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        return DataStatus::READY;
    }

    // 0x1004c6be0
    uint64_t WaterType::DecodeUnusedParams(PacketT<Array<unsigned char>>& arg1, WaterTypeEncoding waterTypeEncoding) {
        uint8_t bVar1;
        unsigned short uVar2;
        unsigned short uVar3;
        unsigned short uVar4;
        short sVar5;
        uint32_t uVar6;

        uint64_t uVar7 = 0;
        switch (waterTypeEncoding) {
        case 1:
            uVar2 = arg1.g2();
            field_464 = (unsigned int)uVar2;
            break;
        default:
            goto switchD_1004c6c0d_caseD_2;
        case 3:
            uVar2 = arg1.g2();
            field_468 = (unsigned int)uVar2;
            break;
        case 6:
            uVar6 = arg1.g3();
            field_500 = uVar6;
            break;
        case 7:
            uVar2 = arg1.g2();
            field_504 = (unsigned int)uVar2;
            uVar2 = arg1.g2();
            field_508 = (unsigned int)uVar2;
            break;
        case 8:
            uVar2 = arg1.g2();
            field_512 = (unsigned int)uVar2;
            break;
        case 11:
            uVar2 = arg1.g2();
            field_520 = (unsigned int)uVar2;
            break;
        case 13:
            uVar2 = arg1.g2();
            field_524 = (unsigned int)uVar2;
            break;
        case 15:
            uVar6 = arg1.g4();
            field_532 = uVar6;
            break;
        case 16:
            uVar2 = arg1.g2();
            field_516 = (unsigned int)uVar2;
            break;
        case 17:
            uVar2 = arg1.g2();
            field_528 = (unsigned int)uVar2;
            break;
        case 18:
            bVar1 = arg1.g1();
            field_488 = (float)bVar1 * 0.03125f;
            break;
        case 19:
            bVar1 = arg1.g1();
            field_492 = (float)bVar1 * 0.03125f;
            break;
        case 20:
            uVar2 = arg1.g2();
            field_496 = (float)uVar2 * 0.00390625f;
            break;
        case 21:
            uVar2 = arg1.g2();
            field_472 = (unsigned int)uVar2;
            break;
        case 22:
            uVar2 = arg1.g2();
            field_476 = (unsigned int)uVar2;
            break;
        case 23:
            bVar1 = arg1.g1();
            field_480 = (float)bVar1;
            break;
        case 24:
            bVar1 = arg1.g1();
            field_484 = (float)bVar1 * 0.01;
            break;
        case 26:
            uVar2 = arg1.g2();
            uVar3 = arg1.g2();
            uVar4 = arg1.g2();
            field_540->Set((float)uVar2 * 0.00390625f, (float)uVar3 * 0.00390625f, (float)uVar4 * 0.00390625f);
            break;
        case 28:
            sVar5 = arg1.g2s();
            field_536 = (int)sVar5;
        }
        uVar7 = 1;
    switchD_1004c6c0d_caseD_2:
        return uVar7;
    }

    // 0x1004c6ee0
    bool WaterType::DecodeLegacyParams(PacketT<Array<unsigned char>>& arg1, WaterTypeEncoding waterTypeEncoding) {
        if (waterTypeEncoding == 12) {
            m_baseRGBA = arg1.g4();
        }
        return waterTypeEncoding == 12;
    }

    // 0x1004c6f10
    uint64_t WaterType::DecodeFoamParams(PacketT<Array<unsigned char>>& arg1, WaterTypeEncoding waterTypeEncoding) {
        unsigned short uVar1;

        if (waterTypeEncoding == 14) {
            uVar1 = arg1.g2();
            m_depthFoam = (unsigned int)uVar1;
        } else {
            if (waterTypeEncoding != 9) {
                return 0;
            }
            uVar1 = arg1.g2();
            m_foamMaterialID = (unsigned int)uVar1;
        }
        return 1;
    }

    // 0x1004c6f50
    uint64_t WaterType::DecodeLightingReflectionParams(PacketT<Array<unsigned char>>& arg1,
                                                       WaterTypeEncoding waterTypeEncoding) {
        unsigned short uVar1;
        uint32_t extraout_XMM0_Da;

        if ((int)waterTypeEncoding < 27) {
            if (waterTypeEncoding == 5) {
                uVar1 = arg1.g2();
                m_reflectionStrength = (float)uVar1 * 0.00390625f;
            } else {
                if (waterTypeEncoding != 25) {
                    return 0;
                }
                uVar1 = arg1.g2();
                m_specularShininess = (float)uVar1 * 0.00390625f;
            }
        } else if (waterTypeEncoding == 84) {
            arg1.gFloat();
        } else if (waterTypeEncoding == 83) {
            arg1.gFloat();
            m_fresnelBias = extraout_XMM0_Da;
        } else {
            if (waterTypeEncoding != 27) {
                return 0;
            }
            uVar1 = arg1.g2();
            m_specularFactor = (unsigned int)uVar1;
        }
        return 1;
    }

    // 0x1004c7000
    uint64_t WaterType::DecodeMaterialScaleParams(PacketT<Array<unsigned char>>& arg1,
                                                  WaterTypeEncoding waterTypeEncoding) {
        unsigned short uVar1;
        unsigned long arg1_00;

        uint64_t uVar3 = 0;
        switch (waterTypeEncoding) {
        case 2:
            uVar1 = arg1.g2();
            arg1_00 = 0;
            break;
        case 3:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
            goto switchD_1004c7021_caseD_3;
        case 4:
            uVar1 = arg1.g2();
            arg1_00 = 1;
            break;
        case 10:
            uVar1 = arg1.g2();
            m_foamMaterialScale = (float)uVar1 * 0.00390625f;
            goto LAB_1004c70f2;
        case 32:
            uVar1 = arg1.g2();
            arg1_00 = 2;
            break;
        default:
            if (waterTypeEncoding != 87) {
                return 0;
            }
            uVar1 = arg1.g2();
            m_emissiveMapMaterialScale = (float)uVar1 * 0.00390625f;
            goto LAB_1004c70f2;
        }
        float* pfVar2 = &field_88[arg1_00];
        *pfVar2 = (float)uVar1 * 0.00390625f;
    LAB_1004c70f2:
        uVar3 = 1;
    switchD_1004c7021_caseD_3:
        return uVar3;
    }

    // 0x1004c7180
    uint64_t WaterType::DecodeNormalParams(PacketT<Array<unsigned char>>& arg1, WaterTypeEncoding waterTypeEncoding) {
        long lVar2;
        uint64_t uVar3;
        array<graphics::WaterNormalMapParams, 3ul>* this_01;
        uint32_t extraout_XMM0_Da;
        uint32_t extraout_XMM0_Da_00;
        uint32_t extraout_XMM0_Da_01;
        uint32_t extraout_XMM0_Da_02;
        uint32_t uVar4;
        uint32_t extraout_XMM0_Da_03;
        uint32_t extraout_XMM0_Da_04;
        uint32_t extraout_XMM0_Da_05;
        WaterNormalParamsTarget local_30;

        char cVar1 = DecodeNormalMapMaterials(arg1, waterTypeEncoding);
        if (cVar1) {
            return 1;
        }
        local_30._0_12_ = GetNormalParamsTarget(waterTypeEncoding);
        cVar1 = local_30.IsValid();
        if (!cVar1) {
        switchD_1004c71fc_default:
            uVar3 = 0;
        } else {
            this_01 = (array<graphics::WaterNormalMapParams, 3ul>*)&field_220;
            if (local_30._4_4_ != 2) {
                this_01 = (array<graphics::WaterNormalMapParams, 3ul>*)&field_100;
            }
            lVar2 = (*this_01)[(long)(int)local_30._8_4_];
            switch (local_30.field_0) {
            case 1:
                cVar1 = arg1.g1();
                *(bool*)lVar2 = cVar1;
                break;
            case 2:
                arg1.gFloat();
                *(uint32_t*)(lVar2 + 4) = extraout_XMM0_Da;
                break;
            case 3:
                arg1.gFloat();
                *(uint32_t*)(lVar2 + 8) = extraout_XMM0_Da_00;
                break;
            case 4:
                arg1.gFloat();
                *(uint32_t*)(lVar2 + 12) = extraout_XMM0_Da_01;
                break;
            case 5:
                uVar4 = arg1.gFloat();
                *(uint32_t*)(lVar2 + 16) = uVar4;
                arg1.gFloat();
                *(uint32_t*)(lVar2 + 20) = extraout_XMM0_Da_02;
                break;
            case 6:
                uVar4 = arg1.gFloat();
                *(uint32_t*)(lVar2 + 24) = uVar4;
                arg1.gFloat();
                *(uint32_t*)(lVar2 + 28) = extraout_XMM0_Da_03;
                break;
            case 7:
                arg1.gFloat();
                *(uint32_t*)(lVar2 + 32) = extraout_XMM0_Da_04;
                break;
            case 8:
                arg1.gFloat();
                *(uint32_t*)(lVar2 + 36) = extraout_XMM0_Da_05;
                break;
            default:
                goto switchD_1004c71fc_default;
            }
            uVar3 = 1;
        }
        return uVar3;
    }

    // 0x1004c72d0
    uint64_t WaterType::DecodeEmissiveParams(PacketT<Array<unsigned char>>& arg1, WaterTypeEncoding waterTypeEncoding) {
        uint8_t uVar1;
        unsigned short uVar2;
        uint32_t uVar3;
        uint32_t extraout_XMM0_Da;
        uint32_t extraout_XMM0_Da_00;
        uint32_t extraout_XMM0_Da_01;
        uint32_t extraout_XMM0_Da_02;
        uint32_t extraout_XMM0_Da_03;
        float extraout_XMM0_Da_04;
        uint32_t extraout_XMM0_Da_05;

        uint64_t uVar4 = 0;
        switch (waterTypeEncoding) {
        case 86:
            uVar2 = arg1.g2();
            m_emissiveMapMaterialID = (unsigned int)uVar2;
            break;
        default:
            goto switchD_1004c72f9_caseD_57;
        case 88:
            uVar3 = arg1.gFloat();
            m_emissiveUVScale = uVar3;
            arg1.gFloat();
            field_356 = extraout_XMM0_Da;
            break;
        case 89:
            uVar3 = arg1.g4();
            m_emissiveRGB = uVar3;
            break;
        case 90:
            arg1.gFloat();
            m_emissiveScale = extraout_XMM0_Da_00;
            break;
        case 91:
            arg1.gFloat();
            m_emissiveMapRefractionDepth = extraout_XMM0_Da_01;
            break;
        case 92:
            uVar1 = arg1.g1();
            m_emissiveMapMode = uVar1;
            break;
        case 93:
            arg1.gFloat();
            m_emissiveSource = extraout_XMM0_Da_02;
            break;
        case 94:
            arg1.gFloat();
            m_emissiveFlowSpeed = extraout_XMM0_Da_03;
            break;
        case 95:
            arg1.gFloat();
            m_emissiveFlowRotationDegrees = extraout_XMM0_Da_04;
            break;
        case 96:
            uVar1 = arg1.g1();
            m_emissiveUVMode = uVar1;
            break;
        case 108:
            arg1.gFloat();
            m_emissiveBlend = extraout_XMM0_Da_05;
        }
        uVar4 = 1;
    switchD_1004c72f9_caseD_57:
        return uVar4;
    }

    // 0x1004c7450
    uint64_t WaterType::DecodeExtinctionParams(PacketT<Array<unsigned char>>& arg1,
                                               WaterTypeEncoding waterTypeEncoding) {
        uint32_t uVar1;
        uint32_t extraout_XMM0_Da;
        uint32_t extraout_XMM0_Da_00;

        if (waterTypeEncoding == 99) {
            arg1.gFloat();
            m_extinctionVisibilityMetres = extraout_XMM0_Da_00;
        } else if (waterTypeEncoding == 98) {
            uVar1 = arg1.g4();
            *(uint32_t*)(m_extinctionRGBDepthMetres + 12) = uVar1;
        } else {
            if (waterTypeEncoding != 97) {
                return 0;
            }
            uVar1 = arg1.gFloat();
            *(uint32_t*)m_extinctionRGBDepthMetres = uVar1;
            uVar1 = arg1.gFloat();
            *(uint32_t*)(m_extinctionRGBDepthMetres + 4) = uVar1;
            arg1.gFloat();
            *(uint32_t*)(m_extinctionRGBDepthMetres + 8) = extraout_XMM0_Da;
        }
        return 1;
    }

    // 0x1004c74d0
    uint64_t WaterType::DecodeCausticsParams(PacketT<Array<unsigned char>>& arg1, WaterTypeEncoding waterTypeEncoding) {
        uint32_t extraout_XMM0_Da;
        uint32_t extraout_XMM0_Da_00;
        uint32_t extraout_XMM0_Da_01;
        uint32_t extraout_XMM0_Da_02;
        float extraout_XMM0_Da_03;
        uint32_t extraout_XMM0_Da_04;
        uint32_t extraout_XMM0_Da_05;
        uint32_t extraout_XMM0_Da_06;

        switch (waterTypeEncoding) {
        case 100:
            arg1.gFloat();
            m_causticsScale = extraout_XMM0_Da;
            break;
        case 101:
            arg1.gFloat();
            m_causticsRefractionScale = extraout_XMM0_Da_00;
            break;
        case 102:
            arg1.gFloat();
            m_causticsDepthFadeCutoff = extraout_XMM0_Da_01;
            break;
        case 103:
            arg1.gFloat();
            m_causticsDepthFadeScale = extraout_XMM0_Da_02;
            break;
        case 104:
            arg1.gFloat();
            m_causticsEdgeFadeStart = extraout_XMM0_Da_03;
            break;
        case 105:
            arg1.gFloat();
            m_causticsEdgeFadeEnd = extraout_XMM0_Da_04;
            break;
        case 106:
            arg1.gFloat();
            m_causticsOverWaterFadeStart = extraout_XMM0_Da_05;
            break;
        case 107:
            arg1.gFloat();
            m_causticsOverWaterFadeEnd = extraout_XMM0_Da_06;
            break;
        default:
            return 0;
        }
        return 1;
    }

    // 0x1004c75c0
    void WaterType::PostDecode() {}

    // 0x1004c75d0
    bool WaterType::DecodeNormalMapMaterials(PacketT<Array<unsigned char>>& arg1, WaterTypeEncoding waterTypeEncoding) {
        uint8_t uVar1;
        uint8_t extraout_AL;
        uint8_t extraout_AH;
        uint8_t extraout_AH_00;
        uint64_t extraout_var;

        unsigned int uVar2 = waterTypeEncoding - 29;
        if (uVar2 < 3) {
            uVar1 = arg1.g2();
            field_76[(unsigned long)uVar2];
            *(unsigned int*)(((uint64_t)extraout_var << 16) |
                             (uint16_t)((((uint16_t)extraout_AH_00 << 8) | (uint8_t)extraout_AL))) =
                (unsigned int)(((uint16_t)extraout_AH << 8) | (uint8_t)uVar1);
        }
        return uVar2 < 3;
    }

    // 0x1004c7620
    uint8_t[16] WaterType::GetNormalParamsTarget(WaterTypeEncoding waterTypeEncoding) const {
        unsigned int arg3;
        unsigned int arg2;
        int arg1;
        uint8_t auVar1[16];
        uint8_t auVar2[12];

        switch (waterTypeEncoding) {
        case 33:
            arg1 = 1;
            goto LAB_1004c76a7;
        case 34:
            arg1 = 2;
            goto LAB_1004c76a7;
        case 35:
            arg1 = 3;
            goto LAB_1004c76a7;
        case 36:
            arg1 = 4;
            goto LAB_1004c76a7;
        case 37:
            arg1 = 5;
            goto LAB_1004c76a7;
        case 38:
            arg1 = 6;
            goto LAB_1004c76a7;
        case 39:
            arg1 = 7;
            goto LAB_1004c76a7;
        case 40:
            arg1 = 8;
        LAB_1004c76a7:
            arg2 = 1;
            break;
        case 41:
            arg1 = 1;
            goto LAB_1004c7709;
        case 42:
            arg1 = 2;
            goto LAB_1004c7709;
        case 43:
            arg1 = 3;
            goto LAB_1004c7709;
        case 44:
            arg1 = 4;
            goto LAB_1004c7709;
        case 45:
            arg1 = 5;
            goto LAB_1004c7709;
        case 46:
            arg1 = 6;
            goto LAB_1004c7709;
        case 47:
            arg1 = 7;
            goto LAB_1004c7709;
        case 48:
            arg1 = 8;
        LAB_1004c7709:
            arg2 = 1;
            goto LAB_1004c770e;
        case 49:
            arg1 = 1;
            goto LAB_1004c776b;
        case 50:
            arg1 = 2;
            goto LAB_1004c776b;
        case 51:
            arg1 = 3;
            goto LAB_1004c776b;
        case 52:
            arg1 = 4;
            goto LAB_1004c776b;
        case 53:
            arg1 = 5;
            goto LAB_1004c776b;
        case 54:
            arg1 = 6;
            goto LAB_1004c776b;
        case 55:
            arg1 = 7;
            goto LAB_1004c776b;
        case 56:
            arg1 = 8;
        LAB_1004c776b:
            arg2 = 1;
            goto LAB_1004c7770;
        case 57:
            arg1 = 1;
            arg2 = 2;
            break;
        case 58:
            arg1 = 2;
            arg2 = 2;
            break;
        case 59:
            arg1 = 3;
            arg2 = 2;
            break;
        case 60:
            arg1 = 4;
            arg2 = 2;
            break;
        case 61:
            arg1 = 5;
            arg2 = 2;
            break;
        case 62:
            arg1 = 6;
            arg2 = 2;
            break;
        case 63:
            arg1 = 7;
            arg2 = 2;
            break;
        case 64:
            arg1 = 8;
            arg2 = 2;
            break;
        case 65:
            arg1 = 1;
            arg2 = 2;
            goto LAB_1004c770e;
        case 66:
            arg1 = 2;
            arg2 = 2;
            goto LAB_1004c770e;
        case 67:
            arg1 = 3;
            arg2 = 2;
            goto LAB_1004c770e;
        case 68:
            arg1 = 4;
            arg2 = 2;
            goto LAB_1004c770e;
        case 69:
            arg1 = 5;
            arg2 = 2;
            goto LAB_1004c770e;
        case 70:
            arg1 = 6;
            arg2 = 2;
            goto LAB_1004c770e;
        case 71:
            arg1 = 7;
            arg2 = 2;
            goto LAB_1004c770e;
        case 72:
            arg1 = 8;
            arg2 = 2;
        LAB_1004c770e:
            arg3 = 1;
            goto LAB_1004c7775;
        case 73:
            arg1 = 1;
            arg2 = 2;
            goto LAB_1004c7770;
        case 74:
            arg1 = 2;
            arg2 = 2;
            goto LAB_1004c7770;
        case 75:
            arg1 = 3;
            arg2 = 2;
            goto LAB_1004c7770;
        case 76:
            arg1 = 4;
            arg2 = 2;
            goto LAB_1004c7770;
        case 77:
            arg1 = 5;
            arg2 = 2;
            goto LAB_1004c7770;
        case 78:
            arg1 = 6;
            arg2 = 2;
            goto LAB_1004c7770;
        case 79:
            arg1 = 7;
            arg2 = 2;
            goto LAB_1004c7770;
        case 80:
            arg1 = 8;
            arg2 = 2;
        LAB_1004c7770:
            arg3 = 2;
            goto LAB_1004c7775;
        default:
            auVar2 = WaterNormalParamsTarget::Invalid();
            goto LAB_1004c777a;
        }
        arg3 = 0;
    LAB_1004c7775:
        LocationData local_18(arg1, arg2, arg3);
        auVar2._8_4_ = local_18.field_8;
        auVar2._0_4_ = local_18.field_0;
        auVar2._4_4_ = local_18.field_4;
    LAB_1004c777a:
        auVar1._12_4_ = 0;
        auVar1._0_12_ = auVar2;
        return auVar1;
    }

    // 0x1004c7ab0
    WaterType::operator graphics::WaterPatchConfig() const {
        WaterType* in_RSI;

        new (this) graphics::WaterPatchConfig();
        ApplyToWaterPatchConfig(in_RSI, (WaterPatchConfig*)this);
        return this;
    }

} // namespace jag::game
