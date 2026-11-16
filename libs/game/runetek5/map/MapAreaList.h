// libs/game/runetek5/map/MapAreaList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class MapAreaList {
    public:
        ~MapAreaList();
        MapAreaList(Js5ResourceProvider* js5ResourceProvider);
        uint8_t* LoadData();
        void GetAreasByCoordinate(eastl::vector<MapArea*>& mapAreas, const CoordGrid& coordGrid);
        MapArea* GetAreaByCoordinate(const CoordGrid& coordGrid);
        NXTPixToolkit* GetAreaByName(const eastl::string& str);
        CommandLine* GetAreaByID(int arg1);

    private:
        Js5ResourceProvider* field_0;
        uint8_t _unknown_8[8];
    };

    // 0x10046b250
    MapAreaList::~MapAreaList() {
        field_8.~Array();
    }

} // namespace jag::game

namespace jag {
    // 0x100461e60
    shared_ptr_if_not_array<game::World>::type
    make_shared<game::World, game::SceneManager*, graphics::RT7Core*&, Js5ResourceProvider*&, game::ConfigProvider*&,
                game::PlayerVarDomain*&, game::AssetBuilder*&, shared_ptr<game::WorldAreaType> const&, game::BuildMode,
                int&, int&, int&, int&, decltype(nullptr)>(game::SceneManager*&& arg1, graphics::RT7Core*& arg2,
                                                           Js5ResourceProvider*& arg3, game::ConfigProvider*& arg4,
                                                           game::PlayerVarDomain*& arg5, game::AssetBuilder*& arg6,
                                                           const shared_ptr<game::WorldAreaType>& worldAreaType,
                                                           game::BuildMode&& buildMode, int& arg9, int& arg10,
                                                           int& arg11, int& arg12, decltype(nullptr)&& arg13) {
        ref_counter_base* ref_counter_base;
        void** in_stack_00000040;
        int local_44;
        World* local_40[2];

        auto arg1_00 = aligned_alloc(950848, 16);
        if (arg1_00 == nullptr) {
            new (arg1) shared_ptr();
        } else {
            local_40[0] = placement_new<game::World, game::SceneManager*, graphics::RT7Core*&, Js5ResourceProvider*&,
                                        game::ConfigProvider*&, game::PlayerVarDomain*&, game::AssetBuilder*&,
                                        shared_ptr<game::WorldAreaType> const&, game::BuildMode, int&, int&, int&, int&,
                                        decltype(nullptr)>(
                (void*)((long)arg1_00 + 32), (SceneManager**)arg2, (RT7Core**)arg3, (Js5ResourceProvider**)arg4,
                (ConfigProvider**)arg5, (PlayerVarDomain**)arg6, (AssetBuilder**)worldAreaType,
                (shared_ptr<game::WorldAreaType>*)buildMode, (BuildMode*)arg9, arg10, arg11, arg12, (int*)arg13,
                in_stack_00000040);
            local_44 = 1;
            ref_counter_base = (ref_counter_base*)placement_new<ref_counter_shared<game::World>, int, game::World*&>(
                arg1_00, &local_44, local_40);
            shared_ptr_do_enable_shared_from_this<game::World>(ref_counter_base, local_40[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (arg1) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_40[0]);
        }
        return arg1;
    }

    // 0x100462130
    shared_ptr_if_not_array<game::World>::type
    make_shared<game::World, game::SceneManager*, graphics::RT7Core*&, Js5ResourceProvider*&, game::ConfigProvider*&,
                game::PlayerVarDomain*&, game::AssetBuilder*&, decltype(nullptr), game::BuildMode&, int, int, int, int,
                shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>> const&>(
        game::SceneManager*&& arg1, graphics::RT7Core*& arg2, Js5ResourceProvider*& arg3, game::ConfigProvider*& arg4,
        game::PlayerVarDomain*& arg5, game::AssetBuilder*& arg6, decltype(nullptr)&& arg7, game::BuildMode& buildMode,
        int&& arg9, int&& arg10, int&& arg11, int&& arg12,
        const shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>& arg13) {
        ref_counter_base* ref_counter_base;
        shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, _4ul> _>* in_stack_00000040;
        int local_44;
        World* local_40[2];

        auto arg1_00 = aligned_alloc(950848, 16);
        if (arg1_00 == nullptr) {
            new (arg1) shared_ptr();
        } else {
            local_40[0] = placement_new<game::World, game::SceneManager*, graphics::RT7Core*&, Js5ResourceProvider*&,
                                        game::ConfigProvider*&, game::PlayerVarDomain*&, game::AssetBuilder*&,
                                        decltype(nullptr), game::BuildMode&, int, int, int, int,
                                        shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>> const&>(
                (void*)((long)arg1_00 + 32), (SceneManager**)arg2, (RT7Core**)arg3, (Js5ResourceProvider**)arg4,
                (ConfigProvider**)arg5, (PlayerVarDomain**)arg6, arg7, (void**)buildMode, (BuildMode*)arg9, arg10,
                arg11, arg12, (int*)arg13, in_stack_00000040);
            local_44 = 1;
            ref_counter_base = (ref_counter_base*)placement_new<ref_counter_shared<game::World>, int, game::World*&>(
                arg1_00, &local_44, local_40);
            shared_ptr_do_enable_shared_from_this<game::World>(ref_counter_base, local_40[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (arg1) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_40[0]);
        }
        return arg1;
    }

} // namespace jag

namespace jag::math {
    // 0x1004626c0
    Matrix33T<float>* Matrix33T<float>::Transpose() {
        Swap<float>((float*)(this + 4), (float*)(this + 12));
        Swap<float>((float*)(this + 8), (float*)(this + 24));
        Swap<float>((float*)(this + 20), (float*)(this + 28));
        return this;
    }

} // namespace jag::math
