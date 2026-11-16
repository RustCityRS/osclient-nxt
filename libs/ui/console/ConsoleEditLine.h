// libs/ui/console/ConsoleEditLine.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.ui

namespace jag::ui {
    class ConsoleEditLine {
    public:
        EnumOptionToggle GetPos() const;
        int GetDrawOffset() const;
        void
        Draw(int arg1, int arg2, int arg3, int arg4, const shared_ptr<graphics::Font>& font, graphics::RT7Core* rt7Core,
             graphics::FontHelpers* fontHelpers, int arg8,
             std::function<void(eastl::fixed_string<char, 256>&, eastl::fixed_string<char, 256> const&)>* callback);
        uint64_t GetSelectionRange(int& arg1, int& arg2) const;
        uint8_t HandleChar(int arg1);
        bool SupportsKeyChar(int arg1);
        void Insert(StringView stringView);
        unsigned long HandleKeyDown(int arg1);
        void ClipboardCopy();
        void ClipboardPaste();
        void ClipboardCut();
        void Home();
        void End();
        void WordLeft();
        void Left();
        void WordRight();
        void Right();
        void DelWordRight();
        void Delete();
        void DelWordLeft();
        void Backspace();
        uint64_t HandleKeyUp(int arg1);
        uint64_t DeleteSelection();
        void ValidatePosition();
        ConsoleEditLine();
        ~ConsoleEditLine();
        auto GetText() const;
        void SetCursorShown(bool arg1);
        void SetPos(int arg1);
        void IsEmpty() const;
        void Reset();
        void SetText(StringView stringView);

    private:
        int m_drawOffset;
        EnumOptionToggle m_pos;
        uint8_t _unknown_8[296];
        EnumOptionToggle field_304;
        bool field_308;
        char m_cursorShown;
        uint8_t _unknown_310[2];
        unsigned int field_312;
        unsigned int field_316;
        unsigned int field_320;
        unsigned int field_324;
        uint32_t field_328;
        uint8_t _unknown_332[4];
    };

    // 0x100681af0
    bool ConsoleEditLine::SupportsKeyChar(int arg1) {
        return arg1 - 32U < 160 && arg1 != 128;
    }

    // 0x100682030
    void ConsoleEditLine::Home() {
        m_pos = 0;
        if (m_selecting == false) {
            m_selectionStart = 4294967295;
            return;
        }
    }

    // 0x100682060
    void ConsoleEditLine::End() {
        m_pos = field_8.size();
        if (m_selecting == false) {
            m_selectionStart = 4294967295;
        }
    }

    // 0x100683ec0
    auto ConsoleEditLine::GetText() const {
        auto result;
        result.StringView<eastl::fixed_string<char, 40>>(field_8);
        return result;
    }

    // 0x100684e50
    void ConsoleEditLine::SetCursorShown(bool arg1) {
        m_cursorShown = arg1;
    }

    // 0x1006856c0
    void ConsoleEditLine::SetPos(int arg1) {
        m_pos = arg1;
        ValidatePosition();
    }

    // 0x100686820
    void ConsoleEditLine::IsEmpty() const {
        field_8.empty();
    }

    // 0x100686f10
    void ConsoleEditLine::Reset() {
        m_pos = 0;
        field_8.clear();
        field_304 = 4294967295;
        field_308 = false;
    }

    // 0x100686ff0
    void ConsoleEditLine::SetText(StringView stringView) {
        field_304 = 4294967295;
        auto str = stringView->end();
        unsigned long arg2 = ShuffledPacketFactory::p2_alt2();
        (&field_8)->assign(str, arg2);
        ValidatePosition();
    }

    // 0x1006ae460
    ConsoleEditLine::ConsoleEditLine() : m_drawOffset(0), m_pos(0), field_304(4294967295), field_308(false) {
        m_cursorShown = '\x01';
        field_312 = 4294967295;
        field_316 = 255;
        field_320 = 255;
        field_324 = 2155937696;
        field_328 = 4286611711;
    }

    // 0x1006aeba0
    ConsoleEditLine::~ConsoleEditLine() {
        field_8.~fixed_string();
    }

} // namespace jag::ui

namespace jag::tweak {
    // 0x1006aeba0: EditLine::~EditLine() has the same machine code as ui::ConsoleEditLine::~ConsoleEditLine()

} // namespace jag::tweak
