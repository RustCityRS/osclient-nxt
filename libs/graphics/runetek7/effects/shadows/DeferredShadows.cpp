// libs/graphics/runetek7/effects/shadows/DeferredShadows.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "DeferredShadows.h"

namespace jag::graphics {
    // 0x1009187b0, 80 bytes, base-object constructor, placed by class name and debug map
    // DeferredShadows::DeferredShadows(RT7Core&)
    void DeferredShadows::DeferredShadows(RT7Core* param_1) {
        new (this) ShaderEffect(param_1);
        field_0 = &PTR__DeferredShadows_100f19270;
        field_24 = 4294967295;
        new (&field_32, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x100918800, 16 bytes, complete-object constructor, placed by class name and debug map
    // DeferredShadows::DeferredShadows(RT7Core&): jumps straight to the base-object constructor

    // 0x100918810, 48 bytes, placed by class name and debug map
    // DeferredShadows::Initialise()
    bool DeferredShadows::Initialise() {
        uint uVar1;

        uVar1 = field_16->GetPSTextureSlotManager();
        uVar1 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        field_24 = uVar1;
        return uVar1 != 4294967295;
    }

    // 0x100918840, 224 bytes, placed by class name and debug map
    // DeferredShadows::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void DeferredShadows::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2, Shader* param_3) {
        undefined1* this_00;
        uint uVar1;
        Texture* pTVar2;
        int iVar3;
        ShaderProgram* this_01;
        long lVar4;
        RenderTargets* pRVar5;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar6;
        long* plVar7;
        undefined8* puVar8;
        RenderPipelineState* this_02;
        HashedString* pHVar9;

        this_01 = (ShaderProgram*)param_3->GetProgram();
        this_00 = &field_32;
        lVar4 = this_00->end();
        if (lVar4 != 0) {
            pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_00);
            pvVar6 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar5->GetColourTargetTextures();
            plVar7 = (long*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar6, 0);
            if (*plVar7 != 0) {
                pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)this_00);
                pvVar6 = (vector<render::Texture*,
                                 eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                             pRVar5->GetColourTargetTextures();
                puVar8 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar6, 0);
                pTVar2 = (Texture*)*puVar8;
                this_02 = (RenderPipelineState*)param_1->GetRenderPipelineState();
                uVar1 = field_24;
                pHVar9 = (HashedString*)graphics::operator*((graphics*)46);
                iVar3 = this_01->GetConstIndex(pHVar9);
                this_02->SetPSTextureSamplerPair(uVar1, pTVar2, iVar3, 0, false);
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("(m_shadowBufferRT.get() != nullptr) && (m_shadowBufferRT->GetColourTargetTextures()[0] != nullptr)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                  "shadows/DeferredShadows.cpp",
                  26, (char*)0);
    }

} // namespace jag::graphics
