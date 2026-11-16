// libs/graphics/runetek7/model/BillboardMaterial.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "BillboardMaterial.h"

namespace jag::graphics {
    // 0x1007b51a0: the linker folded this into TerrainMaterial::SetTextureAtlasReference(shared_ptr<TextureAtlasReference> const&), which has identical code
    BillboardMaterial::SetTextureAtlasReference(shared_ptr<TextureAtlasReference> const&);

    // 0x1007b8920: the linker folded this into TerrainMaterial::GetTextureAtlasReference() const, which has identical code
    BillboardMaterial::GetTextureAtlasReference() const;

    // 0x1008662d0, 16 bytes, complete-object constructor, placed by class name and debug map
    // BillboardMaterial::BillboardMaterial(): jumps straight to the base-object constructor

    // 0x100866490, 16 bytes, complete-object constructor, placed by class name
    // BillboardMaterial::BillboardMaterial(BillboardMaterial&&): jumps straight to the base-object constructor

    // 0x100866720, 16 bytes, complete-object constructor, placed by class name
    // BillboardMaterial::BillboardMaterial(BillboardMaterial const&): jumps straight to the base-object constructor

    // 0x100866ec0, 240 bytes, placed by class name
    // BillboardMaterial::Init(bool, bool, Material const&)
    void BillboardMaterial::Init(bool param_1, bool param_2, Material* param_3) {
        uchar uVar1;
        bool bVar2;
        undefined4 uVar3;
        undefined8 in_RAX;
        undefined* puVar4;
        undefined8 uVar5;
        undefined4 uVar6;

        uVar6 = (undefined4)((ulong)in_RAX >> 32);
        InitRenderPassEffects(SUB81(this, 0), param_1);
        puVar4 = (undefined*)param_3->GetLastUpdateTimeNS();
        field_16 = puVar4;
        if (puVar4 == AlphaMode::ALPHA_OPAQUE) {
            uVar5 = logger::default_logger();
            uVar3 = param_3->GetZ();
            logger::Logger::Log(uVar5, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/model/BillboardMaterial.cpp",
                                41, "Billboard ID %i is not set as alpha blended/tested", CONCAT44(uVar6, uVar3));
            field_16 = AlphaMode::ALPHA_BLENDED;
        }
        puVar4 = (undefined*)param_3->GetStartTimeNS();
        field_24 = puVar4;
        if (field_16 == AlphaMode::ALPHA_TESTED) {
            uVar1 = param_3->GetMaxLevels();
        } else {
            uVar1 = '\0';
        }
        field_32 = uVar1;
        puVar4 = (undefined*)param_3->GetWrapU();
        field_552 = puVar4;
        puVar4 = (undefined*)param_3->GetWrapV();
        field_560 = puVar4;
        bVar2 = (bool)param_3->IsRT7();
        SetOption(0, bVar2);
        SetOption(0, false);
    }

    // 0x100867d60, 80 bytes, placed by class name
    // BillboardMaterial::operator=(BillboardMaterial const&)
    /* BillboardMaterial::TEMPNAMEPLACEHOLDERVALUE(BillboardMaterial
   const&) */

    BillboardMaterial* BillboardMaterial::operator=(BillboardMaterial* param_1) {
        RenderMaterial::operator=((RenderMaterial*)this, (RenderMaterial*)param_1);
        shared_ptr<TextureAtlasReference>::operator=((shared_ptr<TextureAtlasReference>*)(field_528 + 8),
                                                     (shared_ptr*)(param_1->field_528 + 8));
        field_552 = param_1->field_552;
        field_560 = param_1->field_560;
        return this;
    }

    // 0x1008686f0, 112 bytes, placed by class name
    // BillboardMaterial::SetLowPrecision(bool)
    void BillboardMaterial::SetLowPrecision(bool param_1) {
        EffectList* pEVar1;
        EffectList* pEVar2;

        pEVar1 = (EffectList*)(&field_48)->begin();
        pEVar2 = (EffectList*)(&field_48)->end();
        for (; pEVar1 != pEVar2; pEVar1 = pEVar1 + 48) {
            pEVar1->Set(20, param_1);
        }
    }

    // 0x100868d50, 176 bytes, placed by class name
    // BillboardMaterial::InitRenderPassEffects(bool, bool)
    void BillboardMaterial::InitRenderPassEffects(bool param_1, bool param_2) {
        undefined1 uVar1;
        EffectList* pEVar2;
        undefined7 in_register_00000031;
        undefined7 in_register_00000039;
        RenderMaterial* this;
        undefined8 local_48;
        undefined8 uStack_40;
        undefined4* local_38;
        undefined8 local_30;
        undefined4 local_26;
        undefined2 local_22;

        this = (RenderMaterial*)CONCAT71(in_register_00000039, param_1);
        pEVar2 = (EffectList*)GetRenderPassEffect(4);
        local_26 = 959454543;
        local_22 = 17728;
        local_38 = &local_26;
        local_30 = 6;
        new (&local_48) EffectList((initializer_list*)&local_38);
        *(undefined8*)pEVar2 = local_48;
        *(undefined8*)(pEVar2 + 8) = uStack_40;
        uVar1 = GetOption(0);
        pEVar2->Set(59, uVar1);
        pEVar2->Set(74, CONCAT71(in_register_00000031, param_2) & 4294967295);
        pEVar2->Set(76, CONCAT71(in_register_00000031, param_2) & 4294967295);
        (field_528, 4)->AddFormatType();
    }

    // 0x100869920, 96 bytes, base-object constructor, placed by class name
    // BillboardMaterial::BillboardMaterial()
    void BillboardMaterial::BillboardMaterial() {
        undefined* puVar1;
        _func_decltype_nullptr* in_RSI;

        new (this) RenderMaterial();
        field_0 = (undefined**)(PTR_vtable_100ee87b8 + 16);
        new ((field_528 + 8), in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        puVar1 = graphicutils::TextureWrapMode::REPEAT;
        field_552 = graphicutils::TextureWrapMode::REPEAT;
        field_560 = puVar1;
    }

    // 0x100869980, 112 bytes, base-object constructor, placed by class name
    // BillboardMaterial::BillboardMaterial(BillboardMaterial&&)
    void BillboardMaterial::BillboardMaterial(BillboardMaterial* param_1) {
        new (this) RenderMaterial(param_1);
        field_0 = (undefined**)(PTR_vtable_100ee87b8 + 16);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)(field_528 + 8), (shared_ptr*)(param_1->field_528 + 8));
        field_552 = param_1->field_552;
        field_560 = param_1->field_560;
    }

    // 0x1008699f0, 112 bytes, base-object constructor, placed by class name
    // BillboardMaterial::BillboardMaterial(BillboardMaterial const&)
    void BillboardMaterial::BillboardMaterial(BillboardMaterial* param_1) {
        new (this) RenderMaterial(param_1);
        field_0 = (undefined**)(PTR_vtable_100ee87b8 + 16);
        new ((field_528 + 8), (shared_ptr*)(param_1->field_528 + 8)) shared_ptr<oldscape::dash3d::Decor>();
        field_552 = param_1->field_552;
        field_560 = param_1->field_560;
    }

} // namespace jag::graphics
