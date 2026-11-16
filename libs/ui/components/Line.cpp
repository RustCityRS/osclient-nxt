// libs/ui/components/Line.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "Line.h"

namespace jag::ui {
    // 0x100029ea0: Line::GetType() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x10069ba20
    void Line::MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4) {
        int iVar2;
        int iVar3;
        int local_34;

        if (GetLineFlipDiagonal() == '\0') {
            iVar3 = GetStreamCountLastMix();
            local_34 = GetMinMapX();
            local_34 = local_34 + arg3;
            iVar2 = arg3;
        } else {
            iVar2 = GetMinMapX();
            iVar3 = GetStreamCountLastMix();
            iVar2 = iVar2 + arg3;
            local_34 = arg3;
        }
        GUIManager* this_00 = (*(RT7Core**)(componentDependencies + 16))->GetGUIManager();
        unsigned int uVar4 = GetLineStrokeWidth();
        unsigned int arg6 = GetRGBA();
        this_00->AddGeneralLine(arg2, iVar2, iVar3 + arg2, local_34, (float)uVar4, arg6, 1, false);
    }

    // 0x10069bb10
    void Line::DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2) {
        uint8_t bVar1 = arg1.g1();
        m_lineStrokeWidth = (unsigned int)bVar1;
        field_96 = arg1.g4();
        m_lineFlipDiagonal = arg1.g1() == '\x01';
    }

} // namespace jag::ui
