// libs/hal/render/context/OGL/RenderContextDec_OGL.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.render

// 0x100c28da0, 160 bytes, placed by debug map only (low confidence)
// ___ZN3jag6render22ImmediateRenderContext11BackendInitERKNS0_17RenderContextDescE_block_invoke
void ____ZN3jag6render22ImmediateRenderContext11BackendInitERKNS0_17RenderContextDescE_block_invoke(long param_1) {
    undefined* puVar1;
    undefined8 uVar2;
    OpenGLView* this;
    undefined8 uVar3;

    uVar2 = (*(ImmediateRenderContext**)(param_1 + 32))->GetOpenGLContext();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    this = (OpenGLView*)jag::shared_ptr<jag::OpenGLView>::operator->(
        (shared_ptr<jag::OpenGLView>*)(*(long*)(param_1 + 40) + 16));
    uVar3 = GetNSView();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code*)PTR__objc_msgSend_100ee9e50)(uVar2, "setView:", uVar3);
    puVar1 = PTR__objc_release_100ee9e60;
    (*(code*)PTR__objc_release_100ee9e60)(uVar3);
    (*(code*)puVar1)(uVar2);
}

namespace jag::fixedfunction {
    // 0x100c28e40, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97, void>(render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97&&): jumps straight to the base-object constructor

} // namespace jag::fixedfunction

namespace jag {
    // 0x100c299c0, 32 bytes, inline, placed by debug map only (low confidence)
    // float Bytes2Megabytes<unsigned int>(unsigned int)
    float Bytes2Megabytes<unsigned int>(uint param_1) {
        return (float)param_1 * 9.536743e-07;
    }

} // namespace jag
