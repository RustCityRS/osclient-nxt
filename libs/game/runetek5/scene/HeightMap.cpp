// libs/game/runetek5/scene/HeightMap.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game {
    class HeightMap {
    public:
        class FineAdjusted;
        uint8_t* GetFineHeight(int& arg1, int arg2, int arg3, int arg4, bool arg5,
                               HeightOffsetType heightOffsetType) const;
        HeightMap(const World& world);
        void GetTileHeight(int& arg1, int arg2, int arg3, int arg4, bool arg5, HeightOffsetType heightOffsetType) const;
        unsigned long AdjustFineForMapBoundary(FineAdjusted& fineAdjusted, int arg2, int arg3, int arg4, int arg5,
                                               int arg6) const;
        uint32_t GetFineWaterDepth(int arg1, int arg2, int arg3) const;
        shared_ptr* GetHeightMap(int arg1, int arg2, int arg3) const;
        shared_ptr* GetWaterHeights(int arg1, int arg2) const;
        bool TransformAABBVertex(math::Vector3T<float>& vector3, const math::Matrix44T<float>& matrix44, int arg3,
                                 HeightOffsetType heightOffsetType) const;
        uint32_t ApplyHillRotation(int arg1, const math::AABB& aabb, math::Matrix44T<float>& matrix44,
                                   HeightOffsetType heightOffsetType) const;
        void AddLocationHeightOffset(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7) const;
        void RemoveLocationHeightOffset(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7) const;

    private:
        World* field_0;
    };

    class HeightMap::FineAdjusted {
    public:
        FineAdjusted();
    };

    // 0x100030be0: HeightMap::FineAdjusted::FineAdjusted() has the same machine code as weak_ptr<oldscape::rs2lib::IfType>::weak_ptr()

    // 0x10048f190
    uint8_t* HeightMap::GetFineHeight(int& arg1, int arg2, int arg3, int arg4, bool arg5,
                                      HeightOffsetType heightOffsetType) const {
        int iVar3;
        uint8_t** ppuVar5;
        vector<eastl::vector<MapSquareStatus>>* this_00;
        vector<MapSquareStatus>* this_01;
        shared_ptr* this_02;
        MapSquare* this_03;
        int arg2_00;
        long lVar7;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        new (&local_40) shared_ptr();
        int iVar4 = arg3 + 8191;
        if (-1 < arg3) {
            iVar4 = arg3;
        }
        int iVar2 = arg4 + 8191;
        if (-1 < arg4) {
            iVar2 = arg4;
        }
        bool cVar1 = AdjustFineForMapBoundary(local_40, arg2_00, iVar4 >> 13, iVar2 >> 13, arg3 % 8192, arg4 % 8192);
        iVar4 = local_40;
        if (cVar1) {
            iVar3 = field_0->GetMapSquareMinX();
            iVar2 = local_40;
            if ((((iVar4 < iVar3) || (iVar3 = field_0->GetMapSquareMaxX(), iVar4 = local_3c, iVar3 < iVar2)) ||
                 (iVar3 = field_0->GetMapSquareMinZ(), iVar2 = local_3c, iVar4 < iVar3)) ||
                (iVar4 = field_0->GetMapSquareMaxZ(), iVar4 < iVar2)) {
                arg1 = 0;
                ppuVar5 = &DataStatus::MISSING;
                goto LAB_10048f317;
            }
            this_00 = field_0->GetMapSquares();
            lVar7 = (long)local_40;
            iVar4 = field_0->GetMapSquareMinX();
            this_01 = (vector<MapSquareStatus>*)(*this_00)[lVar7 - iVar4];
            lVar7 = (long)local_3c;
            iVar4 = field_0->GetMapSquareMinZ();
            this_02 = (shared_ptr*)(*this_01)[lVar7 - iVar4];
            if ((*(uint8_t**)(this_02 + 1) == DataStatus::MISSING) ||
                (cVar1 = field_0->IsTargetMapSquare(local_40, local_3c), !cVar1)) {
                arg1 = -1;
                return DataStatus::MISSING;
            }
            cVar1 = shared_ptr::operator_cast_to_bool(this_02);
            if (cVar1) {
                this_03 = (MapSquare*)(*this_02).operator->();
                return (uint8_t*)this_03->GetFineHeight(arg1, arg2, local_38, local_34, arg5, heightOffsetType);
            }
        }
        arg1 = -1;
        ppuVar5 = &DataStatus::NOTLOADED;
    LAB_10048f317:
        return *ppuVar5;
    }

    // 0x100491460
    HeightMap::HeightMap(const World& world) : field_0(world) {}

    // 0x100491480
    void HeightMap::GetTileHeight(int& arg1, int arg2, int arg3, int arg4, bool arg5,
                                  HeightOffsetType heightOffsetType) const {
        GetFineHeight(arg1, arg2, arg3 << 7, arg4 << 7, arg5, heightOffsetType);
    }

    // 0x1004914a0
    unsigned long HeightMap::AdjustFineForMapBoundary(HeightMap::FineAdjusted& fineAdjusted, int arg2, int arg3,
                                                      int arg4, int arg5, int arg6) const {
        bool bVar1;
        bool bVar2;
        bool cVar3;
        unsigned int uVar5;
        vector<eastl::vector<MapSquareStatus>>* pvVar6;
        vector<MapSquareStatus>* pvVar7;
        long lVar8;
        shared_ptr* psVar9;
        Location* pLVar10;
        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* this_01;
        int local_48;
        int local_3c;
        int local_38;
        int local_34;

        unsigned long uVar11 = (unsigned long)(unsigned int)arg3;
        int local_58 = arg6;
        int iVar4 = field_0->GetMapSquareMinX();
        uint8_t** ppuVar12 = (uint8_t**)(((uint64_t)((int64_t)(uVar11 >> 8)) << 8) | (uint8_t)1);
        if (iVar4 <= arg3) {
            iVar4 = field_0->GetMapSquareMaxX();
            if (((arg3 <= iVar4) && (iVar4 = field_0->GetMapSquareMinZ(), iVar4 <= arg4)) &&
                (iVar4 = field_0->GetMapSquareMaxZ(), arg4 <= iVar4)) {
                iVar4 = field_0->GetMapSquareMaxX();
                if (iVar4 < arg3) {
                    local_34 = arg3 - 1;
                    local_3c = 8192;
                LAB_10049154c:
                    bVar2 = true;
                } else {
                    iVar4 = field_0->GetMapSquareMinX();
                    if (arg3 < iVar4) {
                        local_34 = arg3 + 1;
                        local_3c = -1;
                        goto LAB_10049154c;
                    }
                    bVar2 = false;
                    local_3c = arg5;
                    local_34 = arg3;
                }
                iVar4 = field_0->GetMapSquareMaxZ();
                if (iVar4 < arg4) {
                    local_48 = arg4 - 1;
                    local_38 = 8192;
                LAB_10049159d:
                    bVar2 = true;
                } else {
                    iVar4 = field_0->GetMapSquareMinZ();
                    local_38 = arg6;
                    local_48 = arg4;
                    if (arg4 < iVar4) {
                        local_48 = arg4 + 1;
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
                        local_38 = arg6;
                        local_34 = arg3;
                        local_3c = arg5;
                        local_48 = arg4;
                    } else {
                        iVar4 = field_0->GetMapSquareMaxZ();
                        bVar1 = true;
                        if (iVar4 < local_48)
                            goto LAB_1004915e9;
                    }
                    pvVar6 = field_0->GetMapSquares();
                    iVar4 = field_0->GetMapSquareMinX();
                    pvVar7 = (vector<MapSquareStatus>*)(*pvVar6)[(long)(local_34 - iVar4)];
                    iVar4 = field_0->GetMapSquareMinZ();
                    lVar8 = (*pvVar7)[(long)(local_48 - iVar4)];
                    if (*(uint8_t**)(lVar8 + 16) == DataStatus::MISSING) {
                        bVar1 = false;
                        local_38 = arg6;
                        local_48 = arg4;
                        local_3c = arg5;
                        local_34 = arg3;
                    }
                }
                if (!bVar1) {
                    psVar9 = (shared_ptr*)field_0->GetMapSquare(local_34, local_48);
                    cVar3 = shared_ptr::operator_cast_to_bool(psVar9);
                    if (cVar3) {
                        pLVar10 = (Location*)(*psVar9).operator->();
                        cVar3 = (pLVar10->GetParentLocationType())->operator_cast_to_bool();
                        if (cVar3) {
                            pLVar10 = (Location*)(*psVar9).operator->();
                            this_01 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)
                                          pLVar10->GetParentLocationType();
                            cVar3 = ((Terrain*)(*this_01).operator->())->IsHeightZero();
                            if (!cVar3)
                                goto LAB_1004917f9;
                        }
                    }
                    if (local_3c == 8191) {
                        local_34 = local_34 + 1;
                        local_3c = -1;
                    } else if (local_3c == 0) {
                        local_34 = local_34 - 1;
                        local_3c = 8192;
                    }
                    if (local_38 == 8191) {
                        local_48 = local_48 + 1;
                        local_38 = -1;
                    } else if (local_38 == 0) {
                        local_48 = local_48 - 1;
                        local_38 = 8192;
                    }
                    iVar4 = field_0->GetMapSquareMinX();
                    if (((local_34 < iVar4) || (iVar4 = field_0->GetMapSquareMaxX(), iVar4 < local_34)) ||
                        ((iVar4 = field_0->GetMapSquareMinZ(),
                          local_48 < iVar4 || (iVar4 = field_0->GetMapSquareMaxZ(), iVar4 < local_48)))) {
                        local_38 = arg6;
                        local_34 = arg3;
                        local_3c = arg5;
                        local_48 = arg4;
                    }
                    pvVar6 = field_0->GetMapSquares();
                    iVar4 = field_0->GetMapSquareMinX();
                    pvVar7 = (vector<MapSquareStatus>*)(*pvVar6)[(long)(local_34 - iVar4)];
                    iVar4 = field_0->GetMapSquareMinZ();
                    lVar8 = (*pvVar7)[(long)(local_48 - iVar4)];
                    if (*(uint8_t**)(lVar8 + 16) == DataStatus::MISSING) {
                        local_38 = arg6;
                        local_48 = arg4;
                        local_3c = arg5;
                        local_34 = arg3;
                    }
                }
            LAB_1004917f9:
                pvVar6 = field_0->GetMapSquares();
                iVar4 = field_0->GetMapSquareMinX();
                pvVar7 = (vector<MapSquareStatus>*)(*pvVar6)[(long)(local_34 - iVar4)];
                iVar4 = field_0->GetMapSquareMinZ();
                psVar9 = (shared_ptr*)(*pvVar7)[(long)(local_48 - iVar4)];
                ppuVar12 = &DataStatus::MISSING;
                if (*(uint8_t**)(psVar9 + 1) != DataStatus::MISSING) {
                    cVar3 = field_0->IsTargetMapSquare(local_34, local_48);
                    ppuVar12 = (uint8_t**)(((uint64_t)((int64_t)((unsigned long)ppuVar12 >> 8)) << 8) | (uint8_t)1);
                    if (cVar3) {
                        uVar5 = shared_ptr::operator_cast_to_bool(psVar9);
                        ppuVar12 = (uint8_t**)(unsigned long)uVar5;
                        local_58 = local_38;
                        arg5 = local_3c;
                        arg4 = local_48;
                        arg3 = local_34;
                        if ((char)uVar5 == '\0')
                            goto LAB_1004918a8;
                    }
                    goto LAB_100491896;
                }
            }
            ppuVar12 = (uint8_t**)(((uint64_t)((int64_t)((unsigned long)ppuVar12 >> 8)) << 8) | (uint8_t)1);
        }
    LAB_100491896:
        *(int*)fineAdjusted = arg3;
        *(int*)(fineAdjusted + 4) = arg4;
        *(int*)(fineAdjusted + 8) = arg5;
        *(int*)(fineAdjusted + 12) = local_58;
    LAB_1004918a8:
        return (unsigned long)ppuVar12 & 4294967295;
    }

    // 0x1004918e0
    uint32_t HeightMap::GetFineWaterDepth(int arg1, int arg2, int arg3) const {
        int iVar3;
        vector<eastl::vector<MapSquareStatus>>* this_00;
        vector<MapSquareStatus>* this_01;
        shared_ptr* this_02;
        int arg2_00;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        new (&local_40) shared_ptr();
        int iVar4 = arg2 + 8191;
        if (-1 < arg2) {
            iVar4 = arg2;
        }
        int iVar2 = arg3 + 8191;
        if (-1 < arg3) {
            iVar2 = arg3;
        }
        bool cVar1 = AdjustFineForMapBoundary(local_40, arg2_00, iVar4 >> 13, iVar2 >> 13, arg2 % 8192, arg3 % 8192);
        iVar4 = local_40;
        if (cVar1) {
            iVar3 = field_0->GetMapSquareMinX();
            iVar2 = local_40;
            if (iVar4 < iVar3) {
                return 0;
            }
            iVar3 = field_0->GetMapSquareMaxX();
            iVar4 = local_3c;
            if (iVar3 < iVar2) {
                return 0;
            }
            iVar3 = field_0->GetMapSquareMinZ();
            iVar2 = local_3c;
            if (iVar4 < iVar3) {
                return 0;
            }
            iVar4 = field_0->GetMapSquareMaxZ();
            if (iVar4 < iVar2) {
                return 0;
            }
            this_00 = field_0->GetMapSquares();
            iVar4 = field_0->GetMapSquareMinX();
            this_01 = (vector<MapSquareStatus>*)(*this_00)[(long)local_40 - (long)iVar4];
            iVar4 = field_0->GetMapSquareMinZ();
            this_02 = (shared_ptr*)(*this_01)[(long)local_3c - (long)iVar4];
            if (*(uint8_t**)(this_02 + 1) != DataStatus::MISSING) {
                cVar1 = shared_ptr::operator_cast_to_bool(this_02);
                if (!cVar1) {
                    return 4294967295;
                }
                return ((MapSquare*)(*this_02).operator->())->GetFineWaterDepth(arg1, local_38, local_34);
            }
        }
        return 4294967295;
    }

    // 0x100491a50
    shared_ptr* HeightMap::GetHeightMap(int arg1, int arg2, int arg3) const {
        int iVar3;
        shared_ptr* this_00;

        int iVar4 = arg2 + 63;
        if (-1 < arg2) {
            iVar4 = arg2;
        }
        iVar4 = iVar4 >> 6;
        int iVar2 = field_0->GetMapSquareMinX();
        shared_ptr* psVar5 = (shared_ptr*)&NullRawHeightMap;
        if (iVar2 <= iVar4) {
            iVar2 = field_0->GetMapSquareMaxX();
            if (iVar4 <= iVar2) {
                iVar2 = arg3 + 63;
                if (-1 < arg3) {
                    iVar2 = arg3;
                }
                iVar2 = iVar2 >> 6;
                iVar3 = field_0->GetMapSquareMinZ();
                if (iVar3 <= iVar2) {
                    iVar3 = field_0->GetMapSquareMaxZ();
                    if (iVar2 <= iVar3) {
                        this_00 = (shared_ptr*)field_0->GetMapSquare(iVar4, iVar2);
                        if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                            psVar5 = ((MapSquare*)(*this_00).operator->())->GetHeightMap(arg1);
                        }
                    }
                }
            }
        }
        return psVar5;
    }

    // 0x100491b10
    shared_ptr* HeightMap::GetWaterHeights(int arg1, int arg2) const {
        int iVar3;
        shared_ptr* this_00;

        int iVar4 = arg1 + 63;
        if (-1 < arg1) {
            iVar4 = arg1;
        }
        iVar4 = iVar4 >> 6;
        int iVar2 = field_0->GetMapSquareMinX();
        shared_ptr* psVar5 = (shared_ptr*)&NullRawWaterHeights;
        if (iVar2 <= iVar4) {
            iVar2 = field_0->GetMapSquareMaxX();
            if (iVar4 <= iVar2) {
                iVar2 = arg2 + 63;
                if (-1 < arg2) {
                    iVar2 = arg2;
                }
                iVar2 = iVar2 >> 6;
                iVar3 = field_0->GetMapSquareMinZ();
                if (iVar3 <= iVar2) {
                    iVar3 = field_0->GetMapSquareMaxZ();
                    if (iVar2 <= iVar3) {
                        this_00 = (shared_ptr*)field_0->GetMapSquare(iVar4, iVar2);
                        if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                            psVar5 = ((MapSquare*)(*this_00).operator->())->GetWaterHeights();
                        }
                    }
                }
            }
        }
        return psVar5;
    }

    // 0x100491c00
    bool HeightMap::TransformAABBVertex(math::Vector3T<float>& vector3, const math::Matrix44T<float>& matrix44,
                                        int arg3, HeightOffsetType heightOffsetType) const {
        int local_38;
        float local_34;

        vector3 *= matrix44;
        float* pfVar3 = &vector3[0];
        float fVar1 = *pfVar3;
        pfVar3 = &vector3[2];
        auto puVar4 = GetFineHeight(local_38, arg3, (int)fVar1, (int)*pfVar3, false, heightOffsetType);
        uint8_t* puVar2 = DataStatus::NOTLOADED;
        if (puVar4 != DataStatus::NOTLOADED) {
            local_34 = (float)local_38;
            pfVar3 = &vector3[1];
            *pfVar3 = local_34;
        }
        return puVar4 != puVar2;
    }

    // 0x100491cb0
    uint32_t HeightMap::ApplyHillRotation(int arg1, const math::AABB& aabb, math::Matrix44T<float>& matrix44,
                                          HeightOffsetType heightOffsetType) const {
        Vector3T<float>* this_01;
        float* pfVar4;
        uint32_t* puVar5;
        float fVar6;
        ColourHSL local_98;
        ColourHSL local_88;
        uint64_t local_78;
        float local_70;
        float local_4c;
        float local_34;

        auto local_40 = aabb.GetScreen();
        auto this_02 = aabb.SSOBeginPtr();
        uint32_t local_58 = *(uint32_t*)(this_02 + 1);
        ReturnValue local_60 = *this_02;
        bool cVar2 = TransformAABBVertex(local_60, matrix44, arg1, heightOffsetType);
        uint32_t uVar3 = 0;
        if (cVar2) {
            pfVar4 = (float*)(*this_02)[0];
            local_34 = *pfVar4;
            pfVar4 = (float*)(*this_02)[1];
            this_01 = local_40;
            local_4c = *pfVar4;
            pfVar4 = (float*)(*local_40)[2];
            local_98 = math::ColourHSL(local_34, local_4c, *pfVar4);
            cVar2 = TransformAABBVertex(local_98, matrix44, arg1, heightOffsetType);
            if (cVar2) {
                puVar5 = (uint32_t*)(*this_01)[0];
                local_40 = (Vector3T<float>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(*puVar5));
                pfVar4 = (float*)(*this_02)[1];
                local_34 = *pfVar4;
                pfVar4 = (float*)(*this_02)[2];
                fVar6 = local_34;
                local_88 = math::ColourHSL(local_40._0_4_, local_34, *pfVar4);
                uVar3 = TransformAABBVertex(local_88, matrix44, arg1, heightOffsetType);
                if ((char)uVar3 != '\0') {
                    local_88 -= local_60;
                    local_98 -= local_60;
                    local_78 = math::Vector3Cross<float>(local_98, local_88);
                    local_70 = fVar6;
                    local_60.SetXYZ(local_78);
                    local_88 = math::Vector3T<float>::Normalize();
                    local_60 = math::Vector3T<float>::Normalize();
                    local_98 = math::Vector3T<float>::Normalize();
                    matrix44.Set(local_88, 0.0);
                    ((matrix44 + 16))->Set(local_60, 0.0);
                    ((matrix44 + 32))->Set(local_98, 0.0);
                }
            }
        }
        return uVar3;
    }

    // 0x100491ec0
    void HeightMap::AddLocationHeightOffset(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6,
                                            int arg7) const {
        uint8_t bVar2;
        uint8_t bVar3;
        int iVar5;
        shared_ptr* psVar6;
        MapSquare* pMVar7;
        vector<eastl::vector<MapSquareStatus>>* pvVar8;
        vector<MapSquareStatus>* pvVar9;
        int iVar10;
        unsigned int uVar12;
        int arg2_00;

        int iVar11 = arg2 + 63;
        if (-1 < arg2) {
            iVar11 = arg2;
        }
        iVar11 = iVar11 >> 6;
        int iVar4 = field_0->GetMapSquareMinX();
        if ((iVar4 <= iVar11) && (iVar4 = field_0->GetMapSquareMaxX(), iVar11 <= iVar4)) {
            uVar12 = arg3 + 63;
            if (-1 < arg3) {
                uVar12 = arg3;
            }
            arg2_00 = (int)uVar12 >> 6;
            iVar4 = field_0->GetMapSquareMinZ();
            if ((iVar4 <= arg2_00) && (iVar4 = field_0->GetMapSquareMaxZ(), arg2_00 <= iVar4)) {
                iVar4 = arg4 + arg2 + iVar11 * -64;
                psVar6 = (shared_ptr*)field_0->GetMapSquare(iVar11, arg2_00);
                if (shared_ptr::operator_cast_to_bool(psVar6)) {
                    pMVar7 = (MapSquare*)(*psVar6).operator->();
                    pMVar7->AddLocationHeightOffset(arg1, arg2 + iVar11 * -64, arg3 + arg2_00 * -64, arg4, arg5, arg6,
                                                    arg7);
                }
                iVar10 = arg5 + arg3 + arg2_00 * -64;
                if ((iVar4 < 64) || (iVar5 = field_0->GetMapSquareMaxX(), iVar5 <= iVar11)) {
                    bVar3 = 0;
                } else {
                    pvVar8 = field_0->GetMapSquares();
                    iVar5 = field_0->GetMapSquareMinX();
                    pvVar9 = (vector<MapSquareStatus>*)(*pvVar8)[(long)((iVar11 - iVar5) + 1)];
                    iVar5 = field_0->GetMapSquareMinZ();
                    psVar6 = (shared_ptr*)(*pvVar9)[(long)(arg2_00 - iVar5)];
                    bVar2 = shared_ptr::operator_cast_to_bool(psVar6);
                    bVar3 = 0;
                    if (bVar2 != 0) {
                        pMVar7 = (MapSquare*)(*psVar6).operator->();
                        pMVar7->AddLocationHeightOffset(arg1, 0, arg3 - (uVar12 & 4294967232), iVar4 - 64, arg5, arg6,
                                                        arg7);
                        bVar3 = bVar2;
                    }
                }
                if (iVar10 < 64) {
                    bVar2 = 0;
                } else {
                    iVar5 = field_0->GetMapSquareMaxZ();
                    if (arg2_00 < iVar5) {
                        pvVar8 = field_0->GetMapSquares();
                        iVar5 = field_0->GetMapSquareMinX();
                        pvVar9 = (vector<MapSquareStatus>*)(*pvVar8)[(long)(iVar11 - iVar5)];
                        iVar5 = field_0->GetMapSquareMinZ();
                        psVar6 = (shared_ptr*)(*pvVar9)[(long)((arg2_00 - iVar5) + 1)];
                        bVar2 = shared_ptr::operator_cast_to_bool(psVar6);
                        if (bVar2 != 0) {
                            pMVar7 = (MapSquare*)(*psVar6).operator->();
                            pMVar7->AddLocationHeightOffset(arg1, arg2 % 64, 0, arg4, iVar10 - 64, arg6, arg7);
                        }
                    } else {
                        bVar2 = 0;
                    }
                }
                if ((bVar3 & bVar2) == 1) {
                    pvVar8 = field_0->GetMapSquares();
                    iVar5 = field_0->GetMapSquareMinX();
                    pvVar9 = (vector<MapSquareStatus>*)(*pvVar8)[(long)((iVar11 - iVar5) + 1)];
                    iVar11 = field_0->GetMapSquareMinZ();
                    psVar6 = (shared_ptr*)(*pvVar9)[(long)((arg2_00 - iVar11) + 1)];
                    if (shared_ptr::operator_cast_to_bool(psVar6)) {
                        pMVar7 = (MapSquare*)(*psVar6).operator->();
                        pMVar7->AddLocationHeightOffset(arg1, 0, 0, iVar4 - 64, iVar10 - 64, arg6, arg7);
                    }
                }
            }
        }
    }

    // 0x100492230
    void HeightMap::RemoveLocationHeightOffset(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6,
                                               int arg7) const {
        uint8_t bVar2;
        uint8_t bVar3;
        int iVar5;
        shared_ptr* psVar6;
        MapSquare* pMVar7;
        vector<eastl::vector<MapSquareStatus>>* pvVar8;
        vector<MapSquareStatus>* pvVar9;
        int iVar10;
        unsigned int uVar12;
        int arg2_00;

        int iVar11 = arg2 + 63;
        if (-1 < arg2) {
            iVar11 = arg2;
        }
        iVar11 = iVar11 >> 6;
        int iVar4 = field_0->GetMapSquareMinX();
        if ((iVar4 <= iVar11) && (iVar4 = field_0->GetMapSquareMaxX(), iVar11 <= iVar4)) {
            uVar12 = arg3 + 63;
            if (-1 < arg3) {
                uVar12 = arg3;
            }
            arg2_00 = (int)uVar12 >> 6;
            iVar4 = field_0->GetMapSquareMinZ();
            if ((iVar4 <= arg2_00) && (iVar4 = field_0->GetMapSquareMaxZ(), arg2_00 <= iVar4)) {
                iVar4 = arg4 + arg2 + iVar11 * -64;
                psVar6 = (shared_ptr*)field_0->GetMapSquare(iVar11, arg2_00);
                if (shared_ptr::operator_cast_to_bool(psVar6)) {
                    pMVar7 = (MapSquare*)(*psVar6).operator->();
                    pMVar7->RemoveLocationHeightOffset(arg1, arg2 + iVar11 * -64, arg3 + arg2_00 * -64, arg4, arg5,
                                                       arg6, arg7);
                }
                iVar10 = arg5 + arg3 + arg2_00 * -64;
                if ((iVar4 < 64) || (iVar5 = field_0->GetMapSquareMaxX(), iVar5 <= iVar11)) {
                    bVar3 = 0;
                } else {
                    pvVar8 = field_0->GetMapSquares();
                    iVar5 = field_0->GetMapSquareMinX();
                    pvVar9 = (vector<MapSquareStatus>*)(*pvVar8)[(long)((iVar11 - iVar5) + 1)];
                    iVar5 = field_0->GetMapSquareMinZ();
                    psVar6 = (shared_ptr*)(*pvVar9)[(long)(arg2_00 - iVar5)];
                    bVar2 = shared_ptr::operator_cast_to_bool(psVar6);
                    bVar3 = 0;
                    if (bVar2 != 0) {
                        pMVar7 = (MapSquare*)(*psVar6).operator->();
                        pMVar7->RemoveLocationHeightOffset(arg1, 0, arg3 - (uVar12 & 4294967232), iVar4 - 64, arg5,
                                                           arg6, arg7);
                        bVar3 = bVar2;
                    }
                }
                if (iVar10 < 64) {
                    bVar2 = 0;
                } else {
                    iVar5 = field_0->GetMapSquareMaxZ();
                    if (arg2_00 < iVar5) {
                        pvVar8 = field_0->GetMapSquares();
                        iVar5 = field_0->GetMapSquareMinX();
                        pvVar9 = (vector<MapSquareStatus>*)(*pvVar8)[(long)(iVar11 - iVar5)];
                        iVar5 = field_0->GetMapSquareMinZ();
                        psVar6 = (shared_ptr*)(*pvVar9)[(long)((arg2_00 - iVar5) + 1)];
                        bVar2 = shared_ptr::operator_cast_to_bool(psVar6);
                        if (bVar2 != 0) {
                            pMVar7 = (MapSquare*)(*psVar6).operator->();
                            pMVar7->RemoveLocationHeightOffset(arg1, arg2 % 64, 0, arg4, iVar10 - 64, arg6, arg7);
                        }
                    } else {
                        bVar2 = 0;
                    }
                }
                if ((bVar3 & bVar2) == 1) {
                    pvVar8 = field_0->GetMapSquares();
                    iVar5 = field_0->GetMapSquareMinX();
                    pvVar9 = (vector<MapSquareStatus>*)(*pvVar8)[(long)((iVar11 - iVar5) + 1)];
                    iVar11 = field_0->GetMapSquareMinZ();
                    psVar6 = (shared_ptr*)(*pvVar9)[(long)((arg2_00 - iVar11) + 1)];
                    if (shared_ptr::operator_cast_to_bool(psVar6)) {
                        pMVar7 = (MapSquare*)(*psVar6).operator->();
                        pMVar7->RemoveLocationHeightOffset(arg1, 0, 0, iVar4 - 64, iVar10 - 64, arg6, arg7);
                    }
                }
            }
        }
    }

} // namespace jag::game
