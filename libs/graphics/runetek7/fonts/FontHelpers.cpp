// libs/graphics/runetek7/fonts/FontHelpers.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "FontHelpers.h"
#include "TextRun.h"

namespace jag::graphics {
    // 0x100f442f8
    int32_t FontHelpers::ltCharCode = 60;

    // 0x100f442fc
    int32_t FontHelpers::gtCharCode = 62;

    // 0x100f44300
    int32_t FontHelpers::spaceCharCode = 32;

    // 0x100f44304
    int32_t FontHelpers::nbspCharCode = 160;

    // 0x100f44308
    int32_t FontHelpers::shyCharCode = 173;

    // 0x100f4430c
    int32_t FontHelpers::timesCharCode = 215;

    // 0x100f44310
    int32_t FontHelpers::euroCharCode = 128;

    // 0x100f44314
    int32_t FontHelpers::copyCharCode = 169;

    // 0x100f44318
    int32_t FontHelpers::regCharCode = 174;

    // 0x100f4431c
    int32_t FontHelpers::hyphenCharCode = 45;

    // 0x100f44320
    int32_t FontHelpers::newlineCharCode = 10;

    // 0x100f44324
    int32_t FontHelpers::tabCharCode = 9;

    // 0x100f44328
    int32_t FontHelpers::m_overrideDrawAutoWrapWidth = -1;

    // 0x100f44428
    int64_t FontHelpers::m_overrideTruncatedStringLength = 4294967295;

    // 0x103bc0410
    int64_t FontHelpers::m_highlightNonVectorFonts;

    // 0x103bc0418, set at startup by ___cxx_global_var_init.14
    Array<FontHelpers::ModIconReference> FontHelpers::m_modIcons = Array<FontHelpers::ModIconReference>();

    // 0x103bc0430
    uint8_t FontHelpers::m_callbackGetSpriteReference[48];

    // 0x10011c9a0: FontHelpers::ModIconReference::~ModIconReference() has the same machine code as oldscape::dash3d::ModelAppender::~ModelAppender()

    // 0x10012a760: FontHelpers::ModIconReference::~ModIconReference() has the same machine code as eastl::pair<oldscape::Font const, shared_ptr<oldscape::jstring::PixfontGeneric>>::~pair()

    // 0x100426b50: FontHelpers::ModIconReference::ModIconReference(FontHelpers::ModIconReference&&) has the same machine code as HardCodedSprites::SpriteReference::SpriteReference(HardCodedSprites::SpriteReference&&)

    // 0x100426bd0: FontHelpers::ModIconReference::ModIconReference() has the same machine code as HardCodedSprites::SpriteReference::SpriteReference()

    // 0x1008dfe70
    unsigned long ParseSpriteData(StringView stringView, int& arg2, int& arg3) {
        bool cVar2;
        StringView* stringView_00;
        StringView* stringView_01;
        Logger* logger;
        unsigned long uVar5;

        arg3 = 0;
        int* local_38 = arg3;
        auto local_58 = stringView->split(',');
        stringView_00 = (StringView*)std::get<0ul, StringView, StringView>(local_58);
        stringView_01 = (StringView*)std::get<1ul, StringView, StringView>(local_58);
        bool bVar1 = FromString<StringView, int>(stringView_00, arg2, 10);
        if (bVar1) {
            cVar2 = stringView_01->empty();
            uVar5 = (((uint64_t)((int64_t)((unsigned long)arg2 >> 8)) << 8) | (uint8_t)1);
            if (cVar2)
                goto LAB_1008dff40;
            bVar1 = FromString<StringView, int>(stringView_01, local_38, 10);
            if (bVar1)
                goto LAB_1008dff40;
        }
        logger = logger::default_logger();
        uint64_t uVar3 = stringView->HeapBeginPtr();
        uint64_t uVar4 = stringView->end();
        uVar5 = 0;
        logger->Log(false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                    "FontHelpers.cpp",
                    46, "could not parse sprite data from \'sprite=%.*s\'", uVar3, uVar4);
    LAB_1008dff40:
        return uVar5 & 4294967295;
    }

    // 0x1008e0060
    FontHelpers::FontHelpers() : field_32(nullptr) {}

    // 0x1008e0080
    FontHelpers::~FontHelpers() {
        if (m_modIcons.empty() == '\0') {
            LogAssert("m_modIcons.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "FontHelpers.cpp",
                      57, nullptr);
        }
    }

    // 0x1008e00d0
    void FontHelpers::Initialise(GUIManager* guiManager) {
        field_32 = guiManager;
    }

    // 0x1008e00e0
    void FontHelpers::Shutdown() {
        m_modIcons.clear();
    }

    // 0x1008e0150
    void FontHelpers::SetModIcons(Array<FontHelpers::ModIconReference>&& modIconReferences) {
        m_modIcons.swap(modIconReferences);
    }

    // 0x1008e0170
    uint64_t FontHelpers::DrawString(StringView stringView, int arg2, int arg3, unsigned int arg4,
                                     const TextProperties& textProperties) {
        uint8_t bVar2;
        uint8_t bVar3;
        FontMetrics* this_00;
        int iVar5;
        StringView local_58;

        bool cVar1 = stringView->empty();
        uint64_t uVar4 = 0;
        if (!cVar1) {
            ResetState(textProperties);
            this_00 = textProperties.GetFontMetrics();
            cVar1 = this_00->IsVectorFont();
            if (!cVar1) {
                iVar5 = this_00->GetVerticalSpacing();
            } else {
                bVar2 = this_00->GetMaxAscent();
                bVar3 = this_00->GetMaxDescent();
                iVar5 = (unsigned int)bVar2 - (unsigned int)bVar3;
            }
            iVar5 = iVar5 + arg3;
            local_58 = StringView(*stringView);
            uVar4 = DrawAlignedString((StringView*)this, (int)&local_58, arg2, iVar5,
                                      (fixed_vector<std::pair<int, int>, _256ul>*)(unsigned long)arg4, nullptr);
        }
        return uVar4;
    }

    // 0x1008e02e0
    unsigned int FontHelpers::DrawAlignedString(StringView stringView, int arg2, int arg3, int arg4,
                                                const eastl::fixed_vector<std::pair<int, int>, 256ul>* pairs,
                                                const TextProperties& textProperties) {
        uint8_t bVar3;
        bool bVar4;
        unsigned int uVar5;
        unsigned int arg2_00;
        uint32_t uVar6;
        StringView* stringView;
        uint32_t in_register_00000034;
        FontHelpers* this_00;
        TextProperties* in_stack_00000008;
        StringView local_d0;
        StringView local_c0;
        StringView local_b0;
        StringView local_a0;
        StringView local_90;
        StringView local_80;
        StringView local_70;
        StringView local_60;

        StringView* stringView_00 = (StringView*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        FontHelpers* local_48 = (FontHelpers*)stringView;
        if (stringView_00->empty() != '\0') {
            LogAssert("!string.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "FontHelpers.cpp",
                      1241, nullptr);
        }
        auto fontMetrics = in_stack_00000008->GetFontMetrics();
        switch (in_stack_00000008->GetHorizontalAlignment()) {
        case 0:
            local_d0 = StringView(*stringView_00);
            uVar5 = DrawStringInner(local_48, &local_d0, arg3, arg4,
                                    (fixed_vector<std::pair<int, int>, _256ul>*)textProperties, in_stack_00000008);
            return uVar5;
        case 1:
            local_c0 = StringView(*stringView_00);
            bVar4 = (bool)in_stack_00000008->HasFlag(1);
            arg2_00 = GetStringWidth(&local_c0, fontMetrics, bVar4);
            stringView = &local_b0;
            new (stringView) StringView(*stringView_00);
            uVar5 = (int)arg2_00 / 2;
            break;
        case 2:
            local_a0 = StringView(*stringView_00);
            bVar4 = (bool)in_stack_00000008->HasFlag(1);
            arg2_00 = GetStringWidth(&local_a0, fontMetrics, bVar4);
            stringView = &local_90;
            new (stringView) StringView(*stringView_00);
            uVar5 = arg2_00;
            break;
        case 3:
            local_80 = StringView(*stringView_00);
            bVar4 = (bool)in_stack_00000008->HasFlag(1);
            arg2_00 = GetStringWidth(&local_80, fontMetrics, bVar4);
            local_70 = StringView(*stringView_00);
            bVar4 = (bool)in_stack_00000008->HasFlag(1);
            uVar6 = CalculateExtraSpaceWidthForJustify(&local_70, arg2_00, (unsigned int)pairs, bVar4);
            this_00 = local_48;
            *(uint32_t*)&local_48->field_16 = uVar6;
            local_60 = StringView(*stringView_00);
            stringView = &local_60;
            uVar5 = arg2_00;
            goto LAB_1008e04e4;
        default:
            bVar3 = in_stack_00000008->GetHorizontalAlignment();
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "fonts/FontHelpers.cpp",
                            1269, "FontHelpers: Unknown align mode: %i", (unsigned long)bVar3);
        }
        this_00 = local_48;
    LAB_1008e04e4:
        DrawStringInner(this_00, stringView, arg3 - uVar5, arg4,
                        (fixed_vector<std::pair<int, int>, _256ul>*)textProperties, in_stack_00000008);
        return arg2_00;
    }

    // 0x1008e0520
    void FontHelpers::DrawStringIn3DSpace(const math::Vector3T<float>& vector3, const math::Matrix44T<float>& matrix441,
                                          const math::Matrix44T<float>& matrix442, const char* str, unsigned long arg5,
                                          const TextProperties& textProperties) {
        int iVar1;
        TextProperties* in_stack_00000008;
        Matrix44T<float> local_a8;
        StringView local_60;
        float local_38;
        float local_34;

        Matrix44T<float> local_e8;
        local_a8** str;
        local_e8 = local_a8;
        new (&local_a8) math::Vector4T(matrix441, 1.0);
        local_a8 *= &local_e8;
        auto pfVar2 = local_a8.qw();
        if (0.0 < *pfVar2) {
            pfVar2 = (float*)local_a8.qw();
            local_34 = *pfVar2;
            pfVar2 = (float*)local_a8.SSOBeginPtr();
            *pfVar2 = *pfVar2 / local_34;
            pfVar2 = (float*)local_a8.qw();
            local_34 = *pfVar2;
            pfVar2 = (float*)local_a8.y();
            *pfVar2 = *pfVar2 / local_34;
            pfVar2 = (float*)local_a8.SSOBeginPtr();
            local_34 = *pfVar2 * 0.5 + 0.5;
            iVar1 = ((GameToken*)((FontHelpers*)vector3)->field_32)->GetStatus();
            local_34 = (float)iVar1 * local_34;
            pfVar2 = (float*)local_a8.y();
            local_38 = *pfVar2 * 0.5 + 0.5;
            iVar1 = ((ImPool<ImGuiTabBar>*)((FontHelpers*)vector3)->field_32)->GetAliveCount();
            local_38 = (float)iVar1 * local_38;
            local_60 = StringView(arg5, (unsigned long)textProperties);
            DrawString((FontHelpers*)vector3, &local_60, (int)local_34, (int)local_38, 0, in_stack_00000008);
        }
    }

    // 0x1008e0730
    void FontHelpers::DrawStringMultiline(StringView stringView, int arg2, int arg3, int arg4, int arg5,
                                          unsigned int* arg6, const TextProperties& textProperties) {
        FontHelpers* this_00;
        TextFlags TVar2;
        uint8_t bVar4;
        bool bVar5;
        int iVar6;
        unsigned int uVar7;
        unsigned int uVar8;
        int iVar9;
        FontAlign FVar10;
        int iVar11;
        uint32_t uVar12;
        FontMetrics* this_01;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        char* str;
        unsigned long uVar13;
        StringView* pSVar14;
        long lVar15;
        unsigned long uVar16;
        unsigned int* arg4_00;
        StringView local_308;
        StringView local_2f8;
        StringView local_2e8;
        StringView local_2d8;
        StringView local_2c8;
        StringView local_2b8;
        StringView local_2a8;
        StringView local_298;
        StringView local_288;
        StringView local_278;
        StringView local_268;
        int local_24c;
        FontMetrics* local_248;
        FontHelpers* local_240;
        int local_22c;
        fixed_string<char, 256> local_228;
        fixed_vector<StringView, 10ul, true, BucketAllocatorEASTL> local_100;

        unsigned int local_230 = arg4;
        if (stringView->empty() == '\0') {
            local_240 = this;
            local_22c = arg5;
            ResetState(textProperties);
            this_01 = textProperties.GetFontMetrics();
            iVar6 = textProperties.GetLineSpacing();
            local_24c = iVar6;
            uVar7 = this_01->GetMaxAscent();
            local_248 = this_01;
            uVar8 = this_01->GetMaxDescent();
            iVar11 = *(int*)PTR_m_overrideDrawAutoWrapWidth_100ee69a0;
            local_100 = eastl::fixed_vector<StringView, 10ul, true, BucketAllocatorEASTL>();
            local_308 = StringView(*stringView);
            arg4_00 = nullptr;
            if (iVar6 * 2 <= local_22c) {
                arg4_00 = &local_230;
            }
            if ((int)((uVar7 & 255) + iVar6 + (uVar8 & 255)) <= local_22c) {
                arg4_00 = &local_230;
            }
            if (-1 < iVar11) {
                arg4_00 = (unsigned int*)PTR_m_overrideDrawAutoWrapWidth_100ee69a0;
            }
            TVar2.field_0 = textProperties.GetLightLevelsBelow();
            iVar9 = SplitString((fixed_vector<StringView, _10ul, true, BucketAllocatorEASTL>*)&local_100, &local_308,
                                local_248, (int*)arg4_00, TVar2);
            iVar11 = local_22c;
            this_00 = local_240;
            if (arg6 == nullptr) {
                uVar7 = 1;
                if (0 < local_22c / iVar6) {
                    uVar7 = local_22c / iVar6;
                }
            } else {
                uVar7 = *arg6;
            }
            local_228 = eastl::fixed_string<char, 256>();
            if ((0 < (int)uVar7) && ((int)uVar7 <= iVar9)) {
                local_100.resize((long)(int)uVar7);
                this_02 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)local_100.back();
                str = (char*)this_02->end();
                uVar13 = ((Layout*)local_100.back())->HeapBeginPtr();
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>::assign(
                    &local_228, str, uVar13);
                local_2f8.StringView<eastl::fixed_string<char, 40>>(local_228);
                uVar8 = local_230;
                TVar2.field_0 = textProperties.GetLightLevelsBelow();
                TruncateString<eastl::fixed_string<char, 256>>(&local_228, &local_2f8, local_248, uVar8, TVar2,
                                                               (int)uVar7 < iVar9);
                local_2e8.StringView<eastl::fixed_string<char, 40>>(local_228);
                pSVar14 = (StringView*)local_100.back();
                *pSVar14 = local_2e8;
            }
            FVar10 = textProperties.GetVerticalAlignment();
            iVar6 = local_100.size();
            iVar11 = GetAlignedYOffset(this_00, local_248, FVar10 & 255, &local_24c, iVar11, iVar6, arg3);
            local_22c = local_24c;
            lVar15 = local_100.size();
            if (lVar15 != 0) {
                uVar13 = 0;
                do {
                    pSVar14 = &local_100[uVar13];
                    switch (textProperties.GetHorizontalAlignment()) {
                    case 0:
                        local_2d8 = StringView(*pSVar14);
                        DrawStringInner(local_240, &local_2d8, arg2, iVar11, nullptr, textProperties);
                        break;
                    case 1:
                        local_2c8 = StringView(*pSVar14);
                        bVar5 = (bool)textProperties.HasFlag(1);
                        iVar6 = GetStringWidth(&local_2c8, local_248, bVar5);
                        local_2b8 = StringView(*pSVar14);
                        DrawStringInner(local_240, &local_2b8, (int)(local_230 - iVar6) / 2 + arg2, iVar11, nullptr,
                                        textProperties);
                        break;
                    case 2:
                        local_2a8 = StringView(*pSVar14);
                        bVar5 = (bool)textProperties.HasFlag(1);
                        iVar6 = GetStringWidth(&local_2a8, local_248, bVar5);
                        local_298 = StringView(*pSVar14);
                        DrawStringInner(local_240, &local_298, (arg2 - iVar6) + local_230, iVar11, nullptr,
                                        textProperties);
                        break;
                    case 3:
                        lVar15 = local_100.size();
                        if (uVar13 == lVar15 - 1U) {
                            local_288 = StringView(*pSVar14);
                            bVar5 = (bool)textProperties.HasFlag(1);
                            uVar8 = GetStringWidth(&local_288, local_248, bVar5);
                            local_278 = StringView(*stringView);
                            uVar7 = local_230;
                            bVar5 = (bool)textProperties.HasFlag(1);
                            uVar12 = CalculateExtraSpaceWidthForJustify(&local_278, uVar8, uVar7, bVar5);
                            *(uint32_t*)&local_240->field_16 = uVar12;
                        }
                        local_268 = StringView(*pSVar14);
                        DrawStringInner(local_240, &local_268, arg2, iVar11, nullptr, textProperties);
                        break;
                    default:
                        bVar4 = textProperties.GetHorizontalAlignment();
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/fonts/FontHelpers.cpp",
                                        219, "FontHelpers: Unknown align mode: %i", (unsigned long)bVar4);
                    }
                    uVar13 = uVar13 + 1;
                    uVar16 = local_100.size();
                    iVar11 = iVar11 + local_22c;
                } while (uVar13 < uVar16);
            }
        }
    }

    // 0x1008e0d50
    void FontHelpers::SplitString(eastl::fixed_vector<StringView, 10ul, true, BucketAllocatorEASTL>& stringViews,
                                  StringView stringView, const FontMetrics& fontMetrics, int* arg4,
                                  TextFlags textFlags) {
        unsigned long uVar2;
        bool cVar3;
        uint8_t bVar4;
        unsigned long uVar6;
        type* ptVar7;
        type* ptVar8;
        unsigned long uVar9;
        int iVar10;
        unsigned int uVar11;
        unsigned int uVar12;
        StringView* stringView_00;
        int iVar13;
        StringView local_f0;
        StringView local_e0;
        StringView local_d0;
        StringView local_c0;
        uint64_t local_b0;
        unsigned long local_98;
        type* local_90;
        unsigned long local_80;
        type* local_78;
        char* local_70;
        unsigned long local_68;
        unsigned int local_58;
        int local_54;
        unsigned int local_44;
        unsigned int local_40;
        unsigned int local_3c;
        TextFlags local_38;

        local_38[0].field_0 = textFlags.field_0;
        unsigned long local_88 = 0;
        long lVar5 = stringView->HeapBeginPtr();
        if (lVar5 == 0) {
            local_3c = 0;
            stringView_00 = stringView;
        } else {
            uVar9 = 4294967295;
            iVar13 = 0;
            local_3c = 0;
            local_54 = 0;
            local_58 = 0;
            local_44 = 0;
            stringView_00 = stringView;
            do {
                uVar2 = local_88;
                local_78 = (type*)(((uint64_t)local_78._4_4_ << 32) | (uint32_t)iVar13);
                local_40 = (unsigned int)uVar9;
                local_f0 = StringView(*stringView_00);
                local_80 = GetNextElementLength(&local_f0, &local_88, (TextFlags)local_38[0].field_0);
                std::get<0ul, unsigned int, unsigned int>(local_80);
                ptVar7 = std::get<1ul, unsigned int, unsigned int>(local_80);
                local_98 = uVar2;
                local_c0 = ((unsigned long)stringView_00)->substr((long)(int)uVar2);
                local_e0 = StringView(local_c0);
                local_b0 = GetElementWidth(&local_e0, local_44, *(unsigned int*)ptVar7, fontMetrics);
                ptVar8 = std::get<0ul, unsigned int, unsigned int>(local_b0);
                ptVar7 = std::get<1ul, unsigned int, unsigned int>(local_b0);
                uVar11 = *(unsigned int*)ptVar7;
                local_d0.StringView<5ul>("<br>");
                cVar3 = local_c0 == &local_d0;
                stringView_00 = stringView;
                uVar9 = local_98;
                local_44 = uVar11;
                if (!cVar3) {
                    local_90 = ptVar7;
                    if (*(int*)ptVar8 == 0) {
                        uVar9 = (unsigned long)local_40;
                        iVar13 = (int)local_78;
                    } else {
                        iVar13 = *(int*)ptVar8 + (int)local_78;
                        if ((arg4 == nullptr) || (*arg4 < 1)) {
                            uVar9 = (unsigned long)local_40;
                        } else {
                            uVar12 = (unsigned int)local_98;
                            uVar11 = local_40;
                            local_78 = ptVar8;
                            if (*(int*)ptVar7 == spaceCharCode) {
                                bVar4 = local_38.HasFlag(4);
                                local_58 = (unsigned int)(bVar4 ^ 1);
                                uVar11 = uVar12;
                                local_54 = iVar13;
                            }
                            if (*arg4 < iVar13) {
                                cVar3 = local_38.HasFlag(2);
                                if ((!cVar3) && (-1 < (int)uVar11)) {
                                    lVar5 = stringView_00->end();
                                    local_70 = (char*)((int)local_3c + lVar5);
                                    uVar12 = uVar11 + 1;
                                    local_68 =
                                        (((uint64_t)local_68._4_4_ << 32) | (uint32_t)(uVar12 - (local_3c + local_58)));
                                    stringViews.emplace_back<char const*, int>(local_70, local_68);
                                    iVar13 = iVar13 - local_54;
                                    local_44 = 0;
                                    uVar11 = 4294967295;
                                    stringView_00 = stringView;
                                    local_3c = uVar12;
                                } else {
                                    lVar5 = stringView_00->end();
                                    local_70 = (char*)(lVar5 + (int)local_3c);
                                    local_68 = (((uint64_t)local_68._4_4_ << 32) | (uint32_t)(uVar12 - local_3c));
                                    stringViews.emplace_back<char const*, int>(local_70, local_68);
                                    iVar13 = *(int*)local_78;
                                    uVar11 = 4294967295;
                                    local_44 = 0;
                                    local_3c = uVar12;
                                }
                            }
                            if (*(int*)local_90 == hyphenCharCode) {
                                local_58 = 0;
                                local_54 = iVar13;
                            } else {
                                uVar9 = (unsigned long)uVar11;
                            }
                        }
                    }
                } else {
                    lVar5 = stringView->end();
                    local_70 = (char*)((int)local_3c + lVar5);
                    iVar10 = (int)local_98;
                    iVar13 = iVar10 - local_3c;
                    lVar5 = local_c0.HeapBeginPtr();
                    local_68 = lVar5 + iVar13;
                    stringViews.emplace_back<char const*, unsigned long>(local_70, local_68);
                    local_3c = iVar10 + 4;
                    iVar13 = 0;
                    uVar9 = 4294967295;
                }
                uVar2 = local_88;
                uVar6 = stringView_00->HeapBeginPtr();
                uVar9 = uVar9 & 4294967295;
            } while (uVar2 < uVar6);
        }
        iVar13 = stringView_00->HeapBeginPtr();
        uVar11 = local_3c;
        if ((int)local_3c < iVar13) {
            lVar5 = stringView_00->end();
            local_c0.field_0 = lVar5 + (int)uVar11;
            lVar5 = stringView_00->HeapBeginPtr();
            local_80 = lVar5 - (int)uVar11;
            stringViews.emplace_back<char const*, unsigned long>(local_c0, local_80);
        }
        stringViews.size();
    }

    // 0x1008e1560
    int FontHelpers::GetAlignedYOffset(const FontMetrics& fontMetrics, FontAlign fontAlign, int& arg3, int arg4,
                                       int arg5, int arg6) const {
        int iVar1;
        uint8_t bVar3;
        unsigned int uVar4;
        unsigned int uVar5;
        int iVar6;

        if (arg5 < 1) {
            LogAssert("contentRows >= 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "FontHelpers.cpp",
                      1308, nullptr);
        }
        if (3 < (uint8_t)fontAlign) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "fonts/FontHelpers.cpp",
                            1365, "FontHelpers: Unknown vertical align mode");
        }
        int iVar7 = arg4 - (arg5 - 1) * arg3;
        switch (fontAlign & 255) {
        case 0:
            bVar3 = fontMetrics.GetMaxAscent();
            iVar6 = (unsigned int)bVar3 + arg6;
            break;
        case 1:
            if (fontMetrics.IsVectorFont() == '\0') {
                uVar4 = fontMetrics.GetMaxAscent();
                bVar3 = fontMetrics.GetMaxDescent();
                uVar5 = (unsigned int)bVar3;
            } else {
                uVar4 = fontMetrics.GetUpperCaseAscent();
                uVar5 = 0;
            }
            iVar6 = (int)((iVar7 + (uVar4 & 255)) - uVar5) / 2 + arg6;
            break;
        case 2:
            bVar3 = fontMetrics.GetMaxDescent();
            iVar6 = (iVar7 + arg6) - (unsigned int)bVar3;
            break;
        case 3:
            if (arg5 == 1) {
                iVar6 = GetAlignedYOffset(fontMetrics, 1, arg3, arg4, 1, arg6);
            } else {
                bVar3 = fontMetrics.GetMaxAscent();
                iVar6 = (unsigned int)bVar3 + arg6;
                iVar1 = arg3;
                if (iVar7 - iVar1 != 0 && iVar1 <= iVar7) {
                    iVar7 = (iVar7 - iVar1) / (arg5 + 1);
                    iVar6 = iVar6 + iVar7;
                    arg3 = iVar1 + iVar7;
                }
            }
        }
        return iVar6;
    }

    // 0x1008e1740
    int FontHelpers::DrawStringInner(StringView stringView, int arg2, int arg3,
                                     const eastl::fixed_vector<std::pair<int, int>, 256ul>* pairs,
                                     const TextProperties& textProperties) {
        shared_ptr* psVar1;
        array<int, 2ul>* this_00;
        unsigned long uVar2;
        fixed_vector<std::pair<int, int>, _256ul>* pfVar3;
        uint8_t bVar5;
        uint8_t bVar6;
        bool bVar7;
        unsigned int uVar8;
        int iVar9;
        int iVar10;
        int iVar11;
        uint32_t uVar12;
        unsigned int uVar13;
        FontMetrics* pFVar14;
        long lVar15;
        char* pcVar16;
        unsigned long uVar17;
        int* piVar18;
        Logger* pLVar19;
        uint64_t uVar20;
        shared_ptr<render::Texture>* psVar21;
        int* piVar22;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* pcVar23;
        GUIManager* this_02;
        SpriteAtlas* pSVar24;
        FastPool<audio::SoundInstance, int>* pFVar25;
        EnumOptionToggle* pEVar26;
        EnumOptionToggle* pEVar27;
        MapArea* pMVar28;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar29;
        Texture* texture;
        char* pcVar30;
        FontHelpers* pFVar31;
        EntityHighlightState* this_03;
        StringView* pSVar32;
        unsigned int uVar33;
        Texture* in_stack_fffffffffffffe48;
        uint64_t in_stack_fffffffffffffe50;
        StringView local_1a0;
        StringView local_190;
        StringView local_180;
        ReturnValue local_170;
        StringView local_168;
        StringView local_158;
        StringView local_148;
        StringView local_138;
        StringView local_118;
        uint8_t local_108[24];
        int local_f0;
        unsigned int local_ec;
        unsigned int local_e8;
        float local_e4;
        float local_e0;
        float local_dc;
        shared_ptr* local_c0;
        char* local_b8;
        StringView* local_b0;
        int* local_a8;
        GUIManager* local_a0;
        GUIManager* local_98;
        unsigned long local_90;
        unsigned int local_84;
        char* local_80;
        FontMetrics* local_70;
        unsigned int local_64;
        char local_51;
        shared_ptr* local_50;
        int local_44;
        char* local_40;

        uint32_t uVar34 = (uint32_t)((unsigned long)in_stack_fffffffffffffe50 >> 32);
        FontHelpers* local_60 = this;
        unsigned int local_34 = arg3;
        shared_ptr<oldscape::dash3d::GroundDecor>* groundDecor =
            ((Font*)textProperties.GetFont())->GetCharactersTexture();
        shared_ptr local_128(groundDecor);
        bool cVar4 = shared_ptr::operator_cast_to_bool(&local_128);
        if (!cVar4) {
            pLVar19 = logger::default_logger();
            uVar12 = stringView->HeapBeginPtr();
            uVar20 = stringView->end();
            iVar9 = 0;
            pLVar19->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                         "fonts/FontHelpers.cpp",
                         969, "%s called with string \'%.*s\', while fontTexture was null", "DrawStringInner",
                         (((uint64_t)uVar34 << 32) | (uint32_t)uVar12), uVar20);
        } else {
            pFVar14 = textProperties.GetFontMetrics();
            uVar8 = pFVar14->GetGlyphAdvance(tabCharCode);
            cVar4 = pFVar14->IsVectorFont();
            local_70 = pFVar14;
            if (!cVar4) {
                iVar9 = pFVar14->GetVerticalSpacing();
                local_34 = local_34 - iVar9;
            }
            lVar15 = stringView->HeapBeginPtr();
            local_40 = (char*)(unsigned long)(unsigned int)arg2;
            if (lVar15 != 0) {
                local_e8 = uVar8 & 255;
                local_50 = (shared_ptr*)4294967295;
                local_b8 = (char*)18446744073709551615;
                local_40 = (char*)(unsigned long)(unsigned int)arg2;
                iVar9 = 0;
                local_90 = 0;
                local_b0 = stringView;
                do {
                    pcVar30 = local_b8;
                    uVar2 = 0;
                    iVar10 = (int)0;
                    pcVar16 = (char*)stringView->end();
                    uVar17 = stringView->HeapBeginPtr();
                    uVar8 = stringtools::GetUTF8NextChar(pcVar16, 0, uVar17);
                    local_80 = pcVar30;
                    pcVar30 = pcVar30 + 1;
                    local_b8 = pcVar30;
                    local_44 = ToCodeMap(uVar8);
                    if (local_44 == tabCharCode) {
                        local_40 =
                            (char*)(unsigned long)(((int)((int)local_40 - (unsigned int)arg2) / (int)local_e8 + 1) *
                                                       local_e8 +
                                                   (unsigned int)arg2);
                    } else {
                        cVar4 = textProperties.HasFlag(1);
                        if (!cVar4) {
                            if (local_44 == ltCharCode) {
                                local_50 = (shared_ptr*)(uVar2 & 4294967295);
                                goto LAB_1008e1861;
                            }
                            pcVar30 = (char*)local_50;
                            if ((local_44 != gtCharCode) || (uVar8 = (unsigned int)local_50, uVar8 == 4294967295))
                                goto LAB_1008e18f4;
                            pcVar30 = (char*)(long)(int)(iVar10 + ~uVar8);
                            local_118 = ((unsigned long)local_b0)->substr((long)(int)(uVar8 + 1));
                            local_1a0 = StringView(local_118);
                            ConvertTagCharCodes(&local_170, &local_1a0);
                            local_51 = local_170.IsActive();
                            if (local_51 == '\0') {
                                local_180.StringView<5ul>("img=");
                                local_190.suffix_of(&local_118);
                                cVar4 = local_190.empty();
                                if (!cVar4) {
                                    bVar7 = FromString<StringView, int>(&local_190, (int*)local_108, 10);
                                    uVar34 = local_108._0_4_;
                                    if ((!bVar7) || (iVar10 = m_modIcons.end(), iVar10 <= (int)uVar34)) {
                                    LAB_1008e1d84:
                                        uVar8 = (unsigned int)local_40;
                                        uVar33 = local_34;
                                    } else {
                                        piVar18 = &m_modIcons[(long)(int)local_108._0_4_];
                                        psVar1 = (shared_ptr*)(piVar18 + 2);
                                        cVar4 = shared_ptr::operator_cast_to_bool(psVar1);
                                        pfVar3 = pairs;
                                        if (!cVar4)
                                            goto LAB_1008e1d84;
                                        if (pairs == nullptr) {
                                            uVar8 = (unsigned int)local_40;
                                            uVar33 = local_34;
                                        } else {
                                            iVar10 = pairs->size();
                                            uVar34 = (uint32_t)((unsigned long)in_stack_fffffffffffffe48 >> 32);
                                            if ((long)local_80 < (long)iVar10) {
                                                piVar22 = (int*)(*pfVar3)[(unsigned long)local_b8];
                                                uVar8 = *piVar22 + (int)local_40;
                                                uVar33 = piVar22[1] + local_34;
                                            } else {
                                                uVar8 = (unsigned int)local_40;
                                                uVar33 = local_34;
                                                if ((local_90 & 1) == 0) {
                                                    pLVar19 = logger::default_logger();
                                                    pSVar32 = local_b0;
                                                    local_50 = (shared_ptr*)local_b0->HeapBeginPtr();
                                                    uVar20 = pSVar32->end();
                                                    local_90 =
                                                        (((uint64_t)((int64_t)((unsigned long)pcVar30 >> 8)) << 8) |
                                                         (uint8_t)1);
                                                    in_stack_fffffffffffffe48 = (Texture*)(((uint64_t)uVar34 << 32) |
                                                                                           (uint32_t)((int)local_50));
                                                    pLVar19->Log(
                                                        false, 3,
                                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                        "OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/FontHelpers.cpp",
                                                        1039,
                                                        "Custom Offsets supplied for string \'%.*s\' is shorter than "
                                                        "the string",
                                                        in_stack_fffffffffffffe48, uVar20);
                                                    uVar8 = (unsigned int)local_40;
                                                    uVar33 = local_34;
                                                }
                                            }
                                        }
                                        local_50 = psVar1;
                                        pcVar23 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*,
                                                                       eastl::allocator, 0>*)(*psVar1)
                                                      .operator->();
                                        pFVar31 = local_60;
                                        local_c0 = (shared_ptr*)pcVar23->second();
                                        cVar4 = shared_ptr::operator_cast_to_bool(local_c0);
                                        if (!cVar4) {
                                        } else {
                                            cVar4 = local_70->IsVectorFont();
                                            pFVar14 = local_70;
                                            local_a8 = piVar18;
                                            local_84 = uVar33;
                                            local_64 = uVar8;
                                            if (!cVar4) {
                                                uVar34 = local_70->GetVerticalSpacing();
                                                local_a0 =
                                                    (GUIManager*)(((uint64_t)local_a0._4_4_ << 32) | (uint32_t)uVar34);
                                                bVar5 = pFVar14->GetMaxDescent();
                                                uVar34 = pFVar14->GetVerticalSpacing();
                                                local_98 =
                                                    (GUIManager*)(((uint64_t)local_98._4_4_ << 32) | (uint32_t)uVar34);
                                                bVar6 = pFVar14->GetMaxAscent();
                                                iVar10 =
                                                    (int)(((unsigned int)bVar5 + (int)local_a0 + (int)local_98._0_4_) -
                                                          ((unsigned int)bVar6 + piVar18[1])) /
                                                    2;
                                            } else {
                                                bVar5 = local_70->GetMaxAscent();
                                                iVar10 = pFVar14->GetVerticalSpacing();
                                                iVar10 = (iVar10 - piVar18[1]) / 2 - (unsigned int)bVar5;
                                            }
                                            psVar1 = local_c0;
                                            pSVar24 = (SpriteAtlas*)(*local_c0).operator->();
                                            pFVar25 = (FastPool<audio::SoundInstance, int>*)(*local_50).operator->();
                                            iVar11 = pFVar25->capacity();
                                            lVar15 = pSVar24->GetSpriteRenderMapping(iVar11);
                                            local_a0 = pFVar31->field_32;
                                            iVar11 = *local_a8;
                                            local_50 =
                                                (shared_ptr*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)local_a8[1]);
                                            this_03 = (EntityHighlightState*)(lVar15 + 88);
                                            uVar34 = this_03->GetOverbright();
                                            local_98 =
                                                (GUIManager*)(((uint64_t)local_98._4_4_ << 32) | (uint32_t)uVar34);
                                            local_e4 = (float)this_03->GetAlpha();
                                            local_e0 = (float)this_03->MaxU();
                                            local_dc = (float)this_03->MaxV();
                                            pMVar28 = (MapArea*)(*psVar1).operator->();
                                            uVar33 = iVar10 + local_84;
                                            pvVar29 =
                                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                                    pMVar28->GetOrigin();
                                            in_stack_fffffffffffffe48 = (Texture*)pvVar29->end();
                                            local_a0->AddTexturedRectangle(local_64, uVar33, iVar11,
                                                                           (EnumOptionToggle)local_50, 4294967295,
                                                                           local_98._0_4_, local_e4, local_e0, local_dc,
                                                                           in_stack_fffffffffffffe48, 1);
                                            local_40 = (char*)(unsigned long)(unsigned int)((int)local_40 + *local_a8);
                                            uVar8 = local_64;
                                        }
                                    }
                                    pcVar16 = (char*)((unsigned long)local_40 & 4294967295);
                                } else {
                                    local_158.StringView<8ul>("sprite=");
                                    local_168.suffix_of(&local_118);
                                    cVar4 = local_168.empty();
                                    if (cVar4) {
                                        local_138 = StringView(local_118);
                                        local_60->UpdateState(&local_138);
                                        pcVar16 = (char*)((unsigned long)local_40 & 4294967295);
                                        uVar33 = local_34;
                                        goto LAB_1008e1d99;
                                    }
                                    local_148 = StringView(local_168);
                                    pSVar32 = &local_148;
                                    cVar4 = ParseSpriteData(pSVar32, &local_f0, (int*)&local_ec);
                                    if (!cVar4)
                                        goto LAB_1008e1a1b;
                                    cVar4 = pSVar32->operator_cast_to_bool();
                                    uVar34 = (uint32_t)((unsigned long)in_stack_fffffffffffffe48 >> 32);
                                    if (!cVar4) {
                                        pLVar19 = logger::default_logger();
                                        uVar12 = local_118.HeapBeginPtr();
                                        uVar20 = local_118.end();
                                        in_stack_fffffffffffffe48 =
                                            (Texture*)(((uint64_t)uVar34 << 32) | (uint32_t)uVar12);
                                        pcVar30 = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/graphics/runetek7/fonts/FontHelpers.cpp";
                                        pLVar19->Log(false, 3,
                                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                     "libs/graphics/runetek7/fonts/FontHelpers.cpp",
                                                     1150,
                                                     "%.*s in text, but no sprite reference callback has been set",
                                                     in_stack_fffffffffffffe48, uVar20);
                                        pcVar16 = (char*)((unsigned long)local_40 & 4294967295);
                                        uVar33 = local_34;
                                        goto LAB_1008e1d99;
                                    }
                                    new (local_108) ModIconReference();
                                    pFVar14 = local_70;
                                    pcVar30 = (char*)(unsigned long)local_ec;
                                    cVar4 = std::function<bool(FontHelpers::ModIconReference&, int, int)>::operator()(
                                        (function<bool(FontHelpers::ModIconReference&, int,
                                                       int)>*)&m_callbackGetSpriteReference,
                                        (ModIconReference*)local_108, local_f0, local_ec);
                                    pfVar3 = pairs;
                                    uVar8 = (unsigned int)local_40;
                                    uVar33 = local_34;
                                    if (!cVar4) {
                                        uVar13 = uVar8;
                                    } else {
                                        if (pairs != nullptr) {
                                            iVar10 = pairs->size();
                                            uVar34 = (uint32_t)((unsigned long)in_stack_fffffffffffffe48 >> 32);
                                            if ((long)local_80 < (long)iVar10) {
                                                piVar18 = (int*)(*pfVar3)[(unsigned long)local_b8];
                                                uVar8 = *piVar18 + (int)local_40;
                                                uVar33 = piVar18[1] + local_34;
                                            } else {
                                                uVar8 = (unsigned int)local_40;
                                                uVar33 = local_34;
                                                if ((local_90 & 1) == 0) {
                                                    pLVar19 = logger::default_logger();
                                                    pSVar32 = local_b0;
                                                    uVar12 = local_b0->HeapBeginPtr();
                                                    uVar20 = pSVar32->end();
                                                    local_90 =
                                                        (((uint64_t)((int64_t)((unsigned long)pcVar30 >> 8)) << 8) |
                                                         (uint8_t)1);
                                                    in_stack_fffffffffffffe48 =
                                                        (Texture*)(((uint64_t)uVar34 << 32) | (uint32_t)uVar12);
                                                    pcVar30 =
                                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                        "OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/FontHelpers.cpp";
                                                    pLVar19->Log(
                                                        false, 3,
                                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                        "OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/FontHelpers.cpp",
                                                        1100,
                                                        "Custom Offsets supplied for string \'%.*s\' is shorter than "
                                                        "the string",
                                                        in_stack_fffffffffffffe48, uVar20);
                                                    uVar8 = (unsigned int)local_40;
                                                    uVar33 = local_34;
                                                }
                                            }
                                        }
                                        pcVar23 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*,
                                                                       eastl::allocator, 0>*)(*((local_108 + 8)))
                                                      .operator->();
                                        this_02 = (GUIManager*)pcVar23->second();
                                        cVar4 = this_02->operator_cast_to_bool();
                                        if (!cVar4) {
                                            uVar13 = (unsigned int)local_40;
                                        } else {
                                            local_c0 =
                                                (shared_ptr*)(((uint64_t)local_c0._4_4_ << 32) | (uint32_t)uVar8);
                                            local_a0 = this_02;
                                            local_84 = uVar33;
                                            pSVar24 = (SpriteAtlas*)(*this_02).operator->();
                                            pFVar25 =
                                                (FastPool<audio::SoundInstance, int>*)(*((local_108 + 8))).operator->();
                                            iVar10 = pFVar25->capacity();
                                            local_a8 = (int*)pSVar24->GetSpriteRenderMapping(iVar10);
                                            this_00 = (array<int, 2ul>*)(local_a8 + 26);
                                            pEVar26 = (EnumOptionToggle*)(*this_00)[1];
                                            local_50._0_4_ = *pEVar26;
                                            bVar5 = pFVar14->GetMaxAscent();
                                            bVar6 = pFVar14->GetMaxDescent();
                                            uVar33 = eastl::min<GraphicsQuality>(
                                                (EnumOptionToggle)local_50, (unsigned int)bVar6 + (unsigned int)bVar5);
                                            pEVar27 = (EnumOptionToggle*)(*this_00)[0];
                                            pFVar31 = local_60;
                                            uVar8 = uVar33;
                                            if (*pEVar27 != *pEVar26) {
                                                uVar8 = (unsigned int)(((float)(int)*pEVar27 * (float)(int)uVar33) /
                                                                           (float)(int)*pEVar26 +
                                                                       0.5);
                                            }
                                            local_50 =
                                                (shared_ptr*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)uVar8);
                                            local_64 = uVar33;
                                            cVar4 = pFVar14->IsVectorFont();
                                            uVar8 = local_84;
                                            if (!cVar4) {
                                                iVar10 = pFVar14->GetVerticalSpacing();
                                                bVar5 = pFVar14->GetMaxDescent();
                                                iVar10 = (iVar10 - local_64) + (unsigned int)bVar5;
                                            } else {
                                                bVar5 = pFVar14->GetMaxAscent();
                                                iVar10 = pFVar14->GetVerticalSpacing();
                                                iVar10 = (iVar10 - local_108._4_4_) / 2 - (unsigned int)bVar5;
                                            }
                                            local_98 = pFVar31->field_32;
                                            piVar18 = (int*)(*((local_a8 + 2)))[0];
                                            iVar11 = *piVar18;
                                            pMVar28 = (MapArea*)(*local_a0).operator->();
                                            in_stack_fffffffffffffe48 = (Texture*)(local_a8 + 22);
                                            iVar11 = iVar11 + (unsigned int)local_c0;
                                            pvVar29 =
                                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                                    pMVar28->GetOrigin();
                                            texture = (Texture*)pvVar29->end();
                                            pcVar30 = (char*)((unsigned long)local_50 & 4294967295);
                                            local_98->AddTexturedRectangle(
                                                iVar11, iVar10 + uVar8, (EnumOptionToggle)local_50, local_64,
                                                4294967295, *in_stack_fffffffffffffe48, texture, 1);
                                            uVar33 = iVar10 + uVar8;
                                            uVar8 = (unsigned int)local_c0;
                                            uVar13 = (EnumOptionToggle)local_50 + (int)local_40;
                                        }
                                    }
                                    pcVar16 = (char*)(unsigned long)uVar13;
                                    local_40 = pcVar30;
                                }
                                pcVar30 = local_40;
                                local_40 = (char*)(unsigned long)uVar8;
                            } else {
                                piVar18 = (int*)local_170.value();
                                local_44 = *piVar18;
                            LAB_1008e1a1b:
                                pcVar16 = (char*)((unsigned long)local_40 & 4294967295);
                                uVar33 = local_34;
                            }
                        LAB_1008e1d99:
                            local_50 = (shared_ptr*)4294967295;
                            if (local_51 != '\0')
                                goto LAB_1008e1901;
                        } else {
                        LAB_1008e18f4:
                            pcVar16 = (char*)((unsigned long)local_40 & 4294967295);
                            uVar33 = local_34;
                        LAB_1008e1901:
                            if ((EnumOptionToggle)local_50 == -1) {
                                iVar9 = local_70->GetKerning(local_44, iVar9);
                                pfVar3 = pairs;
                                local_40 = (char*)(unsigned long)(unsigned int)((int)local_40 + iVar9);
                                if (pairs != nullptr) {
                                    iVar10 = pairs->size();
                                    uVar34 = (uint32_t)((unsigned long)in_stack_fffffffffffffe48 >> 32);
                                    if ((long)local_80 < (long)iVar10) {
                                        piVar18 = (int*)(*pfVar3)[(unsigned long)local_b8];
                                        local_40 = (char*)(unsigned long)(unsigned int)((int)local_40 + *piVar18);
                                        uVar33 = uVar33 + piVar18[1];
                                    } else if ((local_90 & 1) == 0) {
                                        pLVar19 = logger::default_logger();
                                        pSVar32 = local_b0;
                                        local_80 = (char*)local_b0->HeapBeginPtr();
                                        uVar20 = pSVar32->end();
                                        local_90 =
                                            (((uint64_t)((int64_t)((unsigned long)pcVar30 >> 8)) << 8) | (uint8_t)1);
                                        in_stack_fffffffffffffe48 =
                                            (Texture*)(((uint64_t)uVar34 << 32) | (uint32_t)((int)local_80));
                                        pLVar19->Log(
                                            false, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/runetek7/fonts/FontHelpers.cpp",
                                            1176,
                                            "Custom Offsets supplied for string \'%.*s\' is shorter than the string",
                                            in_stack_fffffffffffffe48, uVar20);
                                    }
                                }
                                iVar9 = iVar9 + (int)pcVar16;
                                if (local_44 == spaceCharCode) {
                                    iVar10 = *(int*)&local_60->field_16;
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    }
                                    iVar9 = iVar9 + iVar10;
                                } else {
                                    if (local_60->field_20 != '\0') {
                                        uVar8 = *(unsigned int*)&local_60->field_24;
                                        psVar21 = (shared_ptr<render::Texture>*)textProperties.GetFont();
                                        DrawLetter((int)local_60, local_44, (int)local_40 + 1, uVar33 + 1,
                                                   (Font*)(unsigned long)uVar8, psVar21);
                                    }
                                    uVar8 = *(unsigned int*)&local_60->field_8;
                                    psVar21 = (shared_ptr<render::Texture>*)textProperties.GetFont();
                                    in_stack_fffffffffffffe48 = (Texture*)&local_128;
                                    DrawLetter((int)local_60, local_44, (int)local_40, uVar33,
                                               (Font*)(unsigned long)uVar8, psVar21);
                                }
                                pFVar14 = local_70;
                                bVar5 = local_70->GetGlyphAdvance(local_44);
                                uVar34 = (uint32_t)((unsigned long)in_stack_fffffffffffffe48 >> 32);
                                pFVar31 = local_60;
                                if (*(unsigned int*)local_60 != 4294967295) {
                                    local_80 = (char*)(((uint64_t)local_80._4_4_ << 32) | (uint32_t)iVar9);
                                    uVar8 = pFVar14->GetMaxDescent();
                                    cVar4 = pFVar14->IsVectorFont();
                                    pFVar14 = local_70;
                                    iVar9 = (uVar8 & 255) + uVar33;
                                    if (!cVar4) {
                                        iVar10 = local_70->GetVerticalSpacing();
                                        iVar9 = iVar9 + iVar10;
                                    }
                                    bVar6 = pFVar14->GetAscentDescentDelta();
                                    pFVar31 = local_60;
                                    in_stack_fffffffffffffe48 = (Texture*)(((uint64_t)uVar34 << 32) | (uint32_t)1);
                                    local_60->field_32->AddHorizontalLine(
                                        (int)local_40, iVar9 - (int)((float)bVar6 * 0.5), (unsigned int)bVar5, 1,
                                        *(unsigned int*)local_60, 1);
                                    iVar9 = (int)local_80;
                                }
                                uVar34 = (uint32_t)((unsigned long)in_stack_fffffffffffffe48 >> 32);
                                if (*(int*)&pFVar31->field_4 != -1) {
                                    cVar4 = pFVar14->IsVectorFont();
                                    iVar10 = uVar33 + 1;
                                    if (!cVar4) {
                                        iVar11 = pFVar14->GetVerticalSpacing();
                                        iVar10 = iVar11 + iVar10;
                                    }
                                    in_stack_fffffffffffffe48 = (Texture*)(((uint64_t)uVar34 << 32) | (uint32_t)1);
                                    pFVar31->field_32->AddHorizontalLine((int)local_40, iVar10, (unsigned int)bVar5, 1,
                                                                         *(unsigned int*)&pFVar31->field_4, 1);
                                }
                                local_40 = (char*)(unsigned long)(iVar9 + (unsigned int)bVar5);
                                iVar9 = local_44;
                                goto LAB_1008e1861;
                            }
                        }
                        local_40 = pcVar16;
                    }
                LAB_1008e1861:
                    stringView = local_b0;
                    uVar2 = 0;
                    uVar17 = local_b0->HeapBeginPtr();
                } while (uVar2 < uVar17);
            }
            iVar9 = (int)local_40 - (unsigned int)arg2;
        }
        return iVar9;
    }

    // 0x1008e24a0
    int FontHelpers::GetStringWidth(StringView stringView, const FontMetrics& fontMetrics, bool arg3) {
        unsigned long uVar1;
        type* ptVar3;
        type* ptVar4;
        unsigned long uVar5;
        uint64_t in_register_00000011;
        unsigned int uVar6;
        StringView local_98;
        StringView local_88;
        StringView local_78;
        uint64_t local_68;
        uint64_t local_60;
        unsigned long local_58;
        unsigned int local_44;
        ReturnValue local_38;

        new (&local_38) oldscape::configdecoder::VeccType();
        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg3) != 0) {
            local_38 = TextFlags::SetFlag(1);
        }
        unsigned long local_40 = 0;
        long lVar2 = ShuffledPacketFactory::p2_alt2();
        int iVar7 = 0;
        if (lVar2 != 0) {
            uVar6 = 0;
            do {
                local_58 = local_40;
                local_44 = uVar6;
                local_98 = StringView(*stringView);
                local_68 = GetNextElementLength(&local_98, &local_40, (TextFlags)local_38._0_1_);
                std::get<0ul, unsigned int, unsigned int>(local_68);
                ptVar3 = std::get<1ul, unsigned int, unsigned int>(local_68);
                local_88 = ((unsigned long)stringView)->substr(local_58);
                local_78 = StringView(local_88);
                local_60 = GetElementWidth(&local_78, local_44, *(unsigned int*)ptVar3, fontMetrics);
                ptVar4 = std::get<0ul, unsigned int, unsigned int>(local_60);
                ptVar3 = std::get<1ul, unsigned int, unsigned int>(local_60);
                uVar1 = local_40;
                uVar6 = *(unsigned int*)ptVar3;
                iVar7 = iVar7 + *(int*)ptVar4;
                uVar5 = ShuffledPacketFactory::p2_alt2();
            } while (uVar1 < uVar5);
        }
        return iVar7;
    }

    // 0x1008e25e0
    unsigned long FontHelpers::CalculateExtraSpaceWidthForJustify(StringView stringView, unsigned int arg2,
                                                                  unsigned int arg3, bool arg4) {
        int iVar4;
        bool bVar5;

        auto pcVar1 = stringView->end();
        auto pcVar2 = stringView->end();
        unsigned long uVar3 = 0;
        unsigned int uVar6 = 0;
        if (pcVar1 != pcVar2) {
            uVar6 = 0;
            bVar5 = false;
            do {
                iVar4 = (int)*pcVar1;
                if (!arg4 && ltCharCode == iVar4) {
                    bVar5 = true;
                } else if (!arg4 && gtCharCode == iVar4) {
                    bVar5 = false;
                } else {
                    uVar6 = uVar6 + (spaceCharCode == iVar4 && !bVar5);
                }
                pcVar1 = pcVar1 + 1;
            } while (pcVar1 != pcVar2);
        }
        if (0 < (int)uVar6) {
            uVar3 = (unsigned long)(arg3 - arg2) / (unsigned long)uVar6;
        }
        return uVar3;
    }

    // 0x1008e26c0
    uint64_t FontHelpers::DrawTextRunSlice(const TextRunSlice& textRunSlice, int arg2, int arg3,
                                           const TextProperties& textProperties, int arg5) {
        FontMetrics* this_00;
        uint8_t bVar2;
        uint8_t bVar3;
        unsigned int uVar4;
        shared_ptr<oldscape::dash3d::GroundDecor>* groundDecor;
        long lVar5;
        long lVar6;
        int* piVar7;
        shared_ptr<render::Texture>* psVar8;
        int* piVar10;
        int* arg2_00;
        int arg2_01;
        shared_ptr local_78;
        int local_68[3];
        uint64_t local_58;
        FontHelpers* local_50;
        FontMetrics* local_48;
        unsigned long local_40;
        int local_34;

        bool cVar1 = textRunSlice.IsEmpty();
        if (!cVar1) {
            local_40 = (((uint64_t)local_40._4_4_ << 32) | (uint32_t)arg3);
            ResetState(textProperties);
            local_48 = textProperties.GetFontMetrics();
            groundDecor = ((Font*)textProperties.GetFont())->GetCharactersTexture();
            local_78 = shared_ptr(groundDecor);
            cVar1 = shared_ptr::operator_cast_to_bool(&local_78);
            this_00 = local_48;
            if (!cVar1) {
                local_68[0] = 0;
                local_68[1] = 0;
                local_58 = std::make_pair<int, int>(*local_68, *(local_68 + 1));
            LAB_1008e277d:
                return local_58;
            }
            cVar1 = local_48->IsVectorFont();
            local_50 = this;
            if (!cVar1) {
                bVar2 = this_00->GetMaxAscent();
                bVar3 = this_00->GetMaxDescent();
                local_34 = (unsigned int)bVar3 - (unsigned int)bVar2;
            } else {
                local_34 = textRunSlice.GetVerticalOrigin();
            }
            lVar5 = textRunSlice.end();
            lVar6 = textRunSlice.data();
            if (lVar5 != lVar6) {
                local_34 = local_34 + (int)local_40;
                arg2_00 = (int*)(lVar5 + 8);
                local_68[2] = arg5;
                do {
                    if ((local_68[2] != -1) && (local_68[2] < *arg2_00)) {
                        local_58.pair<true, false>(*(arg2_00 - 1), *arg2_00);
                        goto LAB_1008e277d;
                    }
                    arg2_01 = arg2_00[-2];
                    if (arg2_01 != newlineCharCode) {
                        cVar1 = textRunSlice.ShouldHide(*((arg2_00 - 2)));
                        if (cVar1) {
                            arg2_01 = 42;
                        }
                        if (arg2_01 != tabCharCode) {
                            local_48 = (FontMetrics*)(unsigned long)(unsigned int)(arg2_00[-1] + arg2);
                            local_40 = (unsigned long)(unsigned int)(*arg2_00 + local_34);
                            if (local_50->field_20 != '\0') {
                                uVar4 = *(unsigned int*)&local_50->field_24;
                                psVar8 = (shared_ptr<render::Texture>*)textProperties.GetFont();
                                DrawLetter((int)local_50, arg2_01, (int)local_48 + 1, (int)local_40 + 1,
                                           (Font*)(unsigned long)uVar4, psVar8);
                            }
                            uVar4 = textProperties.GetLevel();
                            psVar8 = (shared_ptr<render::Texture>*)textProperties.GetFont();
                            DrawLetter((int)local_50, arg2_01, (int)local_48, (unsigned int)local_40,
                                       (Font*)(unsigned long)uVar4, psVar8);
                        }
                    }
                    piVar7 = (int*)textRunSlice.data();
                    piVar10 = arg2_00 + 1;
                    arg2_00 = arg2_00 + 3;
                } while (piVar10 != piVar7);
            }
        }
        return textRunSlice.GetLastCursorPosition();
    }

    // 0x1008e2ad0
    void FontHelpers::DrawLetter(int arg1, int arg2, int arg3, unsigned int arg4, const Font& font,
                                 const shared_ptr<render::Texture>& texture) {
        uint32_t in_register_0000003c;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* in_stack_00000008;

        unsigned int local_34 = (unsigned int)font;
        auto this_00 = texture.SSOBeginPtr();
        auto this_01 = texture.GetUV(arg2);
        FontMetrics* pFVar6 = (FontMetrics*)(*this_00).operator->();
        auto pbVar7 = pFVar6->GetGlyphInfo(arg2);
        if (m_highlightNonVectorFonts != '\0') {
            pFVar6 = (FontMetrics*)(*this_00).operator->();
            if (pFVar6->IsVectorFont() == '\0') {
                local_34 = 3423731711;
            }
        }
        uint8_t bVar1 = pbVar7[3];
        uint8_t bVar2 = pbVar7[4];
        GUIManager* gUIManager = *(GUIManager**)((((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1) + 32);
        uint8_t bVar3 = *pbVar7;
        uint8_t bVar4 = pbVar7[1];
        float arg6 = (float)this_01->GetOverbright();
        float arg7 = (float)this_01->GetAlpha();
        float arg8 = (float)this_01->MaxU();
        float arg9 = (float)this_01->MaxV();
        auto texture_00 = in_stack_00000008->end();
        gUIManager->AddElement((char)bVar1 + arg3, (int)(char)bVar2 + arg4, (unsigned int)bVar3 + (char)bVar1 + arg3,
                               (unsigned int)bVar4 + (int)(char)bVar2 + arg4, local_34, arg6, arg7, arg8, arg9,
                               texture_00, 1);
    }

    // 0x1008e2c00
    void TextRunSlice::GetLastCursorPosition() const {
        int iVar1;
        int local_24[3];

        if (IsEmpty() == '\0') {
            iVar1 = *(int*)(field_16 - 8);
            local_24[2] = GetLastCharAdvance();
            local_24[2] = local_24[2] + iVar1;
            std::make_pair<int, int const&>(*(local_24 + 2), *((field_16 - 4)));
        } else {
            local_24[0] = 0;
            local_24[1] = 0;
            std::make_pair<int, int>(*local_24, *(local_24 + 1));
        }
    }

    // 0x1008e2c70
    void FontHelpers::DrawStringCustomOffsets(StringView stringView, int arg2, int arg3, int arg4,
                                              const eastl::fixed_vector<std::pair<int, int>, 256ul>& pairs,
                                              const TextProperties& textProperties) {
        uint32_t in_register_00000034;
        TextProperties* in_stack_00000008;
        TextProperties local_78;
        StringView local_50;

        if (((SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>>*)(((uint64_t)in_register_00000034
                                                                                        << 32) |
                                                                                       (uint32_t)arg2))
                ->empty() == '\0') {
            stringView->ResetState(*in_stack_00000008);
            local_78 = TextProperties(*in_stack_00000008);
            local_78.ClearFlag(1);
            local_50 = StringView(*((StringView*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2)));
            DrawAlignedString(stringView, (int)&local_50, arg3, arg4,
                              (fixed_vector<std::pair<int, int>, _256ul>*)(unsigned long)(unsigned int)pairs,
                              textProperties);
        }
    }

    // 0x1008e2d50
    void FontHelpers::GetNextElementLength(StringView stringView, unsigned long& arg2, TextFlags textFlags) {
        unsigned long uVar2;
        unsigned long uVar4;
        char* str;
        bool bVar6;
        int local_58;
        uint64_t local_48;
        unsigned int local_40;
        unsigned int local_3c;
        TextFlags local_38;

        unsigned long uVar1 = arg2;
        int iVar5 = -1;
        local_38[0].field_0 = textFlags.field_0;
        do {
            uVar2 = arg2;
            uVar4 = stringView->HeapBeginPtr();
            if (uVar4 <= uVar2) {
                arg2 = uVar1 + 1;
                local_40 = 1;
                local_48.pair<int, unsigned int&, false>(local_40, ltCharCode);
                return local_48;
            }
            uVar2 = arg2;
            str = (char*)stringView->end();
            uVar4 = stringView->HeapBeginPtr();
            local_40 = ToCodeMap(stringtools::GetUTF8NextChar(str, arg2, uVar4));
            if (local_38.HasFlag(1) == '\0') {
                bVar6 = true;
                if (iVar5 == -1) {
                    iVar5 = (int)uVar2;
                    if (local_40 != ltCharCode) {
                        local_3c = 1;
                        local_48.pair<int, unsigned int&, false>(local_3c, local_40);
                        iVar5 = -1;
                        bVar6 = false;
                    }
                } else {
                    bVar6 = local_40 != gtCharCode;
                    if (!bVar6) {
                        local_3c = ((int)uVar2 - iVar5) + 1;
                        local_48.pair<unsigned int, int, false>(local_3c, 0);
                    }
                }
            } else {
                local_58 = (int)uVar1;
                local_3c = (int)*arg2 - local_58;
                local_48.pair<unsigned int, unsigned int&, false>(local_3c, local_40);
                bVar6 = false;
            }
        } while (bVar6);
        return local_48;
    }

    // 0x1008e2f40
    void FontHelpers::GetElementWidth(StringView stringView, unsigned int arg2, unsigned int arg3,
                                      const FontMetrics& fontMetrics) {
        EnumOptionToggle enumOptionToggle1;
        bool cVar1;
        uint8_t bVar2;
        uint8_t bVar3;
        bool bVar4;
        int iVar5;
        uint32_t uVar6;
        char* pcVar8;
        unsigned int* puVar9;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this;
        shared_ptr* this_00;
        SpriteAtlas* this_01;
        long lVar10;
        EnumOptionToggle* pEVar11;
        EnumOptionToggle* pEVar12;
        int* piVar13;
        Logger* this_03;
        uint64_t uVar14;
        StringView local_e8;
        StringView local_d8;
        StringView local_c8;
        StringView local_b8;
        StringView local_a8;
        StringView local_98;
        StringView local_88;
        uint64_t local_78;
        StringView local_70;
        ReturnValue local_60;
        uint8_t local_58[24];
        int local_40;
        int local_3c;

        unsigned int local_38 = 0;
        unsigned int local_34 = arg3;
        if (stringView->HeapBeginPtr() < 3) {
            lVar10 = stringView->HeapBeginPtr();
            if (((lVar10 != 2) || (pcVar8 = (char*)(*stringView)[0], ltCharCode != *pcVar8)) ||
                (pcVar8 = (char*)(*stringView)[1], gtCharCode != *pcVar8)) {
            LAB_1008e303c:
                bVar2 = fontMetrics.GetGlyphAdvance(local_34);
                local_38 = local_38 + bVar2;
                iVar5 = fontMetrics.GetKerning(local_34, arg2);
                local_38 = local_38 + iVar5;
                goto LAB_1008e305b;
            }
        } else {
            stringView->HeapBeginPtr();
            local_70 = ((unsigned long)stringView)->substr(1);
            local_e8.StringView<3ul>("br");
            cVar1 = local_70 == &local_e8;
            if (!cVar1) {
                local_d8 = StringView(local_70);
                ConvertTagCharCodes(&local_60, &local_d8);
                cVar1 = local_60.IsActive();
                if (cVar1) {
                    puVar9 = (unsigned int*)local_60.value();
                    local_34 = *puVar9;
                    goto LAB_1008e303c;
                }
                local_c8.StringView<5ul>("img=");
                local_98.suffix_of(&local_70);
                cVar1 = local_98.empty();
                if (!cVar1) {
                    bVar4 = FromString<StringView, int>(&local_98, (int*)local_58, 10);
                    uVar6 = local_58._0_4_;
                    if ((bVar4) && (iVar5 = m_modIcons.end(), (int)uVar6 < iVar5)) {
                        piVar13 = &m_modIcons[(long)(int)local_58._0_4_];
                        bVar4 = (*((piVar13 + 2))) != nullptr;
                        if (bVar4) {
                            local_38 = local_38 + *piVar13;
                        }
                    }
                } else {
                    local_b8.StringView<8ul>("sprite=");
                    local_88.suffix_of(&local_70);
                    cVar1 = local_88.empty();
                    if (cVar1)
                        goto LAB_1008e305b;
                    local_a8 = StringView(local_88);
                    cVar1 = ParseSpriteData(&local_a8, &local_40, &local_3c);
                    if (cVar1) {
                        cVar1 = local_a8.operator_cast_to_bool();
                        if (cVar1) {
                            new (local_58) ModIconReference();
                            cVar1 = std::function<bool(FontHelpers::ModIconReference&, int, int)>::operator()(
                                (function<bool(FontHelpers::ModIconReference&, int,
                                               int)>*)&m_callbackGetSpriteReference,
                                (ModIconReference*)local_58, local_40, local_3c);
                            if (cVar1) {
                                this = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator,
                                                            0>*)(*((local_58 + 8)))
                                           .operator->();
                                this_00 = (shared_ptr*)second();
                                cVar1 = shared_ptr::operator_cast_to_bool(this_00);
                                if (cVar1) {
                                    this_01 = (SpriteAtlas*)(*this_00).operator->();
                                    iVar5 = ((FastPool<audio::SoundInstance, int>*)(*((local_58 + 8))).operator->())
                                                ->capacity();
                                    lVar10 = this_01->GetSpriteRenderMapping(iVar5);
                                    pEVar11 = (EnumOptionToggle*)(*((lVar10 + 104)))[1];
                                    enumOptionToggle1 = *pEVar11;
                                    bVar2 = fontMetrics.GetMaxAscent();
                                    bVar3 = fontMetrics.GetMaxDescent();
                                    iVar5 = eastl::min<GraphicsQuality>(enumOptionToggle1,
                                                                        (unsigned int)bVar3 + (unsigned int)bVar2);
                                    pEVar12 = (EnumOptionToggle*)(*((lVar10 + 104)))[0];
                                    if (*pEVar12 != *pEVar11) {
                                        iVar5 =
                                            (int)(((float)(int)*pEVar12 * (float)iVar5) / (float)(int)*pEVar11 + 0.5);
                                    }
                                    local_38 = local_38 + iVar5;
                                }
                            }
                            local_34 = 0;
                            goto LAB_1008e305b;
                        }
                        this_03 = logger::default_logger();
                        uVar6 = stringView->HeapBeginPtr();
                        uVar14 = stringView->end();
                        this_03->Log(false, 3,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                     "runetek7/fonts/FontHelpers.cpp",
                                     572, "%.*s in text, but no sprite reference callback has been set", uVar6, uVar14);
                    }
                }
            }
        }
        local_34 = 0;
    LAB_1008e305b:
        local_78.pair<unsigned int&, unsigned int&, false>(local_38, local_34);
        return local_78;
    }

    // 0x1008e3300
    void FontHelpers::PredictLines(StringView stringView, int arg2, const FontMetrics& fontMetrics,
                                   TextFlags textFlags) {
        int local_f4 = arg2;
        fixed_vector<StringView, 10ul, true, BucketAllocatorEASTL> local_f0;
        StringView local_108(*stringView);
        uint32_t uVar1 = SplitString((fixed_vector<StringView, _10ul, true, BucketAllocatorEASTL>*)&local_f0,
                                     &local_108, fontMetrics, &local_f4, textFlags);
        return uVar1;
    }

    // 0x1008e33c0
    auto FontHelpers::GetPredictLinesLine(StringView stringView, int arg2, const FontMetrics& fontMetrics,
                                          unsigned int arg4, TextFlags textFlags) {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this;
        char* str;

        int local_104 = arg2;
        fixed_vector<StringView, 10ul, true, BucketAllocatorEASTL> local_100;
        StringView local_120(*stringView);
        SplitString(&local_100, &local_120, fontMetrics, &local_104, textFlags);
        unsigned long uVar1 = local_100.size();
        if (arg4 < uVar1) {
            this = &local_100[(unsigned long)arg4];
            str = (char*)end();
            auto result(str);
        } else {
            new (&result) eastl::string(*((eastl::string*)&eastl::EMPTY_STRING));
        }
        local_100.~fixed_vector();
        return result;
    }

    // 0x1008e34f0
    void FontHelpers::PredictHeightAndLines(StringView stringView, int arg2, const TextProperties& textProperties) {
        TextFlags textFlags;
        uint64_t local_108;

        int local_fc = arg2;
        auto fontMetrics = textProperties.GetFontMetrics();
        fixed_vector<StringView, 10ul, true, BucketAllocatorEASTL> local_f0;
        StringView local_118(*stringView);
        textFlags.field_0 = textProperties.GetLightLevelsBelow();
        int iVar3 = SplitString((fixed_vector<StringView, _10ul, true, BucketAllocatorEASTL>*)&local_f0, &local_118,
                                fontMetrics, &local_fc, textFlags);
        int local_f8 = iVar3;
        int iVar4 = textProperties.GetLineSpacing();
        uint8_t bVar1 = fontMetrics->GetMaxAscent();
        uint8_t bVar2 = fontMetrics->GetMaxDescent();
        int local_f4 = (unsigned int)bVar2 + (unsigned int)bVar1 + iVar4 * (iVar3 - 1);
        local_108.pair<int, int&, false>(local_f4, local_f8);
        return local_108;
    }

    // 0x1008e3620
    int FontHelpers::PredictWidthMultiLine(StringView stringView, int arg2, const FontMetrics& fontMetrics,
                                           TextFlags textFlags) {
        bool arg3;
        int iVar2;
        StringView* stringView_00;
        unsigned long arg1;
        int iVar3;
        StringView local_130;
        TextFlags local_108;

        local_108[0].field_0 = textFlags.field_0;
        int local_10c = arg2;
        fixed_vector<StringView, 10ul, true, BucketAllocatorEASTL> local_100;
        StringView local_120(*stringView);
        unsigned int uVar1 = SplitString((fixed_vector<StringView, _10ul, true, BucketAllocatorEASTL>*)&local_100,
                                         &local_120, fontMetrics, &local_10c, (TextFlags)local_108[0].field_0);
        if ((int)uVar1 < 1) {
            iVar3 = 0;
        } else {
            arg1 = 0;
            iVar3 = 0;
            do {
                stringView_00 = (StringView*)local_100[arg1];
                local_130 = StringView(*stringView_00);
                arg3 = (bool)local_108.HasFlag(1);
                iVar2 = GetStringWidth(&local_130, fontMetrics, arg3);
                if (iVar3 < iVar2) {
                    iVar3 = iVar2;
                }
                arg1 = arg1 + 1;
            } while (uVar1 != arg1);
        }
        local_100.~fixed_vector();
        return iVar3;
    }

    // 0x1008e3870
    unsigned int FontHelpers::ToCodeMap(unsigned int arg1) {
        unsigned int uVar1;

        if (arg1 - 1 < 127) {
            return arg1;
        }
        if (arg1 - 160 < 96) {
            return arg1;
        }
        if ((int)arg1 < 8211) {
            switch (arg1) {
            case 338:
                uVar1 = 140;
                break;
            case 339:
                uVar1 = 156;
                break;
            case 340:
            case 341:
            case 342:
            case 343:
            case 344:
            case 345:
            case 346:
            case 347:
            case 348:
            case 349:
            case 350:
            case 351:
            case 354:
            case 355:
            case 356:
            case 357:
            case 358:
            case 359:
            case 360:
            case 361:
            case 362:
            case 363:
            case 364:
            case 365:
            case 366:
            case 367:
            case 368:
            case 369:
            case 370:
            case 371:
            case 372:
            case 373:
            case 374:
            case 375:
            case 377:
            case 378:
            case 379:
            case 380:
            case 383:
            case 384:
            case 385:
            case 386:
            case 387:
            case 388:
            case 389:
            case 390:
            case 391:
            case 392:
            case 393:
            case 394:
            case 395:
            case 396:
            case 397:
            case 398:
            case 399:
            case 400:
            case 401:
                goto switchD_1008e38b9_caseD_2015;
            case 352:
                uVar1 = 138;
                break;
            case 353:
                uVar1 = 154;
                break;
            case 376:
                uVar1 = 159;
                break;
            case 381:
                uVar1 = 142;
                break;
            case 382:
                uVar1 = 158;
                break;
            case 402:
                uVar1 = 131;
                break;
            default:
                if (arg1 == 710) {
                    return 136;
                }
                if (arg1 == 732) {
                    return 152;
                }
                goto switchD_1008e38b9_caseD_2015;
            }
        } else {
            uVar1 = 128;
            switch (arg1) {
            case 8211:
                uVar1 = 150;
                break;
            case 8212:
                uVar1 = 151;
                break;
            case 8216:
                uVar1 = 145;
                break;
            case 8217:
                uVar1 = 146;
                break;
            case 8218:
                uVar1 = 130;
                break;
            case 8220:
                uVar1 = 147;
                break;
            case 8221:
                uVar1 = 148;
                break;
            case 8222:
                uVar1 = 132;
                break;
            case 8224:
                uVar1 = 134;
                break;
            case 8225:
                uVar1 = 135;
                break;
            case 8226:
                uVar1 = 149;
                break;
            case 8230:
                uVar1 = 133;
                break;
            case 8240:
                uVar1 = 137;
                break;
            case 8249:
                uVar1 = 139;
                break;
            case 8250:
                uVar1 = 155;
                break;
            case 8364:
                break;
            default:
                if (arg1 == 8482) {
                    return 153;
                }
            case 8213:
            case 8214:
            case 8215:
            case 8219:
            case 8223:
            case 8227:
            case 8228:
            case 8229:
            case 8231:
            case 8232:
            case 8233:
            case 8234:
            case 8235:
            case 8236:
            case 8237:
            case 8238:
            case 8239:
            case 8241:
            case 8242:
            case 8243:
            case 8244:
            case 8245:
            case 8246:
            case 8247:
            case 8248:
            case 8251:
            case 8252:
            case 8253:
            case 8254:
            case 8255:
            case 8256:
            case 8257:
            case 8258:
            case 8259:
            case 8260:
            case 8261:
            case 8262:
            case 8263:
            case 8264:
            case 8265:
            case 8266:
            case 8267:
            case 8268:
            case 8269:
            case 8270:
            case 8271:
            case 8272:
            case 8273:
            case 8274:
            case 8275:
            case 8276:
            case 8277:
            case 8278:
            case 8279:
            case 8280:
            case 8281:
            case 8282:
            case 8283:
            case 8284:
            case 8285:
            case 8286:
            case 8287:
            case 8288:
            case 8289:
            case 8290:
            case 8291:
            case 8292:
            case 8293:
            case 8294:
            case 8295:
            case 8296:
            case 8297:
            case 8298:
            case 8299:
            case 8300:
            case 8301:
            case 8302:
            case 8303:
            case 8304:
            case 8305:
            case 8306:
            case 8307:
            case 8308:
            case 8309:
            case 8310:
            case 8311:
            case 8312:
            case 8313:
            case 8314:
            case 8315:
            case 8316:
            case 8317:
            case 8318:
            case 8319:
            case 8320:
            case 8321:
            case 8322:
            case 8323:
            case 8324:
            case 8325:
            case 8326:
            case 8327:
            case 8328:
            case 8329:
            case 8330:
            case 8331:
            case 8332:
            case 8333:
            case 8334:
            case 8335:
            case 8336:
            case 8337:
            case 8338:
            case 8339:
            case 8340:
            case 8341:
            case 8342:
            case 8343:
            case 8344:
            case 8345:
            case 8346:
            case 8347:
            case 8348:
            case 8349:
            case 8350:
            case 8351:
            case 8352:
            case 8353:
            case 8354:
            case 8355:
            case 8356:
            case 8357:
            case 8358:
            case 8359:
            case 8360:
            case 8361:
            case 8362:
            case 8363:
            switchD_1008e38b9_caseD_2015:
                uVar1 = 63;
            }
        }
        return uVar1;
    }

    // 0x1008e3d70
    eastl::optional<unsigned int> FontHelpers::ConvertTagCharCodes(StringView stringView) {
        unsigned int* arg1;
        StringView local_a0;
        StringView local_90;
        StringView local_80;
        StringView local_70;
        StringView local_60;
        StringView local_50;
        StringView local_40;
        StringView local_30;

        local_a0.StringView<3ul>("lt");
        if (!(*stringView == &local_a0)) {
            local_90.StringView<3ul>("gt");
            if (!(*stringView == &local_90)) {
                local_80.StringView<5ul>("nbsp");
                if (!(*stringView == &local_80)) {
                    local_70.StringView<4ul>("shy");
                    if (!(*stringView == &local_70)) {
                        local_60.StringView<6ul>("times");
                        if (!(*stringView == &local_60)) {
                            local_50.StringView<5ul>("euro");
                            if (!(*stringView == &local_50)) {
                                local_40.StringView<5ul>("copy");
                                if (!(*stringView == &local_40)) {
                                    local_30.StringView<4ul>("reg");
                                    if (!(*stringView == &local_30)) {
                                        return eastl::optional<unsigned int>();
                                    }
                                    arg1 = &regCharCode;
                                } else {
                                    arg1 = &copyCharCode;
                                }
                            } else {
                                arg1 = &euroCharCode;
                            }
                        } else {
                            arg1 = &timesCharCode;
                        }
                    } else {
                        arg1 = &shyCharCode;
                    }
                } else {
                    arg1 = &nbspCharCode;
                }
            } else {
                arg1 = &gtCharCode;
            }
        } else {
            arg1 = &ltCharCode;
        }
        new (&result) eastl::optional(*arg1);
        return result;
    }

    // 0x1008e4110
    void FontHelpers::PredictCharPosAtIndexMultiline(StringView stringView, int arg2, int arg3,
                                                     const FontMetrics& fontMetrics, TextFlags textFlags,
                                                     eastl::optional<int> arg6) {
        bool bVar1;
        uint8_t bVar2;
        uint8_t uVar3;
        unsigned int uVar5;
        char* str;
        unsigned long uVar6;
        uint64_t uVar7;
        StringView* stringView_00;
        unsigned long uVar8;
        long lVar9;
        unsigned long arg3_00;
        int iVar10;
        long lVar11;
        StringView local_3b0;
        StringView local_3a0;
        uint64_t local_390;
        uint64_t local_388;
        unsigned long local_380;
        uint64_t local_378;
        int local_368;
        int local_364;
        int local_360;
        int local_35c;
        uint64_t local_350;
        int local_348;
        unsigned long local_340;
        int local_338;
        int local_334;
        TextFlags local_330;
        uint64_t local_328;
        int local_100[50];

        local_330[0].field_0 = textFlags.field_0;
        int local_36c = arg2;
        local_328._0_4_ = fontMetrics.GetVerticalSpacing();
        int iVar4 = arg6->value_or<int>(local_328);
        if (arg3 < 1) {
            local_328 = (unsigned long)local_328._4_4_ << 32;
            bVar2 = fontMetrics.GetMaxAscent();
            local_100[0] = iVar4 + (unsigned int)bVar2;
            local_350 = eastl::make_pair<int, int&>(local_328, *local_100);
        } else {
            str = (char*)stringView->end();
            uVar6 = stringView->HeapBeginPtr();
            uVar7 = stringtools::GetUTF8StringWidth(str, uVar6);
            iVar10 = (int)uVar7;
            if (iVar10 != 0) {
                local_348 = arg3;
                if (iVar10 < arg3) {
                    local_348 = iVar10;
                }
                new (local_100) eastl::fixed_vector<StringView, 10ul, true, BucketAllocatorEASTL>();
                local_3a0 = StringView(*stringView);
                local_388 = SplitString((fixed_vector<StringView, _10ul, true, BucketAllocatorEASTL>*)local_100,
                                        &local_3a0, fontMetrics, &local_36c, (TextFlags)local_330[0].field_0);
                local_35c = (int)local_388 - 1;
                local_338 = 0;
                uVar6 = 0;
                local_390 = uVar7;
                local_360 = iVar4;
                iVar4 = 0;
                while (true) {
                    if ((int)local_388 <= iVar4) {
                        LogAssertAlways(
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "fonts/FontHelpers.cpp",
                            659, "FontHelpers::PredictCharPosAtIndexMultiline - Reached end of file before expected.");
                    }
                    local_334 = iVar4;
                    local_378 = ((Layout*)(*local_100)[(long)iVar4])->HeapBeginPtr();
                    stringView_00 = (StringView*)(*local_100)[(long)iVar4];
                    uVar8 = stringtools::GetUTF8StringWidth<StringView>(*stringView_00);
                    iVar4 = (int)uVar6;
                    uVar5 = (int)uVar8 + iVar4;
                    local_380 = (unsigned long)uVar5;
                    if ((local_348 < (int)uVar5) || ((local_334 == local_35c && ((int)local_390 <= arg3))))
                        break;
                    local_338 = local_338 + (int)local_378;
                    local_334 = local_334 + 1;
                    uVar6 = local_380;
                    iVar4 = local_334;
                }
                new (&local_328) eastl::fixed_string<char, 512>();
                local_340 = 0;
                uVar8 = (unsigned long)(unsigned int)(local_348 - iVar4);
                if (local_348 - iVar4 != 0 && iVar4 <= local_348) {
                    lVar11 = (long)local_338;
                    do {
                        lVar9 = stringView->end();
                        arg3_00 = ShuffledPacketFactory::p2_alt2();
                        uVar5 = stringtools::GetUTF8NextChar((lVar9 + lVar11), local_340, arg3_00);
                        stringtools::UTF8Append<eastl::fixed_string<char, 24>>(uVar5, local_328);
                        uVar8 = uVar8 - 1;
                    } while (uVar8 != 0);
                }
                bVar1 = ends_with<eastl::fixed_string<char, 512>>((fixed_string<char, _512>*)&local_328, "<br>");
                iVar4 = local_360;
                if (bVar1) {
                    local_328 = "";
                    local_338 = local_338 + (int)local_378;
                    local_334 = local_334 + 1;
                } else {
                    local_380 = uVar6;
                }
                local_3b0.StringView<eastl::fixed_string<char, 512>>(local_328);
                bVar1 = (bool)local_330.HasFlag(1);
                local_368 = GetStringWidth(&local_3b0, fontMetrics, bVar1);
                bVar2 = fontMetrics.GetMaxAscent();
                local_364 = local_334 * iVar4 + (unsigned int)bVar2;
                local_350 = eastl::make_pair<int, int&>(local_368, local_364);
            }
            local_100[0] = 0;
            uVar3 = fontMetrics.GetMaxAscent();
            local_340 = (((uint64_t)local_340._1_7_ << 8) | (uint8_t)uVar3);
            local_328 = eastl::make_pair<int, unsigned char>(*local_100, local_340);
            local_350.pair<int, unsigned char, void>(local_328);
        }
        return local_350;
    }

    // 0x1008e46a0
    void FontHelpers::PredictCharPosAtIndex(StringView stringView, const FontMetrics& fontMetrics, int arg3,
                                            bool arg4) {
        unsigned int uVar1;
        char* pcVar2;
        unsigned long uVar3;
        unsigned long arg3_00;
        uint32_t in_register_00000009;
        StringView local_288;
        fixed_string<char, 512> local_260;

        uint32_t local_264 = (((uint32_t)in_register_00000009 << 8) | (uint8_t)arg4);
        if (0 < arg3) {
            pcVar2 = (char*)stringView->end();
            uVar3 = stringView->HeapBeginPtr();
            uVar1 = stringtools::GetUTF8StringWidth(pcVar2, uVar3);
            if ((int)uVar1 < arg3) {
                arg3 = uVar1;
            }
            local_260 = eastl::fixed_string<char, 512>();
            if (0 < arg3) {
                uVar3 = (unsigned long)(unsigned int)arg3;
                do {
                    pcVar2 = (char*)stringView->end();
                    arg3_00 = ShuffledPacketFactory::p2_alt2();
                    uVar1 = stringtools::GetUTF8NextChar(pcVar2, 0, arg3_00);
                    stringtools::UTF8Append<eastl::fixed_string<char, 24>>(uVar1, local_260);
                    uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
            }
            local_288.StringView<eastl::fixed_string<char, 512>>(local_260);
            GetStringWidth(&local_288, fontMetrics, local_264._0_1_);
        }
        return 0;
    }

    // 0x1008e47f0
    unsigned long FontHelpers::PredictCharAtPosMultiline(StringView stringView, int* arg2, int arg3, int arg4,
                                                         const FontMetrics& fontMetrics, TextFlags textFlags,
                                                         eastl::optional<int> arg7) {
        bool bVar1;
        int iVar3;
        StringView* pSVar4;
        long lVar5;
        type* ptVar6;
        type* ptVar7;
        type* ptVar8;
        unsigned long uVar9;
        unsigned long uVar10;
        unsigned long uVar11;
        uint32_t in_register_00000084;
        unsigned int uVar12;
        int iVar13;
        unsigned int uVar14;
        uint64_t in_stack_00000009;
        StringView local_190;
        StringView local_180;
        StringView local_170;
        uint64_t local_150;
        uint64_t local_148;
        unsigned long local_140;
        FontMetrics* local_138;
        unsigned int local_12c;
        int local_128;
        StringView local_120;
        unsigned long local_110;
        unsigned int local_108;

        FontMetrics* fontMetrics_00 = (FontMetrics*)(((uint64_t)in_register_00000084 << 32) | (uint32_t)arg4);
        fixed_vector<StringView, 10ul, true, BucketAllocatorEASTL> local_100;
        StringView local_160(*this);
        unsigned int local_124 = (unsigned int)fontMetrics & 255;
        int iVar2 = SplitString((fixed_vector<StringView, _10ul, true, BucketAllocatorEASTL>*)&local_100, &local_160,
                                fontMetrics_00, (int*)stringView, (TextFlags)(uint8_t)fontMetrics);
        unsigned long uVar15 = 0;
        if (iVar2 != 0) {
            iVar13 = 0;
            if (-1 < arg3) {
                iVar13 = arg3;
            }
            local_120.field_0._0_4_ = fontMetrics_00->GetVerticalSpacing();
            iVar3 = ((optional<int>*)(((uint64_t)in_stack_00000009 << 8) | (uint8_t)textFlags.field_0))
                        ->value_or<int>(local_120);
            local_108 = iVar2 - 1;
            if (iVar13 / iVar3 < iVar2) {
                local_108 = iVar13 / iVar3;
            }
            pSVar4 = &local_100[(long)(int)local_108];
            local_120 = StringView(*pSVar4);
            local_110 = 0;
            lVar5 = local_120.HeapBeginPtr();
            uVar14 = 0;
            if (lVar5 == 0) {
                iVar2 = 0;
                uVar11 = 0;
            } else {
                iVar2 = 0;
                uVar11 = 0;
                local_138 = fontMetrics_00;
                if (0 < (int)arg2) {
                    uVar11 = 0;
                    iVar2 = 0;
                    uVar15 = 0;
                    uVar12 = 0;
                    do {
                        uVar9 = local_110;
                        local_140 = uVar15;
                        local_12c = uVar12;
                        local_128 = iVar2;
                        local_190 = StringView(local_120);
                        local_150 = GetNextElementLength(&local_190, &local_110, (TextFlags)(uint8_t)local_124);
                        ptVar6 = std::get<0ul, unsigned int, unsigned int>(local_150);
                        ptVar7 = std::get<1ul, unsigned int, unsigned int>(local_150);
                        local_180 = ((unsigned long)&local_120)->substr(uVar9);
                        local_170 = StringView(local_180);
                        local_148 = GetElementWidth(&local_170, local_12c, *(unsigned int*)ptVar7, local_138);
                        ptVar8 = std::get<0ul, unsigned int, unsigned int>(local_148);
                        ptVar7 = std::get<1ul, unsigned int, unsigned int>(local_148);
                        uVar15 = local_110;
                        uVar12 = *(unsigned int*)ptVar7;
                        uVar11 = uVar11 + *(unsigned int*)ptVar6;
                        uVar14 = *(int*)ptVar8 + (int)local_140;
                        iVar2 = local_128;
                        if (*(int*)ptVar8 != 0) {
                            iVar2 = (int)local_140;
                        }
                        uVar9 = local_120.HeapBeginPtr();
                    } while ((uVar15 < uVar9) && (uVar15 = (unsigned long)uVar14, (int)uVar14 < (int)arg2));
                }
            }
            uVar15 = local_110;
            uVar9 = local_120.HeapBeginPtr();
            if (uVar15 == uVar9) {
                bVar1 = ends_with<StringView>(&local_120, "<br>");
                uVar15 = uVar11 - 4;
                if (!bVar1) {
                    uVar15 = uVar11;
                }
            } else {
                uVar15 = uVar11 - ((unsigned int)((int)arg2 - iVar2) < uVar14 - (int)arg2);
            }
            if (0 < (int)local_108) {
                uVar9 = (unsigned long)local_108;
                uVar11 = 0;
                do {
                    pSVar4 = &local_100[uVar11];
                    uVar10 = stringtools::GetUTF8StringWidth<StringView>(*pSVar4);
                    uVar15 = uVar15 + uVar10;
                    uVar11 = uVar11 + 1;
                } while (uVar9 != uVar11);
            }
        }
        local_100.~fixed_vector();
        return uVar15 & 4294967295;
    }

    // 0x1008e4be0
    unsigned int FontHelpers::FromCodeMap(unsigned int arg1) {
        if ((arg1 - 1 < 127) || (arg1 - 160 < 96)) {
            return arg1;
        }
        unsigned int uVar1 = 63;
        if (arg1 - 128 < 32) {
            uVar1 = *(unsigned int*)(&reinterpret_cast<const uint64_t*>(&OVERRIDE_INTERFACE_SCALE_LIMIT_HEIGHT)[2] +
                                     (long)(int)(arg1 - 128) * 4);
        }
        return uVar1;
    }

    // 0x1008e4c20
    void FontHelpers::IsDrawableCodepoint(unsigned int arg1) {
        if (arg1 - 32 < 96) {
            return 1;
        }
        if (arg1 - 160 < 96) {
            return 1;
        }
        if ((int)arg1 < 732) {
            switch (arg1) {
            case 338:
            case 339:
            case 352:
            case 353:
            case 376:
            case 381:
            case 382:
            case 402:
                break;
            case 340:
            case 341:
            case 342:
            case 343:
            case 344:
            case 345:
            case 346:
            case 347:
            case 348:
            case 349:
            case 350:
            case 351:
            case 354:
            case 355:
            case 356:
            case 357:
            case 358:
            case 359:
            case 360:
            case 361:
            case 362:
            case 363:
            case 364:
            case 365:
            case 366:
            case 367:
            case 368:
            case 369:
            case 370:
            case 371:
            case 372:
            case 373:
            case 374:
            case 375:
            case 377:
            case 378:
            case 379:
            case 380:
            case 383:
            case 384:
            case 385:
            case 386:
            case 387:
            case 388:
            case 389:
            case 390:
            case 391:
            case 392:
            case 393:
            case 394:
            case 395:
            case 396:
            case 397:
            case 398:
            case 399:
            case 400:
            case 401:
                goto switchD_1008e4c5d_caseD_2015;
            default:
                if ((1 < arg1 - 9) && (arg1 != 710)) {
                    return 0;
                }
            }
        } else {
            switch (arg1) {
            case 8211:
            case 8212:
            case 8216:
            case 8217:
            case 8218:
            case 8220:
            case 8221:
            case 8222:
            case 8224:
            case 8225:
            case 8226:
            case 8230:
            case 8240:
            case 8249:
            case 8250:
            case 8364:
                break;
            case 8213:
            case 8214:
            case 8215:
            case 8219:
            case 8223:
            case 8227:
            case 8228:
            case 8229:
            case 8231:
            case 8232:
            case 8233:
            case 8234:
            case 8235:
            case 8236:
            case 8237:
            case 8238:
            case 8239:
            case 8241:
            case 8242:
            case 8243:
            case 8244:
            case 8245:
            case 8246:
            case 8247:
            case 8248:
            case 8251:
            case 8252:
            case 8253:
            case 8254:
            case 8255:
            case 8256:
            case 8257:
            case 8258:
            case 8259:
            case 8260:
            case 8261:
            case 8262:
            case 8263:
            case 8264:
            case 8265:
            case 8266:
            case 8267:
            case 8268:
            case 8269:
            case 8270:
            case 8271:
            case 8272:
            case 8273:
            case 8274:
            case 8275:
            case 8276:
            case 8277:
            case 8278:
            case 8279:
            case 8280:
            case 8281:
            case 8282:
            case 8283:
            case 8284:
            case 8285:
            case 8286:
            case 8287:
            case 8288:
            case 8289:
            case 8290:
            case 8291:
            case 8292:
            case 8293:
            case 8294:
            case 8295:
            case 8296:
            case 8297:
            case 8298:
            case 8299:
            case 8300:
            case 8301:
            case 8302:
            case 8303:
            case 8304:
            case 8305:
            case 8306:
            case 8307:
            case 8308:
            case 8309:
            case 8310:
            case 8311:
            case 8312:
            case 8313:
            case 8314:
            case 8315:
            case 8316:
            case 8317:
            case 8318:
            case 8319:
            case 8320:
            case 8321:
            case 8322:
            case 8323:
            case 8324:
            case 8325:
            case 8326:
            case 8327:
            case 8328:
            case 8329:
            case 8330:
            case 8331:
            case 8332:
            case 8333:
            case 8334:
            case 8335:
            case 8336:
            case 8337:
            case 8338:
            case 8339:
            case 8340:
            case 8341:
            case 8342:
            case 8343:
            case 8344:
            case 8345:
            case 8346:
            case 8347:
            case 8348:
            case 8349:
            case 8350:
            case 8351:
            case 8352:
            case 8353:
            case 8354:
            case 8355:
            case 8356:
            case 8357:
            case 8358:
            case 8359:
            case 8360:
            case 8361:
            case 8362:
            case 8363:
            switchD_1008e4c5d_caseD_2015:
                return 0;
            default:
                if ((arg1 != 732) && (arg1 != 8482)) {
                    return 0;
                }
            }
        }
        return 1;
    }

    // 0x1008e5180
    void FontHelpers::FontState::UpdateState(StringView stringView) {
        bool bVar2;
        unsigned int uVar3;
        long lVar5;
        Logger* this_00;
        uint64_t uVar6;
        uint64_t uVar7;
        int arg4;
        char* str2;
        StringView local_178;
        StringView local_168;
        StringView local_158;
        StringView local_148;
        StringView local_138;
        StringView local_128;
        StringView local_118;
        StringView local_108;
        StringView local_f8;
        StringView local_e8;
        StringView local_d8;
        StringView local_c8;
        StringView local_b8;
        StringView local_a8;
        StringView local_98;
        optional<unsigned int> local_88;
        StringView local_80;
        StringView local_70;
        StringView local_60;
        StringView local_50;
        StringView local_40;
        int local_2c;

        local_178.StringView<5ul>("/col");
        bool cVar1 = *stringView == &local_178;
        if (cVar1) {
            field_8 = field_12 & 4294967040 | (unsigned int)(uint8_t)field_8;
            return;
        }
        local_168.StringView<5ul>("col=");
        local_50.suffix_of(stringView);
        cVar1 = local_50.empty();
        if (cVar1) {
            local_148.StringView<6ul>("argb=");
            local_40.suffix_of(stringView);
            cVar1 = local_40.empty();
            if (!cVar1) {
                bVar2 = FromString<StringView, int>(&local_40, (int*)&local_80, 16);
                if (bVar2) {
                    field_8 = (unsigned int)local_80.field_0 << 8 | (unsigned int)local_80.field_0 >> 24;
                    return;
                }
                this_00 = logger::default_logger();
                uVar6 = stringView->HeapBeginPtr();
                uVar7 = stringView->end();
                str2 = "Failed to parse argb tag value from %.*s";
                arg4 = 1408;
            } else {
                local_138.StringView<6ul>("/argb");
                cVar1 = *stringView == &local_138;
                if (cVar1) {
                    field_8 = field_12;
                    return;
                }
                local_128.StringView<5ul>("str=");
                local_80.suffix_of(stringView);
                cVar1 = local_80.empty();
                if (!cVar1) {
                    bVar2 = FromString<StringView, int>(&local_80, (int*)&local_70, 16);
                    if (bVar2) {
                        field_0 = (int)local_70.field_0 << 8 | (unsigned int)(uint8_t)field_8;
                        return;
                    }
                    this_00 = logger::default_logger();
                    uVar6 = stringView->HeapBeginPtr();
                    uVar7 = stringView->end();
                    str2 = "Failed to parse strikethrough tag value from %.*s";
                    arg4 = 1426;
                } else {
                    local_118.StringView<4ul>("str");
                    cVar1 = *stringView == &local_118;
                    if (cVar1) {
                        field_0 = (uint8_t)field_8 | 2147483648;
                        return;
                    }
                    local_108.StringView<5ul>("/str");
                    cVar1 = *stringView == &local_108;
                    if (cVar1) {
                        field_0 = 4294967295;
                        return;
                    }
                    local_f8.StringView<3ul>("u=");
                    local_70.suffix_of(stringView);
                    cVar1 = local_70.empty();
                    if (cVar1) {
                        local_e8 = StringView("u");
                        cVar1 = *stringView == &local_e8;
                        if (cVar1) {
                            field_4 = (unsigned int)(uint8_t)field_8;
                            return;
                        }
                        local_d8.StringView<3ul>("/u");
                        cVar1 = *stringView == &local_d8;
                        if (cVar1) {
                            field_4 = 4294967295;
                            return;
                        }
                        local_c8.StringView<6ul>("shad=");
                        local_60.suffix_of(stringView);
                        cVar1 = local_60.empty();
                        if (!cVar1) {
                            bVar2 = FromString<StringView, int>(&local_60, &local_2c, 16);
                            uVar3 = 0;
                            if ((bVar2) && (local_2c != -1)) {
                                uVar3 = local_2c << 8 | (unsigned int)(uint8_t)field_8;
                            }
                            field_24 = uVar3;
                            return;
                        }
                        local_b8.StringView<5ul>("shad");
                        cVar1 = *stringView == &local_b8;
                        if (cVar1) {
                            field_24 = (unsigned int)(uint8_t)field_8;
                            return;
                        }
                        local_a8.StringView<6ul>("/shad");
                        cVar1 = *stringView == &local_a8;
                        if (cVar1) {
                            field_24 = field_28;
                            return;
                        }
                        local_98.StringView<3ul>("br");
                        cVar1 = *stringView == &local_98;
                        if (!cVar1) {
                            return;
                        }
                        uVar3 = field_12;
                        local_88 = eastl::optional(field_28);
                        ResetState(uVar3, &local_88);
                        return;
                    }
                    bVar2 = FromString<StringView, int>(&local_70, (int*)&local_60, 16);
                    if (bVar2) {
                        field_4 = (int)local_60.field_0 << 8 | (unsigned int)(uint8_t)field_8;
                        return;
                    }
                    this_00 = logger::default_logger();
                    uVar6 = stringView->HeapBeginPtr();
                    uVar7 = stringView->end();
                    str2 = "Failed to parse m_underline tag value from %.*s";
                    arg4 = 1448;
                }
            }
        LAB_1008e5411:
            this_00->Log(true, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                         "fonts/FontHelpers.cpp",
                         arg4, str2, uVar6, uVar7);
            return;
        }
        bVar2 = FromString<StringView, unsigned int>(&local_50, (unsigned int*)&local_40, 16);
        if (!bVar2) {
            this_00 = logger::default_logger();
            uVar6 = stringView->HeapBeginPtr();
            uVar7 = stringView->end();
            str2 = "Failed to parse colour tag value from %.*s";
            arg4 = 1394;
            goto LAB_1008e5411;
        }
        unsigned long uVar4 = local_50.HeapBeginPtr();
        if (6 < uVar4) {
            local_158.StringView<3ul>("0x");
            cVar1 = local_50.starts_with(&local_158);
            if ((!cVar1) || (lVar5 = local_50.HeapBeginPtr(), lVar5 != 8))
                goto LAB_1008e53c9;
        }
        local_40.field_0._0_4_ = (unsigned int)local_40.field_0 << 8 | 255;
    LAB_1008e53c9:
        field_8 = (unsigned int)local_40.field_0;
    }

    // 0x1008e5850
    void FontHelpers::FontState::ResetState(unsigned int arg1, eastl::optional<unsigned int> arg2) {
        unsigned int* puVar1;

        field_0 = 4294967295;
        field_4 = 4294967295;
        field_12 = arg1;
        field_8 = arg1;
        field_16 = 0;
        optional<game::option::EnumOptionToggle> local_28;
        bool bVar2 = *arg2 != local_28;
        field_20 = bVar2;
        unsigned int uVar3 = 0;
        if (bVar2) {
            puVar1 = (unsigned int*)arg2->value();
            uVar3 = *puVar1;
        }
        field_28 = uVar3;
        field_24 = uVar3;
    }

} // namespace jag::graphics

namespace jag {
    // 0x1008e0020
    bool FromString<StringView, int>(const StringView& stringView, int& arg2, int arg3) {

        StringView local_30(stringView);
        return (bool)FromText(&local_30, arg2, arg3);
    }

} // namespace jag
