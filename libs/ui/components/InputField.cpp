// libs/ui/components/InputField.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "InputField.h"

namespace jag::ui {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    InputField::DrawFocus(ComponentDependencies const&);

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    InputField::ShouldBlockInput(int, int) const;

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    InputField::IsKeyReceiver() const;

    // 0x100269bc0: the linker folded this into oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit::GetID() const, which has identical code
    InputField::GetType() const;

    // 0x1005fa390: the linker folded this into game::option::WindowMode::IsAvailable(game::option::OptionClient) const, which has identical code
    InputField::SupportsMargin(Component::MarginType) const;

    // 0x100698620, 496 bytes, base-object constructor, placed by class name
    // InputField::InputField(InterfaceManager*)
    void InputField::InputField(InterfaceManager* param_1) {
        new (this) Component();
        new (this) MakeSharedPool<InputField, 128>();
        new (&field_392) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new (&field_408) FocusComponent();
        field_0 = &PTR__InputField_100f0ef40;
        field_408 = &PTR__InputField_100f0f098;
        new (&field_416) SpriteData();
        new (field_464) TextData();
        field_528 = 0;
        field_532 = 0;
        field_536 = 0;
        field_544 = 0;
        field_552 = 0;
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        *(undefined8*)&field_584 = 18446744071418902527;
        field_592 = 4278190335;
        field_596 = 2004318071;
        new (&field_600) ScrollBar();
        new (&field_768, 255) Margin();
        new (field_776) graphics::TextRun();
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        *(undefined2*)&field_880 = 0;
        field_882 = 0;
        field_884 = 0;
        field_888 = 0;
        field_896 = 0;
        field_904 = 4294967295;
        field_908 = 0;
        field_912 = 0.0;
        field_916 = 0;
        field_920 = 0;
        field_928 = param_1;
        SetEnabled(this, true);
    }

    // 0x100698870, 48 bytes, placed by class name
    // InputField::SetEnabled(bool)
    void InputField::SetEnabled(bool param_1) {
        SetEnabled(param_1);
        (*(code*)field_0[36])(this);
    }

    // 0x1006988a0, 16 bytes, complete-object constructor, placed by class name
    // InputField::InputField(InterfaceManager*): jumps straight to the base-object constructor

    // 0x1006988b0, 1232 bytes, placed by class name
    // InputField::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool)
    void InputField::MainLogic(ComponentDependencies* param_1, int param_2, int param_3, bool param_4, bool param_5,
                               bool param_6, bool param_7) {
        undefined1* puVar1;
        uint uVar2;
        long* plVar3;
        ScrollBar* this_00;
        bool bVar4;
        char cVar5;
        byte bVar6;
        byte bVar7;
        int iVar8;
        int iVar9;
        shared_ptr* this_01;
        Layout* pLVar10;
        vector* pvVar11;
        FontMetrics* pFVar12;
        long lVar13;
        ulong uVar14;
        type* ptVar15;
        undefined7 in_register_00000081;
        undefined7 in_register_00000089;
        int iVar16;
        undefined1 local_88[16];
        InputField* local_78[2];
        ScrollBar* local_68;
        Margin local_60;
        undefined4 local_5c;
        int local_58;
        int local_54;
        uint local_50;
        int local_4c;
        int local_48;
        undefined4 local_44;
        int local_40;
        int local_3c;
        int local_38;
        uint local_34;

        local_5c = (undefined4)CONCAT71(in_register_00000089, param_5);
        local_44 = (undefined4)CONCAT71(in_register_00000081, param_4);
        this_01 = (shared_ptr*)UpdateTextRunSettings(this, *(FontManager**)(param_1 + 8));
        bVar4 = shared_ptr::operator_cast_to_bool(this_01);
        if (!bVar4) {
            return;
        }
        if (field_884 != 0) {
            field_884 = field_884 + -1;
        }
        cVar5 = IsEnabled();
        if (cVar5 == '\0') {
            return;
        }
        local_3c = param_3;
        local_34 = param_2;
        local_40 = GetStreamCountLastMix();
        local_38 = GetMinMapX();
        local_88._0_4_ = (&field_416)->GetVisualMargin();
        local_60 = (Margin)(&field_768, (Margin*)local_88)->GetValidOr();
        ptVar15 = (type*)&local_34;
        local_60.ApplyTo(ptVar15, &local_3c, &local_40, &local_38);
        local_34 = local_34 + 2;
        local_3c = local_3c + 2;
        local_40 = local_40 + -4;
        local_38 = local_38 + -4;
        cVar5 = IsMultiline(this);
        if (cVar5 == '\0') {
            iVar8 = field_776->GetWidth();
            pLVar10 = (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)this_01);
            pvVar11 = eastl::string::Layout::SSOBeginPtr(pLVar10, ptVar15);
            pFVar12 = (FontMetrics*)shared_ptr<graphics::FontMetrics>::operator->(
                (shared_ptr<graphics::FontMetrics>*)pvVar11);
            iVar9 = pFVar12->GetVerticalSpacing();
            cVar5 = field_464->GetTextHAlign();
            if (cVar5 == '\x02') {
                local_34 = local_34 + (local_40 - iVar8);
            } else if (cVar5 == '\x01') {
                local_34 = local_34 + (local_40 - iVar8) / 2;
            }
            cVar5 = field_464->GetTextVAlign();
            if (cVar5 == '\x02') {
                local_3c = local_3c + (local_38 - iVar9);
            } else if (cVar5 == '\x01') {
                local_3c = local_3c - (local_38 - iVar9) / 2;
                goto joined_r0x000100698bf8;
            }
        } else {
            local_68 = (ScrollBar*)&field_600;
            cVar5 = local_68->GetAutoHide();
            if ((cVar5 != '\0') && (iVar8 = field_776->GetHeight(), iVar8 <= local_38)) {
                local_68->ClearInteractionState();
                field_916 = 0;
                field_920 = 0;
                field_888 = 0;
                goto joined_r0x000100698bf8;
            }
            uVar2 = field_920;
            ptVar15 = (type*)(ulong)uVar2;
            if (uVar2 != 0) {
                iVar8 = 0;
                if (2 < uVar2 + 1) {
                    ApplyScroll(this, uVar2);
                    iVar8 = (int)field_920 / 2;
                }
                field_920 = iVar8;
            }
            if (param_6) {
                pLVar10 = (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)this_01);
                pvVar11 = eastl::string::Layout::SSOBeginPtr(pLVar10, ptVar15);
                pFVar12 = (FontMetrics*)shared_ptr<graphics::FontMetrics>::operator->(
                    (shared_ptr<graphics::FontMetrics>*)pvVar11);
                iVar8 = pFVar12->GetVerticalSpacing();
                iVar8 = ApplyScroll(this, (int)((float)iVar8 * 0.25) * *(int*)(param_1 + 68));
                field_920 = field_920 + iVar8;
            }
            puVar1 = field_776;
            iVar8 = puVar1->GetIndexAtPos(0, field_916);
            field_888 = (long)iVar8;
            ptVar15 = (type*)(ulong)local_34;
            new (local_88) oldscape::dash3d::GridRect(local_34, local_3c, local_40, local_38);
            pLVar10 = (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)this_01);
            pvVar11 = eastl::string::Layout::SSOBeginPtr(pLVar10, ptVar15);
            pFVar12 = (FontMetrics*)shared_ptr<graphics::FontMetrics>::operator->(
                (shared_ptr<graphics::FontMetrics>*)pvVar11);
            local_58 = pFVar12->GetVerticalSpacing();
            this_00 = local_68;
            iVar16 = local_40 + local_34;
            local_78[0] = this;
            bVar6 = local_68->GetSize();
            local_54 = local_3c;
            bVar7 = this_00->GetSize();
            local_50 = (uint)bVar7;
            local_4c = local_38;
            local_48 = field_916;
            iVar8 = puVar1->GetHeight();
            iVar8 = iVar8 + local_38;
            iVar9 = puVar1->GetLineHeight();
            bVar4 = ScrollBar::ProcessInput<InputField::MainLogic(ComponentDependencies_const&, int, int, bool, bool,
                                                                  bool, bool)::__50&>(
                this_00, (MouseState*)(param_1 + 56), iVar16 - (uint)bVar6, local_54, local_50, local_4c,
                (Rect*)local_88, local_48, iVar8 - iVar9, local_58, (__50*)local_78);
            if (bVar4) {
                return;
            }
        }
    joined_r0x000100698bf8:
        if (((char)local_44 != '\0') || ((char)local_5c != '\0')) {
            local_88->shared_from_this();
            plVar3 = *(long**)(param_1 + 48);
            shared_ptr<FocusComponent>::shared_ptr<InputField, void>((shared_ptr<FocusComponent>*)local_78,
                                                                     (shared_ptr*)local_88);
            (**(code**)(*plVar3 + 40))(plVar3, local_78);
            local_78->~shared_ptr();
            field_882 = 1;
            field_912 = 0.0;
            local_34 = (uint)(*(float*)(param_1 + 60) - (float)(int)local_34);
            local_3c = (int)(*(float*)(param_1 + 64) - (float)local_3c);
            puVar1 = field_776;
            if ((local_40 < (int)local_34) || (local_38 < local_3c)) {
                uVar14 = puVar1->GetCodepointCount();
            } else {
                cVar5 = puVar1->IsEmpty();
                if (cVar5 == '\0') {
                    lVar13 = puVar1->GetCharacter(field_888);
                    local_34 = local_34 + *(int*)(lVar13 + 4);
                }
                uVar14 = puVar1->GetIndexAtPos(local_34, field_916 + local_3c);
            }
            field_552 = uVar14;
            EnsureCaretVisible(this);
            if ((char)local_44 != '\0') {
                field_896 = field_552;
            }
            local_88->~shared_ptr();
        }
    }

    // 0x100698d80, 448 bytes, placed by class name
    // InputField::UpdateTextRunSettings(graphics::FontManager*)
    shared_ptr* InputField::UpdateTextRunSettings(FontManager* param_1) {
        undefined1* puVar1;
        char cVar2;
        bool bVar3;
        byte bVar4;
        int iVar5;
        undefined4 uVar6;
        shared_ptr* this_00;
        Layout* this_01;
        shared_ptr* psVar7;
        undefined8 uVar8;
        type* ptVar10;
        shared_ptr local_50;
        int local_3c;
        int local_38;
        int local_34;

        puVar1 = field_464;
        cVar2 = puVar1->GetTextMaxLines();
        if (cVar2 == '\0') {
            puVar1->SetTextMaxLines('\x01');
        }
        iVar5 = puVar1->GetEndPosition();
        new (&local_50) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        this_00 = (shared_ptr*)param_1->GetFont(iVar5, &local_50);
        local_50.~shared_ptr();
        bVar3 = shared_ptr::operator_cast_to_bool(this_00);
        if (bVar3) {
            local_50._0_4_ = 0;
            local_3c = 0;
            local_38 = GetStreamCountLastMix();
            local_34 = GetMinMapX();
            (&field_416, (int*)&local_50, &local_3c, &local_38, &local_34)->ConvertToContentBounds();
            local_38 = local_38 + -4;
            local_34 = local_34 + -4;
            cVar2 = IsMultiline(this);
            if (cVar2 != '\0') {
                cVar2 = (&field_600)->GetAutoHide();
                if ((cVar2 == '\0') || (iVar5 = field_776->GetHeight(), local_34 < iVar5)) {
                    bVar4 = (&field_600)->GetSize();
                    local_38 = local_38 - (uint)bVar4;
                }
            }
            puVar1 = field_776;
            puVar1->SetContentVisibility(field_536);
            bVar3 = field_884 != 0;
            ptVar10 = (type*)(ulong)bVar3;
            puVar1->SetShowLastChar(bVar3);
            this_01 = (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)this_00);
            psVar7 = (shared_ptr*)eastl::string::Layout::SSOBeginPtr(this_01, ptVar10);
            puVar1->SetFontMetrics(psVar7);
            return this_00;
        }
        uVar8 = logger::default_logger();
        uVar6 = puVar1->GetEndPosition();
        logger::Logger::Log(
            uVar8, 0, 5,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/InputField.cpp", 1604,
            "Font %d not available yet (invalid/loading)", uVar6);
        puVar1->GetScreen();
        field_552 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        return this_00;
    }

    // 0x100698f80, 240 bytes, placed by class name
    // InputField::ApplyScroll(int)
    int InputField::ApplyScroll(int param_1) {
        byte bVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        Margin local_44;
        int local_40[3];
        Margin local_34;

        if (param_1 != 0) {
            local_34 = (Margin)(&field_416)->GetVisualMargin();
            local_44 = (Margin)(&field_768, &local_34)->GetValidOr();
            iVar2 = GetMinMapX();
            bVar1 = local_44.GetHeight();
            local_40[2] = (iVar2 - (uint)bVar1) + -4;
            iVar3 = field_776->GetHeight();
            iVar4 = field_776->GetLineHeight();
            local_34 = (Margin)(iVar3 - iVar4);
            if (local_40[2] < (int)((int)local_34 + (iVar2 - (uint)bVar1) + -4)) {
                local_40[0] = field_916 + param_1;
                local_40[1] = 0;
                iVar2 = math::Clamp<int>(local_40, local_40 + 1, (int*)&local_34);
                field_916 = iVar2;
                return param_1;
            }
            field_916 = 0;
        }
        return 0;
    }

    // 0x1006990d0, 608 bytes, placed by class name
    // InputField::EnsureCaretVisible()
    void InputField::EnsureCaretVisible() {
        undefined1* puVar1;
        int iVar2;
        int iVar3;
        char cVar4;
        byte bVar5;
        int iVar6;
        undefined4 uVar7;
        int iVar8;
        uint uVar9;
        ulong uVar10;
        long lVar11;
        ulong* puVar12;
        ulong uVar13;
        ulong local_68[4];
        vector<graphics::TextRunCharacter, BucketAllocatorEASTL>* local_48;
        undefined8 local_40;
        Margin local_38;
        byte local_31;

        cVar4 = IsMultiline(this);
        if (cVar4 != '\0') {
            uVar13 = field_552;
            if (uVar13 == 0) {
                iVar6 = -field_916;
            } else {
                puVar1 = field_776;
                uVar10 = puVar1->GetCodepointCount();
                if (uVar10 < uVar13) {
                    iVar6 = puVar1->GetHeight();
                } else {
                    local_38 = (Margin)(&field_416)->GetVisualMargin();
                    uVar7 = (&field_768, &local_38)->GetValidOr();
                    local_68[0] = CONCAT44(local_68[0]._4_4_, uVar7);
                    lVar11 = puVar1->GetCharacter(field_552 - 1);
                    iVar2 = *(int*)(lVar11 + 8);
                    iVar8 = GetMinMapX();
                    bVar5 = local_68->GetHeight();
                    iVar3 = field_916;
                    iVar6 = iVar2 - iVar3;
                    if (iVar3 <= iVar2) {
                        iVar8 = (iVar8 - (uint)bVar5) + -4;
                        iVar6 = puVar1->GetLineHeight();
                        if (iVar6 + iVar2 <= iVar3 + iVar8) {
                            return;
                        }
                        iVar6 = puVar1->GetLineHeight();
                        iVar6 = (iVar2 + iVar6) - (iVar8 + field_916);
                    }
                }
            }
            ApplyScroll(this, iVar6);
            return;
        }
        uVar13 = field_552;
        if ((field_888 == uVar13) && (uVar13 != 0)) {
            field_888 = uVar13 - 1;
            return;
        }
        puVar1 = field_776;
        cVar4 = puVar1->IsEmpty();
        if (cVar4 != '\0') {
            field_888 = 0;
            return;
        }
        uVar7 = (&field_416)->GetVisualMargin();
        local_68[0] = CONCAT44(local_68[0]._4_4_, uVar7);
        local_38 = (Margin)(&field_768, (Margin*)local_68)->GetValidOr();
        local_48 = (vector<graphics::TextRunCharacter, BucketAllocatorEASTL>*)puVar1->GetMaterial();
        local_68->Slice((ulong)puVar1, 0);
        iVar6 = local_68->GetLastCursorPosition();
        local_40 = GetStreamCountLastMix();
        local_31 = local_38.GetWidth();
        uVar13 = 0;
        if ((ulong)field_888 < field_552) {
            uVar13 = field_888;
        }
        lVar11 = puVar1->GetCodepointCount();
        local_68[0] = lVar11 - 1;
        puVar12 = std::min<unsigned long>(local_68, &field_552);
        uVar10 = *puVar12;
        field_888 = 0;
        if (uVar10 < uVar13) {
            return;
        }
        uVar9 = (uint)local_31;
        iVar2 = (int)local_40;
        do {
            lVar11 = eastl::vector<graphics::TextRunCharacter, BucketAllocatorEASTL>::operator[](local_48, uVar13);
            if (iVar6 - *(int*)(lVar11 + 4) <= (int)((iVar2 - uVar9) + -4)) {
                field_888 = uVar13;
                return;
            }
            uVar13 = uVar13 + 1;
        } while (uVar13 <= uVar10);
    }

    // 0x100699330, 2800 bytes, placed by class name
    // InputField::MainDraw(ComponentDependencies const&, int, int, float)
    void InputField::MainDraw(ComponentDependencies* param_1, int param_2, int param_3, float param_4) {
        undefined1* puVar1;
        FontManager* this_00;
        FontHelpers* pFVar2;
        TextRun* pTVar3;
        char cVar4;
        bool bVar5;
        byte bVar6;
        byte bVar7;
        uint uVar8;
        int iVar9;
        undefined4 uVar10;
        uint uVar11;
        int iVar12;
        int iVar13;
        int iVar14;
        TextureManager* this_01;
        SpriteAtlasManager* pSVar15;
        undefined* puVar16;
        shared_ptr* this_02;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_03;
        shared_ptr* this_04;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        Texture* pTVar17;
        SpriteAtlasReference* this_07;
        long lVar18;
        float* pfVar19;
        undefined4* puVar20;
        Layout* pLVar21;
        vector* pvVar22;
        FontMetrics* pFVar23;
        uint* puVar24;
        long lVar25;
        undefined8 uVar26;
        int* piVar27;
        ulong uVar28;
        RT7Core* pRVar29;
        type* ptVar30;
        undefined8 uVar31;
        char* pcVar32;
        ComponentDependencies* pCVar33;
        InputField* pIVar34;
        StringView SVar35;
        undefined8 in_stack_fffffffffffffeb8;
        undefined4 uVar36;
        Texture* in_stack_fffffffffffffec8;
        undefined1 local_120[40];
        ulong local_f8;
        undefined1 local_f0[48];
        undefined1 local_c0[40];
        shared_ptr* local_98;
        Texture* local_90;
        RT7Core* local_88;
        ScrollBar* local_80;
        uint local_74;
        ComponentDependencies* local_70;
        InputField* local_68;
        TextRun* local_60;
        shared_ptr* local_58;
        uint local_4c;
        TextFlags local_48[8];
        int local_40;
        int local_3c;
        int local_38;
        uint local_34;

        local_88 = (RT7Core*)CONCAT44(local_88._4_4_, param_4);
        cVar4 = GetAlpha();
        local_60 = (TextRun*)CONCAT71(local_60._1_7_, cVar4);
        if (cVar4 == '\0') {
            return;
        }
        puVar1 = &field_416;
        this_01 = (TextureManager*)(*(RT7Core**)(param_1 + 16))->GetTextureManager();
        pSVar15 = (SpriteAtlasManager*)this_01->GetSpriteAtlasManager();
        puVar16 = (undefined*)puVar1->LoadSpriteAtlasReference(pSVar15, false);
        if (puVar16 != DataStatus::READY) {
            return;
        }
        local_58 = (shared_ptr*)puVar1->GetDefaultValue();
        bVar5 = shared_ptr::operator_cast_to_bool(local_58);
        if (!bVar5) {
            uVar26 = logger::default_logger();
            pcVar32 = "Invalid sprite atlas reference!";
            uVar31 = 230;
        LAB_1006995b6:
            logger::Logger::Log(
                uVar26, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/InputField.cpp",
                uVar31, pcVar32);
            return;
        }
        local_80 = (ScrollBar*)CONCAT44(local_80._4_4_, param_3);
        this_00 = *(FontManager**)(param_1 + 8);
        local_70 = param_1;
        local_68 = this;
        local_4c = param_2;
        uVar8 = field_464->GetEndPosition();
        pRVar29 = (RT7Core*)(ulong)uVar8;
        new (local_f0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        this_02 = (shared_ptr*)this_00->GetFont(uVar8, local_f0);
        local_f0->~shared_ptr();
        bVar5 = shared_ptr::operator_cast_to_bool(this_02);
        if (!bVar5) {
            uVar26 = logger::default_logger();
            pcVar32 = "Invalid font!";
            uVar31 = 238;
            goto LAB_1006995b6;
        }
        local_c0._32_8_ = field_464;
        this_03 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)
                      shared_ptr<graphics::SpriteAtlasReference>::operator->(
                          (shared_ptr<graphics::SpriteAtlasReference>*)local_58);
        this_04 = (shared_ptr*)
            eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>::second(this_03);
        bVar5 = shared_ptr::operator_cast_to_bool(this_04);
        local_74 = CONCAT31(local_74._1_3_, bVar5);
        if (bVar5) {
            this_05 =
                (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->((shared_ptr<graphics::SpriteAtlas>*)this_04);
            this_06 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_05->GetOrigin();
            pTVar17 = (Texture*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_06);
            pIVar34 = local_68;
            local_38 = (int)local_80;
            local_34 = local_4c;
            if (pTVar17 != (Texture*)0) {
                local_98 = this_02;
                local_90 = pTVar17;
                this_07 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                    (shared_ptr<graphics::SpriteAtlasReference>*)local_58);
                uVar36 = (undefined4)((ulong)in_stack_fffffffffffffeb8 >> 32);
                lVar18 = this_07->GetRenderMapping();
                new (local_f0) math::Float4((Vector4T*)(lVar18 + 88));
                cVar4 = pIVar34->IsEnabled();
                pfVar19 = (float*)local_f0->qw();
                local_f0->SetVerticalFov(*pfVar19 * 0.5);
                if (cVar4 == '\0') {
                    puVar20 = (undefined4*)local_f0->y();
                    local_58 = (shared_ptr*)CONCAT44(local_58._4_4_, *puVar20);
                    pfVar19 = (float*)local_f0->qw();
                    local_f0->SetY(local_58._0_4_ + *pfVar19);
                }
                pRVar29 = *(RT7Core**)(local_70 + 16);
                iVar9 = pIVar34->GetStreamCountLastMix();
                uVar10 = local_68->GetMinMapX();
                local_58 = (shared_ptr*)CONCAT44(local_58._4_4_, uVar10);
                uVar11 = local_68->GetRGBA();
                uVar8 = local_4c;
                pIVar34 = local_68;
                in_stack_fffffffffffffeb8 = CONCAT44(uVar36, uVar11);
                iVar12 = (int)local_80;
                in_stack_fffffffffffffec8 = local_90;
                puVar1->DrawSpriteSlice(pRVar29, local_4c, (int)local_80, iVar9, (int)local_58._0_4_, uVar11, local_f0,
                                        local_90, 0.0);
                this_02 = local_98;
                local_38 = iVar12;
                local_34 = uVar8;
            }
        } else {
            uVar26 = logger::default_logger();
            pRVar29 = (RT7Core*)0;
            logger::Logger::Log(
                uVar26, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/InputField.cpp",
                248, "Invalid header sprite atlas reference!");
            pIVar34 = local_68;
            local_38 = (int)local_80;
            local_34 = local_4c;
        }
        if ((char)local_74 == '\0') {
            return;
        }
        local_40 = pIVar34->GetStreamCountLastMix();
        local_3c = pIVar34->GetMinMapX();
        pLVar21 = (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)this_02);
        pvVar22 = eastl::string::Layout::SSOBeginPtr(pLVar21, (type*)pRVar29);
        pFVar23 =
            (FontMetrics*)shared_ptr<graphics::FontMetrics>::operator->((shared_ptr<graphics::FontMetrics>*)pvVar22);
        iVar12 = pFVar23->GetVerticalSpacing();
        local_f0._0_4_ = puVar1->GetVisualMargin();
        local_f0._40_4_ = (&pIVar34->field_768, (Margin*)local_f0)->GetValidOr();
        ptVar30 = (type*)&local_34;
        ((local_f0 + 40))->ApplyTo(ptVar30, &local_38, &local_40, &local_3c);
        uVar28 = (ulong)local_34;
        local_34 = local_34 + 2;
        iVar9 = local_38 + 2;
        local_40 = local_40 + -4;
        local_3c = local_3c + -4;
        local_38 = iVar9;
        cVar4 = IsMultiline(pIVar34);
        local_f8 = uVar28;
        local_98 = this_02;
        if (cVar4 == '\0') {
            if (local_3c < iVar12) {
                iVar12 = local_3c;
            }
            iVar13 = pIVar34->field_776->GetWidth();
            pLVar21 = (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)this_02);
            pvVar22 = eastl::string::Layout::SSOBeginPtr(pLVar21, ptVar30);
            pFVar23 = (FontMetrics*)shared_ptr<graphics::FontMetrics>::operator->(
                (shared_ptr<graphics::FontMetrics>*)pvVar22);
            iVar14 = pFVar23->GetVerticalSpacing();
            cVar4 = local_c0._32_8_->GetTextHAlign();
            if (cVar4 == '\x02') {
                local_34 = local_34 + (local_40 - iVar13);
            } else if (cVar4 == '\x01') {
                local_34 = local_34 + (local_40 - iVar13) / 2;
            }
            cVar4 = local_c0._32_8_->GetTextVAlign();
            pIVar34 = local_68;
            if (cVar4 != '\x02') {
                if (cVar4 == '\x01') {
                    local_38 = local_38 + (local_3c - iVar14) / 2;
                }
                uVar28 = 0;
                bVar6 = (byte)local_60;
                goto LAB_1006997b5;
            }
            local_38 = local_38 + (local_3c - iVar14);
            uVar28 = 0;
        } else {
            cVar4 = (&pIVar34->field_600)->GetAutoHide();
            if ((cVar4 == '\0') || (iVar13 = pIVar34->field_776->GetHeight(), local_3c < iVar13)) {
                local_38 = local_38 - pIVar34->field_916;
                uVar28 = CONCAT71((int7)((ulong)this_02 >> 8), 1);
            } else {
                uVar28 = 0;
            }
        }
        bVar6 = (byte)local_60;
    LAB_1006997b5:
        uVar8 = (uint)uVar28;
        local_80 = (ScrollBar*)CONCAT44(local_80._4_4_, iVar12);
        local_60 = (TextRun*)CONCAT44(local_60._4_4_, (float)iVar12 * 0.9);
        local_58 = (shared_ptr*)(*(RT7Core**)(local_70 + 16))->GetGUIManager();
        if ((pIVar34->field_904 == 1) || (pIVar34->field_908 != '\0')) {
            puVar24 = &pIVar34->field_592;
        } else {
            puVar24 = &pIVar34->field_588;
        }
        local_90 = (Texture*)CONCAT44(local_90._4_4_, (int)local_60._0_4_);
        local_74 = *puVar24;
        local_c0._0_4_ = 1;
        graphics::TextFlags::TextFlags(local_48, local_c0, 1);
        new (local_f0) graphics::TextProperties(local_98, SUB81(in_stack_fffffffffffffeb8, 0));
        uVar11 = pIVar34->GetRGBA();
        uVar26 = local_c0._32_8_;
        local_c0._33_3_ = 0;
        local_c0[32] = bVar6;
        local_c0._36_4_ = SUB84(uVar26, 4);
        uVar26->PopulateTextProperties(local_f0, uVar11, bVar6);
        local_60 = (TextRun*)pIVar34->field_776;
        cVar4 = local_60->IsEmpty();
        pCVar33 = local_70;
        uVar36 = (undefined4)((ulong)in_stack_fffffffffffffeb8 >> 32);
        if (cVar4 == '\0') {
            new (local_120) graphics::ClippingState(*(RT7Core**)(local_70 + 16));
            (*(RT7Core**)(pCVar33 + 16))->SetClippingRectangle(local_34, iVar9, local_40, local_3c, true);
            cVar4 = IsMultiline(pIVar34);
            if (cVar4 == '\0') {
                lVar18 = local_60->GetCharacter(pIVar34->field_888);
                local_34 = local_34 - *(int*)(lVar18 + 4);
            }
            pTVar3 = local_60;
            if (pIVar34->field_882 == '\0') {
                pFVar2 = *(FontHelpers**)pCVar33;
                uVar28 = pIVar34->field_888;
                local_60->GetCodepointCount();
                local_c0->Slice((ulong)pTVar3, uVar28);
                pFVar2->DrawTextRunSlice(local_c0, local_34, local_38, local_f0, local_3c + pIVar34->field_916);
            } else {
                UpdateCaretBlink(pIVar34, local_88._0_4_);
                uVar36 = (undefined4)((ulong)in_stack_fffffffffffffeb8 >> 32);
                uVar28 = pIVar34->field_896;
                if ((uVar28 != pIVar34->field_552) &&
                    (((ulong)pIVar34->field_888 <= uVar28 || ((ulong)pIVar34->field_888 <= pIVar34->field_552)))) {
                    local_98 = (shared_ptr*)CONCAT44(local_98._4_4_, uVar8);
                    local_c0->Slice((ulong)local_60, uVar28);
                    lVar18 = local_c0->end();
                    local_88 = (RT7Core*)CONCAT44(local_88._4_4_, *(undefined4*)(lVar18 + 4));
                    lVar18 = local_c0->end();
                    uVar8 = *(uint*)(lVar18 + 8);
                    lVar18 = local_c0->end();
                    lVar18 = lVar18 + 12;
                    lVar25 = local_c0->data();
                    uVar36 = (undefined4)((ulong)in_stack_fffffffffffffeb8 >> 32);
                    if (lVar18 != lVar25) {
                        do {
                            uVar11 = local_34;
                            iVar9 = local_38;
                            iVar12 = local_40;
                            pIVar34 = local_68;
                            uVar36 = (undefined4)((ulong)in_stack_fffffffffffffeb8 >> 32);
                            if (*(uint*)(lVar18 + 8) != uVar8) {
                                local_4c = uVar8;
                                uVar8 = local_68->GetRGBA();
                                uVar10 = math::Multiply(uVar8, pIVar34->field_596);
                                in_stack_fffffffffffffeb8 = CONCAT44(uVar36, 1);
                                local_58->AddColouredRectangle(
                                    uVar11 + (int)local_88._0_4_, iVar9 + local_4c, iVar12 - (int)local_88._0_4_,
                                    (ulong)local_80 & 4294967295, uVar10, in_stack_fffffffffffffeb8);
                                local_88 = (RT7Core*)CONCAT44(local_88._4_4_, *(undefined4*)(lVar18 + 4));
                                uVar8 = *(uint*)(lVar18 + 8);
                                pCVar33 = local_70;
                            }
                            lVar18 = lVar18 + 12;
                            lVar25 = local_c0->data();
                            uVar36 = (undefined4)((ulong)in_stack_fffffffffffffeb8 >> 32);
                        } while (lVar18 != lVar25);
                    }
                    lVar18 = local_c0->data();
                    local_4c = uVar8;
                    if (uVar8 == *(uint*)(lVar18 + -4)) {
                        iVar9 = local_c0->GetLastCursorPosition();
                        uVar8 = local_34;
                        iVar12 = local_38;
                        pIVar34 = local_68;
                        uVar11 = local_68->GetRGBA();
                        uVar10 = math::Multiply(uVar11, pIVar34->field_596);
                        uVar26 = CONCAT44(uVar36, 1);
                        local_58->AddColouredRectangle(uVar8 + (int)local_88._0_4_, iVar12 + local_4c,
                                                       iVar9 - (int)local_88._0_4_, (ulong)local_80 & 4294967295,
                                                       uVar10, uVar26);
                        uVar36 = (undefined4)((ulong)uVar26 >> 32);
                    }
                    pIVar34 = local_68;
                    uVar8 = (uint)local_98;
                }
                uVar28 = pIVar34->field_888;
                if ((pIVar34->field_552 != uVar28) || (0.6 < pIVar34->field_912)) {
                    if (uVar28 < pIVar34->field_552) {
                        pFVar2 = *(FontHelpers**)pCVar33;
                        local_c0->Slice((ulong)local_60, uVar28);
                        uVar26 = pFVar2->DrawTextRunSlice(local_c0, local_34, local_38, local_f0, -1);
                        if (pIVar34->field_912 <= 0.6) {
                            local_c0._0_4_ = local_34 + (int)uVar26;
                            local_f0._44_4_ = local_40 + (int)local_f8 + 1;
                            piVar27 = std::min<int>((int*)local_c0, (int*)(local_f0 + 44));
                            local_58->AddColouredRectangle(*piVar27, (int)((ulong)uVar26 >> 32) + local_38, 1,
                                                           (ulong)local_90 & 4294967295, local_74, 1);
                        }
                    }
                } else {
                    local_58->AddColouredRectangle(local_34, local_38, 1, (ulong)local_90 & 4294967295, local_74,
                                                   CONCAT44(uVar36, 1));
                }
                pFVar2 = *(FontHelpers**)pCVar33;
                uVar28 = eastl::max<unsigned long>(pIVar34->field_552, pIVar34->field_888);
                pTVar3 = local_60;
                local_60->GetCodepointCount();
                local_c0->Slice((ulong)pTVar3, uVar28);
                pFVar2->DrawTextRunSlice(local_c0, local_34, local_38, local_f0, local_3c + pIVar34->field_916);
            }
            uVar28 = (ulong)uVar8;
            local_120->~ClippingState();
        } else if (pIVar34->field_882 == '\0') {
            cVar4 = local_60->IsEmpty();
            if (cVar4 != '\0') {
                pFVar2 = *(FontHelpers**)local_70;
                StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(
                    (StringView*)(local_120 + 24), (fixed_string*)&pIVar34->field_560);
                SVar35.field_8._0_4_ = local_34;
                SVar35.field_0 = (ulong)(local_120 + 24);
                SVar35.field_8._4_4_ = 0;
                pFVar2->DrawStringMultiline(SVar35, local_38, local_40, local_3c, 0, local_f0,
                                            in_stack_fffffffffffffec8);
            }
        } else {
            UpdateCaretBlink(pIVar34, local_88._0_4_);
            if (pIVar34->field_912 <= 0.6) {
                local_58->AddColouredRectangle(local_34, local_38, 1, (ulong)local_90 & 4294967295, local_74,
                                               CONCAT44(uVar36, 1));
            }
        }
        if ((char)uVar28 == '\0') {
            return;
        }
        puVar1 = &pIVar34->field_600;
        local_88 = *(RT7Core**)(local_70 + 16);
        iVar13 = local_40 + local_34;
        local_80 = (ScrollBar*)puVar1;
        bVar6 = puVar1->GetSize();
        local_58 = (shared_ptr*)CONCAT44(local_58._4_4_, pIVar34->field_916 + local_38);
        bVar7 = puVar1->GetSize();
        pTVar3 = local_60;
        local_68 = (InputField*)CONCAT44(local_68._4_4_, local_3c);
        local_70 = (ComponentDependencies*)CONCAT44(local_70._4_4_, pIVar34->field_916);
        iVar12 = local_60->GetHeight();
        iVar12 = iVar12 + local_3c;
        iVar9 = pTVar3->GetLineHeight();
        bVar5 = (bool)pIVar34->IsEnabled();
        local_80->Draw(local_88, iVar13 - (uint)bVar6, (int)local_58._0_4_, (uint)bVar7, (int)local_68, (int)local_70,
                       iVar12 - iVar9, bVar5, local_c0[32]);
    }

    // 0x100699e30, 48 bytes, placed by class name
    // InputField::UpdateCaretBlink(float)
    void InputField::UpdateCaretBlink(float param_1) {
        field_912 = (float)fmod(param_1 + field_912, 1.2);
    }

    // 0x100699e60, 80 bytes, placed by class name
    // InputField::Init(graphics::TextContentVisibility, InputField::FilterMode, unsigned long)
    void InputField::Init(uint param_2, uint param_3, ulong param_4) {
        ulong uVar1;

        field_536 = param_2;
        field_532 = param_3;
        field_544 = param_4;
        if (param_4 == 0) {
            uVar1 = 255;
        } else {
            uVar1 = 2500;
            if (param_4 < 2500)
                goto LAB_100699e98;
        }
        field_544 = uVar1;
    LAB_100699e98:
        field_776->SetContentVisibility();
    }

    // 0x100699eb0, 144 bytes, placed by class name
    // InputField::SetContents(eastl::basic_string<char, BucketAllocatorEASTL> const&)
    void InputField::SetContents(basic_string* param_1) {
        bool bVar1;
        long lVar2;
        shared_ptr* this_00;
        basic_string* pbVar3;
        char* pcVar4;
        char* pcVar5;

        lVar2 = (**(code**)(*(long*)field_928 + 64))();
        this_00 = (shared_ptr*)UpdateTextRunSettings(this, *(FontManager**)(lVar2 + 8));
        bVar1 = shared_ptr::operator_cast_to_bool(this_00);
        if (bVar1) {
            pbVar3 = (basic_string*)GetContents(this);
            bVar1 = eastl::operator!=(pbVar3, param_1);
            if (bVar1) {
                ClearInternal(this);
                pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
                AddContents(this, pcVar4, pcVar5, true, true);
            }
        }
    }

    // 0x100699f60, 80 bytes, placed by class name
    // InputField::ClearInternal()
    void InputField::ClearInternal() {
        graphics::TextRun::Clear();
        eastl::string::clear();
        field_552 = 0;
        field_888 = 0;
        field_896 = 0;
        field_904 = 4294967295;
        field_908 = 0;
    }

    // 0x100699fb0, 496 bytes, placed by class name
    // InputField::AddContents(char const*, char const*, bool, bool)
    ulong InputField::AddContents(char* param_1, char* param_2, bool param_3, bool param_4) {
        undefined1* this_00;
        ulong* puVar1;
        ulong uVar3;
        long lVar4;
        ulong* puVar5;
        ulong uVar6;
        undefined7 in_register_00000009;
        undefined7 in_register_00000081;
        undefined1 auVar7[16];
        __52 local_b8;
        ulong local_b0;
        ulong* local_a8;
        undefined4 local_a0;
        undefined4 local_9c;
        ulong local_98[12];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_1 == param_2) {
            uVar3 = 0;
        } else {
            local_a0 = (undefined4)CONCAT71(in_register_00000009, param_3);
            local_b0 = eastl::distance<char const*>(param_1, param_2);
            this_00 = field_776;
            local_a8 = &field_552;
            uVar3 = this_00->Remove(field_896, field_552);
            field_552 = uVar3;
            local_9c = (undefined4)CONCAT71(in_register_00000081, param_4);
            if ((param_4) && (field_532 == 3)) {
                if (HandleQuantityInput(this, (int)param_2[-1]) != '\0') {
                    lVar4 = this_00->GetCodepointCount();
                    puVar1 = local_a8;
                    local_98[0] = lVar4 - 1;
                    puVar5 = std::min<unsigned long>(local_a8, local_98);
                    *puVar1 = *puVar5;
                    local_b0 = local_b0 - 1;
                }
            }
            uVar3 = field_552;
            local_b8.field_0 = (long)this;
            fixedfunction::function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0>::function<
                InputField::AddContents(char const*, char const*, bool, bool)::__52&, void>(
                (function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0>*)local_98, &local_b8);
            auVar7 = this_00->InsertFiltered(param_1, local_b0, uVar3, local_98, local_a0._0_1_, field_544);
            uVar3 = auVar7._0_8_;
            fixedfunction::function<void(), 64ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(), 64ul, 16ul, (fixedfunction::Methods)0>*)local_98);
            if (*local_a8 != uVar3) {
                uVar6 = this_00->GetCodepointCount();
                if (uVar3 == uVar6) {
                    field_884 = 100;
                }
            }
            field_880 = '\x01';
            field_552 = uVar3;
            field_896 = uVar3;
            EnsureCaretVisible(this);
            uVar3 = auVar7._8_8_ >> 16;
            field_904 = (uint)((auVar7._8_8_ & 4294901761) != 0);
            if ((char)local_9c != '\0') {
                ValidateQuantityInput(this);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar3 & 65535;
    }

    // 0x10069a1a0, 48 bytes, placed by class name
    // InputField::Clear()
    void InputField::Clear() {
        if (field_882 != '\0') {
            (*(code*)field_0[36])(this);
        }
        ClearInternal(this);
    }

    // 0x10069a1d0, 288 bytes, placed by class name
    // InputField::DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void InputField::DecodeTypedComponentProperties(PacketT* param_1, int param_2) {
        char cVar1;
        byte bVar2;
        ushort uVar3;
        undefined4 uVar4;
        undefined8 in_RAX;
        ulong uVar5;
        Margin local_24;

        local_24 = SUB84((ulong)in_RAX >> 32, 0);
        cVar1 = param_1->g1();
        SetEnabled(this, cVar1 == '\x01');
        bVar2 = param_1->g1();
        field_532 = (uint)bVar2;
        bVar2 = param_1->g1();
        field_536 = (uint)bVar2;
        uVar3 = param_1->g2();
        field_544 = (ulong)uVar3;
        if (8 < param_2) {
            new (&local_24) Margin(param_1);
            field_768 = local_24;
        }
        if (6 < param_2) {
            bVar2 = param_1->g1();
            field_528 = (uint)bVar2;
        }
        bVar2 = param_1->g1();
        field_100 = ~bVar2;
        uVar4 = param_1->g4();
        field_96 = uVar4;
        (&field_416, param_1, param_2)->DecodeSpriteData();
        (field_464, param_1, param_2)->DecodeTextData();
        (&field_600, param_1, param_2)->Decode();
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

    // 0x10069a2f0, 400 bytes, placed by class name
    // InputField::LoadStyleSheetVisuals(StyleSheet const&)
    void InputField::LoadStyleSheetVisuals(StyleSheet* param_1) {
        bool bVar1;
        int* piVar2;
        SpriteData* pSVar3;
        undefined1* this_00;
        undefined1 local_28[8];

        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &field_100, 146, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned int>(param_1, &field_96, 145, 1);
        (&field_768, 198, param_1)->LoadFromStylesheet();
        (field_464, 150, param_1)->LoadStyleSheetTextData();
        (&field_416, 158, param_1)->LoadStyleSheetSpriteData();
        StyleSheet::GetPropertyValue<unsigned int>((StyleSheet*)local_28, param_1, 147, 1);
        bVar1 = local_28->IsActive();
        if (bVar1) {
            piVar2 = (int*)eastl::optional<unsigned int>::value();
            field_588 = *piVar2 << 8 | 255;
        }
        StyleSheet::GetPropertyValue<unsigned int>((StyleSheet*)local_28, param_1, 148, 1);
        bVar1 = local_28->IsActive();
        if (bVar1) {
            piVar2 = (int*)eastl::optional<unsigned int>::value();
            field_592 = *piVar2 << 8 | 255;
        }
        StyleSheet::GetPropertyValue<unsigned int>((StyleSheet*)local_28, param_1, 149, 1);
        bVar1 = local_28->IsActive();
        if (bVar1) {
            piVar2 = (int*)eastl::optional<unsigned int>::value();
            field_596 = *piVar2 << 8 | 255;
        }
        this_00 = &field_600;
        pSVar3 = (SpriteData*)this_00->GetMaterial();
        pSVar3->LoadStyleSheetSpriteData(168, param_1);
        pSVar3 = (SpriteData*)this_00->GetCursorMutex();
        pSVar3->LoadStyleSheetSpriteData(188, param_1);
        pSVar3 = (SpriteData*)this_00->SSOBeginPtr(188);
        pSVar3->LoadStyleSheetSpriteData(178, param_1);
    }

    // 0x10069a4e0, 16 bytes, placed by class name
    // InputField::LogicFocus(ComponentDependencies const&, bool)
    void InputField::LogicFocus(ComponentDependencies* param_1, bool param_2) {
        field_904 = 4294967295;
    }

    // 0x10069a510, 1728 bytes, placed by class name
    // InputField::HandleKeyInput(int, int, unsigned int)
    undefined8 InputField::HandleKeyInput(int param_1, int param_2, uint param_3) {
        undefined1* this_00;
        InterfaceManager* pIVar1;
        char cVar2;
        byte bVar3;
        bool bVar4;
        int iVar5;
        ulong uVar6;
        ulong uVar7;
        ulong* puVar8;
        long* plVar9;
        ComponentCollectionBase* this_01;
        shared_ptr* psVar10;
        long lVar11;
        uint uVar12;
        undefined1 auVar13[16];
        shared_ptr<Component> local_68[16];
        shared_ptr<oldscape::dash3d::Decor> local_58[16];
        shared_ptr local_48;
        shared_ptr local_38;

        cVar2 = ShouldIgnoreInput(this, param_1, param_3);
        if (cVar2 != '\0') {
            return 0;
        }
        if ((param_1 == -1) && (field_881 != '\0')) {
            field_881 = 0;
            return 1;
        }
        switch (param_1 + -63232) {
        case 0:
            uVar6 = field_552;
            if (uVar6 == 0)
                goto LAB_10069a757;
            iVar5 = -1;
            goto LAB_10069a680;
        case 1:
            uVar6 = field_552;
            uVar7 = field_776->GetCodepointCount();
            if (uVar7 <= uVar6)
                goto LAB_10069a757;
            uVar6 = field_552;
            iVar5 = 1;
        LAB_10069a680:
            uVar6 = (field_776, uVar6, iVar5)->GetIndexAtLineOffset();
            break;
        case 2:
            if (field_552 == 0)
                goto LAB_10069a757;
            uVar6 = field_552 - 1;
            break;
        case 3:
            uVar6 = field_552;
            uVar7 = field_776->GetCodepointCount();
            if (uVar7 <= uVar6)
                goto LAB_10069a757;
            uVar6 = field_552 + 1;
            break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
        case 40:
        case 42:
            goto switchD_10069a55a_caseD_4;
        case 41:
            if ((param_3 & 1) == 0) {
                field_552 = 0;
                puVar8 = &field_896;
            } else {
                puVar8 = &field_552;
                field_896 = field_552;
            }
            *puVar8 = 0;
            goto LAB_10069a74f;
        case 43:
            if ((param_3 & 1) != 0) {
                field_896 = field_552;
                uVar6 = field_776->GetCodepointCount();
                field_552 = uVar6;
                goto LAB_10069a74f;
            }
            uVar6 = field_776->GetCodepointCount();
            field_552 = uVar6;
            goto LAB_10069a696;
        default:
            if (param_1 == 53) {
                (*(code*)field_0[36])(this);
                field_904 = 3;
                return 0;
            }
        switchD_10069a55a_caseD_4:
            if ((param_1 != 0) || (param_3 != 4)) {
                if (param_1 == 63272) {
                    this_00 = field_776;
                    if (field_896 == field_552) {
                        uVar6 = this_00->GetCodepointCount();
                        if (field_552 < uVar6) {
                            uVar6 = this_00->Remove(field_552);
                            goto LAB_10069a7ff;
                        }
                        bVar4 = false;
                    } else {
                        uVar6 = this_00->Remove(field_896, field_552);
                    LAB_10069a7ff:
                        field_552 = uVar6;
                        bVar4 = true;
                    }
                    field_896 = field_552;
                LAB_10069a83a:
                    if (!bVar4)
                        goto LAB_10069a757;
                } else {
                    if (param_1 == 51) {
                        uVar6 = field_552;
                        if (field_896 == uVar6) {
                            if (uVar6 != 0) {
                                uVar6 = (field_776, uVar6 - 1)->Remove();
                                goto LAB_10069a7d6;
                            }
                            bVar4 = false;
                        } else {
                            uVar6 = (field_776, field_896, uVar6)->Remove();
                        LAB_10069a7d6:
                            field_552 = uVar6;
                            bVar4 = true;
                        }
                        field_896 = field_552;
                        field_881 = 1;
                        goto LAB_10069a83a;
                    }
                    if ((param_1 == 8) && (param_3 == 4)) {
                        CopySelection(this);
                        field_881 = 1;
                        goto LAB_10069a757;
                    }
                    if ((param_1 == 9) && (param_3 == 4)) {
                        PasteFromClipboard(this);
                        field_881 = 1;
                        goto LAB_10069a757;
                    }
                    if ((param_1 != 7) || (param_3 != 4)) {
                        if (param_1 == 48) {
                            bVar3 = field_464->GetTextMaxLines();
                            if ((bVar3 < 2) && ((param_3 & 1) == 0)) {
                                local_68->GetLookatEntity();
                                bVar4 = local_68->operator_cast_to_bool();
                                if (bVar4) {
                                    plVar9 = (long*)shared_ptr<Component>::operator->(local_68);
                                    cVar2 = (**(code**)(*plVar9 + 104))(plVar9);
                                    if (cVar2 != '\0') {
                                        this_01 = (ComponentCollectionBase*)local_68->end();
                                        local_48.shared_from_this();
                                        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<
                                            oldscape::FileRSevenDebugPresetProvider, void>(
                                            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_38, &local_48);
                                        psVar10 = (shared_ptr*)this_01->FindNext(&local_38);
                                        shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_58, psVar10);
                                        local_38.~shared_ptr();
                                        local_48.~shared_ptr();
                                        auVar13 = local_58->end();
                                        if (auVar13._0_8_ != this) {
                                            static_pointer_cast<oldscape::ClientEntity,
                                                                shared_ptr<oldscape::ClientNpc>>(
                                                &local_38, (jag*)local_58, auVar13._8_8_);
                                            pIVar1 = field_928;
                                            shared_ptr<FocusComponent>::shared_ptr<InputField, void>(
                                                (shared_ptr<FocusComponent>*)&local_48, &local_38);
                                            (**(code**)(*(long*)pIVar1 + 40))(pIVar1, &local_48);
                                            local_48.~shared_ptr();
                                            lVar11 =
                                                shared_ptr<InputField>::operator->((shared_ptr<InputField>*)&local_38);
                                            *(undefined1*)(lVar11 + 881) = 1;
                                            lVar11 =
                                                shared_ptr<InputField>::operator->((shared_ptr<InputField>*)&local_38);
                                            *(undefined1*)(lVar11 + 882) = 1;
                                            local_38.~shared_ptr();
                                            local_58->~shared_ptr();
                                            goto LAB_10069aab1;
                                        }
                                        local_58->~shared_ptr();
                                    }
                                }
                                field_904 = 1;
                            LAB_10069aab1:
                                local_68->~shared_ptr();
                                return 1;
                            }
                            uVar12 = 9;
                        } else {
                            if (param_1 != 36) {
                                if (param_1 == -1) {
                                    AddCharacter(this, param_2, false);
                                }
                                goto LAB_10069a757;
                            }
                            cVar2 = IsMultiline(this);
                            if (cVar2 == '\0') {
                                (*(code*)field_0[36])(this);
                                field_904 = 2;
                                return 0;
                            }
                            iVar5 = field_776->GetNumLines();
                            bVar3 = field_464->GetTextMaxLines();
                            if ((int)(uint)bVar3 <= iVar5) {
                                field_904 = 1;
                                field_881 = 1;
                                goto LAB_10069a757;
                            }
                            uVar12 = 10;
                        }
                        AddCharacter(this, uVar12, false);
                        field_881 = 1;
                        goto LAB_10069a757;
                    }
                    CopySelection(this);
                    uVar6 = (field_776, field_896, field_552)->Remove();
                    field_552 = uVar6;
                    field_896 = uVar6;
                    field_881 = 1;
                }
                field_880 = '\x01';
                field_904 = 0;
                EnsureCaretVisible(this);
                ValidateQuantityInput(this);
                goto LAB_10069a757;
            }
            field_896 = 0;
            uVar6 = field_776->GetCodepointCount();
            field_552 = uVar6;
            field_881 = 1;
            goto LAB_10069a74f;
        }
        field_552 = uVar6;
        if ((param_3 & 1) == 0) {
        LAB_10069a696:
            field_896 = uVar6;
        }
    LAB_10069a74f:
        EnsureCaretVisible(this);
    LAB_10069a757:
        field_912 = 0.0;
        return 1;
    }

    // 0x10069abd0, 48 bytes, placed by class name
    // InputField::ShouldIgnoreInput(int, unsigned int) const
    undefined8 InputField::ShouldIgnoreInput(int param_1, uint param_2) {
        if ((((param_1 & 4294967292U) == 63232) && (field_528 == 1)) && ((param_2 & 2) == 0)) {
            return 1;
        }
        return 0;
    }

    // 0x10069ac00, 288 bytes, placed by class name
    // InputField::CopySelection()
    void InputField::CopySelection() {
        uint* puVar1;
        uint* puVar2;
        TextRun local_270[7];
        undefined8 local_28;

        local_28 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        new (&local_270[0].m_maxLineCount) eastl::fixed_string<char, 512, true, eastl::allocator>();
        local_270->Slice((ulong)field_776, field_896);
        puVar1 = (uint*)local_270->end();
        puVar2 = (uint*)local_270->data();
        if (puVar1 != puVar2) {
            do {
                stringtools::UTF8Append<eastl::fixed_string<char, 24, true, eastl::allocator>>(
                    *puVar1, (fixed_string*)&local_270[0].m_maxLineCount);
                puVar1 = puVar1 + 3;
            } while (puVar1 != puVar2);
        }
        new (local_270) Clipboard();
        Clipboard::SetText<eastl::fixed_string<char, 512, true, eastl::allocator>>((fixed_string*)local_270);
        local_270->~Clipboard();
        /* WARNING: Subroutine does not return */
        local_270[0].m_maxLineCount.~fixed_string();
    }

    // 0x10069ad20, 192 bytes, placed by class name
    // InputField::PasteFromClipboard()
    void InputField::PasteFromClipboard() {
        char* pcVar1;
        char* pcVar2;
        char cVar3;
        eastl::string local_48[32];
        Clipboard local_28[8];

        eastl::string::basic_string(local_48);
        Clipboard::Clipboard(local_28);
        cVar3 = local_28->GetText(local_48);
        if (cVar3 == '\0') {
            local_28->~Clipboard();
        } else {
            cVar3 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            local_28->~Clipboard();
            if (cVar3 == '\0') {
                pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
                AddContents(this, pcVar1, pcVar2, true, true);
            }
        }
        eastl::string::~basic_string(local_48);
    }

    // 0x10069adf0, 368 bytes, placed by class name
    // InputField::AddCharacter(unsigned int, bool)
    void InputField::AddCharacter(uint param_1, bool param_2) {
        undefined1* this_00;
        char cVar1;
        ulong uVar2;
        ulong uVar3;
        undefined7 in_register_00000011;
        undefined1 auVar4[12];
        __51 local_b0;
        uint local_9c;
        function<void(), 64ul, 16ul, (fixedfunction::Methods)0> local_98[104];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = field_776;
        local_9c = param_1;
        uVar2 = this_00->Remove(field_896, field_552);
        field_552 = uVar2;
        if (((int)CONCAT71(in_register_00000011, param_2) == 0) && (field_532 == 3)) {
            cVar1 = HandleQuantityInput(this, local_9c);
            if (cVar1 != '\0')
                goto LAB_10069aefa;
        }
        uVar2 = field_552;
        local_b0._0_1_ = param_2;
        local_b0.field_8 = (long)this;
        fixedfunction::function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0>::function<
            InputField::AddCharacter(unsigned int, bool)::__51&, void>(
            (function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0>*)local_98, &local_b0);
        auVar4 = this_00->InsertCodepointsFiltered(&local_9c, 1, uVar2, local_98, field_544);
        uVar2 = auVar4._0_8_;
        fixedfunction::function<void(), 64ul, 16ul, (fixedfunction::Methods)0>::~function(local_98);
        if (field_552 != uVar2) {
            uVar3 = this_00->GetCodepointCount();
            if (uVar2 == uVar3) {
                field_884 = 100;
            }
        }
        field_880 = '\x01';
        field_552 = uVar2;
        field_904 = auVar4._8_4_ & 1;
    LAB_10069aefa:
        field_896 = field_552;
        EnsureCaretVisible(this);
        ValidateQuantityInput(this);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10069afa0, 416 bytes, placed by class name
    // InputField::ValidateQuantityInput()
    void InputField::ValidateQuantityInput() {
        undefined1* this_00;
        char cVar2;
        byte bVar3;
        uint* puVar4;
        ulong uVar5;
        long lVar6;
        int* piVar7;
        ulong extraout_RDX;
        ulong uVar8;
        undefined1 local_38[8];

        if ((field_532 & 4294967294) != 2) {
            return;
        }
        if (field_882 != '\0')
            goto LAB_10069afc8;
        this_00 = field_776;
        cVar2 = this_00->IsEmpty();
        if ((cVar2 == '\0') ||
            (cVar2 = eastl::basic_string<
                 char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty(),
             cVar2 == '\0')) {
            cVar2 = this_00->IsEmpty();
            if (cVar2 == '\0') {
                puVar4 = (uint*)this_00->GetCharacter(0);
                cVar2 = IsUnitQuantityCodepoint(*puVar4);
                if (cVar2 != '\0')
                    goto LAB_10069b041;
            }
            uVar5 = this_00->GetCodepointCount();
            if (uVar5 < 2)
                goto LAB_10069afc8;
            lVar6 = this_00->GetCodepointCount();
            uVar5 = 0;
            if (lVar6 != 1) {
                uVar8 = 0;
                do {
                    piVar7 = (int*)this_00->GetCharacter(uVar8);
                    uVar5 = (*piVar7 == 48) + uVar5;
                    if (*piVar7 != 48)
                        break;
                    uVar8 = uVar8 + 1;
                    lVar6 = this_00->GetCodepointCount();
                } while (uVar8 < lVar6 - 1U);
            }
            if (uVar5 == 0) {
                uVar5 = 0;
            } else {
                puVar4 = (uint*)this_00->GetCharacter(uVar5);
                bVar3 = IsUnitQuantityCodepoint(*puVar4);
                uVar5 = uVar5 - bVar3;
            }
            this_00->Remove(0, uVar5);
            field_552 = 0;
            field_888 = 0;
            field_896 = 0;
            if (uVar5 == 0)
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
        GetQuantityInput((InputField*)local_38);
        if (!local_38->IsActive()) {
            field_904 = 1;
        }
    }

    // 0x10069b160, 368 bytes, placed by class name
    // InputField::HandleQuantityInput(unsigned int)
    undefined8 InputField::HandleQuantityInput(uint param_1) {
        undefined1* puVar1;
        char cVar2;
        uint uVar3;
        int iVar4;
        uint uVar5;
        ulong uVar6;
        int iVar7;
        ulong uVar8;

        if ((param_1 & 4294967263) == 75) {
            iVar7 = 77;
            uVar3 = 75;
        } else {
            if ((param_1 & 4294967263) != 77) {
                puVar1 = field_776;
                cVar2 = puVar1->IsEmpty();
                if (cVar2 != '\0') {
                    return 0;
                }
                if (254 < param_1) {
                    return 0;
                }
                cVar2 = is_ascii_numeric((char)param_1);
                if ((cVar2 == '\0') || (uVar8 = field_552, uVar6 = puVar1->GetCodepointCount(), uVar8 != uVar6)) {
                    return 0;
                }
                uVar3 = puVar1->GetLastChar();
                cVar2 = IsUnitQuantityCodepoint(uVar3);
                if (cVar2 == '\0') {
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
        if (cVar2 == '\0') {
            iVar4 = puVar1->GetLastChar();
            if (iVar7 == iVar4) {
                uVar8 = field_552;
                uVar6 = puVar1->GetCodepointCount();
                field_552 = uVar6;
                uVar6 = uVar6 - 1;
            } else {
                uVar5 = puVar1->GetLastChar();
                if (uVar3 == uVar5)
                    goto LAB_10069b2a6;
                uVar8 = field_552;
                uVar6 = puVar1->GetCodepointCount();
                field_552 = uVar6;
            }
            field_896 = uVar6;
            AddCharacter(this, uVar3, true);
            field_552 = uVar8;
        } else {
            AddCharacter(this, uVar3, true);
            field_552 = 0;
        }
    LAB_10069b2a6:
        field_896 = field_552;
        return 1;
    }

    // 0x10069b300, 64 bytes, placed by class name
    // InputField::UpdateCachedString() const
    void InputField::UpdateCachedString() {
        if (field_880 != '\0') {
            (field_776, (basic_string*)&field_856)->ConvertToUTF8();
            field_880 = '\0';
        }
    }

    // 0x10069b340, 80 bytes, placed by class name
    // InputField::IsCodepointAllowed(InputField::FilterMode, unsigned int)
    undefined8 InputField::IsCodepointAllowed(int param_1, uint param_2) {
        undefined8 uVar2;

        if (graphics::FontHelpers::IsDrawableCodepoint(param_2) == '\0') {
            uVar2 = 0;
        } else if (param_1 - 2U < 3) {
            uVar2 = is_ascii_numeric((char)param_2);
        } else {
            uVar2 = CONCAT71((uint7)(uint3)(param_1 - 2U >> 8), 1);
            if (param_1 == 1) {
                uVar2 = is_ascii_alpha_numeric((char)param_2);
            }
        }
        return uVar2;
    }

    // 0x10069b420, 304 bytes, placed by class name
    // InputField::GetQuantityInput() const
    InputField* InputField::GetQuantityInput() {
        char cVar1;
        int* piVar2;
        char* pcVar3;
        long lVar4;
        long lVar5;
        InputField* in_RSI;
        undefined8 local_38;
        int local_30;
        int local_2c;

        if ((in_RSI->field_532 & 4294967294) == 2) {
            cVar1 = in_RSI->field_776->IsEmpty();
            if (cVar1 == '\0') {
                piVar2 = ___error();
                *piVar2 = 0;
                GetContents(in_RSI);
                pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                lVar4 = _strtol(pcVar3, (char**)&local_38, 10);
                local_2c = (int)lVar4;
                piVar2 = ___error();
                if ((*piVar2 == 34) || (lVar4 != local_2c))
                    goto LAB_10069b533;
                if (in_RSI->field_532 == 3) {
                    lVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    lVar5 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    if ((char*)(lVar5 + lVar4) != (char*)CONCAT44(local_38._4_4_, (int)local_38)) {
                        cVar1 = *(char*)CONCAT44(local_38._4_4_, (int)local_38);
                        if (cVar1 == 'M') {
                            if (2147483647 < (long)local_2c * 1000000)
                                goto LAB_10069b533;
                            local_30 = local_2c * 1000000;
                        } else {
                            if (cVar1 != 'K')
                                goto LAB_10069b502;
                            if (2147483647 < (long)local_2c * 1000)
                                goto LAB_10069b533;
                            local_30 = local_2c * 1000;
                        }
                        piVar2 = &local_30;
                        goto LAB_10069b506;
                    }
                }
            LAB_10069b502:
                piVar2 = &local_2c;
            } else {
                local_38._0_4_ = 0;
                piVar2 = (int*)&local_38;
            }
        LAB_10069b506:
            new (this) eastl::optional<int>(piVar2);
        } else {
        LAB_10069b533:
            new (this) eastl::optional<game::option::EnumOptionToggle>();
        }
        return this;
    }

    // 0x10069b550, 256 bytes, placed by class name
    // InputField::NotifyFocusGain()
    ulong InputField::NotifyFocusGain() {
        FontManager* this_00;
        bool bVar2;
        int iVar3;
        long lVar4;
        shared_ptr* this_01;
        ulong uVar5;
        undefined8 unaff_R14;
        ulong uVar6;
        shared_ptr local_40;

        uVar6 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
        if (field_882 == '\0') {
            if (IsEnabled() != '\0') {
                lVar4 = (**(code**)(*(long*)field_928 + 64))();
                this_00 = *(FontManager**)(lVar4 + 8);
                iVar3 = field_464->GetEndPosition();
                new (&local_40) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                this_01 = (shared_ptr*)this_00->GetFont(iVar3, &local_40);
                bVar2 = shared_ptr::operator_cast_to_bool(this_01);
                local_40.~shared_ptr();
                if (bVar2) {
                    field_882 = 1;
                    field_912 = 0.0;
                    field_904 = 4294967295;
                    field_908 = 0;
                    uVar5 = field_776->GetCodepointCount();
                    field_552 = uVar5;
                    field_896 = uVar5;
                    EnsureCaretVisible(this);
                    goto LAB_10069b61f;
                }
            }
            uVar6 = 0;
        }
    LAB_10069b61f:
        return uVar6 & 4294967295;
    }

    // 0x10069b670, 64 bytes, placed by class name
    // InputField::GetSoftKeyboardType() const
    undefined1 InputField::GetSoftKeyboardType() {
        undefined1 uVar1;
        byte bVar2;

        uVar1 = 2;
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

    // 0x10069b6d0, 96 bytes, placed by class name
    // InputField::CancelFocus()
    void InputField::CancelFocus() {
        if (field_882 != '\0') {
            field_882 = 0;
            (**(code**)(*(long*)field_928 + 48))();
            field_552 = 0;
            field_896 = 0;
            ValidateQuantityInput(this);
            field_904 = 4;
        }
    }

    // 0x1006ad410: the linker folded this into ComboField::IsAssociatedComponent(shared_ptr<Component> const&) const, which has identical code
    InputField::IsAssociatedComponent(shared_ptr<Component> const&) const;

    // 0x1006d35c0, 32 bytes, placed by class name
    // InputField::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool)::$_50::operator()(ScrollBar const&, int) const
    /* InputField::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool,
   bool)::$_50::TEMPNAMEPLACEHOLDERVALUE(ScrollBar const&, int) const */

    void InputField::MainLogic(ComponentDependencies_const&, int, int, bool, bool, bool,
                               bool)::$_50::operator()(ScrollBar* param_1, int param_2) {
        ApplyScroll(*(InputField**)param_1, param_2 - (*(InputField**)param_1)->field_916);
    }

    // 0x1006d36a0, 32 bytes, placed by class name
    // InputField::AddCharacter(unsigned int, bool)::$_51::operator()(unsigned int) const
    /* InputField::AddCharacter(unsigned int, bool)::$_51::TEMPNAMEPLACEHOLDERVALUE(unsigned
   int) const */

    undefined8 InputField::AddCharacter(unsigned int, bool)::$_51::operator()(uint param_1) {
        if (*(char*)this == '\0') {
            return IsCodepointAllowed(*(undefined4*)(field_8 + 532));
        }
        return 1;
    }

    // 0x1006d3750, 32 bytes, placed by class name
    // InputField::AddContents(char const*, char const*, bool, bool)::$_52::operator()(unsigned int) const
    /* InputField::AddContents(char const*, char const*, bool,
   bool)::$_52::TEMPNAMEPLACEHOLDERVALUE(unsigned int) const */

    void InputField::AddContents(char const*, char const*, bool, bool)::$_52::operator()(uint param_1) {
        IsCodepointAllowed(*(undefined4*)(field_0 + 532));
    }

} // namespace jag::ui
