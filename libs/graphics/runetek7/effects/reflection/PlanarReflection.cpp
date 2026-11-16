// libs/graphics/runetek7/effects/reflection/PlanarReflection.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "PlanarReflection.h"

namespace jag::graphics {
    // 0x10002d850: the linker folded this into oldscape::option::Option<int>::GetDefaultValue() const, which has identical code
    PlanarReflection::GetReflectionManager();

    // 0x1009180d0, 112 bytes, base-object constructor, placed by class name and debug map
    // PlanarReflection::PlanarReflection(RT7Core&)
    void PlanarReflection::PlanarReflection(RT7Core* param_1) {
        RenderTargetsManager* pRVar1;

        new (this) ShaderEffect(param_1);
        field_0 = &PTR__PlanarReflection_100f19170;
        pRVar1 = (RenderTargetsManager*)param_1->GetRenderTargetsManager();
        new (&field_32, pRVar1) ReflectionManager();
        field_688 = 4294967295;
        m_reflectionMapContribution = 1.0;
        m_waterReflectionStrength = 1.0;
    }

    // 0x100918140, 16 bytes, complete-object constructor, placed by class name and debug map
    // PlanarReflection::PlanarReflection(RT7Core&): jumps straight to the base-object constructor

    // 0x100918150, 64 bytes, placed by class name and debug map
    // PlanarReflection::Initialise()
    bool PlanarReflection::Initialise() {
        uint uVar1;

        uVar1 = field_16->GetPSTextureSlotManager();
        uVar1 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        field_688 = uVar1;
        return uVar1 != 4294967295;
    }

    // 0x100918190, 176 bytes, placed by class name and debug map
    // PlanarReflection::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void PlanarReflection::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2, Shader* param_3) {
        uint uVar1;
        ShaderProgram* this_00;
        HashedString* pHVar2;
        RenderPipelineState* this_01;
        Texture* pTVar3;
        int iVar4;

        this_00 = (ShaderProgram*)param_3->GetProgram();
        pHVar2 = (HashedString*)graphics::operator*((graphics*)134);
        this_00->SetShaderConstFloat1(pHVar2, m_reflectionMapContribution);
        pHVar2 = (HashedString*)graphics::operator*((graphics*)130);
        this_00->SetShaderConstFloat1(pHVar2, m_waterReflectionStrength);
        this_01 = (RenderPipelineState*)param_1->GetRenderPipelineState();
        uVar1 = field_688;
        pTVar3 = (Texture*)(&field_32)->GetReflectionMapAtlas();
        pHVar2 = (HashedString*)graphics::operator*((graphics*)65);
        iVar4 = this_00->GetConstIndex(pHVar2);
        this_01->SetPSTextureSamplerPair(uVar1, pTVar3, iVar4, 0, false);
    }

    // 0x100918240, 224 bytes, placed by class name and debug map
    // PlanarReflection::OnQualityChange(GraphicsQuality)
    undefined8 PlanarReflection::OnQualityChange(undefined4 param_2) {
        undefined1* this_00;
        MapArea* this_01;
        long lVar2;
        Singleton<render::RenderDevice>* this_02;
        Config local_30;

        if ((*(code*)field_0[5])() == '\0') {
            return 0;
        }
        new (&local_30) ReflectionManager::Config();
        this_00 = &field_32;
        this_02 = (Singleton<render::RenderDevice>*)this_00;
        this_00->Destroy();
        switch (param_2) {
        case 0:
            local_30.field_0._0_4_ = 512;
            local_30.field_0._4_4_ = 256;
            break;
        case 1:
            local_30.field_0._0_4_ = 1024;
            local_30.field_0._4_4_ = 512;
            break;
        case 3:
            this_01 = (MapArea*)this_02->Instance();
            lVar2 = this_01->GetOrigin();
            if (*(char*)(lVar2 + 156) != '\0') {
                local_30.field_0._0_4_ = field_16->GetBackBufferWidth();
                local_30.field_0._4_4_ = field_16->GetBackBufferHeight();
                break;
            }
        case 2:
            local_30.field_0._0_4_ = 2048;
            local_30.field_0._4_4_ = 1024;
            break;
        case 4294967295:
            return 0;
        }
        return this_00->Initialise(&local_30);
    }

} // namespace jag::graphics
