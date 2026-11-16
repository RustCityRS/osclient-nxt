// libs/graphics/runetek7/lighting/ambientocclusion/SSAOContext.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "SSAOContext.h"

namespace jag::graphics {
    // 0x100009ca0: SSAOContext::GetSSAOParams() has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x1000fcbb0: SSAOContext::GetNativeContext() has the same machine code as oldscape::ClientObj::GetHighlight()

    // 0x1008aa570
    SSAOContext::SSAOContext() : SSAOParams(), m_pNativeContext(0) {}

    // 0x1008aa5a0
    SSAOContext::~SSAOContext() {}

    // 0x1008aa5b0
    void SSAOContext::Destroy() {}

    // 0x1008aa5d0
    void SSAOContext::Init() {
        return 1;
    }

    // 0x1008aa5e0
    void SSAOContext::Render(render::RenderTargets& renderTargets, const render::Texture* texture1,
                             const render::Texture* texture2, const render::Viewport& viewport,
                             const math::Matrix44T<float>& matrix441, const math::Matrix44T<float>& matrix442) {}

} // namespace jag::graphics
