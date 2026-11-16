// libs/ui/console/ConsoleUI.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "ConsoleUI.h"
#include "libs/tweaky/TweakyEditLine.h"

namespace jag::ui {
    // 0x100682df0, 1584 bytes, base-object constructor, placed by class name
    // ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*, shared_ptr<tweak::Tweaky> const&)
    void ConsoleUI::ConsoleUI(Console* param_1, RT7Core* param_2, FontHelpers* param_3, Input* param_4,
                              shared_ptr* param_5) {
        undefined1* this_00;
        undefined1* this_01;
        undefined1* this_02;
        undefined1* this_03;
        undefined1* this_04;
        undefined1* this_05;
        undefined1* this_06;
        undefined1* this_07;
        undefined1* this_08;
        undefined1* this_09;
        undefined1* this_10;
        undefined1* this_11;
        undefined1* this_12;
        undefined1* this_13;
        int iVar1;
        ConsoleUI* local_38;

        new (this) console::Console::HistoryListener();
        field_0 = &PTR__ConsoleUI_100f0e3a0;
        field_8 = param_1;
        field_16 = param_2;
        field_24 = param_3;
        new (field_32, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_48 = param_4;
        this_00 = field_56;
        new (this_00) input::InputHandler();
        new (&field_2376) eastl::fixed_string<char, 40, true, eastl::allocator>();
        eastl::ring_buffer<ConsoleUI::LineDisplayInfo, eastl::vector<ConsoleUI::LineDisplayInfo, eastl::allocator>,
                           eastl::allocator>::ring_buffer((ulong)&field_2456);
        field_2512 = 0;
        field_2516 = 196;
        m_consoleHeight = 0;
        field_2524 = 0;
        field_2528 = 0;
        field_2532 = 0;
        field_2536 = 0;
        new (&field_2540) std::optional<int>();
        field_2548 = 0.0;
        new (field_2552) ConsoleEditLine();
        new (field_2888, 0, 0, 0, 0) oldscape::dash3d::GridRect();
        *(undefined4*)(field_2888 + 16) = 257;
        new (field_2912, param_5) shared_ptr<oldscape::dash3d::Decor>();
        new (field_2928, (_func_decltype_nullptr*)param_5)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_2944, (_func_decltype_nullptr*)param_5)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        this_01 = &field_2960;
        std::function<bool(int)>::function((function<bool(int)>*)this_01);
        this_02 = &field_3008;
        std::function<bool(int)>::function((function<bool(int)>*)this_02);
        this_03 = &field_3056;
        std::function<bool(int)>::function((function<bool(int)>*)this_03);
        this_04 = &field_3104;
        std::function<bool(float, float, float, float)>::function((function<bool(float, float, float, float)>*)this_04);
        this_05 = &field_3152;
        std::function<bool(float, float)>::function((function<bool(float, float)>*)this_05);
        this_06 = &field_3200;
        std::function<bool(float, float)>::function((function<bool(float, float)>*)this_06);
        this_07 = &field_3248;
        std::function<bool(float, float)>::function((function<bool(float, float)>*)this_07);
        this_08 = &field_3296;
        std::function<bool(float, float)>::function((function<bool(float, float)>*)this_08);
        this_09 = &field_3344;
        std::function<bool(unsigned long, float, float)>::function(
            (function<bool(unsigned long, float, float)>*)this_09);
        this_10 = &field_3392;
        std::function<bool(unsigned long, float, float)>::function(
            (function<bool(unsigned long, float, float)>*)this_10);
        this_11 = &field_3440;
        std::function<bool(unsigned long, float, float)>::function(
            (function<bool(unsigned long, float, float)>*)this_11);
        this_12 = field_3488;
        new (this_12) input::gesture::GestureSwipe();
        this_13 = &field_3712;
        std::function<bool(input::gesture::GestureEvent_Swipe_const&)>::function(
            (function<bool(input::gesture::GestureEvent_Swipe_const&)>*)this_13);
        std::function<void(eastl::fixed_string<char, 256, true, eastl::allocator>&,
                           eastl::fixed_string<char, 256, true, eastl::allocator> const&)>::
            function((function<void(eastl::fixed_string<char, 256, true, eastl::allocator>&,
                                    eastl::fixed_string<char, 256, true, eastl::allocator> const&)>*)&field_3760);
        new (&field_3808, (_func_decltype_nullptr*)param_5)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_3824, (_func_decltype_nullptr*)param_5)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&local_38) eastl::allocator("EASTL hash_map");
        new (&field_3840, (allocator*)&local_38)
            eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
                            eastl::allocator, false>();
        std::unique_ptr<ConsoleSnow, std::default_delete<ConsoleSnow>>::unique_ptr<true, void>(
            (unique_ptr<ConsoleSnow, std::default_delete<ConsoleSnow>>*)&field_3896);
        field_3904 = 0;
        std::function<bool(float, float, float, graphics::ScaleManager_const&)>::function(
            (function<bool(float, float, float, graphics::ScaleManager_const&)>*)&field_3920);
        new (&field_3968) std::optional<eastl::string>();
        field_4008 = 0;
        iVar1 = field_16->GetInterfaceHeight();
        m_consoleHeight = (int)((float)iVar1 * 0.3);
        local_38 = this;
        std::function<void(eastl::fixed_string<char, 256, true, eastl::allocator>&,
                           eastl::fixed_string<char, 256, true, eastl::allocator> const&)>::
        operator=((function<void(eastl::fixed_string<char, 256, true, eastl::allocator>&,
                                 eastl::fixed_string<char, 256, true, eastl::allocator> const&)>*)&field_3760,
                  (__0*)&local_38);
        local_38 = this;
        std::function<bool(int)>::operator=((function<bool(int)>*)this_01, (__1*)&local_38);
        local_38 = this;
        std::function<bool(int)>::operator=((function<bool(int)>*)this_02, (__2*)&local_38);
        local_38 = this;
        std::function<bool(int)>::operator=((function<bool(int)>*)this_03, (__3*)&local_38);
        this_00->RegisterKeyDown(this_01);
        this_00->RegisterKeyUp(this_02);
        this_00->RegisterKeyChar(this_03);
        local_38 = this;
        std::function<bool(float, float, float, float)>::operator=((function<bool(float, float, float, float)>*)this_04,
                                                                   (__4*)&local_38);
        local_38 = this;
        std::function<bool(float, float)>::operator=((function<bool(float, float)>*)this_05, (__5*)&local_38);
        local_38 = this;
        std::function<bool(float, float)>::operator=((function<bool(float, float)>*)this_06, (__6*)&local_38);
        local_38 = this;
        std::function<bool(float, float)>::operator=((function<bool(float, float)>*)this_07, (__7*)&local_38);
        local_38 = this;
        std::function<bool(float, float)>::operator=((function<bool(float, float)>*)this_08, (__8*)&local_38);
        this_00->RegisterMouseWheel(this_04);
        this_00->RegisterLMouseDown(this_05);
        this_00->RegisterLMouseUp(this_06);
        this_00->RegisterMouseMove(this_07);
        this_00->RegisterMouseMove(this_08);
        local_38 = this;
        std::function<bool(unsigned long, float, float)>::operator=(
            (function<bool(unsigned long, float, float)>*)this_09, (__9*)&local_38);
        local_38 = this;
        std::function<bool(unsigned long, float, float)>::operator=(
            (function<bool(unsigned long, float, float)>*)this_10, (__10*)&local_38);
        local_38 = this;
        std::function<bool(unsigned long, float, float)>::operator=(
            (function<bool(unsigned long, float, float)>*)this_11, (__11*)&local_38);
        local_38 = this;
        std::function<bool(input::gesture::GestureEvent_Swipe_const&)>::operator=(
            (function<bool(input::gesture::GestureEvent_Swipe_const&)>*)this_13, (__12*)&local_38);
        this_00->RegisterTouchDown(this_09);
        this_00->RegisterTouchUp(this_10);
        this_00->RegisterTouchMove(this_11);
        this_00->AddGesture(this_12);
        this_12->AddHandler(this_13);
        (field_48, "2console", (InputHandler*)this_00)->RegisterInputHandler();
        (field_8, (HistoryListener*)this)->AttachHistoryListener();
    }

    // 0x100683a60, 16 bytes, complete-object constructor, placed by class name
    // ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*, shared_ptr<tweak::Tweaky> const&): jumps straight to the base-object constructor

    // 0x100683a70, 768 bytes, base-object destructor, placed by class name
    // ConsoleUI::~ConsoleUI()
    void ConsoleUI::~ConsoleUI() {
        field_0 = &PTR__ConsoleUI_100f0e3a0;
        field_56->Reset();
        (field_48, "2console")->UnregisterInputHandler();
        console::Console::DetachHistoryListener((HistoryListener*)field_8);
        (&field_3968)->~optional();
        std::function<bool(float, float, float, graphics::ScaleManager_const&)>::~function(
            (function<bool(float, float, float, graphics::ScaleManager_const&)>*)&field_3920);
        (&field_3896)->~unique_ptr();
        (&field_3840)->~hash_map();
        (&field_3824)->~weak_ptr();
        (&field_3808)->~weak_ptr();
        std::function<void(eastl::fixed_string<char, 256, true, eastl::allocator>&,
                           eastl::fixed_string<char, 256, true, eastl::allocator> const&)>::
            ~function((function<void(eastl::fixed_string<char, 256, true, eastl::allocator>&,
                                     eastl::fixed_string<char, 256, true, eastl::allocator> const&)>*)&field_3760);
        std::function<bool(input::gesture::GestureEvent_Swipe_const&)>::~function(
            (function<bool(input::gesture::GestureEvent_Swipe_const&)>*)&field_3712);
        field_3488->~GestureSwipe();
        std::function<bool(unsigned long, float, float)>::~function(
            (function<bool(unsigned long, float, float)>*)&field_3440);
        std::function<bool(unsigned long, float, float)>::~function(
            (function<bool(unsigned long, float, float)>*)&field_3392);
        std::function<bool(unsigned long, float, float)>::~function(
            (function<bool(unsigned long, float, float)>*)&field_3344);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_3296);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_3248);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_3200);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_3152);
        std::function<bool(float, float, float, float)>::~function(
            (function<bool(float, float, float, float)>*)&field_3104);
        std::function<bool(int)>::~function((function<bool(int)>*)&field_3056);
        std::function<bool(int)>::~function((function<bool(int)>*)&field_3008);
        std::function<bool(int)>::~function((function<bool(int)>*)&field_2960);
        field_2944->~shared_ptr();
        field_2928->~shared_ptr();
        field_2912->~shared_ptr();
        field_2552->~EditLine();
        (&field_2456)->~ring_buffer();
        /* WARNING: Subroutine does not return */
        (&field_2376)->~fixed_string();
    }

    // 0x100683d70, 16 bytes, complete-object destructor, placed by class name
    // ConsoleUI::~ConsoleUI(): jumps straight to the base-object destructor

    // 0x100683d80, 32 bytes, deleting destructor, placed by class name
    // ConsoleUI::~ConsoleUI()
    void ConsoleUI::~ConsoleUI() {
        ~ConsoleUI(this);
        operator_delete(this);
    }

    // 0x100683da0, 48 bytes, placed by class name
    // ConsoleUI::CheckToggleConsole(int)
    bool ConsoleUI::CheckToggleConsole(int param_1) {
        if (param_1 == 7331) {
            ToggleConsole(this);
        }
        return param_1 == 7331;
    }

    // 0x100683dd0, 240 bytes, placed by class name
    // ConsoleUI::ToggleConsole()
    void ConsoleUI::ToggleConsole() {
        byte bVar1;
        Input* pIVar2;
        bool bVar3;
        undefined1 local_48[16];
        StringView local_38;

        bVar1 = field_2512;
        field_2512 = bVar1 ^ 1;
        if ((bVar1 == 0) && (bVar3 = field_32->operator_cast_to_bool(), bVar3)) {
            field_2888[16] = 1;
            pIVar2 = field_48;
            local_48->GetText();
            StringView::to_owned_string<eastl::basic_string<char, BucketAllocatorEASTL>>(&local_38);
            pIVar2->ShowOnScreenKeyboard(5, &local_38, 4294967295, 0);
            local_38.~basic_string();
            return;
        }
        shared_ptr<tweak::Tweaky>::reset();
        (*(code*)field_8->field_0[3])();
        input::Input::HideOnScreenKeyboard();
        (&field_3896, (ConsoleSnow*)0)->reset();
        (field_48, "2console")->DeselectInputHandler();
    }

    // 0x100683f70, 96 bytes, placed by class name
    // ConsoleUI::GetMaxLineWidth() const
    int ConsoleUI::GetMaxLineWidth() {
        bool bVar1;
        int iVar3;
        Tweaky* this_00;
        int iVar4;

        iVar3 = field_16->GetInterfaceWidth();
        bVar1 = field_2912->operator_cast_to_bool();
        iVar4 = 0;
        if (bVar1) {
            this_00 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)field_2912);
            if (this_00->IsAttached() != '\0') {
                iVar4 = field_2524;
            }
        }
        return (iVar3 - iVar4) + -20;
    }

    // 0x100683fd0, 128 bytes, placed by class name
    // ConsoleUI::SetFont(shared_ptr<graphics::Font> const&, shared_ptr<graphics::Font> const&)
    void ConsoleUI::SetFont(shared_ptr* param_1, shared_ptr* param_2) {
        Tweaky* pTVar1;
        bool bVar2;

        shared_ptr<graphics::Font>::operator=((shared_ptr<graphics::Font>*)field_32, param_1);
        bVar2 = field_2912->operator_cast_to_bool();
        if (bVar2) {
            pTVar1 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)field_2912);
            pTVar1->SetFont(param_2);
        }
        bVar2 = field_2944->operator_cast_to_bool();
        if (bVar2) {
            pTVar1 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)field_2944);
            pTVar1->SetFont(param_2);
        }
        RecalculateMessageHistoryLayout(this);
    }

    // 0x100684050, 352 bytes, placed by class name
    // ConsoleUI::RecalculateMessageHistoryLayout()
    void ConsoleUI::RecalculateMessageHistoryLayout() {
        bool bVar1;
        byte bVar2;
        int iVar3;
        ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>* this_00;
        Line* this_01;
        TextProperties* in_RCX;
        int iVar4;
        StringView SVar5;
        TextFlags in_stack_ffffffffffffff58;
        TextProperties local_a0;
        StringView local_78;
        undefined1 local_68[16];
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL> local_58[16];
        LineDisplayInfo local_48;
        undefined4 local_3c;
        VeccType local_38[8];

        bVar1 = field_32->operator_cast_to_bool();
        if (!bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_font",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/console/ConsoleUI.cpp",
                      1182, (char*)0);
        }
        (&field_2456)->clear();
        oldscape::configdecoder::VeccType::VeccType(local_38);
        new (&local_a0) graphics::TextProperties((shared_ptr*)field_32, in_stack_ffffffffffffff58);
        local_3c = GetMaxLineWidth(this);
        this_00 = (ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>*)
                      field_8->GetMaterial();
        local_58 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>[16])eastl::ring_buffer<
            EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>::begin(this_00);
        local_68 =
            eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>::end(
                this_00);
        bVar1 = eastl::operator!=(local_58, local_68);
        if (bVar1) {
            iVar4 = 0;
            do {
                this_01 = (Line*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_58);
                bVar2 = this_01->SupportsTags();
                graphics::TextProperties::SetFlag(&local_a0, 1, bVar2 ^ 1);
                StringView::StringView<eastl::fixed_string<char, 512, true, eastl::allocator>>(
                    &local_78, (fixed_string*)&this_01->field_8);
                SVar5.field_8._0_4_ = local_3c;
                SVar5.field_0 = (ulong)&local_78;
                SVar5.field_8._4_4_ = 0;
                iVar3 = graphics::FontHelpers::PredictHeightAndLines(SVar5, (int)&local_a0, in_RCX);
                local_48.field_0 = iVar3;
                local_48.field_4 = iVar4;
                (&field_2456, &local_48)->push_back();
                iVar4 = iVar4 + iVar3;
                eastl::ring_buffer_iterator<console::Line, console::Line_const*, console::Line_const&,
                                            eastl::vector<console::Line, eastl::allocator>>::
                operator++((ring_buffer_iterator<console::Line, console::Line_const*, console::Line_const&,
                                                 eastl::vector<console::Line, eastl::allocator>>*)local_58);
                bVar1 =
                    eastl::operator!=((ring_buffer_iterator<console::Line, console::Line_const*, console::Line_const&,
                                                            eastl::vector<console::Line, eastl::allocator>>*)local_58,
                                      local_68);
            } while (bVar1);
        }
    }

    // 0x1006841b0, 3008 bytes, placed by class name
    // ConsoleUI::Draw(int)
    void ConsoleUI::Draw(int param_1) {
        undefined1* puVar1;
        undefined1* this_00;
        FontHelpers* pFVar2;
        undefined1 auVar3[16];
        undefined1 auVar4[16];
        GUIManager* pGVar5;
        shared_ptr* this_01;
        bool bVar6;
        char cVar7;
        byte bVar8;
        int iVar9;
        undefined4 uVar10;
        Layout* this_02;
        DebugUIManager* this_03;
        ScaleManager* this_04;
        Tweaky* pTVar11;
        uchar* puVar12;
        LoginManager* this_05;
        long lVar13;
        long lVar14;
        int* piVar15;
        Line* pLVar16;
        ulong uVar17;
        fixed_string* pfVar18;
        ulong uVar19;
        undefined1 uVar20;
        int iVar21;
        undefined4 in_register_00000034;
        type* ptVar22;
        uint uVar23;
        int iVar24;
        ConsoleUI* pCVar25;
        StringView SVar26;
        StringView SVar27;
        StringView SVar28;
        StringView SVar29;
        StringView SVar30;
        TextProperties* pTVar31;
        RT7Core* pRVar32;
        undefined8 in_stack_fffffffffffff8e0;
        int iVar33;
        undefined4 in_stack_fffffffffffff8ec;
        undefined1 local_700[16];
        undefined1 local_6f0[16];
        StringView local_6e0;
        ClippingState local_6d0;
        StringView local_6b0;
        optional<int> local_6a0[8];
        StringView local_698;
        StringView local_688;
        undefined1 local_678[16];
        ring_buffer_iterator<EntityWaypoint, EntityWaypoint*, EntityWaypoint&,
                             eastl::vector<EntityWaypoint, eastl::allocator>>
            local_668[16];
        optional<int> local_658[8];
        StringView local_650;
        TextProperties local_640;
        vector* local_618;
        undefined1 local_610[16];
        char* local_600[2];
        GUIManager* local_5f0;
        ulong local_5e8;
        int local_5dc;
        int local_5d8;
        int local_5d4;
        ulong local_5d0;
        shared_ptr* local_5c8;
        ulong local_5c0;
        ulong local_5b8;
        ConsoleUI* local_5b0;
        TextFlags local_5a8[4];
        int local_5a4;
        GridRect local_5a0[69];
        long local_38;

        auVar4._8_8_ = local_5a0[0]._8_8_;
        auVar4._0_8_ = local_5a0[0]._0_8_;
        uVar10 = (undefined4)((ulong)in_stack_fffffffffffff8e0 >> 32);
        ptVar22 = (type*)CONCAT44(in_register_00000034, param_1);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (field_2512 == 0)
            goto LAB_100684cea;
        puVar1 = field_32;
        bVar6 = puVar1->operator_cast_to_bool();
        auVar4._8_4_ = local_5a0[0].field_8;
        auVar4._12_4_ = local_5a0[0].field_12;
        auVar4._0_4_ = local_5a0[0].field_0;
        auVar4._4_4_ = local_5a0[0].field_4;
        if (!bVar6)
            goto LAB_100684cea;
        local_5f0 = (GUIManager*)field_16->GetGUIManager();
        this_02 = (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)puVar1);
        local_618 = eastl::string::Layout::SSOBeginPtr(this_02, ptVar22);
        this_03 = (DebugUIManager*)AutoSingleton<debug::DebugUIManager>::InstancePtr();
        local_5d0 = (ulong)(uint)param_1;
        if (this_03 == (DebugUIManager*)0) {
            local_5d4 = 0;
        } else {
            iVar9 = this_03->GetMainMenuHeight();
            local_640.m_pFont._0_4_ = (float)iVar9;
            local_5a0[0]._0_8_ = local_5a0[0]._0_8_ & 18446744069414584320;
            this_04 = (ScaleManager*)field_16->GetScaleManager();
            this_04->ScreenToInterfacePosition(local_5a0, (float*)&local_640, false);
            local_5d4 = (int)local_640.m_pFont._0_4_;
        }
        local_5a4 = field_16->GetInterfaceWidth();
        local_5b8 = GetConsoleHeight(this);
        local_5c0 = GetLinesAreaHeight(this);
        iVar9 = field_2536;
        local_5c8 = (shared_ptr*)field_2912;
        bVar6 = shared_ptr::operator_cast_to_bool(local_5c8);
        if (bVar6) {
            if (field_2524 == 0) {
                pTVar11 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)local_5c8);
                pTVar11->GetSize(&field_2524, &field_2528);
            }
            pTVar11 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)local_5c8);
            cVar7 = pTVar11->IsAttached();
            if (field_2888[17] == cVar7)
                goto LAB_10068431f;
            field_2888[17] = cVar7;
        LAB_10068433a:
            iVar24 = local_5a4;
            RecalculateMessageHistoryLayout(this);
            field_2536 = iVar24;
        } else {
        LAB_10068431f:
            iVar24 = local_5a4;
            if (local_5a4 != iVar9)
                goto LAB_10068433a;
        }
        pGVar5 = local_5f0;
        local_5f0->ResetProjectionOverride();
        new (&local_6d0) graphics::ClippingState(field_16);
        iVar9 = (int)local_5b8 + 1;
        (field_16, 0, 0, iVar24, iVar9, true)->SetClippingRectangle();
        0->AddElement(0, 0, 0, pGVar5, 0, 0, local_5a4, local_5b8, field_2516 | 857896704, 0, CONCAT44(uVar10, 1));
        0->AddElement(0, 0, 0, pGVar5, 0, local_5c0, local_5a4, (int)local_5c0 + 1, 3149642751, 0, 1);
        pTVar31 = (TextProperties*)0;
        0->AddElement(0, 0, 0, pGVar5, 0, local_5b8, local_5a4, iVar9, 2576980479, 0, 1);
        if (field_3904 != '\0') {
            DrawSnow(this, (int)local_5c0);
        }
        local_5e8 = GetMaxLineWidth(this);
        local_5a0[0].field_0 = 2;
        local_5b0 = this;
        graphics::TextFlags::TextFlags(local_5a8, local_5a0, 1);
        new (&local_640) graphics::TextProperties(puVar1, SUB81(pTVar31, 0));
        local_640.SetAlignment(2);
        local_5a0[0].field_0 = 255;
        new ((local_6d0.field_8 + 16)) eastl::optional<int>(&local_5a0[0].field_0);
        local_640.SetColours(4294967295, (optional<int>*)(local_6d0.field_8 + 16));
        pFVar2 = local_5b0->field_24;
        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(
            &local_6b0, (fixed_string*)&local_5b0->field_2376);
        SVar26.field_8._0_4_ = local_5a4 + -2;
        iVar24 = (int)local_5c0 + 3;
        SVar26.field_0 = (ulong)&local_6b0;
        SVar26.field_8._4_4_ = 0;
        pFVar2->DrawString(SVar26, iVar24, 0, (uint)&local_640, pTVar31);
        local_640.SetAlignment(0, 2);
        local_5a0[0].field_0 = 255;
        eastl::optional<int>::optional(local_6a0, &local_5a0[0].field_0);
        local_640.SetColours(2155905279, local_6a0);
        local_600[0] = "->";
        pFVar2 = local_5b0->field_24;
        StringView::StringView<char const*>(&local_698, local_600);
        SVar27.field_8._0_4_ = (int)local_5d0 + 4;
        uVar20 = (undefined1)iVar24;
        SVar27.field_0 = (ulong)&local_698;
        SVar27.field_8._4_4_ = 0;
        local_5dc = (int)SVar27.field_8;
        pFVar2->DrawString(SVar27, iVar24, 0, (uint)&local_640, pTVar31);
        StringView::StringView<char const*>(&local_688, local_600);
        puVar12 = (uchar*)shared_ptr<graphics::FontMetrics>::operator*((shared_ptr<graphics::FontMetrics>*)local_618);
        SVar30.field_8 = puVar12;
        SVar30.field_0 = (ulong)&local_688;
        iVar9 = graphics::FontHelpers::GetStringWidth(SVar30, (FontMetrics*)&DAT_00000001, (bool)uVar20);
        this_01 = local_5c8;
        bVar6 = shared_ptr::operator_cast_to_bool(local_5c8);
        bVar8 = true;
        if (bVar6) {
            pTVar11 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)this_01);
            bVar8 = pTVar11->HasInputFocus();
            bVar8 = bVar8 ^ 1;
        }
        pCVar25 = local_5b0;
        iVar9 = (int)local_5d0 + 8 + iVar9;
        this_00 = local_5b0->field_2552;
        this_00->SetCursorShown((bool)bVar8);
        pRVar32 = pCVar25->field_16;
        iVar33 = pCVar25->field_4008;
        this_00->Draw(iVar9, iVar24, local_5a4, (int)local_5b8 + -1, puVar1, pRVar32, pCVar25->field_24, iVar33,
                      (function*)&pCVar25->field_3760);
        oldscape::dash3d::GridRect::GridRect(local_5a0, iVar9, (int)local_5c0, local_5a4,
                                             (int)local_5b8 - (int)local_5c0);
        pCVar25 = local_5b0;
        math::Rect<unsigned int>::operator=((Rect<unsigned int>*)local_5b0->field_2888, (Rect*)local_5a0);
        puVar1 = &pCVar25->field_2456;
        cVar7 = puVar1->empty();
        auVar3._8_4_ = local_5a0[0].field_8;
        auVar3._12_4_ = local_5a0[0].field_12;
        auVar3._0_4_ = local_5a0[0].field_0;
        auVar3._4_4_ = local_5a0[0].field_4;
        if (cVar7 == '\0') {
            iVar24 = GetTotalHistoryHeight(pCVar25);
            uVar17 = local_5c0;
            iVar9 = (int)local_5c0;
            iVar21 = iVar24 - iVar9;
            if (iVar21 != 0 && iVar9 <= iVar24) {
                iVar24 = eastl::max<int>(1, iVar24 + -1);
                iVar24 = eastl::max<int>(1, (iVar9 * iVar9) / iVar24);
                pCVar25 = local_5b0;
                local_600[0] = (char*)((ulong)local_600[0] & 18446744069414584320);
                local_610._0_4_ = iVar9 - iVar24;
                local_5a0[0].field_0 = ((iVar21 - local_5b0->field_2532) * (iVar9 - iVar24)) / iVar21;
                local_5a0[0].field_0 = math::Clamp<int>(&local_5a0[0].field_0, (int*)local_600, (int*)local_610);
                pGVar5 = local_5f0;
                uVar23 = 673730560;
                if (pCVar25->field_2532 == 0) {
                    uVar23 = 538984448;
                }
                iVar21 = (int)local_5e8 + 4;
                iVar9 = (int)local_5e8 + 20;
                local_5b8 = CONCAT44(local_5b8._4_4_, iVar21);
                local_5c8 = (shared_ptr*)CONCAT44(local_5c8._4_4_, iVar9);
                0->AddElement(0, 0, 0, local_5f0, iVar21, 0, iVar9, uVar17 & 4294967295, uVar23 | pCVar25->field_2516,
                              0, 1);
                uVar23 = 2155921408;
                if (pCVar25->field_2532 == 0) {
                    uVar23 = 1077968896;
                }
                pRVar32 = (RT7Core*)0;
                0->AddElement(0, 0, 0, pGVar5, local_5b8 & 4294967295, (ulong)(uint)local_5a0[0].field_0,
                              (ulong)local_5c8 & 4294967295, iVar24 + local_5a0[0].field_0,
                              uVar23 | pCVar25->field_2516, 0, 1);
                iVar9 = (int)local_5c0;
            }
            (local_5b0->field_16, 0, 0, (int)local_5e8, iVar9, true)->SetClippingRectangle();
            this_05 = (LoginManager*)local_5b0->field_8->GetMaterial();
            lVar13 = this_05->capacity();
            lVar14 = puVar1->capacity();
            if (lVar13 != lVar14) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "history.capacity() == m_lineDisplayInfo.capacity()",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/console/ConsoleUI.cpp",
                    274, (char*)0);
            }
            lVar13 = this_05->GetAuthWrapper();
            lVar14 = puVar1->GetAuthWrapper();
            if (lVar13 != lVar14) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "history.size() == m_lineDisplayInfo.size()",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/console/ConsoleUI.cpp",
                    275, (char*)0);
            }
            piVar15 = (int*)eastl::ring_buffer<ConsoleUI::LineDisplayInfo,
                                               eastl::vector<ConsoleUI::LineDisplayInfo, eastl::allocator>,
                                               eastl::allocator>::back();
            pCVar25 = local_5b0;
            iVar9 = *piVar15;
            lVar13 = eastl::ring_buffer<ConsoleUI::LineDisplayInfo,
                                        eastl::vector<ConsoleUI::LineDisplayInfo, eastl::allocator>,
                                        eastl::allocator>::back();
            iVar24 = (iVar9 + *(int*)(lVar13 + 4)) - pCVar25->field_2532;
            eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, BucketAllocatorEASTL>,
                               BucketAllocatorEASTL>::end();
            eastl::ring_buffer<SwipeDelta, eastl::vector<SwipeDelta, eastl::allocator>, eastl::allocator>::end();
            eastl::find_if<eastl::ring_buffer_iterator<ConsoleUI::LineDisplayInfo, ConsoleUI::LineDisplayInfo*,
                                                       ConsoleUI::LineDisplayInfo&,
                                                       eastl::vector<ConsoleUI::LineDisplayInfo, eastl::allocator>>,
                           int->Draw()::__13>((eastl*)local_600, local_700, local_6f0, iVar24);
            eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, BucketAllocatorEASTL>,
                               BucketAllocatorEASTL>::end();
            eastl::ring_buffer_iterator<EntityWaypoint, EntityWaypoint*, EntityWaypoint&,
                                        eastl::vector<EntityWaypoint, eastl::allocator>>::
                ring_buffer_iterator(local_668, (ring_buffer_iterator*)local_600);
            iVar9 = eastl::distance<eastl::ring_buffer_iterator<
                ConsoleUI::LineDisplayInfo, ConsoleUI::LineDisplayInfo*, ConsoleUI::LineDisplayInfo&,
                eastl::vector<ConsoleUI::LineDisplayInfo, eastl::allocator>>>(local_678, local_668);
            local_5a0[0].field_0 = iVar9;
            iVar9 = puVar1->GetAuthWrapper();
            local_610._0_4_ = iVar9 + -1;
            piVar15 = std::min<int>(&local_5a0[0].field_0, (int*)local_610);
            iVar9 = *piVar15;
            local_5a0[0]._0_16_ = this_05->begin();
            local_610 = eastl::ring_buffer_iterator<console::Line, console::Line_const*, console::Line_const&,
                                                    eastl::vector<console::Line, eastl::allocator>>::
            operator+((ring_buffer_iterator<console::Line, console::Line_const*, console::Line_const&,
                                            eastl::vector<console::Line, eastl::allocator>>*)local_5a0,
                      (long)iVar9);
            local_5c8 = (shared_ptr*)CONCAT44(local_5c8._4_4_, iVar9);
            pCVar25 = local_5b0;
            auVar3 = (undefined1[16])local_5a0[0]._0_16_;
            if (-1 < iVar9) {
                local_618 = (vector*)CONCAT44(local_618._4_4_, (int)local_5c0 - iVar24);
                local_5d8 = ((int)local_5e8 - (int)local_5d0) + -4;
                do {
                    local_5a0[0]._0_16_ = auVar3;
                    lVar13 = local_600->end();
                    iVar9 = *(int*)(lVar13 + 4) + (int)local_618;
                    piVar15 = (int*)local_600->end();
                    local_5b8 = CONCAT44(local_5b8._4_4_, iVar9);
                    iVar9 = *piVar15 + iVar9;
                    auVar3 = (undefined1[16])local_5a0[0]._0_16_;
                    if (-1 < iVar9) {
                        local_5f0 = (GUIManager*)CONCAT44(local_5f0._4_4_, iVar9);
                        pLVar16 = (Line*)local_610->end();
                        uVar10 = pLVar16->GetColour();
                        local_5a0[0].field_0 = 255;
                        eastl::optional<int>::optional(local_658, &local_5a0[0].field_0);
                        local_640.SetColours(uVar10, local_658);
                        pLVar16 = (Line*)local_610->end();
                        bVar8 = pLVar16->SupportsTags();
                        graphics::TextProperties::SetFlag(&local_640, 1, bVar8 ^ 1);
                        lVar13 = local_610->end();
                        lVar13 = ((lVar13 + 8))->find_first_of('\b', 0);
                        if (lVar13 == -1) {
                            pFVar2 = local_5b0->field_24;
                            lVar13 = local_610->end();
                            StringView::StringView<eastl::fixed_string<char, 512, true, eastl::allocator>>(
                                &local_650, (fixed_string*)(lVar13 + 8));
                            piVar15 = (int*)local_600->end();
                            pRVar32 = (RT7Core*)0;
                            SVar29.field_8._0_4_ = local_5dc;
                            SVar29.field_0 = (ulong)&local_650;
                            SVar29.field_8._4_4_ = 0;
                            pFVar2->DrawStringMultiline(SVar29, (int)local_5b8, local_5d8, *piVar15, 0,
                                                        (uint*)&local_640,
                                                        (TextProperties*)CONCAT44(in_stack_fffffffffffff8ec, iVar33));
                        } else {
                            local_610->end();
                            uVar17 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true,
                                                                                             eastl::allocator>>::size();
                            if (1 < uVar17) {
                                new (local_5a0)
                                    eastl::fixed_vector<eastl::fixed_string<char, 128, true, eastl::allocator>, 8ul,
                                                        true, eastl::allocator>();
                                lVar13 = local_610->end();
                                tokenize<eastl::fixed_vector<eastl::fixed_string<char, 128, true, eastl::allocator>,
                                                             8ul, true, eastl::allocator>,
                                         eastl::fixed_string<char, 512, true, eastl::allocator>>(
                                    (fixed_vector*)local_5a0, (fixed_string*)(lVar13 + 8), "\b", -1);
                                iVar9 = local_5a0->size();
                                local_5d0 = CONCAT44(
                                    local_5d0._4_4_,
                                    (int)((long)((ulong)(uint)((int)local_5e8 >> 31) << 32 | local_5e8 & 4294967295) /
                                          (long)iVar9));
                                lVar13 = local_5a0->size();
                                if (lVar13 != 0) {
                                    uVar23 = 1;
                                    uVar17 = 0;
                                    iVar9 = local_5d8;
                                    iVar24 = local_5dc;
                                    do {
                                        pfVar18 = (fixed_string*)
                                            eastl::vector<eastl::fixed_string<char, 128, true, eastl::allocator>,
                                                          eastl::fixed_vector_allocator<168ul, 8ul, 8ul, 0ul, true,
                                                                                        eastl::allocator>>::
                                            operator[](
                                                (vector<eastl::fixed_string<char, 128, true, eastl::allocator>,
                                                        eastl::fixed_vector_allocator<168ul, 8ul, 8ul, 0ul, true,
                                                                                      eastl::allocator>>*)local_5a0,
                                                uVar17);
                                        pFVar2 = local_5b0->field_24;
                                        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(
                                            &local_6e0, pfVar18);
                                        SVar28.field_8._0_4_ = iVar24;
                                        SVar28.field_0 = (ulong)&local_6e0;
                                        SVar28.field_8._4_4_ = 0;
                                        pFVar2->DrawString(SVar28, (int)local_5b8, iVar9, (uint)&local_640, pRVar32);
                                        uVar17 = (ulong)uVar23;
                                        uVar19 = local_5a0->size();
                                        iVar24 = iVar24 + (int)local_5d0;
                                        iVar9 = iVar9 - (int)local_5d0;
                                        uVar23 = uVar23 + 1;
                                    } while (uVar17 < uVar19);
                                }
                                local_5a0->~fixed_vector();
                            }
                        }
                        local_5c8 = (shared_ptr*)CONCAT44(local_5c8._4_4_, (int)local_5c8 + -1);
                        eastl::ring_buffer_iterator<ConsoleUI::LineDisplayInfo, ConsoleUI::LineDisplayInfo_const*,
                                                    ConsoleUI::LineDisplayInfo_const&,
                                                    eastl::vector<ConsoleUI::LineDisplayInfo, eastl::allocator>>::
                        operator--((ring_buffer_iterator<ConsoleUI::LineDisplayInfo, ConsoleUI::LineDisplayInfo_const*,
                                                         ConsoleUI::LineDisplayInfo_const&,
                                                         eastl::vector<ConsoleUI::LineDisplayInfo, eastl::allocator>>*)
                                       local_600);
                        eastl::ring_buffer_iterator<console::Line, console::Line*, console::Line&,
                                                    eastl::vector<console::Line, eastl::allocator>>::
                        operator--((ring_buffer_iterator<console::Line, console::Line*, console::Line&,
                                                         eastl::vector<console::Line, eastl::allocator>>*)local_610);
                        auVar3._8_4_ = local_5a0[0].field_8;
                        auVar3._12_4_ = local_5a0[0].field_12;
                        auVar3._0_4_ = local_5a0[0].field_0;
                        auVar3._4_4_ = local_5a0[0].field_4;
                        pCVar25 = local_5b0;
                        iVar9 = (int)local_5f0;
                    }
                } while ((-1 < iVar9) && (-1 < (int)local_5c8));
            }
        }
        local_5a0[0]._0_16_ = auVar3;
        DrawTweaky(pCVar25, local_5a4, (int)local_5c0 - local_5d4, local_5d4);
        local_6d0.~ClippingState();
        auVar4 = (undefined1[16])local_5a0[0]._0_16_;
    LAB_100684cea:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            local_5a0[0]._0_16_ = auVar4;
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100684dd0, 128 bytes, placed by class name
    // ConsoleUI::DrawSnow(int)
    void ConsoleUI::DrawSnow(int param_1) {
        undefined1* this_00;
        ConsoleSnow* this_01;
        int iVar2;
        undefined1 local_30[8];

        this_00 = &field_3896;
        if (!this_00->operator_cast_to_bool()) {
            std::make_unique<ConsoleSnow, graphics::RT7Core&>((RT7Core*)local_30);
            std::unique_ptr<ConsoleSnow, std::default_delete<ConsoleSnow>>::operator=(
                (unique_ptr<ConsoleSnow, std::default_delete<ConsoleSnow>>*)this_00, (unique_ptr*)local_30);
            local_30->~unique_ptr();
        }
        this_01 = (ConsoleSnow*)std::unique_ptr<ConsoleSnow, std::default_delete<ConsoleSnow>>::operator->(
            (unique_ptr<ConsoleSnow, std::default_delete<ConsoleSnow>>*)this_00);
        iVar2 = field_16->GetInterfaceWidth();
        this_01->MainDraw(0, 0, iVar2, param_1);
    }

    // 0x100685250, 512 bytes, placed by class name
    // ConsoleUI::DrawTweaky(int, int, int)
    void ConsoleUI::DrawTweaky(int param_1, int param_2, int param_3) {
        undefined1* puVar1;
        bool bVar2;
        char cVar3;
        int iVar4;
        int iVar5;
        Tweaky* pTVar6;
        SystemSettings* this_00;
        vector* pvVar7;
        int local_3c;
        int local_38;
        int local_34;

        puVar1 = field_2912;
        bVar2 = puVar1->operator_cast_to_bool();
        if (bVar2) {
            local_38 = 0;
            pTVar6 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)puVar1);
            cVar3 = pTVar6->IsAttached();
            if (cVar3 != '\0') {
                this_00 = (SystemSettings*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)puVar1);
                cVar3 = this_00->GetSoftwareNameAsSettingPath();
                pTVar6 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)puVar1);
                if (cVar3 == '\0') {
                    iVar4 = field_16->GetInterfaceHeight();
                    pTVar6->SetVisibleArea(600, iVar4);
                } else {
                    pTVar6->SetVisibleArea(600, param_2 + -1);
                    pTVar6 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)puVar1);
                    pTVar6->Draw(param_1 - field_2524, param_3, field_2524, field_2528);
                }
                pTVar6 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)puVar1);
                pTVar6->Draw(param_1 - field_2524, 0, field_2524, field_2528);
                local_38 = field_2524;
            }
        } else {
            local_38 = 0;
        }
        puVar1 = field_2928;
        bVar2 = puVar1->operator_cast_to_bool();
        if (bVar2) {
            pTVar6 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)puVar1);
            pTVar6->SetVisibleArea(-1, param_2 + -1);
            pTVar6 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)puVar1);
            cVar3 = pTVar6->GetSize((int*)(type*)&local_34, &local_3c);
            if (cVar3 != '\0') {
                pTVar6 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)puVar1);
                pvVar7 = (field_2888, (type*)&local_34)->SSOBeginPtr();
                pTVar6->Draw(*(int*)pvVar7, param_2 - local_3c, local_34, local_3c);
            }
        }
        puVar1 = field_2944;
        bVar2 = puVar1->operator_cast_to_bool();
        if (bVar2) {
            pTVar6 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)puVar1);
            cVar3 = pTVar6->GetSize(&local_34, &local_3c);
            if (cVar3 != '\0') {
                iVar4 = field_16->GetInterfaceWidth();
                iVar5 = local_38 + local_34;
                pTVar6 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)puVar1);
                pTVar6->Draw(iVar4 - iVar5, 0, local_34, local_3c);
            }
        }
    }

    // 0x100685450, 624 bytes, placed by class name
    // ConsoleUI::HandleMouseDown(float, float, graphics::ScaleManager const&)
    undefined8 ConsoleUI::HandleMouseDown(float param_1, float param_2, ScaleManager* param_3) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        Tweaky* pTVar7;
        vector* pvVar8;
        type* ptVar9;
        TextProperties* in_R9;
        StringView SVar10;
        ConsoleEditLine aCStack_a888[128];
        TextFlags in_stack_ffffffffffffff78;
        TextProperties local_78;
        undefined4 local_4c;
        float local_48;
        int local_44;
        float local_40;
        float local_3c;
        TextFlags local_38[8];

        local_40 = param_1;
        local_3c = param_2;
        param_3->ScreenToInterfacePosition(&local_40, &local_3c, false);
        this_00 = field_2912;
        bVar1 = this_00->operator_cast_to_bool();
        if (bVar1) {
            if (field_2512 == 0) {
                pTVar7 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)this_00);
                cVar2 = pTVar7->IsAttached();
                if (cVar2 != '\0')
                    goto LAB_1006854da;
            }
            pTVar7 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)this_00);
            cVar2 = pTVar7->HandleMouseDown(local_40, local_3c);
            if (cVar2 != '\0') {
                return 1;
            }
        }
    LAB_1006854da:
        if (field_2512 != 0) {
            bVar1 = field_2928->operator_cast_to_bool();
            if (bVar1) {
                pTVar7 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)field_2928);
                cVar2 = pTVar7->HandleMouseDown(local_40, local_3c);
                if (cVar2 != '\0') {
                    return 1;
                }
            }
            bVar1 = field_2944->operator_cast_to_bool();
            if (bVar1) {
                pTVar7 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)field_2944);
                cVar2 = pTVar7->HandleMouseDown(local_40, local_3c);
                if (cVar2 != '\0') {
                    return 1;
                }
            }
            iVar3 = math::RoundFloatToInt(local_40);
            local_44 = math::RoundFloatToInt(local_3c);
            cVar2 = (field_2888, iVar3, local_44)->IsInside();
            iVar6 = local_44;
            if (cVar2 != '\0') {
                ptVar9 = (type*)field_32;
                local_4c = 1;
                graphics::TextFlags::TextFlags(local_38, &local_4c, 1);
                new (&local_78) graphics::TextProperties(ptVar9, in_stack_ffffffffffffff78);
                pvVar8 = (field_2888, ptVar9)->SSOBeginPtr();
                iVar6 = *(int*)pvVar8;
                iVar4 = field_2552->GetX();
                (aCStack_a888 + 128)->GetText();
                iVar5 = local_78.GetLineSpacing();
                SVar10.field_8 = (uchar*)0;
                SVar10.field_0 = (ulong)(aCStack_a888 + 128);
                iVar6 = graphics::FontHelpers::PredictCharAtPosMultiline(
                    SVar10, (int*)(ulong)(uint)((iVar3 - iVar6) + iVar4), iVar5, (int)&local_78, in_R9);
                (field_2552, iVar6)->SetPos();
                return 1;
            }
            iVar3 = GetConsoleHeight(this);
            if (iVar6 < iVar3) {
                std::optional<int>::optional<int&, 0>((int*)&local_78);
                field_2544 = local_78.m_pFont._4_1_;
                field_2540 = (int)local_78.m_pFont;
                local_48 = (float)field_2532;
                iVar3 = GetTotalHistoryHeight(this);
                iVar4 = GetLinesAreaHeight(this);
                iVar6 = local_44;
                field_2548 = local_48 / (float)(iVar3 - iVar4);
                if ((field_2888[19] == '\0') && (iVar3 = GetConsoleHeight(this), iVar6 < iVar3)) {
                    return 1;
                }
            }
        }
        return 0;
    }

    // 0x1006856e0, 320 bytes, placed by class name
    // ConsoleUI::HandleMouseUp(float, float, graphics::ScaleManager const&)
    undefined8 ConsoleUI::HandleMouseUp(float param_1, float param_2, ScaleManager* param_3) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        int iVar3;
        Tweaky* pTVar4;
        int iVar5;
        float local_20;
        float local_1c;

        local_20 = param_1;
        local_1c = param_2;
        param_3->ScreenToInterfacePosition(&local_20, &local_1c, false);
        (&field_2540)->reset();
        this_00 = field_2912;
        bVar1 = this_00->operator_cast_to_bool();
        if (bVar1) {
            if (field_2512 == 0) {
                pTVar4 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)this_00);
                cVar2 = pTVar4->IsAttached();
                if (cVar2 != '\0')
                    goto LAB_100685770;
            }
            pTVar4 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)this_00);
            cVar2 = pTVar4->HandleMouseUp(local_20, local_1c);
            if (cVar2 != '\0') {
                return 1;
            }
        }
    LAB_100685770:
        if (field_2512 != 0) {
            bVar1 = field_2928->operator_cast_to_bool();
            if (bVar1) {
                pTVar4 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)field_2928);
                cVar2 = pTVar4->HandleMouseUp(local_20, local_1c);
                if (cVar2 != '\0') {
                    return 1;
                }
            }
            bVar1 = field_2944->operator_cast_to_bool();
            if (bVar1) {
                pTVar4 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)field_2944);
                cVar2 = pTVar4->HandleMouseUp(local_20, local_1c);
                if (cVar2 != '\0') {
                    return 1;
                }
            }
            if (field_2888[19] == '\0') {
                iVar5 = (int)local_1c;
                iVar3 = GetConsoleHeight(this);
                if (iVar5 < iVar3) {
                    return 1;
                }
            }
        }
        return 0;
    }

    // 0x100685830, 464 bytes, placed by class name
    // ConsoleUI::HandleMouseMove(float, float, graphics::ScaleManager const&)
    undefined8 ConsoleUI::HandleMouseMove(float param_1, float param_2, ScaleManager* param_3) {
        undefined1* this_00;
        int* this_01;
        float fVar1;
        bool bVar2;
        char cVar3;
        int iVar4;
        Tweaky* pTVar5;
        int* piVar6;
        int iVar7;
        int local_38;
        undefined1 local_34;
        int local_2c;
        float local_28;
        float local_24;

        local_28 = param_1;
        local_24 = param_2;
        param_3->ScreenToInterfacePosition(&local_28, &local_24, false);
        this_00 = field_2912;
        bVar2 = this_00->operator_cast_to_bool();
        if (bVar2) {
            if (field_2512 == 0) {
                pTVar5 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)this_00);
                cVar3 = pTVar5->IsAttached();
                if (cVar3 != '\0')
                    goto LAB_1006858b6;
            }
            pTVar5 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)this_00);
            cVar3 = pTVar5->HandleMouseMove(local_28, local_24);
            if (cVar3 != '\0') {
                return 1;
            }
        }
    LAB_1006858b6:
        if (field_2512 != 0) {
            bVar2 = field_2928->operator_cast_to_bool();
            if (bVar2) {
                pTVar5 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)field_2928);
                cVar3 = pTVar5->HandleMouseMove(local_28, local_24);
                if (cVar3 != '\0') {
                    return 1;
                }
            }
            bVar2 = field_2944->operator_cast_to_bool();
            if (bVar2) {
                pTVar5 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)field_2944);
                cVar3 = pTVar5->HandleMouseMove(local_28, local_24);
                if (cVar3 != '\0') {
                    return 1;
                }
            }
            this_01 = &field_2540;
            bVar2 = this_01->operator_cast_to_bool();
            if (bVar2) {
                iVar7 = (int)local_24;
                piVar6 = (int*)this_01->value();
                iVar4 = *piVar6;
                local_2c = (int)local_24;
                std::optional<int>::optional<int, 0>(&local_38);
                field_2544 = local_34;
                *this_01 = local_38;
                m_consoleHeight = m_consoleHeight + (iVar7 - iVar4);
                local_38 = GetCommandLineHeight(this);
                local_38 = local_38 * 2;
                local_2c = field_16->GetInterfaceHeight();
                iVar4 = math::Clamp<int>(&m_consoleHeight, &local_38, &local_2c);
                m_consoleHeight = iVar4;
                fVar1 = field_2548;
                iVar4 = GetMaxHistoryScrollOffset(this);
                field_2532 = (int)((float)iVar4 * fVar1);
                return 1;
            }
        }
        return 0;
    }

    // 0x100685ab0, 256 bytes, placed by class name
    // ConsoleUI::HandleMouseOver(float, float, graphics::ScaleManager const&)
    undefined8 ConsoleUI::HandleMouseOver(float param_1, float param_2, ScaleManager* param_3) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        Tweaky* pTVar3;
        float local_20;
        float local_1c;

        local_20 = param_1;
        local_1c = param_2;
        param_3->ScreenToInterfacePosition(&local_20, &local_1c, false);
        this_00 = field_2912;
        bVar1 = this_00->operator_cast_to_bool();
        if (bVar1) {
            if (field_2512 == 0) {
                pTVar3 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)this_00);
                cVar2 = pTVar3->IsAttached();
                if (cVar2 != '\0')
                    goto LAB_100685b30;
            }
            pTVar3 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)this_00);
            cVar2 = pTVar3->HandleMouseOver(local_20, local_1c);
            if (cVar2 != '\0') {
                return 1;
            }
        }
    LAB_100685b30:
        if (field_2512 != 0) {
            bVar1 = field_2928->operator_cast_to_bool();
            if (bVar1) {
                pTVar3 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)field_2928);
                cVar2 = pTVar3->HandleMouseOver(local_20, local_1c);
                if (cVar2 != '\0') {
                    return 1;
                }
            }
            bVar1 = field_2944->operator_cast_to_bool();
            if (bVar1) {
                pTVar3 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)field_2944);
                cVar2 = pTVar3->HandleMouseOver(local_20, local_1c);
                if (cVar2 != '\0') {
                    return 1;
                }
            }
        }
        return 0;
    }

    // 0x100685bb0, 64 bytes, placed by class name
    // ConsoleUI::HandleTouch(unsigned long, float, float)
    undefined8 ConsoleUI::HandleTouch(ulong param_1, float param_2, float param_3) {
        ScaleManager* pSVar1;

        if (param_1 == 0) {
            pSVar1 = (ScaleManager*)field_16->GetScaleManager();
            return HandleMouseDown(this, param_2, param_3, pSVar1);
        }
        return 0;
    }

    // 0x100685bf0, 64 bytes, placed by class name
    // ConsoleUI::HandleTouchUp(unsigned long, float, float)
    undefined8 ConsoleUI::HandleTouchUp(ulong param_1, float param_2, float param_3) {
        ScaleManager* pSVar1;

        if (param_1 == 0) {
            pSVar1 = (ScaleManager*)field_16->GetScaleManager();
            return HandleMouseUp(this, param_2, param_3, pSVar1);
        }
        return 0;
    }

    // 0x100685c30, 64 bytes, placed by class name
    // ConsoleUI::HandleTouchMove(unsigned long, float, float)
    undefined8 ConsoleUI::HandleTouchMove(ulong param_1, float param_2, float param_3) {
        ScaleManager* pSVar1;

        if (param_1 == 0) {
            pSVar1 = (ScaleManager*)field_16->GetScaleManager();
            return HandleMouseMove(this, param_2, param_3, pSVar1);
        }
        return 0;
    }

    // 0x100685c70, 288 bytes, placed by class name
    // ConsoleUI::HandleSwipe(input::gesture::GestureEvent_Swipe const&)
    undefined8 ConsoleUI::HandleSwipe(GestureEvent_Swipe* param_1) {
        int iVar1;
        Input* pIVar2;
        char cVar3;
        undefined1 local_58[16];
        StringView local_48;

        if (field_2512 != 0) {
            if (*(int*)&param_1[1].field_4 == 2) {
                if (*(int*)(param_1 + 1) == 4) {
                    field_2888[18] = 1;
                } else if (*(int*)(param_1 + 1) == 1) {
                    cVar3 = field_48->IsOnScreenKeyboardVisible();
                    pIVar2 = field_48;
                    if (cVar3 == '\0') {
                        local_58->GetText();
                        StringView::to_owned_string<eastl::basic_string<char, BucketAllocatorEASTL>>(&local_48);
                        pIVar2->ShowOnScreenKeyboard(5, &local_48, 4294967295, 0);
                        local_48.~basic_string();
                        iVar1 = *(int*)&param_1[1].field_4;
                    } else {
                        input::Input::HideOnScreenKeyboard();
                        iVar1 = *(int*)&param_1[1].field_4;
                    }
                    goto joined_r0x000100685ce4;
                }
            } else if (*(int*)&param_1[1].field_4 == 1) {
                if (*(int*)(param_1 + 1) == 2) {
                    SetNextCommandFromHistory(this);
                    iVar1 = *(int*)&param_1[1].field_4;
                    goto joined_r0x000100685ce4;
                }
                if (*(int*)(param_1 + 1) == 1) {
                    SetPreviousCommandFromHistory(this);
                    iVar1 = *(int*)&param_1[1].field_4;
                    goto joined_r0x000100685ce4;
                }
            }
        }
        iVar1 = *(int*)&param_1[1].field_4;
    joined_r0x000100685ce4:
        if ((iVar1 == 3) && (*(int*)(param_1 + 1) == 1)) {
            ToggleConsole(this);
        }
        return 0;
    }

    // 0x100685d90, 192 bytes, placed by class name
    // ConsoleUI::SetPreviousCommandFromHistory()
    void ConsoleUI::SetPreviousCommandFromHistory() {
        Console* pCVar1;
        undefined1 in_CL;
        StringView SVar2;
        StringView SVar3;
        undefined1 local_98[16];
        StringView local_88[2];
        basic_string local_68[32];
        undefined1 local_48[16];
        StringView local_38;

        local_98->GetText();
        StringView::to_owned_string<eastl::string>(local_88);
        std::optional<eastl::string>::value_or<eastl::string>(local_68);
        local_88->~basic_string();
        pCVar1 = field_8;
        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_38,
                                                                                      (fixed_string*)local_68);
        SVar3.field_8 = (uchar*)pCVar1;
        SVar3.field_0 = (ulong)local_48;
        console::Console::GetPreviousCommandFromHistory(SVar3);
        SVar2.field_8 = &DAT_00000001;
        SVar2.field_0 = (ulong)local_48;
        SetPromptContents(this, SVar2, (bool)in_CL);
        local_68->~basic_string();
    }

    // 0x100685e50, 192 bytes, placed by class name
    // ConsoleUI::SetNextCommandFromHistory()
    void ConsoleUI::SetNextCommandFromHistory() {
        Console* pCVar1;
        undefined1 in_CL;
        StringView SVar2;
        StringView SVar3;
        undefined1 local_98[16];
        StringView local_88[2];
        basic_string local_68[32];
        undefined1 local_48[16];
        StringView local_38;

        local_98->GetText();
        StringView::to_owned_string<eastl::string>(local_88);
        std::optional<eastl::string>::value_or<eastl::string>(local_68);
        local_88->~basic_string();
        pCVar1 = field_8;
        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_38,
                                                                                      (fixed_string*)local_68);
        SVar2.field_8 = (uchar*)pCVar1;
        SVar2.field_0 = (ulong)local_48;
        console::Console::GetNextCommandFromHistory(SVar2);
        SVar3.field_8 = &DAT_00000001;
        SVar3.field_0 = (ulong)local_48;
        SetPromptContents(this, SVar3, (bool)in_CL);
        local_68->~basic_string();
    }

    // 0x100685f10, 256 bytes, placed by class name
    // ConsoleUI::HandleChar(int)
    undefined8 ConsoleUI::HandleChar(int param_1) {
        undefined1* puVar1;
        bool bVar2;
        char cVar3;
        Tweaky* pTVar4;
        undefined8 uVar5;

        puVar1 = field_2912;
        bVar2 = puVar1->operator_cast_to_bool();
        if (bVar2) {
            if (field_2512 == 0) {
                pTVar4 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)puVar1);
                cVar3 = pTVar4->IsAttached();
                if (cVar3 != '\0')
                    goto LAB_100685f80;
            }
            pTVar4 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)puVar1);
            cVar3 = pTVar4->HasInputFocus();
            if (cVar3 != '\0') {
                pTVar4 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)puVar1);
                cVar3 = pTVar4->HandleChar(param_1);
                if (cVar3 != '\0') {
                    return 1;
                }
            }
        }
    LAB_100685f80:
        if (field_2512 == 0) {
            uVar5 = 0;
        } else {
            if (field_2888[16] == '\0') {
                puVar1 = field_2928;
                bVar2 = puVar1->operator_cast_to_bool();
                if (bVar2) {
                    pTVar4 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)puVar1);
                    cVar3 = pTVar4->HasInputFocus();
                    if (cVar3 != '\0') {
                        pTVar4 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)puVar1);
                        cVar3 = pTVar4->HandleChar(param_1);
                        if (cVar3 != '\0') {
                            return 1;
                        }
                    }
                }
                (field_2552, param_1)->HandleChar();
            } else {
                field_2888[16] = 0;
            }
            uVar5 = 1;
        }
        return uVar5;
    }

    // 0x100686010, 1472 bytes, placed by class name
    // ConsoleUI::HandleKeyDown(int)
    ulong ConsoleUI::HandleKeyDown(int param_1) {
        undefined1* puVar1;
        Console* this_00;
        bool bVar2;
        char cVar3;
        Tweaky* pTVar4;
        char* pcVar5;
        long lVar6;
        undefined1 uVar7;
        uchar* extraout_RDX;
        int iVar8;
        ulong unaff_R14;
        undefined7 uVar9;
        StringView SVar10;
        StringView SVar11;
        StringView local_3f0;
        StringView local_3e0;
        long local_3d0;
        eastl::string local_3c8[32];
        Clipboard local_3a8[8];
        fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true, eastl::allocator> local_3a0[872];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        puVar1 = field_2912;
        bVar2 = puVar1->operator_cast_to_bool();
        if (bVar2) {
            if (field_2512 == 0) {
                pTVar4 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)puVar1);
                cVar3 = pTVar4->IsAttached();
                if (cVar3 != '\0')
                    goto LAB_10068609b;
            }
            pTVar4 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)puVar1);
            cVar3 = pTVar4->HasInputFocus();
            if (cVar3 != '\0') {
                pTVar4 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)puVar1);
                cVar3 = pTVar4->HandleKeyDown(param_1);
                unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8), 1);
                if (cVar3 != '\0')
                    goto LAB_100686413;
            }
        }
    LAB_10068609b:
        if (field_2512 == 0) {
        LAB_100686410:
            unaff_R14 = 0;
            goto LAB_100686413;
        }
        if (param_1 == 7331) {
            ToggleConsole(this);
            goto LAB_1006860ba;
        }
        puVar1 = field_2928;
        bVar2 = puVar1->operator_cast_to_bool();
        if (!bVar2)
            goto LAB_100686131;
        if (param_1 == 53) {
            shared_ptr<tweak::Tweaky>::reset();
            goto LAB_1006860ba;
        }
        pTVar4 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)puVar1);
        cVar3 = pTVar4->HasInputFocus();
        if (cVar3 != '\0') {
            if (param_1 != 48) {
                if (param_1 == 36) {
                    SelectAutocompleteOption(this);
                    goto LAB_1006860ba;
                }
                pTVar4 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)puVar1);
                cVar3 = pTVar4->HandleKeyDown(param_1);
                unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8), 1);
                if (cVar3 != '\0')
                    goto LAB_100686413;
                goto LAB_100686131;
            }
        switchD_100686156_caseD_30:
            field_2888[18] = 1;
            field_2888[16] = 1;
            goto LAB_1006860ba;
        }
    LAB_100686131:
        if (63231 < param_1) {
            if (param_1 < 63276) {
                if (param_1 == 63232) {
                    SetPreviousCommandFromHistory(this);
                } else {
                    if (param_1 != 63233)
                        goto switchD_100686156_caseD_a;
                    SetNextCommandFromHistory(this);
                }
            } else if (param_1 == 63276) {
                cVar3 = input::InputState::IsKeyDown(59);
                if (cVar3 == '\0') {
                    ScrollHistoryPage(this, false);
                } else {
                    ScrollHistoryStart(this);
                }
            } else {
                if (param_1 != 63277)
                    goto switchD_100686156_caseD_a;
                cVar3 = input::InputState::IsKeyDown(59);
                if (cVar3 == '\0') {
                    ScrollHistoryPage(this, true);
                } else {
                    ScrollHistoryEnd(this);
                }
            }
            goto LAB_1006860ba;
        }
        uVar7 = 12;
        uVar9 = (undefined7)(unaff_R14 >> 8);
        switch (param_1) {
        case 8:
            cVar3 = input::InputState::IsKeyDown(59);
            unaff_R14 = CONCAT71(uVar9, 1);
            if (cVar3 != '\0') {
                cVar3 = field_2552->IsEmpty();
                if (cVar3 == '\0') {
                    (field_2552, param_1)->HandleKeyDown();
                } else {
                    CopyEntireBufferToClipboard(this);
                }
            }
            goto LAB_100686413;
        case 9:
            cVar3 = input::InputState::IsKeyDown(59);
            unaff_R14 = CONCAT71(uVar9, 1);
            if (cVar3 != '\0') {
                Clipboard::Clipboard(local_3a8);
                eastl::string::basic_string(local_3c8);
                cVar3 = local_3a8->GetText(local_3c8);
                if (cVar3 != '\0') {
                    pcVar5 = (char*)eastl::string::back();
                    if (*pcVar5 == '\n') {
                        lVar6 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                        eastl::string::resize(local_3c8, lVar6 - 1);
                    }
                    pcVar5 = (char*)eastl::string::back();
                    if (*pcVar5 == '\r') {
                        lVar6 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                        eastl::string::resize(local_3c8, lVar6 - 1);
                    }
                    lVar6 = local_3c8->find_first_of("\r\n", 0);
                    if (lVar6 == -1) {
                        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(
                            &local_3f0, (fixed_string*)local_3c8);
                        SVar11.field_8 = extraout_RDX;
                        SVar11.field_0 = (ulong)&local_3f0;
                        (field_2552, SVar11)->Insert();
                    } else {
                        eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                                            eastl::allocator>::fixed_vector(local_3a0);
                        tokenize<eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                                                     eastl::allocator>,
                                 eastl::fixed_string<char, 2048, true, eastl::allocator>>(
                            (fixed_vector*)local_3a0, (fixed_string*)local_3c8, "\r\n", -1);
                        lVar6 = local_3a0->HeapBeginPtr();
                        local_3d0 = local_3a0->end();
                        if (lVar6 != local_3d0) {
                            iVar8 = 1;
                            do {
                                this_00 = field_8;
                                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                this_00->QueueCommand(pcVar5, "Clipboard", iVar8, true);
                                iVar8 = iVar8 + 1;
                                lVar6 = lVar6 + 104;
                            } while (lVar6 != local_3d0);
                        }
                        eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                                            eastl::allocator>::~fixed_vector(local_3a0);
                    }
                    ResetStoredPromptContents(this);
                }
                eastl::string::~basic_string(local_3c8);
                local_3a8->~Clipboard();
            }
            goto LAB_100686413;
        default:
        switchD_100686156_caseD_a:
            cVar3 = (field_2552, param_1)->HandleKeyDown();
            if (cVar3 == '\0')
                goto LAB_100686410;
            ResetStoredPromptContents(this);
            break;
        case 36:
            QueueCommandFromInput(this);
            break;
        case 48:
            goto switchD_100686156_caseD_30;
        case 53:
            field_8->ResetCommandHistoryCursor();
            std::optional<eastl::string>::value_or<char const(&)[1]>((optional<eastl::string>*)local_3a0, &field_3968);
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_3e0,
                                                                                          (fixed_string*)local_3a0);
            SVar10.field_8 = (uchar*)0;
            SVar10.field_0 = (ulong)&local_3e0;
            SetPromptContents(this, SVar10, (bool)uVar7);
            local_3a0->~basic_string();
        }
    LAB_1006860ba:
        unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8), 1);
    LAB_100686413:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return unaff_R14 & 4294967295;
    }

    // 0x1006865d0, 448 bytes, placed by class name
    // ConsoleUI::SelectAutocompleteOption()
    void ConsoleUI::SelectAutocompleteOption() {
        bool bVar1;
        long* plVar2;
        basic_string* pbVar3;
        long lVar4;
        uchar* extraout_RDX;
        StringView SVar5;
        StringView local_b8;
        eastl local_a8[32];
        StringView local_88[2];
        undefined1 local_68[16];
        eastl::string local_58[32];
        shared_ptr local_38;

        bVar1 = field_2928->operator_cast_to_bool();
        if (!bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_autocompleteSuggestions",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/console/ConsoleUI.cpp",
                      1027, (char*)0);
        }
        weak_ptr<oldscape::rs2lib::IfType>::lock();
        bVar1 = shared_ptr::operator_cast_to_bool(&local_38);
        if (bVar1) {
            plVar2 = (long*)shared_ptr<tweak::List>::operator->((shared_ptr<tweak::List>*)&local_38);
            pbVar3 = (basic_string*)(**(code**)(*plVar2 + 168))(plVar2);
            eastl::string::basic_string(local_58, pbVar3);
            console::Console::StripVariablePromptParts((basic_string*)local_58);
            lVar4 = local_58->find(' ', 0);
            if (lVar4 == -1) {
                eastl::string::operator+=(local_58, " ");
            }
            local_68->GetAutocompletionPrefix();
            StringView::to_owned_string<eastl::string>(local_88);
            eastl::operator+(local_a8, (basic_string*)local_88, (basic_string*)local_58);
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_b8,
                                                                                          (fixed_string*)local_a8);
            SVar5.field_8 = extraout_RDX;
            SVar5.field_0 = (ulong)&local_b8;
            (field_2552, SVar5)->SetText();
            local_a8->~basic_string();
            local_88->~basic_string();
            field_2552->End();
            shared_ptr<tweak::Tweaky>::reset();
            weak_ptr<tweak::List>::reset();
            field_8->ResetCommandHistoryCursor();
            eastl::string::~basic_string(local_58);
        }
        local_38.~shared_ptr();
    }

    // 0x100686790, 144 bytes, placed by class name
    // ConsoleUI::QueueCommandFromInput()
    void ConsoleUI::QueueCommandFromInput() {
        Console* this_00;
        char* pcVar1;
        char cVar2;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL> local_30[16];

        local_30->GetText();
        cVar2 = local_30->empty();
        if (cVar2 == '\0') {
            this_00 = field_8;
            pcVar1 = (char*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_30);
            this_00->QueueCommand(pcVar1, "", -1, true);
            field_2552->Reset();
            (&field_3968)->reset();
            field_4008 = 0;
        }
    }

    // 0x100686830, 448 bytes, placed by class name
    // ConsoleUI::CopyEntireBufferToClipboard()
    void ConsoleUI::CopyEntireBufferToClipboard() {
        long lVar3;
        uchar* extraout_RDX;
        StringView SVar4;
        reverse_iterator local_2b0[16];
        StringView local_2a0;
        eastl::string local_290[32];
        reverse_iterator local_270[16];
        fixed_string<char, 512, true, eastl::allocator> local_260[552];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(local_260);
        eastl::string::basic_string(local_290);
        eastl::string::reserve(local_290, 4096);
        field_8->GetMaterial();
        eastl::ring_buffer<console::Line, eastl::vector<console::Line, eastl::allocator>, eastl::allocator>::rbegin();
        while (true) {
            eastl::ring_buffer<console::Line, eastl::vector<console::Line, eastl::allocator>, eastl::allocator>::rend();
            if (!eastl::operator!=(local_270, local_2b0))
                break;
            lVar3 = eastl::reverse_iterator<
                eastl::ring_buffer_iterator<console::Line, console::Line_const*, console::Line_const&,
                                            eastl::vector<console::Line, eastl::allocator>>>::
            operator*(
                (reverse_iterator<eastl::ring_buffer_iterator<console::Line, console::Line_const*, console::Line_const&,
                                                              eastl::vector<console::Line, eastl::allocator>>>*)
                    local_270);
            StringView::StringView<eastl::fixed_string<char, 512, true, eastl::allocator>>(&local_2a0,
                                                                                           (fixed_string*)(lVar3 + 8));
            SVar4.field_8 = extraout_RDX;
            SVar4.field_0 = (ulong)&local_2a0;
            graphics::FontHelpers::StripTags<eastl::fixed_string<char, 512, true, eastl::allocator>>(
                (fixed_string*)local_260, SVar4);
            eastl::operator+=((basic_string*)local_290, (fixed_string*)local_260);
            eastl::string::operator+=(local_290, "\n");
            eastl::reverse_iterator<
                eastl::ring_buffer_iterator<console::Line, console::Line_const*, console::Line_const&,
                                            eastl::vector<console::Line, eastl::allocator>>>::
            operator++(
                (reverse_iterator<eastl::ring_buffer_iterator<console::Line, console::Line_const*, console::Line_const&,
                                                              eastl::vector<console::Line, eastl::allocator>>>*)
                    local_270);
        }
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
            '\0') {
            new (local_270) Clipboard();
            Clipboard::SetText<eastl::basic_string<char, BucketAllocatorEASTL>>((basic_string*)local_270);
            local_270->~Clipboard();
        }
        eastl::string::~basic_string(local_290);
        /* WARNING: Subroutine does not return */
        local_260->~fixed_string();
    }

    // 0x100686a20, 288 bytes, placed by class name
    // ConsoleUI::SetPromptContents(StringView, bool)
    void ConsoleUI::SetPromptContents(StringView param_1, bool param_2) {
        undefined1* this_00;
        bool bVar1;
        undefined4 uVar2;
        int iVar3;
        fixed_string* pfVar4;
        uchar* extraout_RDX;
        uchar* extraout_RDX_00;
        StringView* this_01;
        StringView SVar6;
        StringView SVar7;
        undefined1 local_80[16];
        StringView local_70;
        StringView local_60;
        StringView local_50[2];

        this_01 = (StringView*)param_1.field_0;
        this_00 = &field_3968;
        if ((int)param_1.field_8 == 0) {
            this_00->reset();
        } else {
            bVar1 = this_00->operator_cast_to_bool();
            if (!bVar1) {
                local_80->GetText();
                StringView::to_owned_string<eastl::string>(local_50);
                std::optional<eastl::string>::operator=((optional<eastl::string>*)this_00, (basic_string*)local_50);
                local_50->~basic_string();
            }
        }
        bVar1 = this_00->operator_cast_to_bool();
        uVar2 = 0;
        if (bVar1) {
            pfVar4 = (fixed_string*)this_00->value();
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_70, pfVar4);
            SVar6.field_8 = extraout_RDX;
            SVar6.field_0 = (ulong)&local_70;
            if (this_01->find(SVar6) == 0) {
                this_00->value();
                uVar2 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            }
        }
        field_4008 = uVar2;
        new (&local_60) StringView(this_01);
        SVar7.field_8 = extraout_RDX_00;
        SVar7.field_0 = (ulong)&local_60;
        (field_2552, SVar7)->SetText();
        iVar3 = this_01->HeapBeginPtr();
        (field_2552, iVar3)->SetPos();
    }

    // 0x100686bd0, 96 bytes, placed by class name
    // ConsoleUI::ScrollHistoryPage(bool)
    void ConsoleUI::ScrollHistoryPage(bool param_1) {
        int iVar1;
        int iVar2;
        undefined7 in_register_00000031;
        int local_20;
        int local_1c;

        iVar1 = GetLinesAreaHeight(this);
        iVar2 = -iVar1;
        if ((int)CONCAT71(in_register_00000031, param_1) == 0) {
            iVar2 = iVar1;
        }
        field_2532 = field_2532 + iVar2;
        local_20 = 0;
        local_1c = GetMaxHistoryScrollOffset(this);
        iVar2 = math::Clamp<int>(&field_2532, &local_20, &local_1c);
        field_2532 = iVar2;
    }

    // 0x100686c40, 240 bytes, placed by class name
    // ConsoleUI::HandleKeyUp(int)
    undefined8 ConsoleUI::HandleKeyUp(int param_1) {
        undefined1* puVar1;
        bool bVar2;
        char cVar3;
        Tweaky* pTVar4;
        undefined8 uVar5;

        field_2888[16] = 0;
        puVar1 = field_2912;
        bVar2 = puVar1->operator_cast_to_bool();
        if (bVar2) {
            if (field_2512 == 0) {
                pTVar4 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)puVar1);
                cVar3 = pTVar4->IsAttached();
                if (cVar3 != '\0')
                    goto LAB_100686cb6;
            }
            pTVar4 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)puVar1);
            cVar3 = pTVar4->HasInputFocus();
            if (cVar3 != '\0') {
                pTVar4 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)puVar1);
                cVar3 = pTVar4->HandleKeyUp(param_1);
                if (cVar3 != '\0') {
                    return 1;
                }
            }
        }
    LAB_100686cb6:
        if (field_2512 == 0) {
            uVar5 = 0;
        } else {
            puVar1 = field_2928;
            bVar2 = puVar1->operator_cast_to_bool();
            if (bVar2) {
                pTVar4 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)puVar1);
                cVar3 = pTVar4->HasInputFocus();
                if (cVar3 != '\0') {
                    pTVar4 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)puVar1);
                    cVar3 = pTVar4->HandleKeyUp(param_1);
                    if (cVar3 != '\0') {
                        return 1;
                    }
                }
            }
            uVar5 = (field_2552, param_1)->HandleKeyUp();
        }
        return uVar5;
    }

    // 0x100686d30, 400 bytes, placed by class name
    // ConsoleUI::HandleMouseWheel(float, float, float, graphics::ScaleManager const&)
    undefined8 ConsoleUI::HandleMouseWheel(float param_1, float param_2, float param_3, ScaleManager* param_4) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        int iVar3;
        Tweaky* pTVar4;
        int local_3c[3];
        float local_30;
        float local_2c;
        float local_24;

        local_2c = param_1;
        local_24 = param_2;
        param_4->ScreenToInterfacePosition(&local_2c, &local_24, false);
        bVar1 = (&field_3920)->operator_cast_to_bool();
        if (bVar1) {
            cVar2 = std::function<bool(float, float, float, graphics::ScaleManager_const&)>::operator()(
                local_2c, local_24, param_3, (ScaleManager*)&field_3920);
            if (cVar2 != '\0') {
                return 1;
            }
        }
        this_00 = field_2912;
        bVar1 = this_00->operator_cast_to_bool();
        if (bVar1) {
            if (field_2512 == 0) {
                pTVar4 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)this_00);
                cVar2 = pTVar4->IsAttached();
                if (cVar2 != '\0')
                    goto LAB_100686df9;
            }
            pTVar4 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)this_00);
            cVar2 = pTVar4->HandleMouseWheel(local_2c, local_24, param_3);
            if (cVar2 != '\0') {
                return 1;
            }
        }
    LAB_100686df9:
        if (field_2512 != 0) {
            bVar1 = field_2928->operator_cast_to_bool();
            if (bVar1) {
                pTVar4 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)field_2928);
                cVar2 = pTVar4->HandleMouseWheel(local_2c, local_24, param_3);
                if (cVar2 != '\0') {
                    return 1;
                }
            }
            local_30 = local_24;
            iVar3 = GetConsoleHeight(this);
            if (local_30 <= (float)iVar3) {
                local_3c[0] = (int)(param_3 * 25.0) + field_2532;
                local_3c[1] = 0;
                local_3c[2] = GetMaxHistoryScrollOffset(this);
                iVar3 = math::Clamp<int>(local_3c, local_3c + 1, local_3c + 2);
                field_2532 = iVar3;
                return 1;
            }
        }
        return 0;
    }

    // 0x100687050, 1488 bytes, placed by class name
    // ConsoleUI::SetAutocompleteMatches(char const*, int, eastl::vector<eastl::string, eastl::allocator>&&)
    void ConsoleUI::SetAutocompleteMatches(char* param_1, int param_2, vector* param_3) {
        undefined1* this_00;
        Console* this_01;
        ConsoleUI* this_02;
        char* pcVar1;
        char cVar2;
        bool bVar3;
        int iVar4;
        int iVar5;
        undefined4 uVar6;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>* this_03;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>* pbVar7;
        long lVar8;
        eastl::string* this_04;
        StringView* pSVar9;
        StringView* pSVar10;
        basic_string* pbVar11;
        ulong uVar12;
        long lVar13;
        ulong uVar14;
        vector* pvVar15;
        uchar* extraout_RDX;
        uchar* extraout_RDX_00;
        StringView SVar16;
        StringView SVar17;
        StringView SVar18;
        StringView local_228;
        StringView local_218;
        StringView local_208;
        basic_string local_1f8[32];
        StringView local_1d8[2];
        hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
                 eastl::allocator, false>* local_1b8;
        ConsoleUI* local_1b0;
        vector* local_1a8;
        char* local_1a0;
        StringView local_198[2];
        ShuffledPacketFactory local_178;
        uint local_164;
        ShuffledPacketFactory local_160[18];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_1b8 = (hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
                              eastl::allocator, false>*)&field_3840;
        pvVar15 = param_3;
        local_1b0 = this;
        local_1a0 = param_1;
        local_164 = param_2;
        local_1b8->clear();
        this_03 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)
                      param_3->HeapBeginPtr();
        local_1a8 = param_3;
        pbVar7 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)
                     param_3->end();
        if (this_03 != pbVar7) {
            do {
                lVar8 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::find(this_03,
                                                                                                             ':', 0);
                if (lVar8 != -1) {
                    eastl::string::substr((ulong)local_160, (ulong)this_03);
                    pvVar15 = (vector*)18446744073709551615;
                    eastl::string::substr((ulong)local_1f8, (ulong)this_03);
                    console::Console::ColouriseCommandAndHelp((basic_string*)local_160, local_1f8);
                    this_04 = (eastl::string*)eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                              eastl::equal_to<eastl::string>, eastl::allocator,
                                                              false>::operator[](local_1b8, (basic_string*)local_160);
                    eastl::string::swap(this_04, local_1f8);
                    this_03->swap(local_160);
                    local_1f8->~basic_string();
                    local_160->~basic_string();
                }
                this_03 = this_03 + 32;
            } while (this_03 != pbVar7);
        }
        new (local_1f8) eastl::vector<StringView, eastl::allocator>();
        this_02 = local_1b0;
        local_178.GetAutocompletionPrefix();
        this_01 = this_02->field_8;
        this_00 = this_02->field_2552;
        local_160->GetText();
        ShuffledPacketFactory::p2_alt2(&local_178);
        local_228.substr((ulong)local_160);
        SVar18.field_8 = (uchar*)pvVar15;
        SVar18.field_0 = (ulong)&local_228;
        this_01->GetAlphabeticListOfMatchingCommands(local_1f8, SVar18);
        pSVar9 = (StringView*)local_1f8->HeapBeginPtr();
        pSVar10 = (StringView*)local_1f8->end();
        pvVar15 = local_1a8;
        for (; pSVar9 != pSVar10; pSVar9 = pSVar9 + 1) {
            AddEntryUniqueFirstWord<eastl::vector<eastl::string, eastl::allocator>, StringView>(pvVar15, pSVar9, true);
        }
        cVar2 = pvVar15->empty();
        if (cVar2 == '\0') {
            lVar8 = pvVar15->size();
            if (lVar8 == 1) {
                pbVar11 = (basic_string*)eastl::vector<eastl::string, eastl::allocator>::operator[](
                    (vector<eastl::string, eastl::allocator>*)pvVar15, 0);
                new (local_160) eastl::string(pbVar11);
                console::Console::StripVariablePromptParts((basic_string*)local_160);
                eastl::string::operator+=((eastl::string*)local_160, ' ');
                StringView::to_owned_string<eastl::string>(local_1d8);
                eastl::operator+((eastl*)local_198, (basic_string*)local_1d8, (basic_string*)local_160);
                StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_218,
                                                                                              (fixed_string*)local_198);
                SVar16.field_8 = extraout_RDX;
                SVar16.field_0 = (ulong)&local_218;
                this_00->SetText(SVar16);
                local_198->~basic_string();
                local_1d8->~basic_string();
                iVar4 = ShuffledPacketFactory::p2_alt2(&local_178);
                iVar5 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                this_00->SetPos(iVar4 + iVar5);
                shared_ptr<tweak::Tweaky>::reset();
                local_160->~basic_string();
            } else {
                uVar12 = GetStringsMinimumCommonLength<eastl::vector<eastl::string, eastl::allocator>>(pvVar15, 50);
                local_160->GetText();
                lVar8 = ShuffledPacketFactory::p2_alt2(local_160);
                lVar13 = ShuffledPacketFactory::p2_alt2(&local_178);
                if ((ulong)(lVar8 - lVar13) < uVar12) {
                    StringView::to_owned_string<eastl::string>(local_198);
                    uVar14 = eastl::vector<eastl::string, eastl::allocator>::operator[](
                        (vector<eastl::string, eastl::allocator>*)pvVar15, 0);
                    eastl::string::substr((ulong)local_1d8, uVar14);
                    eastl::operator+((eastl*)local_160, (basic_string*)local_198, (basic_string*)local_1d8);
                    StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(
                        &local_208, (fixed_string*)local_160);
                    SVar17.field_8 = extraout_RDX_00;
                    SVar17.field_0 = (ulong)&local_208;
                    this_00->SetText(SVar17);
                    local_160->~basic_string();
                    local_1d8->~basic_string();
                    local_198->~basic_string();
                    iVar4 = ShuffledPacketFactory::p2_alt2(&local_178);
                    this_00->SetPos(iVar4 + (int)uVar12);
                }
                uVar6 = pvVar15->size();
                pcVar1 = local_1a0;
                SetAutocompleteOptions(this_02, pvVar15, local_1a0 == (char*)0);
                if (pcVar1 != (char*)0) {
                    weak_ptr<oldscape::rs2lib::IfType>::lock();
                    bVar3 = local_198->operator_cast_to_bool();
                    if (bVar3) {
                        new (local_160) eastl::fixed_string<char, 256, true, eastl::allocator>();
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                            sprintf((char*)local_160, "%s%d%s matches, %s%d sent", "<col=ffff80>", (ulong)local_164,
                                    "</col>", "<col=ff8080>", uVar6);
                        pbVar11 =
                            (basic_string*)shared_ptr<tweak::Label>::operator->((shared_ptr<tweak::Label>*)local_198);
                        tweak::Control::SetText<eastl::string>(pbVar11);
                        /* WARNING: Subroutine does not return */
                        local_160->~fixed_string();
                    }
                    local_198->~shared_ptr();
                }
            }
        } else {
            shared_ptr<tweak::Tweaky>::reset();
        }
        local_1f8->~vector();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100687980, 592 bytes, placed by class name
    // ConsoleUI::SetAutocompleteOptions(eastl::vector<eastl::string, eastl::allocator>&&, bool)
    void ConsoleUI::SetAutocompleteOptions(vector* param_1, bool param_2) {
        undefined1* this_00;
        List* this_01;
        Label* pLVar1;
        Tweaky* pTVar2;
        Control* this_02;
        shared_ptr local_88;
        shared_ptr local_78;
        shared_ptr local_68[3];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        make_shared<tweak::Tweaky, graphics::RT7Core*&, graphics::FontHelpers*&, input::Input*&>(
            (jag*)local_68, &field_16, &field_24, &field_48);
        this_00 = field_2928;
        shared_ptr<tweak::Tweaky>::operator=((shared_ptr<tweak::Tweaky>*)this_00, local_68);
        local_68->~shared_ptr();
        make_shared<tweak::List, char const(&)[8], eastl::vector<eastl::string, eastl::allocator>>((jag*)&local_78,
                                                                                                   "Matches", param_1);
        make_shared<tweak::Label, char const(&)[1]>((jag*)&local_88, "");
        this_01 = (List*)shared_ptr<tweak::List>::operator->((shared_ptr<tweak::List>*)&local_78);
        this_01->Sort();
        pLVar1 = (Label*)shared_ptr<tweak::Label>::operator->((shared_ptr<tweak::Label>*)&local_88);
        pLVar1->SetMaxWidth(350);
        pLVar1 = (Label*)shared_ptr<tweak::Label>::operator->((shared_ptr<tweak::Label>*)&local_88);
        pLVar1->SetNonShrinking();
        pTVar2 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)this_00);
        new (local_68) shared_ptr<oldscape::dash3d::Decor>(&local_78);
        pTVar2->Add(local_68);
        local_68->~shared_ptr();
        pTVar2 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)this_00);
        new (local_68) shared_ptr<oldscape::dash3d::Decor>(&local_88);
        pTVar2->Add(local_68);
        local_68->~shared_ptr();
        pTVar2 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)this_00);
        pTVar2->SetFont(field_32);
        pTVar2 = (Tweaky*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)this_00);
        new (local_68) shared_ptr<oldscape::dash3d::Decor>(&local_78);
        pTVar2->SetFocus(local_68);
        local_68->~shared_ptr();
        weak_ptr<tweak::List>::operator=((weak_ptr<tweak::List>*)&field_3808, &local_78);
        weak_ptr<tweak::Label>::operator=((weak_ptr<tweak::Label>*)&field_3824, &local_88);
        if (param_2) {
            ShowCommandListHelp();
        }
        field_8->ResetCommandHistoryCursor();
        this_02 = (Control*)shared_ptr<tweak::List>::operator->((shared_ptr<tweak::List>*)&local_78);
        std::function<void(tweak::Event_const&)>::function<
            ConsoleUI::SetAutocompleteOptions(eastl::vector<eastl::string, eastl::allocator>&&, bool)::__14, void>(
            local_68, this, param_2);
        this_02->SetHandler(local_68);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_68);
        local_88.~shared_ptr();
        local_78.~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100687d60, 288 bytes, placed by class name
    // ConsoleUI::ShowCommandListHelp()
    void ConsoleUI::ShowCommandListHelp() {
        Control* this;
        basic_string* pbVar1;
        bool bVar2;
        long* plVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_58[16];
        basic_string local_48[16];
        shared_ptr local_38;
        shared_ptr local_28;

        weak_ptr<oldscape::rs2lib::IfType>::lock();
        weak_ptr<oldscape::rs2lib::IfType>::lock();
        bVar2 = shared_ptr::operator_cast_to_bool(&local_38);
        if (bVar2) {
            bVar2 = shared_ptr::operator_cast_to_bool(&local_28);
            if (bVar2) {
                plVar3 = (long*)shared_ptr<tweak::List>::operator->((shared_ptr<tweak::List>*)&local_38);
                (**(code**)(*plVar3 + 168))(plVar3);
                eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, eastl::string>, eastl::allocator,
                                 eastl::use_first<eastl::pair<eastl::stringconst, eastl::string>>,
                                 eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                 true>::find(local_48);
                eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                bVar2 = eastl::operator==((eastl*)local_48, local_58, extraout_RDX);
                if (bVar2) {
                    this = (Control*)shared_ptr<tweak::Label>::operator->((shared_ptr<tweak::Label>*)&local_28);
                    SetText("");
                } else {
                    pbVar1 = (basic_string*)shared_ptr<tweak::Label>::operator->((shared_ptr<tweak::Label>*)&local_28);
                    local_48->HeapBeginPtr();
                    tweak::Control::SetText<eastl::string>(pbVar1);
                }
            }
        }
        local_28.~shared_ptr();
        local_38.~shared_ptr();
    }

    // 0x100688200, 976 bytes, placed by class name
    // ConsoleUI::InitialiseHistoryTweaky()
    void ConsoleUI::InitialiseHistoryTweaky() {
        bool bVar1;
        char* pcVar2;
        long* plVar3;
        Container* pCVar4;
        shared_ptr<tweak::Container> local_88[16];
        shared_ptr<tweak::Container> local_78[16];
        shared_ptr<tweak::Container> local_68[16];
        shared_ptr local_58[3];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        make_shared<tweak::Tweaky, graphics::RT7Core*&, graphics::FontHelpers*&, input::Input*&>(
            (jag*)local_58, &field_16, &field_24, &field_48);
        shared_ptr<tweak::Tweaky>::operator=((shared_ptr<tweak::Tweaky>*)field_2944, local_58);
        local_58->~shared_ptr();
        pcVar2 = (char*)shared_ptr<tweak::Tweaky>::operator->((shared_ptr<tweak::Tweaky>*)field_2944);
        local_88->AddGroup(pcVar2);
        bVar1 = (bool)shared_ptr<tweak::Container>::operator->(local_88);
        ((char*)local_78)->AddGroup(bVar1);
        bVar1 = (bool)shared_ptr<tweak::Container>::operator->(local_88);
        ((char*)local_68)->AddGroup(bVar1);
        plVar3 = (long*)shared_ptr<tweak::Container>::operator->(local_78);
        (**(code**)(*plVar3 + 240))(plVar3, 1);
        plVar3 = (long*)shared_ptr<tweak::Container>::operator->(local_68);
        (**(code**)(*plVar3 + 240))(plVar3, 1);
        pCVar4 = (Container*)shared_ptr<tweak::Container>::operator->(local_78);
        std::function<void(tweak::Event_const&)>::function<ConsoleUI::InitialiseHistoryTweaky()::__15, void>(local_58,
                                                                                                             this);
        pCVar4->AddButton("Tab", 65, local_58);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_58);
        pCVar4 = (Container*)shared_ptr<tweak::Container>::operator->(local_78);
        std::function<void(tweak::Event_const&)>::function<ConsoleUI::InitialiseHistoryTweaky()::__16, void>(local_58,
                                                                                                             this);
        pCVar4->AddButton("^", 65, local_58);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_58);
        pCVar4 = (Container*)shared_ptr<tweak::Container>::operator->(local_78);
        std::function<void(tweak::Event_const&)>::function<ConsoleUI::InitialiseHistoryTweaky()::__17, void>(local_58,
                                                                                                             this);
        pCVar4->AddButton("~", 65, local_58);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_58);
        pCVar4 = (Container*)shared_ptr<tweak::Container>::operator->(local_78);
        std::function<void(tweak::Event_const&)>::function<ConsoleUI::InitialiseHistoryTweaky()::__18, void>(local_58,
                                                                                                             this);
        pCVar4->AddButton("Backspace", 65, local_58);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_58);
        pCVar4 = (Container*)shared_ptr<tweak::Container>::operator->(local_78);
        std::function<void(tweak::Event_const&)>::function<ConsoleUI::InitialiseHistoryTweaky()::__19, void>(local_58,
                                                                                                             this);
        pCVar4->AddButton("Close", 65, local_58);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_58);
        pCVar4 = (Container*)shared_ptr<tweak::Container>::operator->(local_68);
        std::function<void(tweak::Event_const&)>::function<ConsoleUI::InitialiseHistoryTweaky()::__20, void>(local_58,
                                                                                                             this);
        pCVar4->AddButton("<", 65, local_58);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_58);
        pCVar4 = (Container*)shared_ptr<tweak::Container>::operator->(local_68);
        std::function<void(tweak::Event_const&)>::function<ConsoleUI::InitialiseHistoryTweaky()::__21, void>(local_58,
                                                                                                             this);
        pCVar4->AddButton("v", 65, local_58);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_58);
        pCVar4 = (Container*)shared_ptr<tweak::Container>::operator->(local_68);
        std::function<void(tweak::Event_const&)>::function<ConsoleUI::InitialiseHistoryTweaky()::__22, void>(local_58,
                                                                                                             this);
        pCVar4->AddButton(">", 65, local_58);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_58);
        pCVar4 = (Container*)shared_ptr<tweak::Container>::operator->(local_68);
        std::function<void(tweak::Event_const&)>::function<ConsoleUI::InitialiseHistoryTweaky()::__23, void>(local_58,
                                                                                                             this);
        pCVar4->AddButton("Enter", 65, local_58);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_58);
        pCVar4 = (Container*)shared_ptr<tweak::Container>::operator->(local_68);
        std::function<void(tweak::Event_const&)>::function<ConsoleUI::InitialiseHistoryTweaky()::__24, void>(local_58,
                                                                                                             this);
        pCVar4->AddButton("Keyboard", 65, local_58);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_58);
        local_68->~shared_ptr();
        local_78->~shared_ptr();
        local_88->~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100688670, 48 bytes, placed by class name
    // ConsoleUI::SetAttachedTweaky(shared_ptr<tweak::Tweaky> const&)
    void ConsoleUI::SetAttachedTweaky(shared_ptr* param_1) {
        shared_ptr<tweak::Tweaky>::operator=((shared_ptr<tweak::Tweaky>*)field_2912, param_1);
        field_2524 = 0;
        field_2528 = 0;
    }

    // 0x100688900, 208 bytes, placed by class name
    // ConsoleUI::ProcessAutocompleteRequest()
    void ConsoleUI::ProcessAutocompleteRequest() {
        undefined1* this_00;
        Console* pCVar1;
        char cVar3;
        uchar* extraout_RDX;
        StringView SVar4;
        StringView SVar5;
        undefined1 local_98[16];
        undefined1 local_88[64];
        int local_48;
        StringView local_40;

        pCVar1 = field_8;
        this_00 = field_2552;
        local_98->GetText();
        this_00->GetZ();
        SVar5.field_8 = (uchar*)pCVar1;
        SVar5.field_0 = (ulong)local_88;
        console::Console::SearchCommands(SVar5, (int)(ConsoleEditLine*)local_98);
        if (local_88->operator_cast_to_bool()) {
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_40,
                                                                                          (fixed_string*)local_88);
            SVar4.field_8 = extraout_RDX;
            SVar4.field_0 = (ulong)&local_40;
            this_00->SetText(SVar4);
            this_00->SetPos(local_48);
            cVar3 = ((local_88 + 32))->empty();
            if (cVar3 == '\0') {
                SetAutocompleteOptions(this, (vector*)(local_88 + 32), true);
            }
        }
        local_88->~SearchResult();
    }

    // 0x100688a00, 320 bytes, placed by class name
    // ConsoleUI::OnHistoryEntryAdded(console::Line const&, bool)
    void ConsoleUI::OnHistoryEntryAdded(Line* param_1, bool param_2) {
        int iVar1;
        int* piVar2;
        long lVar3;
        bool bVar4;
        byte bVar5;
        TextProperties* in_RCX;
        StringView SVar7;
        StringView aSStack_888[128];
        TextFlags in_stack_ffffffffffffff78;
        TextProperties local_78;
        Line* local_50;
        LineDisplayInfo local_48;
        VeccType local_38[8];

        bVar4 = field_32->operator_cast_to_bool();
        if (bVar4) {
            if (param_2) {
                local_50 = param_1;
                piVar2 = (int*)(&field_2456)->capacity();
                iVar1 = *piVar2;
                eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, BucketAllocatorEASTL>,
                                   BucketAllocatorEASTL>::end();
                eastl::ring_buffer<SwipeDelta, eastl::vector<SwipeDelta, eastl::allocator>, eastl::allocator>::end();
                bVar4 = eastl::operator!=((ring_buffer_iterator*)&local_78, (ring_buffer_iterator*)&local_48);
                if (bVar4) {
                    do {
                        lVar3 = local_78.end();
                        *(int*)(lVar3 + 4) = *(int*)(lVar3 + 4) - iVar1;
                        eastl::ring_buffer_iterator<ConsoleUI::LineDisplayInfo, ConsoleUI::LineDisplayInfo*,
                                                    ConsoleUI::LineDisplayInfo&,
                                                    eastl::vector<ConsoleUI::LineDisplayInfo, eastl::allocator>>::
                        operator++(
                            (ring_buffer_iterator<
                                ConsoleUI::LineDisplayInfo, ConsoleUI::LineDisplayInfo*, ConsoleUI::LineDisplayInfo&,
                                eastl::vector<ConsoleUI::LineDisplayInfo, eastl::allocator>>*)&local_78);
                        bVar4 = eastl::operator!=((ring_buffer_iterator*)&local_78, (ring_buffer_iterator*)&local_48);
                    } while (bVar4);
                }
                param_1 = local_50;
            }
            oldscape::configdecoder::VeccType::VeccType(local_38);
            new (&local_78) graphics::TextProperties((shared_ptr*)field_32, in_stack_ffffffffffffff78);
            bVar5 = param_1->SupportsTags();
            graphics::TextProperties::SetFlag(&local_78, 1, bVar5 ^ 1);
            StringView::StringView<eastl::fixed_string<char, 512, true, eastl::allocator>>(
                aSStack_888 + 128, (fixed_string*)&param_1->field_8);
            SVar7.field_8._0_4_ = GetMaxLineWidth(this);
            SVar7.field_0 = (ulong)(aSStack_888 + 128);
            SVar7.field_8._4_4_ = 0;
            local_48.field_0 = graphics::FontHelpers::PredictHeightAndLines(SVar7, (int)&local_78, in_RCX);
            local_48.field_4 = GetTotalHistoryHeight(this);
            (&field_2456, &local_48)->push_back();
        }
    }

    // 0x100688b80, 48 bytes, placed by class name
    // ConsoleUI::OnHistoryCleared()
    void ConsoleUI::OnHistoryCleared() {
        (&field_2456)->clear();
        field_2532 = 0;
    }

    // 0x1006bca10, 16 bytes, placed by class name
    // ConsoleUI::Draw(int)::$_13::operator()(ConsoleUI::LineDisplayInfo const&) const
    /* ConsoleUI::Draw(int)::$_13::TEMPNAMEPLACEHOLDERVALUE(ConsoleUI::LineDisplayInfo
   const&) const */

    undefined4 ConsoleUI::Draw(int)::$_13::operator()(LineDisplayInfo* param_1) {
        int iVar1;

        iVar1 = param_1->field_0 + param_1->field_4;
        return CONCAT31((int3)((uint)iVar1 >> 8), *(int*)this <= iVar1);
    }

    // 0x1006be630, 32 bytes, placed by class name
    // ConsoleUI::InitialiseHistoryTweaky()::$_15::operator()(tweak::Event const&) const
    /* ConsoleUI::InitialiseHistoryTweaky()::$_15::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const */

    void ConsoleUI::InitialiseHistoryTweaky()::$_15::operator()(Event* param_1) {
        if (param_1->field_16 == 2) {
            *(undefined1*)(*(long*)this + 2906) = 1;
        }
    }

    // 0x1006bef40, 32 bytes, placed by class name
    // ConsoleUI::InitialiseHistoryTweaky()::$_16::operator()(tweak::Event const&) const
    /* ConsoleUI::InitialiseHistoryTweaky()::$_16::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const */

    void ConsoleUI::InitialiseHistoryTweaky()::$_16::operator()(Event* param_1) {
        if (param_1->field_16 == 2) {
            SetPreviousCommandFromHistory(*(ConsoleUI**)this);
        }
    }

    // 0x1006bf850, 144 bytes, placed by class name
    // ConsoleUI::InitialiseHistoryTweaky()::$_17::operator()(tweak::Event const&) const
    /* ConsoleUI::InitialiseHistoryTweaky()::$_17::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const */

    void ConsoleUI::InitialiseHistoryTweaky()::$_17::operator()(Event* param_1) {
        long lVar1;
        uchar* extraout_RDX;
        StringView SVar2;
        eastl::string local_58[32];
        StringView local_38;
        allocator local_28[8];

        if (param_1->field_16 == 2) {
            lVar1 = *(long*)this;
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_58, "~", local_28);
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_38,
                                                                                          (fixed_string*)local_58);
            SVar2.field_8 = extraout_RDX;
            SVar2.field_0 = (ulong)&local_38;
            ((lVar1 + 2552))->Insert(SVar2);
            eastl::string::~basic_string(local_58);
        }
    }

    // 0x1006c01d0, 32 bytes, placed by class name
    // ConsoleUI::InitialiseHistoryTweaky()::$_18::operator()(tweak::Event const&) const
    /* ConsoleUI::InitialiseHistoryTweaky()::$_18::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const */

    void ConsoleUI::InitialiseHistoryTweaky()::$_18::operator()(Event* param_1) {
        if (param_1->field_16 == 2) {
            ((*(long*)this + 2552))->Backspace();
        }
    }

    // 0x1006c0ae0, 32 bytes, placed by class name
    // ConsoleUI::InitialiseHistoryTweaky()::$_19::operator()(tweak::Event const&) const
    /* ConsoleUI::InitialiseHistoryTweaky()::$_19::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const */

    void ConsoleUI::InitialiseHistoryTweaky()::$_19::operator()(Event* param_1) {
        if (param_1->field_16 == 2) {
            ToggleConsole(*(ConsoleUI**)this);
        }
    }

    // 0x1006c13f0, 80 bytes, placed by class name
    // ConsoleUI::InitialiseHistoryTweaky()::$_20::operator()(tweak::Event const&) const
    /* ConsoleUI::InitialiseHistoryTweaky()::$_20::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const */

    void ConsoleUI::InitialiseHistoryTweaky()::$_20::operator()(Event* param_1) {
        long lVar1;
        Control* this_00;

        lVar1 = *(long*)this;
        if (param_1->field_16 == 1) {
            this_00 = (Control*)shared_ptr<tweak::Control>::operator->((shared_ptr<tweak::Control>*)param_1);
            this_00->SetIgnoreTags(true);
        }
        if (param_1->field_16 == 2) {
            ((lVar1 + 2552))->Left();
        }
    }

    // 0x1006c1d40, 32 bytes, placed by class name
    // ConsoleUI::InitialiseHistoryTweaky()::$_21::operator()(tweak::Event const&) const
    /* ConsoleUI::InitialiseHistoryTweaky()::$_21::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const */

    void ConsoleUI::InitialiseHistoryTweaky()::$_21::operator()(Event* param_1) {
        if (param_1->field_16 == 2) {
            SetNextCommandFromHistory(*(ConsoleUI**)this);
        }
    }

    // 0x1006c2650, 32 bytes, placed by class name
    // ConsoleUI::InitialiseHistoryTweaky()::$_22::operator()(tweak::Event const&) const
    /* ConsoleUI::InitialiseHistoryTweaky()::$_22::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const */

    void ConsoleUI::InitialiseHistoryTweaky()::$_22::operator()(Event* param_1) {
        if (param_1->field_16 == 2) {
            ((*(long*)this + 2552))->Right();
        }
    }

    // 0x1006c2f60, 32 bytes, placed by class name
    // ConsoleUI::InitialiseHistoryTweaky()::$_23::operator()(tweak::Event const&) const
    /* ConsoleUI::InitialiseHistoryTweaky()::$_23::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const */

    void ConsoleUI::InitialiseHistoryTweaky()::$_23::operator()(Event* param_1) {
        if (param_1->field_16 == 2) {
            QueueCommandFromInput(*(ConsoleUI**)this);
        }
    }

    // 0x1006c3870, 160 bytes, placed by class name
    // ConsoleUI::InitialiseHistoryTweaky()::$_24::operator()(tweak::Event const&) const
    /* ConsoleUI::InitialiseHistoryTweaky()::$_24::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const */

    void ConsoleUI::InitialiseHistoryTweaky()::$_24::operator()(Event* param_1) {
        long lVar1;
        undefined8 uVar2;
        char cVar3;
        undefined1 local_48[16];
        StringView local_38;

        if (param_1->field_16 == 2) {
            lVar1 = *(long*)this;
            cVar3 = (*(Input**)(lVar1 + 48))->IsOnScreenKeyboardVisible();
            uVar2 = *(undefined8*)(lVar1 + 48);
            if (cVar3 == '\0') {
                local_48->GetText();
                StringView::to_owned_string<eastl::basic_string<char, BucketAllocatorEASTL>>(&local_38);
                uVar2->ShowOnScreenKeyboard(5, &local_38, 4294967295, 0);
                local_38.~basic_string();
            } else {
                input::Input::HideOnScreenKeyboard();
            }
        }
    }

} // namespace jag::ui

namespace jag::tweak {
    // 0x100683a40: the linker folded this into ui::ConsoleEditLine::~ConsoleEditLine(), which has identical code
    EditLine::~EditLine();

    // 0x100684e50: the linker folded this into ui::ConsoleEditLine::SetCursorShown(bool), which has identical code
    EditLine::SetCursorShown(bool);

} // namespace jag::tweak
