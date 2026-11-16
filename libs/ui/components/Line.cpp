// libs/ui/components/Line.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "Line.h"

namespace jag::ui {
    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    Line::GetType() const;

    // 0x10069ba20, 208 bytes, placed by class name and debug map
    // Line::MainDraw(ComponentDependencies const&, int, int, float)
    void Line::MainDraw(ComponentDependencies* param_1, int param_2, int param_3, float param_4) {
        int iVar2;
        int iVar3;
        uint uVar4;
        undefined4 uVar5;
        undefined8 uVar6;
        int local_34;

        if (GetLineFlipDiagonal(this) == '\0') {
            iVar3 = GetStreamCountLastMix();
            local_34 = GetMinMapX();
            local_34 = local_34 + param_3;
            iVar2 = param_3;
        } else {
            iVar2 = GetMinMapX();
            iVar3 = GetStreamCountLastMix();
            iVar2 = iVar2 + param_3;
            local_34 = param_3;
        }
        uVar6 = (*(RT7Core**)(param_1 + 16))->GetGUIManager();
        uVar4 = GetLineStrokeWidth(this);
        uVar5 = GetRGBA();
        ((float)uVar4)->AddGeneralLine(uVar6, param_2, iVar2, iVar3 + param_2, local_34, uVar5, 1, 0);
    }

    // 0x10069bb10, 80 bytes, placed by class name
    // Line::DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void Line::DecodeTypedComponentProperties(PacketT* param_1, int param_2) {
        byte bVar1;
        char cVar2;
        undefined4 uVar3;

        bVar1 = param_1->g1();
        m_lineStrokeWidth = (uint)bVar1;
        uVar3 = param_1->g4();
        field_96 = uVar3;
        cVar2 = param_1->g1();
        m_lineFlipDiagonal = cVar2 == '\x01';
    }

} // namespace jag::ui
