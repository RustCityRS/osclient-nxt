// libs/jtl/JTL_ScopedContainerElementEraser.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    template <
        typename...> // 3 instantiations, e.g. <eastl::fixed_hash_map<int, game::DelayedVariable, 128ul, 129ul, true, eastl::hash<int>, eastl:, <eastl::multimap<game::CoordGrid, shared_ptr<game::Entity>, eastl::less<game::Co, <eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator, eastl::vector<eastl
    class ScopedContainerElementEraser {
    public:
        ScopedContainerElementEraser(eastl::multimap<game::CoordGrid, shared_ptr<game::Entity>>& multimap);
        void erase(game::CoordGrid coordGrid);
        ~ScopedContainerElementEraser();
        ScopedContainerElementEraser(
            eastl::fixed_hash_map<int, game::DelayedVariable, 128ul, 129ul, true, eastl::hash<int>,
                                  eastl::equal_to<int>, false>& fixed_hash_map);
        void erase(unsigned int arg1);
        ScopedContainerElementEraser(eastl::vector_map<int, game::VarValue>& arg1);
        void erase(int arg1);
    };

    // 0x10048d740
    void
    ScopedContainerElementEraser<eastl::multimap<game::CoordGrid, shared_ptr<game::Entity>>, game::CoordGrid>::erase(
        game::CoordGrid coordGrid) {
        CoordGrid local_18;

        local_18._0_8_ = coordGrid._0_8_;
        local_18.field_8 = coordGrid.field_8;
        push_back(local_18);
    }

    // 0x10048d770
    ScopedContainerElementEraser<eastl::multimap<game::CoordGrid, shared_ptr<game::Entity>>, game::CoordGrid>::
        ScopedContainerElementEraser(eastl::multimap<game::CoordGrid, shared_ptr<game::Entity>>& multimap)
        : eastl::fixed_vector<game::CoordGrid, 64ul>() {
        *(multimap<game::CoordGrid, shared_ptr<game::Entity>>**)(this + 808) = multimap;
    }

    // 0x10048dbc0
    ScopedContainerElementEraser<eastl::multimap<game::CoordGrid, shared_ptr<game::Entity>>,
                                 game::CoordGrid>::~ScopedContainerElementEraser() {
        auto coordGrid = HeapBeginPtr();
        auto pCVar1 = end();
        for (; coordGrid != pCVar1; coordGrid = (CoordGrid*)&coordGrid->field_12) {
            (*(multimap<game::CoordGrid, shared_ptr<game::Entity>>**)(this + 808))->erase(*coordGrid);
        }
    }

    // 0x1004ce0e0
    void ScopedContainerElementEraser<eastl::fixed_hash_map<int, game::DelayedVariable, 128ul, 129ul, true,
                                                            eastl::hash<int>, eastl::equal_to<int>, false>,
                                      unsigned int>::erase(unsigned int arg1) {
        push_back(arg1);
    }

    // 0x1004d5960
    ScopedContainerElementEraser<
        eastl::fixed_hash_map<int, game::DelayedVariable, 128ul, 129ul, true, eastl::hash<int>, eastl::equal_to<int>,
                              false>,
        unsigned int>::ScopedContainerElementEraser(eastl::fixed_hash_map<int, game::DelayedVariable, 128ul, 129ul,
                                                                          true, eastl::hash<int>, eastl::equal_to<int>,
                                                                          false>& fixed_hash_map)
        : eastl::fixed_vector<unsigned int, 64ul>() {
        *(fixed_hash_map<int, game::DelayedVariable, _128ul, _129ul, true, eastl::hash<int>, eastl::equal_to<int>,
                         false>**)(this + 296) = fixed_hash_map;
    }

    // 0x1004d5b50
    ScopedContainerElementEraser<eastl::fixed_hash_map<int, game::DelayedVariable, 128ul, 129ul, true, eastl::hash<int>,
                                                       eastl::equal_to<int>, false>,
                                 unsigned int>::~ScopedContainerElementEraser() {
        int local_2c;

        auto piVar1 = HeapBeginPtr();
        auto piVar2 = end();
        if (piVar1 != piVar2) {
            do {
                local_2c = *piVar1;
                (*(hashtable<int, eastl::pair<int const, game::DelayedVariable>,
                             eastl::fixed_hashtable_allocator<130ul, 32ul, 128ul, 8ul, 0ul, true>,
                             eastl::use_first<eastl::pair<int const, game::DelayedVariable>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>**)(this + 296))
                    ->erase(local_2c);
                piVar1 = piVar1 + 1;
            } while (piVar1 != piVar2);
        }
    }

    // 0x100509c30
    void ScopedContainerElementEraser<eastl::vector_map<int, game::VarValue>, int>::erase(int arg1) {
        push_back(arg1);
    }

    // 0x1005146e0
    ScopedContainerElementEraser<eastl::vector_map<int, game::VarValue>, int>::ScopedContainerElementEraser(
        eastl::vector_map<int, game::VarValue>& arg1)
        : eastl::fixed_vector<int, 64ul>() {
        *(vector_map<int, game::VarValue>**)(this + 296) = arg1;
    }

    // 0x1005147c0
    ScopedContainerElementEraser<eastl::vector_map<int, game::VarValue>, int>::~ScopedContainerElementEraser() {
        long lVar1 = HeapBeginPtr();
        long lVar2 = end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 4) {
            eastl::vector_map<int, game::VarValue>::erase(*(*(int**)(this + 296)));
        }
    }

} // namespace jag
