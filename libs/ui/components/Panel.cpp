// libs/ui/components/Panel.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "Panel.h"

namespace jag::ui {
    // 0x1006a5860, 96 bytes, placed by class name and debug map
    // Panel::DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void Panel::DecodeTypedComponentProperties(PacketT* param_1, int param_2) {
        char cVar1;
        byte bVar2;
        ushort uVar3;

        uVar3 = param_1->g2();
        field_432 = (uint)uVar3;
        uVar3 = param_1->g2();
        field_436 = (uint)uVar3;
        cVar1 = param_1->g1();
        field_569 = cVar1 == '\x01';
        bVar2 = param_1->g1();
        field_572 = (uint)bVar2;
    }

    // 0x1006a58c0, 304 bytes, placed by class name and debug map
    // Panel::MainDraw(ComponentDependencies const&, int, int, float)
    void Panel::MainDraw(ComponentDependencies* param_1, int param_2, int param_3, float param_4) {
        undefined8* puVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        undefined4 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* pvVar8;

        uVar6 = GetStreamCountLastMix();
        uVar7 = GetMinMapX();
        iVar3 = (**(code**)(field_0 + 408))(this);
        iVar3 = param_2 - iVar3;
        iVar4 = (**(code**)(field_0 + 416))(this);
        iVar4 = param_3 - iVar4;
        pvVar8 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)(**(
            code**)(field_0 + 320))(this);
        cVar2 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
            pvVar8);
        if (cVar2 == '\0') {
            (**(code**)(**(long**)(param_1 + 48) + 8))(param_4, *(long**)(param_1 + 48), pvVar8, iVar3, iVar4, param_2,
                                                       param_3, uVar6, uVar7);
        }
        pvVar8 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)(**(
            code**)(field_0 + 328))(this);
        cVar2 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
            pvVar8);
        if (cVar2 == '\0') {
            (**(code**)(**(long**)(param_1 + 48) + 8))(param_4, *(long**)(param_1 + 48), pvVar8, iVar3, iVar4, param_2,
                                                       param_3, uVar6, uVar7);
        }
        puVar1 = *(undefined8**)(param_1 + 48);
        uVar5 = GetCombinedID();
        (**(code**)*puVar1)(param_4, puVar1, uVar5, iVar3, iVar4, param_2, param_3, uVar6, uVar7);
    }

    // 0x1006a59f0, 336 bytes, placed by class name and debug map
    // Panel::UpdateLayout(bool)
    undefined8 Panel::UpdateLayout(bool param_1) {
        char cVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        vector* pvVar6;
        undefined8 uVar7;
        undefined7 in_register_00000031;
        float extraout_XMM0_Da;
        float extraout_XMM0_Db;
        int local_44;
        undefined1 local_40[4];
        int iStack_3c;
        float local_38;
        float fStack_34;

        if (((int)CONCAT71(in_register_00000031, param_1) == 0) && (m_layoutDirty == '\0')) {
            uVar7 = 0;
        } else {
            cVar1 = (&field_440)->empty();
            if (cVar1 != '\0') {
                cVar1 = (&field_504)->empty();
                if (cVar1 != '\0') {
                    return 1;
                }
            }
            iVar2 = GetStreamCountLastMix();
            iVar3 = GetMinMapX();
            iVar4 = (**(code**)(field_0 + 424))(this);
            iVar5 = (**(code**)(field_0 + 432))(this);
            if (iVar4 != 0) {
                iVar2 = iVar4;
            }
            if (iVar5 != 0) {
                iVar3 = iVar5;
            }
            _local_40 = GetTotalRequiredSize(this);
            local_44 = 0;
            iVar4 = iVar2 - (int)_local_40;
            if (field_569 != false) {
                iVar4 = iVar3 - iStack_3c;
            }
            local_38 = extraout_XMM0_Da;
            if (extraout_XMM0_Da == 0.0) {
                local_38 = 1.0;
            }
            fStack_34 = extraout_XMM0_Db;
            if (extraout_XMM0_Db == 0.0) {
                fStack_34 = 1.0;
            }
            pvVar6 = (vector*)(**(code**)(field_0 + 320))(this);
            UpdateComponentListLayout(this, pvVar6, iVar2, iVar3, iVar4, (UIPoint*)local_40, &local_44);
            pvVar6 = (vector*)(**(code**)(field_0 + 328))(this);
            UpdateComponentListLayout(this, pvVar6, iVar2, iVar3, iVar4, (UIPoint*)local_40, &local_44);
            m_layoutDirty = 0;
            uVar7 = 1;
        }
        return uVar7;
    }

    // 0x1006a5b40, 112 bytes, placed by class name and debug map
    // Panel::GetTotalRequiredSize() const
    undefined8 Panel::GetTotalRequiredSize() {
        vector* pvVar1;
        undefined8* puVar2;
        undefined8 extraout_XMM0_Qa;
        undefined8 extraout_XMM0_Qa_00;
        undefined1 local_30[24];
        undefined8 local_18;

        pvVar1 = (vector*)(**(code**)(field_0 + 320))();
        local_30._0_8_ = GetRequiredSize(this, pvVar1);
        local_30._8_8_ = extraout_XMM0_Qa;
        pvVar1 = (vector*)(**(code**)(field_0 + 328))(this);
        local_30._16_8_ = GetRequiredSize(this, pvVar1);
        local_18 = extraout_XMM0_Qa_00;
        puVar2 = (undefined8*)local_30->Accumulate((UIPoint*)(local_30 + 16));
        return *puVar2;
    }

    // 0x1006a5bb0, 624 bytes, placed by class name and debug map
    // Panel::UpdateComponentListLayout(eastl::vector<ComponentContainer, eastl::allocator> const&, int, int, int, UIPoint const&, int&)
    void Panel::UpdateComponentListLayout(vector* param_1, int param_2, int param_3, int param_4, UIPoint* param_5,
                                          int* param_6) {
        char cVar1;
        int iVar2;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_00;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar3;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        WorldmapAreaMetadata* this_02;
        undefined8 uVar4;
        int extraout_var;
        int iVar5;
        float extraout_XMM0_Da;
        float extraout_XMM0_Da_00;
        float extraout_XMM0_Db;
        float extraout_XMM0_Db_00;
        float fVar6;

        this_00 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)param_1->HeapBeginPtr();
        pcVar3 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                      eastl::allocator, 0>*)param_1->end();
        if (this_00 != pcVar3) {
            do {
                this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(this_00);
                this_02 =
                    (WorldmapAreaMetadata*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                        this_01);
                if (this_02 != (WorldmapAreaMetadata*)0) {
                    uVar4 = this_02->CalculateSize();
                    iVar2 = (int)uVar4;
                    iVar5 = (int)((ulong)uVar4 >> 32);
                    if (field_569 == false) {
                        fVar6 = extraout_XMM0_Db;
                        if (extraout_XMM0_Db == 0.0) {
                            fVar6 = 1.0;
                        }
                        if (iVar5 != 0) {
                            fVar6 = extraout_XMM0_Db;
                        }
                        this_02->SetCurrentWidth((int)((extraout_XMM0_Da_00 * (float)param_4) / param_5->field_8) +
                                                 iVar2);
                        cVar1 = this_02->GetModeHeight();
                        if (cVar1 == '\x04') {
                            iVar2 = this_02->GetStreamCountLastMix();
                            iVar5 = (iVar2 * field_76) / field_72;
                        } else {
                            iVar5 = (int)(fVar6 * (float)param_3) + iVar5;
                        }
                        this_02->SetBottomLine(iVar5);
                        this_02->CalculatePosition();
                        this_02->SetCurrentX(*param_6);
                        this_02->SetCurrentY((int)(extraout_XMM0_Db_00 * (float)param_3) + extraout_var);
                        iVar2 = this_02->GetStreamCountLastMix();
                    } else {
                        fVar6 = extraout_XMM0_Da_00;
                        if (extraout_XMM0_Da_00 == 0.0) {
                            fVar6 = 1.0;
                        }
                        if (iVar2 != 0) {
                            fVar6 = extraout_XMM0_Da_00;
                        }
                        this_02->SetBottomLine((int)((extraout_XMM0_Db * (float)param_4) / param_5->field_12) + iVar5);
                        cVar1 = this_02->GetTextAlpha();
                        if (cVar1 == '\x04') {
                            iVar2 = this_02->GetMinMapX();
                            iVar2 = (iVar2 * field_72) / field_76;
                        } else {
                            iVar2 = (int)(fVar6 * (float)param_2) + iVar2;
                        }
                        this_02->SetCurrentWidth(iVar2);
                        iVar2 = this_02->CalculatePosition();
                        this_02->SetCurrentX((int)(extraout_XMM0_Da * (float)param_2) + iVar2);
                        this_02->SetCurrentY(*param_6);
                        iVar2 = this_02->GetMinMapX();
                    }
                    *param_6 = *param_6 + iVar2 + field_572;
                }
                this_00 = this_00 + 24;
            } while (this_00 != pcVar3);
        }
    }

    // 0x1006a5e20, 240 bytes, placed by class name and debug map
    // Panel::GetRequiredSize(eastl::vector<ComponentContainer, eastl::allocator> const&) const
    undefined8 Panel::GetRequiredSize(vector* param_1) {
        bool bVar1;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_00;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar2;
        shared_ptr* this_01;
        shared_ptr<Component>* this_02;
        Component* this_03;
        int iVar3;
        undefined8 extraout_XMM0_Qa;
        undefined1 local_58[24];
        int local_40;
        int iStack_3c;

        new (&local_40) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        this_00 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)param_1->HeapBeginPtr();
        pcVar2 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                      eastl::allocator, 0>*)param_1->end();
        local_58._16_8_ = this;
        if (this_00 == pcVar2) {
            iVar3 = 0;
        } else {
            iVar3 = 0;
            do {
                this_01 = (shared_ptr*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(this_00);
                bVar1 = shared_ptr::operator_cast_to_bool(this_01);
                if (bVar1) {
                    this_02 = (shared_ptr<Component>*)eastl::compressed_pair_imp<
                        std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                        0>::second(this_00);
                    this_03 = (Component*)shared_ptr<Component>::operator->(this_02);
                    local_58._0_8_ = this_03->CalculateSize();
                    local_58._8_8_ = extraout_XMM0_Qa;
                    local_40.Accumulate(local_58);
                    iVar3 = iVar3 + 1;
                }
                this_00 = this_00 + 24;
            } while (this_00 != pcVar2);
        }
        if (1 < iVar3) {
            iVar3 = (iVar3 + -1) * *(uint*)(local_58._16_8_ + 572);
            if (*(bool*)(local_58._16_8_ + 569) == false) {
                local_40 = local_40 + iVar3;
            } else {
                iStack_3c = iStack_3c + iVar3;
            }
        }
        return CONCAT44(iStack_3c, local_40);
    }

    // 0x1006a5f50, 96 bytes, placed by class name
    // Panel::LoadStyleSheetVisuals(StyleSheet const&)
    void Panel::LoadStyleSheetVisuals(StyleSheet* param_1) {
        uint* puVar2;
        undefined1 local_20[8];

        StyleSheet::GetPropertyValue<int>((StyleSheet*)local_20, param_1, 587, 1);
        if (local_20->IsActive()) {
            puVar2 = (uint*)eastl::optional<int>::value();
            field_572 = *puVar2;
            m_layoutDirty = 1;
        }
    }

    // 0x1006ad6e0: the linker folded this into Grid::~Grid(), which has identical code
    Panel::~Panel();

    // 0x1006ad6f0: the linker folded this into Grid::~Grid(), which has identical code
    Panel::~Panel();

    // 0x1006b2db0: the linker folded this into Grid::~Grid(), which has identical code
    Panel::~Panel();

} // namespace jag::ui
