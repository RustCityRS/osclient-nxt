// libs/hal/windowing/osx/WindowDelegate_OSX.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.windowing

@interface WindowDelegate : NSObject
- (id)initWithWindow:(id)arg1 app:(id)arg2;
- (id)onMenuItemSelected:(id)arg1;
- (id)windowWillStartLiveResize:(id)arg1;
- (id)windowDidEndLiveResize:(id)arg1;
- (id)windowDidResize:(id)arg1;
- (id)windowWillResize:(id)arg1 toSize:(id)arg2;
- (id)windowDidMove:(id)arg1;
- (id)windowShouldClose:(id)arg1;
- (id)windowDidBecomeKey:(id)arg1;
- (id)windowDidResignKey:(id)arg1;
- (id)windowDidEnterFullScreen:(id)arg1;
- (id)windowDidExitFullScreen:(id)arg1;
- (id)windowWillEnterFullScreen:(id)arg1;
@end

@implementation WindowDelegate

// 0x1003a4550
ID WindowDelegate::initWithWindow_app_(ID param_1, SEL param_2, void* param_3, void* param_4) {
    class_t* local_28 = &objc::class_t::WindowDelegate;
    ID local_30 = param_1;
    auto IVar1 = NSObject::init((ID)&local_30, "init");
    if (IVar1 == 0) {
        jag::LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/windowing/osx/"
                             "WindowDelegate_OSX.cpp",
                             19, nullptr);
    }
    *(void**)(IVar1 + 16) = param_3;
    *(void**)(IVar1 + 8) = param_4;
    return IVar1;
}

// 0x1003a45c0
void WindowDelegate::onMenuItemSelected_(ID param_1, SEL param_2, ID param_3) {
    (*(Window**)(param_1 + 16))->OnMenuItemSelected(param_3);
}

// 0x1003a4630
void WindowDelegate::windowWillStartLiveResize_(ID param_1, SEL param_2, ID param_3) {
    (*(Window**)(param_1 + 16))->SetLiveResizing(true);
}

// 0x1003a4660
void WindowDelegate::windowDidEndLiveResize_(ID param_1, SEL param_2, ID param_3) {
    (*(Window**)(param_1 + 16))->SetLiveResizing(false);
}

// 0x1003a4680
void WindowDelegate::windowDidResize_(ID param_1, SEL param_2, ID param_3) {
    (*(Window**)(param_1 + 16))->OnSize();
}

// 0x1003a47d0
CGSize __thiscall WindowDelegate::windowWillResize_toSize_(WindowDelegate* this, ID param_1, SEL param_2, ID param_3,
                                                           CGSize param_4) {
    CGSize CVar1;
    uint64_t local_88;
    uint64_t uStack_80;
    double local_78;
    double dStack_70;
    uint64_t local_68;
    uint64_t uStack_60;
    double local_58;
    double dStack_50;
    uint64_t local_48;
    uint64_t uStack_40;

    double local_28 = param_4.field_8;
    double local_20 = param_4.field_0;
    ID self = (*(void (*)(...))PTR__objc_retain_100ee9e68)(param_2);
    if (self == 0) {
        local_48 = 0;
        uStack_40 = 0;
    } else {
        _objc_msgSend_stret((uint8_t*)&local_48, self, "frame");
    }
    double local_38 = local_20;
    double dStack_30 = local_28;
    if (self == 0) {
        local_58 = 0.0;
        dStack_50 = 0.0;
        local_68 = 0;
        uStack_60 = 0;
    } else {
        _objc_msgSend_stret((uint8_t*)&local_68, self, "contentRectForFrameRect:");
    }
    long lVar2 = (*(Component**)(this + 16))->GetDragConfig();
    if (local_58 < (double)*(int*)(lVar2 + 64)) {
        lVar2 = (*(Component**)(this + 16))->GetDragConfig();
        local_58 = (double)*(int*)(lVar2 + 64);
    }
    lVar2 = (*(Component**)(this + 16))->GetDragConfig();
    if (dStack_50 < (double)*(int*)(lVar2 + 68)) {
        lVar2 = (*(Component**)(this + 16))->GetDragConfig();
        dStack_50 = (double)*(int*)(lVar2 + 68);
    }
    if (self == 0) {
        local_78 = 0.0;
        dStack_70 = 0.0;
        local_88 = 0;
        uStack_80 = 0;
    } else {
        _objc_msgSend_stret((uint8_t*)&local_88, self, "frameRectForContentRect:");
    }
    local_38 = local_78;
    dStack_30 = dStack_70;
    local_28 = local_78;
    local_20 = dStack_70;
    (*(void (*)(...))PTR__objc_release_100ee9e60)(self);
    CVar1.field_8 = local_20;
    CVar1.field_0 = local_28;
    return CVar1;
}

// 0x1003a4980
void WindowDelegate::windowDidMove_(ID param_1, SEL param_2, ID param_3) {
    (*(Window**)(param_1 + 16))->OnMove();
}

// 0x1003a4a40
char WindowDelegate::windowShouldClose_(ID param_1, SEL param_2, ID param_3) {
    return (*(Window**)(param_1 + 16))->OnClose();
}

// 0x1003a4b10
void WindowDelegate::windowDidBecomeKey_(ID param_1, SEL param_2, ID param_3) {
    (*(Window**)(param_1 + 16))->OnFocus(true);
}

// 0x1003a4b70
void WindowDelegate::windowDidResignKey_(ID param_1, SEL param_2, ID param_3) {
    (*(Window**)(param_1 + 16))->OnFocus(false);
    Input* input = (Input*)(**(void (**)(...))(**(long**)(param_1 + 8) + 88))();
    if (input != nullptr) {
        jag::input::InputState::OnKillFocus(input);
    }
}

// 0x1003a4bb0
void WindowDelegate::windowDidEnterFullScreen_(ID param_1, SEL param_2, ID param_3) {
    (*(Window**)(param_1 + 16))->SetIsFullScreenFlag_OSX(true);
    Input* input = (Input*)(**(void (**)(...))(**(long**)(param_1 + 8) + 88))();
    if (input != nullptr) {
        jag::input::InputState::OnKillFocus(input);
    }
}

// 0x1003a4c70
void WindowDelegate::windowDidExitFullScreen_(ID param_1, SEL param_2, ID param_3) {
    (*(Window**)(param_1 + 16))->SetIsFullScreenFlag_OSX(false);
    (*(Window**)(param_1 + 16))->RestoreWindow();
    Input* input = (Input*)(**(void (**)(...))(**(long**)(param_1 + 8) + 88))();
    if (input != nullptr) {
        jag::input::InputState::OnKillFocus(input);
    }
}

// 0x1003a4d00
void WindowDelegate::windowWillEnterFullScreen_(ID param_1, SEL param_2, ID param_3) {
    (*(Window**)(param_1 + 16))->UpdateRestoreRect();
}

@end
