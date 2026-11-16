// libs/core/types/float16.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "float16.h"
#include "libs/graphics/runetek7/model/Model.h"
#include "libs/ui/components/Component.h"

namespace jag::types {
    // 0x103bff680
    uint8_t float16::ZERO[16];

    // 0x10045b180: float16::float16() has the same machine code as graphics::FaceGroupRenderMasks::FaceGroupRenderMasks()

    // 0x100cc5b10
    unsigned int FloatToFloat16(float arg1) {
        unsigned int uVar2 = 0;
        if (947912703 < ((unsigned int)arg1 & 2139095040)) {
            uVar2 = ((unsigned int)arg1 >> 13) + 16384;
        }
        unsigned int uVar1 = 31743;
        if (((unsigned int)arg1 & 2139095040) < 1191182337) {
            uVar1 = uVar2;
        }
        return uVar1 & 65535 | (unsigned int)arg1 >> 16 & 32768;
    }

    // 0x100cc5b60
    unsigned int Float16ToFloat(unsigned short arg1) {
        unsigned int uVar1 = ((unsigned int)arg1 & 32767) * 8192 + 939524096;
        if ((arg1 & 31744) == 0) {
            uVar1 = (unsigned int)arg1 & 31744;
        }
        return uVar1 | ((unsigned int)arg1 & 32768) << 16;
    }

} // namespace jag::types

namespace jag::graphics {
    // 0x10045ae90: ModelTextureMeta::ModelTextureMeta() has the same machine code as FaceGroupRenderMasks::FaceGroupRenderMasks()

} // namespace jag::graphics

namespace jag::ui {
    // 0x10045b180: ComponentPinchConfig::ComponentPinchConfig() has the same machine code as graphics::FaceGroupRenderMasks::FaceGroupRenderMasks()

} // namespace jag::ui
