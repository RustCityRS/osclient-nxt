// libs/ui/components/Rectangle.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "Rectangle.h"

namespace jag::ui {
    // 0x100269960: Rectangle::GetType() const has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const

    // 0x1006a8f90
    void Rectangle::MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4) {
        unsigned int arg6 = GetRGBA();
        bool cVar1 = IsLowPrecision();
        GUIManager* this_00 = (*(RT7Core**)(componentDependencies + 16))->GetGUIManager();
        int arg3_00 = GetStreamCountLastMix();
        int arg4_00 = GetMinMapX();
        if (!cVar1) {
            this_00->AddOutline(arg2, arg3, arg3_00, arg4_00, 1, arg6, 1);
        } else {
            this_00->AddColouredRectangle(arg2, arg3, arg3_00, arg4_00, arg6, 1);
        }
    }

    // 0x1006a9050
    void Rectangle::LoadStyleSheetVisuals(const StyleSheet& styleSheet) {
        styleSheet.LoadPropertyValueIfSet<unsigned int>(field_96, 8, true);
        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_100, 9, true);
        styleSheet.LoadPropertyValueIfSet<bool>(m_rectangleFill, 10, true);
    }

    // 0x1006a90b0
    void Rectangle::DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2) {
        field_96 = arg1.g4();
        m_rectangleFill = arg1.g1() == '\x01';
        uint8_t bVar2 = arg1.g1();
        field_100 = ~bVar2;
    }

    // 0x1006b2f20: Rectangle::~Rectangle() has the same machine code as Line::~Line()

} // namespace jag::ui
