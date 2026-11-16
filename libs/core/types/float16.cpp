// libs/core/types/float16.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "float16.h"
#include "libs/graphics/runetek7/model/Model.h"
#include "libs/ui/components/Component.h"

namespace jag::types {
    // 0x103bff680, 16 bytes, __common; zero-initialised
    float16::ZERO;

    // 0x10045ae90: the linker folded this into graphics::FaceGroupRenderMasks::FaceGroupRenderMasks(), which has identical code
    float16::float16();

    // 0x10045b180: the linker folded this into graphics::FaceGroupRenderMasks::FaceGroupRenderMasks(), which has identical code
    float16::float16();

    // 0x100cc5b10, 80 bytes, placed by debug map only (low confidence)
    // FloatToFloat16(float)
    uint FloatToFloat16(float param_1) {
        uint uVar1;
        uint uVar2;

        uVar2 = 0;
        if (947912703 < ((uint)param_1 & 2139095040)) {
            uVar2 = ((uint)param_1 >> 13) + 16384;
        }
        uVar1 = 31743;
        if (((uint)param_1 & 2139095040) < 1191182337) {
            uVar1 = uVar2;
        }
        return uVar1 & 65535 | (uint)param_1 >> 16 & 32768;
    }

    // 0x100cc5b60, 64 bytes, placed by debug map only (low confidence)
    // Float16ToFloat(unsigned short)
    uint Float16ToFloat(ushort param_1) {
        uint uVar1;

        uVar1 = ((uint)param_1 & 32767) * 8192 + 939524096;
        if ((param_1 & 31744) == 0) {
            uVar1 = (uint)param_1 & 31744;
        }
        return uVar1 | ((uint)param_1 & 32768) << 16;
    }

} // namespace jag::types

namespace jag::graphics {
    // 0x10045ae90: the linker folded this into FaceGroupRenderMasks::FaceGroupRenderMasks(), which has identical code
    ModelTextureMeta::ModelTextureMeta();

} // namespace jag::graphics

namespace jag::ui {
    // 0x10045b180: the linker folded this into graphics::FaceGroupRenderMasks::FaceGroupRenderMasks(), which has identical code
    ComponentPinchConfig::ComponentPinchConfig();

} // namespace jag::ui
