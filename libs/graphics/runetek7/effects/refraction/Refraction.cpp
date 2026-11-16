// libs/graphics/runetek7/effects/refraction/Refraction.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "Refraction.h"

namespace jag::graphics {
    // 0x100067280: Refraction::GetRefractionRT() const has the same machine code as game::console::Snow::GetSnowPiles() const

    // 0x100918320
    Refraction::Refraction(RT7Core& rt7Core)
        : ShaderEffect(rt7Core), field_24(4294967295), field_28(4294967295), field_32(0) {}

    // 0x100918380
    bool Refraction::Initialise() {
        unsigned int uVar1 = field_16->GetPSTextureSlotManager();
        uVar1 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        field_24 = uVar1;
        uVar1 = field_16->GetPSTextureSlotManager();
        uVar1 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        field_28 = uVar1;
        return uVar1 != 4294967295 && field_24 != 4294967295;
    }

    // 0x1009183d0
    bool Refraction::IsSupported() const {
        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        return *(char*)(lVar1 + 146) != '\0' && *(char*)(lVar1 + 145) != '\0';
    }

    // 0x100918400
    bool Refraction::CreateRefractionTexture(const std::array<render::Texture::Desc, 2ul>& descs,
                                             const render::Texture::Desc& desc) {
        RenderTargets* pRVar6;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_01;
        uint64_t* puVar7;
        long lVar8;
        long* plVar9;
        unsigned int local_78;
        uint64_t uStack_70;
        uint64_t uStack_60;
        uint64_t local_58;
        uint64_t uStack_40;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_30;

        uint64_t local_88 = *(uint64_t*)(descs + 112);
        uint64_t uStack_80 = *(uint64_t*)(descs + 120);
        uint64_t local_98 = *(uint64_t*)(descs + 96);
        uint64_t uStack_90 = *(uint64_t*)(descs + 104);
        uint64_t local_a8 = *(uint64_t*)(descs + 80);
        uint64_t uStack_a0 = *(uint64_t*)(descs + 88);
        uint64_t local_b8 = *(uint64_t*)(descs + 64);
        uint64_t uStack_b0 = *(uint64_t*)(descs + 72);
        uint64_t local_f8 = *(uint64_t*)descs;
        uint64_t uStack_f0 = *(uint64_t*)(descs + 8);
        uint64_t local_e8 = *(uint64_t*)(descs + 16);
        uint64_t uStack_e0 = *(uint64_t*)(descs + 24);
        uint64_t local_d8 = *(uint64_t*)(descs + 32);
        uint64_t uStack_d0 = *(uint64_t*)(descs + 40);
        uint64_t local_c8 = *(uint64_t*)(descs + 48);
        uint64_t uStack_c0 = *(uint64_t*)(descs + 56);
        unsigned int* puVar5 = &local_f8[(unsigned long)descs];
        *puVar5 = *puVar5 >> 1;
        puVar5[1] = puVar5[1] >> 1;
        *(uint8_t*)(puVar5 + 8) = 0;
        puVar5[4] = 1;
        uint32_t uVar1 = desc.field_0;
        uint32_t uVar2 = desc.field_4;
        uStack_70._0_4_ = desc.field_8;
        uStack_70._4_4_ = desc.field_12;
        uint32_t uVar3 = desc.field_20;
        uStack_60._0_4_ = desc.field_24;
        uStack_60._4_4_ = desc.field_28;
        local_58._0_1_ = desc.field_32;
        local_58._1_3_ = *(uint32_t*)&desc.field_33;
        local_58._4_4_ = desc.field_36;
        uint64_t uStack_50 = *(uint64_t*)&desc.field_40;
        uint64_t local_48 = desc.field_48;
        uStack_40._0_1_ = desc.field_56;
        uStack_40._1_3_ = *(uint32_t*)&desc.field_57;
        uStack_40._4_4_ = desc.field_60;
        _local_78 = (((uint64_t)((unsigned int)uVar2 >> 1) << 32) | (uint32_t)((unsigned int)uVar1 >> 1));
        _local_68 = (((uint64_t)uVar3 << 32) | (uint32_t)1);
        uint8_t* this_00 = field_40;
        if (this_00->operator_cast_to_bool()) {
            LogAssert("!m_refractionRT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "refraction/Refraction.cpp",
                      44, nullptr);
        }
        local_30.Register((char*)field_16->GetRenderTargetsManager(), 14748683, *35866, (int)&local_f8, DAT_00000001,
                          (unsigned int)&local_78, false);
        *this_00 = local_30;
        if (this_00->operator_cast_to_bool()) {
            pRVar6 = (RenderTargets*)(*this_00).operator->();
            this_01 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          pRVar6->GetColourTargetTextures();
            puVar7 = (uint64_t*)(*this_01)[0];
            plVar9 = (long*)*puVar7;
            lVar8 = this_01->Instance();
            (**(void (**)(...))(*plVar9 + 24))(plVar9, lVar8 + 272, 0);
            pRVar6 = (RenderTargets*)(*this_00).operator->();
            plVar9 = (long*)pRVar6->GetDepthStencilTargetTexture();
            lVar8 = pRVar6->Instance();
            (**(void (**)(...))(*plVar9 + 24))(plVar9, lVar8 + 80, 0);
        }
        lVar8 = this_00->end();
        return lVar8 != 0;
    }

    // 0x1009185f0
    void Refraction::DestroyRefractionTexture() {
        ((RenderTargetsManager*)field_16->GetRenderTargetsManager())->Unregister(*field_40);
    }

    // 0x100918620
    void Refraction::SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const {
        unsigned int arg1;
        int iVar1;
        RenderTargets* pRVar3;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar4;
        uint64_t* puVar5;
        HashedString* pHVar6;
        RenderPipelineState* this_02;
        Texture* pTVar7;
        ImVec4 local_58;
        unsigned int* local_48;
        RenderPipelineState* local_40;
        unsigned int local_34;

        auto this_01 = shader.GetProgram();
        uint8_t* this_00 = field_40;
        long lVar2 = this_00->end();
        if (lVar2 == 0) {
            LogAssert("m_refractionRT.get()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "refraction/Refraction.cpp",
                      64, "No valid destination render target for render target resolve");
        }
        lVar2 = this_00->end();
        if (lVar2 != 0) {
            pRVar3 = (RenderTargets*)(*this_00).operator->();
            pvVar4 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         pRVar3->GetColourTargetTextures();
            puVar5 = (uint64_t*)(*pvVar4)[0];
            local_48 = (unsigned int*)(*puVar5)->second();
            local_40 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
            local_34 = field_24;
            pRVar3 = (RenderTargets*)(*this_00).operator->();
            pvVar4 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         pRVar3->GetColourTargetTextures();
            puVar5 = (uint64_t*)(*pvVar4)[0];
            pTVar7 = (Texture*)*puVar5;
            pHVar6 = (HashedString*)graphics::operator*(66);
            iVar1 = this_01->GetConstIndex(*pHVar6);
            local_40->SetPSTextureSamplerPair(local_34, pTVar7, iVar1, nullptr, true);
            this_02 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
            arg1 = field_28;
            pRVar3 = (RenderTargets*)(*this_00).operator->();
            pTVar7 = (Texture*)pRVar3->GetDepthStencilTargetTexture();
            pHVar6 = (HashedString*)graphics::operator*(67);
            iVar1 = this_01->GetConstIndex(*pHVar6);
            this_02->SetPSTextureSamplerPair(arg1, pTVar7, iVar1, nullptr, true);
            local_58 = ImVec4((float)local_48[2], 0.0, (float)*local_48, (float)local_48[1]);
            pHVar6 = (HashedString*)graphics::operator*(69);
            this_01->SetShaderConstVector4(pHVar6, &local_58);
        }
    }

} // namespace jag::graphics
