// libs/graphics/runetek7/effects/water/WaterFoamShaderEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "WaterFoamShaderEffect.h"

namespace jag::graphics {
    // 0x100920ae0
    uint8_t WaterFoamShaderEffect::Initialise() {
        return 1;
    }

    // 0x100920af0
    void WaterFoamShaderEffect::SetShaderConstants(render::DrawCallState& drawCallState,
                                                   render::RenderContext& renderContext, Shader& shader) const {
        unsigned int arg1;
        int arg3;
        RenderPipelineState* this_01;
        Texture* texture;
        HashedString* pHVar2;

        auto this_00 = shader.GetProgram();
        if (field_32 != nullptr) {
            this_01 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
            arg1 = field_24;
            texture = (Texture*)field_32.end();
            pHVar2 = (HashedString*)graphics::operator*(135);
            arg3 = this_00->GetConstIndex(*pHVar2);
            this_01->SetPSTextureSamplerPair(arg1, texture, arg3, nullptr, true);
        }
        Point<float> local_38(field_48, field_52);
        pHVar2 = (HashedString*)graphics::operator*(122);
        this_00->SetShaderConstVector2(*pHVar2, &local_38);
    }

    // 0x100920bb0
    void WaterFoamShaderEffect::BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const {}

    // 0x100920bc0
    uint8_t WaterFoamShaderEffect::CreateRenderingResources() {
        return 1;
    }

    // 0x100920bd0
    void WaterFoamShaderEffect::DestroyRenderingResources() {}

    // 0x100920be0
    void WaterFoamShaderEffect::OnEndFrame() {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        field_32 = local_28;
        field_24 = 4294967295;
    }

    // 0x100920c40
    void WaterFoamShaderEffect::SetParameters(const WaterParameters& waterParameters, int arg2) {
        field_24 = arg2;
        auto texture = waterParameters.GetEmissiveUVScale();
        field_32 = *texture;
        float fVar1 = (float)waterParameters.GetWaterFoamScale();
        field_48 = fVar1;
        fVar1 = (float)waterParameters.GetWaterDepthFoam();
        field_52 = fVar1;
    }

} // namespace jag::graphics
