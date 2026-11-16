// libs/graphics/runetek7/lighting/shadowmapping/PointLightSM.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class PointLightSM {
    public:
        class ShaderConsts;
        // virtual methods in vtable order
        virtual ~PointLightSM();
        GetParentPointLightSMManager();
        GetShadowCubeMapLodAtlasData() const;
        int GetLODLevel() const;
        GetShadowCubeMapFaceViewport(render::CubeFace) const;
        void GetShadowCubeMapFacePass(render::CubeFace);
        PointLightSM(Array<std::array<graphicutils::TextureAtlasSlot2D, 6ul>, BucketAllocatorEASTL> const&,
                     PointLightSMManager*, unsigned long);
        void Destroy();
        void ComputeLinearLightLODLevel(math::Sphere const&, ViewTransforms const&, float);
        void GetLODLevels() const;
        void SetLODLevel(int);
        void ResetPasses();
        void SetShadowParams(LightShadowParams const&);
        void GetShaderConsts(ShaderConsts&, float, float) const;
        int GetID() const;
        GetShadowParams() const;

        // data members, from how the methods use this: 6892 bytes
        undefined** field_0;          // offset 0, vtable pointer
        PointLightSMManager* field_8; // offset 8
        char _unknown_16[6848];
        int m_lODLevel;            // offset 6864
        int m_iD;                  // offset 6868
        undefined1 m_shadowParams; // offset 6872
        char _unknown_6873[3];
        int field_6876; // offset 6876
        char _unknown_6880[4];
        float field_6884; // offset 6884
        char _unknown_6888[4];
    };

    class PointLightSM::ShaderConsts {
    public:
        void Clear();

        // data members, from how the methods use this: 56 bytes
        undefined8 field_0; // offset 0
        undefined8 field_8; // offset 8
        char _unknown_16[40];
    };

    // 0x10047dd60, 16 bytes, inline, placed by class name and debug map
    // PointLightSM::GetLODLevel() const
    int PointLightSM::GetLODLevel() {
        return m_lODLevel;
    }

    // 0x10047dd80, 160 bytes, inline, placed by class name and debug map
    // PointLightSM::GetShadowCubeMapFaceViewport(render::CubeFace) const
    PointLightSM* PointLightSM::GetShadowCubeMapFaceViewport(long param_2, undefined4 param_3) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        long lVar5;
        Minimap* this_00;

        lVar5 = eastl::vector<ShadowCubeMapAtlasData, eastl::allocator>::operator[](
            (vector<ShadowCubeMapAtlasData, eastl::allocator>*)(param_2 + 16), (long)*(int*)(param_2 + 6864));
        iVar1 = render::GetCubeMapFaceIndex(param_3);
        this_00 = (Minimap*)std::array<math::Rect<unsigned int>, 6ul>::operator[](
            (array<math::Rect<unsigned int>, 6ul>*)(lVar5 + 60), (long)iVar1);
        iVar1 = this_00->GetX();
        iVar2 = this_00->GetZ();
        iVar3 = this_00->GetPos();
        iVar4 = this_00->GetLevel();
        new (this) render::Viewport(iVar1, iVar2, iVar3, iVar4, 0.0, 1.0);
        return this;
    }

    // 0x10047e130, 48 bytes, inline, placed by class name and debug map
    // PointLightSM::GetShadowCubeMapFacePass(render::CubeFace)
    void PointLightSM::GetShadowCubeMapFacePass(undefined4 param_2) {
        int iVar1;

        iVar1 = render::GetCubeMapFaceIndex(param_2);
        std::array<PointLightSMPass, 6ul>::operator[]((array<PointLightSMPass, 6ul>*)&field_48, (long)iVar1);
    }

    // 0x1008ae020, 16 bytes, inline, placed by class name
    // PointLightSM::GetLODLevels() const
    void PointLightSM::GetLODLevels() {
        (&field_16)->size();
    }

    // 0x1008af240, 16 bytes, inline, placed by class name
    // PointLightSM::GetID() const
    int PointLightSM::GetID() {
        return m_iD;
    }

    // 0x1008b01e0, 16 bytes, inline, placed by class name
    // PointLightSM::GetShadowParams() const
    undefined1* PointLightSM::GetShadowParams() {
        return &m_shadowParams;
    }

    // 0x1009222e0, 112 bytes, inline, placed by class name
    // PointLightSM::ShaderConsts::Clear()
    void PointLightSM::ShaderConsts::Clear() {
        Vector4T<float>* this_00;
        Vector4T<float>* pVVar1;

        SetToZero();
        (&field_16)->SetToZero();
        (&field_32)->SetToZero();
        (&field_40)->SetToZero();
        this_00 = (Vector4T<float>*)(&field_48)->begin();
        pVVar1 = (Vector4T<float>*)(&field_48)->end();
        for (; this_00 != pVVar1; this_00 = this_00 + 16) {
            this_00->SetToZero();
        }
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x10047dd70, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ColourStorage8888<ARGB8StorageLayout>::ColourStorage8888(Vector4T<float> const&): jumps straight to the base-object constructor

} // namespace jag::math
