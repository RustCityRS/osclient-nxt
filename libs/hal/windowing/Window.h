// libs/hal/windowing/Window.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class Window {
    public:
        // virtual methods in vtable order
        virtual ~Window();
        void SetSafeAreaChangeCallback(std::function<void()> callback);
        void SaveWindowPosition() const;
        void RegisterSizeChangedHandler(std::function<bool(float, float)>* callback);
        void UnregisterSizeChangedHandler(std::function<bool(float, float)>* callback);
        void SetMinClientSize(int arg1, int arg2);
        void SetSize(float arg1, float arg2);
        void RegisterWindowClosedHandler(std::function<bool()>* callback);
        void UnregisterWindowCloseddHandler(std::function<bool()>* callback);
        bool IsFixedModeEnabled() const;
        uint8_t GetWindowMode() const;
        bool IsFullScreen() const;
        auto GetSafeAreaInsets() const;
        Window* GetSafeAreaInsetsImpl() const;
        void OnUpdateSafeArea();
        void Update();
        float GetWidth() const;
        float GetHeight() const;
        void GetWindowDelegate() const;
        void GetNSWindow() const;
        void GetCurrentScreen() const;
        uint64_t SetFullScreen(bool arg1);
        void OnMenuItemSelected(objc_object* objc_object);
        void SetLiveResizing(bool arg1);
        void OnSize();
        WindowInitParams GetWindowInitParams();
        void OnMove();
        uint8_t OnClose();
        void OnFocus(bool arg1);
        void SetIsFullScreenFlag_OSX(bool arg1);
        void RestoreWindow();
        void UpdateRestoreRect();
        Window(GraphicsApp* graphicsApp, const SystemInitParams& systemInitParams,
               const WindowInitParams& windowInitParams);
        bool DecodeSavedPositionData(CGRect& cgRect, PacketT<Array<unsigned char>>& arg2);
        auto ValidateWindowScreen(const CGRect& cgRect);
        auto ValidateWindowSize(const CGRect& cgRect, unsigned int arg2, const WindowInitParams& windowInitParams);
        void GetScreenFromRect(const CGRect& cgRect) const;
        void SetFocusWindow();
        void GetMenuScreen() const;
        void GetMonitorResolution(unsigned int& arg1, unsigned int& arg2);
        void SetSize_OsxImpl(float arg1, float arg2);
        void SetView(const shared_ptr<OpenGLView>& openGLView);
        void OnScroll();
        auto GetScrolledRect();
        void SetNativeApplication(void* arg1);
        void SetWindowTitle(const char* str);
        void SetWindowCollectionFullscreen(bool arg1);
        void MenuSetup();
        bool IsMaximized() const;
        bool WasFullScreenInPreviousSession() const;
        void GetWindowSavePositionData(PacketT<Array<unsigned char>>& arg1) const;
        Window* GetCentrePoint() const;
        void SetForeground();
        void SetFocusGame();
        void Show(bool arg1);
        void SetTopmost(bool arg1);
        void SupportsFullScreen();
        void SupportsFixedScreen();
        void SetResizable(bool arg1);
        bool IsLiveResizing() const;
        auto GetWindowFrame();
        void GetMonitors(eastl::fixed_vector<math::Rect<int>, 12ul, false, eastl::dummy_allocator>& rects);
        void SetPosition(int arg1, int arg2);
        shared_ptr GetView() const;

    private:
        uint8_t _unknown_8[192];
        shared_ptr m_view;
        float m_width;
        float m_height;
        int field_224;
        int field_228;
        bool field_232;
        uint8_t _unknown_233[7];
        GraphicsApp* field_240;
        void* m_pNativeApplication;
        bool m_fullScreen;
        uint8_t _unknown_257[1];
        uint8_t field_258;
        uint8_t _unknown_259[5];
        WindowInitParams m_windowInitParams;
        uint8_t _unknown_344[24];
        MenuItem field_368;
        uint8_t _unknown_504[8];
        uint8_t field_512;
        uint8_t _unknown_513[64];
        uint8_t field_577;
        uint8_t _unknown_578[78];
        ID field_656;
        uint64_t field_664;
        bool m_maximized;
        uint8_t _unknown_673[7];
        uint32_t field_680;
        uint32_t field_684;
        uint32_t field_688;
        uint32_t field_692;
        uint32_t field_696;
        uint32_t field_700;
        uint32_t field_704;
        uint32_t field_708;
        uint64_t field_712;
        uint64_t field_720;
        uint64_t field_728;
        uint64_t field_736;
        bool m_liveResizing;
    };

    // 0x10019a2d0
    void Window::SetSafeAreaChangeCallback(std::function<void()> callback) {
        field_528 = *callback;
    }

    // 0x1003a1dc0
    float Window::GetWidth() const {
        return m_width;
    }

    // 0x1003a1dd0
    float Window::GetHeight() const {
        return m_height;
    }

    // 0x1003a2430
    void Window::GetWindowDelegate() const {
        _objc_retainAutoreleaseReturnValue(field_664);
    }

    // 0x1003a3c10
    void Window::GetNSWindow() const {
        _objc_retainAutoreleaseReturnValue(field_656);
    }

    // 0x1003a4650
    void Window::SetLiveResizing(bool arg1) {
        m_liveResizing = arg1;
    }

    // 0x1003a4970
    WindowInitParams Window::GetWindowInitParams() {
        return m_dragConfig;
    }

    // 0x1003a60c0
    void Window::MenuSetup() {
        field_368->Setup(*this);
    }

    // 0x1003a8060
    void Window::SetSize(float, float)::$_0::operator()(std::function<bool(float, float)>& callback) const {
        std::function<bool(float, float)>::operator()((function<bool(float, float)>*)callback, *(float*)this,
                                                      *(float*)(this + 4));
    }

    // 0x1003a8100
    void Window::Update()::$_1::operator()(std::function<bool(float, float)>& callback) const {
        std::function<bool(float, float)>::operator()((function<bool(float, float)>*)callback, field_0, field_4);
    }

    // 0x1003a9cf0
    void Window::OnClose()::$_3::operator()(BaseApp*) const ::{
        lambda(std::function<bool()>&) #1
    }
    ::operator()(std::function<bool()>& callback) const {
        std::function<bool()>::operator()((function<bool()>*)this);
    }

} // namespace jag

namespace jag::tweak {
    // 0x100a65f50
    void Window::Window(input::Input*, graphics::RT7Core*, int, shared_ptr<Tweaky> const&,
                        int)::$_24::operator()(float arg1, float arg2) const {
        Window* this_00 = *(Window**)this;
        auto scaleManager = this_00->field_2600->GetScaleManager();
        HandleMouseDown(this_00, arg1, arg2, scaleManager);
    }

    // 0x100a66a50
    void Window::Window(input::Input*, graphics::RT7Core*, int, shared_ptr<Tweaky> const&,
                        int)::$_25::operator()(float arg1, float arg2) const {
        Window* this_00 = *(Window**)this;
        auto scaleManager = this_00->field_2600->GetScaleManager();
        HandleMouseUp(this_00, arg1, arg2, scaleManager);
    }

    // 0x100a673b0
    void Window::Window(input::Input*, graphics::RT7Core*, int, shared_ptr<Tweaky> const&,
                        int)::$_26::operator()(float arg1, float arg2) const {
        Window* this_00 = *(Window**)this;
        auto scaleManager = this_00->field_2600->GetScaleManager();
        HandleMouseMove(this_00, arg1, arg2, scaleManager);
    }

    // 0x100a67d10
    void Window::Window(input::Input*, graphics::RT7Core*, int, shared_ptr<Tweaky> const&,
                        int)::$_27::operator()(float arg1, float arg2) const {
        Window* this_00 = *(Window**)this;
        auto scaleManager = this_00->field_2600->GetScaleManager();
        HandleMouseOver(this_00, arg1, arg2, scaleManager);
    }

    // 0x100a686c0
    void Window::Window(input::Input*, graphics::RT7Core*, int, shared_ptr<Tweaky> const&,
                        int)::$_28::operator()(float arg1, float arg2, float arg3, float arg4) const {
        Window* this_00 = *(Window**)this;
        auto scaleManager = this_00->field_2600->GetScaleManager();
        HandleMouseWheel(this_00, arg1, arg2, arg3, scaleManager);
    }

} // namespace jag::tweak

namespace jag::callstack {
    // 0x10019b650
    CallstackResolved::~CallstackResolved() {}

    // 0x10019b710
    ResolvedAddress::~ResolvedAddress() {
        field_544.~fixed_string();
        field_8.~fixed_string();
    }

} // namespace jag::callstack
