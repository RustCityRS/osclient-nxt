// libs/graphics/runetek7/effects/skybox/SkyBoxVertex.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class SkyBoxVertex {
    public:
        SkyBoxVertex();

        uint8_t _unknown_0[28];
    };

    // 0x100929010
    SkyBoxVertex::SkyBoxVertex() : math::Vector2T() {}

    // 0x100929320
    ViewportMapEntry* ViewportMapEntry::operator=(ViewportMapEntry&& viewportMapEntry) {
        field_0 = viewportMapEntry.field_0;
        field_8 = viewportMapEntry.field_8;
        field_24 = viewportMapEntry.field_24;
        return this;
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x100929ae0
    Matrix22T<float>::Matrix22T(float arg1, float arg2, float arg3, float arg4) {
        long lVar1 = 0;
        do {
            new ((this + lVar1)) Vector2T();
            lVar1 = lVar1 + 8;
        } while (lVar1 != 16);
        Set(arg1, arg2);
        ((this + 8))->Set(arg3, arg4);
    }

} // namespace jag::math
