// libs/graphics/runetek7/renderer/renderpasses/ShadowPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ShadowPass.h"

namespace jag::graphics {
    // 0x1007aed50
    ShadowPass::ShadowPass(RenderPassType renderPassType, render::RenderTargetsManager* renderTargetsManager,
                           ThreadPool* threadPool)
        : SceneRenderPass(renderPassType, renderTargetsManager, threadPool) {}

    // 0x1007aed70
    ShadowPass::~ShadowPass() {}

} // namespace jag::graphics
