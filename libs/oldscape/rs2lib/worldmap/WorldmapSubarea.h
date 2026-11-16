// libs/oldscape/rs2lib/worldmap/WorldmapSubarea.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.systemheap

namespace jag::oldscape::rs2lib::worldmap {
    class WorldmapSubarea {
    public:
        // virtual methods in vtable order
        virtual ~WorldmapSubarea();
        WorldmapSubarea();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    WorldmapSubarea::~WorldmapSubarea();

    // 0x1001f6eb0, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // WorldmapSubarea::WorldmapSubarea()
    void WorldmapSubarea::WorldmapSubarea() {
        field_0 = PTR_vtable_100ee8ae0 + 16;
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    WorldmapSubarea::~WorldmapSubarea();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    WorldmapSubarea::~WorldmapSubarea();

} // namespace jag::oldscape::rs2lib::worldmap

namespace jag {
    // 0x1001f7050, 208 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::worldmap::MapSquareData>::type make_shared<oldscape::rs2lib::worldmap::MapSquareData, int const&, int const&, int const&, int const&, int const&, int const&>(int const&, int const&, int const&, int const&, int const&, int const&)
    /* shared_ptr_if_not_array<oldscape::rs2lib::worldmap::MapSquareData>::type
   make_shared<oldscape::rs2lib::worldmap::MapSquareData, int const&, int const&, int,
   int, int&, int&>(int const&, int const&, int&&, int&&, int&, int&) */

    jag* jag::make_shared<oldscape::rs2lib::worldmap::MapSquareData, int const&, int const&, int, int, int&, int&>(
        int* param_1, int* param_2, int* param_3, int* param_4, int* param_5, int* param_6) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        MapSquareData* local_40[2];

        pvVar1 = (void*)aligned_alloc(224, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] =
                placement_new<oldscape::rs2lib::worldmap::MapSquareData, int const&, int const&, int, int, int&, int&>(
                    (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5, param_6);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::worldmap::MapSquareData>, int,
                                   oldscape::rs2lib::worldmap::MapSquareData*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

} // namespace jag
