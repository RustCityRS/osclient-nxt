// libs/hal/windowing/osx/OpenGLViewBacking_OSX.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.windowing

@interface OpenGLViewBacking : NSObject
- (id)initWithFrame:(id)arg1 withOpenGLView:(id)arg2;
- (id)update;
@end

@implementation OpenGLViewBacking

// 0x1003a25f0
ID OpenGLViewBacking::initWithFrame_withOpenGLView_(ID param_1, SEL param_2, CGRect param_3, void* param_4) {
    if (param_4 == nullptr) {
        jag::LogAssert("openGLView",
                       "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/windowing/osx/"
                       "OpenGLViewBacking_OSX.cpp",
                       24, nullptr);
    }
    *(void**)(param_1 + m_JagOpenGLView) = param_4;
    *(uint8_t*)(param_1 + m_capsDown) = 0;
    *(uint8_t*)(param_1 + m_shiftDown) = 0;
    *(uint8_t*)(param_1 + m_controlDown) = 0;
    *(uint8_t*)(param_1 + m_altDown) = 0;
    *(uint8_t*)(param_1 + m_commandDown) = 0;
    class_t* local_20 = &objc::class_t::OpenGLViewBacking;
    ID local_28 = param_1;
    auto self = NSView::initWithFrame_((ID)&local_28, "initWithFrame:");
    if (self != 0) {
        NSView::setAutoresizingMask_(self, "setAutoresizingMask:", 18);
        NSView::setWantsBestResolutionOpenGLSurface_(self, "setWantsBestResolutionOpenGLSurface:", 0);
    }
    return self;
}

// 0x1003a26f0
void OpenGLViewBacking::update(ID param_1, SEL param_2) {
    NXTPixToolkit* nXTPixToolkit;
    uint64_t uVar4;
    uint64_t uVar5;
    ID IVar6;
    uint64_t uVar7;

    auto pRVar2 = param_1->InstancePtr();
    if (pRVar2 != nullptr) {
        pRVar2 = (RenderDevice*)param_1->Instance();
        if (pRVar2->GetPrimaryRenderContext() != 0) {
            pRVar2 = (RenderDevice*)pRVar2->Instance();
            nXTPixToolkit = (NXTPixToolkit*)pRVar2->GetPrimaryRenderContext();
            uVar4 = ((ImmediateRenderContext*)nXTPixToolkit->GetScreen())->GetOpenGLContext();
            uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
            uVar5 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar4, "view");
            IVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
            (*(void (*)(...))PTR__objc_release_100ee9e60)(IVar6);
            if (IVar6 == param_1) {
                uVar5 = _objc_retainAutorelease(uVar4);
                uVar7 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar5, "CGLContextObj");
                if (_CGLLockContext(uVar7) != 0) {
                    jag::LogAssert("error == kCGLNoError",
                                   "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                   "windowing/osx/OpenGLViewBacking_OSX.cpp",
                                   57, nullptr);
                }
                (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar5, "update");
                uVar5 = _objc_retainAutorelease(uVar5);
                uVar5 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar5, "CGLContextObj");
                _CGLUnlockContext(uVar5);
            }
            (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar4);
        }
    }
}

@end
