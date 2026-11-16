// libs/hal/windowing/OpenGLView.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag {
    class OpenGLView {
    public:
        // virtual methods in vtable order
        virtual ~OpenGLView();
        GetParentWindow();
        Input* GetInputHAL();
        double GetCursorHotspot() const;
        GetCursorMutex() const;
        bool HasFixedModeSetting() const;
        void GetCursorImage() const;
        OpenGLView(float, float, float, float, Window*, input::Input*);
        void OnSize();
        void OnMove();
        void StartUpdating();
        void StopUpdating();
        void SetWindowEnabled(bool);
        void GetBackingSize(unsigned int&, unsigned int&) const;
        void SetCursor(RGBAImage const&, unsigned int, unsigned int);
        void ResetCursor();
        void HasFocus();
        GetNativeFullscreenResolution();
        void IsFullScreen() const;
        SetFullScreen(bool);
        void GetNSView() const;
        void SetFocused(bool);
        void SetMainRenderTargetScaleFactor(float);
        float GetMainRenderTargetScaleFactor() const;
        void SetFullScreenResolution(unsigned int, unsigned int);
        void GetFixedMaxScreenSize(unsigned int&, unsigned int&) const;
        void GetFullScreenResolution(unsigned int&, unsigned int&) const;

        // data members, from how the methods use this: 320 bytes
        undefined** field_0; // offset 0, vtable pointer
        Window* field_8;     // offset 8
        Input* m_inputHAL;   // offset 16
        char _unknown_24[4];
        float m_mainRenderTargetScaleFactor; // offset 28
        uint m_fullScreenResolution;         // offset 32
        uint field_36;                       // offset 36
        int field_40;                        // offset 40
        int field_44;                        // offset 44
        undefined8 field_48;                 // offset 48
        double m_cursorHotspot;              // offset 56
        double field_64;                     // offset 64
        char _unknown_72[88];
        undefined8 field_160; // offset 160
        char _unknown_168[8];
        undefined4 field_176; // offset 176
        undefined4 field_180; // offset 180
        undefined4 field_184; // offset 184
        undefined4 field_188; // offset 188
        undefined4 field_192; // offset 192
        undefined4 field_196; // offset 196
        undefined4 field_200; // offset 200
        undefined4 field_204; // offset 204
        undefined4 field_208; // offset 208
        undefined4 field_212; // offset 212
        undefined4 field_216; // offset 216
        undefined4 field_220; // offset 220
        undefined4 field_224; // offset 224
        undefined4 field_228; // offset 228
        undefined4 field_232; // offset 232
        undefined4 field_236; // offset 236
        char _unknown_240[64];
        int field_304; // offset 304
        int field_308; // offset 308
        char _unknown_312[8];
    };

    // 0x10000b2a0: the linker folded this into eastl::string::Layout::GetHeapSize() const, which has identical code
    OpenGLView::GetParentWindow();

    // 0x100023f30: the linker folded this into oldscape::option::IOption::GetName() const, which has identical code
    Input* OpenGLView::GetInputHAL();

    // 0x1000b7910: the linker folded this into oldscape::minimenu::MinimenuEntry::GetSubjectName() const, which has identical code
    double OpenGLView::GetCursorHotspot() const;

    // 0x1001cd990: the linker folded this into graphics::PointLightIndicesEffect::GetVisiblePointLights(), which has identical code
    OpenGLView::GetCursorMutex() const;

    // 0x1003a1c00, 32 bytes, inline, placed by class name and debug map
    // OpenGLView::HasFixedModeSetting() const
    bool OpenGLView::HasFixedModeSetting() {
        if (field_40 == 0) {
            return false;
        }
        return field_44 != 0;
    }

    // 0x1003a2a60, 16 bytes, inline, placed by class name
    // OpenGLView::GetCursorImage() const
    void OpenGLView::GetCursorImage() {
        _objc_retainAutoreleaseReturnValue(field_48);
    }

    // 0x1003a5e30, 32 bytes, inline, placed by class name
    // OpenGLView::GetNSView() const
    void OpenGLView::GetNSView() {
        _objc_retainAutoreleaseReturnValue(field_160);
    }

    // 0x1003a65c0, 32 bytes, inline, placed by class name
    // OpenGLView::SetFocused(bool)
    void OpenGLView::SetFocused(bool param_1) {
        std::atomic<bool>::operator=((atomic<bool>*)&field_168, param_1);
    }

    // 0x1003c00a0: the linker folded this into Camera::SetBottomClip(float), which has identical code
    OpenGLView::SetMainRenderTargetScaleFactor(float);

    // 0x10048fce0: the linker folded this into game::EnvLightingSettings::GetSpecularHorzOcclusionScale() const, which has identical code
    float OpenGLView::GetMainRenderTargetScaleFactor() const;

    // 0x100679700: the linker folded this into ui::SwipeState::SetSwipeMovement(int, int), which has identical code
    OpenGLView::SetFullScreenResolution(unsigned int, unsigned int);

    // 0x100981910, 16 bytes, inline, placed by class name and debug map
    // OpenGLView::GetFixedMaxScreenSize(unsigned int&, unsigned int&) const
    void OpenGLView::GetFixedMaxScreenSize(uint* param_1, uint* param_2) {
        *param_1 = field_40;
        *param_2 = field_44;
    }

    // 0x100981920, 16 bytes, inline, placed by class name and debug map
    // OpenGLView::GetFullScreenResolution(unsigned int&, unsigned int&) const
    void OpenGLView::GetFullScreenResolution(uint* param_1, uint* param_2) {
        *param_1 = m_fullScreenResolution;
        *param_2 = field_36;
    }

} // namespace jag
