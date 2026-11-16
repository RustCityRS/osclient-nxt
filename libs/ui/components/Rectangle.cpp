// libs/ui/components/Rectangle.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "Rectangle.h"

namespace jag::ui {
    // 0x100269960: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const, which has identical code
    Rectangle::GetType() const;

    // 0x1006a8f90, 176 bytes, placed by class name and debug map
    // Rectangle::MainDraw(ComponentDependencies const&, int, int, float)
    void Rectangle::MainDraw(ComponentDependencies* param_1, int param_2, int param_3, float param_4) {
        undefined8 uVar1;
        GUIManager* pGVar2;
        char cVar3;
        undefined4 uVar4;
        undefined4 uVar5;

        uVar1 = GetRGBA();
        cVar3 = IsLowPrecision();
        pGVar2 = (GUIManager*)(*(RT7Core**)(param_1 + 16))->GetGUIManager();
        uVar4 = GetStreamCountLastMix();
        uVar5 = GetMinMapX();
        if (cVar3 == '\0') {
            pGVar2->AddOutline(param_2, param_3, uVar4, uVar5, 1, uVar1, 1);
        } else {
            pGVar2->AddColouredRectangle(param_2, param_3, uVar4, uVar5, uVar1, 1);
        }
    }

    // 0x1006a9050, 96 bytes, placed by class name
    // Rectangle::LoadStyleSheetVisuals(StyleSheet const&)
    void Rectangle::LoadStyleSheetVisuals(StyleSheet* param_1) {
        StyleSheet::LoadPropertyValueIfSet<unsigned int>(param_1, &field_96, 8, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &field_100, 9, 1);
        StyleSheet::LoadPropertyValueIfSet<bool>(param_1, &field_392, 10, 1);
    }

    // 0x1006a90b0, 64 bytes, placed by class name
    // Rectangle::DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void Rectangle::DecodeTypedComponentProperties(PacketT* param_1, int param_2) {
        char cVar1;
        byte bVar2;
        undefined4 uVar3;

        uVar3 = param_1->g4();
        field_96 = uVar3;
        cVar1 = param_1->g1();
        field_392 = cVar1 == '\x01';
        bVar2 = param_1->g1();
        field_100 = ~bVar2;
    }

    // 0x1006ad9e0: the linker folded this into Line::~Line(), which has identical code
    Rectangle::~Rectangle();

    // 0x1006ad9f0: the linker folded this into Line::~Line(), which has identical code
    Rectangle::~Rectangle();

    // 0x1006b2f20: the linker folded this into Line::~Line(), which has identical code
    Rectangle::~Rectangle();

} // namespace jag::ui
