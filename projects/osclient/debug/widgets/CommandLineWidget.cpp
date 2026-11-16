// projects/osclient/debug/widgets/CommandLineWidget.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "CommandLineWidget.h"

namespace jag::oldscape::widgets {
    // 0x100009e70: CommandLineWidget::~CommandLineWidget() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1000666a0
    CommandLineWidget::CommandLineWidget(game::console::CommandLine& commandLine)
        : Widget(), field_80(commandLine), m_highlightColour(4287137928) {}

    // 0x100066750
    void CommandLineWidget::DrawContents(DrawContext& drawContext) {
        GridRect local_68;
        int local_3c;
        int local_38;

        auto this_01 = GetPos();
        eastl::string local_c8(">");
        unsigned long local_48 = drawContext.GetStringWidth(local_c8);
        int iVar2 = this_01->GetX();
        uint64_t local_70 = drawContext.GetFontMaxAscent();
        int local_7c = iVar2;
        int iVar3 = drawContext.GetFontMaxDescent();
        int iVar6 = (int)local_70 + iVar3;
        iVar2 = this_01->MaxZ();
        int iVar4 = this_01->GetLevel();
        CommandLineWidget* this_00 = this;
        int local_74 = iVar2 - (iVar4 - iVar6) / 2;
        iVar3 = local_74 - iVar3;
        int local_78 = iVar6;
        iVar4 = GetMaxLineWidth();
        iVar2 = local_7c;
        int local_34 = iVar3;
        drawContext.DrawString(local_c8, local_7c, iVar3, iVar4);
        auto str = this_00->field_80->GetText();
        local_a0 = eastl::string(str);
        unsigned int uVar5 = (int)local_48 + 6 + iVar2;
        iVar2 = this_00->GetMaxLineWidth();
        local_48 = (unsigned long)uVar5;
        drawContext.DrawString(local_a0, uVar5, local_34, iVar2);
        if (this_00->field_80->GetSelection(local_3c, local_38)) {
            local_68 = local_a0.substr(0, (long)local_3c);
            iVar2 = drawContext.GetStringWidth(local_68);
            local_68 = local_a0.substr(0, (long)local_38);
            iVar3 = drawContext.GetStringWidth(local_68);
            iVar4 = (int)local_48 + iVar2;
            local_68 = dash3d::GridRect(iVar4, local_34 - (int)local_70, iVar3 - iVar2, local_78);
            drawContext.FillRect(local_68, this_00->m_highlightColour);
            local_68 = local_a0.substr((long)local_3c, (long)local_38 - (long)local_3c);
            drawContext.DrawString(local_68, iVar4, local_34, *(int*)&this_00->field_92);
        }
        if (this_00->field_80->GetCursorShown()) {
            iVar2 = this_00->field_80->GetPos();
            local_68 = local_a0.substr(0, (long)iVar2);
            iVar2 = drawContext.GetStringWidth(local_68);
            uVar5 = ((GraphicsApp*)BaseApp::GetAppInstance())->GetLogicTick();
            if (15 < uVar5 / 30 + (uVar5 / 30) * -32 + uVar5 / 30 + uVar5) {
                iVar2 = iVar2 + (int)local_48;
                iVar3 = local_34 - (int)local_70;
                uVar5 = this_00->GetMaxLineWidth();
                drawContext.Line(iVar2, iVar3, iVar2, local_74, uVar5);
            }
        }
    }

} // namespace jag::oldscape::widgets
