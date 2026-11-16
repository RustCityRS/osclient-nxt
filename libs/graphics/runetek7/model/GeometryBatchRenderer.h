// libs/graphics/runetek7/model/GeometryBatchRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class GeometryBatchRenderer {
    public:
        // virtual methods in vtable order
        virtual ~GeometryBatchRenderer();
        GetVertexDecl2();
        GetVertexDecl();
        GetVertexDecl(bool);
        GeometryBatchRenderer();
        void Destroy();
        Initialise(RT7Core&);
        CreateRenderingResources();
        void Render(GeometryBatch_DE const&, render::RenderContext&, render::DrawCallState const&, SceneViewData const&,
                    RenderPassType, EffectManager&);
        void DrawHighlightedPrimitives(render::RenderContext&, render::DrawCallState&, GeometryBatch_DE const&,
                                       render::PrimitiveType, Shader&);
        void DrawPrimitives(
            render::RenderContext&, render::DrawCallState&, GeometryBatch const&, unsigned int, render::PrimitiveType,
            eastl::vector<SourceModelExternalIndexSectionRangeOnly, eastl::allocator> const&,
            eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*,
            unsigned char, render::QueryView*) const;
        void InitialiseVertexDeclarations();
        void DestroyRenderingResources();
        static render::VertexDeclaration /* 96 bytes */ m_vertexDecl;        // = VertexDeclaration()
        static render::VertexDeclaration /* 96 bytes */ m_vertexDeclSkinned; // = VertexDeclaration()

        // data members, from how the methods use this: 736 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        char _unknown_16[720];
    };

    // 0x10080c500, 16 bytes, inline, placed by class name and debug map
    // GeometryBatchRenderer::GetVertexDecl2()
    undefined1* GeometryBatchRenderer::GetVertexDecl2() {
        return &m_vertexDeclSkinned;
    }

    // 0x10080c580, 16 bytes, inline, placed by class name and debug map
    // GeometryBatchRenderer::GetVertexDecl()
    undefined1* GeometryBatchRenderer::GetVertexDecl() {
        return &m_vertexDecl;
    }

    // 0x1008113e0, 32 bytes, inline, placed by class name
    // GeometryBatchRenderer::GetVertexDecl(bool)
    undefined1* GeometryBatchRenderer::GetVertexDecl(bool param_1) {
        undefined1* puVar1;
        undefined3 in_register_00000039;

        puVar1 = &m_vertexDecl;
        if (CONCAT31(in_register_00000039, param_1) != 0) {
            puVar1 = &m_vertexDeclSkinned;
        }
        return puVar1;
    }

} // namespace jag::graphics
