// libs/graphics/runetek7/effects/skybox/SkyBoxMaterial.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "SkyBoxMaterial.h"

namespace jag::graphics {
    // 0x1008cc3f0: the linker folded this into RenderMaterial::~RenderMaterial(), which has identical code
    SkyBoxMaterial::~SkyBoxMaterial();

    // 0x10091a4c0, 16 bytes, placed by class name and debug map
    // SkyBoxMaterial::Init()
    void SkyBoxMaterial::Init() {
        InitRenderPassEffects(this);
    }

    // 0x10091d3b0, 160 bytes, placed by class name
    // SkyBoxMaterial::InitRenderPassEffects()
    void SkyBoxMaterial::InitRenderPassEffects() {
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined4* puVar4;
        undefined4* puVar5;
        undefined4 local_48;
        undefined4 uStack_44;
        undefined4 uStack_40;
        undefined4 uStack_3c;
        undefined4* local_38;
        undefined8 local_30;
        undefined4 local_25;
        undefined1 local_21;

        puVar4 = (undefined4*)GetRenderPassEffect(4);
        local_25 = 825243933;
        local_21 = 84;
        local_38 = &local_25;
        local_30 = 5;
        new (&local_48) EffectList((initializer_list*)&local_38);
        *puVar4 = local_48;
        puVar4[1] = uStack_44;
        puVar4[2] = uStack_40;
        puVar4[3] = uStack_3c;
        (field_528, 4)->AddFormatType();
        puVar4 = (undefined4*)GetRenderPassEffect(2);
        puVar5 = (undefined4*)GetRenderPassEffect(4);
        uVar1 = puVar5[1];
        uVar2 = puVar5[2];
        uVar3 = puVar5[3];
        *puVar4 = *puVar5;
        puVar4[1] = uVar1;
        puVar4[2] = uVar2;
        puVar4[3] = uVar3;
        (field_528, 2)->AddFormatType();
    }

} // namespace jag::graphics
