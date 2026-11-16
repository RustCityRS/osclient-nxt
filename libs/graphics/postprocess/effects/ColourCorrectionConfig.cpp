// libs/graphics/postprocess/effects/ColourCorrectionConfig.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.postprocess

#include "ColourCorrectionConfig.h"

namespace jag::postprocess {
    // 0x103bc1678, set at startup by ___cxx_global_var_init.39
    ImGuiStyleMod ColourCorrectionConfig::COLOURREMAP_DEFAULT[3] = {
        /* [0] */ ImGuiStyleMod(-1, 0.0),
        /* [1] */ ImGuiStyleMod(-1, 0.0),
        /* [2] */ ImGuiStyleMod(-1, 0.0),
    };

    // 0x1009adfb0
    void ColourCorrectionConfig::SetColourRemap(const std::array<ColourCorrectionConfig::Remapping, 3ul>& remappings,
                                                long long arg2, unsigned long long arg3) {
        array<ColourCorrectionConfig::Remapping, _3ul>* remappings1;
        uint64_t uVar1;
        bool bVar2;

        if (arg2 < 1) {
            field_128 = *(uint64_t*)(remappings + 16);
            uVar1 = *(uint64_t*)(remappings + 8);
            field_112 = *(uint64_t*)remappings;
            field_120 = uVar1;
            uVar1 = *(uint64_t*)(remappings + 8);
            *(uint64_t*)((long)&field_2 + 2) = *(uint64_t*)remappings;
            field_12 = uVar1;
            field_20 = *(uint64_t*)(remappings + 16);
        } else {
            remappings1 = (array<ColourCorrectionConfig::Remapping, _3ul>*)((long)&field_2 + 2);
            bVar2 = remappings1 == remappings;
            if (!bVar2) {
                field_96 = field_20;
                field_80 = *(uint64_t*)remappings1;
                field_88 = field_12;
                field_104 = arg3;
                uVar1 = *(uint64_t*)(remappings + 8);
                field_112 = *(uint64_t*)remappings;
                field_120 = uVar1;
                field_128 = *(uint64_t*)(remappings + 16);
                field_136 = arg2 + arg3;
                bVar2 = &field_80 == &COLOURREMAP_DEFAULT;
                field_144 = bVar2;
                bVar2 = &field_112 == &COLOURREMAP_DEFAULT;
                field_145 = bVar2;
            }
        }
    }

    // 0x1009ae0d0
    int ColourCorrectionConfig::CountColourMappings() const {
        array<ColourCorrectionConfig::Remapping, 3ul>* this_00 =
            (array<ColourCorrectionConfig::Remapping, 3ul>*)((long)&field_2 + 2);
        int* piVar2 = (int*)(*this_00)[2];
        int iVar1 = 3;
        if (*piVar2 < 0) {
            piVar2 = (int*)(*this_00)[1];
            iVar1 = (*piVar2 >> 31) + 2;
        }
        return iVar1;
    }

    // 0x1009ae130
    void ColourCorrectionConfig::DoTransition(unsigned long long arg1) {
        uint32_t uVar1;
        uint64_t uVar2;
        uint64_t* puVar3;
        long lVar4;
        int* piVar5;
        uint64_t* puVar6;
        int* piVar7;
        uint64_t* puVar8;
        Remapping* remapping1;
        uint32_t* puVar9;
        uint32_t* puVar10;
        unsigned long uVar11;
        unsigned long uVar12;
        unsigned long arg1_00;
        unsigned int uVar13;
        int iVar14;
        array<ColourCorrectionConfig::Remapping, 3ul>* this_00;
        uint8_t auVar15[16];
        array<ColourCorrectionConfig::Remapping, 6ul> local_80;
        array<ColourCorrectionConfig::Remapping, 3ul>* local_50;
        uint64_t local_48;
        ColourCorrectionConfig* local_40;
        float local_34;

        if (field_136 < arg1) {
            field_20 = field_128;
            uVar2 = field_120;
            *(uint64_t*)((long)&field_2 + 2) = field_112;
            field_12 = uVar2;
            return;
        }
        float local_38 = (float)(arg1 - field_104) / (float)(field_136 - field_104);
        if (field_145 == false) {
            if (field_144 == false) {
                local_34 = 1.0 - local_38;
                local_80 = std::array<ColourCorrectionConfig::Remapping, 6ul>();
                uVar11 = 0;
                uVar13 = 0;
                local_40 = this;
                do {
                    piVar5 = &field_80[uVar11];
                    if (-1 < *piVar5) {
                        new (&local_48) ImGuiStyleMod(*piVar5, (float)piVar5[1] * local_34);
                        uVar12 = (unsigned long)(int)uVar13;
                        uVar13 = uVar13 + 1;
                        puVar6 = &local_80[uVar12];
                        *puVar6 = local_48;
                    }
                    uVar11 = uVar11 + 1;
                } while (uVar11 != 3);
                local_50 = (array<ColourCorrectionConfig::Remapping, 3ul>*)&local_40->field_112;
                uVar11 = 0;
                do {
                    piVar5 = (int*)(*local_50)[uVar11];
                    if (-1 < *piVar5) {
                        local_34 = (float)piVar5[1] * local_38;
                        uVar12 = 0;
                        do {
                            piVar7 = &local_80[uVar12];
                            if (*piVar7 == *piVar5) {
                                piVar7[1] = (int)(local_34 + (float)piVar7[1]);
                                break;
                            }
                            if (uVar12 == 2) {
                                new (&local_48) ImGuiStyleMod(*piVar5, local_34);
                                arg1_00 = (unsigned long)(int)uVar13;
                                uVar13 = uVar13 + 1;
                                puVar6 = &local_80[arg1_00];
                                *puVar6 = local_48;
                            }
                            uVar12 = uVar12 + 1;
                        } while (uVar12 != 3);
                    }
                    uVar11 = uVar11 + 1;
                } while (uVar11 != 3);
                if ((int)uVar13 < 4) {
                    this_00 = (array<ColourCorrectionConfig::Remapping, 3ul>*)((long)&local_40->field_2 + 2);
                    if (0 < (int)uVar13) {
                        uVar11 = 0;
                        do {
                            puVar6 = &local_80[uVar11];
                            puVar8 = (uint64_t*)(*this_00)[uVar11];
                            *puVar8 = *puVar6;
                            uVar11 = uVar11 + 1;
                        } while (uVar13 != uVar11);
                    }
                    if ((int)uVar13 < 3) {
                        uVar11 = (unsigned long)(int)uVar13;
                        iVar14 = uVar13 - 3;
                        do {
                            puVar6 = (uint64_t*)(*this_00)[uVar11];
                            *puVar6 = 4294967295;
                            uVar11 = uVar11 + 1;
                            iVar14 = iVar14 + 1;
                        } while (iVar14 != 0);
                    }
                } else {
                    local_38 = 0.0;
                    uVar11 = 0;
                    do {
                        lVar4 = local_80[uVar11];
                        local_38 = local_38 + *(float*)(lVar4 + 4);
                        uVar11 = uVar11 + 1;
                    } while (uVar13 != uVar11);
                    remapping1 = (Remapping*)std::array<ColourCorrectionConfig::Remapping, 6ul>::begin();
                    auVar15 = std::array<ColourCorrectionConfig::Remapping, 6ul>::end();
                    eastl::insertion_sort<ColourCorrectionConfig::Remapping*, unsigned long long->DoTransition()::__2>(
                        remapping1, auVar15._0_8_, auVar15._8_8_);
                    local_34 = 0.0;
                    uVar11 = 0;
                    do {
                        lVar4 = local_80[uVar11];
                        local_34 = local_34 + *(float*)(lVar4 + 4);
                        uVar11 = uVar11 + 1;
                    } while (uVar11 != 3);
                    puVar3 = &local_40->field_2;
                    uVar11 = 0;
                    do {
                        puVar9 = &local_80[uVar11];
                        uVar1 = *puVar9;
                        puVar10 =
                            (uint32_t*)(*((array<ColourCorrectionConfig::Remapping, 3ul>*)((long)puVar3 + 2)))[uVar11];
                        *puVar10 = uVar1;
                        puVar10[1] = ((float)puVar9[1] * local_38) / local_34;
                        uVar11 = uVar11 + 1;
                    } while (uVar11 != 3);
                }
            } else {
                field_20 = field_128;
                uVar2 = field_120;
                *(uint64_t*)((long)&field_2 + 2) = field_112;
                field_12 = uVar2;
                uVar11 = 0;
                do {
                    lVar4 = (*((array<ColourCorrectionConfig::Remapping, 3ul>*)((long)&field_2 + 2)))[uVar11];
                    *(float*)(lVar4 + 4) = *(float*)(lVar4 + 4) * local_38;
                    uVar11 = uVar11 + 1;
                } while (uVar11 != 3);
            }
        } else {
            local_34 = 1.0 - local_38;
            field_20 = field_96;
            uVar2 = field_88;
            *(uint64_t*)((long)&field_2 + 2) = field_80;
            field_12 = uVar2;
            uVar11 = 0;
            do {
                lVar4 = (*((array<ColourCorrectionConfig::Remapping, 3ul>*)((long)&field_2 + 2)))[uVar11];
                *(float*)(lVar4 + 4) = *(float*)(lVar4 + 4) * local_34;
                uVar11 = uVar11 + 1;
            } while (uVar11 != 3);
        }
    }

    // 0x1009bcb00
    bool ColourCorrectionConfig::DoTransition(unsigned long long)::$_2::operator()(
        const ColourCorrectionConfig::Remapping& remapping1,
        const ColourCorrectionConfig::Remapping& remapping2) const {
        return remapping1.field_4 <= field_4 && field_4 != remapping1.field_4;
    }

} // namespace jag::postprocess
