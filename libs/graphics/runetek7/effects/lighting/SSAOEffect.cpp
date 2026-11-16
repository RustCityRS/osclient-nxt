// libs/graphics/runetek7/effects/lighting/SSAOEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "SSAOEffect.h"

namespace jag::graphics {
    // 0x100937ba0
    SSAOEffect::SSAOEffect(RT7Core& rt7Core) : ShaderEffect(rt7Core), field_24(4294967295) {
        new (&field_32) shared_ptr();
    }

    // 0x100937c00
    bool SSAOEffect::Initialise() {
        unsigned int uVar1 = field_16->GetPSTextureSlotManager();
        uVar1 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        field_24 = uVar1;
        return uVar1 != 4294967295;
    }

    // 0x100937c30
    void SSAOEffect::SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const {
        unsigned int arg1;
        int arg3;
        ShaderProgram* this_00;
        HashedString* hashedString;
        RenderPipelineState* this_01;
        RenderTargets* this_02;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_03;
        uint64_t* puVar3;

        shared_ptr local_38 = field_32.lock();
        if (local_38.end() == 0) {
            LogAssert("ssaoRT.get() != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "lighting/SSAOEffect.cpp",
                      22, "No valid SSAO render target required for SSAO effect");
        }
        if (shared_ptr::operator_cast_to_bool(&local_38) != '\0') {
            this_00 = shader.GetProgram();
            hashedString = (HashedString*)graphics::operator*(103);
            arg3 = this_00->GetConstIndex(*hashedString);
            this_01 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
            arg1 = field_24;
            this_02 = (RenderTargets*)local_38.operator->();
            this_03 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          this_02->GetColourTargetTextures();
            puVar3 = (uint64_t*)(*this_03)[0];
            this_01->SetPSTextureSamplerPair(arg1, *puVar3, arg3, nullptr, false);
        }
    }

    // 0x100937d30
    bool SSAOEffect::IsSupported() const {
        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        uint8_t bVar2 = *(uint8_t*)(lVar1 + 154);
        if (*(char*)(lVar1 + 155) == '\0') {
            bVar2 = 0;
        }
        return 2 < *(int*)(lVar1 + 308) & bVar2;
    }

    // 0x100937d70
    uint64_t SSAOEffect::GetHighestSupporedMode() {
        auto this_00 = Instance();
        long lVar2 = this_00->GetOrigin();
        if (3 < *(int*)(lVar2 + 84)) {
            if (((NXTPixScreen*)this_00->Instance())->GetUIHeight() != 5) {
                return 2;
            }
        }
        return 1;
    }

} // namespace jag::graphics
