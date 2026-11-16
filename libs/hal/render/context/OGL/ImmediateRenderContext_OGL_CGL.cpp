// libs/hal/render/context/OGL/ImmediateRenderContext_OGL_CGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "libs/hal/render/context/ImmediateRenderContext.h"

namespace jag::render {
    // 0x100c156c0
    uint64_t ImmediateRenderContext::BackendInit(const RenderContextDesc& renderContextDesc) {
        uint8_t* puVar1;
        int iVar2;
        RenderDevice* this_00;
        RenderContext* this_01;
        uint64_t uVar5;
        char* this_03;
        uint8_t* local_98;
        uint64_t local_90;
        void* local_88;
        uint8_t* local_80;
        ImmediateRenderContext* local_78;
        RenderContextDesc* local_70;

        uint32_t local_68 = 73;
        uint32_t uStack_64 = 72;
        uint32_t uStack_60 = 5;
        uint32_t uStack_5c = 8;
        unsigned int local_58 = (unsigned int)*(uint8_t*)&renderContextDesc.field_4;
        uint32_t local_54 = 12;
        unsigned int local_50 = (unsigned int)*(uint8_t*)((long)&renderContextDesc.field_4 + 1);
        uint32_t local_4c = 13;
        unsigned int local_48 = (unsigned int)*(uint8_t*)((long)&renderContextDesc.field_4 + 2);
        uint64_t local_44 = 54975581388899;
        uint32_t local_3c = 0;
        auto IVar3 = NSOpenGLPixelFormat::alloc((ID)&_OBJC_CLASS___NSOpenGLPixelFormat, "alloc");
        auto pSVar4 = NSOpenGLPixelFormat::initWithAttributes_(IVar3, "initWithAttributes:", &local_68);
        Singleton<RenderDevice>* this_02 = field_3160;
        field_3160 = pSVar4;
        (*(void (*)(...))PTR__objc_release_100ee9e60)();
        if (*(char*)((long)&renderContextDesc.field_8 + 2) == '\0') {
            uVar5 = 0;
        } else {
            this_00 = (RenderDevice*)this_02->Instance();
            this_01 = (RenderContext*)this_00->GetPrimaryRenderContext();
            if (this_01 == nullptr) {
                LogAssert("renderContext",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL_CGL.cpp",
                          63, nullptr);
            }
            uVar5 = this_01->GetOpenGLContext();
            uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        }
        IVar3 = NSOpenGLContext::alloc((ID)&_OBJC_CLASS___NSOpenGLContext, "alloc");
        auto IVar6 = NSOpenGLContext::initWithFormat_shareContext_(IVar3, "initWithFormat:shareContext:", field_3160);
        IVar3 = field_3152;
        field_3152 = IVar6;
        (*(void (*)(...))PTR__objc_release_100ee9e60)(IVar3);
        if (field_3152 == 0) {
            this_03 = "m_nsContext != nullptr";
            LogFatalError("m_nsContext != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL_CGL.cpp",
                          69, 0, "Failed to init CGL context");
        LAB_100c158d4:
            this_03->~OptionStore();
        }
        (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(field_3152, "makeCurrentContext");
        if (*(char*)((long)&renderContextDesc.field_8 + 2) == '\0') {
            _glewExperimental = 1;
            iVar2 = _glewInit();
            puVar1 = PTR___dispatch_main_q_100ee9db8;
            if (iVar2 != 0) {
                uVar5 = _glewGetErrorString(iVar2);
                this_03 = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL_CGL.cpp";
                LogFatalError("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "context/OGL/ImmediateRenderContext_OGL_CGL.cpp",
                              81, 0, "GLEW init error: %s", uVar5);
                goto LAB_100c158d4;
            }
            _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
            local_98 = PTR___NSConcreteStackBlock_100ee4038;
            local_90 = 3221225472;
            local_88 = ____ZN3jag6render22ImmediateRenderContext11BackendInitERKNS0_17RenderContextDescE_block_invoke;
            local_80 = &___block_descriptor_48_e5_v8__0l;
            local_78 = this;
            local_70 = renderContextDesc;
            _dispatch_sync(puVar1, &local_98);
        }
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar5);
        return 1;
    }

    // 0x100c24d00
    void ImmediateRenderContext::SetView(const shared_ptr<OpenGLView>& openGLView) {
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                        "ImmediateRenderContext_OGL_CGL.cpp",
                        124, nullptr);
    }

} // namespace jag::render
