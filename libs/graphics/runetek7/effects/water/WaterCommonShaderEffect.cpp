// libs/graphics/runetek7/effects/water/WaterCommonShaderEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "WaterCommonShaderEffect.h"

namespace jag::graphics {
    // 0x100022b10: WaterCommonShaderEffect::~WaterCommonShaderEffect() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10091ff90
    uint8_t WaterCommonShaderEffect::Initialise() {
        return 1;
    }

    // 0x10091ffa0
    void WaterCommonShaderEffect::SetShaderConstants(render::DrawCallState& drawCallState,
                                                     render::RenderContext& renderContext, Shader& shader) const {
        auto this_00 = shader.GetProgram();
        float arg1 = (float)FrameTime::GetSecondsSinceProgramStart();
        Point<float> local_28(arg1, field_24);
        auto pHVar1 = graphics::operator*(120);
        this_00->SetShaderConstVector4(pHVar1, &field_32);
        pHVar1 = (HashedString*)graphics::operator*(121);
        this_00->SetShaderConstVector2(*pHVar1, &local_28);
        pHVar1 = (HashedString*)graphics::operator*(128);
        this_00->SetShaderConstVector4(pHVar1, &field_48);
        ImVec4 local_38(field_72, 0.0, field_68, field_64);
        pHVar1 = (HashedString*)graphics::operator*(131);
        this_00->SetShaderConstVector4(pHVar1, &local_38);
    }

    // 0x100920060
    void WaterCommonShaderEffect::BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const {}

    // 0x100920070
    uint8_t WaterCommonShaderEffect::CreateRenderingResources() {
        return 1;
    }

    // 0x100920080
    void WaterCommonShaderEffect::DestroyRenderingResources() {}

    // 0x100920090
    void WaterCommonShaderEffect::OnEndFrame() {}

    // 0x1009200a0
    void WaterCommonShaderEffect::SetParameters(const WaterParameters& waterParameters) {
        uint64_t in_XMM1_Qa;

        uint64_t local_28 = waterParameters.GetWaterNormalMapTextureScalesFlowNoiseScale();
        uint32_t uStack_20 = (uint32_t)in_XMM1_Qa;
        uint32_t uStack_1c = (uint32_t)((unsigned long)in_XMM1_Qa >> 32);
        field_48 = local_28;
        uint64_t uVar3 = WaterParameters::GetFeatureFlags();
        uStack_20 = (uint32_t)in_XMM1_Qa;
        uStack_1c = (uint32_t)((unsigned long)in_XMM1_Qa >> 32);
        local_28 = uVar3;
        field_32 = local_28;
        float fVar2 = (float)waterParameters.GetWaterSpecularShininess();
        field_64 = fVar2;
        fVar2 = (float)waterParameters.GetWaterSpecularPower();
        field_68 = fVar2;
        fVar2 = (float)waterParameters.GetFresnelBias();
        field_72 = fVar2;
        bool cVar1 = field_16->GetEffectManager()->IsEnabled(94);
        fVar2 = 0.0;
        if (cVar1) {
            fVar2 = (float)waterParameters.GetFade();
        }
        field_24 = fVar2;
    }

    // 0x100920260
    auto WaterCommonShaderEffect::BuildDefines() {
        auto result;
        result.basic_string<decltype(nullptr)>("");
        return result;
    }

    // 0x100920280
    void WaterCommonShaderEffect::UseGLES2CompatMode() {
        return 0;
    }

    // 0x100920290
    auto WaterCommonShaderEffect::BuildUniforms() {
        basic_ostream<char, std::char_traits<char> _> local_118;

        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_128;
        std::operator<<(&local_118,
                        "uniform lowp vec4 uWaterFeatureFlags;\nuniform highp vec4 "
                        "uWaterNormalMapTextureScales_FlowNoiseScale;\nuniform highp vec2 uWaterTickFade;\n");
        auto result = local_128.str();
        return result;
    }

} // namespace jag::graphics
