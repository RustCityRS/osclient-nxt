// libs/graphics/runetek7/renderer/renderpasses/FullscreenQuadPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class FullscreenQuadPass {
    public:
        // virtual methods in vtable order
        virtual ~FullscreenQuadPass();
        virtual void __pure_slot_5() = 0;
        virtual void CreateRenderingResources();
        virtual void DestroyRenderingResources();
        FullscreenQuadPass(RenderPassType renderPassType);
        void QuadBeginRender(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                             const SceneViewData& sceneViewData);
        void QuadEndRender(render::DrawCallState& drawCallState, render::RenderContext& renderContext);

    private:
        RenderPassType field_8;
        uint8_t _unknown_12[556];
    };

    // 0x1007a48c0
    FullscreenQuadPass::FullscreenQuadPass(RenderPassType renderPassType) : RenderPass(renderPassType) {
        field_560.SetToIdentity();
        CreateRenderingResources();
    }

    // 0x1007a4970
    FullscreenQuadPass::~FullscreenQuadPass() {
        DestroyRenderingResources();
        field_112.~RenderToTextureHelper();
        field_16.~VertexDeclaration();
    }

    // 0x1007a4e30
    void FullscreenQuadPass::QuadBeginRender(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                             const SceneViewData& sceneViewData) {
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_00;

        DrawCallState* pDVar2 = drawCallState;
        this_00 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                      drawCallState.GetRenderPipelineState();
        long lVar1 = pDVar2->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            this_00, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar1 + 1524));
        pDVar2 = drawCallState;
        auto this_01 = drawCallState.GetRenderPipelineState();
        lVar1 = pDVar2->Instance();
        this_01->SetHeapSize((lVar1 + 1080));
        RenderPipelineState* this_02 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
        lVar1 = drawCallState.Instance();
        this_02->SetRasteriserState((lVar1 + 1200));
    }

    // 0x1007a5150
    void FullscreenQuadPass::QuadEndRender(render::DrawCallState& drawCallState, render::RenderContext& renderContext) {
        field_112.RenderQuad(renderContext, drawCallState);
    }

    // 0x1007a5df0
    void FullscreenQuadPass::CreateRenderingResources() {
        VertexElementDesc* vertexElementDesc;

        auto pSVar2 = graphics::operator*(214);
        VertexElementDesc local_70 = pSVar2->GetVertexElementDesc(0);
        pSVar2 = (ShaderProgramVariable*)graphics::operator*(237);
        VertexElementDesc local_48 = pSVar2->GetVertexElementDesc(0);
        vertexElementDesc = (VertexElementDesc*)local_70.data();
        field_16.Create(vertexElementDesc, 2, nullptr, 0);
        if (field_16.GetVertexStride(0) != 20) {
            LogAssert("m_vertexDecl.GetVertexStride() == sizeof(PrimVertPosUV)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/renderpasses/FullscreenQuadPass.cpp",
                      50, nullptr);
        }
    }

    // 0x1007a5ec0
    void FullscreenQuadPass::DestroyRenderingResources() {
        field_16.Destroy();
    }

} // namespace jag::graphics
