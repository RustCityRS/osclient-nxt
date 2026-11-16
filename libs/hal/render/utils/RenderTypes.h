// libs/hal/render/utils/RenderTypes.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    // 0x10047c880, 48 bytes, inline, placed by debug map only (low confidence)
    // Viewport::Contains(int, int) const
    undefined4 Viewport::Contains(int param_1, int param_2) {
        int iVar1;

        if (((param_1 < field_0) || (param_2 < field_4)) || (field_0 + field_8 <= param_1)) {
            return 0;
        }
        iVar1 = field_4 + field_12;
        return CONCAT31((int3)((uint)iVar1 >> 8), param_2 < iVar1);
    }

} // namespace jag::render
