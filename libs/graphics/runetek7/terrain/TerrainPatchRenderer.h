// libs/graphics/runetek7/terrain/TerrainPatchRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class TerrainPatchRenderer {
    public:
        // virtual methods in vtable order
        virtual ~TerrainPatchRenderer();
        GetVertexDecl();
        GetVertexDeclPos();
        TerrainPatchRenderer();
        void Destroy();
        Initialise(RT7Core&);
        CreateRenderingResources();
        void DestroyRenderingResources();
        void Render(TerrainPatch_DE const&, render::RenderContext&, render::DrawCallState const&, SceneViewData const&,
                    RenderPassType, EffectManager&);
        void InitialiseVertexDeclarations();
        static render::VertexDeclaration /* 96 bytes */ m_vertexDecl;    // = VertexDeclaration()
        static render::VertexDeclaration /* 96 bytes */ m_vertexDeclPos; // = VertexDeclaration()

        // data members, from how the methods use this: 20 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        char _unknown_16[4];
    };

    // 0x1007b5680, 16 bytes, inline, placed by class name and debug map
    // TerrainPatchRenderer::GetVertexDecl()
    undefined1* TerrainPatchRenderer::GetVertexDecl() {
        return &m_vertexDecl;
    }

    // 0x1007b5780, 16 bytes, inline, placed by class name and debug map
    // TerrainPatchRenderer::GetVertexDeclPos()
    undefined1* TerrainPatchRenderer::GetVertexDeclPos() {
        return &m_vertexDeclPos;
    }

    // 0x1007b5b00, 16 bytes, inline, placed by debug map only (low confidence)
    // GridGroup::GetGridTile()
    /* GridGroup::GetGridTile() const */

    GridGroup* GridGroup::GetGridTile() {
        GridGroup* pGVar1;

        pGVar1 = (GridGroup*)0;
        if (field_40 != '\0') {
            pGVar1 = this;
        }
        return pGVar1;
    }

    // 0x1007b5c40, 32 bytes, inline, placed by debug map only (low confidence)
    // GridGroup::GetGridTileOverlay()
    /* GridGroup::GetGridTileOverlay() const */

    undefined1* GridGroup::GetGridTileOverlay() {
        undefined1* puVar1;

        puVar1 = (undefined1*)0;
        if (field_120 != '\0') {
            puVar1 = &field_80;
        }
        return puVar1;
    }

    // 0x1007b5c60, 32 bytes, inline, placed by debug map only (low confidence)
    // GridGroup::GetGridTileUnderlay()
    /* GridGroup::GetGridTileUnderlay() const */

    undefined1* GridGroup::GetGridTileUnderlay() {
        undefined1* puVar1;

        puVar1 = (undefined1*)0;
        if (field_200 != '\0') {
            puVar1 = &field_160;
        }
        return puVar1;
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x1007b6870, 96 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<signed char> Vector3TFromVector3<signed char>(Vector3T<float> const&)
    ulong Vector3TFromVector3<signed char>(Vector3T* param_1) {
        float fVar1;
        float fVar2;
        ulong in_RAX;
        vector* pvVar3;
        float* pfVar4;
        ulong local_28;

        local_28 = in_RAX;
        pvVar3 = SSOBeginPtr(param_1);
        fVar1 = *(float*)pvVar3;
        pfVar4 = (float*)y();
        fVar2 = *pfVar4;
        pfVar4 = (float*)second();
        new (&local_28) Vector3T<unsigned char>((uchar)(int)fVar1, (uchar)(int)fVar2, (uchar)(int)*pfVar4);
        return local_28 & 16777215;
    }

    // 0x1007b68d0, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<signed char>::operator[](unsigned int) const
    Vector3T<signed char>* Vector3T<signed char>::operator[](uint param_1) {
        if (2 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector3.inl",
                      203, (char*)0);
        }
        return this + param_1;
    }

    // 0x1007b6920, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<unsigned short>::operator[](unsigned int) const
    Vector3T<unsigned short>* Vector3T<unsigned short>::operator[](uint param_1) {
        if (2 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector3.inl",
                      203, (char*)0);
        }
        return this + (ulong)param_1 * 2;
    }

    // 0x1007b6960, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<unsigned char>::operator[](unsigned int) const
    Vector3T<unsigned char>* Vector3T<unsigned char>::operator[](uint param_1) {
        if (2 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector3.inl",
                      203, (char*)0);
        }
        return this + param_1;
    }

} // namespace jag::math
