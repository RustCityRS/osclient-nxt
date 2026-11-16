// libs/graphics/runetek7/gui/debug/DebugOverlaySection.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class DebugOverlaySection : public graphics::Drawable // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlaySection();
        virtual Update(unsigned long long);
        virtual UpdateOnMainLogic(unsigned long long);
        virtual void SetHeight(int);
        virtual void DrawTextString(eastl::fixed_string<char, 512, true, eastl::allocator> const&, int, int,
                                    unsigned int, int, graphics::FontAlign);
        virtual long CalculateLineAlpha(int);
        RegisterTweakyVars(tweak::Container&);
        GetSectionType();
        void Hide();
        void Show();
        GetShow();
        void ResetWidth();
        int* GetHeight();
        void IsMouseInside(math::Point<int> const&);
        IsExpandedForced() const;
        bool IsExpanded() const;
        void Expand(unsigned long long);
        bool IsContracted() const;
        void Contract(unsigned long long);
        DebugOverlaySection(DebugOverlay&, SectionType, bool);

        // data members, from how the methods use this: 132 bytes, the first 16 are Drawable
        int field_16; // offset 16
        char _unknown_20[84];
        undefined4 field_104;        // offset 104
        int m_height;                // offset 108
        int field_112;               // offset 112
        int field_116;               // offset 116
        undefined1 m_show;           // offset 120
        undefined1 m_expandedForced; // offset 121
        char _unknown_122[2];
        undefined4 m_sectionType; // offset 124
        char _unknown_128[4];
    };

    // 0x1008f9a00, 16 bytes, inline, placed by class name and debug map
    // DebugOverlaySection::Hide()
    void DebugOverlaySection::Hide() {
        m_show = 0;
    }

    // 0x1008f9aa0, 16 bytes, inline, placed by class name and debug map
    // DebugOverlaySection::Show()
    void DebugOverlaySection::Show() {
        m_show = 1;
    }

    // 0x1008fa040, 32 bytes, inline, placed by class name
    // DebugOverlaySection::GetShow()
    undefined1 DebugOverlaySection::GetShow() {
        ResetWidth(this);
        return m_show;
    }

    // 0x1008fa060, 16 bytes, inline, placed by class name
    // DebugOverlaySection::ResetWidth()
    void DebugOverlaySection::ResetWidth() {
        field_104 = 0;
    }

    // 0x1008fa070, 16 bytes, inline, placed by class name
    // DebugOverlaySection::GetHeight()
    int* DebugOverlaySection::GetHeight() {
        return &m_height;
    }

    // 0x1008fa080, 16 bytes, inline, placed by class name
    // DebugOverlaySection::IsMouseInside(math::Point<int> const&)
    void DebugOverlaySection::IsMouseInside(Point* param_1) {
        math::Rect<int>::IsInside<int>((Rect<int>*)&field_88, param_1);
    }

    // 0x1008fa090, 16 bytes, inline, placed by class name
    // DebugOverlaySection::IsExpandedForced() const
    undefined1 DebugOverlaySection::IsExpandedForced() {
        return m_expandedForced;
    }

    // 0x1008fa0a0, 16 bytes, inline, placed by class name
    // DebugOverlaySection::IsExpanded() const
    bool DebugOverlaySection::IsExpanded() {
        return field_16 == 1;
    }

    // 0x1008fa120, 16 bytes, inline, placed by class name
    // DebugOverlaySection::IsContracted() const
    bool DebugOverlaySection::IsContracted() {
        return field_16 == 0;
    }

} // namespace jag
