// libs/oldscape/rs2lib/worldmap/StaticMapElement.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100225ca0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::rs2lib::worldmap::StaticMapElement* placement_new<oldscape::rs2lib::worldmap::StaticMapElement, oldscape::rs2lib::CoordGrid const&, oldscape::rs2lib::CoordGrid const&, int const&, oldscape::rs2lib::worldmap::MapTextLabel*>(void*, oldscape::rs2lib::CoordGrid const&, oldscape::rs2lib::CoordGrid const&, int const&, oldscape::rs2lib::worldmap::MapTextLabel*&&)
    StaticMapElement*
    jag::placement_new<oldscape::rs2lib::worldmap::StaticMapElement, oldscape::rs2lib::CoordGrid_const&,
                       oldscape::rs2lib::CoordGrid_const&, int const&, oldscape::rs2lib::worldmap::MapTextLabel*>(
        void* param_1, CoordGrid* param_2, CoordGrid* param_3, int* param_4, MapTextLabel** param_5) {
        oldscape::rs2lib::worldmap::StaticMapElement::StaticMapElement(param_1, param_2, param_3, *param_4, *param_5);
        return param_1;
    }

    // 0x100225cc0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::worldmap::StaticMapElement>* placement_new<ref_counter_shared<oldscape::rs2lib::worldmap::StaticMapElement>, int, oldscape::rs2lib::worldmap::StaticMapElement*&>(void*, int&&, oldscape::rs2lib::worldmap::StaticMapElement*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::rs2lib::worldmap::StaticMapElement>, int,
                                           oldscape::rs2lib::worldmap::StaticMapElement*&>(void* param_1, int* param_2,
                                                                                           StaticMapElement** param_3) {
        ref_counter_shared<oldscape::rs2lib::worldmap::StaticMapElement>::ref_counter_shared(param_1, (long)*param_2,
                                                                                             *param_3);
        return param_1;
    }

    // 0x100225ce0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::worldmap::StaticMapElement>::ref_counter_shared(unsigned long, oldscape::rs2lib::worldmap::StaticMapElement*): jumps straight to the base-object constructor

    // 0x100225cf0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::worldmap::StaticMapElement>::ref_counter_shared(unsigned long, oldscape::rs2lib::worldmap::StaticMapElement*)
    void
    ref_counter_shared<oldscape::rs2lib::worldmap::StaticMapElement>::ref_counter_shared(ulong param_1,
                                                                                         StaticMapElement* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7910 + 16;
        *(ulong*)(this + 16) = param_1;
        *(StaticMapElement**)(this + 24) = param_2;
    }

    // 0x100225d30, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::worldmap::StaticMapElement>::DeleteData()
    void ref_counter_shared<oldscape::rs2lib::worldmap::StaticMapElement>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~StaticMapElement();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 64;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100225da0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::rs2lib::worldmap::MapSquareData* placement_new<oldscape::rs2lib::worldmap::MapSquareData>(void*)
    MapSquareData* placement_new<oldscape::rs2lib::worldmap::MapSquareData>(void* param_1) {
        oldscape::rs2lib::worldmap::MapSquareData::MapSquareData(param_1);
        return param_1;
    }

    // 0x100225dc0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::worldmap::MapSquareData>* placement_new<ref_counter_shared<oldscape::rs2lib::worldmap::MapSquareData>, int, oldscape::rs2lib::worldmap::MapSquareData*&>(void*, int&&, oldscape::rs2lib::worldmap::MapSquareData*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::rs2lib::worldmap::MapSquareData>, int,
                                           oldscape::rs2lib::worldmap::MapSquareData*&>(void* param_1, int* param_2,
                                                                                        MapSquareData** param_3) {
        ref_counter_shared<oldscape::rs2lib::worldmap::MapSquareData>::ref_counter_shared(param_1, (long)*param_2,
                                                                                          *param_3);
        return param_1;
    }

    // 0x100225de0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::worldmap::MapSquareData>::ref_counter_shared(unsigned long, oldscape::rs2lib::worldmap::MapSquareData*): jumps straight to the base-object constructor

    // 0x100225df0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::worldmap::MapSquareData>::ref_counter_shared(unsigned long, oldscape::rs2lib::worldmap::MapSquareData*)
    void ref_counter_shared<oldscape::rs2lib::worldmap::MapSquareData>::ref_counter_shared(ulong param_1,
                                                                                           MapSquareData* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7908 + 16;
        *(ulong*)(this + 16) = param_1;
        *(MapSquareData**)(this + 24) = param_2;
    }

    // 0x100225e30, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::worldmap::MapSquareData>::DeleteData()
    void ref_counter_shared<oldscape::rs2lib::worldmap::MapSquareData>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~MapZoneData();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 192;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag

namespace jag::oldscape::rs2lib::worldmap {
    class StaticMapElement : public MultiLocMapElement // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual void Refresh();
        virtual int GetMelTypeId();
        virtual void GetMapTextLabel() const;
        virtual void HasMapTextLabel() const;
        virtual GetWidth();
        virtual GetHeight();
        StaticMapElement(CoordGrid const&, CoordGrid const&, int, MapTextLabel*);
        ~StaticMapElement();

        // data members, from how the methods use this: 68 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[12];
        CoordGrid field_20; // offset 20
        char _unknown_36[4];
        undefined1 field_40; // offset 40
        char _unknown_41[3];
        int m_melTypeId; // offset 44
        char _unknown_48[8];
        undefined4 m_width;  // offset 56
        undefined4 m_height; // offset 60
        char _unknown_64[4];
    };

    // 0x1002259c0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // StaticMapElement::~StaticMapElement(): jumps straight to the base-object destructor

    // 0x1002259d0, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // StaticMapElement::~StaticMapElement()
    void StaticMapElement::~StaticMapElement() {
        (&field_48)->~unique_ptr();
    }

} // namespace jag::oldscape::rs2lib::worldmap

namespace jag::game {
    class StaticMapElement {
    public:
        StaticMapElement();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

} // namespace jag::game
