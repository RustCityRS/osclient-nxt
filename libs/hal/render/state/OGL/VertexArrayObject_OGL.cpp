// libs/hal/render/state/OGL/VertexArrayObject_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "VertexArrayObject_OGL.h"
#include "VAOManager_OGL.h"

namespace jag::render {
    // 0x100bc7320, 208 bytes, placed by class name and debug map
    // VertexArrayObject::Create(ImmediateRenderContext&)
    void VertexArrayObject::Create(ImmediateRenderContext* param_1) {
        char cVar1;
        RenderDevice* this_00;

        this_00 = (RenderDevice*)Instance();
        cVar1 = this_00->IsRenderThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "VertexArrayObject_OGL.cpp",
                      17, (char*)0);
        }
        cVar1 = param_1->IsContextThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("immediateContext.IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "VertexArrayObject_OGL.cpp",
                      18, (char*)0);
        }
        (*___glewGenVertexArrays)(1, this);
        CheckGlErrorInternal("glGenVertexArrays",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                             "OGL/VertexArrayObject_OGL.cpp",
                             20);
        (*___glewBindVertexArray)(field_0);
        CheckGlErrorInternal("glBindVertexArray",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                             "OGL/VertexArrayObject_OGL.cpp",
                             23);
        Bind(this, param_1);
    }

    // 0x100bc73f0, 160 bytes, placed by debug map only (low confidence)
    // VAOManager::Get(InputAssemblerState const&)
    VAOManager* VAOManager::Get(InputAssemblerState* param_1) {
        shared_ptr* psVar1;
        InputAssemblerState* in_RDX;
        Key local_f0;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_f0) Key(in_RDX);
        psVar1 = (shared_ptr*)(&param_1->field_16, &local_f0)->FindResource();
        new (this) shared_ptr<oldscape::dash3d::Decor>(psVar1);
        local_f0.~Key();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x100bc7c80, 160 bytes, placed by debug map only (low confidence)
    // VAOManager::OnEndFrame()
    void VAOManager::OnEndFrame() {
        RenderDevice* this_00;
        __4 local_d0;
        function local_c8;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (RenderDevice*)Instance();
        local_d0.field_0 = this;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            VAOManager::OnEndFrame()::__4, void>(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, &local_d0);
        this_00->RunOnRenderThread(&local_c8);
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bc7f00, 208 bytes, placed by __FILE__ string
    // VertexArrayObject::Bind(ImmediateRenderContext&) const
    void VertexArrayObject::Bind(ImmediateRenderContext* param_1) {
        uint uVar1;
        char cVar2;
        RenderDevice* this_00;
        long lVar3;

        this_00 = (RenderDevice*)Instance();
        cVar2 = this_00->IsRenderThread();
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "VertexArrayObject_OGL.cpp",
                      63, (char*)0);
        }
        cVar2 = param_1->IsContextThread();
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("immediateContext.IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "VertexArrayObject_OGL.cpp",
                      64, (char*)0);
        }
        cVar2 = IsValid();
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "VertexArrayObject_OGL.cpp",
                      65, (char*)0);
        }
        field_4 = FrameTime::GetSecondsSinceProgramStart();
        lVar3 = param_1->GetStateCache();
        if (*(uint*)(lVar3 + 932) != field_0) {
            SafeGLBindVertexArray(field_0);
            uVar1 = field_0;
            lVar3 = param_1->GetStateCache();
            *(uint*)(lVar3 + 932) = uVar1;
        }
    }

    // 0x100bc7fd0, 16 bytes, base-object destructor, placed by neighbouring functions
    // VertexArrayObject::~VertexArrayObject()
    void VertexArrayObject::~VertexArrayObject() {
        Destroy(this);
    }

    // 0x100bc7fe0, 288 bytes, placed by __FILE__ string
    // VertexArrayObject::Destroy()
    void VertexArrayObject::Destroy() {
        char cVar1;
        undefined8 in_RAX;
        RenderDevice* pRVar2;
        RenderContext* this_00;
        ImmediateRenderContext* this_01;
        long lVar3;
        undefined8 uVar4;
        char* this_03;
        undefined4 uVar5;

        uVar5 = (undefined4)((ulong)in_RAX >> 32);
        cVar1 = IsValid();
        if (cVar1 != '\0') {
            pRVar2 = (RenderDevice*)((VertexArrayObject*)this)->Instance();
            cVar1 = pRVar2->IsRenderThread();
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("RenderDevice::Instance().IsRenderThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                          "VertexArrayObject_OGL.cpp",
                          39, (char*)0);
            }
            cVar1 = (*___glewIsVertexArray)(field_0);
            this_03 = "glIsVertexArray";
            CheckGlErrorInternal("glIsVertexArray",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "state/OGL/VertexArrayObject_OGL.cpp",
                                 40);
            if (cVar1 != '\0') {
                pRVar2 = (RenderDevice*)this_03->Instance();
                this_00 = (RenderContext*)pRVar2->GetCurrentThreadRenderContext();
                this_01 = (ImmediateRenderContext*)this_00->GetImmediateContext();
                lVar3 = this_01->GetStateCache();
                if ((*(uint*)(lVar3 + 932) == field_0) && (field_0 != 1)) {
                    uVar4 = logger::default_logger();
                    logger::Logger::Log(uVar4, 0, 3,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "render/state/OGL/VertexArrayObject_OGL.cpp",
                                        51, "Deleting VAO %u while bound!", CONCAT44(uVar5, field_0));
                    this_01->SetDefaultVAO();
                }
            }
            (*___glewDeleteVertexArrays)(1, this);
            CheckGlErrorInternal("glDeleteVertexArrays",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "state/OGL/VertexArrayObject_OGL.cpp",
                                 56);
            field_0 = 0;
        }
    }

} // namespace jag::render
