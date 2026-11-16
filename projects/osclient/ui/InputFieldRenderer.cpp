// projects/osclient/ui/InputFieldRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "InputFieldRenderer.h"

namespace jag::oldscape {
    // 0x1000257e0
    void InputFieldRenderer::Draw(const InputFieldLayoutParams& inputFieldLayoutParams,
                                  const InputFieldColourParams& inputFieldColourParams,
                                  const jag::graphics::TextRun& textRun,
                                  const shared_ptr<jstring::PixfontGeneric>& pixfontGeneric, graphics::Pix2D& pix2D) {
        Pix32* arg1;
        bool cVar3;
        int iVar4;
        int iVar5;
        uint32_t uVar6;
        int* piVar7;
        unsigned long arg2;
        long lVar8;
        char16_t* pwVar9;
        char16_t* pwVar10;
        PixfontGeneric* pPVar11;
        uint64_t uVar12;
        int iVar13;
        int iVar14;
        int iVar15;
        TextRunSlice local_f8;
        TextRunSlice local_d8;
        TextRunSlice local_b8;
        TextRunSlice local_98;
        InputFieldLayoutParams* local_78;
        int local_60;
        int local_5c;
        Pix32* local_58;
        Pix32* local_50;
        int local_44;
        int local_34;

        if (!pixfontGeneric == nullptr) {
            piVar7 = (int*)pixfontGeneric.operator->();
            iVar13 = *piVar7;
            local_60 = eastl::min<jag::graphics::GraphicsQuality>(*(EnumOptionToggle*)&inputFieldLayoutParams.field_12,
                                                                  (int)((float)iVar13 * 0.9));
            iVar4 = textRun.GetLeftOffsetForHorizontalAlignment(*(int*)&inputFieldLayoutParams.field_8);
            iVar5 = textRun.GetTopOffsetForVerticalAlignment(*(int*)&inputFieldLayoutParams.field_12);
            iVar15 = *(int*)inputFieldLayoutParams;
            iVar14 = *(int*)&inputFieldLayoutParams.field_4;
            local_34 = iVar15 - *(int*)&inputFieldLayoutParams.field_16;
            local_44 = (iVar5 + iVar13 + iVar14) - *(int*)&inputFieldLayoutParams.field_20;
            local_5c = iVar13;
            pix2D.SetClipping(iVar15, iVar14, *(int*)&inputFieldLayoutParams.field_8 + iVar15,
                              *(int*)&inputFieldLayoutParams.field_12 + iVar14);
            local_58 = (Pix32*)inputFieldLayoutParams.field_32;
            local_50 = (Pix32*)inputFieldLayoutParams.field_24;
            if (local_50 < local_58) {
                eastl::swap<graphics::Pix8*>(local_58, local_50);
            }
            local_34 = local_34 + iVar4;
            local_d8 = textRun.Slice(0, (unsigned long)local_58);
            local_98 = textRun.Slice((unsigned long)local_58, (unsigned long)local_50);
            arg1 = local_50;
            arg2 = textRun.GetCodepointCount();
            local_b8 = textRun.Slice((unsigned long)arg1, arg2);
            local_78 = inputFieldLayoutParams;
            local_f8 = textRun.Slice(0, inputFieldLayoutParams.field_24);
            cVar3 = local_98.IsEmpty();
            if (!cVar3) {
                lVar8 = pixfontGeneric.operator->();
                iVar13 = *(int*)(lVar8 + 4);
                lVar8 = pixfontGeneric.operator->();
                iVar15 = *(int*)(lVar8 + 8);
                pwVar9 = (char16_t*)local_98.end();
                pwVar10 = (char16_t*)local_98.data();
                if (pwVar9 != pwVar10) {
                    iVar14 = local_44 - local_5c;
                    do {
                        iVar4 = *(int*)(pwVar9 + 2) + local_34;
                        pPVar11 = (PixfontGeneric*)pixfontGeneric.operator->();
                        uVar6 = pPVar11->CharWid(*pwVar9);
                        (**(void (**)(...))(pix2D.field_0 + 32))(pix2D, iVar4, *(int*)(pwVar9 + 4) + iVar14, uVar6,
                                                                 iVar13 + iVar15,
                                                                 *(unsigned int*)(inputFieldColourParams + 12));
                        pwVar9 = pwVar9 + 6;
                        pwVar10 = (char16_t*)local_98.data();
                    } while (pwVar9 != pwVar10);
                }
            }
            cVar3 = local_d8.IsEmpty();
            iVar15 = local_34;
            iVar13 = local_44;
            if (!cVar3) {
                pPVar11 = (PixfontGeneric*)pixfontGeneric.operator->();
                pPVar11->DrawTextRunSlice(local_d8, iVar15, iVar13, *(unsigned int*)inputFieldColourParams,
                                          *(unsigned int*)(inputFieldColourParams + 4), pix2D, -1);
            }
            cVar3 = local_98.IsEmpty();
            if (!cVar3) {
                pPVar11 = (PixfontGeneric*)pixfontGeneric.operator->();
                pPVar11->DrawTextRunSlice(local_98, iVar15, iVar13, *(unsigned int*)(inputFieldColourParams + 8),
                                          *(unsigned int*)(inputFieldColourParams + 4), pix2D, -1);
            }
            cVar3 = local_b8.IsEmpty();
            if (!cVar3) {
                pPVar11 = (PixfontGeneric*)pixfontGeneric.operator->();
                pPVar11->DrawTextRunSlice(local_b8, iVar15, iVar13, *(unsigned int*)inputFieldColourParams,
                                          *(unsigned int*)(inputFieldColourParams + 4), pix2D, -1);
            }
            if (*(char*)(local_78 + 1) != '\0') {
                uVar12 = local_f8.GetLastCursorPosition();
                iVar15 = iVar15 + (int)uVar12;
                iVar13 = iVar13 + (int)((unsigned long)uVar12 >> 32);
                iVar14 = iVar13 - local_60;
                (**(void (**)(...))(pix2D.field_0 + 88))(pix2D, iVar15, iVar13, iVar15, iVar14,
                                                         *(unsigned int*)inputFieldColourParams);
                if (*(unsigned int*)(inputFieldColourParams + 4) != 4294967295) {
                    (**(void (**)(...))(pix2D.field_0 + 88))(pix2D, iVar15 + 1, iVar13 + 1, iVar15 + 1, iVar14 + 1);
                }
            }
        }
    }

} // namespace jag::oldscape
