// libs/graphics/runetek7/renderer/renderpasses/ShadowCascadeSelectionPass.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class ShadowCascadeSelectionPass {
    public:
        class VertPosIndex;
        // virtual methods in vtable order
        virtual ~ShadowCascadeSelectionPass();
        virtual ulong BeginPass(render::DrawCallState&, render::RenderContext&, EffectManager&, SceneViewData const&,
                                DrawableQueue const&);
        virtual void Render(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&,
                            DrawableQueue&);
        ShadowCascadeSelectionPass();
        void CreateRenderingResources();
        void DestroyRenderingResources();

        // data members, from how the methods use this: 640 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[4];
        undefined1 field_12; // offset 12
        char _unknown_13[59];
        EntityHighlight* field_72; // offset 72
        char _unknown_80[88];
        undefined1 field_168; // offset 168
        char _unknown_169[263];
        InputAssemblerState field_432; // offset 432
        shared_ptr field_624;          // offset 624
    };

    class ShadowCascadeSelectionPass::VertPosIndex {
    public:
        VertPosIndex();
        static render::VertexElementDesc /* 120 bytes */ m_VertexElemDescs[3]; // initialised in its definition
    };

    // 0x1039bd160, 120 bytes, __common; set at startup by ___cxx_global_var_init.93
    render::VertexElementDesc ShadowCascadeSelectionPass::VertPosIndex::m_VertexElemDescs[3] = {
        /* [0] */ VertexElementDesc(0, "aPos", 2, 0, 0, 0),
        /* [1] */ VertexElementDesc(0, "aCascadeIndex", 17, 0, 14, 0),
        /* [2] */ VertexElementDesc(0, "aDummy0", 17, 0, 15, 0),
    };

    // 0x1007bbfa0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ShadowCascadeSelectionPass::~ShadowCascadeSelectionPass(): jumps straight to the base-object destructor

    // 0x1007bbfb0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // ShadowCascadeSelectionPass::~ShadowCascadeSelectionPass()
    void ShadowCascadeSelectionPass::~ShadowCascadeSelectionPass() {
        ~ShadowCascadeSelectionPass(this);
        operator_delete(this);
    }

    // 0x1007bcb90, 16 bytes, complete-object constructor, inline, placed by class name
    // ShadowCascadeSelectionPass::VertPosIndex::VertPosIndex(): jumps straight to the base-object constructor

    // 0x1007bcb90: the linker folded this into ShadowCascadeSelectionPass::VertPosIndex::VertPosIndex(), which has identical code
    ParticleData::PositionTimeData::PositionTimeData();

    // 0x1007bcb90: the linker folded this into ShadowCascadeSelectionPass::VertPosIndex::VertPosIndex(), which has identical code
    GeometryBatchVertexPos::GeometryBatchVertexPos();

    // 0x1007bcba0, 16 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ShadowCascadeSelectionPass::VertPosIndex::VertPosIndex()
    /* ParticleData::PositionTimeData::PositionTimeData() */

    void ParticleData::PositionTimeData::PositionTimeData() {
        new (this) math::Vector3T<int>();
    }

    // 0x1007bcba0: the linker folded this into ShadowCascadeSelectionPass::VertPosIndex::VertPosIndex(), which has identical code
    ParticleData::PositionTimeData::PositionTimeData();

    // 0x1007bcba0: the linker folded this into ShadowCascadeSelectionPass::VertPosIndex::VertPosIndex(), which has identical code
    GeometryBatchVertexPos::GeometryBatchVertexPos();

    // 0x1007bd4d0, 112 bytes, base-object destructor, inline, placed by class name
    // ShadowCascadeSelectionPass::~ShadowCascadeSelectionPass()
    void ShadowCascadeSelectionPass::~ShadowCascadeSelectionPass() {
        field_0 = &PTR__ShadowCascadeSelectionPass_100f144d0;
        field_624->~shared_ptr();
        field_432->~InputAssemblerState();
        (&field_344)->~IndexBuffer();
        (&field_264)->~VertexBuffer();
        (&field_168)->~VertexDeclaration();
        (&field_72)->~BlendState();
        (&field_12)->~DepthStencilState();
        ~RenderPass();
    }

    // 0x1007c9090, 144 bytes, placed by the data it initialises
    // ___cxx_global_var_init.93
    void ___cxx_global_var_init_93() {
        new (&ShadowCascadeSelectionPass::VertPosIndex::m_VertexElemDescs)
            render::VertexElementDesc(0, "aPos", 2, 0, 0, 0);
        new (&DAT_1039bd188) render::VertexElementDesc(0, "aCascadeIndex", 17, 0, 14, 0);
        new (&DAT_1039bd1b0) render::VertexElementDesc(0, "aDummy0", 17, 0, 15, 0);
    }

} // namespace jag::graphics
