// libs/oldscape/rs2lib/worldmap/StaticMapElement.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "StaticMapElement.h"

namespace jag::oldscape::rs2lib::worldmap {
    // 0x1002137c0
    int StaticMapElement::GetMelTypeId() {
        return m_melTypeId;
    }

    // 0x100214ce0
    StaticMapElement::StaticMapElement(const CoordGrid& coordGrid1, const CoordGrid& coordGrid2, int arg3,
                                       MapTextLabel* mapTextLabel)
        : MapElement(coordGrid1, coordGrid2), m_melTypeId(arg3) {
        long lVar2;
        ReturnValue local_30;

        field_48.unique_ptr<true, void>();
        field_48.reset(mapTextLabel);
        local_30.GetSprite(configdecoder::MapElementType::List(GetMelTypeId()), false);
        uint32_t uVar3 = 0;
        if (local_30 != nullptr) {
            lVar2 = local_30.operator->();
            m_width = *(uint32_t*)(lVar2 + 24);
            lVar2 = local_30.operator->();
            uVar3 = *(uint32_t*)(lVar2 + 28);
        } else {
            m_width = 0;
        }
        m_height = uVar3;
    }

    // 0x100214dc0
    void StaticMapElement::Refresh() {}

    // 0x100214dd0
    void StaticMapElement::GetMapTextLabel() const {
        *field_48;
    }

    // 0x100214de0
    void StaticMapElement::HasMapTextLabel() const {
        void* in_RSI;

        &field_48 != in_RSI;
    }

    // 0x100214df0
    uint32_t StaticMapElement::GetWidth() {
        return m_width;
    }

    // 0x100214e00
    uint32_t StaticMapElement::GetHeight() {
        return m_height;
    }

} // namespace jag::oldscape::rs2lib::worldmap

namespace jag::game {
    // 0x1003d6b00: StaticMapElement::StaticMapElement() has the same machine code as WorldMap::PendingLocationType::PendingLocationType()

} // namespace jag::game
