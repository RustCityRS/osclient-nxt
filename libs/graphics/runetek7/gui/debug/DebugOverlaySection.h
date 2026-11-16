// libs/graphics/runetek7/gui/debug/DebugOverlaySection.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class DebugOverlaySection : public graphics::Drawable // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~DebugOverlaySection();
        virtual uint64_t Update(unsigned long long arg1);
        virtual void UpdateOnMainLogic(unsigned long long arg1);
        virtual void SetHeight(int arg1);
        virtual void DrawTextString(const eastl::fixed_string<char, 512>& str, int arg2, int arg3, unsigned int arg4,
                                    int arg5, graphics::FontAlign fontAlign);
        virtual long CalculateLineAlpha(int arg1);
        void RegisterTweakyVars(tweak::Container& arg1);
        SectionType GetSectionType();
        void Hide();
        void Show();
        bool GetShow();
        void ResetWidth();
        int* GetHeight();
        void IsMouseInside(const math::Point<int>& point);
        bool IsExpandedForced() const;
        bool IsExpanded() const;
        void Expand(unsigned long long arg1);
        bool IsContracted() const;
        void Contract(unsigned long long arg1);
        DebugOverlaySection(DebugOverlay& debugOverlay, SectionType sectionType, bool arg3);

    private:
        int field_16;
        uint8_t _unknown_20[84];
        uint32_t field_104;
        int m_height;
        int field_112;
        int field_116;
        bool m_show;
        uint8_t m_expandedForced;
        uint8_t _unknown_122[2];
        SectionType m_sectionType;
        uint8_t _unknown_128[4];
    };

    // 0x1008f9a00
    void DebugOverlaySection::Hide() {
        m_show = false;
    }

    // 0x1008f9aa0
    void DebugOverlaySection::Show() {
        m_show = true;
    }

    // 0x1008fa040
    bool DebugOverlaySection::GetShow() {
        ResetWidth();
        return m_show;
    }

    // 0x1008fa060
    void DebugOverlaySection::ResetWidth() {
        field_104 = 0;
    }

    // 0x1008fa070
    int* DebugOverlaySection::GetHeight() {
        return &m_height;
    }

    // 0x1008fa080
    void DebugOverlaySection::IsMouseInside(const math::Point<int>& point) {
        field_88.IsInside<int>(point);
    }

    // 0x1008fa090
    bool DebugOverlaySection::IsExpandedForced() const {
        return m_expandedForced;
    }

    // 0x1008fa0a0
    bool DebugOverlaySection::IsExpanded() const {
        return field_16 == 1;
    }

    // 0x1008fa120
    bool DebugOverlaySection::IsContracted() const {
        return field_16 == 0;
    }

} // namespace jag
