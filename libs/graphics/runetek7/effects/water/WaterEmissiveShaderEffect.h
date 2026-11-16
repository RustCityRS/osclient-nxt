// libs/graphics/runetek7/effects/water/WaterEmissiveShaderEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class WaterEmissiveShaderEffect {
    public:
        // virtual methods in vtable order
        virtual ~WaterEmissiveShaderEffect();
        virtual uint8_t Initialise();
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        virtual void BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const;
        virtual uint8_t CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void OnEndFrame();
        void SetUniforms(const render::ShaderProgram& shaderProgram) const;
        void SetParameters(const WaterParameters& waterParameters, unsigned int arg2);
        WaterEmissiveShaderEffect(RT7Core& rt7Core, int arg2);

    private:
        GraphicsQuality field_8;
        uint8_t _unknown_12[4];
        RT7Core* field_16;
        unsigned int field_24;
        uint8_t _unknown_28[20];
        uint64_t field_48;
        uint64_t field_56;
        uint64_t field_64;
        uint64_t field_72;
        uint8_t _unknown_80[16];
        uint32_t field_96;
        float field_100;
        float field_104;
        uint8_t _unknown_108[4];
    };

    // 0x1009237e0
    WaterEmissiveShaderEffect::~WaterEmissiveShaderEffect() {
        field_32.~shared_ptr();
        destruct<oldscape::highlight::NpcUID*>();
    }

    // 0x10093d380
    WaterEmissiveShaderEffect::WaterEmissiveShaderEffect(RT7Core& rt7Core, int arg2)
        : ShaderEffect(rt7Core), field_24(4294967295) {
        new (&field_32) shared_ptr();
        uint64_t uVar1 = *(uint64_t*)(PTR_ONE_100ee6700 + 8);
        field_48 = *(uint64_t*)PTR_ONE_100ee6700;
        field_56 = uVar1;
        uVar1 = *(uint64_t*)(PTR_ZERO_100ee6708 + 8);
        field_64 = *(uint64_t*)PTR_ZERO_100ee6708;
        field_72 = uVar1;
        new (&field_80) ImVec4(1.0, 0.0, 1.0, 1.0);
        new (&field_96) math::Point(1.0, 0.0);
        field_104 = 0.0;
    }

} // namespace jag::graphics
