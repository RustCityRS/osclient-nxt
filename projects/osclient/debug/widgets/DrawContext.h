// projects/osclient/debug/widgets/DrawContext.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::widgets {
    class DrawContext {
    public:
        void SetOpacity(int arg1);
        void DrawRect(const jag::math::Rect<int>& rect, unsigned int arg2);
        void GetStringWidth(const eastl::string& str);
        uint32_t GetFontMaxAscent() const;
        uint32_t GetFontMaxDescent() const;
        void DrawString(const eastl::string& str, int arg2, int arg3, int arg4);
        void FillRect(const jag::math::Rect<int>& rect, unsigned int arg2);
        void Line(int arg1, int arg2, int arg3, int arg4, unsigned int arg5);
        DrawContext(graphics::NXTPix2D& nxtPix2D, shared_ptr<jstring::PixfontGeneric> pixfontGeneric);
        ~DrawContext();
        void FillRect(const jag::math::Rect<int>& rect, unsigned int arg2, unsigned int arg3);
        void Line(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, unsigned int arg6);
        void DrawStringMultiline(const eastl::string& str, int arg2, int arg3, int arg4, int arg5, int arg6);
        int GetLineHeight() const;
        void SetClipRect(int arg1, int arg2, int arg3, int arg4);
        void SetClipRect(const jag::math::Rect<int>& rect);
        void ResetClipRect();

    private:
        NXTPix2D* field_0;
        uint8_t _unknown_8[16];
        int field_24;
        unsigned int field_28;
        uint8_t _unknown_32[4];
    };

    // 0x100066d30
    int DrawContext::GetLineHeight() const {
        int iVar1 = GetFontMaxAscent();
        return GetFontMaxDescent() + iVar1;
    }

} // namespace jag::oldscape::widgets
