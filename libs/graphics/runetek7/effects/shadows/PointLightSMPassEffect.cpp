// libs/graphics/runetek7/effects/shadows/PointLightSMPassEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "PointLightSMPassEffect.h"

namespace jag::graphics {
    // 0x100918920, 64 bytes, placed by class name and debug map
    // PointLightSMPassEffect::Initialise()
    undefined4 PointLightSMPassEffect::Initialise() {
        undefined4 uVar1;

        uVar1 = (*(code*)field_0[9])();
        if ((char)uVar1 != '\0') {
            (&field_128, 0, (ShaderConsts*)&field_32)->Update();
        }
        return uVar1;
    }

    // 0x100918980, 48 bytes, placed by class name and debug map
    // PointLightSMPassEffect::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void PointLightSMPassEffect::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2, Shader* param_3) {
        RenderContext* extraout_RDX;

        param_3->GetProgram();
        SetShaderConstants(this, param_1, extraout_RDX, (ShaderProgram*)param_3);
    }

    // 0x1009189b0, 128 bytes, placed by class name and debug map
    // PointLightSMPassEffect::SetShaderConstants(render::DrawCallState&, render::RenderContext&, render::ShaderProgram const&) const
    void PointLightSMPassEffect::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2,
                                                    ShaderProgram* param_3) {
        uint uVar1;
        MapArea* this_00;
        long lVar2;
        RenderPipelineState* this_01;
        ShaderConstBuffer* pSVar3;

        this_00 = (MapArea*)Instance();
        lVar2 = this_00->GetOrigin();
        if (*(char*)(lVar2 + 120) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "shadows/PointLightSMPassEffect.cpp",
                      36, "Uniform buffer required for point light shadows");
        }
        this_01 = (RenderPipelineState*)param_1->GetRenderPipelineState();
        uVar1 = field_200;
        pSVar3 = (ShaderConstBuffer*)(&field_128)->CurrentBuffer();
        this_01->SetPSShaderConstBuffer(uVar1, pSVar3);
    }

    // 0x100918a30, 208 bytes, placed by class name and debug map
    // PointLightSMPassEffect::BindConstBufferToShader(render::ShaderProgram const&) const
    void PointLightSMPassEffect::BindConstBufferToShader(ShaderProgram* param_1) {
        uint uVar1;
        uint uVar2;
        int iVar3;
        MapArea* this_00;
        long lVar4;

        this_00 = (MapArea*)Instance();
        lVar4 = this_00->GetOrigin();
        if (*(char*)(lVar4 + 120) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "shadows/PointLightSMPassEffect.cpp",
                      51, "Uniform buffer required for point light shadows");
        }
        if (BindConstBufferToShader(render::ShaderProgram_const&)::pointLightShadowPassConstBlockName == '\0') {
            iVar3 = ___cxa_guard_acquire(
                &BindConstBufferToShader(render::ShaderProgram_const&)::pointLightShadowPassConstBlockName);
            if (iVar3 != 0) {
                new (&BindConstBufferToShader(render::ShaderProgram_const&)::pointLightShadowPassConstBlockName)
                    HashedString("PointLightShadowPass");
                ___cxa_guard_release(
                    &BindConstBufferToShader(render::ShaderProgram_const&)::pointLightShadowPassConstBlockName);
            }
        }
        uVar1 = field_200;
        uVar2 = (&field_128)->GetAmplitude();
        param_1->BindConstBufferSlot(
            uVar1,
            (HashedString*)&BindConstBufferToShader(render::ShaderProgram_const&)::pointLightShadowPassConstBlockName,
            uVar2);
    }

    // 0x100918b00, 48 bytes, placed by class name and debug map
    // PointLightSMPassEffect::SetLightViewProjTrans(math::Matrix44T<float> const&)
    void PointLightSMPassEffect::SetLightViewProjTrans(Matrix44T* param_1) {
        math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_32, param_1);
        (&field_128, 0, (ShaderConsts*)&field_32)->Update();
    }

    // 0x100918b30, 64 bytes, placed by class name and debug map
    // PointLightSMPassEffect::SetLightPos(math::Vector3T<float> const&)
    void PointLightSMPassEffect::SetLightPos(Vector3T* param_1) {
        (&field_96, param_1, 1.0)->Set();
        (&field_128, 0, (ShaderConsts*)&field_32)->Update();
    }

    // 0x100918b70, 80 bytes, placed by class name and debug map
    // PointLightSMPassEffect::SetNearFarClip(float, float)
    void PointLightSMPassEffect::SetNearFarClip(float param_1, float param_2) {
        (&field_112, param_1, param_2 * param_2, 1.0 / (param_2 * param_2), 1.0 / param_2)->Set();
        (&field_128, 0, (ShaderConsts*)&field_32)->Update();
    }

    // 0x100918bc0, 32 bytes, placed by class name and debug map
    // PointLightSMPassEffect::CreateRenderingResources()
    void PointLightSMPassEffect::CreateRenderingResources() {
        (&field_128, 1, (ShaderConsts*)&field_32)->Create();
    }

    // 0x100918c00, 16 bytes, placed by class name and debug map
    // PointLightSMPassEffect::DestroyRenderingResources()
    void PointLightSMPassEffect::DestroyRenderingResources() {
        (&field_128)->Destroy();
    }

    // 0x100918c10, 16 bytes, placed by class name and debug map
    // PointLightSMPassEffect::OnEndFrame()
    void PointLightSMPassEffect::OnEndFrame() {
        (&field_128)->RotateBuffers();
    }

} // namespace jag::graphics
