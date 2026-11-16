// libs/game/runetek5/scene/RemoveRoof.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class RemoveRoof {
    public:
        void IsRoofRemoved(const CoordGrid& coordGrid) const;
        void GetBoundsForLevel(int arg1) const;
        bool AnyRoofRemoved() const;
        ~RemoveRoof();
        RemoveRoof();
        bool SetCurrentTick(const LinkMap& linkMap, unsigned int arg2, const World* world);
        void Setup(const LinkMap& linkMap, const World* world);
        void SetRoofRemoved(int arg1, unsigned int arg2, unsigned int arg3, Type arg4);
        bool IsRoofRemoved(int arg1, unsigned int arg2, unsigned int arg3) const;
        bool IsRoofRemovedInRange(const CoordGrid& coordGrid1, const CoordGrid& coordGrid2) const;
        int CalculateMaxRemoveRoofLevel(const LinkMap& linkMap, int arg2, int arg3, int arg4, int arg5, int arg6);

    private:
        unsigned int field_0;
        int field_4;
        int field_8;
        int field_12;
        int field_16;
        int field_20;
        int field_24;
        int field_28;
        int field_32;
        int field_36;
        uint8_t _unknown_40[589928];
        LinkMap* field_589968;
        World* field_589976;
    };

    class RemoveRoofPaintingProgress {
    public:
        RemoveRoofPaintingProgress();
        RemoveRoofPaintingProgress(int arg1, int arg2, int arg3, int arg4);
        void Set(int arg1, int arg2, int arg3);
        bool IsSet(int arg1, int arg2, int arg3) const;

    private:
        int field_0;
        int field_4;
        int field_8;
        int field_12;
        uint8_t _unknown_16[8];
    };

    // 0x1003ef390
    void RemoveRoof::IsRoofRemoved(const CoordGrid& coordGrid) const {
        IsRoofRemoved(coordGrid.field_0, coordGrid.field_4, coordGrid.field_8);
    }

    // 0x1003fdb70
    void RemoveRoof::GetBoundsForLevel(int arg1) const {
        if (3 < (unsigned int)arg1) {
            LogAssert("level >= 0 && level < constants::MapConstants::LEVELS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "RemoveRoof.h",
                      65, nullptr);
        }
        field_589864[(long)arg1];
    }

    // 0x1004306a0
    bool RemoveRoof::AnyRoofRemoved() const {
        return 0 < field_36;
    }

    // 0x10044bef0
    RemoveRoof::~RemoveRoof() {
        field_589864.~fixed_vector();
    }

} // namespace jag::game

namespace jag::game::option {
    class RemoveRoof {
    public:
        // virtual methods in vtable order
        virtual ~RemoveRoof();
        virtual uint64_t GetDefault();
        RemoveRoof(graphics::RT7Core& rt7Core, Settings& settings, const char* str);

    private:
        Settings* field_8;
        char* field_16;
        uint32_t field_24;
        Range<EnumRemoveRoof>* field_28;
        uint32_t field_36;
        uint8_t _unknown_40[153];
    };

    // 0x10060fc60
    RemoveRoof::RemoveRoof(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        Range<EnumRemoveRoof>* local_30;

        new (&local_30) oldscape::sidebars::SideBarData(0, 3);
        new (this) Option<EnumRemoveRoof>(rt7Core, settings, str, local_30);
    }

} // namespace jag::game::option
