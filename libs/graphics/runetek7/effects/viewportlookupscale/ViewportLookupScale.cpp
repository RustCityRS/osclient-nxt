// libs/graphics/runetek7/effects/viewportlookupscale/ViewportLookupScale.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ViewportLookupScale.h"

namespace jag::graphics {
    // 0x10002d850: the linker folded this into oldscape::option::Option<int>::GetDefaultValue() const, which has identical code
    ViewportLookupScale::GetData() const;

    // 0x10091f350, 16 bytes, placed by class name and debug map
    // ViewportLookupScale::Initialise()
    void ViewportLookupScale::Initialise() {
        (*(code*)field_0[9])();
    }

    // 0x10091f360, 48 bytes, placed by class name and debug map
    // ViewportLookupScale::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void ViewportLookupScale::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2, Shader* param_3) {
        undefined1 auVar1[16];

        auVar1 = param_3->GetProgram();
        SetShaderConstants(this, param_1, auVar1._8_8_, auVar1._0_8_);
    }

    // 0x10091f390, 176 bytes, placed by class name and debug map
    // ViewportLookupScale::SetShaderConstants(render::DrawCallState&, render::RenderContext&, render::ShaderProgram const&) const
    void ViewportLookupScale::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2,
                                                 ShaderProgram* param_3) {
        uint uVar1;
        MapArea* this_00;
        long lVar2;
        RenderPipelineState* this_01;
        ShaderConstBuffer* pSVar3;
        HashedString* pHVar4;

        this_00 = (MapArea*)Instance();
        lVar2 = this_00->GetOrigin();
        if (*(char*)(lVar2 + 120) == '\0') {
            pHVar4 = (HashedString*)graphics::operator*((graphics*)79);
            param_3->SetShaderConstVector4(pHVar4, field_32);
            pHVar4 = (HashedString*)graphics::operator*((graphics*)80);
            param_3->SetShaderConstVector4(pHVar4, (Vector4T*)(field_32 + 16));
            pHVar4 = (HashedString*)graphics::operator*((graphics*)81);
            param_3->SetShaderConstVector4(pHVar4, (Vector4T*)(field_32 + 32));
        } else {
            this_01 = (RenderPipelineState*)param_1->GetRenderPipelineState();
            uVar1 = field_152;
            pSVar3 = (ShaderConstBuffer*)(&field_80)->CurrentBuffer();
            this_01->SetPSShaderConstBuffer(uVar1, pSVar3);
        }
    }

    // 0x10091f440, 160 bytes, placed by class name and debug map
    // ViewportLookupScale::BindConstBufferToShader(render::ShaderProgram const&) const
    void ViewportLookupScale::BindConstBufferToShader(ShaderProgram* param_1) {
        uint uVar1;
        uint uVar2;
        int iVar3;

        if (BindConstBufferToShader(render::ShaderProgram_const&)::viewportLookupConstBlockName == '\0') {
            iVar3 = ___cxa_guard_acquire(
                &BindConstBufferToShader(render::ShaderProgram_const&)::viewportLookupConstBlockName);
            if (iVar3 != 0) {
                new (&BindConstBufferToShader(render::ShaderProgram_const&)::viewportLookupConstBlockName)
                    HashedString("ViewportLookupScale");
                ___cxa_guard_release(
                    &BindConstBufferToShader(render::ShaderProgram_const&)::viewportLookupConstBlockName);
            }
        }
        uVar1 = field_152;
        uVar2 = (&field_80)->GetAmplitude();
        param_1->BindConstBufferSlot(
            uVar1, (HashedString*)&BindConstBufferToShader(render::ShaderProgram_const&)::viewportLookupConstBlockName,
            uVar2);
    }

    // 0x10091f4e0, 272 bytes, placed by class name and debug map
    // ViewportLookupScale::SetViewportLookupScale(render::Viewport const&, math::Vector2T<float> const&)
    void ViewportLookupScale::SetViewportLookupScale(Viewport* param_1, Vector2T* param_2) {
        ImVec4 local_48[24];

        ImVec4::ImVec4(local_48, 1.0 / (float)param_1->field_8, 1.0 / (float)param_1->field_12, (float)param_1->field_8,
                       (float)param_1->field_12);
        math::Rect<float>::operator=((Rect<float>*)field_32, (Rect*)local_48);
        ImVec4::ImVec4(local_48, (float)param_1->field_0 * (1.0 / *(float*)param_2),
                       (float)param_1->field_4 * (1.0 / *(float*)(param_2 + 4)),
                       (float)param_1->field_8 * (1.0 / *(float*)param_2),
                       (float)param_1->field_12 * (1.0 / *(float*)(param_2 + 4)));
        math::Rect<float>::operator=((Rect<float>*)(field_32 + 16), (Rect*)local_48);
        ImVec4::ImVec4(local_48, 1.0 / *(float*)param_2, 1.0 / *(float*)(param_2 + 4), *(float*)param_2,
                       *(float*)(param_2 + 4));
        math::Rect<float>::operator=((Rect<float>*)(field_32 + 32), (Rect*)local_48);
        (&field_80, 0, (Data*)field_32)->Update();
    }

    // 0x10091f5f0, 48 bytes, placed by class name and debug map
    // ViewportLookupScale::SetData(ViewportLookupScale::Data const&)
    void ViewportLookupScale::SetData(Data* param_1) {
        JointPose::operator=((JointPose*)field_32, (JointPose*)param_1);
        (&field_80, 0, (Data*)field_32)->Update();
    }

    // 0x10091f620: the linker folded this into ViewportLookupScale::Data::operator=(ViewportLookupScale::Data const&), which has identical code
    JointPose::operator=(JointPose const&);

    // 0x10091f660, 80 bytes, placed by class name
    // ViewportLookupScale::CreateRenderingResources()
    undefined4 ViewportLookupScale::CreateRenderingResources() {
        undefined4 uVar1;

        uVar1 = (&field_80, 1, (Data*)0)->Create();
        if ((char)uVar1 != '\0') {
            (&field_80, 0, (Data*)field_32)->Update();
        }
        return uVar1;
    }

    // 0x10091f6b0, 16 bytes, placed by class name
    // ViewportLookupScale::DestroyRenderingResources()
    void ViewportLookupScale::DestroyRenderingResources() {
        (&field_80)->Destroy();
    }

    // 0x10091f6c0, 16 bytes, placed by class name
    // ViewportLookupScale::OnEndFrame()
    void ViewportLookupScale::OnEndFrame() {
        (&field_80)->RotateBuffers();
    }

} // namespace jag::graphics
