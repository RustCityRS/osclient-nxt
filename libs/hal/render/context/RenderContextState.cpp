// libs/hal/render/context/RenderContextState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "RenderContextState.h"

namespace jag::render {
    // 0x100f4e368
    int32_t ActiveTextureSaveRestore::m_nestedCounter[6] = {0, 0, 0, 0, 1552, 0};

    // 0x100009e70: RenderContextState::~RenderContextState() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100c25ae0
    ViewportsSaveRestore::ViewportsSaveRestore(RenderContext& renderContext) : RenderContextState(renderContext) {
        long lVar6 = renderContext.GetCurrentState();
        uint64_t uVar1 = *(uint64_t*)(lVar6 + 16);
        uint64_t uVar2 = *(uint64_t*)(lVar6 + 24);
        uint64_t uVar3 = *(uint64_t*)(lVar6 + 32);
        uint64_t uVar4 = *(uint64_t*)(lVar6 + 40);
        uint64_t uVar5 = *(uint64_t*)(lVar6 + 48);
        field_16 = *(uint64_t*)(lVar6 + 8);
        field_24 = uVar1;
        field_32 = uVar2;
        field_40 = uVar3;
        field_48 = uVar4;
        field_56 = uVar5;
    }

    // 0x100c25ee0
    ActiveTextureSaveRestore::ActiveTextureSaveRestore(ImmediateRenderContext& immediateRenderContext)
        : field_8(immediateRenderContext) {
        bool cVar1 = immediateRenderContext.IsContextThread();
        if (!cVar1) {
            LogAssert("renderContext.IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContextState.cpp",
                      82, nullptr);
        }
        cVar1 = ((RenderDevice*)immediateRenderContext.Instance())->IsRenderThread();
        int* piVar2 = (int*)(*(void (*)(...))m_nestedCounter)();
        if ((cVar1) && (*piVar2 < 1)) {
            cVar1 = immediateRenderContext.IsInvalidTextureBound();
            if (!cVar1) {
                LogAssert("!RenderDevice::Instance().IsRenderThread() || m_nestedCounter > 0 || "
                          "renderContext.IsInvalidTextureBound()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                          "RenderContextState.cpp",
                          83, nullptr);
            }
        }
        immediateRenderContext.SetActiveTextureSlot(0);
        piVar2 = (int*)(*(void (*)(...))m_nestedCounter)();
        *piVar2 = *piVar2 + 1;
    }

    // 0x100c26080
    ActiveTextureSaveRestore::~ActiveTextureSaveRestore() {
        if (!(field_8->IsContextThread())) {
            LogAssert("m_renderContext.IsContextThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContextState.cpp",
                      91, nullptr);
        }
        uint8_t** this_01 = &m_nestedCounter;
        int* piVar2 = (int*)(*(void (*)(...))m_nestedCounter)();
        *piVar2 = *piVar2 - 1;
        if (*piVar2 == 0) {
            if (((RenderDevice*)this_01->Instance())->IsRenderThread()) {
                field_8->BindInvalidTexture();
            }
        }
        piVar2 = (int*)(*(void (*)(...))m_nestedCounter)();
        if (*piVar2 < 0) {
            LogAssert("m_nestedCounter >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/context/"
                      "RenderContextState.cpp",
                      97, nullptr);
        }
    }

} // namespace jag::render
