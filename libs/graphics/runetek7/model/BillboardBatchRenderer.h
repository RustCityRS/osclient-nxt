// libs/graphics/runetek7/model/BillboardBatchRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    template <typename...> // 1 instantiations, e.g. <300ul>
    class FixedIndexPrimitiveBatchData {
    public:
        FixedIndexPrimitiveBatchData();
        void AddPrimitiveBatch(int arg1, unsigned int arg2, IndexType indexType);
        FixedIndexPrimitiveBatchData<300ul>* GetStartIndexByteOffset() const;
        ~FixedIndexPrimitiveBatchData();
    };

    // 0x1008698a0
    void FixedIndexPrimitiveBatchData<300ul>::AddPrimitiveBatch(int arg1, unsigned int arg2, IndexType indexType) {
        push_back(arg1);
        unsigned int uVar1 = GetIndexTypeSize(indexType);
        void* local_30 = (void*)((unsigned long)uVar1 * (unsigned long)arg2);
        ((this + 1240))->push_back(local_30);
    }

    // 0x100869900
    FixedIndexPrimitiveBatchData<300ul>* FixedIndexPrimitiveBatchData<300ul>::GetStartIndexByteOffset() const {
        return this + 1240;
    }

    // 0x10086b240
    FixedIndexPrimitiveBatchData<300ul>::~FixedIndexPrimitiveBatchData() {
        ((this + 1240))->~fixed_vector();
    }

} // namespace jag::render

namespace jag::graphics {
    class BillboardBatchRenderer {
    public:
        // virtual methods in vtable order
        virtual ~BillboardBatchRenderer();
        VertexDeclaration* GetVertexDeclLP();
        VertexDeclaration* GetVertexDecl();
        BillboardBatchRenderer();
        void Destroy();
        uint32_t Initialise(RT7Core& rt7Core);
        void CreateRenderingResources();
        void DestroyRenderingResources();
        void Render(const BillboardBatch_DE& billboardBatch_DE, render::RenderContext& renderContext,
                    const render::DrawCallState& drawCallState, const SceneViewData& sceneViewData,
                    RenderPassType renderPassType, EffectManager& effectManager);
        void DrawPrimitives(const BillboardBatch& billboardBatch, render::RenderContext& renderContext,
                            render::DrawCallState& drawCallState,
                            const eastl::vector<SourceModelExternalIndexSection>& sourceModelExternalIndexSections,
                            const eastl::vector_map<int, FaceGroupRenderMasks>* arg5);
        void InitialiseVertexDeclarations();
        static render::VertexDeclaration m_vertexDecl;   // = VertexDeclaration()
        static render::VertexDeclaration m_vertexDeclLP; // = VertexDeclaration()

    private:
        uint32_t field_8;
        uint32_t field_12;
        uint8_t _unknown_16[4];
    };

    // 0x1008656f0
    VertexDeclaration* BillboardBatchRenderer::GetVertexDeclLP() {
        return (VertexDeclaration*)&m_vertexDeclLP;
    }

    // 0x100865710
    VertexDeclaration* BillboardBatchRenderer::GetVertexDecl() {
        return (VertexDeclaration*)&m_vertexDecl;
    }

} // namespace jag::graphics
