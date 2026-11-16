// libs/graphics/runetek7/gui/debug/TimedGraph.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "TimedGraph.h"

namespace jag {
    // 0x1008fa680, 1824 bytes, placed by class name and debug map
    // TimedGraph::Draw(graphics::GUIManager&, int, int, int, int, unsigned long long, int, int)
    void TimedGraph::Draw(GUIManager* param_1, int param_2, int param_3, int param_4, int param_5, ulonglong param_6,
                          int param_7, int param_8) {
        bool bVar1;
        int iVar2;
        undefined4 uVar3;
        int iVar4;
        long lVar5;
        int* piVar6;
        long lVar7;
        undefined4* puVar8;
        uint uVar9;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        int iVar10;
        TimedGraph* pTVar11;
        ulong uVar12;
        int iVar13;
        int iVar14;
        double dVar15;
        undefined1 auVar16[16];
        undefined1 auVar17[16];
        undefined1 local_930[8];
        double local_928;
        double dStack_920;
        double local_918;
        undefined8 uStack_910;
        undefined8 local_900;
        ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                     shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                     shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>
            local_8f8[8];
        double local_8f0;
        double local_8e8;
        ulong local_8e0;
        double local_8d8;
        GUIManager* local_8d0;
        double local_8c8;
        undefined8 uStack_8c0;
        int local_8ac;
        TimedGraph* local_8a8;
        int local_8a0;
        int local_89c;
        int local_898[2];
        double local_890;
        Callstack local_888;
        undefined8 local_878;
        int local_86c;
        int local_868;
        int local_864;
        vector<int, eastl::fixed_vector_allocator<4ul, 512ul, 4ul, 0ul, true, eastl::allocator>> local_860[2088];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        field_98428 = param_7;
        local_8d0 = param_1;
        local_8a8 = this;
        local_89c = param_2;
        local_868 = param_3;
        new (&field_98432, param_2, param_3, param_4, param_5) oldscape::dash3d::GridRect();
        local_864 = param_5;
        if (256 < param_5) {
            /* WARNING: Subroutine does not return */
            LogAssert("height <= 256",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "debug/TimedGraph.cpp",
                      104, (char*)0);
        }
        local_8d0->AddColouredRectangle(local_89c, local_868, (ulong)(uint)param_4, param_5, param_8, 1);
        if (512 < param_4) {
            /* WARNING: Subroutine does not return */
            LogAssert("width <= 512",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "debug/TimedGraph.cpp",
                      110, (char*)0);
        }
        eastl::fixed_vector<int, 512ul, true, eastl::allocator>::fixed_vector((ulong)local_860);
        local_898[0] = 0;
        eastl::vector<int, eastl::fixed_vector_allocator<4ul, 512ul, 4ul, 0ul, true, eastl::allocator>>::assign(
            local_860, local_898);
        pTVar11 = local_8a8;
        lVar5 = (long)param_7 * 1000;
        auVar16._8_4_ = (int)((ulong)lVar5 >> 32);
        auVar16._0_8_ = lVar5;
        auVar16._12_4_ = 1160773632;
        dStack_920 = auVar16._8_8_ - 1.9342813113834067e+25;
        local_928 = dStack_920 + ((double)CONCAT44(1127219200, (int)lVar5) - 4503599627370496.0);
        local_8d8 = (double)param_4;
        local_898->end();
        local_918 = (double)(param_4 + -1);
        uStack_910 = 0;
        local_8e8 = (double)local_864;
        iVar4 = 2147483647;
        iVar2 = 0;
        local_86c = 0;
        local_878 = (ulong)local_878._4_4_ << 32;
        iVar13 = 0;
        dVar15 = local_8d8;
        local_8e0 = (ulong)(uint)param_4;
        do {
            local_8f0 = dVar15;
            local_8a0 = iVar2;
            local_888.begin();
            bVar1 = eastl::operator==((eastl*)local_898, (hashtable_iterator_base*)&local_888, extraout_RDX);
            iVar2 = local_8a0;
            if (bVar1)
                goto joined_r0x0001008fabaa;
            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator--(
                (ListIterator<console::Line, console::Line*, console::Line&>*)local_898);
            piVar6 = (int*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                (ListIterator<console::Line, console::Line*, console::Line&>*)local_898);
            local_8ac = *piVar6;
            local_888._12_4_ = iVar13;
            if (iVar13 < local_8ac) {
                local_888._12_4_ = local_8ac;
            }
            if (local_8ac < iVar4) {
                iVar4 = local_8ac;
            }
            lVar5 = param_6 - *(long*)(piVar6 + 2);
            auVar17._8_4_ = (int)((ulong)lVar5 >> 32);
            auVar17._0_8_ = lVar5;
            auVar17._12_4_ = 1160773632;
            dVar15 = local_8d8 - (((auVar17._8_8_ - 1.9342813113834067e+25) +
                                   ((double)CONCAT44(1127219200, (int)lVar5) - 4503599627370496.0)) *
                                  local_8d8) /
                                     local_928;
            uVar9 = (uint)local_878 & 255;
            if (dVar15 < 0.0) {
                uVar9 = 1;
            }
            local_878 = CONCAT44(local_878._4_4_, uVar9);
            if (dVar15 <= 0.0) {
                dVar15 = 0.0;
            }
            local_8c8 = (double)(~-(ulong)(dVar15 < local_8d8) & (ulong)local_918 |
                                 (ulong)dVar15 & -(ulong)(dVar15 < local_8d8));
            uStack_8c0 = uStack_910;
            local_890 = (double)local_8ac * local_8e8;
            iVar2 = eastl::max<int>(pTVar11->m_maximum, 1);
            uVar9 = (uint)(0 < *piVar6);
            if ((int)(local_890 / (double)iVar2) != 0) {
                uVar9 = (int)(local_890 / (double)iVar2);
            }
            if (uVar9 != 0) {
                local_890 = (double)CONCAT44(local_890._4_4_, iVar4);
                iVar2 = (int)local_8c8;
                iVar13 = (int)local_8f0;
                uVar12 = (ulong)iVar2;
                if (iVar2 < iVar13) {
                    lVar5 = local_860->HeapBeginPtr();
                    lVar7 = local_860->HeapBeginPtr();
                    eastl::fill<unsigned int>((uint*)(lVar5 + uVar12 * 4 + 4), (uint*)(lVar7 + (long)iVar13 * 4),
                                              uVar9);
                }
                if (iVar2 == iVar13) {
                    piVar6 =
                        (int*)eastl::vector<int, eastl::fixed_vector_allocator<4ul, 512ul, 4ul, 0ul, true,
                                                                               eastl::allocator>>::operator[](local_860,
                                                                                                              uVar12);
                    uVar3 = eastl::max<int>(*piVar6, uVar9);
                    puVar8 = (undefined4*)
                        eastl::vector<int, eastl::fixed_vector_allocator<4ul, 512ul, 4ul, 0ul, true,
                                                                         eastl::allocator>>::operator[](local_860,
                                                                                                        uVar12);
                } else {
                    piVar6 =
                        (int*)eastl::vector<int, eastl::fixed_vector_allocator<4ul, 512ul, 4ul, 0ul, true,
                                                                               eastl::allocator>>::operator[](local_860,
                                                                                                              uVar12);
                    uVar3 = eastl::max<int>(*piVar6, uVar9);
                    puVar8 = (undefined4*)
                        eastl::vector<int, eastl::fixed_vector_allocator<4ul, 512ul, 4ul, 0ul, true,
                                                                         eastl::allocator>>::operator[](local_860,
                                                                                                        uVar12);
                    *puVar8 = uVar3;
                    iVar4 = local_890._0_4_;
                    if ((int)local_8e0 <= iVar13)
                        goto LAB_1008fa860;
                    piVar6 = (int*)
                        eastl::vector<int, eastl::fixed_vector_allocator<4ul, 512ul, 4ul, 0ul, true,
                                                                         eastl::allocator>>::operator[](local_860,
                                                                                                        (long)iVar13);
                    uVar3 = eastl::max<int>(*piVar6, uVar9);
                    puVar8 = (undefined4*)
                        eastl::vector<int, eastl::fixed_vector_allocator<4ul, 512ul, 4ul, 0ul, true,
                                                                         eastl::allocator>>::operator[](local_860,
                                                                                                        (long)iVar13);
                }
                *puVar8 = uVar3;
                iVar4 = local_890._0_4_;
            }
        LAB_1008fa860:
            pTVar11 = local_8a8;
            iVar2 = local_8ac + local_8a0;
            local_86c = local_86c + 1;
            iVar13 = local_888._12_4_;
            dVar15 = local_8c8;
        } while ((local_878 & 1) == 0);
        local_888.begin();
        bVar1 = eastl::operator!=((eastl*)local_898, (hashtable_iterator_base*)&local_888, extraout_RDX_00);
        iVar13 = local_888._12_4_;
        if (bVar1) {
            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator--(
                (ListIterator<console::Line, console::Line*, console::Line&>*)local_898);
            local_888.begin();
            new (&local_900) eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                                 shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                                 shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(
                (ListIterator*)&local_888);
            eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>::ListIterator(local_8f8,
                                                                                                         (ListIterator*)
                                                                                                             local_898);
            eastl::list<TimedGraph::Element,
                        eastl::fixed_node_allocator<32ul, 3072ul, 8ul, 0ul, true, eastl::allocator>>::erase(local_930,
                                                                                                            pTVar11,
                                                                                                            local_900);
            iVar13 = local_888._12_4_;
        }
    joined_r0x0001008fabaa:
        if (local_86c != 0) {
            pTVar11->m_mean = iVar2 / local_86c;
            *(int*)&pTVar11->field_98460 = iVar13;
            pTVar11->m_min = iVar4;
        }
        local_878 = local_860->size();
        iVar2 = (int)local_878;
        if (0 < iVar2) {
            local_868 = local_868 + local_864;
            iVar13 = 0;
            do {
                uVar12 = (ulong)iVar13;
                piVar6 =
                    (int*)eastl::vector<int, eastl::fixed_vector_allocator<4ul, 512ul, 4ul, 0ul, true,
                                                                           eastl::allocator>>::operator[](local_860,
                                                                                                          uVar12);
                iVar4 = *piVar6;
                if (iVar4 != 0) {
                    iVar10 = iVar13;
                    do {
                        uVar12 = uVar12 + 1;
                        if ((long)iVar2 <= (long)uVar12) {
                            iVar10 = (int)local_878;
                            break;
                        }
                        piVar6 = (int*)
                            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 512ul, 4ul, 0ul, true,
                                                                             eastl::allocator>>::operator[](local_860,
                                                                                                            uVar12);
                        iVar10 = iVar10 + 1;
                    } while (*piVar6 == iVar4);
                    if (iVar10 != -1) {
                        new (&local_888) callstack::Callstack();
                        if (local_8a8->field_98424 == '\0') {
                            local_888.SetRedGreenGradient(iVar4, local_864, 0);
                        } else {
                            local_888.SetRedGreenGradient(iVar4, 0, local_864);
                        }
                        iVar4 = eastl::min<graphics::GraphicsQuality>(local_864, iVar4);
                        local_8c8 = (double)CONCAT44(local_8c8._4_4_, iVar4);
                        iVar4 = local_868 - iVar4;
                        iVar14 = iVar13 + local_89c;
                        uVar9 = local_888.GetX();
                        local_8d0->AddColouredRectangle(iVar14, iVar4, iVar10 - iVar13, (ulong)local_8c8 & 4294967295,
                                                        uVar9 & 4294967040 | param_8, 1);
                        iVar13 = iVar10 + -1;
                    }
                }
                iVar13 = iVar13 + 1;
            } while (iVar13 < (int)(uint)local_878);
        }
        local_860->~fixed_vector();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008fb720, 432 bytes, placed by class name
    // TimedGraph::RecordValue(unsigned long long, int)
    void TimedGraph::RecordValue(ulonglong param_1, int param_2) {
        ulong uVar1;
        char cVar2;
        bool bVar3;
        int* piVar4;
        long lVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        ulong uVar6;
        undefined1 local_60[8];
        list<console::Line, eastl::allocator> local_58[8];
        undefined8 local_50;
        undefined8 local_48;
        list<console::Line, eastl::allocator> local_40[8];
        int local_38[2];
        ulonglong local_30;

        if (param_1 != 0) {
            cVar2 = empty();
            if ((cVar2 == '\0') &&
                (piVar4 = (int*)
                     eastl::list<TimedGraph::Element,
                                 eastl::fixed_node_allocator<32ul, 3072ul, 8ul, 0ul, true, eastl::allocator>>::back(),
                 *piVar4 == param_2)) {
                return;
            }
            local_38[0] = param_2;
            local_30 = param_1;
            push_back(local_38);
            if (m_maximum < param_2) {
                m_maximum = param_2;
            }
            local_38->begin();
            lVar5 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
            uVar1 = *(ulong*)(lVar5 + 8);
            field_98416 = uVar1;
            uVar6 = param_1 + (long)field_98428 * -1100;
            if (uVar1 < uVar6) {
                local_38->begin();
                eastl::list<console::Line, eastl::allocator>::end(local_58);
                bVar3 = eastl::operator!=((eastl*)local_38, (hashtable_iterator_base*)local_58, extraout_RDX);
                if (bVar3) {
                    do {
                        lVar5 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                        if (uVar6 <= *(ulong*)(lVar5 + 8))
                            break;
                        eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                        bVar3 =
                            eastl::operator!=((eastl*)local_38, (hashtable_iterator_base*)local_58, extraout_RDX_00);
                    } while (bVar3);
                }
                eastl::list<console::Line, eastl::allocator>::begin(local_40);
                bVar3 = eastl::operator!=((eastl*)local_38, (hashtable_iterator_base*)local_40, extraout_RDX_01);
                if (bVar3) {
                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator--(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)local_38);
                    eastl::list<console::Line, eastl::allocator>::begin(local_40);
                    bVar3 = eastl::operator!=((eastl*)local_38, (hashtable_iterator_base*)local_40, extraout_RDX_02);
                    if (bVar3) {
                        eastl::list<console::Line, eastl::allocator>::begin(local_40);
                        new (&local_50)
                            eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                                shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                                shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(local_40);
                        new (&local_48)
                            eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                                shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                                shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(local_38);
                        eastl::list<TimedGraph::Element,
                                    eastl::fixed_node_allocator<32ul, 3072ul, 8ul, 0ul, true, eastl::allocator>>::
                            erase(local_60, this, local_50, local_48);
                    }
                }
                eastl::list<console::Line, eastl::allocator>::begin(local_40);
                lVar5 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_40);
                field_98416 = *(ulong*)(lVar5 + 8);
            }
        }
    }

    // 0x1008fba30, 304 bytes, placed by class name
    // TimedGraph::PrintMeanRecordedValues(char const*) const
    void TimedGraph::PrintMeanRecordedValues(char* param_1) {
        undefined8 uVar1;
        vector* this_00;
        long lVar2;
        long lVar3;
        type* ptVar4;
        undefined4 uVar5;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 1, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "gui/debug/TimedGraph.cpp",
                            51, "\n%s", param_1);
        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 1, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "gui/debug/TimedGraph.cpp",
                            52, "-------------------------------------------------------------");
        uVar1 = logger::default_logger();
        ptVar4 = (type*)&DAT_00000001;
        logger::Logger::Log(uVar1, 1, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "gui/debug/TimedGraph.cpp",
                            53, "\tMeanValue \tElapsedTime");
        this_00 = (&field_98464, ptVar4)->SSOBeginPtr();
        lVar2 = this_00->HeapBeginPtr();
        lVar3 = this_00->end();
        for (; lVar2 != lVar3; lVar2 = lVar2 + 20) {
            uVar5 = (undefined4)((ulong)param_1 >> 32);
            uVar1 = logger::default_logger();
            param_1 = (char*)CONCAT44(uVar5, *(undefined4*)(lVar2 + 4));
            logger::Logger::Log((double)*(float*)(lVar2 + 16), uVar1, 1, 7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/gui/debug/TimedGraph.cpp",
                                56, "\t%d\t\t%f", param_1);
        }
    }

    // 0x1008fbb60, 176 bytes, placed by class name
    // TimedGraph::GetTotal(unsigned long long, int) const
    int TimedGraph::GetTotal(ulonglong param_1, int param_2) {
        char cVar1;
        bool bVar2;
        long lVar3;
        int* piVar4;
        undefined4 extraout_EDX;
        undefined4 extraout_var;
        int iVar5;
        undefined8 local_38;
        undefined8 local_30;

        cVar1 = empty();
        iVar5 = 0;
        if (cVar1 == '\0') {
            local_30 = eastl::list<console::Line, eastl::allocator>::end();
            local_38 = eastl::list<console::Line, eastl::allocator>::begin();
            eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator--(
                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_30);
            lVar3 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                (ListIterator<console::Line, console::Line*, console::Line&>*)&local_30);
            iVar5 = 0;
            if (param_1 - (long)param_2 <= *(ulong*)(lVar3 + 8)) {
                iVar5 = 0;
                do {
                    piVar4 = (int*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)&local_30);
                    iVar5 = iVar5 + *piVar4;
                    bVar2 = eastl::operator==((eastl*)&local_30, (hashtable_iterator_base*)&local_38,
                                              (hashtable_iterator_base*)CONCAT44(extraout_var, extraout_EDX));
                    if (bVar2) {
                        return iVar5;
                    }
                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator--(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)&local_30);
                    lVar3 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)&local_30);
                } while (param_1 - (long)param_2 <= *(ulong*)(lVar3 + 8));
            }
        }
        return iVar5;
    }

    // 0x1008fbc10, 48 bytes, placed by class name
    // TimedGraph::Reset()
    void TimedGraph::Reset() {
        (&field_98464)->Reset();
        clear();
        m_maximum = 0;
        m_mean = 0;
        *(undefined8*)&m_min = 0;
    }

    // 0x1008fbd10, 880 bytes, placed by class name
    // TimedGraph::DrawMarkers(graphics::GUIManager&, graphics::FontHelpers&, graphics::Font&, int, int, int, int, unsigned long long, int, int)
    void TimedGraph::DrawMarkers(GUIManager* param_1, FontHelpers* param_2, Font* param_3, int param_4, int param_5,
                                 int param_6, int param_7, ulonglong param_8, int param_9, int param_10) {
        char cVar1;
        undefined4 uVar2;
        byte bVar3;
        byte bVar4;
        int iVar5;
        uint uVar6;
        uint uVar7;
        uint uVar8;
        vector* this_01;
        FontMetrics* this_02;
        undefined1 uVar9;
        ulong uVar10;
        type* ptVar11;
        StringView SVar12;
        StringView SVar13;
        StringView SVar14;
        TextFlags in_stack_fffffffffffffdf8;
        undefined4 in_stack_fffffffffffffdfc;
        TextProperties local_1f8;
        optional<int> local_1d0[8];
        StringView local_1c8;
        StringView local_1b8;
        StringView local_1a8;
        undefined1 local_178[8];
        Callstack local_170;
        int local_160[74];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        local_160[0] = 1;
        local_170._4_4_ = param_5;
        new (&local_170.field_8) graphics::TextFlags(local_160, 1);
        new (&local_1f8) graphics::TextProperties(param_3, in_stack_fffffffffffffdf8);
        local_160[0] = 128;
        eastl::optional<int>::optional(local_1d0, local_160);
        uVar2 = local_170._4_4_;
        ptVar11 = (type*)(ulong)(param_10 | 4294967040);
        local_1f8.SetColours(ptVar11, local_1d0);
        this_01 = param_3->SSOBeginPtr(ptVar11);
        this_02 =
            (FontMetrics*)shared_ptr<graphics::FontMetrics>::operator*((shared_ptr<graphics::FontMetrics>*)this_01);
        bVar3 = this_02->GetMaxAscent();
        bVar4 = this_02->GetMaxDescent();
        local_170._4_4_ = uVar2 + param_7;
        param_1->AddColouredRectangle(param_4, uVar2 + param_7, param_6, (uint)bVar4 + (uint)bVar3, param_10 / 2);
        new (local_160) eastl::fixed_string<char, 256, true, eastl::allocator>();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)local_160, "%d secs", (ulong)(uint)param_9);
        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_1c8,
                                                                                      (fixed_string*)local_160);
        SVar12.field_8._0_4_ = param_4;
        SVar12.field_0 = (ulong)&local_1c8;
        SVar12.field_8._4_4_ = 0;
        param_2->DrawString(SVar12, local_170._4_4_, 0, (uint)&local_1f8,
                            (TextProperties*)CONCAT44(in_stack_fffffffffffffdfc, 1));
        new (local_178) callstack::Callstack();
        new ((local_178 + 8)) callstack::Callstack();
        cVar1 = ((TimedGraph*)this)->field_98424;
        iVar5 = GetMean((TimedGraph*)this);
        if (cVar1 == '\0') {
            local_178->SetRedGreenGradient(iVar5, ((TimedGraph*)this)->m_maximum, 0);
            iVar5 = GetMax((TimedGraph*)this);
            ((local_178 + 8))->SetRedGreenGradient(iVar5, ((TimedGraph*)this)->m_maximum, 0);
        } else {
            local_178->SetRedGreenGradient(iVar5, 0, ((TimedGraph*)this)->m_maximum);
            iVar5 = GetMax((TimedGraph*)this);
            ((local_178 + 8))->SetRedGreenGradient(iVar5, 0, ((TimedGraph*)this)->m_maximum);
        }
        uVar6 = local_178->GetX();
        uVar7 = GetMean((TimedGraph*)this);
        uVar10 = (ulong)uVar7;
        uVar7 = ((local_178 + 8))->GetX();
        uVar8 = GetMax((TimedGraph*)this);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)local_160, "[<col=%08X>%d avg</col>, <col=%08X>%d max</col>]",
            (ulong)(uVar6 & 4278189824 | param_10 | 16777216), uVar10,
            (ulong)(param_10 | uVar7 & 4278189824 | 16777216), (ulong)uVar8);
        uVar9 = (undefined1)uVar10;
        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_1b8,
                                                                                      (fixed_string*)local_160);
        SVar14.field_8 = (uchar*)this_02;
        SVar14.field_0 = (ulong)&local_1b8;
        iVar5 = graphics::FontHelpers::GetStringWidth(SVar14, (FontMetrics*)0, (bool)uVar9);
        graphics::TextProperties::ClearFlag(&local_1f8, 1);
        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_1a8,
                                                                                      (fixed_string*)local_160);
        SVar13.field_8._0_4_ = (param_6 / 2 + param_4) - iVar5 / 2;
        SVar13.field_0 = (ulong)&local_1a8;
        SVar13.field_8._4_4_ = 0;
        param_2->DrawString(SVar13, local_170._4_4_, 0, (uint)&local_1f8,
                            (TextProperties*)CONCAT44(in_stack_fffffffffffffdfc, 1));
        /* WARNING: Subroutine does not return */
        local_160->~fixed_string();
    }

} // namespace jag
