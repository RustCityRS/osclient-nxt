// libs/hal/render/context/RenderContextState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "RenderContextState.h"

namespace jag::render {
    // 0x100f4e368, 24 bytes, __thread_vars
    ActiveTextureSaveRestore::m_nestedCounter = {0, 0, 0, 0, 1552, 0};

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    RenderContextState::~RenderContextState();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    RenderContextState::~RenderContextState();

    // 0x10004af40: the linker folded this into std::__function::__func<std::__bind<void (oldscape::Client::*)(), oldscape::Client*&>, std::allocator<std::__bind<void (oldscape::Client::*)(), oldscape::Client*&> >, void (oldscape::ClientWindowMode)>::~__func(), which has identical code
    RenderContextState::~RenderContextState();

    // 0x100c25ae0, 80 bytes, base-object constructor, placed by debug map only (low confidence)
    // ViewportsSaveRestore::ViewportsSaveRestore(RenderContext&)
    void ViewportsSaveRestore::ViewportsSaveRestore(RenderContext* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        long lVar6;

        new (this) RenderContextState(param_1);
        field_0 = &PTR__ViewportsSaveRestore_100f29070;
        lVar6 = param_1->GetCurrentState();
        uVar1 = *(undefined8*)(lVar6 + 16);
        uVar2 = *(undefined8*)(lVar6 + 24);
        uVar3 = *(undefined8*)(lVar6 + 32);
        uVar4 = *(undefined8*)(lVar6 + 40);
        uVar5 = *(undefined8*)(lVar6 + 48);
        field_16 = *(undefined8*)(lVar6 + 8);
        field_24 = uVar1;
        field_32 = uVar2;
        field_40 = uVar3;
        field_48 = uVar4;
        field_56 = uVar5;
    }

    // 0x100c25ee0, 176 bytes, base-object constructor, placed by __FILE__ string
    // ActiveTextureSaveRestore::ActiveTextureSaveRestore(ImmediateRenderContext&)
    void ActiveTextureSaveRestore::ActiveTextureSaveRestore(ImmediateRenderContext* param_1) {
        char cVar1;
        RenderDevice* this_00;
        int* piVar2;

        field_0 = &PTR__ActiveTextureSaveRestore_100f290f0;
        field_8 = param_1;
        cVar1 = param_1->IsContextThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("renderContext.IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContextState.cpp",
                      82, (char*)0);
        }
        this_00 = (RenderDevice*)param_1->Instance();
        cVar1 = this_00->IsRenderThread();
        piVar2 = (int*)(*(code*)m_nestedCounter)();
        if ((cVar1 != '\0') && (*piVar2 < 1)) {
            cVar1 = param_1->IsInvalidTextureBound();
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("!RenderDevice::Instance().IsRenderThread() || m_nestedCounter > 0 || "
                          "renderContext.IsInvalidTextureBound()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContextState.cpp",
                          83, (char*)0);
            }
        }
        param_1->SetActiveTextureSlot(0);
        piVar2 = (int*)(*(code*)m_nestedCounter)();
        *piVar2 = *piVar2 + 1;
    }

    // 0x100c26080, 160 bytes, base-object destructor, placed by __FILE__ string
    // ActiveTextureSaveRestore::~ActiveTextureSaveRestore()
    void ActiveTextureSaveRestore::~ActiveTextureSaveRestore() {
        char cVar1;
        int* piVar2;
        RenderDevice* this_00;
        undefined** this_01;

        field_0 = &PTR__ActiveTextureSaveRestore_100f290f0;
        cVar1 = field_8->IsContextThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_renderContext.IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContextState.cpp",
                      91, (char*)0);
        }
        this_01 = &m_nestedCounter;
        piVar2 = (int*)(*(code*)m_nestedCounter)();
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
            this_00 = (RenderDevice*)this_01->Instance();
            cVar1 = this_00->IsRenderThread();
            if (cVar1 != '\0') {
                field_8->BindInvalidTexture();
            }
        }
        piVar2 = (int*)(*(code*)m_nestedCounter)();
        if (*piVar2 < 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_nestedCounter >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContextState.cpp",
                      97, (char*)0);
        }
    }

} // namespace jag::render
