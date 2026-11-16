// libs/math/colour/ColourARGB.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::math {
    template <typename...> // 3 instantiations, e.g. <ABGR8StorageLayout>, <ARGB8StorageLayout>, <RGBA8StorageLayout>
    class ColourStorage8888 {
    public:
        ColourStorage8888(unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4);
        void Set(unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4);
        ColourStorage8888(unsigned int arg1);
        void Set(unsigned int arg1);
        ColourStorage8888(const Vector4T<float>& vector4);
        void Set(unsigned char arg1, unsigned char arg2, unsigned char arg3, unsigned char arg4);
        ColourStorage8888<RGBA8StorageLayout>(ColourStorage8888<RGBA8StorageLayout> colourStorage8888);
        ColourStorage8888(const Vector3T<float>& vector3);
        int RedGreenGradient(int arg1, int arg2, int arg3);
        ColourStorage8888(float arg1, float arg2, float arg3, float arg4);
        void Set(float arg1, float arg2, float arg3, float arg4);
        auto SetRedGreenGradient(int arg1, int arg2, int arg3);
        ColourStorage8888<ARGB8StorageLayout>(ColourStorage8888<ARGB8StorageLayout> colourStorage8888);
    };

    // 0x1007fb570
    ColourStorage8888<RGBA8StorageLayout>::ColourStorage8888(const Vector4T<float>& vector4) {
        auto pfVar1 = vector4.SSOBeginPtr();
        float arg1 = *pfVar1;
        pfVar1 = (float*)vector4.y();
        float arg2 = *pfVar1;
        pfVar1 = (float*)vector4.second();
        float arg3 = *pfVar1;
        pfVar1 = (float*)vector4.qw();
        Set(this, arg1, arg2, arg3, *pfVar1);
    }

    // 0x1007fb5e0
    ColourStorage8888<ABGR8StorageLayout>::ColourStorage8888<RGBA8StorageLayout>(
        ColourStorage8888<RGBA8StorageLayout> colourStorage8888) {
        Set(this, (uint8_t)((unsigned long)colourStorage8888 >> 24), (uint8_t)((unsigned long)colourStorage8888 >> 16),
            (uint8_t)(((unsigned long)colourStorage8888 & 4294967295) >> 8),
            (uint8_t)((unsigned long)colourStorage8888 & 4294967295));
    }

    // 0x1008a75f0
    int ColourStorage8888<RGBA8StorageLayout>::RedGreenGradient(int arg1, int arg2, int arg3) {

        return local_2c;
        SetRedGreenGradient((ReturnValue*)&local_2c, arg1, arg2, arg3);
        return local_2c;
    }

    // 0x100a490a0
    void ColourStorage8888<RGBA8StorageLayout>::Set(float arg1, float arg2, float arg3, float arg4) {
        int local_1c[3];

        local_1c[0] = RoundFloatToInt(arg1 * 255.0);
        local_1c[1] = 0;
        local_1c[2] = 255;
        int iVar1 = Clamp<int>(local_1c, local_1c + 1, local_1c + 2);
        this[3] = (uint8_t)iVar1;
        local_1c[0] = RoundFloatToInt(arg2 * 255.0);
        local_1c[1] = 0;
        local_1c[2] = 255;
        iVar1 = Clamp<int>(local_1c, local_1c + 1, local_1c + 2);
        this[2] = (uint8_t)iVar1;
        local_1c[0] = RoundFloatToInt(arg3 * 255.0);
        local_1c[1] = 0;
        local_1c[2] = 255;
        iVar1 = Clamp<int>(local_1c, local_1c + 1, local_1c + 2);
        this[1] = (uint8_t)iVar1;
        local_1c[0] = RoundFloatToInt(arg4 * 255.0);
        local_1c[1] = 0;
        local_1c[2] = 255;
        iVar1 = Clamp<int>(local_1c, local_1c + 1, local_1c + 2);
        *this = (uint8_t)iVar1;
    }

} // namespace jag::math

namespace jag::oldscape::rseven {
    // 0x1001c7fe0
    void MapRebuildHandler_RenderThread::RebuildSquareTerrain(MapRebuildSquare& mapRebuildSquare,
                                                              jag::graphics::RT7Core& rt7Core) {
        array<signed char, 4ul>* array;
        Vector3T<int> VVar1;
        vector<game::BuildCombinedLocationResult_CombinableGroup>* this_00;
        bool cVar2;
        shared_ptr<BuildTerrainResultLevel>* psVar3;
        long lVar4;
        long lVar5;
        vector<jag::graphics::TerrainPatchVertex>* pvVar6;
        TextureManager* this_01;
        TextureAtlasUsage* textureAtlasUsage;
        unsigned int* puVar7;
        TextureAtlasReference* this_02;
        array<TerrainVertex, 3ul>* this_04;
        uint16_t* puVar8;
        Vector3T<int>* vector3;
        Vector3T<short>* pVVar9;
        Vector3T<int>* pVVar10;
        int* piVar11;
        uint8_t* puVar12;
        array<int, 3ul>* this_05;
        array<unsigned char, 4ul>* paVar13;
        float fVar15;
        uint8_t auVar16[16];
        pair<int const, unsigned short> local_d8;
        ColourHSL local_d0;
        uint8_t local_b8[16];
        pair<int, unsigned short> local_a8;
        Vector3T<int>* local_a0;
        vector<jag::graphics::TerrainPatchVertexPos>* local_98;
        array<TerrainVertex, 3ul>* local_90;
        array<TerrainVertex, 3ul>* local_88;
        unsigned long local_80;
        uint8_t local_70[16];
        vector<jag::graphics::TerrainPatchVertex>* local_60;
        shared_ptr<jag::graphics::TextureAtlasReference>* local_50;
        vector<game::BuildCombinedLocationResult_CombinableGroup>* local_48;
        AABB* local_40;
        unsigned int local_38;
        unsigned short local_34[2];

        hash_set<int> local_148(local_110);
        unsigned long uVar14 = 0;
        do {
            psVar3 = &mapRebuildSquare[uVar14];
            lVar4 = (*psVar3).operator->();
            lVar5 = ((lVar4 + 12560))->HeapBeginPtr();
            lVar4 = ((lVar4 + 12560))->end();
            for (; lVar5 != lVar4; lVar5 = lVar5 + 88) {
                eastl::hashtable<int, int, eastl::allocator, eastl::use_self<int>, eastl::equal_to<int>,
                                 eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                 eastl::prime_rehash_policy, false, false, true>::insert(local_110);
            }
            auVar16._8_8_ = local_70._8_8_;
            auVar16._0_2_ = local_70._0_2_;
            auVar16._2_2_ = local_70._2_2_;
            auVar16._4_2_ = local_70._4_2_;
            auVar16._6_2_ = local_70._6_2_;
            uVar14 = uVar14 + 1;
        } while (uVar14 != 4);
        uVar14 = 0;
        local_70 = auVar16;
        do {
            local_80 = uVar14;
            psVar3 = &mapRebuildSquare[uVar14];
            pvVar6 = (vector<jag::graphics::TerrainPatchVertex>*)**psVar3;
            lVar5 = ((pvVar6 + 12560))->size();
            if (lVar5 != 0) {
                this_01 = rt7Core.GetTextureManager();
                textureAtlasUsage = (TextureAtlasUsage*)this_01->GetTextureAtlasManager();
                jag::graphics::TextureAtlasManager::GetSharedAtlasRefFromMaterialIDs<eastl::hash_set<int>>(
                    &local_110, textureAtlasUsage, (hash_set<int>*)graphicutils::TextureAtlasUsage::USAGE_UNCOMPRESSED);
                local_50 = (shared_ptr<jag::graphics::TextureAtlasReference>*)(pvVar6 + 12592);
                *local_50 = local_110;
                local_48 = (vector<game::BuildCombinedLocationResult_CombinableGroup>*)(pvVar6 + 12560);
                local_110 = eastl::hash_map<int, unsigned short>(local_d0);
                local_60 = pvVar6;
                local_40 = (AABB*)pvVar6;
                auVar16 = local_148.begin();
                local_70 = auVar16;
                auVar16 = local_148.end();
                local_b8 = auVar16;
                while (true) {
                    cVar2 = *local_70 != *local_b8;
                    this_00 = local_48;
                    if (!cVar2)
                        break;
                    puVar7 = (unsigned int*)local_70->HeapBeginPtr();
                    local_38 = *puVar7;
                    this_02 = (TextureAtlasReference*)(*local_50).operator->();
                    ((TextureAtlas*)this_02->GetTextureAtlas())->GetMaterialSettingsSlotXY(*local_34, local_38);
                    &local_a8 =
                        (pair<int, unsigned short>[8])eastl::make_pair<int&, unsigned short&>(local_38, *local_34);
                    local_d8.pair<int, unsigned short, void>(local_a8);
                    local_d0 = local_110.insert(local_d8);
                    ++*local_70;
                }
                lVar5 = local_48->size();
                local_60->reserve(lVar5 * 3);
                local_98 = (vector<jag::graphics::TerrainPatchVertexPos>*)((long)local_40 + 32);
                local_98->reserve(lVar5 * 3);
                local_40 = (AABB*)((long)local_40 + 12528);
                local_40->Reset();
                this_04 = (array<TerrainVertex, 3ul>*)this_00->HeapBeginPtr();
                local_88 = (array<TerrainVertex, 3ul>*)this_00->end();
                if (this_04 != local_88) {
                    do {
                        puVar8 = &local_110[*((this_04 + 84))];
                        local_34[1] = *puVar8;
                        vector3 = (Vector3T<int>*)this_04->begin();
                        local_90 = this_04;
                        local_a0 = (Vector3T<int>*)this_04->end();
                        if (vector3 != local_a0) {
                            do {
                                local_d0.Vector3T<int>(*vector3);
                                local_40->AddPoint(local_d0);
                                new (local_70) jag::graphics::GUIAnimationRGB((short)*(uint32_t*)vector3 - 16383,
                                                                              *(short*)(vector3 + 4),
                                                                              (short)*(uint32_t*)(vector3 + 8) - 16383);
                                pVVar9 = (Vector3T<short>*)local_60->push_back();
                                *pVVar9 = *local_70;
                                VVar1 = vector3[27];
                                paVar13 = (array<unsigned char, 4ul>*)(pVVar9 + 24);
                                pVVar10 = (Vector3T<int>*)(*paVar13)[0];
                                *pVVar10 = VVar1;
                                VVar1 = vector3[26];
                                pVVar10 = (Vector3T<int>*)(*paVar13)[1];
                                *pVVar10 = VVar1;
                                VVar1 = vector3[25];
                                pVVar10 = (Vector3T<int>*)(*paVar13)[2];
                                *pVVar10 = VVar1;
                                VVar1 = vector3[24];
                                pVVar10 = (Vector3T<int>*)(*paVar13)[3];
                                *pVVar10 = VVar1;
                                this_05 = (array<int, 3ul>*)(vector3 + 12);
                                piVar11 = (int*)(*this_05)[0];
                                local_50 =
                                    (shared_ptr<jag::graphics::TextureAtlasReference>*)(((uint64_t)local_50._4_4_
                                                                                         << 32) |
                                                                                        (uint32_t)((float)*piVar11));
                                piVar11 = (int*)(*this_05)[1];
                                local_48 =
                                    (vector<game::BuildCombinedLocationResult_CombinableGroup>*)(((uint64_t)
                                                                                                      local_48._4_4_
                                                                                                  << 32) |
                                                                                                 (uint32_t)((
                                                                                                     float)*piVar11));
                                piVar11 = (int*)(*this_05)[2];
                                local_d0 = jag::math::ColourHSL(local_50._0_4_, local_48._0_4_, (float)*piVar11);
                                local_d0 = jag::math::Vector3T<float>::Normalize();
                                fVar15 = local_d0.field_0 * 127.0;
                                array = (array<signed char, 4ul>*)(pVVar9 + 16);
                                puVar12 = (uint8_t*)(*array)[0];
                                *puVar12 = (char)(int)fVar15;
                                fVar15 = local_d0.field_4 * 127.0;
                                puVar12 = (uint8_t*)(*array)[1];
                                *puVar12 = (char)(int)fVar15;
                                fVar15 = local_d0.field_8 * 127.0;
                                puVar12 = (uint8_t*)(*array)[2];
                                *puVar12 = (char)(int)fVar15;
                                puVar12 = (uint8_t*)(*array)[3];
                                *puVar12 = 1;
                                *(unsigned short*)(pVVar9 + 8) = local_34[1];
                                *(uint16_t*)(pVVar9 + 10) = 65535;
                                *(uint32_t*)(pVVar9 + 12) = 4294967295;
                                local_b8._0_4_ = 8;
                                *(uint32_t*)(pVVar9 + 20) = 8;
                                *(uint16_t*)(pVVar9 + 28) = 1;
                                pVVar9[30] = (Vector3T<short>)0;
                                paVar13 = (array<unsigned char, 4ul>*)(pVVar9 + 32);
                                puVar12 = (uint8_t*)(*paVar13)[0];
                                *puVar12 = 7;
                                puVar12 = (uint8_t*)(*paVar13)[1];
                                *puVar12 = 7;
                                puVar12 = (uint8_t*)(*paVar13)[2];
                                *puVar12 = 7;
                                puVar12 = (uint8_t*)(*paVar13)[3];
                                *puVar12 = 0;
                                pVVar9 = (Vector3T<short>*)local_98->push_back();
                                *pVVar9 = *local_70;
                                vector3 = vector3 + 28;
                            } while (vector3 != local_a0);
                        }
                        this_04 = local_90 + 88;
                    } while (this_04 != local_88);
                }
            }
            uVar14 = local_80 + 1;
        } while (uVar14 != 4);
    }

} // namespace jag::oldscape::rseven
