// libs/ui/utils/ScrollBar.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "ScrollBar.h"

namespace jag::ui {
    // 0x100009ca0: ScrollBar::GetBackgroundSprite() has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x1001a3c10: ScrollBar::GetButtonSprite() has the same machine code as MainLoopFrameTimer::GetFPSCounter()

    // 0x1001cd990: ScrollBar::GetHandleSprite() has the same machine code as graphics::PointLightIndicesEffect::GetVisiblePointLights()

    // 0x1006776e0
    ScrollBar::ScrollBar() : SpriteData(), m_size(16), field_145(10) {
        uint8_t result;

        &result = &field_146;
        auto result;
        field_148 = 0;
        field_152 = 0;
        field_156 = 0;
        field_160 = 0;
        field_164 = 0;
        result = eastl::bitset<3ul, unsigned char>::set(0, true);
        result = eastl::bitset<3ul, unsigned char>::set(1, true);
    }

    // 0x1006777b0
    void ScrollBar::Decode(PacketT<Array<unsigned char>>& arg1, int arg2) {
        char cVar1 = arg1.g1();
        field_146 = eastl::bitset<3ul, unsigned char>::set(0, cVar1 == '\x01');
        cVar1 = arg1.g1();
        field_146 = eastl::bitset<3ul, unsigned char>::set(1, cVar1 == '\x01');
        uint8_t bVar2 = arg1.g1();
        m_size = bVar2;
        bVar2 = arg1.g1();
        field_145 = bVar2;
        DecodeSpriteData(arg1, arg2);
        m_buttonSprite->DecodeSpriteData(arg1, arg2);
        m_handleSprite->DecodeSpriteData(arg1, arg2);
    }

    // 0x100677980
    void ScrollBar::Draw(graphics::RT7Core& rt7Core, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                         bool arg8, unsigned char arg9) {
        InteractionTarget IVar1;
        unsigned int arg4_00;
        uint8_t bVar6;
        uint8_t extraout_AH;
        int iVar8;
        uint8_t extraout_AH_00;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* pcVar11;
        shared_ptr<oldscape::dash3d::GroundDecor>* psVar12;
        Logger* pLVar17;
        unsigned int uVar18;
        uint8_t* puVar19;
        float fVar20;
        uint8_t local_e8[16];
        Rect<float> local_d8;
        shared_ptr local_b8;
        shared_ptr local_a8;
        shared_ptr local_98;
        shared_ptr* local_80;
        SpriteData* local_70;
        unsigned int local_68;
        unsigned int local_64;
        shared_ptr* local_60;
        float local_44;
        float local_34;

        bool cVar4 = GetVisible();
        if (!cVar4) {
            return;
        }
        local_80 = (shared_ptr*)(((uint64_t)local_80._4_4_ << 32) | (uint32_t)((unsigned int)field_145));
        unsigned int local_50 = (unsigned int)m_size;
        uint64_t local_58 = this;
        uint8_t bVar5 = GetAutoHide();
        ScrollBar* pSVar2 = local_58;
        InteractionTarget local_38 = arg4;
        if (arg5 < arg4) {
            if ((uint8_t)(bVar5 ^ 1 | arg4 < arg7) != 1) {
                return;
            }
            local_68 = (unsigned int)local_58->m_size;
            bVar5 = local_58->field_145;
            puVar19 = local_58->m_handleSprite;
            local_98._0_4_ = puVar19->GetVisualMargin();
            bVar6 = local_98.GetWidth();
            uVar18 = (unsigned int)bVar6 + arg4 + (unsigned int)bVar5 * -2;
            if (arg7 < 1) {
                cVar4 = GetAutoHide(pSVar2);
                if (cVar4) {
                    LogAssert(
                        "!GetAutoHide()",
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/ScrollBar.cpp",
                        81, nullptr);
                }
                bVar5 = pSVar2->field_145;
                bVar6 = puVar19->GetVisualMargin();
                local_44 = (float)(((unsigned int)bVar5 + arg2) - (unsigned int)bVar6);
                local_70 = (SpriteData*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)local_50);
                local_34 = (float)arg3;
                local_64 = (unsigned int)local_80;
                local_50 = uVar18;
            } else {
                local_34 = (float)(int)uVar18;
                local_70._0_4_ = 1.0 / (float)arg7;
                fVar20 = (float)eastl::min<float>(1.0, (float)arg4 * local_70._0_4_);
                fVar20 = fVar20 * local_34;
                bVar5 = pSVar2->field_145;
                iVar8 = eastl::min<graphics::GraphicsQuality>(uVar18 - (int)fVar20,
                                                              (int)((float)arg6 * local_34 * local_70._0_4_));
                bVar6 = puVar19->GetVisualMargin();
                local_44 = (float)(((unsigned int)bVar5 + arg2 + iVar8) - (unsigned int)bVar6);
                local_70 = (SpriteData*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)local_50);
                local_34 = (float)arg3;
                local_64 = (unsigned int)local_80;
                local_50 = (int)fVar20;
            }
        } else {
            if ((uint8_t)(bVar5 ^ 1 | arg5 < arg7) != 1) {
                return;
            }
            local_64 = (unsigned int)local_58->m_size;
            bVar5 = local_58->field_145;
            puVar19 = local_58->m_handleSprite;
            local_98._0_4_ = puVar19->GetVisualMargin();
            bVar6 = local_98.GetHeight();
            iVar8 = (unsigned int)bVar6 + arg5 + (unsigned int)bVar5 * -2;
            if (arg7 < 1) {
                local_70 = (SpriteData*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)iVar8);
                cVar4 = GetAutoHide(pSVar2);
                if (cVar4) {
                    LogAssert(
                        "!GetAutoHide()",
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/ScrollBar.cpp",
                        58, nullptr);
                }
                bVar5 = pSVar2->field_145;
                puVar19->GetVisualMargin();
                local_34 = (float)(((unsigned int)bVar5 + arg3) - (unsigned int)extraout_AH_00);
            } else {
                local_44 = (float)iVar8;
                local_34 = 1.0 / (float)arg7;
                fVar20 = (float)eastl::min<float>(1.0, (float)arg5 * local_34);
                fVar20 = fVar20 * local_44;
                bVar5 = pSVar2->field_145;
                local_70 = (SpriteData*)puVar19;
                iVar8 = eastl::min<graphics::GraphicsQuality>(iVar8 - (int)fVar20,
                                                              (int)((float)arg6 * local_44 * local_34));
                local_70->GetVisualMargin();
                local_34 = (float)(((unsigned int)bVar5 + arg3 + iVar8) - (unsigned int)extraout_AH);
                local_70 = (SpriteData*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)((int)fVar20));
            }
            local_44 = (float)arg2;
            local_68 = (unsigned int)local_80;
        }
        SpriteAtlasManager* spriteAtlasManager = rt7Core.GetTextureManager()->GetSpriteAtlasManager();
        auto puVar9 = pSVar2->LoadSpriteAtlasReference(*spriteAtlasManager, false);
        InteractionTarget IVar3 = local_38;
        if (puVar9 != DataStatus::READY) {
            return;
        }
        puVar19 = pSVar2->m_handleSprite;
        puVar9 = (uint8_t*)puVar19->LoadSpriteAtlasReference(*spriteAtlasManager, false);
        if (puVar9 != DataStatus::READY) {
            return;
        }
        auto psVar10 = pSVar2->GetDefaultValue();
        local_80 = (shared_ptr*)puVar19->GetDefaultValue();
        cVar4 = shared_ptr::operator_cast_to_bool(psVar10);
        if (!cVar4) {
            local_98 = shared_ptr();
        } else {
            pcVar11 =
                (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*psVar10).operator->();
            psVar12 = (shared_ptr<oldscape::dash3d::GroundDecor>*)pcVar11->second();
            local_98 = shared_ptr(psVar12);
        }
        shared_ptr* this_00 = local_80;
        cVar4 = shared_ptr::operator_cast_to_bool(local_80);
        if (!cVar4) {
            local_b8 = shared_ptr();
        } else {
            pcVar11 =
                (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_00).operator->();
            psVar12 = (shared_ptr<oldscape::dash3d::GroundDecor>*)pcVar11->second();
            local_b8 = shared_ptr(psVar12);
        }
        cVar4 = shared_ptr::operator_cast_to_bool(&local_98);
        if ((!cVar4) || (cVar4 = shared_ptr::operator_cast_to_bool(&local_b8), !cVar4)) {
            pLVar17 = logger::default_logger();
            pLVar17->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/ScrollBar.cpp",
                         103, "Invalid sprite atlas reference!");
            goto LAB_100677e69;
        }
        auto pMVar13 = local_98.operator->();
        SpriteData* local_c8 = (SpriteData*)puVar19;
        auto this_02 = pMVar13->GetOrigin();
        pMVar13 = (MapArea*)local_b8.operator->();
        auto local_c0 = pMVar13->GetOrigin();
        pSVar2 = local_58;
        InteractionTarget local_48 = (unsigned int)!arg8 * 3;
        InteractionTarget local_4c = local_48;
        if (arg8) {
            IVar1 = local_58->field_160;
            if (IVar1 - 3 < 2) {
                local_60 = (shared_ptr*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)local_48);
                local_4c = local_58->field_164;
            } else if (IVar1 == 1) {
                local_60 = (shared_ptr*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)local_48);
                local_48 = local_58->field_164;
            } else if (IVar1 == 2) {
                local_60 = (shared_ptr*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)local_58->field_164);
            } else {
                local_60 = (shared_ptr*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)local_48);
            }
        } else {
            local_60 = (shared_ptr*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)local_48);
        }
        local_38 = IVar3;
        SpriteAtlasReference* pSVar14 = (SpriteAtlasReference*)(*psVar10).operator->();
        long lVar15 = pSVar14->GetRenderMapping();
        auto pTVar16 = this_02->end();
        local_58 = (ScrollBar*)((((uint64_t)local_58._4_4_ << 32) | (uint32_t)((unsigned int)arg9)) | 4294967040);
        RT7Core* groundDecor = rt7Core;
        pSVar2->DrawSpriteSlice(rt7Core, arg2, arg3, local_38, arg5, arg9 | 4294967040, *((lVar15 + 88)), pTVar16, 0.0);
        if (pSVar2->field_145 != 0) {
            puVar19 = pSVar2->m_buttonSprite;
            puVar9 = (uint8_t*)puVar19->LoadSpriteAtlasReference(*spriteAtlasManager, false);
            if (puVar9 != DataStatus::READY)
                goto LAB_100677e69;
            psVar10 = (shared_ptr*)puVar19->GetDefaultValue();
            cVar4 = shared_ptr::operator_cast_to_bool(psVar10);
            if (!cVar4) {
                groundDecor = nullptr;
                local_a8 = shared_ptr();
            } else {
                pcVar11 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*psVar10)
                              .operator->();
                groundDecor = (RT7Core*)pcVar11->second();
                local_a8 = shared_ptr(groundDecor);
            }
            cVar4 = shared_ptr::operator_cast_to_bool(&local_a8);
            if (!cVar4) {
                pLVar17 = logger::default_logger();
                groundDecor = nullptr;
                pLVar17->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/ScrollBar.cpp", 170,
                    "Invalid sprite atlas reference!");
            } else {
                pMVar13 = (MapArea*)local_a8.operator->();
                local_60 = (shared_ptr*)pMVar13->GetOrigin();
                if (shared_ptr::operator_cast_to_bool(local_60) != '\0') {
                    pSVar14 = (SpriteAtlasReference*)(*psVar10).operator->();
                    iVar8 = pSVar14->GetRenderMapping();
                    GetVisualUV((ScrollBar*)local_e8, (Rect<float>*)groundDecor, iVar8 + 88);
                    pSVar14 = (SpriteAtlasReference*)(*psVar10).operator->();
                    iVar8 = pSVar14->GetRenderMapping();
                    GetVisualUV(&local_d8, (Rect<float>*)groundDecor, iVar8 + 88);
                    pTVar16 = (Texture*)local_60->end();
                    puVar19->DrawSpriteSlice(rt7Core, arg2, arg3, local_64, local_68, (unsigned int)local_58, *local_e8,
                                             pTVar16, 0.0);
                    arg4_00 = local_64;
                    uVar18 = local_68;
                    local_38 = (local_38 + arg2) - local_64;
                    iVar8 = (arg5 + arg3) - local_68;
                    pTVar16 = (Texture*)local_60->end();
                    groundDecor = rt7Core;
                    puVar19->DrawSpriteSlice(rt7Core, local_38, iVar8, arg4_00, uVar18, (unsigned int)local_58,
                                             local_d8, pTVar16, 3.1415927f);
                }
            }
            if (!cVar4)
                goto LAB_100677e69;
        }
        pSVar14 = (SpriteAtlasReference*)(*local_80).operator->();
        iVar8 = pSVar14->GetRenderMapping();
        GetVisualUV((ScrollBar*)&local_a8, (Rect<float>*)groundDecor, iVar8 + 88);
        pTVar16 = (Texture*)local_c0->end();
        local_c8->DrawSpriteSlice(rt7Core, (int)local_44, (int)local_34, local_50, (int)local_70._0_4_,
                                  (unsigned int)local_58, local_a8, pTVar16, 0.0);
    LAB_100677e69:
    }

    // 0x100678350
    ScrollBar* ScrollBar::GetVisualUV(const math::Rect<float>& rect, ScrollBar::VisualState visualState) const {
        VisualState in_ECX;
        uint32_t in_register_00000014;

        new (this) math::Float4(*((Rect<float>*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)visualState)));
        auto pfVar3 = qw();
        float fVar1 = *pfVar3;
        pfVar3 = (float*)y();
        float fVar2 = *pfVar3;
        float fVar4 = (float)GetGraphicSliceOffset(in_ECX);
        float fVar5 = (float)GetGraphicSliceHeightPercent();
        pfVar3 = (float*)y();
        *pfVar3 = fVar4 * fVar1 + fVar2;
        SetVerticalFov(fVar5 * fVar1);
        return this;
    }

    // 0x1006783e0
    uint64_t ScrollBar::ProcessInputImpl(const MouseState& mouseState, int arg2, int arg3, int arg4, int arg5,
                                         const math::Rect<int>& rect, int arg7, int arg8, int arg9) {
        uint8_t bVar3;
        uint8_t bVar4;
        uint8_t extraout_AH;
        unsigned int uVar5;
        uint8_t extraout_AH_00;
        int iVar7;
        unsigned int uVar8;
        unsigned int* arg2_00;
        int iVar9;
        bool* arg1;
        float fVar10;
        float fVar11;
        int local_7c;
        uint64_t local_70;
        float local_68;
        float local_64;
        unsigned int local_60;
        unsigned int local_5c;
        unsigned int local_58;
        int local_54;
        int local_50;
        unsigned int local_4c;
        float local_48;
        float local_44;
        float local_40;
        unsigned int local_3c;
        int local_38;
        unsigned int local_34;

        MouseState* local_78 = mouseState;
        bool cVar2 = GetVisible();
        int iVar6 = arg8;
        if (!cVar2) {
        LAB_1006785f0:
            local_34 = local_34 & 4294967040;
            arg1 = (bool*)&local_34;
        } else {
            local_58 = (unsigned int)field_145;
            bVar4 = m_size;
            local_68 = (float)arg2;
            local_64 = (float)arg3;
            bVar3 = GetAutoHide();
            if (arg5 < arg4) {
                if ((bVar3 ^ 1) == 0 && iVar6 <= arg4)
                    goto LAB_1006785f0;
                local_4c = (unsigned int)bVar4;
                local_44 = (float)(unsigned int)m_size;
                bVar4 = field_145;
                local_38 = arg5;
                bVar3 = m_handleSprite->GetVisualMargin();
                uVar5 = (unsigned int)bVar3 + arg4 + (unsigned int)bVar4 * -2;
                local_60 = uVar5;
                if (iVar6 < 1) {
                    cVar2 = GetAutoHide();
                    if (cVar2) {
                        LogAssert("!GetAutoHide()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/"
                                  "ScrollBar.cpp",
                                  252, nullptr);
                    }
                    bVar4 = field_145;
                    bVar3 = m_handleSprite->GetVisualMargin();
                    local_40 = (float)((unsigned int)bVar4 - (unsigned int)bVar3);
                    uVar5 = local_60;
                } else {
                    local_40 = (float)(int)uVar5;
                    local_48 = 1.0 / (float)iVar6;
                    fVar10 = (float)eastl::min<float>(1.0, (float)arg4 * local_48);
                    fVar10 = fVar10 * local_40;
                    bVar4 = field_145;
                    iVar6 = eastl::min<graphics::GraphicsQuality>(uVar5 - (int)fVar10,
                                                                  (int)((float)arg7 * local_40 * local_48));
                    local_40 = (float)(iVar6 + (unsigned int)bVar4);
                    uVar5 = (int)fVar10;
                }
                local_54 = 0;
                local_48 = (float)local_58;
                arg5 = local_38;
                local_5c = local_4c;
                local_50 = arg4;
            } else {
                if ((bVar3 ^ 1) == 0 && iVar6 <= arg5)
                    goto LAB_1006785f0;
                local_48 = (float)(unsigned int)m_size;
                uVar8 = arg5 + (unsigned int)field_145 * -2;
                uVar5 = (unsigned int)bVar4;
                local_60 = uVar8;
                local_50 = arg5;
                if (iVar6 < 1) {
                    cVar2 = GetAutoHide();
                    if (cVar2) {
                        LogAssert("!GetAutoHide()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/"
                                  "ScrollBar.cpp",
                                  228, nullptr);
                    }
                    bVar4 = field_145;
                    m_handleSprite->GetVisualMargin();
                    local_54 = (unsigned int)bVar4 - (unsigned int)extraout_AH_00;
                    local_40 = 0.0;
                    local_5c = local_60;
                    local_44 = (float)local_58;
                } else {
                    local_40 = (float)(int)uVar8;
                    local_44 = 1.0 / (float)iVar6;
                    fVar10 = (float)eastl::min<float>(1.0, (float)arg5 * local_44);
                    local_5c = (unsigned int)(fVar10 * local_40);
                    bVar4 = field_145;
                    local_4c = uVar5;
                    local_38 = arg4;
                    iVar6 = eastl::min<graphics::GraphicsQuality>(uVar8 - local_5c,
                                                                  (int)((float)arg7 * local_40 * local_44));
                    arg4 = local_38;
                    uVar5 = local_4c;
                    m_handleSprite->GetVisualMargin();
                    local_54 = (iVar6 + (unsigned int)bVar4) - (unsigned int)extraout_AH;
                    local_40 = 0.0;
                    local_44 = (float)local_58;
                }
            }
            bVar4 = GetInteractionHeld();
            local_34 = arg7;
            bVar3 = local_78[1] == (MouseState)0 & bVar4;
            iVar6 = arg4;
            iVar7 = arg5;
            local_4c = uVar5;
            if ((bVar4 == 0) || (bVar3 != 0)) {
            } else if (field_160 - 3 < 2) {
                local_38 = (((uint32_t)local_38._1_3_ << 8) | (uint8_t)bVar4);
                local_68 = (float)rect.GetX();
                local_64 = (float)rect.GetZ();
                iVar6 = rect.GetPos();
                iVar7 = rect.GetLevel();
                bVar4 = (uint8_t)local_38;
            }
            iVar9 = arg8;
            fVar10 = *(float*)(local_78 + 4) - (float)(int)local_68;
            if ((((fVar10 < 0.0) || (fVar11 = *(float*)(local_78 + 8) - (float)(int)local_64, fVar11 < 0.0)) ||
                 ((float)iVar6 <= fVar10)) ||
                ((float)iVar7 <= fVar11)) {
                if (bVar3 != 0) {
                    ClearInteractionState();
                    goto LAB_100678787;
                }
                if (field_164 == 1) {
                    field_160 = 0;
                }
                local_3c = local_3c & 4294967040;
            } else {
                if (bVar3 == 0) {
                    if (((m_size == 0) || ((float)(int)local_48 < fVar10)) || ((float)(int)local_44 < fVar11)) {
                        local_38 = arg4;
                        if (((m_size == 0) || (fVar10 < (float)(iVar6 - (int)local_48))) ||
                            (fVar11 < (float)(iVar7 - (int)local_44))) {
                            if (bVar4 == 0) {
                            LAB_100678942:
                                if (*local_78 == (MouseState)0) {
                                    field_160 = 4;
                                    field_164 = 1;
                                } else {
                                    if (((fVar10 < (float)(int)local_40) || (fVar11 < (float)local_54)) ||
                                        ((float)(int)((int)local_40 + local_4c) < fVar10)) {
                                        field_146 = eastl::bitset<3ul, unsigned char>::set(2, true);
                                        field_164 = 2;
                                    } else {
                                        local_68 = (float)(int)(local_54 + local_5c);
                                        local_78 = (MouseState*)(((uint64_t)local_78._4_4_ << 32) | (uint32_t)fVar11);
                                        local_64 = fVar10;
                                        field_146 = eastl::bitset<3ul, unsigned char>::set(2, true);
                                        field_164 = 2;
                                        if (local_78._0_4_ <= local_68) {
                                            field_160 = 3;
                                            if (arg5 < local_38) {
                                                fVar10 = local_64;
                                            } else {
                                                fVar10 = local_78._0_4_;
                                            }
                                            field_148 = (int)fVar10 - (int)local_44;
                                            field_152 = arg7;
                                            goto LAB_100678a73;
                                        }
                                    }
                                    field_160 = 4;
                                    field_148 = 0;
                                    field_152 = 0;
                                }
                            } else if (field_160 - 3 < 2) {
                                if (bVar4 == 0)
                                    goto LAB_100678942;
                                if (arg4 <= arg5) {
                                    fVar10 = fVar11;
                                }
                                iVar6 = 0;
                                if (field_160 == 4) {
                                    iVar6 = -(arg9 / 2);
                                }
                                local_3c = (int)(((fVar10 - (float)(int)(local_58 + field_148)) * (float)arg8) /
                                                 (float)(int)local_60) +
                                           iVar6 + field_152;
                                local_7c = arg8 - local_50;
                                local_34 = math::Clamp<int>(local_3c, 0, local_7c);
                            }
                        } else {
                            cVar2 = UpdateButtonState(2, (bool)*local_78);
                            if (cVar2) {
                                local_34 = eastl::min<graphics::GraphicsQuality>(iVar9 - local_50, arg9 + arg7);
                            }
                        }
                    } else {
                        cVar2 = UpdateButtonState(1, (bool)*local_78);
                        iVar9 = arg8;
                        if (cVar2) {
                            local_34 = eastl::max<int>(0, arg7 - arg9);
                        }
                    }
                LAB_100678a73:
                    local_3c = (((uint32_t)local_3c._1_3_ << 8) | (uint8_t)(iVar9 != 0));
                    arg1 = (bool*)&local_3c;
                    arg2_00 = &local_34;
                    goto LAB_100678600;
                }
                field_146 = eastl::bitset<3ul, unsigned char>::reset(2);
            LAB_100678787:
                local_3c = (((uint32_t)local_3c._1_3_ << 8) | (uint8_t)1);
            }
            arg1 = (bool*)&local_3c;
        }
        arg2_00 = (unsigned int*)&arg7;
    LAB_100678600:
        local_70.pair<bool, unsigned int, void>(*arg1, *arg2_00);
        return local_70;
    }

    // 0x100678ac0
    bool ScrollBar::UpdateButtonState(ScrollBar::InteractionTarget interactionTarget, bool arg2) {
        int iVar2;
        int iVar3;
        bool bVar4;

        bool cVar1 = GetInteractionHeld();
        if ((!cVar1) || (bVar4 = true, field_160 == interactionTarget)) {
            field_160 = interactionTarget;
            if (arg2) {
                field_146 = eastl::bitset<3ul, unsigned char>::set(2, true);
                field_156 = 20;
                field_164 = 2;
                bVar4 = true;
            } else {
                cVar1 = GetInteractionHeld();
                if (!cVar1) {
                    field_164 = 1;
                    bVar4 = false;
                } else {
                    iVar2 = field_156 - 1;
                    bVar4 = iVar2 == 0;
                    iVar3 = 5;
                    if (!bVar4) {
                        iVar3 = iVar2;
                    }
                    field_156 = iVar3;
                }
            }
        }
        return bVar4;
    }

} // namespace jag::ui
