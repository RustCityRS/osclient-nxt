// libs/graphics/runetek7/effects/vertextransforms/ViewTransformsEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class ViewTransformsEffect {
    public:
        class ShaderConsts;
        // virtual methods in vtable order
        virtual ~ViewTransformsEffect();
        virtual unsigned long Initialise();
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        virtual void BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const;
        virtual void CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void OnEndFrame();
        Option<float>* GetViewTransforms() const;
        void SetViewTransforms(const math::Matrix44T<float>& matrix441, const math::Matrix44T<float>& matrix442,
                               float arg3, float arg4);
        ViewTransformsEffect(RT7Core& rt7Core, int arg2);

    private:
        GraphicsQuality field_8;
        uint8_t _unknown_12[4];
        RT7Core* field_16;
        uint8_t _unknown_24[8];
        ViewTransforms field_32;
        uint8_t _unknown_184[144];
        int field_328;
        uint8_t _unknown_332[6515540];
    };

    class ViewTransformsEffect::ShaderConsts {
    public:
        ShaderConsts();

        uint8_t _unknown_0[216];
    };

    // 0x100923690
    ViewTransformsEffect::~ViewTransformsEffect() {
        field_256.~TypedShaderConstBuffer();
        destruct<oldscape::highlight::NpcUID*>();
    }

    // 0x10093c300
    ViewTransformsEffect::ViewTransformsEffect(RT7Core& rt7Core, int arg2) : ShaderEffect(rt7Core), field_328(arg2) {}

    // 0x10093c370
    ViewTransformsEffect::ShaderConsts::ShaderConsts() : ViewTransforms() {}

} // namespace jag::graphics
