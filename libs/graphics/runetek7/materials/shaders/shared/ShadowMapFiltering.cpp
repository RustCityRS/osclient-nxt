// libs/graphics/runetek7/materials/shaders/shared/ShadowMapFiltering.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class ShadowMapFiltering {
    public:
        ReturnValue* BuildFragment(ShadowMapFilter shadowMapFilter);
        ShadowMapFiltering* ShadowDepthMapOffsetTap(int arg1, int arg2, float arg3, float arg4);
        ShadowMapFiltering* ShadowTranslucencyMapOffsetTap(int arg1, int arg2, float arg3, float arg4);

        uint8_t _unknown_0[1];
    };

    // 0x1008537d0
    ReturnValue* ShadowMapFiltering::BuildFragment(ShadowMapFilter shadowMapFilter) {
        Layout* pLVar4;
        float* pfVar5;
        Vector2T<int>* pVVar6;
        unsigned long uVar7;
        unsigned long uVar8;
        int iVar9;
        unsigned int uVar11;
        bool bVar12;
        basic_ostream<char, std::char_traits<char> _> local_1d8;
        ShadowMapFiltering local_d0;
        ShadowMapFiltering local_b8;
        ShadowMapFiltering local_a0;
        ReturnValue local_88;
        ReturnValue local_78;
        ReturnValue local_68;
        ShadowMapFiltering local_50;
        unsigned int local_34;

        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_1e8;
        std::operator<<(&local_1d8, "#ifndef SHADOW_MAP_FILTERING_INC\n#define SHADOW_MAP_FILTERING_INC\n");
        basic_ostream<char, std::char_traits<char> _>* pbVar3 = &local_1d8;
        std::operator<<(&local_1d8,
                        "\nfloat ShadowDepthMapTap(sampler2D shadowDepthMap, vec2 texCoords)\n{\n   vec4 shadowTexel = "
                        "texture2DLodCompat(shadowDepthMap, texCoords, 0.0);\n   return shadowTexel.r;\n}\n");
        auto pMVar1 = pbVar3->Instance();
        long lVar2 = pMVar1->GetOrigin();
        if (*(char*)(lVar2 + 182) != '\0') {
            std::operator<<(&local_1d8,
                            "\nfloat ShadowDepthMapTapPCF(sampler2DShadow shadowDepthMap, vec4 texCoords)\n{\n   "
                            "return shadow2DLodCompat(shadowDepthMap, texCoords.xyz, 0.0);\n}\n");
        }
        pbVar3 = &local_1d8;
        std::operator<<(&local_1d8,
                        "\nfloat ShadowDepthMapOffsetTap(sampler2D shadowDepthMap, vec4 texCoords, vec2 texelOffset, "
                        "vec2 texelSize)\n{\n   texCoords.xy += (texelOffset * texelSize);\n   vec4 shadowTexel = "
                        "texture2DLodCompat(shadowDepthMap, texCoords.xy, 0.0);\n   return shadowTexel.r;\n}\n");
        pMVar1 = (MapArea*)pbVar3->Instance();
        lVar2 = pMVar1->GetOrigin();
        if (*(char*)(lVar2 + 182) != '\0') {
            std::operator<<(&local_1d8,
                            "\nfloat ShadowDepthMapOffsetTapPCF(sampler2DShadow shadowDepthMap, vec4 texCoords, vec2 "
                            "texelOffset, vec2 texelSize)\n{\n   texCoords.xy += (texelOffset * texelSize);\n   return "
                            "shadow2DLodCompat(shadowDepthMap, texCoords.xyz, 0.0);\n}\n");
        }
        std::operator<<(&local_1d8,
                        "\nfloat ShadowDepthMapOffsetTap(sampler2D shadowDepthMap, vec4 texCoords, vec2 texelOffset, "
                        "vec2 texelSize, vec4 uvExtents)\n{\n     texCoords.xy += (texelOffset * texelSize);\n");
        pbVar3 = &local_1d8;
        std::operator<<(
            &local_1d8,
            "     vec2 halfTexelSize = vec2(texelSize * 0.5);\n     texCoords.x = clamp(texCoords.x, uvExtents.x + "
            "halfTexelSize.x, uvExtents.z - halfTexelSize.x);\n     texCoords.y = clamp(texCoords.y, uvExtents.y + "
            "halfTexelSize.y, uvExtents.w - halfTexelSize.y);\n   vec4 shadowTexel = "
            "texture2DLodCompat(shadowDepthMap, texCoords.xy, 0.0);\n   return shadowTexel.r;\n}\n");
        pMVar1 = (MapArea*)pbVar3->Instance();
        lVar2 = pMVar1->GetOrigin();
        if (*(char*)(lVar2 + 182) != '\0') {
            std::operator<<(
                &local_1d8,
                "\nfloat ShadowDepthMapOffsetTapPCF(sampler2DShadow shadowDepthMap, vec4 texCoords, vec2 texelOffset, "
                "vec2 texelSize, vec4 uvExtents)\n{\n     texCoords.xy += (texelOffset * texelSize);\n");
            std::operator<<(&local_1d8,
                            "     vec2 halfTexelSize = vec2(texelSize * 0.5);\n     texCoords.x = clamp(texCoords.x, "
                            "uvExtents.x + halfTexelSize.x, uvExtents.z - halfTexelSize.x);\n     texCoords.y = "
                            "clamp(texCoords.y, uvExtents.y + halfTexelSize.y, uvExtents.w - halfTexelSize.y);\n     "
                            "return shadow2DLodCompat(shadowDepthMap, texCoords.xyz, 0.0);\n}\n");
        }
        std::operator<<(&local_1d8,
                        "\nfloat ShadowTranslucencyMapOffsetTap(sampler2D shadowTranslucencyMap, vec2 texCoords, vec2 "
                        "texelOffset, vec2 texelSize)\n{\n   texCoords += (texelOffset * texelSize);\n   return "
                        "texture2DLodCompat(shadowTranslucencyMap, texCoords, 0.0).r;\n}\n");
        pbVar3 = &local_1d8;
        std::operator<<(&local_1d8,
                        "\nfloat ShadowDepthMapFilter1x1(SHADOW_SAMPLER shadowDepthMap, vec4 texCoords)\n{\n");
        pMVar1 = (MapArea*)pbVar3->Instance();
        lVar2 = pMVar1->GetOrigin();
        if (*(char*)(lVar2 + 182) == '\0') {
            std::operator<<(&local_1d8,
                            "   return step(texCoords.z, ShadowDepthMapTap(shadowDepthMap, texCoords.xy));\n");
        } else {
            std::operator<<(&local_1d8, "   return ShadowDepthMapTapPCF(shadowDepthMap, texCoords);\n");
        }
        std::operator<<(&local_1d8, "}\n");
        pbVar3 = &local_1d8;
        std::operator<<(&local_1d8, "\nfloat ShadowDepthMapFilter2x2Box(SHADOW_SAMPLER shadowDepthMap, vec4 texCoords, "
                                    "vec2 texelSize, vec4 uvExtents)\n{\n   float shadowTotal = 0.0;\n");
        pMVar1 = (MapArea*)pbVar3->Instance();
        lVar2 = pMVar1->GetOrigin();
        if (1 < *(int*)(lVar2 + 84)) {
            std::operator<<(&local_1d8, "   texCoords.xy += vec2(texelSize * 0.5);\n");
        }
        std::operator<<(&local_1d8, "   vec2 borderSize = vec2(texelSize * 1.5);\n   texCoords.xy = "
                                    "clamp(texCoords.xy, uvExtents.xy + borderSize, uvExtents.zw - borderSize);\n");
        int iVar10 = -1;
        do {
            iVar9 = -1;
            do {
                ShadowDepthMapOffsetTap(&local_50, iVar9, iVar10, 0.0, 0.0);
                std::operator<<(&local_1d8,
                                (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
                iVar9 = iVar9 + 1;
            } while (iVar9 != 1);
            bVar12 = iVar10 != 0;
            iVar10 = iVar10 + 1;
        } while (bVar12);
        std::operator<<(&local_1d8, "   return shadowTotal * 0.25;\n}\n");
        pbVar3 = &local_1d8;
        std::operator<<(&local_1d8, "\nfloat ShadowDepthMapFilter4x4BoxApprox(SHADOW_SAMPLER shadowDepthMap, vec4 "
                                    "texCoords, vec2 texelSize, vec4 uvExtents)\n{\n   float shadowTotal = 0.0;\n");
        pMVar1 = (MapArea*)pbVar3->Instance();
        lVar2 = pMVar1->GetOrigin();
        if (1 < *(int*)(lVar2 + 84)) {
            std::operator<<(&local_1d8, "   texCoords.xy += vec2(texelSize * 0.5);\n");
        }
        pbVar3 =
            std::operator<<(&local_1d8, "   vec2 borderSize = vec2(texelSize * 2.5);\n   texCoords.xy = "
                                        "clamp(texCoords.xy, uvExtents.xy + borderSize, uvExtents.zw - borderSize);\n");
        ShadowDepthMapOffsetTap(&local_50, -2, -2, 0.5, 0.5);
        pbVar3 = std::operator<<(pbVar3, &local_50);
        ShadowDepthMapOffsetTap(&local_d0, -2, 1, 0.5, 0.5);
        pbVar3 = std::operator<<(pbVar3, &local_d0);
        ShadowDepthMapOffsetTap(&local_b8, 1, -2, 0.5, 0.5);
        pbVar3 = std::operator<<(pbVar3, &local_b8);
        ShadowDepthMapOffsetTap(&local_a0, 1, 1, 0.5, 0.5);
        pbVar3 = std::operator<<(pbVar3, &local_a0);
        std::operator<<(
            pbVar3, "   if (shadowTotal == 0.0 || shadowTotal >= 3.9)\n   {\n      return shadowTotal * 0.25;\n   }\n");
        iVar10 = -2;
        do {
            iVar9 = -2;
            do {
                if (((iVar9 != 1) && (iVar9 != -2)) || ((iVar10 != -2 && (iVar10 != 1)))) {
                    ShadowDepthMapOffsetTap(&local_50, iVar9, iVar10, 0.5, 0.5);
                    std::operator<<(&local_1d8, &local_50);
                }
                iVar9 = iVar9 + 1;
            } while (iVar9 != 2);
            iVar10 = iVar10 + 1;
        } while (iVar10 != 2);
        std::operator<<(&local_1d8, "   return shadowTotal *= 0.0625;\n}\n");
        std::operator<<(
            &local_1d8,
            "\nfloat ShadowDepthMapFilter4x4Box(SHADOW_SAMPLER shadowDepthMap, vec4 texCoords, vec2 texelSize, vec4 "
            "uvExtents)\n{\n   float shadowTotal = 0.0;\n   vec2 borderSize = vec2(texelSize * 5.0);\n   texCoords.xy "
            "= clamp(texCoords.xy, uvExtents.xy + borderSize, uvExtents.zw - borderSize);\n");
        iVar10 = -2;
        do {
            iVar9 = -2;
            do {
                ShadowDepthMapOffsetTap(&local_50, iVar9, iVar10, 0.0, 0.0);
                std::operator<<(&local_1d8,
                                (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
                iVar9 = iVar9 + 1;
            } while (iVar9 != 2);
            iVar10 = iVar10 + 1;
        } while (iVar10 != 2);
        std::operator<<(&local_1d8, "   return shadowTotal *= 0.0625;\n}\n");
        std::operator<<(
            &local_1d8,
            "\nfloat ShadowDepthMapFilter8x8Box(SHADOW_SAMPLER shadowDepthMap, vec4 texCoords, vec2 texelSize, vec4 "
            "uvExtents)\n{\n   float shadowTotal = 0.0;\n   vec2 borderSize = vec2(texelSize * 5.0);\n   texCoords.xy "
            "= clamp(texCoords.xy, uvExtents.xy + borderSize, uvExtents.zw - borderSize);\n");
        iVar10 = -4;
        do {
            iVar9 = -4;
            do {
                ShadowDepthMapOffsetTap(&local_50, iVar9, iVar10, 0.0, 0.0);
                std::operator<<(&local_1d8,
                                (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
                iVar9 = iVar9 + 1;
            } while (iVar9 != 4);
            iVar10 = iVar10 + 1;
        } while (iVar10 != 4);
        std::operator<<(&local_1d8, "   return smoothstep(2.0, 58.0, shadowTotal);\n}\n");
        std::operator<<(
            &local_1d8,
            "\nfloat ShadowDepthMapDiskFilter(SHADOW_SAMPLER shadowDepthMap, vec4 texCoords, vec2 texelSize, vec4 "
            "uvExtents)\n{\n   float shadowTotal = 0.0;\n   vec2 borderSize = vec2(texelSize * 5.0);\n   texCoords.xy "
            "= clamp(texCoords.xy, uvExtents.xy + borderSize, uvExtents.zw - borderSize);\n");
        GetPoissonDiskData(&local_88, shadowMapFilter);
        lVar2 = local_88.HeapBeginPtr();
        if (lVar2 != 0) {
            uVar11 = 1;
            uVar8 = 0;
            do {
                local_34 = uVar11;
                pLVar4 = &local_88[uVar8];
                pfVar5 = (float*)pLVar4->SSOBeginPtr();
                iVar10 = math::RoundFloatToInt(*pfVar5 * 1.75);
                pVVar6 = &local_88[uVar8];
                pfVar5 = (float*)pVVar6->y();
                iVar9 = math::RoundFloatToInt(*pfVar5 * 1.75);
                ShadowDepthMapOffsetTap(&local_50, iVar10, iVar9, 0.0, 0.0);
                std::operator<<(&local_1d8,
                                (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
                uVar11 = local_34;
                uVar8 = (unsigned long)local_34;
                uVar7 = local_88.HeapBeginPtr();
                uVar11 = uVar11 + 1;
            } while (uVar8 < uVar7);
        }
        pbVar3 = std::operator<<(&local_1d8, "    return shadowTotal * ");
        uVar8 = local_88.HeapBeginPtr();
        pbVar3 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar3,
                                                                                          1.0 / (double)uVar8);
        std::operator<<(pbVar3, ";\n}\n");
        std::operator<<(
            &local_1d8,
            "\nfloat ShadowDepthMapDiskFilter8Tap(SHADOW_SAMPLER shadowDepthMap, vec4 texCoords, vec2 texelSize, vec4 "
            "uvExtents)\n{\n   float shadowTotal = 0.0;\n   vec2 borderSize = vec2(texelSize * 5.0);\n   texCoords.xy "
            "= clamp(texCoords.xy, uvExtents.xy + borderSize, uvExtents.zw - borderSize);\n");
        GetPoissonDiskData(&local_78, 4);
        lVar2 = local_78.HeapBeginPtr();
        if (lVar2 != 0) {
            uVar11 = 1;
            uVar8 = 0;
            do {
                local_34 = uVar11;
                pLVar4 = &local_78[uVar8];
                pfVar5 = (float*)pLVar4->SSOBeginPtr();
                iVar10 = math::RoundFloatToInt(*pfVar5 * 1.75);
                pVVar6 = &local_78[uVar8];
                pfVar5 = (float*)pVVar6->y();
                iVar9 = math::RoundFloatToInt(*pfVar5 * 1.75);
                ShadowDepthMapOffsetTap(&local_50, iVar10, iVar9, 0.0, 0.0);
                std::operator<<(&local_1d8,
                                (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
                uVar11 = local_34;
                uVar8 = (unsigned long)local_34;
                uVar7 = local_78.HeapBeginPtr();
                uVar11 = uVar11 + 1;
            } while (uVar8 < uVar7);
        }
        pbVar3 = std::operator<<(&local_1d8, "    return shadowTotal * ");
        uVar8 = local_78.HeapBeginPtr();
        pbVar3 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar3,
                                                                                          1.0 / (double)uVar8);
        std::operator<<(pbVar3, ";\n}\n");
        std::operator<<(
            &local_1d8,
            "\nfloat ShadowDepthMapDiskFilter12Tap(SHADOW_SAMPLER shadowDepthMap, vec4 texCoords, vec2 texelSize, vec4 "
            "uvExtents)\n{\n   float shadowTotal = 0.0;\n   vec2 borderSize = vec2(texelSize * 5.0);\n   texCoords.xy "
            "= clamp(texCoords.xy, uvExtents.xy + borderSize, uvExtents.zw - borderSize);\n");
        GetPoissonDiskData(&local_68, 5);
        lVar2 = local_68.HeapBeginPtr();
        if (lVar2 != 0) {
            uVar11 = 1;
            uVar8 = 0;
            do {
                local_34 = uVar11;
                pLVar4 = &local_68[uVar8];
                pfVar5 = (float*)pLVar4->SSOBeginPtr();
                iVar10 = math::RoundFloatToInt(*pfVar5 * 1.75);
                pVVar6 = &local_68[uVar8];
                pfVar5 = (float*)pVVar6->y();
                iVar9 = math::RoundFloatToInt(*pfVar5 * 1.75);
                ShadowDepthMapOffsetTap(&local_50, iVar10, iVar9, 0.0, 0.0);
                std::operator<<(&local_1d8,
                                (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
                uVar11 = local_34;
                uVar8 = (unsigned long)local_34;
                uVar7 = local_68.HeapBeginPtr();
                uVar11 = uVar11 + 1;
            } while (uVar8 < uVar7);
        }
        pbVar3 = std::operator<<(&local_1d8, "    return shadowTotal * ");
        uVar8 = local_68.HeapBeginPtr();
        pbVar3 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar3,
                                                                                          1.0 / (double)uVar8);
        std::operator<<(pbVar3, ";\n}\n");
        std::operator<<(&local_1d8,
                        "float ShadowDepthMapFilterExp(SHADOW_SAMPLER shadowDepthMap, vec4 texCoords, vec2 "
                        "texelSize)\n{\n    float occluderDepth = ShadowDepthMapFilter1x1(shadowDepthMap, "
                        "texCoords);\n    float recieverDepth = texCoords.z;\n    const float darkeningFactor = "
                        "100.0;\n    return exp(darkeningFactor * (occluderDepth - recieverDepth));\n}\n");
        std::operator<<(&local_1d8, "\nfloat ShadowTranslucencyMapFilter2x2Box(sampler2D shadowTranslucencyMap, vec2 "
                                    "texCoords, vec2 texelSize)\n{\n   float minTranslucency = 1.0;\n");
        iVar10 = -1;
        do {
            iVar9 = -1;
            do {
                ShadowTranslucencyMapOffsetTap(&local_50, iVar9, iVar10, 0.0, 0.0);
                std::operator<<(&local_1d8,
                                (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
                iVar9 = iVar9 + 1;
            } while (iVar9 != 1);
            bVar12 = iVar10 != 0;
            iVar10 = iVar10 + 1;
        } while (bVar12);
        std::operator<<(&local_1d8, "   return minTranslucency;\n}\n");
        pbVar3 = std::operator<<(
            &local_1d8,
            "\nfloat ShadowTranslucencyMapFilter4x4BoxApprox(sampler2D shadowTranslucencyMap, vec2 texCoords, vec2 "
            "texelSize, vec4 uvExtents)\n{\n   float minTranslucency = 1.0;\n   vec2 borderSize = vec2(texelSize * "
            "2.5);\n   texCoords.xy = clamp(texCoords.xy, uvExtents.xy + borderSize, uvExtents.zw - borderSize);\n");
        ShadowTranslucencyMapOffsetTap(&local_50, -2, -2, 0.5, 0.5);
        pbVar3 = std::operator<<(pbVar3, &local_50);
        ShadowTranslucencyMapOffsetTap(&local_d0, -2, 1, 0.5, 0.5);
        pbVar3 = std::operator<<(pbVar3, &local_d0);
        ShadowTranslucencyMapOffsetTap(&local_b8, 1, -2, 0.5, 0.5);
        pbVar3 = std::operator<<(pbVar3, &local_b8);
        ShadowTranslucencyMapOffsetTap(&local_a0, 1, 1, 0.5, 0.5);
        pbVar3 = std::operator<<(pbVar3, &local_a0);
        std::operator<<(pbVar3, "   if (minTranslucency < 1.0)\n   {\n      return minTranslucency;\n   }\n");
        iVar10 = -2;
        do {
            iVar9 = -2;
            do {
                if (((iVar9 != 1) && (iVar9 != -2)) || ((iVar10 != -2 && (iVar10 != 1)))) {
                    ShadowTranslucencyMapOffsetTap(&local_50, iVar9, iVar10, 0.5, 0.5);
                    std::operator<<(&local_1d8, &local_50);
                }
                iVar9 = iVar9 + 1;
            } while (iVar9 != 2);
            iVar10 = iVar10 + 1;
        } while (iVar10 != 2);
        std::operator<<(&local_1d8, "   return minTranslucency;\n}\n");
        std::operator<<(
            &local_1d8,
            "\nfloat ShadowTranslucencyMapFilter4x4Box(sampler2D shadowTranslucencyMap, vec2 texCoords, vec2 "
            "texelSize, vec4 uvExtents)\n{\n   float minTranslucency = 1.0;\n   vec2 borderSize = vec2(texelSize * "
            "5.0);\n   texCoords.xy = clamp(texCoords.xy, uvExtents.xy + borderSize, uvExtents.zw - borderSize);\n");
        iVar10 = -2;
        do {
            iVar9 = -2;
            do {
                ShadowTranslucencyMapOffsetTap(&local_50, iVar9, iVar10, 0.0, 0.0);
                std::operator<<(&local_1d8,
                                (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
                iVar9 = iVar9 + 1;
            } while (iVar9 != 2);
            iVar10 = iVar10 + 1;
        } while (iVar10 != 2);
        std::operator<<(&local_1d8, "   return minTranslucency;\n}\n");
        std::operator<<(&local_1d8, "\n#endif\n");
        *this = local_1e8.str();
        return (ReturnValue*)this;
    }

    // 0x100855710
    ShadowMapFiltering* ShadowMapFiltering::ShadowDepthMapOffsetTap(int arg1, int arg2, float arg3, float arg4) {
        int iVar1;
        int* piVar4;
        basic_ostream<char, std::char_traits<char> _>* pbVar5;
        basic_ostream<char, std::char_traits<char> _> local_148;
        uint32_t local_3c;
        int local_38;
        int local_34;

        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_158;
        auto pMVar2 = &local_158->Instance();
        long lVar3 = pMVar2->GetOrigin();
        if (*(char*)(lVar3 + 182) == '\0') {
            pbVar5 = std::operator<<(
                &local_148,
                "   shadowTotal += step(texCoords.z, ShadowDepthMapOffsetTap(shadowDepthMap, texCoords, vec2(");
            pbVar5 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar5,
                                                                                              (float)arg1 + arg3);
            pbVar5 = std::operator<<(pbVar5, ", ");
            pbVar5 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar5,
                                                                                              (float)arg2 + arg4);
            std::operator<<(pbVar5, "), texelSize, uvExtents));\n");
        } else {
            pMVar2 = (MapArea*)pMVar2->Instance();
            lVar3 = pMVar2->GetOrigin();
            iVar1 = *(int*)(lVar3 + 84);
            local_3c = 1;
            local_38 = -arg1;
            if (-arg1 < 0) {
                local_38 = arg1;
            }
            local_34 = -arg2;
            if (-arg2 < 0) {
                local_34 = arg2;
            }
            piVar4 = std::max<int>(local_38, local_34);
            piVar4 = std::max<int>(*((int*)(Singleton<render::RenderDevice>*)&local_3c), *piVar4);
            if (*piVar4 <= iVar1) {
                iVar1 = ((NXTPixScreen*)local_3c.Instance())->GetUIHeight();
                if (iVar1 != 0) {
                    pbVar5 = std::operator<<(
                        &local_148,
                        "   shadowTotal += vec4(textureLodOffset(shadowDepthMap, texCoords.xyz, 0.0, ivec2(");
                    pbVar5 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar5,
                                                                                                      arg1);
                    pbVar5 = std::operator<<(pbVar5, ", ");
                    pbVar5 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar5,
                                                                                                      arg2);
                    std::operator<<(pbVar5, "))).r;\n");
                    goto LAB_1008558bc;
                }
            }
            pbVar5 = std::operator<<(&local_148,
                                     "   shadowTotal += ShadowDepthMapOffsetTapPCF(shadowDepthMap, texCoords, vec2(");
            pbVar5 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar5,
                                                                                              (float)arg1 + arg3);
            pbVar5 = std::operator<<(pbVar5, ", ");
            pbVar5 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar5,
                                                                                              (float)arg2 + arg4);
            std::operator<<(pbVar5, "), texelSize, uvExtents);\n");
        }
    LAB_1008558bc:
        *this = local_158.str();
        return this;
    }

    // 0x100855990
    ShadowMapFiltering* ShadowMapFiltering::ShadowTranslucencyMapOffsetTap(int arg1, int arg2, float arg3, float arg4) {
        basic_ostream<char, std::char_traits<char> _> local_130;

        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_140;
        basic_ostream<char, std::char_traits<char> _>* pbVar1 = std::operator<<(
            &local_130, "   minTranslucency = min(ShadowTranslucencyMapOffsetTap(shadowTranslucencyMap, "
                        "vec2(texCoords.x, texCoords.y), vec2(");
        pbVar1 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar1,
                                                                                          (float)arg1 + arg3);
        pbVar1 = std::operator<<(pbVar1, ", ");
        pbVar1 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar1,
                                                                                          (float)arg2 + arg4);
        std::operator<<(pbVar1, "), texelSize), minTranslucency);\n");
        *this = local_140.str();
        return this;
    }

} // namespace jag::graphics
