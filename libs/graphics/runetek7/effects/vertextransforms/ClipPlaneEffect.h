// libs/graphics/runetek7/effects/vertextransforms/ClipPlaneEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class ClipPlaneEffect {
    public:
        // virtual methods in vtable order
        virtual ~ClipPlaneEffect();
        virtual unsigned long Initialise();
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        virtual void BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const;
        virtual void CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void OnEndFrame();
        void UpdateShaderConstants();
        void SetClipPlane(const math::Vector4T<float>& vector4);
        ClipPlaneEffect(RT7Core& rt7Core, int arg2);

    private:
        GraphicsQuality field_8;
        uint8_t _unknown_12[4];
        RT7Core* field_16;
        uint8_t _unknown_24[96];
        unsigned int field_120;
        uint8_t _unknown_124[36];
    };

    // 0x100923660
    ClipPlaneEffect::~ClipPlaneEffect() {
        field_48.~TypedShaderConstBuffer();
        destruct<oldscape::highlight::NpcUID*>();
    }

    // 0x10093c730
    ClipPlaneEffect::ClipPlaneEffect(RT7Core& rt7Core, int arg2) : ShaderEffect(rt7Core), field_120(arg2) {}

} // namespace jag::graphics
