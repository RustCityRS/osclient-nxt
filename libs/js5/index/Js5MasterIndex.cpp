// libs/js5/index/Js5MasterIndex.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.js5

#include "Js5MasterIndex.h"

namespace jag {
    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    Js5MasterIndex::GetMaximumArchiveID() const;

    // 0x1009f0ad0, 1856 bytes, base-object constructor, placed by class name and debug map
    // Js5MasterIndex::Js5MasterIndex(math::BigInteger const*, math::BigInteger const*, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    void Js5MasterIndex::Js5MasterIndex(BigInteger* param_1, BigInteger* param_2, PacketT* param_3) {
        char* pcVar1;
        PacketT<Array<unsigned char, eastl::allocator>>* pPVar2;
        char cVar3;
        byte bVar4;
        uint uVar5;
        undefined4 uVar6;
        undefined4 uVar7;
        long lVar8;
        type* ptVar9;
        ulong uVar10;
        uchar* puVar11;
        vector* pvVar12;
        long lVar13;
        undefined8 uVar14;
        undefined8 uVar15;
        void* pvVar16;
        size_t sVar17;
        unique_ptr<Js5MasterIndexArchiveData, std::default_delete<Js5MasterIndexArchiveData>>* puVar18;
        Js5MasterIndexArchiveData* this_00;
        undefined4* puVar19;
        uint uVar20;
        BigInteger* pBVar21;
        ulong uVar22;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>> local_1b8[32];
        PacketT<Array<unsigned char, BucketAllocatorEASTL>> local_198[32];
        BigInteger local_178[4];
        BigInteger local_158[4];
        TextureAtlasReference local_138;
        PacketT<Array<unsigned char, eastl::allocator>>* local_108;
        BigInteger* local_100;
        BigInteger* local_f8;
        undefined4 local_ec;
        Array<std::unique_ptr<Js5MasterIndexArchiveData, std::default_delete<Js5MasterIndexArchiveData>>,
              eastl::allocator>* local_e8;
        Whirlpool local_e0;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_e8 = (Array<std::unique_ptr<Js5MasterIndexArchiveData, std::default_delete<Js5MasterIndexArchiveData>>,
                          eastl::allocator>*)&field_8;
        local_100 = param_1;
        local_f8 = param_2;
        Array<std::unique_ptr<Js5MasterIndexArchiveData, std::default_delete<Js5MasterIndexArchiveData>>,
              eastl::allocator>::Array(local_e8);
        param_3->SetPos(0);
        cVar3 = param_3->g1();
        if (cVar3 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "fb == 0",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/index/Js5MasterIndex.cpp",
                13, (char*)0);
        }
        uVar5 = param_3->g4();
        bVar4 = param_3->g1();
        uVar20 = (uint)bVar4;
        field_0 = uVar20 - 1;
        lVar8 = param_3->size();
        local_138._32_8_ = (ulong)uVar20;
        param_3->SetPos((ulong)(uVar20 * 80) + lVar8);
        local_ec = CONCAT31(local_ec._1_3_, bVar4);
        lVar8 = param_3->size();
        uVar22 = (ulong)uVar5 - (lVar8 - 5U);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(local_1b8, uVar22);
        ptVar9 = (type*)param_3->GetDataPtr();
        uVar10 = param_3->size();
        local_1b8->pArrayBuffer(ptVar9, uVar10, uVar22);
        local_108 = (PacketT<Array<unsigned char, eastl::allocator>>*)param_3;
        new (&local_138) PacketT<Array<unsigned char, BucketAllocatorEASTL>>();
        pPVar2 = local_108;
        if ((local_100 == (BigInteger*)0) || (local_f8 == (BigInteger*)0)) {
            pvVar12 = local_1b8->SSOBeginPtr(ptVar9);
            Array<unsigned char, eastl::allocator>::Array<BucketAllocatorEASTL>(
                (Array<unsigned char, eastl::allocator>*)&local_e0, (Array*)pvVar12);
            local_138.SetDataRaw((Array*)&local_e0);
            local_e0.~Array();
            uVar10 = local_1b8->size();
            local_138.SetPos(uVar10);
        } else {
            puVar11 = (uchar*)local_1b8->GetDataPtr();
            math::BigInteger::BigInteger(local_178, puVar11, uVar22);
            local_158->PowMod(local_178, local_100);
            local_e0.Get();
            uVar10 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            local_138.Reserve(uVar10);
            puVar11 = (uchar*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar10 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            local_138.pArrayBuffer(puVar11, 0, uVar10);
            local_e0.~basic_string();
            local_158->~BigInteger();
            local_178->~BigInteger();
        }
        lVar13 = local_138.GetTextureAtlas();
        if (lVar13 != 65) {
            uVar14 = local_138.GetTextureAtlas();
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/index/Js5MasterIndex.cpp",
                45, "Incorrect Whirlpool length %d", uVar14);
        }
        new (&local_e0) Whirlpool();
        lVar13 = pPVar2->GetDataPtr();
        local_e0.Update((uchar*)(lVar13 + 5), lVar8 - 5U);
        new (local_178) PacketT<Array<unsigned char, BucketAllocatorEASTL>>(64);
        puVar11 = (uchar*)local_178->GetDataPtr();
        local_e0.Final(puVar11);
        lVar8 = 0;
        while (lVar8 != 64) {
            lVar13 = local_178->GetDataPtr();
            cVar3 = *(char*)(lVar13 + lVar8);
            lVar13 = local_138.GetDataPtr();
            pcVar1 = (char*)(lVar13 + 1 + lVar8);
            lVar8 = lVar8 + 1;
            if (cVar3 != *pcVar1) {
                local_158->ToString();
                uVar14 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_198->ToString();
                uVar15 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/index/"
                                "Js5MasterIndex.cpp",
                                58, "Digest does not match.  Expected %s, got %s", uVar14, uVar15);
            }
        }
        local_e8->set_max_size(local_138._32_8_, 0);
        if ((char)local_ec != '\0') {
            pBVar21 = (BigInteger*)6;
            uVar10 = 0;
            do {
                pPVar2 = local_108;
                local_f8 = pBVar21;
                local_108->SetPos((ulong)pBVar21);
                uVar6 = pPVar2->g4s();
                uVar7 = pPVar2->g4s();
                local_100 = (BigInteger*)CONCAT44(local_100._4_4_, uVar7);
                local_ec = pPVar2->g4();
                local_138._44_4_ = pPVar2->g4();
                new (local_158) Array<unsigned char, BucketAllocatorEASTL>(64);
                pvVar16 = (void*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                    (Array<unsigned char, BucketAllocatorEASTL>*)local_158, 0);
                lVar8 = local_108->GetDataPtr();
                lVar13 = local_108->size();
                sVar17 = local_158->end();
                _memcpy(pvVar16, (void*)(lVar8 + lVar13), sVar17);
                puVar18 = (unique_ptr<Js5MasterIndexArchiveData, std::default_delete<Js5MasterIndexArchiveData>>*)
                    Array<std::unique_ptr<Js5MasterIndexArchiveData, std::default_delete<Js5MasterIndexArchiveData>>,
                          eastl::allocator>::operator[](local_e8, uVar10);
                this_00 = operator_new(40);
                *(undefined8*)&this_00->field_16 = 0;
                *(undefined8*)&this_00->field_24 = 0;
                *(undefined8*)this_00 = 0;
                *(undefined8*)&this_00->field_8 = 0;
                *(undefined8*)&this_00->field_32 = 0;
                Js5MasterIndexArchiveData::Js5MasterIndexArchiveData(this_00);
                std::unique_ptr<Js5MasterIndexArchiveData, std::default_delete<Js5MasterIndexArchiveData>>::reset(
                    puVar18, this_00);
                puVar18 = (unique_ptr<Js5MasterIndexArchiveData, std::default_delete<Js5MasterIndexArchiveData>>*)
                    Array<std::unique_ptr<Js5MasterIndexArchiveData, std::default_delete<Js5MasterIndexArchiveData>>,
                          eastl::allocator>::operator[](local_e8, uVar10);
                puVar19 =
                    (undefined4*)std::unique_ptr<Js5MasterIndexArchiveData,
                                                 std::default_delete<Js5MasterIndexArchiveData>>::operator->(puVar18);
                *puVar19 = uVar6;
                puVar18 = (unique_ptr<Js5MasterIndexArchiveData, std::default_delete<Js5MasterIndexArchiveData>>*)
                    Array<std::unique_ptr<Js5MasterIndexArchiveData, std::default_delete<Js5MasterIndexArchiveData>>,
                          eastl::allocator>::operator[](local_e8, uVar10);
                lVar8 = std::unique_ptr<Js5MasterIndexArchiveData,
                                        std::default_delete<Js5MasterIndexArchiveData>>::operator->(puVar18);
                *(undefined4*)(lVar8 + 4) = local_100._0_4_;
                Array<unsigned char, eastl::allocator>::Array<BucketAllocatorEASTL>(
                    (Array<unsigned char, eastl::allocator>*)local_198, (Array*)local_158);
                puVar18 = (unique_ptr<Js5MasterIndexArchiveData, std::default_delete<Js5MasterIndexArchiveData>>*)
                    Array<std::unique_ptr<Js5MasterIndexArchiveData, std::default_delete<Js5MasterIndexArchiveData>>,
                          eastl::allocator>::operator[](local_e8, uVar10);
                lVar8 = std::unique_ptr<Js5MasterIndexArchiveData,
                                        std::default_delete<Js5MasterIndexArchiveData>>::operator->(puVar18);
                Array<unsigned char, eastl::allocator>::operator=((Array<unsigned char, eastl::allocator>*)(lVar8 + 8),
                                                                  (Array*)local_198);
                local_198->~Array();
                puVar18 = (unique_ptr<Js5MasterIndexArchiveData, std::default_delete<Js5MasterIndexArchiveData>>*)
                    Array<std::unique_ptr<Js5MasterIndexArchiveData, std::default_delete<Js5MasterIndexArchiveData>>,
                          eastl::allocator>::operator[](local_e8, uVar10);
                lVar8 = std::unique_ptr<Js5MasterIndexArchiveData,
                                        std::default_delete<Js5MasterIndexArchiveData>>::operator->(puVar18);
                *(undefined4*)(lVar8 + 32) = local_ec;
                puVar18 = (unique_ptr<Js5MasterIndexArchiveData, std::default_delete<Js5MasterIndexArchiveData>>*)
                    Array<std::unique_ptr<Js5MasterIndexArchiveData, std::default_delete<Js5MasterIndexArchiveData>>,
                          eastl::allocator>::operator[](local_e8, uVar10);
                lVar8 = std::unique_ptr<Js5MasterIndexArchiveData,
                                        std::default_delete<Js5MasterIndexArchiveData>>::operator->(puVar18);
                *(undefined4*)(lVar8 + 36) = local_138._44_4_;
                local_158->~Array();
                uVar10 = uVar10 + 1;
                pBVar21 = local_f8 + 10;
            } while (local_138._32_8_ != uVar10);
        }
        local_178->~PacketT();
        local_138.~PacketT();
        local_1b8->~PacketT();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1009f1480, 16 bytes, complete-object constructor, placed by class name and debug map
    // Js5MasterIndex::Js5MasterIndex(math::BigInteger const*, math::BigInteger const*, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&): jumps straight to the base-object constructor

} // namespace jag
