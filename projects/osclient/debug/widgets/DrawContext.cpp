// projects/osclient/debug/widgets/DrawContext.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "DrawContext.h"

namespace jag::oldscape::widgets {
    // 0x100060360, 64 bytes, placed by class name and debug map
    // DrawContext::SetOpacity(int)
    void DrawContext::SetOpacity(int param_1) {
        int local_1c[3];

        local_1c[1] = 0;
        local_1c[2] = 255;
        local_1c[0] = param_1;
        field_24 = jag::math::Clamp<int>(local_1c, local_1c + 1, local_1c + 2);
    }

    // 0x1000603a0, 128 bytes, placed by class name and debug map
    // DrawContext::DrawRect(jag::math::Rect<int> const&, unsigned int)
    void DrawContext::DrawRect(Rect* param_1, uint param_2) {
        NXTPix2D* this_00;
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;

        this_00 = field_0;
        iVar1 = param_1->GetX();
        iVar2 = param_1->GetZ();
        iVar3 = param_1->GetPos();
        iVar4 = param_1->GetLevel();
        this_00->DrawRectTrans(iVar1, iVar2, iVar3, iVar4, param_2, field_24);
    }

    // 0x100066aa0, 48 bytes, placed by class name
    // DrawContext::GetStringWidth(eastl::string const&)
    void DrawContext::GetStringWidth(basic_string* param_1) {
        PixfontGeneric* this_00;

        this_00 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
            (shared_ptr<jstring::PixfontGeneric>*)&field_8);
        this_00->StringWid(param_1);
    }

    // 0x100066ad0, 32 bytes, placed by class name
    // DrawContext::GetFontMaxAscent() const
    undefined4 DrawContext::GetFontMaxAscent() {
        long lVar1;

        lVar1 = shared_ptr<jstring::PixfontGeneric>::operator->((shared_ptr<jstring::PixfontGeneric>*)&field_8);
        return *(undefined4*)(lVar1 + 4);
    }

    // 0x100066af0, 32 bytes, placed by class name
    // DrawContext::GetFontMaxDescent() const
    undefined4 DrawContext::GetFontMaxDescent() {
        long lVar1;

        lVar1 = shared_ptr<jstring::PixfontGeneric>::operator->((shared_ptr<jstring::PixfontGeneric>*)&field_8);
        return *(undefined4*)(lVar1 + 8);
    }

    // 0x100066b10, 96 bytes, placed by class name
    // DrawContext::DrawString(eastl::string const&, int, int, int)
    void DrawContext::DrawString(basic_string* param_1, int param_2, int param_3, int param_4) {
        PixfontGeneric* this_00;

        this_00 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
            (shared_ptr<jstring::PixfontGeneric>*)&field_8);
        this_00->DrawString(param_1, param_2, param_3, param_4, field_28, (Pix2D*)field_0);
    }

    // 0x100066b80, 16 bytes, placed by class name
    // DrawContext::FillRect(jag::math::Rect<int> const&, unsigned int)
    void DrawContext::FillRect(Rect* param_1, uint param_2) {
        FillRect(this, param_1, param_2, field_24);
    }

    // 0x100066ba0, 32 bytes, placed by class name
    // DrawContext::Line(int, int, int, int, unsigned int)
    void DrawContext::Line(int param_1, int param_2, int param_3, int param_4, uint param_5) {
        Line((int)this, param_1, param_2, param_3, param_4, param_5);
    }

    // 0x100066bc0, 48 bytes, base-object constructor, placed by class name
    // DrawContext::DrawContext(graphics::NXTPix2D&, shared_ptr<jstring::PixfontGeneric>)
    void DrawContext::DrawContext(NXTPix2D* param_1, shared_ptr param_2) {
        shared_ptr* in_RDX;

        field_0 = param_1;
        new (&field_8, in_RDX) shared_ptr<dash3d::Decor>();
        field_24 = 255;
        field_28 = -16777216;
    }

    // 0x100066bf0, 16 bytes, complete-object constructor, placed by class name
    // DrawContext::DrawContext(graphics::NXTPix2D&, shared_ptr<jstring::PixfontGeneric>): jumps straight to the base-object constructor

    // 0x100066c00, 16 bytes, base-object destructor, placed by class name
    // DrawContext::~DrawContext()
    void DrawContext::~DrawContext() {
        (&field_8)->~shared_ptr();
    }

    // 0x100066c10, 16 bytes, complete-object destructor, placed by class name
    // DrawContext::~DrawContext(): jumps straight to the base-object destructor

    // 0x100066c20, 128 bytes, placed by class name
    // DrawContext::FillRect(jag::math::Rect<int> const&, unsigned int, unsigned int)
    void DrawContext::FillRect(Rect* param_1, uint param_2, uint param_3) {
        NXTPix2D* pNVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        undefined4 uVar5;

        pNVar1 = field_0;
        uVar2 = param_1->GetX();
        uVar3 = param_1->GetZ();
        uVar4 = param_1->GetPos();
        uVar5 = param_1->GetLevel();
        (*(code*)pNVar1->field_0[3])(pNVar1, uVar2, uVar3, uVar4, uVar5, param_2, param_3);
    }

    // 0x100066ca0, 32 bytes, placed by class name
    // DrawContext::Line(int, int, int, int, unsigned int, unsigned int)
    void DrawContext::Line(int param_1, int param_2, int param_3, int param_4, uint param_5, uint param_6) {
        undefined4 in_register_0000003c;

        (**(code**)(**(long**)CONCAT44(in_register_0000003c, param_1) + 96))();
    }

    // 0x100066cc0, 112 bytes, placed by class name
    // DrawContext::DrawStringMultiline(eastl::string const&, int, int, int, int, int)
    void DrawContext::DrawStringMultiline(basic_string* param_1, int param_2, int param_3, int param_4, int param_5,
                                          int param_6) {
        int iVar1;
        PixfontGeneric* this_00;

        this_00 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
            (shared_ptr<jstring::PixfontGeneric>*)&field_8);
        iVar1 = GetLineHeight(this);
        this_00->DrawStringMultiline(param_1, param_2, param_3, param_4, param_5, param_6, 0, 0, 0, iVar1, field_0);
    }

    // 0x100066d60, 16 bytes, placed by class name
    // DrawContext::SetClipRect(int, int, int, int)
    void DrawContext::SetClipRect(int param_1, int param_2, int param_3, int param_4) {
        (field_0, param_1, param_2, param_3, param_4)->SetClipping();
    }

    // 0x100066d70, 96 bytes, placed by class name
    // DrawContext::SetClipRect(jag::math::Rect<int> const&)
    void DrawContext::SetClipRect(Rect* param_1) {
        NXTPix2D* this_00;
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;

        this_00 = field_0;
        iVar1 = param_1->GetX();
        iVar2 = param_1->GetZ();
        iVar3 = param_1->Right();
        iVar4 = param_1->MaxZ();
        this_00->SetClipping(iVar1, iVar2, iVar3, iVar4);
    }

    // 0x100066dd0, 16 bytes, placed by class name
    // DrawContext::ResetClipRect()
    void DrawContext::ResetClipRect() {
        field_0->ResetClipping();
    }

} // namespace jag::oldscape::widgets
