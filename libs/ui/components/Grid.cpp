// libs/ui/components/Grid.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "Grid.h"

namespace jag::ui {
    // 0x100696e10, 304 bytes, placed by class name and debug map
    // Grid::MainDraw(ComponentDependencies const&, int, int, float)
    void Grid::MainDraw(ComponentDependencies* param_1, int param_2, int param_3, float param_4) {
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

    // 0x100696f40, 176 bytes, placed by class name and debug map
    // Grid::SetGridParams(bool, int, int)
    void Grid::SetGridParams(bool param_1, int param_2, int param_3) {
        if (param_2 < 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("cellDataX > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Grid.cpp",
                      51, (char*)0);
        }
        if (param_3 < 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("cellDataY > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Grid.cpp",
                      52, (char*)0);
        }
        if (((field_580 != param_1) || (field_572 != param_2)) || (field_576 != param_3)) {
            field_580 = param_1;
            field_572 = param_2;
            field_576 = param_3;
            (**(code**)(field_0 + 80))(this);
        }
    }

    // 0x100696ff0, 128 bytes, placed by class name and debug map
    // Grid::DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void Grid::DecodeTypedComponentProperties(PacketT* param_1, int param_2) {
        byte bVar1;
        char cVar2;
        ushort uVar3;

        uVar3 = param_1->g2();
        field_432 = (uint)uVar3;
        uVar3 = param_1->g2();
        field_436 = (uint)uVar3;
        bVar1 = param_1->g1();
        field_568 = (uint)bVar1;
        uVar3 = param_1->g2();
        field_572 = (uint)uVar3;
        uVar3 = param_1->g2();
        field_576 = (uint)uVar3;
        cVar2 = param_1->g1();
        field_580 = cVar2 == '\x01';
    }

    // 0x100697070, 608 bytes, placed by class name and debug map
    // Grid::UpdateLayout(bool)
    undefined8 Grid::UpdateLayout(bool param_1) {
        char cVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        uint uVar6;
        undefined8 uVar7;
        vector* pvVar8;
        undefined7 in_register_00000031;
        uint uVar9;
        char* pcVar10;
        uint uVar11;
        uint local_58;
        uint local_48;
        int local_3c[3];

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
            if (((int)field_572 < 1) || ((int)field_576 < 1)) {
                uVar7 = logger::default_logger();
                pcVar10 = "cell size";
                if (field_580 == false) {
                    pcVar10 = "cells";
                }
                logger::Logger::Log(
                    uVar7, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Grid.cpp", 89,
                    "Attempting to generate layout for an invalid grid (%dx%d %s) - reverting to a single cell grid",
                    field_572, field_576, pcVar10);
                field_572 = 1;
                field_576 = 1;
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
            if (field_580 == false) {
                uVar11 = field_568;
                local_3c[2] = field_572;
                local_48 = (anonymous namespace)::GetGridCellSize(iVar2, uVar11, local_3c[2]);
                uVar6 = field_576;
                local_58 = (anonymous namespace)::GetGridCellSize(iVar3, uVar11, uVar6);
            } else {
                uVar11 = field_568;
                local_48 = field_572;
                local_58 = field_576;
                local_3c[2] = (anonymous namespace)::GetGridCellCount(iVar2, uVar11, local_48);
                uVar6 = (anonymous namespace)::GetGridCellCount(iVar3, uVar11, local_58);
            }
            uVar11 = field_568;
            uVar9 = (iVar2 + uVar11) - (local_48 + uVar11) * local_3c[2] >> 1;
            uVar11 = (iVar3 + uVar11) - (uVar11 + local_58) * uVar6 >> 1;
            local_3c[0] = 0;
            local_3c[1] = 0;
            pvVar8 = (vector*)(**(code**)(field_0 + 320))(this);
            UpdateComponentListLayout(this, pvVar8, local_3c, local_3c + 1, local_3c[2], uVar6, local_48, local_58,
                                      uVar9, uVar11);
            pvVar8 = (vector*)(**(code**)(field_0 + 328))(this);
            UpdateComponentListLayout(this, pvVar8, local_3c, local_3c + 1, local_3c[2], uVar6, local_48, local_58,
                                      uVar9, uVar11);
            m_layoutDirty = 0;
            uVar7 = 1;
        }
        return uVar7;
    }

    // 0x100697310, 464 bytes, placed by class name and debug map
    // Grid::UpdateComponentListLayout(eastl::vector<ComponentContainer, eastl::allocator> const&, int&, int&, int, int, int, int, int, int)
    void Grid::UpdateComponentListLayout(vector* param_1, int* param_2, int* param_3, int param_4, int param_5,
                                         int param_6, int param_7, int param_8, int param_9) {
        int iVar1;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_00;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar2;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        Component* this_02;
        undefined8 uVar3;
        float extraout_XMM0_Da;
        float extraout_XMM0_Da_00;
        float extraout_XMM0_Db;
        float extraout_XMM0_Db_00;

        this_00 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)param_1->HeapBeginPtr();
        pcVar2 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                      eastl::allocator, 0>*)param_1->end();
        if (this_00 != pcVar2) {
            do {
                this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(this_00);
                this_02 =
                    (Component*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
                if (this_02 != (Component*)0) {
                    if (*param_3 == param_5) {
                        this_02->SetCurrentX(0);
                        this_02->SetCurrentY(0);
                        this_02->SetCurrentWidth(100);
                        this_02->SetBottomLine(100);
                    } else {
                        uVar3 = this_02->CalculateSize();
                        this_02->SetCurrentWidth((int)(extraout_XMM0_Da * (float)param_6) + (int)uVar3);
                        this_02->SetBottomLine((int)(extraout_XMM0_Db * (float)param_7) + (int)((ulong)uVar3 >> 32));
                        this_02->ApplyAspectRatioSize();
                        uVar3 = this_02->CalculatePosition();
                        this_02->SetCurrentX((field_568 + param_6) * *param_2 + param_8 + (int)uVar3 +
                                             (int)(extraout_XMM0_Da_00 * (float)param_6));
                        this_02->SetCurrentY((int)((ulong)uVar3 >> 32) + param_9 +
                                             (int)(extraout_XMM0_Db_00 * (float)param_7) +
                                             (field_568 + param_7) * *param_3);
                        iVar1 = *param_2;
                        *param_2 = iVar1 + 1;
                        if (iVar1 + 1 == param_4) {
                            *param_2 = 0;
                            *param_3 = *param_3 + 1;
                        }
                    }
                }
                this_00 = this_00 + 24;
            } while (this_00 != pcVar2);
        }
    }

    // 0x1006974e0, 96 bytes, placed by class name and debug map
    // Grid::GetCellWidth() const
    ulong Grid::GetCellWidth() {
        int iVar1;
        int iVar2;
        ulong uVar3;

        if (field_580 == false) {
            iVar1 = GetStreamCountLastMix();
            iVar2 = (**(code**)(field_0 + 424))(this);
            iVar1 = eastl::max<int>(iVar1, iVar2);
            uVar3 = (anonymous namespace)::GetGridCellSize(iVar1, field_568, field_572);
        } else {
            uVar3 = (ulong)field_572;
        }
        return uVar3;
    }

    // 0x100697540, 96 bytes, placed by class name and debug map
    // Grid::GetCellHeight() const
    ulong Grid::GetCellHeight() {
        int iVar1;
        int iVar2;
        ulong uVar3;

        if (field_580 == false) {
            iVar1 = GetMinMapX();
            iVar2 = (**(code**)(field_0 + 432))(this);
            iVar1 = eastl::max<int>(iVar1, iVar2);
            uVar3 = (anonymous namespace)::GetGridCellSize(iVar1, field_568, field_576);
        } else {
            uVar3 = (ulong)field_576;
        }
        return uVar3;
    }

    // 0x1006975a0, 96 bytes, placed by class name and debug map
    // Grid::GetNumRows() const
    ulong Grid::GetNumRows() {
        int iVar1;
        int iVar2;
        ulong uVar3;

        if (field_580 == false) {
            uVar3 = (ulong)field_576;
        } else {
            iVar1 = GetMinMapX();
            iVar2 = (**(code**)(field_0 + 432))(this);
            iVar1 = eastl::max<int>(iVar1, iVar2);
            uVar3 = (anonymous namespace)::GetGridCellCount(iVar1, field_568, field_576);
        }
        return uVar3;
    }

    // 0x100697600, 96 bytes, placed by class name and debug map
    // Grid::GetNumColumns() const
    ulong Grid::GetNumColumns() {
        int iVar1;
        int iVar2;
        ulong uVar3;

        if (field_580 == false) {
            uVar3 = (ulong)field_572;
        } else {
            iVar1 = GetStreamCountLastMix();
            iVar2 = (**(code**)(field_0 + 424))(this);
            iVar1 = eastl::max<int>(iVar1, iVar2);
            uVar3 = (anonymous namespace)::GetGridCellCount(iVar1, field_568, field_572);
        }
        return uVar3;
    }

    // 0x100697680, 192 bytes, placed by class name and debug map
    // Grid::GetSizeEstimate(unsigned short, unsigned short, unsigned char, unsigned char, unsigned char)
    SeparatedIndexCount Grid::GetSizeEstimate(ushort param_1, ushort param_2, uchar param_3, uchar param_4,
                                              uchar param_5) {
        undefined8 in_RAX;
        undefined8 uVar2;
        undefined7 in_register_00000009;
        undefined7 in_register_00000011;
        undefined6 in_register_00000032;
        int iVar3;
        undefined6 in_register_0000003a;
        ulong uVar4;
        ulong uVar5;
        ulong uVar6;
        SeparatedIndexCount local_34;

        local_34 = SUB84((ulong)in_RAX >> 32, 0);
        uVar6 = CONCAT71(in_register_00000009, param_4) & 4294967295;
        uVar4 = CONCAT71(in_register_00000011, param_3) & 4294967295;
        uVar5 = CONCAT62(in_register_00000032, param_2) & 4294967295;
        iVar3 = (int)CONCAT62(in_register_0000003a, param_1);
        if ((((iVar3 == 0) || ((short)uVar5 == 0)) || ((char)uVar4 == '\0')) || ((char)uVar6 == '\0')) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Grid.cpp", 259,
                "Attempting to estimate size using invalid params (size=(%u,%u) | count=(%u,%u) | spacing=%u)",
                CONCAT62(in_register_0000003a, param_1) & 4294967295, uVar5, uVar4, uVar6, param_5);
            new (&local_34) callstack::Callstack();
        } else {
            new (&local_34) oldscape::dash3d::AnimateBaseOperation::SeparatedIndexCount(
                (ulong)((iVar3 + (uint)param_5) * (int)CONCAT71(in_register_00000011, param_3) + (uint)param_5 & 65535),
                (ulong)(((int)CONCAT62(in_register_00000032, param_2) + (uint)param_5) *
                                (int)CONCAT71(in_register_00000009, param_4) +
                            (uint)param_5 &
                        65535));
        }
        return local_34;
    }

    // 0x100697740, 208 bytes, placed by class name and debug map
    // Grid::GetCellEstimate(unsigned short, unsigned short, unsigned short, unsigned short, unsigned char)
    undefined2 Grid::GetCellEstimate(ushort param_1, ushort param_2, ushort param_3, ushort param_4, uchar param_5) {
        uchar uVar1;
        uchar uVar2;
        undefined8 uVar3;
        undefined6 in_register_0000000a;
        undefined6 in_register_00000012;
        undefined6 in_register_00000032;
        int iVar4;
        undefined6 in_register_0000003a;
        ulong uVar5;
        ulong uVar6;
        undefined2 local_32;

        uVar5 = CONCAT62(in_register_00000012, param_3) & 4294967295;
        uVar6 = CONCAT62(in_register_00000032, param_2) & 4294967295;
        iVar4 = (int)CONCAT62(in_register_0000003a, param_1);
        if ((((iVar4 == 0) || ((short)uVar6 == 0)) || ((short)uVar5 == 0)) || (param_4 == 0)) {
            uVar3 = logger::default_logger();
            logger::Logger::Log(
                uVar3, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Grid.cpp", 272,
                "Attempting to estimate cells using invalid params (grid size=(%u,%u) | cell size=(%u,%u) | "
                "spacing=%u)",
                CONCAT62(in_register_0000003a, param_1) & 4294967295, uVar6, uVar5,
                CONCAT62(in_register_0000000a, param_4), param_5);
            new (&local_32) math::Vector2T<unsigned char>();
        } else {
            uVar1 = (anonymous namespace)::GetGridCellCount(iVar4, (uint)param_5,
                                                            (int)CONCAT62(in_register_00000012, param_3));
            uVar2 = (anonymous namespace)::GetGridCellCount((int)CONCAT62(in_register_00000032, param_2), (uint)param_5,
                                                            (int)CONCAT62(in_register_0000000a, param_4));
            new (&local_32) math::Vector2T<unsigned char>(uVar1, uVar2);
        }
        return local_32;
    }

    // 0x100697810, 96 bytes, placed by class name and debug map
    // Grid::LoadStyleSheetVisuals(StyleSheet const&)
    void Grid::LoadStyleSheetVisuals(StyleSheet* param_1) {
        uint* puVar2;
        undefined1 local_20[8];

        StyleSheet::GetPropertyValue<int>((StyleSheet*)local_20, param_1, 588, 1);
        if (local_20->IsActive()) {
            puVar2 = (uint*)eastl::optional<int>::value();
            field_568 = *puVar2;
            m_layoutDirty = 1;
        }
    }

} // namespace jag::ui

namespace jag::ui {
    namespace {
        // 0x1006972d0, 48 bytes, placed by neighbouring functions
        // GetGridCellCount(int, int, int)
        int GetGridCellCount(int param_1, int param_2, int param_3) {
            float fVar1;

            fVar1 = (float)floor((float)(param_1 - param_2) / (float)(param_3 + param_2) + 0.001);
            return (int)fVar1;
        }

        // 0x100697300, 16 bytes, placed by neighbouring functions
        // GetGridCellSize(int, int, int)
        int GetGridCellSize(int param_1, int param_2, int param_3) {
            return param_1 / param_3 - param_2;
        }

    } // namespace

} // namespace jag::ui
