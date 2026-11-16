// projects/osclient/EntityOverlays.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class EntityOverlays {
    public:
        void CreateStaticOverlay(int, rs2lib::CoordGrid const&, LocLayer);
        void GetStaticOverlayIndex(int, rs2lib::CoordGrid const&, LocLayer);
        void DestroyStaticOverlay(int, rs2lib::CoordGrid const&, LocLayer);
        EntityOverlays();
        ~EntityOverlays();
        void GetOverlaysForEntityUnchecked(rs2lib::CoordGrid const&, LocLayer);
        void DestroyStaticOverlays(rs2lib::CoordGrid const&, LocLayer);
        void OverlayExistsAtIndex(int);
        void DestroyOverlay(int);
        GetLayer(int);
        GetOverlay(int);
        void ForEachOverlay(std::function<void(Array<shared_ptr<rs2lib::IfType>, eastl::allocator>&)>);
        OverlayTypeFromLocLayer(LocLayer);
        ulong AnyOverlaysOnTile(rs2lib::CoordGrid const&);
        void GetStaticEntityOverlays(rs2lib::CoordGrid const&);
        ulong CreateStaticOverlay(int, rs2lib::CoordGrid const&, StaticEntityOverlayType);
        bool IsTypeValid(StaticEntityOverlayType);
        void LogStaticOverlayCreated(int, rs2lib::CoordGrid const&, StaticEntityOverlayType);
        void GetOverlaysForEntityUnchecked(rs2lib::CoordGrid const&, StaticEntityOverlayType);
        int CreateOverlay();
        GetStaticOverlayIndex(int, rs2lib::CoordGrid const&, StaticEntityOverlayType);
        void DestroyStaticOverlay(int, rs2lib::CoordGrid const&, StaticEntityOverlayType);
        void DestroyStaticOverlays(rs2lib::CoordGrid const&, StaticEntityOverlayType);
        void DestroyAllStaticOverlays();

        // data members, from how the methods use this: 2112 bytes
        char _unknown_0[2088];
        ulong field_2088; // offset 2088
        ulong field_2096; // offset 2096
        char _unknown_2104[8];
    };

    // 0x1000b76b0, 64 bytes, inline, placed by class name and debug map
    // EntityOverlays::CreateStaticOverlay(int, rs2lib::CoordGrid const&, LocLayer)
    void EntityOverlays::CreateStaticOverlay(undefined4 param_1, undefined8 param_2, undefined4 param_4) {
        undefined4 uVar1;

        uVar1 = OverlayTypeFromLocLayer(param_4);
        CreateStaticOverlay(this, param_1, param_2, uVar1);
    }

    // 0x1000b7730, 64 bytes, inline, placed by class name
    // EntityOverlays::GetStaticOverlayIndex(int, rs2lib::CoordGrid const&, LocLayer)
    void EntityOverlays::GetStaticOverlayIndex(undefined4 param_1, undefined8 param_2, undefined4 param_4) {
        undefined4 uVar1;

        uVar1 = OverlayTypeFromLocLayer(param_4);
        GetStaticOverlayIndex(this, param_1, param_2, uVar1);
    }

    // 0x1000b77a0, 64 bytes, inline, placed by class name
    // EntityOverlays::DestroyStaticOverlay(int, rs2lib::CoordGrid const&, LocLayer)
    void EntityOverlays::DestroyStaticOverlay(undefined4 param_1, undefined8 param_2, undefined4 param_4) {
        undefined4 uVar1;

        uVar1 = OverlayTypeFromLocLayer(param_4);
        DestroyStaticOverlay(this, param_1, param_2, uVar1);
    }

    // 0x1000c45e0, 16 bytes, complete-object constructor, inline, placed by class name
    // EntityOverlays::EntityOverlays(): jumps straight to the base-object constructor

    // 0x1000c48b0, 16 bytes, complete-object destructor, inline, placed by class name
    // EntityOverlays::~EntityOverlays(): jumps straight to the base-object destructor

    // 0x1001103c0, 48 bytes, inline, placed by class name
    // EntityOverlays::GetOverlaysForEntityUnchecked(rs2lib::CoordGrid const&, LocLayer)
    void EntityOverlays::GetOverlaysForEntityUnchecked(CoordGrid* param_1, undefined4 param_3) {
        array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>* this_00;
        int iVar1;

        this_00 = (array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>*)
            GetStaticEntityOverlays(this, param_1);
        iVar1 = OverlayTypeFromLocLayer(param_3);
        std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                   5ul>::operator[](this_00, (long)iVar1);
    }

    // 0x10011b7b0, 48 bytes, inline, placed by class name
    // EntityOverlays::DestroyStaticOverlays(rs2lib::CoordGrid const&, LocLayer)
    void EntityOverlays::DestroyStaticOverlays(undefined8 param_1, undefined4 param_3) {
        undefined4 uVar1;

        uVar1 = OverlayTypeFromLocLayer(param_3);
        DestroyStaticOverlays(this, param_1, uVar1);
    }

    // 0x100129100, 48 bytes, base-object constructor, inline, placed by class name
    // EntityOverlays::EntityOverlays()
    void EntityOverlays::EntityOverlays() {
        new (this) RandomAccessPool<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, 64ul>();
        new (&field_2104) std::array<
            std::array<
                std::array<
                    std::unique_ptr<
                        std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                   5ul>,
                        std::default_delete<std::array<
                            eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>>>,
                    104ul>,
                104ul>,
            4ul>();
    }

    // 0x100129f60, 48 bytes, base-object destructor, inline, placed by class name
    // EntityOverlays::~EntityOverlays()
    void EntityOverlays::~EntityOverlays() {
        (&field_2104)->~array();
        ~RandomAccessPool();
    }

    // 0x100184730, 96 bytes, inline, placed by class name
    // EntityOverlays::GetStaticEntityOverlays(rs2lib::CoordGrid const&)
    void EntityOverlays::GetStaticEntityOverlays(CoordGrid* param_1) {
        array<std::array<
                  std::unique_ptr<
                      std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                 5ul>,
                      std::default_delete<std::array<
                          eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>>>,
                  104ul>,
              104ul>* this_00;
        array<std::unique_ptr<
                  std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>,
                  std::default_delete<std::array<
                      eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>>>,
              104ul>* this_01;
        unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>,
                   std::default_delete<std::array<
                       eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>>>*
            this_02;
        int iVar1;

        iVar1 = param_1->GetX();
        this_00 =
            (array<
                std::array<
                    std::unique_ptr<
                        std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                   5ul>,
                        std::default_delete<std::array<
                            eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>>>,
                    104ul>,
                104ul>*)
                std::array<
                    std::array<
                        std::array<std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                               eastl::less<int>, eastl::allocator>,
                                                              5ul>,
                                                   std::default_delete<
                                                       std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                                   eastl::less<int>, eastl::allocator>,
                                                                  5ul>>>,
                                   104ul>,
                        104ul>,
                    4ul>::
                operator[](
                    (array<
                        std::array<
                            std::array<std::unique_ptr<std::array<eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                                   eastl::less<int>, eastl::allocator>,
                                                                  5ul>,
                                                       std::default_delete<std::array<
                                                           eastl::fixed_map<int, unsigned long, 1ul, true,
                                                                            eastl::less<int>, eastl::allocator>,
                                                           5ul>>>,
                                       104ul>,
                            104ul>,
                        4ul>*)&field_2104,
                    (long)iVar1);
        iVar1 = param_1->GetZ();
        this_01 = (array<
                   std::unique_ptr<
                       std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                  5ul>,
                       std::default_delete<std::array<
                           eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>>>,
                   104ul>*)
            std::array<
                std::array<
                    std::unique_ptr<
                        std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                                   5ul>,
                        std::default_delete<std::array<
                            eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>>>,
                    104ul>,
                104ul>::operator[](this_00, (long)iVar1);
        iVar1 = param_1->GetPos();
        this_02 = (unique_ptr<
                   std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>,
                   std::default_delete<std::array<
                       eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>>>*)
            std::array<
                std::unique_ptr<
                    std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                               5ul>,
                    std::default_delete<std::array<
                        eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>>>,
                104ul>::operator[](this_01, (long)iVar1);
        std::unique_ptr<
            std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>,
            std::default_delete<
                std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>>>::
            get(this_02);
    }

    // 0x1001849c0, 16 bytes, inline, placed by class name
    // EntityOverlays::IsTypeValid(StaticEntityOverlayType)
    bool EntityOverlays::IsTypeValid(uint param_1) {
        return param_1 < 5;
    }

    // 0x1001849d0, 352 bytes, inline, placed by class name
    // EntityOverlays::LogStaticOverlayCreated(int, rs2lib::CoordGrid const&, StaticEntityOverlayType)
    void EntityOverlays::LogStaticOverlayCreated(undefined4 param_1, CommandLine* param_2, uint param_3) {
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        eastl::string local_58[36];

        eastl::string::basic_string(local_58);
        switch (param_3) {
        case 0:
            eastl::string::append(local_58, "WALL");
            break;
        case 1:
            eastl::string::append(local_58, "DECOR");
            break;
        case 2:
            eastl::string::append(local_58, "GROUNDDECOR");
            break;
        case 3:
            eastl::string::append(local_58, "SCENERY");
            break;
        case 4:
            eastl::string::append(local_58, "TILE");
            break;
        default:
            eastl::string::append_sprintf((char*)local_58, "UNKNOWN: %d", (ulong)param_3);
        }
        uVar4 = logger::default_logger();
        uVar1 = param_2->GetX();
        uVar2 = param_2->GetZ();
        uVar3 = param_2->GetPos();
        uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(
            uVar4, 0, 5,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/EntityOverlays.h", 129,
            "Creating static entity overlay with id: %d, level: %d, x: %d, z: %d, type: %s", param_1, uVar1, uVar2,
            uVar3, uVar5);
        eastl::string::~basic_string(local_58);
    }

    // 0x100184c00, 32 bytes, inline, placed by class name
    // EntityOverlays::GetOverlaysForEntityUnchecked(rs2lib::CoordGrid const&, StaticEntityOverlayType)
    void EntityOverlays::GetOverlaysForEntityUnchecked(CoordGrid* param_1, int param_3) {
        array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>* this_00;

        this_00 = (array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>, 5ul>*)
            GetStaticEntityOverlays(this, param_1);
        std::array<eastl::fixed_map<int, unsigned long, 1ul, true, eastl::less<int>, eastl::allocator>,
                   5ul>::operator[](this_00, (long)param_3);
    }

} // namespace jag::oldscape
