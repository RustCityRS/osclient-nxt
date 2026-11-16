// libs/hal/windowing/osx/Window_OSX.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.windowing

#include "libs/hal/windowing/Window.h"

namespace jag {
    // 0x1003a1c70, 16 bytes, placed by class name and debug map
    // Window::IsFullScreen() const
    undefined1 Window::IsFullScreen() {
        return m_fullScreen;
    }

    // 0x1003a1c80, 64 bytes, placed by class name and debug map
    // Window::GetSafeAreaInsets() const
    Window* Window::GetSafeAreaInsets() {
        long in_RSI;

        if (*(char*)(in_RSI + 577) == '\0') {
            GetSafeAreaInsetsImpl(this);
        } else {
            new (this) math::Rect<unsigned int>((Rect*)(in_RSI + 580));
        }
        return this;
    }

    // 0x1003a1cd0, 48 bytes, placed by class name and debug map
    // Window::GetSafeAreaInsetsImpl() const
    Window* Window::GetSafeAreaInsetsImpl() {
        new (this) oldscape::dash3d::GridRect(0, 0, 0, 0);
        return this;
    }

    // 0x1003a1d00, 48 bytes, placed by class name and debug map
    // Window::OnUpdateSafeArea()
    void Window::OnUpdateSafeArea() {
        if ((&field_528)->operator_cast_to_bool()) {
            std::function<void()>::operator()((function<void()>*)&field_528);
        }
    }

    // 0x1003a1d50, 96 bytes, placed by class name and debug map
    // Window::Update()
    void Window::Update() {
        char cVar1;
        EventListeners<std::function<bool(float, float)>>* pEVar2;

        cVar1 = std::__atomic_base<bool, false>::exchange(&field_576);
        if (cVar1 != '\0') {
            pEVar2._0_4_ = (EventListeners<std::function<bool(float, float)>>*)GetWidth(this);
            GetHeight(this);
            EventListeners<std::function<bool(float, float)>>::CallListeners<Window::Update()::__1>(pEVar2._0_4_,
                                                                                                    &field_8);
            SaveWindowPosition(this);
        }
    }

    // 0x1003a4d10, 96 bytes, placed by class name and neighbouring functions
    // Window::UpdateRestoreRect()
    void Window::UpdateRestoreRect() {
        undefined8 local_38;
        undefined8 uStack_30;
        undefined8 local_28;
        undefined8 uStack_20;

        if (field_656 == 0) {
            local_28 = 0;
            uStack_20 = 0;
            local_38 = 0;
            uStack_30 = 0;
        } else {
            _objc_msgSend_stret((undefined*)&local_38, field_656, "frame");
        }
        field_728 = local_28;
        field_736 = uStack_20;
        field_712 = local_38;
        field_720 = uStack_30;
    }

    // 0x1003a4d70, 464 bytes, placed by class name and neighbouring functions
    // Window::Window(GraphicsApp*, SystemInitParams const&, WindowInitParams const&)
    void Window::Window(GraphicsApp* param_1, SystemInitParams* param_2, WindowInitParams* param_3) {
        undefined* puVar1;
        undefined* local_78;
        undefined8 local_70;
        code* local_68;
        undefined* local_60;
        Window* local_58;
        WindowInitParams* local_50;
        undefined1* local_48;
        undefined1* local_40;
        undefined1* local_38;

        field_0 = &PTR__Window_100efe220;
        local_48 = &field_8;
        EventListeners<std::function<bool(float, float)>>::EventListeners(
            (EventListeners<std::function<bool(float, float)>>*)local_48);
        EventListeners<std::function<bool()>>::EventListeners((EventListeners<std::function<bool()>>*)&field_104);
        local_40 = &field_104;
        new (field_200, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        m_width = (float)*(uint*)&param_3->field_0;
        m_height = (float)*(uint*)((long)&param_3->field_0 + 4);
        field_224 = 0;
        field_228 = 0;
        field_232 = true;
        field_240 = param_1;
        m_pNativeApplication = (void*)0;
        *(undefined4*)((long)&m_pNativeApplication + 7) = 0;
        local_38 = field_200;
        new (field_264, param_3) WindowInitParams();
        new (&field_368) MenuItem();
        field_512 = 1;
        std::function<void()>::function((function<void()>*)&field_528);
        new (&field_576, false) std::atomic<bool>();
        field_577 = 0;
        new (&field_580, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        std::function<bool(float, float)>::function((function<bool(float, float)>*)&field_608);
        m_liveResizing = false;
        field_656 = 0;
        field_664 = 0;
        puVar1 = PTR___dispatch_main_q_100ee9db8;
        _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
        local_78 = PTR___NSConcreteStackBlock_100ee4038;
        local_70 = 3221225472;
        local_68 = ____ZN3jag6WindowC2EPNS_11GraphicsAppERKNS_16SystemInitParamsERKNS_16WindowInitParamsE_block_invoke;
        local_60 = &___block_descriptor_48_e5_v8__0l;
        local_58 = this;
        local_50 = param_3;
        _dispatch_sync(puVar1, &local_78);
    }

    // 0x1003a53a0, 144 bytes, placed by class name and neighbouring functions
    // Window::DecodeSavedPositionData(CGRect&, PacketT<Array<unsigned char, eastl::allocator> >&)
    bool Window::DecodeSavedPositionData(CGRect* param_1, PacketT* param_2) {
        long lVar1;
        int iVar2;
        long lVar3;

        lVar1 = param_2->GetTextureAtlas();
        lVar3 = param_2->size();
        if (15 < (ulong)(lVar1 - lVar3)) {
            iVar2 = param_2->g4s();
            (param_1->field_0).field_0 = (double)iVar2;
            iVar2 = param_2->g4s();
            (param_1->field_0).field_8 = (double)iVar2;
            iVar2 = param_2->g4s();
            (param_1->field_16).field_0 = (double)iVar2;
            iVar2 = param_2->g4s();
            (param_1->field_16).field_8 = (double)iVar2;
        }
        return 15 < (ulong)(lVar1 - lVar3);
    }

    // 0x1003a5430, 240 bytes, placed by class name and neighbouring functions
    // Window::ValidateWindowScreen(CGRect const&)
    Window* Window::ValidateWindowScreen(CGRect* param_1) {
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        undefined4 uVar5;
        undefined4 uVar6;
        undefined4 uVar7;
        undefined8 uVar9;
        ID self;
        CGRect* in_RDX;
        undefined8 local_48;
        undefined8 uStack_40;
        double local_38;
        double dStack_30;
        undefined8 local_28;

        uVar9 = GetScreenFromRect(this, in_RDX);
        self = _objc_retainAutoreleasedReturnValue(uVar9);
        if (self == 0) {
            local_38 = 0.0;
            dStack_30 = 0.0;
            local_48 = 0;
            uStack_40 = 0;
        } else {
            _objc_msgSend_stret((undefined*)&local_48, self, "frame");
        }
        if (_NSIntersectsRect() == '\0') {
            local_28 = eastl::min((in_RDX->field_16).field_0, local_38);
            uVar9 = eastl::min((in_RDX->field_16).field_8, dStack_30);
            field_0 = (undefined**)0;
            field_8 = 0;
            *(undefined3*)&field_9 = 0;
            field_12 = 0;
            field_16 = (undefined4)local_28;
            field_20 = local_28._4_4_;
            field_24 = (int)uVar9;
            field_28 = (int)((ulong)uVar9 >> 32);
        } else {
            uVar1 = *(undefined4*)&(in_RDX->field_0).field_0;
            uVar2 = *(undefined4*)((long)&(in_RDX->field_0).field_0 + 4);
            uVar3 = *(undefined4*)&(in_RDX->field_0).field_8;
            uVar4 = *(undefined4*)((long)&(in_RDX->field_0).field_8 + 4);
            uVar5 = *(undefined4*)((long)&(in_RDX->field_16).field_0 + 4);
            uVar6 = *(undefined4*)&(in_RDX->field_16).field_8;
            uVar7 = *(undefined4*)((long)&(in_RDX->field_16).field_8 + 4);
            field_16 = *(undefined4*)&(in_RDX->field_16).field_0;
            field_20 = uVar5;
            field_24 = uVar6;
            field_28 = uVar7;
            *(undefined4*)&field_0 = uVar1;
            *(undefined4*)((long)&field_0 + 4) = uVar2;
            *(undefined4*)&field_8 = uVar3;
            field_12 = uVar4;
        }
        (*(code*)PTR__objc_release_100ee9e60)(self);
        return this;
    }

    // 0x1003a5520, 320 bytes, placed by class name and neighbouring functions
    // Window::ValidateWindowSize(CGRect const&, unsigned int, WindowInitParams const&)
    Window* Window::ValidateWindowSize(CGRect* param_1, uint param_2, WindowInitParams* param_3) {
        undefined8 uVar1;
        ID self;
        undefined4 in_register_00000014;
        undefined4* puVar2;
        Window* this_00;
        long in_R8;
        undefined8 in_R9;
        undefined8 local_68;
        undefined8 uStack_60;
        double local_58;
        double dStack_50;
        undefined1 local_48[16];
        double local_38;
        double dStack_30;

        puVar2 = (undefined4*)CONCAT44(in_register_00000014, param_2);
        this_00 = (Window*)local_48;
        NSWindow::frameRectForContentRect_styleMask_((ID)local_48, &_OBJC_CLASS___NSWindow,
                                                     "frameRectForContentRect:styleMask:", (ulong)param_3 & 4294967295,
                                                     in_R8, in_R9, *puVar2, puVar2[2], puVar2[4], puVar2[6]);
        uVar1 = GetScreenFromRect(this_00, (CGRect*)local_48);
        self = _objc_retainAutoreleasedReturnValue(uVar1);
        if (self == 0) {
            local_58 = 0.0;
            dStack_50 = 0.0;
            local_68 = 0;
            uStack_60 = 0;
        } else {
            _objc_msgSend_stret((undefined*)&local_68, self, "frame");
        }
        local_38 = (double)eastl::min(local_58, local_38);
        dStack_30 = (double)eastl::min(dStack_50, dStack_30);
        local_38 = (double)eastl::max((double)*(int*)(in_R8 + 64), local_38);
        dStack_30 = (double)eastl::max((double)*(int*)(in_R8 + 68), dStack_30);
        NSWindow::contentRectForFrameRect_styleMask_((ID)this, &_OBJC_CLASS___NSWindow,
                                                     "contentRectForFrameRect:styleMask:", (ulong)param_3 & 4294967295);
        (*(code*)PTR__objc_release_100ee9e60)(self);
        return this;
    }

    // 0x1003a5660, 480 bytes, placed by class name and neighbouring functions
    // Window::GetScreenFromRect(CGRect const&) const
    void Window::GetScreenFromRect(CGRect* param_1) {
        undefined* puVar1;
        int iVar2;
        ID IVar3;
        undefined8 uVar4;
        ulong uVar5;
        undefined8 uVar6;
        long lVar7;
        ulong uVar8;
        int iVar9;
        int iVar10;
        undefined1 local_98[16];
        double local_88;
        double local_80;
        undefined8 local_78;
        undefined8 uStack_70;
        undefined8 local_68;
        undefined8 uStack_60;
        ulong local_58;
        char* local_50;
        CGRect* local_48;
        char* local_40;
        long local_38;

        local_48 = param_1;
        IVar3 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen, "screens");
        uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
        puVar1 = PTR__objc_release_100ee9e60;
        local_50 = "objectAtIndex:";
        uVar8 = 0;
        local_40 = "frame";
        iVar10 = 0;
        local_38 = 0;
        while (true) {
            uVar5 = (*(code*)PTR__objc_msgSend_100ee9e50)(uVar4, "count");
            lVar7 = local_38;
            if (uVar5 <= uVar8)
                break;
            local_58 = uVar8;
            uVar6 = (*(code*)PTR__objc_msgSend_100ee9e50)(uVar4, local_50, uVar8);
            IVar3 = _objc_retainAutoreleasedReturnValue(uVar6);
            if (IVar3 == 0) {
                local_68 = 0;
                uStack_60 = 0;
                local_78 = 0;
                uStack_70 = 0;
            } else {
                _objc_msgSend_stret((undefined*)&local_78, IVar3, local_40);
            }
            _NSIntersectionRect(local_98);
            iVar2 = (int)local_88;
            iVar9 = (int)local_80;
            if (iVar10 < iVar9 * iVar2) {
                lVar7 = (*(code*)PTR__objc_retain_100ee9e68)(IVar3);
                (*(code*)puVar1)(local_38);
                iVar10 = iVar9 * iVar2;
                local_38 = lVar7;
            }
            (*(code*)puVar1)(IVar3);
            uVar8 = local_58 + 1;
        }
        if (local_38 == 0) {
            IVar3 = NSScreen::mainScreen((ID)&_OBJC_CLASS___NSScreen, "mainScreen");
            uVar6 = _objc_retainAutoreleasedReturnValue(IVar3);
            lVar7 = local_38;
        } else {
            uVar6 = (*(code*)PTR__objc_retain_100ee9e68)(local_38);
        }
        (*(code*)puVar1)(uVar4);
        (*(code*)puVar1)(lVar7);
        _objc_autoreleaseReturnValue(uVar6);
    }

    // 0x1003a5840, 144 bytes, placed by class name and neighbouring functions
    // Window::SetFocusWindow()
    void Window::SetFocusWindow() {
        undefined* puVar1;
        ID IVar2;
        undefined* local_40;
        undefined8 local_38;
        code* local_30;
        undefined* local_28;
        Window* local_20;

        IVar2 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread, "isMainThread");
        puVar1 = PTR___dispatch_main_q_100ee9db8;
        if ((char)IVar2 == '\0') {
            _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
            local_40 = PTR___NSConcreteStackBlock_100ee4038;
            local_38 = 3221225472;
            local_30 = ____ZN3jag6Window14SetFocusWindowEv_block_invoke;
            local_28 = &___block_descriptor_40_e5_v8__0l;
            local_20 = this;
            _dispatch_sync(puVar1, &local_40);
        } else {
            (*(code*)PTR__objc_msgSend_100ee9e50)(field_656, "makeKeyAndOrderFront:", 0);
        }
    }

    // 0x1003a5970, 16 bytes, placed by class name and neighbouring functions
    // Window::Window(GraphicsApp*, SystemInitParams const&, WindowInitParams const&)
    void Window::Window(GraphicsApp* param_1, SystemInitParams* param_2, WindowInitParams* param_3) {
        Window(this, param_1, param_2, param_3);
    }

    // 0x1003a5980, 144 bytes, base-object destructor, placed by class name and neighbouring functions
    // Window::~Window()
    void Window::~Window() {
        undefined* puVar1;

        field_0 = &PTR__Window_100efe220;
        puVar1 = PTR__objc_release_100ee9e60;
        (*(code*)PTR__objc_release_100ee9e60)(field_664);
        (*(code*)puVar1)(field_656);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_608);
        std::function<void()>::~function((function<void()>*)&field_528);
        (&field_368)->~MenuItem();
        field_264->~WindowInitParams();
        field_200->~shared_ptr();
        EventListeners<std::function<bool()>>::~EventListeners((EventListeners<std::function<bool()>>*)&field_104);
        EventListeners<std::function<bool(float, float)>>::~EventListeners(
            (EventListeners<std::function<bool(float, float)>>*)&field_8);
    }

    // 0x1003a5a20, 16 bytes, complete-object destructor, placed by class name and neighbouring functions
    // Window::~Window(): jumps straight to the base-object destructor

    // 0x1003a5a30, 32 bytes, deleting destructor, placed by class name and neighbouring functions
    // Window::~Window()
    void Window::~Window() {
        ~Window(this);
        operator_delete(this);
    }

    // 0x1003a5a50, 192 bytes, placed by class name and neighbouring functions
    // Window::GetMenuScreen() const
    void Window::GetMenuScreen() {
        undefined* puVar1;
        ID IVar2;
        long lVar3;
        undefined8 uVar4;
        undefined8 uVar5;

        IVar2 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen, "screens");
        lVar3 = _objc_retainAutoreleasedReturnValue(IVar2);
        (*(code*)PTR__objc_release_100ee9e60)(lVar3);
        puVar1 = PTR__objc_msgSend_100ee9e50;
        if (lVar3 == 0) {
            IVar2 = NSScreen::mainScreen((ID)&_OBJC_CLASS___NSScreen, "mainScreen");
            uVar5 = _objc_retainAutoreleasedReturnValue(IVar2);
        } else {
            IVar2 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen, "screens");
            uVar4 = _objc_retainAutoreleasedReturnValue(IVar2);
            uVar5 = (*(code*)puVar1)(uVar4, "objectAtIndex:", 0);
            uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
            (*(code*)PTR__objc_release_100ee9e60)(uVar4);
        }
        _objc_autoreleaseReturnValue(uVar5);
    }

    // 0x1003a5b10, 144 bytes, placed by class name and neighbouring functions
    // Window::GetMonitorResolution(unsigned int&, unsigned int&)
    void Window::GetMonitorResolution(uint* param_1, uint* param_2) {
        undefined8 uVar1;
        ID self;
        undefined8 local_48;
        undefined8 uStack_40;
        double local_38;
        double dStack_30;

        uVar1 = GetCurrentScreen(this);
        self = _objc_retainAutoreleasedReturnValue(uVar1);
        if (self == 0) {
            local_38 = 0.0;
            dStack_30 = 0.0;
            local_48 = 0;
            uStack_40 = 0;
        } else {
            _objc_msgSend_stret((undefined*)&local_48, self, "frame");
        }
        *param_1 = (uint)(long)local_38;
        *param_2 = (uint)(long)dStack_30;
        (*(code*)PTR__objc_release_100ee9e60)(self);
    }

    // 0x1003a5ba0, 224 bytes, placed by class name and neighbouring functions
    // Window::SetSize_OsxImpl(float, float)
    void Window::SetSize_OsxImpl(float param_1, float param_2) {
        undefined8 local_88;
        undefined8 uStack_80;
        double local_78;
        double dStack_70;
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_48;
        undefined8 uStack_40;
        double local_38;
        double dStack_30;

        local_68 = 0;
        uStack_60 = 0;
        if (field_656 == 0) {
            local_78 = 0.0;
            dStack_70 = 0.0;
            local_88 = 0;
            uStack_80 = 0;
        } else {
            _objc_msgSend_stret((undefined*)&local_88, field_656, "frameRectForContentRect:");
        }
        if (field_656 == 0) {
            local_38 = 0.0;
            dStack_30 = 0.0;
            local_48 = 0;
            uStack_40 = 0;
        } else {
            _objc_msgSend_stret((undefined*)&local_48, field_656, "frame");
        }
        if ((local_38 != local_78) || (dStack_30 != dStack_70)) {
            (*(code*)PTR__objc_msgSend_100ee9e50)(SUB84((double)param_1, 0), SUB84((double)param_2, 0), field_656,
                                                  "setContentSize:");
        }
    }

    // 0x1003a5ca0, 128 bytes, placed by class name and neighbouring functions
    // Window::SetView(shared_ptr<OpenGLView> const&)
    void Window::SetView(shared_ptr* param_1) {
        undefined* puVar1;
        bool bVar2;
        undefined* local_40;
        undefined8 local_38;
        code* local_30;
        undefined* local_28;
        Window* local_20;

        shared_ptr<OpenGLView>::operator=((shared_ptr<OpenGLView>*)field_200, param_1);
        bVar2 = field_200->operator_cast_to_bool();
        puVar1 = PTR___dispatch_main_q_100ee9db8;
        if (bVar2) {
            _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
            local_40 = PTR___NSConcreteStackBlock_100ee4038;
            local_38 = 3221225472;
            local_30 = ____ZN3jag6Window7SetViewERKNS_10shared_ptrINS_10OpenGLViewEEE_block_invoke;
            local_28 = &___block_descriptor_40_e5_v8__0l;
            local_20 = this;
            _dispatch_sync(puVar1, &local_40);
        }
    }

    // 0x1003a5e70, 16 bytes, placed by class name and neighbouring functions
    // Window::OnScroll()
    void Window::OnScroll() {}

    // 0x1003a5e80, 48 bytes, placed by class name and neighbouring functions
    // Window::GetScrolledRect()
    Window* Window::GetScrolledRect() {
        long in_RSI;

        new (this) oldscape::dash3d::GridRect(0, 0, (int)*(float*)(in_RSI + 216), (int)*(float*)(in_RSI + 220));
        return this;
    }

    // 0x1003a5eb0, 16 bytes, placed by class name and neighbouring functions
    // Window::SetNativeApplication(void*)
    void Window::SetNativeApplication(void* param_1) {
        m_pNativeApplication = param_1;
    }

    // 0x1003a5ec0, 112 bytes, placed by class name and neighbouring functions
    // Window::SetWindowTitle(char const*)
    void Window::SetWindowTitle(char* param_1) {
        undefined* puVar1;
        undefined* local_50;
        undefined8 local_48;
        code* local_40;
        undefined* local_38;
        Window* local_30;
        char* local_28;

        puVar1 = PTR___dispatch_main_q_100ee9db8;
        _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
        local_50 = PTR___NSConcreteStackBlock_100ee4038;
        local_48 = 3221225472;
        local_40 = ____ZN3jag6Window14SetWindowTitleEPKc_block_invoke;
        local_38 = &___block_descriptor_48_e5_v8__0l;
        local_30 = this;
        local_28 = param_1;
        _dispatch_sync(puVar1, &local_50);
    }

    // 0x1003a5ff0, 144 bytes, placed by class name and neighbouring functions
    // Window::SetWindowCollectionFullscreen(bool)
    void Window::SetWindowCollectionFullscreen(bool param_1) {
        undefined* puVar1;
        uint uVar2;
        ulong uVar3;
        undefined7 in_register_00000031;
        undefined8 uVar4;

        uVar2 = (*(code*)PTR__objc_msgSend_100ee9e50)(field_656, "collectionBehavior");
        puVar1 = PTR__objc_msgSend_100ee9e50;
        if ((int)CONCAT71(in_register_00000031, param_1) == 0) {
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
        uVar3 = (*(code*)PTR__objc_msgSend_100ee9e50)(field_656, "styleMask");
        (*(code*)puVar1)(field_656, "setStyleMask:", uVar3 | 15);
        (*(code*)puVar1)(field_656, "setCollectionBehavior:", uVar4);
    }

    // 0x1003a60e0, 16 bytes, placed by class name and neighbouring functions
    // Window::IsMaximized() const
    undefined1 Window::IsMaximized() {
        return m_maximized;
    }

    // 0x1003a60f0, 16 bytes, placed by class name and neighbouring functions
    // Window::WasFullScreenInPreviousSession() const
    undefined1 Window::WasFullScreenInPreviousSession() {
        return m_fullScreen;
    }

    // 0x1003a6100, 240 bytes, placed by class name and neighbouring functions
    // Window::GetWindowSavePositionData(PacketT<Array<unsigned char, eastl::allocator> >&) const
    void Window::GetWindowSavePositionData(PacketT* param_1) {
        ID self;
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58;
        undefined8 uStack_50;
        undefined1 local_48[24];

        new (local_48) PacketT<Array<unsigned char, eastl::allocator>>(16);
        PacketT<Array<unsigned char, eastl::allocator>>::operator=(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (PacketT*)local_48);
        local_48->~VBOMapper();
        self = field_656;
        if (self == 0) {
            local_58 = 0;
            uStack_50 = 0;
            local_68 = 0;
            uStack_60 = 0;
        } else {
            _objc_msgSend_stret((undefined*)&local_68, self, "frame");
            if (self != 0) {
                _objc_msgSend_stret(local_48, self, "contentRectForFrameRect:");
                goto LAB_1003a619d;
            }
        }
        local_48._16_8_ = 0.0;
        local_48._0_8_ = 0.0;
        local_48._8_8_ = 0.0;
    LAB_1003a619d:
        PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (int)(double)local_48._0_8_);
        PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (int)(double)local_48._8_8_);
        PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (int)(double)local_48._16_8_);
        PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (int)0.0);
    }

    // 0x1003a6220, 176 bytes, placed by class name and neighbouring functions
    // Window::GetCentrePoint() const
    Window* Window::GetCentrePoint() {
        ID self;
        long in_RSI;
        undefined8 local_58;
        undefined8 uStack_50;
        undefined8 local_48;
        undefined8 uStack_40;
        double local_38;

        self = *(ID*)(in_RSI + 656);
        if (self == 0) {
            local_48 = 0;
            uStack_40 = 0;
            local_58 = 0;
            uStack_50 = 0;
        } else {
            _objc_msgSend_stret((undefined*)&local_58, self, "frame");
            if (self != 0) {
                _objc_msgSend_stret((undefined*)&local_38, self, "contentRectForFrameRect:");
                goto LAB_1003a6293;
            }
        }
        local_38 = 0.0;
    LAB_1003a6293:
        new (this) oldscape::sidebars::SideBarData((int)(0.0 * 0.5 + local_38), (int)(0.0 * 0.5 + 0.0));
        return this;
    }

    // 0x1003a62d0, 176 bytes, placed by class name and neighbouring functions
    // Window::SetForeground()
    void Window::SetForeground() {
        undefined* puVar1;
        undefined* puVar2;
        ID IVar3;
        undefined* local_40;
        undefined8 local_38;
        code* local_30;
        undefined* local_28;
        Window* local_20;

        IVar3 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread, "isMainThread");
        puVar2 = PTR__objc_msgSend_100ee9e50;
        puVar1 = PTR___dispatch_main_q_100ee9db8;
        if ((char)IVar3 == '\0') {
            _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
            local_40 = PTR___NSConcreteStackBlock_100ee4038;
            local_38 = 3221225472;
            local_30 = ____ZN3jag6Window13SetForegroundEv_block_invoke;
            local_28 = &___block_descriptor_40_e5_v8__0l;
            local_20 = this;
            _dispatch_sync(puVar1, &local_40);
        } else {
            (*(code*)PTR__objc_msgSend_100ee9e50)(*(undefined8*)PTR__NSApp_100ee4008, "activateIgnoringOtherApps:", 1);
            (*(code*)puVar2)(field_656, "makeKeyAndOrderFront:", 0);
        }
    }

    // 0x1003a63f0, 16 bytes, placed by class name and neighbouring functions
    // Window::SetFocusGame()
    void Window::SetFocusGame() {
        SetFocusWindow(this);
    }

    // 0x1003a6400, 16 bytes, placed by class name and neighbouring functions
    // Window::Show(bool)
    void Window::Show(bool param_1) {}

    // 0x1003a6410, 112 bytes, placed by class name and neighbouring functions
    // Window::SetTopmost(bool)
    void Window::SetTopmost(bool param_1) {
        undefined* puVar1;
        undefined* local_50;
        undefined8 local_48;
        code* local_40;
        undefined* local_38;
        Window* local_30;
        undefined1 local_28;

        puVar1 = PTR___dispatch_main_q_100ee9db8;
        _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
        local_50 = PTR___NSConcreteStackBlock_100ee4038;
        local_48 = 3221225472;
        local_40 = ____ZN3jag6Window10SetTopmostEb_block_invoke;
        local_38 = &___block_descriptor_41_e5_v8__0l;
        local_30 = this;
        local_28 = param_1;
        _dispatch_async(puVar1, &local_50);
    }

    // 0x1003a64e0, 16 bytes, placed by class name and neighbouring functions
    // Window::SupportsFullScreen()
    undefined8 Window::SupportsFullScreen() {
        return 0;
    }

    // 0x1003a64f0, 16 bytes, placed by class name and neighbouring functions
    // Window::SupportsFixedScreen()
    undefined1 Window::SupportsFixedScreen() {
        return 1;
    }

    // 0x1003a6500, 112 bytes, placed by class name and neighbouring functions
    // Window::SetResizable(bool)
    void Window::SetResizable(bool param_1) {
        undefined* puVar1;
        undefined* local_40;
        undefined8 local_38;
        code* local_30;
        undefined* local_28;
        Window* local_20;

        field_232 = param_1;
        puVar1 = PTR___dispatch_main_q_100ee9db8;
        _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
        local_40 = PTR___NSConcreteStackBlock_100ee4038;
        local_38 = 3221225472;
        local_30 = ____ZN3jag6Window12SetResizableEb_block_invoke;
        local_28 = &___block_descriptor_40_e5_v8__0l;
        local_20 = this;
        _dispatch_async(puVar1, &local_40);
    }

    // 0x1003a65b0, 16 bytes, placed by class name and neighbouring functions
    // Window::IsLiveResizing() const
    undefined1 Window::IsLiveResizing() {
        return m_liveResizing;
    }

    // 0x1003a65e0, 304 bytes, placed by class name and neighbouring functions
    // Window::GetWindowFrame()
    Window* Window::GetWindowFrame() {
        undefined* puVar1;
        ID IVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        long in_RSI;
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58;
        double dStack_50;
        double local_48;
        double local_40;
        double local_38;
        double local_30;

        puVar1 = PTR__objc_msgSend_100ee9e50;
        local_48 = *(double*)(in_RSI + 680);
        local_30 = *(double*)(in_RSI + 688);
        local_40 = *(double*)(in_RSI + 696);
        local_38 = *(double*)(in_RSI + 704);
        IVar2 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen, "screens");
        uVar3 = _objc_retainAutoreleasedReturnValue(IVar2);
        uVar4 = (*(code*)puVar1)(uVar3, "objectAtIndexedSubscript:", 0);
        IVar2 = _objc_retainAutoreleasedReturnValue(uVar4);
        if (IVar2 == 0) {
            local_58 = 0;
            dStack_50 = 0.0;
            local_68 = 0;
            uStack_60 = 0;
        } else {
            _objc_msgSend_stret((undefined*)&local_68, IVar2, "frame");
        }
        puVar1 = PTR__objc_release_100ee9e60;
        (*(code*)PTR__objc_release_100ee9e60)(IVar2);
        (*(code*)puVar1)(uVar3);
        new (this) oldscape::dash3d::GridRect((int)local_48, (int)((double)(int)dStack_50 - (local_30 + local_38)),
                                              (int)local_40, (int)local_38);
        return this;
    }

    // 0x1003a6710, 448 bytes, placed by class name and neighbouring functions
    // Window::GetMonitors(eastl::fixed_vector<math::Rect<int>, 12ul, false, eastl::dummy_allocator>&)
    void Window::GetMonitors(fixed_vector* param_1) {
        undefined* puVar1;
        uint uVar2;
        ID IVar3;
        undefined8 uVar4;
        ulong uVar5;
        ulong uVar6;
        undefined1 local_98[16];
        undefined8 local_88;
        double dStack_80;
        undefined8 local_78;
        undefined8 uStack_70;
        double local_68;
        double dStack_60;
        double local_58;
        double dStack_50;
        undefined8 local_38;

        puVar1 = PTR__objc_msgSend_100ee9e50;
        IVar3 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen, "screens");
        local_38 = _objc_retainAutoreleasedReturnValue(IVar3);
        uVar4 = (*(code*)puVar1)(local_38, "objectAtIndexedSubscript:", 0);
        IVar3 = _objc_retainAutoreleasedReturnValue(uVar4);
        if (IVar3 == 0) {
            local_78 = 0;
            uStack_70 = 0;
            local_88 = 0;
            dStack_80 = 0.0;
        } else {
            _objc_msgSend_stret((undefined*)&local_88, IVar3, "frame");
        }
        (*(code*)PTR__objc_release_100ee9e60)(IVar3);
        uVar5 = (*(code*)PTR__objc_msgSend_100ee9e50)(local_38, "count");
        uVar6 = param_1->capacity();
        uVar2 = eastl::min_alt<unsigned long>(uVar5, uVar6);
        if (0 < (int)uVar2) {
            uVar5 = 0;
            do {
                uVar4 = (*(code*)PTR__objc_msgSend_100ee9e50)(local_38, "objectAtIndexedSubscript:", uVar5);
                IVar3 = _objc_retainAutoreleasedReturnValue(uVar4);
                if (IVar3 == 0) {
                    local_58 = 0.0;
                    dStack_50 = 0.0;
                    local_68 = 0.0;
                    dStack_60 = 0.0;
                } else {
                    _objc_msgSend_stret((undefined*)&local_68, IVar3, "frame");
                }
                (*(code*)PTR__objc_release_100ee9e60)(IVar3);
                new (local_98) oldscape::dash3d::GridRect((int)local_68, (int)dStack_80 - (int)dStack_60, (int)local_58,
                                                          (int)dStack_50);
                param_1->push_back(local_98);
                uVar5 = uVar5 + 1;
            } while (uVar2 != uVar5);
        }
        (*(code*)PTR__objc_release_100ee9e60)(local_38);
    }

    // 0x1003a6920, 128 bytes, placed by class name and neighbouring functions
    // Window::SetPosition(int, int)
    void Window::SetPosition(int param_1, int param_2) {
        undefined* puVar1;
        undefined* local_58;
        undefined8 local_50;
        code* local_48;
        undefined* local_40;
        Window* local_38;
        int local_30;
        int local_2c;

        puVar1 = PTR___dispatch_main_q_100ee9db8;
        _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
        local_58 = PTR___NSConcreteStackBlock_100ee4038;
        local_50 = 3221225472;
        local_48 = ____ZN3jag6Window11SetPositionEii_block_invoke;
        local_40 = &___block_descriptor_48_e5_v8__0l;
        local_38 = this;
        local_30 = param_2;
        local_2c = param_1;
        _dispatch_async(puVar1, &local_58);
    }

    // 0x1003a9c30, 48 bytes, placed by class name and neighbouring functions
    // Window::OnClose()::$_3::operator()(BaseApp*) const
    /* Window::OnClose()::$_3::TEMPNAMEPLACEHOLDERVALUE(BaseApp*) const */

    void Window::OnClose()::$_3::operator()(BaseApp* param_1) {
        bool bVar1;

        bVar1 =
            EventListeners<std::function<bool()>>::operator()((EventListeners<std::function<bool()>>*)(field_0 + 104));
        if (!bVar1) {
            *field_8 = 1;
        }
    }

} // namespace jag

// 0x1003a4fa0, 1024 bytes, placed by __FILE__ string
// ___ZN3jag6WindowC2EPNS_11GraphicsAppERKNS_16SystemInitParamsERKNS_16WindowInitParamsE_block_invoke
void ____ZN3jag6WindowC2EPNS_11GraphicsAppERKNS_16SystemInitParamsERKNS_16WindowInitParamsE_block_invoke(
    Window* param_1) {
    Window* this;
    char cVar1;
    undefined8 uVar2;
    undefined8 uVar3;
    ID IVar4;
    ID IVar5;
    Window* local_80;
    CGRect local_78;
    undefined8 local_58;
    undefined8 uStack_50;
    undefined8 local_48;
    undefined8 uStack_40;
    undefined8 local_38;

    this = *(Window**)&param_1->field_32;
    cVar1 = param_1->DecodeSavedPositionData(&local_78, (PacketT*)(field_264 + 72));
    if (cVar1 == '\0') {
        uVar2 = jag::logger::default_logger();
        uVar3 = ((field_264 + 72))->GetTextureAtlas();
        jag::logger::Logger::Log(
            uVar2, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/windowing/osx/Window_OSX.cpp",
            29, "Failed to decode saved window position (got %zu bytes), using default", uVar3);
        local_78.field_16.field_0 = (double)m_width;
        local_78.field_16.field_8 = (double)m_height;
        local_78.field_0.field_0 = 0.0;
        local_78.field_0.field_8 = 0.0;
    }
    local_58.ValidateWindowScreen(this);
    local_78.field_16.field_0 = local_48;
    local_78.field_16.field_8 = uStack_40;
    local_78.field_0.field_0 = (double)local_58;
    local_78.field_0.field_8 = uStack_50;
    local_58.ValidateWindowSize(this, (uint)&local_78, 15);
    local_78.field_16.field_0 = local_48;
    local_78.field_16.field_8 = uStack_40;
    local_78.field_0.field_0 = (double)local_58;
    local_78.field_0.field_8 = uStack_50;
    uVar2 = local_58.GetScreenFromRect(&local_78);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    IVar4 = NSWindow::alloc((ID)&_OBJC_CLASS___NSWindow, "alloc");
    IVar5 = NSWindow::initWithContentRect_styleMask_backing_defer_screen_(
        IVar4, "initWithContentRect:styleMask:backing:defer:screen:", 15, 2, 0, uVar2, local_78.field_0.field_0,
        local_78.field_0.field_8._0_4_, local_78.field_16.field_0._0_4_, local_78.field_16.field_8._0_4_);
    IVar4 = field_656;
    field_656 = IVar5;
    (*(code*)PTR__objc_release_100ee9e60)(IVar4);
    cVar1 =
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
    IVar4 = field_656;
    if (cVar1 == '\0') {
        local_38 = uVar2;
        uVar3 = eastl::basic_string<char, jag::BucketAllocatorEASTL>::begin();
        uVar2 = local_38;
        IVar5 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString, "stringWithUTF8String:", uVar3);
        uVar3 = _objc_retainAutoreleasedReturnValue(IVar5);
        (*(code*)PTR__objc_msgSend_100ee9e50)(IVar4, "setTitle:", uVar3);
        (*(code*)PTR__objc_release_100ee9e60)(uVar3);
    } else {
        (*(code*)PTR__objc_msgSend_100ee9e50)(IVar4, "setTitle:", &cf_NxtApp);
    }
    IVar4 = field_656;
    IVar5 = NSColor::blackColor((ID)&_OBJC_CLASS___NSColor, "blackColor");
    uVar3 = _objc_retainAutoreleasedReturnValue(IVar5);
    (*(code*)PTR__objc_msgSend_100ee9e50)(IVar4, "setBackgroundColor:", uVar3);
    (*(code*)PTR__objc_release_100ee9e60)(uVar3);
    IVar4 = (*(code*)PTR__objc_msgSend_100ee9e50)(&objc::class_t::WindowDelegate, "alloc");
    IVar4 = WindowDelegate::initWithWindow_app_(IVar4, "initWithWindow:app:", this, field_240);
    uVar3 = field_664;
    field_664 = IVar4;
    (*(code*)PTR__objc_release_100ee9e60)(uVar3);
    (*(code*)PTR__objc_msgSend_100ee9e50)(field_656, "setDelegate:", field_664);
    if ((*(int*)(field_264 + 64) != -1) && (*(int*)(field_264 + 68) != -1)) {
        (*(code*)PTR__objc_msgSend_100ee9e50)(SUB84((double)*(int*)(*(long*)&param_1->field_40 + 64), 0),
                                              SUB84((double)*(int*)(*(long*)&param_1->field_40 + 68), 0), field_656,
                                              "setContentMinSize:");
    }
    (*(code*)PTR__objc_msgSend_100ee9e50)(field_656, "setAcceptsMouseMovedEvents:", 1);
    (*(code*)PTR__objc_msgSend_100ee9e50)(field_656, "setReleasedWhenClosed:", 0);
    if (field_656 == 0) {
        local_48 = 0.0;
        uStack_40 = 0.0;
        local_58 = (undefined**)0;
        uStack_50 = 0.0;
    } else {
        _objc_msgSend_stret((undefined*)&local_58, field_656, "frame");
    }
    field_696 = (undefined4)local_48;
    field_700 = local_48._4_4_;
    field_704 = (undefined4)uStack_40;
    field_708 = uStack_40._4_4_;
    field_680 = (undefined4)local_58;
    field_684 = local_58._4_4_;
    field_688 = (undefined4)uStack_50;
    field_692 = uStack_50._4_4_;
    cVar1 = (*(code*)PTR__objc_msgSend_100ee9e50)(field_656, "isZoomed");
    m_maximized = cVar1 != '\0';
    SetFocusWindow();
    local_58 = (undefined**)8589934592;
    _TransformProcessType(&local_58, 1);
    field_258 = 1;
    local_80 = this;
    __ZNSt3__18functionIFbffEEaSIZZN3jag6WindowC1EPNS4_11GraphicsAppERKNS4_16SystemInitParamsERKNS4_16WindowInitParamsEEUb_E3__2vEERS2_OT_(
        &field_608, &local_80);
    RegisterSizeChangedHandler((function*)&field_608);
    (*(code*)PTR__objc_msgSend_100ee9e50)(field_656, "setCollectionBehavior:", 256);
    (*(code*)PTR__objc_release_100ee9e60)(uVar2);
}
