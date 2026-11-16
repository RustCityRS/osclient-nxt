// libs/oldscape/jagex3/graphics/NXTPixToolkit.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape::graphics {
    class NXTPixToolkit {
    public:
        // virtual methods in vtable order
        virtual uint8_t* GetPix2D();
        virtual uint8_t* GetPix3D();
        virtual void SetScreenSize(int arg1, int arg2);
        virtual void Render(int arg1, int arg2, int arg3, int arg4);
        virtual void Render(int arg1, int arg2);
        virtual void Set2DOnlyFrame();
        virtual void SetGamma(float arg1);
        void SetDepthBufferEnabled(bool arg1);
        WorldmapAreaMetadata GetScreen() const;
        uint8_t* getWorldRenderer();
        void GetViewportX();
        void SetSafeArea(const jag::math::Rect<int>& rect);
        NXTPixToolkit(int arg1, int arg2, int arg3, int arg4);
        void SetViewportRect(int arg1, int arg2, int arg3, int arg4);
        void SetMinSize(int arg1, int arg2);
        void ZoomUI(float arg1);
        void SetSkyboxColour(jag::math::Vector4T<float> vector4);
        void SetFogParams(float arg1, float arg2);
        void SetFrameRate(int arg1);
        void GetGamma();
        void ShowUI(bool arg1);
        void ShowSkybox(bool arg1);
        void SetScaledUIQuality(ScaledUIQuality scaledUIQuality);
        uint8_t GetUIVisible();

    private:
        NXTRenderer* field_8;
        WorldmapAreaMetadata m_screen;
        uint8_t _unknown_420[6515420];
    };

    // 0x1000922f0
    void NXTPixToolkit::SetDepthBufferEnabled(bool arg1) {
        m_screen[42] = arg1;
    }

    // 0x1000fa850
    uint8_t* NXTPixToolkit::getWorldRenderer() {
        return &field_424;
    }

    // 0x1000fa860
    void NXTPixToolkit::GetViewportX() {
        m_screen->GetWrapMode();
    }

    // 0x10012cec0
    void NXTPixToolkit::SetSafeArea(const jag::math::Rect<int>& rect) {
        m_screen->SetSafeArea(rect);
    }

    // 0x100324d40
    uint8_t* NXTPixToolkit::GetPix2D() {
        return m_world;
    }

    // 0x100324d50
    uint8_t* NXTPixToolkit::GetPix3D() {
        return &field_232;
    }

} // namespace jag::oldscape::graphics

// 0x1000a46b0
decltype((static_cast<void (*&std::__invoke<void (*&)()>(void (*&)()))()>({ parm #1 }))() arg1) {
    return (**(void (**)(...))arg1)();
}
