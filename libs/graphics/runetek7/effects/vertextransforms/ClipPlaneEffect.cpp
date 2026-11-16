// libs/graphics/runetek7/effects/vertextransforms/ClipPlaneEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ClipPlaneEffect.h"

namespace jag::graphics {
    // 0x10091ed30
    unsigned long ClipPlaneEffect::Initialise() {
        uint8_t uVar1 = CreateRenderingResources();
        UpdateShaderConstants();
        return uVar1 & 4294967295;
    }

    // 0x10091ed60
    void ClipPlaneEffect::UpdateShaderConstants() {
        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar1 + 120) != '\0') {
            field_48.Update(0, &field_32);
        }
    }

    // 0x10091edc0
    void ClipPlaneEffect::BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const {
        unsigned int arg1;
        unsigned int arg3;

        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar1 + 120) != '\0') {
            if (BindConstBufferToShader(render::ShaderProgram const&)::clipPlaneConstBlockName == '\0') {
                if (___cxa_guard_acquire(
                        &BindConstBufferToShader(render::ShaderProgram const&)::clipPlaneConstBlockName) != 0) {
                    new ((HashedString*)&BindConstBufferToShader(render::ShaderProgram const&)::clipPlaneConstBlockName)
                        HashedString("ClipPlane");
                    ___cxa_guard_release(
                        &BindConstBufferToShader(render::ShaderProgram const&)::clipPlaneConstBlockName);
                }
            }
            arg1 = field_120;
            arg3 = field_48.GetAmplitude();
            shaderProgram.BindConstBufferSlot(
                arg1, *((HashedString*)&BindConstBufferToShader(render::ShaderProgram const&)::clipPlaneConstBlockName),
                arg3);
        }
    }

    // 0x10091ee70
    void ClipPlaneEffect::CreateRenderingResources() {
        field_48.Create(1, &field_32);
    }

    // 0x10091eeb0
    void ClipPlaneEffect::DestroyRenderingResources() {
        field_48.Destroy();
    }

    // 0x10091eec0
    void ClipPlaneEffect::OnEndFrame() {
        field_48.RotateBuffers();
    }

    // 0x10091eed0
    void ClipPlaneEffect::SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                             Shader& shader) const {
        unsigned int arg1;
        RenderPipelineState* this_02;
        ShaderConstBuffer* shaderConstBuffer;

        auto this_00 = shader.GetProgram();
        long lVar1 = ((MapArea*)shader.Instance())->GetOrigin();
        if (*(char*)(lVar1 + 120) == '\0') {
            this_00->SetShaderConstVector4((HashedString*)graphics::operator*(87), &field_32);
        } else {
            this_02 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
            arg1 = field_120;
            shaderConstBuffer = (ShaderConstBuffer*)field_48.CurrentBuffer();
            this_02->SetPSShaderConstBuffer(arg1, shaderConstBuffer);
        }
    }

    // 0x10091ef50
    void ClipPlaneEffect::SetClipPlane(const math::Vector4T<float>& vector4) {
        field_32 = vector4;
        UpdateShaderConstants();
    }

} // namespace jag::graphics
