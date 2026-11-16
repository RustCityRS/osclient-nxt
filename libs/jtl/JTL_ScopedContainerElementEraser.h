// libs/jtl/JTL_ScopedContainerElementEraser.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    template <
        typename...> // 3 instantiations, e.g. <eastl::fixed_hash_map<int, game::DelayedVariable, 128ul, 129ul, true, eastl::hash<int>, eastl:, <eastl::multimap<game::CoordGrid, shared_ptr<game::Entity>, eastl::less<game::Co, <eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator, eastl::vector<eastl
    class ScopedContainerElementEraser {
    public:
        ScopedContainerElementEraser(eastl::multimap<game::CoordGrid, shared_ptr<game::Entity>,
                                                     eastl::less<game::CoordGrid>, eastl::allocator>&);
        void erase(game::CoordGrid);
        ~ScopedContainerElementEraser();
        ScopedContainerElementEraser(
            eastl::fixed_hash_map<int, game::DelayedVariable, 128ul, 129ul, true, eastl::hash<int>,
                                  eastl::equal_to<int>, false, eastl::allocator>&);
        void erase(unsigned int);
        ScopedContainerElementEraser(
            eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator>>&);
        void erase(int);
    };

    // 0x10048d730, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ScopedContainerElementEraser<eastl::multimap<game::CoordGrid, shared_ptr<game::Entity>, eastl::less<game::CoordGrid>, eastl::allocator>, game::CoordGrid>::ScopedContainerElementEraser(eastl::multimap<game::CoordGrid, shared_ptr<game::Entity>, eastl::less<game::CoordGrid>, eastl::allocator>&): jumps straight to the base-object constructor

    // 0x10048d740, 32 bytes, inline, placed by class name and debug map
    // ScopedContainerElementEraser<eastl::multimap<game::CoordGrid, shared_ptr<game::Entity>, eastl::less<game::CoordGrid>, eastl::allocator>, game::CoordGrid>::erase(game::CoordGrid)
    void jag::ScopedContainerElementEraser<
        eastl::multimap<game::CoordGrid, shared_ptr<game::Entity>, eastl::less<game::CoordGrid>, eastl::allocator>,
        game::CoordGrid>::erase(CoordGrid param_1) {
        eastl::fixed_vector<game::CoordGrid, 64ul, true, eastl::allocator>::push_back(param_1._0_8_);
    }

    // 0x10048d760, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ScopedContainerElementEraser<eastl::multimap<game::CoordGrid, shared_ptr<game::Entity>, eastl::less<game::CoordGrid>, eastl::allocator>, game::CoordGrid>::~ScopedContainerElementEraser(): jumps straight to the base-object destructor

    // 0x10048d770, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // ScopedContainerElementEraser<eastl::multimap<game::CoordGrid, shared_ptr<game::Entity>, eastl::less<game::CoordGrid>, eastl::allocator>, game::CoordGrid>::ScopedContainerElementEraser(eastl::multimap<game::CoordGrid, shared_ptr<game::Entity>, eastl::less<game::CoordGrid>, eastl::allocator>&)
    void jag::ScopedContainerElementEraser<
        eastl::multimap<game::CoordGrid, shared_ptr<game::Entity>, eastl::less<game::CoordGrid>, eastl::allocator>,
        game::CoordGrid>::
        ScopedContainerElementEraser(
            ScopedContainerElementEraser<eastl::multimap<game::CoordGrid, shared_ptr<game::Entity>,
                                                         eastl::less<game::CoordGrid>, eastl::allocator>,
                                         game::CoordGrid>* this,
            multimap* param_1) {
        new (this) eastl::fixed_vector<game::CoordGrid, 64ul, true, eastl::allocator>();
        *(multimap**)(this + 808) = param_1;
    }

    // 0x10048dbc0, 112 bytes, base-object destructor, inline, placed by class name and debug map
    // ScopedContainerElementEraser<eastl::multimap<game::CoordGrid, shared_ptr<game::Entity>, eastl::less<game::CoordGrid>, eastl::allocator>, game::CoordGrid>::~ScopedContainerElementEraser()
    void jag::ScopedContainerElementEraser<
        eastl::multimap<game::CoordGrid, shared_ptr<game::Entity>, eastl::less<game::CoordGrid>, eastl::allocator>,
        game::CoordGrid>::
        ~ScopedContainerElementEraser(
            ScopedContainerElementEraser<eastl::multimap<game::CoordGrid, shared_ptr<game::Entity>,
                                                         eastl::less<game::CoordGrid>, eastl::allocator>,
                                         game::CoordGrid>* this) {
        long lVar1;
        long lVar2;

        lVar1 = HeapBeginPtr();
        lVar2 = end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 12) {
            eastl::multimap<game::CoordGrid, shared_ptr<game::Entity>, eastl::less<game::CoordGrid>,
                            eastl::allocator>::erase(*(CoordGrid**)(this + 808));
        }
        ~fixed_vector();
    }

    // 0x1004ce080, 16 bytes, complete-object constructor, inline, placed by class name
    // ScopedContainerElementEraser<eastl::fixed_hash_map<int, game::DelayedVariable, 128ul, 129ul, true, eastl::hash<int>, eastl::equal_to<int>, false, eastl::allocator>, unsigned int>::ScopedContainerElementEraser(eastl::fixed_hash_map<int, game::DelayedVariable, 128ul, 129ul, true, eastl::hash<int>, eastl::equal_to<int>, false, eastl::allocator>&): jumps straight to the base-object constructor

    // 0x1004ce0e0, 32 bytes, inline, placed by class name
    // ScopedContainerElementEraser<eastl::fixed_hash_map<int, game::DelayedVariable, 128ul, 129ul, true, eastl::hash<int>, eastl::equal_to<int>, false, eastl::allocator>, unsigned int>::erase(unsigned int)
    void jag::ScopedContainerElementEraser<
        eastl::fixed_hash_map<int, game::DelayedVariable, 128ul, 129ul, true, eastl::hash<int>, eastl::equal_to<int>,
                              false, eastl::allocator>,
        unsigned int>::erase(uint param_1) {
        undefined4 in_register_0000003c;

        eastl::fixed_vector<unsigned int, 64ul, true, eastl::allocator>::push_back(
            (uint*)CONCAT44(in_register_0000003c, param_1));
    }

    // 0x1004ce100, 16 bytes, complete-object destructor, inline, placed by class name
    // ScopedContainerElementEraser<eastl::fixed_hash_map<int, game::DelayedVariable, 128ul, 129ul, true, eastl::hash<int>, eastl::equal_to<int>, false, eastl::allocator>, unsigned int>::~ScopedContainerElementEraser(): jumps straight to the base-object destructor

    // 0x1004d5960, 32 bytes, base-object constructor, inline, placed by class name
    // ScopedContainerElementEraser<eastl::fixed_hash_map<int, game::DelayedVariable, 128ul, 129ul, true, eastl::hash<int>, eastl::equal_to<int>, false, eastl::allocator>, unsigned int>::ScopedContainerElementEraser(eastl::fixed_hash_map<int, game::DelayedVariable, 128ul, 129ul, true, eastl::hash<int>, eastl::equal_to<int>, false, eastl::allocator>&)
    void jag::ScopedContainerElementEraser<
        eastl::fixed_hash_map<int, game::DelayedVariable, 128ul, 129ul, true, eastl::hash<int>, eastl::equal_to<int>,
                              false, eastl::allocator>,
        unsigned int>::
        ScopedContainerElementEraser(
            ScopedContainerElementEraser<
                eastl::fixed_hash_map<int, game::DelayedVariable, 128ul, 129ul, true, eastl::hash<int>,
                                      eastl::equal_to<int>, false, eastl::allocator>,
                unsigned int>* this,
            fixed_hash_map* param_1) {
        new (this) eastl::fixed_vector<unsigned int, 64ul, true, eastl::allocator>();
        *(fixed_hash_map**)(this + 296) = param_1;
    }

    // 0x1004d5b50, 128 bytes, base-object destructor, inline, placed by class name
    // ScopedContainerElementEraser<eastl::fixed_hash_map<int, game::DelayedVariable, 128ul, 129ul, true, eastl::hash<int>, eastl::equal_to<int>, false, eastl::allocator>, unsigned int>::~ScopedContainerElementEraser()
    void jag::ScopedContainerElementEraser<
        eastl::fixed_hash_map<int, game::DelayedVariable, 128ul, 129ul, true, eastl::hash<int>, eastl::equal_to<int>,
                              false, eastl::allocator>,
        unsigned int>::
        ~ScopedContainerElementEraser(
            ScopedContainerElementEraser<
                eastl::fixed_hash_map<int, game::DelayedVariable, 128ul, 129ul, true, eastl::hash<int>,
                                      eastl::equal_to<int>, false, eastl::allocator>,
                unsigned int>* this) {
        int* piVar1;
        int* piVar2;
        int local_2c;

        piVar1 = (int*)HeapBeginPtr();
        piVar2 = (int*)end();
        if (piVar1 != piVar2) {
            do {
                local_2c = *piVar1;
                eastl::hashtable<int, eastl::pair<int const, game::DelayedVariable>,
                                 eastl::fixed_hashtable_allocator<130ul, 32ul, 128ul, 8ul, 0ul, true, eastl::allocator>,
                                 eastl::use_first<eastl::pair<int const, game::DelayedVariable>>, eastl::equal_to<int>,
                                 eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                 eastl::prime_rehash_policy, false, true, true>::
                    erase(*(hashtable<
                              int, eastl::pair<int const, game::DelayedVariable>,
                              eastl::fixed_hashtable_allocator<130ul, 32ul, 128ul, 8ul, 0ul, true, eastl::allocator>,
                              eastl::use_first<eastl::pair<int const, game::DelayedVariable>>, eastl::equal_to<int>,
                              eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                              eastl::prime_rehash_policy, false, true, true>**)(this + 296),
                          &local_2c);
                piVar1 = piVar1 + 1;
            } while (piVar1 != piVar2);
        }
        ~fixed_vector();
    }

    // 0x100509b60, 16 bytes, complete-object constructor, inline, placed by class name
    // ScopedContainerElementEraser<eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator> >, int>::ScopedContainerElementEraser(eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x100509c30, 32 bytes, inline, placed by class name
    // ScopedContainerElementEraser<eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator> >, int>::erase(int)
    void jag::ScopedContainerElementEraser<
        eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator,
                          eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator>>,
        int>::erase(int param_1) {
        undefined4 in_register_0000003c;

        eastl::fixed_vector<int, 64ul, true, eastl::allocator>::push_back(
            (int*)CONCAT44(in_register_0000003c, param_1));
    }

    // 0x100509c50, 16 bytes, complete-object destructor, inline, placed by class name
    // ScopedContainerElementEraser<eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator> >, int>::~ScopedContainerElementEraser(): jumps straight to the base-object destructor

    // 0x1005146e0, 32 bytes, base-object constructor, inline, placed by class name
    // ScopedContainerElementEraser<eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator> >, int>::ScopedContainerElementEraser(eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator> >&)
    void jag::ScopedContainerElementEraser<
        eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator,
                          eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator>>,
        int>::
        ScopedContainerElementEraser(
            ScopedContainerElementEraser<
                eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator,
                                  eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator>>,
                int>* this,
            vector_map* param_1) {
        new (this) eastl::fixed_vector<int, 64ul, true, eastl::allocator>();
        *(vector_map**)(this + 296) = param_1;
    }

    // 0x1005147c0, 112 bytes, base-object destructor, inline, placed by class name
    // ScopedContainerElementEraser<eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator> >, int>::~ScopedContainerElementEraser()
    void jag::ScopedContainerElementEraser<
        eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator,
                          eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator>>,
        int>::
        ~ScopedContainerElementEraser(
            ScopedContainerElementEraser<
                eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator,
                                  eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator>>,
                int>* this) {
        int* piVar1;
        int* piVar2;

        piVar1 = (int*)HeapBeginPtr();
        piVar2 = (int*)end();
        for (; piVar1 != piVar2; piVar1 = piVar1 + 1) {
            eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator>>::
                erase(*(vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator,
                                   eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator>>**)(this + 296),
                      piVar1);
        }
        ~fixed_vector();
    }

} // namespace jag
