// libs/game/runetek5/config/npctype/NPCTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class NPCTypeList {
    public:
        // virtual methods in vtable order
        virtual ~NPCTypeList();
        virtual void CacheReset();
        virtual void CacheClean(unsigned int arg1);
        uint8_t* GetBodyModelCache();
        bool IsMembersServer() const;
        uint8_t* GetHeadModelCache();
        NPCTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                    const Language* language, Js5ResourceProvider& js5ResourceProvider, bool arg5);
        void SetMembersServer(bool arg1);

    private:
        uint8_t _unknown_8[104];
        bool m_membersServer;
        uint8_t _unknown_113[10551];
    };

    // 0x100504730
    uint8_t* NPCTypeList::GetHeadModelCache() {
        return &field_10656;
    }

    // 0x10050a1d0
    void NPCTypeList::CacheReset() {
        CacheReset();
        field_120.Reset();
        field_10656.Reset();
    }

    // 0x10050a200
    void NPCTypeList::CacheClean(unsigned int arg1) {
        CacheClean(arg1);
        field_120.Clean((unsigned long)arg1);
        field_10656.Clean((unsigned long)arg1);
    }

    // 0x100514cd0
    NPCTypeList::~NPCTypeList() {
        field_10656.~AssetLRUHashCache();
        field_120.~AssetLRUHashCache();
    }

} // namespace jag::game

namespace jag {
    // 0x100504bc0
    shared_ptr_if_not_array<game::BuildModelMain>::type
    bucket_make_shared<game::BuildModelMain, int&, graphics::ModelConstructedState, bool, graphics::RT7Core*&,
                       eastl::fixed_vector<PacketView, 1ul>, shared_ptr<graphics::Model>&>(
        int& arg1, graphics::ModelConstructedState&& modelConstructedState, bool&& arg3, graphics::RT7Core*& arg4,
        eastl::fixed_vector<PacketView, 1ul>&& packetViews, shared_ptr<graphics::Model>& model) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        shared_ptr<graphics::Model>* in_stack_00000008;
        BuildModelMain* local_40[2];

        auto local_48 = BucketManager::Allocate(176, 0, 16);
        if (local_48 == nullptr) {
            new (arg1) shared_ptr();
        } else {
            local_40[0] =
                placement_new<game::BuildModelMain, int, graphics::ModelConstructedState, bool, graphics::RT7Core*&,
                              eastl::fixed_vector<PacketView, 1ul>, shared_ptr<graphics::Model>&>(
                    local_48 + 48, (int*)modelConstructedState, (ModelConstructedState*)arg3, (bool*)arg4,
                    (RT7Core**)packetViews, (fixed_vector<PacketView, _1ul>*)model, in_stack_00000008);
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)placement_new<
                BucketRefCounter<game::BuildModelMain>,
                managed_ptr_counter_and_data<BucketRefCounter<game::BuildModelMain>, game::BuildModelMain>*&,
                game::BuildModelMain*&>(local_48, &local_48, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (arg1) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return arg1;
    }

} // namespace jag
