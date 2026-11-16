// libs/jtl/managed_ptr/make_shared.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100025ff0
    shared_ptr_if_not_array<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::type
    make_shared<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        WorldmapAreaMetadata* local_28[2];

        auto arg1 = aligned_alloc(176, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::type result;
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>, int,
                              oldscape::rs2lib::worldmap::WorldmapAreaMetadata*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
