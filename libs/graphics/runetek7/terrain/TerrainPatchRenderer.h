// libs/graphics/runetek7/terrain/TerrainPatchRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class TerrainPatchRenderer {
    public:
        // virtual methods in vtable order
        virtual ~TerrainPatchRenderer();
        VertexDeclaration* GetVertexDecl();
        VertexDeclaration* GetVertexDeclPos();
        TerrainPatchRenderer();
        void Destroy();
        uint32_t Initialise(RT7Core& rt7Core);
        void CreateRenderingResources();
        void DestroyRenderingResources();
        void Render(const TerrainPatch_DE& terrainPatch_DE, render::RenderContext& renderContext,
                    const render::DrawCallState& drawCallState, const SceneViewData& sceneViewData,
                    RenderPassType renderPassType, EffectManager& effectManager);
        void InitialiseVertexDeclarations();
        static render::VertexDeclaration m_vertexDecl;    // = VertexDeclaration()
        static render::VertexDeclaration m_vertexDeclPos; // = VertexDeclaration()

    private:
        uint32_t field_8;
        uint32_t field_12;
        uint8_t _unknown_16[4];
    };

    // 0x1007b5680
    VertexDeclaration* TerrainPatchRenderer::GetVertexDecl() {
        return (VertexDeclaration*)&m_vertexDecl;
    }

    // 0x1007b5780
    VertexDeclaration* TerrainPatchRenderer::GetVertexDeclPos() {
        return (VertexDeclaration*)&m_vertexDeclPos;
    }

    // 0x1007b5b00
    GridGroup* GridGroup::GetGridTile() {
        GridGroup* pGVar1 = nullptr;
        if (field_40 != '\0') {
            pGVar1 = this;
        }
        return pGVar1;
    }

    // 0x1007b5c40
    uint8_t* GridGroup::GetGridTileOverlay() {
        uint8_t* puVar1 = nullptr;
        if (field_120 != '\0') {
            puVar1 = &field_80;
        }
        return puVar1;
    }

    // 0x1007b5c60
    uint8_t* GridGroup::GetGridTileUnderlay() {
        uint8_t* puVar1 = nullptr;
        if (field_200 != '\0') {
            puVar1 = &field_160;
        }
        return puVar1;
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x1007b6870
    Vector3T<signed char> Vector3TFromVector3<signed char>(const Vector3T<float>& vector3) {
        unsigned long in_RAX;

        unsigned long local_28 = in_RAX;
        auto pfVar3 = vector3.SSOBeginPtr();
        float fVar1 = *pfVar3;
        pfVar3 = (float*)vector3.y();
        float fVar2 = *pfVar3;
        pfVar3 = (float*)vector3.second();
        new (&local_28) Vector3T((schar)(int)fVar1, (schar)(int)fVar2, (schar)(int)*pfVar3);
        return local_28 & 16777215;
    }

    // 0x1007b68d0
    Vector3T<signed char>* Vector3T<signed char>::operator[](unsigned int arg1) const {
        if (2 < arg1) {
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector3.inl",
                      203, nullptr);
        }
        return this + arg1;
    }

    // 0x1007b6920
    Vector3T<unsigned short>* Vector3T<unsigned short>::operator[](unsigned int arg1) const {
        if (2 < arg1) {
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector3.inl",
                      203, nullptr);
        }
        return this + (unsigned long)arg1 * 2;
    }

    // 0x1007b6960
    Vector3T<unsigned char>* Vector3T<unsigned char>::operator[](unsigned int arg1) const {
        if (2 < arg1) {
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector3.inl",
                      203, nullptr);
        }
        return this + arg1;
    }

} // namespace jag::math
