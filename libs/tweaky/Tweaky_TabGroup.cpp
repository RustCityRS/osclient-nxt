// libs/tweaky/Tweaky_TabGroup.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.tweaky

namespace jag::tweak {
    class TabGroup : public DropdownGroup // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~TabGroup();
        virtual void Clear();
        virtual void Draw(int, int);
        virtual GetControlSize(int&, int&);
        virtual ulong OnClick(float, float, bool);
        virtual OnMouseOver(float, float);
        virtual void DoOnShown();
        virtual void InitDefault();
        virtual void ResetToDefault();
        virtual void ResetAllToDefault();
        virtual void ClearControlSize();
        DrawArrow(int, int, bool) const;

        // data members, from how the methods use this: 384 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        int field_24; // offset 24
        int field_28; // offset 28
        char _unknown_32[4];
        int field_36; // offset 36
        int field_40; // offset 40
        char _unknown_44[92];
        undefined4 field_136; // offset 136
        undefined4 field_140; // offset 140
        undefined4 field_144; // offset 144
        undefined4 field_148; // offset 148
        char _unknown_152[8];
        Event field_160; // offset 160
        char _unknown_184[96];
        int field_280; // offset 280
        char _unknown_284[44];
        int field_328; // offset 328
        int field_332; // offset 332
        int field_336; // offset 336
        int field_340; // offset 340
        char _unknown_344[4];
        undefined1 field_348[16]; // offset 348
        Placement field_364;      // offset 364
    };

    // 0x100a4efb0, 1104 bytes, placed by class name and debug map
    // TabGroup::Draw(int, int)
    void TabGroup::Draw(int param_1, int param_2) {
        undefined1* this_00;
        TabGroup* pTVar1;
        bool bVar3;
        int iVar4;
        int iVar5;
        MapArea* this_01;
        basic_string* pbVar6;
        Tweaky* pTVar7;
        long lVar8;
        long* plVar9;
        int iVar10;
        ulong uVar11;
        int iVar12;
        ulong uVar13;
        int iVar14;
        ulong uVar15;
        basic_string* pbVar16;
        int iVar17;
        uint uVar18;
        undefined1 auVar19[16];
        undefined1 local_a0[4];
        undefined1 local_9c[4];
        undefined1 local_98[24];
        ulong local_80;
        ulong local_78;
        shared_ptr local_70;
        int* local_60;
        int local_58;
        int local_54;
        vector<game::LocationAudioProperties, eastl::allocator>* local_50;
        int local_48;
        int local_44;
        TabGroup* local_40;
        ulong local_38;

        uVar11 = (ulong)(uint)param_2;
        if ((*(code*)field_0[5])(this, local_a0, local_9c) != '\0') {
            weak_ptr<oldscape::rs2lib::IfType>::lock();
            this_01 = (MapArea*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_70);
            local_60 = (int*)this_01->GetOrigin();
            iVar4 = local_60[2];
            iVar5 = *local_60;
            field_36 = (iVar4 - iVar5) + -10;
            iVar17 = local_60[3];
            iVar10 = local_60[1];
            field_40 = (iVar17 - iVar10) + -10;
            iVar14 = field_24 + param_1;
            iVar12 = field_28 + param_2;
            new (local_98) oldscape::dash3d::GridRect(iVar14, iVar12, (iVar4 - iVar5) + iVar14 + -10,
                                                      (iVar17 - iVar10) + -10 + iVar12);
            field_136 = local_98._0_4_;
            field_140 = local_98._4_4_;
            field_144 = local_98._8_4_;
            field_148 = local_98._12_4_;
            bVar3 = shared_ptr::operator_cast_to_bool(&local_70);
            if (bVar3) {
                iVar4 = field_336;
                iVar5 = local_60[2];
                local_38 = (ulong)(uint)param_1;
                iVar17 = *local_60;
                if (0 < field_340) {
                    auVar19 = DrawArrow(this, param_1, param_2, true);
                    *&field_348 = auVar19;
                    local_38 = (ulong)(param_1 + 10);
                }
                this_00 = &field_248;
                local_78 = (ulong)(uint)param_1;
                local_58 = iVar4;
                local_54 = iVar5 - iVar17;
                pbVar6 = (basic_string*)this_00->HeapBeginPtr();
                local_50 = (vector<game::LocationAudioProperties, eastl::allocator>*)this_00;
                local_98._16_8_ = this_00->end();
                local_48 = param_2 + 2;
                local_40 = this;
                if (pbVar6 == (basic_string*)local_98._16_8_) {
                    uVar15 = 0;
                    iVar4 = (int)local_38;
                } else {
                    local_44 = param_2 + 1;
                    uVar15 = 0;
                    uVar13 = local_38;
                    local_80 = uVar11;
                    do {
                        pbVar16 = pbVar6 + 80;
                        pbVar6[72] = (basic_string)0;
                        iVar4 = (int)uVar15;
                        if (iVar4 < local_40->field_340) {
                        LAB_100a4f315:
                            bVar3 = false;
                            uVar15 = (ulong)((int)uVar15 + 1);
                        } else {
                            iVar17 = (int)uVar13;
                            iVar5 = (int)uVar11;
                            if (iVar4 == local_40->field_280) {
                                pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_70);
                                pTVar7->SetColour(2155872511);
                                pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_70);
                                pTVar7->DrawRect(iVar17, iVar5, *(int*)(pbVar6 + 48) + 3, *(int*)(pbVar6 + 52) + 4,
                                                 false);
                                pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_70);
                                pTVar7->SetColour(808464639);
                                pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_70);
                                pTVar7->FillRect(iVar17 + 1, local_44, *(int*)(pbVar6 + 48) + 1,
                                                 *(int*)(pbVar6 + 52) + 2);
                                pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_70);
                                uVar18 = 4294934783;
                            } else {
                                pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_70);
                                pTVar7->SetColour(1886417151);
                                pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_70);
                                pTVar7->DrawRect(iVar17, local_44, *(int*)(pbVar6 + 48) + 3, *(int*)(pbVar6 + 52) + 4,
                                                 false);
                                pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_70);
                                uVar18 = 3772834047;
                            }
                            pTVar7->SetColour(uVar18);
                            new (local_98) oldscape::dash3d::GridRect(iVar17, iVar5, *(int*)(pbVar6 + 48) + iVar17,
                                                                      *(int*)(pbVar6 + 52) + iVar5);
                            *(undefined8*)(pbVar6 + 56) = local_98._0_8_;
                            *(undefined8*)(pbVar6 + 64) = local_98._8_8_;
                            pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_70);
                            Tweaky::TextDraw<eastl::string>(pTVar7, iVar17 + 2, local_48, pbVar6, -1, -1, false);
                            pbVar6[72] = (basic_string)1;
                            *(int*)&local_40->field_344 = iVar4;
                            iVar5 = *(int*)(pbVar6 + 48);
                            iVar12 = eastl::vector<game::LocationAudioProperties, eastl::allocator>::size(local_50);
                            iVar10 = 0;
                            local_38 = uVar15;
                            if (iVar4 < iVar12 + -1) {
                                lVar8 = eastl::vector<PageInfo, eastl::allocator>::operator[](
                                    (vector<PageInfo, eastl::allocator>*)local_50, (long)(iVar4 + 1));
                                iVar10 = *(int*)(lVar8 + 48);
                            }
                            uVar18 = iVar17 + iVar5 + 4;
                            iVar4 = uVar18 + iVar10 + 10;
                            bVar3 = local_60[2] < iVar4;
                            if (bVar3) {
                                uVar18 = local_40->field_144 - 10;
                            }
                            uVar13 = (ulong)uVar18;
                            uVar11 = local_80;
                            uVar15 = local_38;
                            if (iVar4 <= local_60[2])
                                goto LAB_100a4f315;
                        }
                        iVar4 = (int)uVar13;
                        param_2 = (int)uVar11;
                    } while ((!bVar3) && (pbVar6 = pbVar16, pbVar16 != (basic_string*)local_98._16_8_));
                }
                if (local_54 < local_58) {
                    iVar5 = eastl::vector<game::LocationAudioProperties, eastl::allocator>::size(local_50);
                    pTVar1 = local_40;
                    if ((int)uVar15 < iVar5 + -1) {
                        auVar19 = DrawArrow(local_40, iVar4, param_2, false);
                        *(undefined1(*)[16])pTVar1->field_364 = auVar19;
                    }
                }
                pTVar1 = local_40;
                lVar8 = eastl::vector<PageInfo, eastl::allocator>::operator[](
                    (vector<PageInfo, eastl::allocator>*)local_50, (long)local_40->field_280);
                uVar11 = local_78;
                plVar9 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)(lVar8 + 32));
                (**(code**)(*plVar9 + 32))(plVar9, uVar11 & 4294967295, local_48 + pTVar1->field_328);
            }
            local_70.~shared_ptr();
        }
    }

    // 0x100a4f400, 256 bytes, placed by class name and debug map
    // TabGroup::DrawArrow(int, int, bool) const
    undefined1[16] TabGroup::DrawArrow(int param_1, int param_2, bool param_3) {
        Tweaky* pTVar1;
        char* pcVar2;
        undefined1 local_50[32];

        weak_ptr<oldscape::rs2lib::IfType>::lock();
        pTVar1 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)(local_50 + 16));
        pTVar1->SetColour(1886417151);
        pTVar1 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)(local_50 + 16));
        pTVar1->DrawRect(param_1, param_2, 10, field_328, false);
        pTVar1 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)(local_50 + 16));
        pcVar2 = "<gt>";
        if (param_3) {
            pcVar2 = "<lt>";
        }
        pTVar1->TextDraw(param_1 + 2, param_2 + 2, pcVar2, -1, -1, false);
        new (local_50) oldscape::dash3d::GridRect(param_1, param_2, param_1 + 10, field_332 + param_2);
        ((local_50 + 16))->~shared_ptr();
        return (undefined1[16])local_50._0_16_;
    }

    // 0x100a4f500, 416 bytes, placed by class name and debug map
    // TabGroup::GetControlSize(int&, int&)
    undefined4 TabGroup::GetControlSize(int* param_1, int* param_2) {
        undefined1* this_00;
        bool bVar2;
        undefined4 uVar4;
        int iVar5;
        int iVar6;
        fixed_string* pfVar7;
        fixed_string* pfVar8;
        Tweaky* this_01;
        long lVar9;
        long* plVar10;
        int in_R9D;
        int iVar11;
        StringView SVar12;
        StringView local_78;
        shared_ptr local_68;
        int* local_58;
        vector<PageInfo, eastl::allocator>* local_50;
        int* local_48;
        uint local_38;
        int local_34;

        local_58 = param_1;
        weak_ptr<oldscape::rs2lib::IfType>::lock();
        bVar2 = shared_ptr::operator_cast_to_bool(&local_68);
        iVar11 = 0;
        uVar4 = 0;
        if (bVar2) {
            this_00 = &field_248;
            local_48 = param_2;
            pfVar7 = (fixed_string*)this_00->HeapBeginPtr();
            local_50 = (vector<PageInfo, eastl::allocator>*)this_00;
            pfVar8 = (fixed_string*)this_00->end();
            if (pfVar7 != pfVar8) {
                iVar11 = 0;
                do {
                    this_01 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_68);
                    StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_78, pfVar7);
                    SVar12.field_8 = (uchar*)4294967295;
                    SVar12.field_0 = (ulong)&local_78;
                    if (this_01->GetTextSize((int*)&local_38, &local_34, SVar12, in_R9D) != '\0') {
                        iVar11 = iVar11 + local_38 + 4;
                        ((TabGroup*)this)->field_328 = local_34 + 4;
                    }
                    *(uint*)(pfVar7 + 48) = local_38;
                    *(int*)(pfVar7 + 52) = local_34;
                    pfVar7 = pfVar7 + 80;
                } while (pfVar7 != pfVar8);
            }
            lVar9 = eastl::vector<PageInfo, eastl::allocator>::operator[](local_50, (long)((TabGroup*)this)->field_280);
            plVar10 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)(lVar9 + 32));
            uVar4 = (**(code**)(*plVar10 + 40))(plVar10, &local_38, &local_34);
            if ((char)uVar4 != '\0') {
                iVar5 = eastl::max<unsigned int>(300, local_38);
                iVar6 = eastl::max<int>(0, local_34);
                ((TabGroup*)this)->field_36 = iVar5;
                ((TabGroup*)this)->field_40 = iVar6;
                ((TabGroup*)this)->field_332 = iVar6 + ((TabGroup*)this)->field_328;
                ((TabGroup*)this)->field_336 = iVar11;
                *local_58 = iVar5;
                *local_48 = ((TabGroup*)this)->field_332;
            }
        }
        local_68.~shared_ptr();
        return uVar4;
    }

    // 0x100a4f6a0, 96 bytes, placed by class name and debug map
    // TabGroup::ClearControlSize()
    void TabGroup::ClearControlSize() {
        long lVar1;
        long lVar2;
        long* plVar3;

        lVar1 = (&field_248)->HeapBeginPtr();
        lVar2 = (&field_248)->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 80) {
            plVar3 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)(lVar1 + 32));
            (**(code**)(*plVar3 + 112))(plVar3);
        }
        ClearControlSize();
    }

    // 0x100a4f700, 944 bytes, placed by class name and debug map
    // TabGroup::OnClick(float, float, bool)
    ulong TabGroup::OnClick(float param_1, float param_2, bool param_3) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        MapArea* this_01;
        int* piVar3;
        long lVar4;
        Control* pCVar5;
        long* plVar6;
        long lVar7;
        int iVar8;
        ulong uVar9;
        int iVar10;
        shared_ptr<Container>* this_02;
        long lVar11;
        Event local_60;
        enable_shared_from_this<PathingEntity> local_48[16];
        float local_38;
        float local_34;

        local_38 = param_1;
        local_34 = param_2;
        weak_ptr<oldscape::rs2lib::IfType>::lock();
        this_01 = (MapArea*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_60);
        piVar3 = (int*)this_01->GetOrigin();
        local_60.~shared_ptr();
        if (((float)*piVar3 <= local_38) && (local_38 <= (float)piVar3[2])) {
            if ((local_34 < (float)piVar3[1]) || ((float)(piVar3[1] + field_328) < local_34)) {
                lVar4 = eastl::vector<PageInfo, eastl::allocator>::operator[](
                    (vector<PageInfo, eastl::allocator>*)&field_248, (long)field_280);
                this_02 = (shared_ptr<Container>*)(lVar4 + 32);
                pCVar5 = (Control*)shared_ptr<Container>::operator->(this_02);
                cVar2 = pCVar5->BoundsCheck(local_38, local_34);
                if (cVar2 != '\0') {
                    plVar6 = (long*)shared_ptr<Container>::operator->(this_02);
                    cVar2 = (**(code**)(*plVar6 + 48))(local_38, local_34, plVar6, param_3);
                    if (cVar2 != '\0') {
                        uVar9 = CONCAT71((int7)((ulong)piVar3 >> 8), 1);
                        if (!param_3) {
                            pCVar5 = (Control*)shared_ptr<Container>::operator->(this_02);
                            local_48->shared_from_this();
                            new (&local_60) Event(local_48, 2);
                            pCVar5->DoCallback(&local_60);
                            local_60.~LRUHashCacheWrapper();
                            local_48->~shared_ptr();
                            local_48->shared_from_this();
                            new (&local_60) Event(local_48, 2);
                            DoCallback(&local_60);
                            local_60.~LRUHashCacheWrapper();
                            local_48->~shared_ptr();
                        }
                        goto LAB_100a4f8da;
                    }
                }
                local_48->shared_from_this();
                new (&local_60) Event(local_48, 2);
                DoCallback(&local_60);
                local_60.~LRUHashCacheWrapper();
                local_48->~shared_ptr();
            } else {
                iVar10 = (int)local_38;
                iVar8 = (int)local_34;
                cVar2 = (field_348, iVar10, iVar8)->IsInside();
                if (cVar2 != '\0') {
                    uVar9 = 0;
                    iVar8 = eastl::max<int>(0, field_340 + -1);
                    field_340 = iVar8;
                    goto LAB_100a4f8da;
                }
                cVar2 = (field_364, iVar10, iVar8)->IsInside();
                this_00 = &field_248;
                if (cVar2 == '\0') {
                    local_38 = (float)iVar10;
                    local_34 = (float)iVar8;
                    lVar4 = this_00->HeapBeginPtr();
                    lVar7 = this_00->end();
                    iVar8 = 0;
                    if (lVar4 != lVar7) {
                        do {
                            lVar11 = lVar4 + 80;
                            if ((*(char*)(lVar4 + 72) == '\0') ||
                                (cVar2 = ((lVar4 + 56))->IsInside((int)local_38, (int)local_34), cVar2 == '\0')) {
                                iVar8 = iVar8 + 1;
                                bVar1 = false;
                            } else {
                                field_280 = iVar8;
                                local_48->GetParent();
                                weak_ptr<oldscape::rs2lib::IfType>::lock();
                                plVar6 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)&local_60);
                                (**(code**)(*plVar6 + 112))(plVar6);
                                local_60.~shared_ptr();
                                local_48->~weak_ptr();
                                bVar1 = true;
                            }
                            uVar9 = 0;
                        } while ((!bVar1) && (lVar4 = lVar11, lVar11 != lVar7));
                        goto LAB_100a4f8da;
                    }
                } else {
                    iVar8 = this_00->size();
                    iVar8 = eastl::min<graphics::GraphicsQuality>(iVar8 + -1, field_340 + 1);
                    field_340 = iVar8;
                }
            }
        }
        uVar9 = 0;
    LAB_100a4f8da:
        return uVar9 & 4294967295;
    }

    // 0x100a4fab0, 224 bytes, placed by class name and debug map
    // TabGroup::OnMouseOver(float, float)
    undefined8 TabGroup::OnMouseOver(float param_1, float param_2) {
        char cVar1;
        MapArea* this_00;
        int* piVar2;
        long lVar3;
        Control* this_01;
        long* plVar4;
        shared_ptr<Tweaky> local_30[16];

        weak_ptr<oldscape::rs2lib::IfType>::lock();
        this_00 = (MapArea*)shared_ptr<Tweaky>::operator->(local_30);
        piVar2 = (int*)this_00->GetOrigin();
        local_30->~shared_ptr();
        if (((float)*piVar2 <= param_1) && (param_1 <= (float)piVar2[2])) {
            lVar3 = eastl::vector<PageInfo, eastl::allocator>::operator[](
                (vector<PageInfo, eastl::allocator>*)&field_248, (long)field_280);
            this_01 = (Control*)shared_ptr<Container>::operator->((shared_ptr<Container>*)(lVar3 + 32));
            cVar1 = this_01->BoundsCheck(param_1, param_2);
            if (cVar1 != '\0') {
                plVar4 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)(lVar3 + 32));
                cVar1 = (**(code**)(*plVar4 + 64))(param_1, param_2, plVar4);
                if (cVar1 != '\0') {
                    return 1;
                }
            }
        }
        return 0;
    }

    // 0x100a4fb90, 96 bytes, placed by class name and debug map
    // TabGroup::DoOnShown()
    void TabGroup::DoOnShown() {
        long lVar1;
        long lVar2;
        long* plVar3;

        lVar1 = (&field_248)->HeapBeginPtr();
        lVar2 = (&field_248)->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 80) {
            plVar3 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)(lVar1 + 32));
            (**(code**)(*plVar3 + 80))(plVar3);
        }
        DoOnShown();
    }

    // 0x100a4fbf0, 112 bytes, placed by class name and debug map
    // TabGroup::Clear()
    void TabGroup::Clear() {
        undefined1* this_00;
        long lVar1;
        long lVar2;
        long* plVar3;

        this_00 = &field_248;
        lVar1 = this_00->HeapBeginPtr();
        lVar2 = this_00->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 80) {
            plVar3 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)(lVar1 + 32));
            (**(code**)(*plVar3 + 16))(plVar3);
        }
        this_00->clear();
        Clear();
    }

    // 0x100a4fc90, 48 bytes, placed by class name and debug map
    // TabGroup::ResetToDefault()
    void TabGroup::ResetToDefault() {
        long lVar1;
        long* plVar2;

        lVar1 = eastl::vector<PageInfo, eastl::allocator>::operator[]((vector<PageInfo, eastl::allocator>*)&field_248,
                                                                      (long)field_280);
        plVar2 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)(lVar1 + 32));
        (**(code**)(*plVar2 + 96))(plVar2);
    }

    // 0x100a4fcc0, 96 bytes, placed by class name and debug map
    // TabGroup::ResetAllToDefault()
    void TabGroup::ResetAllToDefault() {
        long lVar1;
        long lVar2;
        long* plVar3;

        lVar1 = (&field_248)->HeapBeginPtr();
        lVar2 = (&field_248)->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 80) {
            plVar3 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)(lVar1 + 32));
            (**(code**)(*plVar3 + 96))(plVar3);
        }
        ~AutoSingleton();
    }

    // 0x100a4fd20, 96 bytes, placed by class name and debug map
    // TabGroup::InitDefault()
    void TabGroup::InitDefault() {
        long lVar1;
        long lVar2;
        long* plVar3;

        lVar1 = (&field_248)->HeapBeginPtr();
        lVar2 = (&field_248)->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 80) {
            plVar3 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)(lVar1 + 32));
            (**(code**)(*plVar3 + 88))(plVar3);
        }
        ~AutoSingleton();
    }

    // 0x100a516c0: the linker folded this into DropdownGroup::~DropdownGroup(), which has identical code
    TabGroup::~TabGroup();

    // 0x100a516d0: the linker folded this into DropdownGroup::~DropdownGroup(), which has identical code
    TabGroup::~TabGroup();

    // 0x100a52b00: the linker folded this into DropdownGroup::~DropdownGroup(), which has identical code
    TabGroup::~TabGroup();

} // namespace jag::tweak
