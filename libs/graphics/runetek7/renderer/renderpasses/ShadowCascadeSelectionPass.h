// libs/graphics/runetek7/renderer/renderpasses/ShadowCascadeSelectionPass.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class ShadowCascadeSelectionPass {
    public:
        class VertPosIndex;
        // virtual methods in vtable order
        virtual ~ShadowCascadeSelectionPass();
        virtual uint32_t BeginPass(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                   EffectManager& effectManager, const SceneViewData& sceneViewData,
                                   const DrawableQueue& drawableQueue);
        virtual void Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState, EffectManager& effectManager,
                            const SceneViewData& sceneViewData, DrawableQueue& drawableQueue);
        ShadowCascadeSelectionPass();
        void CreateRenderingResources();
        void DestroyRenderingResources();

    private:
        RenderPassType field_8;
        uint8_t field_12;
        uint8_t _unknown_13[419];
        InputAssemblerState field_432;
        shared_ptr field_624;
    };

    class ShadowCascadeSelectionPass::VertPosIndex {
    public:
        VertPosIndex();
        static render::VertexElementDesc m_VertexElemDescs[3]; // initialised in its definition
    };

    // 0x1039bd160, set at startup by ___cxx_global_var_init.93
    render::VertexElementDesc ShadowCascadeSelectionPass::VertPosIndex::m_VertexElemDescs[3] = {
        /* [0] */ VertexElementDesc(0, "aPos", 2, false, 0, 0),
        /* [1] */ VertexElementDesc(0, "aCascadeIndex", 17, false, 14, 0),
        /* [2] */ VertexElementDesc(0, "aDummy0", 17, false, 15, 0),
    };

    // 0x1007bcba0
    ShadowCascadeSelectionPass::VertPosIndex::VertPosIndex() : math::Vector3T() {}

    // 0x1007bcba0: ParticleData::PositionTimeData::PositionTimeData() has the same machine code as ShadowCascadeSelectionPass::VertPosIndex::VertPosIndex()

    // 0x1007bcba0: GeometryBatchVertexPos::GeometryBatchVertexPos() has the same machine code as ShadowCascadeSelectionPass::VertPosIndex::VertPosIndex()

    // 0x1007bd4d0
    ShadowCascadeSelectionPass::~ShadowCascadeSelectionPass() {
        field_624->~shared_ptr();
        field_432->~InputAssemblerState();
        field_344.~IndexBuffer();
        field_264.~VertexBuffer();
        field_168.~VertexDeclaration();
        field_72.~BlendState();
    }

} // namespace jag::graphics
