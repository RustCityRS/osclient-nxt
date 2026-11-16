// libs/game/runetek5/scene/RemoveRoof.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class RemoveRoof {
    public:
        void IsRoofRemoved(CoordGrid const&) const;
        void GetBoundsForLevel(int) const;
        bool AnyRoofRemoved() const;
        ~RemoveRoof();
        RemoveRoof();
        bool SetCurrentTick(LinkMap const&, unsigned int, World const*);
        void Setup(LinkMap const&, World const*);
        void SetRoofRemoved(int, unsigned int, unsigned int, Type);
        uint IsRoofRemoved(int, unsigned int, unsigned int) const;
        IsRoofRemovedInRange(CoordGrid const&, CoordGrid const&) const;
        int CalculateMaxRemoveRoofLevel(LinkMap const&, int, int, int, int, int);

        // data members, from how the methods use this: 589984 bytes
        uint field_0; // offset 0
        int field_4;  // offset 4
        int field_8;  // offset 8
        int field_12; // offset 12
        int field_16; // offset 16
        int field_20; // offset 20
        int field_24; // offset 24
        int field_28; // offset 28
        int field_32; // offset 32
        int field_36; // offset 36
        char _unknown_40[589824];
        undefined1 field_589864; // offset 589864
        char _unknown_589865[103];
        LinkMap* field_589968; // offset 589968
        World* field_589976;   // offset 589976
    };

    class RemoveRoofPaintingProgress {
    public:
        RemoveRoofPaintingProgress();
        RemoveRoofPaintingProgress(int, int, int, int);
        void Set(int, int, int);
        bool IsSet(int, int, int) const;

        // data members, from how the methods use this: 24 bytes
        int field_0;  // offset 0
        int field_4;  // offset 4
        int field_8;  // offset 8
        int field_12; // offset 12
        char _unknown_16[8];
    };

    // 0x1003ef390, 32 bytes, inline, placed by class name and debug map
    // RemoveRoof::IsRoofRemoved(CoordGrid const&) const
    void RemoveRoof::IsRoofRemoved(CoordGrid* param_1) {
        IsRoofRemoved(this, param_1->field_0, param_1->field_4, param_1->field_8);
    }

    // 0x1003fdb70, 80 bytes, inline, placed by class name
    // RemoveRoof::GetBoundsForLevel(int) const
    void RemoveRoof::GetBoundsForLevel(int param_1) {
        if (3 < (uint)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("level >= 0 && level < constants::MapConstants::LEVELS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "RemoveRoof.h",
                      65, (char*)0);
        }
        eastl::vector<math::Rect<int>, eastl::fixed_vector_allocator<16ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::
        operator[]((vector<math::Rect<int>,
                           eastl::fixed_vector_allocator<16ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)&field_589864,
                   (long)param_1);
    }

    // 0x1004306a0, 16 bytes, inline, placed by class name
    // RemoveRoof::AnyRoofRemoved() const
    bool RemoveRoof::AnyRoofRemoved() {
        return 0 < field_36;
    }

    // 0x10043d050, 16 bytes, complete-object destructor, inline, placed by class name
    // RemoveRoof::~RemoveRoof(): jumps straight to the base-object destructor

    // 0x10044bef0, 32 bytes, base-object destructor, inline, placed by class name
    // RemoveRoof::~RemoveRoof()
    void RemoveRoof::~RemoveRoof() {
        (&field_589864)->~fixed_vector();
    }

} // namespace jag::game

namespace jag::game::option {
    class RemoveRoof {
    public:
        // virtual methods in vtable order
        virtual ~RemoveRoof();
        virtual GetDefault();
        RemoveRoof(graphics::RT7Core&, Settings&, char const*);

        // data members, from how the methods use this: 193 bytes
        undefined* field_0;     // offset 0, vtable pointer
        undefined8 field_8;     // offset 8
        undefined8 field_16;    // offset 16
        undefined4 field_24;    // offset 24
        undefined1 field_28[8]; // offset 28
        undefined4 field_36;    // offset 36
        char _unknown_40[153];
    };

    // 0x100608a90, 16 bytes, complete-object constructor, inline, placed by class name
    // RemoveRoof::RemoveRoof(graphics::RT7Core&, Settings&, char const*): jumps straight to the base-object constructor

    // 0x100609170, 16 bytes, complete-object destructor, inline, placed by class name
    // RemoveRoof::~RemoveRoof(): jumps straight to the base-object destructor

    // 0x10060fc60, 96 bytes, base-object constructor, inline, placed by class name
    // RemoveRoof::RemoveRoof(graphics::RT7Core&, Settings&, char const*)
    void RemoveRoof::RemoveRoof(RT7Core* param_1, Settings* param_2, char* param_3) {
        undefined1 local_30[8];

        new (local_30) oldscape::sidebars::SideBarData(0, 3);
        new (this) Option<EnumRemoveRoof>(param_1, param_2, param_3, local_30);
        field_0 = PTR_vtable_100ee84e8 + 16;
    }

    // 0x10060fd50, 32 bytes, deleting destructor, inline, placed by class name
    // RemoveRoof::~RemoveRoof()
    void RemoveRoof::~RemoveRoof() {
        ~RemoveRoof(this);
        operator_delete(this);
    }

} // namespace jag::game::option
