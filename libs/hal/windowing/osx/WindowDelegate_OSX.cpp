// libs/hal/windowing/osx/WindowDelegate_OSX.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
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

// 0x1003a4550, 112 bytes, placed by class name and debug map
// -[WindowDelegate initWithWindow:app:]
/* Function Stack Size: 32 bytes */

ID WindowDelegate::initWithWindow_app_(ID param_1, SEL param_2, void* param_3, void* param_4) {
    ID IVar1;
    ID local_30;
    class_t* local_28;

    local_28 = &objc::class_t::WindowDelegate;
    local_30 = param_1;
    IVar1 = NSObject::init((ID)&local_30, "init");
    if (IVar1 == 0) {
        /* WARNING: Subroutine does not return */
        jag::LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/windowing/osx/"
                             "WindowDelegate_OSX.cpp",
                             19, (char*)0);
    }
    *(void**)(IVar1 + 16) = param_3;
    *(void**)(IVar1 + 8) = param_4;
    return IVar1;
}

// 0x1003a45c0, 32 bytes, placed by class name and debug map
// -[WindowDelegate onMenuItemSelected:]
/* Function Stack Size: 24 bytes */

void WindowDelegate::onMenuItemSelected_(ID param_1, SEL param_2, ID param_3) {
    (*(Window**)(param_1 + 16))->OnMenuItemSelected(param_3);
}

// 0x1003a4630, 32 bytes, placed by class name and debug map
// -[WindowDelegate windowWillStartLiveResize:]
/* Function Stack Size: 24 bytes */

void WindowDelegate::windowWillStartLiveResize_(ID param_1, SEL param_2, ID param_3) {
    (*(Window**)(param_1 + 16))->SetLiveResizing(true);
}

// 0x1003a4660, 32 bytes, placed by class name and debug map
// -[WindowDelegate windowDidEndLiveResize:]
/* Function Stack Size: 24 bytes */

void WindowDelegate::windowDidEndLiveResize_(ID param_1, SEL param_2, ID param_3) {
    (*(Window**)(param_1 + 16))->SetLiveResizing(false);
}

// 0x1003a4680, 16 bytes, placed by class name and debug map
// -[WindowDelegate windowDidResize:]
/* Function Stack Size: 24 bytes */

void WindowDelegate::windowDidResize_(ID param_1, SEL param_2, ID param_3) {
    (*(Window**)(param_1 + 16))->OnSize();
}

// 0x1003a47d0, 416 bytes, placed by class name and debug map
// -[WindowDelegate windowWillResize:toSize:]
/* Function Stack Size: 40 bytes */

CGSize WindowDelegate::windowWillResize_toSize_(ID param_1, SEL param_2, ID param_3, CGSize param_4) {
    CGSize CVar1;
    ID self;
    long lVar2;
    undefined8 local_88;
    undefined8 uStack_80;
    double local_78;
    double dStack_70;
    undefined8 local_68;
    undefined8 uStack_60;
    double local_58;
    double dStack_50;
    undefined8 local_48;
    undefined8 uStack_40;
    double local_38;
    double dStack_30;
    double local_28;
    double local_20;

    local_28 = param_4.field_8;
    local_20 = param_4.field_0;
    self = (*(code*)PTR__objc_retain_100ee9e68)(param_2);
    if (self == 0) {
        local_48 = 0;
        uStack_40 = 0;
    } else {
        _objc_msgSend_stret((undefined*)&local_48, self, "frame");
    }
    local_38 = local_20;
    dStack_30 = local_28;
    if (self == 0) {
        local_58 = 0.0;
        dStack_50 = 0.0;
        local_68 = 0;
        uStack_60 = 0;
    } else {
        _objc_msgSend_stret((undefined*)&local_68, self, "contentRectForFrameRect:");
    }
    lVar2 = (*(Component**)(this + 16))->GetDragConfig();
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
        _objc_msgSend_stret((undefined*)&local_88, self, "frameRectForContentRect:");
    }
    local_38 = local_78;
    dStack_30 = dStack_70;
    local_28 = local_78;
    local_20 = dStack_70;
    (*(code*)PTR__objc_release_100ee9e60)(self);
    CVar1.field_8 = local_20;
    CVar1.field_0 = local_28;
    return CVar1;
}

// 0x1003a4980, 16 bytes, placed by class name and debug map
// -[WindowDelegate windowDidMove:]
/* Function Stack Size: 24 bytes */

void WindowDelegate::windowDidMove_(ID param_1, SEL param_2, ID param_3) {
    (*(Window**)(param_1 + 16))->OnMove();
}

// 0x1003a4a40, 32 bytes, placed by class name and debug map
// -[WindowDelegate windowShouldClose:]
/* Function Stack Size: 24 bytes */

char WindowDelegate::windowShouldClose_(ID param_1, SEL param_2, ID param_3) {
    return (*(Window**)(param_1 + 16))->OnClose();
}

// 0x1003a4b10, 32 bytes, placed by class name and debug map
// -[WindowDelegate windowDidBecomeKey:]
/* Function Stack Size: 24 bytes */

void WindowDelegate::windowDidBecomeKey_(ID param_1, SEL param_2, ID param_3) {
    (*(Window**)(param_1 + 16))->OnFocus(true);
}

// 0x1003a4b70, 64 bytes, placed by class name and debug map
// -[WindowDelegate windowDidResignKey:]
/* Function Stack Size: 24 bytes */

void WindowDelegate::windowDidResignKey_(ID param_1, SEL param_2, ID param_3) {
    Input* pIVar1;

    (*(Window**)(param_1 + 16))->OnFocus(false);
    pIVar1 = (Input*)(**(code**)(**(long**)(param_1 + 8) + 88))();
    if (pIVar1 != (Input*)0) {
        jag::input::InputState::OnKillFocus(pIVar1);
    }
}

// 0x1003a4bb0, 64 bytes, placed by class name and debug map
// -[WindowDelegate windowDidEnterFullScreen:]
/* Function Stack Size: 24 bytes */

void WindowDelegate::windowDidEnterFullScreen_(ID param_1, SEL param_2, ID param_3) {
    Input* pIVar1;

    (*(Window**)(param_1 + 16))->SetIsFullScreenFlag_OSX(true);
    pIVar1 = (Input*)(**(code**)(**(long**)(param_1 + 8) + 88))();
    if (pIVar1 != (Input*)0) {
        jag::input::InputState::OnKillFocus(pIVar1);
    }
}

// 0x1003a4c70, 64 bytes, placed by class name and debug map
// -[WindowDelegate windowDidExitFullScreen:]
/* Function Stack Size: 24 bytes */

void WindowDelegate::windowDidExitFullScreen_(ID param_1, SEL param_2, ID param_3) {
    Input* pIVar1;

    (*(Window**)(param_1 + 16))->SetIsFullScreenFlag_OSX(false);
    (*(Window**)(param_1 + 16))->RestoreWindow();
    pIVar1 = (Input*)(**(code**)(**(long**)(param_1 + 8) + 88))();
    if (pIVar1 != (Input*)0) {
        jag::input::InputState::OnKillFocus(pIVar1);
    }
}

// 0x1003a4d00, 16 bytes, placed by class name and debug map
// -[WindowDelegate windowWillEnterFullScreen:]
/* Function Stack Size: 24 bytes */

void WindowDelegate::windowWillEnterFullScreen_(ID param_1, SEL param_2, ID param_3) {
    (*(Window**)(param_1 + 16))->UpdateRestoreRect();
}

@end
