// libs/game/runetek5/config/npctype/NPCTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class NPCTypeList {
    public:
        // virtual methods in vtable order
        virtual ~NPCTypeList();
        virtual void CacheReset();
        virtual void CacheClean(unsigned int);
        GetBodyModelCache();
        IsMembersServer() const;
        GetHeadModelCache();
        NPCTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, bool);
        void SetMembersServer(bool);

        // data members, from how the methods use this: 10664 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[104];
        bool m_membersServer; // offset 112
        char _unknown_113[10551];
    };

    // 0x100504730, 16 bytes, inline, placed by class name and debug map
    // NPCTypeList::GetHeadModelCache()
    undefined1* NPCTypeList::GetHeadModelCache() {
        return &field_10656;
    }

    // 0x10050a150, 16 bytes, complete-object destructor, inline, placed by class name
    // NPCTypeList::~NPCTypeList(): jumps straight to the base-object destructor

    // 0x10050a160, 32 bytes, deleting destructor, inline, placed by class name
    // NPCTypeList::~NPCTypeList()
    void NPCTypeList::~NPCTypeList() {
        ~NPCTypeList(this);
        operator_delete(this);
    }

    // 0x10050a1d0, 48 bytes, inline, placed by class name
    // NPCTypeList::CacheReset()
    void NPCTypeList::CacheReset() {
        CacheReset();
        (&field_120)->Reset();
        (&field_10656)->Reset();
    }

    // 0x10050a200, 64 bytes, inline, placed by class name
    // NPCTypeList::CacheClean(unsigned int)
    void NPCTypeList::CacheClean(uint param_1) {
        CacheClean(param_1);
        (&field_120, (ulong)param_1)->Clean();
        (&field_10656, (ulong)param_1)->Clean();
    }

    // 0x100514cd0, 64 bytes, base-object destructor, inline, placed by class name
    // NPCTypeList::~NPCTypeList()
    void NPCTypeList::~NPCTypeList() {
        field_0 = PTR_vtable_100ee7ef0 + 16;
        (&field_10656)->~AssetLRUHashCache();
        (&field_120)->~AssetLRUHashCache();
        ~BaseTemplateConfigTypeList();
    }

} // namespace jag::game

namespace jag {
    // 0x100504bc0, 208 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::BuildModelMain>::type bucket_make_shared<game::BuildModelMain, int&, graphics::ModelConstructedState, bool, graphics::RT7Core*&, eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>, shared_ptr<graphics::Model>&>(int&, graphics::ModelConstructedState&&, bool&&, graphics::RT7Core*&, eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>&&, shared_ptr<graphics::Model>&)
    /* shared_ptr_if_not_array<game::BuildModelMain>::type
   bucket_make_shared<game::BuildModelMain, int, graphics::ModelConstructedState,
   bool, graphics::RT7Core*&, eastl::fixed_vector<PacketView, 1ul, true,
   eastl::allocator>, shared_ptr<graphics::Model>&>(int&&,
   graphics::ModelConstructedState&&, bool&&, graphics::RT7Core*&,
   eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>&&,
   shared_ptr<graphics::Model>&) */

    jag*
    jag::bucket_make_shared<game::BuildModelMain, int, graphics::ModelConstructedState, bool, graphics::RT7Core*&,
                            eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>, shared_ptr<graphics::Model>&>(
        int* param_1, ModelConstructedState* param_2, bool* param_3, RT7Core** param_4, fixed_vector* param_5,
        shared_ptr* param_6) {
        BucketRefCounter* pBVar1;
        managed_ptr_counter_and_data* local_48;
        BuildModelMain* local_40[2];

        local_48 = (managed_ptr_counter_and_data*)BucketManager::Allocate(176, 0, 16);
        if (local_48 == (managed_ptr_counter_and_data*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            local_40[0] =
                placement_new<game::BuildModelMain, int, graphics::ModelConstructedState, bool, graphics::RT7Core*&,
                              eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>,
                              shared_ptr<graphics::Model>&>(local_48 + 48, param_1, param_2, param_3, param_4, param_5,
                                                            param_6);
            pBVar1 = placement_new<
                BucketRefCounter<game::BuildModelMain>,
                managed_ptr_counter_and_data<BucketRefCounter<game::BuildModelMain>, game::BuildModelMain>*&,
                game::BuildModelMain*&>(local_48, &local_48, local_40);
            pBVar1->~AutoSingleton(local_40[0]);
            pBVar1->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(pBVar1, local_40[0]);
        }
        return this;
    }

} // namespace jag
