// libs/ui/components/Layer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "Layer.h"

namespace jag::ui {
    // 0x100f3e9c4
    int32_t Layer::m_showNoClickThroughLayers = 0;

    // 0x1005fa390: Layer::SupportsMargin(Component::MarginType) const has the same machine code as game::option::WindowMode::IsAvailable(game::option::OptionClient) const

    // 0x10069b750
    void Layer::MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4) {
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        uint64_t extraout_var_01;
        uint64_t extraout_var_02;

        int arg1 = (unsigned int)field_568 + arg2;
        int arg2_00 = (unsigned int)field_569 + arg3;
        int iVar6 = GetStreamCountLastMix();
        uint8_t bVar2 = field_568.GetWidth();
        iVar6 = iVar6 - (unsigned int)bVar2;
        int iVar7 = GetMinMapX();
        bVar2 = field_568.GetHeight();
        iVar7 = iVar7 - (unsigned int)bVar2;
        uint8_t uVar3 = GetScrollXPos();
        uint8_t uVar4 = GetScrollYPos();
        if (*PTR_m_showNoClickThroughLayers_100ee6468 != '\0') {
            if (!(IsClickthrough())) {
                ((*(RT7Core**)(componentDependencies + 16))->GetGUIManager())
                    ->AddColouredRectangle(arg1, arg2_00, iVar6, iVar7, 4278190250, 1);
            }
        }
        int iVar10 = arg1 - (int)(((uint64_t)extraout_var << 8) | (uint8_t)uVar3);
        int iVar9 = arg2_00 - (int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar4);
        uVar3 = GetStaticChildrenWithOptionalRenderOrder();
        if (!(((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(((uint64_t)extraout_var_01
                                                                                        << 8) |
                                                                                       (uint8_t)uVar3))
                  ->empty())) {
            (**(void (**)(...))(**(long**)(componentDependencies + 48) + 8))(
                arg4, *(long**)(componentDependencies + 48),
                (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(((uint64_t)extraout_var_01
                                                                                         << 8) |
                                                                                        (uint8_t)uVar3),
                iVar10, iVar9, arg1, arg2_00, iVar6, iVar7);
        }
        uVar3 = GetDynamicChildrenWithOptionalRenderOrder();
        if (!(((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(((uint64_t)extraout_var_02
                                                                                        << 8) |
                                                                                       (uint8_t)uVar3))
                  ->empty())) {
            (**(void (**)(...))(**(long**)(componentDependencies + 48) + 8))(
                arg4, *(long**)(componentDependencies + 48),
                (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(((uint64_t)extraout_var_02
                                                                                         << 8) |
                                                                                        (uint8_t)uVar3),
                iVar10, iVar9, arg1, arg2_00, iVar6, iVar7);
        }
        uint64_t* puVar1 = *(uint64_t**)(componentDependencies + 48);
        uint32_t uVar8 = GetCombinedID();
        (**(void (**)(...))*puVar1)(arg4, puVar1, uVar8, iVar10, iVar9, arg1, arg2_00, iVar6, iVar7);
    }

    // 0x10069b930
    void Layer::DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2) {
        uint8_t bVar2;
        uint64_t in_RAX;

        Margin local_24 = (uint32_t)((unsigned long)in_RAX >> 32);
        unsigned short uVar3 = arg1.g2();
        field_432 = (unsigned int)uVar3;
        uVar3 = arg1.g2();
        field_436 = (unsigned int)uVar3;
        if (arg2 == -1) {
            SetClickthrough(arg1.g1() != '\x01');
        } else if (8 < arg2) {
            local_24 = Margin(arg1);
            field_568 = local_24.field_0;
            field_569 = local_24.field_1;
            field_570 = local_24.field_2;
            field_571 = local_24.field_3;
            return;
        }
        if (5 < arg2) {
            bVar2 = arg1.g2();
            field_568 = bVar2;
            bVar2 = arg1.g2();
            field_569 = bVar2;
            bVar2 = arg1.g2();
            field_570 = bVar2;
            bVar2 = arg1.g2();
            field_571 = bVar2;
        }
    }

    // 0x10069ba00
    void Layer::OnResizeAnimation() {
        (**(void (**)(...))(*field_576 + 16))(field_576, this, 0);
    }

    // 0x1006b2db0: Layer::~Layer() has the same machine code as Grid::~Grid()

} // namespace jag::ui
