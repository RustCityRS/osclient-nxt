// libs/graphics/postprocess/effects/ColourCorrectionConfig.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.postprocess

#include "ColourCorrectionConfig.h"

namespace jag::postprocess {
    // 0x103bc1678, 24 bytes, __common; set at startup by ___cxx_global_var_init.39
    ImGuiStyleMod ColourCorrectionConfig::COLOURREMAP_DEFAULT[3] = {
        /* [0] */ ImGuiStyleMod(-1, 0.0),
        /* [1] */ ImGuiStyleMod(-1, 0.0),
        /* [2] */ ImGuiStyleMod(-1, 0.0),
    };

    // 0x1009adfb0, 208 bytes, placed by class name and debug map
    // ColourCorrectionConfig::SetColourRemap(std::array<ColourCorrectionConfig::Remapping, 3ul> const&, long long, unsigned long long)
    /* ColourCorrectionConfig::SetColourRemap(std::array<ColourCorrectionConfig::Remapping,
   3ul> const&, long long, unsigned long long) */

    void ColourCorrectionConfig::SetColourRemap(array* param_1, longlong param_2, ulonglong param_3) {
        array* paVar1;
        undefined8 uVar2;
        bool bVar3;

        if (param_2 < 1) {
            field_128 = *(undefined8*)(param_1 + 16);
            uVar2 = *(undefined8*)(param_1 + 8);
            field_112 = *(undefined8*)param_1;
            field_120 = uVar2;
            uVar2 = *(undefined8*)(param_1 + 8);
            *(undefined8*)((long)&field_2 + 2) = *(undefined8*)param_1;
            field_12 = uVar2;
            field_20 = *(undefined8*)(param_1 + 16);
        } else {
            paVar1 = (array*)((long)&field_2 + 2);
            bVar3 = std::operator==(paVar1, param_1);
            if (!bVar3) {
                field_96 = field_20;
                field_80 = *(undefined8*)paVar1;
                field_88 = field_12;
                field_104 = param_3;
                uVar2 = *(undefined8*)(param_1 + 8);
                field_112 = *(undefined8*)param_1;
                field_120 = uVar2;
                field_128 = *(undefined8*)(param_1 + 16);
                field_136 = param_2 + param_3;
                bVar3 = std::operator==((array*)&field_80, (array*)&COLOURREMAP_DEFAULT);
                field_144 = bVar3;
                bVar3 = std::operator==((array*)&field_112, (array*)&COLOURREMAP_DEFAULT);
                field_145 = bVar3;
            }
        }
    }

    // 0x1009ae0d0, 80 bytes, placed by class name and debug map
    // ColourCorrectionConfig::CountColourMappings() const
    int ColourCorrectionConfig::CountColourMappings() {
        int iVar1;
        int* piVar2;
        array<ColourCorrectionConfig::Remapping, 3ul>* this_00;

        this_00 = (array<ColourCorrectionConfig::Remapping, 3ul>*)((long)&field_2 + 2);
        piVar2 = (int*)std::array<ColourCorrectionConfig::Remapping, 3ul>::operator[](this_00, 2);
        iVar1 = 3;
        if (*piVar2 < 0) {
            piVar2 = (int*)std::array<ColourCorrectionConfig::Remapping, 3ul>::operator[](this_00, 1);
            iVar1 = (*piVar2 >> 31) + 2;
        }
        return iVar1;
    }

    // 0x1009ae130, 1008 bytes, placed by class name and debug map
    // ColourCorrectionConfig::DoTransition(unsigned long long)
    void ColourCorrectionConfig::DoTransition(ulonglong param_1) {
        undefined4 uVar1;
        undefined6* puVar2;
        long lVar3;
        int* piVar4;
        undefined8* puVar5;
        int* piVar6;
        undefined8* puVar7;
        undefined8 uVar8;
        undefined8 uVar9;
        undefined4* puVar10;
        undefined4* puVar11;
        ulong uVar12;
        ulong uVar13;
        ulong uVar14;
        uint uVar15;
        int iVar16;
        array<ColourCorrectionConfig::Remapping, 3ul>* this_00;
        array<ColourCorrectionConfig::Remapping, 6ul> local_80[48];
        array<ColourCorrectionConfig::Remapping, 3ul>* local_50;
        undefined8 local_48;
        ColourCorrectionConfig* local_40;
        float local_38;
        float local_34;

        if (field_136 < param_1) {
            field_20 = field_128;
            uVar8 = field_120;
            *(undefined8*)((long)&field_2 + 2) = field_112;
            field_12 = uVar8;
            return;
        }
        local_38 = (float)(param_1 - field_104) / (float)(field_136 - field_104);
        if (field_145 == false) {
            if (field_144 == false) {
                local_34 = 1.0 - local_38;
                std::array<ColourCorrectionConfig::Remapping, 6ul>::array(local_80);
                uVar12 = 0;
                uVar15 = 0;
                local_40 = this;
                do {
                    piVar4 = (int*)std::array<ColourCorrectionConfig::Remapping, 3ul>::operator[](
                        (array<ColourCorrectionConfig::Remapping, 3ul>*)&field_80, uVar12);
                    if (-1 < *piVar4) {
                        new (&local_48) ImGuiStyleMod(*piVar4, (float)piVar4[1] * local_34);
                        uVar13 = (ulong)(int)uVar15;
                        uVar15 = uVar15 + 1;
                        puVar5 = (undefined8*)std::array<ColourCorrectionConfig::Remapping, 6ul>::operator[](local_80,
                                                                                                             uVar13);
                        *puVar5 = local_48;
                    }
                    uVar12 = uVar12 + 1;
                } while (uVar12 != 3);
                local_50 = (array<ColourCorrectionConfig::Remapping, 3ul>*)&local_40->field_112;
                uVar12 = 0;
                do {
                    piVar4 = (int*)std::array<ColourCorrectionConfig::Remapping, 3ul>::operator[](local_50, uVar12);
                    if (-1 < *piVar4) {
                        local_34 = (float)piVar4[1] * local_38;
                        uVar13 = 0;
                        do {
                            piVar6 =
                                (int*)std::array<ColourCorrectionConfig::Remapping, 6ul>::operator[](local_80, uVar13);
                            if (*piVar6 == *piVar4) {
                                piVar6[1] = (int)(local_34 + (float)piVar6[1]);
                                break;
                            }
                            if (uVar13 == 2) {
                                new (&local_48) ImGuiStyleMod(*piVar4, local_34);
                                uVar14 = (ulong)(int)uVar15;
                                uVar15 = uVar15 + 1;
                                puVar5 = (undefined8*)std::array<ColourCorrectionConfig::Remapping, 6ul>::operator[](
                                    local_80, uVar14);
                                *puVar5 = local_48;
                            }
                            uVar13 = uVar13 + 1;
                        } while (uVar13 != 3);
                    }
                    uVar12 = uVar12 + 1;
                } while (uVar12 != 3);
                if ((int)uVar15 < 4) {
                    this_00 = (array<ColourCorrectionConfig::Remapping, 3ul>*)((long)&local_40->field_2 + 2);
                    if (0 < (int)uVar15) {
                        uVar12 = 0;
                        do {
                            puVar5 = (undefined8*)std::array<ColourCorrectionConfig::Remapping, 6ul>::operator[](
                                local_80, uVar12);
                            puVar7 = (undefined8*)std::array<ColourCorrectionConfig::Remapping, 3ul>::operator[](
                                this_00, uVar12);
                            *puVar7 = *puVar5;
                            uVar12 = uVar12 + 1;
                        } while (uVar15 != uVar12);
                    }
                    if ((int)uVar15 < 3) {
                        uVar12 = (ulong)(int)uVar15;
                        iVar16 = uVar15 - 3;
                        do {
                            puVar5 = (undefined8*)std::array<ColourCorrectionConfig::Remapping, 3ul>::operator[](
                                this_00, uVar12);
                            *puVar5 = 4294967295;
                            uVar12 = uVar12 + 1;
                            iVar16 = iVar16 + 1;
                        } while (iVar16 != 0);
                    }
                } else {
                    local_38 = 0.0;
                    uVar12 = 0;
                    do {
                        lVar3 = std::array<ColourCorrectionConfig::Remapping, 6ul>::operator[](local_80, uVar12);
                        local_38 = local_38 + *(float*)(lVar3 + 4);
                        uVar12 = uVar12 + 1;
                    } while (uVar15 != uVar12);
                    uVar8 = std::array<ColourCorrectionConfig::Remapping, 6ul>::begin(local_80);
                    uVar9 = std::array<ColourCorrectionConfig::Remapping, 6ul>::end(local_80);
                    eastl::insertion_sort<ColourCorrectionConfig::Remapping*, unsigned long long->DoTransition()::__2>(
                        uVar8, uVar9);
                    local_34 = 0.0;
                    uVar12 = 0;
                    do {
                        lVar3 = std::array<ColourCorrectionConfig::Remapping, 6ul>::operator[](local_80, uVar12);
                        local_34 = local_34 + *(float*)(lVar3 + 4);
                        uVar12 = uVar12 + 1;
                    } while (uVar12 != 3);
                    puVar2 = &local_40->field_2;
                    uVar12 = 0;
                    do {
                        puVar10 = (undefined4*)std::array<ColourCorrectionConfig::Remapping, 6ul>::operator[](local_80,
                                                                                                              uVar12);
                        uVar1 = *puVar10;
                        puVar11 = (undefined4*)std::array<ColourCorrectionConfig::Remapping, 3ul>::operator[](
                            (array<ColourCorrectionConfig::Remapping, 3ul>*)((long)puVar2 + 2), uVar12);
                        *puVar11 = uVar1;
                        puVar11[1] = ((float)puVar10[1] * local_38) / local_34;
                        uVar12 = uVar12 + 1;
                    } while (uVar12 != 3);
                }
            } else {
                field_20 = field_128;
                uVar8 = field_120;
                *(undefined8*)((long)&field_2 + 2) = field_112;
                field_12 = uVar8;
                uVar12 = 0;
                do {
                    lVar3 = std::array<ColourCorrectionConfig::Remapping, 3ul>::operator[](
                        (array<ColourCorrectionConfig::Remapping, 3ul>*)((long)&field_2 + 2), uVar12);
                    *(float*)(lVar3 + 4) = *(float*)(lVar3 + 4) * local_38;
                    uVar12 = uVar12 + 1;
                } while (uVar12 != 3);
            }
        } else {
            local_34 = 1.0 - local_38;
            field_20 = field_96;
            uVar8 = field_88;
            *(undefined8*)((long)&field_2 + 2) = field_80;
            field_12 = uVar8;
            uVar12 = 0;
            do {
                lVar3 = std::array<ColourCorrectionConfig::Remapping, 3ul>::operator[](
                    (array<ColourCorrectionConfig::Remapping, 3ul>*)((long)&field_2 + 2), uVar12);
                *(float*)(lVar3 + 4) = *(float*)(lVar3 + 4) * local_34;
                uVar12 = uVar12 + 1;
            } while (uVar12 != 3);
        }
    }

    // 0x1009bcb00, 32 bytes, placed by class name
    // ColourCorrectionConfig::DoTransition(unsigned long long)::$_2::operator()(ColourCorrectionConfig::Remapping const&, ColourCorrectionConfig::Remapping const&) const
    /* ColourCorrectionConfig::DoTransition(unsigned long
   long)::$_2::TEMPNAMEPLACEHOLDERVALUE(ColourCorrectionConfig::Remapping const&,
   ColourCorrectionConfig::Remapping const&) const */

    bool ColourCorrectionConfig::DoTransition(unsigned long long)::$_2::operator()(Remapping* param_1,
                                                                                   Remapping* param_2) {
        return param_2->field_4 <= param_1->field_4 && param_1->field_4 != param_2->field_4;
    }

    // 0x1009be480, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.39
    void ___cxx_global_var_init_39() {
        new (&ColourCorrectionConfig::COLOURREMAP_DEFAULT) ImGuiStyleMod(-1, 0.0);
        new (&DAT_103bc1680) ImGuiStyleMod(-1, 0.0);
        new (&DAT_103bc1688) ImGuiStyleMod(-1, 0.0);
    }

} // namespace jag::postprocess
