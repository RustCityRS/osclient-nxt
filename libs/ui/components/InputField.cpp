// libs/ui/components/InputField.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "InputField.h"

namespace jag::ui {
    // 0x100009e70: InputField::DrawFocus(ComponentDependencies const&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100029ea0: InputField::ShouldBlockInput(int, int) const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x10002d860: InputField::IsKeyReceiver() const has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x100269bc0: InputField::GetType() const has the same machine code as oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit::GetID() const

    // 0x1005fa390: InputField::SupportsMargin(Component::MarginType) const has the same machine code as game::option::WindowMode::IsAvailable(game::option::OptionClient) const

    // 0x100698620
    InputField::InputField(InterfaceManager* interfaceManager) : Component(), MakeSharedPool<InputField, 128>() {
        field_408 = &PTR__InputField_100f0f098;
        new (&field_416) SpriteData();
        new (field_464) TextData();
        field_528 = 0;
        field_532 = 0;
        field_536 = 0;
        field_544 = 0;
        field_552 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)0;
        new (&field_560) eastl::basic_string<char, BucketAllocatorEASTL>();
        *(uint64_t*)&field_584 = 18446744071418902527;
        field_592 = 4278190335;
        field_596 = 2004318071;
        new (&field_600) ScrollBar();
        new (field_768) Margin(255);
        new (field_776) graphics::TextRun();
        new (&field_856) eastl::basic_string<char, BucketAllocatorEASTL>();
        *(uint16_t*)&field_880 = 0;
        field_882 = 0;
        field_884 = 0;
        field_888 = 0;
        field_896 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)0;
        field_904 = 4294967295;
        field_908 = 0;
        field_912 = 0.0;
        field_916 = 0;
        field_920 = 0;
        field_928 = interfaceManager;
        SetEnabled(true);
    }

    // 0x100698870
    void InputField::SetEnabled(bool arg1) {
        SetEnabled(arg1);
        CancelFocus();
    }

    // 0x1006988b0
    void InputField::MainLogic(const ComponentDependencies& componentDependencies, int arg2, int arg3, bool arg4,
                               bool arg5, bool arg6, bool arg7) {
        uint8_t* puVar1;
        long* plVar2;
        ScrollBar* this_00;
        uint8_t bVar4;
        uint8_t bVar5;
        int iVar7;
        int iVar8;
        Layout* pLVar9;
        shared_ptr<graphics::FontMetrics>* psVar10;
        FontMetrics* pFVar11;
        long lVar12;
        function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>* pfVar13;
        uint64_t in_register_00000081;
        uint64_t in_register_00000089;
        int iVar14;
        uint8_t local_88[16];
        InputField* local_78[2];
        ScrollBar* local_68;
        int local_58;
        int local_54;
        unsigned int local_50;
        int local_4c;
        int local_48;

        uint32_t local_5c = (uint32_t)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg5);
        uint32_t local_44 = (uint32_t)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4);
        auto this_01 = UpdateTextRunSettings(*(FontManager**)(componentDependencies + 8));
        char cVar3 = shared_ptr::operator_cast_to_bool(this_01);
        if (!cVar3) {
            return;
        }
        if (field_884 != 0) {
            field_884 = field_884 - 1;
        }
        cVar3 = IsEnabled();
        if (!cVar3) {
            return;
        }
        int local_3c = arg3;
        int local_34 = arg2;
        int local_40 = GetStreamCountLastMix();
        int local_38 = GetMinMapX();
        local_88._0_4_ = field_416.GetVisualMargin();
        Margin local_60 = (Margin)field_768->GetValidOr(local_88);
        local_60.ApplyTo(local_34, local_3c, local_40, local_38);
        local_34 = local_34 + 2;
        local_3c = local_3c + 2;
        local_40 = local_40 - 4;
        local_38 = local_38 - 4;
        cVar3 = IsMultiline();
        if (!cVar3) {
            iVar7 = field_776->GetWidth();
            pLVar9 = (Layout*)(*this_01).operator->();
            psVar10 = (shared_ptr<graphics::FontMetrics>*)pLVar9->SSOBeginPtr();
            pFVar11 = (FontMetrics*)(*psVar10).operator->();
            iVar8 = pFVar11->GetVerticalSpacing();
            cVar3 = field_464->GetTextHAlign();
            if (cVar3 == '\x02') {
                local_34 = local_34 + (local_40 - iVar7);
            } else if (cVar3 == '\x01') {
                local_34 = local_34 + (local_40 - iVar7) / 2;
            }
            cVar3 = field_464->GetTextVAlign();
            if (cVar3 == '\x02') {
                local_3c = local_3c + (local_38 - iVar8);
            } else if (cVar3 == '\x01') {
                local_3c = local_3c - (local_38 - iVar8) / 2;
                goto joined_r0x000100698bf8;
            }
        } else {
            local_68 = (ScrollBar*)&field_600;
            cVar3 = local_68->GetAutoHide();
            if ((cVar3) && (iVar7 = field_776->GetHeight(), iVar7 <= local_38)) {
                local_68->ClearInteractionState();
                field_916 = 0;
                field_920 = 0;
                field_888 = 0;
                goto joined_r0x000100698bf8;
            }
            iVar7 = field_920;
            if (iVar7 != 0) {
                iVar8 = 0;
                if (2 < iVar7 + 1U) {
                    ApplyScroll(iVar7);
                    iVar8 = (int)field_920 / 2;
                }
                field_920 = iVar8;
            }
            if (arg6) {
                pLVar9 = (Layout*)(*this_01).operator->();
                psVar10 = (shared_ptr<graphics::FontMetrics>*)pLVar9->SSOBeginPtr();
                pFVar11 = (FontMetrics*)(*psVar10).operator->();
                iVar7 = pFVar11->GetVerticalSpacing();
                iVar7 = ApplyScroll((int)((float)iVar7 * 0.25) * *(int*)(componentDependencies + 68));
                field_920 = field_920 + iVar7;
            }
            puVar1 = field_776;
            iVar7 = puVar1->GetIndexAtPos(0, field_916);
            field_888 = (long)iVar7;
            new (local_88) oldscape::dash3d::GridRect(local_34, local_3c, local_40, local_38);
            pLVar9 = (Layout*)(*this_01).operator->();
            psVar10 = (shared_ptr<graphics::FontMetrics>*)pLVar9->SSOBeginPtr();
            pFVar11 = (FontMetrics*)(*psVar10).operator->();
            local_58 = pFVar11->GetVerticalSpacing();
            this_00 = local_68;
            iVar14 = local_40 + local_34;
            local_78[0] = this;
            bVar4 = local_68->GetSize();
            local_54 = local_3c;
            bVar5 = this_00->GetSize();
            local_50 = (unsigned int)bVar5;
            local_4c = local_38;
            local_48 = field_916;
            iVar7 = puVar1->GetHeight();
            iVar7 = iVar7 + local_38;
            iVar8 = puVar1->GetLineHeight();
            if (ScrollBar::ProcessInput<InputField::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool,
                                                              bool)::__50&>(
                    this_00, (MouseState*)(componentDependencies + 56), iVar14 - (unsigned int)bVar4, local_54,
                    local_50, local_4c, (Rect<int>*)local_88, local_48, iVar7 - iVar8, local_58, (__50*)local_78)) {
                return;
            }
        }
    joined_r0x000100698bf8:
        if (((char)local_44 != '\0') || ((char)local_5c != '\0')) {
            local_88->shared_from_this();
            plVar2 = *(long**)(componentDependencies + 48);
            local_78->shared_ptr<InputField, void>(*local_88);
            (**(void (**)(...))(*plVar2 + 40))(plVar2, local_78);
            field_882 = 1;
            field_912 = 0.0;
            local_34 = (int)(*(float*)(componentDependencies + 60) - (float)local_34);
            local_3c = (int)(*(float*)(componentDependencies + 64) - (float)local_3c);
            puVar1 = field_776;
            if ((local_40 < local_34) || (local_38 < local_3c)) {
                pfVar13 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)
                              puVar1->GetCodepointCount();
            } else {
                cVar3 = puVar1->IsEmpty();
                if (!cVar3) {
                    lVar12 = puVar1->GetCharacter(field_888);
                    local_34 = local_34 + *(int*)(lVar12 + 4);
                }
                pfVar13 =
                    (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)puVar1->GetIndexAtPos(
                        local_34, field_916 + local_3c);
            }
            field_552 = pfVar13;
            EnsureCaretVisible();
            if ((char)local_44 != '\0') {
                field_896 = field_552;
            }
        }
    }

    // 0x100698d80
    shared_ptr* InputField::UpdateTextRunSettings(graphics::FontManager* fontManager) {
        uint8_t bVar3;
        uint32_t uVar5;
        Logger* this_02;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* this_03;
        function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>* pfVar6;
        int local_50[5];

        uint8_t* puVar1 = field_464;
        bool cVar2 = puVar1->GetTextMaxLines();
        if (!cVar2) {
            puVar1->SetTextMaxLines('\x01');
        }
        int iVar4 = puVar1->GetEndPosition();
        new (local_50) shared_ptr();
        auto this_00 = fontManager->GetFont(iVar4, *local_50);
        cVar2 = shared_ptr::operator_cast_to_bool(this_00);
        if (!cVar2) {
            this_02 = logger::default_logger();
            uVar5 = puVar1->GetEndPosition();
            this_02->Log(
                false, 5,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/InputField.cpp",
                1604, "Font %d not available yet (invalid/loading)", uVar5);
            this_03 =
                (basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)puVar1->GetScreen();
            pfVar6 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)this_03->size();
            field_552 = pfVar6;
            return this_00;
        }
        local_50[0] = 0;
        int local_3c = 0;
        int local_38 = GetStreamCountLastMix();
        int local_34 = GetMinMapX();
        field_416.ConvertToContentBounds(*local_50, local_3c, local_38, local_34);
        local_38 = local_38 - 4;
        local_34 = local_34 - 4;
        cVar2 = IsMultiline();
        if (cVar2) {
            cVar2 = field_600.GetAutoHide();
            if ((!cVar2) || (iVar4 = field_776->GetHeight(), local_34 < iVar4)) {
                bVar3 = field_600.GetSize();
                local_38 = local_38 - (unsigned int)bVar3;
            }
        }
        puVar1 = field_776;
        puVar1->SetContentVisibility(field_536);
        puVar1->SetShowLastChar(field_884 != 0);
        Layout* this_01 = (Layout*)(*this_00).operator->();
        auto fontMetrics = this_01->SSOBeginPtr();
        puVar1->SetFontMetrics(*fontMetrics);
        return this_00;
    }

    // 0x100698f80
    int InputField::ApplyScroll(int arg1) {
        uint8_t bVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        Margin local_44;
        int local_40[3];
        Margin local_34;

        if (arg1 != 0) {
            local_34 = (Margin)field_416.GetVisualMargin();
            local_44 = (Margin)field_768->GetValidOr(&local_34);
            iVar2 = GetMinMapX();
            bVar1 = local_44.GetHeight();
            local_40[2] = (iVar2 - (unsigned int)bVar1) - 4;
            iVar3 = field_776->GetHeight();
            iVar4 = field_776->GetLineHeight();
            local_34 = (Margin)(iVar3 - iVar4);
            if (local_40[2] < (int)((int)local_34 + (iVar2 - (unsigned int)bVar1) - 4)) {
                local_40[0] = field_916 + arg1;
                local_40[1] = 0;
                iVar2 = math::Clamp<int>(*local_40, *(local_40 + 1), local_34);
                field_916 = iVar2;
                return arg1;
            }
            field_916 = 0;
        }
        return 0;
    }

    // 0x1006990d0
    void InputField::EnsureCaretVisible() {
        uint8_t* puVar1;
        int iVar2;
        int iVar3;
        uint8_t bVar5;
        int iVar6;
        uint32_t uVar7;
        int iVar8;
        function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>* pfVar10;
        long lVar11;
        function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>* pfVar13;

        if (IsMultiline()) {
            pfVar13 = field_552;
            if (pfVar13 == (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)0) {
                iVar6 = -field_916;
            } else {
                puVar1 = field_776;
                pfVar10 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)
                              puVar1->GetCodepointCount();
                if (pfVar10 < pfVar13) {
                    iVar6 = puVar1->GetHeight();
                } else {
                    local_38 = (Margin)field_416.GetVisualMargin();
                    uVar7 = field_768->GetValidOr(&local_38);
                    local_68.field_0 = (TextRun*)(((uint64_t)local_68.field_0._4_4_ << 32) | (uint32_t)uVar7);
                    lVar11 = puVar1->GetCharacter((unsigned long)(field_552 - 1));
                    iVar2 = *(int*)(lVar11 + 8);
                    iVar8 = GetMinMapX();
                    bVar5 = local_68.GetHeight();
                    iVar3 = field_916;
                    iVar6 = iVar2 - iVar3;
                    if (iVar3 <= iVar2) {
                        iVar8 = (iVar8 - (unsigned int)bVar5) - 4;
                        iVar6 = puVar1->GetLineHeight();
                        if (iVar6 + iVar2 <= iVar3 + iVar8) {
                            return;
                        }
                        iVar6 = puVar1->GetLineHeight();
                        iVar6 = (iVar2 + iVar6) - (iVar8 + field_916);
                    }
                }
            }
            ApplyScroll(iVar6);
            return;
        }
        pfVar13 = field_552;
        if (((function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)field_888 == pfVar13) &&
            (pfVar13 != (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)0)) {
            field_888 = pfVar13 - 1;
            return;
        }
        puVar1 = field_776;
        if (puVar1->IsEmpty()) {
            field_888 = 0;
            return;
        }
        uVar7 = field_416.GetVisualMargin();
        local_68.field_0 = (TextRun*)(((uint64_t)local_68.field_0._4_4_ << 32) | (uint32_t)uVar7);
        Margin local_38 = (Margin)field_768->GetValidOr(&local_68);
        auto local_48 = puVar1->GetMaterial();
        TextRunSlice local_68 = puVar1->Slice(0, (unsigned long)field_552);
        iVar6 = local_68.GetLastCursorPosition();
        uint64_t local_40 = GetStreamCountLastMix();
        uint8_t local_31 = local_38.GetWidth();
        pfVar13 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)0;
        if ((function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)field_888 < field_552) {
            pfVar13 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)field_888;
        }
        lVar11 = puVar1->GetCodepointCount();
        local_68.field_0 = (TextRun*)(lVar11 - 1);
        auto puVar12 = std::min<unsigned long>(local_68, field_552);
        pfVar10 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)*puVar12;
        field_888 = 0;
        if (pfVar10 < pfVar13) {
            return;
        }
        unsigned int uVar9 = (unsigned int)local_31;
        iVar2 = (int)local_40;
        do {
            lVar11 = (*local_48)[(unsigned long)pfVar13];
            if (iVar6 - *(int*)(lVar11 + 4) <= (int)((iVar2 - uVar9) - 4)) {
                field_888 = pfVar13;
                return;
            }
            pfVar13 = pfVar13 + 1;
        } while (pfVar13 <= pfVar10);
    }

    // 0x100699330
    void InputField::MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4) {
        RT7Core* rt7Core;
        function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>* pfVar2;
        function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>* pfVar3;
        FontHelpers* pFVar4;
        TextRun* pTVar5;
        uint8_t bVar7;
        int iVar9;
        int iVar10;
        uint32_t uVar11;
        unsigned int uVar12;
        int iVar13;
        int iVar14;
        unsigned int uVar15;
        MapArea* this_06;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar17;
        Texture* pTVar18;
        SpriteAtlasReference* this_07;
        long lVar19;
        float* pfVar20;
        uint32_t* puVar21;
        Logger* pLVar22;
        unsigned int* puVar26;
        long lVar27;
        uint64_t uVar28;
        int* piVar29;
        unsigned long uVar31;
        char* str2;
        InputField* pIVar33;
        uint8_t local_120[40];
        uint8_t local_f0[48];
        TextRunSlice local_c0;
        shared_ptr* local_98;
        Texture* local_90;
        RT7Core* local_88;
        ScrollBar* local_80;
        unsigned int local_74;
        TextRun* local_60;
        int local_38;
        unsigned int local_34;

        local_88 = (RT7Core*)(((uint64_t)local_88._4_4_ << 32) | (uint32_t)arg4);
        char cVar6 = GetAlpha();
        local_60 = (TextRun*)(((uint64_t)local_60._1_7_ << 8) | (uint8_t)cVar6);
        if (!cVar6) {
            return;
        }
        uint8_t* puVar1 = &field_416;
        TextureManager* this_02 = (*(RT7Core**)(componentDependencies + 16))->GetTextureManager();
        auto spriteAtlasManager = this_02->GetSpriteAtlasManager();
        auto puVar16 = puVar1->LoadSpriteAtlasReference(*spriteAtlasManager, false);
        if (puVar16 != DataStatus::READY) {
            return;
        }
        GUIManager* local_58 = (GUIManager*)puVar1->GetDefaultValue();
        cVar6 = local_58->operator_cast_to_bool();
        if (!cVar6) {
            pLVar22 = logger::default_logger();
            str2 = "Invalid sprite atlas reference!";
            iVar9 = 230;
        LAB_1006995b6:
            pLVar22->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/InputField.cpp",
                iVar9, str2);
            return;
        }
        local_80 = (ScrollBar*)(((uint64_t)local_80._4_4_ << 32) | (uint32_t)arg3);
        FontManager* this_00 = *(FontManager**)(componentDependencies + 8);
        ComponentDependencies* local_70 = componentDependencies;
        InputField* local_68 = this;
        unsigned int local_4c = arg2;
        iVar9 = field_464->GetEndPosition();
        new (local_f0) shared_ptr();
        auto this_03 = this_00->GetFont(iVar9, *local_f0);
        cVar6 = shared_ptr::operator_cast_to_bool(this_03);
        if (!cVar6) {
            pLVar22 = logger::default_logger();
            str2 = "Invalid font!";
            iVar9 = 238;
            goto LAB_1006995b6;
        }
        TextData* local_a0 = (TextData*)field_464;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_04 =
            (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*local_58).operator->();
        auto this_05 = this_04->second();
        cVar6 = shared_ptr::operator_cast_to_bool(this_05);
        local_74 = (((uint32_t)local_74._1_3_ << 8) | (uint8_t)cVar6);
        if (!cVar6) {
            pLVar22 = logger::default_logger();
            pLVar22->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/InputField.cpp",
                248, "Invalid header sprite atlas reference!");
            pIVar33 = local_68;
            local_38 = (int)local_80;
            local_34 = local_4c;
        } else {
            this_06 = (MapArea*)(*this_05).operator->();
            pvVar17 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_06->GetOrigin();
            pTVar18 = (Texture*)pvVar17->end();
            pIVar33 = local_68;
            local_38 = (int)local_80;
            local_34 = local_4c;
            if (pTVar18 != nullptr) {
                local_98 = this_03;
                local_90 = pTVar18;
                this_07 = (SpriteAtlasReference*)(*local_58).operator->();
                lVar19 = this_07->GetRenderMapping();
                new (local_f0) math::Float4(*((lVar19 + 88)));
                cVar6 = pIVar33->IsEnabled();
                pfVar20 = (float*)local_f0->qw();
                local_f0->SetVerticalFov(*pfVar20 * 0.5);
                if (!cVar6) {
                    puVar21 = (uint32_t*)local_f0->y();
                    local_58 = (GUIManager*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)(*puVar21));
                    pfVar20 = (float*)local_f0->qw();
                    local_f0->SetY(local_58._0_4_ + *pfVar20);
                }
                rt7Core = *(RT7Core**)(local_70 + 16);
                iVar10 = pIVar33->GetStreamCountLastMix();
                uVar11 = local_68->GetMinMapX();
                local_58 = (GUIManager*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)uVar11);
                uVar12 = local_68->GetRGBA();
                uVar15 = local_4c;
                pIVar33 = local_68;
                iVar9 = (int)local_80;
                puVar1->DrawSpriteSlice(*rt7Core, local_4c, (int)local_80, iVar10, (int)local_58._0_4_, uVar12,
                                        *local_f0, local_90, 0.0);
                this_03 = local_98;
                local_38 = iVar9;
                local_34 = uVar15;
            }
        }
        if ((char)local_74 == '\0') {
            return;
        }
        int local_40 = pIVar33->GetStreamCountLastMix();
        int local_3c = pIVar33->GetMinMapX();
        Layout* pLVar23 = (Layout*)(*this_03).operator->();
        auto psVar24 = pLVar23->SSOBeginPtr();
        FontMetrics* pFVar25 = (FontMetrics*)(*psVar24).operator->();
        iVar9 = pFVar25->GetVerticalSpacing();
        local_f0._0_4_ = puVar1->GetVisualMargin();
        local_f0._40_4_ = pIVar33->field_768->GetValidOr(local_f0);
        ((local_f0 + 40))->ApplyTo(local_34, local_38, local_40, local_3c);
        unsigned long uVar30 = (unsigned long)local_34;
        local_34 = local_34 + 2;
        iVar10 = local_38 + 2;
        local_40 = local_40 - 4;
        local_3c = local_3c - 4;
        local_38 = iVar10;
        cVar6 = IsMultiline(pIVar33);
        unsigned long local_f8 = uVar30;
        local_98 = this_03;
        if (!cVar6) {
            if (local_3c < iVar9) {
                iVar9 = local_3c;
            }
            iVar13 = pIVar33->field_776->GetWidth();
            pLVar23 = (Layout*)(*this_03).operator->();
            psVar24 = (shared_ptr<graphics::FontMetrics>*)pLVar23->SSOBeginPtr();
            pFVar25 = (FontMetrics*)(*psVar24).operator->();
            iVar14 = pFVar25->GetVerticalSpacing();
            cVar6 = local_a0->GetTextHAlign();
            if (cVar6 == '\x02') {
                local_34 = local_34 + (local_40 - iVar13);
            } else if (cVar6 == '\x01') {
                local_34 = local_34 + (local_40 - iVar13) / 2;
            }
            cVar6 = local_a0->GetTextVAlign();
            pIVar33 = local_68;
            if (cVar6 != '\x02') {
                if (cVar6 == '\x01') {
                    local_38 = local_38 + (local_3c - iVar14) / 2;
                }
                uVar30 = 0;
                bVar7 = (uint8_t)local_60;
                goto LAB_1006997b5;
            }
            local_38 = local_38 + (local_3c - iVar14);
            uVar30 = 0;
        } else {
            cVar6 = pIVar33->field_600.GetAutoHide();
            if ((!cVar6) || (iVar13 = pIVar33->field_776->GetHeight(), local_3c < iVar13)) {
                local_38 = local_38 - pIVar33->field_916;
                uVar30 = (((uint64_t)((int64_t)((unsigned long)this_03 >> 8)) << 8) | (uint8_t)1);
            } else {
                uVar30 = 0;
            }
        }
        bVar7 = (uint8_t)local_60;
    LAB_1006997b5:
        uVar15 = (unsigned int)uVar30;
        local_80 = (ScrollBar*)(((uint64_t)local_80._4_4_ << 32) | (uint32_t)iVar9);
        local_60 = (TextRun*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)((float)iVar9 * 0.9));
        local_58 = (*(RT7Core**)(local_70 + 16))->GetGUIManager();
        if ((pIVar33->field_904 == 1) || (pIVar33->field_908 != '\0')) {
            puVar26 = &pIVar33->field_592;
        } else {
            puVar26 = &pIVar33->field_588;
        }
        local_90 = (Texture*)(((uint64_t)local_90._4_4_ << 32) | (uint32_t)((int)local_60._0_4_));
        local_74 = *puVar26;
        local_c0.field_0._0_4_ = 1;
        TextFlags local_48((local_f0 + 48));
        new (local_f0) graphics::TextProperties(*local_98, local_48[0]);
        uVar12 = pIVar33->GetRGBA();
        TextData* this_01 = local_a0;
        local_a0 = (TextData*)(((uint64_t)local_a0._4_4_ << 32) | (uint32_t)((unsigned int)bVar7));
        this_01->PopulateTextProperties(*local_f0, uVar12, bVar7);
        local_60 = (TextRun*)pIVar33->field_776;
        cVar6 = local_60->IsEmpty();
        ComponentDependencies* pCVar32 = local_70;
        if (!cVar6) {
            new (local_120) graphics::ClippingState(*(RT7Core**)(local_70 + 16));
            (*(RT7Core**)(pCVar32 + 16))->SetClippingRectangle(local_34, iVar10, local_40, local_3c, true);
            cVar6 = IsMultiline(pIVar33);
            if (!cVar6) {
                lVar19 = local_60->GetCharacter(pIVar33->field_888);
                local_34 = local_34 - *(int*)(lVar19 + 4);
            }
            pTVar5 = local_60;
            if (pIVar33->field_882 == '\0') {
                pFVar4 = *(FontHelpers**)pCVar32;
                uVar30 = pIVar33->field_888;
                uVar31 = local_60->GetCodepointCount();
                *((local_f0 + 48)) = pTVar5->Slice(uVar30, uVar31);
                pFVar4->DrawTextRunSlice(*((local_f0 + 48)), local_34, local_38, *local_f0,
                                         local_3c + pIVar33->field_916);
            } else {
                UpdateCaretBlink(pIVar33, local_88._0_4_);
                pfVar2 = pIVar33->field_552;
                pfVar3 = pIVar33->field_896;
                if ((pfVar3 != pfVar2) &&
                    (((function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)pIVar33->field_888 <=
                          pfVar3 ||
                      ((function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)pIVar33->field_888 <=
                       pfVar2)))) {
                    local_98 = (shared_ptr*)(((uint64_t)local_98._4_4_ << 32) | (uint32_t)uVar15);
                    *((local_f0 + 48)) = local_60->Slice((unsigned long)pfVar3, (unsigned long)pfVar2);
                    pvVar17 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(local_f0 + 48);
                    lVar19 = pvVar17->end();
                    local_88 = (RT7Core*)(((uint64_t)local_88._4_4_ << 32) | (uint32_t)(*(uint32_t*)(lVar19 + 4)));
                    lVar19 = pvVar17->end();
                    uVar15 = *(unsigned int*)(lVar19 + 8);
                    lVar19 = pvVar17->end();
                    lVar19 = lVar19 + 12;
                    lVar27 = pvVar17->data();
                    if (lVar19 != lVar27) {
                        do {
                            uVar12 = local_34;
                            iVar10 = local_38;
                            iVar9 = local_40;
                            pIVar33 = local_68;
                            if (*(unsigned int*)(lVar19 + 8) != uVar15) {
                                local_4c = uVar15;
                                uVar15 = local_68->GetRGBA();
                                uVar15 = math::Multiply(uVar15, pIVar33->field_596);
                                local_58->AddColouredRectangle(uVar12 + (int)local_88._0_4_, iVar10 + local_4c,
                                                               iVar9 - (int)local_88._0_4_, (int)local_80, uVar15, 1);
                                local_88 =
                                    (RT7Core*)(((uint64_t)local_88._4_4_ << 32) | (uint32_t)(*(uint32_t*)(lVar19 + 4)));
                                uVar15 = *(unsigned int*)(lVar19 + 8);
                                pCVar32 = local_70;
                            }
                            lVar19 = lVar19 + 12;
                            lVar27 = ((local_f0 + 48))->data();
                        } while (lVar19 != lVar27);
                    }
                    lVar19 = ((local_f0 + 48))->data();
                    local_4c = uVar15;
                    if (uVar15 == *(unsigned int*)(lVar19 - 4)) {
                        iVar10 = ((local_f0 + 48))->GetLastCursorPosition();
                        uVar15 = local_34;
                        iVar9 = local_38;
                        pIVar33 = local_68;
                        uVar12 = local_68->GetRGBA();
                        uVar12 = math::Multiply(uVar12, pIVar33->field_596);
                        local_58->AddColouredRectangle(uVar15 + (int)local_88._0_4_, iVar9 + local_4c,
                                                       iVar10 - (int)local_88._0_4_, (int)local_80, uVar12, 1);
                    }
                    pIVar33 = local_68;
                    uVar15 = (unsigned int)local_98;
                }
                pfVar2 = pIVar33->field_552;
                pfVar3 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)pIVar33->field_888;
                if ((pfVar2 != pfVar3) || (0.6 < pIVar33->field_912)) {
                    if (pfVar3 < pfVar2) {
                        pFVar4 = *(FontHelpers**)pCVar32;
                        *((local_f0 + 48)) = local_60->Slice((unsigned long)pfVar3, (unsigned long)pfVar2);
                        uVar28 = pFVar4->DrawTextRunSlice(*((local_f0 + 48)), local_34, local_38, *local_f0, -1);
                        if (pIVar33->field_912 <= 0.6) {
                            local_c0.field_0._0_4_ = local_34 + (int)uVar28;
                            local_f0._44_4_ = local_40 + (int)local_f8 + 1;
                            piVar29 = std::min<int>(*((local_f0 + 48)), *((local_f0 + 44)));
                            local_58->AddColouredRectangle(*piVar29, (int)((unsigned long)uVar28 >> 32) + local_38, 1,
                                                           (int)local_90, local_74, 1);
                        }
                    }
                } else {
                    local_58->AddColouredRectangle(local_34, local_38, 1, (int)local_90, local_74, 1);
                }
                pFVar4 = *(FontHelpers**)pCVar32;
                uVar30 = eastl::max<unsigned long>((unsigned long)pIVar33->field_552, pIVar33->field_888);
                pTVar5 = local_60;
                uVar31 = local_60->GetCodepointCount();
                *((local_f0 + 48)) = pTVar5->Slice(uVar30, uVar31);
                pFVar4->DrawTextRunSlice(*((local_f0 + 48)), local_34, local_38, *local_f0,
                                         local_3c + pIVar33->field_916);
            }
            uVar30 = (unsigned long)uVar15;
        } else if (pIVar33->field_882 == '\0') {
            cVar6 = local_60->IsEmpty();
            if (cVar6) {
                pFVar4 = *(FontHelpers**)local_70;
                ((local_120 + 24))->StringView<eastl::fixed_string<char, 40>>(pIVar33->field_560);
                pFVar4->DrawStringMultiline((local_120 + 24), local_34, local_38, local_40, local_3c, nullptr,
                                            *local_f0);
            }
        } else {
            UpdateCaretBlink(pIVar33, local_88._0_4_);
            if (pIVar33->field_912 <= 0.6) {
                local_58->AddColouredRectangle(local_34, local_38, 1, (int)local_90, local_74, 1);
            }
        }
        if ((char)uVar30 == '\0') {
            return;
        }
        puVar1 = &pIVar33->field_600;
        local_88 = *(RT7Core**)(local_70 + 16);
        iVar13 = local_40 + local_34;
        local_80 = (ScrollBar*)puVar1;
        bVar7 = puVar1->GetSize();
        local_58 = (GUIManager*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)(pIVar33->field_916 + local_38));
        uint8_t bVar8 = puVar1->GetSize();
        pTVar5 = local_60;
        local_68 = (InputField*)(((uint64_t)local_68._4_4_ << 32) | (uint32_t)local_3c);
        local_70 = (ComponentDependencies*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)pIVar33->field_916);
        iVar9 = local_60->GetHeight();
        iVar9 = iVar9 + local_3c;
        iVar10 = pTVar5->GetLineHeight();
        bool arg8 = (bool)pIVar33->IsEnabled();
        local_80->Draw(*local_88, iVar13 - (unsigned int)bVar7, (int)local_58._0_4_, (unsigned int)bVar8, (int)local_68,
                       (int)local_70, iVar9 - iVar10, arg8, (unsigned char)local_a0);
    }

    // 0x100699e30
    void InputField::UpdateCaretBlink(float arg1) {
        field_912 = (float)fmod(arg1 + field_912, 1.2);
    }

    // 0x100699e60
    void InputField::Init(graphics::TextContentVisibility textContentVisibility, InputField::FilterMode filterMode,
                          unsigned long arg3) {
        unsigned long uVar1;

        field_536 = textContentVisibility;
        field_532 = filterMode;
        field_544 = arg3;
        if (arg3 == 0) {
            uVar1 = 255;
        } else {
            uVar1 = 2500;
            if (arg3 < 2500)
                goto LAB_100699e98;
        }
        field_544 = uVar1;
    LAB_100699e98:
        field_776->SetContentVisibility(textContentVisibility);
    }

    // 0x100699eb0
    void InputField::SetContents(const eastl::basic_string<char, BucketAllocatorEASTL>& str) {
        eastl::string* str1;
        char* str1_00;
        char* str2;

        long lVar3 = (**(void (**)(...))(*(long*)field_928 + 64))();
        auto this_00 = UpdateTextRunSettings(*(FontManager**)(lVar3 + 8));
        if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
            str1 = (eastl::string*)GetContents();
            if (*str1 != str) {
                ClearInternal();
                str1_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                str2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
                AddContents(str1_00, str2, true, true);
            }
        }
    }

    // 0x100699f60
    void InputField::ClearInternal() {
        field_776->Clear();
        field_856.clear();
        field_552 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)0;
        field_888 = 0;
        field_896 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)0;
        field_904 = 4294967295;
        field_908 = 0;
    }

    // 0x100699fb0
    unsigned long InputField::AddContents(const char* str1, const char* str2, bool arg3, bool arg4) {
        uint8_t* this_00;
        function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>** ppfVar1;
        function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>* pfVar3;
        long lVar4;
        unsigned long* puVar5;
        function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>* pfVar6;
        uint64_t in_register_00000009;
        uint64_t in_register_00000081;
        unsigned long uVar7;
        uint8_t auVar8[16];
        InputField* local_b8;
        unsigned long local_b0;
        function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>** local_a8;
        uint32_t local_a0;
        uint32_t local_9c;
        unsigned long local_98[12];
        long local_38;

        if (str1 == str2) {
            uVar7 = 0;
        } else {
            local_a0 = (uint32_t)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3);
            local_b0 = eastl::distance<char const*>(str1, str2);
            this_00 = field_776;
            local_a8 = &field_552;
            pfVar3 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)this_00->Remove(
                (unsigned long)field_896, (unsigned long)field_552);
            field_552 = pfVar3;
            local_9c = (uint32_t)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4);
            if ((arg4) && (field_532 == 3)) {
                if (HandleQuantityInput((int)str2[-1])) {
                    lVar4 = this_00->GetCodepointCount();
                    ppfVar1 = local_a8;
                    local_98[0] = lVar4 - 1;
                    puVar5 = std::min<unsigned long>(*local_a8, *local_98);
                    *ppfVar1 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)*puVar5;
                    local_b0 = local_b0 - 1;
                }
            }
            pfVar3 = field_552;
            local_b8 = this;
            fixedfunction::function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0>::function<
                InputField::AddContents(char const*, char const*, bool, bool)::__52&, void>(
                (function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0>*)local_98, (__52*)&local_b8);
            auVar8 = graphics::TextRun::InsertFiltered(
                this_00, (unsigned long)str1, local_b0, *pfVar3,
                (uint8_t)((function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0>*)local_98),
                (unsigned long)(uint8_t)local_a0);
            pfVar3 = auVar8._0_8_;
            if (*local_a8 != pfVar3) {
                pfVar6 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)
                             this_00->GetCodepointCount();
                if (pfVar3 == pfVar6) {
                    field_884 = 100;
                }
            }
            field_880 = '\x01';
            field_552 = pfVar3;
            field_896 = pfVar3;
            EnsureCaretVisible();
            uVar7 = auVar8._8_8_ >> 16;
            field_904 = (unsigned int)((auVar8._8_8_ & 4294901761) != 0);
            if ((char)local_9c != '\0') {
                ValidateQuantityInput();
            }
        }
        return uVar7 & 65535;
    }

    // 0x10069a1a0
    void InputField::Clear() {
        if (field_882 != '\0') {
            CancelFocus();
        }
        ClearInternal();
    }

    // 0x10069a1d0
    void InputField::DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2) {
        uint64_t in_RAX;
        unsigned long uVar5;

        Margin local_24 = (uint32_t)((unsigned long)in_RAX >> 32);
        SetEnabled(arg1.g1() == '\x01');
        uint8_t bVar2 = arg1.g1();
        field_532 = (unsigned int)bVar2;
        bVar2 = arg1.g1();
        field_536 = (unsigned int)bVar2;
        unsigned short uVar3 = arg1.g2();
        field_544 = (unsigned long)uVar3;
        if (8 < arg2) {
            local_24 = Margin(arg1);
            field_768[0] = local_24.field_0;
            field_768[1] = local_24.field_1;
            field_768[2] = local_24.field_2;
            field_768[3] = local_24.field_3;
        }
        if (6 < arg2) {
            bVar2 = arg1.g1();
            field_528 = (unsigned int)bVar2;
        }
        bVar2 = arg1.g1();
        field_100 = ~bVar2;
        field_96 = arg1.g4();
        field_416.DecodeSpriteData(arg1, arg2);
        field_464->DecodeTextData(arg1, arg2);
        field_600.Decode(arg1, arg2);
        if (field_544 == 0) {
            uVar5 = 255;
        } else {
            uVar5 = 2500;
            if (field_544 < 2500) {
                return;
            }
        }
        field_544 = uVar5;
    }

    // 0x10069a2f0
    void InputField::LoadStyleSheetVisuals(const StyleSheet& styleSheet) {
        int* piVar2;
        optional<unsigned int> local_28;

        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_100, 146, true);
        styleSheet.LoadPropertyValueIfSet<unsigned int>(field_96, 145, true);
        field_768->LoadFromStylesheet(198, styleSheet);
        field_464->LoadStyleSheetTextData(150, styleSheet);
        field_416.LoadStyleSheetSpriteData(158, styleSheet);
        StyleSheet::GetPropertyValue<unsigned int>(&local_28, (StyleEntryID)styleSheet, true);
        if (local_28.IsActive()) {
            piVar2 = (int*)local_28.value();
            field_588 = *piVar2 << 8 | 255;
        }
        StyleSheet::GetPropertyValue<unsigned int>(&local_28, (StyleEntryID)styleSheet, true);
        if (local_28.IsActive()) {
            piVar2 = (int*)local_28.value();
            field_592 = *piVar2 << 8 | 255;
        }
        StyleSheet::GetPropertyValue<unsigned int>(&local_28, (StyleEntryID)styleSheet, true);
        if (local_28.IsActive()) {
            piVar2 = (int*)local_28.value();
            field_596 = *piVar2 << 8 | 255;
        }
        uint8_t* this_00 = &field_600;
        auto pSVar3 = this_00->GetMaterial();
        pSVar3->LoadStyleSheetSpriteData(168, styleSheet);
        pSVar3 = (SpriteData*)this_00->GetCursorMutex();
        pSVar3->LoadStyleSheetSpriteData(188, styleSheet);
        pSVar3 = (SpriteData*)this_00->SSOBeginPtr();
        pSVar3->LoadStyleSheetSpriteData(178, styleSheet);
    }

    // 0x10069a4e0
    void InputField::LogicFocus(const ComponentDependencies& componentDependencies, bool arg2) {
        field_904 = 4294967295;
    }

    // 0x10069a510
    uint64_t InputField::HandleKeyInput(int arg1, int arg2, unsigned int arg3) {
        uint8_t* this_00;
        InterfaceManager* pIVar1;
        bool bVar2;
        uint8_t bVar4;
        int iVar5;
        function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>* pfVar6;
        function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>* pfVar7;
        function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>** ppfVar8;
        long* plVar9;
        ComponentCollectionBase* this_01;
        shared_ptr<oldscape::dash3d::GroundDecor>* groundDecor;
        InputField* pIVar10;
        long lVar11;
        unsigned int arg1_00;
        shared_ptr local_68;
        shared_ptr<oldscape::dash3d::Decor> local_58;
        enable_shared_from_this<PathingEntity> local_48;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_38;

        if (ShouldIgnoreInput(arg1, arg3)) {
            return 0;
        }
        if ((arg1 == -1) && (field_881 != '\0')) {
            field_881 = 0;
            return 1;
        }
        switch (arg1) {
        case 63232:
            pfVar6 = field_552;
            if (pfVar6 == (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)0)
                goto LAB_10069a757;
            iVar5 = -1;
            goto LAB_10069a680;
        case 63233:
            pfVar6 = field_552;
            pfVar7 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)
                         field_776->GetCodepointCount();
            if (pfVar7 <= pfVar6)
                goto LAB_10069a757;
            pfVar6 = field_552;
            iVar5 = 1;
        LAB_10069a680:
            pfVar6 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)
                         field_776->GetIndexAtLineOffset((unsigned long)pfVar6, iVar5);
            break;
        case 63234:
            if (field_552 == (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)0)
                goto LAB_10069a757;
            pfVar6 = field_552 - 1;
            break;
        case 63235:
            pfVar6 = field_552;
            pfVar7 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)
                         field_776->GetCodepointCount();
            if (pfVar7 <= pfVar6)
                goto LAB_10069a757;
            pfVar6 = field_552 + 1;
            break;
        case 63236:
        case 63237:
        case 63238:
        case 63239:
        case 63240:
        case 63241:
        case 63242:
        case 63243:
        case 63244:
        case 63245:
        case 63246:
        case 63247:
        case 63248:
        case 63249:
        case 63250:
        case 63251:
        case 63252:
        case 63253:
        case 63254:
        case 63255:
        case 63256:
        case 63257:
        case 63258:
        case 63259:
        case 63260:
        case 63261:
        case 63262:
        case 63263:
        case 63264:
        case 63265:
        case 63266:
        case 63267:
        case 63268:
        case 63269:
        case 63270:
        case 63271:
        case 63272:
        case 63274:
            goto switchD_10069a55a_caseD_4;
        case 63273:
            if ((arg3 & 1) == 0) {
                field_552 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)0;
                ppfVar8 = &field_896;
            } else {
                ppfVar8 = &field_552;
                field_896 = field_552;
            }
            *ppfVar8 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)0;
            goto LAB_10069a74f;
        case 63275:
            if ((arg3 & 1) != 0) {
                field_896 = field_552;
                pfVar6 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)
                             field_776->GetCodepointCount();
                field_552 = pfVar6;
                goto LAB_10069a74f;
            }
            pfVar6 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)
                         field_776->GetCodepointCount();
            field_552 = pfVar6;
            goto LAB_10069a696;
        default:
            if (arg1 == 53) {
                CancelFocus();
                field_904 = 3;
                return 0;
            }
        switchD_10069a55a_caseD_4:
            if ((arg1 != 0) || (arg3 != 4)) {
                if (arg1 == 63272) {
                    this_00 = field_776;
                    if (field_896 == field_552) {
                        pfVar6 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)
                                     this_00->GetCodepointCount();
                        if (field_552 < pfVar6) {
                            pfVar6 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)
                                         this_00->Remove((unsigned long)field_552);
                            goto LAB_10069a7ff;
                        }
                        bVar2 = false;
                    } else {
                        pfVar6 =
                            (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)this_00->Remove(
                                (unsigned long)field_896, (unsigned long)field_552);
                    LAB_10069a7ff:
                        field_552 = pfVar6;
                        bVar2 = true;
                    }
                    field_896 = field_552;
                LAB_10069a83a:
                    if (!bVar2)
                        goto LAB_10069a757;
                } else {
                    if (arg1 == 51) {
                        pfVar6 = field_552;
                        if (field_896 == pfVar6) {
                            if (pfVar6 !=
                                (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)0) {
                                pfVar6 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)
                                             field_776->Remove((unsigned long)(pfVar6 - 1));
                                goto LAB_10069a7d6;
                            }
                            bVar2 = false;
                        } else {
                            pfVar6 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)
                                         field_776->Remove((unsigned long)field_896, (unsigned long)pfVar6);
                        LAB_10069a7d6:
                            field_552 = pfVar6;
                            bVar2 = true;
                        }
                        field_896 = field_552;
                        field_881 = 1;
                        goto LAB_10069a83a;
                    }
                    if ((arg1 == 8) && (arg3 == 4)) {
                        CopySelection();
                        field_881 = 1;
                        goto LAB_10069a757;
                    }
                    if ((arg1 == 9) && (arg3 == 4)) {
                        PasteFromClipboard();
                        field_881 = 1;
                        goto LAB_10069a757;
                    }
                    if ((arg1 != 7) || (arg3 != 4)) {
                        if (arg1 == 48) {
                            bVar4 = field_464->GetTextMaxLines();
                            if ((bVar4 < 2) && ((arg3 & 1) == 0)) {
                                local_68 = GetLookatEntity();
                                if (shared_ptr::operator_cast_to_bool(&local_68)) {
                                    plVar9 = (long*)local_68.operator->();
                                    if ((**(void (**)(...))(*plVar9 + 104))(plVar9)) {
                                        this_01 = (ComponentCollectionBase*)local_68.end();
                                        local_48.shared_from_this();
                                        local_38.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_48);
                                        groundDecor =
                                            (shared_ptr<oldscape::dash3d::GroundDecor>*)this_01->FindNext(local_38);
                                        local_58 = shared_ptr(groundDecor);
                                        pIVar10 = (InputField*)local_58.end();
                                        if (pIVar10 != this) {
                                            static_pointer_cast<oldscape::ClientEntity,
                                                                shared_ptr<oldscape::ClientNpc>>(&local_38);
                                            pIVar1 = field_928;
                                            local_48.shared_ptr<InputField, void>(local_38);
                                            (**(void (**)(...))(*(long*)pIVar1 + 40))(pIVar1, &local_48);
                                            lVar11 = local_38.operator->();
                                            *(uint8_t*)(lVar11 + 881) = 1;
                                            lVar11 = local_38.operator->();
                                            *(uint8_t*)(lVar11 + 882) = 1;
                                            goto LAB_10069aab1;
                                        }
                                    }
                                }
                                field_904 = 1;
                            LAB_10069aab1:
                                return 1;
                            }
                            arg1_00 = 9;
                        } else {
                            if (arg1 != 36) {
                                if (arg1 == -1) {
                                    AddCharacter(arg2, false);
                                }
                                goto LAB_10069a757;
                            }
                            if (!(IsMultiline())) {
                                CancelFocus();
                                field_904 = 2;
                                return 0;
                            }
                            iVar5 = field_776->GetNumLines();
                            bVar4 = field_464->GetTextMaxLines();
                            if ((int)(unsigned int)bVar4 <= iVar5) {
                                field_904 = 1;
                                field_881 = 1;
                                goto LAB_10069a757;
                            }
                            arg1_00 = 10;
                        }
                        AddCharacter(arg1_00, false);
                        field_881 = 1;
                        goto LAB_10069a757;
                    }
                    CopySelection();
                    pfVar6 =
                        (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)field_776->Remove(
                            (unsigned long)field_896, (unsigned long)field_552);
                    field_552 = pfVar6;
                    field_896 = pfVar6;
                    field_881 = 1;
                }
                field_880 = '\x01';
                field_904 = 0;
                EnsureCaretVisible();
                ValidateQuantityInput();
                goto LAB_10069a757;
            }
            field_896 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)0;
            pfVar6 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)
                         field_776->GetCodepointCount();
            field_552 = pfVar6;
            field_881 = 1;
            goto LAB_10069a74f;
        }
        field_552 = pfVar6;
        if ((arg3 & 1) == 0) {
        LAB_10069a696:
            field_896 = pfVar6;
        }
    LAB_10069a74f:
        EnsureCaretVisible();
    LAB_10069a757:
        field_912 = 0.0;
        return 1;
    }

    // 0x10069abd0
    bool InputField::ShouldIgnoreInput(int arg1, unsigned int arg2) const {
        if ((((arg1 & 4294967292U) == 63232) && (field_528 == 1)) && ((arg2 & 2) == 0)) {
            return 1;
        }
        return 0;
    }

    // 0x10069ac00
    void InputField::CopySelection() {
        fixed_string<char, 512> local_250;
        TextRunSlice local_270 = field_776->Slice((unsigned long)field_896, (unsigned long)field_552);
        auto puVar1 = local_270.end();
        auto puVar2 = local_270.data();
        if (puVar1 != puVar2) {
            do {
                stringtools::UTF8Append<eastl::fixed_string<char, 24>>(*puVar1, local_250);
                puVar1 = puVar1 + 3;
            } while (puVar1 != puVar2);
        }
        local_270 = Clipboard();
        local_270.SetText<eastl::fixed_string<char, 512>>(local_250);
    }

    // 0x10069ad20
    void InputField::PasteFromClipboard() {
        char* str1;
        char* str2;

        eastl::string local_48;
        Clipboard local_28;
        bool cVar1 = local_28.GetText(local_48);
        if (!cVar1) {
        } else {
            cVar1 = local_48.empty();
            if (!cVar1) {
                str1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                str2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
                AddContents(str1, str2, true, true);
            }
        }
    }

    // 0x10069adf0
    void InputField::AddCharacter(unsigned int arg1, bool arg2) {
        bool cVar1;
        function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>* pfVar2;
        function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>* pfVar3;
        uint64_t in_register_00000011;
        uint8_t auVar4[12];
        __51 local_b0;
        function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0> local_98[104];
        long local_30;

        uint8_t* this_00 = field_776;
        unsigned int local_9c = arg1;
        pfVar2 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)this_00->Remove(
            (unsigned long)field_896, (unsigned long)field_552);
        field_552 = pfVar2;
        if (((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) && (field_532 == 3)) {
            cVar1 = HandleQuantityInput(local_9c);
            if (cVar1)
                goto LAB_10069aefa;
        }
        pfVar2 = field_552;
        local_b0[0] = (__51)arg2;
        InputField* local_a8 = this;
        fixedfunction::function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0>::function<
            InputField::AddCharacter(unsigned int, bool)::__51&, void>(local_98, &local_b0);
        auVar4 = this_00->InsertCodepointsFiltered(&local_9c, 1, (unsigned long)pfVar2, *local_98, field_544);
        pfVar2 = auVar4._0_8_;
        if (field_552 != pfVar2) {
            pfVar3 =
                (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)this_00->GetCodepointCount();
            if (pfVar2 == pfVar3) {
                field_884 = 100;
            }
        }
        field_880 = '\x01';
        field_552 = pfVar2;
        field_904 = auVar4._8_4_ & 1;
    LAB_10069aefa:
        field_896 = field_552;
        EnsureCaretVisible();
        ValidateQuantityInput();
    }

    // 0x10069afa0
    void InputField::ValidateQuantityInput() {
        uint8_t bVar2;
        unsigned int* puVar3;
        unsigned long uVar4;
        long lVar5;
        int* piVar6;
        unsigned long extraout_RDX;
        unsigned long arg1;
        ReturnValue local_38;

        if ((field_532 & 4294967294) != 2) {
            return;
        }
        if (field_882 != '\0')
            goto LAB_10069afc8;
        uint8_t* this_00 = field_776;
        bool cVar1 = this_00->IsEmpty();
        if ((!cVar1) || (cVar1 = field_560.empty(), !cVar1)) {
            cVar1 = this_00->IsEmpty();
            if (!cVar1) {
                puVar3 = (unsigned int*)this_00->GetCharacter(0);
                cVar1 = IsUnitQuantityCodepoint(*puVar3);
                if (cVar1)
                    goto LAB_10069b041;
            }
            uVar4 = this_00->GetCodepointCount();
            if (uVar4 < 2)
                goto LAB_10069afc8;
            lVar5 = this_00->GetCodepointCount();
            uVar4 = 0;
            if (lVar5 != 1) {
                arg1 = 0;
                do {
                    piVar6 = (int*)this_00->GetCharacter(arg1);
                    uVar4 = (*piVar6 == 48) + uVar4;
                    if (*piVar6 != 48)
                        break;
                    arg1 = arg1 + 1;
                    lVar5 = this_00->GetCodepointCount();
                } while (arg1 < lVar5 - 1U);
            }
            if (uVar4 == 0) {
                uVar4 = 0;
            } else {
                puVar3 = (unsigned int*)this_00->GetCharacter(uVar4);
                bVar2 = IsUnitQuantityCodepoint(*puVar3);
                uVar4 = uVar4 - bVar2;
            }
            this_00->Remove(0, uVar4);
            field_552 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)0;
            field_888 = 0;
            field_896 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)0;
            if (uVar4 == 0)
                goto LAB_10069afc8;
        } else {
        LAB_10069b041:
            this_00->Insert("0", 1, 0, field_544);
            if ((extraout_RDX & 1) != 0) {
                field_904 = 1;
                goto LAB_10069afc8;
            }
            field_884 = 60100;
        }
        field_880 = '\x01';
    LAB_10069afc8:
        GetQuantityInput(&local_38, this);
        cVar1 = local_38.IsActive();
        if (!cVar1) {
            field_904 = 1;
        }
    }

    // 0x10069b160
    uint64_t InputField::HandleQuantityInput(unsigned int arg1) {
        uint8_t* puVar1;
        bool cVar2;
        unsigned int uVar3;
        int iVar4;
        unsigned int uVar5;
        function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>* pfVar6;
        int iVar7;
        function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>* pfVar8;

        if ((arg1 & 4294967263) == 75) {
            iVar7 = 77;
            uVar3 = 75;
        } else {
            if ((arg1 & 4294967263) != 77) {
                puVar1 = field_776;
                cVar2 = puVar1->IsEmpty();
                if (cVar2) {
                    return 0;
                }
                if (254 < arg1) {
                    return 0;
                }
                cVar2 = is_ascii_numeric((char)arg1);
                if ((!cVar2) || (pfVar8 = field_552,
                                 pfVar6 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)
                                              puVar1->GetCodepointCount(),
                                 pfVar8 != pfVar6)) {
                    return 0;
                }
                uVar3 = puVar1->GetLastChar();
                cVar2 = IsUnitQuantityCodepoint(uVar3);
                if (!cVar2) {
                    return 0;
                }
                field_904 = 1;
                return 1;
            }
            uVar3 = 77;
            iVar7 = 75;
        }
        puVar1 = field_776;
        cVar2 = puVar1->IsEmpty();
        if (!cVar2) {
            iVar4 = puVar1->GetLastChar();
            if (iVar7 == iVar4) {
                pfVar8 = field_552;
                pfVar6 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)
                             puVar1->GetCodepointCount();
                field_552 = pfVar6;
                pfVar6 = pfVar6 - 1;
            } else {
                uVar5 = puVar1->GetLastChar();
                if (uVar3 == uVar5)
                    goto LAB_10069b2a6;
                pfVar8 = field_552;
                pfVar6 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)
                             puVar1->GetCodepointCount();
                field_552 = pfVar6;
            }
            field_896 = pfVar6;
            AddCharacter(uVar3, true);
            field_552 = pfVar8;
        } else {
            AddCharacter(uVar3, true);
            field_552 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)0;
        }
    LAB_10069b2a6:
        field_896 = field_552;
        return 1;
    }

    // 0x10069b300
    void InputField::UpdateCachedString() const {
        if (field_880 != '\0') {
            field_776->ConvertToUTF8(field_856);
            field_880 = '\0';
        }
    }

    // 0x10069b340
    void InputField::IsCodepointAllowed(InputField::FilterMode filterMode, unsigned int arg2) {
        uint64_t uVar2;

        if (graphics::FontHelpers::IsDrawableCodepoint(arg2) == '\0') {
            uVar2 = 0;
        } else if (filterMode - 2 < 3) {
            uVar2 = is_ascii_numeric((char)arg2);
        } else {
            uVar2 = (((uint64_t)((uint64_t)(uint32_t)(filterMode - 2 >> 8)) << 8) | (uint8_t)1);
            if (filterMode == 1) {
                uVar2 = is_ascii_alpha_numeric((char)arg2);
            }
        }
        return uVar2;
    }

    // 0x10069b420
    eastl::optional<int> InputField::GetQuantityInput() const {
        char cVar1;
        int* piVar2;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* this_00;
        long lVar4;
        long lVar5;
        unsigned int* arg1;
        uint64_t local_38;
        unsigned int local_30;
        unsigned int local_2c;

        if ((field_532 & 4294967294) == 2) {
            cVar1 = field_776->IsEmpty();
            if (!cVar1) {
                piVar2 = ___error();
                *piVar2 = 0;
                this_00 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)GetContents();
                lVar4 = _strtol((char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin(), (char**)&local_38, 10);
                local_2c = (unsigned int)lVar4;
                piVar2 = ___error();
                if ((*piVar2 == 34) || (lVar4 != (int)local_2c))
                    goto LAB_10069b533;
                if (field_532 == 3) {
                    lVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    lVar5 = this_00->size();
                    if ((char*)(lVar5 + lVar4) !=
                        (char*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)((unsigned int)local_38))) {
                        cVar1 = *(char*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)((unsigned int)local_38));
                        if (cVar1 == 'M') {
                            if (2147483647 < (long)(int)local_2c * 1000000)
                                goto LAB_10069b533;
                            local_30 = local_2c * 1000000;
                        } else {
                            if (cVar1 != 'K')
                                goto LAB_10069b502;
                            if (2147483647 < (long)(int)local_2c * 1000)
                                goto LAB_10069b533;
                            local_30 = local_2c * 1000;
                        }
                        arg1 = &local_30;
                        goto LAB_10069b506;
                    }
                }
            LAB_10069b502:
                arg1 = &local_2c;
            } else {
                local_38._0_4_ = 0;
                arg1 = (unsigned int*)&local_38;
            }
        LAB_10069b506:
            eastl::optional<int> result(*arg1);
        } else {
        LAB_10069b533:
            new (&result) eastl::optional();
        }
        return result;
    }

    // 0x10069b550
    unsigned long InputField::NotifyFocusGain() {
        FontManager* this_00;
        bool cVar1;
        int arg1;
        long lVar2;
        shared_ptr* this_01;
        function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>* pfVar3;
        uint64_t unaff_R14;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_40;

        unsigned long uVar4 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
        if (field_882 == '\0') {
            cVar1 = IsEnabled();
            if (cVar1) {
                lVar2 = (**(void (**)(...))(*(long*)field_928 + 64))();
                this_00 = *(FontManager**)(lVar2 + 8);
                arg1 = field_464->GetEndPosition();
                local_40 = shared_ptr();
                this_01 = (shared_ptr*)this_00->GetFont(arg1, local_40);
                cVar1 = shared_ptr::operator_cast_to_bool(this_01);
                if (cVar1) {
                    field_882 = 1;
                    field_912 = 0.0;
                    field_904 = 4294967295;
                    field_908 = 0;
                    pfVar3 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)
                                 field_776->GetCodepointCount();
                    field_552 = pfVar3;
                    field_896 = pfVar3;
                    EnsureCaretVisible();
                    goto LAB_10069b61f;
                }
            }
            uVar4 = 0;
        }
    LAB_10069b61f:
        return uVar4 & 4294967295;
    }

    // 0x10069b670
    uint8_t InputField::GetSoftKeyboardType() const {
        uint8_t bVar2;

        uint8_t uVar1 = 2;
        if (field_536 == 0) {
            uVar1 = 1;
            if ((field_532 != 2) && (field_532 != 4)) {
                bVar2 = field_464->GetTextMaxLines();
                uVar1 = 7;
                if (bVar2 < 2) {
                    uVar1 = 0;
                }
            }
        }
        return uVar1;
    }

    // 0x10069b6d0
    void InputField::CancelFocus() {
        if (field_882 != '\0') {
            field_882 = 0;
            (**(void (**)(...))(*(long*)field_928 + 48))();
            field_552 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)0;
            field_896 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)0;
            ValidateQuantityInput();
            field_904 = 4;
        }
    }

    // 0x1006ad410: InputField::IsAssociatedComponent(shared_ptr<Component> const&) const has the same machine code as ComboField::IsAssociatedComponent(shared_ptr<Component> const&) const

    // 0x1006d35c0
    void InputField::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool,
                               bool)::$_50::operator()(const ScrollBar& scrollBar, int arg2) const {
        ApplyScroll(field_0, (int)scrollBar - field_0->field_916);
    }

    // 0x1006d36a0
    uint64_t InputField::AddCharacter(unsigned int, bool)::$_51::operator()(unsigned int arg1) const {
        if (*(char*)this == '\0') {
            return IsCodepointAllowed(*(FilterMode*)(field_8 + 532), arg1);
        }
        return 1;
    }

    // 0x1006d3750
    void InputField::AddContents(char const*, char const*, bool, bool)::$_52::operator()(unsigned int arg1) const {
        IsCodepointAllowed(*(FilterMode*)(field_0 + 532), arg1);
    }

} // namespace jag::ui
