// libs/graphics/runetek7/effects/irradiance/LightProbeMaterial.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "LightProbeMaterial.h"

namespace jag::graphics {
    // 0x1007a2d90: LightProbeMaterial::GetIrradianceSHConsts() const has the same machine code as WaterMaterial::GetWaterParameters() const

    // 0x1008cc3f0: LightProbeMaterial::~LightProbeMaterial() has the same machine code as RenderMaterial::~RenderMaterial()

    // 0x10092f2c0
    void LightProbeMaterial::Init() {
        InitRenderPassEffects();
    }

    // 0x10092fd00
    LightProbeMaterial::LightProbeMaterial() : RenderMaterial() {}

    // 0x10092fde0
    LightProbeMaterial::LightProbeMaterial(LightProbeMaterial&& lightProbeMaterial)
        : RenderMaterial(lightProbeMaterial) {
        uint64_t uVar1 = *(uint64_t*)(lightProbeMaterial.m_irradianceSHConsts + 8);
        uint64_t uVar2 = *(uint64_t*)(lightProbeMaterial.m_irradianceSHConsts + 16);
        uint64_t uVar3 = *(uint64_t*)(lightProbeMaterial.m_irradianceSHConsts + 24);
        uint64_t uVar4 = *(uint64_t*)(lightProbeMaterial.m_irradianceSHConsts + 32);
        uint64_t uVar5 = *(uint64_t*)(lightProbeMaterial.m_irradianceSHConsts + 40);
        uint64_t uVar6 = *(uint64_t*)(lightProbeMaterial.m_irradianceSHConsts + 48);
        uint64_t uVar7 = *(uint64_t*)(lightProbeMaterial.m_irradianceSHConsts + 56);
        *(uint64_t*)m_irradianceSHConsts = *(uint64_t*)lightProbeMaterial.m_irradianceSHConsts;
        *(uint64_t*)(m_irradianceSHConsts + 8) = uVar1;
        *(uint64_t*)(m_irradianceSHConsts + 16) = uVar2;
        *(uint64_t*)(m_irradianceSHConsts + 24) = uVar3;
        *(uint64_t*)(m_irradianceSHConsts + 32) = uVar4;
        *(uint64_t*)(m_irradianceSHConsts + 40) = uVar5;
        *(uint64_t*)(m_irradianceSHConsts + 48) = uVar6;
        *(uint64_t*)(m_irradianceSHConsts + 56) = uVar7;
        uVar1 = *(uint64_t*)(lightProbeMaterial.m_irradianceSHConsts + 72);
        *(uint64_t*)(m_irradianceSHConsts + 64) = *(uint64_t*)(lightProbeMaterial.m_irradianceSHConsts + 64);
        *(uint64_t*)(m_irradianceSHConsts + 72) = uVar1;
        uVar1 = *(uint64_t*)(lightProbeMaterial.m_irradianceSHConsts + 88);
        *(uint64_t*)(m_irradianceSHConsts + 80) = *(uint64_t*)(lightProbeMaterial.m_irradianceSHConsts + 80);
        *(uint64_t*)(m_irradianceSHConsts + 88) = uVar1;
        uVar1 = lightProbeMaterial.field_648;
        *(uint64_t*)(m_irradianceSHConsts + 96) = *(uint64_t*)(lightProbeMaterial.m_irradianceSHConsts + 96);
        field_648 = uVar1;
    }

    // 0x10092fe80
    LightProbeMaterial::LightProbeMaterial(const LightProbeMaterial& lightProbeMaterial)
        : RenderMaterial(lightProbeMaterial) {
        uint64_t uVar1 = *(uint64_t*)(lightProbeMaterial.m_irradianceSHConsts + 8);
        uint64_t uVar2 = *(uint64_t*)(lightProbeMaterial.m_irradianceSHConsts + 16);
        uint64_t uVar3 = *(uint64_t*)(lightProbeMaterial.m_irradianceSHConsts + 24);
        uint64_t uVar4 = *(uint64_t*)(lightProbeMaterial.m_irradianceSHConsts + 32);
        uint64_t uVar5 = *(uint64_t*)(lightProbeMaterial.m_irradianceSHConsts + 40);
        uint64_t uVar6 = *(uint64_t*)(lightProbeMaterial.m_irradianceSHConsts + 48);
        uint64_t uVar7 = *(uint64_t*)(lightProbeMaterial.m_irradianceSHConsts + 56);
        *(uint64_t*)m_irradianceSHConsts = *(uint64_t*)lightProbeMaterial.m_irradianceSHConsts;
        *(uint64_t*)(m_irradianceSHConsts + 8) = uVar1;
        *(uint64_t*)(m_irradianceSHConsts + 16) = uVar2;
        *(uint64_t*)(m_irradianceSHConsts + 24) = uVar3;
        *(uint64_t*)(m_irradianceSHConsts + 32) = uVar4;
        *(uint64_t*)(m_irradianceSHConsts + 40) = uVar5;
        *(uint64_t*)(m_irradianceSHConsts + 48) = uVar6;
        *(uint64_t*)(m_irradianceSHConsts + 56) = uVar7;
        uVar1 = *(uint64_t*)(lightProbeMaterial.m_irradianceSHConsts + 72);
        *(uint64_t*)(m_irradianceSHConsts + 64) = *(uint64_t*)(lightProbeMaterial.m_irradianceSHConsts + 64);
        *(uint64_t*)(m_irradianceSHConsts + 72) = uVar1;
        uVar1 = *(uint64_t*)(lightProbeMaterial.m_irradianceSHConsts + 88);
        *(uint64_t*)(m_irradianceSHConsts + 80) = *(uint64_t*)(lightProbeMaterial.m_irradianceSHConsts + 80);
        *(uint64_t*)(m_irradianceSHConsts + 88) = uVar1;
        uVar1 = lightProbeMaterial.field_648;
        *(uint64_t*)(m_irradianceSHConsts + 96) = *(uint64_t*)(lightProbeMaterial.m_irradianceSHConsts + 96);
        field_648 = uVar1;
    }

    // 0x10092ff20
    void LightProbeMaterial::InitRenderPassEffects() {
        uint64_t local_48;
        uint64_t uStack_40;

        auto puVar1 = GetRenderPassEffect(4);
        uint8_t local_21 = 79;
        uint64_t local_30 = 1;
        uint8_t* local_38 = &local_21;
        new (&local_48) EffectList(local_38);
        *puVar1 = local_48;
        puVar1[1] = uStack_40;
        field_528->AddFormatType(4);
        puVar1 = (uint64_t*)GetRenderPassEffect(3);
        local_21 = 79;
        local_30 = 1;
        local_38 = &local_21;
        new (&local_48) EffectList(local_38);
        *puVar1 = local_48;
        puVar1[1] = uStack_40;
        field_528->AddFormatType(3);
    }

    // 0x10092ffd0
    LightProbeMaterial* LightProbeMaterial::operator=(const LightProbeMaterial& lightProbeMaterial) {
        *this = lightProbeMaterial;
        *m_irradianceSHConsts = lightProbeMaterial.m_irradianceSHConsts;
        return this;
    }

} // namespace jag::graphics
