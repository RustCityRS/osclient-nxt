// libs/graphics/primitive/debugbasic/DebugTriRender.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class DebugTriRender {
    public:
        DebugTriRender(int arg1);
        ~DebugTriRender();
        void OnEndFrame();
        void Render(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                    const ViewTransforms& viewTransforms,
                    eastl::vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>> const& pairs, bool arg5);
        void DestroyRenderingResources();
        uint32_t CreateRenderingResources();

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        PrimVertPosCol* field_16;
        uint8_t _unknown_24[176];
        InputAssemblerState field_200;
    };

    // 0x1009cd290
    DebugTriRender::~DebugTriRender() {
        DestroyRenderingResources();
        field_200->~InputAssemblerState();
        field_112.~IndexBuffer();
        field_24.~DynamicBuffer();
    }

} // namespace jag
