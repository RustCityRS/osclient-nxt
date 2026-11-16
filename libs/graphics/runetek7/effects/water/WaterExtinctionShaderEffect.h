// libs/graphics/runetek7/effects/water/WaterExtinctionShaderEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class WaterExtinctionShaderEffect {
    public:
        // virtual methods in vtable order
        virtual ~WaterExtinctionShaderEffect();
        virtual uint8_t Initialise();
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        virtual void BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const;
        virtual uint8_t CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void OnEndFrame();
        void SetUniforms(const render::ShaderProgram& shaderProgram) const;
        void SetParameters(const WaterParameters& waterParameters, const math::Matrix44T<float>& matrix44);
        WaterExtinctionShaderEffect(RT7Core& rt7Core, int arg2);

    private:
        GraphicsQuality field_8;
        uint8_t _unknown_12[4];
        RT7Core* field_16;
        uint8_t _unknown_24[8];
        ColourHSL field_32;
        uint64_t field_48;
        uint32_t field_56;
        float field_60;
        uint8_t _unknown_64[8];
    };

    // 0x10093d160
    WaterExtinctionShaderEffect::WaterExtinctionShaderEffect(RT7Core& rt7Core, int arg2)
        : ShaderEffect(rt7Core), field_32(45.0, 75.0, 300.0) {
        uint8_t* puVar1 = PTR_ONE_100ee66d8;
        field_56 = *(uint32_t*)(PTR_ONE_100ee66d8 + 8);
        field_48 = *(uint64_t*)puVar1;
        field_60 = 10.0;
        new (&field_64) math::Matrix44T<float>();
    }

} // namespace jag::graphics
