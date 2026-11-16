// libs/game/runetek5/scene/entities/HitmarksAndHeadbars.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "HitmarksAndHeadbars.h"
#include "libs/hal/render/shaders/Shader.h"

namespace jag {
    // 0x1000b9950: HitmarksAndHeadbars::GetHitmarks() has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x100428320
    HitmarksAndHeadbars::HitmarksAndHeadbars(const game::ConfigProvider& configProvider)
        : field_0(0), field_4(0), field_8(0), field_12(0) {
        auto pCVar1 = configProvider.GetGraphicsDefaults();
        unsigned int uVar3 = pCVar1->GetX();
        new (&field_16) Array<Hitmark>((unsigned long)uVar3);
        auto pMVar2 = configProvider.GetGraphicsDefaults();
        uVar3 = pMVar2->GetSpriteID();
        new (&field_40) eastl::vector<eastl::fixed_list<Headbar, 4ul>>((unsigned long)uVar3, local_38);
        pCVar1 = (CoordMapSquare*)configProvider.GetGraphicsDefaults();
        int iVar4 = pCVar1->GetX();
        field_4 = iVar4;
        field_16.set_max_size((long)iVar4, 0);
        pMVar2 = (MSIType*)configProvider.GetGraphicsDefaults();
        uint32_t uVar5 = pMVar2->GetSpriteID();
        field_8 = uVar5;
        pMVar2 = (MSIType*)configProvider.GetGraphicsDefaults();
        uVar5 = pMVar2->GetTint();
        field_12 = uVar5;
    }

    // 0x1004285e0
    void HitmarksAndHeadbars::AddHitmark(const game::ConfigProvider& configProvider, int arg2, int arg3, int arg4,
                                         int arg5, unsigned int arg6, unsigned int arg7) {
        bool bVar1;
        bool bVar2;
        bool bVar3;
        bool cVar4;
        uint32_t uVar5;
        unsigned int uVar6;
        ClientCompositeZone* pCVar7;
        shared_ptr* this_01;
        HitmarkType* pHVar8;
        CommandLine* pCVar9;
        CoordMapSquare* pCVar10;
        uint64_t* puVar11;
        int iVar13;
        unsigned long uVar14;
        HitmarksAndHeadbars* pHVar15;
        int iVar16;
        int iVar17;
        ShaderPrecisionProfile local_70;

        uint8_t* this_00 = &field_16;
        local_70._24_4_ = arg5;
        ConfigProvider* local_50 = configProvider;
        HitmarksAndHeadbars* local_38 = this;
        if (field_4 < 1) {
            bVar3 = true;
            bVar1 = true;
        } else {
            bVar2 = true;
            bVar1 = true;
            uVar14 = 0;
            bVar3 = true;
            do {
                pCVar7 = (ClientCompositeZone*)(*this_00)[uVar14];
                cVar4 = pCVar7->IsValid();
                if (!cVar4) {
                    bVar3 = false;
                } else {
                    pCVar9 = (CommandLine*)(*this_00)[uVar14];
                    uVar6 = pCVar9->GetPos();
                    if (uVar6 <= arg6) {
                        bVar3 = false;
                    }
                    bVar1 = bVar2;
                    if (arg6 < uVar6) {
                        bVar1 = false;
                        bVar2 = false;
                    }
                }
                uVar14 = uVar14 + 1;
            } while ((long)uVar14 < (long)local_38->field_4);
        }
        int local_40 = -1;
        if (arg2 < 0) {
            uVar5 = 0;
            pHVar15 = local_38;
        } else {
            this_01 = (shared_ptr*)local_50->GetConfig<game::HitmarkType>(arg2, nullptr);
            cVar4 = shared_ptr::operator_cast_to_bool(this_01);
            pHVar15 = local_38;
            uVar5 = 70;
            if (cVar4) {
                pHVar8 = (HitmarkType*)(*this_01).operator->();
                local_40 = pHVar8->GetOverride();
                pHVar8 = (HitmarkType*)(*this_01).operator->();
                uVar5 = pHVar8->GetDuration();
            }
        }
        int iVar12 = local_40;
        local_50 = (ConfigProvider*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)uVar5);
        if (!bVar3) {
            if (bVar1) {
                pHVar15->field_0 = 0;
            }
            iVar12 = pHVar15->field_4;
            iVar17 = -1;
            if (0 < iVar12) {
                iVar16 = 0;
                do {
                    iVar13 = pHVar15->field_0;
                    pHVar15->field_0 = (iVar13 + 1) % iVar12;
                    pCVar7 = (ClientCompositeZone*)(*this_00)[(long)iVar13];
                    cVar4 = pCVar7->IsValid();
                    if (!cVar4) {
                        bVar1 = false;
                        iVar17 = iVar13;
                    } else {
                        pCVar9 = (CommandLine*)(*this_00)[(long)iVar13];
                        uVar6 = pCVar9->GetPos();
                        bVar1 = arg6 < uVar6;
                        if (arg6 < uVar6) {
                            iVar13 = iVar17;
                        }
                        iVar17 = iVar13;
                    }
                    if (!bVar1)
                        break;
                    iVar16 = iVar16 + 1;
                    iVar12 = local_38->field_4;
                    pHVar15 = local_38;
                } while (iVar16 < iVar12);
            }
            goto LAB_10042887b;
        }
        if (local_40 == -1) {
            return;
        }
        if (local_40 == 0) {
            pCVar9 = (CommandLine*)(*this_00)[0];
            uVar5 = pCVar9->GetPos();
        LAB_1004287cb:
            local_38 = (HitmarksAndHeadbars*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)uVar5);
        } else {
            local_38 = (HitmarksAndHeadbars*)((unsigned long)local_38 & 18446744069414584320);
            if (local_40 == 1) {
                pCVar10 = (CoordMapSquare*)(*this_00)[0];
                uVar5 = pCVar10->GetZ();
                goto LAB_1004287cb;
            }
        }
        iVar17 = 0;
        if (1 < pHVar15->field_4) {
            iVar17 = 0;
            uVar14 = 1;
            do {
                if (iVar12 == 0) {
                    pCVar9 = (CommandLine*)(*this_00)[uVar14];
                    iVar16 = pCVar9->GetPos();
                    if (iVar16 < (int)local_38) {
                        pCVar9 = (CommandLine*)(*this_00)[uVar14];
                        uVar5 = pCVar9->GetPos();
                    LAB_1004287f0:
                        local_38 = (HitmarksAndHeadbars*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)uVar5);
                        iVar17 = (int)uVar14;
                    }
                } else if (iVar12 == 1) {
                    pCVar10 = (CoordMapSquare*)(*this_00)[uVar14];
                    iVar16 = pCVar10->GetZ();
                    if (iVar16 < (int)local_38) {
                        pCVar10 = (CoordMapSquare*)(*this_00)[uVar14];
                        uVar5 = pCVar10->GetZ();
                        goto LAB_1004287f0;
                    }
                }
                uVar14 = uVar14 + 1;
            } while ((long)uVar14 < (long)pHVar15->field_4);
        }
        if ((iVar12 == 1) && (arg3 <= (int)local_38)) {
            return;
        }
    LAB_10042887b:
        if (-1 < iVar17) {
            local_70 = render::ShaderPrecisionProfile(arg2, arg3, arg6 + arg7 + (int)local_50, arg4, local_70._24_4_,
                                                      (int)local_50);
            puVar11 = (uint64_t*)(*this_00)[(long)iVar17];
            *puVar11 = local_70._0_8_;
            puVar11[1] = local_70._8_8_;
            puVar11[2] = local_70._16_8_;
        }
    }

    // 0x100428a60
    void HitmarksAndHeadbars::AddQueuedHeadbar(eastl::fixed_list<Headbar, 4ul>& fixed_list, Headbar&& headbar) {
        int iVar4;
        unsigned int uVar5;
        unsigned int uVar6;
        unsigned long uVar7;
        Headbar* headbar1;
        ListIterator<Headbar, Headbar const*, Headbar const&>* local_68;
        unsigned long local_58;

        auto local_48 = fixed_list.end();
        auto local_70 = fixed_list.end();
        auto local_38 = fixed_list.begin();
        uint8_t bVar1 = local_38 != local_70;
        int iVar3 = 0;
        if (bVar1 != 0) {
            uVar7 = 1;
            do {
                local_58 = uVar7;
                headbar1 = (Headbar*)*local_38;
                iVar3 = headbar1->GetStatus();
                iVar4 = headbar.GetStatus();
                if (iVar3 == iVar4) {
                    eastl::swap<Headbar>(*headbar1, headbar);
                } else {
                    uVar5 = headbar1->GetStatus();
                    uVar6 = headbar.GetStatus();
                    if (uVar5 <= uVar6) {
                        local_48 = local_38;
                    }
                }
                if (iVar3 == iVar4) {
                    iVar3 = (int)local_58;
                    break;
                }
                ++local_38;
                bVar1 = local_38 != local_70;
                iVar3 = (int)local_58;
                uVar7 = (unsigned long)(iVar3 + 1);
            } while (bVar1 != 0);
        }
        if ((bVar1 & 1) == 0) {
            local_38 = fixed_list.end();
            if (local_48 != local_38 == '\0') {
                new (&local_68) eastl::ListIterator(&local_48);
                local_38 = fixed_list.insert(local_68, headbar);
                iVar3 = fixed_list.size();
                if ((int)field_8 < iVar3) {
                    fixed_list.pop_front();
                }
            } else if (iVar3 < (int)field_8) {
                fixed_list.push_front(headbar);
            }
        }
    }

    // 0x100428d40
    void HitmarksAndHeadbars::RemoveHeadbarQueue(int arg1) {
        uint8_t* this_00 = &field_40;
        unsigned long arg1_00 = this_00->size();
        long lVar1 = this_00->HeapBeginPtr();
        this_00->erase((fixed_list<Headbar, _4ul>*)((long)arg1 * 440 + lVar1));
        this_00->resize(arg1_00);
    }

    // 0x100428e80
    void HitmarksAndHeadbars::ClearHeadbar(int arg1) {
        Layout* this_01;
        shared_ptr<game::HeadbarType>* this_02;
        unsigned long uVar2;
        list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true>>* this_04;
        unsigned long arg1_00;

        uint8_t* this_00 = &field_40;
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                this_04 = (list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true>>*)(*this_00)[arg1_00];
                if (this_04->empty() == '\0') {
                    this_01 = (Layout*)this_04->front();
                    this_02 = (shared_ptr<game::HeadbarType>*)this_01->SSOBeginPtr();
                    if (((GameToken*)(*this_02).operator->())->GetStatus() == arg1) {
                        RemoveHeadbarQueue((int)arg1_00);
                        return;
                    }
                }
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar2 = this_00->size();
            } while (arg1_00 < uVar2);
        }
    }

    // 0x100429000
    bool HitmarksAndHeadbars::HasHeadbars(unsigned int arg1) const {
        bool bVar4 = false;
        list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true>>* plVar3 = &field_40[0];
        if (plVar3->empty() == '\0') {
            plVar3 = &field_40[0];
            bVar4 = ((GameToken*)plVar3->front())->GetStatus() <= arg1;
        }
        return bVar4;
    }

    // 0x1004290b0
    void HitmarksAndHeadbars::AddHeadbar(const game::ConfigProvider& configProvider, int arg2, int arg3,
                                         unsigned int arg4, int arg5, int arg6, int arg7, int arg8, unsigned int arg9) {
        uint64_t this_00;
        int iVar2;
        int iVar3;
        shared_ptr* this_01;
        MSIType* pMVar5;
        long lVar6;
        list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true>>* plVar7;
        Layout* this_02;
        shared_ptr<game::HeadbarType>* this_03;
        fixed_list<Headbar, _4ul>* pfVar8;
        unsigned long uVar9;
        Logger* this_05;
        fixed_list<Headbar, _4ul>* fixed_list2;
        unsigned long uVar10;
        char* str2;
        int iVar11;
        vector<eastl::fixed_list<Headbar, 4ul>>* this_06;
        unsigned int uVar12;
        uint8_t local_98[64];
        HitmarksAndHeadbars* local_58;
        int local_48;
        uint32_t local_44;
        vector<eastl::fixed_list<Headbar, 4ul>>* local_40;
        int local_38;
        int local_34;

        local_40 = (vector<eastl::fixed_list<Headbar, 4ul>>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)arg5);
        local_98._56_8_ = configProvider.GetConfig<game::HeadbarType>(arg2, nullptr);
        bool cVar1 = local_98._56_8_->operator_cast_to_bool();
        if (!cVar1) {
            this_05 = logger::default_logger();
            str2 = "Unable to find headbar type with ID %d";
            iVar11 = 231;
            arg3 = arg2;
        LAB_100429322:
            this_05->Log(true, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                         "entities/HitmarksAndHeadbars.cpp",
                         iVar11, str2, arg3);
        } else {
            local_58 = this;
            if (arg3 < 0) {
                this_01 = (shared_ptr*)&game::HeadbarType::NullHeadbarType;
            } else {
                this_01 = (shared_ptr*)configProvider.GetConfig<game::HeadbarType>(arg3, nullptr);
                cVar1 = shared_ptr::operator_cast_to_bool(this_01);
                if (!cVar1) {
                    this_05 = logger::default_logger();
                    str2 = "Unable to find headbar overlay type with ID %d";
                    iVar11 = 237;
                    goto LAB_100429322;
                }
            }
            this_00 = local_98._56_8_;
            uVar10 = (unsigned long)arg4;
            new (local_98) Headbar(*local_98._56_8_, *this_01, arg4, (unsigned int)local_40, arg6, arg7, arg8, arg9);
            pMVar5 = (MSIType*)(*this_00).operator->();
            local_48 = pMVar5->GetTint();
            this_06 = (vector<eastl::fixed_list<Headbar, 4ul>>*)&local_58->field_40;
            lVar6 = this_06->size();
            local_44 = (uint32_t)(((uint64_t)((int64_t)(uVar10 >> 8)) << 8) | (uint8_t)1);
            local_40 = this_06;
            if (lVar6 == 0) {
                local_38 = 0;
                iVar11 = -1;
                local_34 = -1;
            } else {
                local_34 = -1;
                uVar10 = 0;
                uVar12 = 1;
                local_38 = 0;
                iVar11 = -1;
                do {
                    plVar7 = (list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true>>*)(*this_06)[uVar10];
                    cVar1 = plVar7->empty();
                    if (cVar1)
                        break;
                    plVar7 = (list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true>>*)(*this_06)[uVar10];
                    this_02 = (Layout*)plVar7->front();
                    this_03 = (shared_ptr<game::HeadbarType>*)this_02->SSOBeginPtr();
                    iVar2 = ((GameToken*)(*this_03).operator->())->GetStatus();
                    if (iVar2 == arg2) {
                        pfVar8 = (fixed_list<Headbar, _4ul>*)(*local_40)[uVar10];
                        AddQueuedHeadbar(local_58, pfVar8, (Headbar*)local_98);
                    } else {
                        pMVar5 = (MSIType*)(*local_98._56_8_).operator->();
                        iVar3 = pMVar5->GetSpriteID();
                        pMVar5 = (MSIType*)(*this_03).operator->();
                        if (pMVar5->GetSpriteID() < iVar3) {
                            iVar11 = uVar12 - 1;
                        }
                        pMVar5 = (MSIType*)(*local_98._56_8_).operator->();
                        local_38 = local_38 + 1;
                        iVar3 = pMVar5->GetTint();
                        if (local_48 < iVar3) {
                            pMVar5 = (MSIType*)(*local_98._56_8_).operator->();
                            local_48 = pMVar5->GetTint();
                            local_34 = uVar12 - 1;
                        }
                    }
                    this_06 = local_40;
                    if (iVar2 == arg2) {
                        local_44 = 0;
                        goto LAB_10042941e;
                    }
                    uVar10 = (unsigned long)uVar12;
                    uVar9 = local_40->size();
                    uVar12 = uVar12 + 1;
                } while (uVar10 < uVar9);
            }
            if (((char)local_44 != '\0') && ((-1 < local_34 || (local_38 < (int)local_58->field_12)))) {
                if (local_38 == local_58->field_12) {
                    RemoveHeadbarQueue(local_58, local_34);
                    iVar11 = iVar11 - (unsigned int)(local_34 <= iVar11);
                }
                iVar2 = this_06->size();
                if (iVar11 < iVar2 - 2) {
                    uVar10 = (unsigned long)(iVar2 - 2);
                    do {
                        pfVar8 = (fixed_list<Headbar, _4ul>*)(*this_06)[uVar10 + 1];
                        fixed_list2 = (fixed_list<Headbar, _4ul>*)(*local_40)[uVar10];
                        eastl::swap<Headbar, 4ul, true>(*pfVar8, *fixed_list2);
                        uVar10 = uVar10 - 1;
                        this_06 = local_40;
                    } while ((long)iVar11 < (long)uVar10);
                }
                plVar7 = (list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true>>*)(*this_06)[(
                    long)(iVar11 + 1)];
                plVar7->clear();
                plVar7 = (list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true>>*)(*this_06)[(
                    long)(iVar11 + 1)];
                plVar7->push_back(*local_98);
            }
        LAB_10042941e:
        }
    }

    // 0x100429630
    void HitmarksAndHeadbars::UpdateHeadbarQueues(unsigned int arg1) {
        bool bVar1;
        bool cVar2;
        unsigned int uVar4;
        int iVar5;
        list<console::Line>* this_01;
        Material* this_03;
        shared_ptr<game::HeadbarType>* this_04;
        unsigned long arg1_00;
        unsigned long uVar6;
        ReturnValue local_90;
        ListIterator<Headbar, Headbar const*, Headbar const&>* local_88;
        ListIterator<Headbar, Headbar const*, Headbar const&>* local_80;
        ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                     shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                     shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>
            local_78[8];
        ReturnValue local_68;
        ReturnValue local_60;
        unsigned long local_50;
        list<console::Line>* local_48;
        int local_3c;
        ReturnValue local_38;

        vector<eastl::fixed_list<Headbar, 4ul>>* local_58 = (vector<eastl::fixed_list<Headbar, 4ul>>*)&field_40;
        int iVar3 = local_58->size();
        if (0 < iVar3) {
            uVar6 = (long)iVar3;
            do {
                arg1_00 = uVar6 - 1;
                cVar2 = ((list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true>>*)(*local_58)[arg1_00])
                            ->empty();
                if (!cVar2) {
                    local_50 = arg1_00;
                    this_01 = (list<console::Line>*)(*local_58)[arg1_00];
                    local_68 = this_01->end();
                    local_38 = this_01->end();
                    local_90 = this_01->begin();
                    while (cVar2 = local_90 != local_68, cVar2) {
                        uVar4 = (*local_90)->GetStatus();
                        if (arg1 < uVar4)
                            break;
                        local_38 = local_90;
                        ++local_90;
                    }
                    cVar2 = local_38 != local_68;
                    if (cVar2) {
                        local_48 = this_01;
                        this_03 = (Material*)*local_38;
                        local_3c = this_03->GetStatus();
                        iVar3 = this_03->GetDiffuseAlphaMapSize();
                        iVar3 = iVar3 + local_3c;
                        this_04 = (shared_ptr<game::HeadbarType>*)this_03->SSOBeginPtr();
                        iVar5 = ((HeadbarType*)(*this_04).operator->())->GetStickTime();
                        if ((unsigned int)(iVar5 + iVar3) < arg1) {
                            new (&local_90) eastl::ListIterator(&local_38);
                            local_60++;
                            new (&local_88) eastl::ListIterator(&local_90);
                            eastl::list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true>>::erase(
                                &local_60,
                                (list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true>>*)local_48,
                                local_88);
                        }
                        this_01 = local_48;
                        local_90 = local_48->begin();
                        cVar2 = local_38 != local_90;
                        if (cVar2) {
                            local_60 = this_01->end();
                            cVar2 = local_38 != local_60;
                            if (cVar2) {
                                new (&local_80) eastl::ListIterator(&local_38);
                                local_90 = this_01->end();
                                new (local_78) eastl::ListIterator(&local_90);
                                local_60.erase(this_01, local_80);
                            }
                        }
                    }
                    cVar2 = this_01->empty();
                    if (cVar2) {
                        RemoveHeadbarQueue((int)local_50);
                    }
                    arg1_00 = local_50;
                }
                bVar1 = 1 < (long)uVar6;
                uVar6 = arg1_00;
            } while (bVar1);
        }
    }

} // namespace jag

namespace jag::render {
    // 0x100428a40: ShaderPrecisionProfile::ShaderPrecisionProfile(ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision) has the same machine code as Hitmark::Hitmark(int, int, unsigned int, int, int, int)

} // namespace jag::render
