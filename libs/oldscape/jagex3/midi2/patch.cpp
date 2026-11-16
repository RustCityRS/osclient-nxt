// libs/oldscape/jagex3/midi2/patch.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "patch.h"

namespace jag::oldscape::midi2 {
    // 0x1002d1ae0
    auto Patch::Load(jagex3::Js5& js5, int arg2) {
        auto result;
        Layout* layout;
        Array<unsigned char>* arg1;

        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_38;
        js5.GetFile(local_38, arg2);
        void* arg1_00 = nullptr;
        if (local_38 == nullptr) {
            result.unique_ptr<true, void>(arg1_00);
        } else {
            layout = (Layout*)local_38.operator->();
            arg1 = (Array<unsigned char>*)layout->SSOBeginPtr();
            result = std::make_unique<Patch, Array<unsigned char>&>(*arg1);
        }
        return result;
    }

    // 0x1002d1c50
    unsigned int Patch::LoadWaves(sound::WaveCache& waveCache, std::bitset<128ul>& bitset, ErrorCapture& errorCapture) {
        bool bVar1;
        uint64_t uVar2;
        bool cVar3;
        int iVar4;
        int* piVar6;
        LazyWave* this_00;
        uint32_t* puVar7;
        unsigned int uVar9;
        int iVar11;
        uint8_t auVar14[16];
        uint8_t local_d0[56];
        LazyWave local_80;
        bitset<128ul> local_68;
        LazyWave local_50;
        uint32_t local_34;

        Patch* pPVar10 = (Patch*)&local_50;
        new (pPVar10) sound::LazyWave();
        local_68._0_8_ = *(uint64_t*)bitset;
        local_68._8_8_ = *(uint64_t*)(bitset + 8);
        unsigned long uVar5 = CountBitsetTrailingZeros(pPVar10, &local_68);
        Array<int>* local_90 = (Array<int>*)&field_320;
        fixed_vector<sound::LazyWave, 8ul>* local_98 = (fixed_vector<sound::LazyWave, 8ul>*)&field_152;
        local_d0._48_8_ = &field_8;
        unsigned int local_38 = (unsigned int)(((uint64_t)((int64_t)((unsigned long)local_98 >> 8)) << 8) | (uint8_t)1);
        int iVar12 = 0;
        do {
            pPVar10 = (Patch*)&local_80;
            if (127 < uVar5) {
                uVar9 = local_38 & 4294967041;
            LAB_1002d1f2a:
                return uVar9;
            }
            local_80 = (LazyWave)(*((bitset<128ul>*)(Patch*)bitset)) >> uVar5;
            auVar14 = ~*pPVar10;
            local_68._0_16_ = auVar14;
            local_d0._40_8_ = CountBitsetTrailingZeros(pPVar10, &local_68);
            local_d0._40_8_ = local_d0._40_8_ + uVar5;
            iVar11 = (int)uVar5;
            iVar4 = (int)local_d0._40_8_;
            bVar1 = iVar11 < iVar4;
            local_d0._32_8_ = uVar5;
            if (iVar11 < iVar4) {
                uVar5 = (unsigned long)iVar11;
                local_d0._16_8_ = (int64_t)iVar4;
                local_d0._24_8_ = (int64_t)iVar4;
                bVar1 = true;
                do {
                    cVar3 = ((bitset<128ul>*)(Patch*)bitset)->test(uVar5);
                    if (cVar3) {
                        piVar6 = (int*)(*local_90)[uVar5];
                        iVar4 = *piVar6;
                        local_34 = (uint32_t)(((uint64_t)((int64_t)((unsigned long)piVar6 >> 8)) << 8) | (uint8_t)1);
                        if (iVar4 != 0) {
                            if (iVar4 == iVar12) {
                                iVar4 = iVar12;
                            } else {
                                uVar9 = (int)(iVar4 - 1U) >> 2;
                                if ((iVar4 - 1U & 1) == 0) {
                                    local_d0->GetJagFx((int)waveCache, *((ErrorCapture*)(unsigned long)uVar9));
                                    local_80 = sound::LazyWave(local_d0);
                                    local_50 = local_80;
                                } else {
                                    local_80 = waveCache.GetJagVorbisLazy(uVar9, errorCapture);
                                    local_50 = local_80;
                                }
                                cVar3 = errorCapture.IsRaised();
                                if (cVar3) {
                                    local_34 = 0;
                                    iVar12 = iVar4;
                                    goto LAB_1002d1ea0;
                                }
                                cVar3 = local_50.Empty();
                                if (!cVar3) {
                                    local_98->push_back(local_50);
                                } else {
                                    local_38 = 0;
                                }
                            }
                            cVar3 = local_50.Empty();
                            iVar12 = iVar4;
                            if (!cVar3) {
                                this_00 = (LazyWave*)(*local_d0._48_8_)[uVar5];
                                *this_00 = local_50;
                                puVar7 = (uint32_t*)(*local_90)[uVar5];
                                *puVar7 = 0;
                            }
                        }
                    LAB_1002d1ea0:
                        if ((char)local_34 == '\0')
                            break;
                    }
                    uVar5 = uVar5 + 1;
                    bVar1 = (long)uVar5 < (long)local_d0._16_8_;
                } while (local_d0._24_8_ != uVar5);
            }
            uVar2 = local_d0._40_8_;
            if (bVar1) {
                uVar9 = 0;
                goto LAB_1002d1f2a;
            }
            pPVar10 = (Patch*)bitset;
            auVar14 = (*((bitset<128ul>*)(Patch*)bitset)) >> ((long)local_d0._40_4_);
            local_68._0_16_ = auVar14;
            uVar5 = CountBitsetTrailingZeros(pPVar10, &local_68) + uVar2;
        } while (true);
    }

    // 0x1002d2670
    void Patch::DropWaveIds() {
        field_320.set_max_size(0, 0);
    }

    // 0x1002d6c50
    void Patch::CountBitsetTrailingZeros(std::bitset<128ul>& bitset) {
        uint8_t auVar1[16];
        bitset<128ul> local_30;
        bitset<128ul> local_20;

        &local_20 = (bitset<128ul>[16])std::bitset<128ul>::operator<<(bitset, 64);
        &local_30 = (bitset<128ul>[16])bitset | local_20;
        auVar1 = std::bitset<128ul>::operator<<(&local_30, 32);
        &local_20 = (bitset<128ul>[16])auVar1;
        local_30 |= local_20;
        auVar1 = std::bitset<128ul>::operator<<(&local_30, 16);
        &local_20 = (bitset<128ul>[16])auVar1;
        local_30 |= local_20;
        auVar1 = std::bitset<128ul>::operator<<(&local_30, 8);
        &local_20 = (bitset<128ul>[16])auVar1;
        local_30 |= local_20;
        auVar1 = std::bitset<128ul>::operator<<(&local_30, 4);
        &local_20 = (bitset<128ul>[16])auVar1;
        local_30 |= local_20;
        auVar1 = std::bitset<128ul>::operator<<(&local_30, 2);
        &local_20 = (bitset<128ul>[16])auVar1;
        local_30 |= local_20;
        auVar1 = std::bitset<128ul>::operator<<(&local_30, 1);
        &local_20 = (bitset<128ul>[16])auVar1;
        local_30 |= local_20;
        auVar1 = ~local_30;
        &local_20 = (bitset<128ul>[16])auVar1;
        local_20.count();
    }

    // 0x1002d6e30
    Patch::Patch() : field_0(0) {}

    // 0x1002d6fb0
    Patch::Patch(Array<unsigned char>& arg1) : field_0(0) {
        uint8_t uVar1;
        uint8_t bVar2;
        char cVar3;
        unsigned short uVar4;
        int iVar5;
        Array<unsigned char>* pAVar7;
        long lVar8;
        char* pcVar9;
        uint8_t* puVar10;
        shared_ptr<EnvelopeSet>* psVar11;
        EnvelopeSet* this_00;
        Array<signed char>* pAVar12;
        short* psVar13;
        uint32_t* puVar14;
        int* piVar15;
        Array<game::VarValue>* pAVar16;
        unsigned long uVar17;
        uint8_t* pbVar18;
        unsigned long uVar19;
        unsigned int uVar22;
        unsigned long local_e8;
        WindowSavedPosition local_70;
        unsigned int local_4c;
        unsigned int local_34;

        Array<sound::LazyWave>* local_100 = (Array<sound::LazyWave>*)&field_8;
        new (local_100) Array<sound::LazyWave>();
        Array<short>* local_98 = (Array<short>*)&field_32;
        new (local_98) Array<short>();
        Array<signed char>* local_88 = (Array<signed char>*)&field_56;
        new (local_88) Array<signed char>();
        Array<signed char>* local_90 = (Array<signed char>*)&field_80;
        new (local_90) Array<signed char>();
        Array<shared_ptr<EnvelopeSet>>* local_f0 = (Array<shared_ptr<EnvelopeSet>>*)&field_104;
        new (local_f0) Array<shared_ptr<EnvelopeSet>>();
        Array<signed char>* local_f8 = (Array<signed char>*)&field_128;
        new (local_f8) Array<signed char>();
        uint8_t* local_118 = &field_152;
        new (local_118) eastl::fixed_vector<sound::LazyWave, 8ul>();
        Array<int>* local_80 = (Array<int>*)&field_320;
        new (local_80) Array<int>();
        local_100->set_max_size(128, 1);
        local_98->set_max_size(128, 1);
        local_88->set_max_size(128, 1);
        local_90->set_max_size(128, 1);
        local_f0->set_max_size(128, 1);
        local_f8->set_max_size(128, 1);
        local_80->set_max_size(128, 1);
        Patch* local_78 = this;
        local_70.PacketT(arg1);
        unsigned long uVar26 = 0;
        while (true) {
            pAVar7 = (Array<unsigned char>*)local_70.SSOBeginPtr();
            lVar8 = local_70.size();
            pcVar9 = (char*)(*pAVar7)[lVar8 + uVar26];
            if (*pcVar9 == '\0')
                break;
            uVar26 = uVar26 + 1;
        }
        Array<signed char> local_190(uVar26 & 4294967295);
        if ((int)uVar26 != 0) {
            uVar19 = 0;
            do {
                uVar1 = local_70.g1s();
                puVar10 = &local_190[uVar19];
                *puVar10 = uVar1;
                uVar19 = uVar19 + 1;
            } while ((uVar26 & 4294967295) != uVar19);
        }
        lVar8 = local_70.size();
        local_70.SetPos(lVar8 + 1);
        unsigned long local_40 = local_70.size();
        lVar8 = local_70.size();
        local_70.SetPos((unsigned long)((int)uVar26 + 1) + lVar8);
        uVar26 = 0;
        while (true) {
            pAVar7 = (Array<unsigned char>*)local_70.SSOBeginPtr();
            lVar8 = local_70.size();
            pcVar9 = (char*)(*pAVar7)[lVar8 + uVar26];
            if (*pcVar9 == '\0')
                break;
            uVar26 = uVar26 + 1;
        }
        Array<signed char> local_178(uVar26 & 4294967295);
        if ((int)uVar26 != 0) {
            uVar19 = 0;
            do {
                uVar1 = local_70.g1s();
                puVar10 = &local_178[uVar19];
                *puVar10 = uVar1;
                uVar19 = uVar19 + 1;
            } while ((uVar26 & 4294967295) != uVar19);
        }
        lVar8 = local_70.size();
        local_70.SetPos(lVar8 + 1);
        unsigned long local_48 = local_70.size();
        lVar8 = local_70.size();
        local_70.SetPos((unsigned long)((int)uVar26 + 1) + lVar8);
        uVar26 = 0;
        while (true) {
            pAVar7 = (Array<unsigned char>*)local_70.SSOBeginPtr();
            lVar8 = local_70.size();
            pcVar9 = (char*)(*pAVar7)[lVar8 + uVar26];
            if (*pcVar9 == '\0')
                break;
            uVar26 = uVar26 + 1;
        }
        unsigned int uVar24 = (unsigned int)uVar26;
        Array<signed char> local_160(uVar26 & 4294967295);
        if (uVar24 != 0) {
            uVar19 = 0;
            do {
                uVar1 = local_70.g1s();
                puVar10 = &local_160[uVar19];
                *puVar10 = uVar1;
                uVar19 = uVar19 + 1;
            } while ((uVar26 & 4294967295) != uVar19);
        }
        lVar8 = local_70.size();
        local_70.SetPos(lVar8 + 1);
        uVar26 = uVar26 + 1;
        Array<signed char> local_148(uVar26 & 4294967295);
        if (uVar24 == 0) {
            local_34 = (unsigned int)uVar26;
        } else {
            puVar10 = &local_148[1];
            *puVar10 = 1;
            local_34 = 2;
            if (1 < uVar24) {
                uVar24 = 1;
                local_34 = 2;
                uVar19 = 2;
                do {
                    bVar2 = local_70.g1();
                    uVar22 = local_34;
                    uVar24 = (unsigned int)bVar2 - (unsigned int)((int)(unsigned int)bVar2 <= (int)uVar24);
                    if (bVar2 == 0) {
                        uVar24 = local_34;
                    }
                    puVar10 = &local_148[uVar19];
                    local_34 = uVar22 + (bVar2 == 0);
                    *puVar10 = (char)uVar24;
                    uVar19 = uVar19 + 1;
                } while ((uVar26 & 4294967295) != uVar19);
            }
        }
        Array<shared_ptr<EnvelopeSet>> local_e0((long)(int)local_34);
        lVar8 = local_e0.end();
        if (lVar8 != 0) {
            uVar26 = 0;
            do {
                psVar11 = &local_e0[uVar26];
                this_00 = (EnvelopeSet*)operator new(80);
                new (this_00) EnvelopeSet();
                psVar11->reset<EnvelopeSet, void>(this_00);
                bVar2 = local_70.g1();
                if (bVar2 != 0) {
                    psVar11 = &local_e0[uVar26];
                    pAVar12 = (Array<signed char>*)(*psVar11).operator->();
                    pAVar12->set_max_size((unsigned long)bVar2 * 2, 3);
                }
                bVar2 = local_70.g1();
                if (bVar2 != 0) {
                    psVar11 = &local_e0[uVar26];
                    lVar8 = (*psVar11).operator->();
                    ((lVar8 + 24))->set_max_size((unsigned long)bVar2 * 2 + 2, 3);
                    psVar11 = &local_e0[uVar26];
                    lVar8 = (*psVar11).operator->();
                    puVar10 = (uint8_t*)(*((lVar8 + 24)))[1];
                    *puVar10 = 64;
                }
                uVar26 = uVar26 + 1;
                uVar19 = local_e0.end();
            } while (uVar26 < uVar19);
        }
        bVar2 = local_70.g1();
        uVar26 = 0;
        if (bVar2 != 0) {
            uVar26 = (unsigned long)bVar2 * 2;
        }
        Array<signed char, BucketAllocatorEASTL> local_c8(uVar26);
        bVar2 = local_70.g1();
        uVar26 = 0;
        if (bVar2 != 0) {
            uVar26 = (unsigned long)bVar2 * 2;
        }
        Array<signed char, BucketAllocatorEASTL> local_b0(uVar26);
        uVar26 = 0;
        while (true) {
            pAVar7 = (Array<unsigned char>*)local_70.SSOBeginPtr();
            lVar8 = local_70.size();
            pcVar9 = (char*)(*pAVar7)[lVar8 + uVar26];
            if (*pcVar9 == '\0')
                break;
            uVar26 = uVar26 + 1;
        }
        Array<signed char, BucketAllocatorEASTL> local_130(uVar26 & 4294967295);
        if ((int)uVar26 != 0) {
            uVar19 = 0;
            do {
                uVar1 = local_70.g1s();
                puVar10 = &local_130[uVar19];
                *puVar10 = uVar1;
                uVar19 = uVar19 + 1;
            } while ((uVar26 & 4294967295) != uVar19);
        }
        lVar8 = local_70.size();
        local_70.SetPos(lVar8 + 1);
        uVar26 = 0;
        short sVar20 = 0;
        do {
            uVar4 = local_70.g1();
            psVar13 = (short*)(*local_98)[uVar26];
            sVar20 = sVar20 + (uVar4 & 255);
            *psVar13 = sVar20;
            uVar26 = uVar26 + 1;
        } while (uVar26 != 128);
        uVar26 = 0;
        sVar20 = 0;
        do {
            uVar4 = local_70.g1();
            psVar13 = (short*)(*local_98)[uVar26];
            sVar20 = sVar20 + (uVar4 & 255);
            *psVar13 = *psVar13 + sVar20 * 256;
            uVar26 = uVar26 + 1;
        } while (uVar26 != 128);
        uVar26 = 0;
        uint32_t uVar6 = 0;
        int iVar25 = 0;
        int iVar21 = 0;
        do {
            if (iVar21 == 0) {
                iVar5 = local_130.end();
                iVar21 = -1;
                if (iVar25 < iVar5) {
                    pcVar9 = &local_130[(long)iVar25];
                    iVar25 = iVar25 + 1;
                    iVar21 = (int)*pcVar9;
                }
                uVar6 = local_70.gMidiVarLen();
            }
            psVar13 = (short*)(*local_98)[uVar26];
            *psVar13 = *psVar13 + ((short)uVar6 * 16384 + 49152U & 32768);
            puVar14 = (uint32_t*)(*local_80)[uVar26];
            *puVar14 = uVar6;
            iVar21 = iVar21 - 1;
            uVar26 = uVar26 + 1;
        } while (uVar26 != 128);
        uVar26 = 0;
        char cVar23 = '\0';
        iVar25 = 0;
        iVar21 = 0;
        do {
            piVar15 = (int*)(*local_80)[uVar26];
            if (*piVar15 != 0) {
                if (iVar21 == 0) {
                    iVar5 = local_190.end();
                    iVar21 = -1;
                    if (iVar25 < iVar5) {
                        pcVar9 = &local_190[(long)iVar25];
                        iVar25 = iVar25 + 1;
                        iVar21 = (int)*pcVar9;
                    }
                    pAVar7 = (Array<unsigned char>*)local_70.SSOBeginPtr();
                    pcVar9 = (char*)(*pAVar7)[(long)(int)local_40];
                    local_40 = (unsigned long)((int)local_40 + 1);
                    cVar23 = *pcVar9 - 1;
                }
                pcVar9 = (char*)(*local_f8)[uVar26];
                *pcVar9 = cVar23;
                iVar21 = iVar21 - 1;
            }
            uVar26 = uVar26 + 1;
        } while (uVar26 != 128);
        uVar26 = 0;
        cVar23 = '\0';
        iVar25 = 0;
        iVar21 = 0;
        do {
            piVar15 = (int*)(*local_80)[uVar26];
            if (*piVar15 != 0) {
                if (iVar21 == 0) {
                    iVar5 = local_178.end();
                    iVar21 = -1;
                    if (iVar25 < iVar5) {
                        pcVar9 = &local_178[(long)iVar25];
                        iVar25 = iVar25 + 1;
                        iVar21 = (int)*pcVar9;
                    }
                    pAVar7 = (Array<unsigned char>*)local_70.SSOBeginPtr();
                    pcVar9 = (char*)(*pAVar7)[(long)(int)(unsigned int)local_48];
                    local_48 = (unsigned long)((int)local_48 + 1);
                    cVar23 = *pcVar9 * '\x04' + '@';
                }
                pcVar9 = (char*)(*local_90)[uVar26];
                *pcVar9 = cVar23;
                iVar21 = iVar21 - 1;
            }
            uVar26 = uVar26 + 1;
        } while (uVar26 != 128);
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_110;
        uVar26 = 0;
        local_40 = local_40 & 18446744069414584320;
        iVar21 = 0;
        do {
            piVar15 = (int*)(*local_80)[uVar26];
            if (*piVar15 != 0) {
                if (iVar21 == 0) {
                    uVar19 = (unsigned long)(int)local_40;
                    pcVar9 = &local_148[uVar19];
                    psVar11 = &local_e0[(long)*pcVar9];
                    local_110 = *psVar11;
                    iVar25 = local_160.end();
                    iVar21 = -1;
                    if ((int)local_40 < iVar25) {
                        pcVar9 = &local_160[uVar19];
                        local_40 = (((uint64_t)local_40._4_4_ << 32) | (uint32_t)((int)local_40 + 1));
                        iVar21 = (int)*pcVar9;
                    }
                }
                psVar11 = (shared_ptr<EnvelopeSet>*)(*local_f0)[uVar26];
                *psVar11 = local_110;
                iVar21 = iVar21 - 1;
            }
            uVar26 = uVar26 + 1;
        } while (uVar26 != 128);
        uVar26 = 0;
        cVar23 = '\0';
        iVar25 = 0;
        iVar21 = 0;
        do {
            if (iVar21 == 0) {
                iVar5 = local_130.end();
                iVar21 = -1;
                if (iVar25 < iVar5) {
                    pcVar9 = &local_130[(long)iVar25];
                    iVar25 = iVar25 + 1;
                    iVar21 = (int)*pcVar9;
                }
                piVar15 = (int*)(*local_80)[uVar26];
                if (0 < *piVar15) {
                    cVar23 = local_70.g1();
                    cVar23 = cVar23 + '\x01';
                }
            }
            pcVar9 = (char*)(*local_88)[uVar26];
            *pcVar9 = cVar23;
            iVar21 = iVar21 - 1;
            uVar26 = uVar26 + 1;
        } while (uVar26 != 128);
        bVar2 = local_70.g1();
        local_40 = 1;
        if (1 < (int)local_34) {
            local_40 = (unsigned long)local_34;
        }
        local_78->field_0 = bVar2 + 1;
        uVar26 = 0;
        do {
            psVar11 = &local_e0[uVar26];
            pAVar16 = (Array<game::VarValue>*)**psVar11;
            cVar23 = pAVar16->empty();
            if ((!cVar23) && (uVar19 = pAVar16->end(), 1 < uVar19)) {
                uVar19 = 1;
                do {
                    uVar1 = local_70.g1s();
                    puVar10 = (uint8_t*)(*pAVar16)[uVar19];
                    *puVar10 = uVar1;
                    uVar19 = uVar19 + 2;
                    uVar17 = pAVar16->end();
                } while (uVar19 < uVar17);
            }
            pAVar16 = pAVar16 + 24;
            cVar23 = pAVar16->empty();
            if ((!cVar23) && (lVar8 = pAVar16->end(), 3 < lVar8 - 2U)) {
                uVar19 = 3;
                do {
                    uVar1 = local_70.g1s();
                    puVar10 = (uint8_t*)(*pAVar16)[uVar19];
                    *puVar10 = uVar1;
                    uVar19 = uVar19 + 2;
                    lVar8 = pAVar16->end();
                } while (uVar19 < lVar8 - 2U);
            }
            uVar26 = uVar26 + 1;
        } while (uVar26 != local_40);
        cVar23 = local_c8.empty();
        if ((!cVar23) && (uVar26 = local_c8.end(), 1 < uVar26)) {
            uVar26 = 1;
            do {
                uVar1 = local_70.g1s();
                puVar10 = &local_c8[uVar26];
                *puVar10 = uVar1;
                uVar26 = uVar26 + 2;
                uVar19 = local_c8.end();
            } while (uVar26 < uVar19);
        }
        cVar23 = local_b0.empty();
        if ((!cVar23) && (uVar26 = local_b0.end(), 1 < uVar26)) {
            uVar26 = 1;
            do {
                uVar1 = local_70.g1s();
                puVar10 = &local_b0[uVar26];
                *puVar10 = uVar1;
                uVar26 = uVar26 + 2;
                uVar19 = local_b0.end();
            } while (uVar26 < uVar19);
        }
        uVar26 = 0;
        do {
            psVar11 = &local_e0[uVar26];
            lVar8 = **psVar11;
            pAVar16 = (Array<game::VarValue>*)(lVar8 + 24);
            cVar23 = pAVar16->empty();
            if ((!cVar23) && (uVar19 = pAVar16->end(), 2 < uVar19)) {
                cVar23 = '\0';
                uVar19 = 2;
                do {
                    cVar3 = local_70.g1();
                    pcVar9 = (char*)(*pAVar16)[uVar19];
                    cVar23 = cVar23 + cVar3 + '\x01';
                    *pcVar9 = cVar23;
                    uVar19 = uVar19 + 2;
                    uVar17 = pAVar16->end();
                } while (uVar19 < uVar17);
            }
            uVar26 = uVar26 + 1;
        } while (uVar26 != local_40);
        uVar26 = 0;
        do {
            psVar11 = &local_e0[uVar26];
            pAVar16 = (Array<game::VarValue>*)**psVar11;
            cVar23 = pAVar16->empty();
            if ((!cVar23) && (uVar19 = pAVar16->end(), 2 < uVar19)) {
                cVar23 = '\0';
                uVar19 = 2;
                do {
                    cVar3 = local_70.g1();
                    pcVar9 = (char*)(*pAVar16)[uVar19];
                    cVar23 = cVar23 + cVar3 + '\x01';
                    *pcVar9 = cVar23;
                    uVar19 = uVar19 + 2;
                    uVar17 = pAVar16->end();
                } while (uVar19 < uVar17);
            }
            uVar26 = uVar26 + 1;
        } while (uVar26 != local_40);
        cVar23 = local_c8.empty();
        if (!cVar23) {
            cVar23 = local_70.g1();
            pcVar9 = &local_c8[0];
            *pcVar9 = cVar23;
            uVar26 = local_c8.end();
            if (2 < uVar26) {
                uVar26 = 2;
                do {
                    cVar3 = local_70.g1();
                    pcVar9 = &local_c8[uVar26];
                    cVar23 = cVar23 + cVar3 + '\x01';
                    *pcVar9 = cVar23;
                    uVar26 = uVar26 + 2;
                    uVar19 = local_c8.end();
                } while (uVar26 < uVar19);
            }
            pcVar9 = &local_c8[0];
            cVar23 = *pcVar9;
            uVar24 = (unsigned int)cVar23;
            pcVar9 = &local_c8[1];
            pAVar12 = local_88;
            iVar21 = (int)*pcVar9;
            if ('\0' < cVar23) {
                local_48 = (unsigned long)uVar24;
                uVar26 = 0;
                do {
                    pcVar9 = (char*)(*pAVar12)[uVar26];
                    cVar23 = *pcVar9;
                    puVar10 = (uint8_t*)(*pAVar12)[uVar26];
                    *puVar10 = (char)(cVar23 * iVar21 + 32U >> 6);
                    uVar26 = uVar26 + 1;
                } while (local_48 != uVar26);
            }
            iVar25 = local_c8.end();
            if (2 < iVar25) {
                uVar26 = 2;
                do {
                    pcVar9 = &local_c8[uVar26];
                    uVar22 = (unsigned int)*pcVar9;
                    local_e8 = uVar26;
                    pcVar9 = &local_c8[uVar26 | 1];
                    local_78 = (Patch*)(((uint64_t)local_78._4_4_ << 32) | (uint32_t)((int)*pcVar9));
                    iVar25 = uVar22 - uVar24;
                    local_4c = uVar22;
                    if (iVar25 != 0 && (int)uVar24 <= (int)uVar22) {
                        uVar26 = (unsigned long)(int)uVar24;
                        local_48 = (unsigned long)(int)uVar22;
                        local_34 = *pcVar9 - iVar21;
                        iVar21 = iVar21 * iVar25 + iVar25 / 2;
                        do {
                            iVar5 = core::math::MathTool::SaneDiv(iVar21, iVar25);
                            pcVar9 = (char*)(*local_88)[uVar26];
                            cVar23 = *pcVar9;
                            puVar10 = (uint8_t*)(*local_88)[uVar26];
                            *puVar10 = (char)(iVar5 * cVar23 + 32U >> 6);
                            uVar26 = uVar26 + 1;
                            iVar21 = iVar21 + local_34;
                        } while (local_48 != uVar26);
                    }
                    uVar26 = local_e8 + 2;
                    iVar25 = local_c8.end();
                    iVar21 = (int)local_78;
                    uVar24 = local_4c;
                } while ((int)uVar26 < iVar25);
            }
            pAVar12 = local_88;
            uVar26 = (unsigned long)(int)uVar24;
            do {
                pcVar9 = (char*)(*pAVar12)[uVar26];
                cVar23 = *pcVar9;
                puVar10 = (uint8_t*)(*pAVar12)[uVar26];
                *puVar10 = (char)(cVar23 * iVar21 + 32U >> 6);
                uVar26 = uVar26 + 1;
            } while (uVar26 != 128);
            local_c8.set_max_size(0, 0);
        }
        cVar23 = local_b0.empty();
        if (!cVar23) {
            cVar23 = local_70.g1();
            pcVar9 = &local_b0[0];
            *pcVar9 = cVar23;
            uVar26 = local_b0.end();
            if (2 < uVar26) {
                uVar26 = 2;
                do {
                    cVar3 = local_70.g1();
                    pcVar9 = &local_b0[uVar26];
                    cVar23 = cVar23 + cVar3 + '\x01';
                    *pcVar9 = cVar23;
                    uVar26 = uVar26 + 2;
                    uVar19 = local_b0.end();
                } while (uVar26 < uVar19);
            }
            pcVar9 = &local_b0[0];
            cVar23 = *pcVar9;
            pcVar9 = &local_b0[1];
            pAVar12 = local_90;
            iVar21 = *pcVar9 * 2;
            local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)((int)cVar23));
            if ('\0' < cVar23) {
                uVar26 = 0;
                do {
                    pbVar18 = (uint8_t*)(*pAVar12)[uVar26];
                    iVar25 = (unsigned int)*pbVar18 + iVar21;
                    if (iVar25 < 0) {
                        iVar25 = 0;
                    }
                    puVar10 = (uint8_t*)(*pAVar12)[uVar26];
                    if (127 < iVar25) {
                        iVar25 = 128;
                    }
                    *puVar10 = (char)iVar25;
                    uVar26 = uVar26 + 1;
                } while ((unsigned int)(int)cVar23 != uVar26);
            }
            iVar25 = local_b0.end();
            if (iVar25 < 3) {
                uVar24 = (unsigned int)local_48;
            } else {
                uVar26 = 2;
                uVar24 = (unsigned int)local_48;
                do {
                    pcVar9 = &local_b0[uVar26];
                    uVar22 = (unsigned int)*pcVar9;
                    local_e8 = uVar26;
                    pcVar9 = &local_b0[uVar26 | 1];
                    local_78 = (Patch*)(((uint64_t)local_78._4_4_ << 32) | (uint32_t)(*pcVar9 * 2));
                    iVar25 = uVar22 - uVar24;
                    local_4c = uVar22;
                    if (iVar25 != 0 && (int)uVar24 <= (int)uVar22) {
                        uVar26 = (unsigned long)(int)uVar24;
                        local_48 = (unsigned long)(int)uVar22;
                        local_34 = *pcVar9 * 2 - iVar21;
                        iVar21 = iVar21 * iVar25 + iVar25 / 2;
                        do {
                            iVar5 = core::math::MathTool::SaneDiv(iVar21, iVar25);
                            pAVar12 = local_90;
                            pbVar18 = (uint8_t*)(*local_90)[uVar26];
                            iVar5 = iVar5 + (unsigned int)*pbVar18;
                            if (iVar5 < 0) {
                                iVar5 = 0;
                            }
                            puVar10 = (uint8_t*)(*pAVar12)[uVar26];
                            if (127 < iVar5) {
                                iVar5 = 128;
                            }
                            *puVar10 = (char)iVar5;
                            uVar26 = uVar26 + 1;
                            iVar21 = iVar21 + local_34;
                        } while (local_48 != uVar26);
                    }
                    uVar26 = local_e8 + 2;
                    iVar25 = local_b0.end();
                    iVar21 = (int)local_78;
                    uVar24 = local_4c;
                } while ((int)uVar26 < iVar25);
            }
            pAVar12 = local_90;
            uVar26 = (unsigned long)(int)uVar24;
            do {
                pbVar18 = (uint8_t*)(*pAVar12)[uVar26];
                iVar25 = (unsigned int)*pbVar18 + iVar21;
                if ((int)((unsigned int)*pbVar18 + iVar21) < 0) {
                    iVar25 = 0;
                }
                uVar1 = (uint8_t)iVar25;
                puVar10 = (uint8_t*)(*pAVar12)[uVar26];
                if (127 < iVar25) {
                    uVar1 = 128;
                }
                *puVar10 = uVar1;
                uVar26 = uVar26 + 1;
            } while (uVar26 != 128);
            local_b0.set_max_size(0, 0);
        }
        uVar26 = 0;
        do {
            uVar24 = local_70.g1();
            psVar11 = &local_e0[uVar26];
            lVar8 = (*psVar11).operator->();
            *(unsigned int*)(lVar8 + 48) = uVar24 & 255;
            uVar26 = uVar26 + 1;
        } while (local_40 != uVar26);
        uVar26 = 0;
        do {
            psVar11 = &local_e0[uVar26];
            pAVar16 = (Array<game::VarValue>*)**psVar11;
            cVar23 = pAVar16->empty();
            if (!cVar23) {
                bVar2 = local_70.g1();
                *(unsigned int*)(pAVar16 + 52) = (unsigned int)bVar2;
            }
            cVar23 = (pAVar16 + 24)->empty();
            if (!cVar23) {
                bVar2 = local_70.g1();
                *(unsigned int*)(pAVar16 + 56) = (unsigned int)bVar2;
            }
            if (0 < *(int*)(pAVar16 + 48)) {
                bVar2 = local_70.g1();
                *(unsigned int*)(pAVar16 + 60) = (unsigned int)bVar2;
            }
            uVar26 = uVar26 + 1;
        } while (local_40 != uVar26);
        uVar26 = 0;
        do {
            uVar24 = local_70.g1();
            psVar11 = &local_e0[uVar26];
            lVar8 = (*psVar11).operator->();
            *(unsigned int*)(lVar8 + 68) = uVar24 & 255;
            uVar26 = uVar26 + 1;
        } while (local_40 != uVar26);
        uVar26 = 0;
        do {
            psVar11 = &local_e0[uVar26];
            lVar8 = **psVar11;
            if (0 < *(int*)(lVar8 + 68)) {
                bVar2 = local_70.g1();
                *(unsigned int*)(lVar8 + 64) = (unsigned int)bVar2;
            }
            uVar26 = uVar26 + 1;
        } while (local_40 != uVar26);
        uVar26 = 0;
        do {
            psVar11 = &local_e0[uVar26];
            lVar8 = **psVar11;
            if (0 < *(int*)(lVar8 + 64)) {
                bVar2 = local_70.g1();
                *(unsigned int*)(lVar8 + 72) = (unsigned int)bVar2;
            }
            uVar26 = uVar26 + 1;
        } while (local_40 != uVar26);
    }

    // 0x1002d8c50
    int Patch::GetWaveId(int arg1) {
        int* piVar1 = &field_320[(long)arg1];
        return *piVar1 - 1 >> 2;
    }

    // 0x1002d8c70
    bool Patch::IsJagFX(int arg1) {
        uint8_t* pbVar1 = &field_320[(long)arg1];
        return *pbVar1 & 1;
    }

    // 0x1002d8c90
    bool Patch::IsVorbis(int arg1) {
        uint8_t* pbVar1 = &field_320[(long)arg1];
        return (*pbVar1 & 1) == 0;
    }

    // 0x1002d8cb0
    unsigned long Patch::NoteWillStop(int arg1) {
        shared_ptr<EnvelopeSet>* this_00;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        long lVar2;
        char* pcVar3;
        uint64_t unaff_R14;

        short* psVar1 = &field_32[(unsigned long)arg1];
        unsigned long uVar4 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
        if (*psVar1 < 0) {
            this_00 = &field_104[(unsigned long)arg1];
            this_01 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)**this_00;
            lVar2 = this_01->end();
            if (lVar2 != 0) {
                lVar2 = this_01->end();
                pcVar3 = (char*)(*this_01)[lVar2 - 1];
                if (*pcVar3 == '\0')
                    goto LAB_1002d8d3c;
            }
            lVar2 = (this_01 + 24)->end();
            if (lVar2 != 0) {
                pcVar3 = &field_128[(unsigned long)arg1];
                if (*pcVar3 < '\0')
                    goto LAB_1002d8d3c;
            }
            uVar4 = 0;
        }
    LAB_1002d8d3c:
        return uVar4 & 4294967295;
    }

} // namespace jag::oldscape::midi2

namespace jag {
    // 0x1002d2150
    shared_ptr_if_not_array<std::atomic<bool>>::type make_shared<std::atomic<bool>, bool>(bool&& arg1) {
        ref_counter_shared_trivial<std::atomic<bool> _>* ref_counter_shared_trivial;
        int local_34;
        atomic<bool>* local_30[2];

        auto arg1_00 = aligned_alloc(24, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<std::atomic<bool>>::type result;
        } else {
            local_30[0] = placement_new<std::atomic<bool>, bool>((void*)((long)arg1_00 + 16), arg1);
            local_34 = 1;
            ref_counter_shared_trivial =
                placement_new<ref_counter_shared_trivial<std::atomic<bool>>, int, std::atomic<bool>*&>(
                    arg1_00, &local_34, local_30);
            ref_counter_shared_trivial->~AutoSingleton();
            ref_counter_shared_trivial->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared_trivial, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x1002d59a0
    shared_ptr_if_not_array<oldscape::midi2::MidiNote>::type make_shared<oldscape::midi2::MidiNote>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        MidiNote* local_28[2];

        auto arg1 = aligned_alloc(208, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::midi2::MidiNote>::type result;
        } else {
            local_28[0] = placement_new<oldscape::midi2::MidiNote>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::midi2::MidiNote>, int, oldscape::midi2::MidiNote*&>(
                    arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
