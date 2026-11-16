// libs/graphics/runetek7/effects/skybox/SkyBoxRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class SkyBoxRenderer {
    public:
        // virtual methods in vtable order
        virtual ~SkyBoxRenderer();
        GetDepthStencilState() const;
        SetNonObliqueProjectionMatrix(math::Matrix44T<float> const&);
        GetVertexDecl();
        void Render(SkyBox_DE const&, render::RenderContext&, render::DrawCallState const&, SceneViewData const&,
                    RenderPassType, EffectManager&);
        SkyBoxRenderer();
        void Destroy();
        Initialise(RT7Core&);
        CreateRenderingResources();
        void DestroyRenderingResources();
        void InitialiseVertexDeclaration();
        void UpdateVertexBuffer(int, int, SceneViewData const&);
        static render::VertexDeclaration /* 96 bytes */ m_vertexDecl; // = VertexDeclaration()

        // data members, from how the methods use this: 504 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[8];
        undefined1 field_16; // offset 16
        char _unknown_17[295];
        InputAssemblerState field_312; // offset 312
    };

    // 0x100468c10, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SkyBoxRenderer::SetNonObliqueProjectionMatrix(math::Matrix44T<float> const&)
    /* ViewTransforms::SetProjMatrix(math::Matrix44T<float> const&) */

    void ViewTransforms::SetProjMatrix(Matrix44T* param_1) {
        math::Matrix44T<float>::operator=((Matrix44T<float>*)&m_projMatrix, param_1);
    }

    // 0x10091ba80, 16 bytes, inline, placed by class name
    // SkyBoxRenderer::GetVertexDecl()
    undefined1* SkyBoxRenderer::GetVertexDecl() {
        return &m_vertexDecl;
    }

} // namespace jag::graphics
