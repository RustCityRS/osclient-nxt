// projects/osclient/EntityOverlays.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class EntityOverlays {
    public:
        void CreateStaticOverlay(int arg1, const rs2lib::CoordGrid& coordGrid, LocLayer locLayer);
        void GetStaticOverlayIndex(int arg1, const rs2lib::CoordGrid& coordGrid, LocLayer locLayer);
        void DestroyStaticOverlay(int arg1, const rs2lib::CoordGrid& coordGrid, LocLayer locLayer);
        EntityOverlays();
        ~EntityOverlays();
        void GetOverlaysForEntityUnchecked(const rs2lib::CoordGrid& coordGrid, LocLayer locLayer);
        void DestroyStaticOverlays(const rs2lib::CoordGrid& coordGrid, LocLayer locLayer);
        void OverlayExistsAtIndex(int arg1);
        void DestroyOverlay(int arg1);
        uint8_t* GetLayer(int arg1);
        uint64_t GetOverlay(int arg1);
        void ForEachOverlay(std::function<void(Array<shared_ptr<rs2lib::IfType>>&)> callback);
        LocLayer OverlayTypeFromLocLayer(LocLayer locLayer);
        unsigned long AnyOverlaysOnTile(const rs2lib::CoordGrid& coordGrid);
        void GetStaticEntityOverlays(const rs2lib::CoordGrid& coordGrid);
        unsigned long CreateStaticOverlay(int arg1, const rs2lib::CoordGrid& coordGrid,
                                          StaticEntityOverlayType staticEntityOverlayType);
        bool IsTypeValid(StaticEntityOverlayType staticEntityOverlayType);
        void LogStaticOverlayCreated(int arg1, const rs2lib::CoordGrid& coordGrid,
                                     StaticEntityOverlayType staticEntityOverlayType);
        void GetOverlaysForEntityUnchecked(const rs2lib::CoordGrid& coordGrid,
                                           StaticEntityOverlayType staticEntityOverlayType);
        int CreateOverlay();
        uint32_t GetStaticOverlayIndex(int arg1, const rs2lib::CoordGrid& coordGrid,
                                       StaticEntityOverlayType staticEntityOverlayType);
        void DestroyStaticOverlay(int arg1, const rs2lib::CoordGrid& coordGrid,
                                  StaticEntityOverlayType staticEntityOverlayType);
        void DestroyStaticOverlays(const rs2lib::CoordGrid& coordGrid, StaticEntityOverlayType staticEntityOverlayType);
        void DestroyAllStaticOverlays();

    private:
        uint8_t _unknown_0[2088];
        unsigned long field_2088;
        unsigned long field_2096;
        uint8_t _unknown_2104[8];
    };

    // 0x1000b76b0
    void EntityOverlays::CreateStaticOverlay(int arg1, const rs2lib::CoordGrid& coordGrid, LocLayer locLayer) {
        auto staticEntityOverlayType = OverlayTypeFromLocLayer(locLayer);
        CreateStaticOverlay(arg1, coordGrid, staticEntityOverlayType);
    }

    // 0x1000b7730
    void EntityOverlays::GetStaticOverlayIndex(int arg1, const rs2lib::CoordGrid& coordGrid, LocLayer locLayer) {
        auto staticEntityOverlayType = OverlayTypeFromLocLayer(locLayer);
        GetStaticOverlayIndex(arg1, coordGrid, staticEntityOverlayType);
    }

    // 0x1000b77a0
    void EntityOverlays::DestroyStaticOverlay(int arg1, const rs2lib::CoordGrid& coordGrid, LocLayer locLayer) {
        auto staticEntityOverlayType = OverlayTypeFromLocLayer(locLayer);
        DestroyStaticOverlay(arg1, coordGrid, staticEntityOverlayType);
    }

    // 0x1001103c0
    void EntityOverlays::GetOverlaysForEntityUnchecked(const rs2lib::CoordGrid& coordGrid, LocLayer locLayer) {
        array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>* this_00;

        this_00 = (array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>*)GetStaticEntityOverlays(coordGrid);
        int iVar1 = OverlayTypeFromLocLayer(locLayer);
        (*this_00)[(long)iVar1];
    }

    // 0x10011b7b0
    void EntityOverlays::DestroyStaticOverlays(const rs2lib::CoordGrid& coordGrid, LocLayer locLayer) {
        auto staticEntityOverlayType = OverlayTypeFromLocLayer(locLayer);
        DestroyStaticOverlays(coordGrid, staticEntityOverlayType);
    }

    // 0x100129100
    EntityOverlays::EntityOverlays() : RandomAccessPool<Array<shared_ptr<rs2lib::IfType>>, 64ul>() {}

    // 0x100129f60
    EntityOverlays::~EntityOverlays() {
        field_2104.~array();
    }

    // 0x100184730
    void EntityOverlays::GetStaticEntityOverlays(const rs2lib::CoordGrid& coordGrid) {
        int iVar1 = coordGrid.GetX();
        array<std::array<std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>>, 104ul>, 104ul>*
            this_00 = &field_2104[(long)iVar1];
        iVar1 = coordGrid.GetZ();
        array<std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>>, 104ul>* this_01 =
            (array<std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>>, 104ul>*)(*this_00)[(
                long)iVar1];
        iVar1 = coordGrid.GetPos();
        ((unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>>*)(*this_01)[(long)iVar1])->get();
    }

    // 0x1001849c0
    bool EntityOverlays::IsTypeValid(StaticEntityOverlayType staticEntityOverlayType) {
        return staticEntityOverlayType < 5;
    }

    // 0x1001849d0
    void EntityOverlays::LogStaticOverlayCreated(int arg1, const rs2lib::CoordGrid& coordGrid,
                                                 StaticEntityOverlayType staticEntityOverlayType) {
        Logger* logger;

        eastl::string local_58;
        switch (staticEntityOverlayType) {
        case 0:
            local_58.append("WALL");
            break;
        case 1:
            local_58.append("DECOR");
            break;
        case 2:
            local_58.append("GROUNDDECOR");
            break;
        case 3:
            local_58.append("SCENERY");
            break;
        case 4:
            local_58.append("TILE");
            break;
        default:
            local_58.append_sprintf("UNKNOWN: %d", (unsigned long)staticEntityOverlayType);
        }
        logger = logger::default_logger();
        uint32_t uVar1 = coordGrid.GetX();
        uint32_t uVar2 = coordGrid.GetZ();
        uint32_t uVar3 = coordGrid.GetPos();
        uint64_t uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger->Log(
            false, 5,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/EntityOverlays.h", 129,
            "Creating static entity overlay with id: %d, level: %d, x: %d, z: %d, type: %s", arg1, uVar1, uVar2, uVar3,
            uVar4);
    }

    // 0x100184c00
    void EntityOverlays::GetOverlaysForEntityUnchecked(const rs2lib::CoordGrid& coordGrid,
                                                       StaticEntityOverlayType staticEntityOverlayType) {
        array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>* this_00;

        this_00 = (array<eastl::fixed_map<int, unsigned long, 1ul>, 5ul>*)GetStaticEntityOverlays(coordGrid);
        (*this_00)[(long)(int)staticEntityOverlayType];
    }

} // namespace jag::oldscape
