// libs/graphics/runetek7/effects/lighting/SSAOEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "SSAOEffect.h"

namespace jag::graphics {
    // 0x100937ba0, 80 bytes, base-object constructor, placed by class name and debug map
    // SSAOEffect::SSAOEffect(RT7Core&)
    void SSAOEffect::SSAOEffect(RT7Core* param_1) {
        new (this) ShaderEffect(param_1);
        field_0 = &PTR__SSAOEffect_100f19f48;
        field_24 = 4294967295;
        new (&field_32, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x100937bf0, 16 bytes, complete-object constructor, placed by class name and debug map
    // SSAOEffect::SSAOEffect(RT7Core&): jumps straight to the base-object constructor

    // 0x100937c00, 48 bytes, placed by class name and debug map
    // SSAOEffect::Initialise()
    bool SSAOEffect::Initialise() {
        uint uVar1;

        uVar1 = field_16->GetPSTextureSlotManager();
        uVar1 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        field_24 = uVar1;
        return uVar1 != 4294967295;
    }

    // 0x100937c30, 256 bytes, placed by class name and debug map
    // SSAOEffect::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void SSAOEffect::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2, Shader* param_3) {
        uint uVar1;
        bool bVar2;
        int iVar3;
        long lVar4;
        ShaderProgram* this_00;
        HashedString* pHVar5;
        RenderPipelineState* this_01;
        RenderTargets* this_02;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_03;
        undefined8* puVar6;
        shared_ptr local_38;

        weak_ptr<oldscape::rs2lib::IfType>::lock();
        lVar4 = local_38.end();
        if (lVar4 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("ssaoRT.get() != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "lighting/SSAOEffect.cpp",
                      22, "No valid SSAO render target required for SSAO effect");
        }
        bVar2 = shared_ptr::operator_cast_to_bool(&local_38);
        if (bVar2) {
            this_00 = (ShaderProgram*)param_3->GetProgram();
            pHVar5 = (HashedString*)graphics::operator*((graphics*)103);
            iVar3 = this_00->GetConstIndex(pHVar5);
            this_01 = (RenderPipelineState*)param_1->GetRenderPipelineState();
            uVar1 = field_24;
            this_02 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)&local_38);
            this_03 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    this_02->GetColourTargetTextures();
            puVar6 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_03, 0);
            this_01->SetPSTextureSamplerPair(uVar1, (Texture*)*puVar6, iVar3, 0, false);
        }
        local_38.~shared_ptr();
    }

    // 0x100937d30, 64 bytes, placed by class name and debug map
    // SSAOEffect::IsSupported() const
    byte SSAOEffect::IsSupported() {
        MapArea* this_00;
        long lVar1;
        byte bVar2;

        this_00 = (MapArea*)Instance();
        lVar1 = this_00->GetOrigin();
        bVar2 = *(byte*)(lVar1 + 154);
        if (*(char*)(lVar1 + 155) == '\0') {
            bVar2 = 0;
        }
        return 2 < *(int*)(lVar1 + 308) & bVar2;
    }

    // 0x100937d70, 64 bytes, placed by class name and debug map
    // SSAOEffect::GetHighestSupporedMode()
    undefined8 SSAOEffect::GetHighestSupporedMode() {
        MapArea* this_00;
        long lVar2;
        NXTPixScreen* this_01;

        this_00 = (MapArea*)Instance();
        lVar2 = this_00->GetOrigin();
        if (3 < *(int*)(lVar2 + 84)) {
            this_01 = (NXTPixScreen*)this_00->Instance();
            if (this_01->GetUIHeight() != 5) {
                return 2;
            }
        }
        return 1;
    }

} // namespace jag::graphics
