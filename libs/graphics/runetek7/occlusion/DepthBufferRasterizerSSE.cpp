// libs/graphics/runetek7/occlusion/DepthBufferRasterizerSSE.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "DepthBufferRasterizerSSE.h"

namespace jag::graphics {
    // 0x100066b70: DepthBufferRasterizerSSE::GetNumRasterizedTriangles() const has the same machine code as oldscape::widgets::Widget::GetTextColour() const

    // 0x100822830
    DepthBufferRasterizerSSE::DepthBufferRasterizerSSE(unsigned int arg1, unsigned int arg2)
        : DepthBufferRasterizer(arg1, arg2) {}

    // 0x100822870
    DepthBufferRasterizerSSE::~DepthBufferRasterizerSSE() {
        field_48.~array();
    }

    // 0x1008228c0
    void DepthBufferRasterizerSSE::ClearDepthTile(int arg1, int arg2, int arg3, int arg4, unsigned int arg5) {
        long lVar1;
        long lVar2;

        if (((arg1 | arg2) & 1U) != 0) {
            LogAssert("startX % 2 == 0 && startY % 2 == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "occlusion/DepthBufferRasterizerSSE.cpp",
                      40, nullptr);
        }
        if (((arg3 | arg4) & 1U) != 0) {
            LogAssert("endX % 2 == 0 && endY % 2 == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "occlusion/DepthBufferRasterizerSSE.cpp",
                      41, nullptr);
        }
        if (arg2 < arg4) {
            lVar2 = (long)arg2;
            lVar1 = *(long*)(&field_24 + (unsigned long)arg5 * 8) + (lVar2 * 96 + (long)(arg1 * 2)) * 4;
            do {
                ___bzero(lVar1, (long)(arg3 - arg1) << 3);
                lVar2 = lVar2 + 2;
                lVar1 = lVar1 + 768;
            } while (lVar2 < arg4);
        }
    }

} // namespace jag::graphics
