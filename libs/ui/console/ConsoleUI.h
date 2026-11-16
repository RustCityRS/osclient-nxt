// libs/ui/console/ConsoleUI.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class ConsoleUI {
    public:
        class LineDisplayInfo;
        // virtual methods in vtable order
        virtual ~ConsoleUI();
        virtual void OnHistoryEntryAdded(const console::Line& line, bool arg2);
        virtual void OnHistoryCleared();
        ConsoleUI(console::Console* console, graphics::RT7Core* rt7Core, graphics::FontHelpers* fontHelpers,
                  input::Input* input, const shared_ptr<tweak::Tweaky>& tweaky);
        bool CheckToggleConsole(int arg1);
        void ToggleConsole();
        int GetMaxLineWidth() const;
        void SetFont(const shared_ptr<graphics::Font>& font1, const shared_ptr<graphics::Font>& font2);
        void RecalculateMessageHistoryLayout();
        void Draw(int arg1);
        int GetConsoleHeight() const;
        int GetLinesAreaHeight() const;
        void DrawSnow(int arg1);
        uint64_t GetTotalHistoryHeight() const;
        void DrawTweaky(int arg1, int arg2, int arg3);
        uint64_t HandleMouseDown(float arg1, float arg2, const graphics::ScaleManager& scaleManager);
        uint64_t HandleMouseUp(float arg1, float arg2, const graphics::ScaleManager& scaleManager);
        uint64_t HandleMouseMove(float arg1, float arg2, const graphics::ScaleManager& scaleManager);
        int GetCommandLineHeight() const;
        int GetMaxHistoryScrollOffset() const;
        uint64_t HandleMouseOver(float arg1, float arg2, const graphics::ScaleManager& scaleManager);
        uint64_t HandleTouch(unsigned long arg1, float arg2, float arg3);
        uint64_t HandleTouchUp(unsigned long arg1, float arg2, float arg3);
        uint64_t HandleTouchMove(unsigned long arg1, float arg2, float arg3);
        uint64_t HandleSwipe(const input::gesture::GestureEvent_Swipe& gestureEvent_Swipe);
        void SetPreviousCommandFromHistory();
        void SetNextCommandFromHistory();
        uint64_t HandleChar(int arg1);
        unsigned long HandleKeyDown(int arg1);
        void SelectAutocompleteOption();
        void QueueCommandFromInput();
        void CopyEntireBufferToClipboard();
        void ResetStoredPromptContents();
        void SetPromptContents(StringView stringView, bool arg2);
        void ScrollHistoryStart();
        void ScrollHistoryPage(bool arg1);
        void ScrollHistoryEnd();
        uint64_t HandleKeyUp(int arg1);
        uint64_t HandleMouseWheel(float arg1, float arg2, float arg3, const graphics::ScaleManager& scaleManager);
        void SetAutocompleteMatches(const char* str, int arg2, eastl::vector<eastl::string>&& strs);
        void SetAutocompleteOptions(eastl::vector<eastl::string>&& strs, bool arg2);
        void ShowCommandListHelp();
        void InitialiseHistoryTweaky();
        void SetAttachedTweaky(const shared_ptr<tweak::Tweaky>& tweaky);
        void ProcessAutocompleteRequest();
        void GetLineHeight() const;

    private:
        Console* field_8;
        RT7Core* field_16;
        FontHelpers* field_24;
        shared_ptr field_32;
        Input* field_48;
        uint8_t _unknown_56[2456];
        uint8_t field_2512;
        uint8_t _unknown_2513[3];
        uint32_t field_2516;
        int m_consoleHeight;
        int field_2524;
        int field_2528;
        int field_2532;
        int field_2536;
        int field_2540;
        uint8_t field_2544;
        uint8_t _unknown_2545[3];
        float field_2548;
        ConsoleEditLine field_2552;
        GridRect field_2888;
        uint8_t _unknown_2908[4];
        shared_ptr field_2912;
        shared_ptr field_2928;
        shared_ptr field_2944;
        uint8_t _unknown_2960[528];
        GestureSwipe field_3488;
        uint8_t _unknown_3664[240];
        uint8_t field_3904;
        uint8_t _unknown_3905[63];
        uint8_t field_3968;
        uint8_t _unknown_3969[39];
        uint32_t field_4008;
        uint8_t _unknown_4012[4];
    };

    class ConsoleUI::LineDisplayInfo {
    public:
        int GetEndOffset() const;

    private:
        int field_0;
        int field_4;
        uint8_t _unknown_8[4];
    };

    // 0x100684d90
    int ConsoleUI::GetConsoleHeight() const {
        return m_consoleHeight;
    }

    // 0x100684da0
    int ConsoleUI::GetLinesAreaHeight() const {
        int iVar1 = GetConsoleHeight();
        int iVar2 = GetCommandLineHeight();
        return iVar1 - iVar2;
    }

    // 0x100684e80
    uint64_t ConsoleUI::GetTotalHistoryHeight() const {
        bool cVar1 = field_2456.empty();
        uint64_t uVar2 = 0;
        if (!cVar1) {
            uVar2 = ((LineDisplayInfo*)field_2456.back())->GetEndOffset();
        }
        return uVar2;
    }

    // 0x100685a50
    int ConsoleUI::GetCommandLineHeight() const {
        return GetLineHeight() + 6;
    }

    // 0x100685a60
    int ConsoleUI::GetMaxHistoryScrollOffset() const {
        int iVar1 = GetTotalHistoryHeight();
        int local_1c = GetLinesAreaHeight();
        local_1c = iVar1 - local_1c;
        auto piVar2 = std::max<int>(0, local_1c);
        return *piVar2;
    }

    // 0x1006869f0
    void ConsoleUI::ResetStoredPromptContents() {
        field_3968.reset();
        field_4008 = 0;
    }

    // 0x100686bb0
    void ConsoleUI::ScrollHistoryStart() {
        field_2532 = GetMaxHistoryScrollOffset();
    }

    // 0x100686c30
    void ConsoleUI::ScrollHistoryEnd() {
        field_2532 = 0;
    }

    // 0x1006aec40
    int ConsoleUI::LineDisplayInfo::GetEndOffset() const {
        return field_4 + field_0;
    }

    // 0x1006aed90
    void ConsoleUI::GetLineHeight() const {
        Layout* this_00 = (Layout*)(*field_32).operator->();
        auto this_01 = this_00->SSOBeginPtr();
        ((FontMetrics*)**this_01)->GetVerticalSpacing();
    }

    // 0x1006b4bd0
    void ConsoleUI::ConsoleUI(
        console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*,
        shared_ptr<tweak::Tweaky> const&)::$_0::operator()(eastl::fixed_string<char, 256>& str1,
                                                           const eastl::fixed_string<char, 256>& str2) const {
        StringView local_168;
        fixed_string<char, _32> local_158;

        long* plVar1 = *(long**)(*(long*)this + 8);
        local_168.StringView<eastl::fixed_string<char, 40>>(str2);
        (**(void (**)(...))(*plVar1 + 32))(&local_158, plVar1, &local_168);
        str1 = &local_158;
    }

    // 0x1006b5760
    void ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*,
                              shared_ptr<tweak::Tweaky> const&)::$_1::operator()(int arg1) const {
        HandleKeyDown(*(ConsoleUI**)this, arg1);
    }

    // 0x1006b6210
    void ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*,
                              shared_ptr<tweak::Tweaky> const&)::$_2::operator()(int arg1) const {
        HandleKeyUp(*(ConsoleUI**)this, arg1);
    }

    // 0x1006b6b20
    void ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*,
                              shared_ptr<tweak::Tweaky> const&)::$_3::operator()(int arg1) const {
        HandleChar(*(ConsoleUI**)this, arg1);
    }

    // 0x1006b74a0
    void ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*,
                              shared_ptr<tweak::Tweaky> const&)::$_4::operator()(float arg1, float arg2, float arg3,
                                                                                 float arg4) const {
        ConsoleUI* this_00 = *(ConsoleUI**)this;
        auto scaleManager = this_00->field_16->GetScaleManager();
        HandleMouseWheel(this_00, arg1, arg2, arg3, scaleManager);
    }

    // 0x1006b7ff0
    void ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*,
                              shared_ptr<tweak::Tweaky> const&)::$_5::operator()(float arg1, float arg2) const {
        ConsoleUI* this_00 = *(ConsoleUI**)this;
        auto scaleManager = this_00->field_16->GetScaleManager();
        HandleMouseDown(this_00, arg1, arg2, scaleManager);
    }

    // 0x1006b8af0
    void ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*,
                              shared_ptr<tweak::Tweaky> const&)::$_6::operator()(float arg1, float arg2) const {
        ConsoleUI* this_00 = *(ConsoleUI**)this;
        auto scaleManager = this_00->field_16->GetScaleManager();
        HandleMouseUp(this_00, arg1, arg2, scaleManager);
    }

    // 0x1006b9450
    void ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*,
                              shared_ptr<tweak::Tweaky> const&)::$_7::operator()(float arg1, float arg2) const {
        ConsoleUI* this_00 = *(ConsoleUI**)this;
        auto scaleManager = this_00->field_16->GetScaleManager();
        HandleMouseMove(this_00, arg1, arg2, scaleManager);
    }

    // 0x1006b9db0
    void ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*,
                              shared_ptr<tweak::Tweaky> const&)::$_8::operator()(float arg1, float arg2) const {
        ConsoleUI* this_00 = *(ConsoleUI**)this;
        auto scaleManager = this_00->field_16->GetScaleManager();
        HandleMouseOver(this_00, arg1, arg2, scaleManager);
    }

    // 0x1006ba760
    void ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*,
                              shared_ptr<tweak::Tweaky> const&)::$_9::operator()(unsigned long arg1, float arg2,
                                                                                 float arg3) const {
        HandleTouch(*(ConsoleUI**)this, arg1, arg2, arg3);
    }

    // 0x1006bb240
    void ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*,
                              shared_ptr<tweak::Tweaky> const&)::$_10::operator()(unsigned long arg1, float arg2,
                                                                                  float arg3) const {
        HandleTouchUp(*(ConsoleUI**)this, arg1, arg2, arg3);
    }

    // 0x1006bbb80
    void ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*,
                              shared_ptr<tweak::Tweaky> const&)::$_11::operator()(unsigned long arg1, float arg2,
                                                                                  float arg3) const {
        HandleTouchMove(*(ConsoleUI**)this, arg1, arg2, arg3);
    }

    // 0x1006bc4f0
    void
    ConsoleUI::ConsoleUI(console::Console*, graphics::RT7Core*, graphics::FontHelpers*, input::Input*,
                         shared_ptr<tweak::Tweaky> const&)::$_12::operator()(const input::gesture::GestureEvent_Swipe&
                                                                                 gestureEvent_Swipe) const {
        HandleSwipe(*(ConsoleUI**)this, gestureEvent_Swipe);
    }

    // 0x1006bdbd0
    void ConsoleUI::SetAutocompleteOptions(eastl::vector<eastl::string>&&,
                                           bool)::$_14::operator()(const tweak::Event& event) const {
        int iVar1;
        int iVar2;
        long* plVar3;
        eastl::string* str;
        StringView local_a0;
        eastl::string local_90;
        ReturnValue local_70;
        eastl::string local_50;

        ConsoleUI* this_00 = *(ConsoleUI**)this;
        if (event.field_16 == 2) {
            plVar3 = (long*)event.operator->();
            str = (eastl::string*)(**(void (**)(...))(*plVar3 + 168))(plVar3);
            local_50 = eastl::string(*str);
            console::Console::StripVariablePromptParts(local_50);
            local_50 += ' ';
            local_70 = (this_00->field_8->GetAutocompletionPrefix()).to_owned_string<eastl::string>();
            local_90 + local_70;
            local_a0.StringView<eastl::fixed_string<char, 40>>(local_90);
            this_00->field_2552->SetText(&local_a0);
            iVar1 = ShuffledPacketFactory::p2_alt2();
            iVar2 = local_50.size();
            this_00->field_2552->SetPos(iVar1 + iVar2);
            this_00->field_2928->reset();
            this_00->field_3808.reset();
        } else if ((event.field_16 == 3) && (this[8] != (__14)0)) {
            ShowCommandListHelp(this_00);
        }
    }

} // namespace jag::ui
