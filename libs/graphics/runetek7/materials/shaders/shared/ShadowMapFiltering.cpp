// libs/graphics/runetek7/materials/shaders/shared/ShadowMapFiltering.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class ShadowMapFiltering {
    public:
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>* BuildFragment(ShadowMapFilter);
        ShadowMapFiltering* ShadowDepthMapOffsetTap(int, int, float, float);
        ShadowMapFiltering* ShadowTranslucencyMapOffsetTap(int, int, float, float);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1008537d0, 3136 bytes, placed by class name and debug map
    // ShadowMapFiltering::BuildFragment(ShadowMapFilter)
    basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>*
    ShadowMapFiltering::BuildFragment(undefined4 param_2) {
        ShadowMapFiltering* pSVar1;
        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>* pbVar2;
        MapArea* pMVar3;
        long lVar4;
        ostream* poVar5;
        Layout* pLVar6;
        vector* pvVar7;
        Vector2T<int>* pVVar8;
        float* pfVar9;
        type* ptVar10;
        ulong uVar11;
        int iVar12;
        int iVar13;
        type* ptVar14;
        uint uVar15;
        bool bVar16;
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_1e8[16];
        ostream local_1d8[264];
        ShadowMapFiltering local_d0[24];
        ShadowMapFiltering local_b8[24];
        ShadowMapFiltering local_a0[24];
        undefined1 local_88[16];
        undefined1 local_78[16];
        undefined1 local_68[52];
        uint local_34;

        local_68._16_8_ = this;
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_stringstream(local_1e8);
        std::operator<<(local_1d8, "#ifndef SHADOW_MAP_FILTERING_INC\n#define SHADOW_MAP_FILTERING_INC\n");
        poVar5 = local_1d8;
        std::operator<<(local_1d8,
                        "\nfloat ShadowDepthMapTap(sampler2D shadowDepthMap, vec2 texCoords)\n{\n   vec4 shadowTexel = "
                        "texture2DLodCompat(shadowDepthMap, texCoords, 0.0);\n   return shadowTexel.r;\n}\n");
        pMVar3 = (MapArea*)poVar5->Instance();
        lVar4 = pMVar3->GetOrigin();
        if (*(char*)(lVar4 + 182) != '\0') {
            std::operator<<(local_1d8,
                            "\nfloat ShadowDepthMapTapPCF(sampler2DShadow shadowDepthMap, vec4 texCoords)\n{\n   "
                            "return shadow2DLodCompat(shadowDepthMap, texCoords.xyz, 0.0);\n}\n");
        }
        poVar5 = local_1d8;
        std::operator<<(local_1d8,
                        "\nfloat ShadowDepthMapOffsetTap(sampler2D shadowDepthMap, vec4 texCoords, vec2 texelOffset, "
                        "vec2 texelSize)\n{\n   texCoords.xy += (texelOffset * texelSize);\n   vec4 shadowTexel = "
                        "texture2DLodCompat(shadowDepthMap, texCoords.xy, 0.0);\n   return shadowTexel.r;\n}\n");
        pMVar3 = (MapArea*)poVar5->Instance();
        lVar4 = pMVar3->GetOrigin();
        if (*(char*)(lVar4 + 182) != '\0') {
            std::operator<<(local_1d8,
                            "\nfloat ShadowDepthMapOffsetTapPCF(sampler2DShadow shadowDepthMap, vec4 texCoords, vec2 "
                            "texelOffset, vec2 texelSize)\n{\n   texCoords.xy += (texelOffset * texelSize);\n   return "
                            "shadow2DLodCompat(shadowDepthMap, texCoords.xyz, 0.0);\n}\n");
        }
        std::operator<<(local_1d8,
                        "\nfloat ShadowDepthMapOffsetTap(sampler2D shadowDepthMap, vec4 texCoords, vec2 texelOffset, "
                        "vec2 texelSize, vec4 uvExtents)\n{\n     texCoords.xy += (texelOffset * texelSize);\n");
        poVar5 = local_1d8;
        std::operator<<(
            local_1d8,
            "     vec2 halfTexelSize = vec2(texelSize * 0.5);\n     texCoords.x = clamp(texCoords.x, uvExtents.x + "
            "halfTexelSize.x, uvExtents.z - halfTexelSize.x);\n     texCoords.y = clamp(texCoords.y, uvExtents.y + "
            "halfTexelSize.y, uvExtents.w - halfTexelSize.y);\n   vec4 shadowTexel = "
            "texture2DLodCompat(shadowDepthMap, texCoords.xy, 0.0);\n   return shadowTexel.r;\n}\n");
        pMVar3 = (MapArea*)poVar5->Instance();
        lVar4 = pMVar3->GetOrigin();
        if (*(char*)(lVar4 + 182) != '\0') {
            std::operator<<(
                local_1d8,
                "\nfloat ShadowDepthMapOffsetTapPCF(sampler2DShadow shadowDepthMap, vec4 texCoords, vec2 texelOffset, "
                "vec2 texelSize, vec4 uvExtents)\n{\n     texCoords.xy += (texelOffset * texelSize);\n");
            std::operator<<(local_1d8,
                            "     vec2 halfTexelSize = vec2(texelSize * 0.5);\n     texCoords.x = clamp(texCoords.x, "
                            "uvExtents.x + halfTexelSize.x, uvExtents.z - halfTexelSize.x);\n     texCoords.y = "
                            "clamp(texCoords.y, uvExtents.y + halfTexelSize.y, uvExtents.w - halfTexelSize.y);\n     "
                            "return shadow2DLodCompat(shadowDepthMap, texCoords.xyz, 0.0);\n}\n");
        }
        std::operator<<(local_1d8,
                        "\nfloat ShadowTranslucencyMapOffsetTap(sampler2D shadowTranslucencyMap, vec2 texCoords, vec2 "
                        "texelOffset, vec2 texelSize)\n{\n   texCoords += (texelOffset * texelSize);\n   return "
                        "texture2DLodCompat(shadowTranslucencyMap, texCoords, 0.0).r;\n}\n");
        poVar5 = local_1d8;
        std::operator<<(local_1d8,
                        "\nfloat ShadowDepthMapFilter1x1(SHADOW_SAMPLER shadowDepthMap, vec4 texCoords)\n{\n");
        pMVar3 = (MapArea*)poVar5->Instance();
        lVar4 = pMVar3->GetOrigin();
        if (*(char*)(lVar4 + 182) == '\0') {
            std::operator<<(local_1d8,
                            "   return step(texCoords.z, ShadowDepthMapTap(shadowDepthMap, texCoords.xy));\n");
        } else {
            std::operator<<(local_1d8, "   return ShadowDepthMapTapPCF(shadowDepthMap, texCoords);\n");
        }
        std::operator<<(local_1d8, "}\n");
        poVar5 = local_1d8;
        std::operator<<(local_1d8, "\nfloat ShadowDepthMapFilter2x2Box(SHADOW_SAMPLER shadowDepthMap, vec4 texCoords, "
                                   "vec2 texelSize, vec4 uvExtents)\n{\n   float shadowTotal = 0.0;\n");
        pMVar3 = (MapArea*)poVar5->Instance();
        lVar4 = pMVar3->GetOrigin();
        if (1 < *(int*)(lVar4 + 84)) {
            std::operator<<(local_1d8, "   texCoords.xy += vec2(texelSize * 0.5);\n");
        }
        std::operator<<(local_1d8, "   vec2 borderSize = vec2(texelSize * 1.5);\n   texCoords.xy = clamp(texCoords.xy, "
                                   "uvExtents.xy + borderSize, uvExtents.zw - borderSize);\n");
        pSVar1 = (ShadowMapFiltering*)(local_68 + 24);
        iVar13 = -1;
        do {
            iVar12 = -1;
            do {
                ShadowDepthMapOffsetTap(pSVar1, iVar12, iVar13, 0.0, 0.0);
                std::operator<<(local_1d8, (basic_string*)pSVar1);
                pSVar1->~basic_string();
                iVar12 = iVar12 + 1;
            } while (iVar12 != 1);
            bVar16 = iVar13 != 0;
            iVar13 = iVar13 + 1;
        } while (bVar16);
        std::operator<<(local_1d8, "   return shadowTotal * 0.25;\n}\n");
        poVar5 = local_1d8;
        std::operator<<(local_1d8, "\nfloat ShadowDepthMapFilter4x4BoxApprox(SHADOW_SAMPLER shadowDepthMap, vec4 "
                                   "texCoords, vec2 texelSize, vec4 uvExtents)\n{\n   float shadowTotal = 0.0;\n");
        pMVar3 = (MapArea*)poVar5->Instance();
        lVar4 = pMVar3->GetOrigin();
        if (1 < *(int*)(lVar4 + 84)) {
            std::operator<<(local_1d8, "   texCoords.xy += vec2(texelSize * 0.5);\n");
        }
        poVar5 =
            std::operator<<(local_1d8, "   vec2 borderSize = vec2(texelSize * 2.5);\n   texCoords.xy = "
                                       "clamp(texCoords.xy, uvExtents.xy + borderSize, uvExtents.zw - borderSize);\n");
        ShadowDepthMapOffsetTap((ShadowMapFiltering*)(local_68 + 24), -2, -2, 0.5, 0.5);
        poVar5 = std::operator<<(poVar5, (basic_string*)(local_68 + 24));
        ShadowDepthMapOffsetTap(local_d0, -2, 1, 0.5, 0.5);
        poVar5 = std::operator<<(poVar5, (basic_string*)local_d0);
        ShadowDepthMapOffsetTap(local_b8, 1, -2, 0.5, 0.5);
        poVar5 = std::operator<<(poVar5, (basic_string*)local_b8);
        ShadowDepthMapOffsetTap(local_a0, 1, 1, 0.5, 0.5);
        poVar5 = std::operator<<(poVar5, (basic_string*)local_a0);
        std::operator<<(
            poVar5, "   if (shadowTotal == 0.0 || shadowTotal >= 3.9)\n   {\n      return shadowTotal * 0.25;\n   }\n");
        local_a0->~basic_string();
        local_b8->~basic_string();
        local_d0->~basic_string();
        pbVar2 = (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)(local_68 + 24);
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(pbVar2);
        iVar13 = -2;
        do {
            iVar12 = -2;
            do {
                if (((iVar12 != 1) && (iVar12 != -2)) || ((iVar13 != -2 && (iVar13 != 1)))) {
                    ShadowDepthMapOffsetTap((ShadowMapFiltering*)pbVar2, iVar12, iVar13, 0.5, 0.5);
                    std::operator<<(local_1d8, (basic_string*)pbVar2);
                    std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(pbVar2);
                }
                iVar12 = iVar12 + 1;
            } while (iVar12 != 2);
            iVar13 = iVar13 + 1;
        } while (iVar13 != 2);
        std::operator<<(local_1d8, "   return shadowTotal *= 0.0625;\n}\n");
        std::operator<<(
            local_1d8,
            "\nfloat ShadowDepthMapFilter4x4Box(SHADOW_SAMPLER shadowDepthMap, vec4 texCoords, vec2 texelSize, vec4 "
            "uvExtents)\n{\n   float shadowTotal = 0.0;\n   vec2 borderSize = vec2(texelSize * 5.0);\n   texCoords.xy "
            "= clamp(texCoords.xy, uvExtents.xy + borderSize, uvExtents.zw - borderSize);\n");
        iVar13 = -2;
        pSVar1 = (ShadowMapFiltering*)(local_68 + 24);
        do {
            iVar12 = -2;
            do {
                ShadowDepthMapOffsetTap(pSVar1, iVar12, iVar13, 0.0, 0.0);
                std::operator<<(local_1d8, (basic_string*)pSVar1);
                pSVar1->~basic_string();
                iVar12 = iVar12 + 1;
            } while (iVar12 != 2);
            iVar13 = iVar13 + 1;
        } while (iVar13 != 2);
        std::operator<<(local_1d8, "   return shadowTotal *= 0.0625;\n}\n");
        std::operator<<(
            local_1d8,
            "\nfloat ShadowDepthMapFilter8x8Box(SHADOW_SAMPLER shadowDepthMap, vec4 texCoords, vec2 texelSize, vec4 "
            "uvExtents)\n{\n   float shadowTotal = 0.0;\n   vec2 borderSize = vec2(texelSize * 5.0);\n   texCoords.xy "
            "= clamp(texCoords.xy, uvExtents.xy + borderSize, uvExtents.zw - borderSize);\n");
        iVar13 = -4;
        pSVar1 = (ShadowMapFiltering*)(local_68 + 24);
        do {
            iVar12 = -4;
            do {
                ShadowDepthMapOffsetTap(pSVar1, iVar12, iVar13, 0.0, 0.0);
                std::operator<<(local_1d8, (basic_string*)pSVar1);
                pSVar1->~basic_string();
                iVar12 = iVar12 + 1;
            } while (iVar12 != 4);
            iVar13 = iVar13 + 1;
        } while (iVar13 != 4);
        std::operator<<(local_1d8, "   return smoothstep(2.0, 58.0, shadowTotal);\n}\n");
        std::operator<<(
            local_1d8,
            "\nfloat ShadowDepthMapDiskFilter(SHADOW_SAMPLER shadowDepthMap, vec4 texCoords, vec2 texelSize, vec4 "
            "uvExtents)\n{\n   float shadowTotal = 0.0;\n   vec2 borderSize = vec2(texelSize * 5.0);\n   texCoords.xy "
            "= clamp(texCoords.xy, uvExtents.xy + borderSize, uvExtents.zw - borderSize);\n");
        GetPoissonDiskData((graphics*)local_88, param_2);
        lVar4 = local_88->HeapBeginPtr();
        if (lVar4 != 0) {
            uVar15 = 1;
            ptVar14 = (type*)0;
            pSVar1 = (ShadowMapFiltering*)(local_68 + 24);
            do {
                ptVar10 = ptVar14;
                local_34 = uVar15;
                pLVar6 = (Layout*)WrapArray<math::Vector2T<float>>::operator[](
                    (WrapArray<math::Vector2T<float>>*)local_88, (ulong)ptVar14);
                pvVar7 = eastl::string::Layout::SSOBeginPtr(pLVar6, ptVar10);
                iVar13 = math::RoundFloatToInt(*(float*)pvVar7 * 1.75);
                pVVar8 = (Vector2T<int>*)WrapArray<math::Vector2T<float>>::operator[](
                    (WrapArray<math::Vector2T<float>>*)local_88, (ulong)ptVar14);
                pfVar9 = (float*)pVVar8->y();
                iVar12 = math::RoundFloatToInt(*pfVar9 * 1.75);
                ShadowDepthMapOffsetTap(pSVar1, iVar13, iVar12, 0.0, 0.0);
                std::operator<<(local_1d8, (basic_string*)pSVar1);
                pSVar1->~basic_string();
                uVar15 = local_34;
                ptVar14 = (type*)(ulong)local_34;
                ptVar10 = (type*)local_88->HeapBeginPtr();
                uVar15 = uVar15 + 1;
            } while (ptVar14 < ptVar10);
        }
        poVar5 = std::operator<<(local_1d8, "    return shadowTotal * ");
        uVar11 = local_88->HeapBeginPtr();
        poVar5 = (ostream*)std::ostream::operator<<(poVar5, 1.0 / (double)uVar11);
        std::operator<<(poVar5, ";\n}\n");
        std::operator<<(
            local_1d8,
            "\nfloat ShadowDepthMapDiskFilter8Tap(SHADOW_SAMPLER shadowDepthMap, vec4 texCoords, vec2 texelSize, vec4 "
            "uvExtents)\n{\n   float shadowTotal = 0.0;\n   vec2 borderSize = vec2(texelSize * 5.0);\n   texCoords.xy "
            "= clamp(texCoords.xy, uvExtents.xy + borderSize, uvExtents.zw - borderSize);\n");
        GetPoissonDiskData((graphics*)local_78, 4);
        lVar4 = local_78->HeapBeginPtr();
        if (lVar4 != 0) {
            uVar15 = 1;
            ptVar14 = (type*)0;
            pSVar1 = (ShadowMapFiltering*)(local_68 + 24);
            do {
                ptVar10 = ptVar14;
                local_34 = uVar15;
                pLVar6 = (Layout*)WrapArray<math::Vector2T<float>>::operator[](
                    (WrapArray<math::Vector2T<float>>*)local_78, (ulong)ptVar14);
                pvVar7 = eastl::string::Layout::SSOBeginPtr(pLVar6, ptVar10);
                iVar13 = math::RoundFloatToInt(*(float*)pvVar7 * 1.75);
                pVVar8 = (Vector2T<int>*)WrapArray<math::Vector2T<float>>::operator[](
                    (WrapArray<math::Vector2T<float>>*)local_78, (ulong)ptVar14);
                pfVar9 = (float*)pVVar8->y();
                iVar12 = math::RoundFloatToInt(*pfVar9 * 1.75);
                ShadowDepthMapOffsetTap(pSVar1, iVar13, iVar12, 0.0, 0.0);
                std::operator<<(local_1d8, (basic_string*)pSVar1);
                pSVar1->~basic_string();
                uVar15 = local_34;
                ptVar14 = (type*)(ulong)local_34;
                ptVar10 = (type*)local_78->HeapBeginPtr();
                uVar15 = uVar15 + 1;
            } while (ptVar14 < ptVar10);
        }
        poVar5 = std::operator<<(local_1d8, "    return shadowTotal * ");
        uVar11 = local_78->HeapBeginPtr();
        poVar5 = (ostream*)std::ostream::operator<<(poVar5, 1.0 / (double)uVar11);
        std::operator<<(poVar5, ";\n}\n");
        std::operator<<(
            local_1d8,
            "\nfloat ShadowDepthMapDiskFilter12Tap(SHADOW_SAMPLER shadowDepthMap, vec4 texCoords, vec2 texelSize, vec4 "
            "uvExtents)\n{\n   float shadowTotal = 0.0;\n   vec2 borderSize = vec2(texelSize * 5.0);\n   texCoords.xy "
            "= clamp(texCoords.xy, uvExtents.xy + borderSize, uvExtents.zw - borderSize);\n");
        GetPoissonDiskData((graphics*)local_68, 5);
        lVar4 = local_68->HeapBeginPtr();
        if (lVar4 != 0) {
            uVar15 = 1;
            ptVar14 = (type*)0;
            pSVar1 = (ShadowMapFiltering*)(local_68 + 24);
            do {
                ptVar10 = ptVar14;
                local_34 = uVar15;
                pLVar6 = (Layout*)WrapArray<math::Vector2T<float>>::operator[](
                    (WrapArray<math::Vector2T<float>>*)local_68, (ulong)ptVar14);
                pvVar7 = eastl::string::Layout::SSOBeginPtr(pLVar6, ptVar10);
                iVar13 = math::RoundFloatToInt(*(float*)pvVar7 * 1.75);
                pVVar8 = (Vector2T<int>*)WrapArray<math::Vector2T<float>>::operator[](
                    (WrapArray<math::Vector2T<float>>*)local_68, (ulong)ptVar14);
                pfVar9 = (float*)pVVar8->y();
                iVar12 = math::RoundFloatToInt(*pfVar9 * 1.75);
                ShadowDepthMapOffsetTap(pSVar1, iVar13, iVar12, 0.0, 0.0);
                std::operator<<(local_1d8, (basic_string*)pSVar1);
                pSVar1->~basic_string();
                uVar15 = local_34;
                ptVar14 = (type*)(ulong)local_34;
                ptVar10 = (type*)local_68->HeapBeginPtr();
                uVar15 = uVar15 + 1;
            } while (ptVar14 < ptVar10);
        }
        poVar5 = std::operator<<(local_1d8, "    return shadowTotal * ");
        uVar11 = local_68->HeapBeginPtr();
        poVar5 = (ostream*)std::ostream::operator<<(poVar5, 1.0 / (double)uVar11);
        std::operator<<(poVar5, ";\n}\n");
        std::operator<<(local_1d8,
                        "float ShadowDepthMapFilterExp(SHADOW_SAMPLER shadowDepthMap, vec4 texCoords, vec2 "
                        "texelSize)\n{\n    float occluderDepth = ShadowDepthMapFilter1x1(shadowDepthMap, "
                        "texCoords);\n    float recieverDepth = texCoords.z;\n    const float darkeningFactor = "
                        "100.0;\n    return exp(darkeningFactor * (occluderDepth - recieverDepth));\n}\n");
        std::operator<<(local_1d8, "\nfloat ShadowTranslucencyMapFilter2x2Box(sampler2D shadowTranslucencyMap, vec2 "
                                   "texCoords, vec2 texelSize)\n{\n   float minTranslucency = 1.0;\n");
        pSVar1 = (ShadowMapFiltering*)(local_68 + 24);
        iVar13 = -1;
        do {
            iVar12 = -1;
            do {
                ShadowTranslucencyMapOffsetTap(pSVar1, iVar12, iVar13, 0.0, 0.0);
                std::operator<<(local_1d8, (basic_string*)pSVar1);
                pSVar1->~basic_string();
                iVar12 = iVar12 + 1;
            } while (iVar12 != 1);
            bVar16 = iVar13 != 0;
            iVar13 = iVar13 + 1;
        } while (bVar16);
        std::operator<<(local_1d8, "   return minTranslucency;\n}\n");
        poVar5 = std::operator<<(
            local_1d8,
            "\nfloat ShadowTranslucencyMapFilter4x4BoxApprox(sampler2D shadowTranslucencyMap, vec2 texCoords, vec2 "
            "texelSize, vec4 uvExtents)\n{\n   float minTranslucency = 1.0;\n   vec2 borderSize = vec2(texelSize * "
            "2.5);\n   texCoords.xy = clamp(texCoords.xy, uvExtents.xy + borderSize, uvExtents.zw - borderSize);\n");
        ShadowTranslucencyMapOffsetTap((ShadowMapFiltering*)(local_68 + 24), -2, -2, 0.5, 0.5);
        poVar5 = std::operator<<(poVar5, (basic_string*)(local_68 + 24));
        ShadowTranslucencyMapOffsetTap(local_d0, -2, 1, 0.5, 0.5);
        poVar5 = std::operator<<(poVar5, (basic_string*)local_d0);
        ShadowTranslucencyMapOffsetTap(local_b8, 1, -2, 0.5, 0.5);
        poVar5 = std::operator<<(poVar5, (basic_string*)local_b8);
        ShadowTranslucencyMapOffsetTap(local_a0, 1, 1, 0.5, 0.5);
        poVar5 = std::operator<<(poVar5, (basic_string*)local_a0);
        std::operator<<(poVar5, "   if (minTranslucency < 1.0)\n   {\n      return minTranslucency;\n   }\n");
        local_a0->~basic_string();
        local_b8->~basic_string();
        local_d0->~basic_string();
        pbVar2 = (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)(local_68 + 24);
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(pbVar2);
        iVar13 = -2;
        do {
            iVar12 = -2;
            do {
                if (((iVar12 != 1) && (iVar12 != -2)) || ((iVar13 != -2 && (iVar13 != 1)))) {
                    ShadowTranslucencyMapOffsetTap((ShadowMapFiltering*)pbVar2, iVar12, iVar13, 0.5, 0.5);
                    std::operator<<(local_1d8, (basic_string*)pbVar2);
                    std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(pbVar2);
                }
                iVar12 = iVar12 + 1;
            } while (iVar12 != 2);
            iVar13 = iVar13 + 1;
        } while (iVar13 != 2);
        std::operator<<(local_1d8, "   return minTranslucency;\n}\n");
        std::operator<<(
            local_1d8,
            "\nfloat ShadowTranslucencyMapFilter4x4Box(sampler2D shadowTranslucencyMap, vec2 texCoords, vec2 "
            "texelSize, vec4 uvExtents)\n{\n   float minTranslucency = 1.0;\n   vec2 borderSize = vec2(texelSize * "
            "5.0);\n   texCoords.xy = clamp(texCoords.xy, uvExtents.xy + borderSize, uvExtents.zw - borderSize);\n");
        iVar13 = -2;
        pSVar1 = (ShadowMapFiltering*)(local_68 + 24);
        do {
            iVar12 = -2;
            do {
                ShadowTranslucencyMapOffsetTap(pSVar1, iVar12, iVar13, 0.0, 0.0);
                std::operator<<(local_1d8, (basic_string*)pSVar1);
                pSVar1->~basic_string();
                iVar12 = iVar12 + 1;
            } while (iVar12 != 2);
            iVar13 = iVar13 + 1;
        } while (iVar13 != 2);
        std::operator<<(local_1d8, "   return minTranslucency;\n}\n");
        std::operator<<(local_1d8, "\n#endif\n");
        local_68._16_8_->str();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_stringstream(local_1e8);
        return (basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)local_68._16_8_;
    }

    // 0x100855710, 512 bytes, placed by class name
    // ShadowMapFiltering::ShadowDepthMapOffsetTap(int, int, float, float)
    ShadowMapFiltering* ShadowMapFiltering::ShadowDepthMapOffsetTap(int param_1, int param_2, float param_3,
                                                                    float param_4) {
        int iVar1;
        MapArea* pMVar2;
        long lVar3;
        int* piVar4;
        NXTPixScreen* this_00;
        ostream* poVar5;
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>* this_01;
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_158[16];
        ostream local_148[268];
        undefined4 local_3c;
        int local_38;
        int local_34;

        this_01 = local_158;
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_stringstream(this_01);
        pMVar2 = (MapArea*)this_01->Instance();
        lVar3 = pMVar2->GetOrigin();
        if (*(char*)(lVar3 + 182) == '\0') {
            poVar5 = std::operator<<(
                local_148,
                "   shadowTotal += step(texCoords.z, ShadowDepthMapOffsetTap(shadowDepthMap, texCoords, vec2(");
            poVar5 = (ostream*)std::ostream::operator<<(poVar5, (float)param_1 + param_3);
            poVar5 = std::operator<<(poVar5, ", ");
            poVar5 = (ostream*)std::ostream::operator<<(poVar5, (float)param_2 + param_4);
            std::operator<<(poVar5, "), texelSize, uvExtents));\n");
        } else {
            pMVar2 = (MapArea*)pMVar2->Instance();
            lVar3 = pMVar2->GetOrigin();
            iVar1 = *(int*)(lVar3 + 84);
            local_3c = 1;
            local_38 = -param_1;
            if (-param_1 < 0) {
                local_38 = param_1;
            }
            local_34 = -param_2;
            if (-param_2 < 0) {
                local_34 = param_2;
            }
            piVar4 = std::max<int>(&local_38, &local_34);
            piVar4 = std::max<int>((int*)(Singleton<render::RenderDevice>*)&local_3c, piVar4);
            if (*piVar4 <= iVar1) {
                this_00 = (NXTPixScreen*)local_3c.Instance();
                iVar1 = this_00->GetUIHeight();
                if (iVar1 != 0) {
                    poVar5 = std::operator<<(
                        local_148,
                        "   shadowTotal += vec4(textureLodOffset(shadowDepthMap, texCoords.xyz, 0.0, ivec2(");
                    poVar5 = (ostream*)std::ostream::operator<<(poVar5, param_1);
                    poVar5 = std::operator<<(poVar5, ", ");
                    poVar5 = (ostream*)std::ostream::operator<<(poVar5, param_2);
                    std::operator<<(poVar5, "))).r;\n");
                    goto LAB_1008558bc;
                }
            }
            poVar5 = std::operator<<(local_148,
                                     "   shadowTotal += ShadowDepthMapOffsetTapPCF(shadowDepthMap, texCoords, vec2(");
            poVar5 = (ostream*)std::ostream::operator<<(poVar5, (float)param_1 + param_3);
            poVar5 = std::operator<<(poVar5, ", ");
            poVar5 = (ostream*)std::ostream::operator<<(poVar5, (float)param_2 + param_4);
            std::operator<<(poVar5, "), texelSize, uvExtents);\n");
        }
    LAB_1008558bc:
        str();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_stringstream(local_158);
        return this;
    }

    // 0x100855990, 208 bytes, placed by class name
    // ShadowMapFiltering::ShadowTranslucencyMapOffsetTap(int, int, float, float)
    ShadowMapFiltering* ShadowMapFiltering::ShadowTranslucencyMapOffsetTap(int param_1, int param_2, float param_3,
                                                                           float param_4) {
        ostream* poVar1;
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_140[16];
        ostream local_130[264];

        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_stringstream(local_140);
        poVar1 =
            std::operator<<(local_130, "   minTranslucency = min(ShadowTranslucencyMapOffsetTap(shadowTranslucencyMap, "
                                       "vec2(texCoords.x, texCoords.y), vec2(");
        poVar1 = (ostream*)std::ostream::operator<<(poVar1, (float)param_1 + param_3);
        poVar1 = std::operator<<(poVar1, ", ");
        poVar1 = (ostream*)std::ostream::operator<<(poVar1, (float)param_2 + param_4);
        std::operator<<(poVar1, "), texelSize), minTranslucency);\n");
        str();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_stringstream(local_140);
        return this;
    }

} // namespace jag::graphics
