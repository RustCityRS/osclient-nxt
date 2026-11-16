// libs/graphics/runetek7/model/LocationHelpers.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class LocationHelpers {
    public:
        float* HillChangeVertex(HillChange arg1, int arg2, const LocationHillChangeData& arg3,
                                const Array<Array<int>>& arg4, const Array<Array<int>>& arg5,
                                const math::Vector3T<float>& arg6);
        int GetFloorOrCeilingHeightSkew(int arg1, int arg2, int arg3, int arg4, Rotation90 rotation90,
                                        const Array<Array<int>>& arg6, int arg7);
        uint64_t CalculateHillRotateMatrix(math::Matrix44T<float>& matrix44, int arg2, int arg3, int arg4, int arg5,
                                           Rotation90 rotation90, const Array<Array<int>>& arg7, int arg8);

        uint8_t _unknown_0[1];
    };

    // 0x10080b970
    float* LocationHelpers::HillChangeVertex(HillChange arg1, int arg2,
                                             const LocationHelpers::LocationHillChangeData& arg3,
                                             const Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>& arg4,
                                             const Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>& arg5,
                                             const math::Vector3T<float>& arg6) {
        float fVar1;
        int iVar2;
        int iVar3;
        float* pfVar4;
        uint32_t in_stack_ffffffffffffffbc;
        int in_stack_ffffffffffffffc0;

        switch (param_1) {
        case 1:
            pfVar4 = (float*)param_6->SSOBeginPtr();
            fVar1 = *pfVar4;
            pfVar4 = (float*)param_6->second();
            iVar2 = GetFloorOrCeilingHeightSkew(
                (LocationHelpers*)(unsigned long)(unsigned int)(int)fVar1, (int)*pfVar4, *param_3, param_3[1],
                (unsigned int)*(uint8_t*)(param_3 + 2), param_4,
                (Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>*)(((uint64_t)in_stack_ffffffffffffffbc
                                                                                  << 32) |
                                                                                 (uint32_t)param_3[3]),
                in_stack_ffffffffffffffc0);
            if (iVar2 == -2147483648) {
                LogAssert("floorHeight != constants::MapConstants::HEIGHT_MAP_NO_DATA",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/LocationHelpers.cpp",
                          171, nullptr);
            }
            pfVar4 = (float*)param_6->y();
            return (float*)(unsigned long)(unsigned int)(int)((float)iVar2 + *pfVar4);
        case 2:
            pfVar4 = (float*)param_6->y();
            iVar2 = (int)((*pfVar4 * 65535.0) / (float)param_3[4]);
            if (iVar2 < param_2) {
                pfVar4 = (float*)param_6->SSOBeginPtr();
                fVar1 = *pfVar4;
                pfVar4 = (float*)param_6->second();
                iVar3 = GetFloorOrCeilingHeightSkew(
                    (LocationHelpers*)(unsigned long)(unsigned int)(int)fVar1, (int)*pfVar4, *param_3, param_3[1],
                    (unsigned int)*(uint8_t*)(param_3 + 2), param_4,
                    (Array<Array<int, BucketAllocatorEASTL>,
                           BucketAllocatorEASTL>*)(((uint64_t)in_stack_ffffffffffffffbc << 32) | (uint32_t)param_3[3]),
                    in_stack_ffffffffffffffc0);
                if (iVar3 == -2147483648) {
                    LogAssert("floorHeight != constants::MapConstants::HEIGHT_MAP_NO_DATA",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "model/LocationHelpers.cpp",
                              183, nullptr);
                }
                pfVar4 = (float*)param_6->y();
                pfVar4 = (float*)(unsigned long)(unsigned int)(int)((float)((iVar3 * (param_2 - iVar2)) / param_2) +
                                                                    *pfVar4);
            }
            if (iVar2 < param_2) {
                return pfVar4;
            }
            break;
        case 4:
            pfVar4 = (float*)param_6->SSOBeginPtr();
            fVar1 = *pfVar4;
            pfVar4 = (float*)param_6->second();
            iVar2 = GetFloorOrCeilingHeightSkew(
                (LocationHelpers*)(unsigned long)(unsigned int)(int)fVar1, (int)*pfVar4, *param_3, param_3[1],
                (unsigned int)*(uint8_t*)(param_3 + 2), param_5,
                (Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>*)(((uint64_t)in_stack_ffffffffffffffbc
                                                                                  << 32) |
                                                                                 (uint32_t)param_3[3]),
                in_stack_ffffffffffffffc0);
            if (iVar2 != -2147483648) {
                pfVar4 = (float*)param_6->y();
                return (float*)(unsigned long)(unsigned int)(int)(((float)iVar2 + *pfVar4) - (float)param_3[5]);
            }
            break;
        case 5:
            pfVar4 = (float*)param_6->SSOBeginPtr();
            fVar1 = *pfVar4;
            pfVar4 = (float*)param_6->second();
            iVar2 = GetFloorOrCeilingHeightSkew(
                (LocationHelpers*)(unsigned long)(unsigned int)(int)fVar1, (int)*pfVar4, *param_3, param_3[1],
                (unsigned int)*(uint8_t*)(param_3 + 2), param_4,
                (Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>*)(((uint64_t)in_stack_ffffffffffffffbc
                                                                                  << 32) |
                                                                                 (uint32_t)param_3[3]),
                in_stack_ffffffffffffffc0);
            pfVar4 = (float*)param_6->SSOBeginPtr();
            fVar1 = *pfVar4;
            pfVar4 = (float*)param_6->second();
            iVar3 = GetFloorOrCeilingHeightSkew(
                (LocationHelpers*)(unsigned long)(unsigned int)(int)fVar1, (int)*pfVar4, *param_3, param_3[1],
                (unsigned int)*(uint8_t*)(param_3 + 2), param_5,
                (Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>*)(((uint64_t)in_stack_ffffffffffffffbc
                                                                                  << 32) |
                                                                                 (uint32_t)param_3[3]),
                in_stack_ffffffffffffffc0);
            if (iVar2 == -2147483648) {
                LogAssert("floorHeight != constants::MapConstants::HEIGHT_MAP_NO_DATA",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/LocationHelpers.cpp",
                          204, nullptr);
            }
            if (iVar3 != -2147483648) {
                pfVar4 = (float*)param_6->y();
                return (float*)(unsigned long)(unsigned int)(int)((float)iVar2 +
                                                                  ((float)(iVar3 - (param_2 + iVar2)) * *pfVar4) /
                                                                      (float)param_3[5]);
            }
        }
        pfVar4 = (float*)param_6->y();
        return (float*)(unsigned long)(unsigned int)(int)*pfVar4;
    }

    // 0x100815f00
    int LocationHelpers::GetFloorOrCeilingHeightSkew(
        int arg1, int arg2, int arg3, int arg4, Rotation90 rotation90,
        const Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>& arg6, int arg7) {
        int iVar2;
        uint32_t in_register_0000008c;

        int iVar9 = (int)this;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(((uint64_t)in_register_0000008c << 32) |
                                                                                (uint32_t)rotation90);
        char cVar1 = ((Array<game::VarValue>*)(((uint64_t)in_register_0000008c << 32) | (uint32_t)rotation90))->empty();
        if (cVar1) {
            return -2147483648;
        }
        cVar1 = (char)arg4;
        if (cVar1 == '\x03') {
            arg1 = -arg1;
            iVar2 = iVar9;
        } else {
            if (cVar1 == '\x02') {
                iVar9 = -iVar9;
                arg1 = -arg1;
                goto LAB_100815f63;
            }
            if (cVar1 != '\x01')
                goto LAB_100815f63;
            iVar2 = -iVar9;
        }
        iVar9 = arg1;
        arg1 = iVar2;
    LAB_100815f63:
        iVar2 = this_00->end();
        int iVar3 = ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_00)[0])->end();
        auto SVar4 = eastl::min<GraphicsQuality>(iVar2 * 128 - 129, arg2 / 2 + iVar9 + 128);
        unsigned int uVar5 = eastl::max<int>(0, SVar4);
        SVar4 = eastl::min<GraphicsQuality>(iVar3 * 128 - 129, arg3 / 2 + arg1 + 128);
        unsigned int uVar6 = eastl::max<int>(0, SVar4);
        unsigned int uVar10 = uVar5 + 127;
        if (-1 < (int)uVar5) {
            uVar10 = uVar5;
        }
        iVar9 = (int)uVar10 >> 7;
        uVar10 = uVar6 + 127;
        if (-1 < (int)uVar6) {
            uVar10 = uVar6;
        }
        int iVar11 = (int)uVar10 >> 7;
        uVar5 = uVar5 & 127;
        Array<int, BucketAllocatorEASTL>* pAVar7 = (Array<int, BucketAllocatorEASTL>*)(*this_00)[(long)iVar9];
        int* piVar8 = (int*)(*pAVar7)[(long)iVar11];
        iVar2 = *piVar8 * (128 - uVar5);
        pAVar7 = (Array<int, BucketAllocatorEASTL>*)(*this_00)[(long)(iVar9 + 1)];
        piVar8 = (int*)(*pAVar7)[(long)iVar11];
        iVar3 = *piVar8 * uVar5 + iVar2;
        iVar2 = *piVar8 * uVar5 + iVar2 + 127;
        if (-1 < iVar3) {
            iVar2 = iVar3;
        }
        pAVar7 = (Array<int, BucketAllocatorEASTL>*)(*this_00)[(long)iVar9];
        piVar8 = (int*)(*pAVar7)[(long)(iVar11 + 1)];
        int iVar12 = (128 - uVar5) * *piVar8;
        pAVar7 = (Array<int, BucketAllocatorEASTL>*)(*this_00)[(long)(iVar9 + 1)];
        piVar8 = (int*)(*pAVar7)[(long)(iVar11 + 1)];
        iVar3 = uVar5 * *piVar8 + iVar12;
        iVar9 = uVar5 * *piVar8 + 127 + iVar12;
        if (-1 < iVar3) {
            iVar9 = iVar3;
        }
        iVar3 = (128 - (uVar6 & 127)) * (iVar2 >> 7);
        iVar9 = (iVar9 >> 7) * (uVar6 & 127);
        iVar2 = iVar9 + iVar3;
        iVar9 = iVar9 + iVar3 + 127;
        if (-1 < iVar2) {
            iVar9 = iVar2;
        }
        return (iVar9 >> 7) - (int)arg6;
    }

    // 0x100816180
    uint64_t LocationHelpers::CalculateHillRotateMatrix(
        math::Matrix44T<float>& matrix44, int arg2, int arg3, int arg4, int arg5, Rotation90 rotation90,
        const Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>& arg7, int arg8) {
        int iVar3;
        int iVar4;
        float fVar8;
        float fVar9;
        uint32_t in_stack_ffffffffffffff7c;
        int in_stack_ffffffffffffff80;
        ColourHSL local_78;

        int iVar2 = (int)matrix44;
        unsigned int uVar5 = (int)(((unsigned int)((unsigned long)matrix44 >> 31) & 1) + iVar2) >> 1;
        unsigned int local_34 = -uVar5;
        int iVar6 = arg2 / 2;
        int local_38 = GetFloorOrCeilingHeightSkew(
            (LocationHelpers*)(unsigned long)uVar5, -iVar6, iVar2, arg2, arg5, rotation90,
            (Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>*)(((uint64_t)in_stack_ffffffffffffff7c
                                                                              << 32) |
                                                                             (uint32_t)arg7._0_4_),
            in_stack_ffffffffffffff80);
        int iVar1 = arg5;
        int local_3c = GetFloorOrCeilingHeightSkew(
            (LocationHelpers*)(unsigned long)local_34, -iVar6, iVar2, arg2, arg5, rotation90,
            (Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>*)(((uint64_t)in_stack_ffffffffffffff7c
                                                                              << 32) |
                                                                             (uint32_t)arg7._0_4_),
            in_stack_ffffffffffffff80);
        int local_40 = GetFloorOrCeilingHeightSkew(
            (LocationHelpers*)(unsigned long)uVar5, iVar6, iVar2, arg2, iVar1, rotation90,
            (Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>*)(((uint64_t)in_stack_ffffffffffffff7c
                                                                              << 32) |
                                                                             (uint32_t)arg7._0_4_),
            in_stack_ffffffffffffff80);
        int iVar7 = local_3c;
        LocationHelpers* this_00 = (LocationHelpers*)(unsigned long)local_34;
        local_34 = iVar2;
        iVar2 = GetFloorOrCeilingHeightSkew(
            this_00, iVar6, iVar2, arg2, iVar1, rotation90,
            (Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>*)(((uint64_t)in_stack_ffffffffffffff7c
                                                                              << 32) |
                                                                             (uint32_t)arg7._0_4_),
            in_stack_ffffffffffffff80);
        iVar1 = local_40;
        if ((((local_38 == -2147483648) || (iVar7 == -2147483648)) || (local_40 == -2147483648)) ||
            (iVar2 == -2147483648)) {
            LogAssert(
                "fr != constants::MapConstants::HEIGHT_MAP_NO_DATA && fl != "
                "constants::MapConstants::HEIGHT_MAP_NO_DATA && br != constants::MapConstants::HEIGHT_MAP_NO_DATA && "
                "bl != constants::MapConstants::HEIGHT_MAP_NO_DATA",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                "LocationHelpers.cpp",
                84, nullptr);
        }
        iVar6 = iVar2;
        if (iVar2 < iVar7) {
            iVar6 = iVar7;
        }
        iVar7 = local_40;
        if (local_40 < local_38) {
            iVar7 = local_38;
        }
        ((Matrix44T<float>*)(ReturnValue*)this)->SetToIdentity();
        if (arg2 != 0) {
            iVar3 = iVar2;
            if (iVar2 < iVar1) {
                iVar3 = iVar1;
            }
            iVar4 = local_3c;
            if (local_3c < local_38) {
                iVar4 = local_38;
            }
            fVar8 = (float)atan2((float)(iVar4 - iVar3), (float)arg2);
            fVar8 = (float)fmod(fVar8, 6.2831855f);
            if (fVar8 != 0.0) {
                if (arg3 != 0) {
                    fVar9 = (float)arg3;
                    if (fVar8 <= 3.1415927f) {
                        if (fVar9 < fVar8) {
                            fVar8 = fVar9;
                        }
                    } else if (fVar8 <= 6.2831855f - fVar9) {
                        fVar8 = 6.2831855f - fVar9;
                    }
                }
                math::Matrix33RotationX<float>(fVar8);
                (*((Matrix44T<float>*)(ReturnValue*)this)) *= &local_78;
            }
        }
        if (local_34 != 0) {
            fVar8 = (float)atan2((float)iVar7 - (float)iVar6, (float)(int)local_34);
            fVar8 = (float)fmod(fVar8, 6.2831855f);
            if (fVar8 != 0.0) {
                if (arg4 != 0) {
                    fVar9 = (float)arg4;
                    if (fVar8 <= 3.1415927f) {
                        if (fVar9 < fVar8) {
                            fVar8 = fVar9;
                        }
                    } else if (fVar8 <= 6.2831855f - fVar9) {
                        fVar8 = 6.2831855f - fVar9;
                    }
                }
                math::Matrix33RotationZ<float>(fVar8);
                (*((Matrix44T<float>*)(ReturnValue*)this)) *= &local_78;
            }
        }
        iVar7 = iVar1 + local_3c;
        if (iVar1 + local_3c <= iVar2 + local_38) {
            iVar7 = iVar2 + local_38;
        }
        if (iVar7 != 0) {
            local_78 = math::ColourHSL(0.0, (float)iVar7 * 0.5, 0.0);
            *this = math::Matrix44T<float>::Translate(local_78);
        }
        return 1;
    }

} // namespace jag::graphics
