// libs/jtl/managed_ptr/make_shared.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100025ff0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::type make_shared<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
    jag* make_shared<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        WorldmapAreaMetadata* local_28[2];

        pvVar1 = (void*)aligned_alloc(176, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>, int,
                                   oldscape::rs2lib::worldmap::WorldmapAreaMetadata*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
