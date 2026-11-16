// libs/ui/console/ConsoleUI.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "ConsoleUI.h"
#include "libs/tweaky/TweakyEditLine.h"

namespace jag::ui {
    // 0x100682df0
    ConsoleUI::ConsoleUI(console::Console* console, graphics::RT7Core* rt7Core, graphics::FontHelpers* fontHelpers,
                         input::Input* input, const shared_ptr<tweak::Tweaky>& tweaky)
        : console::Console::HistoryListener(), field_8(console), field_16(rt7Core), field_24(fontHelpers) {
        ConsoleUI* local_38;

        new (field_32) shared_ptr();
        field_48 = input;
        uint8_t* this_00 = &field_56;
        new (this_00) input::InputHandler();
        new (&field_2376) eastl::fixed_string<char, 40>();
        new (&field_2456)
            eastl::ring_buffer<ConsoleUI::LineDisplayInfo, eastl::vector<ConsoleUI::LineDisplayInfo>>(1024);
        field_2512 = 0;
        field_2516 = 196;
        m_consoleHeight = 0;
        field_2524 = 0;
        field_2528 = 0;
        field_2532 = 0;
        field_2536 = 0;
        new (&field_2540) std::optional();
        field_2548 = 0.0;
        new (field_2552) ConsoleEditLine();
        new (field_2888) oldscape::dash3d::GridRect(0, 0, 0, 0);
        *(uint32_t*)(field_2888 + 16) = 257;
        new (field_2912) shared_ptr(tweaky);
        new (field_2928) shared_ptr();
        new (field_2944) shared_ptr();
        uint8_t* this_01 = &field_2960;
        new (this_01) std::function<bool(int)>();
        uint8_t* this_02 = &field_3008;
        new (this_02) std::function<bool(int)>();
        uint8_t* this_03 = &field_3056;
        new (this_03) std::function<bool(int)>();
        uint8_t* this_04 = &field_3104;
        new (this_04) std::function<bool(float, float, float, float)>();
        uint8_t* this_05 = &field_3152;
        new (this_05) std::function<bool(float, float)>();
        uint8_t* this_06 = &field_3200;
        new (this_06) std::function<bool(float, float)>();
        uint8_t* this_07 = &field_3248;
        new (this_07) std::function<bool(float, float)>();
        uint8_t* this_08 = &field_3296;
        new (this_08) std::function<bool(float, float)>();
        uint8_t* this_09 = &field_3344;
        new (this_09) std::function<bool(unsigned long, float, float)>();
        uint8_t* this_10 = &field_3392;
        new (this_10) std::function<bool(unsigned long, float, float)>();
        uint8_t* this_11 = &field_3440;
        new (this_11) std::function<bool(unsigned long, float, float)>();
        uint8_t* this_12 = field_3488;
        new (this_12) input::gesture::GestureSwipe();
        uint8_t* this_13 = &field_3712;
        new (this_13) std::function<bool(input::gesture::GestureEvent_Swipe const&)>();
        new (&field_3760) std::function<void(eastl::fixed_string<char, 256>&, eastl::fixed_string<char, 256> const&)>();
        new (&field_3808) shared_ptr();
        new (&field_3824) shared_ptr();
        new (&field_3840) eastl::hash_map(local_38);
        field_3896.unique_ptr<true, void>();
        field_3904 = 0;
        new (&field_3920) std::function<bool(float, float, float, graphics::ScaleManager const&)>();
        new (&field_3968) std::optional<eastl::string>();
        field_4008 = 0;
        int iVar1 = field_16->GetInterfaceHeight();
        m_consoleHeight = (int)((float)iVar1 * 0.3);
        local_38 = this;
        ((function<void(eastl::fixed_string<char, 256>&, eastl::fixed_string<char, 256> const&)>*)&field_3760)
            ->operator=(&local_38);
        local_38 = this;
        ((function<bool(int)>*)this_01)->operator=(&local_38);
        local_38 = this;
        ((function<bool(int)>*)this_02)->operator=(&local_38);
        local_38 = this;
        ((function<bool(int)>*)this_03)->operator=(&local_38);
        this_00->RegisterKeyDown(this_01);
        this_00->RegisterKeyUp(this_02);
        this_00->RegisterKeyChar(this_03);
        local_38 = this;
        ((function<bool(float, float, float, float)>*)this_04)->operator=(&local_38);
        local_38 = this;
        ((function<bool(float, float)>*)this_05)->operator=(&local_38);
        local_38 = this;
        ((function<bool(float, float)>*)this_06)->operator=(&local_38);
        local_38 = this;
        ((function<bool(float, float)>*)this_07)->operator=(&local_38);
        local_38 = this;
        ((function<bool(float, float)>*)this_08)->operator=(&local_38);
        this_00->RegisterMouseWheel(this_04);
        this_00->RegisterLMouseDown(this_05);
        this_00->RegisterLMouseUp(this_06);
        this_00->RegisterMouseMove(this_07);
        this_00->RegisterMouseMove(this_08);
        local_38 = this;
        *this_09 = local_38;
        local_38 = this;
        *this_10 = local_38;
        local_38 = this;
        *this_11 = local_38;
        local_38 = this;
        ((function<bool(input::gesture::GestureEvent_Swipe const&)>*)this_13)->operator=(&local_38);
        this_00->RegisterTouchDown(this_09);
        this_00->RegisterTouchUp(this_10);
        this_00->RegisterTouchMove(this_11);
        this_00->AddGesture(this_12);
        this_12->AddHandler(this_13);
        field_48->RegisterInputHandler("2console", this_00);
        field_8->AttachHistoryListener(this);
    }

    // 0x100683a70
    ConsoleUI::~ConsoleUI() {
        field_56.Reset();
        field_48->UnregisterInputHandler("2console");
        field_8->DetachHistoryListener(this);
        field_3920.~function();
        field_3896.~unique_ptr();
        field_3840.~hash_map();
        field_3824.~weak_ptr();
        field_3808.~weak_ptr();
        field_3760.~function();
        field_3712.~function();
        field_3488->~GestureSwipe();
        field_3440.~function();
        field_3392.~function();
        field_3344.~function();
        field_3296.~function();
        field_3248.~function();
        field_3200.~function();
        field_3152.~function();
        field_3104.~function();
        field_3056.~function();
        field_3008.~function();
        field_2960.~function();
        field_2944->~shared_ptr();
        field_2928->~shared_ptr();
        field_2912->~shared_ptr();
        field_2552->~EditLine();
        field_2456.~ring_buffer();
        field_2376.~fixed_string();
    }

    // 0x100683da0
    bool ConsoleUI::CheckToggleConsole(int arg1) {
        if (arg1 == 7331) {
            ToggleConsole();
        }
        return arg1 == 7331;
    }

    // 0x100683dd0
    void ConsoleUI::ToggleConsole() {
        Input* this_00;
        bool cVar2;
        ReturnValue local_38;

        uint8_t bVar1 = field_2512;
        field_2512 = bVar1 ^ 1;
        if ((bVar1 == 0) && (cVar2 = field_32->operator_cast_to_bool(), cVar2)) {
            field_2888[16] = 1;
            this_00 = field_48;
            local_38 = (field_2552->GetText()).to_owned_string<eastl::basic_string<char, BucketAllocatorEASTL>>();
            this_00->ShowOnScreenKeyboard(5, &local_38, -1, false);
            return;
        }
        field_2928->reset();
        field_8->LoadCommandHistoryAndVars();
        input::Input::HideOnScreenKeyboard();
        field_3896.reset(nullptr);
        field_48->DeselectInputHandler("2console");
    }

    // 0x100683f70
    int ConsoleUI::GetMaxLineWidth() const {
        int iVar2 = field_16->GetInterfaceWidth();
        bool cVar1 = field_2912->operator_cast_to_bool();
        int iVar3 = 0;
        if (cVar1) {
            cVar1 = ((Tweaky*)(*field_2912).operator->())->IsAttached();
            if (cVar1) {
                iVar3 = field_2524;
            }
        }
        return (iVar2 - iVar3) - 20;
    }

    // 0x100683fd0
    void ConsoleUI::SetFont(const shared_ptr<graphics::Font>& font1, const shared_ptr<graphics::Font>& font2) {
        Tweaky* pTVar1;

        *field_32 = font1;
        if (field_2912->operator_cast_to_bool()) {
            pTVar1 = (Tweaky*)(*field_2912).operator->();
            pTVar1->SetFont(font2);
        }
        if (field_2944->operator_cast_to_bool()) {
            pTVar1 = (Tweaky*)(*field_2944).operator->();
            pTVar1->SetFont(font2);
        }
        RecalculateMessageHistoryLayout();
    }

    // 0x100684050
    void ConsoleUI::RecalculateMessageHistoryLayout() {
        uint8_t bVar3;
        int iVar4;
        Line* this_01;
        int iVar5;
        StringView local_78;
        ring_buffer_iterator<SwipeDelta, SwipeDelta*, SwipeDelta&, eastl::vector<SwipeDelta> _> local_68[16];
        ring_buffer_iterator<SwipeDelta, SwipeDelta*, SwipeDelta&, eastl::vector<SwipeDelta> _> local_58[16];
        LineDisplayInfo local_48;

        if (field_32->operator_cast_to_bool() == '\0') {
            LogAssert("m_font",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/console/ConsoleUI.cpp",
                      1182, nullptr);
        }
        field_2456.clear();
        TextFlags local_38;
        TextProperties local_a0(*field_32, local_38[0]);
        int local_3c = GetMaxLineWidth();
        auto this_00 = field_8->GetMaterial();
        local_58 = (ring_buffer_iterator<SwipeDelta, SwipeDelta*, SwipeDelta&, eastl::vector<SwipeDelta> _>[16])
                       this_00->begin();
        local_68 =
            (ring_buffer_iterator<SwipeDelta, SwipeDelta*, SwipeDelta&, eastl::vector<SwipeDelta> _>[16])this_00->end();
        bool bVar2 = *local_58 != *local_68;
        if (bVar2) {
            iVar5 = 0;
            do {
                this_01 = (Line*)local_58->end();
                bVar3 = this_01->SupportsTags();
                local_a0.SetFlag(1, (bool)(bVar3 ^ 1));
                local_78.StringView<eastl::fixed_string<char, 512>>(this_01->field_8);
                iVar4 = graphics::FontHelpers::PredictHeightAndLines(&local_78, local_3c, local_a0);
                local_48.field_0 = iVar4;
                local_48.field_4 = iVar5;
                field_2456.push_back(local_48);
                iVar5 = iVar5 + iVar4;
                ++*local_58;
                bVar2 = *local_58 != *local_68;
            } while (bVar2);
        }
    }

    // 0x1006841b0
    void ConsoleUI::Draw(int arg1) {
        uint8_t auVar3[16];
        uint8_t auVar4[16];
        int iVar8;
        unsigned int uVar9;
        Tweaky* pTVar10;
        LoginManager* this_05;
        long lVar11;
        long lVar12;
        int* piVar13;
        Line* pLVar14;
        unsigned long uVar15;
        basic_string<char, BucketAllocatorEASTL>* str;
        unsigned long uVar16;
        int iVar17;
        int iVar18;
        unsigned int uVar19;
        int iVar20;
        ReturnValue local_700;
        ReturnValue local_6f0;
        StringView local_6e0;
        StringView local_6b0;
        StringView local_698;
        StringView local_688;
        ReturnValue local_678;
        ring_buffer_iterator<EntityWaypoint, EntityWaypoint*, EntityWaypoint&, eastl::vector<EntityWaypoint>>
            local_668[16];
        optional<int> local_658;
        StringView local_650;
        uint8_t local_610[16];
        char* local_600[2];
        unsigned int local_5d8;
        int local_5d4;

        auVar4._8_8_ = local_5a0[0]._8_8_;
        auVar4._0_8_ = local_5a0[0]._0_8_;
        if (field_2512 == 0)
            goto LAB_100684cea;
        uint8_t* puVar1 = field_32;
        bool cVar6 = puVar1->operator_cast_to_bool();
        auVar4._8_4_ = local_5a0[0].field_8;
        auVar4._12_4_ = local_5a0[0].field_12;
        auVar4._0_4_ = local_5a0[0].field_0;
        auVar4._4_4_ = local_5a0[0].field_4;
        if (!cVar6)
            goto LAB_100684cea;
        auto local_5f0 = field_16->GetGUIManager();
        Layout* this_02 = (Layout*)(*puVar1).operator->();
        auto local_618 = this_02->SSOBeginPtr();
        auto this_03 = this_02->InstancePtr();
        unsigned long local_5d0 = (unsigned long)(unsigned int)arg1;
        if (this_03 == nullptr) {
            local_5d4 = 0;
        } else {
            iVar8 = this_03->GetMainMenuHeight();
            local_640.m_pFont._0_4_ = (float)iVar8;
            local_5a0[0]._0_8_ = local_5a0[0]._0_8_ & 18446744069414584320;
            field_16->GetScaleManager()->ScreenToInterfacePosition(local_5a0, local_640, false);
            local_5d4 = (int)local_640.m_pFont._0_4_;
        }
        int local_5a4 = field_16->GetInterfaceWidth();
        uint64_t local_5b8 = GetConsoleHeight();
        uint64_t local_5c0 = GetLinesAreaHeight();
        iVar8 = field_2536;
        shared_ptr* local_5c8 = (shared_ptr*)field_2912;
        cVar6 = shared_ptr::operator_cast_to_bool(local_5c8);
        if (!cVar6) {
        LAB_10068431f:
            iVar20 = local_5a4;
            if (local_5a4 != iVar8)
                goto LAB_10068433a;
        } else {
            if (field_2524 == 0) {
                pTVar10 = (Tweaky*)(*local_5c8).operator->();
                pTVar10->GetSize(field_2524, field_2528);
            }
            pTVar10 = (Tweaky*)(*local_5c8).operator->();
            cVar6 = pTVar10->IsAttached();
            if (field_2888[17] == cVar6)
                goto LAB_10068431f;
            field_2888[17] = cVar6;
        LAB_10068433a:
            iVar20 = local_5a4;
            RecalculateMessageHistoryLayout();
            field_2536 = iVar20;
        }
        GUIManager* pGVar5 = local_5f0;
        local_5f0->ResetProjectionOverride();
        ClippingState local_6d0(field_16);
        iVar8 = (int)local_5b8 + 1;
        field_16->SetClippingRectangle(0, 0, iVar20, iVar8, true);
        pGVar5->AddElement(0, 0, local_5a4, (int)local_5b8, field_2516 | 857896704, 0.0, 0.0, 0.0, 0.0, nullptr, 1);
        pGVar5->AddElement(0, (int)local_5c0, local_5a4, (int)local_5c0 + 1, 3149642751, 0.0, 0.0, 0.0, 0.0, nullptr,
                           1);
        pGVar5->AddElement(0, (int)local_5b8, local_5a4, iVar8, 2576980479, 0.0, 0.0, 0.0, 0.0, nullptr, 1);
        if (field_3904 != '\0') {
            DrawSnow((int)local_5c0);
        }
        unsigned long local_5e8 = GetMaxLineWidth();
        local_5a0[0].field_0 = 2;
        TextFlags local_5a8(&local_5a0);
        TextProperties local_640(*puVar1, local_5a8[0]);
        local_640.SetAlignment(2);
        local_5a0[0].field_0 = 255;
        new ((local_6d0.field_8 + 16)) eastl::optional(local_5a0);
        local_640.SetColours(4294967295, (local_6d0.field_8 + 16));
        FontHelpers* pFVar2 = field_24;
        local_6b0.StringView<eastl::fixed_string<char, 40>>(field_2376);
        iVar20 = (int)local_5c0 + 3;
        pFVar2->DrawString(&local_6b0, local_5a4 - 2, iVar20, 0, local_640);
        local_640.SetAlignment(0, 2);
        local_5a0[0].field_0 = 255;
        optional<int> local_6a0(local_5a0);
        local_640.SetColours(2155905279, &local_6a0);
        local_600[0] = "->";
        pFVar2 = field_24;
        local_698.StringView<char const*>(*local_600);
        int local_5dc = (int)local_5d0 + 4;
        pFVar2->DrawString(&local_698, local_5dc, iVar20, 0, local_640);
        local_688.StringView<char const*>(*local_600);
        FontMetrics* fontMetrics = (FontMetrics*)**local_618;
        iVar8 = graphics::FontHelpers::GetStringWidth(&local_688, *fontMetrics, true);
        shared_ptr* this_01 = local_5c8;
        cVar6 = shared_ptr::operator_cast_to_bool(local_5c8);
        uint8_t bVar7 = true;
        if (cVar6) {
            pTVar10 = (Tweaky*)(*this_01).operator->();
            bVar7 = pTVar10->HasInputFocus();
            bVar7 = bVar7 ^ 1;
        }
        ConsoleUI* pCVar21 = this;
        iVar8 = (int)local_5d0 + 8 + iVar8;
        uint8_t* this_00 = field_2552;
        this_00->SetCursorShown((bool)bVar7);
        this_00->Draw(iVar8, iVar20, local_5a4, (int)local_5b8 - 1, *puVar1, pCVar21->field_16, pCVar21->field_24,
                      pCVar21->field_4008, &pCVar21->field_3760);
        GridRect local_5a0(iVar8, (int)local_5c0, local_5a4, (int)local_5b8 - (int)local_5c0);
        pCVar21 = this;
        *field_2888 = local_5a0;
        puVar1 = &pCVar21->field_2456;
        cVar6 = puVar1->empty();
        auVar3._8_4_ = local_5a0[0].field_8;
        auVar3._12_4_ = local_5a0[0].field_12;
        auVar3._0_4_ = local_5a0[0].field_0;
        auVar3._4_4_ = local_5a0[0].field_4;
        if (!cVar6) {
            iVar20 = GetTotalHistoryHeight(pCVar21);
            iVar8 = (int)local_5c0;
            iVar17 = iVar20 - iVar8;
            if (iVar17 != 0 && iVar8 <= iVar20) {
                iVar20 = eastl::max<int>(1, iVar20 - 1);
                iVar20 = eastl::max<int>(1, (iVar8 * iVar8) / iVar20);
                pCVar21 = this;
                local_600[0] = (char*)((unsigned long)local_600[0] & 18446744069414584320);
                local_610._0_4_ = iVar8 - iVar20;
                local_5a0[0].field_0 = ((iVar17 - field_2532) * (iVar8 - iVar20)) / iVar17;
                local_5a0[0].field_0 = math::Clamp<int>(local_5a0[0].field_0, *local_600, *local_610);
                pGVar5 = local_5f0;
                uVar9 = 673730560;
                if (pCVar21->field_2532 == 0) {
                    uVar9 = 538984448;
                }
                iVar18 = (int)local_5e8 + 4;
                iVar17 = (int)local_5e8 + 20;
                local_5b8 = (((uint64_t)local_5b8._4_4_ << 32) | (uint32_t)iVar18);
                local_5c8 = (shared_ptr*)(((uint64_t)local_5c8._4_4_ << 32) | (uint32_t)iVar17);
                local_5f0->AddElement(iVar18, 0, iVar17, iVar8, uVar9 | pCVar21->field_2516, 0.0, 0.0, 0.0, 0.0,
                                      nullptr, 1);
                uVar9 = 2155921408;
                if (pCVar21->field_2532 == 0) {
                    uVar9 = 1077968896;
                }
                pGVar5->AddElement((int)local_5b8, local_5a0[0].field_0, (int)local_5c8, iVar20 + local_5a0[0].field_0,
                                   uVar9 | pCVar21->field_2516, 0.0, 0.0, 0.0, 0.0, nullptr, 1);
                iVar8 = (int)local_5c0;
            }
            field_16->SetClippingRectangle(0, 0, (int)local_5e8, iVar8, true);
            this_05 = (LoginManager*)field_8->GetMaterial();
            lVar11 = this_05->capacity();
            lVar12 = puVar1->capacity();
            if (lVar11 != lVar12) {
                LogAssert(
                    "history.capacity() == m_lineDisplayInfo.capacity()",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/console/ConsoleUI.cpp",
                    274, nullptr);
            }
            lVar11 = this_05->GetAuthWrapper();
            lVar12 = puVar1->GetAuthWrapper();
            if (lVar11 != lVar12) {
                LogAssert(
                    "history.size() == m_lineDisplayInfo.size()",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/console/ConsoleUI.cpp",
                    275, nullptr);
            }
            piVar13 = (int*)puVar1->back();
            pCVar21 = this;
            iVar8 = *piVar13;
            lVar11 = puVar1->back();
            iVar20 = *(int*)(lVar11 + 4);
            iVar17 = pCVar21->field_2532;
            local_700 = puVar1->end();
            local_6f0 = puVar1->end();
            eastl::find_if<
                eastl::ring_buffer_iterator<ConsoleUI::LineDisplayInfo, ConsoleUI::LineDisplayInfo*,
                                            ConsoleUI::LineDisplayInfo&, eastl::vector<ConsoleUI::LineDisplayInfo>>,
                int->Draw()::__13>(
                (ring_buffer_iterator<ConsoleUI::LineDisplayInfo, ConsoleUI::LineDisplayInfo*,
                                      ConsoleUI::LineDisplayInfo&, eastl::vector<ConsoleUI::LineDisplayInfo> _>*)
                    local_600,
                (ring_buffer_iterator<ConsoleUI::LineDisplayInfo, ConsoleUI::LineDisplayInfo*,
                                      ConsoleUI::LineDisplayInfo&,
                                      eastl::vector<ConsoleUI::LineDisplayInfo> _>*)&local_700,
                &local_6f0);
            local_678 = puVar1->end();
            new (local_668) eastl::ring_buffer_iterator(*local_600);
            iVar18 = eastl::distance<
                eastl::ring_buffer_iterator<ConsoleUI::LineDisplayInfo, ConsoleUI::LineDisplayInfo*,
                                            ConsoleUI::LineDisplayInfo&, eastl::vector<ConsoleUI::LineDisplayInfo>>>(
                &local_678, local_668);
            local_5a0[0].field_0 = iVar18;
            iVar18 = puVar1->GetAuthWrapper();
            local_610._0_4_ = iVar18 - 1;
            piVar13 = std::min<int>(local_5a0[0].field_0, *local_610);
            iVar18 = *piVar13;
            local_5a0[0]._0_16_ = this_05->begin();
            local_610 = local_5a0 + ((long)iVar18);
            local_5c8 = (shared_ptr*)(((uint64_t)local_5c8._4_4_ << 32) | (uint32_t)iVar18);
            pCVar21 = this;
            auVar3 = (uint8_t[16])local_5a0[0]._0_16_;
            if (-1 < iVar18) {
                local_618 =
                    (shared_ptr<graphics::FontMetrics>*)(((uint64_t)local_618._4_4_ << 32) |
                                                         (uint32_t)((int)local_5c0 - ((iVar8 + iVar20) - iVar17)));
                local_5d8 = ((int)local_5e8 - (int)local_5d0) - 4;
                do {
                    local_5a0[0]._0_16_ = auVar3;
                    lVar11 = local_600->end();
                    iVar8 = *(int*)(lVar11 + 4) + (int)local_618;
                    piVar13 = (int*)local_600->end();
                    local_5b8 = (((uint64_t)local_5b8._4_4_ << 32) | (uint32_t)iVar8);
                    iVar8 = *piVar13 + iVar8;
                    auVar3 = (uint8_t[16])local_5a0[0]._0_16_;
                    if (-1 < iVar8) {
                        local_5f0 = (GUIManager*)(((uint64_t)local_5f0._4_4_ << 32) | (uint32_t)iVar8);
                        pLVar14 = (Line*)local_610->end();
                        uVar9 = pLVar14->GetColour();
                        local_5a0[0].field_0 = 255;
                        local_658 = eastl::optional(local_5a0);
                        local_640.SetColours(uVar9, &local_658);
                        pLVar14 = (Line*)local_610->end();
                        bVar7 = pLVar14->SupportsTags();
                        local_640.SetFlag(1, (bool)(bVar7 ^ 1));
                        lVar11 = local_610->end();
                        lVar11 = ((lVar11 + 8))->find_first_of('\b', 0);
                        if (lVar11 == -1) {
                            pFVar2 = field_24;
                            lVar11 = local_610->end();
                            local_650.StringView<eastl::fixed_string<char, 512>>(*((lVar11 + 8)));
                            piVar13 = (int*)local_600->end();
                            pFVar2->DrawStringMultiline(&local_650, local_5dc, (int)local_5b8, local_5d8, *piVar13,
                                                        nullptr, local_640);
                        } else {
                            lVar11 = local_610->end();
                            uVar15 = ((lVar11 + 8))->size();
                            if (1 < uVar15) {
                                local_5a0 = eastl::fixed_vector<eastl::fixed_string<char, 128>, 8ul>();
                                lVar11 = local_610->end();
                                tokenize<eastl::fixed_vector<eastl::fixed_string<char, 128>, 8ul>,
                                         eastl::fixed_string<char, 512>>(
                                    &local_5a0, (fixed_string<char, _512>*)(lVar11 + 8), "\b", -1);
                                iVar8 = local_5a0.size();
                                local_5d0 =
                                    (((uint64_t)local_5d0._4_4_ << 32) |
                                     (uint32_t)((int)((long)((unsigned long)(unsigned int)((int)local_5e8 >> 31) << 32 |
                                                             local_5e8 & 4294967295) /
                                                      (long)iVar8)));
                                lVar11 = local_5a0.size();
                                if (lVar11 != 0) {
                                    uVar19 = 1;
                                    uVar15 = 0;
                                    uVar9 = local_5d8;
                                    iVar8 = local_5dc;
                                    do {
                                        str = &local_5a0[uVar15];
                                        pFVar2 = field_24;
                                        local_6e0.StringView<eastl::fixed_string<char, 40>>(*str);
                                        pFVar2->DrawString(&local_6e0, iVar8, (int)local_5b8, uVar9, local_640);
                                        uVar15 = (unsigned long)uVar19;
                                        uVar16 = local_5a0.size();
                                        iVar8 = iVar8 + (int)local_5d0;
                                        uVar9 = uVar9 - (int)local_5d0;
                                        uVar19 = uVar19 + 1;
                                    } while (uVar15 < uVar16);
                                }
                            }
                        }
                        local_5c8 = (shared_ptr*)(((uint64_t)local_5c8._4_4_ << 32) | (uint32_t)((int)local_5c8 - 1));
                        --*local_600;
                        --*local_610;
                        auVar3._8_4_ = local_5a0[0].field_8;
                        auVar3._12_4_ = local_5a0[0].field_12;
                        auVar3._0_4_ = local_5a0[0].field_0;
                        auVar3._4_4_ = local_5a0[0].field_4;
                        pCVar21 = this;
                        iVar8 = (int)local_5f0;
                    }
                } while ((-1 < iVar8) && (-1 < (int)local_5c8));
            }
        }
        local_5a0[0]._0_16_ = auVar3;
        DrawTweaky(pCVar21, local_5a4, (int)local_5c0 - local_5d4, local_5d4);
        auVar4 = (uint8_t[16])local_5a0[0]._0_16_;
    LAB_100684cea:
    }

    // 0x100684dd0
    void ConsoleUI::DrawSnow(int arg1) {
        ReturnValue local_30;

        uint8_t* this_00 = &field_3896;
        if (this_00->operator_cast_to_bool() == '\0') {
            local_30 = std::make_unique<ConsoleSnow, graphics::RT7Core&>(*field_16);
            *this_00 = local_30;
        }
        ConsoleSnow* this_01 = (ConsoleSnow*)(*this_00).operator->();
        int arg3 = field_16->GetInterfaceWidth();
        this_01->MainDraw(0, 0, arg3, arg1);
    }

    // 0x100685250
    void ConsoleUI::DrawTweaky(int arg1, int arg2, int arg3) {
        int iVar3;
        int iVar4;
        Tweaky* pTVar5;
        int* piVar6;
        int local_3c;
        int local_38;
        int local_34;

        uint8_t* puVar1 = field_2912;
        bool cVar2 = puVar1->operator_cast_to_bool();
        if (!cVar2) {
            local_38 = 0;
        } else {
            local_38 = 0;
            pTVar5 = (Tweaky*)(*puVar1).operator->();
            cVar2 = pTVar5->IsAttached();
            if (cVar2) {
                cVar2 = ((SystemSettings*)(*puVar1).operator->())->GetSoftwareNameAsSettingPath();
                pTVar5 = (Tweaky*)(*puVar1).operator->();
                if (!cVar2) {
                    iVar3 = field_16->GetInterfaceHeight();
                    pTVar5->SetVisibleArea(600, iVar3);
                } else {
                    pTVar5->SetVisibleArea(600, arg2 - 1);
                    pTVar5 = (Tweaky*)(*puVar1).operator->();
                    pTVar5->Draw(arg1 - field_2524, arg3, field_2524, field_2528);
                }
                pTVar5 = (Tweaky*)(*puVar1).operator->();
                pTVar5->Draw(arg1 - field_2524, 0, field_2524, field_2528);
                local_38 = field_2524;
            }
        }
        puVar1 = field_2928;
        cVar2 = puVar1->operator_cast_to_bool();
        if (cVar2) {
            pTVar5 = (Tweaky*)(*puVar1).operator->();
            pTVar5->SetVisibleArea(-1, arg2 - 1);
            pTVar5 = (Tweaky*)(*puVar1).operator->();
            cVar2 = pTVar5->GetSize(local_34, local_3c);
            if (cVar2) {
                pTVar5 = (Tweaky*)(*puVar1).operator->();
                piVar6 = (int*)field_2888->SSOBeginPtr();
                pTVar5->Draw(*piVar6, arg2 - local_3c, local_34, local_3c);
            }
        }
        puVar1 = field_2944;
        cVar2 = puVar1->operator_cast_to_bool();
        if (cVar2) {
            pTVar5 = (Tweaky*)(*puVar1).operator->();
            cVar2 = pTVar5->GetSize(local_34, local_3c);
            if (cVar2) {
                iVar3 = field_16->GetInterfaceWidth();
                iVar4 = local_38 + local_34;
                pTVar5 = (Tweaky*)(*puVar1).operator->();
                pTVar5->Draw(iVar3 - iVar4, 0, local_34, local_3c);
            }
        }
    }

    // 0x100685450
    uint64_t ConsoleUI::HandleMouseDown(float arg1, float arg2, const graphics::ScaleManager& scaleManager) {
        int iVar2;
        int iVar3;
        int arg4;
        int iVar4;
        Tweaky* pTVar5;
        int* piVar6;
        StringView local_88;
        TextProperties local_78;
        uint32_t local_4c;
        float local_48;
        int local_44;
        TextFlags local_38;

        scaleManager.ScreenToInterfacePosition(arg1, arg2, false);
        uint8_t* puVar7 = field_2912;
        bool cVar1 = puVar7->operator_cast_to_bool();
        if (cVar1) {
            if (field_2512 == 0) {
                pTVar5 = (Tweaky*)(*puVar7).operator->();
                cVar1 = pTVar5->IsAttached();
                if (cVar1)
                    goto LAB_1006854da;
            }
            pTVar5 = (Tweaky*)(*puVar7).operator->();
            cVar1 = pTVar5->HandleMouseDown(arg1, arg2);
            if (cVar1) {
                return 1;
            }
        }
    LAB_1006854da:
        if (field_2512 != 0) {
            cVar1 = field_2928->operator_cast_to_bool();
            if (cVar1) {
                pTVar5 = (Tweaky*)(*field_2928).operator->();
                cVar1 = pTVar5->HandleMouseDown(arg1, arg2);
                if (cVar1) {
                    return 1;
                }
            }
            cVar1 = field_2944->operator_cast_to_bool();
            if (cVar1) {
                pTVar5 = (Tweaky*)(*field_2944).operator->();
                cVar1 = pTVar5->HandleMouseDown(arg1, arg2);
                if (cVar1) {
                    return 1;
                }
            }
            iVar2 = math::RoundFloatToInt(arg1);
            local_44 = math::RoundFloatToInt(arg2);
            cVar1 = field_2888->IsInside(iVar2, local_44);
            iVar4 = local_44;
            if (cVar1) {
                local_4c = 1;
                local_38 = graphics::TextFlags(&local_4c);
                local_78 = graphics::TextProperties(*field_32, local_38[0]);
                piVar6 = (int*)field_2888->SSOBeginPtr();
                puVar7 = field_2552;
                iVar4 = *piVar6;
                iVar3 = puVar7->GetX();
                local_88 = puVar7->GetText();
                arg4 = local_78.GetLineSpacing();
                iVar4 = graphics::FontHelpers::PredictCharAtPosMultiline(&local_88, nullptr, (iVar2 - iVar4) + iVar3,
                                                                         arg4, local_78);
                puVar7->SetPos(iVar4);
                return 1;
            }
            iVar2 = GetConsoleHeight();
            if (iVar4 < iVar2) {
                local_78.optional<int&, 0>(local_44);
                field_2544 = local_78.m_pFont._4_1_;
                field_2540 = (int)local_78.m_pFont;
                local_48 = (float)field_2532;
                iVar2 = GetTotalHistoryHeight();
                iVar3 = GetLinesAreaHeight();
                iVar4 = local_44;
                field_2548 = local_48 / (float)(iVar2 - iVar3);
                if ((field_2888[19] == '\0') && (iVar2 = GetConsoleHeight(), iVar4 < iVar2)) {
                    return 1;
                }
            }
        }
        return 0;
    }

    // 0x1006856e0
    uint64_t ConsoleUI::HandleMouseUp(float arg1, float arg2, const graphics::ScaleManager& scaleManager) {
        int iVar2;
        Tweaky* pTVar3;

        scaleManager.ScreenToInterfacePosition(arg1, arg2, false);
        field_2540.reset();
        uint8_t* this_00 = field_2912;
        bool cVar1 = this_00->operator_cast_to_bool();
        if (cVar1) {
            if (field_2512 == 0) {
                pTVar3 = (Tweaky*)(*this_00).operator->();
                cVar1 = pTVar3->IsAttached();
                if (cVar1)
                    goto LAB_100685770;
            }
            pTVar3 = (Tweaky*)(*this_00).operator->();
            cVar1 = pTVar3->HandleMouseUp(arg1, arg2);
            if (cVar1) {
                return 1;
            }
        }
    LAB_100685770:
        if (field_2512 != 0) {
            cVar1 = field_2928->operator_cast_to_bool();
            if (cVar1) {
                pTVar3 = (Tweaky*)(*field_2928).operator->();
                cVar1 = pTVar3->HandleMouseUp(arg1, arg2);
                if (cVar1) {
                    return 1;
                }
            }
            cVar1 = field_2944->operator_cast_to_bool();
            if (cVar1) {
                pTVar3 = (Tweaky*)(*field_2944).operator->();
                cVar1 = pTVar3->HandleMouseUp(arg1, arg2);
                if (cVar1) {
                    return 1;
                }
            }
            if (field_2888[19] == '\0') {
                iVar2 = GetConsoleHeight();
                if ((int)arg2 < iVar2) {
                    return 1;
                }
            }
        }
        return 0;
    }

    // 0x100685830
    uint64_t ConsoleUI::HandleMouseMove(float arg1, float arg2, const graphics::ScaleManager& scaleManager) {
        int* this_01;
        float fVar1;
        int iVar3;
        Tweaky* pTVar4;
        int* piVar5;
        int local_38;
        uint8_t local_34;
        int local_2c;

        scaleManager.ScreenToInterfacePosition(arg1, arg2, false);
        uint8_t* this_00 = field_2912;
        bool cVar2 = this_00->operator_cast_to_bool();
        if (cVar2) {
            if (field_2512 == 0) {
                pTVar4 = (Tweaky*)(*this_00).operator->();
                cVar2 = pTVar4->IsAttached();
                if (cVar2)
                    goto LAB_1006858b6;
            }
            pTVar4 = (Tweaky*)(*this_00).operator->();
            cVar2 = pTVar4->HandleMouseMove(arg1, arg2);
            if (cVar2) {
                return 1;
            }
        }
    LAB_1006858b6:
        if (field_2512 != 0) {
            cVar2 = field_2928->operator_cast_to_bool();
            if (cVar2) {
                pTVar4 = (Tweaky*)(*field_2928).operator->();
                cVar2 = pTVar4->HandleMouseMove(arg1, arg2);
                if (cVar2) {
                    return 1;
                }
            }
            cVar2 = field_2944->operator_cast_to_bool();
            if (cVar2) {
                pTVar4 = (Tweaky*)(*field_2944).operator->();
                cVar2 = pTVar4->HandleMouseMove(arg1, arg2);
                if (cVar2) {
                    return 1;
                }
            }
            this_01 = &field_2540;
            cVar2 = this_01->operator_cast_to_bool();
            if (cVar2) {
                piVar5 = (int*)this_01->value();
                iVar3 = *piVar5;
                local_2c = (int)arg2;
                local_38.optional<int, 0>(local_2c);
                field_2544 = local_34;
                *this_01 = local_38;
                m_consoleHeight = m_consoleHeight + ((int)arg2 - iVar3);
                local_38 = GetCommandLineHeight();
                local_38 = local_38 * 2;
                local_2c = field_16->GetInterfaceHeight();
                iVar3 = math::Clamp<int>(m_consoleHeight, local_38, local_2c);
                m_consoleHeight = iVar3;
                fVar1 = field_2548;
                iVar3 = GetMaxHistoryScrollOffset();
                field_2532 = (int)((float)iVar3 * fVar1);
                return 1;
            }
        }
        return 0;
    }

    // 0x100685ab0
    uint64_t ConsoleUI::HandleMouseOver(float arg1, float arg2, const graphics::ScaleManager& scaleManager) {
        Tweaky* pTVar2;

        scaleManager.ScreenToInterfacePosition(arg1, arg2, false);
        uint8_t* this_00 = field_2912;
        bool cVar1 = this_00->operator_cast_to_bool();
        if (cVar1) {
            if (field_2512 == 0) {
                pTVar2 = (Tweaky*)(*this_00).operator->();
                cVar1 = pTVar2->IsAttached();
                if (cVar1)
                    goto LAB_100685b30;
            }
            pTVar2 = (Tweaky*)(*this_00).operator->();
            cVar1 = pTVar2->HandleMouseOver(arg1, arg2);
            if (cVar1) {
                return 1;
            }
        }
    LAB_100685b30:
        if (field_2512 != 0) {
            cVar1 = field_2928->operator_cast_to_bool();
            if (cVar1) {
                pTVar2 = (Tweaky*)(*field_2928).operator->();
                cVar1 = pTVar2->HandleMouseOver(arg1, arg2);
                if (cVar1) {
                    return 1;
                }
            }
            cVar1 = field_2944->operator_cast_to_bool();
            if (cVar1) {
                pTVar2 = (Tweaky*)(*field_2944).operator->();
                cVar1 = pTVar2->HandleMouseOver(arg1, arg2);
                if (cVar1) {
                    return 1;
                }
            }
        }
        return 0;
    }

    // 0x100685bb0
    uint64_t ConsoleUI::HandleTouch(unsigned long arg1, float arg2, float arg3) {
        ScaleManager* scaleManager;

        if (arg1 == 0) {
            scaleManager = field_16->GetScaleManager();
            return HandleMouseDown(arg2, arg3, *scaleManager);
        }
        return 0;
    }

    // 0x100685bf0
    uint64_t ConsoleUI::HandleTouchUp(unsigned long arg1, float arg2, float arg3) {
        ScaleManager* scaleManager;

        if (arg1 == 0) {
            scaleManager = field_16->GetScaleManager();
            return HandleMouseUp(arg2, arg3, *scaleManager);
        }
        return 0;
    }

    // 0x100685c30
    uint64_t ConsoleUI::HandleTouchMove(unsigned long arg1, float arg2, float arg3) {
        ScaleManager* scaleManager;

        if (arg1 == 0) {
            scaleManager = field_16->GetScaleManager();
            return HandleMouseMove(arg2, arg3, *scaleManager);
        }
        return 0;
    }

    // 0x100685c70
    uint64_t ConsoleUI::HandleSwipe(const input::gesture::GestureEvent_Swipe& gestureEvent_Swipe) {
        int iVar1;
        Input* this_00;
        bool cVar2;
        ReturnValue local_48;

        if (field_2512 != 0) {
            if (*(int*)&gestureEvent_Swipe[1].field_4 == 2) {
                if (*(int*)(gestureEvent_Swipe + 1) == 4) {
                    field_2888[18] = 1;
                } else if (*(int*)(gestureEvent_Swipe + 1) == 1) {
                    cVar2 = field_48->IsOnScreenKeyboardVisible();
                    this_00 = field_48;
                    if (!cVar2) {
                        local_48 =
                            (field_2552->GetText()).to_owned_string<eastl::basic_string<char, BucketAllocatorEASTL>>();
                        this_00->ShowOnScreenKeyboard(5, &local_48, -1, false);
                        iVar1 = *(int*)&gestureEvent_Swipe[1].field_4;
                    } else {
                        input::Input::HideOnScreenKeyboard();
                        iVar1 = *(int*)&gestureEvent_Swipe[1].field_4;
                    }
                    goto joined_r0x000100685ce4;
                }
            } else if (*(int*)&gestureEvent_Swipe[1].field_4 == 1) {
                if (*(int*)(gestureEvent_Swipe + 1) == 2) {
                    SetNextCommandFromHistory();
                    iVar1 = *(int*)&gestureEvent_Swipe[1].field_4;
                    goto joined_r0x000100685ce4;
                }
                if (*(int*)(gestureEvent_Swipe + 1) == 1) {
                    SetPreviousCommandFromHistory();
                    iVar1 = *(int*)&gestureEvent_Swipe[1].field_4;
                    goto joined_r0x000100685ce4;
                }
            }
        }
        iVar1 = *(int*)&gestureEvent_Swipe[1].field_4;
    joined_r0x000100685ce4:
        if ((iVar1 == 3) && (*(int*)(gestureEvent_Swipe + 1) == 1)) {
            ToggleConsole();
        }
        return 0;
    }

    // 0x100685d90
    void ConsoleUI::SetPreviousCommandFromHistory() {
        optional<eastl::string> local_68;
        StringView local_48;
        StringView local_38;

        auto local_88 = (field_2552->GetText()).to_owned_string<eastl::string>();
        std::optional<eastl::string>::value_or<eastl::string>(&local_68, (eastl::string*)&field_3968);
        Console* stringView = field_8;
        local_38.StringView<eastl::fixed_string<char, 40>>(local_68);
        local_48.GetPreviousCommandFromHistory(stringView);
        SetPromptContents(&local_48, true);
    }

    // 0x100685e50
    void ConsoleUI::SetNextCommandFromHistory() {
        optional<eastl::string> local_68;
        StringView local_48;
        StringView local_38;

        auto local_88 = (field_2552->GetText()).to_owned_string<eastl::string>();
        std::optional<eastl::string>::value_or<eastl::string>(&local_68, (eastl::string*)&field_3968);
        Console* stringView = field_8;
        local_38.StringView<eastl::fixed_string<char, 40>>(local_68);
        local_48.GetNextCommandFromHistory(stringView);
        SetPromptContents(&local_48, true);
    }

    // 0x100685f10
    uint64_t ConsoleUI::HandleChar(int arg1) {
        Tweaky* pTVar3;
        uint64_t uVar4;

        uint8_t* puVar1 = field_2912;
        bool cVar2 = puVar1->operator_cast_to_bool();
        if (cVar2) {
            if (field_2512 == 0) {
                pTVar3 = (Tweaky*)(*puVar1).operator->();
                cVar2 = pTVar3->IsAttached();
                if (cVar2)
                    goto LAB_100685f80;
            }
            pTVar3 = (Tweaky*)(*puVar1).operator->();
            cVar2 = pTVar3->HasInputFocus();
            if (cVar2) {
                pTVar3 = (Tweaky*)(*puVar1).operator->();
                cVar2 = pTVar3->HandleChar(arg1);
                if (cVar2) {
                    return 1;
                }
            }
        }
    LAB_100685f80:
        if (field_2512 == 0) {
            uVar4 = 0;
        } else {
            if (field_2888[16] == '\0') {
                puVar1 = field_2928;
                cVar2 = puVar1->operator_cast_to_bool();
                if (cVar2) {
                    pTVar3 = (Tweaky*)(*puVar1).operator->();
                    cVar2 = pTVar3->HasInputFocus();
                    if (cVar2) {
                        pTVar3 = (Tweaky*)(*puVar1).operator->();
                        cVar2 = pTVar3->HandleChar(arg1);
                        if (cVar2) {
                            return 1;
                        }
                    }
                }
                field_2552->HandleChar(arg1);
            } else {
                field_2888[16] = 0;
            }
            uVar4 = 1;
        }
        return uVar4;
    }

    // 0x100686010
    unsigned long ConsoleUI::HandleKeyDown(int arg1) {
        Console* this_00;
        Tweaky* pTVar3;
        char* pcVar4;
        long lVar5;
        int arg3;
        unsigned long unaff_R14;
        StringView local_3f0;
        StringView local_3e0;
        long local_3d0;
        eastl::string local_3c8;
        Clipboard local_3a8;
        fixed_vector<eastl::fixed_string<char, 64>, 8ul> local_3a0;

        uint8_t* puVar1 = field_2912;
        bool cVar2 = puVar1->operator_cast_to_bool();
        if (cVar2) {
            if (field_2512 == 0) {
                pTVar3 = (Tweaky*)(*puVar1).operator->();
                cVar2 = pTVar3->IsAttached();
                if (cVar2)
                    goto LAB_10068609b;
            }
            pTVar3 = (Tweaky*)(*puVar1).operator->();
            cVar2 = pTVar3->HasInputFocus();
            if (cVar2) {
                pTVar3 = (Tweaky*)(*puVar1).operator->();
                cVar2 = pTVar3->HandleKeyDown(arg1);
                unaff_R14 = (((uint64_t)((int64_t)(unaff_R14 >> 8)) << 8) | (uint8_t)1);
                if (cVar2)
                    goto LAB_100686413;
            }
        }
    LAB_10068609b:
        if (field_2512 == 0) {
        LAB_100686410:
            unaff_R14 = 0;
            goto LAB_100686413;
        }
        if (arg1 == 7331) {
            ToggleConsole();
            goto LAB_1006860ba;
        }
        puVar1 = field_2928;
        cVar2 = puVar1->operator_cast_to_bool();
        if (!cVar2)
            goto LAB_100686131;
        if (arg1 == 53) {
            puVar1->reset();
            goto LAB_1006860ba;
        }
        pTVar3 = (Tweaky*)(*puVar1).operator->();
        cVar2 = pTVar3->HasInputFocus();
        if (cVar2) {
            if (arg1 != 48) {
                if (arg1 == 36) {
                    SelectAutocompleteOption();
                    goto LAB_1006860ba;
                }
                pTVar3 = (Tweaky*)(*puVar1).operator->();
                cVar2 = pTVar3->HandleKeyDown(arg1);
                unaff_R14 = (((uint64_t)((int64_t)(unaff_R14 >> 8)) << 8) | (uint8_t)1);
                if (cVar2)
                    goto LAB_100686413;
                goto LAB_100686131;
            }
        switchD_100686156_caseD_30:
            field_2888[18] = 1;
            field_2888[16] = 1;
            goto LAB_1006860ba;
        }
    LAB_100686131:
        if (63231 < arg1) {
            if (arg1 < 63276) {
                if (arg1 == 63232) {
                    SetPreviousCommandFromHistory();
                } else {
                    if (arg1 != 63233)
                        goto switchD_100686156_caseD_a;
                    SetNextCommandFromHistory();
                }
            } else if (arg1 == 63276) {
                cVar2 = input::InputState::IsKeyDown(59);
                if (!cVar2) {
                    ScrollHistoryPage(false);
                } else {
                    ScrollHistoryStart();
                }
            } else {
                if (arg1 != 63277)
                    goto switchD_100686156_caseD_a;
                cVar2 = input::InputState::IsKeyDown(59);
                if (!cVar2) {
                    ScrollHistoryPage(true);
                } else {
                    ScrollHistoryEnd();
                }
            }
            goto LAB_1006860ba;
        }
        uint64_t uVar6 = (uint64_t)(unaff_R14 >> 8);
        switch (arg1) {
        case 8:
            cVar2 = input::InputState::IsKeyDown(59);
            unaff_R14 = (((uint64_t)uVar6 << 8) | (uint8_t)1);
            if (cVar2) {
                cVar2 = field_2552->IsEmpty();
                if (!cVar2) {
                    field_2552->HandleKeyDown(arg1);
                } else {
                    CopyEntireBufferToClipboard();
                }
            }
            goto LAB_100686413;
        case 9:
            cVar2 = input::InputState::IsKeyDown(59);
            unaff_R14 = (((uint64_t)uVar6 << 8) | (uint8_t)1);
            if (cVar2) {
                local_3a8 = Clipboard();
                local_3c8 = eastl::string();
                cVar2 = local_3a8.GetText(local_3c8);
                if (cVar2) {
                    pcVar4 = local_3c8.back();
                    if (*pcVar4 == '\n') {
                        lVar5 = local_3c8.size();
                        local_3c8.resize(lVar5 - 1);
                    }
                    pcVar4 = local_3c8.back();
                    if (*pcVar4 == '\r') {
                        lVar5 = local_3c8.size();
                        local_3c8.resize(lVar5 - 1);
                    }
                    lVar5 = local_3c8.find_first_of("\r\n", 0);
                    if (lVar5 == -1) {
                        local_3f0.StringView<eastl::fixed_string<char, 40>>(local_3c8);
                        field_2552->Insert(&local_3f0);
                    } else {
                        local_3a0 = eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>();
                        tokenize<eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>,
                                 eastl::fixed_string<char, 2048>>(&local_3a0, &local_3c8, "\r\n", -1);
                        lVar5 = local_3a0.HeapBeginPtr();
                        local_3d0 = local_3a0.end();
                        if (lVar5 != local_3d0) {
                            arg3 = 1;
                            do {
                                this_00 = field_8;
                                pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                this_00->QueueCommand(pcVar4, "Clipboard", arg3, true);
                                arg3 = arg3 + 1;
                                lVar5 = lVar5 + 104;
                            } while (lVar5 != local_3d0);
                        }
                    }
                    ResetStoredPromptContents();
                }
            }
            goto LAB_100686413;
        default:
        switchD_100686156_caseD_a:
            cVar2 = field_2552->HandleKeyDown(arg1);
            if (!cVar2)
                goto LAB_100686410;
            ResetStoredPromptContents();
            break;
        case 36:
            QueueCommandFromInput();
            break;
        case 48:
            goto switchD_100686156_caseD_30;
        case 53:
            field_8->ResetCommandHistoryCursor();
            std::optional<eastl::string>::value_or<char const(&)[1]>(&local_3a0, &field_3968);
            local_3e0.StringView<eastl::fixed_string<char, 40>>(local_3a0);
            SetPromptContents(&local_3e0, false);
        }
    LAB_1006860ba:
        unaff_R14 = (((uint64_t)((int64_t)(unaff_R14 >> 8)) << 8) | (uint8_t)1);
    LAB_100686413:
        return unaff_R14 & 4294967295;
    }

    // 0x1006865d0
    void ConsoleUI::SelectAutocompleteOption() {
        long* plVar2;
        eastl::string* str;
        StringView local_b8;
        eastl::string local_a8;
        ReturnValue local_88;
        eastl::string local_58;

        if (!(field_2928->operator_cast_to_bool())) {
            LogAssert("m_autocompleteSuggestions",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/console/ConsoleUI.cpp",
                      1027, nullptr);
        }
        shared_ptr local_38 = field_3808.lock();
        if (shared_ptr::operator_cast_to_bool(&local_38)) {
            plVar2 = (long*)local_38.operator->();
            str = (eastl::string*)(**(void (**)(...))(*plVar2 + 168))(plVar2);
            local_58 = eastl::string(*str);
            console::Console::StripVariablePromptParts(local_58);
            if (local_58.find(' ', 0) == -1) {
                local_58 += " ";
            }
            local_88 = (field_8->GetAutocompletionPrefix()).to_owned_string<eastl::string>();
            local_a8 + local_88;
            local_b8.StringView<eastl::fixed_string<char, 40>>(local_a8);
            field_2552->SetText(&local_b8);
            field_2552->End();
            field_2928->reset();
            field_3808.reset();
            field_8->ResetCommandHistoryCursor();
        }
    }

    // 0x100686790
    void ConsoleUI::QueueCommandFromInput() {

        auto local_30 = field_2552->GetText();
        if (local_30.empty() == '\0') {
            field_8->QueueCommand((char*)local_30.end(), "", -1, true);
            field_2552->Reset();
            field_3968.reset();
            field_4008 = 0;
        }
    }

    // 0x100686830
    void ConsoleUI::CopyEntireBufferToClipboard() {
        long lVar3;
        fixed_string<char, _512>* str2;
        ReturnValue local_2b0;
        StringView local_2a0;

        fixed_string<char, 512> local_260;
        eastl::string local_290;
        local_290.reserve(4096);
        auto this_00 = field_8->GetMaterial();
        auto local_270 = this_00->rbegin();
        while (true) {
            local_2b0 = this_00->rend();
            if (!local_270 != local_2b0)
                break;
            lVar3 = *local_270;
            local_2a0.StringView<eastl::fixed_string<char, 512>>(*((lVar3 + 8)));
            graphics::FontHelpers::StripTags<eastl::fixed_string<char, 512>>(local_260, &local_2a0);
            eastl::operator+=(&local_290, &local_260, str2);
            local_290 += "\n";
            ++local_270;
        }
        if (local_290.empty() == '\0') {
            local_270 = Clipboard();
            local_270.SetText<eastl::basic_string<char, BucketAllocatorEASTL>>(local_290);
        }
    }

    // 0x100686a20
    void ConsoleUI::SetPromptContents(StringView stringView, bool arg2) {
        bool cVar1;
        basic_string<char, BucketAllocatorEASTL>* str;
        uint32_t in_register_00000011;
        StringView local_70;
        ReturnValue local_50;

        uint8_t* this_00 = &field_3968;
        if ((((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            this_00->reset();
        } else {
            cVar1 = this_00->operator_cast_to_bool();
            if (!cVar1) {
                local_50 = (field_2552->GetText()).to_owned_string<eastl::string>();
                this_00->operator=(&local_50);
            }
        }
        cVar1 = this_00->operator_cast_to_bool();
        uint32_t uVar2 = 0;
        if (cVar1) {
            str = (basic_string<char, BucketAllocatorEASTL>*)this_00->value();
            local_70.StringView<eastl::fixed_string<char, 40>>(*str);
            if (stringView->find(&local_70) == 0) {
                uVar2 =
                    ((basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)this_00->value())
                        ->size();
            }
        }
        field_4008 = uVar2;
        StringView local_60(*stringView);
        field_2552->SetText(&local_60);
        field_2552->SetPos(stringView->HeapBeginPtr());
    }

    // 0x100686bd0
    void ConsoleUI::ScrollHistoryPage(bool arg1) {
        uint64_t in_register_00000031;

        int iVar1 = GetLinesAreaHeight();
        int iVar2 = -iVar1;
        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) == 0) {
            iVar2 = iVar1;
        }
        field_2532 = field_2532 + iVar2;
        int local_1c = GetMaxHistoryScrollOffset();
        iVar2 = math::Clamp<int>(field_2532, 0, local_1c);
        field_2532 = iVar2;
    }

    // 0x100686c40
    uint64_t ConsoleUI::HandleKeyUp(int arg1) {
        Tweaky* pTVar3;
        uint64_t uVar4;

        field_2888[16] = 0;
        uint8_t* puVar1 = field_2912;
        bool cVar2 = puVar1->operator_cast_to_bool();
        if (cVar2) {
            if (field_2512 == 0) {
                pTVar3 = (Tweaky*)(*puVar1).operator->();
                cVar2 = pTVar3->IsAttached();
                if (cVar2)
                    goto LAB_100686cb6;
            }
            pTVar3 = (Tweaky*)(*puVar1).operator->();
            cVar2 = pTVar3->HasInputFocus();
            if (cVar2) {
                pTVar3 = (Tweaky*)(*puVar1).operator->();
                cVar2 = pTVar3->HandleKeyUp(arg1);
                if (cVar2) {
                    return 1;
                }
            }
        }
    LAB_100686cb6:
        if (field_2512 == 0) {
            uVar4 = 0;
        } else {
            puVar1 = field_2928;
            cVar2 = puVar1->operator_cast_to_bool();
            if (cVar2) {
                pTVar3 = (Tweaky*)(*puVar1).operator->();
                cVar2 = pTVar3->HasInputFocus();
                if (cVar2) {
                    pTVar3 = (Tweaky*)(*puVar1).operator->();
                    cVar2 = pTVar3->HandleKeyUp(arg1);
                    if (cVar2) {
                        return 1;
                    }
                }
            }
            uVar4 = field_2552->HandleKeyUp(arg1);
        }
        return uVar4;
    }

    // 0x100686d30
    uint64_t ConsoleUI::HandleMouseWheel(float arg1, float arg2, float arg3,
                                         const graphics::ScaleManager& scaleManager) {
        int iVar2;
        Tweaky* pTVar3;
        int local_3c[3];

        scaleManager.ScreenToInterfacePosition(arg1, arg2, false);
        bool cVar1 = (&field_3920)->operator_cast_to_bool();
        if (cVar1) {
            cVar1 = std::function<bool(float, float, float, graphics::ScaleManager const&)>::operator()(
                (function<bool(float, float, float, graphics::ScaleManager const&)>*)&field_3920, arg1, arg2, arg3,
                scaleManager);
            if (cVar1) {
                return 1;
            }
        }
        uint8_t* this_00 = field_2912;
        cVar1 = this_00->operator_cast_to_bool();
        if (cVar1) {
            if (field_2512 == 0) {
                pTVar3 = (Tweaky*)(*this_00).operator->();
                cVar1 = pTVar3->IsAttached();
                if (cVar1)
                    goto LAB_100686df9;
            }
            pTVar3 = (Tweaky*)(*this_00).operator->();
            cVar1 = pTVar3->HandleMouseWheel(arg1, arg2, arg3);
            if (cVar1) {
                return 1;
            }
        }
    LAB_100686df9:
        if (field_2512 != 0) {
            cVar1 = field_2928->operator_cast_to_bool();
            if (cVar1) {
                pTVar3 = (Tweaky*)(*field_2928).operator->();
                cVar1 = pTVar3->HandleMouseWheel(arg1, arg2, arg3);
                if (cVar1) {
                    return 1;
                }
            }
            iVar2 = GetConsoleHeight();
            if (arg2 <= (float)iVar2) {
                local_3c[0] = (int)(arg3 * 25.0) + field_2532;
                local_3c[1] = 0;
                local_3c[2] = GetMaxHistoryScrollOffset();
                iVar2 = math::Clamp<int>(*local_3c, *(local_3c + 1), *(local_3c + 2));
                field_2532 = iVar2;
                return 1;
            }
        }
        return 0;
    }

    // 0x100687050
    void ConsoleUI::SetAutocompleteMatches(const char* str, int arg2, eastl::vector<eastl::string>&& strs) {
        int iVar3;
        int iVar4;
        uint32_t uVar5;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>* this_03;
        unsigned long uVar7;
        eastl::string* pbVar8;
        long lVar10;
        eastl::string* str_00;
        long lVar11;
        StringView local_228;
        StringView local_218;
        StringView local_208;
        ReturnValue local_1d8;
        shared_ptr local_198;

        hash_map<eastl::string, eastl::string>* local_1b8 = (hash_map<eastl::string, eastl::string>*)&field_3840;
        local_1b8->clear();
        this_03 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)strs.HeapBeginPtr();
        auto pbVar6 = strs.end();
        if (this_03 != pbVar6) {
            do {
                uVar7 = this_03->find(':', 0);
                if (uVar7 != 18446744073709551615) {
                    local_160 = this_03->substr(0, uVar7);
                    local_1f8 = this_03->substr(uVar7 + 2, 18446744073709551615);
                    console::Console::ColouriseCommandAndHelp(local_160, local_1f8);
                    pbVar8 = (eastl::string*)(*local_1b8)[local_160];
                    pbVar8->swap(local_1f8);
                    this_03->swap(local_160);
                }
                this_03 = this_03 + 32;
            } while (this_03 != pbVar6);
        }
        eastl::vector<StringView> local_1f8;
        StringView local_178 = field_8->GetAutocompletionPrefix();
        Console* this_01 = field_8;
        uint8_t* this_00 = field_2552;
        auto local_160 = this_00->GetText();
        ShuffledPacketFactory::p2_alt2();
        local_228.substr((unsigned long)&local_160);
        this_01->GetAlphabeticListOfMatchingCommands(local_1f8, &local_228);
        auto stringView = local_1f8.HeapBeginPtr();
        auto pSVar9 = local_1f8.end();
        for (; stringView != pSVar9; stringView = stringView + 1) {
            AddEntryUniqueFirstWord<eastl::vector<eastl::string>, StringView>(strs, stringView, true);
        }
        if (!(strs.empty())) {
            lVar10 = strs.size();
            if (lVar10 == 1) {
                str_00 = &strs[0];
                local_160 = eastl::string(*str_00);
                console::Console::StripVariablePromptParts(local_160);
                local_160 += ' ';
                local_1d8 = local_178.to_owned_string<eastl::string>();
                local_198 + local_1d8;
                local_218.StringView<eastl::fixed_string<char, 40>>(local_198);
                this_00->SetText(&local_218);
                iVar3 = ShuffledPacketFactory::p2_alt2();
                iVar4 = local_160.size();
                this_00->SetPos(iVar3 + iVar4);
                field_2928->reset();
            } else {
                uVar7 = GetStringsMinimumCommonLength<eastl::vector<eastl::string>>(strs, 50);
                local_160 = this_00->GetText();
                lVar10 = ShuffledPacketFactory::p2_alt2();
                lVar11 = ShuffledPacketFactory::p2_alt2();
                if ((unsigned long)(lVar10 - lVar11) < uVar7) {
                    local_198 = local_178.to_owned_string<eastl::string>();
                    pbVar8 = &strs[0];
                    local_1d8 = pbVar8->substr(0, uVar7);
                    local_160 + local_198;
                    local_208.StringView<eastl::fixed_string<char, 40>>(local_160);
                    this_00->SetText(&local_208);
                    iVar3 = ShuffledPacketFactory::p2_alt2();
                    this_00->SetPos(iVar3 + (int)uVar7);
                }
                uVar5 = strs.size();
                SetAutocompleteOptions(this, strs, str == nullptr);
                if (str != nullptr) {
                    local_198 = field_3824.lock();
                    if (shared_ptr::operator_cast_to_bool(&local_198)) {
                        local_160 = eastl::fixed_string<char, 256>();
                        local_160.sprintf("%s%d%s matches, %s%d sent", "<col=ffff80>",
                                          (unsigned long)(unsigned int)arg2, "</col>", "<col=ff8080>", uVar5);
                        ((Control*)local_198.operator->())->SetText<eastl::string>(local_160);
                    }
                }
            }
        } else {
            field_2928->reset();
        }
    }

    // 0x100687980
    void ConsoleUI::SetAutocompleteOptions(eastl::vector<eastl::string>&& strs, bool arg2) {
        ReturnValue local_88;
        ReturnValue local_78;

        make_shared<tweak::Tweaky, graphics::RT7Core*&, graphics::FontHelpers*&, input::Input*&>(&local_68, &field_16,
                                                                                                 &field_24, &field_48);
        uint8_t* this_00 = field_2928;
        *this_00 = local_68;
        make_shared<tweak::List, char const(&)[8], eastl::vector<eastl::string>>(&local_78, "Matches", strs);
        make_shared<tweak::Label, char const(&)[1]>(&local_88, "");
        ((List*)local_78.operator->())->Sort();
        auto pLVar1 = local_88.operator->();
        pLVar1->SetMaxWidth(350);
        pLVar1 = (Label*)local_88.operator->();
        pLVar1->SetNonShrinking();
        Tweaky* pTVar2 = (Tweaky*)(*this_00).operator->();
        shared_ptr local_68(&local_78);
        pTVar2->Add(local_68);
        pTVar2 = (Tweaky*)(*this_00).operator->();
        local_68 = shared_ptr(&local_88);
        pTVar2->Add(local_68);
        pTVar2 = (Tweaky*)(*this_00).operator->();
        pTVar2->SetFont(*field_32);
        pTVar2 = (Tweaky*)(*this_00).operator->();
        local_68 = shared_ptr(&local_78);
        pTVar2->SetFocus(local_68);
        (&field_3808)->operator=(&local_78);
        (&field_3824)->operator=(&local_88);
        if (arg2) {
            ShowCommandListHelp();
        }
        field_8->ResetCommandHistoryCursor();
        auto this_02 = local_78.operator->();
        std::function<void(tweak::Event const&)>::function<
            ConsoleUI::SetAutocompleteOptions(eastl::vector<eastl::string>&&, bool)::__14, void>(
            (function<void(tweak::Event const&)>*)&local_68, (__14*)this);
        this_02->SetHandler(local_68);
    }

    // 0x100687d60
    void ConsoleUI::ShowCommandListHelp() {
        long* plVar2;
        eastl::string* str;
        Control* pCVar3;
        long lVar4;
        ReturnValue local_58;
        ReturnValue local_48;

        shared_ptr local_38 = field_3808.lock();
        shared_ptr local_28 = field_3824.lock();
        if (shared_ptr::operator_cast_to_bool(&local_38)) {
            if (shared_ptr::operator_cast_to_bool(&local_28)) {
                plVar2 = (long*)local_38.operator->();
                str = (eastl::string*)(**(void (**)(...))(*plVar2 + 168))(plVar2);
                local_48 = field_3840.find(*str);
                local_58 = field_3840.end();
                if (!(local_48 == local_58)) {
                    pCVar3 = (Control*)local_28.operator->();
                    lVar4 = local_48.HeapBeginPtr();
                    pCVar3->SetText<eastl::string>(*((lVar4 + 32)));
                } else {
                    pCVar3 = (Control*)local_28.operator->();
                    pCVar3->SetText("");
                }
            }
        }
    }

    // 0x100688200
    void ConsoleUI::InitialiseHistoryTweaky() {
        ReturnValue local_58;

        make_shared<tweak::Tweaky, graphics::RT7Core*&, graphics::FontHelpers*&, input::Input*&>(&local_58, &field_16,
                                                                                                 &field_24, &field_48);
        *field_2944 = local_58;
        auto local_88 = ((Tweaky*)(*field_2944).operator->())->AddGroup("Developer Console");
        auto pCVar1 = local_88.operator->();
        auto local_78 = pCVar1->AddGroup("", false);
        pCVar1 = (Container*)local_88.operator->();
        auto local_68 = pCVar1->AddGroup("", false);
        auto plVar2 = local_78.operator->();
        (**(void (**)(...))(*plVar2 + 240))(plVar2, 1);
        plVar2 = (long*)local_68.operator->();
        (**(void (**)(...))(*plVar2 + 240))(plVar2, 1);
        pCVar1 = (Container*)local_78.operator->();
        std::function<void(tweak::Event const&)>::function<ConsoleUI::InitialiseHistoryTweaky()::__15, void>(
            (function<void(tweak::Event const&)>*)&local_58, (__15*)this);
        pCVar1->AddButton("Tab", 65, local_58);
        pCVar1 = (Container*)local_78.operator->();
        std::function<void(tweak::Event const&)>::function<ConsoleUI::InitialiseHistoryTweaky()::__16, void>(
            (function<void(tweak::Event const&)>*)&local_58, (__16*)this);
        pCVar1->AddButton("^", 65, local_58);
        pCVar1 = (Container*)local_78.operator->();
        std::function<void(tweak::Event const&)>::function<ConsoleUI::InitialiseHistoryTweaky()::__17, void>(
            (function<void(tweak::Event const&)>*)&local_58, (__17*)this);
        pCVar1->AddButton("~", 65, local_58);
        pCVar1 = (Container*)local_78.operator->();
        std::function<void(tweak::Event const&)>::function<ConsoleUI::InitialiseHistoryTweaky()::__18, void>(
            (function<void(tweak::Event const&)>*)&local_58, (__18*)this);
        pCVar1->AddButton("Backspace", 65, local_58);
        pCVar1 = (Container*)local_78.operator->();
        std::function<void(tweak::Event const&)>::function<ConsoleUI::InitialiseHistoryTweaky()::__19, void>(
            (function<void(tweak::Event const&)>*)&local_58, (__19*)this);
        pCVar1->AddButton("Close", 65, local_58);
        pCVar1 = (Container*)local_68.operator->();
        std::function<void(tweak::Event const&)>::function<ConsoleUI::InitialiseHistoryTweaky()::__20, void>(
            (function<void(tweak::Event const&)>*)&local_58, (__20*)this);
        pCVar1->AddButton("<", 65, local_58);
        pCVar1 = (Container*)local_68.operator->();
        std::function<void(tweak::Event const&)>::function<ConsoleUI::InitialiseHistoryTweaky()::__21, void>(
            (function<void(tweak::Event const&)>*)&local_58, (__21*)this);
        pCVar1->AddButton("v", 65, local_58);
        pCVar1 = (Container*)local_68.operator->();
        std::function<void(tweak::Event const&)>::function<ConsoleUI::InitialiseHistoryTweaky()::__22, void>(
            (function<void(tweak::Event const&)>*)&local_58, (__22*)this);
        pCVar1->AddButton(">", 65, local_58);
        pCVar1 = (Container*)local_68.operator->();
        std::function<void(tweak::Event const&)>::function<ConsoleUI::InitialiseHistoryTweaky()::__23, void>(
            (function<void(tweak::Event const&)>*)&local_58, (__23*)this);
        pCVar1->AddButton("Enter", 65, local_58);
        pCVar1 = (Container*)local_68.operator->();
        std::function<void(tweak::Event const&)>::function<ConsoleUI::InitialiseHistoryTweaky()::__24, void>(
            (function<void(tweak::Event const&)>*)&local_58, (__24*)this);
        pCVar1->AddButton("Keyboard", 65, local_58);
    }

    // 0x100688670
    void ConsoleUI::SetAttachedTweaky(const shared_ptr<tweak::Tweaky>& tweaky) {
        *field_2912 = tweaky;
        field_2524 = 0;
        field_2528 = 0;
    }

    // 0x100688900
    void ConsoleUI::ProcessAutocompleteRequest() {
        uint8_t local_88[64];
        int local_48;
        StringView local_40;

        Console* this_01 = field_8;
        uint8_t* this_00 = field_2552;
        StringView local_98 = this_00->GetText();
        int arg2 = this_00->GetZ();
        *local_88 = this_01->SearchCommands(&local_98, arg2);
        if ((bool)*local_88) {
            local_40.StringView<eastl::fixed_string<char, 40>>(*local_88);
            this_00->SetText(&local_40);
            this_00->SetPos(local_48);
            if (!(((local_88 + 32))->empty())) {
                SetAutocompleteOptions(*((local_88 + 32)), true);
            }
        }
    }

    // 0x100688a00
    void ConsoleUI::OnHistoryEntryAdded(const console::Line& line, bool arg2) {
        uint8_t* this_00;
        bool bVar2;
        uint8_t bVar3;
        int iVar4;
        int* piVar5;
        long lVar6;
        StringView local_88;
        TextProperties local_78;
        Line* local_50;
        LineDisplayInfo local_48;
        TextFlags local_38;

        if (field_32->operator_cast_to_bool() != '\0') {
            if (arg2) {
                this_00 = &field_2456;
                local_50 = line;
                piVar5 = (int*)this_00->capacity();
                iVar4 = *piVar5;
                local_78 = this_00->end();
                local_48 = this_00->end();
                bVar2 = local_78 != local_48;
                if (bVar2) {
                    do {
                        lVar6 = local_78.end();
                        *(int*)(lVar6 + 4) = *(int*)(lVar6 + 4) - iVar4;
                        ++local_78;
                        bVar2 = local_78 != local_48;
                    } while (bVar2);
                }
                line = local_50;
            }
            local_38 = oldscape::configdecoder::VeccType();
            local_78 = graphics::TextProperties(*field_32, local_38[0]);
            bVar3 = line.SupportsTags();
            local_78.SetFlag(1, (bool)(bVar3 ^ 1));
            local_88.StringView<eastl::fixed_string<char, 512>>(line.field_8);
            iVar4 = GetMaxLineWidth();
            local_48.field_0 = graphics::FontHelpers::PredictHeightAndLines(&local_88, iVar4, local_78);
            local_48.field_4 = GetTotalHistoryHeight();
            field_2456.push_back(local_48);
        }
    }

    // 0x100688b80
    void ConsoleUI::OnHistoryCleared() {
        field_2456.clear();
        field_2532 = 0;
    }

    // 0x1006bca10
    uint32_t ConsoleUI::Draw(int)::$_13::operator()(const ConsoleUI::LineDisplayInfo& lineDisplayInfo) const {
        int iVar1 = lineDisplayInfo.field_0 + lineDisplayInfo.field_4;
        return field_0 <= iVar1;
    }

    // 0x1006be630
    void ConsoleUI::InitialiseHistoryTweaky()::$_15::operator()(const tweak::Event& event) const {
        if (event.field_16 == 2) {
            *(uint8_t*)(field_0 + 2906) = 1;
        }
    }

    // 0x1006bef40
    void ConsoleUI::InitialiseHistoryTweaky()::$_16::operator()(const tweak::Event& event) const {
        if (event.field_16 == 2) {
            SetPreviousCommandFromHistory(field_0);
        }
    }

    // 0x1006bf850
    void ConsoleUI::InitialiseHistoryTweaky()::$_17::operator()(const tweak::Event& event) const {
        long lVar1;
        eastl::string local_58;
        StringView local_38;

        if (event.field_16 == 2) {
            lVar1 = field_0;
            local_58 = eastl::string("~");
            local_38.StringView<eastl::fixed_string<char, 40>>(local_58);
            ((lVar1 + 2552))->Insert(&local_38);
        }
    }

    // 0x1006c01d0
    void ConsoleUI::InitialiseHistoryTweaky()::$_18::operator()(const tweak::Event& event) const {
        if (event.field_16 == 2) {
            ((field_0 + 2552))->Backspace();
        }
    }

    // 0x1006c0ae0
    void ConsoleUI::InitialiseHistoryTweaky()::$_19::operator()(const tweak::Event& event) const {
        if (event.field_16 == 2) {
            ToggleConsole(field_0);
        }
    }

    // 0x1006c13f0
    void ConsoleUI::InitialiseHistoryTweaky()::$_20::operator()(const tweak::Event& event) const {
        long lVar1 = field_0;
        if (event.field_16 == 1) {
            ((Control*)event.operator->())->SetIgnoreTags(true);
        }
        if (event.field_16 == 2) {
            ((lVar1 + 2552))->Left();
        }
    }

    // 0x1006c1d40
    void ConsoleUI::InitialiseHistoryTweaky()::$_21::operator()(const tweak::Event& event) const {
        if (event.field_16 == 2) {
            SetNextCommandFromHistory(field_0);
        }
    }

    // 0x1006c2650
    void ConsoleUI::InitialiseHistoryTweaky()::$_22::operator()(const tweak::Event& event) const {
        if (event.field_16 == 2) {
            ((field_0 + 2552))->Right();
        }
    }

    // 0x1006c2f60
    void ConsoleUI::InitialiseHistoryTweaky()::$_23::operator()(const tweak::Event& event) const {
        if (event.field_16 == 2) {
            QueueCommandFromInput(field_0);
        }
    }

    // 0x1006c3870
    void ConsoleUI::InitialiseHistoryTweaky()::$_24::operator()(const tweak::Event& event) const {
        long lVar1;
        Input* this_00;
        bool cVar2;
        ReturnValue local_38;

        if (event.field_16 == 2) {
            lVar1 = field_0;
            cVar2 = (*(Input**)(lVar1 + 48))->IsOnScreenKeyboardVisible();
            this_00 = *(Input**)(lVar1 + 48);
            if (!cVar2) {
                local_38 =
                    (((lVar1 + 2552))->GetText()).to_owned_string<eastl::basic_string<char, BucketAllocatorEASTL>>();
                this_00->ShowOnScreenKeyboard(5, &local_38, -1, false);
            } else {
                input::Input::HideOnScreenKeyboard();
            }
        }
    }

} // namespace jag::ui

namespace jag::tweak {
    // 0x100683a40: EditLine::~EditLine() has the same machine code as ui::ConsoleEditLine::~ConsoleEditLine()

    // 0x100684e50: EditLine::SetCursorShown(bool) has the same machine code as ui::ConsoleEditLine::SetCursorShown(bool)

} // namespace jag::tweak
