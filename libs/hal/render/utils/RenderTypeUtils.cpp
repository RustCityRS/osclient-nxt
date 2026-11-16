// libs/hal/render/utils/RenderTypeUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "RenderTypeUtils.h"

namespace jag::render {
    // 0x100bc8c00, 80 bytes, placed by __FILE__ string
    // GetFormatBitCount(Format)
    undefined4 GetFormatBitCount(int param_1) {
        if (30 < param_1 - 1U) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/"
                            "RenderTypeUtils.cpp",
                            242, "render::GetFormatBitCount - Unknown texture format (%d)");
        }
        return *(undefined4*)(&DAT_100d995b4 + (long)(int)(param_1 - 1U) * 4);
    }

    // 0x100bcec10, 80 bytes, placed by __FILE__ string
    // GetFormatChannelCount(Format)
    undefined4 GetFormatChannelCount(int param_1) {
        uint uVar1;

        uVar1 = param_1 - 1;
        if ((28 < uVar1) || ((408917503U >> (uVar1 & 31) & 1) == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/"
                            "RenderTypeUtils.cpp",
                            285, "Unknown texture format (%d)");
        }
        return *(undefined4*)(&DAT_100d99630 + (long)(int)uVar1 * 4);
    }

} // namespace jag::render
