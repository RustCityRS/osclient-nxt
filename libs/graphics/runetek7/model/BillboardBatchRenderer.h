// libs/graphics/runetek7/model/BillboardBatchRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    template <typename...> // 1 instantiations, e.g. <300ul>
    class FixedIndexPrimitiveBatchData {
    public:
        FixedIndexPrimitiveBatchData();
        void AddPrimitiveBatch(int, unsigned int, IndexType);
        FixedIndexPrimitiveBatchData<300ul>* GetStartIndexByteOffset() const;
        ~FixedIndexPrimitiveBatchData();
    };

    // 0x100869880, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // FixedIndexPrimitiveBatchData<300ul>::FixedIndexPrimitiveBatchData(): jumps straight to the base-object constructor

    // 0x1008698a0, 96 bytes, inline, placed by class header (inline)
    // FixedIndexPrimitiveBatchData<300ul>::AddPrimitiveBatch(int, unsigned int, IndexType)
    void FixedIndexPrimitiveBatchData<300ul>::AddPrimitiveBatch(undefined4 param_1, uint param_2, undefined4 param_4) {
        uint uVar1;
        void* local_30;
        undefined4 local_24;

        local_24 = param_1;
        eastl::fixed_vector<int, 300ul, true, eastl::allocator>::push_back((int*)this);
        uVar1 = GetIndexTypeSize(param_4);
        local_30 = (void*)((ulong)uVar1 * (ulong)param_2);
        ((this + 1240))->push_back(&local_30);
    }

    // 0x100869900, 16 bytes, inline, placed by class header (inline)
    // FixedIndexPrimitiveBatchData<300ul>::GetStartIndexByteOffset() const
    FixedIndexPrimitiveBatchData<300ul>* FixedIndexPrimitiveBatchData<300ul>::GetStartIndexByteOffset() {
        return this + 1240;
    }

    // 0x100869910, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // FixedIndexPrimitiveBatchData<300ul>::~FixedIndexPrimitiveBatchData(): jumps straight to the base-object destructor

    // 0x10086b240, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // FixedIndexPrimitiveBatchData<300ul>::~FixedIndexPrimitiveBatchData()
    void FixedIndexPrimitiveBatchData<300ul>::~FixedIndexPrimitiveBatchData() {
        ((this + 1240))->~fixed_vector();
        ~fixed_vector();
    }

} // namespace jag::render

namespace jag::graphics {
    class BillboardBatchRenderer {
    public:
        // virtual methods in vtable order
        virtual ~BillboardBatchRenderer();
        GetVertexDeclLP();
        GetVertexDecl();
        BillboardBatchRenderer();
        void Destroy();
        Initialise(RT7Core&);
        CreateRenderingResources();
        void DestroyRenderingResources();
        void Render(BillboardBatch_DE const&, render::RenderContext&, render::DrawCallState const&,
                    SceneViewData const&, RenderPassType, EffectManager&);
        void DrawPrimitives(
            BillboardBatch const&, render::RenderContext&, render::DrawCallState&,
            eastl::vector<SourceModelExternalIndexSection, eastl::allocator> const&,
            eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*);
        void InitialiseVertexDeclarations();
        static render::VertexDeclaration /* 96 bytes */ m_vertexDecl;    // = VertexDeclaration()
        static render::VertexDeclaration /* 104 bytes */ m_vertexDeclLP; // = VertexDeclaration()

        // data members, from how the methods use this: 20 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        char _unknown_16[4];
    };

    // 0x1008656f0, 16 bytes, inline, placed by class name and debug map
    // BillboardBatchRenderer::GetVertexDeclLP()
    undefined1* BillboardBatchRenderer::GetVertexDeclLP() {
        return &m_vertexDeclLP;
    }

    // 0x100865710, 16 bytes, inline, placed by class name and debug map
    // BillboardBatchRenderer::GetVertexDecl()
    undefined1* BillboardBatchRenderer::GetVertexDecl() {
        return &m_vertexDecl;
    }

} // namespace jag::graphics
