// libs/game/runetek5/debugstrings/NonSparseStringPool.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "NonSparseStringPool.h"

namespace jag::game {
    // 0x1004c21f0, 128 bytes, base-object constructor, placed by class name and debug map
    // NonSparseStringPool::NonSparseStringPool(shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&)
    void NonSparseStringPool::NonSparseStringPool(shared_ptr* param_1) {
        new (this) DebugStringProvider::IStringPool();
        field_0 = &PTR_Lookup_100f01a68;
        new (&field_8) Array<int, BucketAllocatorEASTL>();
        new (&field_32) Array<unsigned char, BucketAllocatorEASTL>();
        Load(this, param_1);
    }

    // 0x1004c2290, 336 bytes, placed by class name
    // NonSparseStringPool::Load(shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&)
    void NonSparseStringPool::Load(shared_ptr* param_1) {
        uint uVar1;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* pPVar2;
        int* piVar3;
        TextureAtlasReference* pTVar4;
        long lVar5;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar6;
        long lVar7;
        uchar* puVar8;
        char* pcVar9;
        ulong uVar10;
        undefined1* this_00;

        pPVar2 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                     shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                         (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
        uVar1 = pPVar2->g4();
        (&field_8, (ulong)uVar1, 4)->set_max_size();
        pPVar2 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                     shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                         (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
        piVar3 = (int*)Array<int, BucketAllocatorEASTL>::operator[]((Array<int, BucketAllocatorEASTL>*)&field_8, 0);
        pPVar2->g4sArr(piVar3, (ulong)uVar1);
        pTVar4 = (TextureAtlasReference*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
            (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
        lVar5 = pTVar4->GetTextureAtlas();
        phVar6 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)
                     shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                         (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
        lVar7 =
            eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::size(phVar6);
        uVar10 = lVar5 - lVar7;
        this_00 = &field_32;
        this_00->set_max_size(uVar10, 4);
        pPVar2 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                     shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                         (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
        puVar8 = (uchar*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this_00, 0);
        pPVar2->g1Arr(puVar8, uVar10);
        pTVar4 = (TextureAtlasReference*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
            (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
        lVar5 = pTVar4->GetTextureAtlas();
        phVar6 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)
                     shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                         (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
        lVar7 =
            eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::size(phVar6);
        if (lVar5 != lVar7) {
            /* WARNING: Subroutine does not return */
            LogAssert("data->GetSize() == data->GetPos()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "debugstrings/NonSparseStringPool.cpp",
                      26, (char*)0);
        }
        pcVar9 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this_00, uVar10 - 1);
        if (*pcVar9 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pool[poolSize - 1] == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "debugstrings/NonSparseStringPool.cpp",
                      27, (char*)0);
        }
    }

    // 0x1004c23e0, 16 bytes, complete-object constructor, placed by class name
    // NonSparseStringPool::NonSparseStringPool(shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&): jumps straight to the base-object constructor

    // 0x1004c2480, 128 bytes, placed by class name
    // NonSparseStringPool::Lookup(int) const
    undefined8 NonSparseStringPool::Lookup(int param_1) {
        int iVar1;
        int iVar2;
        int* piVar3;
        undefined8 uVar4;

        if (-1 < param_1) {
            iVar1 = (&field_8)->end();
            if (param_1 < iVar1) {
                piVar3 = (int*)Array<int, BucketAllocatorEASTL>::operator[]((Array<int, BucketAllocatorEASTL>*)&field_8,
                                                                            (long)param_1);
                iVar1 = *piVar3;
                if (-1 < (long)iVar1) {
                    iVar2 = (&field_32)->end();
                    if (iVar2 <= iVar1) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("offset < (int)m_pool.size()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "debugstrings/NonSparseStringPool.cpp",
                                  42, (char*)0);
                    }
                    uVar4 = Array<unsigned char, BucketAllocatorEASTL>::operator[](
                        (Array<unsigned char, BucketAllocatorEASTL>*)&field_32, (long)iVar1);
                    return uVar4;
                }
            }
        }
        return 0;
    }

} // namespace jag::game
