// libs/graphics/runetek7/effects/water/WaterEmissiveShaderEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "WaterEmissiveShaderEffect.h"

namespace jag::graphics {
    // 0x1009203d0, 16 bytes, placed by class name and debug map
    // WaterEmissiveShaderEffect::Initialise()
    undefined1 WaterEmissiveShaderEffect::Initialise() {
        return 1;
    }

    // 0x1009203e0, 176 bytes, placed by class name and debug map
    // WaterEmissiveShaderEffect::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void WaterEmissiveShaderEffect::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2,
                                                       Shader* param_3) {
        uint uVar1;
        RenderPipelineState* this_00;
        Texture* pTVar2;
        ShaderProgram* pSVar3;
        HashedString* pHVar4;
        int iVar6;

        if ((operator!=((shared_ptr*)field_32, (_func_decltype_nullptr*)0)) && (field_24 != 4294967295)) {
            this_00 = (RenderPipelineState*)param_1->GetRenderPipelineState();
            uVar1 = field_24;
            pTVar2 = (Texture*)field_32->end();
            pSVar3 = (ShaderProgram*)param_3->GetProgram();
            pHVar4 = (HashedString*)graphics::operator*((graphics*)173);
            iVar6 = pSVar3->GetConstIndex(pHVar4);
            this_00->SetPSTextureSamplerPair(uVar1, pTVar2, iVar6, 0, true);
        }
        pSVar3 = (ShaderProgram*)param_3->GetProgram();
        SetUniforms(this, pSVar3);
    }

    // 0x100920490, 144 bytes, placed by class name and debug map
    // WaterEmissiveShaderEffect::SetUniforms(render::ShaderProgram const&) const
    void WaterEmissiveShaderEffect::SetUniforms(ShaderProgram* param_1) {
        HashedString* pHVar1;

        pHVar1 = (HashedString*)graphics::operator*((graphics*)174);
        param_1->SetShaderConstVector4(pHVar1, (Vector4T*)&field_48);
        pHVar1 = (HashedString*)graphics::operator*((graphics*)175);
        param_1->SetShaderConstVector4(pHVar1, (Vector4T*)&field_64);
        pHVar1 = (HashedString*)graphics::operator*((graphics*)176);
        param_1->SetShaderConstVector4(pHVar1, (Vector4T*)&field_80);
        pHVar1 = (HashedString*)graphics::operator*((graphics*)177);
        param_1->SetShaderConstVector2(pHVar1, (Vector2T*)&field_96);
        pHVar1 = (HashedString*)graphics::operator*((graphics*)178);
        param_1->SetShaderConstFloat1(pHVar1, field_104);
    }

    // 0x100920520, 16 bytes, placed by class name and debug map
    // WaterEmissiveShaderEffect::BindConstBufferToShader(render::ShaderProgram const&) const
    void WaterEmissiveShaderEffect::BindConstBufferToShader(ShaderProgram* param_1) {}

    // 0x100920530, 16 bytes, placed by class name and debug map
    // WaterEmissiveShaderEffect::CreateRenderingResources()
    undefined1 WaterEmissiveShaderEffect::CreateRenderingResources() {
        return 1;
    }

    // 0x100920540, 16 bytes, placed by class name and debug map
    // WaterEmissiveShaderEffect::DestroyRenderingResources()
    void WaterEmissiveShaderEffect::DestroyRenderingResources() {}

    // 0x100920550, 96 bytes, placed by class name and debug map
    // WaterEmissiveShaderEffect::OnEndFrame()
    void WaterEmissiveShaderEffect::OnEndFrame() {
        shared_ptr local_28;

        field_24 = 4294967295;
        new (&local_28) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<render::Texture>::operator=((shared_ptr<render::Texture>*)field_32, &local_28);
        local_28.~shared_ptr();
    }

    // 0x1009205b0, 384 bytes, placed by class name and debug map
    // WaterEmissiveShaderEffect::SetParameters(WaterParameters const&, unsigned int)
    void WaterEmissiveShaderEffect::SetParameters(WaterParameters* param_1, uint param_2) {
        byte bVar1;
        bool bVar2;
        shared_ptr* psVar3;
        Vector3T* pVVar4;
        float* pfVar5;
        float fVar6;
        Vector4T<float> local_58[24];
        float local_3c;
        float local_38;
        float local_34;

        psVar3 = (shared_ptr*)param_1->GetRenderTargets();
        shared_ptr<render::Texture>::operator=((shared_ptr<render::Texture>*)field_32, psVar3);
        pVVar4 = (Vector3T*)param_1->GetEmissiveColour();
        fVar6 = (float)param_1->GetEmissiveSource();
        math::Vector4T<float>::Vector4T(local_58, pVVar4, fVar6);
        math::Rect<float>::operator=((Rect<float>*)&field_48, (Rect*)local_58);
        local_3c = (float)param_1->GetEmissiveScale();
        local_38 = (float)param_1->GetEmissiveMapRefractionDepth();
        bVar1 = param_1->GetEmissiveMapMode();
        local_34 = (float)bVar1;
        bVar2 = operator!=((shared_ptr*)field_32, (_func_decltype_nullptr*)0);
        new (local_58) ImVec4(local_3c, local_38, local_34, (float)bVar2);
        math::Rect<float>::operator=((Rect<float>*)&field_64, (Rect*)local_58);
        pfVar5 = (float*)param_1->GetEmissiveUVScale();
        local_3c = *pfVar5;
        local_38 = pfVar5[1];
        local_34 = (float)param_1->GetEmissiveFlowSpeed();
        fVar6 = (float)param_1->GetEmissiveFlowRotationDegrees();
        fVar6 = (float)math::Deg2Rad(fVar6);
        new (local_58) ImVec4(local_34, fVar6, local_3c, local_38);
        math::Rect<float>::operator=((Rect<float>*)&field_80, (Rect*)local_58);
        field_96 = param_1->GetEmissiveMapMaterialScale();
        bVar1 = param_1->GetEmissiveUVMode();
        field_100 = (float)bVar1;
        fVar6 = (float)param_1->GetEmissiveBlend();
        field_104 = fVar6;
        field_24 = param_2;
    }

} // namespace jag::graphics
