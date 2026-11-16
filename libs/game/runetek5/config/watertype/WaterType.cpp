// libs/game/runetek5/config/watertype/WaterType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "WaterType.h"

namespace jag::game {
    // 0x1003c3e20: the linker folded this into MapElementType::GetHAlign() const, which has identical code
    WaterType::GetEmissiveMapMaterialID() const;

    // 0x1003efcf0: the linker folded this into ObjType::GetName() const, which has identical code
    WaterType::GetExtinctionRGBDepthMetres() const;

    // 0x1003f65a0: the linker folded this into EntityRoute::GetStalledTickCount() const, which has identical code
    WaterType::GetFoamMaterialID() const;

    // 0x100429b10: the linker folded this into StaticPointLight::GetRGB() const, which has identical code
    WaterType::GetDepthFoam() const;

    // 0x1004ab8a0: the linker folded this into EnvironmentOverride::GetVolumetricOverrides() const, which has identical code
    WaterType::GetEmissiveUVScale() const;

    // 0x1004c60a0, 688 bytes, base-object constructor, placed by class name and debug map
    // WaterType::WaterType(BaseTemplateConfigTypeList<WaterType>*, int)
    void WaterType::WaterType(BaseTemplateConfigTypeList* param_1, int param_2) {
        undefined1* this_00;
        undefined1* this_01;
        undefined8 uVar1;
        long lVar2;
        Point<float> local_30[8];

        new (this) ConfigType<WaterType>(param_1, param_2);
        new (this) MakeSharedPool<WaterType, 16>();
        field_0 = &PTR__WaterType_100f01c78;
        field_56 = false;
        m_flowNoise = 1048576000;
        field_64 = 32;
        field_68 = 4294967295;
        field_72 = 1.0;
        field_76 = 18446744073709551615;
        field_84 = 4294967295;
        field_88 = 4575657222473777152;
        field_96 = 1065353216;
        this_00 = &field_100;
        new (this_00) std::array<graphics::WaterNormalMapParams, 3ul>();
        this_01 = &field_220;
        new (this_01) std::array<graphics::WaterNormalMapParams, 3ul>();
        m_stillWaterNormalStrength = 1056964608;
        m_emissiveMapMaterialID = 4294967295;
        m_emissiveMapMaterialScale = 6.0;
        uVar1 = *(undefined8*)PTR_ONE_100ee66a0;
        m_emissiveUVScale = (int)uVar1;
        field_356 = (int)((ulong)uVar1 >> 32);
        m_emissiveSource = 1065353216;
        m_emissiveScale = 1065353216;
        m_emissiveMapRefractionDepth = 0;
        m_emissiveUVMode = 1;
        m_emissiveFlowSpeed = 0;
        field_384 = 0;
        m_emissiveBlend = 0;
        m_specularShininess = 0.5;
        m_specularFactor = 800;
        m_fresnelBias = 0;
        m_reflectionStrength = 1.0;
        new (field_408, 45.0, 75.0, 300.0) math::ColourHSL();
        *(undefined8*)(field_408 + 12) = 4776067407470763519;
        m_causticsScale = 1084227584;
        m_causticsRefractionScale = 1043878380;
        m_causticsDepthFadeCutoff = 1159069696;
        m_causticsDepthFadeScale = 1077936128;
        field_444 = 1120403456;
        m_causticsEdgeFadeEnd = 1128792064;
        m_causticsOverWaterFadeStart = 1143930880;
        m_causticsOverWaterFadeEnd = 1158660096;
        field_460 = 1365822685;
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
        new (field_540, 0.0, 0.0, 0.0) math::ColourHSL();
        math::Point<float>::Point(local_30, -0.87, -1.2);
        lVar2 = std::array<graphics::WaterNormalMapParams, 3ul>::operator[](
            (array<graphics::WaterNormalMapParams, 3ul>*)this_00, 0);
        math::Vector2T<float>::operator=((Vector2T<float>*)(lVar2 + 16), (Vector2T*)local_30);
        *(undefined8*)(lVar2 + 8) = 4503599628436688077;
        lVar2 = std::array<graphics::WaterNormalMapParams, 3ul>::operator[](
            (array<graphics::WaterNormalMapParams, 3ul>*)this_00, 1);
        *(undefined4*)(lVar2 + 36) = 3251109888;
        *(undefined8*)(lVar2 + 8) = 4503599628432493773;
        lVar2 = std::array<graphics::WaterNormalMapParams, 3ul>::operator[](
            (array<graphics::WaterNormalMapParams, 3ul>*)this_00, 2);
        *(undefined8*)(lVar2 + 8) = 4503599628432493773;
        *(undefined8*)(lVar2 + 32) = 4740038611074023424;
        lVar2 = std::array<graphics::WaterNormalMapParams, 3ul>::operator[](
            (array<graphics::WaterNormalMapParams, 3ul>*)this_01, 0);
        *(undefined8*)(lVar2 + 4) = 4561245704516796416;
        *(undefined4*)(lVar2 + 20) = 1073741824;
        *(undefined4*)(lVar2 + 32) = 3258187776;
        lVar2 = std::array<graphics::WaterNormalMapParams, 3ul>::operator[](
            (array<graphics::WaterNormalMapParams, 3ul>*)this_01, 1);
        *(undefined8*)(lVar2 + 4) = 4575657222470421709;
        *(undefined4*)(lVar2 + 36) = 1127481344;
        *(undefined4*)(lVar2 + 20) = 1073741824;
        lVar2 = std::array<graphics::WaterNormalMapParams, 3ul>::operator[](
            (array<graphics::WaterNormalMapParams, 3ul>*)this_01, 2);
        *(undefined8*)(lVar2 + 4) = 4515128845357610435;
        *(undefined8*)(lVar2 + 32) = 4728779609858113536;
    }

    // 0x1004c6490, 16 bytes, complete-object constructor, placed by class name and debug map
    // WaterType::WaterType(BaseTemplateConfigTypeList<WaterType>*, int): jumps straight to the base-object constructor

    // 0x1004c64a0, 752 bytes, placed by class name and debug map
    // WaterType::ApplyToWaterPatchConfig(graphics::WaterPatchConfig&) const
    void WaterType::ApplyToWaterPatchConfig(WaterPatchConfig* param_1) {
        undefined1 uVar1;
        undefined4 uVar2;
        uint uVar3;
        undefined4* puVar4;
        WaterNormalMapParams* pWVar5;
        Vector2T* pVVar6;
        Vector3T* pVVar7;
        WaterNormalMapParams* this_00;
        ulong uVar8;
        undefined8 local_40[2];

        uVar2 = GetStatus();
        param_1->field_0 = uVar2;
        uVar2 = GetFlowNoise(this);
        *(undefined4*)&param_1->field_48 = uVar2;
        uVar2 = GetAmplitude();
        *(undefined4*)((long)&param_1->field_48 + 4) = uVar2;
        uVar2 = GetDuration();
        *(undefined4*)&param_1->field_56 = uVar2;
        uVar2 = GetPlaybackStart();
        *(undefined4*)((long)&param_1->field_56 + 4) = uVar2;
        this_00 = (WaterNormalMapParams*)&param_1->field_148;
        uVar8 = 0;
        do {
            uVar2 = GetNormalMapMaterialID(this, uVar8);
            puVar4 = (undefined4*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)&param_1->field_64, uVar8);
            *puVar4 = uVar2;
            uVar2 = GetNormalMapMaterialScale(this, uVar8);
            puVar4 = (undefined4*)std::array<float, 3ul>::operator[]((array<float, 3ul>*)&param_1->field_76, uVar8);
            *puVar4 = uVar2;
            pWVar5 = (WaterNormalMapParams*)GetNormalMapParams(this, uVar8);
            graphics::WaterNormalMapParams::operator=(this_00, pWVar5);
            pWVar5 = (WaterNormalMapParams*)GetNormalMapMacroParams(this, uVar8);
            graphics::WaterNormalMapParams::operator=(this_00 + 3, pWVar5);
            uVar8 = uVar8 + 1;
            this_00 = this_00 + 1;
        } while (uVar8 != 3);
        uVar2 = GetStillWaterNormalStrength(this);
        *(undefined4*)((long)&param_1->field_140 + 4) = uVar2;
        uVar2 = GetSpecularShininess(this);
        *(undefined4*)&param_1->field_388 = uVar2;
        uVar2 = GetSpecularFactor(this);
        *(undefined4*)((long)&param_1->field_388 + 4) = uVar2;
        uVar2 = GetFresnelBias(this);
        *(undefined4*)&param_1->field_396 = uVar2;
        uVar2 = GetReflectionStrength(this);
        *(undefined4*)((long)&param_1->field_396 + 4) = uVar2;
        uVar2 = GetEmissiveMapMaterialID(this);
        *(undefined4*)&param_1->field_88 = uVar2;
        uVar2 = GetEmissiveMapMaterialScale(this);
        *(undefined4*)((long)&param_1->field_88 + 4) = uVar2;
        pVVar6 = (Vector2T*)GetEmissiveUVScale(this);
        math::Vector2T<float>::operator=((Vector2T<float>*)&param_1->field_96, pVVar6);
        uVar3 = GetEmissiveRGB(this);
        local_40[0] = math::Colour3FromR8G8B8A8(uVar3);
        (&param_1->field_104, (Vector3T*)local_40)->SetXYZ();
        uVar2 = GetEmissiveSource(this);
        *(undefined4*)((long)&param_1->field_112 + 4) = uVar2;
        uVar2 = GetEmissiveScale(this);
        *(undefined4*)&param_1->field_120 = uVar2;
        uVar2 = GetEmissiveMapRefractionDepth(this);
        *(undefined4*)((long)&param_1->field_120 + 4) = uVar2;
        uVar1 = GetEmissiveMapMode(this);
        param_1->field_128 = uVar1;
        uVar2 = GetEmissiveFlowSpeed(this);
        *(undefined4*)&param_1->field_132 = uVar2;
        uVar2 = GetEmissiveMapMaterialScale();
        *(undefined4*)((long)&param_1->field_132 + 4) = uVar2;
        uVar1 = GetEmissiveUVMode(this);
        param_1->field_129 = uVar1;
        uVar2 = GetEmissiveBlend(this);
        *(undefined4*)&param_1->field_140 = uVar2;
        pVVar7 = (Vector3T*)GetScaledMousePosition();
        (&param_1->field_404, pVVar7)->SetXYZ();
        uVar3 = GetExtinctionOpaqueWaterColour(this);
        local_40[0] = math::Colour3FromR8G8B8A8(uVar3);
        (((long)&param_1->field_412 + 4), (Vector3T*)local_40)->SetXYZ();
        uVar2 = GetExtinctionVisibilityMetres(this);
        *(undefined4*)&param_1->field_428 = uVar2;
        uVar2 = GetCausticsScale(this);
        *(undefined4*)((long)&param_1->field_428 + 4) = uVar2;
        uVar2 = GetCausticsRefractionScale(this);
        *(undefined4*)&param_1->field_436 = uVar2;
        uVar2 = GetCausticsDepthFadeCutoff(this);
        *(undefined4*)((long)&param_1->field_436 + 4) = uVar2;
        uVar2 = GetCausticsDepthFadeScale(this);
        *(undefined4*)&param_1->field_444 = uVar2;
        uVar2 = GetIntensity();
        *(undefined4*)((long)&param_1->field_444 + 4) = uVar2;
        uVar2 = GetCausticsEdgeFadeEnd(this);
        *(undefined4*)&param_1->field_452 = uVar2;
        uVar2 = GetCausticsOverWaterFadeStart(this);
        *(undefined4*)((long)&param_1->field_452 + 4) = uVar2;
        uVar2 = GetCausticsOverWaterFadeEnd(this);
        *(undefined4*)&param_1->field_460 = uVar2;
        uVar2 = GetHTTPImage();
        *(undefined4*)((long)&param_1->field_460 + 4) = uVar2;
    }

    // 0x1004c6a80, 352 bytes, placed by class name
    // WaterType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* WaterType::DecodeType(PacketT* param_1, uint param_2) {
        char cVar1;
        undefined8 in_RAX;
        undefined8 uVar2;
        undefined4 uVar3;

        uVar3 = (undefined4)((ulong)in_RAX >> 32);
        cVar1 = DecodeUnusedParams();
        if (cVar1 == '\0') {
            cVar1 = DecodeLegacyParams(this, param_1, param_2);
            if (cVar1 == '\0') {
                cVar1 = DecodeFoamParams(this, param_1, param_2);
                if (cVar1 == '\0') {
                    cVar1 = DecodeLightingReflectionParams(this, param_1, param_2);
                    if (cVar1 == '\0') {
                        cVar1 = DecodeMaterialScaleParams(this, param_1, param_2);
                        if (cVar1 == '\0') {
                            cVar1 = DecodeNormalParams(this, param_1, param_2);
                            if (cVar1 == '\0') {
                                cVar1 = DecodeEmissiveParams(this, param_1, param_2);
                                if (cVar1 == '\0') {
                                    cVar1 = DecodeExtinctionParams(this, param_1, param_2);
                                    if (cVar1 == '\0') {
                                        cVar1 = DecodeCausticsParams(this, param_1, param_2);
                                        if (cVar1 == '\0') {
                                            if (param_2 == 81) {
                                                uVar3 = param_1->gFloat();
                                                m_stillWaterNormalStrength = uVar3;
                                            } else if (param_2 == 82) {
                                                uVar3 = param_1->gFloat();
                                                m_flowNoise = uVar3;
                                            } else if (param_2 == 85) {
                                                cVar1 = param_1->g1();
                                                field_56 = cVar1 != '\0';
                                            } else {
                                                uVar2 = logger::default_logger();
                                                logger::Logger::Log(
                                                    uVar2, 0, 2,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/game/runetek5/config/watertype/WaterType.cpp",
                                                    143, "Unrecognised .water config code: %u",
                                                    CONCAT44(uVar3, param_2));
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

    // 0x1004c6be0, 768 bytes, placed by class name
    // WaterType::DecodeUnusedParams(PacketT<Array<unsigned char, eastl::allocator> >&, WaterTypeEncoding)
    undefined8
    WaterType::DecodeUnusedParams(PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* param_1,
                                  undefined4 param_3) {
        byte bVar1;
        ushort uVar2;
        ushort uVar3;
        ushort uVar4;
        short sVar5;
        undefined4 uVar6;
        undefined8 uVar7;

        uVar7 = 0;
        switch (param_3) {
        case 1:
            uVar2 = param_1->g2();
            field_464 = (uint)uVar2;
            break;
        default:
            goto switchD_1004c6c0d_caseD_2;
        case 3:
            uVar2 = param_1->g2();
            field_468 = (uint)uVar2;
            break;
        case 6:
            uVar6 = param_1->g3();
            field_500 = uVar6;
            break;
        case 7:
            uVar2 = param_1->g2();
            field_504 = (uint)uVar2;
            uVar2 = param_1->g2();
            field_508 = (uint)uVar2;
            break;
        case 8:
            uVar2 = param_1->g2();
            field_512 = (uint)uVar2;
            break;
        case 11:
            uVar2 = param_1->g2();
            field_520 = (uint)uVar2;
            break;
        case 13:
            uVar2 = param_1->g2();
            field_524 = (uint)uVar2;
            break;
        case 15:
            uVar6 = param_1->g4();
            field_532 = uVar6;
            break;
        case 16:
            uVar2 = param_1->g2();
            field_516 = (uint)uVar2;
            break;
        case 17:
            uVar2 = param_1->g2();
            field_528 = (uint)uVar2;
            break;
        case 18:
            bVar1 = param_1->g1();
            field_488 = (float)bVar1 * 0.03125;
            break;
        case 19:
            bVar1 = param_1->g1();
            field_492 = (float)bVar1 * 0.03125;
            break;
        case 20:
            uVar2 = param_1->g2();
            field_496 = (float)uVar2 * 0.00390625;
            break;
        case 21:
            uVar2 = param_1->g2();
            field_472 = (uint)uVar2;
            break;
        case 22:
            uVar2 = param_1->g2();
            field_476 = (uint)uVar2;
            break;
        case 23:
            bVar1 = param_1->g1();
            field_480 = (float)bVar1;
            break;
        case 24:
            bVar1 = param_1->g1();
            field_484 = (float)bVar1 * 0.01;
            break;
        case 26:
            uVar2 = param_1->g2();
            uVar3 = param_1->g2();
            uVar4 = param_1->g2();
            (field_540, (float)uVar2 * 0.00390625, (float)uVar3 * 0.00390625, (float)uVar4 * 0.00390625)->Set();
            break;
        case 28:
            sVar5 = param_1->g2s();
            field_536 = (int)sVar5;
        }
        uVar7 = 1;
    switchD_1004c6c0d_caseD_2:
        return uVar7;
    }

    // 0x1004c6ee0, 48 bytes, placed by class name
    // WaterType::DecodeLegacyParams(PacketT<Array<unsigned char, eastl::allocator> >&, WaterTypeEncoding)
    bool WaterType::DecodeLegacyParams(PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* param_1,
                                       int param_3) {
        undefined4 uVar1;

        if (param_3 == 12) {
            uVar1 = param_1->g4();
            field_460 = uVar1;
        }
        return param_3 == 12;
    }

    // 0x1004c6f10, 64 bytes, placed by class name
    // WaterType::DecodeFoamParams(PacketT<Array<unsigned char, eastl::allocator> >&, WaterTypeEncoding)
    undefined8 WaterType::DecodeFoamParams(PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* param_1,
                                           int param_3) {
        ushort uVar1;

        if (param_3 == 14) {
            uVar1 = param_1->g2();
            field_64 = (uint)uVar1;
        } else {
            if (param_3 != 9) {
                return 0;
            }
            uVar1 = param_1->g2();
            field_68 = (uint)uVar1;
        }
        return CONCAT71((uint7)(byte)(uVar1 >> 8), 1);
    }

    // 0x1004c6f50, 176 bytes, placed by class name
    // WaterType::DecodeLightingReflectionParams(PacketT<Array<unsigned char, eastl::allocator> >&, WaterTypeEncoding)
    undefined8 WaterType::DecodeLightingReflectionParams(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* param_1, int param_3) {
        ushort uVar1;
        undefined4 extraout_XMM0_Da;

        if (param_3 < 27) {
            if (param_3 == 5) {
                uVar1 = param_1->g2();
                m_reflectionStrength = (float)uVar1 * 0.00390625;
            } else {
                if (param_3 != 25) {
                    return 0;
                }
                uVar1 = param_1->g2();
                m_specularShininess = (float)uVar1 * 0.00390625;
            }
        } else if (param_3 == 84) {
            param_1->gFloat();
        } else if (param_3 == 83) {
            param_1->gFloat();
            m_fresnelBias = extraout_XMM0_Da;
        } else {
            if (param_3 != 27) {
                return 0;
            }
            uVar1 = param_1->g2();
            m_specularFactor = (uint)uVar1;
        }
        return 1;
    }

    // 0x1004c7000, 384 bytes, placed by class name
    // WaterType::DecodeMaterialScaleParams(PacketT<Array<unsigned char, eastl::allocator> >&, WaterTypeEncoding)
    undefined8
    WaterType::DecodeMaterialScaleParams(PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* param_1,
                                         int param_3) {
        ushort uVar1;
        float* pfVar2;
        undefined8 uVar3;
        ulong uVar4;

        uVar3 = 0;
        switch (param_3) {
        case 2:
            uVar1 = param_1->g2();
            uVar4 = 0;
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
            uVar1 = param_1->g2();
            uVar4 = 1;
            break;
        case 10:
            uVar1 = param_1->g2();
            field_72 = (float)uVar1 * 0.00390625;
            goto LAB_1004c70f2;
        case 32:
            uVar1 = param_1->g2();
            uVar4 = 2;
            break;
        default:
            if (param_3 != 87) {
                return 0;
            }
            uVar1 = param_1->g2();
            m_emissiveMapMaterialScale = (float)uVar1 * 0.00390625;
            goto LAB_1004c70f2;
        }
        pfVar2 = (float*)std::array<float, 3ul>::operator[]((array<float, 3ul>*)&field_88, uVar4);
        *pfVar2 = (float)uVar1 * 0.00390625;
    LAB_1004c70f2:
        uVar3 = 1;
    switchD_1004c7021_caseD_3:
        return uVar3;
    }

    // 0x1004c7180, 336 bytes, placed by class name
    // WaterType::DecodeNormalParams(PacketT<Array<unsigned char, eastl::allocator> >&, WaterTypeEncoding)
    undefined8
    WaterType::DecodeNormalParams(long param_1,
                                  PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* param_2) {
        char cVar1;
        long lVar2;
        undefined8 uVar3;
        array<graphics::WaterNormalMapParams, 3ul>* this;
        undefined4 extraout_XMM0_Da;
        undefined4 extraout_XMM0_Da_00;
        undefined4 extraout_XMM0_Da_01;
        undefined4 extraout_XMM0_Da_02;
        undefined4 uVar4;
        undefined4 extraout_XMM0_Da_03;
        undefined4 extraout_XMM0_Da_04;
        undefined4 extraout_XMM0_Da_05;
        WaterNormalParamsTarget local_30;

        cVar1 = DecodeNormalMapMaterials();
        if (cVar1 != '\0') {
            return 1;
        }
        local_30._0_12_ = GetNormalParamsTarget();
        cVar1 = local_30.IsValid();
        if (cVar1 == '\0') {
        switchD_1004c71fc_default:
            uVar3 = 0;
        } else {
            this = (array<graphics::WaterNormalMapParams, 3ul>*)(param_1 + 220);
            if (local_30._4_4_ != 2) {
                this = (array<graphics::WaterNormalMapParams, 3ul>*)(param_1 + 100);
            }
            lVar2 = std::array<graphics::WaterNormalMapParams, 3ul>::operator[](this, (long)(int)local_30._8_4_);
            switch (local_30.field_0) {
            case 1:
                cVar1 = param_2->g1();
                *(bool*)lVar2 = cVar1 != '\0';
                break;
            case 2:
                param_2->gFloat();
                *(undefined4*)(lVar2 + 4) = extraout_XMM0_Da;
                break;
            case 3:
                param_2->gFloat();
                *(undefined4*)(lVar2 + 8) = extraout_XMM0_Da_00;
                break;
            case 4:
                param_2->gFloat();
                *(undefined4*)(lVar2 + 12) = extraout_XMM0_Da_01;
                break;
            case 5:
                uVar4 = param_2->gFloat();
                *(undefined4*)(lVar2 + 16) = uVar4;
                param_2->gFloat();
                *(undefined4*)(lVar2 + 20) = extraout_XMM0_Da_02;
                break;
            case 6:
                uVar4 = param_2->gFloat();
                *(undefined4*)(lVar2 + 24) = uVar4;
                param_2->gFloat();
                *(undefined4*)(lVar2 + 28) = extraout_XMM0_Da_03;
                break;
            case 7:
                param_2->gFloat();
                *(undefined4*)(lVar2 + 32) = extraout_XMM0_Da_04;
                break;
            case 8:
                param_2->gFloat();
                *(undefined4*)(lVar2 + 36) = extraout_XMM0_Da_05;
                break;
            default:
                goto switchD_1004c71fc_default;
            }
            uVar3 = 1;
        }
        return uVar3;
    }

    // 0x1004c72d0, 384 bytes, placed by class name
    // WaterType::DecodeEmissiveParams(PacketT<Array<unsigned char, eastl::allocator> >&, WaterTypeEncoding)
    undefined8
    WaterType::DecodeEmissiveParams(PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* param_1,
                                    undefined4 param_3) {
        undefined1 uVar1;
        ushort uVar2;
        undefined4 uVar3;
        undefined8 uVar4;
        undefined4 extraout_XMM0_Da;
        undefined4 extraout_XMM0_Da_00;
        undefined4 extraout_XMM0_Da_01;
        undefined4 extraout_XMM0_Da_02;
        undefined4 extraout_XMM0_Da_03;
        undefined4 extraout_XMM0_Da_04;
        undefined4 extraout_XMM0_Da_05;

        uVar4 = 0;
        switch (param_3) {
        case 86:
            uVar2 = param_1->g2();
            m_emissiveMapMaterialID = (uint)uVar2;
            break;
        default:
            goto switchD_1004c72f9_caseD_57;
        case 88:
            uVar3 = param_1->gFloat();
            m_emissiveUVScale = uVar3;
            param_1->gFloat();
            field_356 = extraout_XMM0_Da;
            break;
        case 89:
            uVar3 = param_1->g4();
            m_emissiveRGB = uVar3;
            break;
        case 90:
            param_1->gFloat();
            m_emissiveScale = extraout_XMM0_Da_00;
            break;
        case 91:
            param_1->gFloat();
            m_emissiveMapRefractionDepth = extraout_XMM0_Da_01;
            break;
        case 92:
            uVar1 = param_1->g1();
            m_emissiveMapMode = uVar1;
            break;
        case 93:
            param_1->gFloat();
            m_emissiveSource = extraout_XMM0_Da_02;
            break;
        case 94:
            param_1->gFloat();
            m_emissiveFlowSpeed = extraout_XMM0_Da_03;
            break;
        case 95:
            param_1->gFloat();
            field_384 = extraout_XMM0_Da_04;
            break;
        case 96:
            uVar1 = param_1->g1();
            m_emissiveUVMode = uVar1;
            break;
        case 108:
            param_1->gFloat();
            m_emissiveBlend = extraout_XMM0_Da_05;
        }
        uVar4 = 1;
    switchD_1004c72f9_caseD_57:
        return uVar4;
    }

    // 0x1004c7450, 128 bytes, placed by class name
    // WaterType::DecodeExtinctionParams(PacketT<Array<unsigned char, eastl::allocator> >&, WaterTypeEncoding)
    undefined8
    WaterType::DecodeExtinctionParams(PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* param_1,
                                      int param_3) {
        undefined4 uVar1;
        undefined4 extraout_XMM0_Da;
        undefined4 extraout_XMM0_Da_00;

        if (param_3 == 99) {
            param_1->gFloat();
            m_extinctionVisibilityMetres = extraout_XMM0_Da_00;
        } else if (param_3 == 98) {
            uVar1 = param_1->g4();
            *(undefined4*)(field_408 + 12) = uVar1;
        } else {
            if (param_3 != 97) {
                return 0;
            }
            uVar1 = param_1->gFloat();
            *(undefined4*)field_408 = uVar1;
            uVar1 = param_1->gFloat();
            *(undefined4*)(field_408 + 4) = uVar1;
            param_1->gFloat();
            *(undefined4*)(field_408 + 8) = extraout_XMM0_Da;
        }
        return 1;
    }

    // 0x1004c74d0, 224 bytes, placed by class name
    // WaterType::DecodeCausticsParams(PacketT<Array<unsigned char, eastl::allocator> >&, WaterTypeEncoding)
    undefined8
    WaterType::DecodeCausticsParams(PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* param_1,
                                    undefined4 param_3) {
        undefined4 extraout_XMM0_Da;
        undefined4 extraout_XMM0_Da_00;
        undefined4 extraout_XMM0_Da_01;
        undefined4 extraout_XMM0_Da_02;
        undefined4 extraout_XMM0_Da_03;
        undefined4 extraout_XMM0_Da_04;
        undefined4 extraout_XMM0_Da_05;
        undefined4 extraout_XMM0_Da_06;

        switch (param_3) {
        case 100:
            param_1->gFloat();
            m_causticsScale = extraout_XMM0_Da;
            break;
        case 101:
            param_1->gFloat();
            m_causticsRefractionScale = extraout_XMM0_Da_00;
            break;
        case 102:
            param_1->gFloat();
            m_causticsDepthFadeCutoff = extraout_XMM0_Da_01;
            break;
        case 103:
            param_1->gFloat();
            m_causticsDepthFadeScale = extraout_XMM0_Da_02;
            break;
        case 104:
            param_1->gFloat();
            field_444 = extraout_XMM0_Da_03;
            break;
        case 105:
            param_1->gFloat();
            m_causticsEdgeFadeEnd = extraout_XMM0_Da_04;
            break;
        case 106:
            param_1->gFloat();
            m_causticsOverWaterFadeStart = extraout_XMM0_Da_05;
            break;
        case 107:
            param_1->gFloat();
            m_causticsOverWaterFadeEnd = extraout_XMM0_Da_06;
            break;
        default:
            return 0;
        }
        return 1;
    }

    // 0x1004c75c0, 16 bytes, placed by class name
    // WaterType::PostDecode()
    void WaterType::PostDecode() {}

    // 0x1004c75d0, 80 bytes, placed by class name
    // WaterType::DecodeNormalMapMaterials(PacketT<Array<unsigned char, eastl::allocator> >&, WaterTypeEncoding)
    bool
    WaterType::DecodeNormalMapMaterials(PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* param_1,
                                        int param_3) {
        undefined1 uVar1;
        undefined1 extraout_AL;
        undefined1 extraout_AH;
        undefined1 extraout_AH_00;
        undefined6 extraout_var;
        uint uVar2;

        uVar2 = param_3 - 29;
        if (uVar2 < 3) {
            uVar1 = param_1->g2();
            std::array<int, 3ul>::operator[]((array<int, 3ul>*)&field_76, (ulong)uVar2);
            *(uint*)CONCAT62(extraout_var, CONCAT11(extraout_AH_00, extraout_AL)) = (uint)CONCAT11(extraout_AH, uVar1);
        }
        return uVar2 < 3;
    }

    // 0x1004c7620, 1008 bytes, placed by class name
    // WaterType::GetNormalParamsTarget(WaterTypeEncoding) const
    undefined1[16] WaterType::GetNormalParamsTarget(undefined8 param_1, undefined4 param_2) {
        int iVar1;
        int iVar2;
        int iVar3;
        undefined1 auVar4[16];
        undefined1 auVar5[12];
        LocationData local_18;

        switch (param_2) {
        case 33:
            iVar3 = 1;
            goto LAB_1004c76a7;
        case 34:
            iVar3 = 2;
            goto LAB_1004c76a7;
        case 35:
            iVar3 = 3;
            goto LAB_1004c76a7;
        case 36:
            iVar3 = 4;
            goto LAB_1004c76a7;
        case 37:
            iVar3 = 5;
            goto LAB_1004c76a7;
        case 38:
            iVar3 = 6;
            goto LAB_1004c76a7;
        case 39:
            iVar3 = 7;
            goto LAB_1004c76a7;
        case 40:
            iVar3 = 8;
        LAB_1004c76a7:
            iVar2 = 1;
            break;
        case 41:
            iVar3 = 1;
            goto LAB_1004c7709;
        case 42:
            iVar3 = 2;
            goto LAB_1004c7709;
        case 43:
            iVar3 = 3;
            goto LAB_1004c7709;
        case 44:
            iVar3 = 4;
            goto LAB_1004c7709;
        case 45:
            iVar3 = 5;
            goto LAB_1004c7709;
        case 46:
            iVar3 = 6;
            goto LAB_1004c7709;
        case 47:
            iVar3 = 7;
            goto LAB_1004c7709;
        case 48:
            iVar3 = 8;
        LAB_1004c7709:
            iVar2 = 1;
            goto LAB_1004c770e;
        case 49:
            iVar3 = 1;
            goto LAB_1004c776b;
        case 50:
            iVar3 = 2;
            goto LAB_1004c776b;
        case 51:
            iVar3 = 3;
            goto LAB_1004c776b;
        case 52:
            iVar3 = 4;
            goto LAB_1004c776b;
        case 53:
            iVar3 = 5;
            goto LAB_1004c776b;
        case 54:
            iVar3 = 6;
            goto LAB_1004c776b;
        case 55:
            iVar3 = 7;
            goto LAB_1004c776b;
        case 56:
            iVar3 = 8;
        LAB_1004c776b:
            iVar2 = 1;
            goto LAB_1004c7770;
        case 57:
            iVar3 = 1;
            iVar2 = 2;
            break;
        case 58:
            iVar3 = 2;
            iVar2 = 2;
            break;
        case 59:
            iVar3 = 3;
            iVar2 = 2;
            break;
        case 60:
            iVar3 = 4;
            iVar2 = 2;
            break;
        case 61:
            iVar3 = 5;
            iVar2 = 2;
            break;
        case 62:
            iVar3 = 6;
            iVar2 = 2;
            break;
        case 63:
            iVar3 = 7;
            iVar2 = 2;
            break;
        case 64:
            iVar3 = 8;
            iVar2 = 2;
            break;
        case 65:
            iVar3 = 1;
            iVar2 = 2;
            goto LAB_1004c770e;
        case 66:
            iVar3 = 2;
            iVar2 = 2;
            goto LAB_1004c770e;
        case 67:
            iVar3 = 3;
            iVar2 = 2;
            goto LAB_1004c770e;
        case 68:
            iVar3 = 4;
            iVar2 = 2;
            goto LAB_1004c770e;
        case 69:
            iVar3 = 5;
            iVar2 = 2;
            goto LAB_1004c770e;
        case 70:
            iVar3 = 6;
            iVar2 = 2;
            goto LAB_1004c770e;
        case 71:
            iVar3 = 7;
            iVar2 = 2;
            goto LAB_1004c770e;
        case 72:
            iVar3 = 8;
            iVar2 = 2;
        LAB_1004c770e:
            iVar1 = 1;
            goto LAB_1004c7775;
        case 73:
            iVar3 = 1;
            iVar2 = 2;
            goto LAB_1004c7770;
        case 74:
            iVar3 = 2;
            iVar2 = 2;
            goto LAB_1004c7770;
        case 75:
            iVar3 = 3;
            iVar2 = 2;
            goto LAB_1004c7770;
        case 76:
            iVar3 = 4;
            iVar2 = 2;
            goto LAB_1004c7770;
        case 77:
            iVar3 = 5;
            iVar2 = 2;
            goto LAB_1004c7770;
        case 78:
            iVar3 = 6;
            iVar2 = 2;
            goto LAB_1004c7770;
        case 79:
            iVar3 = 7;
            iVar2 = 2;
            goto LAB_1004c7770;
        case 80:
            iVar3 = 8;
            iVar2 = 2;
        LAB_1004c7770:
            iVar1 = 2;
            goto LAB_1004c7775;
        default:
            auVar5 = WaterNormalParamsTarget::Invalid();
            goto LAB_1004c777a;
        }
        iVar1 = 0;
    LAB_1004c7775:
        new (&local_18) oldscape::rs2lib::worldmap::LocationData(iVar3, iVar2, iVar1);
        auVar5._8_4_ = local_18.field_8;
        auVar5._0_4_ = local_18.field_0;
        auVar5._4_4_ = local_18.field_4;
    LAB_1004c777a:
        auVar4._12_4_ = 0;
        auVar4._0_12_ = auVar5;
        return auVar4;
    }

    // 0x1004c7ab0, 48 bytes, placed by class name
    // WaterType::operator graphics::WaterPatchConfig() const
    WaterPatchConfig* WaterType::operator_cast_to_WaterPatchConfig(WaterPatchConfig* __return_storage_ptr__,
                                                                   WaterType* this) {
        graphics::WaterPatchConfig::WaterPatchConfig(__return_storage_ptr__);
        ApplyToWaterPatchConfig(this, __return_storage_ptr__);
        return __return_storage_ptr__;
    }

} // namespace jag::game
