// libs/graphics/runetek7/effects/shadows/PointLightSMPassEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class PointLightSMPassEffect {
    public:
        class ShaderConsts;
        // virtual methods in vtable order
        virtual ~PointLightSMPassEffect();
        virtual unsigned long Initialise();
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        virtual void BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const;
        virtual void CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void OnEndFrame();
        void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                const render::ShaderProgram& shaderProgram) const;
        void SetLightViewProjTrans(const math::Matrix44T<float>& matrix44);
        void SetLightPos(const math::Vector3T<float>& vector3);
        void SetNearFarClip(float arg1, float arg2);
        PointLightSMPassEffect(RT7Core& rt7Core, int arg2);

    private:
        GraphicsQuality field_8;
        uint8_t _unknown_12[4];
        RT7Core* field_16;
        uint8_t _unknown_24[176];
        unsigned int field_200;
        uint8_t _unknown_204[36];
    };

    class PointLightSMPassEffect::ShaderConsts {
    public:
        ShaderConsts();

        uint8_t _unknown_0[88];
    };

    // 0x100921f70
    void DrawableElementPool<SkyBox_DE>::Release() {
        GetDrawableElementPool();
        if (((FastPool<SkyBox_DE, int>*)&GetDrawableElementPool()::pool)->is_owner(this) == '\0') {
            if (this != nullptr) {
                ~();
            }
        } else {
            ((FastPool<SkyBox_DE, int>*)&GetDrawableElementPool()::pool)->Destroy(this);
        }
    }

    // 0x1009233b0
    PointLightSMPassEffect::~PointLightSMPassEffect() {
        field_128.~TypedShaderConstBuffer();
        destruct<oldscape::highlight::NpcUID*>();
    }

    // 0x10093b460
    PointLightSMPassEffect::PointLightSMPassEffect(RT7Core& rt7Core, int arg2)
        : ShaderEffect(rt7Core), field_200(arg2) {}

    // 0x10093b4d0
    PointLightSMPassEffect::ShaderConsts::ShaderConsts() : math::Matrix44T<float>() {}

} // namespace jag::graphics
