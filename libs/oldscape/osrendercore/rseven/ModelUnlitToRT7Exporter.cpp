// libs/oldscape/osrendercore/rseven/ModelUnlitToRT7Exporter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.osrendercore

#include "ModelUnlitToRT7Exporter.h"

namespace jag::oldscape::rseven {
    // 0x1001c8940
    DashExportResult Export(ModelWrapper& modelWrapper, bool arg2) {
        array<signed char, 3ul>* array;
        array<signed char, 4ul>* this_00;
        unsigned short uVar1;
        uint32_t uVar2;
        SharedArray<std::unique_ptr<rs2lib::worldmap::LocationData>>* pSVar3;
        vector<ModelVertex>* this_01;
        bool cVar4;
        uint8_t bVar5;
        uint8_t bVar6;
        uint16_t uVar7;
        short sVar8;
        uint16_t uVar9;
        unsigned short arg1;
        uint8_t* pbVar11;
        long lVar12;
        float* pfVar13;
        int* piVar14;
        uint16_t* puVar15;
        unsigned long uVar16;
        unsigned long uVar17;
        array<short, 3ul>* paVar18;
        short* psVar19;
        uint8_t* puVar20;
        long lVar21;
        int* piVar22;
        uint32_t* puVar23;
        unsigned short* puVar24;
        Mesh* pMVar25;
        Mesh* pMVar26;
        array<unsigned short, 3ul>* this_02;
        array<unsigned short, 3ul>* paVar28;
        array<short, 3ul>* paVar29;
        schar* psVar30;
        ID* pIVar31;
        uint64_t in_register_00000011;
        int iVar32;
        unsigned long uVar33;
        long* plVar34;
        long lVar35;
        long lVar36;
        long* plVar37;
        long lVar38;
        long lVar39;
        int iVar40;
        Layout* this_03;
        Array<signed char>* this_04;
        vector<Mesh>* this_05;
        long lVar41;
        uint8_t uVar42;
        int iVar43;
        unsigned long unaff_R15;
        float fVar47;
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
        uint8_t local_268[40];
        vector<ModelFace> local_240;
        int local_178;
        char local_174;
        SharedArray<std::unique_ptr<rs2lib::worldmap::LocationData>>* local_170;
        Array<signed char>* local_168;
        shared_ptr<signed char[]>* local_160;
        long* local_158;
        long* local_150;
        long* local_148;
        long* local_140;
        ReturnValue local_138;
        uint32_t local_130;
        float local_110;
        float local_10c;
        float local_108;
        float local_104;
        float local_100;
        float local_fc;
        hashtable<int, int, eastl::allocator, eastl::use_self<int>, eastl::equal_to<int>, eastl::hash<int>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, false, true>*
            local_f8;
        float* local_d8;
        Mesh* local_c0;
        unsigned long local_b8;
        float local_ac;
        float local_a8;
        float local_a4;
        Mesh* local_a0;
        unsigned int local_98;
        float local_94;
        unsigned long local_90;
        array<short, 3ul>* local_88;
        array<unsigned short, 3ul>* local_80;
        vector<ModelVertex>* local_78;
        float local_6c;
        array<short, 3ul>* local_68;
        array<short, 3ul>* local_60;
        float local_54;
        unsigned long local_50;
        float local_44;

        uint32_t local_114 = (uint32_t)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2);
        if (modelWrapper.field_44 == '\0') {
            LogAssert("model.m_forRSeven",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                      "rseven/ModelUnlitToRT7Exporter.cpp",
                      184, nullptr);
        }
        new (local_268) eastl::allocator("EASTL hash_map");
        hash_map<int, eastl::vector<Mesh>> local_2a0(*local_268);
        long local_f0 = modelWrapper.field_200;
        long local_e0 = modelWrapper.field_208;
        long local_e8 = modelWrapper.field_216;
        ModelWrapper* local_d0 = modelWrapper;
        DashExportResult* local_c8 = &result;
        if ((int)modelWrapper.field_40 < 1) {
            local_98 = 0;
        } else {
            this_04 = (Array<signed char>*)modelWrapper.field_48;
            local_170 = (SharedArray<std::unique_ptr<rs2lib::worldmap::LocationData>>*)&modelWrapper.field_56;
            local_160 = (shared_ptr<signed char[]>*)&modelWrapper.field_64;
            local_158 = &modelWrapper.field_112;
            local_150 = &modelWrapper.field_104;
            local_148 = &modelWrapper.field_184;
            local_140 = &modelWrapper.field_192;
            local_50 = 0;
            local_98 = 0;
            local_168 = this_04;
            do {
                if (this_04 == nullptr) {
                    fVar47 = 0.0;
                LAB_1001c8ab9:
                    pSVar3 = local_170;
                    cVar4 = local_170->empty();
                    if (!cVar4) {
                        if (*(unsigned long*)pSVar3 <= local_50) {
                            LogAssert("(index < m_Size)",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                      "SharedArray.h",
                                      299, "Index of %d outside range 0 to %d", local_50, *(unsigned long*)pSVar3 - 1);
                        }
                        pbVar11 = (uint8_t*)(*local_160)[local_50];
                        bVar5 = *pbVar11;
                    } else {
                        bVar5 = 0;
                    }
                    bVar6 = bVar5 - 2;
                    if ((char)local_114 == '\0') {
                        bVar6 = bVar5;
                    }
                    local_54 = (float)(unsigned int)bVar6;
                    if (modelWrapper.field_80 == 0) {
                        local_94 = -NAN;
                    } else {
                        local_94 = (float)(int)*(short*)(modelWrapper.field_80 + local_50 * 2);
                    }
                    local_128[0]._0_4_ = (unsigned int)local_94 & 65535;
                    local_44 = fVar47;
                    if (modelWrapper.field_88 == 0) {
                        local_6c = (float)(((uint32_t)local_6c._1_3_ << 8) | (uint8_t)255);
                        uVar42 = 0;
                    } else {
                        bVar5 = *(uint8_t*)(modelWrapper.field_88 + local_50);
                        local_6c = (float)(((uint32_t)local_6c._1_3_ << 8) | (uint8_t)255);
                        unaff_R15 = 0;
                        if ((uint8_t)(bVar5 + 2) < 2)
                            goto LAB_1001c8a70;
                        if (bVar5 == 0) {
                            if (local_e0 != 0) {
                                local_128[0]._0_4_ = (*(unsigned int*)(modelWrapper.field_208 + local_50 * 4) & 255)
                                                         << 16 |
                                                     local_128[0]._0_4_;
                            }
                            uVar42 = 0;
                        } else {
                            local_128[0]._0_4_ = local_128[0]._0_4_ | 1073741824;
                            uVar42 = 1;
                            local_6c = (float)(((uint32_t)local_6c._1_3_ << 8) | (uint8_t)(~bVar5));
                        }
                    }
                    local_40 = local_2a0.find(local_128);
                    *local_268 = local_2a0.end();
                    cVar4 = local_40 != *local_268;
                    if (!cVar4) {
                        this_05 = &local_2a0[local_128];
                    } else {
                        lVar12 = local_40.HeapBeginPtr();
                        this_05 = (vector<Mesh>*)(lVar12 + 8);
                    }
                    lVar12 = this_05->size();
                    uVar33 = local_50;
                    if (lVar12 == 0) {
                    LAB_1001c8cd0:
                        pfVar13 = (float*)this_05->push_back();
                        ((pfVar13 + 10))->reserve((long)(int)modelWrapper.field_40 - (long)(int)uVar33);
                        ((pfVar13 + 2))->reserve(((long)(int)modelWrapper.field_40 - (long)(int)uVar33) * 3);
                        *pfVar13 = local_94;
                        *(uint8_t*)(pfVar13 + 61) = uVar42;
                        pfVar13[60] = 0.0;
                    } else {
                        lVar12 = this_05->back();
                        lVar12 = ((lVar12 + 72))->size();
                        if (56 < lVar12 + 3U)
                            goto LAB_1001c8cd0;
                        lVar12 = this_05->back();
                        lVar12 = ((lVar12 + 128))->size();
                        if (56 < lVar12 + 12U)
                            goto LAB_1001c8cd0;
                        lVar12 = this_05->back();
                        lVar12 = ((lVar12 + 184))->size();
                        if (32 < lVar12 + 1U)
                            goto LAB_1001c8cd0;
                        pfVar13 = (float*)this_05->back();
                    }
                    local_d8 = pfVar13;
                    local_80 = (array<unsigned short, 3ul>*)((pfVar13 + 10))->push_back();
                    local_138._0_4_ = *(uint32_t*)(modelWrapper.field_96 + uVar33 * 4);
                    local_138._4_4_ = *(uint32_t*)(modelWrapper.field_112 + uVar33 * 4);
                    local_130 = *(uint32_t*)(modelWrapper.field_104 + uVar33 * 4);
                    if (local_e0 != 0) {
                        *(uint16_t*)(local_80 + 10) = *(uint16_t*)(modelWrapper.field_208 + uVar33 * 4);
                        eastl::hashtable<int, int, eastl::allocator, eastl::use_self<int>, eastl::equal_to<int>,
                                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                         eastl::prime_rehash_policy, false, false, true>::insert(*local_268);
                    }
                    local_78 = (vector<ModelVertex>*)(local_d8 + 2);
                    local_f8 = (hashtable<int, int, eastl::allocator, eastl::use_self<int>, eastl::equal_to<int>,
                                          eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                          eastl::prime_rehash_policy, false, false, true>*)(local_d8 + 18);
                    local_c0 = (Mesh*)(local_d8 + 32);
                    uVar33 = 0;
                    do {
                        piVar14 = &local_138[uVar33];
                        this_01 = local_78;
                        local_68 = (array<short, 3ul>*)(long)*piVar14;
                        uVar7 = local_78->size();
                        local_b8 = uVar33;
                        puVar15 = (uint16_t*)(*local_80)[uVar33];
                        *puVar15 = uVar7;
                        uVar16 = this_01->size();
                        uVar17 = this_01->capacity();
                        uVar33 = local_50;
                        if (uVar17 <= uVar16) {
                            LogAssert("mesh->m_vertices.size() < mesh->m_vertices.capacity()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                      "osrendercore/rseven/ModelUnlitToRT7Exporter.cpp",
                                      312, nullptr);
                        }
                        paVar18 = (array<short, 3ul>*)local_78->push_back();
                        paVar29 = local_68;
                        uVar7 = *(uint16_t*)(modelWrapper.field_120 + (long)local_68 * 4);
                        puVar15 = (uint16_t*)(*paVar18)[0];
                        *puVar15 = uVar7;
                        sVar8 = *(short*)(modelWrapper.field_128 + (long)paVar29 * 4);
                        psVar19 = (short*)(*paVar18)[1];
                        *psVar19 = -sVar8;
                        uVar7 = *(uint16_t*)(modelWrapper.field_136 + (long)paVar29 * 4);
                        local_60 = paVar18;
                        puVar15 = (uint16_t*)(*paVar18)[2];
                        paVar18 = local_60;
                        *puVar15 = uVar7;
                        if (local_44._0_1_ == '\0') {
                            lVar12 = modelWrapper.field_152;
                            lVar41 = (long)paVar29 * 16;
                            if (*(int*)(lVar12 + 12 + lVar41) < 1) {
                                LogAssert("pointNormal.m_c > 0",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "oldscape/osrendercore/rseven/ModelUnlitToRT7Exporter.cpp",
                                          323, nullptr);
                            }
                            iVar40 = *(int*)(lVar12 + lVar41 + 12) << 8;
                            unaff_R15 = (long)(*(int*)(lVar12 + lVar41) * 127) / (long)iVar40 & 4294967295;
                            iVar32 = (*(int*)(lVar12 + 4 + lVar41) * -127) / iVar40;
                            lVar12 = lVar12 + lVar41;
                        } else {
                            lVar12 = modelWrapper.field_144;
                            iVar32 = *(int*)(lVar12 + 4 + uVar33 * 12);
                            iVar40 = *(int*)(lVar12 + uVar33 * 12) * 127;
                            iVar43 = iVar40 + 255;
                            if (-1 < iVar40) {
                                iVar43 = iVar40;
                            }
                            unaff_R15 = (unsigned long)(unsigned int)(iVar43 >> 8);
                            iVar40 = iVar32 * -127;
                            iVar32 = iVar32 * -127 + 255;
                            if (-1 < iVar40) {
                                iVar32 = iVar40;
                            }
                            iVar32 = iVar32 >> 8;
                            lVar12 = lVar12 + uVar33 * 12;
                            iVar40 = 256;
                        }
                        lVar12 = (long)(*(int*)(lVar12 + 8) * 127) / (long)iVar40;
                        iVar40 = (int)lVar12;
                        local_98 = local_98 & 255;
                        if ((unsigned int)(iVar40 * iVar40 + iVar32 * iVar32 + (int)unaff_R15 * (int)unaff_R15) <
                            1024) {
                            local_98 = 1;
                        }
                        array = (array<signed char, 3ul>*)(local_60 + 6);
                        puVar20 = (uint8_t*)(*array)[0];
                        *puVar20 = (char)unaff_R15;
                        puVar20 = (uint8_t*)(*array)[1];
                        *puVar20 = (char)iVar32;
                        puVar20 = (uint8_t*)(*array)[2];
                        *puVar20 = (char)lVar12;
                        this_00 = (array<signed char, 4ul>*)(paVar18 + 9);
                        puVar20 = (uint8_t*)(*this_00)[0];
                        *puVar20 = (uint8_t)local_54;
                        puVar20 = (uint8_t*)(*this_00)[1];
                        *puVar20 = (uint8_t)local_44;
                        puVar20 = (uint8_t*)(*this_00)[2];
                        *puVar20 = 0;
                        puVar20 = (uint8_t*)(*this_00)[3];
                        paVar29 = local_68;
                        &result = local_c8;
                        modelWrapper = local_d0;
                        *puVar20 = 0;
                        if (local_f0 != 0) {
                            sVar8 = (short)*(uint32_t*)(local_d0->field_200 + (long)local_68 * 4);
                            *(short*)(paVar18 + 18) = sVar8;
                            local_90 = (((uint64_t)local_90._4_4_ << 32) | (uint32_t)((int)sVar8));
                            *local_268 = local_f8->insert(local_90);
                        }
                        if (local_e8 != 0) {
                            local_88 = paVar18 + 36;
                            lVar41 = (long)paVar29 * 24;
                            lVar12 = ((modelWrapper.field_216 + lVar41))->end();
                            if (lVar12 == 0) {
                                unaff_R15 = 0;
                            LAB_1001c9249:
                                puVar23 = (uint32_t*)(*local_88)[unaff_R15 - 1];
                                *puVar23 = 0;
                            } else {
                                local_60 = paVar18 + 20;
                                uVar33 = 1;
                                do {
                                    unaff_R15 = uVar33;
                                    local_a0 = (Mesh*)(((uint64_t)local_a0._1_7_ << 8) | (uint8_t)1);
                                    lVar12 = (long)local_68 * 24;
                                    lVar21 = ((modelWrapper.field_216 + lVar12))->end();
                                    lVar12 = ((lVar12 + modelWrapper.field_224))->end();
                                    if (lVar21 != lVar12) {
                                        LogAssert(
                                            "model.m_skin[pointIdx].size() == model.m_skinWeight[pointIdx].size()",
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "oldscape/osrendercore/rseven/ModelUnlitToRT7Exporter.cpp",
                                            368, nullptr);
                                    }
                                    uVar33 = unaff_R15 - 1;
                                    piVar14 = (int*)(*((modelWrapper.field_216 + lVar41)))[uVar33];
                                    iVar32 = *piVar14;
                                    piVar14 = (int*)(*local_60)[uVar33];
                                    *piVar14 = iVar32;
                                    piVar22 = (int*)(*((local_d0->field_224 + lVar41)))[uVar33];
                                    iVar32 = *piVar22;
                                    piVar22 = (int*)(*local_88)[uVar33];
                                    *piVar22 = iVar32;
                                    eastl::hashtable<int, int, eastl::allocator, eastl::use_self<int>,
                                                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
                                                     false, true>::insert(*local_268);
                                    &result = local_c8;
                                    modelWrapper = local_d0;
                                    if (*piVar14 == 65535) {
                                        if (((unsigned long)local_a0 & 1) != 0)
                                            goto LAB_1001c8dd0;
                                        goto LAB_1001c9249;
                                    }
                                    if (*piVar22 == 0) {
                                        bVar5 = (uint8_t)local_a0;
                                        goto LAB_1001c9240;
                                    }
                                    uVar16 = ((local_d0->field_216 + lVar41))->end();
                                    uVar33 = unaff_R15 + 1;
                                } while (unaff_R15 < uVar16);
                                bVar5 = 0;
                            LAB_1001c9240:
                                if ((bVar5 & 1) == 0)
                                    goto LAB_1001c9249;
                            }
                        LAB_1001c8dd0:
                            local_d8[60] = (float)((int)local_d8[60] + (int)unaff_R15);
                        }
                        uVar33 = local_b8 + 1;
                    } while (uVar33 != 3);
                    *(uint16_t*)(local_80 + 6) = *(uint16_t*)(modelWrapper.field_160 + local_50 * 4);
                    local_80[8] = local_6c._0_1_;
                    if ((int)local_94 < 0) {
                        uVar7 = types::FloatToFloat16(0.0);
                        uVar9 = types::FloatToFloat16(0.0);
                        puVar24 = (unsigned short*)(*local_80)[0];
                        lVar12 = (*local_78)[(unsigned long)*puVar24];
                        *(uint16_t*)(lVar12 + 14) = uVar7;
                        *(uint16_t*)(lVar12 + 16) = uVar9;
                        uVar7 = types::FloatToFloat16(0.0);
                        uVar9 = types::FloatToFloat16(0.0);
                        puVar24 = (unsigned short*)(*local_80)[2];
                        lVar12 = (*local_78)[(unsigned long)*puVar24];
                        *(uint16_t*)(lVar12 + 14) = uVar7;
                        *(uint16_t*)(lVar12 + 16) = uVar9;
                        uVar7 = types::FloatToFloat16(0.0);
                        uVar9 = types::FloatToFloat16(0.0);
                        puVar24 = (unsigned short*)(*local_80)[1];
                        lVar12 = (*local_78)[(unsigned long)*puVar24];
                    } else {
                        if ((modelWrapper.field_168 == 0) ||
                            (uVar33 = (unsigned long)*(uint8_t*)(modelWrapper.field_168 + local_50), uVar33 == 255)) {
                            piVar14 = (int*)(local_50 * 4 + modelWrapper.field_96);
                            plVar34 = local_158;
                            uVar33 = local_50;
                            plVar37 = local_150;
                        } else {
                            piVar14 = (int*)(uVar33 * 4 + modelWrapper.field_176);
                            plVar34 = local_140;
                            plVar37 = local_148;
                        }
                        lVar35 = (long)*piVar14;
                        lVar12 = modelWrapper.field_120;
                        local_44 = (float)*(int*)(lVar12 + lVar35 * 4);
                        lVar41 = modelWrapper.field_128;
                        fVar49 = (float)*(int*)(lVar41 + lVar35 * 4);
                        lVar21 = modelWrapper.field_136;
                        fVar47 = (float)*(int*)(lVar21 + lVar35 * 4);
                        lVar36 = (long)*(int*)(*plVar37 + uVar33 * 4);
                        lVar35 = (long)*(int*)(*plVar34 + uVar33 * 4);
                        local_110 = (float)*(int*)(lVar12 + lVar36 * 4) - local_44;
                        local_10c = (float)*(int*)(lVar41 + lVar36 * 4) - fVar49;
                        fVar56 = (float)*(int*)(lVar21 + lVar36 * 4) - fVar47;
                        fVar55 = (float)*(int*)(lVar12 + lVar35 * 4) - local_44;
                        fVar54 = (float)*(int*)(lVar41 + lVar35 * 4) - fVar49;
                        local_94 = (float)*(int*)(lVar21 + lVar35 * 4) - fVar47;
                        lVar35 = (long)*(int*)(modelWrapper.field_96 + local_50 * 4);
                        local_6c = (float)*(int*)(lVar12 + lVar35 * 4) - local_44;
                        lVar36 = (long)*(int*)(modelWrapper.field_104 + local_50 * 4);
                        fVar57 = (float)*(int*)(lVar41 + lVar35 * 4) - fVar49;
                        local_54 = (float)*(int*)(lVar21 + lVar35 * 4) - fVar47;
                        local_fc = (float)*(int*)(lVar12 + lVar36 * 4) - local_44;
                        local_100 = (float)*(int*)(lVar41 + lVar36 * 4) - fVar49;
                        fVar51 = (float)*(int*)(lVar21 + lVar36 * 4) - fVar47;
                        local_88 = (array<short, 3ul>*)(((uint64_t)local_88._4_4_ << 32) | (uint32_t)fVar51);
                        lVar35 = (long)*(int*)(modelWrapper.field_112 + local_50 * 4);
                        local_44 = (float)*(int*)(lVar12 + lVar35 * 4) - local_44;
                        fVar49 = (float)*(int*)(lVar41 + lVar35 * 4) - fVar49;
                        local_c0 = (Mesh*)(((uint64_t)local_c0._4_4_ << 32) | (uint32_t)fVar49);
                        fVar47 = (float)*(int*)(lVar21 + lVar35 * 4) - fVar47;
                        local_a0 = (Mesh*)(((uint64_t)local_a0._4_4_ << 32) | (uint32_t)fVar47);
                        local_108 = local_94 * local_10c - fVar54 * fVar56;
                        fVar52 = fVar55 * fVar56 - local_94 * local_110;
                        local_104 = fVar54 * local_110 - fVar55 * local_10c;
                        fVar48 = local_104 * fVar54 - fVar52 * local_94;
                        fVar50 = local_108 * local_94 - local_104 * fVar55;
                        local_f8 =
                            (hashtable<int, int, eastl::allocator, eastl::use_self<int>, eastl::equal_to<int>,
                                       eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                       eastl::prime_rehash_policy, false, false, true>*)(((uint64_t)local_f8._4_4_
                                                                                          << 32) |
                                                                                         (uint32_t)fVar55);
                        fVar55 = fVar52 * fVar55 - local_108 * fVar54;
                        fVar53 = 1.0 / (fVar55 * fVar56 + fVar50 * local_10c + fVar48 * local_110);
                        local_d8 = (float*)(((uint64_t)local_d8._4_4_ << 32) | (uint32_t)fVar57);
                        local_268._0_4_ = (local_54 * fVar55 + fVar50 * fVar57 + fVar48 * local_6c) * fVar53;
                        local_ac = (fVar55 * fVar47 + fVar50 * fVar49 + fVar48 * local_44) * fVar53;
                        local_a8 = 0.0;
                        local_a4 = 1.0;
                        local_90._0_4_ = (fVar51 * fVar55 + local_100 * fVar50 + local_fc * fVar48) * fVar53;
                        local_b8._0_4_ = fVar54;
                        local_68._0_4_ = fVar56;
                        local_60._0_4_ = fVar52;
                        local_268._0_4_ = jag::math::Clamp<float>(*local_268, local_a8, local_a4);
                        local_a8 = 0.0;
                        local_a4 = 1.0;
                        fVar47 = jag::math::Clamp<float>(local_90, local_a8, local_a4);
                        local_90 = (((uint64_t)local_90._4_4_ << 32) | (uint32_t)fVar47);
                        local_a8 = 0.0;
                        local_a4 = 1.0;
                        local_ac = jag::math::Clamp<float>(local_ac, local_a8, local_a4);
                        uVar7 = types::FloatToFloat16((float)local_268._0_4_);
                        fVar50 = local_104 * local_10c - local_60._0_4_ * local_68._0_4_;
                        fVar48 = local_68._0_4_ * local_108 - local_104 * local_110;
                        fVar47 = local_60._0_4_ * local_110 - local_108 * local_10c;
                        fVar49 = 1.0 / (local_94 * fVar47 + (float)local_b8 * fVar48 + local_f8._0_4_ * fVar50);
                        local_b8 = (((uint64_t)local_b8._4_4_ << 32) | (uint32_t)fVar50);
                        local_68 = (array<short, 3ul>*)(((uint64_t)local_68._4_4_ << 32) | (uint32_t)fVar48);
                        local_60 = (array<short, 3ul>*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)fVar47);
                        fVar47 = local_54 * fVar47;
                        local_54 = fVar49;
                        uVar9 = types::FloatToFloat16((fVar47 + local_d8._0_4_ * fVar48 + local_6c * fVar50) * fVar49);
                        puVar24 = (unsigned short*)(*local_80)[0];
                        lVar12 = (*local_78)[(unsigned long)*puVar24];
                        *(uint16_t*)(lVar12 + 14) = uVar7;
                        *(uint16_t*)(lVar12 + 16) = uVar9;
                        uVar7 = types::FloatToFloat16((float)local_90);
                        uVar9 = types::FloatToFloat16((local_88._0_4_ * local_60._0_4_ + local_100 * local_68._0_4_ +
                                                       local_fc * (float)local_b8) *
                                                      local_54);
                        puVar24 = (unsigned short*)(*local_80)[2];
                        lVar12 = (*local_78)[(unsigned long)*puVar24];
                        *(uint16_t*)(lVar12 + 14) = uVar7;
                        *(uint16_t*)(lVar12 + 16) = uVar9;
                        uVar7 = types::FloatToFloat16(local_ac);
                        uVar9 = types::FloatToFloat16((local_a0._0_4_ * local_60._0_4_ +
                                                       local_c0._0_4_ * local_68._0_4_ + local_44 * (float)local_b8) *
                                                      local_54);
                        puVar24 = (unsigned short*)(*local_80)[1];
                        lVar12 = (*local_78)[(unsigned long)*puVar24];
                    }
                    *(uint16_t*)(lVar12 + 14) = uVar7;
                    *(uint16_t*)(lVar12 + 16) = uVar9;
                    this_04 = local_168;
                } else {
                    pbVar11 = (uint8_t*)(*this_04)[local_50];
                    unaff_R15 = (((uint64_t)((int64_t)(unaff_R15 >> 8)) << 8) | (uint8_t)(*pbVar11));
                    fVar47 = (float)unaff_R15;
                    if (*pbVar11 < 2)
                        goto LAB_1001c8ab9;
                }
            LAB_1001c8a70:
                local_50 = local_50 + 1;
            } while ((long)local_50 < (long)(int)modelWrapper.field_40);
        }
        *local_268 = local_2a0.begin();
        auto local_40 = local_2a0.end();
        while (cVar4 = *local_268 != local_40, cVar4) {
            lVar12 = local_268->HeapBeginPtr();
            this_03 = (Layout*)(lVar12 + 8);
            for (pMVar25 = (Mesh*)this_03->HeapBeginPtr(); pMVar26 = (Mesh*)this_03->end(), pMVar25 != pMVar26;
                 pMVar25 = pMVar25 + 1) {
                cVar4 = pMVar25->field_40.empty();
                if (cVar4) {
                    this_03->erase(pMVar25);
                }
            }
            ++*local_268;
        }
        local_90 = 8;
        *local_268 = local_2a0.begin();
        local_40 = local_2a0.end();
        unsigned short uVar10 = 0;
        while (cVar4 = *local_268 != local_40, cVar4) {
            lVar41 = local_268->HeapBeginPtr();
            lVar12 = ((lVar41 + 8))->HeapBeginPtr();
            lVar41 = ((lVar41 + 8))->end();
            for (; lVar12 != lVar41; lVar12 = lVar12 + 248) {
                lVar35 = ((lVar12 + 40))->size();
                lVar36 = ((lVar12 + 8))->size();
                lVar21 = lVar35 * 2;
                if (local_e0 == 0) {
                    lVar21 = 0;
                }
                lVar39 = lVar36 * 2;
                if (local_f0 == 0) {
                    lVar39 = 0;
                }
                if (local_e8 == 0) {
                    lVar38 = 0;
                } else {
                    lVar38 = (long)*(int*)(lVar12 + 240) * 3 + 4;
                }
                local_90 = local_90 + lVar35 * 2 + lVar21 + lVar36 * 17 + lVar39 +
                           lVar35 * ((unsigned long)*(uint8_t*)(lVar12 + 244) | 6) + lVar38 + 14;
                uVar10 = uVar10 + 1;
            }
            ++*local_268;
            &result = local_c8;
        }
        make_shared<PacketT<Array<unsigned char>>, unsigned long&>(&local_40, &local_90);
        auto pPVar27 = local_40.operator->();
        pPVar27->p1<unsigned long>(2);
        pPVar27 = (PacketT<Array<unsigned char>>*)local_40.operator->();
        pPVar27->p1<unsigned long>(4);
        pPVar27 = (PacketT<Array<unsigned char>>*)local_40.operator->();
        pPVar27->p1<unsigned long>(0);
        pPVar27 = (PacketT<Array<unsigned char>>*)local_40.operator->();
        pPVar27->p2PlatformEndian(uVar10);
        pPVar27 = (PacketT<Array<unsigned char>>*)local_40.operator->();
        pPVar27->p1<unsigned long>(0);
        pPVar27 = (PacketT<Array<unsigned char>>*)local_40.operator->();
        pPVar27->p1<unsigned long>(0);
        pPVar27 = (PacketT<Array<unsigned char>>*)local_40.operator->();
        pPVar27->p1<unsigned long>(0);
        bool bVar44 = local_e8 != 0;
        bool bVar45 = local_e0 != 0;
        bool bVar46 = local_f0 != 0;
        local_138 = local_2a0.begin();
        auto local_128 = local_2a0.end();
        iVar32 = (unsigned int)bVar46 * 8 + (unsigned int)bVar45 * 4;
        iVar40 = (unsigned int)bVar44 * 32;
        local_78 = (vector<ModelVertex>*)(((uint64_t)local_78._4_4_ << 32) | (uint32_t)(iVar40 + iVar32 + 1));
        local_44 = (float)(iVar32 + iVar40 + 3);
        do {
            cVar4 = local_138 != local_128;
            if (!cVar4) {
                pPVar27 = (PacketT<Array<unsigned char>>*)local_40.operator->();
                pPVar27->SetPos(0);
                *(uint64_t*)&result.field_16 = 0;
                *(uint64_t*)&result.field_24 = 0;
                result = 0;
                *(uint64_t*)&result.field_8 = 0;
                *(uint64_t*)(&result + 1) = 0;
                DashExportResult result;
                result.field_0 = (uint8_t)local_98 & 1;
                ExportLabelCentres((ReturnValue*)local_268, local_d0->field_32);
                result.field_8 = *local_268;
                result.field_24 = local_40;
                return result;
            }
            lVar12 = local_138.HeapBeginPtr();
            pMVar25 = (Mesh*)((lVar12 + 8))->HeapBeginPtr();
            local_c0 = (Mesh*)((lVar12 + 8))->end();
            if (pMVar25 != local_c0) {
                do {
                    local_a0 = pMVar25;
                    new (local_268) Mesh(*pMVar25);
                    uVar2 = local_268._0_4_;
                    uVar10 = local_240.size();
                    arg1 = ((local_268 + 8))->size();
                    cVar4 = local_174;
                    pPVar27 = (PacketT<Array<unsigned char>>*)local_40.operator->();
                    fVar47 = local_44;
                    if (!cVar4) {
                        fVar47 = (float)(unsigned int)local_78;
                    }
                    pPVar27->p4PlatformEndian<unsigned int>((unsigned int)fVar47);
                    pPVar27 = (PacketT<Array<unsigned char>>*)local_40.operator->();
                    pPVar27->p1<unsigned long>(0);
                    pPVar27 = (PacketT<Array<unsigned char>>*)local_40.operator->();
                    pPVar27->p2PlatformEndian((short)uVar2 + 1);
                    pPVar27 = (PacketT<Array<unsigned char>>*)local_40.operator->();
                    pPVar27->p2PlatformEndian(uVar10);
                    lVar12 = local_240.HeapBeginPtr();
                    lVar41 = local_240.end();
                    for (; lVar12 != lVar41; lVar12 = lVar12 + 12) {
                        uVar1 = *(unsigned short*)(lVar12 + 6);
                        pPVar27 = (PacketT<Array<unsigned char>>*)local_40.operator->();
                        pPVar27->p2PlatformEndian(uVar1);
                    }
                    if (local_174 != '\0') {
                        lVar12 = local_240.HeapBeginPtr();
                        lVar41 = local_240.end();
                        for (; lVar12 != lVar41; lVar12 = lVar12 + 12) {
                            bVar5 = *(uint8_t*)(lVar12 + 8);
                            pPVar27 = (PacketT<Array<unsigned char>>*)local_40.operator->();
                            pPVar27->p1<unsigned long>((unsigned int)bVar5);
                        }
                    }
                    if (local_e0 != 0) {
                        lVar12 = local_240.HeapBeginPtr();
                        lVar41 = local_240.end();
                        for (; lVar12 != lVar41; lVar12 = lVar12 + 12) {
                            uVar1 = *(unsigned short*)(lVar12 + 10);
                            pPVar27 = (PacketT<Array<unsigned char>>*)local_40.operator->();
                            pPVar27->p2_alt1((unsigned int)uVar1);
                        }
                    }
                    pPVar27 = (PacketT<Array<unsigned char>>*)local_40.operator->();
                    pPVar27->p1<unsigned long>(1);
                    pPVar27 = (PacketT<Array<unsigned char>>*)local_40.operator->();
                    pPVar27->p2PlatformEndian(uVar10 * 3);
                    this_02 = (array<unsigned short, 3ul>*)local_240.HeapBeginPtr();
                    paVar28 = (array<unsigned short, 3ul>*)local_240.end();
                    for (; this_02 != paVar28; this_02 = this_02 + 12) {
                        uVar33 = 0;
                        do {
                            pPVar27 = (PacketT<Array<unsigned char>>*)local_40.operator->();
                            puVar24 = (unsigned short*)(*this_02)[uVar33];
                            pPVar27->p2PlatformEndian(*puVar24);
                            uVar33 = uVar33 + 1;
                        } while (uVar33 != 3);
                    }
                    pPVar27 = (PacketT<Array<unsigned char>>*)local_40.operator->();
                    pPVar27->p2PlatformEndian(arg1);
                    paVar29 = (array<short, 3ul>*)((local_268 + 8))->HeapBeginPtr();
                    paVar18 = (array<short, 3ul>*)((local_268 + 8))->end();
                    for (; paVar29 != paVar18; paVar29 = paVar29 + 52) {
                        uVar33 = 0;
                        do {
                            pPVar27 = (PacketT<Array<unsigned char>>*)local_40.operator->();
                            puVar24 = (unsigned short*)(*paVar29)[uVar33];
                            pPVar27->p2PlatformEndian(*puVar24);
                            uVar33 = uVar33 + 1;
                        } while (uVar33 != 3);
                    }
                    lVar12 = ((local_268 + 8))->HeapBeginPtr();
                    lVar41 = ((local_268 + 8))->end();
                    for (; lVar12 != lVar41; lVar12 = lVar12 + 52) {
                        uVar33 = 0;
                        do {
                            pPVar27 = (PacketT<Array<unsigned char>>*)local_40.operator->();
                            psVar30 = (schar*)(*((lVar12 + 6)))[uVar33];
                            pPVar27->p1<bool>(*psVar30);
                            uVar33 = uVar33 + 1;
                        } while (uVar33 != 3);
                    }
                    lVar12 = ((local_268 + 8))->HeapBeginPtr();
                    lVar41 = ((local_268 + 8))->end();
                    for (; lVar12 != lVar41; lVar12 = lVar12 + 52) {
                        uVar33 = 0;
                        do {
                            pPVar27 = (PacketT<Array<unsigned char>>*)local_40.operator->();
                            psVar30 = (schar*)(*((lVar12 + 9)))[uVar33];
                            pPVar27->p1<bool>(*psVar30);
                            uVar33 = uVar33 + 1;
                        } while (uVar33 != 4);
                    }
                    lVar12 = ((local_268 + 8))->HeapBeginPtr();
                    lVar41 = ((local_268 + 8))->end();
                    for (; lVar12 != lVar41; lVar12 = lVar12 + 52) {
                        uVar33 = 0;
                        do {
                            pPVar27 = (PacketT<Array<unsigned char>>*)local_40.operator->();
                            puVar24 = (unsigned short*)(*((lVar12 + 14)))[uVar33];
                            pPVar27->p2<unsigned long>(*puVar24);
                            uVar33 = uVar33 + 1;
                        } while (uVar33 != 2);
                    }
                    if (local_f0 != 0) {
                        lVar12 = ((local_268 + 8))->HeapBeginPtr();
                        lVar41 = ((local_268 + 8))->end();
                        for (; lVar12 != lVar41; lVar12 = lVar12 + 52) {
                            pPVar27 = (PacketT<Array<unsigned char>>*)local_40.operator->();
                            pPVar27->p2_alt1((int)*(short*)(lVar12 + 18));
                        }
                    }
                    if (local_e8 != 0) {
                        pPVar27 = (PacketT<Array<unsigned char>>*)local_40.operator->();
                        pPVar27->p4_alt1(local_178);
                        paVar29 = (array<short, 3ul>*)((local_268 + 8))->HeapBeginPtr();
                        local_88 = (array<short, 3ul>*)((local_268 + 8))->end();
                        if (paVar29 != local_88) {
                            do {
                                local_68 = paVar29 + 36;
                                uVar33 = 18446744073709551615;
                                local_60 = paVar29;
                                do {
                                    pPVar27 = (PacketT<Array<unsigned char>>*)local_40.operator->();
                                    uVar16 = uVar33 + 1;
                                    piVar14 = (int*)(*((paVar29 + 20)))[uVar16];
                                    pPVar27->p2_alt1(*piVar14);
                                    if ((*piVar14 == 65535) || (piVar14 = (int*)(*local_68)[uVar16], *piVar14 == 0))
                                        break;
                                    bVar44 = (long)uVar33 < 2;
                                    uVar33 = uVar16;
                                } while (bVar44);
                                paVar29 = local_60 + 52;
                            } while (paVar29 != local_88);
                        }
                        paVar29 = (array<short, 3ul>*)((local_268 + 8))->HeapBeginPtr();
                        local_88 = (array<short, 3ul>*)((local_268 + 8))->end();
                        if (paVar29 != local_88) {
                            do {
                                local_68 = paVar29 + 36;
                                uVar33 = 18446744073709551615;
                                local_60 = paVar29;
                                do {
                                    pPVar27 = (PacketT<Array<unsigned char>>*)local_40.operator->();
                                    uVar16 = uVar33 + 1;
                                    pIVar31 = (ID*)(*local_68)[uVar16];
                                    pPVar27->p1<unsigned long>(*pIVar31);
                                    piVar14 = (int*)(*((paVar29 + 20)))[uVar16];
                                    if ((*piVar14 == 65535) || (*pIVar31 == 0))
                                        break;
                                    bVar44 = (long)uVar33 < 2;
                                    uVar33 = uVar16;
                                } while (bVar44);
                                paVar29 = local_60 + 52;
                            } while (paVar29 != local_88);
                        }
                    }
                    pMVar25 = local_a0 + 1;
                } while (pMVar25 != local_c0);
            }
            ++local_138;
            &result = local_c8;
        } while (true);
    }

} // namespace jag::oldscape::rseven

namespace jag {
    // 0x1001ca950
    shared_ptr_if_not_array<PacketT<Array<unsigned char>>>::type
    make_shared<PacketT<Array<unsigned char>>, unsigned long&>(unsigned long& arg1) {
        ref_counter_shared<PacketT<Array<unsigned char> _> _>* ref_counter_shared;
        int local_34;
        PacketT<Array<unsigned char> _>* local_30[2];

        auto arg1_00 = aligned_alloc(64, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<PacketT<Array<unsigned char>>>::type result;
        } else {
            local_30[0] =
                placement_new<PacketT<Array<unsigned char>>, unsigned long&>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            ref_counter_shared =
                placement_new<ref_counter_shared<PacketT<Array<unsigned char>>>, int, PacketT<Array<unsigned char>>*&>(
                    arg1_00, &local_34, local_30);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag
