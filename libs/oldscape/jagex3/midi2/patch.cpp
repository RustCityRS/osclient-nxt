// libs/oldscape/jagex3/midi2/patch.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "patch.h"

namespace jag::oldscape::midi2 {
    // 0x1002d1ae0, 160 bytes, placed by class name and debug map
    // Patch::Load(jagex3::Js5&, int)
    Patch* Patch::Load(Js5* param_1, int param_2) {
        Layout* this_00;
        shared_ptr local_38;

        new (&local_38) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        param_1->GetFile(&local_38, param_2);
        if (operator==(&local_38, (_func_decltype_nullptr*)0)) {
            std::unique_ptr<Patch, std::default_delete<Patch>>::unique_ptr<true, void>((_func_decltype_nullptr*)this);
        } else {
            this_00 = (Layout*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_38);
            eastl::string::Layout::SSOBeginPtr(this_00, (type*)0);
            std::make_unique<Patch, Array<unsigned char, eastl::allocator>&>((Array*)this);
        }
        local_38.~shared_ptr();
        return this;
    }

    // 0x1002d1c50, 832 bytes, placed by class name and debug map
    // Patch::LoadWaves(sound::WaveCache&, std::bitset<128ul>&, ErrorCapture&)
    /* Patch::LoadWaves(sound::WaveCache&, std::bitset<128ul>&,
   ErrorCapture&) */

    uint Patch::LoadWaves(WaveCache* param_1, bitset* param_2, ErrorCapture* param_3) {
        bool bVar1;
        char cVar2;
        int iVar3;
        ulong uVar4;
        long lVar5;
        int* piVar6;
        LazyWave* this_00;
        undefined4* puVar7;
        uint uVar9;
        Patch* pPVar10;
        ulong uVar11;
        int iVar12;
        int iVar13;
        undefined1 auVar15[16];
        shared_ptr in_stack_ffffffffffffff28;
        shared_ptr<RSevenDebugPresetProvider> asStack_c6[70];
        LazyWave local_80;
        bitset local_68[24];
        LazyWave local_50;
        uint local_38;
        undefined4 local_34;

        pPVar10 = (Patch*)&local_50;
        new (pPVar10) sound::LazyWave();
        local_68._0_8_ = *(undefined8*)param_2;
        local_68._8_8_ = *(undefined8*)(param_2 + 8);
        uVar4 = CountBitsetTrailingZeros(pPVar10, local_68);
        local_38 = (uint)CONCAT71((int7)((ulong)field_152 >> 8), 1);
        iVar13 = 0;
        do {
            pPVar10 = (Patch*)&local_80;
            if (127 < uVar4) {
                uVar9 = local_38 & 4294967041;
            LAB_1002d1f2a:
                local_50.~LRUHashCacheWrapper();
                return uVar9;
            }
            local_80 = (LazyWave)std::bitset<128ul>::operator>>((bitset<128ul>*)(Patch*)param_2, uVar4);
            auVar15 = std::bitset<128ul>::operator~((bitset<128ul>*)pPVar10);
            local_68._0_16_ = auVar15;
            lVar5 = CountBitsetTrailingZeros(pPVar10, local_68);
            iVar12 = (int)uVar4;
            iVar3 = (int)(lVar5 + uVar4);
            bVar1 = iVar12 < iVar3;
            if (iVar12 < iVar3) {
                uVar11 = (ulong)iVar12;
                bVar1 = true;
                do {
                    cVar2 = ((Patch*)param_2)->test(uVar11);
                    if (cVar2 != '\0') {
                        piVar6 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&field_320, uVar11);
                        iVar12 = *piVar6;
                        local_34 = (undefined4)CONCAT71((int7)((ulong)piVar6 >> 8), 1);
                        if (iVar12 != 0) {
                            if (iVar12 == iVar13) {
                                iVar12 = iVar13;
                            } else {
                                uVar9 = (int)(iVar12 - 1U) >> 2;
                                if ((iVar12 - 1U & 1) == 0) {
                                    ((asStack_c6 + -10))->GetJagFx((int)param_1, (ErrorCapture*)(ulong)uVar9);
                                    new (&local_80) sound::LazyWave(in_stack_ffffffffffffff28);
                                    sound::LazyWave::operator=(&local_50, &local_80);
                                    local_80.~LRUHashCacheWrapper();
                                    (asStack_c6 + -10)->~shared_ptr();
                                } else {
                                    local_80.GetJagVorbisLazy((int)param_1, (ErrorCapture*)(ulong)uVar9);
                                    sound::LazyWave::operator=(&local_50, &local_80);
                                    local_80.~LRUHashCacheWrapper();
                                }
                                cVar2 = param_3->IsRaised();
                                if (cVar2 != '\0') {
                                    local_34 = 0;
                                    iVar13 = iVar12;
                                    goto LAB_1002d1ea0;
                                }
                                cVar2 = local_50.Empty();
                                if (cVar2 == '\0') {
                                    eastl::fixed_vector<sound::LazyWave, 8ul, true, eastl::allocator>::push_back(
                                        (LazyWave*)field_152);
                                } else {
                                    local_38 = 0;
                                }
                            }
                            cVar2 = local_50.Empty();
                            iVar13 = iVar12;
                            if (cVar2 == '\0') {
                                this_00 = (LazyWave*)Array<sound::LazyWave, eastl::allocator>::operator[](
                                    (Array<sound::LazyWave, eastl::allocator>*)&field_8, uVar11);
                                sound::LazyWave::operator=(this_00, &local_50);
                                puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)&field_320, uVar11);
                                *puVar7 = 0;
                            }
                        }
                    LAB_1002d1ea0:
                        if ((char)local_34 == '\0')
                            break;
                    }
                    uVar11 = uVar11 + 1;
                    bVar1 = (long)uVar11 < (long)iVar3;
                } while ((long)iVar3 != uVar11);
            }
            if (bVar1) {
                uVar9 = 0;
                goto LAB_1002d1f2a;
            }
            pPVar10 = (Patch*)param_2;
            auVar15 = std::bitset<128ul>::operator>>((bitset<128ul>*)(Patch*)param_2, (long)iVar3);
            local_68._0_16_ = auVar15;
            uVar4 = CountBitsetTrailingZeros(pPVar10, local_68) + lVar5 + uVar4;
        } while (true);
    }

    // 0x1002d2670, 32 bytes, placed by class name and debug map
    // Patch::DropWaveIds()
    void Patch::DropWaveIds() {
        (&field_320, 0, 0)->set_max_size();
    }

    // 0x1002d6c50, 288 bytes, placed by class name
    // Patch::CountBitsetTrailingZeros(std::bitset<128ul>&)
    /* Patch::CountBitsetTrailingZeros(std::bitset<128ul>&) */

    void Patch::CountBitsetTrailingZeros(bitset* param_1) {
        undefined1 auVar1[16];
        bitset<128ul> local_30[16];
        bitset local_20[16];

        local_20 = (bitset[16])std::bitset<128ul>::operator<<((bitset<128ul>*)param_1, 64);
        local_30 = (bitset<128ul>[16])std::operator|(param_1, local_20);
        auVar1 = std::bitset<128ul>::operator<<(local_30, 32);
        local_20 = (bitset[16])auVar1;
        std::bitset<128ul>::operator|=(local_30, local_20);
        auVar1 = std::bitset<128ul>::operator<<(local_30, 16);
        local_20 = (bitset[16])auVar1;
        std::bitset<128ul>::operator|=(local_30, local_20);
        auVar1 = std::bitset<128ul>::operator<<(local_30, 8);
        local_20 = (bitset[16])auVar1;
        std::bitset<128ul>::operator|=(local_30, local_20);
        auVar1 = std::bitset<128ul>::operator<<(local_30, 4);
        local_20 = (bitset[16])auVar1;
        std::bitset<128ul>::operator|=(local_30, local_20);
        auVar1 = std::bitset<128ul>::operator<<(local_30, 2);
        local_20 = (bitset[16])auVar1;
        std::bitset<128ul>::operator|=(local_30, local_20);
        auVar1 = std::bitset<128ul>::operator<<(local_30, 1);
        local_20 = (bitset[16])auVar1;
        std::bitset<128ul>::operator|=(local_30, local_20);
        auVar1 = std::bitset<128ul>::operator~(local_30);
        local_20 = (bitset[16])auVar1;
        local_20->count();
    }

    // 0x1002d6e30, 272 bytes, base-object constructor, placed by class name
    // Patch::Patch()
    void Patch::Patch() {
        field_0 = 0;
        new (&field_8) Array<sound::LazyWave, eastl::allocator>();
        new (&field_32) Array<short, eastl::allocator>();
        new (&field_56) Array<signed char, eastl::allocator>();
        new (&field_80) Array<signed char, eastl::allocator>();
        new (&field_104) Array<shared_ptr<EnvelopeSet>, eastl::allocator>();
        new (&field_128) Array<signed char, eastl::allocator>();
        new (field_152) eastl::fixed_vector<sound::LazyWave, 8ul, true, eastl::allocator>();
        new (&field_320) Array<int, eastl::allocator>();
    }

    // 0x1002d6fa0, 16 bytes, complete-object constructor, placed by class name
    // Patch::Patch(): jumps straight to the base-object constructor

    // 0x1002d6fb0, 5792 bytes, base-object constructor, placed by class name
    // Patch::Patch(Array<unsigned char, eastl::allocator>&)
    void Patch::Patch(Array* param_1) {
        undefined1 uVar1;
        byte bVar2;
        char cVar3;
        ushort uVar4;
        int iVar5;
        undefined4 uVar6;
        vector* pvVar7;
        long lVar8;
        char* pcVar9;
        undefined1* puVar10;
        shared_ptr<EnvelopeSet>* psVar11;
        EnvelopeSet* this_00;
        Array<signed char, eastl::allocator>* pAVar12;
        short* psVar13;
        undefined4* puVar14;
        int* piVar15;
        shared_ptr* psVar16;
        Array<game::VarValue, eastl::allocator>* pAVar17;
        ulong uVar18;
        byte* pbVar19;
        ulong uVar20;
        type* ptVar21;
        short sVar22;
        int iVar23;
        uint uVar24;
        char cVar25;
        uint uVar26;
        int iVar27;
        ulong uVar28;
        type* ptVar29;
        Array<signed char, eastl::allocator> local_190[24];
        Array<signed char, eastl::allocator> local_178[24];
        Array<signed char, eastl::allocator> local_160[24];
        Array<signed char, eastl::allocator> local_148[24];
        Array<signed char, BucketAllocatorEASTL> local_130[24];
        undefined1* local_118;
        shared_ptr local_110;
        Array<sound::LazyWave, eastl::allocator>* local_100;
        Array<signed char, eastl::allocator>* local_f8;
        Array<shared_ptr<EnvelopeSet>, eastl::allocator>* local_f0;
        ulong local_e8;
        Array<shared_ptr<EnvelopeSet>, eastl::allocator> local_e0[24];
        Array<signed char, BucketAllocatorEASTL> local_c8[24];
        Array<signed char, BucketAllocatorEASTL> local_b0[24];
        Array<short, eastl::allocator>* local_98;
        Array<signed char, eastl::allocator>* local_90;
        Array<signed char, eastl::allocator>* local_88;
        Array<int, eastl::allocator>* local_80;
        Patch* local_78;
        WindowSavedPosition local_70;
        uint local_4c;
        ulong local_48;
        ulong local_40;
        uint local_34;

        field_0 = 0;
        local_100 = (Array<sound::LazyWave, eastl::allocator>*)&field_8;
        Array<sound::LazyWave, eastl::allocator>::Array(local_100);
        local_98 = (Array<short, eastl::allocator>*)&field_32;
        Array<short, eastl::allocator>::Array(local_98);
        local_88 = (Array<signed char, eastl::allocator>*)&field_56;
        Array<signed char, eastl::allocator>::Array(local_88);
        local_90 = (Array<signed char, eastl::allocator>*)&field_80;
        Array<signed char, eastl::allocator>::Array(local_90);
        local_f0 = (Array<shared_ptr<EnvelopeSet>, eastl::allocator>*)&field_104;
        Array<shared_ptr<EnvelopeSet>, eastl::allocator>::Array(local_f0);
        local_f8 = (Array<signed char, eastl::allocator>*)&field_128;
        Array<signed char, eastl::allocator>::Array(local_f8);
        local_118 = field_152;
        new (local_118) eastl::fixed_vector<sound::LazyWave, 8ul, true, eastl::allocator>();
        local_80 = (Array<int, eastl::allocator>*)&field_320;
        Array<int, eastl::allocator>::Array(local_80);
        local_100->set_max_size(128, 1);
        local_98->set_max_size(128, 1);
        local_88->set_max_size(128, 1);
        local_90->set_max_size(128, 1);
        local_f0->set_max_size(128, 1);
        local_f8->set_max_size(128, 1);
        local_80->set_max_size(128, 1);
        local_78 = this;
        local_70.PacketT(param_1);
        uVar28 = 0;
        while (true) {
            pvVar7 = local_70.SSOBeginPtr(param_1);
            lVar8 = local_70.size();
            param_1 = (Array*)(lVar8 + uVar28);
            pcVar9 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                (Array<unsigned char, eastl::allocator>*)pvVar7, (ulong)param_1);
            if (*pcVar9 == '\0')
                break;
            uVar28 = uVar28 + 1;
        }
        Array<signed char, eastl::allocator>::Array(local_190, uVar28 & 4294967295);
        if ((int)uVar28 != 0) {
            uVar20 = 0;
            do {
                uVar1 = local_70.g1s();
                puVar10 = (undefined1*)Array<signed char, eastl::allocator>::operator[](local_190, uVar20);
                *puVar10 = uVar1;
                uVar20 = uVar20 + 1;
            } while ((uVar28 & 4294967295) != uVar20);
        }
        lVar8 = local_70.size();
        local_70.SetPos(lVar8 + 1);
        local_40 = local_70.size();
        lVar8 = local_70.size();
        ptVar29 = (type*)((ulong)((int)uVar28 + 1) + lVar8);
        local_70.SetPos((ulong)ptVar29);
        uVar28 = 0;
        while (true) {
            pvVar7 = local_70.SSOBeginPtr(ptVar29);
            lVar8 = local_70.size();
            ptVar29 = (type*)(lVar8 + uVar28);
            pcVar9 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                (Array<unsigned char, eastl::allocator>*)pvVar7, (ulong)ptVar29);
            if (*pcVar9 == '\0')
                break;
            uVar28 = uVar28 + 1;
        }
        Array<signed char, eastl::allocator>::Array(local_178, uVar28 & 4294967295);
        if ((int)uVar28 != 0) {
            uVar20 = 0;
            do {
                uVar1 = local_70.g1s();
                puVar10 = (undefined1*)Array<signed char, eastl::allocator>::operator[](local_178, uVar20);
                *puVar10 = uVar1;
                uVar20 = uVar20 + 1;
            } while ((uVar28 & 4294967295) != uVar20);
        }
        lVar8 = local_70.size();
        local_70.SetPos(lVar8 + 1);
        local_48 = local_70.size();
        lVar8 = local_70.size();
        ptVar29 = (type*)((ulong)((int)uVar28 + 1) + lVar8);
        local_70.SetPos((ulong)ptVar29);
        uVar28 = 0;
        while (true) {
            pvVar7 = local_70.SSOBeginPtr(ptVar29);
            lVar8 = local_70.size();
            ptVar29 = (type*)(lVar8 + uVar28);
            pcVar9 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                (Array<unsigned char, eastl::allocator>*)pvVar7, (ulong)ptVar29);
            if (*pcVar9 == '\0')
                break;
            uVar28 = uVar28 + 1;
        }
        uVar26 = (uint)uVar28;
        Array<signed char, eastl::allocator>::Array(local_160, uVar28 & 4294967295);
        if (uVar26 != 0) {
            uVar20 = 0;
            do {
                uVar1 = local_70.g1s();
                puVar10 = (undefined1*)Array<signed char, eastl::allocator>::operator[](local_160, uVar20);
                *puVar10 = uVar1;
                uVar20 = uVar20 + 1;
            } while ((uVar28 & 4294967295) != uVar20);
        }
        lVar8 = local_70.size();
        local_70.SetPos(lVar8 + 1);
        uVar28 = uVar28 + 1;
        Array<signed char, eastl::allocator>::Array(local_148, uVar28 & 4294967295);
        if (uVar26 == 0) {
            local_34 = (uint)uVar28;
        } else {
            puVar10 = (undefined1*)Array<signed char, eastl::allocator>::operator[](local_148, 1);
            *puVar10 = 1;
            local_34 = 2;
            if (1 < uVar26) {
                uVar26 = 1;
                local_34 = 2;
                uVar20 = 2;
                do {
                    bVar2 = local_70.g1();
                    uVar24 = local_34;
                    uVar26 = (uint)bVar2 - (uint)((int)(uint)bVar2 <= (int)uVar26);
                    if (bVar2 == 0) {
                        uVar26 = local_34;
                    }
                    puVar10 = (undefined1*)Array<signed char, eastl::allocator>::operator[](local_148, uVar20);
                    local_34 = uVar24 + (bVar2 == 0);
                    *puVar10 = (char)uVar26;
                    uVar20 = uVar20 + 1;
                } while ((uVar28 & 4294967295) != uVar20);
            }
        }
        Array<shared_ptr<EnvelopeSet>, eastl::allocator>::Array(local_e0, (long)(int)local_34);
        lVar8 = local_e0->end();
        if (lVar8 != 0) {
            uVar28 = 0;
            do {
                psVar11 = (shared_ptr<EnvelopeSet>*)Array<shared_ptr<EnvelopeSet>, eastl::allocator>::operator[](
                    local_e0, uVar28);
                this_00 = operator_new(80);
                EnvelopeSet::EnvelopeSet(this_00);
                shared_ptr<EnvelopeSet>::reset<EnvelopeSet, void>(psVar11, this_00);
                bVar2 = local_70.g1();
                if (bVar2 != 0) {
                    psVar11 = (shared_ptr<EnvelopeSet>*)Array<shared_ptr<EnvelopeSet>, eastl::allocator>::operator[](
                        local_e0, uVar28);
                    pAVar12 = (Array<signed char, eastl::allocator>*)shared_ptr<EnvelopeSet>::operator->(psVar11);
                    pAVar12->set_max_size((ulong)bVar2 * 2, 3);
                }
                bVar2 = local_70.g1();
                if (bVar2 != 0) {
                    psVar11 = (shared_ptr<EnvelopeSet>*)Array<shared_ptr<EnvelopeSet>, eastl::allocator>::operator[](
                        local_e0, uVar28);
                    lVar8 = shared_ptr<EnvelopeSet>::operator->(psVar11);
                    ((lVar8 + 24))->set_max_size((ulong)bVar2 * 2 + 2, 3);
                    psVar11 = (shared_ptr<EnvelopeSet>*)Array<shared_ptr<EnvelopeSet>, eastl::allocator>::operator[](
                        local_e0, uVar28);
                    lVar8 = shared_ptr<EnvelopeSet>::operator->(psVar11);
                    puVar10 = (undefined1*)Array<signed char, eastl::allocator>::operator[](
                        (Array<signed char, eastl::allocator>*)(lVar8 + 24), 1);
                    *puVar10 = 64;
                }
                uVar28 = uVar28 + 1;
                uVar20 = local_e0->end();
            } while (uVar28 < uVar20);
        }
        bVar2 = local_70.g1();
        uVar28 = 0;
        if (bVar2 != 0) {
            uVar28 = (ulong)bVar2 * 2;
        }
        Array<signed char, BucketAllocatorEASTL>::Array(local_c8, uVar28);
        bVar2 = local_70.g1();
        ptVar29 = (type*)0;
        if (bVar2 != 0) {
            ptVar29 = (type*)((ulong)bVar2 * 2);
        }
        Array<signed char, BucketAllocatorEASTL>::Array(local_b0, (ulong)ptVar29);
        uVar28 = 0;
        while (true) {
            pvVar7 = local_70.SSOBeginPtr(ptVar29);
            lVar8 = local_70.size();
            ptVar29 = (type*)(lVar8 + uVar28);
            pcVar9 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                (Array<unsigned char, eastl::allocator>*)pvVar7, (ulong)ptVar29);
            if (*pcVar9 == '\0')
                break;
            uVar28 = uVar28 + 1;
        }
        Array<signed char, BucketAllocatorEASTL>::Array(local_130, uVar28 & 4294967295);
        if ((int)uVar28 != 0) {
            uVar20 = 0;
            do {
                uVar1 = local_70.g1s();
                puVar10 = (undefined1*)Array<signed char, BucketAllocatorEASTL>::operator[](local_130, uVar20);
                *puVar10 = uVar1;
                uVar20 = uVar20 + 1;
            } while ((uVar28 & 4294967295) != uVar20);
        }
        lVar8 = local_70.size();
        local_70.SetPos(lVar8 + 1);
        uVar28 = 0;
        sVar22 = 0;
        do {
            uVar4 = local_70.g1();
            psVar13 = (short*)Array<short, eastl::allocator>::operator[](local_98, uVar28);
            sVar22 = sVar22 + (uVar4 & 255);
            *psVar13 = sVar22;
            uVar28 = uVar28 + 1;
        } while (uVar28 != 128);
        uVar28 = 0;
        sVar22 = 0;
        do {
            uVar4 = local_70.g1();
            psVar13 = (short*)Array<short, eastl::allocator>::operator[](local_98, uVar28);
            sVar22 = sVar22 + (uVar4 & 255);
            *psVar13 = *psVar13 + sVar22 * 256;
            uVar28 = uVar28 + 1;
        } while (uVar28 != 128);
        uVar28 = 0;
        uVar6 = 0;
        iVar27 = 0;
        iVar23 = 0;
        do {
            if (iVar23 == 0) {
                iVar5 = local_130->end();
                iVar23 = -1;
                if (iVar27 < iVar5) {
                    pcVar9 = (char*)Array<signed char, BucketAllocatorEASTL>::operator[](local_130, (long)iVar27);
                    iVar27 = iVar27 + 1;
                    iVar23 = (int)*pcVar9;
                }
                uVar6 = local_70.gMidiVarLen();
            }
            psVar13 = (short*)Array<short, eastl::allocator>::operator[](local_98, uVar28);
            *psVar13 = *psVar13 + ((short)uVar6 * 16384 + 49152U & 32768);
            puVar14 = (undefined4*)Array<int, eastl::allocator>::operator[](local_80, uVar28);
            *puVar14 = uVar6;
            iVar23 = iVar23 + -1;
            uVar28 = uVar28 + 1;
        } while (uVar28 != 128);
        ptVar29 = (type*)0;
        cVar25 = '\0';
        iVar27 = 0;
        iVar23 = 0;
        do {
            ptVar21 = ptVar29;
            piVar15 = (int*)Array<int, eastl::allocator>::operator[](local_80, (ulong)ptVar29);
            if (*piVar15 != 0) {
                if (iVar23 == 0) {
                    iVar5 = local_190->end();
                    iVar23 = -1;
                    if (iVar27 < iVar5) {
                        ptVar21 = (type*)(long)iVar27;
                        pcVar9 = (char*)Array<signed char, eastl::allocator>::operator[](local_190, (ulong)ptVar21);
                        iVar27 = iVar27 + 1;
                        iVar23 = (int)*pcVar9;
                    }
                    pvVar7 = local_70.SSOBeginPtr(ptVar21);
                    pcVar9 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                        (Array<unsigned char, eastl::allocator>*)pvVar7, (long)(int)local_40);
                    local_40 = (ulong)((int)local_40 + 1);
                    cVar25 = *pcVar9 + -1;
                }
                pcVar9 = (char*)Array<signed char, eastl::allocator>::operator[](local_f8, (ulong)ptVar29);
                *pcVar9 = cVar25;
                iVar23 = iVar23 + -1;
            }
            ptVar29 = ptVar29 + 1;
        } while (ptVar29 != (type*)128);
        ptVar29 = (type*)0;
        cVar25 = '\0';
        iVar27 = 0;
        iVar23 = 0;
        do {
            ptVar21 = ptVar29;
            piVar15 = (int*)Array<int, eastl::allocator>::operator[](local_80, (ulong)ptVar29);
            if (*piVar15 != 0) {
                if (iVar23 == 0) {
                    iVar5 = local_178->end();
                    iVar23 = -1;
                    if (iVar27 < iVar5) {
                        ptVar21 = (type*)(long)iVar27;
                        pcVar9 = (char*)Array<signed char, eastl::allocator>::operator[](local_178, (ulong)ptVar21);
                        iVar27 = iVar27 + 1;
                        iVar23 = (int)*pcVar9;
                    }
                    pvVar7 = local_70.SSOBeginPtr(ptVar21);
                    pcVar9 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                        (Array<unsigned char, eastl::allocator>*)pvVar7, (long)(int)(uint)local_48);
                    local_48 = (ulong)((int)local_48 + 1);
                    cVar25 = *pcVar9 * '\x04' + '@';
                }
                ptVar21 = ptVar29;
                pcVar9 = (char*)Array<signed char, eastl::allocator>::operator[](local_90, (ulong)ptVar29);
                *pcVar9 = cVar25;
                iVar23 = iVar23 + -1;
            }
            ptVar29 = ptVar29 + 1;
        } while (ptVar29 != (type*)128);
        new (&local_110) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(ptVar21);
        uVar28 = 0;
        local_40 = local_40 & 18446744069414584320;
        iVar23 = 0;
        do {
            piVar15 = (int*)Array<int, eastl::allocator>::operator[](local_80, uVar28);
            if (*piVar15 != 0) {
                if (iVar23 == 0) {
                    uVar20 = (ulong)(int)local_40;
                    pcVar9 = (char*)Array<signed char, eastl::allocator>::operator[](local_148, uVar20);
                    psVar16 = (shared_ptr*)Array<shared_ptr<EnvelopeSet>, eastl::allocator>::operator[](local_e0,
                                                                                                        (long)*pcVar9);
                    shared_ptr<EnvelopeSet>::operator=((shared_ptr<EnvelopeSet>*)&local_110, psVar16);
                    iVar27 = local_160->end();
                    iVar23 = -1;
                    if ((int)local_40 < iVar27) {
                        pcVar9 = (char*)Array<signed char, eastl::allocator>::operator[](local_160, uVar20);
                        local_40 = CONCAT44(local_40._4_4_, (int)local_40 + 1);
                        iVar23 = (int)*pcVar9;
                    }
                }
                psVar11 = (shared_ptr<EnvelopeSet>*)Array<shared_ptr<EnvelopeSet>, eastl::allocator>::operator[](
                    local_f0, uVar28);
                shared_ptr<EnvelopeSet>::operator=(psVar11, &local_110);
                iVar23 = iVar23 + -1;
            }
            uVar28 = uVar28 + 1;
        } while (uVar28 != 128);
        uVar28 = 0;
        cVar25 = '\0';
        iVar27 = 0;
        iVar23 = 0;
        do {
            if (iVar23 == 0) {
                iVar5 = local_130->end();
                iVar23 = -1;
                if (iVar27 < iVar5) {
                    pcVar9 = (char*)Array<signed char, BucketAllocatorEASTL>::operator[](local_130, (long)iVar27);
                    iVar27 = iVar27 + 1;
                    iVar23 = (int)*pcVar9;
                }
                piVar15 = (int*)Array<int, eastl::allocator>::operator[](local_80, uVar28);
                if (0 < *piVar15) {
                    cVar25 = local_70.g1();
                    cVar25 = cVar25 + '\x01';
                }
            }
            pcVar9 = (char*)Array<signed char, eastl::allocator>::operator[](local_88, uVar28);
            *pcVar9 = cVar25;
            iVar23 = iVar23 + -1;
            uVar28 = uVar28 + 1;
        } while (uVar28 != 128);
        bVar2 = local_70.g1();
        local_40 = 1;
        if (1 < (int)local_34) {
            local_40 = (ulong)local_34;
        }
        local_78->field_0 = bVar2 + 1;
        uVar28 = 0;
        do {
            psVar11 = (shared_ptr<EnvelopeSet>*)Array<shared_ptr<EnvelopeSet>, eastl::allocator>::operator[](local_e0,
                                                                                                             uVar28);
            pAVar17 = (Array<game::VarValue, eastl::allocator>*)shared_ptr<EnvelopeSet>::operator*(psVar11);
            cVar25 = pAVar17->empty();
            if ((cVar25 == '\0') && (uVar20 = pAVar17->end(), 1 < uVar20)) {
                uVar20 = 1;
                do {
                    uVar1 = local_70.g1s();
                    puVar10 = (undefined1*)Array<signed char, eastl::allocator>::operator[](
                        (Array<signed char, eastl::allocator>*)pAVar17, uVar20);
                    *puVar10 = uVar1;
                    uVar20 = uVar20 + 2;
                    uVar18 = pAVar17->end();
                } while (uVar20 < uVar18);
            }
            pAVar17 = pAVar17 + 24;
            cVar25 = pAVar17->empty();
            if ((cVar25 == '\0') && (lVar8 = pAVar17->end(), 3 < lVar8 - 2U)) {
                uVar20 = 3;
                do {
                    uVar1 = local_70.g1s();
                    puVar10 = (undefined1*)Array<signed char, eastl::allocator>::operator[](
                        (Array<signed char, eastl::allocator>*)pAVar17, uVar20);
                    *puVar10 = uVar1;
                    uVar20 = uVar20 + 2;
                    lVar8 = pAVar17->end();
                } while (uVar20 < lVar8 - 2U);
            }
            uVar28 = uVar28 + 1;
        } while (uVar28 != local_40);
        cVar25 = local_c8->empty();
        if ((cVar25 == '\0') && (uVar28 = local_c8->end(), 1 < uVar28)) {
            uVar28 = 1;
            do {
                uVar1 = local_70.g1s();
                puVar10 = (undefined1*)Array<signed char, BucketAllocatorEASTL>::operator[](local_c8, uVar28);
                *puVar10 = uVar1;
                uVar28 = uVar28 + 2;
                uVar20 = local_c8->end();
            } while (uVar28 < uVar20);
        }
        cVar25 = local_b0->empty();
        if ((cVar25 == '\0') && (uVar28 = local_b0->end(), 1 < uVar28)) {
            uVar28 = 1;
            do {
                uVar1 = local_70.g1s();
                puVar10 = (undefined1*)Array<signed char, BucketAllocatorEASTL>::operator[](local_b0, uVar28);
                *puVar10 = uVar1;
                uVar28 = uVar28 + 2;
                uVar20 = local_b0->end();
            } while (uVar28 < uVar20);
        }
        uVar28 = 0;
        do {
            psVar11 = (shared_ptr<EnvelopeSet>*)Array<shared_ptr<EnvelopeSet>, eastl::allocator>::operator[](local_e0,
                                                                                                             uVar28);
            lVar8 = shared_ptr<EnvelopeSet>::operator*(psVar11);
            pAVar17 = (Array<game::VarValue, eastl::allocator>*)(lVar8 + 24);
            cVar25 = pAVar17->empty();
            if ((cVar25 == '\0') && (uVar20 = pAVar17->end(), 2 < uVar20)) {
                cVar25 = '\0';
                uVar20 = 2;
                do {
                    cVar3 = local_70.g1();
                    pcVar9 = (char*)Array<signed char, eastl::allocator>::operator[](
                        (Array<signed char, eastl::allocator>*)pAVar17, uVar20);
                    cVar25 = cVar25 + cVar3 + '\x01';
                    *pcVar9 = cVar25;
                    uVar20 = uVar20 + 2;
                    uVar18 = pAVar17->end();
                } while (uVar20 < uVar18);
            }
            uVar28 = uVar28 + 1;
        } while (uVar28 != local_40);
        uVar28 = 0;
        do {
            psVar11 = (shared_ptr<EnvelopeSet>*)Array<shared_ptr<EnvelopeSet>, eastl::allocator>::operator[](local_e0,
                                                                                                             uVar28);
            pAVar17 = (Array<game::VarValue, eastl::allocator>*)shared_ptr<EnvelopeSet>::operator*(psVar11);
            cVar25 = pAVar17->empty();
            if ((cVar25 == '\0') && (uVar20 = pAVar17->end(), 2 < uVar20)) {
                cVar25 = '\0';
                uVar20 = 2;
                do {
                    cVar3 = local_70.g1();
                    pcVar9 = (char*)Array<signed char, eastl::allocator>::operator[](
                        (Array<signed char, eastl::allocator>*)pAVar17, uVar20);
                    cVar25 = cVar25 + cVar3 + '\x01';
                    *pcVar9 = cVar25;
                    uVar20 = uVar20 + 2;
                    uVar18 = pAVar17->end();
                } while (uVar20 < uVar18);
            }
            uVar28 = uVar28 + 1;
        } while (uVar28 != local_40);
        cVar25 = local_c8->empty();
        if (cVar25 == '\0') {
            cVar25 = local_70.g1();
            pcVar9 = (char*)Array<signed char, BucketAllocatorEASTL>::operator[](local_c8, 0);
            *pcVar9 = cVar25;
            uVar28 = local_c8->end();
            if (2 < uVar28) {
                uVar28 = 2;
                do {
                    cVar3 = local_70.g1();
                    pcVar9 = (char*)Array<signed char, BucketAllocatorEASTL>::operator[](local_c8, uVar28);
                    cVar25 = cVar25 + cVar3 + '\x01';
                    *pcVar9 = cVar25;
                    uVar28 = uVar28 + 2;
                    uVar20 = local_c8->end();
                } while (uVar28 < uVar20);
            }
            pcVar9 = (char*)Array<signed char, BucketAllocatorEASTL>::operator[](local_c8, 0);
            cVar25 = *pcVar9;
            uVar26 = (uint)cVar25;
            pcVar9 = (char*)Array<signed char, BucketAllocatorEASTL>::operator[](local_c8, 1);
            pAVar12 = local_88;
            iVar23 = (int)*pcVar9;
            if ('\0' < cVar25) {
                local_48 = (ulong)uVar26;
                uVar28 = 0;
                do {
                    pcVar9 = (char*)Array<signed char, eastl::allocator>::operator[](pAVar12, uVar28);
                    cVar25 = *pcVar9;
                    puVar10 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar12, uVar28);
                    *puVar10 = (char)(cVar25 * iVar23 + 32U >> 6);
                    uVar28 = uVar28 + 1;
                } while (local_48 != uVar28);
            }
            iVar27 = local_c8->end();
            if (2 < iVar27) {
                uVar28 = 2;
                do {
                    pcVar9 = (char*)Array<signed char, BucketAllocatorEASTL>::operator[](local_c8, uVar28);
                    uVar24 = (uint)*pcVar9;
                    local_e8 = uVar28;
                    pcVar9 = (char*)Array<signed char, BucketAllocatorEASTL>::operator[](local_c8, uVar28 | 1);
                    local_78 = (Patch*)CONCAT44(local_78._4_4_, (int)*pcVar9);
                    iVar27 = uVar24 - uVar26;
                    local_4c = uVar24;
                    if (iVar27 != 0 && (int)uVar26 <= (int)uVar24) {
                        uVar28 = (ulong)(int)uVar26;
                        local_48 = (ulong)(int)uVar24;
                        local_34 = *pcVar9 - iVar23;
                        iVar23 = iVar23 * iVar27 + iVar27 / 2;
                        do {
                            iVar5 = core::math::MathTool::SaneDiv(iVar23, iVar27);
                            pcVar9 = (char*)Array<signed char, eastl::allocator>::operator[](local_88, uVar28);
                            cVar25 = *pcVar9;
                            puVar10 = (undefined1*)Array<signed char, eastl::allocator>::operator[](local_88, uVar28);
                            *puVar10 = (char)(iVar5 * cVar25 + 32U >> 6);
                            uVar28 = uVar28 + 1;
                            iVar23 = iVar23 + local_34;
                        } while (local_48 != uVar28);
                    }
                    uVar28 = local_e8 + 2;
                    iVar27 = local_c8->end();
                    iVar23 = (int)local_78;
                    uVar26 = local_4c;
                } while ((int)uVar28 < iVar27);
            }
            pAVar12 = local_88;
            uVar28 = (ulong)(int)uVar26;
            do {
                pcVar9 = (char*)Array<signed char, eastl::allocator>::operator[](pAVar12, uVar28);
                cVar25 = *pcVar9;
                puVar10 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar12, uVar28);
                *puVar10 = (char)(cVar25 * iVar23 + 32U >> 6);
                uVar28 = uVar28 + 1;
            } while (uVar28 != 128);
            local_c8->set_max_size(0, 0);
        }
        cVar25 = local_b0->empty();
        if (cVar25 == '\0') {
            cVar25 = local_70.g1();
            pcVar9 = (char*)Array<signed char, BucketAllocatorEASTL>::operator[](local_b0, 0);
            *pcVar9 = cVar25;
            uVar28 = local_b0->end();
            if (2 < uVar28) {
                uVar28 = 2;
                do {
                    cVar3 = local_70.g1();
                    pcVar9 = (char*)Array<signed char, BucketAllocatorEASTL>::operator[](local_b0, uVar28);
                    cVar25 = cVar25 + cVar3 + '\x01';
                    *pcVar9 = cVar25;
                    uVar28 = uVar28 + 2;
                    uVar20 = local_b0->end();
                } while (uVar28 < uVar20);
            }
            pcVar9 = (char*)Array<signed char, BucketAllocatorEASTL>::operator[](local_b0, 0);
            cVar25 = *pcVar9;
            pcVar9 = (char*)Array<signed char, BucketAllocatorEASTL>::operator[](local_b0, 1);
            pAVar12 = local_90;
            iVar23 = *pcVar9 * 2;
            local_48 = CONCAT44(local_48._4_4_, (int)cVar25);
            if ('\0' < cVar25) {
                uVar28 = 0;
                do {
                    pbVar19 = (byte*)Array<signed char, eastl::allocator>::operator[](pAVar12, uVar28);
                    iVar27 = (uint)*pbVar19 + iVar23;
                    if (iVar27 < 0) {
                        iVar27 = 0;
                    }
                    puVar10 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar12, uVar28);
                    if (127 < iVar27) {
                        iVar27 = 128;
                    }
                    *puVar10 = (char)iVar27;
                    uVar28 = uVar28 + 1;
                } while ((uint)(int)cVar25 != uVar28);
            }
            iVar27 = local_b0->end();
            if (iVar27 < 3) {
                uVar26 = (uint)local_48;
            } else {
                uVar28 = 2;
                uVar26 = (uint)local_48;
                do {
                    pcVar9 = (char*)Array<signed char, BucketAllocatorEASTL>::operator[](local_b0, uVar28);
                    uVar24 = (uint)*pcVar9;
                    local_e8 = uVar28;
                    pcVar9 = (char*)Array<signed char, BucketAllocatorEASTL>::operator[](local_b0, uVar28 | 1);
                    local_78 = (Patch*)CONCAT44(local_78._4_4_, *pcVar9 * 2);
                    iVar27 = uVar24 - uVar26;
                    local_4c = uVar24;
                    if (iVar27 != 0 && (int)uVar26 <= (int)uVar24) {
                        uVar28 = (ulong)(int)uVar26;
                        local_48 = (ulong)(int)uVar24;
                        local_34 = *pcVar9 * 2 - iVar23;
                        iVar23 = iVar23 * iVar27 + iVar27 / 2;
                        do {
                            iVar5 = core::math::MathTool::SaneDiv(iVar23, iVar27);
                            pAVar12 = local_90;
                            pbVar19 = (byte*)Array<signed char, eastl::allocator>::operator[](local_90, uVar28);
                            iVar5 = iVar5 + (uint)*pbVar19;
                            if (iVar5 < 0) {
                                iVar5 = 0;
                            }
                            puVar10 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar12, uVar28);
                            if (127 < iVar5) {
                                iVar5 = 128;
                            }
                            *puVar10 = (char)iVar5;
                            uVar28 = uVar28 + 1;
                            iVar23 = iVar23 + local_34;
                        } while (local_48 != uVar28);
                    }
                    uVar28 = local_e8 + 2;
                    iVar27 = local_b0->end();
                    iVar23 = (int)local_78;
                    uVar26 = local_4c;
                } while ((int)uVar28 < iVar27);
            }
            pAVar12 = local_90;
            uVar28 = (ulong)(int)uVar26;
            do {
                pbVar19 = (byte*)Array<signed char, eastl::allocator>::operator[](pAVar12, uVar28);
                iVar27 = (uint)*pbVar19 + iVar23;
                if ((int)((uint)*pbVar19 + iVar23) < 0) {
                    iVar27 = 0;
                }
                uVar1 = (undefined1)iVar27;
                puVar10 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar12, uVar28);
                if (127 < iVar27) {
                    uVar1 = 128;
                }
                *puVar10 = uVar1;
                uVar28 = uVar28 + 1;
            } while (uVar28 != 128);
            local_b0->set_max_size(0, 0);
        }
        uVar28 = 0;
        do {
            uVar26 = local_70.g1();
            psVar11 = (shared_ptr<EnvelopeSet>*)Array<shared_ptr<EnvelopeSet>, eastl::allocator>::operator[](local_e0,
                                                                                                             uVar28);
            lVar8 = shared_ptr<EnvelopeSet>::operator->(psVar11);
            *(uint*)(lVar8 + 48) = uVar26 & 255;
            uVar28 = uVar28 + 1;
        } while (local_40 != uVar28);
        uVar28 = 0;
        do {
            psVar11 = (shared_ptr<EnvelopeSet>*)Array<shared_ptr<EnvelopeSet>, eastl::allocator>::operator[](local_e0,
                                                                                                             uVar28);
            pAVar17 = (Array<game::VarValue, eastl::allocator>*)shared_ptr<EnvelopeSet>::operator*(psVar11);
            cVar25 = pAVar17->empty();
            if (cVar25 == '\0') {
                bVar2 = local_70.g1();
                *(uint*)(pAVar17 + 52) = (uint)bVar2;
            }
            cVar25 = (pAVar17 + 24)->empty();
            if (cVar25 == '\0') {
                bVar2 = local_70.g1();
                *(uint*)(pAVar17 + 56) = (uint)bVar2;
            }
            if (0 < *(int*)(pAVar17 + 48)) {
                bVar2 = local_70.g1();
                *(uint*)(pAVar17 + 60) = (uint)bVar2;
            }
            uVar28 = uVar28 + 1;
        } while (local_40 != uVar28);
        uVar28 = 0;
        do {
            uVar26 = local_70.g1();
            psVar11 = (shared_ptr<EnvelopeSet>*)Array<shared_ptr<EnvelopeSet>, eastl::allocator>::operator[](local_e0,
                                                                                                             uVar28);
            lVar8 = shared_ptr<EnvelopeSet>::operator->(psVar11);
            *(uint*)(lVar8 + 68) = uVar26 & 255;
            uVar28 = uVar28 + 1;
        } while (local_40 != uVar28);
        uVar28 = 0;
        do {
            psVar11 = (shared_ptr<EnvelopeSet>*)Array<shared_ptr<EnvelopeSet>, eastl::allocator>::operator[](local_e0,
                                                                                                             uVar28);
            lVar8 = shared_ptr<EnvelopeSet>::operator*(psVar11);
            if (0 < *(int*)(lVar8 + 68)) {
                bVar2 = local_70.g1();
                *(uint*)(lVar8 + 64) = (uint)bVar2;
            }
            uVar28 = uVar28 + 1;
        } while (local_40 != uVar28);
        uVar28 = 0;
        do {
            psVar11 = (shared_ptr<EnvelopeSet>*)Array<shared_ptr<EnvelopeSet>, eastl::allocator>::operator[](local_e0,
                                                                                                             uVar28);
            lVar8 = shared_ptr<EnvelopeSet>::operator*(psVar11);
            if (0 < *(int*)(lVar8 + 64)) {
                bVar2 = local_70.g1();
                *(uint*)(lVar8 + 72) = (uint)bVar2;
            }
            uVar28 = uVar28 + 1;
        } while (local_40 != uVar28);
        local_110.~shared_ptr();
        local_130->~Array();
        local_b0->~Array();
        local_c8->~Array();
        local_e0->~Array();
        local_148->~Array();
        local_160->~Array();
        local_178->~Array();
        local_190->~Array();
        local_70.~WindowSavedPosition();
    }

    // 0x1002d8b30, 16 bytes, complete-object constructor, placed by class name
    // Patch::Patch(Array<unsigned char, eastl::allocator>&): jumps straight to the base-object constructor

    // 0x1002d8c50, 32 bytes, placed by class name
    // Patch::GetWaveId(int)
    int Patch::GetWaveId(int param_1) {
        int* piVar1;

        piVar1 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_320, (long)param_1);
        return *piVar1 + -1 >> 2;
    }

    // 0x1002d8c70, 32 bytes, placed by class name
    // Patch::IsJagFX(int)
    byte Patch::IsJagFX(int param_1) {
        byte* pbVar1;

        pbVar1 =
            (byte*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_320, (long)param_1);
        return *pbVar1 & 1;
    }

    // 0x1002d8c90, 32 bytes, placed by class name
    // Patch::IsVorbis(int)
    bool Patch::IsVorbis(int param_1) {
        byte* pbVar1;

        pbVar1 =
            (byte*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_320, (long)param_1);
        return (*pbVar1 & 1) == 0;
    }

    // 0x1002d8cb0, 160 bytes, placed by class name
    // Patch::NoteWillStop(int)
    ulong Patch::NoteWillStop(int param_1) {
        short* psVar1;
        shared_ptr<EnvelopeSet>* this_00;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        long lVar2;
        char* pcVar3;
        undefined8 unaff_R14;
        ulong uVar4;

        psVar1 = (short*)Array<short, eastl::allocator>::operator[]((Array<short, eastl::allocator>*)&field_32,
                                                                    (ulong)param_1);
        uVar4 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
        if (*psVar1 < 0) {
            this_00 = (shared_ptr<EnvelopeSet>*)Array<shared_ptr<EnvelopeSet>, eastl::allocator>::operator[](
                (Array<shared_ptr<EnvelopeSet>, eastl::allocator>*)&field_104, (ulong)param_1);
            this_01 =
                (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)shared_ptr<EnvelopeSet>::operator*(this_00);
            lVar2 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
            if (lVar2 != 0) {
                lVar2 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
                pcVar3 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)this_01, lVar2 - 1);
                if (*pcVar3 == '\0')
                    goto LAB_1002d8d3c;
            }
            lVar2 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01 + 24);
            if (lVar2 != 0) {
                pcVar3 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)&field_128, (ulong)param_1);
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
    // 0x1002d2150, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<std::atomic<bool> >::type make_shared<std::atomic<bool>, bool>(bool&&)
    /* shared_ptr_if_not_array<std::atomic<bool> >::type make_shared<std::atomic<bool>,
   bool>(bool&&) */

    jag* make_shared<std::atomic<bool>, bool>(bool* param_1) {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        int local_34;
        atomic* local_30[2];

        pvVar1 = (void*)aligned_alloc(24, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<std::atomic<bool>, bool>((void*)((long)pvVar1 + 16), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared_trivial<std::atomic<bool>>, int, std::atomic<bool>*&>(
                pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x1002d59a0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::midi2::MidiNote>::type make_shared<oldscape::midi2::MidiNote>()
    jag* make_shared<oldscape::midi2::MidiNote>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        MidiNote* local_28[2];

        pvVar1 = (void*)aligned_alloc(208, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::midi2::MidiNote>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::midi2::MidiNote>, int, oldscape::midi2::MidiNote*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
