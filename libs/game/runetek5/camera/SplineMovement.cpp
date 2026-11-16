// libs/game/runetek5/camera/SplineMovement.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "SplineMovement.h"

namespace jag::game {
    // 0x1000b9950: SplineMovement::GetSplines() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x100621560
    void SplineMovement::AddSpline(const BSplineCubic& bSplineCubic, int arg2, float arg3) {
        int local_18;
        float local_14;

        _local_18 = (((uint64_t)arg3 << 32) | (uint32_t)arg2);
        field_4 = 1;
        field_16.push_back(bSplineCubic);
        field_48.push_back(local_14);
        field_80.push_back(local_18);
    }

    // 0x1006215b0
    void SplineMovement::SetSpeedParameters(double arg1, double arg2) {
        if (m_speedProfile == 3) {
            field_176.push_back(arg1);
            field_208.push_back(arg2);
        } else {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                      "SplineMovement.cpp",
                      50, "%s: only for use with parametric gradient speed profile manager (i.e. old camera splines).",
                      "SetSpeedParameters");
        }
    }

    // 0x1006221f0
    bool SplineMovement::Finished() const {
        double dVar1;
        bool bVar3;
        double extraout_XMM0_Qa;

        int iVar2 = field_8;
        int iVar4 = field_16.size();
        if (iVar2 + 1 == iVar4) {
            dVar1 = m_currentPoint;
            ((BSplineCubic*)field_16[(long)field_8])->GetWorldLength();
            bVar3 = extraout_XMM0_Qa <= dVar1;
        } else {
            bVar3 = false;
        }
        return bVar3;
    }

    // 0x100622250
    void SplineMovement::ResetSplines() {
        field_16.clear();
        field_48.clear();
        field_80.clear();
        field_112.clear();
        field_176.clear();
        field_208.clear();
        field_240.clear();
        field_8 = 0;
        m_currentPoint = 0.0;
        m_currentParameter = 0.0;
        field_160 = 0.0;
    }

    // 0x100622300
    auto SplineMovement::GetCurrentPosition() const {
        if (field_16.empty() == '\0') {
            field_16[(long)field_8];
            result.GetWorldPosition(m_currentPoint);
        } else {
            auto result;
        }
        return result;
    }

    // 0x100622360
    double SplineMovement::GetSpeedGradient(double arg1, double arg2, double arg3, double arg4, double arg5) {
        double local_10 = arg1 / arg2;
        return local_30 = arg3;
        double dVar1 = math::Clamp<double>(local_10, 0.0, 1.0);
        local_30 = (arg4 - local_30) * dVar1 + local_30;
        if (arg5 != 0.0) {
            local_30 = (local_30 * arg2) / arg5;
        }
        return local_30;
    }

    // 0x1006223f0
    double SplineMovement::GetSpeedTrapezium(double arg1, double arg2, double arg3, double arg4,
                                             const math::Vector3T<float>& vector31,
                                             const math::Vector3T<float>& vector32) {
        double dVar3;

        float fVar2 = (float)vector31.Length();
        double arg1_00 = (double)fVar2;
        auto pfVar1 = vector32.SSOBeginPtr();
        if (*pfVar1 == INFINITY) {
            arg4 = arg1_00;
        } else {
            fVar2 = (float)vector32.Length();
            dVar3 = (double)fVar2;
            if ((dVar3 * arg4) / (arg4 + arg4) <= arg2 - arg1) {
                if (arg4 < arg1_00) {
                    arg4 = (double)eastl::min(arg1_00, dVar3 * arg3 + arg4);
                }
            } else {
                arg4 = (double)eastl::max(0.0, arg4 - dVar3 * arg3);
            }
        }
        return arg4;
    }

    // 0x1006224c0
    void SplineMovement::ProcessServerUpdateSpline(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1) {
        uint32_t uVar3;
        float fVar4;
        double local_38;

        ResetSplines();
        uint8_t bVar1 = arg1.g1();
        unsigned long arg1_00 = (unsigned long)bVar1;
        field_16.reserve(arg1_00);
        field_48.reserve(arg1_00);
        unsigned int uVar2 = (unsigned int)bVar1;
        if (bVar1 != 0) {
            do {
                field_16.emplace_back<PacketT<Array<unsigned char, BucketAllocatorEASTL>>&>(arg1);
                uVar3 = arg1.gFloat();
                local_38 = (double)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)uVar3);
                field_48.push_back(local_38);
                uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
        }
        if (m_speedProfile == 2) {
            field_176.reserve(arg1_00);
            field_208.reserve(arg1_00);
            field_240.reserve(arg1_00);
            if (bVar1 != 0) {
                do {
                    fVar4 = (float)arg1.gFloat();
                    local_38 = (double)fVar4;
                    field_176.push_back(local_38);
                    fVar4 = (float)arg1.gFloat();
                    local_38 = (double)fVar4;
                    field_208.push_back(local_38);
                    fVar4 = (float)arg1.gFloat();
                    local_38 = (double)fVar4;
                    field_240.push_back(local_38);
                    uVar2 = (int)arg1_00 - 1;
                    arg1_00 = (unsigned long)uVar2;
                } while (uVar2 != 0);
            }
        } else if (m_speedProfile == 3) {
            field_176.reserve(arg1_00);
            field_208.reserve(arg1_00);
            if (arg1_00 != 0) {
                do {
                    fVar4 = (float)arg1.gFloat();
                    local_38 = (double)fVar4;
                    field_176.push_back(local_38);
                    fVar4 = (float)arg1.gFloat();
                    local_38 = (double)fVar4;
                    field_208.push_back(local_38);
                    uVar2 = (int)arg1_00 - 1;
                    arg1_00 = (unsigned long)uVar2;
                } while (uVar2 != 0);
            }
        }
        field_4 = 1;
    }

    // 0x100622800
    unsigned int SplineMovement::Update(float arg1, const math::Vector3T<float>& vector31,
                                        const math::Vector3T<float>& vector32) {
        double dVar2;
        SplineSpeedProfile SVar3;
        double dVar4;
        int iVar6;
        uint32_t* puVar8;
        uint64_t uVar9;
        int* piVar10;
        double* pdVar11;
        int iVar12;
        uint32_t extraout_XMM0_Da;
        uint32_t extraout_XMM0_Da_00;
        uint32_t uVar13;
        float fVar14;
        uint32_t extraout_XMM0_Da_01;
        uint32_t extraout_XMM0_Da_02;
        uint32_t extraout_XMM0_Da_03;
        uint32_t extraout_XMM0_Db;
        uint32_t extraout_XMM0_Db_00;
        uint32_t uVar15;
        uint32_t extraout_XMM0_Db_01;
        uint32_t extraout_XMM0_Db_02;
        uint32_t extraout_XMM0_Db_03;
        float fVar16;
        double dVar17;
        uint64_t local_48;
        unsigned int local_38;

        uint8_t* this_04 = &field_16;
        BSplineCubic* this_02 = (BSplineCubic*)(*this_04)[(long)field_8];
        uint8_t* this_00 = &field_48;
        float* pfVar7 = (float*)(*this_00)[(long)field_8];
        float local_34 = arg1;
        if (0.0 < *pfVar7) {
            pfVar7 = (float*)(*this_00)[(long)field_8];
            fVar16 = *pfVar7;
            pfVar7 = (float*)(*this_00)[(long)field_8];
            if (arg1 <= fVar16) {
                *pfVar7 = *pfVar7 - arg1;
            LAB_100622c98:
                local_38 = (unsigned int)(((uint64_t)((int64_t)((unsigned long)pfVar7 >> 8)) << 8) | (uint8_t)1);
                goto LAB_100622c9d;
            }
            local_34 = arg1 - *pfVar7;
            puVar8 = (uint32_t*)(*this_00)[(long)field_8];
            *puVar8 = 0;
        }
        unsigned int uVar5 = ((GraphicsApp*)BaseApp::GetAppInstance())->GetMainLoopRate();
        fVar16 = 1.0 / (float)uVar5;
        double* pdVar1 = &m_currentPoint;
        uint8_t* this_01 = &field_240;
        local_38 = (unsigned int)this_01;
        pfVar7 = (float*)this_01;
        do {
            if (local_34 <= 0.0)
                goto LAB_100622c98;
            uVar9 = this_02->GetWorldLength();
            uVar13 = extraout_XMM0_Da;
            uVar15 = extraout_XMM0_Db;
            if (*pdVar1 <= (double)(((uint64_t)extraout_XMM0_Db << 32) | (uint32_t)extraout_XMM0_Da) &&
                (double)(((uint64_t)extraout_XMM0_Db << 32) | (uint32_t)extraout_XMM0_Da) != *pdVar1) {
            LAB_100622a89:
                while (true) {
                    local_48 = (double)(((uint64_t)uVar15 << 32) | (uint32_t)uVar13);
                    pfVar7 = (float*)(((uint64_t)((int64_t)((unsigned long)uVar9 >> 8)) << 8) | (uint8_t)1);
                    if ((local_34 <= 0.0) || ((double)(((uint64_t)uVar15 << 32) | (uint32_t)uVar13) < *pdVar1 ||
                                              (double)(((uint64_t)uVar15 << 32) | (uint32_t)uVar13) == *pdVar1))
                        break;
                    fVar14 = (float)eastl::min<float>(local_34, fVar16);
                    SVar3 = m_speedProfile;
                    if (SVar3 == 1) {
                        uVar9 =
                            GetSpeedTrapezium(m_currentPoint, local_48, (double)fVar14, field_160, vector31, vector32);
                        dVar17 = (double)(((uint64_t)extraout_XMM0_Db_02 << 32) | (uint32_t)extraout_XMM0_Da_02);
                    LAB_100622c50:
                        field_160 = dVar17;
                        dVar17 = dVar17 + m_currentPoint;
                        if (local_48 < dVar17)
                            goto LAB_100622c6f;
                    } else {
                        if (SVar3 == 2) {
                            dVar17 = m_currentPoint;
                            pdVar11 = &field_176[(long)field_8];
                            dVar2 = *pdVar11;
                            pdVar11 = &field_208[(long)field_8];
                            dVar4 = *pdVar11;
                            pdVar11 = (double*)(*this_01)[(long)field_8];
                            uVar9 = GetSpeedGradient(dVar17, local_48, dVar2, dVar4, *pdVar11);
                            dVar17 = (double)fVar14 *
                                     (double)(((uint64_t)extraout_XMM0_Db_03 << 32) | (uint32_t)extraout_XMM0_Da_03);
                            goto LAB_100622c50;
                        }
                        if (SVar3 != 3) {
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "game/runetek5/camera/SplineMovement.cpp",
                                            272, "Unsupported");
                        }
                        iVar12 = this_02->GetSegmentCount();
                        dVar17 = m_currentParameter;
                        dVar4 = (double)iVar12;
                        pdVar11 = &field_176[(long)field_8];
                        dVar2 = *pdVar11;
                        pdVar11 = &field_208[(long)field_8];
                        dVar17 = (double)GetSpeedGradient(dVar17, dVar4, dVar2, *pdVar11, 0.0);
                        dVar17 = ((double)fVar14 * dVar17) / (double)fVar16;
                        field_160 = dVar17;
                        dVar17 = dVar17 + m_currentParameter;
                        if (dVar4 <= dVar17) {
                            dVar17 = dVar4;
                        }
                        m_currentParameter = dVar17;
                        uVar9 = this_02->GetWorldDistanceFromParameter(dVar17);
                        local_48 = (double)(((uint64_t)extraout_XMM0_Db_01 << 32) | (uint32_t)extraout_XMM0_Da_01);
                    LAB_100622c6f:
                        dVar17 = local_48;
                    }
                    *pdVar1 = dVar17;
                    local_34 = local_34 - fVar16;
                }
            } else {
                iVar12 = field_8;
                iVar6 = this_04->size();
                if (iVar12 + 1 == iVar6) {
                    local_38 = 0;
                } else {
                    pfVar7 = (float*)(*this_00)[(long)field_8];
                    if (*pfVar7 <= local_34) {
                        iVar12 = field_8 + 1;
                        field_8 = iVar12;
                        pfVar7 = (float*)(*this_00)[(long)iVar12];
                        local_34 = local_34 - *pfVar7;
                        puVar8 = (uint32_t*)(*this_00)[(long)field_8];
                        *puVar8 = 0;
                        piVar10 = &field_80[(long)field_8];
                        field_112.push_back(*piVar10);
                        *pdVar1 = 0.0;
                        m_currentParameter = 0.0;
                        field_160 = 0.0;
                        this_02 = (BSplineCubic*)(*this_04)[(long)field_8];
                        uVar9 = this_02->GetWorldLength();
                        uVar13 = extraout_XMM0_Da_00;
                        uVar15 = extraout_XMM0_Db_00;
                        goto LAB_100622a89;
                    }
                    pfVar7 = (float*)(*this_00)[(long)field_8];
                    *pfVar7 = *pfVar7 - local_34;
                    piVar10 = &field_80[(long)field_8];
                    uVar9 = field_112.push_back(*piVar10);
                    local_38 = (unsigned int)(((uint64_t)((int64_t)((unsigned long)uVar9 >> 8)) << 8) | (uint8_t)1);
                }
                pfVar7 = nullptr;
            }
        } while ((char)pfVar7 != '\0');
    LAB_100622c9d:
        return local_38 & 4294967041;
    }

    // 0x100622d00
    uint64_t SplineMovement::GetOnFinishTriggers(eastl::fixed_vector<int, 2ul>& arg1) {
        uint64_t in_RAX;
        uint32_t* puVar2;
        uint32_t* puVar3;

        uint8_t* this_00 = &field_112;
        uint64_t uStack_38 = in_RAX;
        if (this_00->empty() == '\0') {
            arg1.reserve(this_00->size());
            puVar2 = (uint32_t*)this_00->HeapBeginPtr();
            puVar3 = (uint32_t*)this_00->end();
            if (puVar2 != puVar3) {
                do {
                    uStack_38 = (((uint64_t)(*puVar2) << 32) | (uint32_t)((uint32_t)uStack_38));
                    arg1.push_back(*((int*)((long)&uStack_38 + 4)));
                    puVar2 = puVar2 + 1;
                } while (puVar2 != puVar3);
            }
            this_00->clear();
        }
        return 0;
    }

    // 0x100622df0
    void SplineMovement::GetRollAngle() const {
        ((BSplineCubic*)field_16[(long)field_8])->GetWorldRollFromDistance(m_currentPoint);
    }

    // 0x100622e20
    void SplineMovement::DrawDebug(unsigned int arg1) {
        int iVar1;
        long* plVar2;
        uint64_t unaff_R15;
        unsigned long uVar3;
        double arg1_00;
        uint8_t local_90[40];
        uint64_t local_68[2];
        double local_58;
        double local_50;
        double local_48;
        unsigned int local_38;

        new ((local_90 + 24)) math::Vector3T();
        auto this_00 = field_16.HeapBeginPtr();
        auto local_40 = field_16.end();
        if (this_00 != local_40) {
            uVar3 = (((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)1);
            do {
                iVar1 = this_00->GetSegmentCount();
                if (0 < iVar1) {
                    local_50 = (double)iVar1;
                    local_48 = local_50 * 0.002;
                    arg1_00 = 0.0;
                    do {
                        local_58 = arg1_00;
                        local_90->GetWorldPositionFromParameter(arg1_00);
                        local_68[0] = math::Vector3FromVector3T<double>(*local_90);
                        if ((uVar3 & 1) == 0) {
                            plVar2 = DebugPrimitiveCollectorBasic::GetCollector("");
                            if (plVar2 != nullptr) {
                                local_38 = (unsigned int)uVar3;
                                new (local_90) oldscape::sidebars::SideBarData(arg1, 0);
                                uVar3 = (unsigned long)local_38;
                                (**(void (**)(...))(*plVar2 + 24))(plVar2, (Vector4T<float>*)(local_90 + 24),
                                                                   (Vector3T<float>*)local_68, (SideBarData*)local_90);
                            }
                        } else {
                            uVar3 = 0;
                        }
                        ((local_90 + 24))->SetXYZ(*local_68);
                        arg1_00 = local_58 + local_48;
                    } while (arg1_00 <= local_50);
                }
                this_00 = (BSplineCubic*)&this_00[1].field_24;
            } while (this_00 != local_40);
        }
    }

    // 0x100622f80
    char* SplineMovement::GetSpeedProfileDescription() {
        unsigned int uVar1 = m_speedProfile - 1;
        if (uVar1 < 3) {
            return (&PTR_s_TRAPEZIUM_100f0c9c8)[uVar1];
        }
        return "NONE";
    }

} // namespace jag::game

namespace jag {
    // 0x1006216f0
    shared_ptr_if_not_array<game::camera::OldShake>::type
    make_shared<game::camera::OldShake, game::camera::ShakeMode&, float, float, float, float>(
        game::camera::ShakeMode& shakeMode, float&& arg2, float&& arg3, float&& arg4, float&& arg5) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        OldShake* local_40[2];

        auto arg1 = aligned_alloc(72, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<game::camera::OldShake>::type result;
        } else {
            local_40[0] = placement_new<game::camera::OldShake, game::camera::ShakeMode&, float, float, float, float>(
                (void*)((long)arg1 + 32), shakeMode, arg2, arg3, arg4, arg5);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::camera::OldShake>, int, game::camera::OldShake*&>(
                    arg1, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

} // namespace jag
