// projects/osclient/debug/widgets/OutputWidget.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "OutputWidget.h"

namespace jag::oldscape::widgets {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    OutputWidget::~OutputWidget();

    // 0x10002a770: the linker folded this into void eastl::destruct<rs2lib::CoordMapSquare*>(rs2lib::CoordMapSquare*, rs2lib::CoordMapSquare*), which has identical code
    OutputWidget::~OutputWidget();

    // 0x10004af40: the linker folded this into std::__function::__func<std::__bind<void (Client::*)(), Client*&>, std::allocator<std::__bind<void (Client::*)(), Client*&> >, void (ClientWindowMode)>::~__func(), which has identical code
    OutputWidget::~OutputWidget();

    // 0x10005fe80: the linker folded this into CommandLineWidget::SetSelectedTextColour(unsigned int), which has identical code
    OutputWidget::SetBottomLine(int);

    // 0x100066de0, 432 bytes, placed by class name and debug map
    // OutputWidget::DrawContents(DrawContext&)
    void OutputWidget::DrawContents(DrawContext* param_1) {
        Line* this_00;
        char* pcVar1;
        bool bVar2;
        int iVar3;
        int iVar4;
        CommandLine* this_01;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        int iVar5;
        allocator local_78[8];
        undefined8 local_70[4];
        int local_44;
        undefined8 local_40;
        int local_34;

        this_01 = (CommandLine*)GetPos();
        param_1->SetClipRect(this_01);
        local_34 = this_01->MaxZ();
        iVar5 = m_bottomLine;
        iVar3 = param_1->GetLineHeight();
        local_40 = eastl::list<console::Line, eastl::allocator>::begin();
        local_70[0] = eastl::list<console::Line, eastl::allocator>::end();
        bVar2 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)local_70, extraout_RDX);
        if (bVar2) {
            iVar5 = iVar3 * iVar5 + local_34;
            do {
                this_00 = (Line*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)&local_40);
                iVar5 = iVar5 - field_88;
                iVar3 = this_01->MaxZ();
                if (iVar5 <= iVar3) {
                    local_34 = iVar5;
                    local_44 = this_00->GetColour();
                    pcVar1 = (char*)eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
                    eastl::allocator::allocator(local_78, "EASTL basic_string");
                    new (local_70) eastl::string(pcVar1, local_78);
                    iVar3 = this_01->GetX();
                    iVar5 = local_34;
                    iVar4 = this_01->GetPos();
                    param_1->DrawStringMultiline(local_70, iVar3, iVar5, iVar4, field_88, local_44);
                    local_70->~basic_string();
                }
                iVar3 = this_01->GetZ();
                if (iVar5 < iVar3)
                    break;
                eastl::ListIterator<console::Line, console::Line_const*, console::Line_const&>::operator++(
                    (ListIterator<console::Line, console::Line_const*, console::Line_const&>*)&local_40, 0);
                local_70[0] = eastl::list<console::Line, eastl::allocator>::end();
                bVar2 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)local_70, extraout_RDX_00);
            } while (bVar2);
        }
        param_1->ResetClipRect();
    }

} // namespace jag::oldscape::widgets
