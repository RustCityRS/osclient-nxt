// libs/oldscape/rs2lib/worldmap/StaticMapElement.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "StaticMapElement.h"

namespace jag::oldscape::rs2lib::worldmap {
    // 0x1002136a0, 16 bytes, complete-object constructor, placed by class name and debug map
    // StaticMapElement::StaticMapElement(CoordGrid const&, CoordGrid const&, int, MapTextLabel*): jumps straight to the base-object constructor

    // 0x1002137c0, 16 bytes, placed by class name
    // StaticMapElement::GetMelTypeId()
    int StaticMapElement::GetMelTypeId() {
        return m_melTypeId;
    }

    // 0x100214ce0, 208 bytes, base-object constructor, placed by class name
    // StaticMapElement::StaticMapElement(CoordGrid const&, CoordGrid const&, int, MapTextLabel*)
    void StaticMapElement::StaticMapElement(CoordGrid* param_1, CoordGrid* param_2, int param_3,
                                            MapTextLabel* param_4) {
        bool bVar1;
        int iVar2;
        long lVar3;
        undefined4 uVar4;
        shared_ptr local_30;

        new (this) MapElement(param_1, param_2);
        field_0 = &PTR_Refresh_100ef7660;
        m_melTypeId = param_3;
        std::unique_ptr<MapTextLabel, std::default_delete<MapTextLabel>>::unique_ptr<true, void>(
            (unique_ptr<MapTextLabel, std::default_delete<MapTextLabel>>*)&field_48);
        (&field_48, param_4)->reset();
        iVar2 = GetMelTypeId(this);
        bVar1 = (bool)configdecoder::MapElementType::List(iVar2);
        local_30.GetSprite(bVar1);
        uVar4 = 0;
        bVar1 = operator!=(&local_30, (_func_decltype_nullptr*)0);
        if (bVar1) {
            lVar3 = shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)&local_30);
            m_width = *(undefined4*)(lVar3 + 24);
            lVar3 = shared_ptr<graphics::Pix32>::operator->((shared_ptr<graphics::Pix32>*)&local_30);
            uVar4 = *(undefined4*)(lVar3 + 28);
        } else {
            m_width = 0;
        }
        m_height = uVar4;
        local_30.~shared_ptr();
    }

    // 0x100214dc0, 16 bytes, placed by class name
    // StaticMapElement::Refresh()
    void StaticMapElement::Refresh() {}

    // 0x100214dd0, 16 bytes, placed by class name
    // StaticMapElement::GetMapTextLabel() const
    void StaticMapElement::GetMapTextLabel() {
        std::unique_ptr<MapTextLabel, std::default_delete<MapTextLabel>>::operator*(
            (unique_ptr<MapTextLabel, std::default_delete<MapTextLabel>>*)&field_48);
    }

    // 0x100214de0, 16 bytes, placed by class name
    // StaticMapElement::HasMapTextLabel() const
    void StaticMapElement::HasMapTextLabel() {
        _func_decltype_nullptr* in_RSI;

        std::operator!=((unique_ptr*)&field_48, in_RSI);
    }

    // 0x100214df0, 16 bytes, placed by class name
    // StaticMapElement::GetWidth()
    undefined4 StaticMapElement::GetWidth() {
        return m_width;
    }

    // 0x100214e00, 16 bytes, placed by class name
    // StaticMapElement::GetHeight()
    undefined4 StaticMapElement::GetHeight() {
        return m_height;
    }

} // namespace jag::oldscape::rs2lib::worldmap

namespace jag::game {
    // 0x1003d6a10: the linker folded this into WorldMap::PendingLocationType::PendingLocationType(), which has identical code
    StaticMapElement::StaticMapElement();

    // 0x1003d6b00: the linker folded this into WorldMap::PendingLocationType::PendingLocationType(), which has identical code
    StaticMapElement::StaticMapElement();

} // namespace jag::game
