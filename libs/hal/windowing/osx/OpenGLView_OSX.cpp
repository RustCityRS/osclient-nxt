// libs/hal/windowing/osx/OpenGLView_OSX.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.windowing

#include "libs/hal/windowing/OpenGLView.h"

namespace jag {
    // 0x1003a3990, 320 bytes, base-object constructor, placed by class name and debug map
    // OpenGLView::OpenGLView(float, float, float, float, Window*, input::Input*)
    void OpenGLView::OpenGLView(float param_1, float param_2, float param_3, float param_4, Window* param_5,
                                Input* param_6) {
        undefined* puVar1;
        undefined* local_68;
        undefined8 local_60;
        code* local_58;
        undefined* local_50;
        OpenGLView* local_48;
        Window* local_40;
        float local_38;
        float local_34;
        int local_30[2];

        field_0 = &PTR__OpenGLView_100efe1c0;
        field_8 = param_5;
        field_16 = param_6;
        *(undefined8*)&field_24 = 4575657221408423936;
        m_fullScreenResolution = 0;
        field_36 = 0;
        field_40 = 0;
        field_44 = 0;
        field_48 = 0;
        new (&field_72) Array<unsigned char, eastl::allocator>();
        new (&field_96) std::mutex();
        field_160 = 0;
        new (&field_168, true) std::atomic<bool>();
        new (&field_240) std::mutex();
        local_30[0] = 0;
        local_30[1] = 0;
        std::pair<int, int>::pair<int, int, false>((pair<int, int>*)&field_304, local_30, local_30 + 1);
        new (&field_312) std::mutex();
        puVar1 = PTR___dispatch_main_q_100ee9db8;
        _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
        local_68 = PTR___NSConcreteStackBlock_100ee4038;
        local_60 = 3221225472;
        local_58 = ____ZN3jag10OpenGLViewC2EffffPNS_6WindowEPNS_5input5InputE_block_invoke;
        local_50 = &___block_descriptor_56_e5_v8__0l;
        local_38 = param_1;
        local_34 = param_2;
        local_48 = this;
        local_40 = param_5;
        _dispatch_sync(puVar1, &local_68);
    }

    // 0x1003a3c30, 272 bytes, placed by class name and neighbouring functions
    // OpenGLView::OnSize()
    void OpenGLView::OnSize() {
        char cVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        undefined4 uVar5;
        undefined4 uVar6;
        undefined4 uVar7;
        undefined4 uVar8;
        undefined4 uVar9;
        undefined8 local_38;
        undefined8 uStack_30;
        undefined8 local_28;
        undefined8 uStack_20;
        scoped_lock<std::mutex> local_18[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_18, (mutex*)&field_240);
        if (field_160 == 0) {
            local_28 = 0;
            uStack_20 = 0;
            local_38 = 0;
            uStack_30 = 0;
        } else {
            _objc_msgSend_stret((undefined*)&local_38, field_160, "frame");
        }
        field_192 = (undefined4)local_28;
        field_196 = local_28._4_4_;
        field_200 = (undefined4)uStack_20;
        field_204 = uStack_20._4_4_;
        field_176 = (undefined4)local_38;
        field_180 = local_38._4_4_;
        field_184 = (undefined4)uStack_30;
        field_188 = uStack_30._4_4_;
        cVar1 = (*(code*)PTR__objc_msgSend_100ee9e50)(field_160, "wantsBestResolutionOpenGLSurface");
        if (cVar1 == '\0') {
            uVar2 = field_176;
            uVar3 = field_180;
            uVar4 = field_184;
            uVar5 = field_188;
            uVar6 = field_192;
            uVar7 = field_196;
            uVar8 = field_200;
            uVar9 = field_204;
        } else {
            if (field_160 == 0) {
                local_28 = 0;
                uStack_20 = 0;
                local_38 = 0;
                uStack_30 = 0;
            } else {
                _objc_msgSend_stret((undefined*)&local_38, field_160, "convertRectToBacking:");
            }
            uVar2 = (undefined4)local_38;
            uVar3 = local_38._4_4_;
            uVar4 = (undefined4)uStack_30;
            uVar5 = uStack_30._4_4_;
            uVar6 = (undefined4)local_28;
            uVar7 = local_28._4_4_;
            uVar8 = (undefined4)uStack_20;
            uVar9 = uStack_20._4_4_;
        }
        field_224 = uVar6;
        field_228 = uVar7;
        field_232 = uVar8;
        field_236 = uVar9;
        field_208 = uVar2;
        field_212 = uVar3;
        field_216 = uVar4;
        field_220 = uVar5;
        std::scoped_lock<std::mutex>::~scoped_lock(local_18);
        (*(code*)PTR__objc_msgSend_100ee9e50)(field_160, "update");
    }

    // 0x1003a3d40, 240 bytes, placed by class name and neighbouring functions
    // OpenGLView::OnMove()
    void OpenGLView::OnMove() {
        undefined8 uVar1;
        ID self;
        scoped_lock<std::mutex> local_78[8];
        pair<int, int> local_70[8];
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58;
        undefined8 uStack_50;
        undefined8 local_48;
        undefined8 uStack_40;
        double local_38;
        double adStack_30[2];

        uVar1 = field_8->GetCurrentScreen();
        self = _objc_retainAutoreleasedReturnValue(uVar1);
        if (self == 0) {
            local_58 = 0;
            uStack_50 = 0;
            local_68 = 0;
            uStack_60 = 0;
        } else {
            _objc_msgSend_stret((undefined*)&local_68, self, "frame");
        }
        (*(code*)PTR__objc_release_100ee9e60)(self);
        if (field_160 == 0) {
            local_38 = 0.0;
            adStack_30[0] = 0.0;
            local_48 = 0;
            uStack_40 = 0;
        } else {
            _objc_msgSend_stret((undefined*)&local_48, field_160, "convertRectToBacking:");
        }
        std::scoped_lock<std::mutex>::scoped_lock(local_78, (mutex*)&field_312);
        std::pair<int, int>::pair<double&, double&, false>(local_70, &local_38, adStack_30);
        std::pair<int, int>::operator=((pair<int, int>*)&field_304, (pair*)local_70);
        std::scoped_lock<std::mutex>::~scoped_lock(local_78);
    }

    // 0x1003a3e30, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // OpenGLView::OpenGLView(float, float, float, float, Window*, input::Input*): jumps straight to the base-object constructor

    // 0x1003a3e40, 96 bytes, base-object destructor, placed by class name and neighbouring functions
    // OpenGLView::~OpenGLView()
    void OpenGLView::~OpenGLView() {
        undefined* puVar1;

        field_0 = &PTR__OpenGLView_100efe1c0;
        (&field_312)->~mutex();
        (&field_240)->~mutex();
        puVar1 = PTR__objc_release_100ee9e60;
        (*(code*)PTR__objc_release_100ee9e60)(field_160);
        (&field_96)->~mutex();
        (&field_72)->~Array();
        (*(code*)puVar1)(field_48);
    }

    // 0x1003a3eb0, 16 bytes, complete-object destructor, placed by class name and neighbouring functions
    // OpenGLView::~OpenGLView(): jumps straight to the base-object destructor

    // 0x1003a3ec0, 32 bytes, deleting destructor, placed by class name and neighbouring functions
    // OpenGLView::~OpenGLView()
    void OpenGLView::~OpenGLView() {
        ~OpenGLView(this);
        operator_delete(this);
    }

    // 0x1003a3ee0, 16 bytes, placed by class name and neighbouring functions
    // OpenGLView::StartUpdating()
    void OpenGLView::StartUpdating() {}

    // 0x1003a3ef0, 16 bytes, placed by class name and neighbouring functions
    // OpenGLView::StopUpdating()
    void OpenGLView::StopUpdating() {}

    // 0x1003a3f00, 16 bytes, placed by class name and neighbouring functions
    // OpenGLView::SetWindowEnabled(bool)
    void OpenGLView::SetWindowEnabled(bool param_1) {}

    // 0x1003a3f10, 96 bytes, placed by class name and neighbouring functions
    // OpenGLView::GetBackingSize(unsigned int&, unsigned int&) const
    void OpenGLView::GetBackingSize(uint* param_1, uint* param_2) {
        scoped_lock<std::mutex> local_30[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)&field_240);
        *param_1 = (uint)(long)*(double*)&field_224;
        *param_2 = (uint)(long)*(double*)&field_232;
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
    }

    // 0x1003a3f70, 512 bytes, placed by class name and neighbouring functions
    // OpenGLView::SetCursor(RGBAImage const&, unsigned int, unsigned int)
    void OpenGLView::SetCursor(RGBAImage* param_1, uint param_2, uint param_3) {
        undefined1* this_00;
        undefined* puVar1;
        uint uVar2;
        uint uVar3;
        Array* pAVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        ID IVar8;
        undefined8 uVar9;
        undefined* local_88;
        undefined8 local_80;
        code* local_78;
        undefined* local_70;
        OpenGLView* local_68;
        Array<unsigned char, eastl::allocator> local_60[24];
        undefined8 local_48;
        scoped_lock<std::mutex> local_40[8];

        uVar2 = param_1->GetX();
        uVar3 = param_1->GetZ();
        std::scoped_lock<std::mutex>::scoped_lock(local_40, (mutex*)&field_96);
        pAVar4 = (Array*)param_1->GetDevCredentialsOutputDirectory();
        Array<unsigned char, eastl::allocator>::Array<BucketAllocatorEASTL>(local_60, pAVar4);
        this_00 = &field_72;
        Array<unsigned char, eastl::allocator>::operator=((Array<unsigned char, eastl::allocator>*)this_00,
                                                          (Array*)local_60);
        local_60->~Array();
        uVar5 = this_00->data();
        uVar6 = this_00->end();
        uVar5 = _CGDataProviderCreateWithData(0, uVar5, uVar6, 0);
        uVar6 = _CGColorSpaceCreateDeviceRGB();
        local_48 = uVar5;
        uVar7 = _CGImageCreate(uVar2, uVar3, 8, 32, uVar2 << 2, uVar6, 1, uVar5, 0, 1, 0);
        IVar8 = NSImage::alloc((ID)&_OBJC_CLASS___NSImage, "alloc");
        uVar9 =
            (*(code*)PTR__objc_msgSend_100ee9e50)((double)uVar2, (double)uVar3, IVar8, "initWithCGImage:size:", uVar7);
        uVar5 = field_48;
        field_48 = uVar9;
        (*(code*)PTR__objc_release_100ee9e60)(uVar5);
        field_56 = (double)param_2;
        field_64 = (double)param_3;
        _CGImageRelease(uVar7);
        _CGDataProviderRelease(local_48);
        _CGColorSpaceRelease(uVar6);
        std::scoped_lock<std::mutex>::~scoped_lock(local_40);
        puVar1 = PTR___dispatch_main_q_100ee9db8;
        _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
        local_88 = PTR___NSConcreteStackBlock_100ee4038;
        local_80 = 3221225472;
        local_78 = ____ZN3jag10OpenGLView9SetCursorERKNS_9RGBAImageEjj_block_invoke;
        local_70 = &___block_descriptor_40_e5_v8__0l;
        local_68 = this;
        _dispatch_async(puVar1, &local_88);
    }

    // 0x1003a4220, 144 bytes, placed by class name and neighbouring functions
    // OpenGLView::ResetCursor()
    void OpenGLView::ResetCursor() {
        undefined8 uVar1;
        undefined* puVar2;
        scoped_lock<std::mutex> local_48[8];
        undefined* local_40;
        undefined8 local_38;
        code* local_30;
        undefined* local_28;
        OpenGLView* local_20;

        std::scoped_lock<std::mutex>::scoped_lock(local_48, (mutex*)&field_96);
        uVar1 = field_48;
        field_48 = 0;
        (*(code*)PTR__objc_release_100ee9e60)(uVar1);
        std::scoped_lock<std::mutex>::~scoped_lock(local_48);
        puVar2 = PTR___dispatch_main_q_100ee9db8;
        _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
        local_40 = PTR___NSConcreteStackBlock_100ee4038;
        local_38 = 3221225472;
        local_30 = ____ZN3jag10OpenGLView11ResetCursorEv_block_invoke;
        local_28 = &___block_descriptor_40_e5_v8__0l;
        local_20 = this;
        _dispatch_async(puVar2, &local_40);
    }

    // 0x1003a4320, 32 bytes, placed by class name and neighbouring functions
    // OpenGLView::HasFocus()
    void OpenGLView::HasFocus() {
        (&field_168)->operator_cast_to_bool();
    }

    // 0x1003a4350, 112 bytes, placed by class name and neighbouring functions
    // OpenGLView::GetNativeFullscreenResolution()
    undefined8 OpenGLView::GetNativeFullscreenResolution() {
        scoped_lock<std::mutex> local_28[8];
        undefined8 local_20;
        int local_18[2];

        std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)&field_312);
        if ((field_304 == 0) && (field_308 == 0)) {
            local_18[0] = 0;
            local_18[1] = 0;
            std::pair<int, int>::pair<int, int, false>((pair<int, int>*)&local_20, local_18, local_18 + 1);
        } else {
            local_20._0_4_ = field_304;
            local_20._4_4_ = field_308;
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_28);
        return local_20;
    }

    // 0x1003a4430, 16 bytes, placed by class name and neighbouring functions
    // OpenGLView::IsFullScreen() const
    void OpenGLView::IsFullScreen() {
        field_8->IsFullScreen();
    }

    // 0x1003a4440, 32 bytes, placed by class name and neighbouring functions
    // OpenGLView::SetFullScreen(bool)
    undefined1 OpenGLView::SetFullScreen(bool param_1) {
        (field_8, param_1)->SetFullScreen();
        return 1;
    }

} // namespace jag
