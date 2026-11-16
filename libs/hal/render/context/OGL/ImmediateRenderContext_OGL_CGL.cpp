// libs/hal/render/context/OGL/ImmediateRenderContext_OGL_CGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "libs/hal/render/context/ImmediateRenderContext.h"

namespace jag::render {
    // 0x100c156c0, 608 bytes, placed by class name and debug map
    // ImmediateRenderContext::BackendInit(RenderContextDesc const&)
    undefined8 ImmediateRenderContext::BackendInit(RenderContextDesc* param_1) {
        undefined* puVar1;
        int iVar2;
        ID IVar3;
        Singleton<RenderDevice>* pSVar4;
        RenderDevice* this_00;
        RenderContext* this_01;
        undefined8 uVar5;
        ID IVar6;
        Singleton<RenderDevice>* this_02;
        char* this_03;
        undefined* local_98;
        undefined8 local_90;
        code* local_88;
        undefined* local_80;
        ImmediateRenderContext* local_78;
        RenderContextDesc* local_70;
        undefined4 local_68;
        undefined4 uStack_64;
        undefined4 uStack_60;
        undefined4 uStack_5c;
        uint local_58;
        undefined4 local_54;
        uint local_50;
        undefined4 local_4c;
        uint local_48;
        undefined8 local_44;
        undefined4 local_3c;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_68 = 73;
        uStack_64 = 72;
        uStack_60 = 5;
        uStack_5c = 8;
        local_58 = (uint) * (byte*)&param_1->field_4;
        local_54 = 12;
        local_50 = (uint) * (byte*)((long)&param_1->field_4 + 1);
        local_4c = 13;
        local_48 = (uint) * (byte*)((long)&param_1->field_4 + 2);
        local_44 = 54975581388899;
        local_3c = 0;
        IVar3 = NSOpenGLPixelFormat::alloc((ID)&_OBJC_CLASS___NSOpenGLPixelFormat, "alloc");
        pSVar4 =
            (Singleton<RenderDevice>*)NSOpenGLPixelFormat::initWithAttributes_(IVar3, "initWithAttributes:", &local_68);
        this_02 = field_3160;
        field_3160 = pSVar4;
        (*(code*)PTR__objc_release_100ee9e60)();
        if (*(char*)((long)&param_1->field_8 + 2) == '\0') {
            uVar5 = 0;
        } else {
            this_00 = (RenderDevice*)this_02->Instance();
            this_01 = (RenderContext*)this_00->GetPrimaryRenderContext();
            if (this_01 == (RenderContext*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert("renderContext",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL_CGL.cpp",
                          63, (char*)0);
            }
            uVar5 = this_01->GetOpenGLContext();
            uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        }
        IVar3 = NSOpenGLContext::alloc((ID)&_OBJC_CLASS___NSOpenGLContext, "alloc");
        IVar6 = NSOpenGLContext::initWithFormat_shareContext_(IVar3, "initWithFormat:shareContext:", field_3160);
        IVar3 = field_3152;
        field_3152 = IVar6;
        (*(code*)PTR__objc_release_100ee9e60)(IVar3);
        if (field_3152 == 0) {
            this_03 = "m_nsContext != nullptr";
            LogFatalError("m_nsContext != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "OGL/ImmediateRenderContext_OGL_CGL.cpp",
                          69, 0, "Failed to init CGL context");
        LAB_100c158d4:
            /* WARNING: Subroutine does not return */
            this_03->~OptionStore();
        }
        (*(code*)PTR__objc_msgSend_100ee9e50)(field_3152, "makeCurrentContext");
        if (*(char*)((long)&param_1->field_8 + 2) == '\0') {
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
            local_70 = param_1;
            _dispatch_sync(puVar1, &local_98);
        }
        (*(code*)PTR__objc_release_100ee9e60)(uVar5);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return CONCAT71((int7)((ulong) * (long*)PTR____stack_chk_guard_100ee9d98 >> 8), 1);
    }

    // 0x100c24d00, 32 bytes, placed by __FILE__ string
    // ImmediateRenderContext::SetView(shared_ptr<OpenGLView> const&)
    void ImmediateRenderContext::SetView(shared_ptr* param_1) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/OGL/"
                        "ImmediateRenderContext_OGL_CGL.cpp",
                        124, (char*)0);
    }

} // namespace jag::render
