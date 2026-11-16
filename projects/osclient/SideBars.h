// projects/osclient/SideBars.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::sidebars {
    class SideBarRequest {
    public:
        void CreateOpen(SideBarData);
        CreateClose(int);
        SideBarRequest();

        // data members, from how the methods use this: 16 bytes
        char _unknown_0[8];
        undefined4 field_8; // offset 8
        char _unknown_12[4];
    };

    // 0x1000dcab0, 48 bytes, inline, placed by debug map only (low confidence)
    // SideBarRequest::CreateOpen(SideBarData)
    void SideBarRequest::CreateOpen(SideBarData param_1) {
        SideBarRequest local_20;

        SideBarRequest(&local_20);
    }

    // 0x1000dcc00, 48 bytes, inline, placed by debug map only (low confidence)
    // SideBarRequest::CreateClose(int)
    undefined1[16] SideBarRequest::CreateClose(int param_1) {
        undefined1 auVar1[16];
        SideBarRequest local_20;

        SideBarRequest(&local_20);
        auVar1._4_4_ = local_20._4_4_;
        auVar1._0_4_ = param_1;
        auVar1._8_8_ = 2;
        return auVar1;
    }

} // namespace jag::oldscape::sidebars

namespace jag {
    // 0x1000dd1d0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::LogFileSink>::type make_shared<oldscape::LogFileSink>()
    jag* make_shared<oldscape::LogFileSink>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        LogFileSink* local_28[2];

        pvVar1 = (void*)aligned_alloc(48, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::LogFileSink>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::LogFileSink>, int, oldscape::LogFileSink*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
