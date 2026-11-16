// projects/osclient/debug/widgets/DrawContext.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::widgets {
    class DrawContext {
    public:
        void SetOpacity(int);
        void DrawRect(jag::math::Rect<int> const&, unsigned int);
        void GetStringWidth(eastl::string const&);
        GetFontMaxAscent() const;
        GetFontMaxDescent() const;
        void DrawString(eastl::string const&, int, int, int);
        void FillRect(jag::math::Rect<int> const&, unsigned int);
        void Line(int, int, int, int, unsigned int);
        DrawContext(graphics::NXTPix2D&, shared_ptr<jstring::PixfontGeneric>);
        ~DrawContext();
        void FillRect(jag::math::Rect<int> const&, unsigned int, unsigned int);
        void Line(int, int, int, int, unsigned int, unsigned int);
        void DrawStringMultiline(eastl::string const&, int, int, int, int, int);
        int GetLineHeight() const;
        void SetClipRect(int, int, int, int);
        void SetClipRect(jag::math::Rect<int> const&);
        void ResetClipRect();

        // data members, from how the methods use this: 36 bytes
        NXTPix2D* field_0; // offset 0
        char _unknown_8[16];
        int field_24; // offset 24
        int field_28; // offset 28
        char _unknown_32[4];
    };

    // 0x100066d30, 48 bytes, inline, placed by class name and debug map
    // DrawContext::GetLineHeight() const
    int DrawContext::GetLineHeight() {
        int iVar1;

        iVar1 = GetFontMaxAscent(this);
        return GetFontMaxDescent(this) + iVar1;
    }

} // namespace jag::oldscape::widgets
