// libs/graphics/runetek7/renderer/renderpasses/ShadowPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ShadowPass.h"

namespace jag::graphics {
    // 0x1007aed50, 32 bytes, base-object constructor, placed by class name and debug map
    // ShadowPass::ShadowPass(RenderPassType, render::RenderTargetsManager*, ThreadPool*)
    void ShadowPass::ShadowPass() {
        SceneRenderPass::SceneRenderPass();
        field_0 = &PTR__ShadowPass_100f14520;
    }

    // 0x1007aed70, 16 bytes, base-object destructor, placed by class name and debug map
    // ShadowPass::~ShadowPass()
    void ShadowPass::~ShadowPass() {
        ~SceneRenderPass();
    }

    // 0x1007aed80, 16 bytes, complete-object destructor, placed by class name and debug map
    // ShadowPass::~ShadowPass(): jumps straight to the base-object destructor

    // 0x1007aed90, 16 bytes, deleting destructor, placed by class name and debug map
    // ShadowPass::~ShadowPass()
    void ShadowPass::~ShadowPass() {
        code* pcVar1;

        /* WARNING: Does not return */
        pcVar1 = (code*)invalidInstructionException();
        (*pcVar1)();
    }

} // namespace jag::graphics
