// libs/oldscape/rs2lib/worldmap/StaticMapElement.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100225ca0
    oldscape::rs2lib::worldmap::StaticMapElement*
    placement_new<oldscape::rs2lib::worldmap::StaticMapElement, oldscape::rs2lib::CoordGrid const&,
                  oldscape::rs2lib::CoordGrid const&, int const&, oldscape::rs2lib::worldmap::MapTextLabel*>(
        void* arg1, const oldscape::rs2lib::CoordGrid& coordGrid1, const oldscape::rs2lib::CoordGrid& coordGrid2,
        const int& arg4, oldscape::rs2lib::worldmap::MapTextLabel*&& arg5) {
        new (arg1) oldscape::rs2lib::worldmap::StaticMapElement(coordGrid1, coordGrid2, arg4, arg5);
        return arg1;
    }

    // 0x100225cc0
    ref_counter_shared<oldscape::rs2lib::worldmap::StaticMapElement>*
    placement_new<ref_counter_shared<oldscape::rs2lib::worldmap::StaticMapElement>, int,
                  oldscape::rs2lib::worldmap::StaticMapElement*&>(void* arg1, int&& arg2,
                                                                  oldscape::rs2lib::worldmap::StaticMapElement*& arg3) {
        new (arg1) ref_counter_shared<oldscape::rs2lib::worldmap::StaticMapElement>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100225cf0
    ref_counter_shared<oldscape::rs2lib::worldmap::StaticMapElement>::ref_counter_shared(
        unsigned long arg1, oldscape::rs2lib::worldmap::StaticMapElement* staticMapElement)
        : ref_counter_base() {}

    // 0x100225d30
    void ref_counter_shared<oldscape::rs2lib::worldmap::StaticMapElement>::DeleteData() {
        ref_counter_shared<oldscape::rs2lib::worldmap::StaticMapElement> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((StaticMapElement*)((long)&(this[3]._vptr)->_dtor + lVar2))->~StaticMapElement();
                    prVar1 =
                        (ref_counter_shared<oldscape::rs2lib::worldmap::StaticMapElement> _vtbl*)((long)&prVar1->_dtor +
                                                                                                  1);
                    lVar2 = lVar2 + 64;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100225da0
    oldscape::rs2lib::worldmap::MapSquareData* placement_new<oldscape::rs2lib::worldmap::MapSquareData>(void* arg1) {
        new (arg1) oldscape::rs2lib::worldmap::MapSquareData();
        return arg1;
    }

    // 0x100225dc0
    ref_counter_shared<oldscape::rs2lib::worldmap::MapSquareData>*
    placement_new<ref_counter_shared<oldscape::rs2lib::worldmap::MapSquareData>, int,
                  oldscape::rs2lib::worldmap::MapSquareData*&>(void* arg1, int&& arg2,
                                                               oldscape::rs2lib::worldmap::MapSquareData*& arg3) {
        new (arg1) ref_counter_shared<oldscape::rs2lib::worldmap::MapSquareData>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100225df0
    ref_counter_shared<oldscape::rs2lib::worldmap::MapSquareData>::ref_counter_shared(
        unsigned long arg1, oldscape::rs2lib::worldmap::MapSquareData* mapSquareData)
        : ref_counter_base() {}

    // 0x100225e30
    void ref_counter_shared<oldscape::rs2lib::worldmap::MapSquareData>::DeleteData() {
        ref_counter_shared<oldscape::rs2lib::worldmap::MapSquareData> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((MapZoneData*)((long)&(this[3]._vptr)->_dtor + lVar2))->~MapZoneData();
                    prVar1 =
                        (ref_counter_shared<oldscape::rs2lib::worldmap::MapSquareData> _vtbl*)((long)&prVar1->_dtor +
                                                                                               1);
                    lVar2 = lVar2 + 192;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
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
        virtual uint32_t GetWidth();
        virtual uint32_t GetHeight();
        StaticMapElement(const CoordGrid& coordGrid1, const CoordGrid& coordGrid2, int arg3,
                         MapTextLabel* mapTextLabel);
        ~StaticMapElement();

    private:
        uint8_t _unknown_8[12];
        CoordGrid field_20;
        uint8_t _unknown_36[4];
        uint8_t field_40;
        uint8_t _unknown_41[3];
        int m_melTypeId;
        uint8_t _unknown_48[8];
        uint32_t m_width;
        uint32_t m_height;
        uint8_t _unknown_64[4];
    };

    // 0x1002259d0
    StaticMapElement::~StaticMapElement() {
        field_48.~unique_ptr();
    }

} // namespace jag::oldscape::rs2lib::worldmap

namespace jag::game {
    class StaticMapElement {
    public:
        StaticMapElement();

        uint8_t _unknown_0[1];
    };

} // namespace jag::game
