// libs/graphics/runetek7/model/BillboardMaterial.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "BillboardMaterial.h"

namespace jag::graphics {
    // 0x1007b51a0: BillboardMaterial::SetTextureAtlasReference(shared_ptr<TextureAtlasReference> const&) has the same machine code as TerrainMaterial::SetTextureAtlasReference(shared_ptr<TextureAtlasReference> const&)

    // 0x1007b8920: BillboardMaterial::GetTextureAtlasReference() const has the same machine code as TerrainMaterial::GetTextureAtlasReference() const

    // 0x100866ec0
    void BillboardMaterial::Init(bool arg1, bool arg2, const Material& material) {
        unsigned char uVar1;
        uint32_t uVar2;
        uint64_t in_RAX;
        Logger* this_00;

        uint32_t uVar4 = (uint32_t)((unsigned long)in_RAX >> 32);
        InitRenderPassEffects((uint8_t)this, arg1);
        auto puVar3 = material.GetLastUpdateTimeNS();
        field_16 = puVar3;
        if (puVar3 == AlphaMode::ALPHA_OPAQUE) {
            this_00 = logger::default_logger();
            uVar2 = material.GetZ();
            this_00->Log(false, 8,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                         "model/BillboardMaterial.cpp",
                         41, "Billboard ID %i is not set as alpha blended/tested",
                         (((uint64_t)uVar4 << 32) | (uint32_t)uVar2));
            field_16 = AlphaMode::ALPHA_BLENDED;
        }
        puVar3 = (uint8_t*)material.GetStartTimeNS();
        field_24 = puVar3;
        if (field_16 == AlphaMode::ALPHA_TESTED) {
            uVar1 = material.GetMaxLevels();
        } else {
            uVar1 = '\0';
        }
        field_32 = uVar1;
        puVar3 = (uint8_t*)material.GetWrapU();
        field_552 = puVar3;
        puVar3 = (uint8_t*)material.GetWrapV();
        field_560 = puVar3;
        bool arg2_00 = (bool)material.IsRT7();
        SetOption(0, arg2_00);
        SetOption(0, false);
    }

    // 0x100867d60
    BillboardMaterial* BillboardMaterial::operator=(const BillboardMaterial& billboardMaterial) {
        *this = billboardMaterial;
        (*((field_528 + 8))) = (*((billboardMaterial.field_528 + 8)));
        field_552 = billboardMaterial.field_552;
        field_560 = billboardMaterial.field_560;
        return this;
    }

    // 0x1008686f0
    void BillboardMaterial::SetLowPrecision(bool arg1) {
        EffectList* this_00 = (EffectList*)std::array<RenderPassEffect, 10ul>::begin();
        EffectList* pEVar1 = (EffectList*)std::array<RenderPassEffect, 10ul>::end();
        for (; this_00 != pEVar1; this_00 = this_00 + 48) {
            this_00->Set(20, arg1);
        }
    }

    // 0x100868d50
    void BillboardMaterial::InitRenderPassEffects(bool arg1, bool arg2) {
        uint64_t in_register_00000039;
        uint64_t local_48;
        uint64_t uStack_40;

        RenderMaterial* this_00 = (RenderMaterial*)(((uint64_t)in_register_00000039 << 8) | (uint8_t)arg1);
        auto effectList = this_00->GetRenderPassEffect(4);
        uint32_t local_26 = 959454543;
        uint16_t local_22 = 17728;
        uint64_t local_30 = 6;
        new (&local_48) EffectList(&local_26);
        *(uint64_t*)effectList = local_48;
        *(uint64_t*)(effectList + 8) = uStack_40;
        bool arg2_00 = (bool)this_00->GetOption(0);
        effectList->Set(59, arg2_00);
        effectList->Set(74, arg2);
        effectList->Set(76, arg2);
        this_00->field_528->AddFormatType(4);
    }

    // 0x100869920
    BillboardMaterial::BillboardMaterial() : RenderMaterial() {
        new ((field_528 + 8)) shared_ptr();
        uint8_t* puVar1 = graphicutils::TextureWrapMode::REPEAT;
        field_552 = graphicutils::TextureWrapMode::REPEAT;
        field_560 = puVar1;
    }

    // 0x100869980
    BillboardMaterial::BillboardMaterial(BillboardMaterial&& billboardMaterial) : RenderMaterial(billboardMaterial) {
        ((field_528 + 8))
            ->shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(*((billboardMaterial.field_528 + 8)));
        field_552 = billboardMaterial.field_552;
        field_560 = billboardMaterial.field_560;
    }

    // 0x1008699f0
    BillboardMaterial::BillboardMaterial(const BillboardMaterial& billboardMaterial)
        : RenderMaterial(billboardMaterial) {
        new ((field_528 + 8)) shared_ptr((billboardMaterial.field_528 + 8));
        field_552 = billboardMaterial.field_552;
        field_560 = billboardMaterial.field_560;
    }

} // namespace jag::graphics
