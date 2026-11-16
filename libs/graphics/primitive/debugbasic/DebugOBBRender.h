// libs/graphics/primitive/debugbasic/DebugOBBRender.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class DebugOBBRender {
    public:
        DebugOBBRender(int arg1);
        unsigned long CreateRenderingResources();
        void DestroyRenderingResources();
        void Render(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                    const ViewTransforms& viewTransforms,
                    eastl::vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>> const& pairs, bool arg5);
        void OnEndFrame();
        ~DebugOBBRender();

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        PrimVertPosCol* field_16;
        uint8_t _unknown_24[264];
        InputAssemblerState field_288;
        InputAssemblerState field_480;
    };

    // 0x1009cd150
    DebugOBBRender::~DebugOBBRender() {
        DestroyRenderingResources();
        field_480->~InputAssemblerState();
        field_288->~InputAssemblerState();
        field_200.~IndexBuffer();
        field_112.~IndexBuffer();
        field_24.~DynamicBuffer();
    }

} // namespace jag
