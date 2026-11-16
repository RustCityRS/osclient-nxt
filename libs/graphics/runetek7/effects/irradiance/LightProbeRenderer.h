// libs/graphics/runetek7/effects/irradiance/LightProbeRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class LightProbeRenderer {
    public:
        // virtual methods in vtable order
        virtual ~LightProbeRenderer();
        void GetNumFreeLightProbeResources() const;
        ulong InitialiseLightProbe(LightProbe&);
        GetVertexDecl();
        LightProbeRenderer(unsigned long);
        void Destroy();
        void Initialise(RT7Core&);
        byte CreateRenderingResources();
        void DestroyRenderingResources();
        void InitialiseVertexDeclaration();
        void InitialiseSphereVertices();
        InitialiseLightProbeResources(shared_ptr<render::BufferedRenderTargets>&);
        GetProbeEnvMapRes() const;
        void Render(LightProbe_DE const&, render::RenderContext&, render::DrawCallState const&, SceneViewData const&,
                    RenderPassType, EffectManager&);
        void RecycleRenderingResources(LightProbe&);
        static render::VertexDeclaration /* 96 bytes */ m_vertexDecl; // = VertexDeclaration()
        static /* 4 bytes */ m_enableResourceRecycling;

        // data members, from how the methods use this: 1304 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[192];
        uint field_200; // offset 200
        uint field_204; // offset 204
        char _unknown_208[48];
        undefined4 m_probeEnvMapRes; // offset 256
        char _unknown_260[1044];
    };

    // 0x1004797a0, 32 bytes, inline, placed by class name and debug map
    // LightProbeRenderer::GetNumFreeLightProbeResources() const
    void LightProbeRenderer::GetNumFreeLightProbeResources() {
        (&field_1296)->size();
    }

    // 0x10092fc20, 16 bytes, inline, placed by class name
    // LightProbeRenderer::GetVertexDecl()
    undefined1* LightProbeRenderer::GetVertexDecl() {
        return &m_vertexDecl;
    }

    // 0x100930be0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LightProbeRenderer::GetProbeEnvMapRes() const
    /* game::GraphicsDefaults::GetFont12pxBoldID() const */

    undefined4 game::GraphicsDefaults::GetFont12pxBoldID() {
        return m_font12pxBoldID;
    }

} // namespace jag::graphics
