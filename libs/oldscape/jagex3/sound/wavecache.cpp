// libs/oldscape/jagex3/sound/wavecache.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "wavecache.h"

namespace jag::oldscape::sound {
    // 0x1002a6730, 560 bytes, placed by class name and debug map
    // WaveCache::GetJagFx(int, int, Array<int, eastl::allocator>&)
    WaveCache* WaveCache::GetJagFx(int param_1, int param_2, Array* param_3) {
        bool bVar1;
        char cVar2;
        int iVar3;
        int* piVar4;
        Wave* pWVar5;
        long lVar6;
        hashtable_iterator_base* extraout_RDX;
        undefined4 in_register_00000034;
        Js5* pJVar7;
        Array<game::VarValue, eastl::allocator>* in_R8;
        shared_ptr in_stack_ffffffffffffff48;
        eastl aeStack_a6[6];
        LazyWave local_a0;
        shared_ptr<dash3d::Decor> local_90[16];
        hashtable_iterator_base local_80[24];
        Array<game::VarValue, eastl::allocator>* local_68;
        LazyWave* local_60;
        undefined8 local_58;
        shared_ptr local_50;
        int local_40;
        int local_3c;
        unique_ptr<JagFX, std::default_delete<JagFX>> local_38[8];

        local_40 = (int)param_3;
        local_68 = in_R8;
        local_3c = param_2;
        local_58 = HashAudioID(this, param_2, local_40, false);
        eastl::hashtable<
            unsigned long long, eastl::pair<unsigned long long const, shared_ptr<game::LightSource>>, eastl::allocator,
            eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<game::LightSource>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)(aeStack_a6 +
                                                                                                          -10));
        local_60 = (LazyWave*)((undefined8*)CONCAT44(in_register_00000034, param_1) + 9);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator!=(aeStack_a6 + -10, local_80, extraout_RDX);
        if (bVar1) {
            ((aeStack_a6 + -10))->HeapBeginPtr();
            Get();
        } else {
            cVar2 = local_68->empty();
            if ((cVar2 == '\0') &&
                (piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)local_68, 0),
                 *piVar4 < 1)) {
                new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                return this;
            }
            pJVar7 = *(Js5**)CONCAT44(in_register_00000034, param_1);
            local_38->Load(pJVar7, local_3c, local_40);
            bVar1 = std::operator==((unique_ptr*)local_38, (_func_decltype_nullptr*)pJVar7);
            if (bVar1) {
                new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            } else {
                std::unique_ptr<JagFX, std::default_delete<JagFX>>::operator->(local_38);
                local_80->ToWave();
                pWVar5 = (Wave*)local_80->release();
                shared_ptr<Wave>::shared_ptr<Wave, void>((shared_ptr<Wave>*)&local_50, pWVar5);
                local_80->~unique_ptr();
                shared_ptr<dash3d::Decor>::shared_ptr(local_90, &local_50);
                new (&local_a0) LazyWave(in_stack_ffffffffffffff48);
                eastl::hashtable<long long, eastl::pair<long long const, LazyWave>, eastl::allocator,
                                 eastl::use_first<eastl::pair<long long const, LazyWave>>, eastl::equal_to<long long>,
                                 eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                 eastl::prime_rehash_policy, false, true,
                                 true>::emplace<long long&, LazyWave>((longlong*)local_80, local_60);
                local_a0.~LRUHashCacheWrapper();
                local_90->~shared_ptr();
                cVar2 = local_68->empty();
                if (cVar2 == '\0') {
                    lVar6 = shared_ptr<Wave>::operator->((shared_ptr<Wave>*)&local_50);
                    iVar3 = ((lVar6 + 8))->end();
                    piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)local_68, 0);
                    *piVar4 = *piVar4 - iVar3;
                }
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)this, &local_50);
                local_50.~shared_ptr();
            }
            std::unique_ptr<JagFX, std::default_delete<JagFX>>::~unique_ptr(local_38);
        }
        return this;
    }

    // 0x1002a6960, 64 bytes, placed by class name and debug map
    // WaveCache::HashAudioID(int, int, bool)
    ulong WaveCache::HashAudioID(int param_1, int param_2, bool param_3) {
        ulong uVar1;
        undefined3 in_register_00000009;
        ulong uVar2;

        uVar2 = (ulong)(int)(param_1 << 16 | (param_1 >> 12 | (param_1 & 4095U) << 4) ^ param_2);
        uVar1 = uVar2 ^ 4294967296;
        if (CONCAT31(in_register_00000009, param_3) == 0) {
            uVar1 = uVar2;
        }
        return uVar1;
    }

    // 0x1002a6a00, 720 bytes, placed by class name and debug map
    // WaveCache::GetJagVorbis(int, int, Array<int, eastl::allocator>&)
    WaveCache* WaveCache::GetJagVorbis(int param_1, int param_2, Array* param_3) {
        shared_ptr* this_00;
        bool bVar1;
        int* piVar3;
        long lVar4;
        JagVorbis* pJVar5;
        shared_ptr* psVar6;
        Array* pAVar7;
        Wave* pWVar8;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        undefined4 in_register_00000034;
        Js5* pJVar9;
        Array<game::VarValue, eastl::allocator>* in_R8;
        eastl local_b8[16];
        eastl local_a8[16];
        hashtable_iterator_base local_98[24];
        long local_80;
        shared_ptr* local_78;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_68[16];
        shared_ptr<JagVorbis> local_50[16];
        longlong local_40;
        unique_ptr local_38[8];

        local_40 = HashAudioID(this, param_2, (int)param_3, true);
        local_80 = CONCAT44(in_register_00000034, param_1);
        eastl::hashtable<
            unsigned long long, eastl::pair<unsigned long long const, shared_ptr<game::LightSource>>, eastl::allocator,
            eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<game::LightSource>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_b8);
        local_78 = (shared_ptr*)(CONCAT44(in_register_00000034, param_1) + 72);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator!=(local_b8, local_98, extraout_RDX);
        if (bVar1) {
            local_b8->HeapBeginPtr();
            Get();
            return this;
        }
        if ((in_R8->empty() == '\0') &&
            (piVar3 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)in_R8, 0),
             *piVar3 < 1)) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            return this;
        }
        lVar4 = local_80;
        this_00 = (shared_ptr*)(local_80 + 16);
        psVar6 = this_00;
        eastl::hashtable<
            unsigned long long, eastl::pair<unsigned long long const, shared_ptr<game::LightSource>>, eastl::allocator,
            eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<game::LightSource>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_a8);
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_68, (_func_decltype_nullptr*)psVar6);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator==(local_a8, local_98, extraout_RDX_00);
        if (bVar1) {
            pJVar9 = *(Js5**)(lVar4 + 8);
            local_38->Load(pJVar9, param_2, (int)param_3);
            bVar1 = std::operator==(local_38, (_func_decltype_nullptr*)pJVar9);
            if (bVar1) {
                new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            } else {
                pJVar5 = (JagVorbis*)local_38->release();
                shared_ptr<JagVorbis>::shared_ptr<JagVorbis, void>(local_50, pJVar5);
                eastl::hashtable<long long, eastl::pair<long long const, shared_ptr<JagVorbis>>, eastl::allocator,
                                 eastl::use_first<eastl::pair<long long const, shared_ptr<JagVorbis>>>,
                                 eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                 true>::emplace<long long&, shared_ptr<JagVorbis>>((longlong*)local_98, this_00);
                local_50->~shared_ptr();
                psVar6 = (shared_ptr*)eastl::hash_map<long long, shared_ptr<JagVorbis>, eastl::hash<long long>,
                                                      eastl::equal_to<long long>, eastl::allocator, false>::
                operator[]((hash_map<long long, shared_ptr<JagVorbis>, eastl::hash<long long>,
                                     eastl::equal_to<long long>, eastl::allocator, false>*)this_00,
                           &local_40);
                shared_ptr<JagVorbis>::operator=((shared_ptr<JagVorbis>*)local_68, psVar6);
            }
            local_38->~unique_ptr();
            if (bVar1)
                goto LAB_1002a6c44;
        } else {
            lVar4 = local_a8->HeapBeginPtr();
            shared_ptr<JagVorbis>::operator=((shared_ptr<JagVorbis>*)local_68, (shared_ptr*)(lVar4 + 8));
        }
        pAVar7 = (Array*)shared_ptr<JagVorbis>::operator->((shared_ptr<JagVorbis>*)local_68);
        local_38->ToWaveMultistep(pAVar7);
        bVar1 = std::operator==(local_38, (_func_decltype_nullptr*)pAVar7);
        psVar6 = local_78;
        if (bVar1) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            this_00->erase(&local_40);
            pWVar8 = (Wave*)local_38->release();
            shared_ptr<Wave>::shared_ptr<Wave, void>((shared_ptr<Wave>*)local_50, pWVar8);
            eastl::hashtable<long long, eastl::pair<long long const, LazyWave>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, LazyWave>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true,
                             true>::emplace<long long&, shared_ptr<Wave>>((longlong*)local_98, psVar6);
            local_50->~shared_ptr();
            eastl::hash_map<long long, LazyWave, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator,
                            false>::operator[]((hash_map<long long, LazyWave, eastl::hash<long long>,
                                                         eastl::equal_to<long long>, eastl::allocator, false>*)psVar6,
                                               &local_40);
            Get();
        }
        local_38->~unique_ptr();
    LAB_1002a6c44:
        local_68->~shared_ptr();
        return this;
    }

    // 0x1002a6f30, 416 bytes, placed by class name and debug map
    // WaveCache::GetJagVorbisLazy(int, int)
    WaveCache* WaveCache::GetJagVorbisLazy(int param_1, int param_2) {
        bool bVar1;
        long lVar2;
        JagVorbis* pJVar3;
        LazyWave* this_00;
        int in_ECX;
        hashtable_iterator_base* extraout_RDX;
        WaveCache* this_01;
        undefined4 in_register_00000034;
        shared_ptr in_stack_ffffffffffffff68;
        eastl aeStack_86[6];
        shared_ptr<dash3d::Decor> local_80[16];
        hash_map<long long, LazyWave, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false>*
            local_70;
        longlong local_68;
        shared_ptr local_60;
        WaveCache* local_50;
        int local_44;
        OperationBuffer local_40;

        local_50 = this;
        local_44 = in_ECX;
        local_68 = HashAudioID(this, param_2, in_ECX, true);
        eastl::hashtable<
            unsigned long long, eastl::pair<unsigned long long const, shared_ptr<game::LightSource>>, eastl::allocator,
            eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<game::LightSource>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)(aeStack_86 +
                                                                                                          -10));
        local_70 = (hash_map<long long, LazyWave, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator,
                             false>*)(CONCAT44(in_register_00000034, param_1) + 72);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator!=(aeStack_86 + -10, (hashtable_iterator_base*)&local_60, extraout_RDX);
        this_01 = local_50;
        if (bVar1) {
            lVar2 = ((aeStack_86 + -10))->HeapBeginPtr();
            this_01 = local_50;
            new (local_50) dash3d::OperationBuffer((OperationBuffer*)(lVar2 + 8));
        } else {
            local_40.Load(*(Js5**)(CONCAT44(in_register_00000034, param_1) + 8), param_2, local_44);
            pJVar3 = (JagVorbis*)local_40.release();
            shared_ptr<JagVorbis>::shared_ptr<JagVorbis, void>((shared_ptr<JagVorbis>*)&local_60, pJVar3);
            local_40.~unique_ptr();
            bVar1 = operator==(&local_60, (_func_decltype_nullptr*)0);
            if (bVar1) {
                new (this_01) LazyWave();
            } else {
                shared_ptr<dash3d::Decor>::shared_ptr(local_80, &local_60);
                new (&local_40) LazyWave(in_stack_ffffffffffffff68);
                local_80->~shared_ptr();
                this_00 =
                    (LazyWave*)eastl::hash_map<long long, LazyWave, eastl::hash<long long>, eastl::equal_to<long long>,
                                               eastl::allocator, false>::operator[](local_70, &local_68);
                LazyWave::operator=(this_00, (LazyWave*)&local_40);
                new (this_01) dash3d::OperationBuffer(&local_40);
                local_40.~LRUHashCacheWrapper();
            }
            local_60.~shared_ptr();
        }
        return this_01;
    }

    // 0x1002a70e0, 112 bytes, placed by class name
    // WaveCache::GetJagFx(char const*, char const*, Array<int, eastl::allocator>&)
    WaveCache* WaveCache::GetJagFx(char* param_1, char* param_2, Array* param_3) {
        int iVar1;
        uint uVar2;

        iVar1 = (*(Js5**)param_1)->GetGroupId(param_2);
        if ((iVar1 < 0) || (uVar2 = (*(Js5**)param_1)->GetFileId(iVar1, param_3), (int)uVar2 < 0)) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            return this;
        }
        GetJagFx(this, (int)param_1, iVar1, (Array*)(ulong)uVar2);
        return this;
    }

    // 0x1002a7150, 112 bytes, placed by class name
    // WaveCache::GetJagVorbis(char const*, char const*, Array<int, eastl::allocator>&)
    WaveCache* WaveCache::GetJagVorbis(char* param_1, char* param_2, Array* param_3) {
        int iVar1;
        uint uVar2;

        iVar1 = (*(Js5**)(param_1 + 8))->GetGroupId(param_2);
        if ((iVar1 < 0) || (uVar2 = (*(Js5**)(param_1 + 8))->GetFileId(iVar1, param_3), (int)uVar2 < 0)) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            return this;
        }
        GetJagVorbis(this, (int)param_1, iVar1, (Array*)(ulong)uVar2);
        return this;
    }

    // 0x1002a71c0, 144 bytes, placed by class name
    // WaveCache::GetJagFx(int, Array<int, eastl::allocator>&, ErrorCapture&)
    WaveCache* WaveCache::GetJagFx(int param_1, Array* param_2, ErrorCapture* param_3) {
        int iVar1;
        Array* pAVar2;
        undefined4 in_register_00000034;
        ErrorCapture* in_R8;
        int iVar3;

        pAVar2 = (Array*)((ulong)param_2 & 4294967295);
        iVar1 = (*(Animation**)CONCAT44(in_register_00000034, param_1))->GetRT5FrameCount();
        if (iVar1 == 1) {
            iVar3 = 0;
        } else {
            iVar3 = (int)param_2;
            iVar1 = (*(Js5**)CONCAT44(in_register_00000034, param_1))->GetFileIdLimit(iVar3);
            if (iVar1 != 1) {
                in_R8->Raise("Unable to determine if id is groupid or fileid");
                new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                return this;
            }
            pAVar2 = (Array*)0;
        }
        GetJagFx(this, param_1, iVar3, pAVar2);
        return this;
    }

    // 0x1002a7250, 144 bytes, placed by class name
    // WaveCache::GetJagVorbis(int, Array<int, eastl::allocator>&, ErrorCapture&)
    WaveCache* WaveCache::GetJagVorbis(int param_1, Array* param_2, ErrorCapture* param_3) {
        int iVar1;
        Array* pAVar2;
        undefined4 in_register_00000034;
        ErrorCapture* in_R8;
        int iVar3;

        pAVar2 = (Array*)((ulong)param_2 & 4294967295);
        iVar1 = (*(Animation**)(CONCAT44(in_register_00000034, param_1) + 8))->GetRT5FrameCount();
        if (iVar1 == 1) {
            iVar3 = 0;
        } else {
            iVar3 = (int)param_2;
            iVar1 = (*(Js5**)(CONCAT44(in_register_00000034, param_1) + 8))->GetFileIdLimit(iVar3);
            if (iVar1 != 1) {
                in_R8->Raise("Unable to determine if id is groupid or fileid");
                new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                return this;
            }
            pAVar2 = (Array*)0;
        }
        GetJagVorbis(this, param_1, iVar3, pAVar2);
        return this;
    }

    // 0x1002a72e0, 128 bytes, placed by class name
    // WaveCache::GetJagVorbisLazy(int, ErrorCapture&)
    WaveCache* WaveCache::GetJagVorbisLazy(int param_1, ErrorCapture* param_2) {
        int iVar1;
        ErrorCapture* in_RCX;
        undefined4 in_register_00000034;

        iVar1 = (*(Animation**)(CONCAT44(in_register_00000034, param_1) + 8))->GetRT5FrameCount();
        if (iVar1 == 1) {
            GetJagVorbisLazy(this, param_1, 0);
        } else {
            iVar1 = (*(Js5**)(CONCAT44(in_register_00000034, param_1) + 8))->GetFileIdLimit((int)param_2);
            if (iVar1 == 1) {
                GetJagVorbisLazy(this, param_1, (int)param_2);
            } else {
                in_RCX->Raise("Unable to determine if id is groupid or fileid");
                new (this) LazyWave();
            }
        }
        return this;
    }

    // 0x1002a7360, 112 bytes, placed by class name
    // WaveCache::GetJagFx(char const*, Array<int, eastl::allocator>&)
    WaveCache* WaveCache::GetJagFx(char* param_1, Array* param_2) {
        Array* pAVar2;
        char* pcVar3;

        if ((*(Js5**)param_1)->GetGroupId("") == -1) {
            pAVar2 = (Array*)"";
            pcVar3 = (char*)param_2;
        } else {
            pcVar3 = "";
            pAVar2 = param_2;
        }
        GetJagFx(this, param_1, pcVar3, pAVar2);
        return this;
    }

    // 0x1002a73d0, 112 bytes, placed by class name
    // WaveCache::GetJagVorbis(char const*, Array<int, eastl::allocator>&)
    WaveCache* WaveCache::GetJagVorbis(char* param_1, Array* param_2) {
        Array* pAVar2;
        char* pcVar3;

        if ((*(Js5**)(param_1 + 8))->GetGroupId("") == -1) {
            pAVar2 = (Array*)"";
            pcVar3 = (char*)param_2;
        } else {
            pcVar3 = "";
            pAVar2 = param_2;
        }
        GetJagVorbis(this, param_1, pcVar3, pAVar2);
        return this;
    }

} // namespace jag::oldscape::sound
