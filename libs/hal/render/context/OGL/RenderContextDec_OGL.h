// libs/hal/render/context/OGL/RenderContextDec_OGL.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.render

// 0x100c28da0
void ____ZN3jag6render22ImmediateRenderContext11BackendInitERKNS0_17RenderContextDescE_block_invoke(long param_1) {
    uint64_t uVar2 = (*(ImmediateRenderContext**)(param_1 + 32))->GetOpenGLContext();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    uint64_t uVar3 =
        ((OpenGLView*)(*((shared_ptr<jag::OpenGLView>*)(*(long*)(param_1 + 40) + 16))).operator->())->GetNSView();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar2, "setView:", uVar3);
    uint8_t* puVar1 = PTR__objc_release_100ee9e60;
    (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar3);
    (*(void (*)(...))puVar1)(uVar2);
}

namespace jag {
    // 0x100c299c0
    float Bytes2Megabytes<unsigned int>(unsigned int arg1) {
        return (float)arg1 * 9.536743e-07;
    }

} // namespace jag
