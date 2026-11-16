// libs/game/runetek5/camera/SplineMovement.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "SplineMovement.h"

namespace jag::game {
    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    SplineMovement::GetSplines() const;

    // 0x100621560, 80 bytes, placed by class name and debug map
    // SplineMovement::AddSpline(BSplineCubic const&, int, float)
    void SplineMovement::AddSpline(BSplineCubic* param_1, int param_2, float param_3) {
        int local_18;
        float local_14;

        _local_18 = CONCAT44(param_3, param_2);
        field_4 = 1;
        (&field_16, param_1)->push_back();
        (&field_48, &local_14)->push_back();
        (&field_80, &local_18)->push_back();
    }

    // 0x1006215b0, 128 bytes, placed by class name and debug map
    // SplineMovement::SetSpeedParameters(double, double)
    void SplineMovement::SetSpeedParameters(double param_1, double param_2) {
        undefined8 uVar1;
        double local_20;
        double local_18;

        local_20 = param_1;
        local_18 = param_2;
        if (field_168 == 3) {
            (&field_176, &local_20)->push_back();
            (&field_208, &local_18)->push_back();
        } else {
            uVar1 = logger::default_logger();
            logger::Logger::Log(
                uVar1, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                "SplineMovement.cpp",
                50, "%s: only for use with parametric gradient speed profile manager (i.e. old camera splines).",
                "SetSpeedParameters");
        }
    }

    // 0x1006221f0, 96 bytes, placed by class name and debug map
    // SplineMovement::Finished() const
    bool SplineMovement::Finished() {
        double dVar1;
        int iVar2;
        bool bVar3;
        int iVar4;
        BSplineCubic* this_00;
        double extraout_XMM0_Qa;

        iVar2 = field_8;
        iVar4 = (&field_16)->size();
        if (iVar2 + 1 == iVar4) {
            dVar1 = m_currentPoint;
            this_00 = (BSplineCubic*)eastl::vector<BSplineCubic, eastl::allocator>::operator[](
                (vector<BSplineCubic, eastl::allocator>*)&field_16, (long)field_8);
            this_00->GetWorldLength();
            bVar3 = extraout_XMM0_Qa <= dVar1;
        } else {
            bVar3 = false;
        }
        return bVar3;
    }

    // 0x100622250, 128 bytes, placed by class name and debug map
    // SplineMovement::ResetSplines()
    void SplineMovement::ResetSplines() {
        (&field_16)->clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        field_8 = 0;
        m_currentPoint = 0.0;
        m_currentParameter = 0.0;
        field_160 = 0.0;
    }

    // 0x100622300, 96 bytes, placed by class name and debug map
    // SplineMovement::GetCurrentPosition() const
    SplineMovement* SplineMovement::GetCurrentPosition() {
        char cVar1;
        long in_RSI;

        cVar1 = ((in_RSI + 16))->empty();
        if (cVar1 == '\0') {
            eastl::vector<BSplineCubic, eastl::allocator>::operator[](
                (vector<BSplineCubic, eastl::allocator>*)(in_RSI + 16), (long)*(int*)(in_RSI + 8));
            GetWorldPosition(*(double*)(in_RSI + 144));
        } else {
            new (this) oldscape::dash3d::ModelLit::AABB();
        }
        return this;
    }

    // 0x100622360, 144 bytes, placed by class name and debug map
    // SplineMovement::GetSpeedGradient(double, double, double, double, double)
    double SplineMovement::GetSpeedGradient(double param_1, double param_2, double param_3, double param_4,
                                            double param_5) {
        double dVar1;
        double local_40;
        double local_38;
        double local_30;
        double local_10;

        local_10 = param_1 / param_2;
        local_40 = 0.0;
        local_38 = 1.0;
        local_30 = param_3;
        dVar1 = math::Clamp<double>(&local_10, &local_40, &local_38);
        local_30 = (param_4 - local_30) * dVar1 + local_30;
        if (param_5 != 0.0) {
            local_30 = (local_30 * param_2) / param_5;
        }
        return local_30;
    }

    // 0x1006223f0, 208 bytes, placed by class name and debug map
    // SplineMovement::GetSpeedTrapezium(double, double, double, double, math::Vector3T<float> const&, math::Vector3T<float> const&)
    double SplineMovement::GetSpeedTrapezium(double param_1, double param_2, double param_3, double param_4,
                                             Vector3T* param_5, Vector3T* param_6) {
        vector* pvVar1;
        float fVar3;
        double dVar4;
        double dVar5;

        fVar3 = (float)param_5->Length();
        dVar4 = (double)fVar3;
        pvVar1 = param_6->SSOBeginPtr(param_6);
        if (*(float*)pvVar1 == INFINITY) {
            param_4 = dVar4;
        } else {
            fVar3 = (float)param_6->Length();
            dVar5 = (double)fVar3;
            if ((dVar5 * param_4) / (param_4 + param_4) <= param_2 - param_1) {
                if (param_4 < dVar4) {
                    param_4 = (double)eastl::min(dVar4, dVar5 * param_3 + param_4);
                }
            } else {
                param_4 = (double)eastl::max(0.0, param_4 - dVar5 * param_3);
            }
        }
        return param_4;
    }

    // 0x1006224c0, 496 bytes, placed by class name and debug map
    // SplineMovement::ProcessServerUpdateSpline(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    void SplineMovement::ProcessServerUpdateSpline(PacketT* param_1) {
        byte bVar1;
        ulong uVar2;
        uint uVar3;
        undefined4 uVar4;
        float fVar5;
        double local_38;

        ResetSplines(this);
        bVar1 = param_1->g1();
        uVar2 = (ulong)bVar1;
        (&field_16, uVar2)->reserve();
        (&field_48, uVar2)->reserve();
        uVar3 = (uint)bVar1;
        if (bVar1 != 0) {
            do {
                eastl::vector<BSplineCubic, eastl::allocator>::emplace_back<
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>&>(
                    (vector<BSplineCubic, eastl::allocator>*)&field_16, param_1);
                uVar4 = param_1->gFloat();
                local_38 = (double)CONCAT44(local_38._4_4_, uVar4);
                (&field_48, (float*)&local_38)->push_back();
                uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
        }
        if (field_168 == 2) {
            (&field_176, uVar2)->reserve();
            (&field_208, uVar2)->reserve();
            (&field_240, uVar2)->reserve();
            if (bVar1 != 0) {
                do {
                    fVar5 = (float)param_1->gFloat();
                    local_38 = (double)fVar5;
                    (&field_176, &local_38)->push_back();
                    fVar5 = (float)param_1->gFloat();
                    local_38 = (double)fVar5;
                    (&field_208, &local_38)->push_back();
                    fVar5 = (float)param_1->gFloat();
                    local_38 = (double)fVar5;
                    (&field_240, &local_38)->push_back();
                    uVar3 = (int)uVar2 - 1;
                    uVar2 = (ulong)uVar3;
                } while (uVar3 != 0);
            }
        } else if (field_168 == 3) {
            (&field_176, uVar2)->reserve();
            (&field_208, uVar2)->reserve();
            if (uVar2 != 0) {
                do {
                    fVar5 = (float)param_1->gFloat();
                    local_38 = (double)fVar5;
                    (&field_176, &local_38)->push_back();
                    fVar5 = (float)param_1->gFloat();
                    local_38 = (double)fVar5;
                    (&field_208, &local_38)->push_back();
                    uVar3 = (int)uVar2 - 1;
                    uVar2 = (ulong)uVar3;
                } while (uVar3 != 0);
            }
        }
        field_4 = 1;
    }

    // 0x100622800, 1216 bytes, placed by class name and debug map
    // SplineMovement::Update(float, math::Vector3T<float> const&, math::Vector3T<float> const&)
    /* WARNING: Removing unreachable block (ram,4301401225) */
    /* SplineMovement::Update(float, math::Vector3T<float> const&,
   math::Vector3T<float> const&) */

    uint SplineMovement::Update(float param_1, Vector3T* param_2, Vector3T* param_3) {
        undefined1* this_00;
        double* pdVar1;
        undefined1* this_01;
        double dVar2;
        double dVar3;
        uint uVar4;
        int iVar5;
        BSplineCubic* this_02;
        float* pfVar6;
        undefined4* puVar7;
        GraphicsApp* this_03;
        undefined8 uVar8;
        int* piVar9;
        double* pdVar10;
        int iVar11;
        undefined1* this_04;
        undefined4 extraout_XMM0_Da;
        undefined4 extraout_XMM0_Da_00;
        undefined4 uVar12;
        float fVar13;
        undefined4 extraout_XMM0_Da_01;
        undefined4 extraout_XMM0_Da_02;
        undefined4 extraout_XMM0_Da_03;
        undefined4 extraout_XMM0_Db;
        undefined4 extraout_XMM0_Db_00;
        undefined4 uVar14;
        undefined4 extraout_XMM0_Db_01;
        undefined4 extraout_XMM0_Db_02;
        undefined4 extraout_XMM0_Db_03;
        float fVar15;
        double dVar16;
        undefined8 local_48;
        uint local_38;
        float local_34;

        this_04 = &field_16;
        this_02 = (BSplineCubic*)eastl::vector<BSplineCubic, eastl::allocator>::operator[](
            (vector<BSplineCubic, eastl::allocator>*)this_04, (long)field_8);
        this_00 = &field_48;
        pfVar6 = (float*)eastl::vector<float, eastl::allocator>::operator[]((vector<float, eastl::allocator>*)this_00,
                                                                            (long)field_8);
        local_34 = param_1;
        if (0.0 < *pfVar6) {
            pfVar6 = (float*)eastl::vector<float, eastl::allocator>::operator[](
                (vector<float, eastl::allocator>*)this_00, (long)field_8);
            fVar15 = *pfVar6;
            pfVar6 = (float*)eastl::vector<float, eastl::allocator>::operator[](
                (vector<float, eastl::allocator>*)this_00, (long)field_8);
            if (param_1 <= fVar15) {
                *pfVar6 = *pfVar6 - param_1;
            LAB_100622c98:
                local_38 = (uint)CONCAT71((int7)((ulong)pfVar6 >> 8), 1);
                goto LAB_100622c9d;
            }
            local_34 = param_1 - *pfVar6;
            puVar7 = (undefined4*)eastl::vector<float, eastl::allocator>::operator[](
                (vector<float, eastl::allocator>*)this_00, (long)field_8);
            *puVar7 = 0;
        }
        this_03 = (GraphicsApp*)BaseApp::GetAppInstance();
        uVar4 = this_03->GetMainLoopRate();
        fVar15 = 1.0 / (float)uVar4;
        pdVar1 = &m_currentPoint;
        this_01 = &field_240;
        local_38 = (uint)this_01;
        pfVar6 = (float*)this_01;
        do {
            if (local_34 <= 0.0)
                goto LAB_100622c98;
            uVar8 = this_02->GetWorldLength();
            uVar12 = extraout_XMM0_Da;
            uVar14 = extraout_XMM0_Db;
            if (*pdVar1 <= (double)CONCAT44(extraout_XMM0_Db, extraout_XMM0_Da) &&
                (double)CONCAT44(extraout_XMM0_Db, extraout_XMM0_Da) != *pdVar1) {
            LAB_100622a89:
                while (true) {
                    local_48 = (double)CONCAT44(uVar14, uVar12);
                    pfVar6 = (float*)CONCAT71((int7)((ulong)uVar8 >> 8), 1);
                    if ((local_34 <= 0.0) ||
                        ((double)CONCAT44(uVar14, uVar12) < *pdVar1 || (double)CONCAT44(uVar14, uVar12) == *pdVar1))
                        break;
                    fVar13 = (float)eastl::min<float>(local_34, fVar15);
                    iVar11 = field_168;
                    if (iVar11 == 1) {
                        uVar8 =
                            GetSpeedTrapezium(m_currentPoint, local_48, (double)fVar13, field_160, param_2, param_3);
                        dVar16 = (double)CONCAT44(extraout_XMM0_Db_02, extraout_XMM0_Da_02);
                    LAB_100622c50:
                        field_160 = dVar16;
                        dVar16 = dVar16 + m_currentPoint;
                        if (local_48 < dVar16)
                            goto LAB_100622c6f;
                    } else {
                        if (iVar11 == 2) {
                            dVar16 = m_currentPoint;
                            pdVar10 = (double*)eastl::vector<double, eastl::allocator>::operator[](
                                (vector<double, eastl::allocator>*)&field_176, (long)field_8);
                            dVar2 = *pdVar10;
                            pdVar10 = (double*)eastl::vector<double, eastl::allocator>::operator[](
                                (vector<double, eastl::allocator>*)&field_208, (long)field_8);
                            dVar3 = *pdVar10;
                            pdVar10 = (double*)eastl::vector<double, eastl::allocator>::operator[](
                                (vector<double, eastl::allocator>*)this_01, (long)field_8);
                            uVar8 = GetSpeedGradient(dVar16, local_48, dVar2, dVar3, *pdVar10);
                            dVar16 = (double)fVar13 * (double)CONCAT44(extraout_XMM0_Db_03, extraout_XMM0_Da_03);
                            goto LAB_100622c50;
                        }
                        if (iVar11 != 3) {
                            /* WARNING: Subroutine does not return */
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "game/runetek5/camera/SplineMovement.cpp",
                                            272, "Unsupported");
                        }
                        iVar11 = this_02->GetSegmentCount();
                        dVar16 = m_currentParameter;
                        dVar3 = (double)iVar11;
                        pdVar10 = (double*)eastl::vector<double, eastl::allocator>::operator[](
                            (vector<double, eastl::allocator>*)&field_176, (long)field_8);
                        dVar2 = *pdVar10;
                        pdVar10 = (double*)eastl::vector<double, eastl::allocator>::operator[](
                            (vector<double, eastl::allocator>*)&field_208, (long)field_8);
                        dVar16 = (double)GetSpeedGradient(dVar16, dVar3, dVar2, *pdVar10, 0.0);
                        dVar16 = ((double)fVar13 * dVar16) / (double)fVar15;
                        field_160 = dVar16;
                        dVar16 = dVar16 + m_currentParameter;
                        if (dVar3 <= dVar16) {
                            dVar16 = dVar3;
                        }
                        m_currentParameter = dVar16;
                        uVar8 = this_02->GetWorldDistanceFromParameter(dVar16);
                        local_48 = (double)CONCAT44(extraout_XMM0_Db_01, extraout_XMM0_Da_01);
                    LAB_100622c6f:
                        dVar16 = local_48;
                    }
                    *pdVar1 = dVar16;
                    local_34 = local_34 - fVar15;
                }
            } else {
                iVar11 = field_8;
                iVar5 = this_04->size();
                if (iVar11 + 1 == iVar5) {
                    local_38 = 0;
                } else {
                    pfVar6 = (float*)eastl::vector<float, eastl::allocator>::operator[](
                        (vector<float, eastl::allocator>*)this_00, (long)field_8);
                    if (*pfVar6 <= local_34) {
                        iVar11 = field_8 + 1;
                        field_8 = iVar11;
                        pfVar6 = (float*)eastl::vector<float, eastl::allocator>::operator[](
                            (vector<float, eastl::allocator>*)this_00, (long)iVar11);
                        local_34 = local_34 - *pfVar6;
                        puVar7 = (undefined4*)eastl::vector<float, eastl::allocator>::operator[](
                            (vector<float, eastl::allocator>*)this_00, (long)field_8);
                        *puVar7 = 0;
                        piVar9 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                            (vector<int, eastl::allocator>*)&field_80, (long)field_8);
                        (&field_112, piVar9)->push_back();
                        *pdVar1 = 0.0;
                        m_currentParameter = 0.0;
                        field_160 = 0.0;
                        this_02 = (BSplineCubic*)eastl::vector<BSplineCubic, eastl::allocator>::operator[](
                            (vector<BSplineCubic, eastl::allocator>*)this_04, (long)field_8);
                        uVar8 = this_02->GetWorldLength();
                        uVar12 = extraout_XMM0_Da_00;
                        uVar14 = extraout_XMM0_Db_00;
                        goto LAB_100622a89;
                    }
                    pfVar6 = (float*)eastl::vector<float, eastl::allocator>::operator[](
                        (vector<float, eastl::allocator>*)this_00, (long)field_8);
                    *pfVar6 = *pfVar6 - local_34;
                    piVar9 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)&field_80, (long)field_8);
                    uVar8 = (&field_112, piVar9)->push_back();
                    local_38 = (uint)CONCAT71((int7)((ulong)uVar8 >> 8), 1);
                }
                pfVar6 = (float*)0;
            }
        } while ((char)pfVar6 != '\0');
    LAB_100622c9d:
        return local_38 & 4294967041;
    }

    // 0x100622d00, 160 bytes, placed by class name and debug map
    // SplineMovement::GetOnFinishTriggers(eastl::fixed_vector<int, 2ul, true, eastl::allocator>&)
    undefined8 SplineMovement::GetOnFinishTriggers(fixed_vector* param_1) {
        char cVar1;
        ulong uVar2;
        long lVar3;
        long lVar4;
        undefined1* this_00;

        this_00 = &field_112;
        cVar1 = this_00->empty();
        if (cVar1 == '\0') {
            uVar2 = this_00->size();
            param_1->reserve(uVar2);
            lVar3 = this_00->HeapBeginPtr();
            lVar4 = this_00->end();
            for (; lVar3 != lVar4; lVar3 = lVar3 + 4) {
                eastl::fixed_vector<int, 2ul, true, eastl::allocator>::push_back((int*)param_1);
            }
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        }
        return 0;
    }

    // 0x100622df0, 48 bytes, placed by class name and debug map
    // SplineMovement::GetRollAngle() const
    void SplineMovement::GetRollAngle() {
        BSplineCubic* this_00;

        this_00 = (BSplineCubic*)eastl::vector<BSplineCubic, eastl::allocator>::operator[](
            (vector<BSplineCubic, eastl::allocator>*)&field_16, (long)field_8);
        this_00->GetWorldRollFromDistance(m_currentPoint);
    }

    // 0x100622e20, 352 bytes, placed by class name and debug map
    // SplineMovement::DrawDebug(unsigned int)
    void SplineMovement::DrawDebug(uint param_1) {
        int iVar1;
        BSplineCubic* this_00;
        long* plVar2;
        BSplineCubic* pBVar3;
        undefined8 unaff_R15;
        ulong uVar4;
        double dVar5;
        undefined1 local_90[40];
        undefined8 local_68[2];
        double local_58;
        double local_50;
        double local_48;
        BSplineCubic* local_40;
        uint local_38;

        new ((local_90 + 24)) math::Vector3T<int>();
        this_00 = (BSplineCubic*)(&field_16)->HeapBeginPtr();
        local_40 = (BSplineCubic*)(&field_16)->end();
        if (this_00 != local_40) {
            uVar4 = CONCAT71((int7)((ulong)unaff_R15 >> 8), 1);
            do {
                iVar1 = this_00->GetSegmentCount();
                if (0 < iVar1) {
                    local_50 = (double)iVar1;
                    local_48 = local_50 * 0.002;
                    dVar5 = 0.0;
                    do {
                        pBVar3 = this_00;
                        local_58 = dVar5;
                        local_90->GetWorldPositionFromParameter(dVar5);
                        local_68[0] = math::Vector3FromVector3T<double>((math*)local_90, (Vector3T*)pBVar3);
                        if ((uVar4 & 1) == 0) {
                            plVar2 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                            if (plVar2 != (long*)0) {
                                local_38 = (uint)uVar4;
                                new (local_90) oldscape::sidebars::SideBarData(param_1, 0);
                                uVar4 = (ulong)local_38;
                                (**(code**)(*plVar2 + 24))(plVar2, (Vector4T<float>*)(local_90 + 24),
                                                           (Vector3T*)local_68, (SideBarData*)local_90);
                            }
                        } else {
                            uVar4 = 0;
                        }
                        ((local_90 + 24))->SetXYZ(local_68);
                        dVar5 = local_58 + local_48;
                    } while (dVar5 <= local_50);
                }
                this_00 = (BSplineCubic*)&this_00[1].field_24;
            } while (this_00 != local_40);
        }
    }

    // 0x100622f80, 48 bytes, placed by class name and debug map
    // SplineMovement::GetSpeedProfileDescription()
    char* SplineMovement::GetSpeedProfileDescription() {
        uint uVar1;

        uVar1 = field_168 - 1;
        if (uVar1 < 3) {
            return (&PTR_s_TRAPEZIUM_100f0c9c8)[(int)uVar1];
        }
        return "NONE";
    }

} // namespace jag::game

namespace jag {
    // 0x1006216f0, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::camera::OldShake>::type make_shared<game::camera::OldShake, game::camera::ShakeMode&, float, float, float, float>(game::camera::ShakeMode&, float&&, float&&, float&&, float&&)
    jag* make_shared<game::camera::OldShake, game::camera::ShakeMode&, float, float, float, float>(
        ShakeMode* param_1, float* param_2, float* param_3, float* param_4, float* param_5) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        OldShake* local_40[2];

        pvVar1 = (void*)aligned_alloc(72, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<game::camera::OldShake, game::camera::ShakeMode&, float, float, float, float>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<game::camera::OldShake>, int, game::camera::OldShake*&>(
                pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

} // namespace jag
