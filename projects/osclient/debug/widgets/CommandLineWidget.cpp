// projects/osclient/debug/widgets/CommandLineWidget.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "CommandLineWidget.h"

namespace jag::oldscape::widgets {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    CommandLineWidget::~CommandLineWidget();

    // 0x10002a770: the linker folded this into void eastl::destruct<rs2lib::CoordMapSquare*>(rs2lib::CoordMapSquare*, rs2lib::CoordMapSquare*), which has identical code
    CommandLineWidget::~CommandLineWidget();

    // 0x10004af40: the linker folded this into std::__function::__func<std::__bind<void (Client::*)(), Client*&>, std::allocator<std::__bind<void (Client::*)(), Client*&> >, void (ClientWindowMode)>::~__func(), which has identical code
    CommandLineWidget::~CommandLineWidget();

    // 0x1000666a0, 48 bytes, base-object constructor, placed by class name and debug map
    // CommandLineWidget::CommandLineWidget(game::console::CommandLine&)
    void CommandLineWidget::CommandLineWidget(CommandLine* param_1) {
        new (this) Widget();
        field_0 = &PTR_destruct<highlight::NpcUID*> _100ef2828;
        field_80 = param_1;
        m_highlightColour = 4287137928;
    }

    // 0x100066740, 16 bytes, complete-object constructor, placed by class name and debug map
    // CommandLineWidget::CommandLineWidget(game::console::CommandLine&): jumps straight to the base-object constructor

    // 0x100066750, 848 bytes, placed by class name and debug map
    // CommandLineWidget::DrawContents(DrawContext&)
    void CommandLineWidget::DrawContents(DrawContext* param_1) {
        CommandLineWidget* this_00;
        char cVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        Minimap* this_01;
        char* pcVar5;
        GraphicsApp* this_02;
        uint uVar6;
        int iVar7;
        eastl::string local_c8[32];
        allocator local_a0[36];
        int local_7c;
        int local_78;
        int local_74;
        undefined8 local_70;
        GridRect local_68;
        ulong local_48;
        int local_3c;
        int local_38;
        int local_34;

        this_01 = (Minimap*)GetPos();
        eastl::allocator::allocator(local_a0, "EASTL basic_string");
        eastl::string::basic_string(local_c8, ">", local_a0);
        local_48 = param_1->GetStringWidth(local_c8);
        iVar2 = this_01->GetX();
        local_70 = param_1->GetFontMaxAscent();
        local_7c = iVar2;
        iVar3 = param_1->GetFontMaxDescent();
        iVar7 = (int)local_70 + iVar3;
        iVar2 = this_01->MaxZ();
        iVar4 = this_01->GetLevel();
        this_00 = (CommandLineWidget*)this;
        local_74 = iVar2 - (iVar4 - iVar7) / 2;
        iVar3 = local_74 - iVar3;
        local_78 = iVar7;
        iVar4 = ((CommandLineWidget*)this)->GetMaxLineWidth();
        iVar2 = local_7c;
        local_34 = iVar3;
        param_1->DrawString(local_c8, local_7c, iVar3, iVar4);
        pcVar5 = (char*)this_00->field_80->GetText();
        new (&local_68) eastl::allocator("EASTL basic_string");
        new (local_a0) eastl::string(pcVar5, (allocator*)&local_68);
        uVar6 = (int)local_48 + 6 + iVar2;
        iVar2 = this_00->GetMaxLineWidth();
        local_48 = (ulong)uVar6;
        param_1->DrawString(local_a0, uVar6, local_34, iVar2);
        cVar1 = (this_00->field_80, &local_3c, &local_38)->GetSelection();
        if (cVar1 != '\0') {
            eastl::string::substr((ulong)&local_68, (ulong)local_a0);
            iVar2 = param_1->GetStringWidth((basic_string*)&local_68);
            local_68.~basic_string();
            eastl::string::substr((ulong)&local_68, (ulong)local_a0);
            iVar3 = param_1->GetStringWidth((basic_string*)&local_68);
            iVar4 = (int)local_48 + iVar2;
            local_68.~basic_string();
            new (&local_68) dash3d::GridRect(iVar4, local_34 - (int)local_70, iVar3 - iVar2, local_78);
            param_1->FillRect((Rect*)&local_68, this_00->m_highlightColour);
            eastl::string::substr((ulong)&local_68, (ulong)local_a0);
            param_1->DrawString((basic_string*)&local_68, iVar4, local_34, *(int*)&this_00->field_92);
            local_68.~basic_string();
        }
        cVar1 = this_00->field_80->GetCursorShown();
        if (cVar1 != '\0') {
            this_00->field_80->GetPos();
            eastl::string::substr((ulong)&local_68, (ulong)local_a0);
            iVar2 = param_1->GetStringWidth((basic_string*)&local_68);
            local_68.~basic_string();
            this_02 = (GraphicsApp*)BaseApp::GetAppInstance();
            uVar6 = this_02->GetLogicTick();
            if (15 < uVar6 / 30 + (uVar6 / 30) * -32 + uVar6 / 30 + uVar6) {
                iVar2 = iVar2 + (int)local_48;
                iVar3 = local_34 - (int)local_70;
                uVar6 = this_00->GetMaxLineWidth();
                param_1->Line(iVar2, iVar3, iVar2, local_74, uVar6);
            }
        }
        local_a0->~basic_string();
        eastl::string::~basic_string(local_c8);
    }

} // namespace jag::oldscape::widgets
