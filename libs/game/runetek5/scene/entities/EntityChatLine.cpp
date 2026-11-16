// libs/game/runetek5/scene/entities/EntityChatLine.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "EntityChatLine.h"

namespace jag {
    // 0x10011c770: EntityChatLine::GetTimeOut() const has the same machine code as eastl::rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>, eastl::fixed_node_allocator<48ul, 5ul, 8ul, 0ul, true>, eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>::size() const

    // 0x1001319d0: EntityChatLine::~EntityChatLine() has the same machine code as oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}::~BaseApp()

    // 0x10044a650
    EntityChatLine::EntityChatLine(const eastl::basic_string<char, BucketAllocatorEASTL>& str,
                                   EntityChatLine::ChatColour chatColour, EntityChatLine::ChatEffect chatEffect,
                                   unsigned long long arg4)
        : eastl::basic_string<char, BucketAllocatorEASTL>(), field_32(0), field_40(0), field_48(0), field_52(0) {
        Init(str, chatColour, chatEffect, arg4);
    }

    // 0x10044a6c0
    void EntityChatLine::Init(const eastl::basic_string<char, BucketAllocatorEASTL>& str,
                              EntityChatLine::ChatColour chatColour, EntityChatLine::ChatEffect chatEffect,
                              unsigned long long arg4) {
        field_24 = chatColour;
        field_28 = chatEffect;
        field_32 = arg4;
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long arg2 = str.size();
        assign(str_00, arg2);
    }

    // 0x10044a730
    void EntityChatLine::Destroy() {
        field_32 = 0;
        clear();
        field_40 = 0;
        field_48 = 0;
        field_52 = 0;
    }

    // 0x10044a760
    void EntityChatLine::MainDraw(graphics::RT7Core& rt7Core, graphics::FontHelpers& fontHelpers,
                                  EmojiRegistry* emojiRegistry, int arg4, int arg5, int arg6, graphics::Font& font,
                                  bool arg8, unsigned int arg9) {
        RT7Core* this_00;
        uint8_t bVar2;
        int iVar3;
        unsigned int uVar4;
        unsigned int* puVar6;
        long lVar7;
        shared_ptr<graphics::FontMetrics>* psVar8;
        FontMetrics* pFVar9;
        unsigned long uVar10;
        uint32_t in_register_00000084;
        int iVar11;
        unsigned long uVar12;
        unsigned int uVar13;
        int arg4_00;
        float fVar14;
        uint32_t uVar15;
        float fVar16;
        StringView local_b70;
        StringView local_b60;
        StringView local_b50;
        StringView local_b40;
        StringView local_b30;
        StringView local_b20;
        optional<int> local_b10;
        StringView local_b08;
        pair<int, int> local_ad0;
        StringView local_ac8;
        int local_a9c;
        int local_a98;
        float local_a94;
        float local_a90;
        TextProperties local_a88;

        uint64_t local_aa8 = (((uint64_t)in_register_00000084 << 32) | (uint32_t)arg4);
        long lVar5 = FrameTime::GetCurrentTimeMS();
        if (field_40 == 0) {
            field_40 = lVar5;
        }
        RT7Core* local_ab0 = rt7Core;
        fixed_string<char, 512> local_260;
        local_a88[0].m_pFont = (Font*)GetText<eastl::fixed_string<char, 512>>(this, &local_260, emojiRegistry);
        local_ac8.StringView<char const*>(*&local_a88);
        if (!arg8) {
            local_a88 = graphics::TextProperties(font);
            local_a88.SetAlignment(1);
            local_af8.m_pFont._0_4_ = 255;
            local_b10 = eastl::optional(local_af8);
            local_a88.SetColours(4294902015, &local_b10);
            local_b08 = StringView(local_ac8);
            fontHelpers.DrawString(&local_b08, (int)local_aa8, arg5, arg6, local_a88);
            goto LAB_10044b3cb;
        }
        ChatColour CVar1 = field_24;
        switch (CVar1) {
        case 6:
            uVar13 = 4294902015;
            if (field_48 % 20 < 10) {
                uVar13 = 4278190335;
            }
            break;
        case 7:
            uVar13 = 16777215;
            if (field_48 % 20 < 10) {
                uVar13 = 65535;
            }
            break;
        case 8:
            uVar13 = 2164228351;
            if (field_48 % 20 < 10) {
                uVar13 = 11534591;
            }
            break;
        case 9:
            lVar7 = field_40;
            uVar12 = lVar5 - lVar7;
            if ((long)uVar12 < 0) {
                fVar14 = (float)uVar12;
                uVar12 = field_32 - lVar7;
                if (-1 < (long)uVar12)
                    goto LAB_10044aa41;
            LAB_10044a996:
                fVar16 = (float)uVar12;
            } else {
                fVar14 = (float)(long)uVar12;
                uVar12 = field_32 - lVar7;
                if ((long)uVar12 < 0)
                    goto LAB_10044a996;
            LAB_10044aa41:
                fVar16 = (float)(long)uVar12;
            }
            iVar3 = (int)((fVar14 * 150.0) / fVar16);
            if (iVar3 < 101) {
                if (iVar3 < 51) {
                    if (iVar3 < 1)
                        goto LAB_10044abc9;
                    uVar13 = (50 - iVar3) * 1280 + 16711935;
                } else {
                    uVar13 = (100 - iVar3) * -83886080 - 65281;
                }
            } else {
                uVar13 = (150 - iVar3) * 327680 - 16776961;
            }
            break;
        case 10:
            lVar7 = field_40;
            uVar12 = lVar5 - lVar7;
            if ((long)uVar12 < 0) {
                fVar14 = (float)uVar12;
                uVar12 = field_32 - lVar7;
                if (-1 < (long)uVar12)
                    goto LAB_10044aa99;
            LAB_10044a9cf:
                fVar16 = (float)uVar12;
            } else {
                fVar14 = (float)(long)uVar12;
                uVar12 = field_32 - lVar7;
                if ((long)uVar12 < 0)
                    goto LAB_10044a9cf;
            LAB_10044aa99:
                fVar16 = (float)(long)uVar12;
            }
            iVar3 = (int)((fVar14 * 150.0) / fVar16);
            if (iVar3 < 101) {
                if (iVar3 < 51) {
                    if (iVar3 < 1)
                        goto LAB_10044abc9;
                    uVar13 = (50 - iVar3) * 83884800 + 65535;
                } else {
                    uVar13 = (100 - iVar3) * -83886080 - 16711681;
                }
            } else {
                uVar13 = (150 - iVar3) * 1280 - 16776961;
            }
            break;
        case 11:
            lVar7 = field_40;
            uVar12 = lVar5 - lVar7;
            if ((long)uVar12 < 0) {
                fVar14 = (float)uVar12;
                uVar12 = field_32 - lVar7;
                if (-1 < (long)uVar12)
                    goto LAB_10044aaf1;
            LAB_10044aa08:
                fVar16 = (float)uVar12;
            } else {
                fVar14 = (float)(long)uVar12;
                uVar12 = field_32 - lVar7;
                if ((long)uVar12 < 0)
                    goto LAB_10044aa08;
            LAB_10044aaf1:
                fVar16 = (float)(long)uVar12;
            }
            iVar3 = (int)((fVar14 * 150.0) / fVar16);
            if (iVar3 < 101) {
                if (iVar3 < 51) {
                    if (0 < iVar3) {
                        uVar13 = ~((50 - iVar3) * 83886080);
                        break;
                    }
                LAB_10044abc9:
                    uVar13 = 4294902015;
                } else {
                    uVar13 = (100 - iVar3) * 83887360 + 16711935;
                }
            } else {
                uVar13 = (150 - iVar3) * -83887360 - 1;
            }
            break;
        default:
            uVar13 = 4294902015;
            if ((int)CVar1 < 6) {
                puVar6 = (unsigned int*)(*((array<unsigned int, 6ul>*)(long)(int)CVar1))[(unsigned long)&local_a88];
                uVar13 = *puVar6;
            }
        }
        TextProperties local_af8(font);
        local_af8.SetAlignment(1);
        local_a88[0].m_pFont = (Font*)(((uint64_t)local_a88[0].m_pFont._4_4_ << 32) | (uint32_t)255);
        optional<int> local_b78(local_a88);
        local_af8.SetColours(uVar13, &local_b78);
        switch (field_28) {
        case 1:
            local_a88 = eastl::fixed_vector<std::pair<int, int>, 256ul>();
            lVar5 = local_ac8.HeapBeginPtr();
            if (lVar5 != 0) {
                uVar12 = 0;
                do {
                    local_a9c = 0;
                    fVar14 = (float)::sin((float)field_48 * 0.2 + (float)uVar12 * 0.5);
                    local_a98 = (int)(fVar14 * 5.0);
                    local_ad0.pair<int, int, false>(local_a9c, local_a98);
                    local_a88.push_back(local_ad0);
                    uVar12 = (unsigned long)((int)uVar12 + 1);
                    uVar10 = local_ac8.HeapBeginPtr();
                } while (uVar12 < uVar10);
            }
            local_b70 = StringView(local_ac8);
            graphics::FontHelpers::DrawStringCustomOffsets(
                fontHelpers, (int)&local_b70, (int)local_aa8, arg5,
                *((fixed_vector<std::pair<int, int>, _256ul>*)(unsigned long)(unsigned int)arg6), local_a88);
            break;
        case 2:
            local_a88 = eastl::fixed_vector<std::pair<int, int>, 256ul>();
            lVar5 = local_ac8.HeapBeginPtr();
            if (lVar5 != 0) {
                uVar12 = 0;
                do {
                    local_a90 = (float)uVar12;
                    local_ab0 = (RT7Core*)(((uint64_t)local_ab0._4_4_ << 32) | (uint32_t)((float)field_48));
                    fVar14 = (float)::sin(((float)field_48 + local_a90) * 0.2);
                    local_a9c = (int)(fVar14 * 5.0);
                    fVar14 = (float)::sin(local_ab0._0_4_ * 0.2 + local_a90 * 0.33333334f);
                    local_a98 = (int)(fVar14 * 5.0);
                    local_ad0.pair<int, int, false>(local_a9c, local_a98);
                    local_a88.push_back(local_ad0);
                    uVar12 = (unsigned long)((int)uVar12 + 1);
                    uVar10 = local_ac8.HeapBeginPtr();
                } while (uVar12 < uVar10);
            }
            local_b60 = StringView(local_ac8);
            graphics::FontHelpers::DrawStringCustomOffsets(
                fontHelpers, (int)&local_b60, (int)local_aa8, arg5,
                *((fixed_vector<std::pair<int, int>, _256ul>*)(unsigned long)(unsigned int)arg6), local_a88);
            break;
        case 3:
            local_a88 = eastl::fixed_vector<std::pair<int, int>, 256ul>();
            lVar7 = FrameTime::GetCurrentTimeMS();
            lVar5 = field_40;
            uVar12 = lVar7 - lVar5;
            if ((long)uVar12 < 0) {
                fVar14 = (float)uVar12;
                uVar12 = field_32 - lVar5;
                if (-1 < (long)uVar12)
                    goto LAB_10044b1d6;
            LAB_10044af31:
                fVar16 = (float)uVar12;
            } else {
                fVar14 = (float)(long)uVar12;
                uVar12 = field_32 - lVar5;
                if ((long)uVar12 < 0)
                    goto LAB_10044af31;
            LAB_10044b1d6:
                fVar16 = (float)(long)uVar12;
            }
            uVar15 = eastl::max_alt(0.0, (fVar14 * -15.0) / fVar16 + 7.0);
            local_ab0 = (RT7Core*)(((uint64_t)local_ab0._4_4_ << 32) | (uint32_t)uVar15);
            lVar5 = local_ac8.HeapBeginPtr();
            if (lVar5 != 0) {
                uVar12 = 0;
                do {
                    local_a9c = 0;
                    fVar14 = (float)::sin((float)field_48 + (float)uVar12 * 0.6666667f);
                    local_a98 = (int)(fVar14 * local_ab0._0_4_);
                    local_ad0.pair<int, int, false>(local_a9c, local_a98);
                    local_a88.push_back(local_ad0);
                    uVar12 = (unsigned long)((int)uVar12 + 1);
                    uVar10 = local_ac8.HeapBeginPtr();
                } while (uVar12 < uVar10);
            }
            local_b50 = StringView(local_ac8);
            graphics::FontHelpers::DrawStringCustomOffsets(
                fontHelpers, (int)&local_b50, (int)local_aa8, arg5,
                *((fixed_vector<std::pair<int, int>, _256ul>*)(unsigned long)(unsigned int)arg6), local_a88);
            break;
        case 4:
            lVar5 = FrameTime::GetCurrentTimeMS();
            local_a90 = (float)(unsigned long)(lVar5 - field_40);
            local_a94 = (float)(field_32 - field_40);
            local_a88 = graphics::ClippingState(local_ab0);
            psVar8 = (shared_ptr<graphics::FontMetrics>*)font.SSOBeginPtr();
            pFVar9 = (FontMetrics*)(*psVar8).operator->();
            uVar13 = pFVar9->GetMaxDescent();
            psVar8 = (shared_ptr<graphics::FontMetrics>*)font.SSOBeginPtr();
            pFVar9 = (FontMetrics*)(*psVar8).operator->();
            uVar4 = pFVar9->GetMaxAscent();
            psVar8 = (shared_ptr<graphics::FontMetrics>*)font.SSOBeginPtr();
            pFVar9 = (FontMetrics*)(*psVar8).operator->();
            iVar3 = (int)local_aa8;
            bVar2 = pFVar9->GetMaxDescent();
            local_ab0->SetClippingRectangle(iVar3 - 50, arg5 - (unsigned int)bVar2, 100, (uVar4 & 255) + (uVar13 & 255),
                                            false);
            local_b40 = StringView(local_ac8);
            fontHelpers.DrawString(&local_b40,
                                   (arg6 + (int)local_aa8 + 50) -
                                       (int)(((local_a90 + local_a90) * (float)(arg6 + 50)) / local_a94),
                                   arg5, arg6, local_af8);
            goto LAB_10044b3ad;
        case 5:
            lVar5 = FrameTime::GetCurrentTimeMS();
            local_a90 = (float)(unsigned long)(lVar5 - field_40);
            local_a94 = (float)(field_32 - field_40);
            psVar8 = (shared_ptr<graphics::FontMetrics>*)font.SSOBeginPtr();
            pFVar9 = (FontMetrics*)(*psVar8).operator->();
            uVar13 = pFVar9->GetMaxDescent();
            psVar8 = (shared_ptr<graphics::FontMetrics>*)font.SSOBeginPtr();
            pFVar9 = (FontMetrics*)(*psVar8).operator->();
            iVar3 = (int)((local_a90 * 150.0) / local_a94);
            bVar2 = pFVar9->GetMaxAscent();
            this_00 = local_ab0;
            arg4_00 = (unsigned int)bVar2 + (uVar13 & 255);
            if (iVar3 < 126) {
                iVar11 = 0;
                if (iVar3 < 25) {
                    iVar11 = (int)((float)arg4_00 * (float)(25 - iVar3) * 0.04);
                }
            } else {
                iVar11 = (int)((float)arg4_00 * (float)(iVar3 - 125) * -0.04);
            }
            local_a88 = graphics::ClippingState(local_ab0);
            this_00->SetClippingRectangle((int)local_aa8 - arg6 / 2, arg5, arg6, arg4_00, false);
            local_b30 = StringView(local_ac8);
            fontHelpers.DrawString(&local_b30, (int)local_aa8, iVar11 + arg5, arg6, local_af8);
        LAB_10044b3ad:
            goto LAB_10044b3b9;
        default:
            local_b20 = StringView(local_ac8);
            fontHelpers.DrawString(&local_b20, (int)local_aa8, arg5, arg6, local_af8);
            goto LAB_10044b3b9;
        }
    LAB_10044b3b9:
        if (field_52 != arg9) {
            field_52 = arg9;
            field_48 = field_48 + 1;
        }
    LAB_10044b3cb:
    }

    // 0x1004511c0
    game::ClientCompositeData* placement_new<game::ClientCompositeData>(void* arg1) {
        ___bzero(arg1, 9840);
        new (arg1) game::ClientCompositeData();
        return arg1;
    }

    // 0x1004511f0
    MakeSharedPoolRefCounter<game::ClientCompositeData, MakeSharedPool<game::ClientCompositeData, 8>>*
    placement_new<MakeSharedPoolRefCounter<game::ClientCompositeData, MakeSharedPool<game::ClientCompositeData, 8>>,
                  MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData*&, game::ClientCompositeData*>(
        void* arg1, MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData*& arg2,
        game::ClientCompositeData*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::ClientCompositeData, MakeSharedPool<game::ClientCompositeData, 8>>(
            arg2, arg3);
        return arg1;
    }

    // 0x100453f30
    game::MapEnvironmentSettings* placement_new<game::MapEnvironmentSettings, game::MapEnvironmentSettings&>(
        void* arg1, game::MapEnvironmentSettings& mapEnvironmentSettings) {
        new (arg1) game::MapEnvironmentSettings(mapEnvironmentSettings);
        return arg1;
    }

    // 0x100453f50
    ref_counter_shared<game::MapEnvironmentSettings>*
    placement_new<ref_counter_shared<game::MapEnvironmentSettings>, int, game::MapEnvironmentSettings*&>(
        void* arg1, int&& arg2, game::MapEnvironmentSettings*& arg3) {
        new (arg1) ref_counter_shared<game::MapEnvironmentSettings>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

// 0x10044d810
void sqrt(float arg1) {
    unsigned int in_XMM0_Db;
    uint32_t in_XMM0_Dc;
    uint32_t in_XMM0_Dd;
    uint8_t in_XMM1[16];
    uint8_t auVar1[16];

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = arg1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    float fVar2 = arg1 * auVar1._0_4_;
    return (((uint64_t)(~(in_XMM0_Db & 2147483647) & in_XMM0_Db) << 32) |
            (uint32_t)(~-(unsigned int)(ABS(arg1) < 1.1754944e-38) &
                       (unsigned int)((fVar2 * auVar1._0_4_ - 3.0) * fVar2 * -0.5)));
}

// 0x10044f170
void cos(float arg1) {
    _cosf();
}
