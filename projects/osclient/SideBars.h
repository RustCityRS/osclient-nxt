// projects/osclient/SideBars.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::sidebars {
    class SideBarRequest {
    public:
        uint8_t[16] CreateOpen(SideBarData sideBarData);
        void CreateClose(int arg1);
        SideBarRequest();

    private:
        uint8_t _unknown_0[8];
        uint32_t field_8;
        uint8_t _unknown_12[4];
    };

    // 0x1000dcab0
    uint8_t[16] SideBarRequest::CreateOpen(SideBarData sideBarData) {
        uint8_t auVar1[16];
        SideBarRequest local_20;

        SideBarRequest(&local_20);
        auVar1._8_8_ = 1;
        auVar1._0_8_ = this;
        return auVar1;
    }

    // 0x1000dcc00
    void SideBarRequest::CreateClose(int arg1) {
        uint8_t auVar1[16];
        SideBarRequest local_20;

        SideBarRequest(&local_20);
        auVar1._4_4_ = local_20._4_4_;
        auVar1._0_4_ = arg1;
        auVar1._8_8_ = 2;
        return auVar1;
    }

} // namespace jag::oldscape::sidebars

namespace jag {
    // 0x1000dd1d0
    shared_ptr_if_not_array<oldscape::LogFileSink>::type make_shared<oldscape::LogFileSink>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        LogFileSink* local_28[2];

        auto arg1 = aligned_alloc(48, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::LogFileSink>::type result;
        } else {
            local_28[0] = placement_new<oldscape::LogFileSink>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::LogFileSink>, int, oldscape::LogFileSink*&>(arg1, &local_2c,
                                                                                                       local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
