// libs/graphics/runetek7/effects/shadows/PointLightSMPassEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "PointLightSMPassEffect.h"

namespace jag::graphics {
    // 0x100918920
    unsigned long PointLightSMPassEffect::Initialise() {
        char cVar1 = CreateRenderingResources();
        if (cVar1) {
            field_128.Update(0, &field_32);
        }
        return cVar1 & 4294967295;
    }

    // 0x100918980
    void PointLightSMPassEffect::SetShaderConstants(render::DrawCallState& drawCallState,
                                                    render::RenderContext& renderContext, Shader& shader) const {
        RenderContext* renderContext_00;

        shader.GetProgram();
        SetShaderConstants(drawCallState, *renderContext_00, shader);
    }

    // 0x1009189b0
    void PointLightSMPassEffect::SetShaderConstants(render::DrawCallState& drawCallState,
                                                    render::RenderContext& renderContext,
                                                    const render::ShaderProgram& shaderProgram) const {
        ShaderConstBuffer* shaderConstBuffer;

        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar1 + 120) == '\0') {
            LogAssert("false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "shadows/PointLightSMPassEffect.cpp",
                      36, "Uniform buffer required for point light shadows");
        }
        RenderPipelineState* this_01 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
        unsigned int arg1 = field_200;
        shaderConstBuffer = (ShaderConstBuffer*)field_128.CurrentBuffer();
        this_01->SetPSShaderConstBuffer(arg1, shaderConstBuffer);
    }

    // 0x100918a30
    void PointLightSMPassEffect::BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const {
        long lVar2 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar2 + 120) == '\0') {
            LogAssert("false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "shadows/PointLightSMPassEffect.cpp",
                      51, "Uniform buffer required for point light shadows");
        }
        if (BindConstBufferToShader(render::ShaderProgram const&)::pointLightShadowPassConstBlockName == '\0') {
            if (___cxa_guard_acquire(
                    &BindConstBufferToShader(render::ShaderProgram const&)::pointLightShadowPassConstBlockName) != 0) {
                new ((HashedString*)&BindConstBufferToShader(
                    render::ShaderProgram const&)::pointLightShadowPassConstBlockName)
                    HashedString("PointLightShadowPass");
                ___cxa_guard_release(
                    &BindConstBufferToShader(render::ShaderProgram const&)::pointLightShadowPassConstBlockName);
            }
        }
        unsigned int arg1 = field_200;
        unsigned int arg3 = field_128.GetAmplitude();
        shaderProgram.BindConstBufferSlot(arg1,
                                          *((HashedString*)&BindConstBufferToShader(
                                              render::ShaderProgram const&)::pointLightShadowPassConstBlockName),
                                          arg3);
    }

    // 0x100918b00
    void PointLightSMPassEffect::SetLightViewProjTrans(const math::Matrix44T<float>& matrix44) {
        field_32 = matrix44;
        field_128.Update(0, &field_32);
    }

    // 0x100918b30
    void PointLightSMPassEffect::SetLightPos(const math::Vector3T<float>& vector3) {
        field_96.Set(vector3, 1.0);
        field_128.Update(0, &field_32);
    }

    // 0x100918b70
    void PointLightSMPassEffect::SetNearFarClip(float arg1, float arg2) {
        field_112.Set(arg1, arg2 * arg2, 1.0 / (arg2 * arg2), 1.0 / arg2);
        field_128.Update(0, &field_32);
    }

    // 0x100918bc0
    void PointLightSMPassEffect::CreateRenderingResources() {
        field_128.Create(1, &field_32);
    }

    // 0x100918c00
    void PointLightSMPassEffect::DestroyRenderingResources() {
        field_128.Destroy();
    }

    // 0x100918c10
    void PointLightSMPassEffect::OnEndFrame() {
        field_128.RotateBuffers();
    }

} // namespace jag::graphics
