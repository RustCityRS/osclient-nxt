// libs/ui/components/Layer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "Layer.h"

namespace jag::ui {
    // 0x100f3e9c4, 4 bytes, __data
    Layer::m_showNoClickThroughLayers = 0;

    // 0x1005fa390: the linker folded this into game::option::WindowMode::IsAvailable(game::option::OptionClient) const, which has identical code
    Layer::SupportsMargin(Component::MarginType) const;

    // 0x10069b750, 448 bytes, placed by class name and debug map
    // Layer::MainDraw(ComponentDependencies const&, int, int, float)
    void Layer::MainDraw(ComponentDependencies* param_1, int param_2, int param_3, float param_4) {
        undefined8* puVar1;
        byte bVar2;
        char cVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        undefined4 uVar9;
        undefined8 uVar10;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* pvVar11;
        int iVar12;

        iVar4 = (uint)field_568 + param_2;
        iVar12 = (uint)field_569 + param_3;
        iVar5 = GetStreamCountLastMix();
        bVar2 = (&field_568)->GetWidth();
        iVar5 = iVar5 - (uint)bVar2;
        iVar6 = GetMinMapX();
        bVar2 = (&field_568)->GetHeight();
        iVar6 = iVar6 - (uint)bVar2;
        iVar7 = (*(code*)field_0[51])(this);
        iVar8 = (*(code*)field_0[52])(this);
        if (*PTR_m_showNoClickThroughLayers_100ee6468 != '\0') {
            cVar3 = IsClickthrough();
            if (cVar3 == '\0') {
                uVar10 = (*(RT7Core**)(param_1 + 16))->GetGUIManager();
                uVar10->AddColouredRectangle(iVar4, iVar12, iVar5, iVar6, 4278190250, 1);
            }
        }
        iVar7 = iVar4 - iVar7;
        iVar8 = iVar12 - iVar8;
        pvVar11 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)(*(
            code*)field_0[40])(this);
        cVar3 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
            pvVar11);
        if (cVar3 == '\0') {
            (**(code**)(**(long**)(param_1 + 48) + 8))(param_4, *(long**)(param_1 + 48), pvVar11, iVar7, iVar8, iVar4,
                                                       iVar12, iVar5, iVar6);
        }
        pvVar11 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)(*(
            code*)field_0[41])(this);
        cVar3 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
            pvVar11);
        if (cVar3 == '\0') {
            (**(code**)(**(long**)(param_1 + 48) + 8))(param_4, *(long**)(param_1 + 48), pvVar11, iVar7, iVar8, iVar4,
                                                       iVar12, iVar5, iVar6);
        }
        puVar1 = *(undefined8**)(param_1 + 48);
        uVar9 = GetCombinedID();
        (**(code**)*puVar1)(param_4, puVar1, uVar9, iVar7, iVar8, iVar4, iVar12, iVar5, iVar6);
    }

    // 0x10069b930, 208 bytes, placed by class name and debug map
    // Layer::DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void Layer::DecodeTypedComponentProperties(PacketT* param_1, int param_2) {
        char cVar1;
        byte bVar2;
        ushort uVar3;
        undefined8 in_RAX;
        Margin local_24;

        local_24 = SUB84((ulong)in_RAX >> 32, 0);
        uVar3 = param_1->g2();
        field_432 = (uint)uVar3;
        uVar3 = param_1->g2();
        field_436 = (uint)uVar3;
        if (param_2 == -1) {
            cVar1 = param_1->g1();
            SetClickthrough(cVar1 != '\x01');
        } else if (8 < param_2) {
            new (&local_24) Margin(param_1);
            field_568 = local_24.field_0;
            field_569 = local_24.field_1;
            field_570 = local_24.field_2;
            field_571 = local_24.field_3;
            return;
        }
        if (5 < param_2) {
            bVar2 = param_1->g2();
            field_568 = bVar2;
            bVar2 = param_1->g2();
            field_569 = bVar2;
            bVar2 = param_1->g2();
            field_570 = bVar2;
            bVar2 = param_1->g2();
            field_571 = bVar2;
        }
    }

    // 0x10069ba00, 32 bytes, placed by class name and debug map
    // Layer::OnResizeAnimation()
    void Layer::OnResizeAnimation() {
        (**(code**)(*field_576 + 16))(field_576, this, 0);
    }

    // 0x1006ad6e0: the linker folded this into Grid::~Grid(), which has identical code
    Layer::~Layer();

    // 0x1006ad6f0: the linker folded this into Grid::~Grid(), which has identical code
    Layer::~Layer();

    // 0x1006b2db0: the linker folded this into Grid::~Grid(), which has identical code
    Layer::~Layer();

} // namespace jag::ui
