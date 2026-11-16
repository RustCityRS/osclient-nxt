// projects/osclient/debug/OSClientConsoleUI.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class OSClientConsoleUI {
    public:
        // virtual methods in vtable order
        virtual ~OSClientConsoleUI();
        virtual void OnHistoryEntryAdded(const console::Line& line, bool arg2);
        virtual void OnHistoryCleared();
        void Home();
        void PageUp();
        void End();
        void PageDown();
        void CopyEntireBufferToClipboard();
        CoordMapSquare GetBounds() const;
        char GetDragTypeAtPosition(const jag::math::Point<int>& point) const;
        void HandlePointerDrag(ConsoleDragType consoleDragType, const jag::math::Point<int>& point);
        void ScrollLines(int arg1);
        void SetOpacity(bool arg1);
        void SetFont(const shared_ptr<jstring::PixfontGeneric>& pixfontGeneric);
        void SetLayoutDirty();
        void Draw(bool arg1);
        OSClientConsoleUI(Client& client, game::console::CommandLine& commandLine);
        void SetBounds(const jag::math::Rect<int>& rect);
        void CreateWidgets(game::console::CommandLine& commandLine);
        void MeasureLine(int& arg1, int& arg2, const console::Line& line) const;
        void GetTextExtentWidth() const;
        int GetLineHeight() const;
        uint8_t[16] GetOnScreenLines() const;
        void SetBottomLine(int arg1);
        void OnBottomLineChanged();
        int GetCommandLineHeight() const;
        void GetConsoleHeight() const;
        void RecalculateLinesLayout();
        void LayoutWidgets();
        void ClipBoundsToUI();
        void GetDrawContext();
        int GetLinesAreaHeight() const;
        void SetBoundsToDefault();

    private:
        shared_ptr field_8;
        uint8_t _unknown_24[32];
        int field_56;
        int field_60;
        int field_64;
        uint8_t field_68;
        uint8_t _unknown_69[35];
        CoordMapSquare m_bounds;
        uint8_t _unknown_116[28];
        float field_144;
        uint8_t _unknown_148[4];
        Client* field_152;
    };

    // 0x10005d8c0
    CoordMapSquare OSClientConsoleUI::GetBounds() const {
        return &m_origin;
    }

    // 0x10005e790
    void OSClientConsoleUI::SetFont(const shared_ptr<jstring::PixfontGeneric>& pixfontGeneric) {
        *field_8 = pixfontGeneric;
    }

    // 0x10005eb40
    void OSClientConsoleUI::SetLayoutDirty() {
        field_68 = 1;
    }

    // 0x10005fa50
    uint8_t[16] OSClientConsoleUI::GetOnScreenLines() const {
        uint8_t auVar3[16];

        int iVar1 = GetLinesAreaHeight();
        int iVar2 = GetLineHeight();
        auVar3._0_8_ = (long)iVar1 / (long)iVar2 & 4294967295;
        auVar3._8_8_ = (long)iVar1 % (long)iVar2 & 4294967295;
        return auVar3;
    }

    // 0x100075a70
    int OSClientConsoleUI::GetLinesAreaHeight() const {
        int iVar1 = GetConsoleHeight();
        int iVar2 = GetCommandLineHeight();
        return iVar1 - iVar2;
    }

    // 0x1000777d0
    void OSClientConsoleUI::SetBoundsToDefault() {
        SetBounds(field_120);
    }

} // namespace jag::oldscape

namespace jag::tweak {
    class Placement {
    public:
        Placement();
        Placement(int arg1, int arg2, int arg3, int arg4);
        bool IsInside(int arg1, int arg2) const;

    private:
        int field_0;
        int field_4;
        int field_8;
        int field_12;
        uint8_t _unknown_16[4];
    };

    // 0x100a45ba0
    bool Placement::IsInside(int arg1, int arg2) const {
        if (((arg1 < field_0) || (field_8 < arg1)) || (arg2 < field_4)) {
            return false;
        }
        return arg2 <= field_12;
    }

} // namespace jag::tweak
