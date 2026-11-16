// libs/game/runetek5/scene/EnvironmentOverrideParamSets.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    // 0x1004907d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // LightingEnvironmentOverrides::LightingEnvironmentOverrides(): jumps straight to the base-object constructor

    // 0x1004907e0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // FogEnvironmentOverrides::FogEnvironmentOverrides(): jumps straight to the base-object constructor

    // 0x1004907f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BloomEnvironmentOverrides::BloomEnvironmentOverrides(): jumps straight to the base-object constructor

    // 0x100490800, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MapEnvironmentOverrides::MapEnvironmentOverrides(): jumps straight to the base-object constructor

    // 0x100490810, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ColourGradingEnvironmentOverrides::ColourGradingEnvironmentOverrides(): jumps straight to the base-object constructor

    // 0x100490820, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ToneMapEnvironmentOverrides::ToneMapEnvironmentOverrides(): jumps straight to the base-object constructor

    // 0x100490830, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ScatteringEnvironmentOverrides::ScatteringEnvironmentOverrides(): jumps straight to the base-object constructor

    // 0x100490840, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // VolumetricEnvironmentOverrides::VolumetricEnvironmentOverrides(): jumps straight to the base-object constructor

    // 0x100490850, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // LightProbeEnvironmentOverrides::LightProbeEnvironmentOverrides(): jumps straight to the base-object constructor

    // 0x100490860, 80 bytes, inline, placed by debug map only (low confidence)
    // LightingEnvironmentOverrides::operator=(LightingEnvironmentOverrides&&)
    /* LightingEnvironmentOverrides::TEMPNAMEPLACEHOLDERVALUE(LightingEnvironmentOverrides&&)
    */

    LightingEnvironmentOverrides* LightingEnvironmentOverrides::operator=(LightingEnvironmentOverrides* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined1 uVar3;
        undefined7 uVar4;

        field_32 = param_1->field_32;
        uVar3 = param_1->field_0;
        uVar4 = param_1->field_1;
        uVar1 = param_1->field_8;
        uVar2 = param_1->field_24;
        field_16 = param_1->field_16;
        field_24 = uVar2;
        field_0 = uVar3;
        field_1 = uVar4;
        field_8 = uVar1;
        EnvironmentOverrideParam<math::Vector3T<float>>::operator=(
            (EnvironmentOverrideParam<math::Vector3T<float>>*)&field_36, (EnvironmentOverrideParam*)&param_1->field_36);
        uVar1 = param_1->field_60;
        field_52 = param_1->field_52;
        field_60 = uVar1;
        *(undefined8*)((long)&field_60 + 5) = *(undefined8*)((long)&param_1->field_60 + 5);
        return this;
    }

    // 0x1004908b0, 96 bytes, inline, placed by debug map only (low confidence)
    // ScatteringEnvironmentOverrides::operator=(ScatteringEnvironmentOverrides&&)
    /* ScatteringEnvironmentOverrides::TEMPNAMEPLACEHOLDERVALUE(ScatteringEnvironmentOverrides&&)
    */

    ScatteringEnvironmentOverrides* ScatteringEnvironmentOverrides::operator=(ScatteringEnvironmentOverrides* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined1 uVar3;
        undefined7 uVar4;

        field_32 = param_1->field_32;
        uVar3 = param_1->field_0;
        uVar4 = param_1->field_1;
        uVar1 = param_1->field_8;
        uVar2 = param_1->field_24;
        field_16 = param_1->field_16;
        field_24 = uVar2;
        field_0 = uVar3;
        field_1 = uVar4;
        field_8 = uVar1;
        EnvironmentOverrideParam<math::Vector3T<float>>::operator=(
            (EnvironmentOverrideParam<math::Vector3T<float>>*)&field_36, (EnvironmentOverrideParam*)&param_1->field_36);
        EnvironmentOverrideParam<math::Vector3T<float>>::operator=(
            (EnvironmentOverrideParam<math::Vector3T<float>>*)&field_52, (EnvironmentOverrideParam*)&param_1->field_52);
        EnvironmentOverrideParam<math::Vector3T<float>>::operator=(
            (EnvironmentOverrideParam<math::Vector3T<float>>*)&field_68, (EnvironmentOverrideParam*)&param_1->field_68);
        return this;
    }

    // 0x100490910, 96 bytes, inline, placed by debug map only (low confidence)
    // VolumetricEnvironmentOverrides::operator=(VolumetricEnvironmentOverrides&&)
    /* VolumetricEnvironmentOverrides::TEMPNAMEPLACEHOLDERVALUE(VolumetricEnvironmentOverrides&&)
    */

    VolumetricEnvironmentOverrides* VolumetricEnvironmentOverrides::operator=(VolumetricEnvironmentOverrides* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined1 uVar7;
        undefined7 uVar8;

        field_64 = param_1->field_64;
        uVar7 = param_1->field_0;
        uVar8 = param_1->field_1;
        uVar1 = param_1->field_8;
        uVar2 = param_1->field_16;
        uVar3 = param_1->field_24;
        uVar4 = param_1->field_32;
        uVar5 = param_1->field_40;
        uVar6 = param_1->field_56;
        field_48 = param_1->field_48;
        field_56 = uVar6;
        field_32 = uVar4;
        field_40 = uVar5;
        field_16 = uVar2;
        field_24 = uVar3;
        field_0 = uVar7;
        field_1 = uVar8;
        field_8 = uVar1;
        EnvironmentOverrideParam<math::Vector3T<float>>::operator=(
            (EnvironmentOverrideParam<math::Vector3T<float>>*)&field_68, (EnvironmentOverrideParam*)&param_1->field_68);
        EnvironmentOverrideParam<math::Vector3T<float>>::operator=(
            (EnvironmentOverrideParam<math::Vector3T<float>>*)&field_84, (EnvironmentOverrideParam*)&param_1->field_84);
        return this;
    }

} // namespace jag::game
