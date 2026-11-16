// libs/graphics/runetek7/effects/water/WaterFoamShaderEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class WaterFoamShaderEffect {
    public:
        // virtual methods in vtable order
        virtual ~WaterFoamShaderEffect();
        virtual uint8_t Initialise();
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        virtual void BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const;
        virtual uint8_t CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void OnEndFrame();
        void SetParameters(const WaterParameters& waterParameters, int arg2);
        WaterFoamShaderEffect(RT7Core& rt7Core, int arg2);

    private:
        GraphicsQuality field_8;
        uint8_t _unknown_12[4];
        RT7Core* field_16;
        unsigned int field_24;
        uint8_t _unknown_28[20];
        float field_48;
        float field_52;
        uint8_t _unknown_56[4];
    };

    // 0x100923810
    WaterFoamShaderEffect::~WaterFoamShaderEffect() {
        field_32.~shared_ptr();
        destruct<oldscape::highlight::NpcUID*>();
    }

    // 0x10093cf70
    WaterFoamShaderEffect::WaterFoamShaderEffect(RT7Core& rt7Core, int arg2)
        : ShaderEffect(rt7Core), field_24(4294967295) {
        new (&field_32) shared_ptr();
        field_48 = 0.0;
        field_52 = 0.0;
    }

} // namespace jag::graphics
