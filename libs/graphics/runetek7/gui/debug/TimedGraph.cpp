// libs/graphics/runetek7/gui/debug/TimedGraph.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "TimedGraph.h"

namespace jag {
    // 0x1008fa680
    void TimedGraph::Draw(graphics::GUIManager& guiManager, int arg2, int arg3, int arg4, int arg5,
                          unsigned long long arg6, int arg7, int arg8) {
        EnumOptionToggle enumOptionToggle2;
        bool cVar1;
        uint32_t uVar3;
        int iVar4;
        int* piVar6;
        long lVar7;
        ShaderVariablePrecision* pSVar8;
        uint32_t* puVar9;
        EnumOptionToggle* pEVar10;
        unsigned int uVar11;
        unsigned long uVar13;
        int arg1;
        TextureType textureType;
        uint8_t auVar16[16];
        uint8_t auVar17[16];
        list<TimedGraph::Element, eastl::fixed_node_allocator<32ul, 3072ul, 8ul, 0ul, true>> local_930;
        ListIterator<TimedGraph::Element, TimedGraph::Element const*, TimedGraph::Element const&>* local_900;
        ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                     shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                     shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>
            local_8f8[8];
        double local_8f0;
        double local_8c8;
        uint64_t uStack_8c0;
        int local_8ac;
        int local_8a0;
        ReturnValue local_898;
        double local_890;
        uint64_t local_878;

        field_98428 = arg7;
        int local_868 = arg3;
        new (&field_98432) oldscape::dash3d::GridRect(arg2, arg3, arg4, arg5);
        if (256 < arg5) {
            LogAssert("height <= 256",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "debug/TimedGraph.cpp",
                      104, nullptr);
        }
        guiManager.AddColouredRectangle(arg2, local_868, arg4, arg5, arg8, 1);
        if (512 < arg4) {
            LogAssert("width <= 512",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "debug/TimedGraph.cpp",
                      110, nullptr);
        }
        fixed_vector<int, 512ul> local_860((long)arg4);
        local_898._0_4_ = 0;
        local_860.assign(local_898);
        TimedGraph* this_00 = this;
        long lVar5 = (long)arg7 * 1000;
        auVar16._8_4_ = (int)((unsigned long)lVar5 >> 32);
        auVar16._0_8_ = lVar5;
        auVar16._12_4_ = 1160773632;
        double local_928 = auVar16._8_8_ - 1.9342813113834067e+25 +
                           ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)lVar5)) - 4503599627370496.0);
        local_898 = end();
        double local_918 = (double)(arg4 - 1);
        double local_8e8 = (double)(int)(EnumOptionToggle)arg5;
        int iVar12 = 2147483647;
        int iVar2 = 0;
        int local_86c = 0;
        local_878 = (unsigned long)local_878._4_4_ << 32;
        int iVar14 = 0;
        double dVar15 = (double)arg4;
        unsigned long local_8e0 = (unsigned long)(unsigned int)arg4;
        do {
            local_8f0 = dVar15;
            local_8a0 = iVar2;
            local_888 = this_00->begin();
            cVar1 = local_898 == local_888;
            iVar2 = local_8a0;
            if (cVar1)
                goto joined_r0x0001008fabaa;
            --local_898;
            piVar6 = (int*)*local_898;
            local_8ac = *piVar6;
            local_888._12_4_ = iVar14;
            if (iVar14 < local_8ac) {
                local_888._12_4_ = local_8ac;
            }
            if (local_8ac < iVar12) {
                iVar12 = local_8ac;
            }
            lVar5 = arg6 - *(long*)(piVar6 + 2);
            auVar17._8_4_ = (int)((unsigned long)lVar5 >> 32);
            auVar17._0_8_ = lVar5;
            auVar17._12_4_ = 1160773632;
            dVar15 = (double)arg4 -
                     (((auVar17._8_8_ - 1.9342813113834067e+25) +
                       ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)lVar5)) - 4503599627370496.0)) *
                      (double)arg4) /
                         local_928;
            uVar11 = (unsigned int)local_878 & 255;
            if (dVar15 < 0.0) {
                uVar11 = 1;
            }
            local_878 = (((uint64_t)local_878._4_4_ << 32) | (uint32_t)uVar11);
            if (dVar15 <= 0.0) {
                dVar15 = 0.0;
            }
            local_8c8 = (double)(~-(unsigned long)(dVar15 < (double)arg4) & (unsigned long)local_918 |
                                 (unsigned long)dVar15 & -(unsigned long)(dVar15 < (double)arg4));
            uStack_8c0 = 0;
            local_890 = (double)local_8ac * local_8e8;
            iVar2 = eastl::max<int>(this_00->m_maximum, 1);
            textureType = (unsigned int)(0 < *piVar6);
            if ((int)(local_890 / (double)iVar2) != 0) {
                textureType = (int)(local_890 / (double)iVar2);
            }
            if (textureType != 0) {
                local_890 = (double)(((uint64_t)local_890._4_4_ << 32) | (uint32_t)iVar12);
                iVar2 = (int)local_8c8;
                iVar14 = (int)local_8f0;
                uVar13 = (unsigned long)iVar2;
                if (iVar2 < iVar14) {
                    lVar5 = local_860.HeapBeginPtr();
                    lVar7 = local_860.HeapBeginPtr();
                    eastl::fill<unsigned int>((lVar5 + uVar13 * 4 + 4), (unsigned int*)(lVar7 + (long)iVar14 * 4),
                                              textureType);
                }
                if (iVar2 == iVar14) {
                    pSVar8 = &local_860[uVar13];
                    uVar3 = eastl::max<int>(*pSVar8, textureType);
                    puVar9 = &local_860[uVar13];
                } else {
                    pSVar8 = &local_860[uVar13];
                    uVar3 = eastl::max<int>(*pSVar8, textureType);
                    puVar9 = &local_860[uVar13];
                    *puVar9 = uVar3;
                    iVar12 = local_890._0_4_;
                    if ((int)local_8e0 <= iVar14)
                        goto LAB_1008fa860;
                    pSVar8 = &local_860[(long)iVar14];
                    uVar3 = eastl::max<int>(*pSVar8, textureType);
                    puVar9 = &local_860[(long)iVar14];
                }
                *puVar9 = uVar3;
                iVar12 = local_890._0_4_;
            }
        LAB_1008fa860:
            this_00 = this;
            iVar2 = local_8ac + local_8a0;
            local_86c = local_86c + 1;
            iVar14 = local_888._12_4_;
            dVar15 = local_8c8;
        } while ((local_878 & 1) == 0);
        Callstack local_888 = begin();
        cVar1 = local_898 != local_888;
        iVar14 = local_888._12_4_;
        if (cVar1) {
            --local_898;
            local_888 = this_00->begin();
            new (&local_900) eastl::ListIterator(&local_888);
            new (local_8f8) eastl::ListIterator(&local_898);
            eastl::list<TimedGraph::Element, eastl::fixed_node_allocator<32ul, 3072ul, 8ul, 0ul, true>>::erase(
                &local_930,
                (ListIterator<TimedGraph::Element, TimedGraph::Element const*, TimedGraph::Element const&>*)this_00,
                local_900);
            iVar14 = local_888._12_4_;
        }
    joined_r0x0001008fabaa:
        if (local_86c != 0) {
            this_00->m_mean = iVar2 / local_86c;
            *(int*)&this_00->field_98460 = iVar14;
            this_00->m_min = iVar12;
        }
        local_878 = local_860.size();
        iVar2 = (int)local_878;
        if (0 < iVar2) {
            local_868 = local_868 + (EnumOptionToggle)arg5;
            iVar14 = 0;
            do {
                uVar13 = (unsigned long)iVar14;
                pEVar10 = &local_860[uVar13];
                enumOptionToggle2 = *pEVar10;
                if (enumOptionToggle2 != 0) {
                    iVar12 = iVar14;
                    do {
                        uVar13 = uVar13 + 1;
                        if ((long)iVar2 <= (long)uVar13) {
                            iVar12 = (int)local_878;
                            break;
                        }
                        pEVar10 = &local_860[uVar13];
                        iVar12 = iVar12 + 1;
                    } while (*pEVar10 == enumOptionToggle2);
                    if (iVar12 != -1) {
                        local_888 = callstack::Callstack();
                        if (field_98424 == '\0') {
                            local_888 = math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient(
                                enumOptionToggle2, (EnumOptionToggle)arg5, 0);
                        } else {
                            local_888 = math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient(
                                enumOptionToggle2, 0, (EnumOptionToggle)arg5);
                        }
                        iVar4 = eastl::min<graphics::GraphicsQuality>((EnumOptionToggle)arg5, enumOptionToggle2);
                        local_8c8 = (double)(((uint64_t)local_8c8._4_4_ << 32) | (uint32_t)iVar4);
                        iVar4 = local_868 - iVar4;
                        arg1 = iVar14 + arg2;
                        uVar11 = local_888.GetX();
                        guiManager.AddColouredRectangle(arg1, iVar4, iVar12 - iVar14, local_8c8._0_4_,
                                                        uVar11 & 4294967040 | arg8, 1);
                        iVar14 = iVar12 - 1;
                    }
                }
                iVar14 = iVar14 + 1;
            } while (iVar14 < (int)(unsigned int)local_878);
        }
    }

    // 0x1008fb720
    void TimedGraph::RecordValue(unsigned long long arg1, int arg2) {
        unsigned long uVar1;
        bool cVar2;
        int* piVar3;
        long lVar4;
        unsigned long uVar5;
        list<TimedGraph::Element, eastl::fixed_node_allocator<32ul, 3072ul, 8ul, 0ul, true>> local_60;
        ReturnValue local_58;
        ListIterator<TimedGraph::Element, TimedGraph::Element const*, TimedGraph::Element const&>* local_50;
        ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                     shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                     shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>
            local_48[8];
        ReturnValue local_40;
        ReturnValue local_38;
        unsigned long long local_30;

        if (arg1 != 0) {
            cVar2 = empty();
            if ((!cVar2) && (piVar3 = (int*)back(), *piVar3 == arg2)) {
                return;
            }
            local_38._0_4_ = arg2;
            local_30 = arg1;
            push_back(local_38);
            if (m_maximum < arg2) {
                m_maximum = arg2;
            }
            local_38 = begin();
            lVar4 = *local_38;
            uVar1 = *(unsigned long*)(lVar4 + 8);
            field_98416 = uVar1;
            uVar5 = arg1 + (long)field_98428 * -1100;
            if (uVar1 < uVar5) {
                local_38 = begin();
                local_58 = end();
                cVar2 = local_38 != local_58;
                if (cVar2) {
                    do {
                        lVar4 = *local_38;
                        if (uVar5 <= *(unsigned long*)(lVar4 + 8))
                            break;
                        ++local_38;
                        cVar2 = local_38 != local_58;
                    } while (cVar2);
                }
                local_40 = begin();
                cVar2 = local_38 != local_40;
                if (cVar2) {
                    --local_38;
                    local_40 = begin();
                    cVar2 = local_38 != local_40;
                    if (cVar2) {
                        local_40 = begin();
                        new (&local_50) eastl::ListIterator(&local_40);
                        new (local_48) eastl::ListIterator(&local_38);
                        eastl::list<TimedGraph::Element, eastl::fixed_node_allocator<32ul, 3072ul, 8ul, 0ul, true>>::
                            erase(&local_60,
                                  (ListIterator<TimedGraph::Element, TimedGraph::Element const*,
                                                TimedGraph::Element const&>*)this,
                                  local_50);
                    }
                }
                local_40 = begin();
                lVar4 = *local_40;
                field_98416 = *(unsigned long*)(lVar4 + 8);
            }
        }
    }

    // 0x1008fba30
    void TimedGraph::PrintMeanRecordedValues(const char* str) const {
        uint32_t uVar4;

        auto pLVar1 = logger::default_logger();
        pLVar1->Log(true, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/debug/"
                    "TimedGraph.cpp",
                    51, "\n%s", str);
        pLVar1 = logger::default_logger();
        pLVar1->Log(true, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/debug/"
                    "TimedGraph.cpp",
                    52, "-------------------------------------------------------------");
        pLVar1 = logger::default_logger();
        pLVar1->Log(true, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/debug/"
                    "TimedGraph.cpp",
                    53, "\tMeanValue \tElapsedTime");
        auto this_00 = field_98464.SSOBeginPtr();
        long lVar2 = this_00->HeapBeginPtr();
        long lVar3 = this_00->end();
        for (; lVar2 != lVar3; lVar2 = lVar2 + 20) {
            uVar4 = (uint32_t)((unsigned long)str >> 32);
            pLVar1 = logger::default_logger();
            str = (char*)(((uint64_t)uVar4 << 32) | (uint32_t)(*(uint32_t*)(lVar2 + 4)));
            pLVar1->Log(true, 7,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                        "debug/TimedGraph.cpp",
                        56, "\t%d\t\t%f", (double)*(float*)(lVar2 + 16), str);
        }
    }

    // 0x1008fbb60
    int TimedGraph::GetTotal(unsigned long long arg1, int arg2) const {
        long lVar2;
        int* piVar3;
        uint64_t local_38;
        uint64_t local_30;

        bool cVar1 = empty();
        int iVar4 = 0;
        if (!cVar1) {
            local_30 = end();
            local_38 = begin();
            --local_30;
            lVar2 = *local_30;
            iVar4 = 0;
            if (arg1 - (long)arg2 <= *(unsigned long*)(lVar2 + 8)) {
                iVar4 = 0;
                do {
                    piVar3 = (int*)*local_30;
                    iVar4 = iVar4 + *piVar3;
                    cVar1 = local_30 == local_38;
                    if (cVar1) {
                        return iVar4;
                    }
                    --local_30;
                    lVar2 = *local_30;
                } while (arg1 - (long)arg2 <= *(unsigned long*)(lVar2 + 8));
            }
        }
        return iVar4;
    }

    // 0x1008fbc10
    void TimedGraph::Reset() {
        field_98464.Reset();
        clear();
        m_maximum = 0;
        m_mean = 0;
        *(uint64_t*)&m_min = 0;
    }

    // 0x1008fbd10
    void TimedGraph::DrawMarkers(graphics::GUIManager& guiManager, graphics::FontHelpers& fontHelpers,
                                 graphics::Font& font, int arg4, int arg5, int arg6, int arg7, unsigned long long arg8,
                                 int arg9, int arg10) {
        StringView local_1c8;
        StringView local_1b8;
        StringView local_1a8;
        uint8_t local_178[8];
        Callstack local_170;
        unsigned int local_160[74];

        local_160[0] = 1;
        local_170._4_4_ = arg5;
        new (&local_170.field_8) graphics::TextFlags(local_160);
        TextProperties local_1f8(font, local_170.field_8);
        local_160[0] = 128;
        optional<int> local_1d0(*local_160);
        uint32_t uVar2 = local_170._4_4_;
        local_1f8.SetColours(arg10 | 4294967040, &local_1d0);
        auto this_01 = font.SSOBeginPtr();
        FontMetrics* this_02 = (FontMetrics*)**this_01;
        uint8_t bVar3 = this_02->GetMaxAscent();
        uint8_t bVar4 = this_02->GetMaxDescent();
        local_170._4_4_ = uVar2 + arg7;
        guiManager.AddColouredRectangle(arg4, uVar2 + arg7, arg6, (unsigned int)bVar4 + (unsigned int)bVar3, arg10 / 2,
                                        1);
        new (local_160) eastl::fixed_string<char, 256>();
        local_160->sprintf("%d secs", (unsigned long)(unsigned int)arg9);
        local_1c8.StringView<eastl::fixed_string<char, 40>>(*local_160);
        fontHelpers.DrawString(&local_1c8, arg4, local_170._4_4_, 0, local_1f8);
        new (local_178) callstack::Callstack();
        new ((local_178 + 8)) callstack::Callstack();
        bool cVar1 = field_98424;
        int iVar5 = GetMean();
        if (!cVar1) {
            *local_178 = math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient(iVar5, m_maximum, 0);
            iVar5 = GetMax();
            *((local_178 + 8)) =
                math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient(iVar5, m_maximum, 0);
        } else {
            *local_178 = math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient(iVar5, 0, m_maximum);
            iVar5 = GetMax();
            *((local_178 + 8)) =
                math::ColourStorage8888<math::RGBA8StorageLayout>::SetRedGreenGradient(iVar5, 0, m_maximum);
        }
        unsigned int uVar6 = local_178->GetX();
        unsigned int uVar7 = GetMean();
        unsigned int uVar8 = ((local_178 + 8))->GetX();
        unsigned int uVar9 = GetMax();
        local_160->sprintf("[<col=%08X>%d avg</col>, <col=%08X>%d max</col>]",
                           (unsigned long)(uVar6 & 4278189824 | arg10 | 16777216), (unsigned long)uVar7,
                           (unsigned long)(arg10 | uVar8 & 4278189824 | 16777216), (unsigned long)uVar9);
        local_1b8.StringView<eastl::fixed_string<char, 40>>(*local_160);
        iVar5 = graphics::FontHelpers::GetStringWidth(&local_1b8, *this_02, false);
        local_1f8.ClearFlag(1);
        local_1a8.StringView<eastl::fixed_string<char, 40>>(*local_160);
        fontHelpers.DrawString(&local_1a8, (arg6 / 2 + arg4) - iVar5 / 2, local_170._4_4_, 0, local_1f8);
    }

} // namespace jag
