// libs/graphics/runetek7/lighting/shadowmapping/PointLightSM.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class PointLightSM {
    public:
        class ShaderConsts;
        // virtual methods in vtable order
        virtual ~PointLightSM();
        void GetParentPointLightSMManager();
        uint8_t* GetShadowCubeMapLodAtlasData() const;
        int GetLODLevel() const;
        PointLightSM* GetShadowCubeMapFaceViewport(render::CubeFace cubeFace) const;
        void GetShadowCubeMapFacePass(render::CubeFace cubeFace);
        PointLightSM(const Array<std::array<graphicutils::TextureAtlasSlot2D, 6ul>>& textureAtlasSlot2Dss,
                     PointLightSMManager* pointLightSMManager, unsigned long arg3);
        void Destroy();
        void ComputeLinearLightLODLevel(const math::Sphere& sphere, const ViewTransforms& viewTransforms, float arg3);
        void GetLODLevels() const;
        void SetLODLevel(int arg1);
        void ResetPasses();
        void SetShadowParams(const LightShadowParams& lightShadowParams);
        void GetShaderConsts(ShaderConsts& shaderConsts, float arg2, float arg3) const;
        int GetID() const;
        uint8_t* GetShadowParams() const;

    private:
        PointLightSMManager* field_8;
        uint8_t _unknown_16[6848];
        int m_lODLevel;
        int m_iD;
        uint8_t m_shadowParams;
        uint8_t _unknown_6873[3];
        int field_6876;
        uint8_t _unknown_6880[4];
        float field_6884;
        uint8_t _unknown_6888[4];
    };

    class PointLightSM::ShaderConsts {
    public:
        void Clear();

    private:
        ReturnValue field_0;
        ReturnValue field_8;
        uint8_t _unknown_16[40];
    };

    // 0x10047dd60
    int PointLightSM::GetLODLevel() const {
        return m_lODLevel;
    }

    // 0x10047dd80
    PointLightSM* PointLightSM::GetShadowCubeMapFaceViewport(render::CubeFace cubeFace) const {
        CubeFace in_EDX;
        uint32_t in_register_00000034;

        long lVar2 =
            (*((vector<ShadowCubeMapAtlasData>*)((((uint64_t)in_register_00000034 << 32) | (uint32_t)cubeFace) + 16)))[(
                long)*(int*)((((uint64_t)in_register_00000034 << 32) | (uint32_t)cubeFace) + 6864)];
        int iVar1 = render::GetCubeMapFaceIndex(in_EDX);
        Minimap* this_00 = (Minimap*)(*((lVar2 + 60)))[(long)iVar1];
        iVar1 = this_00->GetX();
        int arg2 = this_00->GetZ();
        int arg3 = this_00->GetPos();
        int arg4 = this_00->GetLevel();
        new (this) render::Viewport(iVar1, arg2, arg3, arg4, 0.0, 1.0);
        return this;
    }

    // 0x10047e130
    void PointLightSM::GetShadowCubeMapFacePass(render::CubeFace cubeFace) {
        int iVar1 = render::GetCubeMapFaceIndex(cubeFace);
        field_48[(long)iVar1];
    }

    // 0x1008ae020
    void PointLightSM::GetLODLevels() const {
        field_16.size();
    }

    // 0x1008af240
    int PointLightSM::GetID() const {
        return m_iD;
    }

    // 0x1008b01e0
    uint8_t* PointLightSM::GetShadowParams() const {
        return &m_shadowParams;
    }

    // 0x1009222e0
    void PointLightSM::ShaderConsts::Clear() {
        void result;
        ReturnValue result;

        *this = math::Vector4T<float>::SetToZero();
        field_16 = math::Vector4T<float>::SetToZero();
        field_32 = math::Vector2T<float>::SetToZero();
        field_40 = math::Vector2T<float>::SetToZero();
        &result = (ReturnValue*)std::array<math::Vector4T<float>, 6ul>::begin();
        ReturnValue* pRVar1 = (ReturnValue*)std::array<math::Vector4T<float>, 6ul>::end();
        for (; &result != pRVar1; &result = &result + 2) {
            result = math::Vector4T<float>::SetToZero();
        }
    }

} // namespace jag::graphics
