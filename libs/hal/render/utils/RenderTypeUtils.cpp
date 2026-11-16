// libs/hal/render/utils/RenderTypeUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "RenderTypeUtils.h"

namespace jag::render {
    // 0x100bc8c00
    void GetFormatBitCount(Format format) {
        if (30 < format - 1) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/"
                            "RenderTypeUtils.cpp",
                            242, "render::GetFormatBitCount - Unknown texture format (%d)");
        }
        return *(uint32_t*)(&DAT_100d995b4 + (long)(int)(format - 1) * 4);
    }

    // 0x100bcec10
    void GetFormatChannelCount(Format format) {
        unsigned int uVar1 = format - 1;
        if ((28 < uVar1) || ((408917503U >> (uVar1 & 31) & 1) == 0)) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/"
                            "RenderTypeUtils.cpp",
                            285, "Unknown texture format (%d)");
        }
        return *(uint32_t*)(&reinterpret_cast<const uint64_t*>(&MAX_WRITEABLE)[16] + (long)(int)uVar1 * 4);
    }

} // namespace jag::render
