// libs/js5/index/Js5MasterIndex.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.js5

#include "Js5MasterIndex.h"

namespace jag {
    // 0x1000b9960: Js5MasterIndex::GetMaximumArchiveID() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x1009f0ad0
    Js5MasterIndex::Js5MasterIndex(const math::BigInteger* bigInteger1, const math::BigInteger* bigInteger2,
                                   PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg3) {
        char* pcVar1;
        uint32_t uVar6;
        uint32_t uVar7;
        Array<unsigned char, BucketAllocatorEASTL>* arg1;
        uint64_t uVar12;
        uint64_t uVar13;
        void* pvVar14;
        size_t sVar15;
        unique_ptr<Js5MasterIndexArchiveData>* puVar16;
        Js5MasterIndexArchiveData* this_00;
        uint32_t* puVar17;
        BigInteger* arg1_00;
        ReturnValue local_198;
        BigInteger local_158;
        uint32_t local_ec;

        Array<std::unique_ptr<Js5MasterIndexArchiveData>>* local_e8 =
            (Array<std::unique_ptr<Js5MasterIndexArchiveData>>*)&field_8;
        BigInteger* local_100 = bigInteger1;
        BigInteger* local_f8 = bigInteger2;
        new (local_e8) Array<std::unique_ptr<Js5MasterIndexArchiveData>>();
        arg3.SetPos(0);
        bool cVar3 = arg3.g1();
        if (cVar3) {
            LogAssert(
                "fb == 0",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/index/Js5MasterIndex.cpp",
                13, nullptr);
        }
        unsigned int uVar5 = arg3.g4();
        uint8_t bVar4 = arg3.g1();
        unsigned int uVar18 = (unsigned int)bVar4;
        m_maximumArchiveID = uVar18 - 1;
        long lVar8 = arg3.size();
        local_138._32_8_ = (unsigned long)uVar18;
        arg3.SetPos((unsigned long)(uVar18 * 80) + lVar8);
        local_ec = (((uint32_t)local_ec._1_3_ << 8) | (uint8_t)bVar4);
        lVar8 = arg3.size();
        unsigned long arg1_01 = (unsigned long)uVar5 - (lVar8 - 5U);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>> local_1b8(arg1_01);
        auto puVar9 = arg3.GetDataPtr();
        unsigned long uVar10 = arg3.size();
        local_1b8.pArrayBuffer(puVar9, uVar10, arg1_01);
        TextureAtlasReference local_138;
        PacketT<Array<unsigned char>>* pPVar2 = (PacketT<Array<unsigned char>>*)arg3;
        if ((local_100 == nullptr) || (local_f8 == nullptr)) {
            arg1 = (Array<unsigned char, BucketAllocatorEASTL>*)local_1b8.SSOBeginPtr();
            local_e0.Array<BucketAllocatorEASTL>(*arg1);
            local_138.SetDataRaw(local_e0);
            uVar10 = local_1b8.size();
            local_138.SetPos(uVar10);
        } else {
            puVar9 = (unsigned char*)local_1b8.GetDataPtr();
            local_178 = math::BigInteger(puVar9, arg1_01);
            local_158.PowMod(&local_178, local_100);
            local_e0 = local_158.Get();
            uVar10 = local_e0.size();
            local_138.Reserve(uVar10);
            puVar9 = (unsigned char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar10 = local_e0.size();
            local_138.pArrayBuffer(puVar9, 0, uVar10);
        }
        long lVar11 = local_138.GetTextureAtlas();
        if (lVar11 != 65) {
            uVar12 = local_138.GetTextureAtlas();
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/index/Js5MasterIndex.cpp",
                45, "Incorrect Whirlpool length %d", uVar12);
        }
        Whirlpool local_e0;
        lVar11 = pPVar2->GetDataPtr();
        local_e0.Update((lVar11 + 5), lVar8 - 5U);
        BigInteger local_178(64);
        puVar9 = (unsigned char*)local_178.GetDataPtr();
        local_e0.Final(puVar9);
        lVar8 = 0;
        while (lVar8 != 64) {
            lVar11 = local_178.GetDataPtr();
            cVar3 = *(char*)(lVar11 + lVar8);
            lVar11 = local_138.GetDataPtr();
            pcVar1 = (char*)(lVar11 + 1 + lVar8);
            lVar8 = lVar8 + 1;
            if (cVar3 != *pcVar1) {
                local_158 = local_138.ToString();
                uVar12 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_198 = local_178.ToString();
                uVar13 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/index/"
                                "Js5MasterIndex.cpp",
                                58, "Digest does not match.  Expected %s, got %s", uVar12, uVar13);
            }
        }
        local_e8->set_max_size(local_138._32_8_, 0);
        if ((char)local_ec != '\0') {
            arg1_00 = (BigInteger*)6;
            uVar10 = 0;
            do {
                pPVar2 = (PacketT<Array<unsigned char>>*)arg3;
                local_f8 = arg1_00;
                ((PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(PacketT<Array<unsigned char>>*)arg3)
                    ->SetPos((unsigned long)arg1_00);
                uVar6 = pPVar2->g4s();
                uVar7 = pPVar2->g4s();
                local_100 = (BigInteger*)(((uint64_t)local_100._4_4_ << 32) | (uint32_t)uVar7);
                local_ec = pPVar2->g4();
                local_138._44_4_ = pPVar2->g4();
                local_158 = Array<unsigned char, BucketAllocatorEASTL>(64);
                pvVar14 = &local_158[0];
                lVar8 = arg3.GetDataPtr();
                lVar11 = ((hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>*)(PacketT<Array<unsigned char>>*)arg3)
                             ->size();
                sVar15 = local_158.end();
                _memcpy(pvVar14, (void*)(lVar8 + lVar11), sVar15);
                puVar16 = (unique_ptr<Js5MasterIndexArchiveData>*)(*local_e8)[uVar10];
                this_00 = (Js5MasterIndexArchiveData*)operator new(40);
                *(uint64_t*)&this_00->field_16 = 0;
                *(uint64_t*)&this_00->field_24 = 0;
                *(uint64_t*)this_00 = 0;
                *(uint64_t*)&this_00->field_8 = 0;
                *(uint64_t*)&this_00->field_32 = 0;
                new (this_00) Js5MasterIndexArchiveData();
                puVar16->reset(this_00);
                puVar16 = (unique_ptr<Js5MasterIndexArchiveData>*)(*local_e8)[uVar10];
                puVar17 = (uint32_t*)(*puVar16).operator->();
                *puVar17 = uVar6;
                puVar16 = (unique_ptr<Js5MasterIndexArchiveData>*)(*local_e8)[uVar10];
                lVar8 = (*puVar16).operator->();
                *(uint32_t*)(lVar8 + 4) = local_100._0_4_;
                local_198.Array<BucketAllocatorEASTL>(local_158);
                puVar16 = (unique_ptr<Js5MasterIndexArchiveData>*)(*local_e8)[uVar10];
                lVar8 = (*puVar16).operator->();
                (*((lVar8 + 8))) = local_198;
                puVar16 = (unique_ptr<Js5MasterIndexArchiveData>*)(*local_e8)[uVar10];
                lVar8 = (*puVar16).operator->();
                *(uint32_t*)(lVar8 + 32) = local_ec;
                puVar16 = (unique_ptr<Js5MasterIndexArchiveData>*)(*local_e8)[uVar10];
                lVar8 = (*puVar16).operator->();
                *(uint32_t*)(lVar8 + 36) = local_138._44_4_;
                uVar10 = uVar10 + 1;
                arg1_00 = local_f8 + 10;
            } while (local_138._32_8_ != uVar10);
        }
    }

} // namespace jag
