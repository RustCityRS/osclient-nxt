// libs/oldscape/jagex3/sound/wavecache.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "wavecache.h"

namespace jag::oldscape::sound {
    // 0x1002a6730
    auto WaveCache::GetJagFx(int arg1, int arg2, Array<int>& arg3) {
        int iVar3;
        long lVar4;
        int* piVar5;
        Wave* wave;
        Js5* js5;
        LazyWave local_a0;
        shared_ptr<dash3d::Decor> local_90;
        shared_ptr<Wave> local_50;
        ReturnValue local_38;

        long long local_58 = HashAudioID(&result, arg1, arg2, false);
        uint8_t* this_00 = &field_72;
        auto local_b0 = this_00->find(local_58);
        hashtable<long long, eastl::pair<long long const, LazyWave>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, LazyWave>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* local_60 =
            (hashtable<long long, eastl::pair<long long const, LazyWave>, eastl::allocator,
                       eastl::use_first<eastl::pair<long long const, LazyWave>>, eastl::equal_to<long long>,
                       eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                       eastl::prime_rehash_policy, false, true, true>*)this_00;
        auto local_80 = this_00->end();
        bool cVar1 = local_b0 != local_80;
        if (!cVar1) {
            cVar1 = arg3.empty();
            if ((!cVar1) && (piVar5 = (int*)arg3[0], *piVar5 < 1)) {
                return auto();
            }
            js5 = field_0;
            local_38 = JagFX::Load(*js5, arg1, arg2);
            if (&local_38 == js5) {
                new (&result) shared_ptr();
            } else {
                local_80 = ((JagFX*)local_38.operator->())->ToWave();
                wave = (Wave*)std::unique_ptr<Wave>::release();
                local_50.shared_ptr<Wave, void>(wave);
                local_90 = shared_ptr(&local_50);
                local_a0 = LazyWave(&local_90);
                local_80 = local_60->emplace<long long&, LazyWave>(local_58, local_a0);
                cVar1 = arg3.empty();
                if (!cVar1) {
                    lVar4 = local_50.operator->();
                    iVar3 = ((lVar4 + 8))->end();
                    piVar5 = &arg3[0];
                    *piVar5 = *piVar5 - iVar3;
                }
                result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_50);
            }
        } else {
            lVar4 = local_b0.HeapBeginPtr();
            result = ((lVar4 + 8))->Get();
        }
        return result;
    }

    // 0x1002a6960
    unsigned long WaveCache::HashAudioID(int arg1, int arg2, bool arg3) {
        uint32_t in_register_00000009;

        unsigned long uVar2 = (unsigned long)(int)(arg1 << 16 | (arg1 >> 12 | (arg1 & 4095U) << 4) ^ arg2);
        unsigned long uVar1 = uVar2 ^ 4294967296;
        if ((((uint32_t)in_register_00000009 << 8) | (uint8_t)arg3) == 0) {
            uVar1 = uVar2;
        }
        return uVar1;
    }

    // 0x1002a6a00
    auto WaveCache::GetJagVorbis(int arg1, int arg2, Array<int>& arg3) {
        bool bVar3;
        long lVar4;
        int* piVar5;
        shared_ptr<JagVorbis>* jagVorbis;
        JagVorbis* pJVar6;
        Wave* wave;
        LazyWave* this_01;
        Js5* js5;
        shared_ptr<JagVorbis> local_50;
        ReturnValue local_38;

        long long local_40 = HashAudioID(&result, arg1, arg2, true);
        uint8_t* puVar7 = &field_72;
        WaveCache* local_80 = this;
        auto local_b8 = puVar7->find(local_40);
        hashtable<long long, eastl::pair<long long const, LazyWave>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, LazyWave>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* local_78 =
            (hashtable<long long, eastl::pair<long long const, LazyWave>, eastl::allocator,
                       eastl::use_first<eastl::pair<long long const, LazyWave>>, eastl::equal_to<long long>,
                       eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                       eastl::prime_rehash_policy, false, true, true>*)puVar7;
        auto local_98 = puVar7->end();
        bool cVar2 = local_b8 != local_98;
        if (cVar2) {
            lVar4 = local_b8.HeapBeginPtr();
            result = ((lVar4 + 8))->Get();
            return result;
        }
        cVar2 = arg3.empty();
        if ((!cVar2) && (piVar5 = (int*)arg3[0], *piVar5 < 1)) {
            return auto();
        }
        WaveCache* pWVar1 = local_80;
        puVar7 = &local_80->field_16;
        auto local_a8 = puVar7->find(local_40);
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_68;
        local_98 = puVar7->end();
        cVar2 = local_a8 == local_98;
        if (!cVar2) {
            lVar4 = local_a8.HeapBeginPtr();
            local_68 = (*((lVar4 + 8)));
        } else {
            js5 = pWVar1->field_8;
            local_38 = JagVorbis::Load(*js5, arg1, arg2);
            bVar3 = &local_38 == js5;
            if (bVar3) {
                new (&result) shared_ptr();
            } else {
                pJVar6 = (JagVorbis*)std::unique_ptr<JagVorbis>::release();
                local_50.shared_ptr<JagVorbis, void>(pJVar6);
                local_98 = puVar7->emplace<long long&, shared_ptr<JagVorbis>>(local_40, local_50);
                jagVorbis = (shared_ptr<JagVorbis>*)(*puVar7)[local_40];
                local_68 = *jagVorbis;
            }
            if (bVar3)
                goto LAB_1002a6c44;
        }
        pJVar6 = (JagVorbis*)local_68.operator->();
        local_38 = pJVar6->ToWaveMultistep(arg3);
        bVar3 = &local_38 == pJVar6;
        hashtable<long long, eastl::pair<long long const, LazyWave>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, LazyWave>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_00 = local_78;
        if (bVar3) {
            new (&result) shared_ptr();
        } else {
            puVar7->erase(local_40);
            wave = (Wave*)std::unique_ptr<Wave>::release();
            local_50.shared_ptr<Wave, void>(wave);
            local_98 = this_00->emplace<long long&, shared_ptr<Wave>>(local_40, local_50);
            this_01 = (LazyWave*)(*this_00)[local_40];
            result = this_01->Get();
        }
    LAB_1002a6c44:
        return result;
    }

    // 0x1002a6f30
    WaveCache* WaveCache::GetJagVorbisLazy(int arg1, int arg2) {
        long lVar3;
        JagVorbis* jagVorbis;
        LazyWave* this_01;
        int in_ECX;
        uint32_t in_register_00000034;
        shared_ptr<dash3d::Decor> local_80;
        LazyWave local_40;

        int local_44 = in_ECX;
        long long local_68 = HashAudioID(arg2, in_ECX, true);
        hashtable<unsigned long long, eastl::pair<unsigned long long const, shared_ptr<game::LightSource>>,
                  eastl::allocator,
                  eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<game::LightSource>>>,
                  eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* this_00 =
            (hashtable<unsigned long long, eastl::pair<unsigned long long const, shared_ptr<game::LightSource>>,
                       eastl::allocator,
                       eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<game::LightSource>>>,
                       eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
                       eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                       true>*)((((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1) + 72);
        auto local_90 = this_00->find(local_68);
        hashtable<unsigned long long, eastl::pair<unsigned long long const, shared_ptr<game::LightSource>>,
                  eastl::allocator,
                  eastl::use_first<eastl::pair<unsigned long long const, shared_ptr<game::LightSource>>>,
                  eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* local_70 = this_00;
        auto local_60 = this_00->end();
        bool cVar1 = local_90 != local_60;
        WaveCache* this_02 = this;
        if (!cVar1) {
            local_40 = JagVorbis::Load(*(*(Js5**)((((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1) + 8)), arg2,
                                       local_44);
            jagVorbis = (JagVorbis*)std::unique_ptr<JagVorbis>::release();
            local_60.shared_ptr<JagVorbis, void>(jagVorbis);
            if (local_60 == nullptr) {
                new (this_02) LazyWave();
            } else {
                local_80 = shared_ptr(&local_60);
                local_40 = LazyWave(&local_80);
                this_01 = (LazyWave*)(*local_70)[local_68];
                *this_01 = local_40;
                new (this_02) dash3d::OperationBuffer(local_40);
            }
        } else {
            lVar3 = local_90.HeapBeginPtr();
            this_02 = this;
            new (this) dash3d::OperationBuffer(*((lVar3 + 8)));
        }
        return this_02;
    }

    // 0x1002a70e0
    auto WaveCache::GetJagFx(const char* str1, const char* str2, Array<int>& arg3) {
        int arg2;

        int arg1 = field_0->GetGroupId(str1);
        if ((arg1 < 0) || (arg2 = field_0->GetFileId(arg1, str2), arg2 < 0)) {
            return auto();
        }
        GetJagFx(&result, this, arg1, arg2, arg3);
        return result;
    }

    // 0x1002a7150
    auto WaveCache::GetJagVorbis(const char* str1, const char* str2, Array<int>& arg3) {
        int arg2;

        int arg1 = field_8->GetGroupId(str1);
        if ((arg1 < 0) || (arg2 = field_8->GetFileId(arg1, str2), arg2 < 0)) {
            return auto();
        }
        GetJagVorbis(&result, this, arg1, arg2, arg3);
        return result;
    }

    // 0x1002a71c0
    auto WaveCache::GetJagFx(int arg1, Array<int>& arg2, ErrorCapture& errorCapture) {
        int iVar1 = field_0->GetRT5FrameCount();
        if (iVar1 == 1) {
            iVar1 = arg1;
            arg1 = 0;
        } else {
            iVar1 = field_0->GetFileIdLimit(arg1);
            if (iVar1 != 1) {
                errorCapture.Raise("Unable to determine if id is groupid or fileid");
                return auto();
            }
            iVar1 = 0;
        }
        GetJagFx(&result, this, arg1, iVar1, arg2);
        return result;
    }

    // 0x1002a7250
    auto WaveCache::GetJagVorbis(int arg1, Array<int>& arg2, ErrorCapture& errorCapture) {
        int iVar1 = field_8->GetRT5FrameCount();
        if (iVar1 == 1) {
            iVar1 = arg1;
            arg1 = 0;
        } else {
            iVar1 = field_8->GetFileIdLimit(arg1);
            if (iVar1 != 1) {
                errorCapture.Raise("Unable to determine if id is groupid or fileid");
                return auto();
            }
            iVar1 = 0;
        }
        GetJagVorbis(&result, this, arg1, iVar1, arg2);
        return result;
    }

    // 0x1002a72e0
    LazyWave WaveCache::GetJagVorbisLazy(int arg1, ErrorCapture& errorCapture) {
        int iVar1 = field_8->GetRT5FrameCount();
        if (iVar1 == 1) {
            GetJagVorbisLazy(&result, (int)this, 0);
        } else {
            iVar1 = field_8->GetFileIdLimit(arg1);
            if (iVar1 == 1) {
                GetJagVorbisLazy(&result, (int)this, arg1);
            } else {
                errorCapture.Raise("Unable to determine if id is groupid or fileid");
                LazyWave result;
            }
        }
        return result;
    }

    // 0x1002a7360
    auto WaveCache::GetJagFx(const char* str, Array<int>& arg2) {
        auto result;
        char* str2;

        if (field_0->GetGroupId("") == -1) {
            str2 = "";
        } else {
            str2 = str;
            str = "";
        }
        GetJagFx(&result, this, str, str2, arg2);
        return result;
    }

    // 0x1002a73d0
    auto WaveCache::GetJagVorbis(const char* str, Array<int>& arg2) {
        auto result;
        char* str2;

        if (field_8->GetGroupId("") == -1) {
            str2 = "";
        } else {
            str2 = str;
            str = "";
        }
        GetJagVorbis(&result, this, str, str2, arg2);
        return result;
    }

} // namespace jag::oldscape::sound
