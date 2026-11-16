// projects/osclient/debug/OSClientConsoleUI.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class OSClientConsoleUI {
    public:
        // virtual methods in vtable order
        virtual ~OSClientConsoleUI();
        virtual void OnHistoryEntryAdded(console::Line const&, bool);
        virtual void OnHistoryCleared();
        void Home();
        void PageUp();
        void End();
        void PageDown();
        void CopyEntireBufferToClipboard();
        CoordMapSquare GetBounds() const;
        char GetDragTypeAtPosition(jag::math::Point<int> const&) const;
        void HandlePointerDrag(ConsoleDragType, jag::math::Point<int> const&);
        void ScrollLines(int);
        void SetOpacity(bool);
        void SetFont(shared_ptr<jstring::PixfontGeneric> const&);
        void SetLayoutDirty();
        void Draw(bool);
        OSClientConsoleUI(Client&, game::console::CommandLine&);
        void SetBounds(jag::math::Rect<int> const&);
        void CreateWidgets(game::console::CommandLine&);
        void MeasureLine(int&, int&, console::Line const&) const;
        void GetTextExtentWidth() const;
        int GetLineHeight() const;
        GetOnScreenLines() const;
        void SetBottomLine(int);
        void OnBottomLineChanged();
        int GetCommandLineHeight() const;
        void GetConsoleHeight() const;
        void RecalculateLinesLayout();
        void LayoutWidgets();
        void ClipBoundsToUI();
        void GetDrawContext();
        int GetLinesAreaHeight() const;
        void SetBoundsToDefault();

        // data members, from how the methods use this: 160 bytes
        undefined** field_0; // offset 0, vtable pointer
        shared_ptr field_8;  // offset 8
        char _unknown_24[32];
        int field_56;        // offset 56
        int field_60;        // offset 60
        int field_64;        // offset 64
        undefined1 field_68; // offset 68
        char _unknown_69[35];
        CoordMapSquare m_bounds; // offset 104
        char _unknown_116[28];
        float field_144; // offset 144
        char _unknown_148[4];
        Client* field_152; // offset 152
    };

    // 0x10005d8c0, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // OSClientConsoleUI::GetBounds() const
    /* game::MapArea::GetOrigin() const */

    undefined8* game::MapArea::GetOrigin() {
        return &m_origin;
    }

    // 0x10005e790, 16 bytes, inline, placed by class name
    // OSClientConsoleUI::SetFont(shared_ptr<jstring::PixfontGeneric> const&)
    void OSClientConsoleUI::SetFont(shared_ptr* param_1) {
        shared_ptr<jstring::PixfontGeneric>::operator=((shared_ptr<jstring::PixfontGeneric>*)field_8, param_1);
    }

    // 0x10005eb40, 16 bytes, inline, placed by class name
    // OSClientConsoleUI::SetLayoutDirty()
    void OSClientConsoleUI::SetLayoutDirty() {
        field_68 = 1;
    }

    // 0x10005fa50, 48 bytes, inline, placed by class name
    // OSClientConsoleUI::GetOnScreenLines() const
    undefined1[16] OSClientConsoleUI::GetOnScreenLines() {
        int iVar1;
        int iVar2;
        undefined1 auVar3[16];

        iVar1 = GetLinesAreaHeight(this);
        iVar2 = GetLineHeight(this);
        auVar3._0_8_ = (long)iVar1 / (long)iVar2 & 4294967295;
        auVar3._8_8_ = (long)iVar1 % (long)iVar2 & 4294967295;
        return auVar3;
    }

    // 0x100075a70, 48 bytes, inline, placed by class name
    // OSClientConsoleUI::GetLinesAreaHeight() const
    int OSClientConsoleUI::GetLinesAreaHeight() {
        int iVar1;
        int iVar2;

        iVar1 = GetConsoleHeight(this);
        iVar2 = GetCommandLineHeight(this);
        return iVar1 - iVar2;
    }

    // 0x1000777d0, 16 bytes, inline, placed by class name
    // OSClientConsoleUI::SetBoundsToDefault()
    void OSClientConsoleUI::SetBoundsToDefault() {
        SetBounds(this, (Rect*)&field_120);
    }

} // namespace jag::oldscape

namespace jag::tweak {
    class Placement {
    public:
        Placement();
        Placement(int, int, int, int);
        bool IsInside(int, int) const;

        // data members, from how the methods use this: 20 bytes
        int field_0;  // offset 0
        int field_4;  // offset 4
        int field_8;  // offset 8
        int field_12; // offset 12
        char _unknown_16[4];
    };

    // 0x100a45ba0, 32 bytes, inline, placed by class header (inline)
    // Placement::IsInside(int, int) const
    bool Placement::IsInside(int param_1, int param_2) {
        if (((param_1 < field_0) || (field_8 < param_1)) || (param_2 < field_4)) {
            return false;
        }
        return param_2 <= field_12;
    }

} // namespace jag::tweak
