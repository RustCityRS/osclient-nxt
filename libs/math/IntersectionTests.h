// libs/math/IntersectionTests.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::math {
    // 0x1007de0f0
    bool RectLineIntersection<float>(const Rect<float>& rect, const Point<float>& point1, const Point<float>& point2) {
        bool bVar1;
        bool bVar2;
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

        float local_2c = (float)point1.GetOverbright();
        float fVar3 = (float)rect.GetOverbright();
        if (fVar3 <= local_2c) {
        LAB_1007de14d:
            local_2c = (float)point1.GetOverbright();
            fVar3 = (float)rect.MaxU();
            if (fVar3 < local_2c) {
                local_2c = (float)point2.GetOverbright();
                fVar3 = (float)rect.MaxU();
                if (fVar3 < local_2c)
                    goto LAB_1007de207;
            }
            local_2c = (float)point1.GetAlpha();
            fVar3 = (float)rect.GetAlpha();
            if (local_2c < fVar3) {
                local_2c = (float)point2.GetAlpha();
                fVar3 = (float)rect.GetAlpha();
                if (local_2c < fVar3)
                    goto LAB_1007de207;
            }
            local_2c = (float)point1.GetAlpha();
            fVar3 = (float)rect.MaxV();
            if (fVar3 < local_2c) {
                local_2c = (float)point2.GetAlpha();
                fVar3 = (float)rect.MaxV();
                if (fVar3 < local_2c)
                    goto LAB_1007de207;
            }
            bVar1 = rect.IsInside<float>(point1);
            bVar2 = true;
            if (!bVar1) {
                bVar1 = rect.IsInside<float>(point2);
                if (!bVar1) {
                    local_ac = (float)point1.GetOverbright();
                    local_a8 = (float)point1.GetAlpha();
                    local_a4 = (float)point2.GetOverbright();
                    local_a0 = (float)point2.GetAlpha();
                    local_9c = (float)rect.GetOverbright();
                    local_98 = (float)rect.GetAlpha();
                    local_94 = (float)rect.GetOverbright();
                    local_90 = (float)rect.MaxV();
                    bVar1 = LineLineIntersection<float>(&local_ac, &local_a8, &local_a4, &local_a0, &local_9c,
                                                        &local_98, &local_94, &local_90);
                    bVar2 = true;
                    if (!bVar1) {
                        local_8c = (float)point1.GetOverbright();
                        local_88 = (float)point1.GetAlpha();
                        local_84 = (float)point2.GetOverbright();
                        local_80 = (float)point2.GetAlpha();
                        local_7c = (float)rect.MaxU();
                        local_78 = (float)rect.GetAlpha();
                        local_74 = (float)rect.MaxU();
                        local_70 = (float)rect.MaxV();
                        bVar1 = LineLineIntersection<float>(&local_8c, &local_88, &local_84, &local_80, &local_7c,
                                                            &local_78, &local_74, &local_70);
                        if (!bVar1) {
                            local_6c = (float)point1.GetOverbright();
                            local_68 = (float)point1.GetAlpha();
                            local_64 = (float)point2.GetOverbright();
                            local_60 = (float)point2.GetAlpha();
                            local_5c = (float)rect.GetOverbright();
                            local_58 = (float)rect.GetAlpha();
                            local_54 = (float)rect.MaxU();
                            local_50 = (float)rect.GetAlpha();
                            bVar1 = LineLineIntersection<float>(&local_6c, &local_68, &local_64, &local_60, &local_5c,
                                                                &local_58, &local_54, &local_50);
                            if (!bVar1) {
                                local_4c = (float)point1.GetOverbright();
                                local_48 = (float)point1.GetAlpha();
                                local_44 = (float)point2.GetOverbright();
                                local_40 = (float)point2.GetAlpha();
                                local_3c = (float)rect.GetOverbright();
                                local_38 = (float)rect.MaxV();
                                local_34 = (float)rect.MaxU();
                                local_30 = (float)rect.MaxV();
                                bVar2 = LineLineIntersection<float>(&local_4c, &local_48, &local_44, &local_40,
                                                                    &local_3c, &local_38, &local_34, &local_30);
                            }
                        }
                    }
                }
            }
        } else {
            local_2c = (float)point2.GetOverbright();
            fVar3 = (float)rect.GetOverbright();
            if (fVar3 <= local_2c)
                goto LAB_1007de14d;
        LAB_1007de207:
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x1007de520
    bool TrianglePointIntersectionFast<float>(const float& arg1, const float& arg2, const float& arg3,
                                              const float& arg4, const float& arg5, const float& arg6,
                                              const float& arg7, const float& arg8, const float& arg9) {
        float fVar1 = arg9;
        float fVar2 = fVar1 + arg1;
        if ((((arg3 <= fVar2) || (arg5 <= fVar2)) || (arg7 <= fVar2)) &&
            (((fVar2 = arg1 - fVar1, fVar2 <= arg3 || (fVar2 <= arg5)) || (fVar2 <= arg7)))) {
            fVar2 = arg2 + fVar1;
            if (((arg4 <= fVar2) || (arg6 <= fVar2)) || (arg8 <= fVar2)) {
                fVar1 = arg2 - fVar1;
                return fVar1 <= arg8 || (fVar1 <= arg6 || fVar1 <= arg4);
            }
        }
        return false;
    }

    // 0x1007de5c0
    bool TrianglePointIntersection<float>(const float& arg1, const float& arg2, const float& arg3, const float& arg4,
                                          const float& arg5, const float& arg6, const float& arg7, const float& arg8) {
        float fVar7 = arg5;
        float fVar9 = arg6;
        float fVar8 = ((float)arg2 - fVar9) * (fVar7 - (float)arg3) + (fVar7 - (float)arg1) * (fVar9 - (float)arg4);
        fVar9 =
            ((float)arg2 - (float)arg8) * ((float)arg7 - fVar7) + ((float)arg1 - (float)arg7) * (fVar9 - (float)arg8);
        fVar7 = ((float)arg2 - (float)arg4) * ((float)arg3 - (float)arg7) +
                ((float)arg1 - (float)arg3) * ((float)arg8 - (float)arg4);
        if (((0.0 < fVar8) && (0.0 < fVar9)) && (0.0 < fVar7)) {
            return true;
        }
        return fVar7 < 0.0 && (fVar9 < 0.0 && fVar8 < 0.0);
    }

    // 0x1007de6a0
    bool TriangleLineIntersection<float>(const float& arg1, const float& arg2, const float& arg3, const float& arg4,
                                         const float& arg5, const float& arg6, const float& arg7, const float& arg8,
                                         const float& arg9, const float& arg10) {
        bool bVar4;

        auto pfVar5 = std::min<float>(arg7, arg9);
        pfVar5 = std::min<float>(arg5, *pfVar5);
        float fVar1 = *pfVar5;
        pfVar5 = std::min<float>(arg8, arg10);
        pfVar5 = std::min<float>(arg6, *pfVar5);
        float fVar2 = *pfVar5;
        pfVar5 = std::max<float>(arg7, arg9);
        pfVar5 = std::max<float>(arg5, *pfVar5);
        float fVar3 = *pfVar5;
        pfVar5 = std::max<float>(arg8, arg10);
        pfVar5 = std::max<float>(arg6, *pfVar5);
        if (((fVar1 <= arg1) || (fVar1 <= arg3)) && ((arg1 <= fVar3 || (arg3 <= fVar3)))) {
            if (((fVar2 <= arg2) || (fVar2 <= arg4)) && ((arg2 <= *pfVar5 || (arg4 <= *pfVar5)))) {
                bVar4 = LineLineIntersection<float>(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
                if (bVar4) {
                    return true;
                }
                bVar4 = LineLineIntersection<float>(arg1, arg2, arg3, arg4, arg7, arg8, arg9, arg10);
                if (bVar4) {
                    return true;
                }
                bVar4 = LineLineIntersection<float>(arg1, arg2, arg3, arg4, arg5, arg6, arg9, arg10);
                return bVar4;
            }
        }
        return false;
    }

} // namespace jag::math
