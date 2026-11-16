// libs/graphics/runetek7/effects/water/WaterExtinctionShaderEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "WaterExtinctionShaderEffect.h"

namespace jag::graphics {
    // 0x100022b10: WaterExtinctionShaderEffect::~WaterExtinctionShaderEffect() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x1009208d0
    uint8_t WaterExtinctionShaderEffect::Initialise() {
        return 1;
    }

    // 0x1009208e0
    void WaterExtinctionShaderEffect::SetShaderConstants(render::DrawCallState& drawCallState,
                                                         render::RenderContext& renderContext, Shader& shader) const {
        auto shaderProgram = shader.GetProgram();
        SetUniforms(*shaderProgram);
    }

    // 0x100920910
    void WaterExtinctionShaderEffect::SetUniforms(const render::ShaderProgram& shaderProgram) const {
        auto pHVar1 = graphics::operator*(136);
        shaderProgram.SetShaderConstVector3(pHVar1, field_32);
        pHVar1 = (HashedString*)graphics::operator*(137);
        shaderProgram.SetShaderConstVector3(pHVar1, &field_48);
        pHVar1 = (HashedString*)graphics::operator*(138);
        shaderProgram.SetShaderConstFloat1(pHVar1, field_60);
        pHVar1 = (HashedString*)graphics::operator*(12);
        shaderProgram.SetShaderConstMatrix4(pHVar1, 1, &field_64, 1);
    }

    // 0x1009209a0
    void WaterExtinctionShaderEffect::BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const {}

    // 0x1009209b0
    uint8_t WaterExtinctionShaderEffect::CreateRenderingResources() {
        return 1;
    }

    // 0x1009209c0
    void WaterExtinctionShaderEffect::DestroyRenderingResources() {}

    // 0x1009209d0
    void WaterExtinctionShaderEffect::OnEndFrame() {}

    // 0x1009209e0
    void WaterExtinctionShaderEffect::SetParameters(const WaterParameters& waterParameters,
                                                    const math::Matrix44T<float>& matrix44) {
        uint64_t local_30[2];

        auto vector3 = waterParameters.GetExtinctionRGBDepthMetres();
        field_32->SetXYZ(*vector3);
        local_30[0] = waterParameters.GetExtinctionOpaqueWaterColour();
        field_48.SetXYZ(*local_30);
        field_60 = (float)waterParameters.GetExtinctionVisibilityMetres();
        math::Matrix44Inverse<float>(field_64, nullptr, matrix44);
    }

} // namespace jag::graphics
