// libs/graphics/runetek7/model/GeometryBatchRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class GeometryBatchRenderer {
    public:
        // virtual methods in vtable order
        virtual ~GeometryBatchRenderer();
        void GetVertexDecl2();
        void GetVertexDecl();
        void GetVertexDecl(bool arg1);
        GeometryBatchRenderer();
        void Destroy();
        uint32_t Initialise(RT7Core& rt7Core);
        void CreateRenderingResources();
        void Render(const GeometryBatch_DE& geometryBatch_DE, render::RenderContext& renderContext,
                    const render::DrawCallState& drawCallState, const SceneViewData& sceneViewData,
                    RenderPassType renderPassType, EffectManager& effectManager);
        void DrawHighlightedPrimitives(render::RenderContext& renderContext, render::DrawCallState& drawCallState,
                                       const GeometryBatch_DE& geometryBatch_DE, render::PrimitiveType primitiveType,
                                       Shader& shader);
        void DrawPrimitives(
            render::RenderContext& renderContext, render::DrawCallState& drawCallState,
            const GeometryBatch& geometryBatch, unsigned int arg4, render::PrimitiveType primitiveType,
            const eastl::vector<SourceModelExternalIndexSectionRangeOnly>& sourceModelExternalIndexSectionRangeOnlys,
            const eastl::vector_map<int, FaceGroupRenderMasks>* arg7, unsigned char arg8,
            render::QueryView* queryView) const;
        void InitialiseVertexDeclarations();
        void DestroyRenderingResources();
        static render::VertexDeclaration m_vertexDecl;        // = VertexDeclaration()
        static render::VertexDeclaration m_vertexDeclSkinned; // = VertexDeclaration()

    private:
        uint32_t field_8;
        uint32_t field_12;
        uint8_t _unknown_16[720];
    };

    // 0x10080c500
    void GeometryBatchRenderer::GetVertexDecl2() {
        return &m_vertexDeclSkinned;
    }

    // 0x10080c580
    void GeometryBatchRenderer::GetVertexDecl() {
        return &m_vertexDecl;
    }

    // 0x1008113e0
    void GeometryBatchRenderer::GetVertexDecl(bool arg1) {
        uint32_t in_register_00000039;

        uint8_t* puVar1 = &m_vertexDecl;
        if ((((uint32_t)in_register_00000039 << 8) | (uint8_t)arg1) != 0) {
            puVar1 = &m_vertexDeclSkinned;
        }
        return puVar1;
    }

} // namespace jag::graphics
