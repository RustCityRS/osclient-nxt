// libs/game/runetek5/debugstrings/SparseStringPool.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "SparseStringPool.h"

namespace jag::game {
    // 0x1004c2580
    SparseStringPool::SparseStringPool(shared_ptr<PacketT<Array<unsigned char>>>& arg1)
        : DebugStringProvider::IStringPool() {
        Load(arg1);
    }

    // 0x1004c2610
    void SparseStringPool::Load(shared_ptr<PacketT<Array<unsigned char>>>& arg1) {
        auto pPVar2 = arg1.operator->();
        unsigned int uVar1 = pPVar2->g4();
        field_8.set_max_size((unsigned long)uVar1, 4);
        pPVar2 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)arg1.operator->();
        pPVar2->g4sArr((int*)field_8.data(), (unsigned long)uVar1 * 2);
        auto pTVar3 = arg1.operator->();
        long lVar4 = pTVar3->GetTextureAtlas();
        auto phVar5 = arg1.operator->();
        long lVar6 = phVar5->size();
        unsigned long arg1_02 = lVar4 - lVar6;
        uint8_t* this_00 = &field_32;
        this_00->set_max_size(arg1_02, 4);
        pPVar2 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)arg1.operator->();
        pPVar2->g1Arr((unsigned char*)(*this_00)[0], arg1_02);
        pTVar3 = (TextureAtlasReference*)arg1.operator->();
        lVar4 = pTVar3->GetTextureAtlas();
        phVar5 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)arg1.operator->();
        lVar6 = phVar5->size();
        if (lVar4 != lVar6) {
            LogAssert("data->GetSize() == data->GetPos()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "debugstrings/SparseStringPool.cpp",
                      32, nullptr);
        }
        char* pcVar7 = (char*)(*this_00)[arg1_02 - 1];
        if (*pcVar7 != '\0') {
            LogAssert("m_pool[poolSize - 1] == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "debugstrings/SparseStringPool.cpp",
                      33, nullptr);
        }
    }

    // 0x1004c28c0
    uint64_t SparseStringPool::Lookup(int arg1) const {
        int iVar2;
        __0* in_RCX;
        pair<int, int> local_40;
        int local_38[2];

        uint8_t* this_00 = &field_8;
        local_38[0] = arg1;
        auto ppVar3 = this_00->data();
        auto ppVar4 = this_00->end();
        local_38[1] = 4294967295;
        local_40.pair<int&, int, false>(*local_38, *(local_38 + 1));
        ppVar3 = eastl::binary_search_i<std::pair<int, int> const*, std::pair<int, int>, int->Lookup() const ::__0>(
            ppVar3, ppVar4, &local_40, in_RCX);
        ppVar4 = (pair<int, int>*)this_00->end();
        if (ppVar3 == ppVar4) {
            return 0;
        }
        int iVar1 = *(int*)(ppVar3 + 4);
        if (((long)iVar1 < 0) || (iVar2 = field_32.end(), iVar2 <= iVar1)) {
            LogAssert("0 <= offset && offset < (int)m_pool.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "debugstrings/SparseStringPool.cpp",
                      49, nullptr);
        }
        return field_32[(long)iVar1];
    }

} // namespace jag::game
