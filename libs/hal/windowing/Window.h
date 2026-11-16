// libs/hal/windowing/Window.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class Window {
    public:
        // virtual methods in vtable order
        virtual ~Window();
        void SetSafeAreaChangeCallback(std::function<void()>);
        void SaveWindowPosition() const;
        void RegisterSizeChangedHandler(std::function<bool(float, float)>*);
        void UnregisterSizeChangedHandler(std::function<bool(float, float)>*);
        void SetMinClientSize(int, int);
        void SetSize(float, float);
        void RegisterWindowClosedHandler(std::function<bool()>*);
        void UnregisterWindowCloseddHandler(std::function<bool()>*);
        IsFixedModeEnabled() const;
        byte GetWindowMode() const;
        bool IsFullScreen() const;
        GetSafeAreaInsets() const;
        Window* GetSafeAreaInsetsImpl() const;
        void OnUpdateSafeArea();
        void Update();
        float GetWidth() const;
        float GetHeight() const;
        void GetWindowDelegate() const;
        void GetNSWindow() const;
        void GetCurrentScreen() const;
        SetFullScreen(bool);
        void OnMenuItemSelected(objc_object*);
        void SetLiveResizing(bool);
        void OnSize();
        WindowInitParams GetWindowInitParams();
        void OnMove();
        OnClose();
        void OnFocus(bool);
        void SetIsFullScreenFlag_OSX(bool);
        void RestoreWindow();
        void UpdateRestoreRect();
        Window(GraphicsApp*, SystemInitParams const&, WindowInitParams const&);
        bool DecodeSavedPositionData(CGRect&, PacketT<Array<unsigned char, eastl::allocator>>&);
        ValidateWindowScreen(CGRect const&);
        ValidateWindowSize(CGRect const&, unsigned int, WindowInitParams const&);
        void GetScreenFromRect(CGRect const&) const;
        void SetFocusWindow();
        void GetMenuScreen() const;
        void GetMonitorResolution(unsigned int&, unsigned int&);
        void SetSize_OsxImpl(float, float);
        void SetView(shared_ptr<OpenGLView> const&);
        void OnScroll();
        GetScrolledRect();
        void SetNativeApplication(void*);
        void SetWindowTitle(char const*);
        void SetWindowCollectionFullscreen(bool);
        void MenuSetup();
        bool IsMaximized() const;
        WasFullScreenInPreviousSession() const;
        void GetWindowSavePositionData(PacketT<Array<unsigned char, eastl::allocator>>&) const;
        GetCentrePoint() const;
        void SetForeground();
        void SetFocusGame();
        void Show(bool);
        void SetTopmost(bool);
        SupportsFullScreen();
        SupportsFixedScreen();
        void SetResizable(bool);
        bool IsLiveResizing() const;
        GetWindowFrame();
        void GetMonitors(eastl::fixed_vector<math::Rect<int>, 12ul, false, eastl::dummy_allocator>&);
        void SetPosition(int, int);
        shared_ptr GetView() const;

        // data members, from how the methods use this: 745 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined1 field_8;  // offset 8
        char _unknown_9[3];
        undefined4 field_12; // offset 12
        undefined4 field_16; // offset 16
        undefined4 field_20; // offset 20
        undefined4 field_24; // offset 24
        undefined4 field_28; // offset 28
        char _unknown_32[168];
        shared_ptr m_view; // offset 200
        float m_width;     // offset 216
        float m_height;    // offset 220
        int field_224;     // offset 224
        int field_228;     // offset 228
        bool field_232;    // offset 232
        char _unknown_233[7];
        GraphicsApp* field_240;     // offset 240
        void* m_pNativeApplication; // offset 248
        bool m_fullScreen;          // offset 256
        char _unknown_257[1];
        undefined1 field_258; // offset 258
        char _unknown_259[5];
        WindowInitParams m_windowInitParams; // offset 264
        char _unknown_344[168];
        undefined1 field_512; // offset 512
        char _unknown_513[63];
        undefined1 field_576; // offset 576
        undefined1 field_577; // offset 577
        char _unknown_578[78];
        ID field_656;         // offset 656
        undefined8 field_664; // offset 664
        bool m_maximized;     // offset 672
        char _unknown_673[7];
        undefined4 field_680; // offset 680
        undefined4 field_684; // offset 684
        undefined4 field_688; // offset 688
        undefined4 field_692; // offset 692
        undefined4 field_696; // offset 696
        undefined4 field_700; // offset 700
        undefined4 field_704; // offset 704
        undefined4 field_708; // offset 708
        undefined8 field_712; // offset 712
        undefined8 field_720; // offset 720
        undefined8 field_728; // offset 728
        undefined8 field_736; // offset 736
        bool m_liveResizing;  // offset 744
    };

    // 0x10019a2d0, 32 bytes, inline, placed by class name and debug map
    // Window::SetSafeAreaChangeCallback(std::function<void ()>)
    /* Window::SetSafeAreaChangeCallback(std::function<void ()>) */

    void Window::SetSafeAreaChangeCallback(function* param_2) {
        std::function<void()>::operator=((function<void()>*)&field_528, param_2);
    }

    // 0x1003a1dc0, 16 bytes, inline, placed by class name and debug map
    // Window::GetWidth() const
    float Window::GetWidth() {
        return m_width;
    }

    // 0x1003a1dd0, 16 bytes, inline, placed by class name and debug map
    // Window::GetHeight() const
    float Window::GetHeight() {
        return m_height;
    }

    // 0x1003a2430, 32 bytes, inline, placed by class name
    // Window::GetWindowDelegate() const
    void Window::GetWindowDelegate() {
        _objc_retainAutoreleaseReturnValue(field_664);
    }

    // 0x1003a3c10, 32 bytes, inline, placed by class name
    // Window::GetNSWindow() const
    void Window::GetNSWindow() {
        _objc_retainAutoreleaseReturnValue(field_656);
    }

    // 0x1003a4650, 16 bytes, inline, placed by class name
    // Window::SetLiveResizing(bool)
    void Window::SetLiveResizing(bool param_1) {
        m_liveResizing = param_1;
    }

    // 0x1003a4970, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Window::GetWindowInitParams()
    /* ui::Component::GetDragConfig() */

    undefined1* ui::Component::GetDragConfig() {
        return m_dragConfig;
    }

    // 0x1003a60c0, 32 bytes, inline, placed by class name
    // Window::MenuSetup()
    void Window::MenuSetup() {
        (&field_368, this)->Setup();
    }

    // 0x1003a8060, 32 bytes, inline, placed by class name
    // Window::SetSize(float, float)::$_0::operator()(std::function<bool (float, float)>&) const
    /* Window::SetSize(float, float)::$_0::TEMPNAMEPLACEHOLDERVALUE(std::function<bool (float,
   float)>&) const */

    void Window::SetSize(float, float)::$_0::operator()(function* param_1) {
        std::function<bool(float, float)>::operator()((function<bool(float, float)>*)param_1, *(float*)this,
                                                      *(float*)(this + 4));
    }

    // 0x1003a8100, 32 bytes, inline, placed by class name
    // Window::Update()::$_1::operator()(std::function<bool (float, float)>&) const
    /* Window::Update()::$_1::TEMPNAMEPLACEHOLDERVALUE(std::function<bool (float, float)>&) const
    */

    void Window::Update()::$_1::operator()(function* param_1) {
        std::function<bool(float, float)>::operator()((function<bool(float, float)>*)param_1, *(float*)this,
                                                      *(float*)(this + 4));
    }

    // 0x1003a9cf0, 16 bytes, inline, placed by class name
    // Window::OnClose()::$_3::operator()(BaseApp*) const::{lambda(std::function<bool ()>&)#1}::operator()(std::function<bool ()>&) const
    /* Window::OnClose()::$_3::TEMPNAMEPLACEHOLDERVALUE(BaseApp*)
   const::{lambda(std::function<bool ()>&)#1}::TEMPNAMEPLACEHOLDERVALUE(std::function<bool ()>&)
   const */

    _func_TEMPNAMEPLACEHOLDERVALUE_BaseApp_ptr* const ::{
        lambda(std::function<bool()>&) #1
    }
    ::operator()(_lambda_std__function<bool()> ___1_* this, function * param_1) {
        _func_TEMPNAMEPLACEHOLDERVALUE_BaseApp_ptr* p_Var1;

        p_Var1 =
            (_func_TEMPNAMEPLACEHOLDERVALUE_BaseApp_ptr*)std::function<bool()>::operator()((function<bool()>*)this);
        return p_Var1;
    }

} // namespace jag

namespace jag::tweak {
    // 0x100a65f50, 64 bytes, inline, placed by class name
    // Window::Window(input::Input*, graphics::RT7Core*, int, shared_ptr<Tweaky> const&, int)::$_24::operator()(float, float) const
    /* Window::Window(input::Input*, graphics::RT7Core*, int,
   shared_ptr<Tweaky> const&, int)::$_24::TEMPNAMEPLACEHOLDERVALUE(float, float)
   const */

    void Window::Window(input::Input*, graphics::RT7Core*, int, shared_ptr<Tweaky> const&,
                        int)::$_24::operator()(float param_1, float param_2) {
        Window* this_00;
        ScaleManager* pSVar1;

        this_00 = *(Window**)this;
        pSVar1 = (ScaleManager*)this_00->field_2600->GetScaleManager();
        HandleMouseDown(this_00, param_1, param_2, pSVar1);
    }

    // 0x100a66a50, 64 bytes, inline, placed by class name
    // Window::Window(input::Input*, graphics::RT7Core*, int, shared_ptr<Tweaky> const&, int)::$_25::operator()(float, float) const
    /* Window::Window(input::Input*, graphics::RT7Core*, int,
   shared_ptr<Tweaky> const&, int)::$_25::TEMPNAMEPLACEHOLDERVALUE(float, float)
   const */

    void Window::Window(input::Input*, graphics::RT7Core*, int, shared_ptr<Tweaky> const&,
                        int)::$_25::operator()(float param_1, float param_2) {
        Window* this_00;
        ScaleManager* pSVar1;

        this_00 = *(Window**)this;
        pSVar1 = (ScaleManager*)this_00->field_2600->GetScaleManager();
        HandleMouseUp(this_00, param_1, param_2, pSVar1);
    }

    // 0x100a673b0, 64 bytes, inline, placed by class name
    // Window::Window(input::Input*, graphics::RT7Core*, int, shared_ptr<Tweaky> const&, int)::$_26::operator()(float, float) const
    /* Window::Window(input::Input*, graphics::RT7Core*, int,
   shared_ptr<Tweaky> const&, int)::$_26::TEMPNAMEPLACEHOLDERVALUE(float, float)
   const */

    void Window::Window(input::Input*, graphics::RT7Core*, int, shared_ptr<Tweaky> const&,
                        int)::$_26::operator()(float param_1, float param_2) {
        Window* this_00;
        ScaleManager* pSVar1;

        this_00 = *(Window**)this;
        pSVar1 = (ScaleManager*)this_00->field_2600->GetScaleManager();
        HandleMouseMove(this_00, param_1, param_2, pSVar1);
    }

    // 0x100a67d10, 64 bytes, inline, placed by class name
    // Window::Window(input::Input*, graphics::RT7Core*, int, shared_ptr<Tweaky> const&, int)::$_27::operator()(float, float) const
    /* Window::Window(input::Input*, graphics::RT7Core*, int,
   shared_ptr<Tweaky> const&, int)::$_27::TEMPNAMEPLACEHOLDERVALUE(float, float)
   const */

    void Window::Window(input::Input*, graphics::RT7Core*, int, shared_ptr<Tweaky> const&,
                        int)::$_27::operator()(float param_1, float param_2) {
        Window* this_00;
        ScaleManager* pSVar1;

        this_00 = *(Window**)this;
        pSVar1 = (ScaleManager*)this_00->field_2600->GetScaleManager();
        HandleMouseOver(this_00, param_1, param_2, pSVar1);
    }

    // 0x100a686c0, 80 bytes, inline, placed by class name
    // Window::Window(input::Input*, graphics::RT7Core*, int, shared_ptr<Tweaky> const&, int)::$_28::operator()(float, float, float, float) const
    /* Window::Window(input::Input*, graphics::RT7Core*, int,
   shared_ptr<Tweaky> const&, int)::$_28::TEMPNAMEPLACEHOLDERVALUE(float, float,
   float, float) const */

    void Window::Window(input::Input*, graphics::RT7Core*, int, shared_ptr<Tweaky> const&,
                        int)::$_28::operator()(float param_1, float param_2, float param_3, float param_4) {
        Window* this;
        ScaleManager* pSVar1;
        undefined8* in_RDI;

        this = (Window*)*in_RDI;
        pSVar1 = (ScaleManager*)field_2600->GetScaleManager();
        HandleMouseWheel(this, param_1, param_2, param_3, pSVar1);
    }

} // namespace jag::tweak

namespace jag::callstack {
    // 0x10019b650, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // CallstackResolved::~CallstackResolved()
    void CallstackResolved::~CallstackResolved() {
        ~vector();
    }

    // 0x10019b700, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ResolvedAddress::~ResolvedAddress(): jumps straight to the base-object destructor

    // 0x10019b710, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // ResolvedAddress::~ResolvedAddress()
    void ResolvedAddress::~ResolvedAddress() {
        (&field_544)->~fixed_string();
        (&field_8)->~fixed_string();
    }

} // namespace jag::callstack
