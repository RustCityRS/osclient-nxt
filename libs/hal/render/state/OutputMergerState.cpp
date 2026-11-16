// libs/hal/render/state/OutputMergerState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "OutputMergerState.h"

namespace jag::render {
    // 0x100009ca0: OutputMergerState::GetViewports() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100049810: OutputMergerState::GetScissorRects() const has the same machine code as oldscape::option::Option<oldscape::WindowSavedPosition>::GetDefaultValue() const

    // 0x1006211f0: OutputMergerState::GetClearFlags() const has the same machine code as game::Camera::GetLookatMode() const

    // 0x100bdf570
    void OutputMergerState::SetRenderTargets(const RenderTargets* renderTargets) {
        uint64_t in_RAX;
        Layout* this_00;
        long* plVar2;
        long* plVar3;
        unsigned int* arg3;

        if (renderTargets == nullptr) {
            LogAssert("pRenderTargets",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                      "OutputMergerState.cpp",
                      24, nullptr);
        }
        m_pRenderTargets = renderTargets;
        uint64_t local_38 = in_RAX;
        if (empty() != '\0') {
            this_00 = (Layout*)renderTargets->GetColourTargetTextures();
            plVar2 = (long*)this_00->HeapBeginPtr();
            plVar3 = (long*)this_00->end();
            if (plVar2 != plVar3) {
                do {
                    if (*plVar2 == 0) {
                        LogAssert("colourTarget != nullptr",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "state/OutputMergerState.cpp",
                                  33, nullptr);
                    }
                    arg3 = (unsigned int*)(*plVar2)->second();
                    local_38 = 0;
                    emplace_back<int, int, unsigned int const&, unsigned int const&>(
                        local_38, *((int*)((long)&local_38 + 4)), *arg3, *(arg3 + 1));
                    plVar2 = plVar2 + 1;
                } while (plVar2 != plVar3);
            }
        }
    }

    // 0x100bf5530
    void OutputMergerState::Clear() {
        clear();
        field_64.clear();
        m_pRenderTargets = nullptr;
        field_128.clear();
        m_clearFlags = 0;
        m_depthClear = 1.0;
        m_stencilClear = '\0';
    }

} // namespace jag::render
