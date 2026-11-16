// libs/game/runetek5/scene/EnvironmentOverrideParamSets.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    // 0x100490860
    LightingEnvironmentOverrides*
    LightingEnvironmentOverrides::operator=(LightingEnvironmentOverrides&& lightingEnvironmentOverrides) {
        field_32 = lightingEnvironmentOverrides.field_32;
        uint8_t uVar3 = lightingEnvironmentOverrides.field_0;
        uint64_t uVar4 = lightingEnvironmentOverrides.field_1;
        uint64_t uVar1 = lightingEnvironmentOverrides.field_8;
        uint64_t uVar2 = lightingEnvironmentOverrides.field_24;
        field_16 = lightingEnvironmentOverrides.field_16;
        field_24 = uVar2;
        field_0 = uVar3;
        field_1 = uVar4;
        field_8 = uVar1;
        field_36 = lightingEnvironmentOverrides.field_36;
        uVar1 = lightingEnvironmentOverrides.field_60;
        field_52 = lightingEnvironmentOverrides.field_52;
        field_60 = uVar1;
        *(uint64_t*)((long)&field_60 + 5) = *(uint64_t*)((long)&lightingEnvironmentOverrides.field_60 + 5);
        return this;
    }

    // 0x1004908b0
    ScatteringEnvironmentOverrides*
    ScatteringEnvironmentOverrides::operator=(ScatteringEnvironmentOverrides&& scatteringEnvironmentOverrides) {
        field_32 = scatteringEnvironmentOverrides.field_32;
        uint8_t uVar3 = scatteringEnvironmentOverrides.field_0;
        uint64_t uVar4 = scatteringEnvironmentOverrides.field_1;
        uint64_t uVar1 = scatteringEnvironmentOverrides.field_8;
        uint64_t uVar2 = scatteringEnvironmentOverrides.field_24;
        field_16 = scatteringEnvironmentOverrides.field_16;
        field_24 = uVar2;
        field_0 = uVar3;
        field_1 = uVar4;
        field_8 = uVar1;
        field_36 = scatteringEnvironmentOverrides.field_36;
        field_52 = scatteringEnvironmentOverrides.field_52;
        field_68 = scatteringEnvironmentOverrides.field_68;
        return this;
    }

    // 0x100490910
    VolumetricEnvironmentOverrides*
    VolumetricEnvironmentOverrides::operator=(VolumetricEnvironmentOverrides&& volumetricEnvironmentOverrides) {
        field_64 = volumetricEnvironmentOverrides.field_64;
        uint8_t uVar7 = volumetricEnvironmentOverrides.field_0;
        uint64_t uVar8 = volumetricEnvironmentOverrides.field_1;
        uint64_t uVar1 = volumetricEnvironmentOverrides.field_8;
        uint64_t uVar2 = volumetricEnvironmentOverrides.field_16;
        uint64_t uVar3 = volumetricEnvironmentOverrides.field_24;
        uint64_t uVar4 = volumetricEnvironmentOverrides.field_32;
        uint64_t uVar5 = volumetricEnvironmentOverrides.field_40;
        uint64_t uVar6 = volumetricEnvironmentOverrides.field_56;
        field_48 = volumetricEnvironmentOverrides.field_48;
        field_56 = uVar6;
        field_32 = uVar4;
        field_40 = uVar5;
        field_16 = uVar2;
        field_24 = uVar3;
        field_0 = uVar7;
        field_1 = uVar8;
        field_8 = uVar1;
        field_68 = volumetricEnvironmentOverrides.field_68;
        field_84 = volumetricEnvironmentOverrides.field_84;
        return this;
    }

} // namespace jag::game
