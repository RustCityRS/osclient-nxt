// libs/oldscape/rs2lib/worldmap/WorldmapSubarea.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.systemheap

namespace jag::oldscape::rs2lib::worldmap {
    class WorldmapSubarea {
    public:
        // virtual methods in vtable order
        virtual ~WorldmapSubarea();
        WorldmapSubarea();
    };

    // 0x100009e70: WorldmapSubarea::~WorldmapSubarea() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1001f6eb0
    WorldmapSubarea::WorldmapSubarea() {}

} // namespace jag::oldscape::rs2lib::worldmap

namespace jag {
    // 0x1001f7050
    shared_ptr_if_not_array<oldscape::rs2lib::worldmap::MapSquareData>::type
    make_shared<oldscape::rs2lib::worldmap::MapSquareData, int const&, int const&, int const&, int const&, int const&,
                int const&>(const int& arg1, const int& arg2, const int& arg3, const int& arg4, const int& arg5,
                            const int& arg6) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int* in_stack_00000008;
        int local_44;
        MapSquareData* local_40[2];

        auto arg1_00 = aligned_alloc(224, 8);
        if (arg1_00 == nullptr) {
            new (arg1) shared_ptr();
        } else {
            local_40[0] =
                placement_new<oldscape::rs2lib::worldmap::MapSquareData, int const&, int const&, int, int, int&, int&>(
                    (void*)((long)arg1_00 + 32), arg2, arg3, arg4, arg5, arg6, in_stack_00000008);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::worldmap::MapSquareData>, int,
                              oldscape::rs2lib::worldmap::MapSquareData*&>(arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (arg1) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return arg1;
    }

} // namespace jag
