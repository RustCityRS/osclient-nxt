// libs/graphics/runetek7/effects/reflection/PlanarReflection.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "PlanarReflection.h"

namespace jag::graphics {
    // 0x10002d850: PlanarReflection::GetReflectionManager() has the same machine code as oldscape::option::Option<int>::GetDefaultValue() const

    // 0x1009180d0
    PlanarReflection::PlanarReflection(RT7Core& rt7Core) : ShaderEffect(rt7Core) {
        auto renderTargetsManager = rt7Core.GetRenderTargetsManager();
        new (&field_32) ReflectionManager(*renderTargetsManager);
        field_688 = 4294967295;
        m_reflectionMapContribution = 1.0;
        m_waterReflectionStrength = 1.0;
    }

    // 0x100918150
    bool PlanarReflection::Initialise() {
        unsigned int uVar1 = field_16->GetPSTextureSlotManager();
        uVar1 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        field_688 = uVar1;
        return uVar1 != 4294967295;
    }

    // 0x100918190
    void PlanarReflection::SetShaderConstants(render::DrawCallState& drawCallState,
                                              render::RenderContext& renderContext, Shader& shader) const {
        auto this_00 = shader.GetProgram();
        auto pHVar1 = graphics::operator*(134);
        this_00->SetShaderConstFloat1(pHVar1, m_reflectionMapContribution);
        pHVar1 = (HashedString*)graphics::operator*(130);
        this_00->SetShaderConstFloat1(pHVar1, m_waterReflectionStrength);
        RenderPipelineState* this_01 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
        unsigned int arg1 = field_688;
        auto texture = field_32.GetReflectionMapAtlas();
        pHVar1 = (HashedString*)graphics::operator*(65);
        int arg3 = this_00->GetConstIndex(*pHVar1);
        this_01->SetPSTextureSamplerPair(arg1, texture, arg3, nullptr, false);
    }

    // 0x100918240
    uint64_t PlanarReflection::OnQualityChange(GraphicsQuality graphicsQuality) {
        long lVar2;

        if (IsValidValue() == '\0') {
            return 0;
        }
        Config local_30;
        uint8_t* this_00 = &field_32;
        Singleton<render::RenderDevice>* this_02 = (Singleton<render::RenderDevice>*)this_00;
        this_00->Destroy();
        switch (graphicsQuality) {
        case 0:
            local_30.field_0._0_4_ = 512;
            local_30.field_0._4_4_ = 256;
            break;
        case 1:
            local_30.field_0._0_4_ = 1024;
            local_30.field_0._4_4_ = 512;
            break;
        case 3:
            lVar2 = ((MapArea*)this_02->Instance())->GetOrigin();
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
        return this_00->Initialise(local_30);
    }

} // namespace jag::graphics
