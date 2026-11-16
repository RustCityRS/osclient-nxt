// libs/oldscape/rs2lib/worldmap/MapLabelSize.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::rs2lib::worldmap {
    class MapLabelSize {
    public:
        class MapLabelSizeImpl;
        MapLabelSizeImpl* FromSize(int arg1);
        bool ShouldRenderAtScale(float arg1) const;
        uint32_t GetSize() const;
        uint32_t Equals(const MapLabelSize& mapLabelSize) const;
        MapLabelSize(const MapLabelSizeImpl* mapLabelSizeImpl);
        static int64_t NULL_SIZE; // = FromSize(-1)
        static int64_t SMALL;     // = FromSize(0)
        static int64_t MEDIUM;    // = FromSize(1)
        static int64_t LARGE;     // = FromSize(2)

    private:
        MapLabelSizeImpl* field_0;
    };

    class MapLabelSize::MapLabelSizeImpl {
    public:
        MapLabelSizeImpl(int arg1, int arg2);
    };

    // 0x100fd5b60, set at startup by ___cxx_global_var_init.116
    int64_t MapLabelSize::NULL_SIZE = MapLabelSize::FromSize(-1);

    // 0x100fd5b68, set at startup by ___cxx_global_var_init.117
    int64_t MapLabelSize::SMALL = MapLabelSize::FromSize(0);

    // 0x100fd5b70, set at startup by ___cxx_global_var_init.118
    int64_t MapLabelSize::MEDIUM = MapLabelSize::FromSize(1);

    // 0x100fd5b78, set at startup by ___cxx_global_var_init.119
    int64_t MapLabelSize::LARGE = MapLabelSize::FromSize(2);

    // 0x10012cae0: MapLabelSize::MapLabelSizeImpl::MapLabelSizeImpl(int, int) has the same machine code as sidebars::SideBarData::SideBarData(int, int)

    // 0x10020bc40
    MapLabelSizeImpl* MapLabelSize::FromSize(int arg1) {
        int iVar1;
        MapLabelSizeImpl* mapLabelSizeImpl;
        uint8_t* puVar2;
        MapLabelSize local_20;

        if (arg1 == 2) {
            mapLabelSizeImpl = (MapLabelSizeImpl*)&FromSize(int)::LARGE_Impl;
            if (FromSize(int)::LARGE_Impl != '\0')
                goto LAB_10020bd37;
            puVar2 = &FromSize(int)::LARGE_Impl;
            iVar1 = ___cxa_guard_acquire(&FromSize(int)::LARGE_Impl);
            if (iVar1 == 0)
                goto LAB_10020bd37;
            mapLabelSizeImpl = (MapLabelSizeImpl*)&FromSize(int)::LARGE_Impl;
            new ((SideBarData*)&FromSize(int)::LARGE_Impl) sidebars::SideBarData(2, 0);
        } else if (arg1 == 1) {
            mapLabelSizeImpl = (MapLabelSizeImpl*)&FromSize(int)::MEDIUM_Impl;
            if (FromSize(int)::MEDIUM_Impl != '\0')
                goto LAB_10020bd37;
            puVar2 = &FromSize(int)::MEDIUM_Impl;
            iVar1 = ___cxa_guard_acquire(&FromSize(int)::MEDIUM_Impl);
            if (iVar1 == 0)
                goto LAB_10020bd37;
            mapLabelSizeImpl = (MapLabelSizeImpl*)&FromSize(int)::MEDIUM_Impl;
            new ((SideBarData*)&FromSize(int)::MEDIUM_Impl) sidebars::SideBarData(1, 2);
        } else if (arg1 == 0) {
            mapLabelSizeImpl = (MapLabelSizeImpl*)&FromSize(int)::SMALL_Impl;
            if (FromSize(int)::SMALL_Impl != '\0')
                goto LAB_10020bd37;
            puVar2 = &FromSize(int)::SMALL_Impl;
            iVar1 = ___cxa_guard_acquire(&FromSize(int)::SMALL_Impl);
            if (iVar1 == 0)
                goto LAB_10020bd37;
            mapLabelSizeImpl = (MapLabelSizeImpl*)&FromSize(int)::SMALL_Impl;
            new ((SideBarData*)&FromSize(int)::SMALL_Impl) sidebars::SideBarData(0, 4);
        } else {
            mapLabelSizeImpl = (MapLabelSizeImpl*)&FromSize(int)::NULL_SIZE_Impl;
            if (FromSize(int)::NULL_SIZE_Impl != '\0')
                goto LAB_10020bd37;
            puVar2 = &FromSize(int)::NULL_SIZE_Impl;
            iVar1 = ___cxa_guard_acquire(&FromSize(int)::NULL_SIZE_Impl);
            if (iVar1 == 0)
                goto LAB_10020bd37;
            mapLabelSizeImpl = (MapLabelSizeImpl*)&FromSize(int)::NULL_SIZE_Impl;
            new ((SideBarData*)&FromSize(int)::NULL_SIZE_Impl) sidebars::SideBarData(-1, -1);
        }
        ___cxa_guard_release(puVar2);
    LAB_10020bd37:
        MapLabelSize(&local_20, mapLabelSizeImpl);
        return local_20.field_0;
    }

    // 0x10020bdd0
    bool MapLabelSize::ShouldRenderAtScale(float arg1) const {
        return (float)*(int*)(field_0 + 4) <= arg1;
    }

    // 0x10020bdf0
    uint32_t MapLabelSize::GetSize() const {
        return *(uint32_t*)field_0;
    }

    // 0x10020be00
    uint32_t MapLabelSize::Equals(const MapLabelSize& mapLabelSize) const {
        if (*(int*)field_0 == *(int*)mapLabelSize.field_0) {
            return *(int*)(field_0 + 4) == *(int*)(mapLabelSize.field_0 + 4);
        }
        return 0;
    }

    // 0x10020be30
    MapLabelSize::MapLabelSize(const MapLabelSize::MapLabelSizeImpl* mapLabelSizeImpl) : field_0(mapLabelSizeImpl) {}

} // namespace jag::oldscape::rs2lib::worldmap
