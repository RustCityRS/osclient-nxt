// libs/game/runetek5/debugstrings/NonSparseStringPool.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "NonSparseStringPool.h"

namespace jag::game {
    // 0x1004c21f0
    NonSparseStringPool::NonSparseStringPool(shared_ptr<PacketT<Array<unsigned char>>>& arg1)
        : DebugStringProvider::IStringPool() {
        Load(arg1);
    }

    // 0x1004c2290
    void NonSparseStringPool::Load(shared_ptr<PacketT<Array<unsigned char>>>& arg1) {
        auto pPVar2 = arg1.operator->();
        unsigned int uVar1 = pPVar2->g4();
        field_8.set_max_size((unsigned long)uVar1, 4);
        pPVar2 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)arg1.operator->();
        pPVar2->g4sArr((int*)field_8[0], (unsigned long)uVar1);
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
                      "debugstrings/NonSparseStringPool.cpp",
                      26, nullptr);
        }
        char* pcVar7 = (char*)(*this_00)[arg1_02 - 1];
        if (*pcVar7 != '\0') {
            LogAssert("m_pool[poolSize - 1] == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "debugstrings/NonSparseStringPool.cpp",
                      27, nullptr);
        }
    }

    // 0x1004c2480
    uint64_t NonSparseStringPool::Lookup(int arg1) const {
        int iVar1;
        int* piVar3;

        if (-1 < arg1) {
            iVar1 = field_8.end();
            if (arg1 < iVar1) {
                piVar3 = &field_8[(long)arg1];
                iVar1 = *piVar3;
                if (-1 < (long)iVar1) {
                    if (field_32.end() <= iVar1) {
                        LogAssert("offset < (int)m_pool.size()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "debugstrings/NonSparseStringPool.cpp",
                                  42, nullptr);
                    }
                    return field_32[(long)iVar1];
                }
            }
        }
        return 0;
    }

} // namespace jag::game
