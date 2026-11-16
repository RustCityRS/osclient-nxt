// libs/graphics/runetek7/renderer/renderpasses/FullscreenQuadPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class FullscreenQuadPass {
    public:
        // virtual methods in vtable order
        virtual ~FullscreenQuadPass();
        virtual void __pure_slot_5() = 0;
        virtual void CreateRenderingResources();
        virtual void DestroyRenderingResources();
        FullscreenQuadPass(RenderPassType);
        void QuadBeginRender(render::DrawCallState&, render::RenderContext&, SceneViewData const&);
        void QuadEndRender(render::DrawCallState&, render::RenderContext&);

        // data members, from how the methods use this: 568 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[560];
    };

    // 0x1007a48c0, 160 bytes, base-object constructor, placed by class name and debug map
    // FullscreenQuadPass::FullscreenQuadPass(RenderPassType)
    void FullscreenQuadPass::FullscreenQuadPass() {
        RenderPass::RenderPass();
        field_0 = &PTR__FullscreenQuadPass_100f141e0;
        new (&field_16) render::VertexDeclaration();
        new (&field_112) graphicutils::RenderToTextureHelper();
        new (&field_560) math::Matrix44T<float>();
        (&field_560)->SetToIdentity();
        (*(code*)field_0[8])(this);
    }

    // 0x1007a4970, 96 bytes, base-object destructor, placed by class name
    // FullscreenQuadPass::~FullscreenQuadPass()
    void FullscreenQuadPass::~FullscreenQuadPass() {
        field_0 = &PTR__FullscreenQuadPass_100f141e0;
        DestroyRenderingResources(this);
        (&field_112)->~RenderToTextureHelper();
        (&field_16)->~VertexDeclaration();
        ~RenderPass();
    }

    // 0x1007a4e30, 112 bytes, placed by class name
    // FullscreenQuadPass::QuadBeginRender(render::DrawCallState&, render::RenderContext&, SceneViewData const&)
    void FullscreenQuadPass::QuadBeginRender(DrawCallState* param_1, RenderContext* param_2, SceneViewData* param_3) {
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this;
        Layout* this_00;
        long lVar1;
        RenderPipelineState* this_01;
        RenderContext* pRVar2;
        undefined1 auVar3[16];

        pRVar2 = param_2;
        this = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                   param_2->GetRenderPipelineState();
        auVar3 = pRVar2->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            this, (EntityHighlight**)(auVar3._0_8_ + 1524), auVar3._8_8_);
        pRVar2 = param_2;
        this_00 = (Layout*)param_2->GetRenderPipelineState();
        lVar1 = pRVar2->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(this_00, lVar1 + 1080);
        this_01 = (RenderPipelineState*)param_2->GetRenderPipelineState();
        lVar1 = param_2->Instance();
        this_01->SetRasteriserState((RasteriserState*)(lVar1 + 1200));
    }

    // 0x1007a5150, 32 bytes, placed by class name
    // FullscreenQuadPass::QuadEndRender(render::DrawCallState&, render::RenderContext&)
    void FullscreenQuadPass::QuadEndRender(DrawCallState* param_1, RenderContext* param_2) {
        (&field_112, param_2, param_1)->RenderQuad();
    }

    // 0x1007a5df0, 160 bytes, placed by class name
    // FullscreenQuadPass::CreateRenderingResources()
    void FullscreenQuadPass::CreateRenderingResources() {
        uint uVar1;
        ulong uVar3;
        ShaderProgramVariable local_70;
        ShaderProgramVariable local_48;

        uVar1 = graphics::operator*((graphics*)214);
        local_70.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)237);
        local_48.GetVertexElementDesc(uVar1);
        uVar3 = local_70.data();
        render::VertexDeclaration::Create((VertexElementDesc*)&field_16, uVar3, (void*)2, 0);
        if ((&field_16, 0)->GetVertexStride() != 20) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_vertexDecl.GetVertexStride() == sizeof(PrimVertPosUV)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/renderpasses/FullscreenQuadPass.cpp",
                      50, (char*)0);
        }
    }

    // 0x1007a5ec0, 16 bytes, placed by class name
    // FullscreenQuadPass::DestroyRenderingResources()
    void FullscreenQuadPass::DestroyRenderingResources() {
        (&field_16)->Destroy();
    }

    // 0x1007a7e10, 16 bytes, complete-object destructor, placed by class name
    // FullscreenQuadPass::~FullscreenQuadPass(): jumps straight to the base-object destructor

    // 0x1007a7e20, 16 bytes, deleting destructor, placed by class name
    // FullscreenQuadPass::~FullscreenQuadPass()
    void FullscreenQuadPass::~FullscreenQuadPass() {
        code* pcVar1;

        /* WARNING: Does not return */
        pcVar1 = (code*)invalidInstructionException();
        (*pcVar1)();
    }

} // namespace jag::graphics
