// libs/graphics/runetek7/model/billboards/BillboardType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "BillboardType.h"

namespace jag::graphics {
    // 0x100822010, 64 bytes, placed by class name and debug map
    // BillboardType::Initialise(unsigned int, BillboardRaw const&)
    void BillboardType::Initialise(uint param_1, BillboardRaw* param_2) {
        field_0 = 1;
        field_4 = param_1;
        field_8 = param_2->field_4;
        field_12 = param_2->field_8;
        field_16 = param_2->field_12;
        field_24 = param_2->field_16;
        field_32 = param_2->field_24;
        field_40 = param_2->field_32;
        field_41 = param_2->field_33;
    }

} // namespace jag::graphics
