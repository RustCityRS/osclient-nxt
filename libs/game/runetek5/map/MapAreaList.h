// libs/game/runetek5/map/MapAreaList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class MapAreaList {
    public:
        ~MapAreaList();
        MapAreaList(Js5ResourceProvider*);
        LoadData();
        void GetAreasByCoordinate(eastl::vector<MapArea*, BucketAllocatorEASTL>&, CoordGrid const&);
        ObjTypeList* GetAreaByCoordinate(CoordGrid const&);
        NXTPixToolkit* GetAreaByName(eastl::string const&);
        CommandLine* GetAreaByID(int);

        // data members, from how the methods use this: 16 bytes
        Js5ResourceProvider* field_0; // offset 0
        char _unknown_8[8];
    };

    // 0x1004615d0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // MapAreaList::~MapAreaList(): jumps straight to the base-object destructor

    // 0x10046b250, 16 bytes, base-object destructor, inline, placed by class name
    // MapAreaList::~MapAreaList()
    void MapAreaList::~MapAreaList() {
        (&field_8)->~Array();
    }

} // namespace jag::game

namespace jag {
    // 0x100461e60, 240 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::World>::type make_shared<game::World, game::SceneManager*, graphics::RT7Core*&, Js5ResourceProvider*&, game::ConfigProvider*&, game::PlayerVarDomain*&, game::AssetBuilder*&, shared_ptr<game::WorldAreaType> const&, game::BuildMode, int&, int&, int&, int&, decltype(nullptr)>(game::SceneManager*&&, graphics::RT7Core*&, Js5ResourceProvider*&, game::ConfigProvider*&, game::PlayerVarDomain*&, game::AssetBuilder*&, shared_ptr<game::WorldAreaType> const&, game::BuildMode&&, int&, int&, int&, int&, decltype(nullptr)&&)
    jag* jag::make_shared<game::World, game::SceneManager*, graphics::RT7Core*&, Js5ResourceProvider*&,
                          game::ConfigProvider*&, game::PlayerVarDomain*&, game::AssetBuilder*&,
                          shared_ptr<game::WorldAreaType> const&, game::BuildMode, int&, int&, int&, int&,
                          decltype(nullptr)>(SceneManager** param_1, RT7Core** param_2, Js5ResourceProvider** param_3,
                                             ConfigProvider** param_4, PlayerVarDomain** param_5,
                                             AssetBuilder** param_6, shared_ptr* param_7, BuildMode* param_8,
                                             int* param_9, int* param_10, int* param_11, int* param_12,
                                             _func_decltype_nullptr** param_13) {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_44;
        World* local_40[2];

        pvVar1 = (void*)aligned_alloc(950848, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_40[0] = placement_new<game::World, game::SceneManager*, graphics::RT7Core*&, Js5ResourceProvider*&,
                                        game::ConfigProvider*&, game::PlayerVarDomain*&, game::AssetBuilder*&,
                                        shared_ptr<game::WorldAreaType> const&, game::BuildMode, int&, int&, int&, int&,
                                        decltype(nullptr)>((void*)((long)pvVar1 + 32), param_1, param_2, param_3,
                                                           param_4, param_5, param_6, param_7, param_8, param_9,
                                                           param_10, param_11, param_12, param_13);
            local_44 = 1;
            prVar2 = (ref_counter_base*)placement_new<ref_counter_shared<game::World>, int, game::World*&>(
                pvVar1, &local_44, local_40);
            shared_ptr_do_enable_shared_from_this<game::World>(prVar2, local_40[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100462130, 240 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::World>::type make_shared<game::World, game::SceneManager*, graphics::RT7Core*&, Js5ResourceProvider*&, game::ConfigProvider*&, game::PlayerVarDomain*&, game::AssetBuilder*&, decltype(nullptr), game::BuildMode&, int, int, int, int, shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul, true, eastl::allocator> > const&>(game::SceneManager*&&, graphics::RT7Core*&, Js5ResourceProvider*&, game::ConfigProvider*&, game::PlayerVarDomain*&, game::AssetBuilder*&, decltype(nullptr)&&, game::BuildMode&, int&&, int&&, int&&, int&&, shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul, true, eastl::allocator> > const&)
    jag* jag::make_shared<
        game::World, game::SceneManager*, graphics::RT7Core*&, Js5ResourceProvider*&, game::ConfigProvider*&,
        game::PlayerVarDomain*&, game::AssetBuilder*&, decltype(nullptr), game::BuildMode&, int, int, int, int,
        shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul, true,
                                       eastl::allocator>> const&>(
        SceneManager** param_1, RT7Core** param_2, Js5ResourceProvider** param_3, ConfigProvider** param_4,
        PlayerVarDomain** param_5, AssetBuilder** param_6, _func_decltype_nullptr** param_7, BuildMode* param_8,
        int* param_9, int* param_10, int* param_11, int* param_12, shared_ptr* param_13) {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_44;
        World* local_40[2];

        pvVar1 = (void*)aligned_alloc(950848, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_40[0] = placement_new<
                game::World, game::SceneManager*, graphics::RT7Core*&, Js5ResourceProvider*&, game::ConfigProvider*&,
                game::PlayerVarDomain*&, game::AssetBuilder*&, decltype(nullptr), game::BuildMode&, int, int, int, int,
                shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>,
                                               4ul, true, eastl::allocator>> const&>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
                param_9, param_10, param_11, param_12, param_13);
            local_44 = 1;
            prVar2 = (ref_counter_base*)placement_new<ref_counter_shared<game::World>, int, game::World*&>(
                pvVar1, &local_44, local_40);
            shared_ptr_do_enable_shared_from_this<game::World>(prVar2, local_40[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

} // namespace jag

namespace jag::math {
    // 0x1004626c0, 64 bytes, inline, placed by debug map only (low confidence)
    // Matrix33T<float>::Transpose()
    Matrix33T<float>* Matrix33T<float>::Transpose() {
        Swap<float>((float*)(this + 4), (float*)(this + 12));
        Swap<float>((float*)(this + 8), (float*)(this + 24));
        Swap<float>((float*)(this + 20), (float*)(this + 28));
        return this;
    }

} // namespace jag::math
