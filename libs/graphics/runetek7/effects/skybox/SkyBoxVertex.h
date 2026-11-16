// libs/graphics/runetek7/effects/skybox/SkyBoxVertex.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class SkyBoxVertex {
    public:
        SkyBoxVertex();

        // data members, from how the methods use this: 28 bytes
        char _unknown_0[28];
    };

    // 0x100929000, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // SkyBoxVertex::SkyBoxVertex(): jumps straight to the base-object constructor

    // 0x100929010, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // SkyBoxVertex::SkyBoxVertex()
    void SkyBoxVertex::SkyBoxVertex() {
        new (this) math::Vector2T<int>();
        new (&field_8) math::Vector3T<int>();
        new (&field_20) math::Vector3T<int>();
    }

    // 0x100929320, 48 bytes, inline, placed by debug map only (low confidence)
    // ViewportMapEntry::operator=(ViewportMapEntry&&)
    /* ViewportMapEntry::TEMPNAMEPLACEHOLDERVALUE(ViewportMapEntry&&) */

    ViewportMapEntry* ViewportMapEntry::operator=(ViewportMapEntry* param_1) {
        field_0 = param_1->field_0;
        shared_ptr<render::Texture2D>::operator=((shared_ptr<render::Texture2D>*)&field_8,
                                                 (shared_ptr*)&param_1->field_8);
        field_24 = param_1->field_24;
        return this;
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x100929ae0, 128 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Matrix22T<float>::Matrix22T(float, float, float, float)
    void Matrix22T<float>::Matrix22T(float param_1, float param_2, float param_3, float param_4) {
        long lVar1;

        lVar1 = 0;
        do {
            new ((this + lVar1)) Vector2T<int>();
            lVar1 = lVar1 + 8;
        } while (lVar1 != 16);
        Set(param_1, param_2);
        ((this + 8))->Set(param_3, param_4);
    }

} // namespace jag::math
