// libs/game/runetek5/scene/entities/HitmarksAndHeadbars.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "HitmarksAndHeadbars.h"
#include "libs/hal/render/shaders/Shader.h"

namespace jag {
    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    HitmarksAndHeadbars::GetHitmarks();

    // 0x100428320, 240 bytes, base-object constructor, placed by class name and debug map
    // HitmarksAndHeadbars::HitmarksAndHeadbars(game::ConfigProvider const&)
    void HitmarksAndHeadbars::HitmarksAndHeadbars(ConfigProvider* param_1) {
        CoordMapSquare* pCVar1;
        MSIType* pMVar2;
        uint uVar3;
        int iVar4;
        undefined4 uVar5;
        allocator local_38[8];

        field_0 = 0;
        field_4 = 0;
        field_8 = 0;
        field_12 = 0;
        pCVar1 = (CoordMapSquare*)param_1->GetGraphicsDefaults();
        uVar3 = pCVar1->GetX();
        new (&field_16, (ulong)uVar3) Array<Hitmark, eastl::allocator>();
        pMVar2 = (MSIType*)param_1->GetGraphicsDefaults();
        uVar3 = pMVar2->GetSpriteID();
        eastl::allocator::allocator(local_38, "EASTL vector");
        new (&field_40, (ulong)uVar3, local_38)
            eastl::vector<eastl::fixed_list<Headbar, 4ul, true, eastl::allocator>, eastl::allocator>();
        pCVar1 = (CoordMapSquare*)param_1->GetGraphicsDefaults();
        iVar4 = pCVar1->GetX();
        field_4 = iVar4;
        (&field_16, (long)iVar4, 0)->set_max_size();
        pMVar2 = (MSIType*)param_1->GetGraphicsDefaults();
        uVar5 = pMVar2->GetSpriteID();
        field_8 = uVar5;
        pMVar2 = (MSIType*)param_1->GetGraphicsDefaults();
        uVar5 = pMVar2->GetTint();
        field_12 = uVar5;
    }

    // 0x1004285d0, 16 bytes, complete-object constructor, placed by class name and debug map
    // HitmarksAndHeadbars::HitmarksAndHeadbars(game::ConfigProvider const&): jumps straight to the base-object constructor

    // 0x1004285e0, 752 bytes, placed by class name and debug map
    // HitmarksAndHeadbars::AddHitmark(game::ConfigProvider const&, int, int, int, int, unsigned int, unsigned int)
    void HitmarksAndHeadbars::AddHitmark(ConfigProvider* param_1, int param_2, int param_3, int param_4, int param_5,
                                         uint param_6, uint param_7) {
        undefined1* this_00;
        bool bVar1;
        bool bVar2;
        char cVar3;
        bool bVar4;
        undefined4 uVar5;
        uint uVar6;
        ClientCompositeZone* pCVar7;
        shared_ptr* this_01;
        HitmarkType* pHVar8;
        CommandLine* pCVar9;
        CoordMapSquare* pCVar10;
        undefined8* puVar11;
        int iVar12;
        int iVar13;
        ulong uVar14;
        HitmarksAndHeadbars* pHVar15;
        int iVar16;
        int iVar17;
        ShaderPrecisionProfile local_70;
        ConfigProvider* local_50;
        int local_40;
        HitmarksAndHeadbars* local_38;

        this_00 = &field_16;
        local_70._24_4_ = param_5;
        local_50 = param_1;
        local_38 = this;
        if (field_4 < 1) {
            bVar2 = true;
            bVar1 = true;
        } else {
            bVar4 = true;
            bVar1 = true;
            uVar14 = 0;
            bVar2 = true;
            do {
                pCVar7 = (ClientCompositeZone*)Array<Hitmark, eastl::allocator>::operator[](
                    (Array<Hitmark, eastl::allocator>*)this_00, uVar14);
                cVar3 = pCVar7->IsValid();
                if (cVar3 == '\0') {
                    bVar2 = false;
                } else {
                    pCVar9 = (CommandLine*)Array<Hitmark, eastl::allocator>::operator[](
                        (Array<Hitmark, eastl::allocator>*)this_00, uVar14);
                    uVar6 = pCVar9->GetPos();
                    if (uVar6 <= param_6) {
                        bVar2 = false;
                    }
                    bVar1 = bVar4;
                    if (param_6 < uVar6) {
                        bVar1 = false;
                        bVar4 = false;
                    }
                }
                uVar14 = uVar14 + 1;
            } while ((long)uVar14 < (long)local_38->field_4);
        }
        local_40 = -1;
        if (param_2 < 0) {
            uVar5 = 0;
            pHVar15 = local_38;
        } else {
            this_01 = game::ConfigProvider::GetConfig<game::HitmarkType>(local_50, param_2, (DataStatus**)0);
            bVar4 = shared_ptr::operator_cast_to_bool(this_01);
            pHVar15 = local_38;
            uVar5 = 70;
            if (bVar4) {
                pHVar8 =
                    (HitmarkType*)shared_ptr<game::HitmarkType>::operator->((shared_ptr<game::HitmarkType>*)this_01);
                local_40 = pHVar8->GetOverride();
                pHVar8 =
                    (HitmarkType*)shared_ptr<game::HitmarkType>::operator->((shared_ptr<game::HitmarkType>*)this_01);
                uVar5 = pHVar8->GetDuration();
            }
        }
        iVar12 = local_40;
        local_50 = (ConfigProvider*)CONCAT44(local_50._4_4_, uVar5);
        if (!bVar2) {
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
                    pCVar7 = (ClientCompositeZone*)Array<Hitmark, eastl::allocator>::operator[](
                        (Array<Hitmark, eastl::allocator>*)this_00, (long)iVar13);
                    cVar3 = pCVar7->IsValid();
                    if (cVar3 == '\0') {
                        bVar1 = false;
                        iVar17 = iVar13;
                    } else {
                        pCVar9 = (CommandLine*)Array<Hitmark, eastl::allocator>::operator[](
                            (Array<Hitmark, eastl::allocator>*)this_00, (long)iVar13);
                        uVar6 = pCVar9->GetPos();
                        bVar1 = param_6 < uVar6;
                        if (param_6 < uVar6) {
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
            pCVar9 = (CommandLine*)Array<Hitmark, eastl::allocator>::operator[](
                (Array<Hitmark, eastl::allocator>*)this_00, 0);
            uVar5 = pCVar9->GetPos();
        LAB_1004287cb:
            local_38 = (HitmarksAndHeadbars*)CONCAT44(local_38._4_4_, uVar5);
        } else {
            local_38 = (HitmarksAndHeadbars*)((ulong)local_38 & 18446744069414584320);
            if (local_40 == 1) {
                pCVar10 = (CoordMapSquare*)Array<Hitmark, eastl::allocator>::operator[](
                    (Array<Hitmark, eastl::allocator>*)this_00, 0);
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
                    pCVar9 = (CommandLine*)Array<Hitmark, eastl::allocator>::operator[](
                        (Array<Hitmark, eastl::allocator>*)this_00, uVar14);
                    iVar16 = pCVar9->GetPos();
                    if (iVar16 < (int)local_38) {
                        pCVar9 = (CommandLine*)Array<Hitmark, eastl::allocator>::operator[](
                            (Array<Hitmark, eastl::allocator>*)this_00, uVar14);
                        uVar5 = pCVar9->GetPos();
                    LAB_1004287f0:
                        local_38 = (HitmarksAndHeadbars*)CONCAT44(local_38._4_4_, uVar5);
                        iVar17 = (int)uVar14;
                    }
                } else if (iVar12 == 1) {
                    pCVar10 = (CoordMapSquare*)Array<Hitmark, eastl::allocator>::operator[](
                        (Array<Hitmark, eastl::allocator>*)this_00, uVar14);
                    iVar16 = pCVar10->GetZ();
                    if (iVar16 < (int)local_38) {
                        pCVar10 = (CoordMapSquare*)Array<Hitmark, eastl::allocator>::operator[](
                            (Array<Hitmark, eastl::allocator>*)this_00, uVar14);
                        uVar5 = pCVar10->GetZ();
                        goto LAB_1004287f0;
                    }
                }
                uVar14 = uVar14 + 1;
            } while ((long)uVar14 < (long)pHVar15->field_4);
        }
        if ((iVar12 == 1) && (param_3 <= (int)local_38)) {
            return;
        }
    LAB_10042887b:
        if (-1 < iVar17) {
            new (&local_70) render::ShaderPrecisionProfile(param_2, param_3, param_6 + param_7 + (int)local_50, param_4,
                                                           local_70._24_4_, (int)local_50);
            puVar11 = (undefined8*)Array<Hitmark, eastl::allocator>::operator[](
                (Array<Hitmark, eastl::allocator>*)this_00, (long)iVar17);
            *puVar11 = local_70._0_8_;
            puVar11[1] = local_70._8_8_;
            puVar11[2] = local_70._16_8_;
        }
    }

    // 0x100428a60, 416 bytes, placed by class name
    // HitmarksAndHeadbars::AddQueuedHeadbar(eastl::fixed_list<Headbar, 4ul, true, eastl::allocator>&, Headbar&&)
    void HitmarksAndHeadbars::AddQueuedHeadbar(fixed_list* param_1, Headbar* param_2) {
        bool bVar1;
        int iVar2;
        int iVar3;
        uint uVar4;
        uint uVar5;
        ulong uVar6;
        Headbar* this_02;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        list<console::Line, eastl::allocator> local_70[8];
        undefined8 local_68;
        ulong local_58;
        undefined8 local_48;
        undefined8 local_38;

        local_48.end();
        eastl::list<console::Line, eastl::allocator>::end(local_70);
        local_38.begin();
        bVar1 = eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)local_70, extraout_RDX);
        iVar2 = 0;
        if (bVar1) {
            uVar6 = 1;
            do {
                local_58 = uVar6;
                this_02 = (Headbar*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
                iVar2 = this_02->GetStatus();
                iVar3 = param_2->GetStatus();
                if (iVar2 == iVar3) {
                    eastl::swap<Headbar>(this_02, param_2);
                } else {
                    uVar4 = this_02->GetStatus();
                    uVar5 = param_2->GetStatus();
                    if (uVar4 <= uVar5) {
                        local_48 = local_38;
                    }
                }
                if (iVar2 == iVar3) {
                    iVar2 = (int)local_58;
                    break;
                }
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
                bVar1 = eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)local_70, extraout_RDX_00);
                iVar2 = (int)local_58;
                uVar6 = (ulong)(iVar2 + 1);
            } while (bVar1);
        }
        if (bVar1 == false) {
            local_38.end();
            bVar1 = eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_38, extraout_RDX_01);
            if (bVar1) {
                if (iVar2 < (int)((HitmarksAndHeadbars*)this)->field_8) {
                    param_1->push_front(param_2);
                }
            } else {
                new (&local_68) eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                                    shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                                    shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(
                    (ListIterator*)&local_48);
                eastl::list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::insert(
                    &local_38, param_1, local_68, param_2);
                iVar2 = param_1->size();
                if ((int)((HitmarksAndHeadbars*)this)->field_8 < iVar2) {
                    param_1->pop_front();
                }
            }
        }
    }

    // 0x100428d40, 96 bytes, placed by class name
    // HitmarksAndHeadbars::RemoveHeadbarQueue(int)
    void HitmarksAndHeadbars::RemoveHeadbarQueue(int param_1) {
        ulong uVar1;
        long lVar2;
        undefined1* this_00;

        this_00 = &field_40;
        uVar1 = this_00->size();
        lVar2 = this_00->HeapBeginPtr();
        this_00->erase((fixed_list*)((long)param_1 * 440 + lVar2));
        this_00->resize(uVar1);
    }

    // 0x100428e80, 160 bytes, placed by class name
    // HitmarksAndHeadbars::ClearHeadbar(int)
    void HitmarksAndHeadbars::ClearHeadbar(int param_1) {
        undefined1* this_00;
        long lVar3;
        type* ptVar4;
        list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true, eastl::allocator>>* this_01;
        Layout* this_02;
        vector* this_03;
        GameToken* this_04;
        type* ptVar5;

        this_00 = &field_40;
        lVar3 = this_00->size();
        if (lVar3 != 0) {
            ptVar5 = (type*)0;
            do {
                ptVar4 = ptVar5;
                this_01 =
                    (list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)eastl::
                        vector<eastl::fixed_list<Headbar, 4ul, true, eastl::allocator>, eastl::allocator>::operator[](
                            (vector<eastl::fixed_list<Headbar, 4ul, true, eastl::allocator>, eastl::allocator>*)this_00,
                            (ulong)ptVar5);
                if (eastl::list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true,
                                                                     eastl::allocator>>::empty(this_01) == '\0') {
                    this_02 = (Layout*)eastl::list<
                        Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::front();
                    this_03 = eastl::string::Layout::SSOBeginPtr(this_02, ptVar4);
                    this_04 =
                        (GameToken*)shared_ptr<game::HeadbarType>::operator->((shared_ptr<game::HeadbarType>*)this_03);
                    if (this_04->GetStatus() == param_1) {
                        RemoveHeadbarQueue(this, (int)ptVar5);
                        return;
                    }
                }
                ptVar5 = (type*)(ulong)((int)ptVar5 + 1);
                ptVar4 = (type*)this_00->size();
            } while (ptVar5 < ptVar4);
        }
    }

    // 0x100429000, 96 bytes, placed by class name
    // HitmarksAndHeadbars::HasHeadbars(unsigned int) const
    bool HitmarksAndHeadbars::HasHeadbars(uint param_1) {
        list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true, eastl::allocator>>* this_00;
        GameToken* this_01;
        bool bVar3;

        bVar3 = false;
        this_00 = (list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
            eastl::vector<eastl::fixed_list<Headbar, 4ul, true, eastl::allocator>, eastl::allocator>::operator[](
                (vector<eastl::fixed_list<Headbar, 4ul, true, eastl::allocator>, eastl::allocator>*)&field_40, 0);
        if (eastl::list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::empty(
                this_00) == '\0') {
            eastl::vector<eastl::fixed_list<Headbar, 4ul, true, eastl::allocator>, eastl::allocator>::operator[](
                (vector<eastl::fixed_list<Headbar, 4ul, true, eastl::allocator>, eastl::allocator>*)&field_40, 0);
            this_01 = (GameToken*)
                eastl::list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::front();
            bVar3 = this_01->GetStatus() <= param_1;
        }
        return bVar3;
    }

    // 0x1004290b0, 944 bytes, placed by class name
    // HitmarksAndHeadbars::AddHeadbar(game::ConfigProvider const&, int, int, unsigned int, int, int, int, int, unsigned int)
    void HitmarksAndHeadbars::AddHeadbar(ConfigProvider* param_1, int param_2, int param_3, uint param_4, int param_5,
                                         int param_6, int param_7, int param_8, uint param_9) {
        bool bVar1;
        int iVar3;
        int iVar4;
        shared_ptr* this_00;
        MSIType* pMVar6;
        long lVar7;
        list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true, eastl::allocator>>* plVar8;
        Layout* this_01;
        vector* this_02;
        GameToken* this_03;
        fixed_list* pfVar9;
        type* ptVar10;
        undefined8 uVar11;
        fixed_list* pfVar12;
        ulong uVar13;
        undefined8 uVar14;
        char* pcVar15;
        int iVar16;
        type* ptVar17;
        vector<eastl::fixed_list<Headbar, 4ul, true, eastl::allocator>, eastl::allocator>* this_04;
        uint uVar18;
        undefined1 local_98[64];
        HitmarksAndHeadbars* local_58;
        int local_48;
        undefined4 local_44;
        vector<eastl::fixed_list<Headbar, 4ul, true, eastl::allocator>, eastl::allocator>* local_40;
        int local_38;
        int local_34;

        local_40 = (vector<eastl::fixed_list<Headbar, 4ul, true, eastl::allocator>, eastl::allocator>*)CONCAT44(
            local_40._4_4_, param_5);
        local_98._56_8_ = game::ConfigProvider::GetConfig<game::HeadbarType>(param_1, param_2, (DataStatus**)0);
        bVar1 = local_98._56_8_->operator_cast_to_bool();
        if (bVar1) {
            local_58 = this;
            if (param_3 < 0) {
                this_00 = (shared_ptr*)&game::HeadbarType::NullHeadbarType;
            } else {
                this_00 = game::ConfigProvider::GetConfig<game::HeadbarType>(param_1, param_3, (DataStatus**)0);
                bVar1 = shared_ptr::operator_cast_to_bool(this_00);
                if (!bVar1) {
                    uVar11 = logger::default_logger();
                    pcVar15 = "Unable to find headbar overlay type with ID %d";
                    uVar14 = 237;
                    goto LAB_100429322;
                }
            }
            uVar11 = local_98._56_8_;
            uVar13 = (ulong)param_4;
            new (local_98)
                Headbar(local_98._56_8_, this_00, param_4, (uint)local_40, param_6, param_7, param_8, param_9);
            pMVar6 = (MSIType*)shared_ptr<game::HeadbarType>::operator->((shared_ptr<game::HeadbarType>*)uVar11);
            local_48 = pMVar6->GetTint();
            this_04 =
                (vector<eastl::fixed_list<Headbar, 4ul, true, eastl::allocator>, eastl::allocator>*)&local_58->field_40;
            lVar7 =
                eastl::vector<eastl::fixed_list<Headbar, 4ul, true, eastl::allocator>, eastl::allocator>::size(this_04);
            local_44 = (undefined4)CONCAT71((int7)(uVar13 >> 8), 1);
            local_40 = this_04;
            if (lVar7 == 0) {
                local_38 = 0;
                iVar16 = -1;
                local_34 = -1;
            } else {
                local_34 = -1;
                ptVar17 = (type*)0;
                uVar18 = 1;
                local_38 = 0;
                iVar16 = -1;
                do {
                    plVar8 = (list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        eastl::vector<eastl::fixed_list<Headbar, 4ul, true, eastl::allocator>,
                                      eastl::allocator>::operator[](this_04, (ulong)ptVar17);
                    if (eastl::list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true,
                                                                         eastl::allocator>>::empty(plVar8) != '\0')
                        break;
                    ptVar10 = ptVar17;
                    eastl::vector<eastl::fixed_list<Headbar, 4ul, true, eastl::allocator>,
                                  eastl::allocator>::operator[](this_04, (ulong)ptVar17);
                    this_01 = (Layout*)eastl::list<
                        Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::front();
                    this_02 = eastl::string::Layout::SSOBeginPtr(this_01, ptVar10);
                    this_03 =
                        (GameToken*)shared_ptr<game::HeadbarType>::operator->((shared_ptr<game::HeadbarType>*)this_02);
                    iVar3 = this_03->GetStatus();
                    if (iVar3 == param_2) {
                        pfVar9 = (fixed_list*)eastl::vector<eastl::fixed_list<Headbar, 4ul, true, eastl::allocator>,
                                                            eastl::allocator>::operator[](local_40, (ulong)ptVar17);
                        AddQueuedHeadbar(local_58, pfVar9, (Headbar*)local_98);
                    } else {
                        pMVar6 = (MSIType*)shared_ptr<game::HeadbarType>::operator->(
                            (shared_ptr<game::HeadbarType>*)local_98._56_8_);
                        iVar4 = pMVar6->GetSpriteID();
                        pMVar6 = (MSIType*)shared_ptr<game::HeadbarType>::operator->(
                            (shared_ptr<game::HeadbarType>*)this_02);
                        if (pMVar6->GetSpriteID() < iVar4) {
                            iVar16 = uVar18 - 1;
                        }
                        pMVar6 = (MSIType*)shared_ptr<game::HeadbarType>::operator->(
                            (shared_ptr<game::HeadbarType>*)local_98._56_8_);
                        local_38 = local_38 + 1;
                        iVar4 = pMVar6->GetTint();
                        if (local_48 < iVar4) {
                            pMVar6 = (MSIType*)shared_ptr<game::HeadbarType>::operator->(
                                (shared_ptr<game::HeadbarType>*)local_98._56_8_);
                            local_48 = pMVar6->GetTint();
                            local_34 = uVar18 - 1;
                        }
                    }
                    this_04 = local_40;
                    if (iVar3 == param_2) {
                        local_44 = 0;
                        goto LAB_10042941e;
                    }
                    ptVar17 = (type*)(ulong)uVar18;
                    ptVar10 = (type*)
                        eastl::vector<eastl::fixed_list<Headbar, 4ul, true, eastl::allocator>, eastl::allocator>::size(
                            local_40);
                    uVar18 = uVar18 + 1;
                } while (ptVar17 < ptVar10);
            }
            if (((char)local_44 != '\0') && ((-1 < local_34 || (local_38 < (int)local_58->field_12)))) {
                if (local_38 == local_58->field_12) {
                    RemoveHeadbarQueue(local_58, local_34);
                    iVar16 = iVar16 - (uint)(local_34 <= iVar16);
                }
                iVar3 = eastl::vector<eastl::fixed_list<Headbar, 4ul, true, eastl::allocator>, eastl::allocator>::size(
                    this_04);
                if (iVar16 < iVar3 + -2) {
                    uVar13 = (ulong)(iVar3 + -2);
                    do {
                        pfVar9 = (fixed_list*)eastl::vector<eastl::fixed_list<Headbar, 4ul, true, eastl::allocator>,
                                                            eastl::allocator>::operator[](this_04, uVar13 + 1);
                        pfVar12 = (fixed_list*)eastl::vector<eastl::fixed_list<Headbar, 4ul, true, eastl::allocator>,
                                                             eastl::allocator>::operator[](local_40, uVar13);
                        eastl::swap<Headbar, 4ul, true, eastl::allocator>(pfVar9, pfVar12);
                        uVar13 = uVar13 - 1;
                        this_04 = local_40;
                    } while ((long)iVar16 < (long)uVar13);
                }
                plVar8 = (list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                    eastl::vector<eastl::fixed_list<Headbar, 4ul, true, eastl::allocator>,
                                  eastl::allocator>::operator[](this_04, (long)(iVar16 + 1));
                eastl::list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::clear(
                    plVar8);
                plVar8 = (list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                    eastl::vector<eastl::fixed_list<Headbar, 4ul, true, eastl::allocator>,
                                  eastl::allocator>::operator[](this_04, (long)(iVar16 + 1));
                eastl::list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                    push_back(plVar8, (Headbar*)local_98);
            }
        LAB_10042941e:
            local_98->~ActiveComponent();
        } else {
            uVar11 = logger::default_logger();
            pcVar15 = "Unable to find headbar type with ID %d";
            uVar14 = 231;
            param_3 = param_2;
        LAB_100429322:
            logger::Logger::Log(uVar11, 1, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "scene/entities/HitmarksAndHeadbars.cpp",
                                uVar14, pcVar15, param_3);
        }
    }

    // 0x100429630, 592 bytes, placed by class name
    // HitmarksAndHeadbars::UpdateHeadbarQueues(unsigned int)
    void HitmarksAndHeadbars::UpdateHeadbarQueues(uint param_1) {
        char cVar1;
        bool bVar2;
        int iVar3;
        uint uVar4;
        int iVar5;
        list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true, eastl::allocator>>* plVar6;
        GameToken* this_00;
        Material* this_01;
        vector* this_02;
        HeadbarType* this_03;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* phVar7;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        hashtable_iterator_base* extraout_RDX_03;
        hashtable_iterator_base* extraout_RDX_04;
        list<console::Line, eastl::allocator>* this_04;
        ulong uVar8;
        ulong uVar9;
        undefined8 local_90;
        undefined8 local_88;
        undefined8 local_80;
        undefined8 local_78;
        HitmarksAndHeadbars* local_70;
        list<console::Line, eastl::allocator> local_68[8];
        ListIterator<shared_ptr<oldscape::Headbar>, shared_ptr<oldscape::Headbar>*, shared_ptr<oldscape::Headbar>&>
            local_60[8];
        vector<eastl::fixed_list<Headbar, 4ul, true, eastl::allocator>, eastl::allocator>* local_58;
        ulong local_50;
        list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true, eastl::allocator>>* local_48;
        int local_3c;
        undefined8 local_38;

        local_58 = (vector<eastl::fixed_list<Headbar, 4ul, true, eastl::allocator>, eastl::allocator>*)&field_40;
        local_70 = this;
        iVar3 =
            eastl::vector<eastl::fixed_list<Headbar, 4ul, true, eastl::allocator>, eastl::allocator>::size(local_58);
        if (0 < iVar3) {
            uVar9 = (long)iVar3;
            do {
                this_04 = local_68;
                uVar8 = uVar9 - 1;
                plVar6 = (list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                    eastl::vector<eastl::fixed_list<Headbar, 4ul, true, eastl::allocator>,
                                  eastl::allocator>::operator[](local_58, uVar8);
                cVar1 = eastl::list<
                    Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::empty(plVar6);
                if (cVar1 == '\0') {
                    local_50 = uVar8;
                    plVar6 = (list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        eastl::vector<eastl::fixed_list<Headbar, 4ul, true, eastl::allocator>,
                                      eastl::allocator>::operator[](local_58, uVar8);
                    eastl::list<console::Line, eastl::allocator>::end(this_04);
                    local_38.end();
                    local_90.begin();
                    phVar7 = extraout_RDX;
                    while (bVar2 = eastl::operator!=((eastl*)&local_90, (hashtable_iterator_base*)this_04, phVar7),
                           phVar7 = extraout_RDX_00, bVar2) {
                        this_00 =
                            (GameToken*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_90);
                        uVar4 = this_00->GetStatus();
                        phVar7 = extraout_RDX_01;
                        if (param_1 < uVar4)
                            break;
                        local_38 = local_90;
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_90);
                        phVar7 = extraout_RDX_02;
                    }
                    bVar2 = eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)this_04, phVar7);
                    if (bVar2) {
                        local_48 = plVar6;
                        this_01 =
                            (Material*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_38);
                        local_3c = this_01->GetStatus();
                        iVar3 = this_01->GetDiffuseAlphaMapSize();
                        iVar3 = iVar3 + local_3c;
                        this_02 = this_01->SSOBeginPtr(this_04);
                        this_03 = (HeadbarType*)shared_ptr<game::HeadbarType>::operator->(
                            (shared_ptr<game::HeadbarType>*)this_02);
                        iVar5 = this_03->GetStickTime();
                        if ((uint)(iVar5 + iVar3) < param_1) {
                            new (&local_90)
                                eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                                    shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                                    shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(
                                    (ListIterator*)&local_38);
                            eastl::ListIterator<
                                shared_ptr<oldscape::Headbar>, shared_ptr<oldscape::Headbar>*,
                                shared_ptr<oldscape::Headbar>&>::operator++(local_60, (int)(ListIterator*)&local_38);
                            new (&local_88)
                                eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                                    shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                                    shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(
                                    (ListIterator*)&local_90);
                            eastl::list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true,
                                                                             eastl::allocator>>::erase(local_60,
                                                                                                       local_48,
                                                                                                       local_88);
                        }
                        plVar6 = local_48;
                        local_90.begin();
                        bVar2 =
                            eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)&local_90, extraout_RDX_03);
                        if (bVar2) {
                            local_60->end();
                            bVar2 = eastl::operator!=((eastl*)&local_38, (hashtable_iterator_base*)local_60,
                                                      extraout_RDX_04);
                            if (bVar2) {
                                new (&local_80)
                                    eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                                        shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                                        shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(
                                        (ListIterator*)&local_38);
                                local_90.end();
                                new (&local_78)
                                    eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                                        shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                                        shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(
                                        (ListIterator*)&local_90);
                                eastl::list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true,
                                                                                 eastl::allocator>>::erase(local_60,
                                                                                                           plVar6,
                                                                                                           local_80,
                                                                                                           local_78);
                            }
                        }
                    }
                    cVar1 = eastl::list<Headbar, eastl::fixed_node_allocator<72ul, 4ul, 8ul, 0ul, true,
                                                                             eastl::allocator>>::empty(plVar6);
                    if (cVar1 != '\0') {
                        RemoveHeadbarQueue(local_70, (int)local_50);
                    }
                    uVar8 = local_50;
                }
                bVar2 = 1 < (long)uVar9;
                uVar9 = uVar8;
            } while (bVar2);
        }
    }

} // namespace jag

namespace jag::render {
    // 0x100428a40: the linker folded this into Hitmark::Hitmark(int, int, unsigned int, int, int, int), which has identical code
    ShaderPrecisionProfile::ShaderPrecisionProfile(ShaderVariablePrecision, ShaderVariablePrecision,
                                                   ShaderVariablePrecision, ShaderVariablePrecision,
                                                   ShaderVariablePrecision, ShaderVariablePrecision);

} // namespace jag::render
