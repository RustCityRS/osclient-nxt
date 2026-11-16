// libs/ui/components/Panel.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "Panel.h"

namespace jag::ui {
    // 0x1006a5860
    void Panel::DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2) {
        unsigned short uVar3 = arg1.g2();
        field_432 = (unsigned int)uVar3;
        uVar3 = arg1.g2();
        field_436 = (unsigned int)uVar3;
        char cVar1 = arg1.g1();
        field_569[0] = cVar1 == '\x01';
        uint8_t bVar2 = arg1.g1();
        field_572 = (unsigned int)bVar2;
    }

    // 0x1006a58c0
    void Panel::MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4) {
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        uint64_t extraout_var_01;
        uint64_t extraout_var_02;

        uint64_t uVar5 = GetStreamCountLastMix();
        uint64_t uVar6 = GetMinMapX();
        uint8_t uVar2 = GetScrollXPos();
        int iVar7 = arg2 - (int)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2);
        uVar2 = GetScrollYPos();
        int iVar8 = arg3 - (int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2);
        uVar2 = GetStaticChildrenWithOptionalRenderOrder();
        if (!(((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(((uint64_t)extraout_var_01
                                                                                        << 8) |
                                                                                       (uint8_t)uVar2))
                  ->empty())) {
            (**(void (**)(...))(**(long**)(componentDependencies + 48) + 8))(
                arg4, *(long**)(componentDependencies + 48),
                (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(((uint64_t)extraout_var_01
                                                                                         << 8) |
                                                                                        (uint8_t)uVar2),
                iVar7, iVar8, arg2, arg3, uVar5, uVar6);
        }
        uVar2 = GetDynamicChildrenWithOptionalRenderOrder();
        if (!(((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(((uint64_t)extraout_var_02
                                                                                        << 8) |
                                                                                       (uint8_t)uVar2))
                  ->empty())) {
            (**(void (**)(...))(**(long**)(componentDependencies + 48) + 8))(
                arg4, *(long**)(componentDependencies + 48),
                (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(((uint64_t)extraout_var_02
                                                                                         << 8) |
                                                                                        (uint8_t)uVar2),
                iVar7, iVar8, arg2, arg3, uVar5, uVar6);
        }
        uint64_t* puVar1 = *(uint64_t**)(componentDependencies + 48);
        uint32_t uVar4 = GetCombinedID();
        (**(void (**)(...))*puVar1)(arg4, puVar1, uVar4, iVar7, iVar8, arg2, arg3, uVar5, uVar6);
    }

    // 0x1006a59f0
    uint64_t Panel::UpdateLayout(bool arg1) {
        uint8_t uVar2;
        uint8_t uVar3;
        int arg3;
        int arg4;
        int iVar4;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        uint64_t uVar5;
        uint64_t extraout_var_01;
        uint64_t extraout_var_02;
        uint64_t in_register_00000031;
        unsigned int uVar6;
        float extraout_XMM0_Da;
        float extraout_XMM0_Db;
        uint64_t local_40;
        float local_38;
        float fStack_34;

        if (((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) == 0) && (m_layoutDirty == '\0')) {
            uVar5 = 0;
        } else {
            if (field_440.empty()) {
                if (field_504.empty()) {
                    return 1;
                }
            }
            arg3 = GetStreamCountLastMix();
            arg4 = GetMinMapX();
            uVar2 = GetScrollWidth();
            uVar3 = GetScrollHeight();
            iVar4 = (int)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2);
            if (iVar4 != 0) {
                arg3 = iVar4;
            }
            iVar4 = (int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar3);
            if (iVar4 != 0) {
                arg4 = iVar4;
            }
            uVar5 = GetTotalRequiredSize();
            local_40._4_4_ = (int)((unsigned long)uVar5 >> 32);
            uVar6 = arg3 - (int)uVar5;
            if (field_569[0] != '\0') {
                uVar6 = arg4 - local_40._4_4_;
            }
            local_38 = extraout_XMM0_Da;
            if (extraout_XMM0_Da == 0.0) {
                local_38 = 1.0;
            }
            fStack_34 = extraout_XMM0_Db;
            if (extraout_XMM0_Db == 0.0) {
                fStack_34 = 1.0;
            }
            local_40 = uVar5;
            uVar2 = GetStaticChildrenWithOptionalRenderOrder();
            UpdateComponentListLayout((vector<ComponentContainer>*)this,
                                      (int)(((uint64_t)extraout_var_01 << 8) | (uint8_t)uVar2), arg3, arg4,
                                      (UIPoint*)(unsigned long)uVar6, (int*)&local_40);
            uVar2 = GetDynamicChildrenWithOptionalRenderOrder();
            UpdateComponentListLayout((vector<ComponentContainer>*)this,
                                      (int)(((uint64_t)extraout_var_02 << 8) | (uint8_t)uVar2), arg3, arg4,
                                      (UIPoint*)(unsigned long)uVar6, (int*)&local_40);
            m_layoutDirty = 0;
            uVar5 = 1;
        }
        return uVar5;
    }

    // 0x1006a5b40
    ReturnValue Panel::GetTotalRequiredSize() const {
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        uint64_t extraout_XMM0_Qa;
        uint64_t extraout_XMM0_Qa_00;

        uint8_t uVar1 = GetStaticChildrenWithOptionalRenderOrder();
        ReturnValue local_30 = (ReturnValue)GetRequiredSize(
            *((vector<ComponentContainer>*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1)));
        uint64_t local_28 = extraout_XMM0_Qa;
        uVar1 = GetDynamicChildrenWithOptionalRenderOrder();
        uint64_t local_20 =
            GetRequiredSize(*((vector<ComponentContainer>*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar1)));
        uint64_t local_18 = extraout_XMM0_Qa_00;
        ReturnValue* pRVar2 = local_30 = UIPoint::Accumulate(local_20);
        return *pRVar2;
    }

    // 0x1006a5bb0
    void Panel::UpdateComponentListLayout(const eastl::vector<ComponentContainer>& componentContainers, int arg2,
                                          int arg3, int arg4, const UIPoint& uiPoint, int& arg6) {
        char cVar1;
        int iVar2;
        unsigned int arg1;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        WorldmapAreaMetadata* this_01;
        uint64_t uVar4;
        int extraout_var;
        uint32_t in_register_00000034;
        int iVar5;
        float extraout_XMM0_Da;
        float extraout_XMM0_Da_00;
        float extraout_XMM0_Db;
        float extraout_XMM0_Db_00;
        float fVar6;
        int* in_stack_00000008;

        this = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator,
                                    0>*)((Layout*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2))
                   ->HeapBeginPtr();
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* pcVar3 =
            (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator,
                                 0>*)((vector<oldscape::dash3d::EntityHighlight*,
                                              BucketAllocatorEASTL>*)(((uint64_t)in_register_00000034 << 32) |
                                                                      (uint32_t)arg2))
                ->end();
        if (this != pcVar3) {
            do {
                this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)second();
                this_01 = (WorldmapAreaMetadata*)this_00->end();
                if (this_01 != nullptr) {
                    uVar4 = this_01->CalculateSize();
                    iVar5 = (int)uVar4;
                    iVar2 = (int)((unsigned long)uVar4 >> 32);
                    if (componentContainers[569] == (vector<ComponentContainer>)0) {
                        fVar6 = extraout_XMM0_Db;
                        if (extraout_XMM0_Db == 0.0) {
                            fVar6 = 1.0;
                        }
                        if (iVar2 != 0) {
                            fVar6 = extraout_XMM0_Db;
                        }
                        this_01->SetCurrentWidth((int)((extraout_XMM0_Da_00 * (float)(int)uiPoint) / (float)arg6[2]) +
                                                 iVar5);
                        cVar1 = this_01->GetModeHeight();
                        if (cVar1 == '\x04') {
                            iVar2 = this_01->GetStreamCountLastMix();
                            iVar2 = (iVar2 * *(int*)(componentContainers + 76)) / *(int*)(componentContainers + 72);
                        } else {
                            iVar2 = (int)(fVar6 * (float)arg4) + iVar2;
                        }
                        this_01->SetBottomLine(iVar2);
                        this_01->CalculatePosition();
                        this_01->SetCurrentX(*in_stack_00000008);
                        this_01->SetCurrentY((int)(extraout_XMM0_Db_00 * (float)arg4) + extraout_var);
                        iVar2 = this_01->GetStreamCountLastMix();
                    } else {
                        fVar6 = extraout_XMM0_Da_00;
                        if (extraout_XMM0_Da_00 == 0.0) {
                            fVar6 = 1.0;
                        }
                        if (iVar5 != 0) {
                            fVar6 = extraout_XMM0_Da_00;
                        }
                        this_01->SetBottomLine((int)((extraout_XMM0_Db * (float)(int)uiPoint) / (float)arg6[3]) +
                                               iVar2);
                        cVar1 = this_01->GetTextAlpha();
                        if (cVar1 == '\x04') {
                            iVar2 = this_01->GetMinMapX();
                            arg1 = (iVar2 * *(int*)(componentContainers + 72)) / *(int*)(componentContainers + 76);
                        } else {
                            arg1 = (int)(fVar6 * (float)arg3) + iVar5;
                        }
                        this_01->SetCurrentWidth(arg1);
                        iVar2 = this_01->CalculatePosition();
                        this_01->SetCurrentX((int)(extraout_XMM0_Da * (float)arg3) + iVar2);
                        this_01->SetCurrentY(*in_stack_00000008);
                        iVar2 = this_01->GetMinMapX();
                    }
                    *in_stack_00000008 = *in_stack_00000008 + iVar2 + *(int*)(componentContainers + 572);
                }
                this = this + 24;
            } while (this != pcVar3);
        }
    }

    // 0x1006a5e20
    uint64_t Panel::GetRequiredSize(const eastl::vector<ComponentContainer>& componentContainers) const {
        shared_ptr* this_01;
        shared_ptr<Component>* this_02;
        int iVar3;
        uint64_t extraout_XMM0_Qa;
        uint64_t local_58;
        uint64_t local_50;

        shared_ptr local_40;
        auto this_00 = componentContainers.HeapBeginPtr();
        auto pcVar2 = componentContainers.end();
        if (this_00 == pcVar2) {
            iVar3 = 0;
        } else {
            iVar3 = 0;
            do {
                this_01 = (shared_ptr*)this_00->second();
                if (shared_ptr::operator_cast_to_bool(this_01) != '\0') {
                    this_02 = (shared_ptr<Component>*)this_00->second();
                    local_58 = ((Component*)(*this_02).operator->())->CalculateSize();
                    local_50 = extraout_XMM0_Qa;
                    local_40 = UIPoint::Accumulate(local_58);
                    iVar3 = iVar3 + 1;
                }
                this_00 = this_00 + 24;
            } while (this_00 != pcVar2);
        }
        if (1 < iVar3) {
            iVar3 = (iVar3 - 1) * field_572;
            if (field_569[0] == '\0') {
                local_40[0]._0_4_ = local_40[0]._0_4_ + iVar3;
            } else {
                local_40[0]._4_4_ = local_40[0]._4_4_ + iVar3;
            }
        }
        return (((uint64_t)local_40[0]._4_4_ << 32) | (uint32_t)local_40[0]._0_4_);
    }

    // 0x1006a5f50
    void Panel::LoadStyleSheetVisuals(const StyleSheet& styleSheet) {
        unsigned int* puVar2;
        optional<int> local_20;

        StyleSheet::GetPropertyValue<int>(&local_20, (StyleEntryID)styleSheet, true);
        if (local_20.IsActive() != '\0') {
            puVar2 = (unsigned int*)local_20.value();
            field_572 = *puVar2;
            m_layoutDirty = 1;
        }
    }

    // 0x1006b2db0: Panel::~Panel() has the same machine code as Grid::~Grid()

} // namespace jag::ui
