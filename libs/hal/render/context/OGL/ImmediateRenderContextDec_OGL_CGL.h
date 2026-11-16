// libs/hal/render/context/OGL/ImmediateRenderContextDec_OGL_CGL.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

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

// 0x1003a28a0
char OpenGLViewBacking::canBecomeKeyWindow(ID param_1, SEL param_2) {
    return '\x01';
}

// 0x1003a28b0
char OpenGLViewBacking::canBecomeMainWindow(ID param_1, SEL param_2) {
    return '\x01';
}

// 0x1003a28c0
char OpenGLViewBacking::acceptsFirstResponder(ID param_1, SEL param_2) {
    return '\x01';
}

// 0x1003a28d0
char OpenGLViewBacking::isOpaque(ID param_1, SEL param_2) {
    return '\x01';
}

// 0x1003a28e0
void OpenGLViewBacking::resetCursorRects(ID param_1, SEL param_2) {
    mutex* mutex;
    ID IVar4;
    uint64_t* puVar5;
    uint64_t uVar6;
    uint8_t local_68[32];

    long lVar1 = m_JagOpenGLView;
    mutex = (mutex*)(*(OpenGLView**)(param_1 + m_JagOpenGLView))->GetCursorMutex();
    scoped_lock<std::mutex> local_38(*mutex);
    class_t* local_40 = &objc::class_t::OpenGLViewBacking;
    ID local_48 = param_1;
    NSView::resetCursorRects((ID)&local_48, "resetCursorRects");
    uint64_t uVar2 = (*(OpenGLView**)(param_1 + lVar1))->GetCursorImage();
    long lVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
    (*(void (*)(...))PTR__objc_release_100ee9e60)(lVar3);
    if (lVar3 != 0) {
        IVar4 = NSCursor::alloc((ID)&_OBJC_CLASS___NSCursor, "alloc");
        uVar2 = (*(OpenGLView**)(param_1 + lVar1))->GetCursorImage();
        uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
        puVar5 = (uint64_t*)(*(Logger**)(param_1 + lVar1))->GetLogStreams();
        uVar6 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)((int)*puVar5, (int)puVar5[1], IVar4,
                                                              "initWithImage:hotSpot:", uVar2);
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar2);
        _objc_msgSend_stret(local_68, param_1, "bounds");
        (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(param_1, "addCursorRect:cursor:", uVar6);
        (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar6, "set");
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar6);
    }
}

@end
