// projects/osclient/heatmap/Heatmap.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "Heatmap.h"

namespace jag::oldscape {
    // 0x100f886f8, 8000 bytes, __common; zero-initialised
    Heatmap::COLOUR_FOR_COUNT;

    // 0x10000bff0, 96 bytes, placed by class name and debug map
    // Heatmap::AddDataPoint(int, int)
    void Heatmap::AddDataPoint(int param_1, int param_2) {
        int* piVar1;

        if ((long)field_16464 < 2048) {
            piVar1 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)(field_64 + 16), (long)field_16464);
            *piVar1 = param_1;
            piVar1 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&field_8272, (long)field_16464);
            *piVar1 = param_2;
            field_16464 = field_16464 + 1;
        }
    }

    // 0x10000c060, 544 bytes, placed by class name
    // Heatmap::Render(int, int, graphics::Pix32&, float)
    void Heatmap::Render(int param_1, int param_2, Pix32* param_3, float param_4) {
        undefined1* this_00;
        int* piVar1;
        uint* puVar3;
        int iVar4;
        uint uVar5;
        int iVar6;
        Heatmap* this_01;
        ulong uVar7;
        ulong uVar8;
        float fVar9;
        undefined1 local_80[16];
        undefined1 local_70[24];
        Pix32* local_58;
        array<int, 2048ul>* local_50;
        array<int, 2048ul>* local_48;

        uVar5 = (uint)(param_4 * 6.0 * field_0);
        local_58 = (Pix32*)GetHeatmapSprite(this, uVar5);
        iVar6 = uVar5 * 2 + 1;
        local_70._16_8_ = (ulong)uVar5;
        new (local_80) dash3d::GridRect(0, 0, param_3->field_24, param_3->field_28);
        new (local_70) dash3d::GridRect(0, 0, 0, 0);
        this_00 = field_64;
        new (this_00) ServerConnectionWorkItem(iVar6);
        this_00->SetLevel(iVar6);
        if (0 < field_16464) {
            local_50 = (array<int, 2048ul>*)(field_64 + 16);
            local_48 = (array<int, 2048ul>*)&field_8272;
            uVar8 = 0;
            do {
                piVar1 = (int*)std::array<int, 2048ul>::operator[](local_50, uVar8);
                iVar6 = *piVar1;
                piVar1 = (int*)std::array<int, 2048ul>::operator[](local_48, uVar8);
                iVar4 = local_70._16_4_;
                uVar5 = param_3->field_28;
                fVar9 = (float)(*piVar1 - param_2) * param_4;
                new (this_00) std::__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>(
                    (int)((float)(iVar6 - param_1) * param_4) - iVar4);
                this_00->SetZ((int)((float)(int)uVar5 - fVar9) - iVar4);
                this_01 = (Heatmap*)this_00;
                this_00->Clip(local_80, local_70);
                PlotHeatmapSprite(this_01, local_58, param_3, (Rect*)local_70);
                uVar8 = uVar8 + 1;
            } while ((long)uVar8 < (long)((Heatmap*)this)->field_16464);
        }
        if (param_3->HeapBeginPtr() != 0) {
            uVar8 = 0;
            do {
                piVar1 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_3, uVar8);
                iVar6 = *piVar1;
                piVar1 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_3, uVar8);
                if (iVar6 == 0) {
                LAB_10000c1fb:
                    *piVar1 = -16777216;
                } else {
                    uVar5 = *piVar1 + 63;
                    if (uVar5 < 256) {
                        piVar1 =
                            (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_3, uVar8);
                        goto LAB_10000c1fb;
                    }
                    uVar7 = (ulong)((uVar5 >> 8) - 1);
                    if (512255 < uVar5) {
                        uVar7 = 1999;
                    }
                    puVar3 = (uint*)std::array<int, 2000ul>::operator[](uVar7);
                    uVar5 = *puVar3;
                    puVar3 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_3, uVar8);
                    *puVar3 = uVar5 | 4278190080;
                }
                uVar8 = uVar8 + 1;
                uVar7 = param_3->HeapBeginPtr();
            } while (uVar8 < uVar7);
        }
    }

    // 0x10000c280, 112 bytes, placed by class name
    // Heatmap::GetHeatmapSprite(int)
    void Heatmap::GetHeatmapSprite(int param_1) {
        hashtable_iterator_base* extraout_RDX;
        eastl local_50[16];
        hashtable_iterator_base local_40[20];
        int local_2c;

        local_2c = param_1;
        eastl::hashtable<int, eastl::pair<int const, graphics::Pix32>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, graphics::Pix32>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((int*)local_50);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator==(local_50, local_40, extraout_RDX)) {
            GenerateHeatmapSprite(this, local_2c);
        }
        eastl::hash_map<int, graphics::Pix32, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                        false>::operator[]((hash_map<int, graphics::Pix32, eastl::hash<int>, eastl::equal_to<int>,
                                                     eastl::allocator, false>*)&field_8,
                                           &local_2c);
    }

    // 0x10000c3d0, 416 bytes, placed by class name
    // Heatmap::PlotHeatmapSprite(graphics::Pix32 const&, graphics::Pix32&, jag::math::Rect<int> const&)
    void Heatmap::PlotHeatmapSprite(Pix32* param_1, Pix32* param_2, Rect* param_3) {
        uint uVar1;
        uint uVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int* piVar7;
        long lVar8;
        int local_34;

        iVar3 = param_3->GetPos();
        if ((iVar3 != 0) && (iVar3 = param_3->GetLevel(), iVar3 != 0)) {
            iVar3 = param_3->GetX();
            iVar5 = 0;
            iVar4 = 0;
            if (iVar3 == 0) {
                uVar1 = param_1->field_24;
                iVar4 = param_3->GetPos();
                iVar4 = uVar1 - iVar4;
            }
            iVar3 = param_3->GetZ();
            if (iVar3 == 0) {
                uVar1 = param_1->field_28;
                iVar5 = param_3->GetLevel();
                iVar5 = uVar1 - iVar5;
            }
            uVar1 = param_1->field_24;
            iVar3 = param_3->GetZ();
            uVar2 = param_2->field_24;
            local_34 = param_3->GetX();
            iVar6 = param_3->GetLevel();
            if (0 < iVar6) {
                local_34 = uVar2 * iVar3 + local_34;
                iVar4 = uVar1 * iVar5 + iVar4;
                iVar3 = 0;
                do {
                    iVar5 = param_3->GetPos();
                    if (0 < iVar5) {
                        lVar8 = 0;
                        do {
                            piVar7 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                 iVar4 + lVar8);
                            iVar5 = *piVar7;
                            piVar7 = (int*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_2,
                                                                                 local_34 + lVar8);
                            *piVar7 = *piVar7 + iVar5;
                            iVar5 = param_3->GetPos();
                            lVar8 = lVar8 + 1;
                            iVar6 = (int)lVar8;
                        } while (iVar6 < iVar5);
                        iVar4 = iVar4 + iVar6;
                        local_34 = local_34 + iVar6;
                    }
                    uVar1 = param_1->field_24;
                    iVar5 = param_3->GetPos();
                    iVar4 = (iVar4 + uVar1) - iVar5;
                    uVar1 = param_2->field_24;
                    iVar5 = param_3->GetPos();
                    local_34 = (local_34 + uVar1) - iVar5;
                    iVar3 = iVar3 + 1;
                    iVar5 = param_3->GetLevel();
                } while (iVar3 < iVar5);
            }
        }
    }

    // 0x10000c590, 304 bytes, placed by class name
    // Heatmap::SetupColourForCount()
    void Heatmap::SetupColourForCount() {
        bool bVar1;
        undefined4* puVar2;
        int iVar3;
        undefined4 uVar4;
        ulong uVar5;
        ulong uVar6;
        int iVar7;

        iVar7 = 240;
        uVar5 = 0;
        do {
            uVar4 = rs2lib::worldmap::HslUtils::GetRgb((double)((float)iVar7 * 0.0027777778), 0.9998999834060669,
                                                       (double)((float)(int)uVar5 * 0.0265625 + 0.075));
            puVar2 = (undefined4*)std::array<int, 2000ul>::operator[](uVar5);
            *puVar2 = uVar4;
            uVar5 = uVar5 + 1;
            iVar7 = iVar7 + -12;
        } while (uVar5 != 16);
        iVar7 = 48;
        uVar5 = 16;
        do {
            iVar3 = (int)uVar5;
            uVar4 = rs2lib::worldmap::HslUtils::GetRgb((double)((float)iVar7 * 0.0027777778), 0.9998999834060669, 0.5);
            if ((iVar3 < iVar3 * 2) && (iVar3 < 2000)) {
                uVar6 = (long)iVar3;
                do {
                    puVar2 = (undefined4*)std::array<int, 2000ul>::operator[](uVar6);
                    *puVar2 = uVar4;
                    uVar5 = uVar6 + 1;
                    if ((long)(iVar3 * 2) <= (long)uVar5)
                        break;
                    bVar1 = (long)uVar6 < 1999;
                    uVar6 = uVar5;
                } while (bVar1);
            }
            iVar7 = iVar7 + -8;
            if (1999 < (int)uVar5) {
                return;
            }
        } while (true);
    }

    // 0x10000c6c0, 496 bytes, placed by class name
    // Heatmap::GenerateHeatmapSprite(int)
    void Heatmap::GenerateHeatmapSprite(int param_1) {
        double* pdVar1;
        int* piVar2;
        uint uVar3;
        ulong uVar4;
        long lVar5;
        ulong uVar6;
        ulong uVar7;
        pair local_108[24];
        eastl local_f0[56];
        undefined1 local_b8[48];
        SharedArray<unsigned int> local_70[24];
        double local_58;
        Heatmap* local_50;
        double local_48;
        double local_40;
        uint local_38;
        int local_34;

        local_34 = param_1;
        ((local_b8 + 48))->GenerateKernel(0.0, (double)((float)param_1 / field_0), param_1);
        pdVar1 = (double*)Array<double, eastl::allocator>::operator[]((Array<double, eastl::allocator>*)(local_b8 + 48),
                                                                      (long)local_34);
        local_48 = *pdVar1;
        pdVar1 = (double*)Array<double, eastl::allocator>::operator[]((Array<double, eastl::allocator>*)(local_b8 + 48),
                                                                      (long)local_34);
        uVar3 = param_1 * 2 + 1;
        local_40 = *pdVar1;
        local_50 = this;
        SharedArray<unsigned int>::SharedArray(local_70, (ulong)(uVar3 * uVar3));
        local_38 = uVar3;
        if (0 < (int)uVar3) {
            local_40 = local_40 * local_48;
            uVar7 = (ulong)uVar3;
            lVar5 = 0;
            uVar4 = 0;
            do {
                uVar6 = 0;
                do {
                    pdVar1 = (double*)Array<double, eastl::allocator>::operator[](
                        (Array<double, eastl::allocator>*)(local_b8 + 48), uVar6);
                    local_48 = *pdVar1;
                    pdVar1 = (double*)Array<double, eastl::allocator>::operator[](
                        (Array<double, eastl::allocator>*)(local_b8 + 48), uVar4);
                    local_58 = *pdVar1;
                    piVar2 = (int*)SharedArray<unsigned int>::operator[](local_70, (long)((int)lVar5 + (int)uVar6));
                    *piVar2 = (int)((local_48 * 256.0 * local_58) / local_40);
                    uVar6 = uVar6 + 1;
                } while (uVar7 != uVar6);
                uVar4 = uVar4 + 1;
                lVar5 = lVar5 + uVar7;
            } while (uVar4 != uVar7);
        }
        new (local_b8) graphics::Pix32(local_70, local_38, local_38);
        eastl::make_pair<int&, graphics::Pix32>(local_f0, &local_34, (Pix32*)local_b8);
        eastl::hashtable<int, eastl::pair<int const, graphics::Pix32>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, graphics::Pix32>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true,
                         true>::emplace<eastl::pair<int, graphics::Pix32>>(local_108);
        local_f0->~pair();
        local_b8->~BlendedGround();
        local_70->~SharedArray();
        ((local_b8 + 48))->~Array();
    }

} // namespace jag::oldscape
