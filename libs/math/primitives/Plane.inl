// libs/math/primitives/Plane.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::math {
    // 0x1001df460, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // PlaneT<float>::PlaneT(): jumps straight to the base-object constructor

    // 0x1001df470, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PlaneT<float>::PlaneT()
    void PlaneT<float>::PlaneT() {
        new (this) ColourHSL(0.0, 1.0, 0.0);
        *(undefined4*)(this + 12) = 0;
    }

} // namespace jag::math

namespace jag::render {
    // 0x1001df4c0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // RenderTargetData::RenderTargetData(RenderTargets*, math::Vector4T<float> const&, unsigned int, float, unsigned int)
    void RenderTargetData::RenderTargetData(RenderTargets* param_1, Vector4T* param_2, uint param_3, float param_4,
                                            uint param_5) {
        undefined8 uVar1;

        field_0 = param_1;
        uVar1 = *(undefined8*)(param_2 + 8);
        field_16 = *(undefined8*)param_2;
        field_24 = uVar1;
        new (&field_32) math::Vector4T<float>();
        field_48 = param_3;
        field_52 = param_4;
        field_56 = param_5;
    }

    // 0x1001df510, 64 bytes, inline, placed by debug map only (low confidence)
    // RenderTargetData::operator=(RenderTargetData const&)
    /* RenderTargetData::TEMPNAMEPLACEHOLDERVALUE(RenderTargetData const&) */

    RenderTargetData* RenderTargetData::operator=(RenderTargetData* param_1) {
        float fVar1;

        field_0 = param_1->field_0;
        std::array<math::Vector4T<float>, 2ul>::operator=((array<math::Vector4T<float>, 2ul>*)&field_16,
                                                          (array*)&param_1->field_16);
        fVar1 = param_1->field_52;
        field_48 = param_1->field_48;
        field_52 = fVar1;
        field_56 = param_1->field_56;
        return this;
    }

} // namespace jag::render

namespace jag {
    // 0x1001df5e0, 80 bytes, inline, placed by debug map only (low confidence)
    // ViewTransformsShaderConsts::operator=(ViewTransformsShaderConsts const&)
    /* ViewTransformsShaderConsts::TEMPNAMEPLACEHOLDERVALUE(ViewTransformsShaderConsts&&) */

    ViewTransformsShaderConsts* ViewTransformsShaderConsts::operator=(ViewTransformsShaderConsts* param_1) {
        SetXYZ(param_1);
        math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_16, (Matrix44T*)&param_1->field_16);
        math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_80, (Matrix44T*)&param_1->field_80);
        math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_144, (Matrix44T*)&param_1->field_144);
        return this;
    }

    // 0x1001df5e0: the linker folded this into ViewTransformsShaderConsts::operator=(ViewTransformsShaderConsts const&), which has identical code
    ViewTransformsShaderConsts::operator=(ViewTransformsShaderConsts&&);

} // namespace jag
