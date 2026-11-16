// libs/hal/render/context/RenderContextDesc.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "RenderContextDesc.h"

namespace jag::render {
    // 0x1000694d0: the linker folded this into oldscape::MinimapElement::~MinimapElement(), which has identical code
    RenderContextDesc::~RenderContextDesc();

    // 0x1000782e0: the linker folded this into oldscape::MinimapElement::~MinimapElement(), which has identical code
    RenderContextDesc::~RenderContextDesc();

    // 0x1001064a0: the linker folded this into oldscape::InterfaceMouseEvent::InterfaceMouseEvent(oldscape::InterfaceMouseEvent const&), which has identical code
    RenderContextDesc::RenderContextDesc(RenderContextDesc const&);

    // 0x10012e0f0: the linker folded this into oldscape::InterfaceMouseEvent::InterfaceMouseEvent(oldscape::InterfaceMouseEvent const&), which has identical code
    RenderContextDesc::RenderContextDesc(RenderContextDesc const&);

    // 0x100c25aa0, 48 bytes, base-object constructor, placed by class name and debug map
    // RenderContextDesc::RenderContextDesc(shared_ptr<OpenGLView> const&)
    void RenderContextDesc::RenderContextDesc(shared_ptr* param_1) {
        field_0 = 0;
        field_4 = 530464;
        field_8 = 16777217;
        new (&field_16, param_1) shared_ptr<oldscape::dash3d::Decor>();
    }

    // 0x100c25ad0, 16 bytes, complete-object constructor, placed by class name and debug map
    // RenderContextDesc::RenderContextDesc(shared_ptr<OpenGLView> const&): jumps straight to the base-object constructor

} // namespace jag::render
