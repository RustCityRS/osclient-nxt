// libs/hal/render/utils/RenderTypes.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    // 0x10047c880
    uint32_t Viewport::Contains(int arg1, int arg2) const {
        if (((arg1 < field_0) || (arg2 < field_4)) || (field_0 + field_8 <= arg1)) {
            return 0;
        }
        int iVar1 = field_4 + field_12;
        return arg2 < iVar1;
    }

} // namespace jag::render
