// libs/graphics/runetek7/effects/shadows/DeferredShadows.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "DeferredShadows.h"

namespace jag::graphics {
    // 0x1009187b0
    DeferredShadows::DeferredShadows(RT7Core& rt7Core) : ShaderEffect(rt7Core), field_24(4294967295) {
        new (&field_32) shared_ptr();
    }

    // 0x100918810
    bool DeferredShadows::Initialise() {
        unsigned int uVar1 = field_16->GetPSTextureSlotManager();
        uVar1 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        field_24 = uVar1;
        return uVar1 != 4294967295;
    }

    // 0x100918840
    void DeferredShadows::SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                             Shader& shader) const {
        unsigned int arg1;
        Texture* texture;
        int arg3;
        RenderTargets* pRVar2;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar3;
        long* plVar4;
        uint64_t* puVar5;
        RenderPipelineState* this_02;
        HashedString* hashedString;

        auto this_01 = shader.GetProgram();
        uint8_t* this_00 = &field_32;
        if (this_00->end() != 0) {
            pRVar2 = (RenderTargets*)(*this_00).operator->();
            pvVar3 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         pRVar2->GetColourTargetTextures();
            plVar4 = (long*)(*pvVar3)[0];
            if (*plVar4 != 0) {
                pRVar2 = (RenderTargets*)(*this_00).operator->();
                pvVar3 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                             pRVar2->GetColourTargetTextures();
                puVar5 = (uint64_t*)(*pvVar3)[0];
                texture = (Texture*)*puVar5;
                this_02 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
                arg1 = field_24;
                hashedString = (HashedString*)graphics::operator*(46);
                arg3 = this_01->GetConstIndex(*hashedString);
                this_02->SetPSTextureSamplerPair(arg1, texture, arg3, nullptr, false);
                return;
            }
        }
        LogAssert("(m_shadowBufferRT.get() != nullptr) && (m_shadowBufferRT->GetColourTargetTextures()[0] != nullptr)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                  "shadows/DeferredShadows.cpp",
                  26, nullptr);
    }

} // namespace jag::graphics
