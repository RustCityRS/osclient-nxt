// libs/graphics/runetek7/effects/water/WaterCommonShaderEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class WaterCommonShaderEffect {
    public:
        // virtual methods in vtable order
        virtual ~WaterCommonShaderEffect();
        virtual uint8_t Initialise();
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        virtual void BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const;
        virtual uint8_t CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void OnEndFrame();
        void SetParameters(const WaterParameters& waterParameters);
        auto BuildDefines();
        void UseGLES2CompatMode();
        auto BuildUniforms();
        WaterCommonShaderEffect(RT7Core& rt7Core, int arg2);

    private:
        GraphicsQuality field_8;
        uint8_t _unknown_12[4];
        RT7Core* field_16;
        float field_24;
        uint8_t _unknown_28[4];
        uint64_t field_32;
        uint64_t field_40;
        uint64_t field_48;
        uint64_t field_56;
        float field_64;
        float field_68;
        float field_72;
        uint8_t _unknown_76[4];
    };

    // 0x10093c920
    WaterCommonShaderEffect::WaterCommonShaderEffect(RT7Core& rt7Core, int arg2)
        : ShaderEffect(rt7Core), field_24(-1.0) {
        uint8_t* puVar2 = PTR_ZERO_100ee6708;
        uint64_t uVar1 = *(uint64_t*)(PTR_ZERO_100ee6708 + 8);
        field_32 = *(uint64_t*)PTR_ZERO_100ee6708;
        field_40 = uVar1;
        uVar1 = *(uint64_t*)(puVar2 + 8);
        field_48 = *(uint64_t*)puVar2;
        field_56 = uVar1;
        field_64 = 0.0;
        field_68 = 0.0;
        field_72 = 0.0;
    }

} // namespace jag::graphics
