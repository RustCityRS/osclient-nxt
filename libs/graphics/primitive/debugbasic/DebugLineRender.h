// libs/graphics/primitive/debugbasic/DebugLineRender.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class DebugLineRender {
    public:
        DebugLineRender(int arg1);
        uint8_t CreateRenderingResources();
        void DestroyRenderingResources();
        void Render(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                    const ViewTransforms& viewTransforms,
                    eastl::vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>> const& pairs, bool arg5);
        void OnEndFrame();
        ~DebugLineRender();

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        PrimVertPosCol* field_16;
        uint8_t _unknown_24[88];
        InputAssemblerState field_112;
    };

    // 0x1009cd300
    DebugLineRender::~DebugLineRender() {
        DestroyRenderingResources();
        field_112->~InputAssemblerState();
        field_24.~DynamicBuffer();
    }

} // namespace jag
