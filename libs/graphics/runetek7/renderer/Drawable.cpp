// libs/graphics/runetek7/renderer/Drawable.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.osclient

#include "Drawable.h"

namespace jag::graphics {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Drawable::BinTriangles(SceneViewData const&, BinInfoSSE&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Drawable::GetTransformedTriangle(unsigned int, math::Vector4T<float> (&)[3]);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Drawable::~Drawable();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Drawable::RenderDebug(RenderPassType, DrawableElement&) const;

    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    Drawable::GetRenderFlags() const;

    // 0x10005fd90: the linker folded this into oldscape::widgets::Widget::SetBackgroundColour(unsigned int), which has identical code
    Drawable::SetRenderFlags(unsigned int);

    // 0x1007e13c0, 1648 bytes, placed by class name
    // Drawable::BinCommon(vFloat4*, int, BinInfoSSE&, int)
    void Drawable::BinCommon(vFloat4* param_1, int param_2, BinInfoSSE* param_3, int param_4) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                        "renderer/Drawable.cpp",
                        15, (char*)0);
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    Drawable::~Drawable();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    Drawable::~Drawable();

} // namespace jag::graphics
