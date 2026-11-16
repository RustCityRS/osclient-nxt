// libs/hal/windowing/OpenGLView.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag {
    class OpenGLView {
    public:
        // virtual methods in vtable order
        virtual ~OpenGLView();
        void GetParentWindow();
        Input* GetInputHAL();
        double GetCursorHotspot() const;
        uint8_t* GetCursorMutex() const;
        bool HasFixedModeSetting() const;
        void GetCursorImage() const;
        OpenGLView(float arg1, float arg2, float arg3, float arg4, Window* window, input::Input* input);
        void OnSize();
        void OnMove();
        void StartUpdating();
        void StopUpdating();
        void SetWindowEnabled(bool arg1);
        void GetBackingSize(unsigned int& arg1, unsigned int& arg2) const;
        void SetCursor(const RGBAImage& rgbaImage, unsigned int arg2, unsigned int arg3);
        void ResetCursor();
        void HasFocus();
        uint64_t GetNativeFullscreenResolution();
        void IsFullScreen() const;
        uint8_t SetFullScreen(bool arg1);
        void GetNSView() const;
        void SetFocused(bool arg1);
        void SetMainRenderTargetScaleFactor(float arg1);
        float GetMainRenderTargetScaleFactor() const;
        void SetFullScreenResolution(unsigned int arg1, unsigned int arg2);
        void GetFixedMaxScreenSize(unsigned int& arg1, unsigned int& arg2) const;
        void GetFullScreenResolution(unsigned int& arg1, unsigned int& arg2) const;

    private:
        Window* field_8;
        Input* m_inputHAL;
        uint8_t _unknown_24[4];
        float m_mainRenderTargetScaleFactor;
        int m_fullScreenResolution;
        int field_36;
        int field_40;
        int field_44;
        uint64_t field_48;
        double m_cursorHotspot;
        double field_64;
        uint8_t _unknown_72[88];
        uint64_t field_160;
        uint8_t _unknown_168[8];
        uint32_t field_176;
        uint32_t field_180;
        uint32_t field_184;
        uint32_t field_188;
        uint32_t field_192;
        uint32_t field_196;
        uint32_t field_200;
        uint32_t field_204;
        uint32_t field_208;
        uint32_t field_212;
        uint32_t field_216;
        uint32_t field_220;
        uint32_t field_224;
        uint32_t field_228;
        uint32_t field_232;
        uint32_t field_236;
        uint8_t _unknown_240[64];
        int field_304;
        int field_308;
        uint8_t _unknown_312[8];
    };

    // 0x10000b2a0: OpenGLView::GetParentWindow() has the same machine code as eastl::string::Layout::GetHeapSize() const

    // 0x100023f30: OpenGLView::GetInputHAL() has the same machine code as oldscape::option::IOption::GetName() const

    // 0x1000b7910: OpenGLView::GetCursorHotspot() const has the same machine code as oldscape::minimenu::MinimenuEntry::GetSubjectName() const

    // 0x1001cd990: OpenGLView::GetCursorMutex() const has the same machine code as graphics::PointLightIndicesEffect::GetVisiblePointLights()

    // 0x1003a1c00
    bool OpenGLView::HasFixedModeSetting() const {
        if (field_40 == 0) {
            return false;
        }
        return field_44 != 0;
    }

    // 0x1003a2a60
    void OpenGLView::GetCursorImage() const {
        _objc_retainAutoreleaseReturnValue(field_48);
    }

    // 0x1003a5e30
    void OpenGLView::GetNSView() const {
        _objc_retainAutoreleaseReturnValue(field_160);
    }

    // 0x1003a65c0
    void OpenGLView::SetFocused(bool arg1) {
        field_168 = arg1;
    }

    // 0x1003c00a0: OpenGLView::SetMainRenderTargetScaleFactor(float) has the same machine code as Camera::SetBottomClip(float)

    // 0x10048fce0: OpenGLView::GetMainRenderTargetScaleFactor() const has the same machine code as game::EnvLightingSettings::GetSpecularHorzOcclusionScale() const

    // 0x100679700: OpenGLView::SetFullScreenResolution(unsigned int, unsigned int) has the same machine code as ui::SwipeState::SetSwipeMovement(int, int)

    // 0x100981910
    void OpenGLView::GetFixedMaxScreenSize(unsigned int& arg1, unsigned int& arg2) const {
        arg1 = field_40;
        arg2 = field_44;
    }

    // 0x100981920
    void OpenGLView::GetFullScreenResolution(unsigned int& arg1, unsigned int& arg2) const {
        arg1 = m_fullScreenResolution;
        arg2 = field_36;
    }

} // namespace jag
