// libs/game/runetek5/scene/entities/NPCList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag {
    class NPCList {
    public:
        // virtual methods in vtable order
        virtual ~NPCList();
        virtual MainDraw(unsigned int);
        MainLogic(int);
        void ClearNPCList();
        void DestroyRenderingResources();

        // data members, from how the methods use this: 45240 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[45216];
        undefined4 field_45224; // offset 45224
        char _unknown_45228[12];
    };

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    NPCList::MainDraw(unsigned int);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    NPCList::MainLogic(int);

    // 0x10041b250, 96 bytes, base-object destructor, placed by class name and debug map
    // NPCList::~NPCList()
    void NPCList::~NPCList() {
        field_0 = &PTR__NPCList_100eff870;
        ClearNPCList(this);
        (&field_45232)->~fixed_vector();
        (&field_8)->~fixed_hash_map();
    }

    // 0x10041b2b0, 256 bytes, placed by class name and debug map
    // NPCList::ClearNPCList()
    void NPCList::ClearNPCList() {
        bool bVar1;
        long lVar2;
        Entity* this_00;
        GraphNode* this_01;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base local_50[16];
        int local_40[4];

        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator!=((eastl*)local_40, local_50, extraout_RDX);
        if (bVar1) {
            do {
                lVar2 = local_40->HeapBeginPtr();
                bVar1 = ((lVar2 + 8))->operator_cast_to_bool();
                if (bVar1) {
                    this_00 = (Entity*)shared_ptr<NPCEntity>::operator*((shared_ptr<NPCEntity>*)(lVar2 + 8));
                    this_01 = (GraphNode*)this_00->GetNode();
                    this_01->Detach();
                    (*(code*)this_00->field_0[25])(this_00);
                    this_00->ResetWorld();
                }
                eastl::hashtable_iterator<
                    eastl::pair<int const, shared_ptr<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>>, true,
                    false>::
                operator++(
                    (hashtable_iterator<
                        eastl::pair<int const, shared_ptr<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>>,
                        true, false>*)local_40);
                bVar1 = eastl::operator!=((eastl*)local_40, local_50, extraout_RDX_00);
            } while (bVar1);
        }
        (&field_8)->clear();
        field_45224 = 0;
        local_40[0] = -1;
        (&field_41128, local_40)->fill();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

    // 0x10041b3d0, 16 bytes, complete-object destructor, placed by class name and debug map
    // NPCList::~NPCList(): jumps straight to the base-object destructor

    // 0x10041b3e0, 32 bytes, deleting destructor, placed by class name and debug map
    // NPCList::~NPCList()
    void NPCList::~NPCList() {
        ~NPCList(this);
        operator_delete(this);
    }

    // 0x10041b490, 176 bytes, placed by class name and debug map
    // NPCList::DestroyRenderingResources()
    void NPCList::DestroyRenderingResources() {
        long lVar1;
        bool bVar2;
        long* plVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_40[16];
        hashtable_iterator_base local_30[16];

        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar2 = eastl::operator!=(local_40, local_30, extraout_RDX);
        if (bVar2) {
            do {
                lVar1 = local_40->HeapBeginPtr();
                bVar2 = ((lVar1 + 8))->operator_cast_to_bool();
                if (bVar2) {
                    plVar3 = (long*)shared_ptr<NPCEntity>::operator->((shared_ptr<NPCEntity>*)(lVar1 + 8));
                    (**(code**)(*plVar3 + 200))(plVar3);
                }
                eastl::hashtable_iterator<
                    eastl::pair<int const, shared_ptr<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>>, true,
                    false>::
                operator++(
                    (hashtable_iterator<
                        eastl::pair<int const, shared_ptr<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>>,
                        true, false>*)local_40);
                bVar2 = eastl::operator!=(local_40, local_30, extraout_RDX_00);
            } while (bVar2);
        }
    }

} // namespace jag
