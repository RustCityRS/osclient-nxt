// libs/graphics/runetek7/terrain/TerrainMaterial.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "TerrainMaterial.h"

// 0x1007b43c0, 32 bytes, placed by debug map only (low confidence)
// TLS wrapper function for jag::graphics::PLAIN_SHAPE
void jag::graphics::PLAIN_SHAPE() {
    ___tls_init();
    (*(code*)PLAIN_SHAPE)();
}

// 0x1007b43e0, 32 bytes, placed by debug map only (low confidence)
// TLS wrapper function for jag::graphics::DIAGONAL_SHAPE
void jag::graphics::DIAGONAL_SHAPE() {
    ___tls_init();
    (*(code*)DIAGONAL_SHAPE)();
}

// 0x1007b4400, 32 bytes, placed by debug map only (low confidence)
// TLS wrapper function for jag::graphics::LEFT_SEMI_DIAGONAL_SMALL_SHAPE
void jag::graphics::LEFT_SEMI_DIAGONAL_SMALL_SHAPE() {
    ___tls_init();
    (*(code*)LEFT_SEMI_DIAGONAL_SMALL_SHAPE)();
}

// 0x1007b4420, 32 bytes, placed by debug map only (low confidence)
// TLS wrapper function for jag::graphics::RIGHT_SEMI_DIAGONAL_SMALL_SHAPE
void jag::graphics::RIGHT_SEMI_DIAGONAL_SMALL_SHAPE() {
    ___tls_init();
    (*(code*)RIGHT_SEMI_DIAGONAL_SMALL_SHAPE)();
}

// 0x1007b4440, 32 bytes, placed by debug map only (low confidence)
// TLS wrapper function for jag::graphics::LEFT_SEMI_DIAGONAL_BIG_SHAPE
void jag::graphics::LEFT_SEMI_DIAGONAL_BIG_SHAPE() {
    ___tls_init();
    (*(code*)LEFT_SEMI_DIAGONAL_BIG_SHAPE)();
}

// 0x1007b4460, 32 bytes, placed by debug map only (low confidence)
// TLS wrapper function for jag::graphics::RIGHT_SEMI_DIAGONAL_BIG_SHAPE
void jag::graphics::RIGHT_SEMI_DIAGONAL_BIG_SHAPE() {
    ___tls_init();
    (*(code*)RIGHT_SEMI_DIAGONAL_BIG_SHAPE)();
}

// 0x1007b4480, 32 bytes, placed by debug map only (low confidence)
// TLS wrapper function for jag::graphics::HALF_SQUARE_SHAPE
void jag::graphics::HALF_SQUARE_SHAPE() {
    ___tls_init();
    (*(code*)HALF_SQUARE_SHAPE)();
}

// 0x1007b44a0, 32 bytes, placed by debug map only (low confidence)
// TLS wrapper function for jag::graphics::CORNER_SMALL_SHAPE
void jag::graphics::CORNER_SMALL_SHAPE() {
    ___tls_init();
    (*(code*)CORNER_SMALL_SHAPE)();
}

// 0x1007b44c0, 32 bytes, placed by debug map only (low confidence)
// TLS wrapper function for jag::graphics::CORNER_BIG_SHAPE
void jag::graphics::CORNER_BIG_SHAPE() {
    ___tls_init();
    (*(code*)CORNER_BIG_SHAPE)();
}

// 0x1007b44e0, 32 bytes, placed by debug map only (low confidence)
// TLS wrapper function for jag::graphics::FAN_SMALL_SHAPE
void jag::graphics::FAN_SMALL_SHAPE() {
    ___tls_init();
    (*(code*)FAN_SMALL_SHAPE)();
}

// 0x1007b4500, 32 bytes, placed by debug map only (low confidence)
// TLS wrapper function for jag::graphics::FAN_BIG_SHAPE
void jag::graphics::FAN_BIG_SHAPE() {
    ___tls_init();
    (*(code*)FAN_BIG_SHAPE)();
}

// 0x1007b4520, 32 bytes, placed by debug map only (low confidence)
// TLS wrapper function for jag::graphics::TRAPEZIUM_SHAPE
void jag::graphics::TRAPEZIUM_SHAPE() {
    ___tls_init();
    (*(code*)TRAPEZIUM_SHAPE)();
}

namespace jag::graphics {
    // 0x1007b3e60, 80 bytes, base-object constructor, placed by class name and debug map
    // TerrainMaterial::TerrainMaterial()
    void TerrainMaterial::TerrainMaterial() {
        _func_decltype_nullptr* in_RSI;

        new (this) RenderMaterial();
        field_0 = (undefined**)(PTR_vtable_100ee8780 + 16);
        new (field_536, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x1007b3eb0, 16 bytes, complete-object constructor, placed by class name and debug map
    // TerrainMaterial::TerrainMaterial(): jumps straight to the base-object constructor

    // 0x1007b3ec0, 80 bytes, base-object constructor, placed by class name and debug map
    // TerrainMaterial::TerrainMaterial(TerrainMaterial&&)
    void TerrainMaterial::TerrainMaterial(TerrainMaterial* param_1) {
        new (this) RenderMaterial(param_1);
        field_0 = (undefined**)(PTR_vtable_100ee8780 + 16);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)field_536, (shared_ptr*)param_1->field_536);
    }

    // 0x1007b3f10, 16 bytes, complete-object constructor, placed by class name and debug map
    // TerrainMaterial::TerrainMaterial(TerrainMaterial&&): jumps straight to the base-object constructor

    // 0x1007b3f20, 80 bytes, base-object constructor, placed by class name and debug map
    // TerrainMaterial::TerrainMaterial(TerrainMaterial const&)
    void TerrainMaterial::TerrainMaterial(TerrainMaterial* param_1) {
        new (this) RenderMaterial(param_1);
        field_0 = (undefined**)(PTR_vtable_100ee8780 + 16);
        new (field_536, (shared_ptr*)param_1->field_536) shared_ptr<oldscape::dash3d::Decor>();
    }

    // 0x1007b3f70, 16 bytes, complete-object constructor, placed by class name and debug map
    // TerrainMaterial::TerrainMaterial(TerrainMaterial const&): jumps straight to the base-object constructor

    // 0x1007b3f80, 720 bytes, placed by class name and debug map
    // TerrainMaterial::InitRenderPassEffects()
    void TerrainMaterial::InitRenderPassEffects() {
        undefined1* puVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        bool bVar5;
        int iVar6;
        EffectList* pEVar7;
        undefined4* puVar8;
        EffectList* local_98;
        undefined8 local_90;
        undefined8 local_88;
        undefined8 uStack_80;
        undefined8 local_78;
        undefined4 uStack_70;
        undefined4 uStack_6c;
        undefined1 local_68;
        undefined7 uStack_67;
        undefined1 uStack_60;
        undefined7 uStack_5f;
        undefined8 local_58;
        undefined8 uStack_50;
        undefined1 local_48;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        bVar5 = operator!=((shared_ptr*)field_536, (_func_decltype_nullptr*)0);
        pEVar7 = (EffectList*)GetRenderPassEffect(4);
        local_58 = 3616421446590472223;
        uStack_50 = 4989474108770105710;
        local_68 = 119;
        uStack_67 = 8232277269106451;
        uStack_60 = 21;
        uStack_5f = 8505934042634006;
        local_78 = 506097522914230528;
        uStack_70 = 202050056;
        uStack_6c = 286396431;
        local_48 = 116;
        local_98 = (EffectList*)&local_78;
        local_90 = 49;
        new (&local_88) EffectList((initializer_list*)&local_98);
        *(undefined4*)pEVar7 = (undefined4)local_88;
        *(undefined4*)(pEVar7 + 4) = local_88._4_4_;
        *(undefined4*)(pEVar7 + 8) = (undefined4)uStack_80;
        *(undefined4*)(pEVar7 + 12) = uStack_80._4_4_;
        pEVar7->Set(63, bVar5);
        pEVar7->Set(26, 0);
        pEVar7->Set(56, 0);
        iVar6 = GetEndPosition();
        pEVar7->Set(54, iVar6 != -1);
        puVar1 = &field_528;
        puVar1->AddFormatType(4);
        pEVar7 = (EffectList*)GetRenderPassEffect(2);
        puVar8 = (undefined4*)GetRenderPassEffect(4);
        uVar2 = puVar8[1];
        uVar3 = puVar8[2];
        uVar4 = puVar8[3];
        *(undefined4*)pEVar7 = *puVar8;
        *(undefined4*)(pEVar7 + 4) = uVar2;
        *(undefined4*)(pEVar7 + 8) = uVar3;
        *(undefined4*)(pEVar7 + 12) = uVar4;
        pEVar7->Add(87);
        puVar1->AddFormatType(2);
        pEVar7 = (EffectList*)GetRenderPassEffect(3);
        local_98 = (EffectList*)CONCAT17(local_98._7_1_, 25742063727099727);
        uStack_80 = 7;
        local_88 = &local_98;
        new (&local_78) EffectList((initializer_list*)&local_88);
        *(undefined4*)pEVar7 = (undefined4)local_78;
        *(undefined4*)(pEVar7 + 4) = local_78._4_4_;
        *(undefined4*)(pEVar7 + 8) = uStack_70;
        *(undefined4*)(pEVar7 + 12) = uStack_6c;
        pEVar7->Set(63, bVar5);
        puVar1->AddFormatType(3);
        puVar8 = (undefined4*)GetRenderPassEffect(9);
        local_98._0_1_ = 79;
        uStack_80 = 1;
        local_88 = &local_98;
        new (&local_78) EffectList((initializer_list*)&local_88);
        *puVar8 = (undefined4)local_78;
        puVar8[1] = local_78._4_4_;
        puVar8[2] = uStack_70;
        puVar8[3] = uStack_6c;
        puVar1->AddFormatType(9);
        puVar8 = (undefined4*)GetRenderPassEffect(0);
        local_98 = (EffectList*)CONCAT71(local_98._1_7_, 79);
        uStack_80 = 1;
        local_88 = &local_98;
        new (&local_78) EffectList((initializer_list*)&local_88);
        *puVar8 = (undefined4)local_78;
        puVar8[1] = local_78._4_4_;
        puVar8[2] = uStack_70;
        puVar8[3] = uStack_6c;
        puVar1->AddFormatType(0);
        pEVar7 = (EffectList*)GetRenderPassEffect(5);
        local_68 = 63;
        uStack_67 = 17525223613470237;
        uStack_60 = 69;
        local_78 = 722834354493063424;
        uStack_70 = 303041547;
        uStack_6c = 1364162321;
        local_90 = 25;
        local_98 = (EffectList*)&local_78;
        new (&local_88) EffectList((initializer_list*)&local_98);
        *(undefined4*)pEVar7 = (undefined4)local_88;
        *(undefined4*)(pEVar7 + 4) = local_88._4_4_;
        *(undefined4*)(pEVar7 + 8) = (undefined4)uStack_80;
        *(undefined4*)(pEVar7 + 12) = uStack_80._4_4_;
        pEVar7->Set(63, bVar5);
        pEVar7->Set(56, 0);
        puVar1->AddFormatType(5);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x1007b46e0, 96 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<unsigned char> Vector3TFromVector3<unsigned char>(Vector3T<float> const&)
    ulong Vector3TFromVector3<unsigned char>(Vector3T* param_1) {
        float fVar1;
        float fVar2;
        ulong in_RAX;
        vector* pvVar3;
        float* pfVar4;
        ulong local_28;

        local_28 = in_RAX;
        pvVar3 = SSOBeginPtr(param_1);
        fVar1 = *(float*)pvVar3;
        pfVar4 = (float*)y();
        fVar2 = *pfVar4;
        pfVar4 = (float*)second();
        new (&local_28) Vector3T<unsigned char>((uchar)(int)fVar1, (uchar)(int)fVar2, (uchar)(int)*pfVar4);
        return local_28 & 16777215;
    }

} // namespace jag::math
