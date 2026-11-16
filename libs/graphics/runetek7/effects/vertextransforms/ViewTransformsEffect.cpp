// libs/graphics/runetek7/effects/vertextransforms/ViewTransformsEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ViewTransformsEffect.h"

namespace jag::graphics {
    // 0x10002d850: ViewTransformsEffect::GetViewTransforms() const has the same machine code as oldscape::option::Option<int>::GetDefaultValue() const

    // 0x10091efe0
    unsigned long ViewTransformsEffect::Initialise() {
        uint8_t uVar1 = CreateRenderingResources();
        field_256.Update(0, field_32);
        return uVar1 & 4294967295;
    }

    // 0x10091f030
    void ViewTransformsEffect::SetShaderConstants(render::DrawCallState& drawCallState,
                                                  render::RenderContext& renderContext, Shader& shader) const {
        uint8_t* this_00;
        unsigned int uVar1;
        RenderPipelineState* pRVar3;
        ShaderConstBuffer* pSVar4;
        ShaderProgram* this_02;
        HashedString* pHVar5;
        Vector3T<float>* vector3;
        Matrix44T<float>* pMVar6;

        long lVar2 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar2 + 120) == '\0') {
            this_02 = shader.GetProgram();
            pHVar5 = (HashedString*)graphics::operator*(111);
            this_00 = field_32;
            vector3 = (Vector3T<float>*)this_00->SSOBeginPtr();
            this_02->SetShaderConstVector3(pHVar5, vector3);
            pHVar5 = (HashedString*)graphics::operator*(2);
            pMVar6 = (Matrix44T<float>*)this_00->GetScreen();
            this_02->SetShaderConstMatrix4(pHVar5, 1, pMVar6, 1);
            pHVar5 = (HashedString*)graphics::operator*(4);
            pMVar6 = (Matrix44T<float>*)this_00->GetOrigin();
            this_02->SetShaderConstMatrix4(pHVar5, 1, pMVar6, 1);
            pHVar5 = (HashedString*)graphics::operator*(6);
            pMVar6 = (Matrix44T<float>*)this_00->GetImmediateThreadPool();
            this_02->SetShaderConstMatrix4(pHVar5, 1, pMVar6, 1);
            pHVar5 = (HashedString*)graphics::operator*(8);
            this_02->SetShaderConstVector4(pHVar5, &field_240);
        } else {
            pRVar3 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
            uVar1 = field_328;
            pSVar4 = (ShaderConstBuffer*)field_256.CurrentBuffer();
            pRVar3->SetVSShaderConstBuffer(uVar1, pSVar4);
            pRVar3 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
            uVar1 = field_328;
            pSVar4 = (ShaderConstBuffer*)field_256.CurrentBuffer();
            pRVar3->SetPSShaderConstBuffer(uVar1, pSVar4);
        }
    }

    // 0x10091f1b0
    void ViewTransformsEffect::SetViewTransforms(const math::Matrix44T<float>& matrix441,
                                                 const math::Matrix44T<float>& matrix442, float arg3, float arg4) {
        field_32->Set(matrix441, matrix442);
        field_240.Set(arg4 * arg3, arg3 - arg4, arg4, arg3);
        field_256.Update(0, field_32);
    }

    // 0x10091f220
    void ViewTransformsEffect::BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const {
        unsigned int arg1;
        unsigned int arg3;

        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar1 + 120) != '\0') {
            if (BindConstBufferToShader(render::ShaderProgram const&)::viewTransformsConstBlockName == '\0') {
                if (___cxa_guard_acquire(
                        &BindConstBufferToShader(render::ShaderProgram const&)::viewTransformsConstBlockName) != 0) {
                    new ((HashedString*)&BindConstBufferToShader(
                        render::ShaderProgram const&)::viewTransformsConstBlockName) HashedString("ViewTransforms");
                    ___cxa_guard_release(
                        &BindConstBufferToShader(render::ShaderProgram const&)::viewTransformsConstBlockName);
                }
            }
            arg1 = field_328;
            arg3 = field_256.GetAmplitude();
            shaderProgram.BindConstBufferSlot(
                arg1,
                *((HashedString*)&BindConstBufferToShader(render::ShaderProgram const&)::viewTransformsConstBlockName),
                arg3);
        }
    }

    // 0x10091f2d0
    void ViewTransformsEffect::CreateRenderingResources() {
        field_256.Create(1, field_32);
    }

    // 0x10091f310
    void ViewTransformsEffect::DestroyRenderingResources() {
        field_256.Destroy();
    }

    // 0x10091f330
    void ViewTransformsEffect::OnEndFrame() {
        field_256.RotateBuffers();
    }

} // namespace jag::graphics
