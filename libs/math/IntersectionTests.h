// libs/math/IntersectionTests.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::math {
    // 0x1007de0f0, 1024 bytes, inline, placed by debug map only (low confidence)
    // bool RectLineIntersection<float>(Rect<float> const&, Point<float> const&, Point<float> const&)
    bool RectLineIntersection<float>(Rect* param_1, Point* param_2, Point* param_3) {
        bool bVar1;
        bool bVar2;
        float fVar3;
        float local_ac;
        float local_a8;
        float local_a4;
        float local_a0;
        float local_9c;
        float local_98;
        float local_94;
        float local_90;
        float local_8c;
        float local_88;
        float local_84;
        float local_80;
        float local_7c;
        float local_78;
        float local_74;
        float local_70;
        float local_6c;
        float local_68;
        float local_64;
        float local_60;
        float local_5c;
        float local_58;
        float local_54;
        float local_50;
        float local_4c;
        float local_48;
        float local_44;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;
        float local_30;
        float local_2c;

        local_2c = (float)param_2->GetOverbright();
        fVar3 = (float)param_1->GetOverbright();
        if (fVar3 <= local_2c) {
        LAB_1007de14d:
            local_2c = (float)param_2->GetOverbright();
            fVar3 = (float)param_1->MaxU();
            if (fVar3 < local_2c) {
                local_2c = (float)param_3->GetOverbright();
                fVar3 = (float)param_1->MaxU();
                if (fVar3 < local_2c)
                    goto LAB_1007de207;
            }
            local_2c = (float)param_2->GetAlpha();
            fVar3 = (float)param_1->GetAlpha();
            if (local_2c < fVar3) {
                local_2c = (float)param_3->GetAlpha();
                fVar3 = (float)param_1->GetAlpha();
                if (local_2c < fVar3)
                    goto LAB_1007de207;
            }
            local_2c = (float)param_2->GetAlpha();
            fVar3 = (float)param_1->MaxV();
            if (fVar3 < local_2c) {
                local_2c = (float)param_3->GetAlpha();
                fVar3 = (float)param_1->MaxV();
                if (fVar3 < local_2c)
                    goto LAB_1007de207;
            }
            bVar1 = Rect<float>::IsInside<float>((Rect<float>*)param_1, param_2);
            bVar2 = true;
            if (!bVar1) {
                bVar1 = Rect<float>::IsInside<float>((Rect<float>*)param_1, param_3);
                if (!bVar1) {
                    local_ac = (float)param_2->GetOverbright();
                    local_a8 = (float)param_2->GetAlpha();
                    local_a4 = (float)param_3->GetOverbright();
                    local_a0 = (float)param_3->GetAlpha();
                    local_9c = (float)param_1->GetOverbright();
                    local_98 = (float)param_1->GetAlpha();
                    local_94 = (float)param_1->GetOverbright();
                    local_90 = (float)param_1->MaxV();
                    bVar1 = LineLineIntersection<float>(&local_ac, &local_a8, &local_a4, &local_a0, &local_9c,
                                                        &local_98, &local_94, &local_90);
                    bVar2 = true;
                    if (!bVar1) {
                        local_8c = (float)param_2->GetOverbright();
                        local_88 = (float)param_2->GetAlpha();
                        local_84 = (float)param_3->GetOverbright();
                        local_80 = (float)param_3->GetAlpha();
                        local_7c = (float)param_1->MaxU();
                        local_78 = (float)param_1->GetAlpha();
                        local_74 = (float)param_1->MaxU();
                        local_70 = (float)param_1->MaxV();
                        bVar1 = LineLineIntersection<float>(&local_8c, &local_88, &local_84, &local_80, &local_7c,
                                                            &local_78, &local_74, &local_70);
                        if (!bVar1) {
                            local_6c = (float)param_2->GetOverbright();
                            local_68 = (float)param_2->GetAlpha();
                            local_64 = (float)param_3->GetOverbright();
                            local_60 = (float)param_3->GetAlpha();
                            local_5c = (float)param_1->GetOverbright();
                            local_58 = (float)param_1->GetAlpha();
                            local_54 = (float)param_1->MaxU();
                            local_50 = (float)param_1->GetAlpha();
                            bVar1 = LineLineIntersection<float>(&local_6c, &local_68, &local_64, &local_60, &local_5c,
                                                                &local_58, &local_54, &local_50);
                            if (!bVar1) {
                                local_4c = (float)param_2->GetOverbright();
                                local_48 = (float)param_2->GetAlpha();
                                local_44 = (float)param_3->GetOverbright();
                                local_40 = (float)param_3->GetAlpha();
                                local_3c = (float)param_1->GetOverbright();
                                local_38 = (float)param_1->MaxV();
                                local_34 = (float)param_1->MaxU();
                                local_30 = (float)param_1->MaxV();
                                bVar2 = LineLineIntersection<float>(&local_4c, &local_48, &local_44, &local_40,
                                                                    &local_3c, &local_38, &local_34, &local_30);
                            }
                        }
                    }
                }
            }
        } else {
            local_2c = (float)param_3->GetOverbright();
            fVar3 = (float)param_1->GetOverbright();
            if (fVar3 <= local_2c)
                goto LAB_1007de14d;
        LAB_1007de207:
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x1007de520, 160 bytes, inline, placed by debug map only (low confidence)
    // bool TrianglePointIntersectionFast<float>(float const&, float const&, float const&, float const&, float const&, float const&, float const&, float const&, float const&)
    bool TrianglePointIntersectionFast<float>(float* param_1, float* param_2, float* param_3, float* param_4,
                                              float* param_5, float* param_6, float* param_7, float* param_8,
                                              float* param_9) {
        float fVar1;
        float fVar2;

        fVar1 = *param_9;
        fVar2 = fVar1 + *param_1;
        if ((((*param_3 <= fVar2) || (*param_5 <= fVar2)) || (*param_7 <= fVar2)) &&
            (((fVar2 = *param_1 - fVar1, fVar2 <= *param_3 || (fVar2 <= *param_5)) || (fVar2 <= *param_7)))) {
            fVar2 = *param_2 + fVar1;
            if (((*param_4 <= fVar2) || (*param_6 <= fVar2)) || (*param_8 <= fVar2)) {
                fVar1 = *param_2 - fVar1;
                return fVar1 <= *param_8 || (fVar1 <= *param_6 || fVar1 <= *param_4);
            }
        }
        return false;
    }

    // 0x1007de5c0, 224 bytes, inline, placed by debug map only (low confidence)
    // bool TrianglePointIntersection<float>(float const&, float const&, float const&, float const&, float const&, float const&, float const&, float const&)
    bool TrianglePointIntersection<float>(float* param_1, float* param_2, float* param_3, float* param_4,
                                          float* param_5, float* param_6, float* param_7, float* param_8) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;

        fVar7 = *param_5;
        fVar1 = *param_3;
        fVar2 = *param_7;
        fVar9 = *param_6;
        fVar3 = *param_4;
        fVar4 = *param_1;
        fVar5 = *param_2;
        fVar8 = (fVar5 - fVar9) * (fVar7 - fVar1) + (fVar7 - fVar4) * (fVar9 - fVar3);
        fVar6 = *param_8;
        fVar9 = (fVar5 - fVar6) * (fVar2 - fVar7) + (fVar4 - fVar2) * (fVar9 - fVar6);
        fVar7 = (fVar5 - fVar3) * (fVar1 - fVar2) + (fVar4 - fVar1) * (fVar6 - fVar3);
        if (((0.0 < fVar8) && (0.0 < fVar9)) && (0.0 < fVar7)) {
            return true;
        }
        return fVar7 < 0.0 && (fVar9 < 0.0 && fVar8 < 0.0);
    }

    // 0x1007de6a0, 432 bytes, inline, placed by debug map only (low confidence)
    // bool TriangleLineIntersection<float>(float const&, float const&, float const&, float const&, float const&, float const&, float const&, float const&, float const&, float const&)
    bool TriangleLineIntersection<float>(float* param_1, float* param_2, float* param_3, float* param_4, float* param_5,
                                         float* param_6, float* param_7, float* param_8, float* param_9,
                                         float* param_10) {
        float fVar1;
        float fVar2;
        float fVar3;
        bool bVar4;
        float* pfVar5;

        pfVar5 = std::min<float>(param_7, param_9);
        pfVar5 = std::min<float>(param_5, pfVar5);
        fVar1 = *pfVar5;
        pfVar5 = std::min<float>(param_8, param_10);
        pfVar5 = std::min<float>(param_6, pfVar5);
        fVar2 = *pfVar5;
        pfVar5 = std::max<float>(param_7, param_9);
        pfVar5 = std::max<float>(param_5, pfVar5);
        fVar3 = *pfVar5;
        pfVar5 = std::max<float>(param_8, param_10);
        pfVar5 = std::max<float>(param_6, pfVar5);
        if (((fVar1 <= *param_1) || (fVar1 <= *param_3)) && ((*param_1 <= fVar3 || (*param_3 <= fVar3)))) {
            if (((fVar2 <= *param_2) || (fVar2 <= *param_4)) && ((*param_2 <= *pfVar5 || (*param_4 <= *pfVar5)))) {
                bVar4 =
                    LineLineIntersection<float>(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
                if (bVar4) {
                    return true;
                }
                bVar4 = LineLineIntersection<float>(param_1, param_2, param_3, param_4, param_7, param_8, param_9,
                                                    param_10);
                if (bVar4) {
                    return true;
                }
                bVar4 = LineLineIntersection<float>(param_1, param_2, param_3, param_4, param_5, param_6, param_9,
                                                    param_10);
                return bVar4;
            }
        }
        return false;
    }

} // namespace jag::math
