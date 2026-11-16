// libs/graphics/runetek7/effects/irradiance/LightProbeMaterial.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "LightProbeMaterial.h"

namespace jag::graphics {
    // 0x1007a2d90: the linker folded this into WaterMaterial::GetWaterParameters() const, which has identical code
    LightProbeMaterial::GetIrradianceSHConsts() const;

    // 0x1008cc3f0: the linker folded this into RenderMaterial::~RenderMaterial(), which has identical code
    LightProbeMaterial::~LightProbeMaterial();

    // 0x10091a510: the linker folded this into SkyBoxMaterial::~SkyBoxMaterial(), which has identical code
    LightProbeMaterial::~LightProbeMaterial();

    // 0x1009226b0: the linker folded this into SkyBoxMaterial::~SkyBoxMaterial(), which has identical code
    LightProbeMaterial::~LightProbeMaterial();

    // 0x10092f2a0, 16 bytes, complete-object constructor, placed by class name and debug map
    // LightProbeMaterial::LightProbeMaterial(): jumps straight to the base-object constructor

    // 0x10092f2c0, 16 bytes, placed by class name
    // LightProbeMaterial::Init()
    void LightProbeMaterial::Init() {
        InitRenderPassEffects(this);
    }

    // 0x10092fd00, 80 bytes, base-object constructor, placed by class name
    // LightProbeMaterial::LightProbeMaterial()
    void LightProbeMaterial::LightProbeMaterial() {
        new (this) RenderMaterial();
        field_0 = (undefined**)(PTR_vtable_100ee87c8 + 16);
        new (&m_irradianceSHConsts) IrradianceSHCoefConsts();
    }

    // 0x10092fde0, 144 bytes, base-object constructor, placed by class name
    // LightProbeMaterial::LightProbeMaterial(LightProbeMaterial&&)
    void LightProbeMaterial::LightProbeMaterial(LightProbeMaterial* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        new (this) RenderMaterial(param_1);
        field_0 = (undefined**)(PTR_vtable_100ee87c8 + 16);
        uVar1 = param_1->field_552;
        uVar2 = param_1->field_560;
        uVar3 = param_1->field_568;
        uVar4 = param_1->field_576;
        uVar5 = param_1->field_584;
        uVar6 = param_1->field_592;
        uVar7 = param_1->field_600;
        m_irradianceSHConsts = param_1->m_irradianceSHConsts;
        field_552 = uVar1;
        field_560 = uVar2;
        field_568 = uVar3;
        field_576 = uVar4;
        field_584 = uVar5;
        field_592 = uVar6;
        field_600 = uVar7;
        uVar1 = param_1->field_616;
        field_608 = param_1->field_608;
        field_616 = uVar1;
        uVar1 = param_1->field_632;
        field_624 = param_1->field_624;
        field_632 = uVar1;
        uVar1 = param_1->field_648;
        field_640 = param_1->field_640;
        field_648 = uVar1;
    }

    // 0x10092fe70, 16 bytes, complete-object constructor, placed by class name
    // LightProbeMaterial::LightProbeMaterial(LightProbeMaterial&&): jumps straight to the base-object constructor

    // 0x10092fe80, 144 bytes, base-object constructor, placed by class name
    // LightProbeMaterial::LightProbeMaterial(LightProbeMaterial const&)
    void LightProbeMaterial::LightProbeMaterial(LightProbeMaterial* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        new (this) RenderMaterial(param_1);
        field_0 = (undefined**)(PTR_vtable_100ee87c8 + 16);
        uVar1 = param_1->field_552;
        uVar2 = param_1->field_560;
        uVar3 = param_1->field_568;
        uVar4 = param_1->field_576;
        uVar5 = param_1->field_584;
        uVar6 = param_1->field_592;
        uVar7 = param_1->field_600;
        m_irradianceSHConsts = param_1->m_irradianceSHConsts;
        field_552 = uVar1;
        field_560 = uVar2;
        field_568 = uVar3;
        field_576 = uVar4;
        field_584 = uVar5;
        field_592 = uVar6;
        field_600 = uVar7;
        uVar1 = param_1->field_616;
        field_608 = param_1->field_608;
        field_616 = uVar1;
        uVar1 = param_1->field_632;
        field_624 = param_1->field_624;
        field_632 = uVar1;
        uVar1 = param_1->field_648;
        field_640 = param_1->field_640;
        field_648 = uVar1;
    }

    // 0x10092ff10, 16 bytes, complete-object constructor, placed by class name
    // LightProbeMaterial::LightProbeMaterial(LightProbeMaterial const&): jumps straight to the base-object constructor

    // 0x10092ff20, 176 bytes, placed by class name
    // LightProbeMaterial::InitRenderPassEffects()
    void LightProbeMaterial::InitRenderPassEffects() {
        undefined4* puVar1;
        undefined4 local_48;
        undefined4 uStack_44;
        undefined4 uStack_40;
        undefined4 uStack_3c;
        undefined1* local_38;
        undefined8 local_30;
        undefined1 local_21;

        puVar1 = (undefined4*)GetRenderPassEffect(4);
        local_21 = 79;
        local_30 = 1;
        local_38 = &local_21;
        new (&local_48) EffectList((initializer_list*)&local_38);
        *puVar1 = local_48;
        puVar1[1] = uStack_44;
        puVar1[2] = uStack_40;
        puVar1[3] = uStack_3c;
        (field_528, 4)->AddFormatType();
        puVar1 = (undefined4*)GetRenderPassEffect(3);
        local_21 = 79;
        local_30 = 1;
        local_38 = &local_21;
        new (&local_48) EffectList((initializer_list*)&local_38);
        *puVar1 = local_48;
        puVar1[1] = uStack_44;
        puVar1[2] = uStack_40;
        puVar1[3] = uStack_3c;
        (field_528, 3)->AddFormatType();
    }

    // 0x10092ffd0, 48 bytes, placed by class name
    // LightProbeMaterial::operator=(LightProbeMaterial const&)
    /* LightProbeMaterial::TEMPNAMEPLACEHOLDERVALUE(LightProbeMaterial
   const&) */

    LightProbeMaterial* LightProbeMaterial::operator=(LightProbeMaterial* param_1) {
        RenderMaterial::operator=((RenderMaterial*)this, (RenderMaterial*)param_1);
        IrradianceSHCoefConsts::operator=((IrradianceSHCoefConsts*)&m_irradianceSHConsts,
                                          (IrradianceSHCoefConsts*)&param_1->m_irradianceSHConsts);
        return this;
    }

} // namespace jag::graphics
