// libs/oldscape/osrendercore/rseven/ModelUnlitToRT7Exporter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.osrendercore

#include "ModelUnlitToRT7Exporter.h"

namespace jag::oldscape::rseven {
    // 0x1001c8940, 6832 bytes, placed by debug map only (low confidence)
    // Export(ModelWrapper&, bool)
    /* WARNING: Removing unreachable block (ram,4296838019) */
    /* Export(ModelWrapper&, bool) */

    rseven* Export(ModelWrapper* param_1, bool param_2) {
        array<signed char, 3ul>* this_00;
        array<signed char, 4ul>* this_01;
        ushort uVar1;
        undefined4 uVar2;
        SharedArray<std::unique_ptr<rs2lib::worldmap::LocationData,
                                    std::default_delete<rs2lib::worldmap::LocationData>>>* pSVar3;
        vector<ModelVertex, eastl::allocator>* this_02;
        char cVar4;
        byte bVar5;
        byte bVar6;
        bool bVar7;
        undefined2 uVar8;
        short sVar9;
        undefined2 uVar10;
        ushort uVar11;
        ushort uVar12;
        byte* pbVar13;
        long lVar14;
        float* pfVar15;
        int* piVar16;
        undefined2* puVar17;
        ulong uVar18;
        ulong uVar19;
        array<short, 3ul>* paVar20;
        short* psVar21;
        undefined1* puVar22;
        long lVar23;
        int* piVar24;
        undefined4* puVar25;
        ushort* puVar26;
        Mesh* pMVar27;
        Mesh* pMVar28;
        PacketT<Array<unsigned char, eastl::allocator>>* pPVar29;
        array<unsigned short, 3ul>* this_03;
        array<unsigned short, 3ul>* paVar30;
        array<short, 3ul>* paVar31;
        uint* puVar32;
        undefined7 in_register_00000011;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        hashtable_iterator_base* extraout_RDX_03;
        hashtable_iterator_base* extraout_RDX_04;
        hashtable_iterator_base* extraout_RDX_05;
        hashtable_iterator_base* phVar33;
        int iVar34;
        ulong uVar35;
        long* plVar36;
        long lVar37;
        long lVar38;
        long* plVar39;
        long lVar40;
        long lVar41;
        int iVar42;
        Layout* this_04;
        Array<signed char, eastl::allocator>* this_05;
        vector<Mesh, eastl::allocator>* this_06;
        long lVar43;
        undefined1 uVar44;
        int iVar45;
        ulong unaff_R15;
        bool bVar46;
        bool bVar47;
        float fVar48;
        float fVar49;
        float fVar50;
        float fVar51;
        float fVar52;
        float fVar53;
        float fVar54;
        float fVar55;
        float fVar56;
        float fVar57;
        float fVar58;
        hash_map<int, eastl::vector<Mesh, eastl::allocator>, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                 false>
            local_2a0[56];
        undefined1 local_268[40];
        vector<ModelFace, eastl::allocator> local_240[200];
        int local_178;
        char local_174;
        SharedArray<std::unique_ptr<rs2lib::worldmap::LocationData,
                                    std::default_delete<rs2lib::worldmap::LocationData>>>* local_170;
        Array<signed char, eastl::allocator>* local_168;
        shared_ptr<signed char[]>* local_160;
        long* local_158;
        long* local_150;
        long* local_148;
        long* local_140;
        undefined4 local_138;
        undefined4 local_134;
        undefined4 local_130;
        uint local_128[5];
        undefined4 local_114;
        float local_110;
        float local_10c;
        float local_108;
        float local_104;
        float local_100;
        float local_fc;
        float* local_f8;
        long local_f0;
        long local_e8;
        long local_e0;
        float* local_d8;
        ModelWrapper* local_d0;
        rseven* local_c8;
        Mesh* local_c0;
        ulong local_b8;
        float local_ac;
        float local_a8;
        float local_a4;
        Mesh* local_a0;
        uint local_98;
        float local_94;
        ulong local_90;
        array<short, 3ul>* local_88;
        array<unsigned short, 3ul>* local_80;
        vector<ModelVertex, eastl::allocator>* local_78;
        float local_6c;
        array<short, 3ul>* local_68;
        array<short, 3ul>* local_60;
        float local_54;
        ulong local_50;
        float local_44;
        shared_ptr local_40;

        local_114 = (undefined4)CONCAT71(in_register_00000011, param_2);
        if (param_1->field_44 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("model.m_forRSeven",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                      "rseven/ModelUnlitToRT7Exporter.cpp",
                      184, (char*)0);
        }
        new (local_268) eastl::allocator("EASTL hash_map");
        eastl::hash_map<int, eastl::vector<Mesh, eastl::allocator>, eastl::hash<int>, eastl::equal_to<int>,
                        eastl::allocator, false>::hash_map(local_2a0, (allocator*)local_268);
        local_f0 = param_1->field_200;
        local_e0 = param_1->field_208;
        local_e8 = param_1->field_216;
        local_d0 = param_1;
        local_c8 = this;
        if ((int)param_1->field_40 < 1) {
            local_98 = 0;
        } else {
            this_05 = (Array<signed char, eastl::allocator>*)param_1->field_48;
            local_170 =
                (SharedArray<std::unique_ptr<rs2lib::worldmap::LocationData,
                                             std::default_delete<rs2lib::worldmap::LocationData>>>*)&param_1->field_56;
            local_160 = (shared_ptr<signed char[]>*)&param_1->field_64;
            local_158 = &param_1->field_112;
            local_150 = &param_1->field_104;
            local_148 = &param_1->field_184;
            local_140 = &param_1->field_192;
            local_50 = 0;
            local_98 = 0;
            local_168 = this_05;
            do {
                if (this_05 == (Array<signed char, eastl::allocator>*)0) {
                    fVar48 = 0.0;
                LAB_1001c8ab9:
                    pSVar3 = local_170;
                    cVar4 = local_170->empty();
                    if (cVar4 == '\0') {
                        if (*(ulong*)pSVar3 <= local_50) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("(index < m_Size)",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                      "SharedArray.h",
                                      299, "Index of %d outside range 0 to %d", local_50, *(ulong*)pSVar3 - 1);
                        }
                        pbVar13 = (byte*)shared_ptr<signed char[]>::operator[](local_160, local_50);
                        bVar5 = *pbVar13;
                    } else {
                        bVar5 = 0;
                    }
                    bVar6 = bVar5 - 2;
                    if ((char)local_114 == '\0') {
                        bVar6 = bVar5;
                    }
                    local_54 = (float)(uint)bVar6;
                    if (param_1->field_80 == 0) {
                        local_94 = -NAN;
                    } else {
                        local_94 = (float)(int)*(short*)(param_1->field_80 + local_50 * 2);
                    }
                    local_128[0] = (uint)local_94 & 65535;
                    local_44 = fVar48;
                    if (param_1->field_88 == 0) {
                        local_6c = (float)CONCAT31(local_6c._1_3_, 255);
                        uVar44 = 0;
                    } else {
                        bVar5 = *(byte*)(param_1->field_88 + local_50);
                        local_6c = (float)CONCAT31(local_6c._1_3_, 255);
                        unaff_R15 = 0;
                        if ((byte)(bVar5 + 2) < 2)
                            goto LAB_1001c8a70;
                        if (bVar5 == 0) {
                            if (local_e0 != 0) {
                                local_128[0] = (*(uint*)(param_1->field_208 + local_50 * 4) & 255) << 16 | local_128[0];
                            }
                            uVar44 = 0;
                        } else {
                            local_128[0] = local_128[0] | 1073741824;
                            uVar44 = 1;
                            local_6c = (float)CONCAT31(local_6c._1_3_, ~bVar5);
                        }
                    }
                    eastl::hashtable<
                        int, eastl::pair<int const, eastl::vector<Mesh, eastl::allocator>>, eastl::allocator,
                        eastl::use_first<eastl::pair<int const, eastl::vector<Mesh, eastl::allocator>>>,
                        eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                        eastl::prime_rehash_policy, false, true, true>::find((int*)&local_40);
                    eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                    bVar7 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)local_268, extraout_RDX);
                    if (bVar7) {
                        lVar14 = local_40.HeapBeginPtr();
                        this_06 = (vector<Mesh, eastl::allocator>*)(lVar14 + 8);
                    } else {
                        this_06 = (vector<Mesh, eastl::allocator>*)
                            eastl::hash_map<int, eastl::vector<Mesh, eastl::allocator>, eastl::hash<int>,
                                            eastl::equal_to<int>, eastl::allocator, false>::operator[](local_2a0,
                                                                                                       (int*)local_128);
                    }
                    lVar14 = eastl::vector<Mesh, eastl::allocator>::size(this_06);
                    uVar35 = local_50;
                    if (lVar14 == 0) {
                    LAB_1001c8cd0:
                        pfVar15 = (float*)eastl::vector<Mesh, eastl::allocator>::push_back(this_06);
                        ((pfVar15 + 10))->reserve((long)(int)param_1->field_40 - (long)(int)uVar35);
                        ((pfVar15 + 2))->reserve(((long)(int)param_1->field_40 - (long)(int)uVar35) * 3);
                        *pfVar15 = local_94;
                        *(undefined1*)(pfVar15 + 61) = uVar44;
                        pfVar15[60] = 0.0;
                    } else {
                        lVar14 = eastl::vector<Mesh, eastl::allocator>::back(this_06);
                        lVar14 = ((lVar14 + 72))->size();
                        if (56 < lVar14 + 3U)
                            goto LAB_1001c8cd0;
                        lVar14 = eastl::vector<Mesh, eastl::allocator>::back(this_06);
                        lVar14 = ((lVar14 + 128))->size();
                        if (56 < lVar14 + 12U)
                            goto LAB_1001c8cd0;
                        lVar14 = eastl::vector<Mesh, eastl::allocator>::back(this_06);
                        lVar14 = ((lVar14 + 184))->size();
                        if (32 < lVar14 + 1U)
                            goto LAB_1001c8cd0;
                        pfVar15 = (float*)eastl::vector<Mesh, eastl::allocator>::back(this_06);
                    }
                    local_d8 = pfVar15;
                    local_80 = (array<unsigned short, 3ul>*)((pfVar15 + 10))->push_back();
                    local_138 = *(undefined4*)(param_1->field_96 + uVar35 * 4);
                    local_134 = *(undefined4*)(param_1->field_112 + uVar35 * 4);
                    local_130 = *(undefined4*)(param_1->field_104 + uVar35 * 4);
                    if (local_e0 != 0) {
                        *(undefined2*)(local_80 + 10) = *(undefined2*)(param_1->field_208 + uVar35 * 4);
                        eastl::hashtable<int, int, eastl::allocator, eastl::use_self<int>, eastl::equal_to<int>,
                                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                         eastl::prime_rehash_policy, false, false, true>::insert((int*)local_268);
                    }
                    local_78 = (vector<ModelVertex, eastl::allocator>*)(local_d8 + 2);
                    local_f8 = local_d8 + 18;
                    local_c0 = (Mesh*)(local_d8 + 32);
                    uVar35 = 0;
                    do {
                        piVar16 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)&local_138, uVar35);
                        this_02 = local_78;
                        local_68 = (array<short, 3ul>*)(long)*piVar16;
                        uVar8 = eastl::vector<ModelVertex, eastl::allocator>::size(local_78);
                        local_b8 = uVar35;
                        puVar17 = (undefined2*)std::array<unsigned short, 3ul>::operator[](local_80, uVar35);
                        *puVar17 = uVar8;
                        uVar18 = eastl::vector<ModelVertex, eastl::allocator>::size(this_02);
                        uVar19 = eastl::vector<ModelVertex, eastl::allocator>::capacity(this_02);
                        uVar35 = local_50;
                        if (uVar19 <= uVar18) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("mesh->m_vertices.size() < mesh->m_vertices.capacity()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                      "osrendercore/rseven/ModelUnlitToRT7Exporter.cpp",
                                      312, (char*)0);
                        }
                        paVar20 = (array<short, 3ul>*)eastl::vector<ModelVertex, eastl::allocator>::push_back(local_78);
                        paVar31 = local_68;
                        uVar8 = *(undefined2*)(param_1->field_120 + (long)local_68 * 4);
                        puVar17 = (undefined2*)std::array<short, 3ul>::operator[](paVar20, 0);
                        *puVar17 = uVar8;
                        sVar9 = *(short*)(param_1->field_128 + (long)paVar31 * 4);
                        psVar21 = (short*)std::array<short, 3ul>::operator[](paVar20, 1);
                        *psVar21 = -sVar9;
                        uVar8 = *(undefined2*)(param_1->field_136 + (long)paVar31 * 4);
                        local_60 = paVar20;
                        puVar17 = (undefined2*)std::array<short, 3ul>::operator[](paVar20, 2);
                        paVar20 = local_60;
                        *puVar17 = uVar8;
                        if (local_44._0_1_ == '\0') {
                            lVar14 = param_1->field_152;
                            lVar43 = (long)paVar31 * 16;
                            if (*(int*)(lVar14 + 12 + lVar43) < 1) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("pointNormal.m_c > 0",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "oldscape/osrendercore/rseven/ModelUnlitToRT7Exporter.cpp",
                                          323, (char*)0);
                            }
                            iVar42 = *(int*)(lVar14 + lVar43 + 12) << 8;
                            unaff_R15 = (long)(*(int*)(lVar14 + lVar43) * 127) / (long)iVar42 & 4294967295;
                            iVar34 = (*(int*)(lVar14 + 4 + lVar43) * -127) / iVar42;
                            lVar14 = lVar14 + lVar43;
                        } else {
                            lVar14 = param_1->field_144;
                            iVar34 = *(int*)(lVar14 + 4 + uVar35 * 12);
                            iVar42 = *(int*)(lVar14 + uVar35 * 12) * 127;
                            iVar45 = iVar42 + 255;
                            if (-1 < iVar42) {
                                iVar45 = iVar42;
                            }
                            unaff_R15 = (ulong)(uint)(iVar45 >> 8);
                            iVar42 = iVar34 * -127;
                            iVar34 = iVar34 * -127 + 255;
                            if (-1 < iVar42) {
                                iVar34 = iVar42;
                            }
                            iVar34 = iVar34 >> 8;
                            lVar14 = lVar14 + uVar35 * 12;
                            iVar42 = 256;
                        }
                        lVar14 = (long)(*(int*)(lVar14 + 8) * 127) / (long)iVar42;
                        iVar42 = (int)lVar14;
                        local_98 = local_98 & 255;
                        if ((uint)(iVar42 * iVar42 + iVar34 * iVar34 + (int)unaff_R15 * (int)unaff_R15) < 1024) {
                            local_98 = 1;
                        }
                        this_00 = (array<signed char, 3ul>*)(local_60 + 6);
                        puVar22 = (undefined1*)std::array<signed char, 3ul>::operator[](this_00, 0);
                        *puVar22 = (char)unaff_R15;
                        puVar22 = (undefined1*)std::array<signed char, 3ul>::operator[](this_00, 1);
                        *puVar22 = (char)iVar34;
                        puVar22 = (undefined1*)std::array<signed char, 3ul>::operator[](this_00, 2);
                        *puVar22 = (char)lVar14;
                        this_01 = (array<signed char, 4ul>*)(paVar20 + 9);
                        puVar22 = (undefined1*)std::array<signed char, 4ul>::operator[](this_01, 0);
                        *puVar22 = SUB41(local_54, 0);
                        puVar22 = (undefined1*)std::array<signed char, 4ul>::operator[](this_01, 1);
                        *puVar22 = SUB41(local_44, 0);
                        puVar22 = (undefined1*)std::array<signed char, 4ul>::operator[](this_01, 2);
                        *puVar22 = 0;
                        puVar22 = (undefined1*)std::array<signed char, 4ul>::operator[](this_01, 3);
                        paVar31 = local_68;
                        this = local_c8;
                        param_1 = local_d0;
                        *puVar22 = 0;
                        if (local_f0 != 0) {
                            sVar9 = (short)*(undefined4*)(local_d0->field_200 + (long)local_68 * 4);
                            *(short*)(paVar20 + 18) = sVar9;
                            local_90 = CONCAT44(local_90._4_4_, (int)sVar9);
                            eastl::hashtable<int, int, eastl::allocator, eastl::use_self<int>, eastl::equal_to<int>,
                                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                             eastl::prime_rehash_policy, false, false, true>::insert((int*)local_268);
                        }
                        if (local_e8 != 0) {
                            local_88 = paVar20 + 36;
                            lVar43 = (long)paVar31 * 24;
                            lVar14 = ((param_1->field_216 + lVar43))->end();
                            if (lVar14 == 0) {
                                unaff_R15 = 0;
                            LAB_1001c9249:
                                puVar25 = (undefined4*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)local_88,
                                                                                        unaff_R15 - 1);
                                *puVar25 = 0;
                            } else {
                                local_60 = paVar20 + 20;
                                uVar35 = 1;
                                do {
                                    unaff_R15 = uVar35;
                                    local_a0 = (Mesh*)CONCAT71(local_a0._1_7_, 1);
                                    lVar14 = (long)local_68 * 24;
                                    lVar23 = ((param_1->field_216 + lVar14))->end();
                                    lVar14 = ((lVar14 + param_1->field_224))->end();
                                    if (lVar23 != lVar14) {
                                        /* WARNING: Subroutine does not return */
                                        LogAssert(
                                            "model.m_skin[pointIdx].size() == model.m_skinWeight[pointIdx].size()",
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "oldscape/osrendercore/rseven/ModelUnlitToRT7Exporter.cpp",
                                            368, (char*)0);
                                    }
                                    uVar35 = unaff_R15 - 1;
                                    piVar16 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)(param_1->field_216 + lVar43), uVar35);
                                    iVar34 = *piVar16;
                                    piVar16 =
                                        (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)local_60, uVar35);
                                    *piVar16 = iVar34;
                                    piVar24 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)(local_d0->field_224 + lVar43), uVar35);
                                    iVar34 = *piVar24;
                                    piVar24 =
                                        (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)local_88, uVar35);
                                    *piVar24 = iVar34;
                                    eastl::hashtable<int, int, eastl::allocator, eastl::use_self<int>,
                                                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
                                                     false, true>::insert((int*)local_268);
                                    this = local_c8;
                                    param_1 = local_d0;
                                    if (*piVar16 == 65535) {
                                        if (((ulong)local_a0 & 1) != 0)
                                            goto LAB_1001c8dd0;
                                        goto LAB_1001c9249;
                                    }
                                    if (*piVar24 == 0) {
                                        bVar5 = (byte)local_a0;
                                        goto LAB_1001c9240;
                                    }
                                    uVar18 = ((local_d0->field_216 + lVar43))->end();
                                    uVar35 = unaff_R15 + 1;
                                } while (unaff_R15 < uVar18);
                                bVar5 = 0;
                            LAB_1001c9240:
                                if ((bVar5 & 1) == 0)
                                    goto LAB_1001c9249;
                            }
                        LAB_1001c8dd0:
                            local_d8[60] = (float)((int)local_d8[60] + (int)unaff_R15);
                        }
                        uVar35 = local_b8 + 1;
                    } while (uVar35 != 3);
                    *(undefined2*)(local_80 + 6) = *(undefined2*)(param_1->field_160 + local_50 * 4);
                    local_80[8] = local_6c._0_1_;
                    if ((int)local_94 < 0) {
                        uVar8 = types::FloatToFloat16(0.0);
                        uVar10 = types::FloatToFloat16(0.0);
                        puVar26 = (ushort*)std::array<unsigned short, 3ul>::operator[](local_80, 0);
                        lVar14 = eastl::vector<ModelVertex, eastl::allocator>::operator[](local_78, (ulong)*puVar26);
                        *(undefined2*)(lVar14 + 14) = uVar8;
                        *(undefined2*)(lVar14 + 16) = uVar10;
                        uVar8 = types::FloatToFloat16(0.0);
                        uVar10 = types::FloatToFloat16(0.0);
                        puVar26 = (ushort*)std::array<unsigned short, 3ul>::operator[](local_80, 2);
                        lVar14 = eastl::vector<ModelVertex, eastl::allocator>::operator[](local_78, (ulong)*puVar26);
                        *(undefined2*)(lVar14 + 14) = uVar8;
                        *(undefined2*)(lVar14 + 16) = uVar10;
                        uVar8 = types::FloatToFloat16(0.0);
                        uVar10 = types::FloatToFloat16(0.0);
                        puVar26 = (ushort*)std::array<unsigned short, 3ul>::operator[](local_80, 1);
                        lVar14 = eastl::vector<ModelVertex, eastl::allocator>::operator[](local_78, (ulong)*puVar26);
                    } else {
                        if ((param_1->field_168 == 0) ||
                            (uVar35 = (ulong) * (byte*)(param_1->field_168 + local_50), uVar35 == 255)) {
                            piVar16 = (int*)(local_50 * 4 + param_1->field_96);
                            plVar36 = local_158;
                            uVar35 = local_50;
                            plVar39 = local_150;
                        } else {
                            piVar16 = (int*)(uVar35 * 4 + param_1->field_176);
                            plVar36 = local_140;
                            plVar39 = local_148;
                        }
                        lVar37 = (long)*piVar16;
                        lVar14 = param_1->field_120;
                        local_44 = (float)*(int*)(lVar14 + lVar37 * 4);
                        lVar43 = param_1->field_128;
                        fVar50 = (float)*(int*)(lVar43 + lVar37 * 4);
                        lVar23 = param_1->field_136;
                        fVar48 = (float)*(int*)(lVar23 + lVar37 * 4);
                        lVar38 = (long)*(int*)(*plVar39 + uVar35 * 4);
                        lVar37 = (long)*(int*)(*plVar36 + uVar35 * 4);
                        local_110 = (float)*(int*)(lVar14 + lVar38 * 4) - local_44;
                        local_10c = (float)*(int*)(lVar43 + lVar38 * 4) - fVar50;
                        fVar57 = (float)*(int*)(lVar23 + lVar38 * 4) - fVar48;
                        fVar56 = (float)*(int*)(lVar14 + lVar37 * 4) - local_44;
                        fVar55 = (float)*(int*)(lVar43 + lVar37 * 4) - fVar50;
                        local_94 = (float)*(int*)(lVar23 + lVar37 * 4) - fVar48;
                        lVar37 = (long)*(int*)(param_1->field_96 + local_50 * 4);
                        local_6c = (float)*(int*)(lVar14 + lVar37 * 4) - local_44;
                        lVar38 = (long)*(int*)(param_1->field_104 + local_50 * 4);
                        fVar58 = (float)*(int*)(lVar43 + lVar37 * 4) - fVar50;
                        local_54 = (float)*(int*)(lVar23 + lVar37 * 4) - fVar48;
                        local_fc = (float)*(int*)(lVar14 + lVar38 * 4) - local_44;
                        local_100 = (float)*(int*)(lVar43 + lVar38 * 4) - fVar50;
                        fVar52 = (float)*(int*)(lVar23 + lVar38 * 4) - fVar48;
                        local_88 = (array<short, 3ul>*)CONCAT44(local_88._4_4_, fVar52);
                        lVar37 = (long)*(int*)(param_1->field_112 + local_50 * 4);
                        local_44 = (float)*(int*)(lVar14 + lVar37 * 4) - local_44;
                        fVar50 = (float)*(int*)(lVar43 + lVar37 * 4) - fVar50;
                        local_c0 = (Mesh*)CONCAT44(local_c0._4_4_, fVar50);
                        fVar48 = (float)*(int*)(lVar23 + lVar37 * 4) - fVar48;
                        local_a0 = (Mesh*)CONCAT44(local_a0._4_4_, fVar48);
                        local_108 = local_94 * local_10c - fVar55 * fVar57;
                        fVar53 = fVar56 * fVar57 - local_94 * local_110;
                        local_104 = fVar55 * local_110 - fVar56 * local_10c;
                        fVar49 = local_104 * fVar55 - fVar53 * local_94;
                        fVar51 = local_108 * local_94 - local_104 * fVar56;
                        local_f8 = (float*)CONCAT44(local_f8._4_4_, fVar56);
                        fVar56 = fVar53 * fVar56 - local_108 * fVar55;
                        fVar54 = 1.0 / (fVar56 * fVar57 + fVar51 * local_10c + fVar49 * local_110);
                        local_d8 = (float*)CONCAT44(local_d8._4_4_, fVar58);
                        local_268._0_4_ = (local_54 * fVar56 + fVar51 * fVar58 + fVar49 * local_6c) * fVar54;
                        local_ac = (fVar56 * fVar48 + fVar51 * fVar50 + fVar49 * local_44) * fVar54;
                        local_a8 = 0.0;
                        local_a4 = 1.0;
                        local_90._0_4_ = (fVar52 * fVar56 + local_100 * fVar51 + local_fc * fVar49) * fVar54;
                        local_b8._0_4_ = fVar55;
                        local_68._0_4_ = fVar57;
                        local_60._0_4_ = fVar53;
                        local_268._0_4_ = jag::math::Clamp<float>((float*)local_268, &local_a8, &local_a4);
                        local_a8 = 0.0;
                        local_a4 = 1.0;
                        fVar48 = jag::math::Clamp<float>((float*)&local_90, &local_a8, &local_a4);
                        local_90 = CONCAT44(local_90._4_4_, fVar48);
                        local_a8 = 0.0;
                        local_a4 = 1.0;
                        local_ac = jag::math::Clamp<float>(&local_ac, &local_a8, &local_a4);
                        uVar8 = types::FloatToFloat16((float)local_268._0_4_);
                        fVar51 = local_104 * local_10c - local_60._0_4_ * local_68._0_4_;
                        fVar49 = local_68._0_4_ * local_108 - local_104 * local_110;
                        fVar48 = local_60._0_4_ * local_110 - local_108 * local_10c;
                        fVar50 = 1.0 / (local_94 * fVar48 + (float)local_b8 * fVar49 + local_f8._0_4_ * fVar51);
                        local_b8 = CONCAT44(local_b8._4_4_, fVar51);
                        local_68 = (array<short, 3ul>*)CONCAT44(local_68._4_4_, fVar49);
                        local_60 = (array<short, 3ul>*)CONCAT44(local_60._4_4_, fVar48);
                        fVar48 = local_54 * fVar48;
                        local_54 = fVar50;
                        uVar10 = types::FloatToFloat16((fVar48 + local_d8._0_4_ * fVar49 + local_6c * fVar51) * fVar50);
                        puVar26 = (ushort*)std::array<unsigned short, 3ul>::operator[](local_80, 0);
                        lVar14 = eastl::vector<ModelVertex, eastl::allocator>::operator[](local_78, (ulong)*puVar26);
                        *(undefined2*)(lVar14 + 14) = uVar8;
                        *(undefined2*)(lVar14 + 16) = uVar10;
                        uVar8 = types::FloatToFloat16((float)local_90);
                        uVar10 = types::FloatToFloat16((local_88._0_4_ * local_60._0_4_ + local_100 * local_68._0_4_ +
                                                        local_fc * (float)local_b8) *
                                                       local_54);
                        puVar26 = (ushort*)std::array<unsigned short, 3ul>::operator[](local_80, 2);
                        lVar14 = eastl::vector<ModelVertex, eastl::allocator>::operator[](local_78, (ulong)*puVar26);
                        *(undefined2*)(lVar14 + 14) = uVar8;
                        *(undefined2*)(lVar14 + 16) = uVar10;
                        uVar8 = types::FloatToFloat16(local_ac);
                        uVar10 = types::FloatToFloat16((local_a0._0_4_ * local_60._0_4_ +
                                                        local_c0._0_4_ * local_68._0_4_ + local_44 * (float)local_b8) *
                                                       local_54);
                        puVar26 = (ushort*)std::array<unsigned short, 3ul>::operator[](local_80, 1);
                        lVar14 = eastl::vector<ModelVertex, eastl::allocator>::operator[](local_78, (ulong)*puVar26);
                    }
                    *(undefined2*)(lVar14 + 14) = uVar8;
                    *(undefined2*)(lVar14 + 16) = uVar10;
                    this_05 = local_168;
                } else {
                    pbVar13 = (byte*)Array<signed char, eastl::allocator>::operator[](this_05, local_50);
                    unaff_R15 = CONCAT71((int7)(unaff_R15 >> 8), *pbVar13);
                    fVar48 = (float)unaff_R15;
                    if (*pbVar13 < 2)
                        goto LAB_1001c8ab9;
                }
            LAB_1001c8a70:
                local_50 = local_50 + 1;
            } while ((long)local_50 < (long)(int)param_1->field_40);
        }
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        phVar33 = extraout_RDX_00;
        while (bVar7 = eastl::operator!=((eastl*)local_268, (hashtable_iterator_base*)&local_40, phVar33), bVar7) {
            lVar14 = local_268->HeapBeginPtr();
            this_04 = (Layout*)(lVar14 + 8);
            for (pMVar27 = (Mesh*)eastl::basic_string<
                     char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                         eastl::allocator>>::Layout::HeapBeginPtr(this_04);
                 pMVar28 = (Mesh*)this_04->end(), pMVar27 != pMVar28; pMVar27 = pMVar27 + 1) {
                cVar4 = (&pMVar27->field_40)->empty();
                if (cVar4 != '\0') {
                    this_04->erase(pMVar27);
                }
            }
            eastl::hashtable_iterator<eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>,
                                      false, false>::
            operator++(
                (hashtable_iterator<eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>,
                                    false, false>*)local_268);
            phVar33 = extraout_RDX_01;
        }
        local_90 = 8;
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        uVar11 = 0;
        phVar33 = extraout_RDX_02;
        while (bVar7 = eastl::operator!=((eastl*)local_268, (hashtable_iterator_base*)&local_40, phVar33), bVar7) {
            lVar43 = local_268->HeapBeginPtr();
            lVar14 = ((lVar43 + 8))->HeapBeginPtr();
            lVar43 = ((lVar43 + 8))->end();
            for (; lVar14 != lVar43; lVar14 = lVar14 + 248) {
                lVar37 = ((lVar14 + 40))->size();
                lVar38 = ((lVar14 + 8))->size();
                lVar23 = lVar37 * 2;
                if (local_e0 == 0) {
                    lVar23 = 0;
                }
                lVar41 = lVar38 * 2;
                if (local_f0 == 0) {
                    lVar41 = 0;
                }
                if (local_e8 == 0) {
                    lVar40 = 0;
                } else {
                    lVar40 = (long)*(int*)(lVar14 + 240) * 3 + 4;
                }
                local_90 = local_90 + lVar37 * 2 + lVar23 + lVar38 * 17 + lVar41 +
                           lVar37 * ((ulong) * (byte*)(lVar14 + 244) | 6) + lVar40 + 14;
                uVar11 = uVar11 + 1;
            }
            eastl::hashtable_iterator<eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>,
                                      false, false>::
            operator++(
                (hashtable_iterator<eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>,
                                    false, false>*)local_268);
            phVar33 = extraout_RDX_03;
            this = local_c8;
        }
        make_shared<PacketT<Array<unsigned char, eastl::allocator>>, unsigned long&>((jag*)&local_40, &local_90);
        pPVar29 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                      shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                          (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar29, 2);
        pPVar29 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                      shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                          (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar29, 4);
        pPVar29 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                      shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                          (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar29, 0);
        pPVar29 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                      shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                          (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
        pPVar29->p2PlatformEndian(uVar11);
        pPVar29 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                      shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                          (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar29, 0);
        pPVar29 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                      shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                          (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar29, 0);
        pPVar29 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                      shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                          (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar29, 0);
        bVar7 = local_e8 != 0;
        bVar46 = local_e0 != 0;
        bVar47 = local_f0 != 0;
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        iVar34 = (uint)bVar47 * 8 + (uint)bVar46 * 4;
        iVar42 = (uint)bVar7 * 32;
        local_78 = (vector<ModelVertex, eastl::allocator>*)CONCAT44(local_78._4_4_, iVar42 + iVar34 + 1);
        local_44 = (float)(iVar34 + iVar42 + 3);
        phVar33 = extraout_RDX_04;
        do {
            bVar7 = eastl::operator!=((eastl*)&local_138, (hashtable_iterator_base*)local_128, phVar33);
            if (!bVar7) {
                pPVar29 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                              shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                  (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
                pPVar29->SetPos(0);
                field_16 = 0;
                field_24 = 0;
                *(undefined8*)this = 0;
                field_8 = 0;
                field_32 = 0;
                new (this) DashExportResult();
                field_0 = (byte)local_98 & 1;
                ExportLabelCentres((rseven*)local_268, local_d0->field_32);
                shared_ptr<Array<jag::graphics::LabelData, eastl::allocator>>::operator=(
                    (shared_ptr<Array<jag::graphics::LabelData, eastl::allocator>>*)&field_8, (shared_ptr*)local_268);
                local_268->~shared_ptr();
                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator=(
                    (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&field_24, &local_40);
                local_40.~shared_ptr();
                eastl::hash_map<int, eastl::vector<Mesh, eastl::allocator>, eastl::hash<int>, eastl::equal_to<int>,
                                eastl::allocator, false>::~hash_map(local_2a0);
                return this;
            }
            lVar14 = local_138.HeapBeginPtr();
            pMVar27 = (Mesh*)((lVar14 + 8))->HeapBeginPtr();
            local_c0 = (Mesh*)((lVar14 + 8))->end();
            if (pMVar27 != local_c0) {
                do {
                    local_a0 = pMVar27;
                    new (local_268) Mesh(pMVar27);
                    uVar2 = local_268._0_4_;
                    uVar11 = eastl::vector<ModelFace, eastl::allocator>::size(local_240);
                    uVar12 = ((local_268 + 8))->size();
                    cVar4 = local_174;
                    pPVar29 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                  shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
                    fVar48 = local_44;
                    if (cVar4 == '\0') {
                        fVar48 = (float)(uint)local_78;
                    }
                    PacketT<Array<unsigned char, eastl::allocator>>::p4PlatformEndian<unsigned int>(pPVar29,
                                                                                                    (uint)fVar48);
                    pPVar29 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                  shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
                    PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar29, 0);
                    pPVar29 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                  shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
                    pPVar29->p2PlatformEndian((short)uVar2 + 1);
                    pPVar29 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                  shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
                    pPVar29->p2PlatformEndian(uVar11);
                    lVar14 = local_240->HeapBeginPtr();
                    lVar43 = local_240->end();
                    for (; lVar14 != lVar43; lVar14 = lVar14 + 12) {
                        uVar1 = *(ushort*)(lVar14 + 6);
                        pPVar29 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                      shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                          (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
                        pPVar29->p2PlatformEndian(uVar1);
                    }
                    if (local_174 != '\0') {
                        lVar14 = local_240->HeapBeginPtr();
                        lVar43 = local_240->end();
                        for (; lVar14 != lVar43; lVar14 = lVar14 + 12) {
                            bVar5 = *(byte*)(lVar14 + 8);
                            pPVar29 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                          shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                              (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
                            PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar29, (ulong)bVar5);
                        }
                    }
                    if (local_e0 != 0) {
                        lVar14 = local_240->HeapBeginPtr();
                        lVar43 = local_240->end();
                        for (; lVar14 != lVar43; lVar14 = lVar14 + 12) {
                            uVar1 = *(ushort*)(lVar14 + 10);
                            pPVar29 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                          shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                              (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
                            pPVar29->p2_alt1((uint)uVar1);
                        }
                    }
                    pPVar29 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                  shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
                    PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar29, 1);
                    pPVar29 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                  shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
                    pPVar29->p2PlatformEndian(uVar11 * 3);
                    this_03 = (array<unsigned short, 3ul>*)local_240->HeapBeginPtr();
                    paVar30 = (array<unsigned short, 3ul>*)local_240->end();
                    for (; this_03 != paVar30; this_03 = this_03 + 12) {
                        uVar35 = 0;
                        do {
                            pPVar29 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                          shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                              (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
                            puVar26 = (ushort*)std::array<unsigned short, 3ul>::operator[](this_03, uVar35);
                            pPVar29->p2PlatformEndian(*puVar26);
                            uVar35 = uVar35 + 1;
                        } while (uVar35 != 3);
                    }
                    pPVar29 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                  shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                      (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
                    pPVar29->p2PlatformEndian(uVar12);
                    paVar31 = (array<short, 3ul>*)((local_268 + 8))->HeapBeginPtr();
                    paVar20 = (array<short, 3ul>*)((local_268 + 8))->end();
                    for (; paVar31 != paVar20; paVar31 = paVar31 + 52) {
                        uVar35 = 0;
                        do {
                            pPVar29 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                          shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                              (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
                            puVar26 = (ushort*)std::array<short, 3ul>::operator[](paVar31, uVar35);
                            pPVar29->p2PlatformEndian(*puVar26);
                            uVar35 = uVar35 + 1;
                        } while (uVar35 != 3);
                    }
                    lVar14 = ((local_268 + 8))->HeapBeginPtr();
                    lVar43 = ((local_268 + 8))->end();
                    for (; lVar14 != lVar43; lVar14 = lVar14 + 52) {
                        uVar35 = 0;
                        do {
                            bVar7 = (bool)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
                            std::array<signed char, 3ul>::operator[]((array<signed char, 3ul>*)(lVar14 + 6), uVar35);
                            PacketT<Array<unsigned char, eastl::allocator>>::p1<bool>(bVar7);
                            uVar35 = uVar35 + 1;
                        } while (uVar35 != 3);
                    }
                    lVar14 = ((local_268 + 8))->HeapBeginPtr();
                    lVar43 = ((local_268 + 8))->end();
                    for (; lVar14 != lVar43; lVar14 = lVar14 + 52) {
                        uVar35 = 0;
                        do {
                            bVar7 = (bool)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
                            std::array<signed char, 4ul>::operator[]((array<signed char, 4ul>*)(lVar14 + 9), uVar35);
                            PacketT<Array<unsigned char, eastl::allocator>>::p1<bool>(bVar7);
                            uVar35 = uVar35 + 1;
                        } while (uVar35 != 4);
                    }
                    lVar14 = ((local_268 + 8))->HeapBeginPtr();
                    lVar43 = ((local_268 + 8))->end();
                    for (; lVar14 != lVar43; lVar14 = lVar14 + 52) {
                        uVar35 = 0;
                        do {
                            pPVar29 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                          shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                              (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
                            puVar26 = (ushort*)std::array<unsigned short, 2ul>::operator[](
                                (array<unsigned short, 2ul>*)(lVar14 + 14), uVar35);
                            PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(pPVar29,
                                                                                               (ulong)*puVar26);
                            uVar35 = uVar35 + 1;
                        } while (uVar35 != 2);
                    }
                    if (local_f0 != 0) {
                        lVar14 = ((local_268 + 8))->HeapBeginPtr();
                        lVar43 = ((local_268 + 8))->end();
                        for (; lVar14 != lVar43; lVar14 = lVar14 + 52) {
                            pPVar29 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                          shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                              (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
                            pPVar29->p2_alt1((int)*(short*)(lVar14 + 18));
                        }
                    }
                    if (local_e8 != 0) {
                        pPVar29 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                      shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                                          (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
                        pPVar29->p4_alt1(local_178);
                        paVar31 = (array<short, 3ul>*)((local_268 + 8))->HeapBeginPtr();
                        local_88 = (array<short, 3ul>*)((local_268 + 8))->end();
                        if (paVar31 != local_88) {
                            do {
                                local_68 = paVar31 + 36;
                                uVar35 = 18446744073709551615;
                                local_60 = paVar31;
                                do {
                                    pPVar29 =
                                        (PacketT<Array<unsigned char, eastl::allocator>>*)
                                            shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->((
                                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
                                    uVar18 = uVar35 + 1;
                                    piVar16 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)(paVar31 + 20),
                                                                                     uVar18);
                                    pPVar29->p2_alt1(*piVar16);
                                    if ((*piVar16 == 65535) || (piVar16 = (int*)std::array<int, 4ul>::operator[](
                                                                    (array<int, 4ul>*)local_68, uVar18),
                                                                *piVar16 == 0))
                                        break;
                                    bVar7 = (long)uVar35 < 2;
                                    uVar35 = uVar18;
                                } while (bVar7);
                                paVar31 = local_60 + 52;
                            } while (paVar31 != local_88);
                        }
                        paVar31 = (array<short, 3ul>*)((local_268 + 8))->HeapBeginPtr();
                        local_88 = (array<short, 3ul>*)((local_268 + 8))->end();
                        if (paVar31 != local_88) {
                            do {
                                local_68 = paVar31 + 36;
                                uVar35 = 18446744073709551615;
                                local_60 = paVar31;
                                do {
                                    pPVar29 =
                                        (PacketT<Array<unsigned char, eastl::allocator>>*)
                                            shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->((
                                                shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_40);
                                    uVar18 = uVar35 + 1;
                                    puVar32 =
                                        (uint*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)local_68, uVar18);
                                    PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar29,
                                                                                                       (ulong)*puVar32);
                                    piVar16 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)(paVar31 + 20),
                                                                                     uVar18);
                                    if ((*piVar16 == 65535) || (*puVar32 == 0))
                                        break;
                                    bVar7 = (long)uVar35 < 2;
                                    uVar35 = uVar18;
                                } while (bVar7);
                                paVar31 = local_60 + 52;
                            } while (paVar31 != local_88);
                        }
                    }
                    local_268->~Mesh();
                    pMVar27 = local_a0 + 1;
                } while (pMVar27 != local_c0);
            }
            eastl::hashtable_iterator<eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>,
                                      false, false>::
            operator++(
                (hashtable_iterator<eastl::pair<unsigned int const, eastl::vector<eastl::string, eastl::allocator>>,
                                    false, false>*)&local_138);
            phVar33 = extraout_RDX_05;
            this = local_c8;
        } while (true);
    }

} // namespace jag::oldscape::rseven

namespace jag {
    // 0x1001ca950, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<PacketT<Array<unsigned char, eastl::allocator> > >::type make_shared<PacketT<Array<unsigned char, eastl::allocator> >, unsigned long&>(unsigned long&)
    jag* make_shared<PacketT<Array<unsigned char, eastl::allocator>>, unsigned long&>(ulong* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        PacketT* local_30[2];

        pvVar1 = (void*)aligned_alloc(64, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<PacketT<Array<unsigned char, eastl::allocator>>, unsigned long&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<PacketT<Array<unsigned char, eastl::allocator>>>, int,
                                   PacketT<Array<unsigned char, eastl::allocator>>*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag
