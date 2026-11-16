// libs/graphics/runetek7/fonts/TextProperties.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "TextProperties.h"

namespace jag::graphics {
    // 0x1000e5d50: the linker folded this into oldscape::rs2lib::CoordZoneSource::GetRotation() const, which has identical code
    uint TextProperties::GetColour() const;

    // 0x1001acac0: the linker folded this into Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator> >::IsNull(), which has identical code
    byte TextProperties::GetFlags() const;

    // 0x10062dc60: the linker folded this into TerrainOverlayShape::GetID() const, which has identical code
    TextProperties::GetHorizontalAlignment() const;

    // 0x1008e0290, 32 bytes, placed by class name and debug map
    // TextProperties::GetFontMetrics() const
    void TextProperties::GetFontMetrics() {
        Layout* this_00;
        vector* this_01;
        type* in_RSI;

        this_00 = (Layout*)GetFont(this);
        this_01 = eastl::string::Layout::SSOBeginPtr(this_00, in_RSI);
        shared_ptr<FontMetrics>::operator*((shared_ptr<FontMetrics>*)this_01);
    }

    // 0x1008e0d10, 48 bytes, placed by class name and debug map
    // TextProperties::GetLineSpacing() const
    void TextProperties::GetLineSpacing() {
        FontMetrics* this_00;
        int local_14;

        this_00 = (FontMetrics*)GetFontMetrics(this);
        this_00->GetVerticalSpacing();
        eastl::optional<int>::value_or<int>((optional<int>*)&field_28, &local_14);
    }

} // namespace jag::graphics
