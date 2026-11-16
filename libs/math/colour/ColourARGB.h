// libs/math/colour/ColourARGB.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::math {
    template <typename...> // 3 instantiations, e.g. <ABGR8StorageLayout>, <ARGB8StorageLayout>, <RGBA8StorageLayout>
    class ColourStorage8888 {
    public:
        ColourStorage8888(unsigned int, unsigned int, unsigned int, unsigned int);
        void Set(unsigned int, unsigned int, unsigned int, unsigned int);
        ColourStorage8888(unsigned int);
        void Set(unsigned int);
        ColourStorage8888(Vector4T<float> const&);
        void Set(unsigned char, unsigned char, unsigned char, unsigned char);
        ColourStorage8888<RGBA8StorageLayout>(ColourStorage8888<RGBA8StorageLayout>);
        ColourStorage8888(Vector3T<float> const&);
        int RedGreenGradient(int, int, int);
        ColourStorage8888(float, float, float, float);
        void Set(float, float, float, float);
        ColourStorage8888<RGBA8StorageLayout>* SetRedGreenGradient(int, int, int);
        ColourStorage8888<ARGB8StorageLayout>(ColourStorage8888<ARGB8StorageLayout>);
    };

    // 0x1001c7c10, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ColourStorage8888<RGBA8StorageLayout>::ColourStorage8888(unsigned int, unsigned int, unsigned int, unsigned int): jumps straight to the base-object constructor

    // 0x10036f7d0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ColourStorage8888<ARGB8StorageLayout>::ColourStorage8888(unsigned int): jumps straight to the base-object constructor

    // 0x1007dba70, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ColourStorage8888<RGBA8StorageLayout>::ColourStorage8888(Vector4T<float> const&): jumps straight to the base-object constructor

    // 0x1007dba80, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ColourStorage8888<ABGR8StorageLayout>::ColourStorage8888<RGBA8StorageLayout>(ColourStorage8888<RGBA8StorageLayout>): jumps straight to the base-object constructor

    // 0x1007fb570, 112 bytes, base-object constructor, inline, placed by class header (inline)
    // ColourStorage8888<RGBA8StorageLayout>::ColourStorage8888(Vector4T<float> const&)
    void ColourStorage8888<RGBA8StorageLayout>::ColourStorage8888(Vector4T* param_1) {
        float fVar1;
        float fVar2;
        float fVar3;
        vector* pvVar4;
        float* pfVar5;

        pvVar4 = param_1->SSOBeginPtr(param_1);
        fVar1 = *(float*)pvVar4;
        pfVar5 = (float*)param_1->y();
        fVar2 = *pfVar5;
        pfVar5 = (float*)param_1->second();
        fVar3 = *pfVar5;
        pfVar5 = (float*)param_1->qw();
        Set(this, fVar1, fVar2, fVar3, *pfVar5);
    }

    // 0x1007fb5e0, 48 bytes, base-object constructor, inline, placed by class header (inline)
    // ColourStorage8888<ABGR8StorageLayout>::ColourStorage8888<RGBA8StorageLayout>(ColourStorage8888<RGBA8StorageLayout>)
    void ColourStorage8888<ABGR8StorageLayout>::ColourStorage8888<RGBA8StorageLayout>(undefined4 param_2) {
        Set(this, (uchar)((uint)param_2 >> 24), (uchar)((uint)param_2 >> 16), (uchar)((uint)param_2 >> 8),
            (uchar)param_2);
    }

    // 0x100807850, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ColourStorage8888<ARGB8StorageLayout>::ColourStorage8888(Vector3T<float> const&): jumps straight to the base-object constructor

    // 0x1008a75f0, 80 bytes, inline, placed by class header (inline)
    // ColourStorage8888<RGBA8StorageLayout>::RedGreenGradient(int, int, int)
    int ColourStorage8888<RGBA8StorageLayout>::RedGreenGradient(int param_1, int param_2, int param_3) {
        int local_2c;

        new (&local_2c) callstack::Callstack();
        SetRedGreenGradient((ColourStorage8888<RGBA8StorageLayout>*)&local_2c, param_1, param_2, param_3);
        return local_2c;
    }

    // 0x1008ac920, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ColourStorage8888<ARGB8StorageLayout>::ColourStorage8888(float, float, float, float): jumps straight to the base-object constructor

    // 0x100a49090, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ColourStorage8888<RGBA8StorageLayout>::ColourStorage8888(float, float, float, float): jumps straight to the base-object constructor

    // 0x100a490a0, 256 bytes, inline, placed by class header (inline)
    // ColourStorage8888<RGBA8StorageLayout>::Set(float, float, float, float)
    void ColourStorage8888<RGBA8StorageLayout>::Set(float param_1, float param_2, float param_3, float param_4) {
        int iVar1;
        int local_1c[3];

        local_1c[0] = RoundFloatToInt(param_1 * 255.0);
        local_1c[1] = 0;
        local_1c[2] = 255;
        iVar1 = Clamp<int>(local_1c, local_1c + 1, local_1c + 2);
        this[3] = SUB41(iVar1, 0);
        local_1c[0] = RoundFloatToInt(param_2 * 255.0);
        local_1c[1] = 0;
        local_1c[2] = 255;
        iVar1 = Clamp<int>(local_1c, local_1c + 1, local_1c + 2);
        this[2] = SUB41(iVar1, 0);
        local_1c[0] = RoundFloatToInt(param_3 * 255.0);
        local_1c[1] = 0;
        local_1c[2] = 255;
        iVar1 = Clamp<int>(local_1c, local_1c + 1, local_1c + 2);
        this[1] = SUB41(iVar1, 0);
        local_1c[0] = RoundFloatToInt(param_4 * 255.0);
        local_1c[1] = 0;
        local_1c[2] = 255;
        iVar1 = Clamp<int>(local_1c, local_1c + 1, local_1c + 2);
        *this = SUB41(iVar1, 0);
    }

} // namespace jag::math

namespace jag::oldscape::rseven {
    // 0x1001c7fe0, 1504 bytes, placed by debug map only (low confidence)
    // MapRebuildHandler_RenderThread::RebuildSquareTerrain(MapRebuildSquare&, jag::graphics::RT7Core&)
    void MapRebuildHandler_RenderThread::RebuildSquareTerrain(MapRebuildSquare* param_1, RT7Core* param_2) {
        array<signed char, 4ul>* this;
        Vector3T VVar1;
        vector<game::BuildCombinedLocationResult_CombinableGroup, eastl::allocator>* this_00;
        bool bVar2;
        shared_ptr<BuildTerrainResultLevel>* psVar3;
        long lVar4;
        long lVar5;
        vector<jag::graphics::TerrainPatchVertex, eastl::allocator>* pvVar6;
        TextureManager* this_01;
        TextureAtlasManager* this_02;
        uint* puVar7;
        TextureAtlasReference* this_03;
        TextureAtlas* this_04;
        array<TerrainVertex, 3ul>* this_05;
        undefined2* puVar8;
        Vector3T* pVVar9;
        Vector3T<short>* pVVar10;
        Vector3T* pVVar11;
        int* piVar12;
        undefined1* puVar13;
        undefined8 extraout_RDX;
        array<int, 3ul>* this_06;
        array<unsigned char, 4ul>* paVar14;
        ulong uVar15;
        float fVar16;
        undefined1 auVar17[16];
        undefined1 auVar18[16];
        hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> local_148[56];
        shared_ptr local_110[3];
        pair<int const, unsigned short> local_d8[8];
        ColourHSL local_d0;
        undefined8 local_b8;
        undefined8 local_b0;
        undefined8 local_a8;
        Vector3T* local_a0;
        vector<jag::graphics::TerrainPatchVertexPos, eastl::allocator>* local_98;
        array<TerrainVertex, 3ul>* local_90;
        array<TerrainVertex, 3ul>* local_88;
        ulong local_80;
        undefined1 local_70[16];
        vector<jag::graphics::TerrainPatchVertex, eastl::allocator>* local_60;
        shared_ptr<jag::graphics::TextureAtlasReference>* local_50;
        vector<game::BuildCombinedLocationResult_CombinableGroup, eastl::allocator>* local_48;
        AABB* local_40;
        uint local_38;
        ushort local_34;
        undefined2 local_32;

        new (local_110) eastl::allocator("EASTL hash_set");
        eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::hash_set(
            local_148, (allocator*)local_110);
        uVar15 = 0;
        do {
            psVar3 =
                (shared_ptr<BuildTerrainResultLevel>*)std::array<shared_ptr<BuildTerrainResultLevel>, 4ul>::operator[](
                    (array<shared_ptr<BuildTerrainResultLevel>, 4ul>*)param_1, uVar15);
            lVar4 = shared_ptr<BuildTerrainResultLevel>::operator->(psVar3);
            lVar5 = ((lVar4 + 12560))->HeapBeginPtr();
            lVar4 = ((lVar4 + 12560))->end();
            for (; lVar5 != lVar4; lVar5 = lVar5 + 88) {
                eastl::hashtable<int, int, eastl::allocator, eastl::use_self<int>, eastl::equal_to<int>,
                                 eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                 eastl::prime_rehash_policy, false, false, true>::insert((int*)local_110);
            }
            auVar17._8_8_ = local_70._8_8_;
            auVar17._0_2_ = local_70._0_2_;
            auVar17._2_2_ = local_70._2_2_;
            auVar17._4_2_ = local_70._4_2_;
            auVar17._6_2_ = local_70._6_2_;
            uVar15 = uVar15 + 1;
        } while (uVar15 != 4);
        uVar15 = 0;
        local_70 = auVar17;
        do {
            local_80 = uVar15;
            psVar3 =
                (shared_ptr<BuildTerrainResultLevel>*)std::array<shared_ptr<BuildTerrainResultLevel>, 4ul>::operator[](
                    (array<shared_ptr<BuildTerrainResultLevel>, 4ul>*)param_1, uVar15);
            pvVar6 = (vector<jag::graphics::TerrainPatchVertex, eastl::allocator>*)
                shared_ptr<BuildTerrainResultLevel>::operator*(psVar3);
            lVar5 = ((pvVar6 + 12560))->size();
            if (lVar5 != 0) {
                this_01 = (TextureManager*)param_2->GetTextureManager();
                this_02 = (TextureAtlasManager*)this_01->GetTextureAtlasManager();
                jag::graphics::TextureAtlasManager::GetSharedAtlasRefFromMaterialIDs<
                    eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>>(
                    local_110, this_02, (TextureAtlasUsage*)graphicutils::TextureAtlasUsage::USAGE_UNCOMPRESSED,
                    (hash_set*)local_148);
                local_50 = (shared_ptr<jag::graphics::TextureAtlasReference>*)(pvVar6 + 12592);
                shared_ptr<jag::graphics::TextureAtlasReference>::operator=(local_50, local_110);
                local_48 =
                    (vector<game::BuildCombinedLocationResult_CombinableGroup, eastl::allocator>*)(pvVar6 + 12560);
                local_110->~shared_ptr();
                new (&local_d0) eastl::allocator("EASTL hash_map");
                new (local_110) eastl::hash_map<int, unsigned short, eastl::hash<int>, eastl::equal_to<int>,
                                                eastl::allocator, false>((allocator*)&local_d0);
                local_60 = pvVar6;
                local_40 = (AABB*)pvVar6;
                auVar17 = eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                           eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                           eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                           eastl::prime_rehash_policy, false, true, true>::begin();
                local_70 = auVar17;
                auVar18 = local_148->end();
                local_b0 = auVar18._8_8_;
                while (true) {
                    local_b8 = auVar18._0_8_;
                    bVar2 = eastl::operator!=((eastl*)local_70, (hashtable_iterator_base*)&local_b8, auVar18._8_8_);
                    this_00 = local_48;
                    if (!bVar2)
                        break;
                    puVar7 = (uint*)local_70->HeapBeginPtr();
                    local_38 = *puVar7;
                    this_03 =
                        (TextureAtlasReference*)shared_ptr<jag::graphics::TextureAtlasReference>::operator->(local_50);
                    this_04 = (TextureAtlas*)this_03->GetTextureAtlas();
                    this_04->GetMaterialSettingsSlotXY(&local_34, local_38);
                    local_a8 = eastl::make_pair<int&, unsigned short&>((int*)&local_38, &local_34);
                    eastl::pair<int const, unsigned short>::pair<int, unsigned short, void>(local_d8, (pair*)&local_a8);
                    eastl::hashtable<int, eastl::pair<int const, unsigned short>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, unsigned short>>, eastl::equal_to<int>,
                                     eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                     eastl::prime_rehash_policy, false, true, true>::insert((pair*)&local_d0);
                    eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>::operator++(
                        (hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>*)local_70);
                    auVar18._8_8_ = extraout_RDX;
                    auVar18._0_8_ = local_b8;
                }
                lVar5 =
                    eastl::vector<game::BuildCombinedLocationResult_CombinableGroup, eastl::allocator>::size(local_48);
                eastl::vector<jag::graphics::TerrainPatchVertex, eastl::allocator>::reserve(local_60, lVar5 * 3);
                local_98 = (vector<jag::graphics::TerrainPatchVertexPos, eastl::allocator>*)((long)local_40 + 32);
                eastl::vector<jag::graphics::TerrainPatchVertexPos, eastl::allocator>::reserve(local_98, lVar5 * 3);
                local_40 = (AABB*)((long)local_40 + 12528);
                local_40->Reset();
                this_05 = (array<TerrainVertex, 3ul>*)this_00->HeapBeginPtr();
                local_88 = (array<TerrainVertex, 3ul>*)this_00->end();
                if (this_05 != local_88) {
                    do {
                        puVar8 = (undefined2*)eastl::hash_map<
                            int, unsigned short, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                            false>::operator[]((hash_map<int, unsigned short, eastl::hash<int>, eastl::equal_to<int>,
                                                         eastl::allocator, false>*)local_110,
                                               (int*)(this_05 + 84));
                        local_32 = *puVar8;
                        pVVar9 = (Vector3T*)std::array<TerrainVertex, 3ul>::begin(this_05);
                        local_90 = this_05;
                        local_a0 = (Vector3T*)std::array<TerrainVertex, 3ul>::end(this_05);
                        if (pVVar9 != local_a0) {
                            do {
                                jag::math::Vector3T<float>::Vector3T<int>((Vector3T<float>*)&local_d0, pVVar9);
                                local_40->AddPoint((Vector3T*)&local_d0);
                                new (local_70) jag::graphics::GUIAnimationRGB(
                                    (int)(short)((short)*(undefined4*)pVVar9 + -16383), (int)*(short*)(pVVar9 + 4),
                                    (int)(short)((short)*(undefined4*)(pVVar9 + 8) + -16383));
                                pVVar10 = (Vector3T<short>*)
                                    eastl::vector<jag::graphics::TerrainPatchVertex, eastl::allocator>::push_back(
                                        local_60);
                                jag::math::Vector3T<short>::operator=(pVVar10, (Vector3T*)local_70);
                                VVar1 = pVVar9[27];
                                paVar14 = (array<unsigned char, 4ul>*)(pVVar10 + 24);
                                pVVar11 = (Vector3T*)std::array<unsigned char, 4ul>::operator[](paVar14, 0);
                                *pVVar11 = VVar1;
                                VVar1 = pVVar9[26];
                                pVVar11 = (Vector3T*)std::array<unsigned char, 4ul>::operator[](paVar14, 1);
                                *pVVar11 = VVar1;
                                VVar1 = pVVar9[25];
                                pVVar11 = (Vector3T*)std::array<unsigned char, 4ul>::operator[](paVar14, 2);
                                *pVVar11 = VVar1;
                                VVar1 = pVVar9[24];
                                pVVar11 = (Vector3T*)std::array<unsigned char, 4ul>::operator[](paVar14, 3);
                                *pVVar11 = VVar1;
                                this_06 = (array<int, 3ul>*)(pVVar9 + 12);
                                piVar12 = (int*)std::array<int, 3ul>::operator[](this_06, 0);
                                local_50 = (shared_ptr<jag::graphics::TextureAtlasReference>*)CONCAT44(local_50._4_4_,
                                                                                                       (float)*piVar12);
                                piVar12 = (int*)std::array<int, 3ul>::operator[](this_06, 1);
                                local_48 =
                                    (vector<game::BuildCombinedLocationResult_CombinableGroup, eastl::allocator>*)
                                        CONCAT44(local_48._4_4_, (float)*piVar12);
                                piVar12 = (int*)std::array<int, 3ul>::operator[](this_06, 2);
                                new (&local_d0) jag::math::ColourHSL(local_50._0_4_, local_48._0_4_, (float)*piVar12);
                                local_d0.Normalize();
                                fVar16 = local_d0.field_0 * 127.0;
                                this = (array<signed char, 4ul>*)(pVVar10 + 16);
                                puVar13 = (undefined1*)std::array<signed char, 4ul>::operator[](this, 0);
                                *puVar13 = (char)(int)fVar16;
                                fVar16 = local_d0.field_4 * 127.0;
                                puVar13 = (undefined1*)std::array<signed char, 4ul>::operator[](this, 1);
                                *puVar13 = (char)(int)fVar16;
                                fVar16 = local_d0.field_8 * 127.0;
                                puVar13 = (undefined1*)std::array<signed char, 4ul>::operator[](this, 2);
                                *puVar13 = (char)(int)fVar16;
                                puVar13 = (undefined1*)std::array<signed char, 4ul>::operator[](this, 3);
                                *puVar13 = 1;
                                *(undefined2*)(pVVar10 + 8) = local_32;
                                *(undefined2*)(pVVar10 + 10) = 65535;
                                *(undefined4*)(pVVar10 + 12) = 4294967295;
                                local_b8 = CONCAT44(local_b8._4_4_, 8);
                                *(undefined4*)(pVVar10 + 20) = 8;
                                *(undefined2*)(pVVar10 + 28) = 1;
                                pVVar10[30] = (Vector3T<short>)0;
                                paVar14 = (array<unsigned char, 4ul>*)(pVVar10 + 32);
                                puVar13 = (undefined1*)std::array<unsigned char, 4ul>::operator[](paVar14, 0);
                                *puVar13 = 7;
                                puVar13 = (undefined1*)std::array<unsigned char, 4ul>::operator[](paVar14, 1);
                                *puVar13 = 7;
                                puVar13 = (undefined1*)std::array<unsigned char, 4ul>::operator[](paVar14, 2);
                                *puVar13 = 7;
                                puVar13 = (undefined1*)std::array<unsigned char, 4ul>::operator[](paVar14, 3);
                                *puVar13 = 0;
                                pVVar10 = (Vector3T<short>*)
                                    eastl::vector<jag::graphics::TerrainPatchVertexPos, eastl::allocator>::push_back(
                                        local_98);
                                jag::math::Vector3T<short>::operator=(pVVar10, (Vector3T*)local_70);
                                pVVar9 = pVVar9 + 28;
                            } while (pVVar9 != local_a0);
                        }
                        this_05 = local_90 + 88;
                    } while (this_05 != local_88);
                }
                local_110->~hash_map();
            }
            uVar15 = local_80 + 1;
        } while (uVar15 != 4);
        local_148->~hash_map();
    }

} // namespace jag::oldscape::rseven
