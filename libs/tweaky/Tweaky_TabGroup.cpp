// libs/tweaky/Tweaky_TabGroup.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.tweaky

namespace jag::tweak {
    class TabGroup : public DropdownGroup // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~TabGroup();
        virtual void Clear();
        virtual void Draw(int arg1, int arg2);
        virtual uint32_t GetControlSize(int& arg1, int& arg2);
        virtual unsigned long OnClick(float arg1, float arg2, bool arg3);
        virtual uint64_t OnMouseOver(float arg1, float arg2);
        virtual void DoOnShown();
        virtual void InitDefault();
        virtual void ResetToDefault();
        virtual void ResetAllToDefault();
        virtual void ClearControlSize();
        uint8_t[16] DrawArrow(int arg1, int arg2, bool arg3) const;

    private:
        uint8_t _unknown_8[16];
        int field_24;
        int field_28;
        uint8_t _unknown_32[4];
        int field_36;
        int field_40;
        uint8_t _unknown_44[92];
        uint32_t field_136;
        uint32_t field_140;
        uint32_t field_144;
        uint32_t field_148;
        uint8_t _unknown_152[8];
        Event field_160;
        uint8_t _unknown_184[96];
        int field_280;
        uint8_t _unknown_284[44];
        int field_328;
        int field_332;
        int field_336;
        int field_340;
        uint8_t _unknown_344[4];
        uint8_t field_348[16];
        Placement field_364;
    };

    // 0x100a4efb0
    void TabGroup::Draw(int arg1, int arg2) {
        uint8_t* this_00;
        bool bVar1;
        TabGroup* pTVar2;
        int iVar4;
        int iVar5;
        MapArea* this_01;
        long lVar6;
        Tweaky* pTVar7;
        long* plVar8;
        int iVar9;
        int iVar11;
        unsigned long uVar12;
        int arg1_00;
        unsigned long uVar13;
        long lVar14;
        int iVar15;
        unsigned int uVar16;
        uint8_t auVar17[16];
        int local_a0[2];
        uint8_t local_98[24];
        unsigned long local_80;
        unsigned long local_78;
        shared_ptr local_70;
        int* local_60;
        int local_58;
        int local_54;
        vector<game::LocationAudioProperties>* local_50;
        unsigned int local_48;
        int local_44;
        TabGroup* local_40;
        unsigned long local_38;

        unsigned long uVar10 = (unsigned long)(unsigned int)arg2;
        if (GetControlSize(local_a0)) {
            local_70 = field_104.lock();
            this_01 = (MapArea*)local_70.operator->();
            local_60 = (int*)this_01->GetOrigin();
            iVar4 = local_60[2];
            iVar5 = *local_60;
            field_36 = (iVar4 - iVar5) - 10;
            iVar15 = local_60[3];
            iVar9 = local_60[1];
            field_40 = (iVar15 - iVar9) - 10;
            arg1_00 = field_24 + arg1;
            iVar11 = field_28 + arg2;
            new (local_98) oldscape::dash3d::GridRect(arg1_00, iVar11, (iVar4 - iVar5) + arg1_00 - 10,
                                                      (iVar15 - iVar9) - 10 + iVar11);
            field_136 = local_98._0_4_;
            field_140 = local_98._4_4_;
            field_144 = local_98._8_4_;
            field_148 = local_98._12_4_;
            if (shared_ptr::operator_cast_to_bool(&local_70)) {
                iVar4 = field_336;
                iVar5 = local_60[2];
                local_38 = (unsigned long)(unsigned int)arg1;
                iVar15 = *local_60;
                if (0 < field_340) {
                    auVar17 = DrawArrow(arg1, arg2, true);
                    *&field_348 = auVar17;
                    local_38 = (unsigned long)(arg1 + 10);
                }
                this_00 = &field_248;
                local_78 = (unsigned long)(unsigned int)arg1;
                local_58 = iVar4;
                local_54 = iVar5 - iVar15;
                lVar6 = this_00->HeapBeginPtr();
                local_50 = (vector<game::LocationAudioProperties>*)this_00;
                local_98._16_8_ = this_00->end();
                local_48 = arg2 + 2;
                local_40 = this;
                if (lVar6 == local_98._16_8_) {
                    uVar13 = 0;
                    iVar4 = (int)local_38;
                } else {
                    local_44 = arg2 + 1;
                    uVar13 = 0;
                    uVar12 = local_38;
                    local_80 = uVar10;
                    do {
                        lVar14 = lVar6 + 80;
                        *(uint8_t*)(lVar6 + 72) = 0;
                        iVar4 = (int)uVar13;
                        if (iVar4 < local_40->field_340) {
                        LAB_100a4f315:
                            bVar1 = false;
                            uVar13 = (unsigned long)((int)uVar13 + 1);
                        } else {
                            iVar15 = (int)uVar12;
                            iVar5 = (int)uVar10;
                            if (iVar4 == local_40->field_280) {
                                pTVar7 = (Tweaky*)local_70.operator->();
                                pTVar7->SetColour(2155872511);
                                pTVar7 = (Tweaky*)local_70.operator->();
                                pTVar7->DrawRect(iVar15, iVar5, *(int*)(lVar6 + 48) + 3, *(int*)(lVar6 + 52) + 4,
                                                 false);
                                pTVar7 = (Tweaky*)local_70.operator->();
                                pTVar7->SetColour(808464639);
                                pTVar7 = (Tweaky*)local_70.operator->();
                                pTVar7->FillRect(iVar15 + 1, local_44, *(int*)(lVar6 + 48) + 1,
                                                 *(int*)(lVar6 + 52) + 2);
                                pTVar7 = (Tweaky*)local_70.operator->();
                                uVar16 = 4294934783;
                            } else {
                                pTVar7 = (Tweaky*)local_70.operator->();
                                pTVar7->SetColour(1886417151);
                                pTVar7 = (Tweaky*)local_70.operator->();
                                pTVar7->DrawRect(iVar15, local_44, *(int*)(lVar6 + 48) + 3, *(int*)(lVar6 + 52) + 4,
                                                 false);
                                pTVar7 = (Tweaky*)local_70.operator->();
                                uVar16 = 3772834047;
                            }
                            pTVar7->SetColour(uVar16);
                            new (local_98) oldscape::dash3d::GridRect(iVar15, iVar5, *(int*)(lVar6 + 48) + iVar15,
                                                                      *(int*)(lVar6 + 52) + iVar5);
                            *(uint64_t*)(lVar6 + 56) = local_98._0_8_;
                            *(uint64_t*)(lVar6 + 64) = local_98._8_8_;
                            iVar5 = local_70.operator->();
                            Tweaky::TextDraw<eastl::string>(iVar5, iVar15 + 2,
                                                            *((fixed_string<char, _16>*)(unsigned long)local_48),
                                                            (int)lVar14 - 80, -1, true);
                            *(uint8_t*)(lVar6 + 72) = 1;
                            *(int*)&local_40->field_344 = iVar4;
                            iVar5 = *(int*)(lVar6 + 48);
                            iVar11 = local_50->size();
                            iVar9 = 0;
                            local_38 = uVar13;
                            if (iVar4 < iVar11 - 1) {
                                lVar6 = (*local_50)[(long)(iVar4 + 1)];
                                iVar9 = *(int*)(lVar6 + 48);
                            }
                            uVar16 = iVar15 + iVar5 + 4;
                            iVar4 = uVar16 + iVar9 + 10;
                            bVar1 = local_60[2] < iVar4;
                            if (bVar1) {
                                uVar16 = local_40->field_144 - 10;
                            }
                            uVar12 = (unsigned long)uVar16;
                            uVar10 = local_80;
                            uVar13 = local_38;
                            if (iVar4 <= local_60[2])
                                goto LAB_100a4f315;
                        }
                        iVar4 = (int)uVar12;
                        arg2 = (int)uVar10;
                    } while ((!bVar1) && (lVar6 = lVar14, lVar14 != local_98._16_8_));
                }
                if (local_54 < local_58) {
                    iVar5 = local_50->size();
                    pTVar2 = local_40;
                    if ((int)uVar13 < iVar5 - 1) {
                        auVar17 = DrawArrow(local_40, iVar4, arg2, false);
                        *(uint8_t(*)[16])pTVar2->field_364 = auVar17;
                    }
                }
                pTVar2 = local_40;
                lVar6 = (*local_50)[(long)local_40->field_280];
                uVar10 = local_78;
                plVar8 = (long*)(*((lVar6 + 32))).operator->();
                (**(void (**)(...))(*plVar8 + 32))(plVar8, uVar10 & 4294967295, local_48 + pTVar2->field_328);
            }
        }
    }

    // 0x100a4f400
    uint8_t[16] TabGroup::DrawArrow(int arg1, int arg2, bool arg3) const {
        uint8_t local_50[16];

        *((local_50 + 16)) = field_104.lock();
        Tweaky* pTVar1 = (Tweaky*)(*((local_50 + 16))).operator->();
        pTVar1->SetColour(1886417151);
        pTVar1 = (Tweaky*)(*((local_50 + 16))).operator->();
        pTVar1->DrawRect(arg1, arg2, 10, field_328, false);
        int arg1_00 = (*((local_50 + 16))).operator->();
        int arg4 = 14393806;
        if (arg3) {
            arg4 = 14393801;
        }
        Tweaky::TextDraw(arg1_00, arg1 + 2, (char*)(unsigned long)(arg2 + 2), arg4, -1, true);
        new (local_50) oldscape::dash3d::GridRect(arg1, arg2, arg1 + 10, field_332 + arg2);
        ((local_50 + 16))->~shared_ptr();
        return local_50;
    }

    // 0x100a4f500
    uint32_t TabGroup::GetControlSize(int& arg1, int& arg2) {
        uint8_t* this_00;
        int iVar4;
        int iVar5;
        basic_string<char, BucketAllocatorEASTL>* str;
        basic_string<char, BucketAllocatorEASTL>* pbVar6;
        Tweaky* this_01;
        long lVar7;
        long* plVar8;
        StringView local_78;
        vector<PageInfo>* local_50;
        int* local_48;
        unsigned int local_38;
        ShaderVariablePrecision local_34;

        int* local_58 = arg1;
        shared_ptr local_68 = field_104.lock();
        bool cVar2 = shared_ptr::operator_cast_to_bool(&local_68);
        int iVar9 = 0;
        uint32_t uVar3 = 0;
        if (cVar2) {
            this_00 = &field_248;
            local_48 = arg2;
            str = (basic_string<char, BucketAllocatorEASTL>*)this_00->HeapBeginPtr();
            local_50 = (vector<PageInfo>*)this_00;
            pbVar6 = (basic_string<char, BucketAllocatorEASTL>*)this_00->end();
            if (str != pbVar6) {
                iVar9 = 0;
                do {
                    this_01 = (Tweaky*)local_68.operator->();
                    local_78.StringView<eastl::fixed_string<char, 40>>(*str);
                    cVar2 = this_01->GetTextSize(local_38, local_34, &local_78, -1);
                    if (cVar2) {
                        iVar9 = iVar9 + local_38 + 4;
                        field_328 = local_34 + 4;
                    }
                    *(unsigned int*)(str + 48) = local_38;
                    *(ShaderVariablePrecision*)(str + 52) = local_34;
                    str = str + 80;
                } while (str != pbVar6);
            }
            lVar7 = (*local_50)[(long)field_280];
            plVar8 = (long*)(*((lVar7 + 32))).operator->();
            uVar3 = (**(void (**)(...))(*plVar8 + 40))(plVar8, &local_38, &local_34);
            if ((char)uVar3 != '\0') {
                iVar4 = eastl::max<unsigned int>(300, local_38);
                iVar5 = eastl::max<int>(0, local_34);
                field_36 = iVar4;
                field_40 = iVar5;
                field_332 = iVar5 + field_328;
                field_336 = iVar9;
                *local_58 = iVar4;
                *local_48 = field_332;
            }
        }
        return uVar3;
    }

    // 0x100a4f6a0
    void TabGroup::ClearControlSize() {
        long* plVar3;

        long lVar1 = field_248.HeapBeginPtr();
        long lVar2 = field_248.end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 80) {
            plVar3 = (long*)(*((lVar1 + 32))).operator->();
            (**(void (**)(...))(*plVar3 + 112))(plVar3);
        }
        ClearControlSize();
    }

    // 0x100a4f700
    unsigned long TabGroup::OnClick(float arg1, float arg2, bool arg3) {
        uint8_t* this_00;
        bool bVar1;
        bool cVar2;
        long lVar4;
        Control* pCVar5;
        long* plVar6;
        long lVar7;
        int iVar8;
        unsigned long uVar9;
        int arg1_00;
        shared_ptr<Container>* this_02;
        long lVar10;
        ReturnValue local_48;

        float local_38 = arg1;
        float local_34 = arg2;
        Event local_60 = field_104.lock();
        auto this_01 = local_60.operator->();
        auto piVar3 = this_01->GetOrigin();
        if (((float)*piVar3 <= local_38) && (local_38 <= (float)piVar3[2])) {
            if ((local_34 < (float)piVar3[1]) || ((float)(piVar3[1] + field_328) < local_34)) {
                lVar4 = field_248[(long)field_280];
                this_02 = (shared_ptr<Container>*)(lVar4 + 32);
                pCVar5 = (Control*)(*this_02).operator->();
                cVar2 = pCVar5->BoundsCheck(local_38, local_34);
                if (cVar2) {
                    plVar6 = (long*)(*this_02).operator->();
                    cVar2 = (**(void (**)(...))(*plVar6 + 48))(local_38, local_34, plVar6, arg3);
                    if (cVar2) {
                        uVar9 = (((uint64_t)((int64_t)((unsigned long)piVar3 >> 8)) << 8) | (uint8_t)1);
                        if (!arg3) {
                            pCVar5 = (Control*)(*this_02).operator->();
                            local_48.shared_from_this();
                            local_60 = Event(local_48, 2);
                            pCVar5->DoCallback(local_60);
                            local_48.shared_from_this();
                            local_60 = Event(local_48, 2);
                            DoCallback(local_60);
                        }
                        goto LAB_100a4f8da;
                    }
                }
                local_48.shared_from_this();
                local_60 = Event(local_48, 2);
                DoCallback(local_60);
            } else {
                arg1_00 = (int)local_38;
                iVar8 = (int)local_34;
                cVar2 = field_348->IsInside(arg1_00, iVar8);
                if (cVar2) {
                    uVar9 = 0;
                    iVar8 = eastl::max<int>(0, field_340 - 1);
                    field_340 = iVar8;
                    goto LAB_100a4f8da;
                }
                cVar2 = field_364->IsInside(arg1_00, iVar8);
                this_00 = &field_248;
                if (!cVar2) {
                    local_38 = (float)arg1_00;
                    local_34 = (float)iVar8;
                    lVar4 = this_00->HeapBeginPtr();
                    lVar7 = this_00->end();
                    iVar8 = 0;
                    if (lVar4 != lVar7) {
                        do {
                            lVar10 = lVar4 + 80;
                            if ((*(char*)(lVar4 + 72) == '\0') ||
                                (cVar2 = ((lVar4 + 56))->IsInside((int)local_38, (int)local_34), !cVar2)) {
                                iVar8 = iVar8 + 1;
                                bVar1 = false;
                            } else {
                                field_280 = iVar8;
                                local_48 = GetParent();
                                local_60 = local_48.lock();
                                plVar6 = (long*)local_60.operator->();
                                (**(void (**)(...))(*plVar6 + 112))(plVar6);
                                bVar1 = true;
                            }
                            uVar9 = 0;
                        } while ((!bVar1) && (lVar4 = lVar10, lVar10 != lVar7));
                        goto LAB_100a4f8da;
                    }
                } else {
                    iVar8 = this_00->size();
                    iVar8 = eastl::min<graphics::GraphicsQuality>(iVar8 - 1, field_340 + 1);
                    field_340 = iVar8;
                }
            }
        }
        uVar9 = 0;
    LAB_100a4f8da:
        return uVar9 & 4294967295;
    }

    // 0x100a4fab0
    uint64_t TabGroup::OnMouseOver(float arg1, float arg2) {
        long lVar3;
        long* plVar4;

        auto local_30 = field_104.lock();
        auto this_00 = local_30.operator->();
        auto piVar2 = this_00->GetOrigin();
        if (((float)*piVar2 <= arg1) && (arg1 <= (float)piVar2[2])) {
            lVar3 = field_248[(long)field_280];
            if (((Control*)(*((lVar3 + 32))).operator->())->BoundsCheck(arg1, arg2)) {
                plVar4 = (long*)(*((lVar3 + 32))).operator->();
                if ((**(void (**)(...))(*plVar4 + 64))(arg1, arg2, plVar4)) {
                    return 1;
                }
            }
        }
        return 0;
    }

    // 0x100a4fb90
    void TabGroup::DoOnShown() {
        long* plVar3;

        long lVar1 = field_248.HeapBeginPtr();
        long lVar2 = field_248.end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 80) {
            plVar3 = (long*)(*((lVar1 + 32))).operator->();
            (**(void (**)(...))(*plVar3 + 80))(plVar3);
        }
        DoOnShown();
    }

    // 0x100a4fbf0
    void TabGroup::Clear() {
        long* plVar3;

        uint8_t* this_00 = &field_248;
        long lVar1 = this_00->HeapBeginPtr();
        long lVar2 = this_00->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 80) {
            plVar3 = (long*)(*((lVar1 + 32))).operator->();
            (**(void (**)(...))(*plVar3 + 16))(plVar3);
        }
        this_00->clear();
        Clear();
    }

    // 0x100a4fc90
    void TabGroup::ResetToDefault() {
        long lVar1 = field_248[(long)field_280];
        long* plVar2 = (long*)(*((lVar1 + 32))).operator->();
        (**(void (**)(...))(*plVar2 + 96))(plVar2);
    }

    // 0x100a4fcc0
    void TabGroup::ResetAllToDefault() {
        long* plVar3;

        long lVar1 = field_248.HeapBeginPtr();
        long lVar2 = field_248.end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 80) {
            plVar3 = (long*)(*((lVar1 + 32))).operator->();
            (**(void (**)(...))(*plVar3 + 96))(plVar3);
        }
        ~AutoSingleton();
    }

    // 0x100a4fd20
    void TabGroup::InitDefault() {
        long* plVar3;

        long lVar1 = field_248.HeapBeginPtr();
        long lVar2 = field_248.end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 80) {
            plVar3 = (long*)(*((lVar1 + 32))).operator->();
            (**(void (**)(...))(*plVar3 + 88))(plVar3);
        }
        ~AutoSingleton();
    }

    // 0x100a52b00: TabGroup::~TabGroup() has the same machine code as DropdownGroup::~DropdownGroup()

} // namespace jag::tweak
