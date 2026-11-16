// libs/hal/render/context/OGL/ImmediateRenderContextDec_OGL_CGL.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.windowing

@interface OpenGLViewBacking : NSObject
- (id)canBecomeKeyWindow;
- (id)canBecomeMainWindow;
- (id)acceptsFirstResponder;
- (id)isOpaque;
- (id)resetCursorRects;
@end

@implementation OpenGLViewBacking

// 0x1003a28a0, 16 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking canBecomeKeyWindow]
/* Function Stack Size: 16 bytes */

char OpenGLViewBacking::canBecomeKeyWindow(ID param_1, SEL param_2) {
    return '\x01';
}

// 0x1003a28b0, 16 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking canBecomeMainWindow]
/* Function Stack Size: 16 bytes */

char OpenGLViewBacking::canBecomeMainWindow(ID param_1, SEL param_2) {
    return '\x01';
}

// 0x1003a28c0, 16 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking acceptsFirstResponder]
/* Function Stack Size: 16 bytes */

char OpenGLViewBacking::acceptsFirstResponder(ID param_1, SEL param_2) {
    return '\x01';
}

// 0x1003a28d0, 16 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking isOpaque]
/* Function Stack Size: 16 bytes */

char OpenGLViewBacking::isOpaque(ID param_1, SEL param_2) {
    return '\x01';
}

// 0x1003a28e0, 368 bytes, placed by debug map only (low confidence)
// -[OpenGLViewBacking resetCursorRects]
/* Function Stack Size: 16 bytes */

void OpenGLViewBacking::resetCursorRects(ID param_1, SEL param_2) {
    long lVar1;
    mutex* pmVar2;
    undefined8 uVar3;
    long lVar4;
    ID IVar5;
    undefined8* puVar6;
    undefined8 uVar7;
    undefined local_68[32];
    ID local_48;
    class_t* local_40;
    scoped_lock<std::mutex> local_38[8];

    lVar1 = m_JagOpenGLView;
    pmVar2 = (mutex*)(*(OpenGLView**)(param_1 + m_JagOpenGLView))->GetCursorMutex();
    std::scoped_lock<std::mutex>::scoped_lock(local_38, pmVar2);
    local_40 = &objc::class_t::OpenGLViewBacking;
    local_48 = param_1;
    NSView::resetCursorRects((ID)&local_48, "resetCursorRects");
    uVar3 = (*(OpenGLView**)(param_1 + lVar1))->GetCursorImage();
    lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code*)PTR__objc_release_100ee9e60)(lVar4);
    if (lVar4 != 0) {
        IVar5 = NSCursor::alloc((ID)&_OBJC_CLASS___NSCursor, "alloc");
        uVar3 = (*(OpenGLView**)(param_1 + lVar1))->GetCursorImage();
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        puVar6 = (undefined8*)(*(Logger**)(param_1 + lVar1))->GetLogStreams();
        uVar7 =
            (*(code*)PTR__objc_msgSend_100ee9e50)((int)*puVar6, (int)puVar6[1], IVar5, "initWithImage:hotSpot:", uVar3);
        (*(code*)PTR__objc_release_100ee9e60)(uVar3);
        _objc_msgSend_stret(local_68, param_1, "bounds");
        (*(code*)PTR__objc_msgSend_100ee9e50)(param_1, "addCursorRect:cursor:", uVar7);
        (*(code*)PTR__objc_msgSend_100ee9e50)(uVar7, "set");
        (*(code*)PTR__objc_release_100ee9e60)(uVar7);
    }
    std::scoped_lock<std::mutex>::~scoped_lock(local_38);
}

@end
