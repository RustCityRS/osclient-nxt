// libs/graphics/runetek7/water/WaterPatchRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class WaterPatchRenderer {
    public:
        // virtual methods in vtable order
        virtual ~WaterPatchRenderer();
        WaterPatchRenderer();
        void Destroy();
        Initialise(RT7Core&);
        CreateRenderingResources();
        void DestroyRenderingResources();
        void InitialiseVertexDeclaration();
        void Render(WaterPatch_DE const&, render::RenderContext&, render::DrawCallState const&, SceneViewData const&,
                    RenderPassType, EffectManager&);
        void SetEffectParameters(RenderPassEffect const&, EffectManager&, WaterParameters const&, SceneViewData const&);
        void SetPipelineState(RenderPassEffect const&, render::DrawCallState&, RenderPassType, bool,
                              WaterPatch_DE const&);
        GetVertexDecl();
        static render::VertexDeclaration /* 96 bytes */ m_vertexDeclaration; // = VertexDeclaration()

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        undefined4 field_16; // offset 16
        undefined4 field_20; // offset 20
        undefined4 field_24; // offset 24
        undefined4 field_28; // offset 28
        undefined4 field_32; // offset 32
        char _unknown_36[4];
    };

    // 0x1007baea0, 16 bytes, inline, placed by class name
    // WaterPatchRenderer::GetVertexDecl()
    undefined1* WaterPatchRenderer::GetVertexDecl() {
        return &m_vertexDeclaration;
    }

} // namespace jag::graphics
