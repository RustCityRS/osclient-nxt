// libs/ui/utils/SpriteData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "SpriteData.h"

namespace jag::ui {
    // 0x1039bcdfc, 1 bytes, __common; zero-initialised
    SpriteData::m_enableSpriteSliceDebug;

    // 0x100016cf0: the linker folded this into eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator, eastl::use_first<eastl::pair<int const, unsigned int> >, eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::size() const, which has identical code
    SpriteData::GetSpriteHash() const;

    // 0x10002d850: the linker folded this into oldscape::option::Option<int>::GetDefaultValue() const, which has identical code
    SpriteData::GetSpriteAtlasReference() const;

    // 0x10005fe50: the linker folded this into oldscape::widgets::Widget::SetBorderColour(unsigned int), which has identical code
    SpriteData::SetSpriteRGB(unsigned int);

    // 0x100073980: the linker folded this into math::Rect<int>::MinY() const, which has identical code
    uint SpriteData::GetSpriteShadowRGB() const;

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    int SpriteData::GetSpriteID() const;

    // 0x1000e5d50: the linker folded this into oldscape::rs2lib::CoordZoneSource::GetRotation() const, which has identical code
    int SpriteData::GetSpriteRGB() const;

    // 0x10019c120: the linker folded this into eastl::rbtree_node<shared_ptr<Js5WorkerRequestMessage> >::~rbtree_node(), which has identical code
    SpriteData::~SpriteData();

    // 0x10019c130: the linker folded this into eastl::rbtree_node<shared_ptr<Js5WorkerRequestMessage> >::~rbtree_node(), which has identical code
    SpriteData::~SpriteData();

    // 0x100674df0, 5248 bytes, placed by class name and debug map
    // SpriteData::DrawSpriteSlice(graphics::RT7Core&, int, int, int, int, unsigned int, math::Rect<float> const&, render::Texture const*, float) const
    void SpriteData::DrawSpriteSlice(RT7Core* param_1, int param_2, int param_3, int param_4, int param_5, uint param_6,
                                     Rect* param_7, Texture* param_8, float param_9) {
        ulong uVar1;
        char cVar2;
        uint uVar3;
        int iVar4;
        undefined8 uVar5;
        uint* puVar6;
        int* piVar7;
        float* pfVar8;
        int* piVar9;
        undefined4 in_register_0000000c;
        int iVar10;
        undefined4 in_register_00000014;
        int iVar11;
        ulong uVar12;
        int iVar13;
        int iVar14;
        int iVar15;
        int iVar16;
        undefined4 uVar17;
        float fVar18;
        undefined4 uVar19;
        float fVar20;
        undefined4 uVar21;
        GUIManager* pGVar22;
        GUIManager* pGVar23;
        undefined8 in_stack_fffffffffffffea0;
        undefined1 local_118[28];
        float local_fc;
        float local_f0;
        float local_ec;
        float local_e8;
        float local_e4;
        uint local_e0;
        uint local_dc;
        uint local_d8;
        uint local_d4;
        ulong local_d0;
        GUIManager* local_c8;
        int* local_c0;
        float local_b4;
        float* local_b0;
        GUIManager* local_a8;
        GUIManager* local_a0;
        undefined1 local_94[12];
        int* local_88;
        GUIManager* local_80;
        ulong local_78;
        ulong local_70;
        GUIManager* local_68;
        int* local_60;
        GUIManager* local_58;
        int local_4c;
        undefined4 local_48;
        int local_44;
        GUIManager* local_40;
        undefined8 local_38;

        uVar21 = (undefined4)((ulong)in_stack_fffffffffffffea0 >> 32);
        local_70 = CONCAT44(in_register_00000014, param_2);
        local_78 = CONCAT44(in_register_0000000c, param_3);
        if (param_4 < 1) {
            return;
        }
        if (param_5 < 1) {
            return;
        }
        if ((param_6 & 255) == 0) {
            return;
        }
        local_38._0_4_ = (GUIManager*)param_9;
        uVar3 = GetSpriteRGBA(this);
        local_48 = math::Multiply(param_6, uVar3);
        local_d0 = (ulong)(uint)param_5;
        local_94._4_8_ = (ulong)(uint)param_4;
        iVar4 = GetSpriteDrawMode(this, param_4, param_5);
        cVar2 = GetSpriteTiling(this);
        local_68 = (GUIManager*)param_1->GetGUIManager();
        if ((cVar2 != '\0') && ((float)(GUIManager*)local_38 != 0.0)) {
            uVar5 = logger::default_logger();
            logger::Logger::Log(
                uVar5, 1, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/SpriteData.cpp", 220,
                "Disabling tiling due to no support for drawing sliced sprites with tiling and rotation.");
        }
        uVar1 = local_70;
        uVar12 = local_78;
        if (iVar4 == 0) {
            iVar4 = local_94._4_4_ + (int)local_70;
            iVar11 = (int)local_d0 + (int)local_78;
            if (cVar2 == '\0') {
                local_38->AddElementRotated(local_68, local_70, local_78 & 4294967295, iVar4, iVar11, local_48, param_7,
                                            param_8, 1, 4293967297, 4293967297);
            } else {
                local_38._0_4_ = (GUIManager*)param_7->GetOverbright();
                local_44 = param_7->GetAlpha();
                local_4c = param_7->MaxU();
                uVar17 = param_7->MaxV();
                local_38->AddElementTiled(local_44, local_4c, uVar17, local_68, uVar1 & 4294967295, uVar12 & 4294967295,
                                          iVar4, iVar11, local_48, param_8, CONCAT44(uVar21, 1), 0, 0, 0, 0, 0, 0);
            }
        } else {
            puVar6 = (uint*)param_8->second();
            uVar12 = local_70;
            local_e0 = (uint)((SpriteData*)this)->field_17;
            local_f0 = (float)local_e0 * (1.0 / (float)*puVar6);
            local_dc = (uint)((SpriteData*)this)->field_18;
            local_ec = (float)local_dc * (1.0 / (float)puVar6[1]);
            local_d8 = (uint)((SpriteData*)this)->field_19;
            local_e8 = (float)local_d8 * (1.0 / (float)*puVar6);
            local_d4 = (uint)((SpriteData*)this)->field_20;
            local_e4 = (float)local_d4 * (1.0 / (float)puVar6[1]);
            iVar11 = (int)local_70;
            if ((float)(GUIManager*)local_38 == 0.0) {
                local_44 = 0;
                iVar10 = 0;
                iVar15 = 0;
                if (iVar4 != 3)
                    goto LAB_100674fd0;
            LAB_1006752fd:
                local_4c = iVar10;
                local_40 = (GUIManager*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&local_e0, 0);
                local_88 = (int*)CONCAT44(local_88._4_4_, *(int*)local_40 + iVar11);
                local_c0 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&local_e0, 1);
                local_38._4_4_ = (GUIManager*)CONCAT31(local_38._5_3_, cVar2);
                iVar4 = *local_c0 + (int)local_78;
                uVar17 = param_7->GetOverbright();
                local_a0 = (GUIManager*)CONCAT44(local_a0._4_4_, uVar17);
                local_80._0_4_ = (GUIManager*)param_7->GetAlpha();
                local_60._0_4_ = (float)param_7->GetOverbright();
                local_a8 = (GUIManager*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)&local_f0, 0);
                local_60._0_4_ = local_60._0_4_ + *(float*)local_a8;
                local_b0._0_4_ = (float)param_7->GetAlpha();
                local_58 = (GUIManager*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)&local_f0, 1);
                pGVar22 = local_68;
                uVar12 = local_78;
                uVar5 = CONCAT44(uVar21, 1);
                iVar15 = (int)local_70;
                iVar13 = (int)local_78;
                local_a0._0_4_->AddElementRotated(
                    (undefined4)local_80._0_4_, local_60._0_4_, local_b0._0_4_ + *(float*)local_58,
                    (undefined4)(GUIManager*)local_38, local_68, local_70 & 4294967295, local_78 & 4294967295,
                    (ulong)local_88 & 4294967295, iVar4, local_48, param_8, uVar5, local_44, iVar10);
                uVar21 = (undefined4)((ulong)uVar5 >> 32);
                local_b0 = (float*)CONCAT44(local_b0._4_4_, *(int*)local_40 + iVar15);
                iVar15 = iVar15 + local_94._4_4_;
                local_60 = (int*)CONCAT44(local_60._4_4_, iVar15);
                local_88 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&local_e0, 2);
                iVar4 = *local_88;
                iVar11 = *local_c0;
                fVar20 = (float)param_7->GetOverbright();
                local_c8._0_4_ = (GUIManager*)(fVar20 + *(float*)local_a8);
                local_94._0_4_ = param_7->GetAlpha();
                local_80._0_4_ = (GUIManager*)param_7->MaxU();
                local_a0 = (GUIManager*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)&local_f0, 2);
                local_80._0_4_ = (GUIManager*)((float)local_80._0_4_ - *(float*)local_a0);
                fVar20 = (float)param_7->GetAlpha();
                uVar5 = CONCAT44(uVar21, 1);
                local_c8._0_4_->AddElementRotated(
                    local_94._0_4_, (undefined4)local_80._0_4_, fVar20 + *(float*)local_58,
                    (undefined4)(GUIManager*)local_38, pGVar22, (ulong)local_b0 & 4294967295, uVar12 & 4294967295,
                    iVar15 - iVar4, iVar11 + iVar13, local_48, param_8, uVar5, local_44, local_4c);
                piVar7 = local_c0;
                uVar17 = (undefined4)((ulong)uVar5 >> 32);
                iVar11 = (int)local_60._0_4_ - *local_88;
                iVar4 = *local_c0;
                fVar20 = (float)param_7->MaxU();
                local_80._0_4_ = (GUIManager*)(fVar20 - *(float*)local_a0);
                uVar21 = param_7->GetAlpha();
                local_b0 = (float*)CONCAT44(local_b0._4_4_, uVar21);
                uVar21 = param_7->MaxU();
                local_c8 = (GUIManager*)CONCAT44(local_c8._4_4_, uVar21);
                fVar20 = (float)param_7->GetAlpha();
                uVar5 = CONCAT44(uVar17, 1);
                local_80._0_4_->AddElementRotated(local_b0._0_4_, (undefined4)local_c8._0_4_,
                                                  fVar20 + *(float*)local_58, (undefined4)(GUIManager*)local_38,
                                                  local_68, iVar11, uVar12 & 4294967295, (ulong)local_60 & 4294967295,
                                                  iVar4 + iVar13, local_48, param_8, uVar5, local_44, local_4c);
                uVar12 = local_70;
                uVar21 = (undefined4)((ulong)uVar5 >> 32);
                iVar4 = *piVar7;
                iVar11 = *(int*)local_40;
                iVar14 = (int)local_70;
                iVar10 = iVar13 + (int)local_d0;
                local_c8 = (GUIManager*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&local_e0, 3);
                local_80 = (GUIManager*)CONCAT44(local_80._4_4_, iVar10);
                iVar15 = *(int*)local_c8;
                local_94._0_4_ = param_7->GetOverbright();
                local_b4 = (float)param_7->GetAlpha();
                local_b4 = local_b4 + *(float*)local_58;
                local_118._24_4_ = param_7->GetOverbright();
                local_118._24_4_ = (float)local_118._24_4_ + *(float*)local_a8;
                local_fc = (float)param_7->MaxV();
                local_b0 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)&local_f0, 3);
                uVar5 = CONCAT44(uVar21, 1);
                local_94._0_4_->AddElementRotated(local_b4, local_118._24_4_, local_fc - *local_b0,
                                                  (undefined4)(GUIManager*)local_38, local_68, uVar12, iVar4 + iVar13,
                                                  iVar11 + iVar14, iVar10 - iVar15, local_48, param_8, uVar5, local_44,
                                                  local_4c);
                uVar21 = (undefined4)((ulong)uVar5 >> 32);
                if (local_38._4_1_ == '\0') {
                    iVar15 = *(int*)local_40 + (int)local_70;
                    iVar10 = *local_c0 + (int)local_78;
                    iVar11 = (int)local_60._0_4_ - *local_88;
                    iVar4 = (int)local_80._0_4_ - *(int*)local_c8;
                    fVar20 = (float)param_7->GetOverbright();
                    local_38._4_4_ = (GUIManager*)(fVar20 + *(float*)local_a8);
                    fVar20 = (float)param_7->GetAlpha();
                    local_94._0_4_ = fVar20 + *(float*)local_58;
                    local_b4 = (float)param_7->MaxU();
                    local_b4 = local_b4 - *(float*)local_a0;
                    fVar20 = (float)param_7->MaxV();
                    uVar5 = CONCAT44(uVar21, 1);
                    local_38._4_4_->AddElementRotated(local_94._0_4_, local_b4, fVar20 - *local_b0,
                                                      (undefined4)(GUIManager*)local_38, local_68, iVar15, iVar10,
                                                      iVar11, iVar4, local_48, param_8, uVar5, local_44, local_4c);
                    uVar21 = (undefined4)((ulong)uVar5 >> 32);
                    iVar4 = (int)local_78;
                    piVar9 = local_88;
                    piVar7 = local_c0;
                    iVar11 = (int)local_60._0_4_;
                } else {
                    new (local_118) graphics::ClippingState(param_1);
                    piVar9 = local_88;
                    piVar7 = local_c0;
                    iVar15 = (int)local_78;
                    param_1->SetClippingRectangle(*(int*)local_40 + (int)local_70, *local_c0 + iVar15,
                                                  local_94._4_4_ - (*(int*)local_40 + *local_88),
                                                  (int)local_d0 - (*local_c0 + *(int*)local_c8), false);
                    iVar14 = *(int*)local_40 + (int)local_70;
                    iVar11 = *piVar7;
                    iVar13 = (int)local_60._0_4_ - *piVar9;
                    iVar10 = (int)local_80._0_4_ - *(int*)local_c8;
                    fVar20 = (float)param_7->GetOverbright();
                    local_38._4_4_ = (GUIManager*)(fVar20 + *(float*)local_a8);
                    fVar20 = (float)param_7->GetAlpha();
                    local_94._0_4_ = fVar20 + *(float*)local_58;
                    local_b4 = (float)param_7->MaxU();
                    local_b4 = local_b4 - *(float*)local_a0;
                    fVar20 = (float)param_7->MaxV();
                    piVar9 = local_88;
                    piVar7 = local_c0;
                    uVar5 = CONCAT44(uVar21, 1);
                    iVar4 = (int)local_78;
                    local_38._4_4_->AddElementTiled(local_94._0_4_, local_b4, fVar20 - *local_b0, local_68, iVar14,
                                                    iVar11 + iVar15, iVar13, iVar10, local_48, param_8, uVar5, 0, 0, 0,
                                                    0, 0, 0);
                    uVar21 = (undefined4)((ulong)uVar5 >> 32);
                    local_118->~ClippingState();
                    iVar11 = (int)local_60._0_4_;
                }
                iVar15 = *piVar9;
                iVar10 = *piVar7;
                iVar13 = (int)local_80._0_4_ - *(int*)local_c8;
                fVar20 = (float)param_7->MaxU();
                local_38._4_4_ = (GUIManager*)(fVar20 - *(float*)local_a0);
                fVar20 = (float)param_7->GetAlpha();
                local_58._0_4_ = (GUIManager*)(fVar20 + *(float*)local_58);
                uVar17 = param_7->MaxU();
                local_c0._0_4_ = uVar17;
                fVar20 = (float)param_7->MaxV();
                uVar5 = CONCAT44(uVar21, 1);
                local_38._4_4_->AddElementRotated((undefined4)local_58._0_4_, local_c0._0_4_, fVar20 - *local_b0,
                                                  (undefined4)(GUIManager*)local_38, local_68, iVar11 - iVar15,
                                                  iVar10 + iVar4, iVar11, iVar13, local_48, param_8, uVar5, local_44,
                                                  local_4c);
                uVar12 = local_70;
                pGVar22 = local_c8;
                uVar17 = (undefined4)((ulong)uVar5 >> 32);
                iVar11 = (int)local_80._0_4_ - *(int*)local_c8;
                iVar4 = *(int*)local_40;
                iVar16 = (int)local_70;
                local_38._4_4_ = (GUIManager*)param_7->GetOverbright();
                fVar20 = (float)param_7->MaxV();
                local_58._0_4_ = (GUIManager*)(fVar20 - *local_b0);
                fVar20 = (float)param_7->GetOverbright();
                local_c0 = (int*)CONCAT44(local_c0._4_4_, fVar20 + *(float*)local_a8);
                uVar21 = param_7->MaxV();
                uVar5 = CONCAT44(uVar17, 1);
                iVar13 = (int)local_80._0_4_;
                local_38._4_4_->AddElementRotated((undefined4)local_58._0_4_, local_c0._0_4_, uVar21,
                                                  (undefined4)(GUIManager*)local_38, local_68, uVar12 & 4294967295,
                                                  iVar11, iVar4 + iVar16, (ulong)local_80 & 4294967295, local_48,
                                                  param_8, uVar5, local_44, local_4c);
                uVar17 = (undefined4)((ulong)uVar5 >> 32);
                iVar4 = *(int*)local_40;
                iVar11 = *(int*)pGVar22;
                iVar15 = (int)local_60._0_4_;
                iVar14 = (int)local_60._0_4_ - *local_88;
                fVar20 = (float)param_7->GetOverbright();
                local_40._0_4_ = (GUIManager*)(fVar20 + *(float*)local_a8);
                fVar20 = (float)param_7->MaxV();
                local_38._4_4_ = (GUIManager*)(fVar20 - *local_b0);
                fVar20 = (float)param_7->MaxU();
                local_58._0_4_ = (GUIManager*)(fVar20 - *(float*)local_a0);
                uVar21 = param_7->MaxV();
                uVar5 = CONCAT44(uVar17, 1);
                iVar10 = (int)local_80._0_4_;
                local_40._0_4_->AddElementRotated((undefined4)local_38._4_4_, (undefined4)local_58._0_4_, uVar21,
                                                  (undefined4)(GUIManager*)local_38, local_68, iVar4 + iVar16,
                                                  iVar13 - iVar11, iVar14, (ulong)local_80 & 4294967295, local_48,
                                                  param_8, uVar5, local_44, local_4c);
                uVar17 = (undefined4)((ulong)uVar5 >> 32);
                iVar4 = *local_88;
                iVar11 = iVar10 - *(int*)local_c8;
                fVar20 = (float)param_7->MaxU();
                local_40 = (GUIManager*)CONCAT44(local_40._4_4_, fVar20 - *(float*)local_a0);
                fVar20 = (float)param_7->MaxV();
                local_38._4_4_ = (GUIManager*)(fVar20 - *local_b0);
                uVar21 = param_7->MaxU();
                local_58 = (GUIManager*)CONCAT44(local_58._4_4_, uVar21);
                uVar21 = param_7->MaxV();
                uVar12 = (ulong)(uint)(iVar15 - iVar4);
                pGVar22._0_4_ = local_40._0_4_;
                pGVar23._0_4_ = local_38._4_4_;
            } else {
                local_44 = ((int)(((uint)((ulong)local_94._4_8_ >> 31) & 1) + local_94._4_4_) >> 1) + iVar11;
                iVar10 = ((int)(((uint)(local_d0 >> 31) & 1) + (int)local_d0) >> 1) + (int)local_78;
                iVar15 = local_44;
                if (iVar4 == 3)
                    goto LAB_1006752fd;
            LAB_100674fd0:
                local_44 = iVar15;
                local_4c = iVar10;
                if (iVar4 == 2) {
                    local_60 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&local_e0, 0);
                    uVar1 = local_78;
                    local_38._4_4_ = (GUIManager*)CONCAT31(local_38._5_3_, cVar2);
                    iVar4 = *local_60;
                    local_58 = (GUIManager*)CONCAT44(local_58._4_4_, (int)local_d0 + (int)local_78);
                    uVar17 = param_7->GetOverbright();
                    local_a8 = (GUIManager*)CONCAT44(local_a8._4_4_, uVar17);
                    uVar17 = param_7->GetAlpha();
                    local_88 = (int*)CONCAT44(local_88._4_4_, uVar17);
                    local_40._0_4_ = (GUIManager*)param_7->GetOverbright();
                    local_a0 = (GUIManager*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)&local_f0, 0);
                    local_40._0_4_ = (GUIManager*)((float)local_40._0_4_ + *(float*)local_a0);
                    uVar17 = param_7->MaxV();
                    uVar5 = CONCAT44(uVar21, 1);
                    local_a8._0_4_->AddElementRotated(local_88._0_4_, (undefined4)local_40._0_4_, uVar17,
                                                      (undefined4)(GUIManager*)local_38, local_68, uVar12 & 4294967295,
                                                      uVar1 & 4294967295, iVar4 + iVar11, (ulong)local_58 & 4294967295,
                                                      local_48, param_8, uVar5, local_44, local_4c);
                    uVar21 = (undefined4)((ulong)uVar5 >> 32);
                    if (local_38._4_1_ == '\0') {
                        iVar4 = *local_60;
                        iVar13 = (int)local_70;
                        iVar15 = local_94._4_4_;
                        piVar7 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&local_e0, 2);
                        iVar11 = *piVar7;
                        fVar20 = (float)param_7->GetOverbright();
                        local_38._4_4_ = (GUIManager*)(fVar20 + *(float*)local_a0);
                        uVar17 = param_7->GetAlpha();
                        local_60 = (int*)CONCAT44(local_60._4_4_, uVar17);
                        local_40._0_4_ = (GUIManager*)param_7->MaxU();
                        pfVar8 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)&local_f0, 2);
                        local_40 = (GUIManager*)CONCAT44(local_40._4_4_, (float)local_40._0_4_ - *pfVar8);
                        uVar17 = param_7->MaxV();
                        iVar10 = local_4c;
                        uVar5 = CONCAT44(uVar21, 1);
                        local_38._4_4_->AddElementRotated(
                            local_60._0_4_, (undefined4)local_40._0_4_, uVar17, (undefined4)(GUIManager*)local_38,
                            local_68, iVar4 + iVar13, local_78, (iVar15 + iVar13) - iVar11,
                            (ulong)local_58 & 4294967295, local_48, param_8, uVar5, local_44, local_4c);
                        uVar21 = (undefined4)((ulong)uVar5 >> 32);
                    } else {
                        new (local_118) graphics::ClippingState(param_1);
                        piVar7 = local_60;
                        iVar4 = *local_60;
                        local_40._0_4_ = (GUIManager*)((int)local_70 + iVar4);
                        piVar9 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&local_e0, 2);
                        param_1->SetClippingRectangle((int)local_40._0_4_, (int)local_78,
                                                      local_94._4_4_ - (iVar4 + *piVar9), (int)local_d0, false);
                        iVar4 = *piVar7;
                        iVar10 = (int)local_70;
                        iVar15 = local_94._4_4_;
                        iVar11 = *piVar9;
                        fVar20 = (float)param_7->GetOverbright();
                        local_38._4_4_ = (GUIManager*)(fVar20 + *(float*)local_a0);
                        uVar17 = param_7->GetAlpha();
                        local_60 = (int*)CONCAT44(local_60._4_4_, uVar17);
                        local_40._0_4_ = (GUIManager*)param_7->MaxU();
                        pfVar8 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)&local_f0, 2);
                        local_40 = (GUIManager*)CONCAT44(local_40._4_4_, (float)local_40._0_4_ - *pfVar8);
                        uVar17 = param_7->MaxV();
                        uVar5 = CONCAT44(uVar21, 1);
                        local_38._4_4_->AddElementTiled(local_60._0_4_, (undefined4)local_40._0_4_, uVar17, local_68,
                                                        iVar4 + iVar10, local_78, (iVar15 + iVar10) - iVar11,
                                                        (ulong)local_58 & 4294967295, local_48, param_8, uVar5, 0, 0, 0,
                                                        0, 0, 1);
                        uVar21 = (undefined4)((ulong)uVar5 >> 32);
                        local_118->~ClippingState();
                        iVar10 = local_4c;
                    }
                    iVar4 = local_94._4_4_;
                    iVar15 = iVar4 + (int)local_70;
                    piVar7 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&local_e0, 2);
                    iVar11 = *piVar7;
                    fVar20 = (float)param_7->MaxU();
                    local_40._0_4_ = (GUIManager*)fVar20;
                    pfVar8 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)&local_f0, 2);
                    local_40 = (GUIManager*)CONCAT44(local_40._4_4_, (float)local_40._0_4_ - *pfVar8);
                    local_38._4_4_ = (GUIManager*)param_7->GetAlpha();
                    uVar17 = param_7->MaxU();
                    local_60 = (int*)CONCAT44(local_60._4_4_, uVar17);
                    uVar17 = param_7->MaxV();
                    local_40._0_4_->AddElementRotated((undefined4)local_38._4_4_, local_60._0_4_, uVar17,
                                                      (undefined4)(GUIManager*)local_38, local_68, iVar15 - iVar11,
                                                      local_78, iVar15, (ulong)local_58 & 4294967295, local_48, param_8,
                                                      CONCAT44(uVar21, 1), local_44, iVar10);
                    goto LAB_100676207;
                }
                if (iVar4 != 1) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways(
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/SpriteData.cpp",
                        348, (char*)0);
                }
                local_40 = (GUIManager*)CONCAT44(local_40._4_4_, local_94._4_4_ + iVar11);
                local_a0 = (GUIManager*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&local_e0, 1);
                uVar12 = local_78;
                local_38._4_4_ = (GUIManager*)CONCAT31(local_38._5_3_, cVar2);
                fVar20 = *(float*)local_a0;
                iVar4 = (int)local_78;
                local_58._0_4_ = (GUIManager*)param_7->GetOverbright();
                local_60._0_4_ = (float)param_7->GetAlpha();
                local_a8._0_4_ = (GUIManager*)param_7->MaxU();
                uVar17 = param_7->GetAlpha();
                local_88 = (int*)CONCAT44(local_88._4_4_, uVar17);
                local_80 = (GUIManager*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)&local_f0, 1);
                uVar17 = local_48;
                uVar5 = CONCAT44(uVar21, 1);
                local_58._0_4_->AddElementRotated(local_60._0_4_, (undefined4)local_a8._0_4_,
                                                  local_88._0_4_ + *(float*)local_80, (undefined4)(GUIManager*)local_38,
                                                  local_68, local_70, uVar12 & 4294967295, (ulong)local_40 & 4294967295,
                                                  (int)fVar20 + iVar4, local_48, param_8, uVar5, local_44, iVar10);
                uVar21 = (undefined4)((ulong)uVar5 >> 32);
                if (local_38._4_1_ == '\0') {
                    iVar11 = (int)local_78;
                    local_38._4_4_ = (GUIManager*)((int)*(float*)local_a0 + iVar11);
                    iVar10 = (int)local_d0;
                    piVar7 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&local_e0, 3);
                    iVar4 = *piVar7;
                    uVar19 = param_7->GetOverbright();
                    local_58 = (GUIManager*)CONCAT44(local_58._4_4_, uVar19);
                    fVar20 = (float)param_7->GetAlpha();
                    local_60 = (int*)CONCAT44(local_60._4_4_, fVar20 + *(float*)local_80);
                    uVar19 = param_7->MaxU();
                    local_a8 = (GUIManager*)CONCAT44(local_a8._4_4_, uVar19);
                    uVar19 = param_7->MaxV();
                    local_88 = (int*)CONCAT44(local_88._4_4_, uVar19);
                    pfVar8 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)&local_f0, 3);
                    uVar5 = CONCAT44(uVar21, 1);
                    local_58._0_4_->AddElementRotated(local_60._0_4_, (undefined4)local_a8._0_4_,
                                                      local_88._0_4_ - *pfVar8, (undefined4)(GUIManager*)local_38,
                                                      local_68, local_70, (undefined4)local_38._4_4_,
                                                      (ulong)local_40 & 4294967295, (iVar10 + iVar11) - iVar4, uVar17,
                                                      param_8, uVar5, local_44, local_4c);
                    uVar17 = (undefined4)((ulong)uVar5 >> 32);
                } else {
                    new (local_118) graphics::ClippingState(param_1);
                    pGVar22 = local_a0;
                    uVar12 = local_d0;
                    fVar20 = *(float*)local_a0;
                    local_38._4_4_ = (GUIManager*)((int)local_78 + (int)fVar20);
                    piVar7 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&local_e0, 3);
                    iVar10 = (int)uVar12;
                    param_1->SetClippingRectangle((int)local_70, (int)local_38._4_4_, local_94._4_4_,
                                                  iVar10 - ((int)fVar20 + *piVar7), false);
                    fVar20 = *(float*)pGVar22;
                    iVar11 = (int)local_78;
                    iVar4 = *piVar7;
                    local_38._4_4_ = (GUIManager*)param_7->GetOverbright();
                    fVar18 = (float)param_7->GetAlpha();
                    local_58 = (GUIManager*)CONCAT44(local_58._4_4_, fVar18 + *(float*)local_80);
                    uVar17 = param_7->MaxU();
                    local_60 = (int*)CONCAT44(local_60._4_4_, uVar17);
                    uVar17 = param_7->MaxV();
                    local_a8 = (GUIManager*)CONCAT44(local_a8._4_4_, uVar17);
                    pfVar8 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)&local_f0, 3);
                    uVar5 = CONCAT44(uVar21, 1);
                    local_38._4_4_->AddElementTiled(
                        (undefined4)local_58._0_4_, local_60._0_4_, (float)local_a8._0_4_ - *pfVar8, local_68, local_70,
                        (int)fVar20 + iVar11, (ulong)local_40 & 4294967295, (iVar10 + iVar11) - iVar4, local_48,
                        param_8, uVar5, 0, 0, 0, 0, 1, 0);
                    uVar17 = (undefined4)((ulong)uVar5 >> 32);
                    local_118->~ClippingState();
                    iVar11 = (int)local_78;
                }
                iVar15 = (int)local_40._0_4_;
                iVar10 = iVar10 + iVar11;
                piVar7 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&local_e0, 3);
                iVar11 = iVar10 - *piVar7;
                local_38._4_4_ = (GUIManager*)param_7->GetOverbright();
                fVar20 = (float)param_7->MaxV();
                local_40._0_4_ = (GUIManager*)fVar20;
                pfVar8 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)&local_f0, 3);
                local_40 = (GUIManager*)CONCAT44(local_40._4_4_, (float)local_40._0_4_ - *pfVar8);
                uVar21 = param_7->MaxU();
                local_58 = (GUIManager*)CONCAT44(local_58._4_4_, uVar21);
                uVar21 = param_7->MaxV();
                uVar12 = local_70;
                pGVar22._0_4_ = local_38._4_4_;
                pGVar23._0_4_ = local_40._0_4_;
            }
            pGVar22._0_4_->AddElementRotated((undefined4)pGVar23._0_4_, (undefined4)local_58._0_4_, uVar21,
                                             (undefined4)(GUIManager*)local_38, local_68, uVar12, iVar11, iVar15,
                                             iVar10, local_48, param_8, CONCAT44(uVar17, 1), local_44, local_4c);
        }
        iVar4 = local_94._4_4_;
    LAB_100676207:
        if (m_enableSpriteSliceDebug != '\0') {
            DrawSpriteSliceDebug((SpriteData*)this, local_68, (int)local_70, (int)local_78, iVar4, (int)local_d0,
                                 4278190335);
        }
    }

    // 0x100677860, 288 bytes, placed by class name
    // SpriteData::DecodeSpriteData(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void SpriteData::DecodeSpriteData(PacketT* param_1, int param_2) {
        byte bVar1;
        char cVar2;
        vector vVar3;
        ushort uVar4;
        int iVar5;
        uint uVar6;
        vector* pvVar7;
        vector* pvVar8;
        type* ptVar9;

        iVar5 = param_1->g4s();
        m_spriteID = iVar5;
        uVar4 = param_1->g2();
        m_spriteRotate = uVar4;
        bVar1 = param_1->g1();
        SetSpriteTiling(this, (bool)(bVar1 & 1));
        SetSpriteUseAlpha(this, SUB41((bVar1 & 2) >> 1, 0));
        bVar1 = param_1->g1();
        m_spriteAlpha = ~bVar1;
        bVar1 = param_1->g1();
        m_spriteOutline = bVar1;
        uVar6 = param_1->g4();
        m_spriteShadowRGB = uVar6;
        cVar2 = param_1->g1();
        SetSpriteVFlip(this, cVar2 == '\x01');
        cVar2 = param_1->g1();
        ptVar9 = (type*)(ulong)(cVar2 == '\x01');
        SetSpriteHFlip(this, cVar2 == '\x01');
        iVar5 = param_1->g4();
        m_spriteRGB = iVar5;
        if (2 < param_2) {
            cVar2 = param_1->g1();
            ptVar9 = (type*)(ulong)(cVar2 == '\x01');
            SetSpriteUseClickMask(this, cVar2 == '\x01');
        }
        if (5 < param_2) {
            pvVar7 = (&field_17, ptVar9)->SSOBeginPtr();
            pvVar8 = (vector*)(&field_17)->y();
            for (; pvVar7 != pvVar8; pvVar7 = pvVar7 + 1) {
                vVar3 = (vector)param_1->g1();
                *pvVar7 = vVar3;
            }
        }
    }

    // 0x1006781f0, 352 bytes, placed by class name
    // SpriteData::LoadSpriteAtlasReference(graphics::SpriteAtlasManager&, bool)
    undefined* SpriteData::LoadSpriteAtlasReference(SpriteAtlasManager* param_1, bool param_2) {
        undefined1* this_00;
        int iVar1;
        byte bVar2;
        bool bVar3;
        ulong uVar5;
        SpriteAtlasReference* this_01;
        undefined** ppuVar6;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48[16];
        shared_ptr local_38;

        if (m_spriteID == -1) {
            ppuVar6 = &DataStatus::MISSING;
        } else {
            if (m_spriteAtlasReference == 18446744073709551615) {
                shared_ptr<graphics::SpriteAtlasReference>::reset();
                iVar1 = m_spriteID;
                bVar2 = GetSpriteUseAlpha(this);
                uVar5 = (ulong)m_spriteShadowRGB << 21 | (ulong)m_spriteOutline << 19 | (ulong)bVar2 << 18 |
                        (ulong)param_2 << 17 | (long)iVar1;
                m_spriteAtlasReference = uVar5;
                if (uVar5 == 18446744073709551615) {
                    /* WARNING: Subroutine does not return */
                    LogAssert(
                        "m_spriteHash != -1",
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/SpriteData.cpp",
                        97, (char*)0);
                }
            }
            this_00 = field_32;
            bVar3 = this_00->operator_cast_to_bool();
            if (!bVar3) {
                uVar5 = m_spriteAtlasReference;
                shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_48,
                                                                                         (_func_decltype_nullptr*)0);
                graphics::SpriteAtlasManager::GetSpriteReference(&local_38, param_1, uVar5, local_48, 2);
                shared_ptr<graphics::SpriteAtlasReference>::operator=(
                    (shared_ptr<graphics::SpriteAtlasReference>*)this_00, &local_38);
                local_38.~shared_ptr();
                local_48->~shared_ptr();
            }
            bVar3 = this_00->operator_cast_to_bool();
            if (bVar3) {
                this_01 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                    (shared_ptr<graphics::SpriteAtlasReference>*)this_00);
                if (this_01->IsReady() != '\0') {
                    ppuVar6 = &DataStatus::READY;
                    goto LAB_10067830f;
                }
            }
            ppuVar6 = &DataStatus::NOTLOADED;
        }
    LAB_10067830f:
        return *ppuVar6;
    }

    // 0x100678c40, 240 bytes, placed by class name
    // SpriteData::LoadStyleSheetSpriteData(StyleEntryID, StyleSheet const&)
    void SpriteData::LoadStyleSheetSpriteData(int param_2, StyleSheet* param_3) {
        undefined1 local_48[8];
        StyleSheetValue* local_40;
        bool local_29;

        if (597 < param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert("((int)StyleEntryID::COUNT) >= rawBaseEntryID + NUM_SPRITEDATA_ENTRIES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/SpriteData.cpp",
                      56, (char*)0);
        }
        local_48->FindProperty(param_3, param_2, 1);
        if (local_48->IsValid() != '\0') {
            m_spriteID = StyleSheetValue::Get<int>(local_40);
            m_spriteAtlasReference = 18446744073709551615;
            (&field_17, param_2 + 1, local_48)->LoadFromStylesheet();
            local_29 = (bool)GetSpriteTiling(this);
            StyleSheet::LoadPropertyValueIfSet<unsigned char, bool>(param_3, &local_29, param_2 + 7, 1);
            SetSpriteTiling(this, local_29);
        }
        StyleSheet::LoadPropertyValueIfSet<unsigned int>(param_3, &m_spriteRGB, param_2 + 8, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_3, &m_spriteAlpha, param_2 + 9, 1);
    }

    // 0x100678da0, 192 bytes, placed by class name
    // SpriteData::GetSpriteMapping(graphics::SpriteAtlasManager&, bool)
    undefined* SpriteData::GetSpriteMapping(SpriteAtlasManager* param_1, bool param_2) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        int iVar3;
        SpriteAtlasReference* this_01;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_02;
        shared_ptr* this_03;
        SpriteAtlas* this_04;
        FastPool<audio::SoundInstance, int>* this_05;
        long lVar4;
        undefined* puVar5;

        this_00 = field_32;
        bVar1 = this_00->operator_cast_to_bool();
        if (!bVar1) {
            LoadSpriteAtlasReference(this, param_1, param_2);
            bVar1 = this_00->operator_cast_to_bool();
            if (!bVar1) {
                return PTR_ZERO_100ee6690;
            }
        }
        this_01 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
            (shared_ptr<graphics::SpriteAtlasReference>*)this_00);
        cVar2 = this_01->IsReady();
        puVar5 = PTR_ZERO_100ee6690;
        if (cVar2 != '\0') {
            this_02 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>*)
                          shared_ptr<graphics::SpriteAtlasReference>::operator->(
                              (shared_ptr<graphics::SpriteAtlasReference>*)this_00);
            this_03 = (shared_ptr*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(this_02);
            bVar1 = shared_ptr::operator_cast_to_bool(this_03);
            if (bVar1) {
                this_04 = (SpriteAtlas*)shared_ptr<graphics::SpriteAtlas>::operator->(
                    (shared_ptr<graphics::SpriteAtlas>*)this_03);
                this_05 = (FastPool<audio::SoundInstance, int>*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                    (shared_ptr<graphics::SpriteAtlasReference>*)this_00);
                iVar3 = FastPool<audio::SoundInstance, int>::capacity(this_05);
                lVar4 = this_04->GetSpriteRenderMapping(iVar3);
                puVar5 = (undefined*)(lVar4 + 72);
            }
        }
        return puVar5;
    }

    // 0x100678e60, 64 bytes, placed by class name
    // SpriteData::ObjSpriteCacheKeyDetails(long long, int&, bool&, bool&, unsigned int&, unsigned int&)
    void SpriteData::ObjSpriteCacheKeyDetails(longlong param_1, int* param_2, bool* param_3, bool* param_4,
                                              uint* param_5, uint* param_6) {
        *param_2 = (uint)param_1 & 131071;
        *param_5 = (uint)((ulong)param_1 >> 18) & 3;
        *param_3 = (bool)((byte)((ulong)param_1 >> 20) & 1);
        *param_4 = (bool)((byte)((ulong)param_1 >> 21) & 1);
        *param_6 = (uint)((ulong)param_1 >> 22) & 16777215;
    }

    // 0x100678ea0, 112 bytes, placed by class name
    // SpriteData::SetObjSpriteFromHashKey(long long)
    int SpriteData::SetObjSpriteFromHashKey(longlong param_1) {
        int local_20;
        uchar local_1c[4];
        uint local_18;
        bool local_12;
        bool local_11;

        ObjSpriteCacheKeyDetails(param_1, &local_20, &local_12, &local_11, (uint*)local_1c, &local_18);
        SetUsePlayerModelRecolours(this, local_12);
        SetObjSpriteIsHighRes(this, local_11);
        SetSpriteOutline(this, local_1c[0]);
        SetSpriteShadowRGB(this, local_18);
        return local_20;
    }

    // 0x100678f90, 112 bytes, placed by class name
    // SpriteData::GetSpriteDrawMode(unsigned int, unsigned int) const
    undefined1 SpriteData::GetSpriteDrawMode(uint param_1, uint param_2) {
        byte bVar1;
        byte bVar2;
        undefined1 uVar3;
        undefined1 uVar4;

        bVar1 = (&field_17)->GetWidth();
        bVar2 = (&field_17)->GetHeight();
        uVar4 = 2;
        if (bVar1 == 0 || param_1 < bVar1) {
            uVar4 = bVar2 != 0 && bVar2 <= param_2;
        }
        uVar3 = 3;
        if (bVar2 == 0 || bVar2 > param_2) {
            uVar3 = uVar4;
        }
        if (bVar1 == 0 || param_1 < bVar1) {
            uVar3 = uVar4;
        }
        return uVar3;
    }

    // 0x100679000, 80 bytes, placed by class name
    // SpriteData::ConvertToContentBounds(int&, int&, int&, int&) const
    void SpriteData::ConvertToContentBounds(int* param_1, int* param_2, int* param_3, int* param_4) {
        if (IsSpriteValid(this) != '\0') {
            (&field_17, param_1, param_2, param_3, param_4)->ApplyTo();
        }
    }

    // 0x100679070, 1168 bytes, placed by class name
    // SpriteData::DrawSpriteSliceDebug(graphics::GUIManager&, int, int, int, int, unsigned int) const
    void SpriteData::DrawSpriteSliceDebug(GUIManager* param_1, int param_2, int param_3, int param_4, int param_5,
                                          uint param_6) {
        GUIManager* pGVar1;
        byte bVar2;
        int iVar3;
        int* piVar4;
        int* piVar5;
        int* piVar6;
        uint* puVar7;
        int* piVar8;
        ulong uVar9;
        undefined4 in_register_00000014;
        int iVar10;
        int iVar11;
        int iVar12;
        ulong uVar13;
        uint local_70;
        uint local_6c;
        uint local_68;
        uint local_64;
        int local_5c;
        uint local_58;
        uint local_54;
        GUIManager* local_50;
        ulong local_48;
        ulong local_40;

        local_40 = CONCAT44(in_register_00000014, param_2);
        if (param_4 < 1) {
            return;
        }
        if (param_5 < 1) {
            return;
        }
        if ((param_6 & 255) == 0) {
            return;
        }
        uVar9 = (ulong)(uint)param_4;
        iVar3 = GetSpriteDrawMode(this, param_4, param_5);
        if (iVar3 == 0) {
            uVar13 = local_40;
            iVar3 = param_3;
        } else {
            local_70 = (uint)field_17;
            local_6c = (uint)field_18;
            local_68 = (uint)field_19;
            local_64 = (uint)field_20;
            local_48 = uVar9;
            bVar2 = (&field_17)->GetWidth();
            local_58 = (uint)bVar2;
            bVar2 = (&field_17)->GetHeight();
            local_54 = (uint)bVar2;
            local_50 = param_1;
            if (iVar3 == 2) {
                piVar4 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&local_70, 0);
                iVar12 = (int)local_40;
                param_1->AddOutline(local_40 & 4294967295, param_3, *piVar4, param_5, 1, param_6, 1);
                iVar11 = *piVar4;
                piVar4 = (int*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)&local_58, 0);
                iVar3 = param_3;
                param_1 = local_50;
                iVar10 = (int)local_48;
                local_50->AddOutline(iVar11 + iVar12, param_3, iVar10 - *piVar4, param_5, 1, param_6, 1);
                puVar7 = (uint*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&local_70, 2);
                uVar9 = (ulong)*puVar7;
                uVar13 = (ulong)((iVar10 + iVar12) - *puVar7);
            } else if (iVar3 == 1) {
                piVar4 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&local_70, 1);
                iVar3 = param_3;
                uVar13 = local_40;
                param_1->AddOutline(local_40 & 4294967295, param_3, local_48, *piVar4, 1, param_6, 1);
                iVar11 = *piVar4;
                piVar4 = (int*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)&local_58, 1);
                uVar9 = local_48;
                param_1 = local_50;
                local_50->AddOutline(uVar13 & 4294967295, iVar11 + iVar3, local_48 & 4294967295, param_5 - *piVar4, 1,
                                     param_6, 1);
                iVar3 = param_5 + iVar3;
                piVar4 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&local_70, 3);
                param_5 = *piVar4;
                iVar3 = iVar3 - param_5;
                uVar13 = uVar13 & 4294967295;
                uVar9 = uVar9 & 4294967295;
            } else {
                piVar4 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&local_70, 0);
                iVar3 = *piVar4;
                piVar5 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&local_70, 1);
                uVar9 = local_40;
                param_1->AddOutline(local_40, param_3, iVar3, *piVar5, 1, param_6, 1);
                iVar3 = *piVar4;
                piVar6 = (int*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)&local_58, 0);
                iVar10 = param_3;
                iVar11 = (int)local_48;
                local_50->AddOutline(iVar3 + (int)uVar9, param_3, iVar11 - *piVar6, *piVar5, 1, param_6, 1);
                iVar11 = iVar11 + (int)local_40;
                local_5c = iVar11;
                puVar7 = (uint*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&local_70, 2);
                pGVar1 = local_50;
                local_50->AddOutline(iVar11 - *puVar7, iVar10, *puVar7, *piVar5, 1, param_6, 1);
                iVar3 = *piVar5;
                iVar11 = *piVar4;
                piVar8 = (int*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)&local_58, 1);
                iVar12 = (int)local_40;
                pGVar1->AddOutline(local_40 & 4294967295, iVar3 + iVar10, iVar11, param_5 - *piVar8, 1, param_6, 1);
                iVar3 = param_3;
                param_1 = local_50;
                local_50->AddOutline(*piVar4 + iVar12, *piVar5 + param_3, (int)local_48 - *piVar6, param_5 - *piVar8, 1,
                                     param_6, 1);
                param_1->AddOutline(local_5c - *puVar7, *piVar5 + iVar3, *puVar7, param_5 - *piVar8, 1, param_6, 1);
                iVar3 = param_5 + iVar3;
                piVar5 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)&local_70, 3);
                iVar11 = (int)local_40;
                param_1->AddOutline(local_40 & 4294967295, iVar3 - *piVar5, *piVar4, *piVar5, 1, param_6, 1);
                param_1->AddOutline(iVar11 + *piVar4, iVar3 - *piVar5, (int)local_48 - *piVar6, *piVar5, 1, param_6, 1);
                uVar9 = (ulong)*puVar7;
                uVar13 = (ulong)(local_5c - *puVar7);
                param_5 = *piVar5;
                iVar3 = iVar3 - param_5;
            }
        }
        param_1->AddOutline(uVar13, iVar3, uVar9, param_5, 1, param_6, 1);
    }

    // 0x1006892b0: the linker folded this into ComponentDragConfig::GetRenderBehaviour() const, which has identical code
    byte SpriteData::GetSpriteAlpha() const;

} // namespace jag::ui

// 0x100676270, 16 bytes, placed by debug map only (low confidence)
// abs(float)
ulong abs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}
