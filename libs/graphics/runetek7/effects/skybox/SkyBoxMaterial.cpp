// libs/graphics/runetek7/effects/skybox/SkyBoxMaterial.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "SkyBoxMaterial.h"

namespace jag::graphics {
    // 0x1008cc3f0: SkyBoxMaterial::~SkyBoxMaterial() has the same machine code as RenderMaterial::~RenderMaterial()

    // 0x10091a4c0
    void SkyBoxMaterial::Init() {
        InitRenderPassEffects();
    }

    // 0x10091d3b0
    void SkyBoxMaterial::InitRenderPassEffects() {
        uint64_t local_48;
        uint64_t uStack_40;

        auto puVar2 = GetRenderPassEffect(4);
        uint32_t local_25 = 825243933;
        uint8_t local_21 = 84;
        uint64_t local_30 = 5;
        new (&local_48) EffectList(&local_25);
        *puVar2 = local_48;
        puVar2[1] = uStack_40;
        field_528->AddFormatType(4);
        puVar2 = (uint64_t*)GetRenderPassEffect(2);
        auto puVar3 = GetRenderPassEffect(4);
        uint64_t uVar1 = puVar3[1];
        *puVar2 = *puVar3;
        puVar2[1] = uVar1;
        field_528->AddFormatType(2);
    }

} // namespace jag::graphics
