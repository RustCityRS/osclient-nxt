// libs/game/runetek5/debugstrings/SparseStringPool.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "SparseStringPool.h"

namespace jag::game {
    // 0x1004c2580, 128 bytes, base-object constructor, placed by class name and debug map
    // SparseStringPool::SparseStringPool(shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&)
    void SparseStringPool::SparseStringPool(shared_ptr* param_1) {
        new (this) DebugStringProvider::IStringPool();
        field_0 = &PTR_Lookup_100f01a90;
        new (&field_8) Array<std::pair<int, int>, BucketAllocatorEASTL>();
        new (&field_32) Array<unsigned char, BucketAllocatorEASTL>();
        Load(this, param_1);
    }

    // 0x1004c2610, 336 bytes, placed by class name and debug map
    // SparseStringPool::Load(shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&)
    void SparseStringPool::Load(shared_ptr* param_1) {
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
        piVar3 = (int*)(&field_8)->data();
        pPVar2->g4sArr(piVar3, (ulong)uVar1 * 2);
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
                      "debugstrings/SparseStringPool.cpp",
                      32, (char*)0);
        }
        pcVar9 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this_00, uVar10 - 1);
        if (*pcVar9 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pool[poolSize - 1] == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "debugstrings/SparseStringPool.cpp",
                      33, (char*)0);
        }
    }

    // 0x1004c2770, 16 bytes, complete-object constructor, placed by class name and debug map
    // SparseStringPool::SparseStringPool(shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&): jumps straight to the base-object constructor

    // 0x1004c28c0, 208 bytes, placed by class name and debug map
    // SparseStringPool::Lookup(int) const
    undefined8 SparseStringPool::Lookup(int param_1) {
        undefined1* this_00;
        int iVar1;
        int iVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        pair* ppVar5;
        pair* ppVar6;
        pair<int, int> local_40[8];
        int local_38[2];

        this_00 = &field_8;
        local_38[0] = param_1;
        uVar3 = this_00->data();
        uVar4 = this_00->end();
        local_38[1] = 4294967295;
        std::pair<int, int>::pair<int&, int, false>(local_40, local_38, local_38 + 1);
        ppVar5 = eastl::binary_search_i<std::pair<int, int> const*, std::pair<int, int>, int->Lookup() const ::__0>(
            uVar3, uVar4, local_40);
        ppVar6 = (pair*)this_00->end();
        if (ppVar5 == ppVar6) {
            return 0;
        }
        iVar1 = *(int*)(ppVar5 + 4);
        if (((long)iVar1 < 0) || (iVar2 = (&field_32)->end(), iVar2 <= iVar1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("0 <= offset && offset < (int)m_pool.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "debugstrings/SparseStringPool.cpp",
                      49, (char*)0);
        }
        uVar3 = Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)&field_32, (long)iVar1);
        return uVar3;
    }

} // namespace jag::game
