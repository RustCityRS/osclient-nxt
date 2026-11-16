// libs/game/runetek5/config/meltype/Triangulate.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "Triangulate.h"

namespace jag::game {
    // 0x100516ca0
    void Triangulate::ConvertPolygon(eastl::vector<int>& arg1, const eastl::vector<math::Point<int>>& points) {
        bool cVar1;
        Point<int>* point;
        unsigned long uVar7;
        SourcePoint local_58;

        unsigned long uVar4 = points.size();
        if (uVar4 < 3) {
            LogAssert("points.size() >= 3",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "meltype/Triangulate.cpp",
                      14, "%s: There must be at least one triangle", "ConvertPolygon");
        }
        CoordMapSquare* pCVar5 = &points[0];
        int iVar2 = pCVar5->GetX();
        long lVar6 = points.size();
        pCVar5 = &points[lVar6 - 1];
        int iVar3 = pCVar5->GetX();
        if (iVar2 == iVar3) {
            pCVar5 = &points[0];
            iVar2 = pCVar5->GetZ();
            lVar6 = points.size();
            pCVar5 = &points[lVar6 - 1];
            iVar3 = pCVar5->GetZ();
            if (iVar2 == iVar3) {
                LogAssert("!(points[0].X() == points[points.size() - 1].X() && points[0].Y() == points[points.size() - "
                          "1].Y())",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "meltype/Triangulate.cpp",
                          16,
                          "%s: unable to process given polygon, first and last points must NOT be the same position, "
                          "one should be removed",
                          "ConvertPolygon");
            }
        }
        vector<Triangulate::SourcePoint, BucketAllocatorEASTL> local_48;
        uVar4 = points.size();
        local_48.reserve(uVar4);
        lVar6 = points.size();
        if (lVar6 != 0) {
            uVar4 = 0;
            do {
                point = &points[uVar4];
                local_58 = SourcePoint(*point, (int)uVar4);
                local_48.push_back(local_58);
                uVar4 = (unsigned long)((int)uVar4 + 1);
                uVar7 = points.size();
            } while (uVar4 < uVar7);
        }
        bool arg3 = (bool)TestPolygonWinding(&local_48);
        uVar4 = points.size();
        arg1.reserve(uVar4);
        arg1.clear();
        do {
            cVar1 = ProcessPolygonList(arg1, &local_48, arg3);
        } while (cVar1);
        return 0;
    }

    // 0x100517bc0
    bool
    Triangulate::TestPolygonWinding(const eastl::vector<Triangulate::SourcePoint, BucketAllocatorEASTL>& sourcePoints) {
        int iVar1;
        int iVar3;
        int iVar4;
        int extraout_var;
        int arg4;
        unsigned int uVar5;
        unsigned int uVar6;

        int iVar2 = sourcePoints.size();
        if (iVar2 < 1) {
            uVar6 = 0;
            uVar5 = 0;
        } else {
            uVar5 = 0;
            uVar6 = 0;
            iVar2 = 0;
            do {
                iVar1 = iVar2 + 1;
                iVar4 = iVar2;
                if (iVar2 == 0) {
                    iVar4 = sourcePoints.size();
                }
                iVar3 = sourcePoints.size();
                arg4 = 0;
                if (iVar1 < iVar3) {
                    arg4 = iVar1;
                }
                Cross(sourcePoints, iVar4 - 1, iVar2, arg4);
                uVar6 = uVar6 + -(extraout_var >> 31);
                uVar5 = uVar5 + (-(extraout_var >> 31) ^ 1U);
                iVar4 = sourcePoints.size();
                iVar2 = iVar1;
            } while (iVar1 < iVar4);
        }
        return uVar5 < uVar6;
    }

    // 0x100517c70
    unsigned int
    Triangulate::ProcessPolygonList(eastl::vector<int>& arg1,
                                    eastl::vector<Triangulate::SourcePoint, BucketAllocatorEASTL>& sourcePoints,
                                    bool arg3) {
        uint8_t bVar2;
        unsigned int in_EAX;
        int iVar3;
        int iVar4;
        int iVar5;
        unsigned long uVar6;
        long lVar7;
        CommandLine* pCVar8;
        long lVar9;
        uint8_t bVar10;
        unsigned long arg1_00;
        unsigned long uVar11;
        int arg2;
        int local_34;

        unsigned long uVar1 = 0;
        unsigned int local_44 = in_EAX;
        do {
            do {
                arg1_00 = uVar1;
                iVar3 = sourcePoints.size();
                if ((long)iVar3 <= (long)arg1_00)
                    goto LAB_100517ee2;
                uVar1 = arg1_00 + 1;
                uVar6 = arg1_00;
                if (arg1_00 == 0) {
                    uVar6 = sourcePoints.size();
                }
                arg2 = (int)uVar6 - 1;
                iVar4 = sourcePoints.size();
                uVar6 = 0;
                if ((int)uVar1 < iVar4) {
                    uVar6 = uVar1 & 4294967295;
                }
                iVar4 = (int)uVar6;
                lVar7 = Cross(sourcePoints, arg2, (int)arg1_00, iVar4);
                lVar9 = -lVar7;
                if (arg3) {
                    lVar9 = lVar7;
                }
            } while (-1 < lVar9);
            iVar5 = sourcePoints.size();
            if (iVar5 < 1) {
                bVar10 = 1;
            } else {
                bVar2 = 1;
                uVar11 = 0;
                do {
                    iVar5 = (int)uVar11;
                    if (((arg2 != iVar5) && (arg1_00 != uVar11)) && (iVar4 != iVar5)) {
                        bVar2 = PointInTriangle(sourcePoints, iVar5, arg2, (int)arg1_00, iVar4);
                        bVar2 = bVar2 ^ 1;
                    }
                    uVar11 = uVar11 + 1;
                    iVar5 = sourcePoints.size();
                    bVar10 = bVar2 & 1;
                } while (((int)uVar11 < iVar5) && (bVar10 != 0));
            }
            if (bVar10 != 0) {
                if (arg3) {
                    pCVar8 = &sourcePoints[uVar6];
                    local_34 = pCVar8->GetPos();
                    arg1.push_back(local_34);
                    pCVar8 = &sourcePoints[arg1_00];
                    local_34 = pCVar8->GetPos();
                    arg1.push_back(local_34);
                    pCVar8 = &sourcePoints[(long)arg2];
                    local_34 = pCVar8->GetPos();
                } else {
                    pCVar8 = &sourcePoints[(long)arg2];
                    local_34 = pCVar8->GetPos();
                    arg1.push_back(local_34);
                    pCVar8 = &sourcePoints[arg1_00];
                    local_34 = pCVar8->GetPos();
                    arg1.push_back(local_34);
                    pCVar8 = &sourcePoints[uVar6];
                    local_34 = pCVar8->GetPos();
                }
                arg1.push_back(local_34);
                lVar9 = sourcePoints.HeapBeginPtr();
                sourcePoints.erase((lVar9 + arg1_00 * 12));
                uVar6 = sourcePoints.size();
                local_44 = (unsigned int)(((uint64_t)((int64_t)(uVar6 >> 8)) << 8) | (uint8_t)(2 < uVar6));
            }
        } while (bVar10 == 0);
    LAB_100517ee2:
        if ((long)iVar3 <= (long)arg1_00) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "config/meltype/Triangulate.cpp",
                            107, "%s: unable to process given polygon", "ProcessPolygonList");
        }
        return local_44 & 4294967041;
    }

    // 0x100517f40
    long Triangulate::Cross(const eastl::vector<Triangulate::SourcePoint, BucketAllocatorEASTL>& sourcePoints, int arg2,
                            int arg3, int arg4) {
        CoordMapSquare* pCVar9 = &sourcePoints[(long)arg2];
        int iVar1 = pCVar9->GetX();
        pCVar9 = &sourcePoints[(unsigned long)arg4];
        int iVar2 = pCVar9->GetX();
        pCVar9 = &sourcePoints[(long)arg3];
        int iVar3 = pCVar9->GetZ();
        pCVar9 = &sourcePoints[(unsigned long)arg4];
        int iVar4 = pCVar9->GetZ();
        pCVar9 = &sourcePoints[(long)arg3];
        int iVar5 = pCVar9->GetX();
        pCVar9 = &sourcePoints[(unsigned long)arg4];
        int iVar6 = pCVar9->GetX();
        pCVar9 = &sourcePoints[(long)arg2];
        int iVar7 = pCVar9->GetZ();
        pCVar9 = &sourcePoints[(unsigned long)arg4];
        int iVar8 = pCVar9->GetZ();
        return ((long)iVar8 - (long)iVar7) * ((long)iVar5 - (long)iVar6) +
               ((long)iVar3 - (long)iVar4) * ((long)iVar1 - (long)iVar2);
    }

    // 0x100518040
    void Triangulate::PointInTriangle(const eastl::vector<Triangulate::SourcePoint, BucketAllocatorEASTL>& sourcePoints,
                                      int arg2, int arg3, int arg4, int arg5) {
        unsigned long uVar1 = Cross(sourcePoints, arg2, arg3, arg4);
        unsigned long uVar2 = Cross(sourcePoints, arg2, arg4, arg5);
        unsigned long uVar3 = Cross(sourcePoints, arg2, arg5, arg3);
        return -((long)(uVar3 ^ uVar1 | uVar2 ^ uVar1) >> 63) == 0;
    }

} // namespace jag::game
