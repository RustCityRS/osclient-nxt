// libs/ui/console/ConsoleUI.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class ConsoleUI {
    public:
        class LineDisplayInfo;
        // virtual methods in vtable order
        virtual ~ConsoleUI();
        virtual void OnHistoryEntryAdded(console::Line const&, bool);
        virtual void OnHistoryCleared();
        ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*,
                  shared_ptr<tweak::Tweaky> const&);
        bool CheckToggleConsole(int);
        void ToggleConsole();
        int GetMaxLineWidth() const;
        void SetFont(shared_ptr<graphics::Font> const&, shared_ptr<graphics::Font> const&);
        void RecalculateMessageHistoryLayout();
        void Draw(int);
        int GetConsoleHeight() const;
        int GetLinesAreaHeight() const;
        void DrawSnow(int);
        GetTotalHistoryHeight() const;
        void DrawTweaky(int, int, int);
        HandleMouseDown(float, float, graphics::ScaleManager const&);
        HandleMouseUp(float, float, graphics::ScaleManager const&);
        HandleMouseMove(float, float, graphics::ScaleManager const&);
        int GetCommandLineHeight() const;
        int GetMaxHistoryScrollOffset() const;
        HandleMouseOver(float, float, graphics::ScaleManager const&);
        HandleTouch(unsigned long, float, float);
        HandleTouchUp(unsigned long, float, float);
        HandleTouchMove(unsigned long, float, float);
        HandleSwipe(input::gesture::GestureEvent_Swipe const&);
        void SetPreviousCommandFromHistory();
        void SetNextCommandFromHistory();
        HandleChar(int);
        ulong HandleKeyDown(int);
        void SelectAutocompleteOption();
        void QueueCommandFromInput();
        void CopyEntireBufferToClipboard();
        void ResetStoredPromptContents();
        void SetPromptContents(StringView, bool);
        void ScrollHistoryStart();
        void ScrollHistoryPage(bool);
        void ScrollHistoryEnd();
        HandleKeyUp(int);
        HandleMouseWheel(float, float, float, graphics::ScaleManager const&);
        void SetAutocompleteMatches(char const*, int, eastl::vector<eastl::string, eastl::allocator>&&);
        void SetAutocompleteOptions(eastl::vector<eastl::string, eastl::allocator>&&, bool);
        void ShowCommandListHelp();
        void InitialiseHistoryTweaky();
        void SetAttachedTweaky(shared_ptr<tweak::Tweaky> const&);
        void ProcessAutocompleteRequest();
        void GetLineHeight() const;

        // data members, from how the methods use this: 30096 bytes
        undefined** field_0;   // offset 0, vtable pointer
        Console* field_8;      // offset 8
        RT7Core* field_16;     // offset 16
        FontHelpers* field_24; // offset 24
        shared_ptr field_32;   // offset 32
        Input* field_48;       // offset 48
        InputHandler field_56; // offset 56
        char _unknown_2368[88];
        undefined1 field_2456; // offset 2456
        char _unknown_2457[55];
        byte field_2512; // offset 2512
        char _unknown_2513[3];
        undefined4 field_2516; // offset 2516
        int m_consoleHeight;   // offset 2520
        int field_2524;        // offset 2524
        int field_2528;        // offset 2528
        int field_2532;        // offset 2532
        int field_2536;        // offset 2536
        int field_2540;        // offset 2540
        undefined1 field_2544; // offset 2544
        char _unknown_2545[3];
        float field_2548;           // offset 2548
        ConsoleEditLine field_2552; // offset 2552
        GridRect field_2888;        // offset 2888
        char _unknown_2908[4];
        shared_ptr field_2912; // offset 2912
        shared_ptr field_2928; // offset 2928
        shared_ptr field_2944; // offset 2944
        char _unknown_2960[528];
        GestureSwipe field_3488; // offset 3488
        char _unknown_3664[240];
        undefined1 field_3904; // offset 3904
        char _unknown_3905[63];
        undefined1 field_3968; // offset 3968
        char _unknown_3969[39];
        undefined4 field_4008; // offset 4008
        char _unknown_4012[26084];
    };

    class ConsoleUI::LineDisplayInfo {
    public:
        int GetEndOffset() const;

        // data members, from how the methods use this: 12 bytes
        int field_0; // offset 0
        int field_4; // offset 4
        char _unknown_8[4];
    };

    // 0x100684d90, 16 bytes, inline, placed by class name
    // ConsoleUI::GetConsoleHeight() const
    int ConsoleUI::GetConsoleHeight() {
        return m_consoleHeight;
    }

    // 0x100684da0, 48 bytes, inline, placed by class name
    // ConsoleUI::GetLinesAreaHeight() const
    int ConsoleUI::GetLinesAreaHeight() {
        int iVar1;
        int iVar2;

        iVar1 = GetConsoleHeight(this);
        iVar2 = GetCommandLineHeight(this);
        return iVar1 - iVar2;
    }

    // 0x100684e80, 64 bytes, inline, placed by class name
    // ConsoleUI::GetTotalHistoryHeight() const
    undefined8 ConsoleUI::GetTotalHistoryHeight() {
        char cVar1;
        LineDisplayInfo* this_00;
        undefined8 uVar2;

        cVar1 = (&field_2456)->empty();
        uVar2 = 0;
        if (cVar1 == '\0') {
            this_00 = (LineDisplayInfo*)(&field_2456)->back();
            uVar2 = this_00->GetEndOffset();
        }
        return uVar2;
    }

    // 0x100685a50, 16 bytes, inline, placed by class name
    // ConsoleUI::GetCommandLineHeight() const
    int ConsoleUI::GetCommandLineHeight() {
        return GetLineHeight(this) + 6;
    }

    // 0x100685a60, 80 bytes, inline, placed by class name
    // ConsoleUI::GetMaxHistoryScrollOffset() const
    int ConsoleUI::GetMaxHistoryScrollOffset() {
        int iVar1;
        int* piVar2;
        int local_20;
        int local_1c;

        local_20 = 0;
        iVar1 = GetTotalHistoryHeight(this);
        local_1c = GetLinesAreaHeight(this);
        local_1c = iVar1 - local_1c;
        piVar2 = std::max<int>(&local_20, &local_1c);
        return *piVar2;
    }

    // 0x1006869f0, 48 bytes, inline, placed by class name
    // ConsoleUI::ResetStoredPromptContents()
    void ConsoleUI::ResetStoredPromptContents() {
        (&field_3968)->reset();
        field_4008 = 0;
    }

    // 0x100686bb0, 32 bytes, inline, placed by class name
    // ConsoleUI::ScrollHistoryStart()
    void ConsoleUI::ScrollHistoryStart() {
        field_2532 = GetMaxHistoryScrollOffset(this);
    }

    // 0x100686c30, 16 bytes, inline, placed by class name
    // ConsoleUI::ScrollHistoryEnd()
    void ConsoleUI::ScrollHistoryEnd() {
        field_2532 = 0;
    }

    // 0x1006aec40, 16 bytes, inline, placed by class name
    // ConsoleUI::LineDisplayInfo::GetEndOffset() const
    int ConsoleUI::LineDisplayInfo::GetEndOffset() {
        return field_4 + field_0;
    }

    // 0x1006aed90, 48 bytes, inline, placed by class name
    // ConsoleUI::GetLineHeight() const
    void ConsoleUI::GetLineHeight() {
        Layout* this_00;
        vector* this_01;
        FontMetrics* this_02;
        type* in_RSI;

        this_00 = (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)field_32);
        this_01 = eastl::string::Layout::SSOBeginPtr(this_00, in_RSI);
        this_02 =
            (FontMetrics*)shared_ptr<graphics::FontMetrics>::operator*((shared_ptr<graphics::FontMetrics>*)this_01);
        this_02->GetVerticalSpacing();
    }

    // 0x1006b4bd0, 176 bytes, inline, placed by class name
    // ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*, shared_ptr<tweak::Tweaky> const&)::$_0::operator()(eastl::fixed_string<char, 256, true, eastl::allocator>&, eastl::fixed_string<char, 256, true, eastl::allocator> const&) const
    /* ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*,
   graphics::FontHelpers*, input::Input*, shared_ptr<tweak::Tweaky>
   const&)::$_0::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_string<char, 256, true, eastl::allocator>&,
   eastl::fixed_string<char, 256, true, eastl::allocator> const&) const */

    void ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*,
                              shared_ptr<tweak::Tweaky> const&)::$_0::operator()(fixed_string* param_1,
                                                                                 fixed_string* param_2) {
        long* plVar1;
        StringView local_168;
        fixed_string local_158[296];
        undefined8 local_30;

        local_30 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        plVar1 = *(long**)(*(long*)this + 8);
        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_168, param_2);
        (**(code**)(*plVar1 + 32))(local_158, plVar1, &local_168);
        eastl::fixed_string<char, 4096, true, eastl::allocator>::operator=(
            (fixed_string<char, 4096, true, eastl::allocator>*)param_1, local_158);
        /* WARNING: Subroutine does not return */
        local_158->~fixed_string();
    }

    // 0x1006b5760, 16 bytes, inline, placed by class name
    // ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*, shared_ptr<tweak::Tweaky> const&)::$_1::operator()(int) const
    /* ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*,
   graphics::FontHelpers*, input::Input*, shared_ptr<tweak::Tweaky>
   const&)::$_1::TEMPNAMEPLACEHOLDERVALUE(int) const */

    void ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*,
                              shared_ptr<tweak::Tweaky> const&)::$_1::operator()(int param_1) {
        HandleKeyDown(*(ConsoleUI**)this, param_1);
    }

    // 0x1006b6210, 16 bytes, inline, placed by class name
    // ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*, shared_ptr<tweak::Tweaky> const&)::$_2::operator()(int) const
    /* ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*,
   graphics::FontHelpers*, input::Input*, shared_ptr<tweak::Tweaky>
   const&)::$_2::TEMPNAMEPLACEHOLDERVALUE(int) const */

    void ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*,
                              shared_ptr<tweak::Tweaky> const&)::$_2::operator()(int param_1) {
        HandleKeyUp(*(ConsoleUI**)this, param_1);
    }

    // 0x1006b6b20, 16 bytes, inline, placed by class name
    // ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*, shared_ptr<tweak::Tweaky> const&)::$_3::operator()(int) const
    /* ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*,
   graphics::FontHelpers*, input::Input*, shared_ptr<tweak::Tweaky>
   const&)::$_3::TEMPNAMEPLACEHOLDERVALUE(int) const */

    void ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*,
                              shared_ptr<tweak::Tweaky> const&)::$_3::operator()(int param_1) {
        HandleChar(*(ConsoleUI**)this, param_1);
    }

    // 0x1006b74a0, 80 bytes, inline, placed by class name
    // ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*, shared_ptr<tweak::Tweaky> const&)::$_4::operator()(float, float, float, float) const
    /* ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*,
   graphics::FontHelpers*, input::Input*, shared_ptr<tweak::Tweaky>
   const&)::$_4::TEMPNAMEPLACEHOLDERVALUE(float, float, float, float) const */

    void ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*,
                              shared_ptr<tweak::Tweaky> const&)::$_4::operator()(float param_1, float param_2,
                                                                                 float param_3, float param_4) {
        ConsoleUI* this;
        ScaleManager* pSVar1;
        undefined8* in_RDI;

        this = (ConsoleUI*)*in_RDI;
        pSVar1 = (ScaleManager*)field_16->GetScaleManager();
        HandleMouseWheel(this, param_1, param_2, param_3, pSVar1);
    }

    // 0x1006b7ff0, 64 bytes, inline, placed by class name
    // ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*, shared_ptr<tweak::Tweaky> const&)::$_5::operator()(float, float) const
    /* ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*,
   graphics::FontHelpers*, input::Input*, shared_ptr<tweak::Tweaky>
   const&)::$_5::TEMPNAMEPLACEHOLDERVALUE(float, float) const */

    void ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*,
                              shared_ptr<tweak::Tweaky> const&)::$_5::operator()(float param_1, float param_2) {
        ConsoleUI* this_00;
        ScaleManager* pSVar1;

        this_00 = *(ConsoleUI**)this;
        pSVar1 = (ScaleManager*)this_00->field_16->GetScaleManager();
        HandleMouseDown(this_00, param_1, param_2, pSVar1);
    }

    // 0x1006b8af0, 64 bytes, inline, placed by class name
    // ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*, shared_ptr<tweak::Tweaky> const&)::$_6::operator()(float, float) const
    /* ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*,
   graphics::FontHelpers*, input::Input*, shared_ptr<tweak::Tweaky>
   const&)::$_6::TEMPNAMEPLACEHOLDERVALUE(float, float) const */

    void ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*,
                              shared_ptr<tweak::Tweaky> const&)::$_6::operator()(float param_1, float param_2) {
        ConsoleUI* this_00;
        ScaleManager* pSVar1;

        this_00 = *(ConsoleUI**)this;
        pSVar1 = (ScaleManager*)this_00->field_16->GetScaleManager();
        HandleMouseUp(this_00, param_1, param_2, pSVar1);
    }

    // 0x1006b9450, 64 bytes, inline, placed by class name
    // ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*, shared_ptr<tweak::Tweaky> const&)::$_7::operator()(float, float) const
    /* ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*,
   graphics::FontHelpers*, input::Input*, shared_ptr<tweak::Tweaky>
   const&)::$_7::TEMPNAMEPLACEHOLDERVALUE(float, float) const */

    void ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*,
                              shared_ptr<tweak::Tweaky> const&)::$_7::operator()(float param_1, float param_2) {
        ConsoleUI* this_00;
        ScaleManager* pSVar1;

        this_00 = *(ConsoleUI**)this;
        pSVar1 = (ScaleManager*)this_00->field_16->GetScaleManager();
        HandleMouseMove(this_00, param_1, param_2, pSVar1);
    }

    // 0x1006b9db0, 64 bytes, inline, placed by class name
    // ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*, shared_ptr<tweak::Tweaky> const&)::$_8::operator()(float, float) const
    /* ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*,
   graphics::FontHelpers*, input::Input*, shared_ptr<tweak::Tweaky>
   const&)::$_8::TEMPNAMEPLACEHOLDERVALUE(float, float) const */

    void ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*,
                              shared_ptr<tweak::Tweaky> const&)::$_8::operator()(float param_1, float param_2) {
        ConsoleUI* this_00;
        ScaleManager* pSVar1;

        this_00 = *(ConsoleUI**)this;
        pSVar1 = (ScaleManager*)this_00->field_16->GetScaleManager();
        HandleMouseOver(this_00, param_1, param_2, pSVar1);
    }

    // 0x1006ba760, 16 bytes, inline, placed by class name
    // ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*, shared_ptr<tweak::Tweaky> const&)::$_9::operator()(unsigned long, float, float) const
    /* ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*,
   graphics::FontHelpers*, input::Input*, shared_ptr<tweak::Tweaky>
   const&)::$_9::TEMPNAMEPLACEHOLDERVALUE(unsigned long, float, float) const */

    void ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*,
                              shared_ptr<tweak::Tweaky> const&)::$_9::operator()(ulong param_1, float param_2,
                                                                                 float param_3) {
        HandleTouch(*(ConsoleUI**)this, param_1, param_2, param_3);
    }

    // 0x1006bb240, 16 bytes, inline, placed by class name
    // ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*, shared_ptr<tweak::Tweaky> const&)::$_10::operator()(unsigned long, float, float) const
    /* ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*,
   graphics::FontHelpers*, input::Input*, shared_ptr<tweak::Tweaky>
   const&)::$_10::TEMPNAMEPLACEHOLDERVALUE(unsigned long, float, float) const */

    void ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*,
                              shared_ptr<tweak::Tweaky> const&)::$_10::operator()(ulong param_1, float param_2,
                                                                                  float param_3) {
        HandleTouchUp(*(ConsoleUI**)this, param_1, param_2, param_3);
    }

    // 0x1006bbb80, 16 bytes, inline, placed by class name
    // ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*, shared_ptr<tweak::Tweaky> const&)::$_11::operator()(unsigned long, float, float) const
    /* ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*,
   graphics::FontHelpers*, input::Input*, shared_ptr<tweak::Tweaky>
   const&)::$_11::TEMPNAMEPLACEHOLDERVALUE(unsigned long, float, float) const */

    void ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*,
                              shared_ptr<tweak::Tweaky> const&)::$_11::operator()(ulong param_1, float param_2,
                                                                                  float param_3) {
        HandleTouchMove(*(ConsoleUI**)this, param_1, param_2, param_3);
    }

    // 0x1006bc4f0, 16 bytes, inline, placed by class name
    // ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*, shared_ptr<tweak::Tweaky> const&)::$_12::operator()(input::gesture::GestureEvent_Swipe const&) const
    /* ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*,
   graphics::FontHelpers*, input::Input*, shared_ptr<tweak::Tweaky>
   const&)::$_12::TEMPNAMEPLACEHOLDERVALUE(input::gesture::GestureEvent_Swipe const&) const */

    void ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*,
                              shared_ptr<tweak::Tweaky> const&)::$_12::operator()(GestureEvent_Swipe* param_1) {
        HandleSwipe(*(ConsoleUI**)this, param_1);
    }

    // 0x1006bdbd0, 368 bytes, inline, placed by class name
    // ConsoleUI::SetAutocompleteOptions(eastl::vector<eastl::string, eastl::allocator>&&, bool)::$_14::operator()(tweak::Event const&) const
    /* ConsoleUI::SetAutocompleteOptions(eastl::vector<eastl::basic_string<char,
   eastl::allocator>, eastl::allocator>&&, bool)::$_14::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const */

    void ConsoleUI::SetAutocompleteOptions(eastl::vector<eastl::string, eastl::allocator>&&,
                                           bool)::$_14::operator()(Event* param_1) {
        long lVar1;
        int iVar2;
        int iVar3;
        long* plVar4;
        basic_string* pbVar5;
        uchar* extraout_RDX;
        StringView SVar6;
        StringView local_a0;
        eastl local_90[32];
        StringView local_70[2];
        eastl::string local_50[32];
        ShuffledPacketFactory local_30;

        lVar1 = *(long*)this;
        if (param_1->field_16 == 2) {
            plVar4 = (long*)shared_ptr<tweak::Control>::operator->((shared_ptr<tweak::Control>*)param_1);
            pbVar5 = (basic_string*)(**(code**)(*plVar4 + 168))(plVar4);
            eastl::string::basic_string(local_50, pbVar5);
            console::Console::StripVariablePromptParts((basic_string*)local_50);
            eastl::string::operator+=(local_50, ' ');
            local_30.GetAutocompletionPrefix();
            StringView::to_owned_string<eastl::string>(local_70);
            eastl::operator+(local_90, (basic_string*)local_70, (basic_string*)local_50);
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_a0,
                                                                                          (fixed_string*)local_90);
            SVar6.field_8 = extraout_RDX;
            SVar6.field_0 = (ulong)&local_a0;
            ((lVar1 + 2552))->SetText(SVar6);
            local_90->~basic_string();
            local_70->~basic_string();
            iVar2 = ShuffledPacketFactory::p2_alt2(&local_30);
            iVar3 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            ((lVar1 + 2552))->SetPos(iVar2 + iVar3);
            shared_ptr<tweak::Tweaky>::reset();
            weak_ptr<tweak::List>::reset();
            eastl::string::~basic_string(local_50);
        } else if ((param_1->field_16 == 3) && (this[8] != (__14)0)) {
            ShowCommandListHelp();
        }
    }

} // namespace jag::ui
