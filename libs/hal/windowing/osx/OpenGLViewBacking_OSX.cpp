// libs/hal/windowing/osx/OpenGLViewBacking_OSX.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.windowing

@interface OpenGLViewBacking : NSObject
- (id)initWithFrame:(id)arg1 withOpenGLView:(id)arg2;
- (id)update;
@end

@implementation OpenGLViewBacking

// 0x1003a25f0, 256 bytes, placed by class name and debug map
// -[OpenGLViewBacking initWithFrame:withOpenGLView:]
/* Function Stack Size: 56 bytes */

ID OpenGLViewBacking::initWithFrame_withOpenGLView_(ID param_1, SEL param_2, CGRect param_3, void* param_4) {
    ID self;
    ID local_28;
    class_t* local_20;

    if (param_4 == (void*)0) {
        /* WARNING: Subroutine does not return */
        jag::LogAssert("openGLView",
                       "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/windowing/osx/"
                       "OpenGLViewBacking_OSX.cpp",
                       24, (char*)0);
    }
    *(void**)(param_1 + m_JagOpenGLView) = param_4;
    *(undefined1*)(param_1 + m_capsDown) = 0;
    *(undefined1*)(param_1 + m_shiftDown) = 0;
    *(undefined1*)(param_1 + m_controlDown) = 0;
    *(undefined1*)(param_1 + m_altDown) = 0;
    *(undefined1*)(param_1 + m_commandDown) = 0;
    local_20 = &objc::class_t::OpenGLViewBacking;
    local_28 = param_1;
    self = NSView::initWithFrame_((ID)&local_28, "initWithFrame:");
    if (self != 0) {
        NSView::setAutoresizingMask_(self, "setAutoresizingMask:", 18);
        NSView::setWantsBestResolutionOpenGLSurface_(self, "setWantsBestResolutionOpenGLSurface:", 0);
    }
    return self;
}

// 0x1003a26f0, 288 bytes, placed by class name and debug map
// -[OpenGLViewBacking update]
/* Function Stack Size: 16 bytes */

void OpenGLViewBacking::update(ID param_1, SEL param_2) {
    long lVar2;
    RenderDevice* pRVar3;
    NXTPixToolkit* this;
    ImmediateRenderContext* this_00;
    undefined8 uVar4;
    undefined8 uVar5;
    ID IVar6;
    undefined8 uVar7;

    lVar2 = jag::Singleton<jag::render::RenderDevice>::InstancePtr();
    if (lVar2 != 0) {
        pRVar3 = (RenderDevice*)param_1->Instance();
        lVar2 = pRVar3->GetPrimaryRenderContext();
        if (lVar2 != 0) {
            pRVar3 = (RenderDevice*)pRVar3->Instance();
            this = (NXTPixToolkit*)pRVar3->GetPrimaryRenderContext();
            this_00 = (ImmediateRenderContext*)GetScreen();
            uVar4 = this_00->GetOpenGLContext();
            uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
            uVar5 = (*(code*)PTR__objc_msgSend_100ee9e50)(uVar4, "view");
            IVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
            (*(code*)PTR__objc_release_100ee9e60)(IVar6);
            if (IVar6 == param_1) {
                uVar5 = _objc_retainAutorelease(uVar4);
                uVar7 = (*(code*)PTR__objc_msgSend_100ee9e50)(uVar5, "CGLContextObj");
                if (_CGLLockContext(uVar7) != 0) {
                    /* WARNING: Subroutine does not return */
                    jag::LogAssert("error == kCGLNoError",
                                   "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                   "windowing/osx/OpenGLViewBacking_OSX.cpp",
                                   57, (char*)0);
                }
                (*(code*)PTR__objc_msgSend_100ee9e50)(uVar5, "update");
                uVar5 = _objc_retainAutorelease(uVar5);
                uVar5 = (*(code*)PTR__objc_msgSend_100ee9e50)(uVar5, "CGLContextObj");
                _CGLUnlockContext(uVar5);
            }
            (*(code*)PTR__objc_release_100ee9e60)(uVar4);
        }
    }
}

@end
