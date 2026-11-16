// libs/game/runetek5/scene/loaders/StaticPointLightLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class StaticPointLightLoader {
    public:
        GetPointLightList();
        uint Load(Js5ResourceProvider*, HeightMap const&);
        LoadMapSquarePointLightList(eastl::vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>&,
                                    Js5ResourceProvider*, unsigned int, unsigned int);
        void Destroy();
        StaticPointLightLoader(unsigned int, unsigned int, shared_ptr<ClientCompositeData> const&);
        ~StaticPointLightLoader();

        // data members, from how the methods use this: 56 bytes
        uint field_0;       // offset 0
        uint field_4;       // offset 4
        shared_ptr field_8; // offset 8
        char _unknown_24[32];
    };

    // 0x100414ec0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // StaticPointLightLoader::StaticPointLightLoader(unsigned int, unsigned int, shared_ptr<ClientCompositeData> const&): jumps straight to the base-object constructor

    // 0x100415c40, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // StaticPointLightLoader::~StaticPointLightLoader(): jumps straight to the base-object destructor

    // 0x10041d460, 112 bytes, base-object constructor, inline, placed by class name
    // StaticPointLightLoader::StaticPointLightLoader(unsigned int, unsigned int, shared_ptr<ClientCompositeData> const&)
    void StaticPointLightLoader::StaticPointLightLoader(uint param_1, uint param_2, shared_ptr* param_3) {
        field_0 = param_1;
        field_4 = param_2;
        new (field_8, param_3) shared_ptr<oldscape::dash3d::Decor>();
        eastl::vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>::vector();
        new (&field_48)
            Array<eastl::vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>, BucketAllocatorEASTL>();
    }

    // 0x10041d580, 96 bytes, base-object destructor, inline, placed by class name
    // StaticPointLightLoader::~StaticPointLightLoader()
    void StaticPointLightLoader::~StaticPointLightLoader() {
        Destroy(this);
        (&field_48)->~Array();
        (&field_24)->~vector();
        field_8->~shared_ptr();
    }

} // namespace jag::game

namespace jag {
    // 0x100417610, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<graphics::PointLightGridTextureData>::type make_shared<graphics::PointLightGridTextureData>()
    jag* make_shared<graphics::PointLightGridTextureData>() {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        int local_2c;
        PointLightGridTextureData* local_28[2];

        pvVar1 = (void*)aligned_alloc(131096, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<graphics::PointLightGridTextureData>((void*)((long)pvVar1 + 16));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared_trivial<graphics::PointLightGridTextureData>, int,
                                   graphics::PointLightGridTextureData*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
