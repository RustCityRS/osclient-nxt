// libs/graphics/runetek7/occlusion/DepthBufferRasterizerSSE.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "DepthBufferRasterizerSSE.h"

namespace jag::graphics {
    // 0x100066b70: the linker folded this into oldscape::widgets::Widget::GetTextColour() const, which has identical code
    DepthBufferRasterizerSSE::GetNumRasterizedTriangles() const;

    // 0x100822830, 48 bytes, base-object constructor, placed by class name and debug map
    // DepthBufferRasterizerSSE::DepthBufferRasterizerSSE(unsigned int, unsigned int)
    void DepthBufferRasterizerSSE::DepthBufferRasterizerSSE(uint param_1, uint param_2) {
        new (this) DepthBufferRasterizer(param_1, param_2);
        field_0 = &PTR__DepthBufferRasterizerSSE_100f15878;
        new (&field_48) std::array<std::unique_ptr<BinInfoSSE, std::default_delete<BinInfoSSE>>, 2ul>();
    }

    // 0x100822870, 32 bytes, base-object destructor, placed by class name and debug map
    // DepthBufferRasterizerSSE::~DepthBufferRasterizerSSE()
    void DepthBufferRasterizerSSE::~DepthBufferRasterizerSSE() {
        field_0 = &PTR__DepthBufferRasterizerSSE_100f15878;
        (&field_48)->~array();
    }

    // 0x1008228a0, 16 bytes, complete-object destructor, placed by class name and debug map
    // DepthBufferRasterizerSSE::~DepthBufferRasterizerSSE(): jumps straight to the base-object destructor

    // 0x1008228b0, 16 bytes, deleting destructor, placed by class name and debug map
    // DepthBufferRasterizerSSE::~DepthBufferRasterizerSSE()
    void DepthBufferRasterizerSSE::~DepthBufferRasterizerSSE() {
        code* pcVar1;

        /* WARNING: Does not return */
        pcVar1 = (code*)invalidInstructionException();
        (*pcVar1)();
    }

    // 0x1008228c0, 224 bytes, placed by class name and debug map
    // DepthBufferRasterizerSSE::ClearDepthTile(int, int, int, int, unsigned int)
    void DepthBufferRasterizerSSE::ClearDepthTile(int param_1, int param_2, int param_3, int param_4, uint param_5) {
        long lVar1;
        long lVar2;

        if (((param_1 | param_2) & 1U) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("startX % 2 == 0 && startY % 2 == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "occlusion/DepthBufferRasterizerSSE.cpp",
                      40, (char*)0);
        }
        if (((param_3 | param_4) & 1U) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("endX % 2 == 0 && endY % 2 == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "occlusion/DepthBufferRasterizerSSE.cpp",
                      41, (char*)0);
        }
        if (param_2 < param_4) {
            lVar2 = (long)param_2;
            lVar1 = *(long*)(&field_24 + (ulong)param_5 * 8) + (lVar2 * 96 + (long)(param_1 * 2)) * 4;
            do {
                ___bzero(lVar1, (long)(param_3 - param_1) << 3);
                lVar2 = lVar2 + 2;
                lVar1 = lVar1 + 768;
            } while (lVar2 < param_4);
        }
    }

} // namespace jag::graphics
