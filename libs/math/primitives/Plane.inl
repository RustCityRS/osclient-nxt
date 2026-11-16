// libs/math/primitives/Plane.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::render {
    // 0x1001df4c0
    RenderTargetData::RenderTargetData(RenderTargets* renderTargets, const math::Vector4T<float>& vector4,
                                       unsigned int arg3, float arg4, unsigned int arg5)
        : field_0(renderTargets) {
        uint64_t uVar1 = *(uint64_t*)(vector4 + 8);
        field_16 = *(uint64_t*)vector4;
        field_24 = uVar1;
        new (&field_32) math::Vector4T();
        field_48 = arg3;
        field_52 = arg4;
        field_56 = arg5;
    }

    // 0x1001df510
    RenderTargetData* RenderTargetData::operator=(const RenderTargetData& renderTargetData) {
        field_0 = renderTargetData.field_0;
        field_16 = renderTargetData.field_16;
        float fVar1 = renderTargetData.field_52;
        field_48 = renderTargetData.field_48;
        field_52 = fVar1;
        field_56 = renderTargetData.field_56;
        return this;
    }

} // namespace jag::render

namespace jag {
    // 0x1001df5e0
    ViewTransformsShaderConsts*
    ViewTransformsShaderConsts::operator=(const ViewTransformsShaderConsts& viewTransformsShaderConsts) {
        SetXYZ(viewTransformsShaderConsts);
        field_16 = viewTransformsShaderConsts.field_16;
        field_80 = viewTransformsShaderConsts.field_80;
        field_144 = viewTransformsShaderConsts.field_144;
        return this;
    }

    // 0x1001df5e0: ViewTransformsShaderConsts::operator=(ViewTransformsShaderConsts&&) has the same machine code as ViewTransformsShaderConsts::operator=(ViewTransformsShaderConsts const&)

} // namespace jag

namespace jag::math {
    // 0x1001df470
    PlaneT<float>::PlaneT() : ColourHSL(0.0, 1.0, 0.0) {
        *(uint32_t*)(this + 12) = 0;
    }

} // namespace jag::math
