// libs/graphics/runetek7/fonts/TextProperties.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "TextProperties.h"

namespace jag::graphics {
    // 0x1000e5d50, the same machine code as oldscape::rs2lib::CoordZoneSource::GetRotation() const
    unsigned int TextProperties::GetColour() const {
        return m_horizontalAlignment;
    }

    // 0x1001acac0: TextProperties::GetFlags() const has the same machine code as Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>::IsNull()

    // 0x10062dc60: TextProperties::GetHorizontalAlignment() const has the same machine code as TerrainOverlayShape::GetID() const

    // 0x1008e0290
    FontMetrics* TextProperties::GetFontMetrics() const {
        auto this_00 = GetFont();
        auto this_01 = this_00->SSOBeginPtr();
        return (FontMetrics*)**this_01;
    }

    // 0x1008e0d10
    void TextProperties::GetLineSpacing() const {
        int local_14;

        GetFontMetrics()->GetVerticalSpacing();
        field_28.value_or<int>(local_14);
    }

} // namespace jag::graphics
