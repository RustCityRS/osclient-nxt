// libs/graphics/runetek7/model/billboards/BillboardType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "BillboardType.h"

namespace jag::graphics {
    // 0x100822010
    void BillboardType::Initialise(unsigned int arg1, const BillboardRaw& billboardRaw) {
        field_0 = 1;
        field_4 = arg1;
        field_8 = billboardRaw.field_4;
        field_12 = billboardRaw.field_8;
        field_16 = billboardRaw.field_12;
        field_24 = billboardRaw.field_16;
        field_32 = billboardRaw.field_24;
        field_40 = billboardRaw.field_32;
        field_41 = billboardRaw.field_33;
    }

} // namespace jag::graphics
