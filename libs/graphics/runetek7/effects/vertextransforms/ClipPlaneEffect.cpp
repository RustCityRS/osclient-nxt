// libs/graphics/runetek7/effects/vertextransforms/ClipPlaneEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ClipPlaneEffect.h"

namespace jag::graphics {
    // 0x10091ed30, 48 bytes, placed by class name and debug map
    // ClipPlaneEffect::Initialise()
    undefined4 ClipPlaneEffect::Initialise() {
        undefined4 uVar1;

        uVar1 = (*(code*)field_0[9])();
        UpdateShaderConstants(this);
        return uVar1;
    }

    // 0x10091ed60, 64 bytes, placed by class name and debug map
    // ClipPlaneEffect::UpdateShaderConstants()
    void ClipPlaneEffect::UpdateShaderConstants() {
        MapArea* this_00;
        long lVar1;

        this_00 = (MapArea*)Instance();
        lVar1 = this_00->GetOrigin();
        if (*(char*)(lVar1 + 120) != '\0') {
            (&field_48, 0, (ClipPlaneShaderConsts*)&field_32)->Update();
        }
    }

    // 0x10091edc0, 176 bytes, placed by class name and debug map
    // ClipPlaneEffect::BindConstBufferToShader(render::ShaderProgram const&) const
    void ClipPlaneEffect::BindConstBufferToShader(ShaderProgram* param_1) {
        uint uVar1;
        MapArea* this_00;
        long lVar2;
        uint uVar3;
        int iVar4;

        this_00 = (MapArea*)Instance();
        lVar2 = this_00->GetOrigin();
        if (*(char*)(lVar2 + 120) != '\0') {
            if (BindConstBufferToShader(render::ShaderProgram_const&)::clipPlaneConstBlockName == '\0') {
                iVar4 = ___cxa_guard_acquire(
                    &BindConstBufferToShader(render::ShaderProgram_const&)::clipPlaneConstBlockName);
                if (iVar4 != 0) {
                    new (&BindConstBufferToShader(render::ShaderProgram_const&)::clipPlaneConstBlockName)
                        HashedString("ClipPlane");
                    ___cxa_guard_release(
                        &BindConstBufferToShader(render::ShaderProgram_const&)::clipPlaneConstBlockName);
                }
            }
            uVar1 = field_120;
            uVar3 = (&field_48)->GetAmplitude();
            param_1->BindConstBufferSlot(
                uVar1, (HashedString*)&BindConstBufferToShader(render::ShaderProgram_const&)::clipPlaneConstBlockName,
                uVar3);
        }
    }

    // 0x10091ee70, 32 bytes, placed by class name and debug map
    // ClipPlaneEffect::CreateRenderingResources()
    void ClipPlaneEffect::CreateRenderingResources() {
        (&field_48, 1, (ClipPlaneShaderConsts*)&field_32)->Create();
    }

    // 0x10091eeb0, 16 bytes, placed by class name and debug map
    // ClipPlaneEffect::DestroyRenderingResources()
    void ClipPlaneEffect::DestroyRenderingResources() {
        (&field_48)->Destroy();
    }

    // 0x10091eec0, 16 bytes, placed by class name and debug map
    // ClipPlaneEffect::OnEndFrame()
    void ClipPlaneEffect::OnEndFrame() {
        (&field_48)->RotateBuffers();
    }

    // 0x10091eed0, 128 bytes, placed by class name and debug map
    // ClipPlaneEffect::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void ClipPlaneEffect::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2, Shader* param_3) {
        uint uVar1;
        ShaderProgram* this_00;
        MapArea* this_01;
        long lVar2;
        RenderPipelineState* this_02;
        ShaderConstBuffer* pSVar3;
        HashedString* pHVar4;

        this_00 = (ShaderProgram*)param_3->GetProgram();
        this_01 = (MapArea*)param_3->Instance();
        lVar2 = this_01->GetOrigin();
        if (*(char*)(lVar2 + 120) == '\0') {
            pHVar4 = (HashedString*)graphics::operator*((graphics*)87);
            this_00->SetShaderConstVector4(pHVar4, (Vector4T*)&field_32);
        } else {
            this_02 = (RenderPipelineState*)param_1->GetRenderPipelineState();
            uVar1 = field_120;
            pSVar3 = (ShaderConstBuffer*)(&field_48)->CurrentBuffer();
            this_02->SetPSShaderConstBuffer(uVar1, pSVar3);
        }
    }

    // 0x10091ef50, 48 bytes, placed by class name and debug map
    // ClipPlaneEffect::SetClipPlane(math::Vector4T<float> const&)
    void ClipPlaneEffect::SetClipPlane(Vector4T* param_1) {
        math::Rect<float>::operator=((Rect<float>*)&field_32, (Rect*)param_1);
        UpdateShaderConstants(this);
    }

} // namespace jag::graphics
