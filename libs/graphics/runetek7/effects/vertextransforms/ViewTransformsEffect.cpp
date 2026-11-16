// libs/graphics/runetek7/effects/vertextransforms/ViewTransformsEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ViewTransformsEffect.h"

namespace jag::graphics {
    // 0x10002d850: the linker folded this into oldscape::option::Option<int>::GetDefaultValue() const, which has identical code
    ViewTransformsEffect::GetViewTransforms() const;

    // 0x10091efe0, 48 bytes, placed by class name and debug map
    // ViewTransformsEffect::Initialise()
    undefined4 ViewTransformsEffect::Initialise() {
        undefined4 uVar1;

        uVar1 = (*(code*)field_0[9])();
        (&field_256, 0, (ShaderConsts*)&field_32)->Update();
        return uVar1;
    }

    // 0x10091f030, 384 bytes, placed by class name and debug map
    // ViewTransformsEffect::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void ViewTransformsEffect::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2, Shader* param_3) {
        undefined1* this_00;
        uint uVar1;
        MapArea* this_01;
        long lVar2;
        RenderPipelineState* pRVar3;
        ShaderConstBuffer* pSVar4;
        ShaderProgram* this_02;
        HashedString* pHVar5;
        vector* pvVar6;
        Matrix44T* pMVar7;

        this_01 = (MapArea*)Instance();
        lVar2 = this_01->GetOrigin();
        if (*(char*)(lVar2 + 120) == '\0') {
            this_02 = (ShaderProgram*)param_3->GetProgram();
            pHVar5 = (HashedString*)graphics::operator*((graphics*)111);
            this_00 = &field_32;
            pvVar6 = this_00->SSOBeginPtr(param_1);
            this_02->SetShaderConstVector3(pHVar5, pvVar6);
            pHVar5 = (HashedString*)graphics::operator*((graphics*)2);
            pMVar7 = (Matrix44T*)this_00->GetScreen();
            this_02->SetShaderConstMatrix4(pHVar5, 1, pMVar7, 1);
            pHVar5 = (HashedString*)graphics::operator*((graphics*)4);
            pMVar7 = (Matrix44T*)this_00->GetOrigin();
            this_02->SetShaderConstMatrix4(pHVar5, 1, pMVar7, 1);
            pHVar5 = (HashedString*)graphics::operator*((graphics*)6);
            pMVar7 = (Matrix44T*)this_00->GetImmediateThreadPool();
            this_02->SetShaderConstMatrix4(pHVar5, 1, pMVar7, 1);
            pHVar5 = (HashedString*)graphics::operator*((graphics*)8);
            this_02->SetShaderConstVector4(pHVar5, (Vector4T*)&field_240);
        } else {
            pRVar3 = (RenderPipelineState*)param_1->GetRenderPipelineState();
            uVar1 = field_328;
            pSVar4 = (ShaderConstBuffer*)(&field_256)->CurrentBuffer();
            pRVar3->SetVSShaderConstBuffer(uVar1, pSVar4);
            pRVar3 = (RenderPipelineState*)param_1->GetRenderPipelineState();
            uVar1 = field_328;
            pSVar4 = (ShaderConstBuffer*)(&field_256)->CurrentBuffer();
            pRVar3->SetPSShaderConstBuffer(uVar1, pSVar4);
        }
    }

    // 0x10091f1b0, 112 bytes, placed by class name and debug map
    // ViewTransformsEffect::SetViewTransforms(math::Matrix44T<float> const&, math::Matrix44T<float> const&, float, float)
    void ViewTransformsEffect::SetViewTransforms(Matrix44T* param_1, Matrix44T* param_2, float param_3, float param_4) {
        Matrix44T* in_RDX;

        (&param_1->field_32, param_2, in_RDX)->Set();
        param_1[4].field_16.Set(param_4 * param_3, param_3 - param_4, param_4, param_3);
        param_1[4].field_32.Update(0, (ShaderConsts*)&param_1->field_32);
    }

    // 0x10091f220, 176 bytes, placed by class name and debug map
    // ViewTransformsEffect::BindConstBufferToShader(render::ShaderProgram const&) const
    void ViewTransformsEffect::BindConstBufferToShader(ShaderProgram* param_1) {
        uint uVar1;
        MapArea* this_00;
        long lVar2;
        uint uVar3;
        int iVar4;

        this_00 = (MapArea*)Instance();
        lVar2 = this_00->GetOrigin();
        if (*(char*)(lVar2 + 120) != '\0') {
            if (BindConstBufferToShader(render::ShaderProgram_const&)::viewTransformsConstBlockName == '\0') {
                iVar4 = ___cxa_guard_acquire(
                    &BindConstBufferToShader(render::ShaderProgram_const&)::viewTransformsConstBlockName);
                if (iVar4 != 0) {
                    new (&BindConstBufferToShader(render::ShaderProgram_const&)::viewTransformsConstBlockName)
                        HashedString("ViewTransforms");
                    ___cxa_guard_release(
                        &BindConstBufferToShader(render::ShaderProgram_const&)::viewTransformsConstBlockName);
                }
            }
            uVar1 = field_328;
            uVar3 = (&field_256)->GetAmplitude();
            param_1->BindConstBufferSlot(
                uVar1,
                (HashedString*)&BindConstBufferToShader(render::ShaderProgram_const&)::viewTransformsConstBlockName,
                uVar3);
        }
    }

    // 0x10091f2d0, 32 bytes, placed by class name and debug map
    // ViewTransformsEffect::CreateRenderingResources()
    void ViewTransformsEffect::CreateRenderingResources() {
        (&field_256, 1, (ShaderConsts*)&field_32)->Create();
    }

    // 0x10091f310, 32 bytes, placed by class name and debug map
    // ViewTransformsEffect::DestroyRenderingResources()
    void ViewTransformsEffect::DestroyRenderingResources() {
        (&field_256)->Destroy();
    }

    // 0x10091f330, 32 bytes, placed by class name and debug map
    // ViewTransformsEffect::OnEndFrame()
    void ViewTransformsEffect::OnEndFrame() {
        (&field_256)->RotateBuffers();
    }

} // namespace jag::graphics
