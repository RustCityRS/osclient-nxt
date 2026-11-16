// projects/osclient/heatmap/Heatmap.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "Heatmap.h"

namespace jag::oldscape {
    // 0x100f886f8
    uint8_t Heatmap::COLOUR_FOR_COUNT[8000];

    // 0x10000bff0
    void Heatmap::AddDataPoint(int arg1, int arg2) {
        int* piVar1;

        if ((long)field_16464 < 2048) {
            piVar1 = (int*)(*((field_64 + 16)))[(long)field_16464];
            *piVar1 = arg1;
            piVar1 = &field_8272[(long)field_16464];
            *piVar1 = arg2;
            field_16464 = field_16464 + 1;
        }
    }

    // 0x10000c060
    void Heatmap::Render(int arg1, int arg2, graphics::Pix32& pix32, float arg4) {
        int* piVar1;
        unsigned long uVar3;
        unsigned int* puVar4;
        int iVar5;
        Heatmap* this_01;
        array<int, 2000ul>* this_02;
        unsigned long uVar8;
        float fVar9;
        uint8_t local_80[16];
        uint8_t local_70[24];
        array<int, 2048ul>* local_50;
        array<int, 2048ul>* local_48;

        unsigned int uVar6 = (unsigned int)(arg4 * 6.0 * field_0);
        auto local_58 = GetHeatmapSprite(uVar6);
        int iVar7 = uVar6 * 2 + 1;
        local_70._16_8_ = (unsigned long)uVar6;
        new (local_80) dash3d::GridRect(0, 0, pix32.field_24, pix32.field_28);
        new (local_70) dash3d::GridRect(0, 0, 0, 0);
        uint8_t* this_00 = field_64;
        new (this_00) ServerConnectionWorkItem(iVar7);
        this_00->SetLevel(iVar7);
        if (0 < field_16464) {
            local_50 = (array<int, 2048ul>*)(field_64 + 16);
            local_48 = (array<int, 2048ul>*)&field_8272;
            uVar8 = 0;
            do {
                piVar1 = (int*)(*local_50)[uVar8];
                iVar7 = *piVar1;
                piVar1 = (int*)(*local_48)[uVar8];
                iVar5 = local_70._16_4_;
                uVar6 = pix32.field_28;
                fVar9 = (float)(*piVar1 - arg2) * arg4;
                new (this_00) std::__cxx_atomic_base_impl((int)((float)(iVar7 - arg1) * arg4) - iVar5);
                this_00->SetZ((int)((float)(int)uVar6 - fVar9) - iVar5);
                this_01 = (Heatmap*)this_00;
                this_00->Clip(*local_80, *local_70);
                PlotHeatmapSprite(this_01, local_58, pix32, (Rect<int>*)local_70);
                uVar8 = uVar8 + 1;
            } while ((long)uVar8 < (long)field_16464);
        }
        if (pix32.HeapBeginPtr() != 0) {
            uVar8 = 0;
            do {
                piVar1 = &pix32[uVar8];
                iVar7 = *piVar1;
                uVar3 = uVar8;
                piVar1 = &pix32[uVar8];
                if (iVar7 == 0) {
                LAB_10000c1fb:
                    *piVar1 = -16777216;
                } else {
                    uVar6 = *piVar1 + 63;
                    if (uVar6 < 256) {
                        piVar1 = &pix32[uVar8];
                        goto LAB_10000c1fb;
                    }
                    this_02 = (array<int, 2000ul>*)(unsigned long)((uVar6 >> 8) - 1);
                    if (512255 < uVar6) {
                        this_02 = (array<int, 2000ul>*)1999;
                    }
                    puVar4 = (unsigned int*)(*this_02)[uVar3];
                    uVar6 = *puVar4;
                    puVar4 = &pix32[uVar8];
                    *puVar4 = uVar6 | 4278190080;
                }
                uVar8 = uVar8 + 1;
                uVar3 = pix32.HeapBeginPtr();
            } while (uVar8 < uVar3);
        }
    }

    // 0x10000c280
    void Heatmap::GetHeatmapSprite(int arg1) {
        uint8_t* this_00 = &field_8;
        auto local_50 = this_00->find(arg1);
        auto local_40 = this_00->end();
        if (local_50 == local_40 != '\0') {
            GenerateHeatmapSprite(arg1);
        }
        (*this_00)[arg1];
    }

    // 0x10000c3d0
    void Heatmap::PlotHeatmapSprite(const graphics::Pix32& pix321, graphics::Pix32& pix322,
                                    const jag::math::Rect<int>& rect) {
        unsigned int uVar1;
        unsigned int uVar2;
        int iVar4;
        int iVar5;
        int iVar6;
        int* piVar7;
        long lVar8;
        int local_34;

        int iVar3 = rect.GetPos();
        if ((iVar3 != 0) && (iVar3 = rect.GetLevel(), iVar3 != 0)) {
            iVar3 = rect.GetX();
            iVar5 = 0;
            iVar4 = 0;
            if (iVar3 == 0) {
                uVar1 = pix321.field_24;
                iVar4 = rect.GetPos();
                iVar4 = uVar1 - iVar4;
            }
            iVar3 = rect.GetZ();
            if (iVar3 == 0) {
                uVar1 = pix321.field_28;
                iVar5 = rect.GetLevel();
                iVar5 = uVar1 - iVar5;
            }
            uVar1 = pix321.field_24;
            iVar3 = rect.GetZ();
            uVar2 = pix322.field_24;
            local_34 = rect.GetX();
            iVar6 = rect.GetLevel();
            if (0 < iVar6) {
                local_34 = uVar2 * iVar3 + local_34;
                iVar4 = uVar1 * iVar5 + iVar4;
                iVar3 = 0;
                do {
                    iVar5 = rect.GetPos();
                    if (0 < iVar5) {
                        lVar8 = 0;
                        do {
                            piVar7 = &pix321[iVar4 + lVar8];
                            iVar5 = *piVar7;
                            piVar7 = &pix322[local_34 + lVar8];
                            *piVar7 = *piVar7 + iVar5;
                            iVar5 = rect.GetPos();
                            lVar8 = lVar8 + 1;
                            iVar6 = (int)lVar8;
                        } while (iVar6 < iVar5);
                        iVar4 = iVar4 + iVar6;
                        local_34 = local_34 + iVar6;
                    }
                    uVar1 = pix321.field_24;
                    iVar5 = rect.GetPos();
                    iVar4 = (iVar4 + uVar1) - iVar5;
                    uVar1 = pix322.field_24;
                    iVar5 = rect.GetPos();
                    local_34 = (local_34 + uVar1) - iVar5;
                    iVar3 = iVar3 + 1;
                    iVar5 = rect.GetLevel();
                } while (iVar3 < iVar5);
            }
        }
    }

    // 0x10000c590
    void Heatmap::SetupColourForCount() {
        bool bVar1;
        uint32_t* puVar2;
        int iVar3;
        uint32_t uVar4;
        array<int, 2000ul>* this_00;
        unsigned long in_RSI;

        int iVar6 = 240;
        array<int, 2000ul>* paVar5 = nullptr;
        do {
            uVar4 = rs2lib::worldmap::HslUtils::GetRgb((double)((float)iVar6 * 0.0027777778f), 0.9999f,
                                                       (double)((float)(int)paVar5 * 0.0265625 + 0.075));
            puVar2 = (uint32_t*)(*paVar5)[in_RSI];
            *puVar2 = uVar4;
            paVar5 = paVar5 + 1;
            iVar6 = iVar6 - 12;
        } while (paVar5 != (array<int, 2000ul>*)16);
        iVar6 = 48;
        paVar5 = (array<int, 2000ul>*)16;
        do {
            iVar3 = (int)paVar5;
            uVar4 = rs2lib::worldmap::HslUtils::GetRgb((double)((float)iVar6 * 0.0027777778f), 0.9999f, 0.5);
            if ((iVar3 < iVar3 * 2) && (iVar3 < 2000)) {
                this_00 = (array<int, 2000ul>*)(long)iVar3;
                do {
                    puVar2 = (uint32_t*)(*this_00)[in_RSI];
                    *puVar2 = uVar4;
                    paVar5 = this_00 + 1;
                    if ((long)(iVar3 * 2) <= (long)paVar5)
                        break;
                    bVar1 = (long)this_00 < 1999;
                    this_00 = paVar5;
                } while (bVar1);
            }
            iVar6 = iVar6 - 8;
            if (1999 < (int)paVar5) {
                return;
            }
        } while (true);
    }

    // 0x10000c6c0
    void Heatmap::GenerateHeatmapSprite(int arg1) {
        int* piVar2;
        unsigned long arg1_00;
        long lVar4;
        unsigned long arg1_01;
        unsigned long uVar5;
        uint8_t local_b8[48];
        double local_58;

        ((local_b8 + 48))->GenerateKernel(0.0, (double)((float)arg1 / field_0), arg1);
        double* pdVar1 = (double*)(*((local_b8 + 48)))[(long)arg1];
        double local_48 = *pdVar1;
        pdVar1 = (double*)(*((local_b8 + 48)))[(long)arg1];
        unsigned int uVar3 = arg1 * 2 + 1;
        double local_40 = *pdVar1;
        SharedArray<unsigned int> local_70((unsigned long)(uVar3 * uVar3));
        unsigned int local_38 = uVar3;
        if (0 < (int)uVar3) {
            local_40 = local_40 * local_48;
            uVar5 = (unsigned long)uVar3;
            lVar4 = 0;
            arg1_00 = 0;
            do {
                arg1_01 = 0;
                do {
                    pdVar1 = (double*)(*((local_b8 + 48)))[arg1_01];
                    local_48 = *pdVar1;
                    pdVar1 = (double*)(*((local_b8 + 48)))[arg1_00];
                    local_58 = *pdVar1;
                    piVar2 = &local_70[(long)((int)lVar4 + (int)arg1_01)];
                    *piVar2 = (int)((local_48 * 256.0 * local_58) / local_40);
                    arg1_01 = arg1_01 + 1;
                } while (uVar5 != arg1_01);
                arg1_00 = arg1_00 + 1;
                lVar4 = lVar4 + uVar5;
            } while (arg1_00 != uVar5);
        }
        new (local_b8) graphics::Pix32(local_70, local_38, local_38);
        auto local_f0 = eastl::make_pair<int&, graphics::Pix32>(arg1, *local_b8);
        auto local_108 = field_8.emplace<eastl::pair<int, graphics::Pix32>>(local_f0);
        ((local_b8 + 48))->~Array();
    }

} // namespace jag::oldscape
