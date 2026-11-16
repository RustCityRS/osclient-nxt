// libs/graphics/runetek7/effects/water/WaterFoamShaderEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "WaterFoamShaderEffect.h"

namespace jag::graphics {
    // 0x100920ae0, 16 bytes, placed by class name and debug map
    // WaterFoamShaderEffect::Initialise()
    undefined1 WaterFoamShaderEffect::Initialise() {
        return 1;
    }

    // 0x100920af0, 192 bytes, placed by class name and debug map
    // WaterFoamShaderEffect::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void WaterFoamShaderEffect::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2, Shader* param_3) {
        uint uVar1;
        ShaderProgram* this_00;
        RenderPipelineState* this_01;
        Texture* pTVar2;
        HashedString* pHVar3;
        int iVar5;
        Point<float> local_38[8];

        this_00 = (ShaderProgram*)param_3->GetProgram();
        if (operator!=((shared_ptr*)field_32, (_func_decltype_nullptr*)0)) {
            this_01 = (RenderPipelineState*)param_1->GetRenderPipelineState();
            uVar1 = field_24;
            pTVar2 = (Texture*)field_32->end();
            pHVar3 = (HashedString*)graphics::operator*((graphics*)135);
            iVar5 = this_00->GetConstIndex(pHVar3);
            this_01->SetPSTextureSamplerPair(uVar1, pTVar2, iVar5, 0, true);
        }
        math::Point<float>::Point(local_38, field_48, field_52);
        pHVar3 = (HashedString*)graphics::operator*((graphics*)122);
        this_00->SetShaderConstVector2(pHVar3, local_38);
    }

    // 0x100920bb0, 16 bytes, placed by class name and debug map
    // WaterFoamShaderEffect::BindConstBufferToShader(render::ShaderProgram const&) const
    void WaterFoamShaderEffect::BindConstBufferToShader(ShaderProgram* param_1) {}

    // 0x100920bc0, 16 bytes, placed by class name and debug map
    // WaterFoamShaderEffect::CreateRenderingResources()
    undefined1 WaterFoamShaderEffect::CreateRenderingResources() {
        return 1;
    }

    // 0x100920bd0, 16 bytes, placed by class name and debug map
    // WaterFoamShaderEffect::DestroyRenderingResources()
    void WaterFoamShaderEffect::DestroyRenderingResources() {}

    // 0x100920be0, 96 bytes, placed by class name and debug map
    // WaterFoamShaderEffect::OnEndFrame()
    void WaterFoamShaderEffect::OnEndFrame() {
        shared_ptr local_28;

        new (&local_28) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<render::Texture>::operator=((shared_ptr<render::Texture>*)field_32, &local_28);
        local_28.~shared_ptr();
        field_24 = 4294967295;
    }

    // 0x100920c40, 80 bytes, placed by class name and debug map
    // WaterFoamShaderEffect::SetParameters(WaterParameters const&, int)
    void WaterFoamShaderEffect::SetParameters(WaterParameters* param_1, int param_2) {
        shared_ptr* psVar1;
        float fVar2;

        field_24 = param_2;
        psVar1 = (shared_ptr*)param_1->GetEmissiveUVScale();
        shared_ptr<render::Texture>::operator=((shared_ptr<render::Texture>*)field_32, psVar1);
        fVar2 = (float)param_1->GetWaterFoamScale();
        field_48 = fVar2;
        fVar2 = (float)param_1->GetWaterDepthFoam();
        field_52 = fVar2;
    }

} // namespace jag::graphics
