// libs/graphics/runetek7/effects/water/WaterExtinctionShaderEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "WaterExtinctionShaderEffect.h"

namespace jag::graphics {
    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    WaterExtinctionShaderEffect::~WaterExtinctionShaderEffect();

    // 0x100153080: the linker folded this into oldscape::ClientObj::~ClientObj(), which has identical code
    WaterExtinctionShaderEffect::~WaterExtinctionShaderEffect();

    // 0x100153090: the linker folded this into oldscape::ClientObj::~ClientObj(), which has identical code
    WaterExtinctionShaderEffect::~WaterExtinctionShaderEffect();

    // 0x1009208d0, 16 bytes, placed by class name and debug map
    // WaterExtinctionShaderEffect::Initialise()
    undefined1 WaterExtinctionShaderEffect::Initialise() {
        return 1;
    }

    // 0x1009208e0, 48 bytes, placed by class name and debug map
    // WaterExtinctionShaderEffect::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void WaterExtinctionShaderEffect::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2,
                                                         Shader* param_3) {
        ShaderProgram* pSVar1;

        pSVar1 = (ShaderProgram*)param_3->GetProgram();
        SetUniforms(this, pSVar1);
    }

    // 0x100920910, 144 bytes, placed by class name and debug map
    // WaterExtinctionShaderEffect::SetUniforms(render::ShaderProgram const&) const
    void WaterExtinctionShaderEffect::SetUniforms(ShaderProgram* param_1) {
        HashedString* pHVar1;

        pHVar1 = (HashedString*)graphics::operator*((graphics*)136);
        param_1->SetShaderConstVector3(pHVar1, field_32);
        pHVar1 = (HashedString*)graphics::operator*((graphics*)137);
        param_1->SetShaderConstVector3(pHVar1, (Vector3T*)&field_48);
        pHVar1 = (HashedString*)graphics::operator*((graphics*)138);
        param_1->SetShaderConstFloat1(pHVar1, field_60);
        pHVar1 = (HashedString*)graphics::operator*((graphics*)12);
        param_1->SetShaderConstMatrix4(pHVar1, 1, (Matrix44T*)&field_64, 1);
    }

    // 0x1009209a0, 16 bytes, placed by class name and debug map
    // WaterExtinctionShaderEffect::BindConstBufferToShader(render::ShaderProgram const&) const
    void WaterExtinctionShaderEffect::BindConstBufferToShader(ShaderProgram* param_1) {}

    // 0x1009209b0, 16 bytes, placed by class name and debug map
    // WaterExtinctionShaderEffect::CreateRenderingResources()
    undefined1 WaterExtinctionShaderEffect::CreateRenderingResources() {
        return 1;
    }

    // 0x1009209c0, 16 bytes, placed by class name and debug map
    // WaterExtinctionShaderEffect::DestroyRenderingResources()
    void WaterExtinctionShaderEffect::DestroyRenderingResources() {}

    // 0x1009209d0, 16 bytes, placed by class name and debug map
    // WaterExtinctionShaderEffect::OnEndFrame()
    void WaterExtinctionShaderEffect::OnEndFrame() {}

    // 0x1009209e0, 128 bytes, placed by class name and debug map
    // WaterExtinctionShaderEffect::SetParameters(WaterParameters const&, math::Matrix44T<float> const&)
    void WaterExtinctionShaderEffect::SetParameters(WaterParameters* param_1, Matrix44T* param_2) {
        Vector3T* pVVar1;
        undefined8 local_30[2];

        pVVar1 = (Vector3T*)param_1->GetExtinctionRGBDepthMetres();
        (field_32, pVVar1)->SetXYZ();
        local_30[0] = param_1->GetExtinctionOpaqueWaterColour();
        (&field_48, (Vector3T*)local_30)->SetXYZ();
        field_60 = (float)param_1->GetExtinctionVisibilityMetres();
        math::Matrix44Inverse<float>((Matrix44T*)&field_64, (float*)0, param_2);
    }

} // namespace jag::graphics
