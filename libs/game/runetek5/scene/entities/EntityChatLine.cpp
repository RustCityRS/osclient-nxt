// libs/game/runetek5/scene/entities/EntityChatLine.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "EntityChatLine.h"

namespace jag {
    // 0x10011c770: the linker folded this into eastl::rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>, eastl::fixed_node_allocator<48ul, 5ul, 8ul, 0ul, true, eastl::allocator>, eastl::use_first<eastl::pair<int const, unsigned long> >, true, true>::size() const, which has identical code
    EntityChatLine::GetTimeOut() const;

    // 0x100131800: the linker folded this into oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}::~BaseApp(), which has identical code
    EntityChatLine::~EntityChatLine();

    // 0x1001319d0: the linker folded this into oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}::~BaseApp(), which has identical code
    EntityChatLine::~EntityChatLine();

    // 0x10044a650, 112 bytes, base-object constructor, placed by class name and debug map
    // EntityChatLine::EntityChatLine(eastl::basic_string<char, BucketAllocatorEASTL> const&, EntityChatLine::ChatColour, EntityChatLine::ChatEffect, unsigned long long)
    void EntityChatLine::EntityChatLine(undefined8 param_1, undefined4 param_3, undefined4 param_4,
                                        undefined8 param_5) {
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        field_32 = 0;
        field_40 = 0;
        field_48 = 0;
        field_52 = 0;
        Init(this, param_1, param_3, param_4, param_5);
    }

    // 0x10044a6c0, 80 bytes, placed by class name and debug map
    // EntityChatLine::Init(eastl::basic_string<char, BucketAllocatorEASTL> const&, EntityChatLine::ChatColour, EntityChatLine::ChatEffect, unsigned long long)
    void EntityChatLine::Init(undefined8 param_2, int param_3, undefined4 param_4, undefined8 param_5) {
        char* pcVar1;
        ulong uVar2;

        field_24 = param_3;
        field_28 = param_4;
        field_32 = param_5;
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        assign(pcVar1, uVar2);
    }

    // 0x10044a710, 16 bytes, complete-object constructor, placed by class name and debug map
    // EntityChatLine::EntityChatLine(eastl::basic_string<char, BucketAllocatorEASTL> const&, EntityChatLine::ChatColour, EntityChatLine::ChatEffect, unsigned long long): jumps straight to the base-object constructor

    // 0x10044a730, 48 bytes, placed by class name and debug map
    // EntityChatLine::Destroy()
    void EntityChatLine::Destroy() {
        field_32 = 0;
        eastl::string::clear();
        field_40 = 0;
        field_48 = 0;
        field_52 = 0;
    }

    // 0x10044a760, 3376 bytes, placed by class name and debug map
    // EntityChatLine::MainDraw(graphics::RT7Core&, graphics::FontHelpers&, EmojiRegistry*, int, int, int, graphics::Font&, bool, unsigned int)
    void EntityChatLine::MainDraw(RT7Core* param_1, FontHelpers* param_2, EmojiRegistry* param_3, int param_4,
                                  int param_5, int param_6, Font* param_7, bool param_8, uint param_9) {
        byte bVar1;
        int iVar2;
        uint uVar3;
        long lVar4;
        uint* puVar5;
        long lVar6;
        vector* pvVar7;
        FontMetrics* pFVar8;
        ulong uVar9;
        type* ptVar10;
        RT7Core* pRVar11;
        undefined4 in_register_00000084;
        int iVar12;
        ulong uVar13;
        uint uVar14;
        int iVar15;
        float fVar16;
        undefined4 uVar17;
        float fVar18;
        StringView SVar19;
        StringView SVar20;
        StringView SVar21;
        StringView SVar22;
        StringView SVar23;
        StringView SVar24;
        StringView SVar25;
        TextProperties* in_stack_fffffffffffff478;
        TextProperties* in_stack_fffffffffffff480;
        optional<int> local_b78[8];
        StringView local_b70;
        StringView local_b60;
        StringView local_b50;
        StringView local_b40;
        StringView local_b30;
        StringView local_b20;
        optional<int> local_b10[8];
        StringView local_b08;
        TextProperties local_af8;
        pair<int, int> local_ad0[8];
        StringView local_ac8;
        RT7Core* local_ab0;
        uchar* local_aa8;
        int local_a9c;
        int local_a98;
        float local_a94;
        float local_a90;
        TextProperties local_a88[58];
        fixed_string<char, 512, true, eastl::allocator> local_260[552];
        undefined8 local_38;

        local_aa8 = (uchar*)CONCAT44(in_register_00000084, param_4);
        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        lVar4 = FrameTime::GetCurrentTimeMS();
        if (field_40 == 0) {
            field_40 = lVar4;
        }
        local_ab0 = param_1;
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(local_260);
        local_a88[0].m_pFont = (Font*)GetText<eastl::fixed_string<char, 512, true, eastl::allocator>>(
            this, (fixed_string*)local_260, param_3);
        StringView::StringView<char const*>(&local_ac8, (char**)local_a88);
        if (!param_8) {
            graphics::TextProperties::TextProperties(local_a88, param_7);
            local_a88->SetAlignment(1);
            local_af8.m_pFont._0_4_ = 255;
            eastl::optional<int>::optional(local_b10, (int*)&local_af8);
            local_a88->SetColours(4294902015, local_b10);
            new (&local_b08) StringView(&local_ac8);
            SVar19.field_8 = local_aa8;
            SVar19.field_0 = (ulong)&local_b08;
            param_2->DrawString(SVar19, param_5, param_6, (uint)local_a88, in_stack_fffffffffffff478);
            goto LAB_10044b3cb;
        }
        iVar2 = field_24;
        switch (iVar2) {
        case 6:
            uVar14 = 4294902015;
            if (field_48 % 20 < 10) {
                uVar14 = 4278190335;
            }
            break;
        case 7:
            uVar14 = 16777215;
            if (field_48 % 20 < 10) {
                uVar14 = 65535;
            }
            break;
        case 8:
            uVar14 = 2164228351;
            if (field_48 % 20 < 10) {
                uVar14 = 11534591;
            }
            break;
        case 9:
            lVar6 = field_40;
            uVar13 = lVar4 - lVar6;
            if ((long)uVar13 < 0) {
                fVar16 = (float)uVar13;
                uVar13 = field_32 - lVar6;
                if (-1 < (long)uVar13)
                    goto LAB_10044aa41;
            LAB_10044a996:
                fVar18 = (float)uVar13;
            } else {
                fVar16 = (float)(long)uVar13;
                uVar13 = field_32 - lVar6;
                if ((long)uVar13 < 0)
                    goto LAB_10044a996;
            LAB_10044aa41:
                fVar18 = (float)(long)uVar13;
            }
            iVar2 = (int)((fVar16 * 150.0) / fVar18);
            if (iVar2 < 101) {
                if (iVar2 < 51) {
                    if (iVar2 < 1)
                        goto LAB_10044abc9;
                    uVar14 = (50 - iVar2) * 1280 + 16711935;
                } else {
                    uVar14 = (100 - iVar2) * -83886080 - 65281;
                }
            } else {
                uVar14 = (150 - iVar2) * 327680 - 16776961;
            }
            break;
        case 10:
            lVar6 = field_40;
            uVar13 = lVar4 - lVar6;
            if ((long)uVar13 < 0) {
                fVar16 = (float)uVar13;
                uVar13 = field_32 - lVar6;
                if (-1 < (long)uVar13)
                    goto LAB_10044aa99;
            LAB_10044a9cf:
                fVar18 = (float)uVar13;
            } else {
                fVar16 = (float)(long)uVar13;
                uVar13 = field_32 - lVar6;
                if ((long)uVar13 < 0)
                    goto LAB_10044a9cf;
            LAB_10044aa99:
                fVar18 = (float)(long)uVar13;
            }
            iVar2 = (int)((fVar16 * 150.0) / fVar18);
            if (iVar2 < 101) {
                if (iVar2 < 51) {
                    if (iVar2 < 1)
                        goto LAB_10044abc9;
                    uVar14 = (50 - iVar2) * 83884800 + 65535;
                } else {
                    uVar14 = (100 - iVar2) * -83886080 - 16711681;
                }
            } else {
                uVar14 = (150 - iVar2) * 1280 - 16776961;
            }
            break;
        case 11:
            lVar6 = field_40;
            uVar13 = lVar4 - lVar6;
            if ((long)uVar13 < 0) {
                fVar16 = (float)uVar13;
                uVar13 = field_32 - lVar6;
                if (-1 < (long)uVar13)
                    goto LAB_10044aaf1;
            LAB_10044aa08:
                fVar18 = (float)uVar13;
            } else {
                fVar16 = (float)(long)uVar13;
                uVar13 = field_32 - lVar6;
                if ((long)uVar13 < 0)
                    goto LAB_10044aa08;
            LAB_10044aaf1:
                fVar18 = (float)(long)uVar13;
            }
            iVar2 = (int)((fVar16 * 150.0) / fVar18);
            if (iVar2 < 101) {
                if (iVar2 < 51) {
                    if (0 < iVar2) {
                        uVar14 = ~((50 - iVar2) * 83886080);
                        break;
                    }
                LAB_10044abc9:
                    uVar14 = 4294902015;
                } else {
                    uVar14 = (100 - iVar2) * 83887360 + 16711935;
                }
            } else {
                uVar14 = (150 - iVar2) * -83887360 - 1;
            }
            break;
        default:
            uVar14 = 4294902015;
            if (iVar2 < 6) {
                puVar5 = (uint*)std::array<unsigned int, 6ul>::operator[]((long)iVar2);
                uVar14 = *puVar5;
            }
        }
        new (&local_af8) graphics::TextProperties(param_7);
        local_af8.SetAlignment(1);
        local_a88[0].m_pFont = (Font*)CONCAT44(local_a88[0].m_pFont._4_4_, 255);
        eastl::optional<int>::optional(local_b78, (int*)local_a88);
        ptVar10 = (type*)(ulong)uVar14;
        local_af8.SetColours(ptVar10, local_b78);
        switch (field_28) {
        case 1:
            new (local_a88) eastl::fixed_vector<std::pair<int, int>, 256ul, true, eastl::allocator>();
            lVar4 = local_ac8.HeapBeginPtr();
            if (lVar4 != 0) {
                uVar13 = 0;
                do {
                    local_a9c = 0;
                    fVar16 = (float)::sin((float)field_48 * 0.2 + (float)uVar13 * 0.5);
                    local_a98 = (int)(fVar16 * 5.0);
                    std::pair<int, int>::pair<int, int, false>(local_ad0, &local_a9c, &local_a98);
                    local_a88->push_back(local_ad0);
                    uVar13 = (ulong)((int)uVar13 + 1);
                    uVar9 = local_ac8.HeapBeginPtr();
                } while (uVar13 < uVar9);
            }
            new (&local_b70) StringView(&local_ac8);
            SVar20.field_8 = local_aa8;
            SVar20.field_0 = (ulong)&local_b70;
            param_2->DrawStringCustomOffsets(SVar20, param_5, param_6, (int)local_a88, (fixed_vector*)&local_af8,
                                             in_stack_fffffffffffff480);
            break;
        case 2:
            new (local_a88) eastl::fixed_vector<std::pair<int, int>, 256ul, true, eastl::allocator>();
            lVar4 = local_ac8.HeapBeginPtr();
            if (lVar4 != 0) {
                uVar13 = 0;
                do {
                    local_a90 = (float)uVar13;
                    local_ab0 = (RT7Core*)CONCAT44(local_ab0._4_4_, (float)field_48);
                    fVar16 = (float)::sin(((float)field_48 + local_a90) * 0.2);
                    local_a9c = (int)(fVar16 * 5.0);
                    fVar16 = (float)::sin(local_ab0._0_4_ * 0.2 + local_a90 * 0.33333334);
                    local_a98 = (int)(fVar16 * 5.0);
                    std::pair<int, int>::pair<int, int, false>(local_ad0, &local_a9c, &local_a98);
                    local_a88->push_back(local_ad0);
                    uVar13 = (ulong)((int)uVar13 + 1);
                    uVar9 = local_ac8.HeapBeginPtr();
                } while (uVar13 < uVar9);
            }
            new (&local_b60) StringView(&local_ac8);
            SVar22.field_8 = local_aa8;
            SVar22.field_0 = (ulong)&local_b60;
            param_2->DrawStringCustomOffsets(SVar22, param_5, param_6, (int)local_a88, (fixed_vector*)&local_af8,
                                             in_stack_fffffffffffff480);
            break;
        case 3:
            new (local_a88) eastl::fixed_vector<std::pair<int, int>, 256ul, true, eastl::allocator>();
            lVar6 = FrameTime::GetCurrentTimeMS();
            lVar4 = field_40;
            uVar13 = lVar6 - lVar4;
            if ((long)uVar13 < 0) {
                fVar16 = (float)uVar13;
                uVar13 = field_32 - lVar4;
                if (-1 < (long)uVar13)
                    goto LAB_10044b1d6;
            LAB_10044af31:
                fVar18 = (float)uVar13;
            } else {
                fVar16 = (float)(long)uVar13;
                uVar13 = field_32 - lVar4;
                if ((long)uVar13 < 0)
                    goto LAB_10044af31;
            LAB_10044b1d6:
                fVar18 = (float)(long)uVar13;
            }
            uVar17 = eastl::max_alt(0.0, (fVar16 * -15.0) / fVar18 + 7.0);
            local_ab0 = (RT7Core*)CONCAT44(local_ab0._4_4_, uVar17);
            lVar4 = local_ac8.HeapBeginPtr();
            if (lVar4 != 0) {
                uVar13 = 0;
                do {
                    local_a9c = 0;
                    fVar16 = (float)::sin((float)field_48 + (float)uVar13 * 0.6666667);
                    local_a98 = (int)(fVar16 * local_ab0._0_4_);
                    std::pair<int, int>::pair<int, int, false>(local_ad0, &local_a9c, &local_a98);
                    local_a88->push_back(local_ad0);
                    uVar13 = (ulong)((int)uVar13 + 1);
                    uVar9 = local_ac8.HeapBeginPtr();
                } while (uVar13 < uVar9);
            }
            new (&local_b50) StringView(&local_ac8);
            SVar24.field_8 = local_aa8;
            SVar24.field_0 = (ulong)&local_b50;
            param_2->DrawStringCustomOffsets(SVar24, param_5, param_6, (int)local_a88, (fixed_vector*)&local_af8,
                                             in_stack_fffffffffffff480);
            break;
        case 4:
            lVar4 = FrameTime::GetCurrentTimeMS();
            local_a90 = (float)(ulong)(lVar4 - field_40);
            local_a94 = (float)(ulong)(field_32 - field_40);
            pRVar11 = local_ab0;
            new (local_a88) graphics::ClippingState(local_ab0);
            pvVar7 = param_7->SSOBeginPtr(pRVar11);
            pFVar8 =
                (FontMetrics*)shared_ptr<graphics::FontMetrics>::operator->((shared_ptr<graphics::FontMetrics>*)pvVar7);
            uVar14 = pFVar8->GetMaxDescent();
            pvVar7 = param_7->SSOBeginPtr(pRVar11);
            pFVar8 =
                (FontMetrics*)shared_ptr<graphics::FontMetrics>::operator->((shared_ptr<graphics::FontMetrics>*)pvVar7);
            uVar3 = pFVar8->GetMaxAscent();
            pvVar7 = param_7->SSOBeginPtr(pRVar11);
            pFVar8 =
                (FontMetrics*)shared_ptr<graphics::FontMetrics>::operator->((shared_ptr<graphics::FontMetrics>*)pvVar7);
            iVar2 = (int)local_aa8;
            bVar1 = pFVar8->GetMaxDescent();
            local_ab0->SetClippingRectangle(iVar2 + -50, param_5 - (uint)bVar1, 100, (uVar3 & 255) + (uVar14 & 255),
                                            false);
            new (&local_b40) StringView(&local_ac8);
            SVar23.field_8._0_4_ =
                (param_6 + (int)local_aa8 + 50) - (int)(((local_a90 + local_a90) * (float)(param_6 + 50)) / local_a94);
            SVar23.field_0 = (ulong)&local_b40;
            SVar23.field_8._4_4_ = 0;
            param_2->DrawString(SVar23, param_5, param_6, (uint)&local_af8, in_stack_fffffffffffff478);
            goto LAB_10044b3ad;
        case 5:
            lVar4 = FrameTime::GetCurrentTimeMS();
            uVar13 = lVar4 - field_40;
            if ((long)uVar13 < 0) {
                ptVar10 = (type*)(uVar13 >> 1);
            }
            local_a90 = (float)uVar13;
            local_a94 = (float)(ulong)(field_32 - field_40);
            pvVar7 = param_7->SSOBeginPtr(ptVar10);
            pFVar8 =
                (FontMetrics*)shared_ptr<graphics::FontMetrics>::operator->((shared_ptr<graphics::FontMetrics>*)pvVar7);
            uVar14 = pFVar8->GetMaxDescent();
            pvVar7 = param_7->SSOBeginPtr(ptVar10);
            pFVar8 =
                (FontMetrics*)shared_ptr<graphics::FontMetrics>::operator->((shared_ptr<graphics::FontMetrics>*)pvVar7);
            iVar2 = (int)((local_a90 * 150.0) / local_a94);
            bVar1 = pFVar8->GetMaxAscent();
            pRVar11 = local_ab0;
            iVar15 = (uint)bVar1 + (uVar14 & 255);
            if (iVar2 < 126) {
                iVar12 = 0;
                if (iVar2 < 25) {
                    iVar12 = (int)((float)iVar15 * (float)(25 - iVar2) * 0.04);
                }
            } else {
                iVar12 = (int)((float)iVar15 * (float)(iVar2 + -125) * -0.04);
            }
            new (local_a88) graphics::ClippingState(local_ab0);
            pRVar11->SetClippingRectangle((int)local_aa8 - param_6 / 2, param_5, param_6, iVar15, false);
            new (&local_b30) StringView(&local_ac8);
            SVar25.field_8 = local_aa8;
            SVar25.field_0 = (ulong)&local_b30;
            param_2->DrawString(SVar25, iVar12 + param_5, param_6, (uint)&local_af8, in_stack_fffffffffffff478);
        LAB_10044b3ad:
            local_a88->~ClippingState();
            goto LAB_10044b3b9;
        default:
            new (&local_b20) StringView(&local_ac8);
            SVar21.field_8 = local_aa8;
            SVar21.field_0 = (ulong)&local_b20;
            param_2->DrawString(SVar21, param_5, param_6, (uint)&local_af8, in_stack_fffffffffffff478);
            goto LAB_10044b3b9;
        }
        local_a88->~fixed_vector();
    LAB_10044b3b9:
        if (field_52 != param_9) {
            field_52 = param_9;
            field_48 = field_48 + 1;
        }
    LAB_10044b3cb:
        /* WARNING: Subroutine does not return */
        local_260->~fixed_string();
    }

    // 0x1004511c0, 48 bytes, inline, placed by debug map only (low confidence)
    // game::ClientCompositeData* placement_new<game::ClientCompositeData>(void*)
    ClientCompositeData* placement_new<game::ClientCompositeData>(void* param_1) {
        ___bzero(param_1, 9840);
        game::ClientCompositeData::ClientCompositeData(param_1);
        return param_1;
    }

    // 0x1004511f0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::ClientCompositeData, MakeSharedPool<game::ClientCompositeData, 8> >* placement_new<MakeSharedPoolRefCounter<game::ClientCompositeData, MakeSharedPool<game::ClientCompositeData, 8> >, MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData*&, game::ClientCompositeData*>(void*, MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData*&, game::ClientCompositeData*&&)
    MakeSharedPoolRefCounter* jag::placement_new<
        MakeSharedPoolRefCounter<game::ClientCompositeData, MakeSharedPool<game::ClientCompositeData, 8>>,
        MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData*&, game::ClientCompositeData*>(
        void* param_1, RefCounterAndData** param_2, ClientCompositeData** param_3) {
        MakeSharedPoolRefCounter<game::ClientCompositeData,
                                 MakeSharedPool<game::ClientCompositeData, 8>>::MakeSharedPoolRefCounter(param_1,
                                                                                                         *param_2,
                                                                                                         *param_3);
        return param_1;
    }

    // 0x100453f30, 32 bytes, inline, placed by debug map only (low confidence)
    // game::MapEnvironmentSettings* placement_new<game::MapEnvironmentSettings, game::MapEnvironmentSettings&>(void*, game::MapEnvironmentSettings&)
    MapEnvironmentSettings*
    placement_new<game::MapEnvironmentSettings, game::MapEnvironmentSettings&>(void* param_1,
                                                                               MapEnvironmentSettings* param_2) {
        game::MapEnvironmentSettings::MapEnvironmentSettings(param_1, param_2);
        return param_1;
    }

    // 0x100453f50, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::MapEnvironmentSettings>* placement_new<ref_counter_shared<game::MapEnvironmentSettings>, int, game::MapEnvironmentSettings*&>(void*, int&&, game::MapEnvironmentSettings*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<game::MapEnvironmentSettings>, int, game::MapEnvironmentSettings*&>(
        void* param_1, int* param_2, MapEnvironmentSettings** param_3) {
        ref_counter_shared<game::MapEnvironmentSettings>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

} // namespace jag

// 0x10044d810, 64 bytes, placed by debug map only (low confidence)
// sqrt(float)
undefined8 sqrt(float param_1) {
    uint in_XMM0_Db;
    undefined4 in_XMM0_Dc;
    undefined4 in_XMM0_Dd;
    undefined1 in_XMM1[16];
    undefined1 auVar1[16];
    float fVar2;

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = param_1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    fVar2 = param_1 * auVar1._0_4_;
    return CONCAT44(~(in_XMM0_Db & 2147483647) & in_XMM0_Db,
                    ~-(uint)(ABS(param_1) < 1.1754944e-38) & (uint)((fVar2 * auVar1._0_4_ + -3.0) * fVar2 * -0.5));
}

// 0x10044f170, 16 bytes, placed by debug map only (low confidence)
// cos(float)
void cos(float param_1) {
    _cosf();
}
