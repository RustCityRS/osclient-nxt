// libs/hal/render/state/BuiltinStates.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "BuiltinStates.h"

namespace jag::render {
    // 0x100bf2c30, 2736 bytes, base-object constructor, placed by class name and debug map
    // BuiltinStates::BuiltinStates()
    void BuiltinStates::BuiltinStates() {
        SamplerState* this_00;
        RasteriserState* this_01;
        undefined1* puVar1;
        ulong uVar2;
        Desc local_1c0;
        SamplerState* local_1a0;
        SamplerState* local_198;
        SamplerState* local_190;
        SamplerState* local_188;
        SamplerState* local_180;
        SamplerState* local_178;
        SamplerState* local_170;
        DepthStencilState* local_168;
        DepthStencilState* local_160;
        DepthStencilState* local_158;
        DepthStencilState* local_150;
        DepthStencilState* local_148;
        DepthStencilState* local_140;
        DepthStencilState* local_138;
        DepthStencilState* local_130;
        RasteriserState* local_128;
        RasteriserState* local_120;
        RasteriserState* local_118;
        RasteriserState* local_110;
        RasteriserState* local_108;
        BlendState* local_100;
        BlendState* local_f8;
        BlendState* local_f0;
        BlendState* local_e8;
        BlendState* local_e0;
        BlendState* local_d8;
        BlendState* local_d0;
        BlendState* local_c8;
        BlendState* local_c0;
        BlendState* local_b8;
        BlendState* local_b0;
        BlendState* local_a8;
        BlendState* local_a0;
        BlendState* local_98;
        BlendState* local_90;
        Desc local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (this) Singleton<BuiltinStates>();
        field_0 = PTR_vtable_100ee8660 + 16;
        new (&field_16) SamplerState();
        new (&field_80) SamplerState();
        new (&field_144) SamplerState();
        new (&field_208) SamplerState();
        local_1a0 = (SamplerState*)&field_16;
        local_198 = (SamplerState*)&field_208;
        new (&field_272) SamplerState();
        new (&field_336) SamplerState();
        local_190 = (SamplerState*)&field_400;
        SamplerState::SamplerState(local_190);
        new (&field_464) SamplerState();
        new (&field_528) SamplerState();
        new (&field_592) SamplerState();
        new (&field_656) SamplerState();
        local_168 = (DepthStencilState*)&field_720;
        DepthStencilState::DepthStencilState(local_168);
        local_160 = (DepthStencilState*)&field_780;
        DepthStencilState::DepthStencilState(local_160);
        local_158 = (DepthStencilState*)&field_840;
        DepthStencilState::DepthStencilState(local_158);
        local_150 = (DepthStencilState*)&field_900;
        DepthStencilState::DepthStencilState(local_150);
        local_148 = (DepthStencilState*)&field_960;
        DepthStencilState::DepthStencilState(local_148);
        local_140 = (DepthStencilState*)&field_1020;
        DepthStencilState::DepthStencilState(local_140);
        local_138 = (DepthStencilState*)&field_1080;
        DepthStencilState::DepthStencilState(local_138);
        local_130 = (DepthStencilState*)&field_1140;
        DepthStencilState::DepthStencilState(local_130);
        local_128 = (RasteriserState*)&field_1200;
        RasteriserState::RasteriserState(local_128);
        local_120 = (RasteriserState*)&field_1236;
        RasteriserState::RasteriserState(local_120);
        local_118 = (RasteriserState*)&field_1272;
        RasteriserState::RasteriserState(local_118);
        local_110 = (RasteriserState*)&field_1308;
        local_188 = (SamplerState*)&field_80;
        local_180 = (SamplerState*)&field_144;
        RasteriserState::RasteriserState(local_110);
        this_00 = local_1a0;
        local_178 = (SamplerState*)&field_272;
        new (&field_1344) std::array<RasteriserState, 4ul>();
        new (&field_1488) RasteriserState();
        local_100 = (BlendState*)&field_1524;
        local_108 = (RasteriserState*)&field_1488;
        BlendState::BlendState(local_100);
        local_f8 = (BlendState*)&field_1600;
        local_170 = (SamplerState*)&field_336;
        BlendState::BlendState(local_f8);
        new (&field_1676) BlendState();
        local_f0 = (BlendState*)&field_1676;
        new (&field_1752) BlendState();
        local_e0 = (BlendState*)&field_1828;
        local_e8 = (BlendState*)&field_1752;
        BlendState::BlendState(local_e0);
        local_d8 = (BlendState*)&field_1904;
        BlendState::BlendState(local_d8);
        local_d0 = (BlendState*)&field_1980;
        BlendState::BlendState(local_d0);
        local_c8 = (BlendState*)&field_2056;
        BlendState::BlendState(local_c8);
        local_c0 = (BlendState*)&field_2132;
        BlendState::BlendState(local_c0);
        local_b8 = (BlendState*)&field_2208;
        BlendState::BlendState(local_b8);
        local_b0 = (BlendState*)&field_2284;
        BlendState::BlendState(local_b0);
        local_a8 = (BlendState*)&field_2360;
        BlendState::BlendState(local_a8);
        local_a0 = (BlendState*)&field_2436;
        BlendState::BlendState(local_a0);
        local_98 = (BlendState*)&field_2512;
        BlendState::BlendState(local_98);
        local_90 = (BlendState*)&field_2588;
        BlendState::BlendState(local_90);
        new (&local_88) SamplerState::Desc();
        this_00->Create(&local_88);
        local_88.field_0._0_1_ = 0;
        local_88.field_0._1_1_ = 0;
        local_88.field_0._2_1_ = 0;
        local_88.field_0._3_1_ = 0;
        local_88.field_4 = 33071;
        local_88.field_8 = 33071;
        local_88.field_12 = 33071;
        local_188->Create(&local_88);
        local_88.field_4 = 10497;
        local_88.field_8 = 10497;
        local_88.field_12 = 10497;
        local_180->Create(&local_88);
        local_88.field_0._0_1_ = 7;
        local_88.field_0._1_1_ = 0;
        local_88.field_0._2_1_ = 0;
        local_88.field_0._3_1_ = 0;
        local_88.field_4 = 33071;
        local_88.field_8 = 33071;
        local_88.field_12 = 33071;
        local_198->Create(&local_88);
        local_88.field_0._0_1_ = 6;
        local_88.field_0._1_1_ = 0;
        local_88.field_0._2_1_ = 0;
        local_88.field_0._3_1_ = 0;
        local_88.field_4 = 33071;
        local_88.field_8 = 33071;
        local_88.field_12 = 33071;
        local_178->Create(&local_88);
        local_88.field_4 = 10497;
        local_88.field_8 = 10497;
        local_88.field_12 = 10497;
        local_190->Create(&local_88);
        local_88.field_0._0_1_ = 7;
        local_88.field_0._1_1_ = 0;
        local_88.field_0._2_1_ = 0;
        local_88.field_0._3_1_ = 0;
        local_88.field_4 = 10497;
        local_88.field_8 = 10497;
        local_88.field_12 = 10497;
        local_170->Create(&local_88);
        SetAnisotropy(this, 1.0);
        new (&local_88) DepthStencilState::Desc();
        local_168->Create((Desc*)&local_88);
        local_88.field_0._1_1_ = 0;
        local_160->Create((Desc*)&local_88);
        local_88.field_0._1_1_ = 1;
        local_88.field_12 = 516;
        local_158->Create((Desc*)&local_88);
        local_88.field_12 = 519;
        local_150->Create((Desc*)&local_88);
        local_88.field_12 = 513;
        local_88.field_0._0_1_ = 1;
        local_88.field_0._2_1_ = 0;
        local_148->Create((Desc*)&local_88);
        local_88.field_12 = 513;
        local_88.field_0._0_1_ = 0;
        local_88.field_0._2_1_ = 1;
        local_140->Create((Desc*)&local_88);
        local_88.field_12 = 513;
        local_88.field_0._0_1_ = 0;
        local_88.field_0._2_1_ = 0;
        local_138->Create((Desc*)&local_88);
        local_88.field_12 = 515;
        local_88.field_0._2_1_ = 0;
        local_88.field_0._0_1_ = 1;
        local_130->Create((Desc*)&local_88);
        new (&local_88) RasteriserState::Desc();
        local_128->Create((Desc*)&local_88);
        new (&local_88) RasteriserState::Desc();
        local_88.field_0._0_1_ = 1;
        local_88.field_0._1_1_ = 27;
        local_88.field_0._2_1_ = 0;
        local_88.field_0._3_1_ = 0;
        local_120->Create((Desc*)&local_88);
        new (&local_88) RasteriserState::Desc();
        local_88.field_4 = 1029;
        local_118->Create((Desc*)&local_88);
        new (&local_88) RasteriserState::Desc();
        local_88.field_4 = 0;
        local_110->Create((Desc*)&local_88);
        new (&local_88) RasteriserState::Desc();
        uVar2 = 0;
        do {
            this_01 = (RasteriserState*)std::array<RasteriserState, 4ul>::operator[](
                (array<RasteriserState, 4ul>*)&field_1344, uVar2);
            this_01->Destroy();
            local_88.field_4 = GetCullMode((int)uVar2);
            local_88.field_20._2_1_ = 0;
            this_01->Create((Desc*)&local_88);
            uVar2 = uVar2 + 1;
        } while (uVar2 != 4);
        new (&local_1c0) RasteriserState::Desc();
        local_1c0.field_8 = -3.25;
        local_1c0.field_12 = 0.0;
        local_108->Create(&local_1c0);
        new (&local_88) BlendState::Desc();
        local_88.field_0._0_1_ = 0;
        local_100->Create((Desc*)&local_88);
        local_88.field_0._0_1_ = 1;
        local_f8->Create((Desc*)&local_88);
        local_88.field_0._0_1_ = 0;
        puVar1 = (undefined1*)std::array<RenderTargetBlendDesc, 2ul>::operator[]((ulong)&local_88.field_4);
        *puVar1 = 1;
        *(undefined8*)(puVar1 + 4) = 3311419785986;
        *(undefined8*)(puVar1 + 16) = 3311419785217;
        local_f0->Create((Desc*)&local_88);
        local_88.field_0._0_1_ = 1;
        local_e8->Create((Desc*)&local_88);
        local_88.field_0._0_1_ = 0;
        *puVar1 = 1;
        *(undefined8*)(puVar1 + 4) = 4294967297;
        *(undefined8*)(puVar1 + 16) = 4294967297;
        local_e0->Create((Desc*)&local_88);
        local_88.field_0._0_1_ = 0;
        *puVar1 = 1;
        *(undefined8*)(puVar1 + 4) = 3311419785217;
        *(undefined8*)(puVar1 + 16) = 3311419785217;
        local_d8->Create((Desc*)&local_88);
        local_88.field_0._0_1_ = 0;
        *puVar1 = 1;
        *(undefined8*)(puVar1 + 4) = 3311419785986;
        *(undefined8*)(puVar1 + 16) = 3311419785217;
        local_d0->Create((Desc*)&local_88);
        local_88.field_0._0_1_ = 0;
        *puVar1 = 1;
        *(undefined8*)(puVar1 + 4) = 774;
        *(undefined8*)(puVar1 + 16) = 772;
        puVar1[28] = 1;
        local_c8->Create((Desc*)&local_88);
        local_88.field_0._0_1_ = 0;
        *puVar1 = 1;
        *(undefined8*)(puVar1 + 4) = 3311419785217;
        *(undefined8*)(puVar1 + 16) = 1;
        local_c0->Create((Desc*)&local_88);
        local_88.field_0._0_1_ = 0;
        *puVar1 = 0;
        puVar1[28] = 0;
        *(undefined8*)(puVar1 + 4) = 1;
        local_b8->Create((Desc*)&local_88);
        local_88.field_0._0_1_ = 0;
        *puVar1 = 0;
        puVar1[28] = 7;
        *(undefined8*)(puVar1 + 4) = 1;
        local_b0->Create((Desc*)&local_88);
        local_88.field_0._0_1_ = 0;
        *puVar1 = 0;
        *(undefined4*)(puVar1 + 12) = 32774;
        *(undefined4*)(puVar1 + 24) = 32774;
        *(undefined8*)(puVar1 + 4) = 4294967297;
        *(undefined8*)(puVar1 + 16) = 4294967297;
        puVar1[28] = 1;
        local_a8->Create((Desc*)&local_88);
        puVar1[28] = 2;
        local_a0->Create((Desc*)&local_88);
        puVar1[28] = 4;
        local_98->Create((Desc*)&local_88);
        puVar1[28] = 8;
        local_90->Create((Desc*)&local_88);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bf3790, 272 bytes, placed by class name
    // BuiltinStates::SetAnisotropy(float)
    void BuiltinStates::SetAnisotropy(float param_1) {
        Desc* pDVar1;
        type* in_RSI;
        Desc local_68;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_68) SamplerState::Desc();
        pDVar1 = (Desc*)(&field_208, in_RSI)->SSOBeginPtr();
        SamplerState::Desc::operator=(&local_68, pDVar1);
        pDVar1 = &local_68;
        local_68.field_20 = param_1;
        (&field_464, &local_68)->Create();
        pDVar1 = (Desc*)(&field_336, (type*)pDVar1)->SSOBeginPtr();
        SamplerState::Desc::operator=(&local_68, pDVar1);
        pDVar1 = &local_68;
        local_68.field_20 = param_1;
        (&field_592, &local_68)->Create();
        pDVar1 = (Desc*)(&field_272, (type*)pDVar1)->SSOBeginPtr();
        SamplerState::Desc::operator=(&local_68, pDVar1);
        pDVar1 = &local_68;
        local_68.field_20 = param_1;
        (&field_528, &local_68)->Create();
        pDVar1 = (Desc*)(&field_400, (type*)pDVar1)->SSOBeginPtr();
        SamplerState::Desc::operator=(&local_68, pDVar1);
        local_68.field_20 = param_1;
        (&field_656, &local_68)->Create();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bf3960, 16 bytes, complete-object constructor, placed by class name
    // BuiltinStates::BuiltinStates(): jumps straight to the base-object constructor

    // 0x100bf39b0, 176 bytes, placed by class name
    // BuiltinStates::CreateShadowSamplerState(SamplerState&)
    void BuiltinStates::CreateShadowSamplerState(SamplerState* param_1) {
        MapArea* this_00;
        long lVar1;
        Desc local_58;
        long local_18;

        local_18 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_58) SamplerState::Desc();
        this_00 = (MapArea*)local_58.Instance();
        lVar1 = this_00->GetOrigin();
        if (*(char*)(lVar1 + 182) == '\0') {
            local_58.field_0 = 7;
        } else {
            local_58.field_0 = 16;
            local_58.field_24 = 515;
        }
        local_58.field_4 = 33071;
        local_58.field_8 = 33071;
        local_58.field_12 = 33071;
        local_58.field_16 = 0.0;
        local_58.field_20 = 1.0;
        local_58.field_48 = 0.0;
        local_58.field_52 = 0.0;
        param_1->Create(&local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_18) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::render
