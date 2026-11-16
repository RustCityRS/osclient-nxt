// libs/oldscape/rs2lib/worldmap/MapLabelSize.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::rs2lib::worldmap {
    class MapLabelSize {
    public:
        class MapLabelSizeImpl;
        MapLabelSizeImpl* FromSize(int);
        ShouldRenderAtScale(float) const;
        GetSize() const;
        Equals(MapLabelSize const&) const;
        MapLabelSize(MapLabelSizeImpl const*);
        static /* 8 bytes */ NULL_SIZE; // = FromSize(-1)
        static /* 8 bytes */ SMALL;     // = FromSize(0)
        static /* 8 bytes */ MEDIUM;    // = FromSize(1)
        static /* 8 bytes */ LARGE;     // = FromSize(2)

        // data members, from how the methods use this: 8 bytes
        MapLabelSizeImpl* field_0; // offset 0
    };

    class MapLabelSize::MapLabelSizeImpl {
    public:
        MapLabelSizeImpl(int, int);
    };

    // 0x100fd5b60, 8 bytes, __common; set at startup by ___cxx_global_var_init.116
    MapLabelSize::NULL_SIZE = MapLabelSize::FromSize(-1);

    // 0x100fd5b68, 8 bytes, __common; set at startup by ___cxx_global_var_init.117
    MapLabelSize::SMALL = MapLabelSize::FromSize(0);

    // 0x100fd5b70, 8 bytes, __common; set at startup by ___cxx_global_var_init.118
    MapLabelSize::MEDIUM = MapLabelSize::FromSize(1);

    // 0x100fd5b78, 8 bytes, __common; set at startup by ___cxx_global_var_init.119
    MapLabelSize::LARGE = MapLabelSize::FromSize(2);

    // 0x1000e53d0: the linker folded this into CoordMapSquare::CoordMapSquare(int, int), which has identical code
    MapLabelSize::MapLabelSizeImpl::MapLabelSizeImpl(int, int);

    // 0x10012cae0: the linker folded this into sidebars::SideBarData::SideBarData(int, int), which has identical code
    MapLabelSize::MapLabelSizeImpl::MapLabelSizeImpl(int, int);

    // 0x10020bc40, 400 bytes, placed by class name and debug map
    // MapLabelSize::FromSize(int)
    MapLabelSizeImpl* MapLabelSize::FromSize(int param_1) {
        int iVar1;
        MapLabelSizeImpl* pMVar2;
        undefined1* puVar3;
        MapLabelSize local_20;

        if (param_1 == 2) {
            pMVar2 = (MapLabelSizeImpl*)&FromSize(int)::LARGE_Impl;
            if (FromSize(int)::LARGE_Impl != '\0')
                goto LAB_10020bd37;
            puVar3 = &FromSize(int)::LARGE_Impl;
            iVar1 = ___cxa_guard_acquire(&FromSize(int)::LARGE_Impl);
            if (iVar1 == 0)
                goto LAB_10020bd37;
            pMVar2 = (MapLabelSizeImpl*)&FromSize(int)::LARGE_Impl;
            new (&FromSize(int)::LARGE_Impl) sidebars::SideBarData(2, 0);
        } else if (param_1 == 1) {
            pMVar2 = (MapLabelSizeImpl*)&FromSize(int)::MEDIUM_Impl;
            if (FromSize(int)::MEDIUM_Impl != '\0')
                goto LAB_10020bd37;
            puVar3 = &FromSize(int)::MEDIUM_Impl;
            iVar1 = ___cxa_guard_acquire(&FromSize(int)::MEDIUM_Impl);
            if (iVar1 == 0)
                goto LAB_10020bd37;
            pMVar2 = (MapLabelSizeImpl*)&FromSize(int)::MEDIUM_Impl;
            new (&FromSize(int)::MEDIUM_Impl) sidebars::SideBarData(1, 2);
        } else if (param_1 == 0) {
            pMVar2 = (MapLabelSizeImpl*)&FromSize(int)::SMALL_Impl;
            if (FromSize(int)::SMALL_Impl != '\0')
                goto LAB_10020bd37;
            puVar3 = &FromSize(int)::SMALL_Impl;
            iVar1 = ___cxa_guard_acquire(&FromSize(int)::SMALL_Impl);
            if (iVar1 == 0)
                goto LAB_10020bd37;
            pMVar2 = (MapLabelSizeImpl*)&FromSize(int)::SMALL_Impl;
            new (&FromSize(int)::SMALL_Impl) sidebars::SideBarData(0, 4);
        } else {
            pMVar2 = (MapLabelSizeImpl*)&FromSize(int)::NULL_SIZE_Impl;
            if (FromSize(int)::NULL_SIZE_Impl != '\0')
                goto LAB_10020bd37;
            puVar3 = &FromSize(int)::NULL_SIZE_Impl;
            iVar1 = ___cxa_guard_acquire(&FromSize(int)::NULL_SIZE_Impl);
            if (iVar1 == 0)
                goto LAB_10020bd37;
            pMVar2 = (MapLabelSizeImpl*)&FromSize(int)::NULL_SIZE_Impl;
            new (&FromSize(int)::NULL_SIZE_Impl) sidebars::SideBarData(-1, -1);
        }
        ___cxa_guard_release(puVar3);
    LAB_10020bd37:
        MapLabelSize(&local_20, pMVar2);
        return local_20.field_0;
    }

    // 0x10020bdd0, 32 bytes, placed by class name and debug map
    // MapLabelSize::ShouldRenderAtScale(float) const
    undefined8 MapLabelSize::ShouldRenderAtScale(float param_1) {
        return CONCAT71((int7)((ulong)field_0 >> 8), (float)*(int*)(field_0 + 4) <= param_1);
    }

    // 0x10020bdf0, 16 bytes, placed by class name and debug map
    // MapLabelSize::GetSize() const
    undefined4 MapLabelSize::GetSize() {
        return *(undefined4*)field_0;
    }

    // 0x10020be00, 32 bytes, placed by class name and debug map
    // MapLabelSize::Equals(MapLabelSize const&) const
    undefined4 MapLabelSize::Equals(MapLabelSize* param_1) {
        int iVar1;

        if (*(int*)field_0 == *(int*)param_1->field_0) {
            iVar1 = *(int*)(field_0 + 4);
            return CONCAT31((int3)((uint)iVar1 >> 8), iVar1 == *(int*)(param_1->field_0 + 4));
        }
        return 0;
    }

    // 0x10020be20, 16 bytes, complete-object constructor, placed by class name and debug map
    // MapLabelSize::MapLabelSize(MapLabelSize::MapLabelSizeImpl const*): jumps straight to the base-object constructor

    // 0x10020be30, 16 bytes, base-object constructor, placed by class name and debug map
    // MapLabelSize::MapLabelSize(MapLabelSize::MapLabelSizeImpl const*)
    void MapLabelSize::MapLabelSize(MapLabelSizeImpl* param_1) {
        field_0 = param_1;
    }

    // 0x100227a30, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.116
    void ___cxx_global_var_init_116() {
        MapLabelSize::NULL_SIZE = MapLabelSize::FromSize(-1);
    }

    // 0x100227a50, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.117
    void ___cxx_global_var_init_117() {
        MapLabelSize::SMALL = MapLabelSize::FromSize(0);
    }

    // 0x100227a70, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.118
    void ___cxx_global_var_init_118() {
        MapLabelSize::MEDIUM = MapLabelSize::FromSize(1);
    }

    // 0x100227a90, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.119
    void ___cxx_global_var_init_119() {
        MapLabelSize::LARGE = MapLabelSize::FromSize(2);
    }

} // namespace jag::oldscape::rs2lib::worldmap
