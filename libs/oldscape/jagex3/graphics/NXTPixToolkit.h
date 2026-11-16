// libs/oldscape/jagex3/graphics/NXTPixToolkit.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::graphics {
    class NXTPixToolkit {
    public:
        // virtual methods in vtable order
        virtual NXTPix2D GetPix2D();
        virtual GetPix3D();
        virtual void SetScreenSize(int, int);
        virtual void Render(int, int, int, int);
        virtual void Render(int, int);
        virtual void Set2DOnlyFrame();
        virtual void SetGamma(float);
        void SetDepthBufferEnabled(bool);
        GetScreen() const;
        getWorldRenderer();
        void GetViewportX();
        void SetSafeArea(jag::math::Rect<int> const&);
        NXTPixToolkit(int, int, int, int);
        void SetViewportRect(int, int, int, int);
        void SetMinSize(int, int);
        void ZoomUI(float);
        void SetSkyboxColour(jag::math::Vector4T<float>);
        void SetFogParams(float, float);
        void SetFrameRate(int);
        void GetGamma();
        void ShowUI(bool);
        void ShowSkybox(bool);
        void SetScaledUIQuality(ScaledUIQuality);
        bool GetUIVisible();

        // data members, from how the methods use this: 6515840 bytes
        undefined** field_0;  // offset 0, vtable pointer
        NXTRenderer* field_8; // offset 8
        char _unknown_16[40];
        bool m_uIVisible;          // offset 56
        bool field_57;             // offset 57
        bool m_depthBufferEnabled; // offset 58
        char _unknown_59[117];
        NXTPix2D m_pix2D; // offset 176
        char _unknown_216[6515624];
    };

    // 0x1000922f0, 16 bytes, inline, placed by class name and debug map
    // NXTPixToolkit::SetDepthBufferEnabled(bool)
    void NXTPixToolkit::SetDepthBufferEnabled(bool param_1) {
        m_depthBufferEnabled = param_1;
    }

    // 0x1000fa850, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // NXTPixToolkit::getWorldRenderer()
    /* game::Location::GetServerPosition() const */

    undefined1* game::Location::GetServerPosition() {
        return &field_424;
    }

    // 0x1000fa860, 16 bytes, inline, placed by class name
    // NXTPixToolkit::GetViewportX()
    void NXTPixToolkit::GetViewportX() {
        (&field_16)->GetWrapMode();
    }

    // 0x10012cec0, 16 bytes, inline, placed by class name
    // NXTPixToolkit::SetSafeArea(jag::math::Rect<int> const&)
    void NXTPixToolkit::SetSafeArea(Rect* param_1) {
        (&field_16, param_1)->SetSafeArea();
    }

    // 0x100324d40, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // NXTPixToolkit::GetPix2D()
    /* game::Entity::GetWorld() const */

    undefined1* game::Entity::GetWorld() {
        return m_world;
    }

    // 0x100324d50, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // NXTPixToolkit::GetPix3D()
    /* http::HTTPRequest::GetRedirectLocation() */

    undefined1* http::HTTPRequest::GetRedirectLocation() {
        return &field_232;
    }

} // namespace jag::oldscape::graphics

// 0x1000a46b0, 16 bytes, placed by debug map only (low confidence)
// decltype ((static_cast<void (*&std::__invoke<void (*&)()>(void (*&)()))()>({parm#1}))())
void __ZNSt3__1L8__invokeIRPFvvEJEEEDTclscT_fp_spscT0_fp0_EEOS4_DpOS5_(undefined8* param_1) {
    (*(code*)*param_1)();
}
