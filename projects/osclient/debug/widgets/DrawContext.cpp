// projects/osclient/debug/widgets/DrawContext.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "DrawContext.h"

namespace jag::oldscape::widgets {
    // 0x100060360
    void DrawContext::SetOpacity(int arg1) {
        int local_1c[3];

        local_1c[1] = 0;
        local_1c[2] = 255;
        local_1c[0] = arg1;
        field_24 = jag::math::Clamp<int>(*local_1c, *(local_1c + 1), *(local_1c + 2));
    }

    // 0x1000603a0
    void DrawContext::DrawRect(const jag::math::Rect<int>& rect, unsigned int arg2) {
        NXTPix2D* this_00 = field_0;
        int arg1 = rect.GetX();
        int arg2_00 = rect.GetZ();
        int arg3 = rect.GetPos();
        int arg4 = rect.GetLevel();
        this_00->DrawRectTrans(arg1, arg2_00, arg3, arg4, arg2, field_24);
    }

    // 0x100066aa0
    void DrawContext::GetStringWidth(const eastl::string& str) {
        ((PixfontGeneric*)field_8.operator->())->StringWid(str);
    }

    // 0x100066ad0
    uint32_t DrawContext::GetFontMaxAscent() const {
        long lVar1 = field_8.operator->();
        return *(uint32_t*)(lVar1 + 4);
    }

    // 0x100066af0
    uint32_t DrawContext::GetFontMaxDescent() const {
        long lVar1 = field_8.operator->();
        return *(uint32_t*)(lVar1 + 8);
    }

    // 0x100066b10
    void DrawContext::DrawString(const eastl::string& str, int arg2, int arg3, int arg4) {
        jstring::PixfontGeneric::DrawString(*((eastl::string*)field_8.operator->()), (int)str, arg2, arg3, arg4,
                                            *((Pix2D*)(unsigned long)field_28));
    }

    // 0x100066b80
    void DrawContext::FillRect(const jag::math::Rect<int>& rect, unsigned int arg2) {
        FillRect(rect, arg2, field_24);
    }

    // 0x100066ba0
    void DrawContext::Line(int arg1, int arg2, int arg3, int arg4, unsigned int arg5) {
        Line(arg1, arg2, arg3, arg4, arg5, field_24);
    }

    // 0x100066bc0
    DrawContext::DrawContext(graphics::NXTPix2D& nxtPix2D, shared_ptr<jstring::PixfontGeneric> pixfontGeneric)
        : field_0(nxtPix2D), field_8(pixfontGeneric), field_24(255), field_28(4278190080) {}

    // 0x100066c00
    DrawContext::~DrawContext() {
        field_8.~shared_ptr();
    }

    // 0x100066c20
    void DrawContext::FillRect(const jag::math::Rect<int>& rect, unsigned int arg2, unsigned int arg3) {
        NXTPix2D* pNVar1 = field_0;
        int arg2_00 = rect.GetX();
        int arg3_00 = rect.GetZ();
        int arg4 = rect.GetPos();
        unsigned int arg5 = rect.GetLevel();
        pNVar1->FillRectTrans((int)pNVar1, arg2_00, arg3_00, arg4, arg5, arg2);
    }

    // 0x100066ca0
    void DrawContext::Line(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, unsigned int arg6) {
        field_0->LineTrans((int)field_0, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x100066cc0
    void DrawContext::DrawStringMultiline(const eastl::string& str, int arg2, int arg3, int arg4, int arg5, int arg6) {
        uint32_t in_register_00000034;
        int in_stack_00000008;

        PixfontGeneric* pixfontGeneric = (PixfontGeneric*)(*((str + 8))).operator->();
        int arg10 = GetLineHeight((DrawContext*)str);
        pixfontGeneric->DrawStringMultiline(
            *((eastl::string*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2)), arg3, arg4, arg5, arg6,
            in_stack_00000008, 0, 0, 0, arg10, *(*(Pix2D**)str));
    }

    // 0x100066d60
    void DrawContext::SetClipRect(int arg1, int arg2, int arg3, int arg4) {
        field_0->SetClipping(arg1, arg2, arg3, arg4);
    }

    // 0x100066d70
    void DrawContext::SetClipRect(const jag::math::Rect<int>& rect) {
        NXTPix2D* this_00 = field_0;
        int arg1 = rect.GetX();
        int arg2 = rect.GetZ();
        int arg3 = rect.Right();
        int arg4 = rect.MaxZ();
        this_00->SetClipping(arg1, arg2, arg3, arg4);
    }

    // 0x100066dd0
    void DrawContext::ResetClipRect() {
        field_0->ResetClipping();
    }

} // namespace jag::oldscape::widgets
