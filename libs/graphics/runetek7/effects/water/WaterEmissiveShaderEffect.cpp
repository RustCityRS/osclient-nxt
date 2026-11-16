// libs/graphics/runetek7/effects/water/WaterEmissiveShaderEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "WaterEmissiveShaderEffect.h"

namespace jag::graphics {
    // 0x1009203d0
    uint8_t WaterEmissiveShaderEffect::Initialise() {
        return 1;
    }

    // 0x1009203e0
    void WaterEmissiveShaderEffect::SetShaderConstants(render::DrawCallState& drawCallState,
                                                       render::RenderContext& renderContext, Shader& shader) const {
        unsigned int arg1;
        int arg3;
        RenderPipelineState* this_00;
        Texture* texture;
        ShaderProgram* pSVar2;
        HashedString* hashedString;

        if ((field_32 != nullptr) && (field_24 != 4294967295)) {
            this_00 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
            arg1 = field_24;
            texture = (Texture*)field_32.end();
            pSVar2 = shader.GetProgram();
            hashedString = (HashedString*)graphics::operator*(173);
            arg3 = pSVar2->GetConstIndex(*hashedString);
            this_00->SetPSTextureSamplerPair(arg1, texture, arg3, nullptr, true);
        }
        pSVar2 = shader.GetProgram();
        SetUniforms(*pSVar2);
    }

    // 0x100920490
    void WaterEmissiveShaderEffect::SetUniforms(const render::ShaderProgram& shaderProgram) const {
        auto pHVar1 = graphics::operator*(174);
        shaderProgram.SetShaderConstVector4(pHVar1, &field_48);
        pHVar1 = (HashedString*)graphics::operator*(175);
        shaderProgram.SetShaderConstVector4(pHVar1, &field_64);
        pHVar1 = (HashedString*)graphics::operator*(176);
        shaderProgram.SetShaderConstVector4(pHVar1, &field_80);
        pHVar1 = (HashedString*)graphics::operator*(177);
        shaderProgram.SetShaderConstVector2(*pHVar1, &field_96);
        pHVar1 = (HashedString*)graphics::operator*(178);
        shaderProgram.SetShaderConstFloat1(pHVar1, field_104);
    }

    // 0x100920520
    void WaterEmissiveShaderEffect::BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const {}

    // 0x100920530
    uint8_t WaterEmissiveShaderEffect::CreateRenderingResources() {
        return 1;
    }

    // 0x100920540
    void WaterEmissiveShaderEffect::DestroyRenderingResources() {}

    // 0x100920550
    void WaterEmissiveShaderEffect::OnEndFrame() {

        field_24 = 4294967295;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        field_32 = local_28;
    }

    // 0x1009205b0
    void WaterEmissiveShaderEffect::SetParameters(const WaterParameters& waterParameters, unsigned int arg2) {
        auto texture = waterParameters.GetRenderTargets();
        field_32 = *texture;
        auto vector3 = waterParameters.GetEmissiveColour();
        float fVar4 = (float)waterParameters.GetEmissiveSource();
        Vector4T<float> local_58(*vector3, fVar4);
        field_48 = local_58;
        float local_3c = (float)waterParameters.GetEmissiveScale();
        float local_38 = (float)waterParameters.GetEmissiveMapRefractionDepth();
        uint8_t bVar1 = waterParameters.GetEmissiveMapMode();
        float local_34 = (float)bVar1;
        bool bVar2 = field_32 != nullptr;
        local_58 = ImVec4(local_3c, local_38, local_34, (float)bVar2);
        field_64 = local_58;
        auto pfVar3 = waterParameters.GetEmissiveUVScale();
        local_3c = *pfVar3;
        local_38 = pfVar3[1];
        local_34 = (float)waterParameters.GetEmissiveFlowSpeed();
        fVar4 = (float)waterParameters.GetEmissiveFlowRotationDegrees();
        fVar4 = (float)math::Deg2Rad(fVar4);
        local_58 = ImVec4(local_34, fVar4, local_3c, local_38);
        field_80 = local_58;
        field_96 = waterParameters.GetEmissiveMapMaterialScale();
        bVar1 = waterParameters.GetEmissiveUVMode();
        field_100 = (float)bVar1;
        fVar4 = (float)waterParameters.GetEmissiveBlend();
        field_104 = fVar4;
        field_24 = arg2;
    }

} // namespace jag::graphics
