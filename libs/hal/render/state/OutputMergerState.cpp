// libs/hal/render/state/OutputMergerState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "OutputMergerState.h"

namespace jag::render {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    OutputMergerState::GetViewports() const;

    // 0x100049810: the linker folded this into oldscape::option::Option<oldscape::WindowSavedPosition>::GetDefaultValue() const, which has identical code
    OutputMergerState::GetScissorRects() const;

    // 0x1006211f0: the linker folded this into game::Camera::GetLookatMode() const, which has identical code
    OutputMergerState::GetClearFlags() const;

    // 0x100bdf570, 240 bytes, placed by class name and debug map
    // OutputMergerState::SetRenderTargets(RenderTargets const*)
    void OutputMergerState::SetRenderTargets(RenderTargets* param_1) {
        char cVar1;
        undefined8 in_RAX;
        Layout* this_00;
        long* plVar2;
        long* plVar3;
        uint* puVar4;
        undefined8 local_38;

        if (param_1 == (RenderTargets*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pRenderTargets",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                      "OutputMergerState.cpp",
                      24, (char*)0);
        }
        m_pRenderTargets = param_1;
        local_38 = in_RAX;
        cVar1 = empty();
        if (cVar1 != '\0') {
            this_00 = (Layout*)param_1->GetColourTargetTextures();
            plVar2 = (long*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_00);
            plVar3 = (long*)this_00->end();
            if (plVar2 != plVar3) {
                do {
                    if (*plVar2 == 0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("colourTarget != nullptr",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "state/OutputMergerState.cpp",
                                  33, (char*)0);
                    }
                    puVar4 = (uint*)(*plVar2)->second();
                    local_38 = 0;
                    eastl::vector<Viewport,
                                  eastl::fixed_vector_allocator<24ul, 1ul, 4ul, 0ul, true, eastl::allocator>>::
                        emplace_back<int, int, unsigned int const&, unsigned int const&>(
                            (vector<Viewport,
                                    eastl::fixed_vector_allocator<24ul, 1ul, 4ul, 0ul, true, eastl::allocator>>*)this,
                            (int*)&local_38, (int*)((long)&local_38 + 4), puVar4, puVar4 + 1);
                    plVar2 = plVar2 + 1;
                } while (plVar2 != plVar3);
            }
        }
    }

    // 0x100bf5530, 80 bytes, placed by class name
    // OutputMergerState::Clear()
    void OutputMergerState::Clear() {
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        m_pRenderTargets = (RenderTargets*)0;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        m_clearFlags = 0;
        m_depthClear = 1.0;
        m_stencilClear = '\0';
    }

} // namespace jag::render
