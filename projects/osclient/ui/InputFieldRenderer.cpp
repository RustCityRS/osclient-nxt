// projects/osclient/ui/InputFieldRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "InputFieldRenderer.h"

namespace jag::oldscape {
    // 0x1000257e0, 816 bytes, placed by class name and debug map
    // InputFieldRenderer::Draw(InputFieldLayoutParams const&, InputFieldColourParams const&, jag::graphics::TextRun const&, shared_ptr<jstring::PixfontGeneric> const&, graphics::Pix2D&)
    void InputFieldRenderer::Draw(InputFieldLayoutParams* param_1, InputFieldColourParams* param_2, TextRun* param_3,
                                  shared_ptr* param_4, Pix2D* param_5) {
        Pix8* pPVar3;
        char cVar5;
        int iVar6;
        int iVar7;
        undefined4 uVar8;
        int* piVar9;
        long lVar10;
        wchar16* pwVar11;
        wchar16* pwVar12;
        PixfontGeneric* pPVar13;
        undefined8 uVar14;
        int iVar15;
        int iVar16;
        int iVar17;
        undefined1 local_f8[32];
        undefined1 local_d8[32];
        undefined1 local_b8[32];
        undefined1 local_98[40];
        int local_60;
        int local_5c;
        Pix8* local_58;
        Pix8* local_50;
        int local_44;
        int local_34;

        if (!operator==(param_4, (_func_decltype_nullptr*)0)) {
            piVar9 =
                (int*)shared_ptr<jstring::PixfontGeneric>::operator->((shared_ptr<jstring::PixfontGeneric>*)param_4);
            iVar15 = *piVar9;
            local_60 = eastl::min<jag::graphics::GraphicsQuality>(*(undefined4*)&param_1->field_12,
                                                                  (int)((float)iVar15 * 0.9));
            iVar6 = param_3->GetLeftOffsetForHorizontalAlignment(*(int*)&param_1->field_8);
            iVar7 = param_3->GetTopOffsetForVerticalAlignment(*(int*)&param_1->field_12);
            iVar17 = *(int*)param_1;
            iVar16 = *(int*)&param_1->field_4;
            local_34 = iVar17 - *(int*)&param_1->field_16;
            local_44 = (iVar7 + iVar15 + iVar16) - *(int*)&param_1->field_20;
            local_5c = iVar15;
            param_5->SetClipping(iVar17, iVar16, *(int*)&param_1->field_8 + iVar17, *(int*)&param_1->field_12 + iVar16);
            local_58 = (Pix8*)param_1->field_32;
            local_50 = (Pix8*)param_1->field_24;
            if (local_50 < local_58) {
                eastl::swap<graphics::Pix8*>(&local_58, &local_50);
            }
            local_34 = local_34 + iVar6;
            local_d8->Slice((ulong)param_3, 0);
            local_98->Slice((ulong)param_3, (ulong)local_58);
            pPVar3 = local_50;
            param_3->GetCodepointCount();
            local_b8->Slice((ulong)param_3, (ulong)pPVar3);
            local_98._32_8_ = param_1;
            local_f8->Slice((ulong)param_3, 0);
            cVar5 = local_98->IsEmpty();
            if (cVar5 == '\0') {
                lVar10 = shared_ptr<jstring::PixfontGeneric>::operator->((shared_ptr<jstring::PixfontGeneric>*)param_4);
                iVar15 = *(int*)(lVar10 + 4);
                lVar10 = shared_ptr<jstring::PixfontGeneric>::operator->((shared_ptr<jstring::PixfontGeneric>*)param_4);
                iVar17 = *(int*)(lVar10 + 8);
                pwVar11 = (wchar16*)local_98->end();
                pwVar12 = (wchar16*)local_98->data();
                if (pwVar11 != pwVar12) {
                    iVar16 = local_44 - local_5c;
                    do {
                        iVar6 = *(int*)(pwVar11 + 2) + local_34;
                        pPVar13 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
                            (shared_ptr<jstring::PixfontGeneric>*)param_4);
                        uVar8 = pPVar13->CharWid(*pwVar11);
                        (**(code**)(param_5->field_0 + 32))(param_5, iVar6, *(int*)(pwVar11 + 4) + iVar16, uVar8,
                                                            iVar15 + iVar17, *(uint*)(param_2 + 12));
                        pwVar11 = pwVar11 + 6;
                        pwVar12 = (wchar16*)local_98->data();
                    } while (pwVar11 != pwVar12);
                }
            }
            cVar5 = local_d8->IsEmpty();
            iVar17 = local_34;
            iVar15 = local_44;
            if (cVar5 == '\0') {
                pPVar13 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
                    (shared_ptr<jstring::PixfontGeneric>*)param_4);
                pPVar13->DrawTextRunSlice(local_d8, iVar17, iVar15, *(uint*)param_2, *(uint*)(param_2 + 4), param_5,
                                          -1);
            }
            cVar5 = local_98->IsEmpty();
            if (cVar5 == '\0') {
                pPVar13 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
                    (shared_ptr<jstring::PixfontGeneric>*)param_4);
                pPVar13->DrawTextRunSlice(local_98, iVar17, iVar15, *(uint*)(param_2 + 8), *(uint*)(param_2 + 4),
                                          param_5, -1);
            }
            cVar5 = local_b8->IsEmpty();
            if (cVar5 == '\0') {
                pPVar13 = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
                    (shared_ptr<jstring::PixfontGeneric>*)param_4);
                pPVar13->DrawTextRunSlice(local_b8, iVar17, iVar15, *(uint*)param_2, *(uint*)(param_2 + 4), param_5,
                                          -1);
            }
            if (*(char*)(local_98._32_8_ + 40) != '\0') {
                uVar14 = local_f8->GetLastCursorPosition();
                iVar17 = iVar17 + (int)uVar14;
                iVar15 = iVar15 + (int)((ulong)uVar14 >> 32);
                iVar16 = iVar15 - local_60;
                (**(code**)(param_5->field_0 + 88))(param_5, iVar17, iVar15, iVar17, iVar16, *(uint*)param_2);
                if (*(uint*)(param_2 + 4) != 4294967295) {
                    (**(code**)(param_5->field_0 + 88))(param_5, iVar17 + 1, iVar15 + 1, iVar17 + 1, iVar16 + 1);
                }
            }
        }
    }

} // namespace jag::oldscape
