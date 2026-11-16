// libs/graphics/runetek7/effects/refraction/Refraction.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "Refraction.h"

namespace jag::graphics {
    // 0x100067280: the linker folded this into game::console::Snow::GetSnowPiles() const, which has identical code
    Refraction::GetRefractionRT() const;

    // 0x100918320, 80 bytes, base-object constructor, placed by class name
    // Refraction::Refraction(RT7Core&)
    void Refraction::Refraction(RT7Core* param_1) {
        new (this) ShaderEffect(param_1);
        field_0 = &PTR__Refraction_100f191f0;
        field_24 = 4294967295;
        field_28 = 4294967295;
        field_32 = 0;
        new (field_40, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x100918370, 16 bytes, complete-object constructor, placed by class name
    // Refraction::Refraction(RT7Core&): jumps straight to the base-object constructor

    // 0x100918380, 80 bytes, placed by class name
    // Refraction::Initialise()
    bool Refraction::Initialise() {
        uint uVar1;

        uVar1 = field_16->GetPSTextureSlotManager();
        uVar1 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        field_24 = uVar1;
        uVar1 = field_16->GetPSTextureSlotManager();
        uVar1 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        field_28 = uVar1;
        return uVar1 != 4294967295 && field_24 != 4294967295;
    }

    // 0x1009183d0, 48 bytes, placed by class name
    // Refraction::IsSupported() const
    bool Refraction::IsSupported() {
        MapArea* this_00;
        long lVar1;

        this_00 = (MapArea*)Instance();
        lVar1 = this_00->GetOrigin();
        return *(char*)(lVar1 + 146) != '\0' && *(char*)(lVar1 + 145) != '\0';
    }

    // 0x100918400, 480 bytes, placed by class name
    // Refraction::CreateRefractionTexture(std::array<render::Texture::Desc, 2ul> const&, render::Texture::Desc const&)
    /* Refraction::CreateRefractionTexture(std::array<render::Texture::Desc, 2ul>
   const&, render::Texture::Desc const&) */

    bool Refraction::CreateRefractionTexture(array* param_1, Desc* param_2) {
        undefined1* this_00;
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        bool bVar4;
        uint* puVar5;
        undefined8 uVar6;
        RenderTargets* pRVar7;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_01;
        undefined8* puVar8;
        long lVar9;
        long* plVar10;
        undefined8 local_f8;
        undefined8 uStack_f0;
        undefined8 local_e8;
        undefined8 uStack_e0;
        undefined8 local_d8;
        undefined8 uStack_d0;
        undefined8 local_c8;
        undefined8 uStack_c0;
        undefined8 local_b8;
        undefined8 uStack_b0;
        undefined8 local_a8;
        undefined8 uStack_a0;
        undefined8 local_98;
        undefined8 uStack_90;
        undefined8 local_88;
        undefined8 uStack_80;
        uint local_78;
        uint uStack_74;
        undefined8 uStack_70;
        undefined4 local_68;
        undefined4 uStack_64;
        undefined8 uStack_60;
        undefined8 local_58;
        undefined8 uStack_50;
        undefined8 local_48;
        undefined8 uStack_40;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_30[16];

        local_88 = *(undefined8*)(param_1 + 112);
        uStack_80 = *(undefined8*)(param_1 + 120);
        local_98 = *(undefined8*)(param_1 + 96);
        uStack_90 = *(undefined8*)(param_1 + 104);
        local_a8 = *(undefined8*)(param_1 + 80);
        uStack_a0 = *(undefined8*)(param_1 + 88);
        local_b8 = *(undefined8*)(param_1 + 64);
        uStack_b0 = *(undefined8*)(param_1 + 72);
        local_f8 = *(undefined8*)param_1;
        uStack_f0 = *(undefined8*)(param_1 + 8);
        local_e8 = *(undefined8*)(param_1 + 16);
        uStack_e0 = *(undefined8*)(param_1 + 24);
        local_d8 = *(undefined8*)(param_1 + 32);
        uStack_d0 = *(undefined8*)(param_1 + 40);
        local_c8 = *(undefined8*)(param_1 + 48);
        uStack_c0 = *(undefined8*)(param_1 + 56);
        puVar5 = (uint*)std::array<render::Texture::Desc, 2ul>::operator[]((ulong)&local_f8);
        *puVar5 = *puVar5 >> 1;
        puVar5[1] = puVar5[1] >> 1;
        *(undefined1*)(puVar5 + 8) = 0;
        puVar5[4] = 1;
        uVar1 = param_2->field_0;
        uVar2 = param_2->field_4;
        uStack_70._0_4_ = param_2->field_8;
        uStack_70._4_4_ = param_2->field_12;
        uVar3 = param_2->field_20;
        uStack_60._0_4_ = param_2->field_24;
        uStack_60._4_4_ = param_2->field_28;
        local_58._0_1_ = param_2->field_32;
        local_58._1_3_ = *(undefined3*)&param_2->field_33;
        local_58._4_4_ = param_2->field_36;
        uStack_50 = *(undefined8*)&param_2->field_40;
        local_48 = param_2->field_48;
        uStack_40._0_1_ = param_2->field_56;
        uStack_40._1_3_ = *(undefined3*)&param_2->field_57;
        uStack_40._4_4_ = param_2->field_60;
        _local_78 = CONCAT44((uint)uVar2 >> 1, (uint)uVar1 >> 1);
        _local_68 = CONCAT44(uVar3, 1);
        this_00 = field_40;
        bVar4 = this_00->operator_cast_to_bool();
        if (bVar4) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_refractionRT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "refraction/Refraction.cpp",
                      44, (char*)0);
        }
        uVar6 = field_16->GetRenderTargetsManager();
        local_30->Register(uVar6, "RefractionRT", 35866, &local_f8, 1, &local_78, 0, 1);
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)this_00,
                                                     (shared_ptr*)local_30);
        local_30->~shared_ptr();
        bVar4 = this_00->operator_cast_to_bool();
        if (bVar4) {
            pRVar7 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_00);
            this_01 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar7->GetColourTargetTextures();
            puVar8 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_01, 0);
            plVar10 = (long*)*puVar8;
            lVar9 = this_01->Instance();
            (**(code**)(*plVar10 + 24))(plVar10, lVar9 + 272, 0);
            pRVar7 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_00);
            plVar10 = (long*)pRVar7->GetDepthStencilTargetTexture();
            lVar9 = pRVar7->Instance();
            (**(code**)(*plVar10 + 24))(plVar10, lVar9 + 80, 0);
        }
        lVar9 = this_00->end();
        return lVar9 != 0;
    }

    // 0x1009185f0, 48 bytes, placed by class name
    // Refraction::DestroyRefractionTexture()
    void Refraction::DestroyRefractionTexture() {
        RenderTargetsManager* this_00;

        this_00 = (RenderTargetsManager*)field_16->GetRenderTargetsManager();
        this_00->Unregister(field_40);
    }

    // 0x100918620, 400 bytes, placed by class name
    // Refraction::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void Refraction::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2, Shader* param_3) {
        undefined1* this_00;
        uint uVar1;
        int iVar2;
        ShaderProgram* this_01;
        long lVar3;
        RenderTargets* pRVar4;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar5;
        undefined8* puVar6;
        HashedString* pHVar7;
        RenderPipelineState* this_02;
        Texture* pTVar8;
        ImVec4 local_58[16];
        uint* local_48;
        RenderPipelineState* local_40;
        uint local_34;

        this_01 = (ShaderProgram*)param_3->GetProgram();
        this_00 = field_40;
        lVar3 = this_00->end();
        if (lVar3 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_refractionRT.get()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "refraction/Refraction.cpp",
                      64, "No valid destination render target for render target resolve");
        }
        lVar3 = this_00->end();
        if (lVar3 != 0) {
            pRVar4 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_00);
            pvVar5 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar4->GetColourTargetTextures();
            puVar6 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar5, 0);
            local_48 = (uint*)(*puVar6)->second();
            local_40 = (RenderPipelineState*)param_1->GetRenderPipelineState();
            local_34 = field_24;
            pRVar4 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_00);
            pvVar5 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar4->GetColourTargetTextures();
            puVar6 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar5, 0);
            pTVar8 = (Texture*)*puVar6;
            pHVar7 = (HashedString*)graphics::operator*((graphics*)66);
            iVar2 = this_01->GetConstIndex(pHVar7);
            local_40->SetPSTextureSamplerPair(local_34, pTVar8, iVar2, 0, true);
            this_02 = (RenderPipelineState*)param_1->GetRenderPipelineState();
            uVar1 = field_28;
            pRVar4 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_00);
            pTVar8 = (Texture*)pRVar4->GetDepthStencilTargetTexture();
            pHVar7 = (HashedString*)graphics::operator*((graphics*)67);
            iVar2 = this_01->GetConstIndex(pHVar7);
            this_02->SetPSTextureSamplerPair(uVar1, pTVar8, iVar2, 0, true);
            ImVec4::ImVec4(local_58, (float)local_48[2], 0.0, (float)*local_48, (float)local_48[1]);
            pHVar7 = (HashedString*)graphics::operator*((graphics*)69);
            this_01->SetShaderConstVector4(pHVar7, local_58);
        }
    }

} // namespace jag::graphics
