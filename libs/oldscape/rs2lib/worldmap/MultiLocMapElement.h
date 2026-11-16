// libs/oldscape/rs2lib/worldmap/MultiLocMapElement.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.rs2lib

namespace jag::oldscape::rs2lib::worldmap {
    class MultiLocMapElement {
    public:
        // virtual methods in vtable order
        virtual void Refresh();
        virtual GetMelTypeId();
        virtual void GetMapTextLabel() const;
        virtual void HasMapTextLabel() const;
        virtual GetWidth();
        virtual GetHeight();
        MultiLocMapElement(CoordGrid&, CoordGrid&, int, RenderedMapSquare&);
        ~MultiLocMapElement();

        // data members, from how the methods use this: 84 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[12];
        CoordGrid field_20; // offset 20
        char _unknown_36[4];
        undefined1 field_40; // offset 40
        char _unknown_41[3];
        int field_44;                // offset 44
        RenderedMapSquare* field_48; // offset 48
        undefined4 m_melTypeId;      // offset 56
        char _unknown_60[12];
        undefined4 m_width;  // offset 72
        undefined4 m_height; // offset 76
        char _unknown_80[4];
    };

    // 0x10020d410, 96 bytes, base-object constructor, placed by class name
    // MultiLocMapElement::MultiLocMapElement(CoordGrid&, CoordGrid&, int, RenderedMapSquare&)
    void MultiLocMapElement::MultiLocMapElement(CoordGrid* param_1, CoordGrid* param_2, int param_3,
                                                RenderedMapSquare* param_4) {
        new (this) MapElement(param_1, param_2);
        field_0 = &PTR_Refresh_100ef75d8;
        field_44 = param_3;
        field_48 = param_4;
        std::unique_ptr<MapTextLabel, std::default_delete<MapTextLabel>>::unique_ptr<true, void>(
            (_func_decltype_nullptr*)&field_64);
        Refresh(this);
    }

    // 0x10020d480, 224 bytes, placed by class name
    // MultiLocMapElement::Refresh()
    void MultiLocMapElement::Refresh() {
        int iVar2;
        shared_ptr<configdecoder::LocType>* psVar3;
        LocType* this_00;
        long lVar4;
        MapElementType* pMVar5;
        MapTextLabel* pMVar6;
        undefined4 uVar7;
        shared_ptr<graphics::Pix32> local_38[16];

        psVar3 = (shared_ptr<configdecoder::LocType>*)configdecoder::LocType::List(field_44);
        this_00 = (LocType*)shared_ptr<configdecoder::LocType>::operator->(psVar3);
        psVar3 = (shared_ptr<configdecoder::LocType>*)this_00->GetMultiLoc();
        lVar4 = shared_ptr<configdecoder::LocType>::operator->(psVar3);
        m_melTypeId = *(undefined4*)(lVar4 + 432);
        iVar2 = GetMelTypeId(this);
        pMVar5 = (MapElementType*)configdecoder::MapElementType::List(iVar2);
        pMVar6 = (MapTextLabel*)(field_48, pMVar5)->CreateMapTextLabelForMapElement();
        (&field_64, pMVar6)->reset();
        uVar7 = 0;
        local_38->GetSprite(SUB81(pMVar5, 0));
        if (operator!=((shared_ptr*)local_38, (_func_decltype_nullptr*)0)) {
            lVar4 = shared_ptr<graphics::Pix32>::operator->(local_38);
            m_width = *(undefined4*)(lVar4 + 24);
            lVar4 = shared_ptr<graphics::Pix32>::operator->(local_38);
            uVar7 = *(undefined4*)(lVar4 + 28);
        } else {
            m_width = 0;
        }
        m_height = uVar7;
        local_38->~shared_ptr();
    }

    // 0x10020d570, 16 bytes, complete-object constructor, placed by class name
    // MultiLocMapElement::MultiLocMapElement(CoordGrid&, CoordGrid&, int, RenderedMapSquare&): jumps straight to the base-object constructor

    // 0x10020d580, 16 bytes, placed by class name
    // MultiLocMapElement::GetMelTypeId()
    undefined4 MultiLocMapElement::GetMelTypeId() {
        return m_melTypeId;
    }

    // 0x10020d860, 16 bytes, placed by class name
    // MultiLocMapElement::GetMapTextLabel() const
    void MultiLocMapElement::GetMapTextLabel() {
        std::unique_ptr<MapTextLabel, std::default_delete<MapTextLabel>>::operator*(
            (unique_ptr<MapTextLabel, std::default_delete<MapTextLabel>>*)&field_64);
    }

    // 0x10020d880, 16 bytes, placed by class name
    // MultiLocMapElement::HasMapTextLabel() const
    void MultiLocMapElement::HasMapTextLabel() {
        _func_decltype_nullptr* in_RSI;

        std::operator!=((unique_ptr*)&field_64, in_RSI);
    }

    // 0x10020d8a0, 16 bytes, placed by class name
    // MultiLocMapElement::GetWidth()
    undefined4 MultiLocMapElement::GetWidth() {
        return m_width;
    }

    // 0x10020d8b0, 16 bytes, placed by class name
    // MultiLocMapElement::GetHeight()
    undefined4 MultiLocMapElement::GetHeight() {
        return m_height;
    }

    // 0x100225890, 16 bytes, complete-object destructor, inline, placed by class name
    // MultiLocMapElement::~MultiLocMapElement(): jumps straight to the base-object destructor

    // 0x1002258a0, 16 bytes, base-object destructor, inline, placed by class name
    // MultiLocMapElement::~MultiLocMapElement()
    void MultiLocMapElement::~MultiLocMapElement() {
        (&field_64)->~unique_ptr();
    }

} // namespace jag::oldscape::rs2lib::worldmap
