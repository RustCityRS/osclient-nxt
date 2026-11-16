// libs/game/runetek5/config/meltype/Triangulate.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "Triangulate.h"

namespace jag::game {
    // 0x100516ca0, 464 bytes, placed by class name and debug map
    // Triangulate::ConvertPolygon(eastl::vector<int, eastl::allocator>&, eastl::vector<math::Point<int>, eastl::allocator> const&)
    undefined8 Triangulate::ConvertPolygon(vector* param_1, vector* param_2) {
        bool bVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        ulong uVar5;
        CoordMapSquare* pCVar6;
        long lVar7;
        Point* pPVar8;
        ulong uVar9;
        SourcePoint local_58;
        vector<Triangulate::SourcePoint, BucketAllocatorEASTL> local_48[24];

        uVar5 = param_2->size();
        if (uVar5 < 3) {
            /* WARNING: Subroutine does not return */
            LogAssert("points.size() >= 3",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "meltype/Triangulate.cpp",
                      14, "%s: There must be at least one triangle", "ConvertPolygon");
        }
        pCVar6 = (CoordMapSquare*)eastl::vector<math::Point<int>, eastl::allocator>::operator[](
            (vector<math::Point<int>, eastl::allocator>*)param_2, 0);
        iVar3 = pCVar6->GetX();
        lVar7 = param_2->size();
        pCVar6 = (CoordMapSquare*)eastl::vector<math::Point<int>, eastl::allocator>::operator[](
            (vector<math::Point<int>, eastl::allocator>*)param_2, lVar7 - 1);
        iVar4 = pCVar6->GetX();
        if (iVar3 == iVar4) {
            pCVar6 = (CoordMapSquare*)eastl::vector<math::Point<int>, eastl::allocator>::operator[](
                (vector<math::Point<int>, eastl::allocator>*)param_2, 0);
            iVar3 = pCVar6->GetZ();
            lVar7 = param_2->size();
            pCVar6 = (CoordMapSquare*)eastl::vector<math::Point<int>, eastl::allocator>::operator[](
                (vector<math::Point<int>, eastl::allocator>*)param_2, lVar7 - 1);
            iVar4 = pCVar6->GetZ();
            if (iVar3 == iVar4) {
                /* WARNING: Subroutine does not return */
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
        eastl::vector<Triangulate::SourcePoint, BucketAllocatorEASTL>::vector();
        uVar5 = param_2->size();
        eastl::vector<Triangulate::SourcePoint, BucketAllocatorEASTL>::reserve(local_48, uVar5);
        lVar7 = param_2->size();
        if (lVar7 != 0) {
            uVar5 = 0;
            do {
                pPVar8 = (Point*)eastl::vector<math::Point<int>, eastl::allocator>::operator[](
                    (vector<math::Point<int>, eastl::allocator>*)param_2, uVar5);
                new (&local_58) SourcePoint(pPVar8, (int)uVar5);
                eastl::vector<Triangulate::SourcePoint, BucketAllocatorEASTL>::push_back(local_48, &local_58);
                uVar5 = (ulong)((int)uVar5 + 1);
                uVar9 = param_2->size();
            } while (uVar5 < uVar9);
        }
        bVar1 = (bool)TestPolygonWinding((vector*)local_48);
        uVar5 = param_2->size();
        param_1->reserve(uVar5);
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        do {
            cVar2 = ProcessPolygonList(param_1, (vector*)local_48, bVar1);
        } while (cVar2 != '\0');
        eastl::vector<Triangulate::SourcePoint, BucketAllocatorEASTL>::~vector(local_48);
        return 0;
    }

    // 0x100517bc0, 176 bytes, placed by class name
    // Triangulate::TestPolygonWinding(eastl::vector<Triangulate::SourcePoint, BucketAllocatorEASTL> const&)
    bool Triangulate::TestPolygonWinding(vector* param_1) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int extraout_var;
        int iVar5;
        uint uVar6;
        uint uVar7;

        iVar2 = param_1->size();
        if (iVar2 < 1) {
            uVar7 = 0;
            uVar6 = 0;
        } else {
            uVar6 = 0;
            uVar7 = 0;
            iVar2 = 0;
            do {
                iVar1 = iVar2 + 1;
                iVar4 = iVar2;
                if (iVar2 == 0) {
                    iVar4 = param_1->size();
                }
                iVar3 = param_1->size();
                iVar5 = 0;
                if (iVar1 < iVar3) {
                    iVar5 = iVar1;
                }
                Cross(param_1, iVar4 + -1, iVar2, iVar5);
                uVar7 = uVar7 + -(extraout_var >> 31);
                uVar6 = uVar6 + (-(extraout_var >> 31) ^ 1U);
                iVar4 = param_1->size();
                iVar2 = iVar1;
            } while (iVar1 < iVar4);
        }
        return uVar6 < uVar7;
    }

    // 0x100517c70, 704 bytes, placed by class name
    // Triangulate::ProcessPolygonList(eastl::vector<int, eastl::allocator>&, eastl::vector<Triangulate::SourcePoint, BucketAllocatorEASTL>&, bool)
    uint Triangulate::ProcessPolygonList(vector* param_1, vector* param_2, bool param_3) {
        ulong uVar1;
        byte bVar2;
        uint in_EAX;
        int iVar3;
        int iVar4;
        int iVar5;
        ulong uVar6;
        long lVar7;
        CommandLine* pCVar8;
        long lVar9;
        byte bVar10;
        ulong uVar11;
        ulong uVar12;
        int iVar13;
        uint local_44;
        int local_34;

        uVar1 = 0;
        local_44 = in_EAX;
        do {
            do {
                uVar11 = uVar1;
                iVar3 = param_2->size();
                if ((long)iVar3 <= (long)uVar11)
                    goto LAB_100517ee2;
                uVar1 = uVar11 + 1;
                uVar6 = uVar11;
                if (uVar11 == 0) {
                    uVar6 = param_2->size();
                }
                iVar13 = (int)uVar6 + -1;
                iVar4 = param_2->size();
                uVar6 = 0;
                if ((int)uVar1 < iVar4) {
                    uVar6 = uVar1 & 4294967295;
                }
                iVar4 = (int)uVar6;
                lVar7 = Cross(param_2, iVar13, (int)uVar11, iVar4);
                lVar9 = -lVar7;
                if (param_3) {
                    lVar9 = lVar7;
                }
            } while (-1 < lVar9);
            iVar5 = param_2->size();
            if (iVar5 < 1) {
                bVar10 = 1;
            } else {
                bVar2 = 1;
                uVar12 = 0;
                do {
                    iVar5 = (int)uVar12;
                    if (((iVar13 != iVar5) && (uVar11 != uVar12)) && (iVar4 != iVar5)) {
                        bVar2 = PointInTriangle(param_2, iVar5, iVar13, (int)uVar11, iVar4);
                        bVar2 = bVar2 ^ 1;
                    }
                    uVar12 = uVar12 + 1;
                    iVar5 = param_2->size();
                    bVar10 = bVar2 & 1;
                } while (((int)uVar12 < iVar5) && (bVar10 != 0));
            }
            if (bVar10 != 0) {
                if (param_3) {
                    pCVar8 = (CommandLine*)eastl::vector<Triangulate::SourcePoint, BucketAllocatorEASTL>::operator[](
                        (vector<Triangulate::SourcePoint, BucketAllocatorEASTL>*)param_2, uVar6);
                    local_34 = pCVar8->GetPos();
                    param_1->push_back(&local_34);
                    pCVar8 = (CommandLine*)eastl::vector<Triangulate::SourcePoint, BucketAllocatorEASTL>::operator[](
                        (vector<Triangulate::SourcePoint, BucketAllocatorEASTL>*)param_2, uVar11);
                    local_34 = pCVar8->GetPos();
                    param_1->push_back(&local_34);
                    pCVar8 = (CommandLine*)eastl::vector<Triangulate::SourcePoint, BucketAllocatorEASTL>::operator[](
                        (vector<Triangulate::SourcePoint, BucketAllocatorEASTL>*)param_2, (long)iVar13);
                    local_34 = pCVar8->GetPos();
                } else {
                    pCVar8 = (CommandLine*)eastl::vector<Triangulate::SourcePoint, BucketAllocatorEASTL>::operator[](
                        (vector<Triangulate::SourcePoint, BucketAllocatorEASTL>*)param_2, (long)iVar13);
                    local_34 = pCVar8->GetPos();
                    param_1->push_back(&local_34);
                    pCVar8 = (CommandLine*)eastl::vector<Triangulate::SourcePoint, BucketAllocatorEASTL>::operator[](
                        (vector<Triangulate::SourcePoint, BucketAllocatorEASTL>*)param_2, uVar11);
                    local_34 = pCVar8->GetPos();
                    param_1->push_back(&local_34);
                    pCVar8 = (CommandLine*)eastl::vector<Triangulate::SourcePoint, BucketAllocatorEASTL>::operator[](
                        (vector<Triangulate::SourcePoint, BucketAllocatorEASTL>*)param_2, uVar6);
                    local_34 = pCVar8->GetPos();
                }
                param_1->push_back(&local_34);
                lVar9 = param_2->HeapBeginPtr();
                param_2->erase((SourcePoint*)(lVar9 + uVar11 * 12));
                uVar6 = param_2->size();
                local_44 = (uint)CONCAT71((int7)(uVar6 >> 8), 2 < uVar6);
            }
        } while (bVar10 == 0);
    LAB_100517ee2:
        if ((long)iVar3 <= (long)uVar11) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "config/meltype/Triangulate.cpp",
                            107, "%s: unable to process given polygon", "ProcessPolygonList");
        }
        return local_44 & 4294967041;
    }

    // 0x100517f40, 256 bytes, placed by class name
    // Triangulate::Cross(eastl::vector<Triangulate::SourcePoint, BucketAllocatorEASTL> const&, int, int, int)
    long Triangulate::Cross(vector* param_1, int param_2, int param_3, int param_4) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        CoordMapSquare* pCVar9;

        pCVar9 = (CoordMapSquare*)eastl::vector<Triangulate::SourcePoint, BucketAllocatorEASTL>::operator[](
            (vector<Triangulate::SourcePoint, BucketAllocatorEASTL>*)param_1, (long)param_2);
        iVar1 = pCVar9->GetX();
        pCVar9 = (CoordMapSquare*)eastl::vector<Triangulate::SourcePoint, BucketAllocatorEASTL>::operator[](
            (vector<Triangulate::SourcePoint, BucketAllocatorEASTL>*)param_1, (ulong)param_4);
        iVar2 = pCVar9->GetX();
        pCVar9 = (CoordMapSquare*)eastl::vector<Triangulate::SourcePoint, BucketAllocatorEASTL>::operator[](
            (vector<Triangulate::SourcePoint, BucketAllocatorEASTL>*)param_1, (long)param_3);
        iVar3 = pCVar9->GetZ();
        pCVar9 = (CoordMapSquare*)eastl::vector<Triangulate::SourcePoint, BucketAllocatorEASTL>::operator[](
            (vector<Triangulate::SourcePoint, BucketAllocatorEASTL>*)param_1, (ulong)param_4);
        iVar4 = pCVar9->GetZ();
        pCVar9 = (CoordMapSquare*)eastl::vector<Triangulate::SourcePoint, BucketAllocatorEASTL>::operator[](
            (vector<Triangulate::SourcePoint, BucketAllocatorEASTL>*)param_1, (long)param_3);
        iVar5 = pCVar9->GetX();
        pCVar9 = (CoordMapSquare*)eastl::vector<Triangulate::SourcePoint, BucketAllocatorEASTL>::operator[](
            (vector<Triangulate::SourcePoint, BucketAllocatorEASTL>*)param_1, (ulong)param_4);
        iVar6 = pCVar9->GetX();
        pCVar9 = (CoordMapSquare*)eastl::vector<Triangulate::SourcePoint, BucketAllocatorEASTL>::operator[](
            (vector<Triangulate::SourcePoint, BucketAllocatorEASTL>*)param_1, (long)param_2);
        iVar7 = pCVar9->GetZ();
        pCVar9 = (CoordMapSquare*)eastl::vector<Triangulate::SourcePoint, BucketAllocatorEASTL>::operator[](
            (vector<Triangulate::SourcePoint, BucketAllocatorEASTL>*)param_1, (ulong)param_4);
        iVar8 = pCVar9->GetZ();
        return ((long)iVar8 - (long)iVar7) * ((long)iVar5 - (long)iVar6) +
               ((long)iVar3 - (long)iVar4) * ((long)iVar1 - (long)iVar2);
    }

    // 0x100518040, 128 bytes, placed by class name
    // Triangulate::PointInTriangle(eastl::vector<Triangulate::SourcePoint, BucketAllocatorEASTL> const&, int, int, int, int)
    undefined8 Triangulate::PointInTriangle(vector* param_1, int param_2, int param_3, int param_4, int param_5) {
        ulong uVar1;
        ulong uVar2;
        ulong uVar3;
        long lVar4;

        uVar1 = Cross(param_1, param_2, param_3, param_4);
        uVar2 = Cross(param_1, param_2, param_4, param_5);
        uVar3 = Cross(param_1, param_2, param_5, param_3);
        lVar4 = -((long)(uVar3 ^ uVar1 | uVar2 ^ uVar1) >> 63);
        return CONCAT71((int7)((ulong)lVar4 >> 8), lVar4 == 0);
    }

} // namespace jag::game
