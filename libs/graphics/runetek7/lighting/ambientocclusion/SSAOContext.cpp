// libs/graphics/runetek7/lighting/ambientocclusion/SSAOContext.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "SSAOContext.h"

namespace jag::graphics {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    SSAOContext::GetSSAOParams();

    // 0x1000fcbb0: the linker folded this into oldscape::ClientObj::GetHighlight(), which has identical code
    SSAOContext::GetNativeContext();

    // 0x1008aa570, 32 bytes, base-object constructor, placed by class name and debug map
    // SSAOContext::SSAOContext()
    void SSAOContext::SSAOContext() {
        new (this) SSAOParams();
        field_48 = 0;
    }

    // 0x1008aa590, 16 bytes, complete-object constructor, placed by class name and debug map
    // SSAOContext::SSAOContext(): jumps straight to the base-object constructor

    // 0x1008aa5a0, 16 bytes, base-object destructor, placed by class name and debug map
    // SSAOContext::~SSAOContext()
    void SSAOContext::~SSAOContext() {}

    // 0x1008aa5b0, 16 bytes, placed by class name and debug map
    // SSAOContext::Destroy()
    void SSAOContext::Destroy() {}

    // 0x1008aa5c0, 16 bytes, complete-object destructor, placed by class name and debug map
    // SSAOContext::~SSAOContext(): jumps straight to the base-object destructor

    // 0x1008aa5d0, 16 bytes, placed by class name and debug map
    // SSAOContext::Init()
    undefined1 SSAOContext::Init() {
        return 1;
    }

    // 0x1008aa5e0, 16 bytes, placed by class name and debug map
    // SSAOContext::Render(render::RenderTargets&, render::Texture const*, render::Texture const*, render::Viewport const&, math::Matrix44T<float> const&, math::Matrix44T<float> const&)
    void SSAOContext::Render(RenderTargets* param_1, Texture* param_2, Texture* param_3, Viewport* param_4,
                             Matrix44T* param_5, Matrix44T* param_6) {}

} // namespace jag::graphics
