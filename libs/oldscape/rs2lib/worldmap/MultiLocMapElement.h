// libs/oldscape/rs2lib/worldmap/MultiLocMapElement.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.rs2lib

namespace jag::oldscape::rs2lib::worldmap {
    class MultiLocMapElement {
    public:
        // virtual methods in vtable order
        virtual void Refresh();
        virtual uint32_t GetMelTypeId();
        virtual void GetMapTextLabel() const;
        virtual void HasMapTextLabel() const;
        virtual uint32_t GetWidth();
        virtual uint32_t GetHeight();
        MultiLocMapElement(CoordGrid& coordGrid1, CoordGrid& coordGrid2, int arg3,
                           RenderedMapSquare& renderedMapSquare);
        ~MultiLocMapElement();

    private:
        uint8_t _unknown_8[12];
        CoordGrid field_20;
        uint8_t _unknown_36[4];
        uint8_t field_40;
        uint8_t _unknown_41[3];
        int field_44;
        RenderedMapSquare* field_48;
        uint32_t m_melTypeId;
        uint8_t _unknown_60[12];
        uint32_t m_width;
        uint32_t m_height;
        uint8_t _unknown_80[4];
    };

    // 0x10020d410
    MultiLocMapElement::MultiLocMapElement(CoordGrid& coordGrid1, CoordGrid& coordGrid2, int arg3,
                                           RenderedMapSquare& renderedMapSquare)
        : MapElement(coordGrid1, coordGrid2), field_44(arg3), field_48(renderedMapSquare) {
        field_64.unique_ptr<true, void>(coordGrid1);
        Refresh();
    }

    // 0x10020d480
    void MultiLocMapElement::Refresh() {
        ReturnValue local_38;

        auto psVar2 = configdecoder::LocType::List(field_44);
        LocType* this_00 = (LocType*)(*psVar2).operator->();
        psVar2 = (shared_ptr<configdecoder::LocType>*)this_00->GetMultiLoc();
        long lVar3 = (*psVar2).operator->();
        m_melTypeId = *(uint32_t*)(lVar3 + 432);
        auto mapElementType = configdecoder::MapElementType::List(GetMelTypeId());
        field_64.reset((MapTextLabel*)field_48->CreateMapTextLabelForMapElement(mapElementType));
        uint32_t uVar4 = 0;
        local_38.GetSprite(mapElementType, false);
        if (local_38 != nullptr) {
            lVar3 = local_38.operator->();
            m_width = *(uint32_t*)(lVar3 + 24);
            lVar3 = local_38.operator->();
            uVar4 = *(uint32_t*)(lVar3 + 28);
        } else {
            m_width = 0;
        }
        m_height = uVar4;
    }

    // 0x10020d580
    uint32_t MultiLocMapElement::GetMelTypeId() {
        return m_melTypeId;
    }

    // 0x10020d860
    void MultiLocMapElement::GetMapTextLabel() const {
        *field_64;
    }

    // 0x10020d880
    void MultiLocMapElement::HasMapTextLabel() const {
        void* in_RSI;

        &field_64 != in_RSI;
    }

    // 0x10020d8a0
    uint32_t MultiLocMapElement::GetWidth() {
        return m_width;
    }

    // 0x10020d8b0
    uint32_t MultiLocMapElement::GetHeight() {
        return m_height;
    }

    // 0x1002258a0
    MultiLocMapElement::~MultiLocMapElement() {
        field_64.~unique_ptr();
    }

} // namespace jag::oldscape::rs2lib::worldmap
