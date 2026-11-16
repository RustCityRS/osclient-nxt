// libs/hal/render/context/RenderContextDesc.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "RenderContextDesc.h"

namespace jag::render {
    // 0x1000782e0: RenderContextDesc::~RenderContextDesc() has the same machine code as oldscape::MinimapElement::~MinimapElement()

    // 0x10012e0f0: RenderContextDesc::RenderContextDesc(RenderContextDesc const&) has the same machine code as oldscape::InterfaceMouseEvent::InterfaceMouseEvent(oldscape::InterfaceMouseEvent const&)

    // 0x100c25aa0
    RenderContextDesc::RenderContextDesc(const shared_ptr<OpenGLView>& openGLView)
        : field_0(0), field_4(530464), field_8(16777217), field_16(openGLView) {}

} // namespace jag::render
