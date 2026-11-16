// libs/graphics/runetek7/model/LocationHelpers.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class LocationHelpers {
    public:
        float* HillChangeVertex(HillChange, int, LocationHillChangeData const&,
                                Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&,
                                Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&,
                                math::Vector3T<float> const&);
        int GetFloorOrCeilingHeightSkew(int, int, int, int, Rotation90,
                                        Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&, int);
        CalculateHillRotateMatrix(math::Matrix44T<float>&, int, int, int, int, Rotation90,
                                  Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&, int);
    };

    // 0x10080b970, 752 bytes, placed by class name and debug map
    // LocationHelpers::HillChangeVertex(HillChange, int, LocationHelpers::LocationHillChangeData const&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&, math::Vector3T<float> const&)
    float* LocationHelpers::HillChangeVertex(undefined4 param_1, type* param_2, undefined4* param_3, undefined8 param_4,
                                             undefined8 param_5, Layout* param_6) {
        float fVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        float* pfVar5;
        vector* pvVar6;
        type* ptVar7;

        iVar2 = (int)param_2;
        switch (param_1) {
        case 1:
            pvVar6 = eastl::string::Layout::SSOBeginPtr(param_6, param_2);
            fVar1 = *(float*)pvVar6;
            pfVar5 = (float*)param_6->second();
            iVar2 = GetFloorOrCeilingHeightSkew((int)fVar1, (int)*pfVar5, *param_3, param_3[1],
                                                *(undefined1*)(param_3 + 2), param_4, param_3[3]);
            if (iVar2 == -2147483648) {
                /* WARNING: Subroutine does not return */
                LogAssert("floorHeight != constants::MapConstants::HEIGHT_MAP_NO_DATA",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/LocationHelpers.cpp",
                          171, (char*)0);
            }
            pfVar5 = (float*)param_6->y();
            return (float*)(ulong)(uint)(int)((float)iVar2 + *pfVar5);
        case 2:
            pfVar5 = (float*)param_6->y();
            iVar3 = (int)((*pfVar5 * 65535.0) / (float)(int)param_3[4]);
            if (iVar3 < iVar2) {
                pvVar6 = eastl::string::Layout::SSOBeginPtr(param_6, (type*)((ulong)param_2 & 4294967295));
                fVar1 = *(float*)pvVar6;
                pfVar5 = (float*)param_6->second();
                iVar4 = GetFloorOrCeilingHeightSkew((int)fVar1, (int)*pfVar5, *param_3, param_3[1],
                                                    *(undefined1*)(param_3 + 2), param_4, param_3[3]);
                if (iVar4 == -2147483648) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("floorHeight != constants::MapConstants::HEIGHT_MAP_NO_DATA",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "model/LocationHelpers.cpp",
                              183, (char*)0);
                }
                pfVar5 = (float*)param_6->y();
                pfVar5 = (float*)(ulong)(uint)(int)((float)((iVar4 * (iVar2 - iVar3)) / iVar2) + *pfVar5);
            }
            if (iVar3 < iVar2) {
                return pfVar5;
            }
            break;
        case 4:
            pvVar6 = eastl::string::Layout::SSOBeginPtr(param_6, param_2);
            fVar1 = *(float*)pvVar6;
            pfVar5 = (float*)param_6->second();
            iVar2 = GetFloorOrCeilingHeightSkew((int)fVar1, (int)*pfVar5, *param_3, param_3[1],
                                                *(undefined1*)(param_3 + 2), param_5, param_3[3]);
            if (iVar2 != -2147483648) {
                pfVar5 = (float*)param_6->y();
                return (float*)(ulong)(uint)(int)(((float)iVar2 + *pfVar5) - (float)(int)param_3[5]);
            }
            break;
        case 5:
            pvVar6 = eastl::string::Layout::SSOBeginPtr(param_6, param_2);
            fVar1 = *(float*)pvVar6;
            pfVar5 = (float*)param_6->second();
            ptVar7 = (type*)(ulong)(uint)(int)*pfVar5;
            iVar3 = GetFloorOrCeilingHeightSkew((int)fVar1, ptVar7, *param_3, param_3[1], *(undefined1*)(param_3 + 2),
                                                param_4, param_3[3]);
            pvVar6 = eastl::string::Layout::SSOBeginPtr(param_6, ptVar7);
            fVar1 = *(float*)pvVar6;
            pfVar5 = (float*)param_6->second();
            iVar4 = GetFloorOrCeilingHeightSkew((int)fVar1, (int)*pfVar5, *param_3, param_3[1],
                                                *(undefined1*)(param_3 + 2), param_5, param_3[3]);
            if (iVar3 == -2147483648) {
                /* WARNING: Subroutine does not return */
                LogAssert("floorHeight != constants::MapConstants::HEIGHT_MAP_NO_DATA",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "model/LocationHelpers.cpp",
                          204, (char*)0);
            }
            if (iVar4 != -2147483648) {
                pfVar5 = (float*)param_6->y();
                return (float*)(ulong)(uint)(int)((float)iVar3 + ((float)(iVar4 - (iVar2 + iVar3)) * *pfVar5) /
                                                                     (float)(int)param_3[5]);
            }
        }
        pfVar5 = (float*)param_6->y();
        return (float*)(ulong)(uint)(int)*pfVar5;
    }

    // 0x100815f00, 512 bytes, placed by class name
    // LocationHelpers::GetFloorOrCeilingHeightSkew(int, int, int, int, Rotation90, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&, int)
    int LocationHelpers::GetFloorOrCeilingHeightSkew(int param_1, int param_2, int param_3, int param_4, char param_5,
                                                     Array<game::VarValue, eastl::allocator>* param_6, int param_7) {
        int iVar2;
        int iVar3;
        uint uVar4;
        int iVar5;
        uint uVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this;
        Array<int, BucketAllocatorEASTL>* pAVar7;
        int* piVar8;
        uint uVar9;
        int iVar10;
        int iVar11;

        if (param_6->empty() != '\0') {
            return -2147483648;
        }
        if (param_5 == '\x03') {
            iVar5 = param_1;
            param_1 = -param_2;
        } else if (param_5 == '\x02') {
            param_1 = -param_1;
            iVar5 = -param_2;
        } else {
            iVar5 = param_2;
            if (param_5 == '\x01') {
                iVar5 = -param_1;
                param_1 = param_2;
            }
        }
        iVar2 = param_6->end();
        this = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
            Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>::operator[](
                (Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>*)param_6, 0);
        iVar3 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this);
        iVar2 = eastl::min<GraphicsQuality>(iVar2 * 128 + -129, param_3 / 2 + param_1 + 128);
        uVar4 = eastl::max<int>(0, iVar2);
        iVar5 = eastl::min<GraphicsQuality>(iVar3 * 128 + -129, param_4 / 2 + iVar5 + 128);
        uVar6 = eastl::max<int>(0, iVar5);
        uVar9 = uVar4 + 127;
        if (-1 < (int)uVar4) {
            uVar9 = uVar4;
        }
        iVar5 = (int)uVar9 >> 7;
        uVar9 = uVar6 + 127;
        if (-1 < (int)uVar6) {
            uVar9 = uVar6;
        }
        iVar10 = (int)uVar9 >> 7;
        uVar4 = uVar4 & 127;
        pAVar7 = (Array<int, BucketAllocatorEASTL>*)
            Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>::operator[](
                (Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>*)param_6, (long)iVar5);
        piVar8 = (int*)Array<int, BucketAllocatorEASTL>::operator[](pAVar7, (long)iVar10);
        iVar2 = *piVar8 * (128 - uVar4);
        pAVar7 = (Array<int, BucketAllocatorEASTL>*)
            Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>::operator[](
                (Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>*)param_6, (long)(iVar5 + 1));
        piVar8 = (int*)Array<int, BucketAllocatorEASTL>::operator[](pAVar7, (long)iVar10);
        iVar3 = *piVar8 * uVar4 + iVar2;
        iVar2 = *piVar8 * uVar4 + iVar2 + 127;
        if (-1 < iVar3) {
            iVar2 = iVar3;
        }
        pAVar7 = (Array<int, BucketAllocatorEASTL>*)
            Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>::operator[](
                (Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>*)param_6, (long)iVar5);
        piVar8 = (int*)Array<int, BucketAllocatorEASTL>::operator[](pAVar7, (long)(iVar10 + 1));
        iVar11 = (128 - uVar4) * *piVar8;
        pAVar7 = (Array<int, BucketAllocatorEASTL>*)
            Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>::operator[](
                (Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>*)param_6, (long)(iVar5 + 1));
        piVar8 = (int*)Array<int, BucketAllocatorEASTL>::operator[](pAVar7, (long)(iVar10 + 1));
        iVar3 = uVar4 * *piVar8 + iVar11;
        iVar5 = uVar4 * *piVar8 + 127 + iVar11;
        if (-1 < iVar3) {
            iVar5 = iVar3;
        }
        iVar3 = (128 - (uVar6 & 127)) * (iVar2 >> 7);
        iVar5 = (iVar5 >> 7) * (uVar6 & 127);
        iVar2 = iVar5 + iVar3;
        iVar5 = iVar5 + iVar3 + 127;
        if (-1 < iVar2) {
            iVar5 = iVar2;
        }
        return (iVar5 >> 7) - param_7;
    }

    // 0x100816180, 672 bytes, placed by class name
    // LocationHelpers::CalculateHillRotateMatrix(math::Matrix44T<float>&, int, int, int, int, Rotation90, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&, int)
    undefined8 LocationHelpers::CalculateHillRotateMatrix(Matrix44T<float>* param_1, int param_2, int param_3,
                                                          int param_4, int param_5, undefined4 param_6,
                                                          undefined8 param_7, undefined4 param_8) {
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        float fVar8;
        float extraout_XMM0_Da;
        float fVar9;
        ColourHSL local_78[2];
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        iVar4 = param_2 / 2;
        local_34 = -iVar4;
        iVar5 = param_3 / 2;
        local_38 = GetFloorOrCeilingHeightSkew(iVar4, -iVar5, param_2, param_3, param_6, param_7, param_8);
        local_3c = GetFloorOrCeilingHeightSkew(local_34, -iVar5, param_2, param_3, param_6, param_7, param_8);
        local_40 = GetFloorOrCeilingHeightSkew(iVar4, iVar5, param_2, param_3, param_6, param_7, param_8);
        iVar4 = local_34;
        iVar7 = local_3c;
        local_34 = param_2;
        iVar5 = GetFloorOrCeilingHeightSkew(iVar4, iVar5, param_2, param_3, param_6, param_7, param_8);
        iVar4 = local_40;
        if ((((local_38 == -2147483648) || (iVar7 == -2147483648)) || (local_40 == -2147483648)) ||
            (iVar5 == -2147483648)) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "fr != constants::MapConstants::HEIGHT_MAP_NO_DATA && fl != "
                "constants::MapConstants::HEIGHT_MAP_NO_DATA && br != constants::MapConstants::HEIGHT_MAP_NO_DATA && "
                "bl != constants::MapConstants::HEIGHT_MAP_NO_DATA",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                "LocationHelpers.cpp",
                84, (char*)0);
        }
        iVar6 = iVar5;
        if (iVar5 < iVar7) {
            iVar6 = iVar7;
        }
        iVar7 = local_40;
        if (local_40 < local_38) {
            iVar7 = local_38;
        }
        param_1->SetToIdentity();
        if (param_3 != 0) {
            iVar2 = iVar5;
            if (iVar5 < iVar4) {
                iVar2 = iVar4;
            }
            iVar3 = local_3c;
            if (local_3c < local_38) {
                iVar3 = local_38;
            }
            fVar8 = (float)atan2((float)(iVar3 - iVar2), (float)param_3);
            fVar8 = (float)fmod(fVar8, 6.2831855);
            if (fVar8 != 0.0) {
                if (param_4 != 0) {
                    fVar9 = (float)param_4;
                    if (fVar8 <= 3.1415927) {
                        if (fVar9 < fVar8) {
                            fVar8 = fVar9;
                        }
                    } else if (fVar8 <= 6.2831855 - fVar9) {
                        fVar8 = 6.2831855 - fVar9;
                    }
                }
                math::Matrix33RotationX<float>((math*)local_78, fVar8);
                math::Matrix44T<float>::operator*=(param_1, (Matrix33T*)local_78);
            }
        }
        if (local_34 != 0) {
            fVar8 = (float)atan2((float)iVar7 - (float)iVar6, (float)local_34);
            fmod(fVar8, 6.2831855);
            if (extraout_XMM0_Da != 0.0) {
                fVar8 = extraout_XMM0_Da;
                if (param_5 != 0) {
                    fVar9 = (float)param_5;
                    if (extraout_XMM0_Da <= 3.1415927) {
                        fVar8 = extraout_XMM0_Da;
                        if (fVar9 < extraout_XMM0_Da) {
                            fVar8 = fVar9;
                        }
                    } else {
                        fVar8 = extraout_XMM0_Da;
                        if (extraout_XMM0_Da <= 6.2831855 - fVar9) {
                            fVar8 = 6.2831855 - fVar9;
                        }
                    }
                }
                math::Matrix33RotationZ<float>((math*)local_78, fVar8);
                math::Matrix44T<float>::operator*=(param_1, (Matrix33T*)local_78);
            }
        }
        iVar7 = iVar4 + local_3c;
        if (iVar4 + local_3c <= iVar5 + local_38) {
            iVar7 = iVar5 + local_38;
        }
        if (iVar7 != 0) {
            math::ColourHSL::ColourHSL(local_78, 0.0, (float)iVar7 * 0.5, 0.0);
            param_1->Translate(local_78);
        }
        return 1;
    }

} // namespace jag::graphics
