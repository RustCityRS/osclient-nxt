// libs/hal/windowing/osx/Window_OSX.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.windowing

#include "libs/hal/windowing/Window.h"

namespace jag {
    // 0x1003a1c70
    bool Window::IsFullScreen() const {
        return m_fullScreen;
    }

    // 0x1003a1c80
    auto Window::GetSafeAreaInsets() const {
        if (field_577 == '\0') {
            GetSafeAreaInsetsImpl(&result);
        } else {
            auto result(field_580);
        }
        return result;
    }

    // 0x1003a1cd0
    Window* Window::GetSafeAreaInsetsImpl() const {
        new (this) oldscape::dash3d::GridRect(0, 0, 0, 0);
        return this;
    }

    // 0x1003a1d00
    void Window::OnUpdateSafeArea() {
        if ((&field_528)->operator_cast_to_bool() != '\0') {
            std::function<void()>::operator()((function<void()>*)&field_528);
        }
    }

    // 0x1003a1d50
    void Window::Update() {
        memory_order in_EDX;
        uint8_t in_SIL;
        uint64_t in_register_00000031;

        if (field_576.exchange(bool) in_SIL, in_EDX) {
            GetWidth();
            GetHeight();
            EventListeners<std::function<bool(float, float)>>::CallListeners<Window::Update()::__1>(
                (EventListeners<std::function<bool(float, float)>>*)&field_8,
                (__1*)(((uint64_t)in_register_00000031 << 8) | (uint8_t)in_SIL));
            SaveWindowPosition();
        }
    }

    // 0x1003a4d10
    void Window::UpdateRestoreRect() {
        uint64_t local_38;
        uint64_t uStack_30;
        uint64_t local_28;
        uint64_t uStack_20;

        if (field_656 == 0) {
            local_28 = 0;
            uStack_20 = 0;
            local_38 = 0;
            uStack_30 = 0;
        } else {
            _objc_msgSend_stret((uint8_t*)&local_38, field_656, "frame");
        }
        field_728 = local_28;
        field_736 = uStack_20;
        field_712 = local_38;
        field_720 = uStack_30;
    }

    // 0x1003a4d70
    Window::Window(GraphicsApp* graphicsApp, const SystemInitParams& systemInitParams,
                   const WindowInitParams& windowInitParams) {
        this->_vptr = (Window_vtbl*)&PTR__Window_100efe220;
        uint8_t* local_48 = &field_8;
        new (local_48) EventListeners<std::function<bool(float, float)>>();
        new (&field_104) EventListeners<std::function<bool()>>();
        uint8_t* local_40 = &field_104;
        new (m_view) shared_ptr();
        m_width = (float)*(unsigned int*)&windowInitParams.field_0;
        m_height = (float)*(unsigned int*)((long)&windowInitParams.field_0 + 4);
        field_224 = 0;
        field_228 = 0;
        field_232 = true;
        field_240 = graphicsApp;
        m_pNativeApplication = nullptr;
        *(uint32_t*)((long)&m_pNativeApplication + 7) = 0;
        uint8_t* local_38 = m_view;
        new (m_windowInitParams) WindowInitParams(windowInitParams);
        new (field_368) MenuItem();
        field_512 = 1;
        new (&field_528) std::function<void()>();
        new (&field_576) std::atomic<bool>(false);
        field_577 = 0;
        new (&field_580) shared_ptr();
        new (&field_608) std::function<bool(float, float)>();
        m_liveResizing = false;
        field_656 = 0;
        field_664 = 0;
        uint8_t* puVar1 = PTR___dispatch_main_q_100ee9db8;
        _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
        uint8_t* local_78 = PTR___NSConcreteStackBlock_100ee4038;
        uint64_t local_70 = 3221225472;
        void* local_68 =
            ____ZN3jag6WindowC2EPNS_11GraphicsAppERKNS_16SystemInitParamsERKNS_16WindowInitParamsE_block_invoke;
        uint8_t* local_60 = &___block_descriptor_48_e5_v8__0l;
        Window* local_58 = this;
        WindowInitParams* local_50 = windowInitParams;
        _dispatch_sync(puVar1, &local_78);
    }

    // 0x1003a53a0
    bool Window::DecodeSavedPositionData(CGRect& cgRect, PacketT<Array<unsigned char>>& arg2) {
        int iVar2;

        long lVar1 = arg2.GetTextureAtlas();
        long lVar3 = arg2.size();
        if (15 < (unsigned long)(lVar1 - lVar3)) {
            iVar2 = arg2.g4s();
            *(double*)cgRect = (double)iVar2;
            iVar2 = arg2.g4s();
            *(double*)(cgRect + 8) = (double)iVar2;
            iVar2 = arg2.g4s();
            *(double*)(cgRect + 16) = (double)iVar2;
            iVar2 = arg2.g4s();
            *(double*)(cgRect + 24) = (double)iVar2;
        }
        return 15 < (unsigned long)(lVar1 - lVar3);
    }

    // 0x1003a5430
    auto Window::ValidateWindowScreen(const CGRect& cgRect) {
        auto result;
        ReturnValue RVar1;
        uint32_t uVar2;
        uint32_t uVar3;
        uint32_t uVar4;
        uint32_t uVar5;
        uint32_t uVar6;
        uint32_t uVar7;
        uint32_t uVar8;
        uint64_t local_48;
        uint64_t uStack_40;
        double local_38;
        double dStack_30;
        ReturnValue local_28;

        auto self = _objc_retainAutoreleasedReturnValue(GetScreenFromRect(&result, cgRect));
        if (self == 0) {
            local_38 = 0.0;
            dStack_30 = 0.0;
            local_48 = 0;
            uStack_40 = 0;
        } else {
            _objc_msgSend_stret((uint8_t*)&local_48, self, "frame");
        }
        if (_NSIntersectsRect() == '\0') {
            local_28 = (ReturnValue)eastl::min(*(double*)(cgRect + 16), local_38);
            RVar1 = (ReturnValue)eastl::min(*(double*)(cgRect + 24), dStack_30);
            result = (ReturnValue)0;
            &result[1] = (ReturnValue)0;
            &result[2] = local_28;
            &result[3] = RVar1;
        } else {
            uVar2 = *(uint32_t*)cgRect;
            uVar3 = *(uint32_t*)(cgRect + 4);
            uVar4 = *(uint32_t*)(cgRect + 8);
            uVar5 = *(uint32_t*)(cgRect + 12);
            uVar6 = *(uint32_t*)(cgRect + 20);
            uVar7 = *(uint32_t*)(cgRect + 24);
            uVar8 = *(uint32_t*)(cgRect + 28);
            *(uint32_t*)(&result + 2) = *(uint32_t*)(cgRect + 16);
            *(uint32_t*) && result[2].field_4 = uVar6;
            *(uint32_t*)(&result + 3) = uVar7;
            *(uint32_t*) && result[3].field_4 = uVar8;
            result = uVar2;
            *(uint32_t*)&result.field_4 = uVar3;
            *(uint32_t*)(&result + 1) = uVar4;
            *(uint32_t*) && result[1].field_4 = uVar5;
        }
        (*(void (*)(...))PTR__objc_release_100ee9e60)(self);
        return result;
    }

    // 0x1003a5520
    auto Window::ValidateWindowSize(const CGRect& cgRect, unsigned int arg2, const WindowInitParams& windowInitParams) {
        auto result;
        uint64_t in_R9;
        uint64_t local_68;
        uint64_t uStack_60;
        double local_58;
        double dStack_50;
        uint8_t local_48[16];
        double local_38;
        double dStack_30;

        Window* this_00 = (Window*)local_48;
        NSWindow::frameRectForContentRect_styleMask_(
            (ID)local_48, &_OBJC_CLASS___NSWindow, "frameRectForContentRect:styleMask:", (unsigned long)arg2,
            windowInitParams, in_R9, *(uint32_t*)cgRect, *(uint32_t*)(cgRect + 8), *(uint32_t*)(cgRect + 16),
            *(uint32_t*)(cgRect + 24));
        auto self = _objc_retainAutoreleasedReturnValue(GetScreenFromRect(this_00, (CGRect*)local_48));
        if (self == 0) {
            local_58 = 0.0;
            dStack_50 = 0.0;
            local_68 = 0;
            uStack_60 = 0;
        } else {
            _objc_msgSend_stret((uint8_t*)&local_68, self, "frame");
        }
        local_38 = (double)eastl::min(local_58, local_38);
        dStack_30 = (double)eastl::min(dStack_50, dStack_30);
        local_38 = (double)eastl::max((double)*(int*)&windowInitParams.field_64, local_38);
        dStack_30 = (double)eastl::max((double)*(int*)((long)&windowInitParams.field_64 + 4), dStack_30);
        NSWindow::contentRectForFrameRect_styleMask_((ID)&result, &_OBJC_CLASS___NSWindow,
                                                     "contentRectForFrameRect:styleMask:", (unsigned long)arg2);
        (*(void (*)(...))PTR__objc_release_100ee9e60)(self);
        return result;
    }

    // 0x1003a5660
    void Window::GetScreenFromRect(const CGRect& cgRect) const {
        int iVar2;
        unsigned long uVar5;
        uint64_t uVar6;
        long lVar7;
        int iVar9;
        uint8_t local_98[16];
        double local_88;
        double local_80;
        uint64_t local_78;
        uint64_t uStack_70;
        uint64_t local_68;
        uint64_t uStack_60;
        unsigned long local_58;

        CGRect* local_48 = cgRect;
        auto IVar3 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen, "screens");
        uint64_t uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
        uint8_t* puVar1 = PTR__objc_release_100ee9e60;
        char* local_50 = "objectAtIndex:";
        unsigned long uVar8 = 0;
        char* local_40 = "frame";
        int iVar10 = 0;
        long local_38 = 0;
        while (true) {
            uVar5 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar4, "count");
            lVar7 = local_38;
            if (uVar5 <= uVar8)
                break;
            local_58 = uVar8;
            uVar6 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar4, local_50, uVar8);
            IVar3 = _objc_retainAutoreleasedReturnValue(uVar6);
            if (IVar3 == 0) {
                local_68 = 0;
                uStack_60 = 0;
                local_78 = 0;
                uStack_70 = 0;
            } else {
                _objc_msgSend_stret((uint8_t*)&local_78, IVar3, local_40);
            }
            _NSIntersectionRect(local_98);
            iVar2 = (int)local_88;
            iVar9 = (int)local_80;
            if (iVar10 < iVar9 * iVar2) {
                lVar7 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(IVar3);
                (*(void (*)(...))puVar1)(local_38);
                iVar10 = iVar9 * iVar2;
                local_38 = lVar7;
            }
            (*(void (*)(...))puVar1)(IVar3);
            uVar8 = local_58 + 1;
        }
        if (local_38 == 0) {
            IVar3 = NSScreen::mainScreen((ID)&_OBJC_CLASS___NSScreen, "mainScreen");
            uVar6 = _objc_retainAutoreleasedReturnValue(IVar3);
            lVar7 = local_38;
        } else {
            uVar6 = (*(void (*)(...))PTR__objc_retain_100ee9e68)(local_38);
        }
        (*(void (*)(...))puVar1)(uVar4);
        (*(void (*)(...))puVar1)(lVar7);
        _objc_autoreleaseReturnValue(uVar6);
    }

    // 0x1003a5840
    void Window::SetFocusWindow() {
        uint8_t* local_40;
        uint64_t local_38;
        void* local_30;
        uint8_t* local_28;
        Window* local_20;

        auto IVar2 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread, "isMainThread");
        uint8_t* puVar1 = PTR___dispatch_main_q_100ee9db8;
        if ((char)IVar2 == '\0') {
            _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
            local_40 = PTR___NSConcreteStackBlock_100ee4038;
            local_38 = 3221225472;
            local_30 = ____ZN3jag6Window14SetFocusWindowEv_block_invoke;
            local_28 = &___block_descriptor_40_e5_v8__0l;
            local_20 = this;
            _dispatch_sync(puVar1, &local_40);
        } else {
            (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(field_656, "makeKeyAndOrderFront:", 0);
        }
    }

    // 0x1003a5970
    Window::Window(GraphicsApp* graphicsApp, const SystemInitParams& systemInitParams,
                   const WindowInitParams& windowInitParams) {
        Window(graphicsApp, systemInitParams, windowInitParams);
    }

    // 0x1003a5980
    Window::~Window() {
        uint8_t* puVar1 = PTR__objc_release_100ee9e60;
        (*(void (*)(...))PTR__objc_release_100ee9e60)(field_664);
        (*(void (*)(...))puVar1)(field_656);
        field_608.~function();
        field_528.~function();
        field_368->~MenuItem();
        m_windowInitParams->~WindowInitParams();
        m_view->~shared_ptr();
        field_104.~EventListeners();
        field_8.~EventListeners();
    }

    // 0x1003a5a50
    void Window::GetMenuScreen() const {
        uint64_t uVar4;
        uint64_t uVar5;

        auto IVar2 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen, "screens");
        long lVar3 = _objc_retainAutoreleasedReturnValue(IVar2);
        (*(void (*)(...))PTR__objc_release_100ee9e60)(lVar3);
        uint8_t* puVar1 = PTR__objc_msgSend_100ee9e50;
        if (lVar3 == 0) {
            IVar2 = NSScreen::mainScreen((ID)&_OBJC_CLASS___NSScreen, "mainScreen");
            uVar5 = _objc_retainAutoreleasedReturnValue(IVar2);
        } else {
            IVar2 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen, "screens");
            uVar4 = _objc_retainAutoreleasedReturnValue(IVar2);
            uVar5 = (*(void (*)(...))puVar1)(uVar4, "objectAtIndex:", 0);
            uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
            (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar4);
        }
        _objc_autoreleaseReturnValue(uVar5);
    }

    // 0x1003a5b10
    void Window::GetMonitorResolution(unsigned int& arg1, unsigned int& arg2) {
        uint64_t local_48;
        uint64_t uStack_40;
        double local_38;
        double dStack_30;

        auto self = _objc_retainAutoreleasedReturnValue(GetCurrentScreen());
        if (self == 0) {
            local_38 = 0.0;
            dStack_30 = 0.0;
            local_48 = 0;
            uStack_40 = 0;
        } else {
            _objc_msgSend_stret((uint8_t*)&local_48, self, "frame");
        }
        arg1 = (unsigned int)(long)local_38;
        arg2 = (unsigned int)(long)dStack_30;
        (*(void (*)(...))PTR__objc_release_100ee9e60)(self);
    }

    // 0x1003a5ba0
    void Window::SetSize_OsxImpl(float arg1, float arg2) {
        uint64_t local_88;
        uint64_t uStack_80;
        double local_78;
        double dStack_70;
        uint64_t local_48;
        uint64_t uStack_40;
        double local_38;
        double dStack_30;

        uint64_t local_68 = 0;
        uint64_t uStack_60 = 0;
        if (field_656 == 0) {
            local_78 = 0.0;
            dStack_70 = 0.0;
            local_88 = 0;
            uStack_80 = 0;
        } else {
            _objc_msgSend_stret((uint8_t*)&local_88, field_656, "frameRectForContentRect:");
        }
        if (field_656 == 0) {
            local_38 = 0.0;
            dStack_30 = 0.0;
            local_48 = 0;
            uStack_40 = 0;
        } else {
            _objc_msgSend_stret((uint8_t*)&local_48, field_656, "frame");
        }
        if ((local_38 != local_78) || (dStack_30 != dStack_70)) {
            (*(void (*)(...))PTR__objc_msgSend_100ee9e50)((uint32_t)(double)arg1, (uint32_t)(double)arg2, field_656,
                                                          "setContentSize:");
        }
    }

    // 0x1003a5ca0
    void Window::SetView(const shared_ptr<OpenGLView>& openGLView) {
        uint8_t* local_40;
        uint64_t local_38;
        void* local_30;
        uint8_t* local_28;
        Window* local_20;

        *m_view = openGLView;
        bool cVar2 = m_view->operator_cast_to_bool();
        uint8_t* puVar1 = PTR___dispatch_main_q_100ee9db8;
        if (cVar2) {
            _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
            local_40 = PTR___NSConcreteStackBlock_100ee4038;
            local_38 = 3221225472;
            local_30 = ____ZN3jag6Window7SetViewERKNS_10shared_ptrINS_10OpenGLViewEEE_block_invoke;
            local_28 = &___block_descriptor_40_e5_v8__0l;
            local_20 = this;
            _dispatch_sync(puVar1, &local_40);
        }
    }

    // 0x1003a5e70
    void Window::OnScroll() {}

    // 0x1003a5e80
    auto Window::GetScrolledRect() {
        return auto(0, 0, (int)m_width, (int)m_height);
    }

    // 0x1003a5eb0
    void Window::SetNativeApplication(void* arg1) {
        m_pNativeApplication = arg1;
    }

    // 0x1003a5ec0
    void Window::SetWindowTitle(const char* str) {
        uint8_t* puVar1 = PTR___dispatch_main_q_100ee9db8;
        _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
        uint8_t* local_50 = PTR___NSConcreteStackBlock_100ee4038;
        uint64_t local_48 = 3221225472;
        void* local_40 = ____ZN3jag6Window14SetWindowTitleEPKc_block_invoke;
        uint8_t* local_38 = &___block_descriptor_48_e5_v8__0l;
        Window* local_30 = this;
        char* local_28 = str;
        _dispatch_sync(puVar1, &local_50);
    }

    // 0x1003a5ff0
    void Window::SetWindowCollectionFullscreen(bool arg1) {
        uint64_t in_register_00000031;
        uint64_t uVar4;

        unsigned int uVar2 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(field_656, "collectionBehavior");
        uint8_t* puVar1 = PTR__objc_msgSend_100ee9e50;
        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) == 0) {
            uVar4 = 256;
            if ((uVar2 & 256) != 0) {
                return;
            }
        } else {
            uVar4 = 128;
            if ((char)uVar2 < '\0') {
                return;
            }
        }
        unsigned long uVar3 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(field_656, "styleMask");
        (*(void (*)(...))puVar1)(field_656, "setStyleMask:", uVar3 | 15);
        (*(void (*)(...))puVar1)(field_656, "setCollectionBehavior:", uVar4);
    }

    // 0x1003a60e0
    bool Window::IsMaximized() const {
        return m_maximized;
    }

    // 0x1003a60f0
    bool Window::WasFullScreenInPreviousSession() const {
        return m_fullScreen;
    }

    // 0x1003a6100
    void Window::GetWindowSavePositionData(PacketT<Array<unsigned char>>& arg1) const {
        uint64_t local_68;
        uint64_t uStack_60;
        uint64_t local_58;
        uint64_t uStack_50;
        uint8_t local_48[24];

        new (local_48) PacketT(16);
        arg1 = *local_48;
        ID self = field_656;
        if (self == 0) {
            local_58 = 0;
            uStack_50 = 0;
            local_68 = 0;
            uStack_60 = 0;
        } else {
            _objc_msgSend_stret((uint8_t*)&local_68, self, "frame");
            if (self != 0) {
                _objc_msgSend_stret(local_48, self, "contentRectForFrameRect:");
                goto LAB_1003a619d;
            }
        }
        local_48._16_8_ = nullptr;
        local_48._0_8_ = 0.0;
        local_48._8_8_ = 0.0;
    LAB_1003a619d:
        arg1.p4<int>((int)(double)local_48._0_8_);
        arg1.p4<int>((int)(double)local_48._8_8_);
        arg1.p4<int>((int)(double)local_48._16_8_);
        arg1.p4<int>((int)0.0);
    }

    // 0x1003a6220
    Window* Window::GetCentrePoint() const {
        long in_RSI;
        uint64_t local_58;
        uint64_t uStack_50;
        uint64_t local_48;
        uint64_t uStack_40;
        double local_38;

        ID self = *(ID*)(in_RSI + 656);
        if (self == 0) {
            local_48 = 0;
            uStack_40 = 0;
            local_58 = 0;
            uStack_50 = 0;
        } else {
            _objc_msgSend_stret((uint8_t*)&local_58, self, "frame");
            if (self != 0) {
                _objc_msgSend_stret((uint8_t*)&local_38, self, "contentRectForFrameRect:");
                goto LAB_1003a6293;
            }
        }
        local_38 = 0.0;
    LAB_1003a6293:
        new (this) oldscape::sidebars::SideBarData((int)(0.0 * 0.5 + local_38), (int)(0.0 * 0.5 + 0.0));
        return this;
    }

    // 0x1003a62d0
    void Window::SetForeground() {
        uint8_t* local_40;
        uint64_t local_38;
        void* local_30;
        uint8_t* local_28;
        Window* local_20;

        auto IVar3 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread, "isMainThread");
        uint8_t* puVar2 = PTR__objc_msgSend_100ee9e50;
        uint8_t* puVar1 = PTR___dispatch_main_q_100ee9db8;
        if ((char)IVar3 == '\0') {
            _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
            local_40 = PTR___NSConcreteStackBlock_100ee4038;
            local_38 = 3221225472;
            local_30 = ____ZN3jag6Window13SetForegroundEv_block_invoke;
            local_28 = &___block_descriptor_40_e5_v8__0l;
            local_20 = this;
            _dispatch_sync(puVar1, &local_40);
        } else {
            (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(*(uint64_t*)PTR__NSApp_100ee4008,
                                                          "activateIgnoringOtherApps:", 1);
            (*(void (*)(...))puVar2)(field_656, "makeKeyAndOrderFront:", 0);
        }
    }

    // 0x1003a63f0
    void Window::SetFocusGame() {
        SetFocusWindow();
    }

    // 0x1003a6400
    void Window::Show(bool arg1) {}

    // 0x1003a6410
    void Window::SetTopmost(bool arg1) {
        uint8_t* puVar1 = PTR___dispatch_main_q_100ee9db8;
        _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
        uint8_t* local_50 = PTR___NSConcreteStackBlock_100ee4038;
        uint64_t local_48 = 3221225472;
        void* local_40 = ____ZN3jag6Window10SetTopmostEb_block_invoke;
        uint8_t* local_38 = &___block_descriptor_41_e5_v8__0l;
        Window* local_30 = this;
        uint8_t local_28 = arg1;
        _dispatch_async(puVar1, &local_50);
    }

    // 0x1003a64e0
    void Window::SupportsFullScreen() {
        return 0;
    }

    // 0x1003a64f0
    void Window::SupportsFixedScreen() {
        return 1;
    }

    // 0x1003a6500
    void Window::SetResizable(bool arg1) {
        field_232 = arg1;
        uint8_t* puVar1 = PTR___dispatch_main_q_100ee9db8;
        _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
        uint8_t* local_40 = PTR___NSConcreteStackBlock_100ee4038;
        uint64_t local_38 = 3221225472;
        void* local_30 = ____ZN3jag6Window12SetResizableEb_block_invoke;
        uint8_t* local_28 = &___block_descriptor_40_e5_v8__0l;
        Window* local_20 = this;
        _dispatch_async(puVar1, &local_40);
    }

    // 0x1003a65b0
    bool Window::IsLiveResizing() const {
        return m_liveResizing;
    }

    // 0x1003a65e0
    auto Window::GetWindowFrame() {
        uint64_t local_68;
        uint64_t uStack_60;
        uint64_t local_58;
        double dStack_50;

        uint8_t* puVar1 = PTR__objc_msgSend_100ee9e50;
        double local_48 = *(double*)&field_680;
        double local_30 = *(double*)&field_688;
        double local_40 = *(double*)&field_696;
        double local_38 = *(double*)&field_704;
        auto IVar2 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen, "screens");
        uint64_t uVar3 = _objc_retainAutoreleasedReturnValue(IVar2);
        IVar2 = _objc_retainAutoreleasedReturnValue((*(void (*)(...))puVar1)(uVar3, "objectAtIndexedSubscript:", 0));
        if (IVar2 == 0) {
            local_58 = 0;
            dStack_50 = 0.0;
            local_68 = 0;
            uStack_60 = 0;
        } else {
            _objc_msgSend_stret((uint8_t*)&local_68, IVar2, "frame");
        }
        puVar1 = PTR__objc_release_100ee9e60;
        (*(void (*)(...))PTR__objc_release_100ee9e60)(IVar2);
        (*(void (*)(...))puVar1)(uVar3);
        return auto((int)local_48, (int)((double)(int)dStack_50 - (local_30 + local_38)), (int)local_40, (int)local_38);
    }

    // 0x1003a6710
    void Window::GetMonitors(eastl::fixed_vector<math::Rect<int>, 12ul, false, eastl::dummy_allocator>& rects) {
        uint8_t local_98[16];
        uint64_t local_88;
        double dStack_80;
        uint64_t local_78;
        uint64_t uStack_70;
        double local_68;
        double dStack_60;
        double local_58;
        double dStack_50;

        uint8_t* puVar1 = PTR__objc_msgSend_100ee9e50;
        auto IVar3 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen, "screens");
        uint64_t local_38 = _objc_retainAutoreleasedReturnValue(IVar3);
        uint64_t uVar4 = (*(void (*)(...))puVar1)(local_38, "objectAtIndexedSubscript:", 0);
        IVar3 = _objc_retainAutoreleasedReturnValue(uVar4);
        if (IVar3 == 0) {
            local_78 = 0;
            uStack_70 = 0;
            local_88 = 0;
            dStack_80 = 0.0;
        } else {
            _objc_msgSend_stret((uint8_t*)&local_88, IVar3, "frame");
        }
        (*(void (*)(...))PTR__objc_release_100ee9e60)(IVar3);
        unsigned long uVar5 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(local_38, "count");
        unsigned long arg2 = rects.capacity();
        unsigned int uVar2 = eastl::min_alt<unsigned long>(uVar5, arg2);
        if (0 < (int)uVar2) {
            uVar5 = 0;
            do {
                uVar4 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(local_38, "objectAtIndexedSubscript:", uVar5);
                IVar3 = _objc_retainAutoreleasedReturnValue(uVar4);
                if (IVar3 == 0) {
                    local_58 = 0.0;
                    dStack_50 = 0.0;
                    local_68 = 0.0;
                    dStack_60 = 0.0;
                } else {
                    _objc_msgSend_stret((uint8_t*)&local_68, IVar3, "frame");
                }
                (*(void (*)(...))PTR__objc_release_100ee9e60)(IVar3);
                new (local_98) oldscape::dash3d::GridRect((int)local_68, (int)dStack_80 - (int)dStack_60, (int)local_58,
                                                          (int)dStack_50);
                rects.push_back(*local_98);
                uVar5 = uVar5 + 1;
            } while (uVar2 != uVar5);
        }
        (*(void (*)(...))PTR__objc_release_100ee9e60)(local_38);
    }

    // 0x1003a6920
    void Window::SetPosition(int arg1, int arg2) {
        uint8_t* puVar1 = PTR___dispatch_main_q_100ee9db8;
        _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
        uint8_t* local_58 = PTR___NSConcreteStackBlock_100ee4038;
        uint64_t local_50 = 3221225472;
        void* local_48 = ____ZN3jag6Window11SetPositionEii_block_invoke;
        uint8_t* local_40 = &___block_descriptor_48_e5_v8__0l;
        Window* local_38 = this;
        int local_30 = arg2;
        int local_2c = arg1;
        _dispatch_async(puVar1, &local_58);
    }

    // 0x1003a9c30
    void Window::OnClose()::$_3::operator()(BaseApp* baseApp) const {
        if (!EventListeners<std::function<bool()>>::operator()((EventListeners<std::function<bool()>>*)(field_0 + 104),
                                                               (_lambda_std__function<bool_()> ___1_*)baseApp)) {
            *field_8 = 1;
        }
    }

} // namespace jag

// 0x1003a4fa0
void ____ZN3jag6WindowC2EPNS_11GraphicsAppERKNS_16SystemInitParamsERKNS_16WindowInitParamsE_block_invoke(
    Window* param_1) {
    Logger* this_00;
    uint64_t uVar2;
    uint64_t uVar5;
    ReturnValue local_78;
    uint64_t uStack_70;
    double local_68;
    double dStack_60;
    uint64_t uStack_50;
    uint64_t local_48;
    uint64_t uStack_40;
    uint64_t local_38;

    Window* window = *(Window**)&param_1->field_32;
    bool cVar1 = param_1->DecodeSavedPositionData(local_78, *((window->m_windowInitParams + 72)));
    if (!cVar1) {
        this_00 = jag::logger::default_logger();
        uVar2 = ((window->m_windowInitParams + 72))->GetTextureAtlas();
        this_00->Log(
            false, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/windowing/osx/Window_OSX.cpp",
            29, "Failed to decode saved window position (got %zu bytes), using default", uVar2);
        local_68 = (double)window->m_width;
        dStack_60 = (double)window->m_height;
        local_78 = (ReturnValue)0;
        uStack_70 = 0;
    }
    auto local_58 = window->ValidateWindowScreen(local_78);
    local_68 = (double)local_48;
    dStack_60 = (double)uStack_40;
    local_78 = local_58;
    uStack_70 = uStack_50;
    *((ReturnValue*)(Window*)&local_58) =
        window->ValidateWindowSize(local_78, 15, *(*(WindowInitParams**)&param_1->field_40));
    local_68 = (double)local_48;
    dStack_60 = (double)uStack_40;
    local_78 = local_58;
    uStack_70 = uStack_50;
    uVar2 = local_58.GetScreenFromRect(local_78);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    auto IVar3 = NSWindow::alloc((ID)&_OBJC_CLASS___NSWindow, "alloc");
    auto IVar4 = NSWindow::initWithContentRect_styleMask_backing_defer_screen_(
        IVar3, "initWithContentRect:styleMask:backing:defer:screen:", 15, 2, 0, uVar2, local_78, (uint32_t)uStack_70,
        local_68._0_4_, dStack_60._0_4_);
    IVar3 = window->field_656;
    window->field_656 = IVar4;
    (*(void (*)(...))PTR__objc_release_100ee9e60)(IVar3);
    cVar1 = ((window->m_windowInitParams + 16))->empty();
    IVar3 = window->field_656;
    if (!cVar1) {
        local_38 = uVar2;
        uVar5 = eastl::basic_string<char, jag::BucketAllocatorEASTL>::begin();
        uVar2 = local_38;
        IVar4 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString, "stringWithUTF8String:", uVar5);
        uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
        (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(IVar3, "setTitle:", uVar5);
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar5);
    } else {
        (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(IVar3, "setTitle:", &cf_NxtApp);
    }
    IVar3 = window->field_656;
    IVar4 = NSColor::blackColor((ID)&_OBJC_CLASS___NSColor, "blackColor");
    uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(IVar3, "setBackgroundColor:", uVar5);
    (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar5);
    IVar3 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(&objc::class_t::WindowDelegate, "alloc");
    IVar3 = WindowDelegate::initWithWindow_app_(IVar3, "initWithWindow:app:", window, window->field_240);
    uVar5 = window->field_664;
    window->field_664 = IVar3;
    (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar5);
    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(window->field_656, "setDelegate:", window->field_664);
    if ((*(int*)(window->m_windowInitParams + 64) != -1) && (*(int*)(window->m_windowInitParams + 68) != -1)) {
        (*(void (*)(...))PTR__objc_msgSend_100ee9e50)((uint32_t)((double)*(int*)(*(long*)&param_1->field_40 + 64)),
                                                      (uint32_t)((double)*(int*)(*(long*)&param_1->field_40 + 68)),
                                                      window->field_656, "setContentMinSize:");
    }
    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(window->field_656, "setAcceptsMouseMovedEvents:", 1);
    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(window->field_656, "setReleasedWhenClosed:", 0);
    if (window->field_656 == 0) {
        local_48 = 0;
        uStack_40 = 0;
        local_58 = (ReturnValue)0;
        uStack_50 = 0;
    } else {
        _objc_msgSend_stret((uint8_t*)&local_58, window->field_656, "frame");
    }
    window->field_696 = (uint32_t)local_48;
    window->field_700 = local_48._4_4_;
    window->field_704 = (uint32_t)uStack_40;
    window->field_708 = uStack_40._4_4_;
    window->field_680 = local_58._0_4_;
    window->field_684 = local_58._4_4_;
    window->field_688 = (uint32_t)uStack_50;
    window->field_692 = uStack_50._4_4_;
    cVar1 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(window->field_656, "isZoomed");
    window->m_maximized = cVar1;
    window->SetFocusWindow();
    local_58 = (ReturnValue)8589934592;
    _TransformProcessType(&local_58, 1);
    window->field_258 = 1;
    Window* local_80 = window;
    __ZNSt3__18functionIFbffEEaSIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2vEERS2_OT_(
        &window->field_608, &local_80);
    window->RegisterSizeChangedHandler(&window->field_608);
    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(window->field_656, "setCollectionBehavior:", 256);
    (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar2);
}
