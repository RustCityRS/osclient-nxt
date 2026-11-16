// libs/ui/utils/SpriteData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "SpriteData.h"

namespace jag::ui {
    // 0x1039bcdfc
    bool SpriteData::m_enableSpriteSliceDebug;

    // 0x100016cf0: SpriteData::GetSpriteHash() const has the same machine code as eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator, eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::size() const

    // 0x10002d850: SpriteData::GetSpriteAtlasReference() const has the same machine code as oldscape::option::Option<int>::GetDefaultValue() const

    // 0x10005fe50: SpriteData::SetSpriteRGB(unsigned int) has the same machine code as oldscape::widgets::Widget::SetBorderColour(unsigned int)

    // 0x100073980: SpriteData::GetSpriteShadowRGB() const has the same machine code as math::Rect<int>::MinY() const

    // 0x1000b9960: SpriteData::GetSpriteID() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x1000e5d50, the same machine code as oldscape::rs2lib::CoordZoneSource::GetRotation() const
    unsigned short SpriteData::GetSpriteRGB() const {
        return m_spriteRotate;
    }

    // 0x10019c120: SpriteData::~SpriteData() has the same machine code as eastl::rbtree_node<shared_ptr<Js5WorkerRequestMessage>>::~rbtree_node()

    // 0x10019c130: SpriteData::~SpriteData() has the same machine code as eastl::rbtree_node<shared_ptr<Js5WorkerRequestMessage>>::~rbtree_node()

    // 0x100674df0
    void SpriteData::DrawSpriteSlice(graphics::RT7Core& rt7Core, int arg2, int arg3, int arg4, int arg5,
                                     unsigned int arg6, const math::Rect<float>& rect, const render::Texture* texture,
                                     float arg9) const {
        unsigned long uVar1;
        GUIManager* this_00;
        unsigned int* puVar5;
        int* piVar6;
        float* pfVar7;
        int* piVar8;
        uint32_t in_register_0000000c;
        float fVar9;
        uint32_t in_register_00000014;
        int iVar10;
        int iVar11;
        int iVar12;
        int iVar13;
        int iVar14;
        int arg1;
        uint32_t uVar15;
        float fVar16;
        float arg9_00;
        uint8_t local_118[28];
        float local_fc;
        float local_f0;
        float local_ec;
        float local_e8;
        float local_e4;
        unsigned int local_e0;
        unsigned int local_dc;
        unsigned int local_d8;
        unsigned int local_d4;
        int* local_c8;
        int* local_c0;
        float local_b4;
        float* local_b0;
        float* local_a8;
        float* local_a0;
        float local_94;
        int* local_88;
        float* local_80;
        int* local_60;
        float* local_58;
        float local_4c;
        float local_44;
        int* local_40;
        float local_34;

        uint64_t local_70 = (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        uint64_t local_78 = (((uint64_t)in_register_0000000c << 32) | (uint32_t)arg3);
        if (arg4 < 1) {
            return;
        }
        if (arg5 < 1) {
            return;
        }
        if ((arg6 & 255) == 0) {
            return;
        }
        float local_38 = arg9;
        unsigned int uVar3 = GetSpriteRGBA();
        unsigned int local_48 = math::Multiply(arg6, uVar3);
        unsigned long local_d0 = (unsigned long)(unsigned int)arg5;
        unsigned long local_90 = (unsigned long)(unsigned int)arg4;
        int iVar4 = GetSpriteDrawMode(arg4, arg5);
        bool cVar2 = GetSpriteTiling();
        auto local_68 = rt7Core.GetGUIManager();
        if ((cVar2) && (local_38 != 0.0)) {
            (logger::default_logger())
                ->Log(true, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/SpriteData.cpp",
                      220, "Disabling tiling due to no support for drawing sliced sprites with tiling and rotation.");
        }
        if (iVar4 == 0) {
            iVar4 = (int)local_70;
            iVar14 = (int)local_90 + iVar4;
            iVar11 = (int)local_78;
            iVar10 = (int)local_d0 + iVar11;
            if (!cVar2) {
                local_68->AddElementRotated(iVar4, iVar11, iVar14, iVar10, local_48, rect, texture, 1, local_38,
                                            -999999, -999999);
            } else {
                local_38 = (float)rect.GetOverbright();
                local_44 = (float)rect.GetAlpha();
                local_4c = (float)rect.MaxU();
                fVar16 = (float)rect.MaxV();
                local_68->AddElementTiled(iVar4, iVar11, iVar14, iVar10, local_48, local_38, local_44, local_4c, fVar16,
                                          texture, 1, 0, 0, 0, 0, 0, 0);
            }
        } else {
            puVar5 = (unsigned int*)texture->second();
            local_e0 = (unsigned int)field_17;
            local_f0 = (float)local_e0 * (1.0 / (float)*puVar5);
            local_dc = (unsigned int)field_18;
            local_ec = (float)local_dc * (1.0 / (float)puVar5[1]);
            local_d8 = (unsigned int)field_19;
            local_e8 = (float)local_d8 * (1.0 / (float)*puVar5);
            local_d4 = (unsigned int)field_20;
            local_e4 = (float)local_d4 * (1.0 / (float)puVar5[1]);
            iVar11 = (int)local_70;
            if (local_38 == 0.0) {
                local_44 = 0.0;
                fVar9 = 0.0;
                fVar16 = 0.0;
                if (iVar4 != 3)
                    goto LAB_100674fd0;
            LAB_1006752fd:
                local_4c = fVar9;
                local_40 = &local_e0[0];
                local_88 = (int*)(((uint64_t)local_88._4_4_ << 32) | (uint32_t)(*local_40 + iVar11));
                local_c0 = &local_e0[1];
                local_34 = (float)(((uint32_t)local_34._1_3_ << 8) | (uint8_t)cVar2);
                iVar4 = *local_c0 + (int)local_78;
                uVar15 = rect.GetOverbright();
                local_a0 = (float*)(((uint64_t)local_a0._4_4_ << 32) | (uint32_t)uVar15);
                local_80._0_4_ = (float)rect.GetAlpha();
                local_60._0_4_ = (float)rect.GetOverbright();
                local_a8 = &local_f0[0];
                local_60._0_4_ = local_60._0_4_ + *local_a8;
                local_b0._0_4_ = (float)rect.GetAlpha();
                local_58 = &local_f0[1];
                this_00 = local_68;
                iVar14 = (int)local_70;
                iVar12 = (int)local_78;
                local_68->AddElementRotated(iVar14, iVar12, (int)local_88._0_4_, iVar4, local_48, local_a0._0_4_,
                                            local_80._0_4_, local_60._0_4_, local_b0._0_4_ + *local_58, texture, 1,
                                            local_38, (int)local_44, (int)fVar9);
                local_b0._0_4_ = (float)(*local_40 + iVar14);
                iVar14 = iVar14 + (int)local_90;
                local_60 = (int*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)iVar14);
                local_88 = &local_e0[2];
                iVar4 = *local_88;
                iVar11 = *local_c0;
                local_c8._0_4_ = (float)rect.GetOverbright();
                local_c8._0_4_ = local_c8._0_4_ + *local_a8;
                local_94 = (float)rect.GetAlpha();
                local_80._0_4_ = (float)rect.MaxU();
                local_a0 = &local_f0[2];
                local_80._0_4_ = local_80._0_4_ - *local_a0;
                fVar16 = (float)rect.GetAlpha();
                this_00->AddElementRotated((int)local_b0._0_4_, iVar12, iVar14 - iVar4, iVar11 + iVar12, local_48,
                                           local_c8._0_4_, local_94, local_80._0_4_, fVar16 + *local_58, texture, 1,
                                           local_38, (int)local_44, (int)local_4c);
                piVar6 = local_c0;
                iVar11 = (int)local_60._0_4_ - *local_88;
                iVar4 = *local_c0;
                local_80._0_4_ = (float)rect.MaxU();
                local_80._0_4_ = local_80._0_4_ - *local_a0;
                uVar15 = rect.GetAlpha();
                local_b0 = (float*)(((uint64_t)local_b0._4_4_ << 32) | (uint32_t)uVar15);
                uVar15 = rect.MaxU();
                local_c8 = (int*)(((uint64_t)local_c8._4_4_ << 32) | (uint32_t)uVar15);
                fVar16 = (float)rect.GetAlpha();
                local_68->AddElementRotated(iVar11, iVar12, (int)local_60._0_4_, iVar4 + iVar12, local_48,
                                            local_80._0_4_, local_b0._0_4_, local_c8._0_4_, fVar16 + *local_58, texture,
                                            1, local_38, (int)local_44, (int)local_4c);
                iVar4 = *piVar6;
                iVar11 = *local_40;
                iVar13 = (int)local_70;
                iVar10 = iVar12 + (int)local_d0;
                local_c8 = &local_e0[3];
                local_80 = (float*)(((uint64_t)local_80._4_4_ << 32) | (uint32_t)iVar10);
                iVar14 = *local_c8;
                local_94 = (float)rect.GetOverbright();
                local_b4 = (float)rect.GetAlpha();
                local_b4 = local_b4 + *local_58;
                local_118._24_4_ = rect.GetOverbright();
                local_118._24_4_ = (float)local_118._24_4_ + *local_a8;
                local_fc = (float)rect.MaxV();
                local_b0 = &local_f0[3];
                local_68->AddElementRotated(iVar13, iVar4 + iVar12, iVar11 + iVar13, iVar10 - iVar14, local_48,
                                            local_94, local_b4, (float)local_118._24_4_, local_fc - *local_b0, texture,
                                            1, local_38, (int)local_44, (int)local_4c);
                if (local_34._0_1_ == '\0') {
                    iVar14 = *local_40 + (int)local_70;
                    iVar10 = *local_c0 + (int)local_78;
                    iVar11 = (int)local_60._0_4_ - *local_88;
                    iVar4 = (int)local_80._0_4_ - *local_c8;
                    local_34 = (float)rect.GetOverbright();
                    local_34 = local_34 + *local_a8;
                    local_94 = (float)rect.GetAlpha();
                    local_94 = local_94 + *local_58;
                    local_b4 = (float)rect.MaxU();
                    local_b4 = local_b4 - *local_a0;
                    fVar16 = (float)rect.MaxV();
                    local_68->AddElementRotated(iVar14, iVar10, iVar11, iVar4, local_48, local_34, local_94, local_b4,
                                                fVar16 - *local_b0, texture, 1, local_38, (int)local_44, (int)local_4c);
                    iVar4 = (int)local_78;
                    piVar8 = local_88;
                    piVar6 = local_c0;
                    iVar11 = (int)local_60._0_4_;
                } else {
                    new (local_118) graphics::ClippingState(rt7Core);
                    piVar8 = local_88;
                    piVar6 = local_c0;
                    iVar14 = (int)local_78;
                    rt7Core.SetClippingRectangle(*local_40 + (int)local_70, *local_c0 + iVar14,
                                                 (int)local_90 - (*local_40 + *local_88),
                                                 (int)local_d0 - (*local_c0 + *local_c8), false);
                    iVar13 = *local_40 + (int)local_70;
                    iVar11 = *piVar6;
                    iVar12 = (int)local_60._0_4_ - *piVar8;
                    iVar10 = (int)local_80._0_4_ - *local_c8;
                    local_34 = (float)rect.GetOverbright();
                    local_34 = local_34 + *local_a8;
                    local_94 = (float)rect.GetAlpha();
                    local_94 = local_94 + *local_58;
                    local_b4 = (float)rect.MaxU();
                    local_b4 = local_b4 - *local_a0;
                    fVar16 = (float)rect.MaxV();
                    piVar8 = local_88;
                    piVar6 = local_c0;
                    iVar4 = (int)local_78;
                    local_68->AddElementTiled(iVar13, iVar11 + iVar14, iVar12, iVar10, local_48, local_34, local_94,
                                              local_b4, fVar16 - *local_b0, texture, 1, 0, 0, 0, 0, 0, 0);
                    iVar11 = (int)local_60._0_4_;
                }
                iVar14 = *piVar8;
                iVar10 = *piVar6;
                iVar12 = (int)local_80._0_4_ - *local_c8;
                local_34 = (float)rect.MaxU();
                local_34 = local_34 - *local_a0;
                fVar16 = (float)rect.GetAlpha();
                local_58._0_4_ = fVar16 + *local_58;
                fVar16 = (float)rect.MaxU();
                local_c0._0_4_ = fVar16;
                fVar16 = (float)rect.MaxV();
                local_68->AddElementRotated(iVar11 - iVar14, iVar10 + iVar4, iVar11, iVar12, local_48, local_34,
                                            local_58._0_4_, local_c0._0_4_, fVar16 - *local_b0, texture, 1, local_38,
                                            (int)local_44, (int)local_4c);
                piVar6 = local_c8;
                iVar11 = (int)local_80._0_4_ - *local_c8;
                iVar4 = *local_40;
                arg1 = (int)local_70;
                local_34 = (float)rect.GetOverbright();
                local_58._0_4_ = (float)rect.MaxV();
                local_58._0_4_ = local_58._0_4_ - *local_b0;
                fVar16 = (float)rect.GetOverbright();
                local_c0 = (int*)(((uint64_t)local_c0._4_4_ << 32) | (uint32_t)(fVar16 + *local_a8));
                fVar16 = (float)rect.MaxV();
                iVar10 = (int)local_80._0_4_;
                local_68->AddElementRotated(arg1, iVar11, iVar4 + arg1, (int)local_80._0_4_, local_48, local_34,
                                            local_58._0_4_, local_c0._0_4_, fVar16, texture, 1, local_38, (int)local_44,
                                            (int)local_4c);
                iVar4 = *local_40;
                iVar11 = *piVar6;
                iVar12 = (int)local_60._0_4_;
                iVar13 = (int)local_60._0_4_ - *local_88;
                fVar16 = (float)rect.GetOverbright();
                local_40._0_4_ = fVar16 + *local_a8;
                local_34 = (float)rect.MaxV();
                local_34 = local_34 - *local_b0;
                local_58._0_4_ = (float)rect.MaxU();
                local_58._0_4_ = local_58._0_4_ - *local_a0;
                fVar16 = (float)rect.MaxV();
                iVar14 = (int)local_80._0_4_;
                local_68->AddElementRotated(iVar4 + arg1, iVar10 - iVar11, iVar13, (int)local_80._0_4_, local_48,
                                            local_40._0_4_, local_34, local_58._0_4_, fVar16, texture, 1, local_38,
                                            (int)local_44, (int)local_4c);
                iVar4 = iVar12 - *local_88;
                iVar11 = iVar14 - *local_c8;
                fVar16 = (float)rect.MaxU();
                local_40 = (int*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(fVar16 - *local_a0));
                local_34 = (float)rect.MaxV();
                local_34 = local_34 - *local_b0;
                uVar15 = rect.MaxU();
                local_58 = (float*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)uVar15);
                arg9_00 = (float)rect.MaxV();
                fVar16 = local_40._0_4_;
                fVar9 = local_34;
            } else {
                local_44 = (float)(((int)(((unsigned int)(local_90 >> 31) & 1) + (int)local_90) >> 1) + iVar11);
                fVar9 = (float)(((int)(((unsigned int)(local_d0 >> 31) & 1) + (int)local_d0) >> 1) + (int)local_78);
                fVar16 = local_44;
                if (iVar4 == 3)
                    goto LAB_1006752fd;
            LAB_100674fd0:
                local_44 = fVar16;
                local_4c = fVar9;
                if (iVar4 == 2) {
                    local_60 = &local_e0[0];
                    local_34 = (float)(((uint32_t)local_34._1_3_ << 8) | (uint8_t)cVar2);
                    iVar4 = *local_60;
                    iVar14 = (int)local_78;
                    local_58 = (float*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)((int)local_d0 + iVar14));
                    uVar15 = rect.GetOverbright();
                    local_a8 = (float*)(((uint64_t)local_a8._4_4_ << 32) | (uint32_t)uVar15);
                    uVar15 = rect.GetAlpha();
                    local_88 = (int*)(((uint64_t)local_88._4_4_ << 32) | (uint32_t)uVar15);
                    local_40._0_4_ = (float)rect.GetOverbright();
                    local_a0 = &local_f0[0];
                    local_40._0_4_ = local_40._0_4_ + *local_a0;
                    fVar16 = (float)rect.MaxV();
                    local_68->AddElementRotated(iVar11, iVar14, iVar4 + iVar11, (int)local_58._0_4_, local_48,
                                                local_a8._0_4_, local_88._0_4_, local_40._0_4_, fVar16, texture, 1,
                                                local_38, (int)local_44, (int)local_4c);
                    if (local_34._0_1_ == '\0') {
                        iVar4 = *local_60;
                        iVar10 = (int)local_70;
                        iVar14 = (int)local_90;
                        piVar6 = &local_e0[2];
                        iVar11 = *piVar6;
                        local_34 = (float)rect.GetOverbright();
                        local_34 = local_34 + *local_a0;
                        uVar15 = rect.GetAlpha();
                        local_60 = (int*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)uVar15);
                        local_40._0_4_ = (float)rect.MaxU();
                        pfVar7 = &local_f0[2];
                        local_40 = (int*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(local_40._0_4_ - *pfVar7));
                        fVar9 = (float)rect.MaxV();
                        fVar16 = local_4c;
                        local_68->AddElementRotated(iVar4 + iVar10, (int)local_78, (iVar14 + iVar10) - iVar11,
                                                    (int)local_58._0_4_, local_48, local_34, local_60._0_4_,
                                                    local_40._0_4_, fVar9, texture, 1, local_38, (int)local_44,
                                                    (int)local_4c);
                    } else {
                        new (local_118) graphics::ClippingState(rt7Core);
                        piVar6 = local_60;
                        iVar4 = *local_60;
                        local_40._0_4_ = (float)((int)local_70 + iVar4);
                        piVar8 = &local_e0[2];
                        rt7Core.SetClippingRectangle((int)local_40._0_4_, (int)local_78,
                                                     (int)local_90 - (iVar4 + *piVar8), (int)local_d0, false);
                        iVar4 = *piVar6;
                        iVar10 = (int)local_70;
                        iVar14 = (int)local_90;
                        iVar11 = *piVar8;
                        local_34 = (float)rect.GetOverbright();
                        local_34 = local_34 + *local_a0;
                        uVar15 = rect.GetAlpha();
                        local_60 = (int*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)uVar15);
                        local_40._0_4_ = (float)rect.MaxU();
                        pfVar7 = &local_f0[2];
                        local_40 = (int*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(local_40._0_4_ - *pfVar7));
                        fVar16 = (float)rect.MaxV();
                        local_68->AddElementTiled(iVar4 + iVar10, (int)local_78, (iVar14 + iVar10) - iVar11,
                                                  (int)local_58._0_4_, local_48, local_34, local_60._0_4_,
                                                  local_40._0_4_, fVar16, texture, 1, 0, 0, 0, 0, 0, 1);
                        fVar16 = local_4c;
                    }
                    iVar4 = (int)local_90;
                    iVar14 = iVar4 + (int)local_70;
                    piVar6 = &local_e0[2];
                    iVar11 = *piVar6;
                    fVar9 = (float)rect.MaxU();
                    local_40._0_4_ = fVar9;
                    pfVar7 = &local_f0[2];
                    local_40 = (int*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(local_40._0_4_ - *pfVar7));
                    local_34 = (float)rect.GetAlpha();
                    uVar15 = rect.MaxU();
                    local_60 = (int*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)uVar15);
                    fVar9 = (float)rect.MaxV();
                    local_68->AddElementRotated(iVar14 - iVar11, (int)local_78, iVar14, (int)local_58._0_4_, local_48,
                                                local_40._0_4_, local_34, local_60._0_4_, fVar9, texture, 1, local_38,
                                                (int)local_44, (int)fVar16);
                    goto LAB_100676207;
                }
                if (iVar4 != 1) {
                    LogAssertAlways(
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/SpriteData.cpp",
                        348, nullptr);
                }
                local_40 = (int*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)((int)local_90 + iVar11));
                local_a0 = &local_e0[1];
                local_34 = (float)(((uint32_t)local_34._1_3_ << 8) | (uint8_t)cVar2);
                fVar16 = *local_a0;
                iVar4 = (int)local_78;
                local_58._0_4_ = (float)rect.GetOverbright();
                local_60._0_4_ = (float)rect.GetAlpha();
                local_a8._0_4_ = (float)rect.MaxU();
                uVar15 = rect.GetAlpha();
                local_88 = (int*)(((uint64_t)local_88._4_4_ << 32) | (uint32_t)uVar15);
                local_80 = &local_f0[1];
                uVar3 = local_48;
                local_68->AddElementRotated((int)local_70, iVar4, (int)local_40._0_4_, (int)fVar16 + iVar4, local_48,
                                            local_58._0_4_, local_60._0_4_, local_a8._0_4_, local_88._0_4_ + *local_80,
                                            texture, 1, local_38, (int)local_44, (int)fVar9);
                if (local_34._0_1_ == '\0') {
                    iVar11 = (int)local_78;
                    local_34 = (float)((int)*local_a0 + iVar11);
                    iVar14 = (int)local_d0;
                    piVar6 = &local_e0[3];
                    iVar4 = *piVar6;
                    uVar15 = rect.GetOverbright();
                    local_58 = (float*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)uVar15);
                    fVar16 = (float)rect.GetAlpha();
                    local_60 = (int*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)(fVar16 + *local_80));
                    uVar15 = rect.MaxU();
                    local_a8 = (float*)(((uint64_t)local_a8._4_4_ << 32) | (uint32_t)uVar15);
                    uVar15 = rect.MaxV();
                    local_88 = (int*)(((uint64_t)local_88._4_4_ << 32) | (uint32_t)uVar15);
                    pfVar7 = &local_f0[3];
                    local_68->AddElementRotated((int)local_70, (int)local_34, (int)local_40._0_4_,
                                                (iVar14 + iVar11) - iVar4, uVar3, local_58._0_4_, local_60._0_4_,
                                                local_a8._0_4_, local_88._0_4_ - *pfVar7, texture, 1, local_38,
                                                (int)local_44, (int)local_4c);
                } else {
                    new (local_118) graphics::ClippingState(rt7Core);
                    pfVar7 = local_a0;
                    uVar1 = local_d0;
                    fVar16 = *local_a0;
                    local_34 = (float)((int)local_78 + (int)fVar16);
                    piVar6 = &local_e0[3];
                    iVar14 = (int)uVar1;
                    rt7Core.SetClippingRectangle((int)local_70, (int)local_34, (int)local_90,
                                                 iVar14 - ((int)fVar16 + *piVar6), false);
                    fVar16 = *pfVar7;
                    iVar11 = (int)local_78;
                    iVar4 = *piVar6;
                    local_34 = (float)rect.GetOverbright();
                    fVar9 = (float)rect.GetAlpha();
                    local_58 = (float*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)(fVar9 + *local_80));
                    uVar15 = rect.MaxU();
                    local_60 = (int*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)uVar15);
                    uVar15 = rect.MaxV();
                    local_a8 = (float*)(((uint64_t)local_a8._4_4_ << 32) | (uint32_t)uVar15);
                    pfVar7 = &local_f0[3];
                    local_68->AddElementTiled((int)local_70, (int)fVar16 + iVar11, (int)local_40._0_4_,
                                              (iVar14 + iVar11) - iVar4, local_48, local_34, local_58._0_4_,
                                              local_60._0_4_, local_a8._0_4_ - *pfVar7, texture, 1, 0, 0, 0, 0, 1, 0);
                    iVar11 = (int)local_78;
                }
                iVar12 = (int)local_40._0_4_;
                iVar14 = iVar14 + iVar11;
                piVar6 = &local_e0[3];
                iVar11 = iVar14 - *piVar6;
                local_34 = (float)rect.GetOverbright();
                fVar16 = (float)rect.MaxV();
                local_40._0_4_ = fVar16;
                pfVar7 = &local_f0[3];
                local_40 = (int*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(local_40._0_4_ - *pfVar7));
                uVar15 = rect.MaxU();
                local_58 = (float*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)uVar15);
                arg9_00 = (float)rect.MaxV();
                iVar4 = (int)local_70;
                fVar16 = local_34;
                fVar9 = local_40._0_4_;
            }
            local_68->AddElementRotated(iVar4, iVar11, iVar12, iVar14, local_48, fVar16, fVar9, local_58._0_4_, arg9_00,
                                        texture, 1, local_38, (int)local_44, (int)local_4c);
        }
        iVar4 = (int)local_90;
    LAB_100676207:
        if (m_enableSpriteSliceDebug != '\0') {
            DrawSpriteSliceDebug(*local_68, (int)local_70, (int)local_78, iVar4, (int)local_d0, 4278190335);
        }
    }

    // 0x100677860
    void SpriteData::DecodeSpriteData(PacketT<Array<unsigned char>>& arg1, int arg2) {
        uint8_t extraout_AL;
        uint8_t extraout_AL_00;
        uint8_t extraout_AL_01;
        uint8_t extraout_AL_02;
        uint8_t extraout_AL_03;
        uint8_t extraout_AH;
        uint8_t extraout_AH_00;
        uint8_t extraout_AH_01;
        uint8_t extraout_AH_02;
        uint8_t extraout_AH_03;
        uint8_t extraout_AH_04;
        uint16_t extraout_var;
        uint16_t extraout_var_00;
        uint16_t extraout_var_01;
        uint16_t extraout_var_02;
        uint16_t extraout_var_03;
        uint32_t extraout_var_04;
        uint32_t extraout_var_05;
        uint8_t* puVar4;

        arg1.g4s();
        m_spriteID =
            (((uint32_t)extraout_var << 16) | (uint16_t)((((uint16_t)extraout_AH << 8) | (uint8_t)extraout_AL)));
        uint8_t uVar1 = arg1.g2();
        m_spriteRotate = (((uint16_t)extraout_AH_00 << 8) | (uint8_t)uVar1);
        uint8_t bVar2 = arg1.g1();
        SetSpriteTiling((bool)(bVar2 & 1));
        SetSpriteUseAlpha((uint8_t)((bVar2 & 2) >> 1));
        bVar2 = arg1.g1();
        m_spriteAlpha = ~bVar2;
        bVar2 = arg1.g1();
        m_spriteOutline = bVar2;
        arg1.g4();
        m_spriteShadowRGB = (((uint32_t)extraout_var_00 << 16) |
                             (uint16_t)((((uint16_t)extraout_AH_01 << 8) | (uint8_t)extraout_AL_00)));
        char cVar3 = arg1.g1();
        SetSpriteVFlip(cVar3 == '\x01');
        cVar3 = arg1.g1();
        SetSpriteHFlip(cVar3 == '\x01');
        arg1.g4();
        m_spriteRGB = (((uint32_t)extraout_var_01 << 16) |
                       (uint16_t)((((uint16_t)extraout_AH_02 << 8) | (uint8_t)extraout_AL_01)));
        if (2 < arg2) {
            cVar3 = arg1.g1();
            SetSpriteUseClickMask(cVar3 == '\x01');
        }
        if (5 < arg2) {
            field_17.SSOBeginPtr();
            puVar4 = (uint8_t*)(((uint64_t)extraout_var_04 << 32) |
                                (uint32_t)((((uint32_t)extraout_var_02 << 16) |
                                            (uint16_t)((((uint16_t)extraout_AH_03 << 8) | (uint8_t)extraout_AL_02)))));
            field_17.y();
            if (puVar4 !=
                (uint8_t*)(((uint64_t)extraout_var_05 << 32) |
                           (uint32_t)((((uint32_t)extraout_var_03 << 16) |
                                       (uint16_t)((((uint16_t)extraout_AH_04 << 8) | (uint8_t)extraout_AL_03)))))) {
                do {
                    uVar1 = arg1.g1();
                    *puVar4 = uVar1;
                    puVar4 = puVar4 + 1;
                } while (
                    puVar4 !=
                    (uint8_t*)(((uint64_t)extraout_var_05 << 32) |
                               (uint32_t)((((uint32_t)extraout_var_03 << 16) |
                                           (uint16_t)((((uint16_t)extraout_AH_04 << 8) | (uint8_t)extraout_AL_03))))));
            }
        }
    }

    // 0x1006781f0
    uint8_t* SpriteData::LoadSpriteAtlasReference(graphics::SpriteAtlasManager& spriteAtlasManager, bool arg2) {
        uint8_t* this_00;
        unsigned int uVar1;
        uint8_t bVar2;
        unsigned long uVar4;
        uint8_t** ppuVar5;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        ReturnValue local_38;

        if (m_spriteID == 4294967295) {
            ppuVar5 = &DataStatus::MISSING;
        } else {
            if (m_spriteAtlasReference == 18446744073709551615) {
                field_32->reset();
                uVar1 = m_spriteID;
                bVar2 = GetSpriteUseAlpha();
                uVar4 = (unsigned long)m_spriteShadowRGB << 21 | (unsigned long)m_spriteOutline << 19 |
                        (unsigned long)bVar2 << 18 | (unsigned long)arg2 << 17 | (long)(int)uVar1;
                m_spriteAtlasReference = uVar4;
                if (uVar4 == 18446744073709551615) {
                    LogAssert(
                        "m_spriteHash != -1",
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/SpriteData.cpp",
                        97, nullptr);
                }
            }
            this_00 = field_32;
            if (!(this_00->operator_cast_to_bool())) {
                uVar4 = m_spriteAtlasReference;
                local_48 = shared_ptr();
                local_38 = spriteAtlasManager.GetSpriteReference(uVar4, local_48, 2);
                *this_00 = local_38;
            }
            if (this_00->operator_cast_to_bool()) {
                if (((SpriteAtlasReference*)(*this_00).operator->())->IsReady()) {
                    ppuVar5 = &DataStatus::READY;
                    goto LAB_10067830f;
                }
            }
            ppuVar5 = &DataStatus::NOTLOADED;
        }
    LAB_10067830f:
        return *ppuVar5;
    }

    // 0x100678c40
    void SpriteData::LoadStyleSheetSpriteData(StyleEntryID styleEntryID, const StyleSheet& styleSheet) {
        bool local_29;

        if (597 < (int)styleEntryID) {
            LogAssert("((int)StyleEntryID::COUNT) >= rawBaseEntryID + NUM_SPRITEDATA_ENTRIES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/SpriteData.cpp",
                      56, nullptr);
        }
        PropertyFindResult local_48 = styleSheet.FindProperty(styleEntryID, true);
        if (local_48.IsValid() != '\0') {
            m_spriteID = local_48.field_8->Get<int>();
            m_spriteAtlasReference = 18446744073709551615;
            field_17.LoadFromStylesheet(styleEntryID + 1, *local_48.field_0);
            local_29 = (bool)GetSpriteTiling();
            styleSheet.LoadPropertyValueIfSet<unsigned char, bool>(local_29, styleEntryID + 7, true);
            SetSpriteTiling(local_29);
        }
        styleSheet.LoadPropertyValueIfSet<unsigned int>(m_spriteRGB, styleEntryID + 8, true);
        styleSheet.LoadPropertyValueIfSet<unsigned char>(m_spriteAlpha, styleEntryID + 9, true);
    }

    // 0x100678da0
    uint8_t* SpriteData::GetSpriteMapping(graphics::SpriteAtlasManager& spriteAtlasManager, bool arg2) {
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_02;
        shared_ptr* this_03;
        long lVar2;

        uint8_t* this_00 = field_32;
        bool cVar1 = this_00->operator_cast_to_bool();
        if (!cVar1) {
            LoadSpriteAtlasReference(spriteAtlasManager, arg2);
            cVar1 = this_00->operator_cast_to_bool();
            if (!cVar1) {
                return PTR_ZERO_100ee6690;
            }
        }
        cVar1 = ((SpriteAtlasReference*)(*this_00).operator->())->IsReady();
        uint8_t* puVar3 = PTR_ZERO_100ee6690;
        if (cVar1) {
            this_02 =
                (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_00).operator->();
            this_03 = (shared_ptr*)this_02->second();
            cVar1 = shared_ptr::operator_cast_to_bool(this_03);
            if (cVar1) {
                lVar2 = ((SpriteAtlas*)(*this_03).operator->())
                            ->GetSpriteRenderMapping(
                                ((FastPool<audio::SoundInstance, int>*)(*this_00).operator->())->capacity());
                puVar3 = (uint8_t*)(lVar2 + 72);
            }
        }
        return puVar3;
    }

    // 0x100678e60
    void SpriteData::ObjSpriteCacheKeyDetails(long long arg1, int& arg2, bool& arg3, bool& arg4, unsigned int& arg5,
                                              unsigned int& arg6) {
        arg2 = (unsigned int)arg1 & 131071;
        arg5 = (unsigned int)((unsigned long)arg1 >> 18) & 3;
        arg3 = (bool)((uint8_t)((unsigned long)arg1 >> 20) & 1);
        arg4 = (bool)((uint8_t)((unsigned long)arg1 >> 21) & 1);
        arg6 = (unsigned int)((unsigned long)arg1 >> 22) & 16777215;
    }

    // 0x100678ea0
    int SpriteData::SetObjSpriteFromHashKey(long long arg1) {
        int local_20;
        unsigned char local_1c[4];
        unsigned int local_18;
        bool local_12;
        bool local_11;

        ObjSpriteCacheKeyDetails(arg1, &local_20, &local_12, &local_11, (unsigned int*)local_1c, &local_18);
        SetUsePlayerModelRecolours(local_12);
        SetObjSpriteIsHighRes(local_11);
        SetSpriteOutline(local_1c[0]);
        SetSpriteShadowRGB(local_18);
        return local_20;
    }

    // 0x100678f90
    uint8_t SpriteData::GetSpriteDrawMode(unsigned int arg1, unsigned int arg2) const {
        uint8_t bVar1 = field_17.GetWidth();
        uint8_t bVar2 = field_17.GetHeight();
        uint8_t uVar4 = 2;
        if (bVar1 == 0 || arg1 < bVar1) {
            uVar4 = bVar2 != 0 && bVar2 <= arg2;
        }
        uint8_t uVar3 = 3;
        if (bVar2 == 0 || bVar2 > arg2) {
            uVar3 = uVar4;
        }
        if (bVar1 == 0 || arg1 < bVar1) {
            uVar3 = uVar4;
        }
        return uVar3;
    }

    // 0x100679000
    void SpriteData::ConvertToContentBounds(int& arg1, int& arg2, int& arg3, int& arg4) const {
        if (IsSpriteValid() != '\0') {
            field_17.ApplyTo(arg1, arg2, arg3, arg4);
        }
    }

    // 0x100679070
    void SpriteData::DrawSpriteSliceDebug(graphics::GUIManager& guiManager, int arg2, int arg3, int arg4, int arg5,
                                          unsigned int arg6) const {
        GUIManager* this_00;
        uint8_t bVar1;
        int* piVar3;
        int* piVar4;
        int* piVar5;
        int* piVar6;
        int* piVar7;
        uint32_t in_register_00000014;
        int iVar8;
        int iVar9;
        int iVar10;
        unsigned int local_70;
        unsigned int local_6c;
        unsigned int local_68;
        unsigned int local_64;
        int local_5c;
        unsigned int local_58;
        unsigned int local_54;
        GUIManager* local_50;
        unsigned long local_48;

        uint64_t local_40 = (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        if (arg4 < 1) {
            return;
        }
        if (arg5 < 1) {
            return;
        }
        if ((arg6 & 255) == 0) {
            return;
        }
        int iVar2 = GetSpriteDrawMode(arg4, arg5);
        if (iVar2 == 0) {
            iVar2 = (int)local_40;
            iVar10 = arg3;
        } else {
            local_70 = (unsigned int)field_17;
            local_6c = (unsigned int)field_18;
            local_68 = (unsigned int)field_19;
            local_64 = (unsigned int)field_20;
            local_48 = (unsigned long)(unsigned int)arg4;
            bVar1 = field_17.GetWidth();
            local_58 = (unsigned int)bVar1;
            bVar1 = field_17.GetHeight();
            local_54 = (unsigned int)bVar1;
            local_50 = guiManager;
            if (iVar2 == 2) {
                piVar3 = &local_70[0];
                iVar9 = (int)local_40;
                guiManager.AddOutline(iVar9, arg3, *piVar3, arg5, 1, arg6, 1);
                iVar2 = *piVar3;
                piVar3 = &local_58[0];
                iVar10 = arg3;
                guiManager = local_50;
                iVar8 = (int)local_48;
                local_50->AddOutline(iVar2 + iVar9, arg3, iVar8 - *piVar3, arg5, 1, arg6, 1);
                piVar3 = &local_70[2];
                arg4 = *piVar3;
                iVar2 = (iVar8 + iVar9) - arg4;
            } else if (iVar2 == 1) {
                piVar3 = &local_70[1];
                iVar10 = arg3;
                iVar2 = (int)local_40;
                guiManager.AddOutline(iVar2, arg3, (int)local_48, *piVar3, 1, arg6, 1);
                iVar8 = *piVar3;
                piVar3 = &local_58[1];
                guiManager = local_50;
                arg4 = (int)local_48;
                local_50->AddOutline(iVar2, iVar8 + iVar10, arg4, arg5 - *piVar3, 1, arg6, 1);
                iVar10 = arg5 + iVar10;
                piVar3 = &local_70[3];
                arg5 = *piVar3;
                iVar10 = iVar10 - arg5;
            } else {
                piVar3 = &local_70[0];
                iVar2 = *piVar3;
                piVar4 = &local_70[1];
                iVar9 = (int)local_40;
                guiManager.AddOutline(iVar9, arg3, iVar2, *piVar4, 1, arg6, 1);
                iVar2 = *piVar3;
                piVar5 = &local_58[0];
                iVar8 = arg3;
                iVar10 = (int)local_48;
                local_50->AddOutline(iVar2 + iVar9, arg3, iVar10 - *piVar5, *piVar4, 1, arg6, 1);
                iVar10 = iVar10 + (int)local_40;
                local_5c = iVar10;
                piVar6 = &local_70[2];
                this_00 = local_50;
                local_50->AddOutline(iVar10 - *piVar6, iVar8, *piVar6, *piVar4, 1, arg6, 1);
                iVar2 = *piVar4;
                iVar10 = *piVar3;
                piVar7 = &local_58[1];
                iVar9 = (int)local_40;
                this_00->AddOutline(iVar9, iVar2 + iVar8, iVar10, arg5 - *piVar7, 1, arg6, 1);
                iVar10 = arg3;
                guiManager = local_50;
                local_50->AddOutline(*piVar3 + iVar9, *piVar4 + arg3, (int)local_48 - *piVar5, arg5 - *piVar7, 1, arg6,
                                     1);
                guiManager.AddOutline(local_5c - *piVar6, *piVar4 + iVar10, *piVar6, arg5 - *piVar7, 1, arg6, 1);
                iVar10 = arg5 + iVar10;
                piVar4 = &local_70[3];
                iVar2 = (int)local_40;
                guiManager.AddOutline(iVar2, iVar10 - *piVar4, *piVar3, *piVar4, 1, arg6, 1);
                guiManager.AddOutline(iVar2 + *piVar3, iVar10 - *piVar4, (int)local_48 - *piVar5, *piVar4, 1, arg6, 1);
                arg4 = *piVar6;
                iVar2 = local_5c - arg4;
                arg5 = *piVar4;
                iVar10 = iVar10 - arg5;
            }
        }
        guiManager.AddOutline(iVar2, iVar10, arg4, arg5, 1, arg6, 1);
    }

    // 0x1006892b0: SpriteData::GetSpriteAlpha() const has the same machine code as ComponentDragConfig::GetRenderBehaviour() const

} // namespace jag::ui

// 0x100676270
unsigned long abs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}
