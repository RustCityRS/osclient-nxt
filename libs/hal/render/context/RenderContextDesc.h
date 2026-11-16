// libs/hal/render/context/RenderContextDesc.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class RenderContextDesc {
    public:
        ~RenderContextDesc();
        RenderContextDesc(const RenderContextDesc& interfaceMouseEvent);
        RenderContextDesc* operator=(const RenderContextDesc& renderContextDesc);
        RenderContextDesc(const shared_ptr<OpenGLView>& openGLView);
        RenderContextDesc();

    private:
        uint32_t field_0;
        uint32_t field_4;
        uint32_t field_8;
        uint8_t _unknown_12[12];
    };

    // 0x100c15920
    RenderContextDesc* RenderContextDesc::operator=(const RenderContextDesc& renderContextDesc) {
        field_8 = renderContextDesc.field_8;
        uint32_t uVar1 = renderContextDesc.field_4;
        field_0 = renderContextDesc.field_0;
        field_4 = uVar1;
        field_16 = renderContextDesc.field_16;
        return this;
    }

    // 0x100c32f10
    RenderContextDesc::RenderContextDesc() : field_0(0), field_4(530464), field_8(16777217) {
        new (&field_16) shared_ptr();
    }

} // namespace jag::render
