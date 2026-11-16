// libs/hal/windowing/osx/OpenGLView_OSX.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.windowing

#include "libs/hal/windowing/OpenGLView.h"

namespace jag {
    // 0x1003a3990
    OpenGLView::OpenGLView(float arg1, float arg2, float arg3, float arg4, Window* window, input::Input* input)
        : field_8(window), m_inputHAL(input) {
        int local_30[2];

        *(uint64_t*)&field_24 = 4575657221408423936;
        m_fullScreenResolution = 0;
        field_36 = 0;
        field_40 = 0;
        field_44 = 0;
        field_48 = 0;
        new (&field_72) Array<unsigned char>();
        new (&field_96) std::mutex();
        field_160 = 0;
        new (&field_168) std::atomic<bool>(true);
        new (&field_240) std::mutex();
        local_30[0] = 0;
        local_30[1] = 0;
        field_304.pair<int, int, false>(*local_30, *(local_30 + 1));
        new (&field_312) std::mutex();
        uint8_t* puVar1 = PTR___dispatch_main_q_100ee9db8;
        _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
        uint8_t* local_68 = PTR___NSConcreteStackBlock_100ee4038;
        uint64_t local_60 = 3221225472;
        void* local_58 = ____ZN3jag10OpenGLViewC2EffffPNS_6WindowEPNS_5input5InputE_block_invoke;
        uint8_t* local_50 = &___block_descriptor_56_e5_v8__0l;
        float local_38 = arg1;
        float local_34 = arg2;
        OpenGLView* local_48 = this;
        Window* local_40 = window;
        _dispatch_sync(puVar1, &local_68);
    }

    // 0x1003a3c30
    void OpenGLView::OnSize() {
        uint32_t uVar2;
        uint32_t uVar3;
        uint32_t uVar4;
        uint32_t uVar5;
        uint32_t uVar6;
        uint32_t uVar7;
        uint32_t uVar8;
        uint32_t uVar9;
        uint64_t local_38;
        uint64_t uStack_30;
        uint64_t local_28;
        uint64_t uStack_20;

        scoped_lock<std::mutex> local_18(field_240);
        if (field_160 == 0) {
            local_28 = 0;
            uStack_20 = 0;
            local_38 = 0;
            uStack_30 = 0;
        } else {
            _objc_msgSend_stret((uint8_t*)&local_38, field_160, "frame");
        }
        field_192 = (uint32_t)local_28;
        field_196 = local_28._4_4_;
        field_200 = (uint32_t)uStack_20;
        field_204 = uStack_20._4_4_;
        field_176 = (uint32_t)local_38;
        field_180 = local_38._4_4_;
        field_184 = (uint32_t)uStack_30;
        field_188 = uStack_30._4_4_;
        if ((*(void (*)(...))PTR__objc_msgSend_100ee9e50)(field_160, "wantsBestResolutionOpenGLSurface") == '\0') {
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
                _objc_msgSend_stret((uint8_t*)&local_38, field_160, "convertRectToBacking:");
            }
            uVar2 = (uint32_t)local_38;
            uVar3 = local_38._4_4_;
            uVar4 = (uint32_t)uStack_30;
            uVar5 = uStack_30._4_4_;
            uVar6 = (uint32_t)local_28;
            uVar7 = local_28._4_4_;
            uVar8 = (uint32_t)uStack_20;
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
        (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(field_160, "update");
    }

    // 0x1003a3d40
    void OpenGLView::OnMove() {
        pair<int, int> local_70;
        uint64_t local_68;
        uint64_t uStack_60;
        uint64_t local_58;
        uint64_t uStack_50;
        uint64_t local_48;
        uint64_t uStack_40;
        double local_38;
        double adStack_30[2];

        auto self = _objc_retainAutoreleasedReturnValue(field_8->GetCurrentScreen());
        if (self == 0) {
            local_58 = 0;
            uStack_50 = 0;
            local_68 = 0;
            uStack_60 = 0;
        } else {
            _objc_msgSend_stret((uint8_t*)&local_68, self, "frame");
        }
        (*(void (*)(...))PTR__objc_release_100ee9e60)(self);
        if (field_160 == 0) {
            local_38 = 0.0;
            adStack_30[0] = 0.0;
            local_48 = 0;
            uStack_40 = 0;
        } else {
            _objc_msgSend_stret((uint8_t*)&local_48, field_160, "convertRectToBacking:");
        }
        scoped_lock<std::mutex> local_78(field_312);
        local_70.pair<double&, double&, false>(local_38, *adStack_30);
        field_304 = local_70;
    }

    // 0x1003a3e40
    OpenGLView::~OpenGLView() {
        (&field_312)->~mutex();
        (&field_240)->~mutex();
        uint8_t* puVar1 = PTR__objc_release_100ee9e60;
        (*(void (*)(...))PTR__objc_release_100ee9e60)(field_160);
        (&field_96)->~mutex();
        field_72.~Array();
        (*(void (*)(...))puVar1)(field_48);
    }

    // 0x1003a3ee0
    void OpenGLView::StartUpdating() {}

    // 0x1003a3ef0
    void OpenGLView::StopUpdating() {}

    // 0x1003a3f00
    void OpenGLView::SetWindowEnabled(bool arg1) {}

    // 0x1003a3f10
    void OpenGLView::GetBackingSize(unsigned int& arg1, unsigned int& arg2) const {

        scoped_lock<std::mutex> local_30(field_240);
        arg1 = (unsigned int)(long)*(double*)&field_224;
        arg2 = (unsigned int)(long)*(double*)&field_232;
    }

    // 0x1003a3f70
    void OpenGLView::SetCursor(const RGBAImage& rgbaImage, unsigned int arg2, unsigned int arg3) {
        Array<unsigned char> local_60;

        unsigned int uVar2 = rgbaImage.GetX();
        unsigned int uVar3 = rgbaImage.GetZ();
        scoped_lock<std::mutex> local_40(field_96);
        auto arg1 = rgbaImage.GetDevCredentialsOutputDirectory();
        local_60.Array<BucketAllocatorEASTL>(*arg1);
        uint8_t* this_00 = &field_72;
        *this_00 = local_60;
        uint64_t uVar4 = this_00->data();
        uint64_t uVar5 = this_00->end();
        uVar4 = _CGDataProviderCreateWithData(0, uVar4, uVar5, 0);
        uVar5 = _CGColorSpaceCreateDeviceRGB();
        uint64_t local_48 = uVar4;
        uint64_t uVar6 = _CGImageCreate(uVar2, uVar3, 8, 32, uVar2 << 2, uVar5, 1, uVar4, 0, 1, 0);
        auto IVar7 = NSImage::alloc((ID)&_OBJC_CLASS___NSImage, "alloc");
        uint64_t uVar8 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)((double)uVar2, (double)uVar3, IVar7,
                                                                       "initWithCGImage:size:", uVar6);
        uVar4 = field_48;
        field_48 = uVar8;
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar4);
        m_cursorHotspot = (double)arg2;
        field_64 = (double)arg3;
        _CGImageRelease(uVar6);
        _CGDataProviderRelease(local_48);
        _CGColorSpaceRelease(uVar5);
        uint8_t* puVar1 = PTR___dispatch_main_q_100ee9db8;
        _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
        uint8_t* local_88 = PTR___NSConcreteStackBlock_100ee4038;
        uint64_t local_80 = 3221225472;
        void* local_78 = ____ZN3jag10OpenGLView9SetCursorERKNS_9RGBAImageEjj_block_invoke;
        uint8_t* local_70 = &___block_descriptor_40_e5_v8__0l;
        OpenGLView* local_68 = this;
        _dispatch_async(puVar1, &local_88);
    }

    // 0x1003a4220
    void OpenGLView::ResetCursor() {
        scoped_lock<std::mutex> local_48(field_96);
        uint64_t uVar1 = field_48;
        field_48 = 0;
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar1);
        uint8_t* puVar2 = PTR___dispatch_main_q_100ee9db8;
        _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
        uint8_t* local_40 = PTR___NSConcreteStackBlock_100ee4038;
        uint64_t local_38 = 3221225472;
        void* local_30 = ____ZN3jag10OpenGLView11ResetCursorEv_block_invoke;
        uint8_t* local_28 = &___block_descriptor_40_e5_v8__0l;
        OpenGLView* local_20 = this;
        _dispatch_async(puVar2, &local_40);
    }

    // 0x1003a4320
    void OpenGLView::HasFocus() {
        (&field_168)->operator_cast_to_bool();
    }

    // 0x1003a4350
    uint64_t OpenGLView::GetNativeFullscreenResolution() {
        uint64_t local_20;
        int local_18[2];

        scoped_lock<std::mutex> local_28(field_312);
        if ((field_304 == 0) && (field_308 == 0)) {
            local_18[0] = 0;
            local_18[1] = 0;
            local_20.pair<int, int, false>(*local_18, *(local_18 + 1));
        } else {
            local_20._0_4_ = field_304;
            local_20._4_4_ = field_308;
        }
        return local_20;
    }

    // 0x1003a4430
    void OpenGLView::IsFullScreen() const {
        field_8->IsFullScreen();
    }

    // 0x1003a4440
    uint8_t OpenGLView::SetFullScreen(bool arg1) {
        field_8->SetFullScreen(arg1);
        return 1;
    }

} // namespace jag
