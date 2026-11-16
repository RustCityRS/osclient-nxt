// libs/game/runetek5/scene/HeightMap.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game {
    class HeightMap {
    public:
        class FineAdjusted;
        GetFineHeight(int&, int, int, int, bool, HeightOffsetType) const;
        HeightMap(World const&);
        void GetTileHeight(int&, int, int, int, bool, HeightOffsetType) const;
        ulong AdjustFineForMapBoundary(FineAdjusted&, int, int, int, int, int) const;
        GetFineWaterDepth(int, int, int) const;
        GetHeightMap(int, int, int) const;
        GetWaterHeights(int, int) const;
        bool TransformAABBVertex(math::Vector3T<float>&, math::Matrix44T<float> const&, int, HeightOffsetType) const;
        ApplyHillRotation(int, math::AABB const&, math::Matrix44T<float>&, HeightOffsetType) const;
        void AddLocationHeightOffset(int, int, int, int, int, int, int) const;
        void RemoveLocationHeightOffset(int, int, int, int, int, int, int) const;

        // data members, from how the methods use this: 8 bytes
        World* field_0; // offset 0
    };

    class HeightMap::FineAdjusted {
    public:
        FineAdjusted();
    };

    // 0x100017ca0: the linker folded this into weak_ptr<oldscape::rs2lib::IfType>::weak_ptr(), which has identical code
    HeightMap::FineAdjusted::FineAdjusted();

    // 0x100030be0: the linker folded this into weak_ptr<oldscape::rs2lib::IfType>::weak_ptr(), which has identical code
    HeightMap::FineAdjusted::FineAdjusted();

    // 0x10048f190, 432 bytes, placed by class name and debug map
    // HeightMap::GetFineHeight(int&, int, int, int, bool, HeightOffsetType) const
    undefined* HeightMap::GetFineHeight(_func_decltype_nullptr* param_1, undefined4 param_2, int param_3, int param_4,
                                        undefined1 param_5, undefined4 param_7) {
        char cVar1;
        int iVar3;
        int iVar4;
        int iVar5;
        undefined** ppuVar6;
        vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>* this_00;
        vector<MapSquareStatus, eastl::allocator>* this_01;
        shared_ptr* this_02;
        MapSquare* pMVar7;
        undefined* puVar8;
        int extraout_EDX;
        long lVar9;
        int local_40;
        int local_3c;
        undefined4 local_38;
        undefined4 local_34;

        new (&local_40) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        iVar5 = param_3 + 8191;
        if (-1 < param_3) {
            iVar5 = param_3;
        }
        iVar3 = param_4 + 8191;
        if (-1 < param_4) {
            iVar3 = param_4;
        }
        cVar1 = AdjustFineForMapBoundary(this, (FineAdjusted*)&local_40, extraout_EDX, iVar5 >> 13, iVar3 >> 13,
                                         param_3 % 8192, param_4 % 8192);
        iVar5 = local_40;
        if (cVar1 != '\0') {
            iVar4 = field_0->GetMapSquareMinX();
            iVar3 = local_40;
            if ((((iVar5 < iVar4) || (iVar4 = field_0->GetMapSquareMaxX(), iVar5 = local_3c, iVar4 < iVar3)) ||
                 (iVar4 = field_0->GetMapSquareMinZ(), iVar3 = local_3c, iVar5 < iVar4)) ||
                (iVar5 = field_0->GetMapSquareMaxZ(), iVar5 < iVar3)) {
                *(undefined4*)param_1 = 0;
                ppuVar6 = &DataStatus::MISSING;
                goto LAB_10048f317;
            }
            this_00 =
                (vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>*)field_0->GetMapSquares();
            lVar9 = (long)local_40;
            iVar5 = field_0->GetMapSquareMinX();
            this_01 = (vector<MapSquareStatus, eastl::allocator>*)
                eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>::operator[](
                    this_00, lVar9 - iVar5);
            lVar9 = (long)local_3c;
            iVar5 = field_0->GetMapSquareMinZ();
            this_02 = (shared_ptr*)eastl::vector<MapSquareStatus, eastl::allocator>::operator[](this_01, lVar9 - iVar5);
            if ((*(undefined**)(this_02 + 1) == DataStatus::MISSING) ||
                (cVar1 = (field_0, local_40, local_3c)->IsTargetMapSquare(), cVar1 == '\0')) {
                *(undefined4*)param_1 = 4294967295;
                return DataStatus::MISSING;
            }
            if (shared_ptr::operator_cast_to_bool(this_02)) {
                pMVar7 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_02);
                puVar8 = (undefined*)pMVar7->GetFineHeight(param_1, param_2, local_38, local_34, param_5, param_7);
                return puVar8;
            }
        }
        *(undefined4*)param_1 = 4294967295;
        ppuVar6 = &DataStatus::NOTLOADED;
    LAB_10048f317:
        return *ppuVar6;
    }

    // 0x100491460, 16 bytes, base-object constructor, placed by class name
    // HeightMap::HeightMap(World const&)
    void HeightMap::HeightMap(World* param_1) {
        field_0 = param_1;
    }

    // 0x100491470, 16 bytes, complete-object constructor, placed by class name
    // HeightMap::HeightMap(World const&): jumps straight to the base-object constructor

    // 0x100491480, 32 bytes, placed by class name
    // HeightMap::GetTileHeight(int&, int, int, int, bool, HeightOffsetType) const
    void HeightMap::GetTileHeight() {
        GetFineHeight();
    }

    // 0x1004914a0, 1056 bytes, placed by class name
    // HeightMap::AdjustFineForMapBoundary(HeightMap::FineAdjusted&, int, int, int, int, int) const
    ulong HeightMap::AdjustFineForMapBoundary(FineAdjusted* param_1, int param_2, int param_3, int param_4, int param_5,
                                              int param_6) {
        bool bVar1;
        bool bVar2;
        char cVar3;
        int iVar4;
        vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>* pvVar5;
        vector<MapSquareStatus, eastl::allocator>* pvVar6;
        long lVar7;
        shared_ptr* psVar8;
        Location* pLVar9;
        unique_ptr* this_00;
        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* this_01;
        Terrain* this_02;
        undefined7 extraout_var;
        ulong uVar10;
        undefined** ppuVar11;
        int local_58;
        int local_48;
        int local_3c;
        int local_38;
        int local_34;

        uVar10 = (ulong)(uint)param_3;
        local_58 = param_6;
        iVar4 = field_0->GetMapSquareMinX();
        ppuVar11 = (undefined**)CONCAT71((int7)(uVar10 >> 8), 1);
        if (iVar4 <= param_3) {
            iVar4 = field_0->GetMapSquareMaxX();
            if (((param_3 <= iVar4) && (iVar4 = field_0->GetMapSquareMinZ(), iVar4 <= param_4)) &&
                (iVar4 = field_0->GetMapSquareMaxZ(), param_4 <= iVar4)) {
                iVar4 = field_0->GetMapSquareMaxX();
                if (iVar4 < param_3) {
                    local_34 = param_3 + -1;
                    local_3c = 8192;
                LAB_10049154c:
                    bVar2 = true;
                } else {
                    iVar4 = field_0->GetMapSquareMinX();
                    if (param_3 < iVar4) {
                        local_34 = param_3 + 1;
                        local_3c = -1;
                        goto LAB_10049154c;
                    }
                    bVar2 = false;
                    local_3c = param_5;
                    local_34 = param_3;
                }
                iVar4 = field_0->GetMapSquareMaxZ();
                if (iVar4 < param_4) {
                    local_48 = param_4 + -1;
                    local_38 = 8192;
                LAB_10049159d:
                    bVar2 = true;
                } else {
                    iVar4 = field_0->GetMapSquareMinZ();
                    local_38 = param_6;
                    local_48 = param_4;
                    if (param_4 < iVar4) {
                        local_48 = param_4 + 1;
                        local_38 = -1;
                        goto LAB_10049159d;
                    }
                }
                bVar1 = false;
                if (bVar2) {
                    iVar4 = field_0->GetMapSquareMinX();
                    if (((local_34 < iVar4) || (iVar4 = field_0->GetMapSquareMaxX(), iVar4 < local_34)) ||
                        (iVar4 = field_0->GetMapSquareMinZ(), local_48 < iVar4)) {
                    LAB_1004915e9:
                        bVar1 = false;
                        local_38 = param_6;
                        local_34 = param_3;
                        local_3c = param_5;
                        local_48 = param_4;
                    } else {
                        iVar4 = field_0->GetMapSquareMaxZ();
                        bVar1 = true;
                        if (iVar4 < local_48)
                            goto LAB_1004915e9;
                    }
                    pvVar5 = (vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>*)
                                 field_0->GetMapSquares();
                    iVar4 = field_0->GetMapSquareMinX();
                    pvVar6 = (vector<MapSquareStatus, eastl::allocator>*)
                        eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>::operator[](
                            pvVar5, (long)(local_34 - iVar4));
                    iVar4 = field_0->GetMapSquareMinZ();
                    lVar7 =
                        eastl::vector<MapSquareStatus, eastl::allocator>::operator[](pvVar6, (long)(local_48 - iVar4));
                    if (*(undefined**)(lVar7 + 16) == DataStatus::MISSING) {
                        bVar1 = false;
                        local_38 = param_6;
                        local_48 = param_4;
                        local_3c = param_5;
                        local_34 = param_3;
                    }
                }
                if (!bVar1) {
                    psVar8 = (shared_ptr*)(field_0, local_34, local_48)->GetMapSquare();
                    bVar2 = shared_ptr::operator_cast_to_bool(psVar8);
                    if (bVar2) {
                        pLVar9 = (Location*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)psVar8);
                        this_00 = (unique_ptr*)pLVar9->GetParentLocationType();
                        bVar2 = std::unique_ptr::operator_cast_to_bool(this_00);
                        if (bVar2) {
                            pLVar9 = (Location*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)psVar8);
                            this_01 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)
                                          pLVar9->GetParentLocationType();
                            this_02 = (Terrain*)std::unique_ptr<
                                          Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(this_01);
                            cVar3 = this_02->IsHeightZero();
                            if (cVar3 == '\0')
                                goto LAB_1004917f9;
                        }
                    }
                    if (local_3c == 8191) {
                        local_34 = local_34 + 1;
                        local_3c = -1;
                    } else if (local_3c == 0) {
                        local_34 = local_34 + -1;
                        local_3c = 8192;
                    }
                    if (local_38 == 8191) {
                        local_48 = local_48 + 1;
                        local_38 = -1;
                    } else if (local_38 == 0) {
                        local_48 = local_48 + -1;
                        local_38 = 8192;
                    }
                    iVar4 = field_0->GetMapSquareMinX();
                    if (((local_34 < iVar4) || (iVar4 = field_0->GetMapSquareMaxX(), iVar4 < local_34)) ||
                        ((iVar4 = field_0->GetMapSquareMinZ(),
                          local_48 < iVar4 || (iVar4 = field_0->GetMapSquareMaxZ(), iVar4 < local_48)))) {
                        local_38 = param_6;
                        local_34 = param_3;
                        local_3c = param_5;
                        local_48 = param_4;
                    }
                    pvVar5 = (vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>*)
                                 field_0->GetMapSquares();
                    iVar4 = field_0->GetMapSquareMinX();
                    pvVar6 = (vector<MapSquareStatus, eastl::allocator>*)
                        eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>::operator[](
                            pvVar5, (long)(local_34 - iVar4));
                    iVar4 = field_0->GetMapSquareMinZ();
                    lVar7 =
                        eastl::vector<MapSquareStatus, eastl::allocator>::operator[](pvVar6, (long)(local_48 - iVar4));
                    if (*(undefined**)(lVar7 + 16) == DataStatus::MISSING) {
                        local_38 = param_6;
                        local_48 = param_4;
                        local_3c = param_5;
                        local_34 = param_3;
                    }
                }
            LAB_1004917f9:
                pvVar5 = (vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>*)
                             field_0->GetMapSquares();
                iVar4 = field_0->GetMapSquareMinX();
                pvVar6 = (vector<MapSquareStatus, eastl::allocator>*)
                    eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>::operator[](
                        pvVar5, (long)(local_34 - iVar4));
                iVar4 = field_0->GetMapSquareMinZ();
                psVar8 = (shared_ptr*)eastl::vector<MapSquareStatus, eastl::allocator>::operator[](
                    pvVar6, (long)(local_48 - iVar4));
                ppuVar11 = &DataStatus::MISSING;
                if (*(undefined**)(psVar8 + 1) != DataStatus::MISSING) {
                    cVar3 = (field_0, local_34, local_48)->IsTargetMapSquare();
                    ppuVar11 = (undefined**)CONCAT71((int7)((ulong)ppuVar11 >> 8), 1);
                    if (cVar3 != '\0') {
                        bVar2 = shared_ptr::operator_cast_to_bool(psVar8);
                        ppuVar11 = (undefined**)(CONCAT71(extraout_var, bVar2) & 4294967295);
                        local_58 = local_38;
                        param_5 = local_3c;
                        param_4 = local_48;
                        param_3 = local_34;
                        if ((char)ppuVar11 == '\0')
                            goto LAB_1004918a8;
                    }
                    goto LAB_100491896;
                }
            }
            ppuVar11 = (undefined**)CONCAT71((int7)((ulong)ppuVar11 >> 8), 1);
        }
    LAB_100491896:
        *(int*)param_1 = param_3;
        *(int*)(param_1 + 4) = param_4;
        *(int*)(param_1 + 8) = param_5;
        *(int*)(param_1 + 12) = local_58;
    LAB_1004918a8:
        return (ulong)ppuVar11 & 4294967295;
    }

    // 0x1004918e0, 368 bytes, placed by class name
    // HeightMap::GetFineWaterDepth(int, int, int) const
    undefined4 HeightMap::GetFineWaterDepth(int param_1, int param_2, int param_3) {
        char cVar1;
        int iVar3;
        int iVar4;
        int iVar5;
        vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>* this_00;
        vector<MapSquareStatus, eastl::allocator>* this_01;
        shared_ptr* this_02;
        MapSquare* this_03;
        int extraout_EDX;
        undefined4 in_register_00000034;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        new (&local_40) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(
            (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_1));
        iVar5 = param_2 + 8191;
        if (-1 < param_2) {
            iVar5 = param_2;
        }
        iVar3 = param_3 + 8191;
        if (-1 < param_3) {
            iVar3 = param_3;
        }
        cVar1 = AdjustFineForMapBoundary(this, (FineAdjusted*)&local_40, extraout_EDX, iVar5 >> 13, iVar3 >> 13,
                                         param_2 % 8192, param_3 % 8192);
        iVar5 = local_40;
        if (cVar1 != '\0') {
            iVar4 = field_0->GetMapSquareMinX();
            iVar3 = local_40;
            if (iVar5 < iVar4) {
                return 0;
            }
            iVar4 = field_0->GetMapSquareMaxX();
            iVar5 = local_3c;
            if (iVar4 < iVar3) {
                return 0;
            }
            iVar4 = field_0->GetMapSquareMinZ();
            iVar3 = local_3c;
            if (iVar5 < iVar4) {
                return 0;
            }
            iVar5 = field_0->GetMapSquareMaxZ();
            if (iVar5 < iVar3) {
                return 0;
            }
            this_00 =
                (vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>*)field_0->GetMapSquares();
            iVar5 = field_0->GetMapSquareMinX();
            this_01 = (vector<MapSquareStatus, eastl::allocator>*)
                eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>::operator[](
                    this_00, (long)local_40 - (long)iVar5);
            iVar5 = field_0->GetMapSquareMinZ();
            this_02 = (shared_ptr*)eastl::vector<MapSquareStatus, eastl::allocator>::operator[](
                this_01, (long)local_3c - (long)iVar5);
            if (*(undefined**)(this_02 + 1) != DataStatus::MISSING) {
                if (shared_ptr::operator_cast_to_bool(this_02)) {
                    this_03 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_02);
                    return this_03->GetFineWaterDepth(param_1, local_38, local_34);
                }
                return 4294967295;
            }
        }
        return 4294967295;
    }

    // 0x100491a50, 192 bytes, placed by class name
    // HeightMap::GetHeightMap(int, int, int) const
    undefined1* HeightMap::GetHeightMap(int param_1, int param_2, int param_3) {
        int iVar2;
        int iVar3;
        shared_ptr* this_00;
        MapSquare* this_01;
        int iVar4;
        undefined1* puVar5;

        iVar4 = param_2 + 63;
        if (-1 < param_2) {
            iVar4 = param_2;
        }
        iVar4 = iVar4 >> 6;
        iVar2 = field_0->GetMapSquareMinX();
        puVar5 = &NullRawHeightMap;
        if (iVar2 <= iVar4) {
            iVar2 = field_0->GetMapSquareMaxX();
            if (iVar4 <= iVar2) {
                iVar2 = param_3 + 63;
                if (-1 < param_3) {
                    iVar2 = param_3;
                }
                iVar2 = iVar2 >> 6;
                iVar3 = field_0->GetMapSquareMinZ();
                if (iVar3 <= iVar2) {
                    iVar3 = field_0->GetMapSquareMaxZ();
                    if (iVar2 <= iVar3) {
                        this_00 = (shared_ptr*)(field_0, iVar4, iVar2)->GetMapSquare();
                        if (shared_ptr::operator_cast_to_bool(this_00)) {
                            this_01 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_00);
                            puVar5 = (undefined1*)this_01->GetHeightMap(param_1);
                        }
                    }
                }
            }
        }
        return puVar5;
    }

    // 0x100491b10, 176 bytes, placed by class name
    // HeightMap::GetWaterHeights(int, int) const
    undefined1* HeightMap::GetWaterHeights(int param_1, int param_2) {
        int iVar2;
        int iVar3;
        shared_ptr* this_00;
        MapSquare* this_01;
        int iVar4;
        undefined1* puVar5;

        iVar4 = param_1 + 63;
        if (-1 < param_1) {
            iVar4 = param_1;
        }
        iVar4 = iVar4 >> 6;
        iVar2 = field_0->GetMapSquareMinX();
        puVar5 = &NullRawWaterHeights;
        if (iVar2 <= iVar4) {
            iVar2 = field_0->GetMapSquareMaxX();
            if (iVar4 <= iVar2) {
                iVar2 = param_2 + 63;
                if (-1 < param_2) {
                    iVar2 = param_2;
                }
                iVar2 = iVar2 >> 6;
                iVar3 = field_0->GetMapSquareMinZ();
                if (iVar3 <= iVar2) {
                    iVar3 = field_0->GetMapSquareMaxZ();
                    if (iVar2 <= iVar3) {
                        this_00 = (shared_ptr*)(field_0, iVar4, iVar2)->GetMapSquare();
                        if (shared_ptr::operator_cast_to_bool(this_00)) {
                            this_01 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_00);
                            puVar5 = (undefined1*)this_01->GetWaterHeights();
                        }
                    }
                }
            }
        }
        return puVar5;
    }

    // 0x100491c00, 176 bytes, placed by class name
    // HeightMap::TransformAABBVertex(math::Vector3T<float>&, math::Matrix44T<float> const&, int, HeightOffsetType) const
    bool HeightMap::TransformAABBVertex(Vector3T<float>* param_1, Matrix44T* param_2, undefined4 param_3,
                                        undefined4 param_5) {
        float fVar1;
        undefined* puVar2;
        float* pfVar3;
        undefined* puVar4;
        int local_38;
        float local_34;

        math::Vector3T<float>::operator*=(param_1, param_2);
        pfVar3 = (float*)math::Vector3T<float>::operator[](param_1, 0);
        fVar1 = *pfVar3;
        pfVar3 = (float*)math::Vector3T<float>::operator[](param_1, 2);
        puVar4 = (undefined*)GetFineHeight(this, &local_38, param_3, (int)fVar1, (int)*pfVar3, 0, param_5);
        puVar2 = DataStatus::NOTLOADED;
        if (puVar4 != DataStatus::NOTLOADED) {
            local_34 = (float)local_38;
            pfVar3 = (float*)math::Vector3T<float>::operator[](param_1, 1);
            *pfVar3 = local_34;
        }
        return puVar4 != puVar2;
    }

    // 0x100491cb0, 528 bytes, placed by class name
    // HeightMap::ApplyHillRotation(int, math::AABB const&, math::Matrix44T<float>&, HeightOffsetType) const
    undefined4 HeightMap::ApplyHillRotation(type* param_2_00, NXTPixToolkit* param_2, Vector4T<float>* param_3,
                                            undefined4 param_5) {
        undefined4 uVar2;
        Vector3T<float>* this_00;
        char cVar4;
        undefined4 uVar5;
        vector* this_01;
        float* pfVar6;
        undefined4* puVar7;
        float fVar9;
        ColourHSL local_98;
        ColourHSL local_88;
        undefined8 local_78;
        float local_70;
        undefined8 local_60;
        undefined4 local_58;
        undefined4 local_50;
        float local_4c;
        Vector3T<float>* local_40;
        float local_34;

        local_40 = (Vector3T<float>*)param_2->GetScreen();
        this_01 = param_2->SSOBeginPtr(param_2_00);
        local_58 = *(undefined4*)(this_01 + 8);
        local_60 = *(undefined8*)this_01;
        local_50 = SUB84(param_2_00, 0);
        cVar4 = TransformAABBVertex(this, &local_60, param_3, (ulong)param_2_00 & 4294967295, param_5);
        uVar5 = 0;
        if (cVar4 != '\0') {
            pfVar6 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_01, 0);
            local_34 = *pfVar6;
            pfVar6 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_01, 1);
            this_00 = local_40;
            local_4c = *pfVar6;
            pfVar6 = (float*)math::Vector3T<float>::operator[](local_40, 2);
            new (&local_98) math::ColourHSL(local_34, local_4c, *pfVar6);
            uVar2 = local_50;
            cVar4 = TransformAABBVertex((HeightMap*)this, &local_98, param_3, local_50, param_5);
            if (cVar4 != '\0') {
                puVar7 = (undefined4*)math::Vector3T<float>::operator[](this_00, 0);
                local_40 = (Vector3T<float>*)CONCAT44(local_40._4_4_, *puVar7);
                pfVar6 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_01, 1);
                local_34 = *pfVar6;
                pfVar6 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_01, 2);
                fVar9 = local_34;
                new (&local_88) math::ColourHSL(local_40._0_4_, local_34, *pfVar6);
                uVar5 = TransformAABBVertex((HeightMap*)this, &local_88, param_3, uVar2, param_5);
                if ((char)uVar5 != '\0') {
                    math::Vector3T<float>::operator-=((Vector3T<float>*)&local_88, (Vector3T*)&local_60);
                    math::Vector3T<float>::operator-=((Vector3T<float>*)&local_98, (Vector3T*)&local_60);
                    local_78 = math::Vector3Cross<float>((Vector3T*)&local_98, (Vector3T*)&local_88);
                    local_70 = fVar9;
                    local_60.SetXYZ((Vector3T*)&local_78);
                    local_88.Normalize();
                    local_60.Normalize();
                    local_98.Normalize();
                    param_3->Set((Vector3T*)&local_88, 0.0);
                    (param_3 + 16)->Set((Vector3T*)&local_60, 0.0);
                    (param_3 + 32)->Set((Vector3T*)&local_98, 0.0);
                }
            }
        }
        return uVar5;
    }

    // 0x100491ec0, 880 bytes, placed by class name
    // HeightMap::AddLocationHeightOffset(int, int, int, int, int, int, int) const
    void HeightMap::AddLocationHeightOffset(int param_1, int param_2, int param_3, int param_4, int param_5,
                                            int param_6, int param_7) {
        bool bVar1;
        bool bVar2;
        int iVar3;
        int iVar4;
        shared_ptr* psVar5;
        MapSquare* pMVar6;
        vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>* pvVar7;
        vector<MapSquareStatus, eastl::allocator>* pvVar8;
        int iVar9;
        int iVar10;
        uint uVar11;
        int iVar12;

        iVar10 = param_2 + 63;
        if (-1 < param_2) {
            iVar10 = param_2;
        }
        iVar10 = iVar10 >> 6;
        iVar3 = field_0->GetMapSquareMinX();
        if ((iVar3 <= iVar10) && (iVar3 = field_0->GetMapSquareMaxX(), iVar10 <= iVar3)) {
            uVar11 = param_3 + 63;
            if (-1 < param_3) {
                uVar11 = param_3;
            }
            iVar12 = (int)uVar11 >> 6;
            iVar3 = field_0->GetMapSquareMinZ();
            if ((iVar3 <= iVar12) && (iVar3 = field_0->GetMapSquareMaxZ(), iVar12 <= iVar3)) {
                iVar3 = param_4 + param_2 + iVar10 * -64;
                psVar5 = (shared_ptr*)(field_0, iVar10, iVar12)->GetMapSquare();
                bVar1 = shared_ptr::operator_cast_to_bool(psVar5);
                if (bVar1) {
                    pMVar6 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)psVar5);
                    pMVar6->AddLocationHeightOffset(param_1, param_2 + iVar10 * -64, param_3 + iVar12 * -64, param_4,
                                                    param_5, param_6, param_7);
                }
                iVar9 = param_5 + param_3 + iVar12 * -64;
                if ((iVar3 < 64) || (iVar4 = field_0->GetMapSquareMaxX(), iVar4 <= iVar10)) {
                    bVar1 = false;
                } else {
                    pvVar7 = (vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>*)
                                 field_0->GetMapSquares();
                    iVar4 = field_0->GetMapSquareMinX();
                    pvVar8 = (vector<MapSquareStatus, eastl::allocator>*)
                        eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>::operator[](
                            pvVar7, (long)((iVar10 - iVar4) + 1));
                    iVar4 = field_0->GetMapSquareMinZ();
                    psVar5 = (shared_ptr*)eastl::vector<MapSquareStatus, eastl::allocator>::operator[](
                        pvVar8, (long)(iVar12 - iVar4));
                    bVar1 = shared_ptr::operator_cast_to_bool(psVar5);
                    if (bVar1) {
                        pMVar6 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)psVar5);
                        pMVar6->AddLocationHeightOffset(param_1, 0, param_3 - (uVar11 & 4294967232), iVar3 + -64,
                                                        param_5, param_6, param_7);
                    }
                }
                if (iVar9 < 64) {
                    bVar2 = false;
                } else {
                    iVar4 = field_0->GetMapSquareMaxZ();
                    if (iVar12 < iVar4) {
                        pvVar7 = (vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>*)
                                     field_0->GetMapSquares();
                        iVar4 = field_0->GetMapSquareMinX();
                        pvVar8 = (vector<MapSquareStatus, eastl::allocator>*)
                            eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>,
                                          eastl::allocator>::operator[](pvVar7, (long)(iVar10 - iVar4));
                        iVar4 = field_0->GetMapSquareMinZ();
                        psVar5 = (shared_ptr*)eastl::vector<MapSquareStatus, eastl::allocator>::operator[](
                            pvVar8, (long)((iVar12 - iVar4) + 1));
                        bVar2 = shared_ptr::operator_cast_to_bool(psVar5);
                        if (bVar2) {
                            pMVar6 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)psVar5);
                            pMVar6->AddLocationHeightOffset(param_1, param_2 % 64, 0, param_4, iVar9 + -64, param_6,
                                                            param_7);
                        }
                    } else {
                        bVar2 = false;
                    }
                }
                if ((bVar1 & bVar2) == 1) {
                    pvVar7 = (vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>*)
                                 field_0->GetMapSquares();
                    iVar4 = field_0->GetMapSquareMinX();
                    pvVar8 = (vector<MapSquareStatus, eastl::allocator>*)
                        eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>::operator[](
                            pvVar7, (long)((iVar10 - iVar4) + 1));
                    iVar10 = field_0->GetMapSquareMinZ();
                    psVar5 = (shared_ptr*)eastl::vector<MapSquareStatus, eastl::allocator>::operator[](
                        pvVar8, (long)((iVar12 - iVar10) + 1));
                    bVar1 = shared_ptr::operator_cast_to_bool(psVar5);
                    if (bVar1) {
                        pMVar6 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)psVar5);
                        pMVar6->AddLocationHeightOffset(param_1, 0, 0, iVar3 + -64, iVar9 + -64, param_6, param_7);
                    }
                }
            }
        }
    }

    // 0x100492230, 880 bytes, placed by class name
    // HeightMap::RemoveLocationHeightOffset(int, int, int, int, int, int, int) const
    void HeightMap::RemoveLocationHeightOffset(int param_1, int param_2, int param_3, int param_4, int param_5,
                                               int param_6, int param_7) {
        bool bVar1;
        bool bVar2;
        int iVar3;
        int iVar4;
        shared_ptr* psVar5;
        MapSquare* pMVar6;
        vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>* pvVar7;
        vector<MapSquareStatus, eastl::allocator>* pvVar8;
        int iVar9;
        int iVar10;
        uint uVar11;
        int iVar12;

        iVar10 = param_2 + 63;
        if (-1 < param_2) {
            iVar10 = param_2;
        }
        iVar10 = iVar10 >> 6;
        iVar3 = field_0->GetMapSquareMinX();
        if ((iVar3 <= iVar10) && (iVar3 = field_0->GetMapSquareMaxX(), iVar10 <= iVar3)) {
            uVar11 = param_3 + 63;
            if (-1 < param_3) {
                uVar11 = param_3;
            }
            iVar12 = (int)uVar11 >> 6;
            iVar3 = field_0->GetMapSquareMinZ();
            if ((iVar3 <= iVar12) && (iVar3 = field_0->GetMapSquareMaxZ(), iVar12 <= iVar3)) {
                iVar3 = param_4 + param_2 + iVar10 * -64;
                psVar5 = (shared_ptr*)(field_0, iVar10, iVar12)->GetMapSquare();
                bVar1 = shared_ptr::operator_cast_to_bool(psVar5);
                if (bVar1) {
                    pMVar6 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)psVar5);
                    pMVar6->RemoveLocationHeightOffset(param_1, param_2 + iVar10 * -64, param_3 + iVar12 * -64, param_4,
                                                       param_5, param_6, param_7);
                }
                iVar9 = param_5 + param_3 + iVar12 * -64;
                if ((iVar3 < 64) || (iVar4 = field_0->GetMapSquareMaxX(), iVar4 <= iVar10)) {
                    bVar1 = false;
                } else {
                    pvVar7 = (vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>*)
                                 field_0->GetMapSquares();
                    iVar4 = field_0->GetMapSquareMinX();
                    pvVar8 = (vector<MapSquareStatus, eastl::allocator>*)
                        eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>::operator[](
                            pvVar7, (long)((iVar10 - iVar4) + 1));
                    iVar4 = field_0->GetMapSquareMinZ();
                    psVar5 = (shared_ptr*)eastl::vector<MapSquareStatus, eastl::allocator>::operator[](
                        pvVar8, (long)(iVar12 - iVar4));
                    bVar1 = shared_ptr::operator_cast_to_bool(psVar5);
                    if (bVar1) {
                        pMVar6 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)psVar5);
                        pMVar6->RemoveLocationHeightOffset(param_1, 0, param_3 - (uVar11 & 4294967232), iVar3 + -64,
                                                           param_5, param_6, param_7);
                    }
                }
                if (iVar9 < 64) {
                    bVar2 = false;
                } else {
                    iVar4 = field_0->GetMapSquareMaxZ();
                    if (iVar12 < iVar4) {
                        pvVar7 = (vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>*)
                                     field_0->GetMapSquares();
                        iVar4 = field_0->GetMapSquareMinX();
                        pvVar8 = (vector<MapSquareStatus, eastl::allocator>*)
                            eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>,
                                          eastl::allocator>::operator[](pvVar7, (long)(iVar10 - iVar4));
                        iVar4 = field_0->GetMapSquareMinZ();
                        psVar5 = (shared_ptr*)eastl::vector<MapSquareStatus, eastl::allocator>::operator[](
                            pvVar8, (long)((iVar12 - iVar4) + 1));
                        bVar2 = shared_ptr::operator_cast_to_bool(psVar5);
                        if (bVar2) {
                            pMVar6 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)psVar5);
                            pMVar6->RemoveLocationHeightOffset(param_1, param_2 % 64, 0, param_4, iVar9 + -64, param_6,
                                                               param_7);
                        }
                    } else {
                        bVar2 = false;
                    }
                }
                if ((bVar1 & bVar2) == 1) {
                    pvVar7 = (vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>*)
                                 field_0->GetMapSquares();
                    iVar4 = field_0->GetMapSquareMinX();
                    pvVar8 = (vector<MapSquareStatus, eastl::allocator>*)
                        eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>::operator[](
                            pvVar7, (long)((iVar10 - iVar4) + 1));
                    iVar10 = field_0->GetMapSquareMinZ();
                    psVar5 = (shared_ptr*)eastl::vector<MapSquareStatus, eastl::allocator>::operator[](
                        pvVar8, (long)((iVar12 - iVar10) + 1));
                    bVar1 = shared_ptr::operator_cast_to_bool(psVar5);
                    if (bVar1) {
                        pMVar6 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)psVar5);
                        pMVar6->RemoveLocationHeightOffset(param_1, 0, 0, iVar3 + -64, iVar9 + -64, param_6, param_7);
                    }
                }
            }
        }
    }

} // namespace jag::game
