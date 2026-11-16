// libs/graphics/runetek7/lighting/ambientocclusion/SSAOContext.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class SSAOContext {
    public:
        GetSSAOParams();
        GetNativeContext();
        SSAOContext();
        ~SSAOContext();
        void Destroy();
        Init();
        void Render(render::RenderTargets&, render::Texture const*, render::Texture const*, render::Viewport const&,
                    math::Matrix44T<float> const&, math::Matrix44T<float> const&);

        // data members, from how the methods use this: 56 bytes
        char _unknown_0[48];
        undefined8 m_pNativeContext; // offset 48
    };

    class SSAOParams {
    public:
        SSAOParams();

        // data members, from how the methods use this: 52 bytes
        undefined8 field_0;  // offset 0
        undefined8 field_8;  // offset 8
        undefined4 field_16; // offset 16
        undefined8 field_20; // offset 20
        undefined8 field_28; // offset 28
        undefined4 field_36; // offset 36
        undefined1 field_40; // offset 40
        char _unknown_41[3];
        undefined4 field_44; // offset 44
        char _unknown_48[4];
    };

    // 0x1001d4a50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // SSAOParams::SSAOParams(): jumps straight to the base-object constructor

} // namespace jag::graphics
