// projects/osclient/debug/widgets/OutputWidget.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "OutputWidget.h"

namespace jag::oldscape::widgets {
    // 0x100009e70: OutputWidget::~OutputWidget() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x10005fe80: OutputWidget::SetBottomLine(int) has the same machine code as CommandLineWidget::SetSelectedTextColour(unsigned int)

    // 0x100066de0
    void OutputWidget::DrawContents(DrawContext& drawContext) {
        Line* this_00;
        char* str;
        int arg5;
        uint64_t local_70[4];
        uint32_t local_44;

        auto this_01 = GetPos();
        drawContext.SetClipRect(*this_01);
        int local_34 = this_01->MaxZ();
        int iVar3 = m_bottomLine;
        int iVar2 = drawContext.GetLineHeight();
        uint64_t local_40 = field_80->begin();
        local_70[0] = field_80->end();
        bool cVar1 = local_40 != *local_70;
        if (cVar1) {
            iVar3 = iVar2 * iVar3 + local_34;
            do {
                this_00 = (Line*)*local_40;
                iVar3 = iVar3 - field_88;
                iVar2 = this_01->MaxZ();
                if (iVar3 <= iVar2) {
                    local_34 = iVar3;
                    local_44 = this_00->GetColour();
                    str = (char*)this_00->field_8.begin();
                    new (local_70) eastl::string(str);
                    iVar2 = this_01->GetX();
                    iVar3 = local_34;
                    arg5 = this_01->GetPos();
                    DrawContext::DrawStringMultiline(drawContext, (int)(eastl::string*)local_70, iVar2, iVar3, arg5,
                                                     field_88);
                }
                iVar2 = this_01->GetZ();
                if (iVar3 < iVar2)
                    break;
                local_40++;
                local_70[0] = field_80->end();
                cVar1 = local_40 != *local_70;
            } while (cVar1);
        }
        drawContext.ResetClipRect();
    }

} // namespace jag::oldscape::widgets
