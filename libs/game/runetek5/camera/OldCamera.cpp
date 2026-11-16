// libs/game/runetek5/camera/OldCamera.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "OldCamera.h"

namespace jag::game {
    // 0x10041b1d0: OldCamera::GetCamHeight() const has the same machine code as NPCType::GetAttackOpIndex() const

    // 0x10041b1f0: OldCamera::GetCamZoom() const has the same machine code as NPCType::GetExamineOpIndex() const

    // 0x1006200e0
    OldCamera::OldCamera(const std::function<shared_ptr<Entity>(CameraTrackableType, int)>& callback)
        : Camera(callback), m_cameraMode(0), field_628(0), field_632(0), field_636(0), field_640(0), field_680(0),
          field_688(0.0), field_696(0.0) {

        field_704 = '\0';
        field_705 = '\0';
        m_camHeight = 400;
        m_camZoom = -4500;
        new (&field_720) math::Vector3T(0.0, 400.0, 0.0);
        new (&field_744) math::Vector3T(0.0, (double)m_camHeight, (double)m_camZoom);
        new (&field_768) math::QuaternionT<double>();
        m_camZoomScaleSmall = 256;
        m_camZoomScaleBig = 320;
        m_verticalFOVSmall = 90.0;
        m_verticalFOVBig = 90.0;
        field_816 = 90.0;
        field_820 = 90.0;
        field_824 = -1.0;
        field_828 = -1.0;
        field_832 = -1.0;
        field_836 = -1.0;
        new (&field_840) math::Vector2T();
        new (field_848) oldscape::dash3d::ModelLit::AABB();
        new (field_872) oldscape::dash3d::ModelLit::AABB();
        new (&field_896) shared_ptr();
        SetAngularLookatInterpolant(1.0);
        SetAngularPositionInterpolant(1.0);
        CameraHelpers::OldJagexAnglesToQuaternion(field_768, 128, 1024, 0);
    }

    // 0x100620480
    double OldCamera::GetVerticalFOV() const {
        float fVar1 = (float)math::Deg2Rad(field_816);
        return (double)(fVar1 * 0.5);
    }

    // 0x1006204c0
    double OldCamera::GetAspectRatio() const {
        int iVar1 = field_840.GetX();
        int iVar2 = field_840.GetZ();
        return (double)iVar1 / (double)iVar2;
    }

    // 0x100620520
    void OldCamera::ClampCinematicXAngle(LookatData& lookatData, PositionData& positionData) {
        uint64_t* puVar3;
        uint32_t uVar5;
        uint8_t local_70[28];
        uint8_t local_38[16];

        (*(*(Vector3T<double>**)(lookatData + 8))) = (*(*(Vector3T<double>**)lookatData));
        *local_70 - (*(*(Vector3T<double>**)(lookatData + 8)));
        auto puVar1 = local_70->second();
        local_38._0_8_ = *puVar1;
        local_70._24_4_ = (uint32_t)local_38._0_8_;
        local_38._8_8_ = 0;
        unsigned int uStack_54 = (unsigned int)((unsigned long)local_38._0_8_ >> 32) ^ 2147483648;
        uint32_t uStack_50 = 0;
        uint32_t uStack_4c = 2147483648;
        auto pdVar2 = local_70->SSOBeginPtr();
        double local_28 = *pdVar2;
        pdVar2 = (double*)local_70->SSOBeginPtr();
        local_28 = local_28 * *pdVar2;
        pdVar2 = (double*)local_70->GetScreen();
        double local_40 = *pdVar2;
        pdVar2 = (double*)local_70->GetScreen();
        local_28 = SQRT(local_40 * *pdVar2 + local_28);
        double dVar4 =
            (double)_atan((uint32_t)((double)(((uint64_t)uStack_54 << 32) | (uint32_t)local_70._24_4_) / local_28));
        if (0.3926991f <= dVar4) {
            if (dVar4 <= 1.1780972f) {
                return;
            }
            if (local_28 == 0.0) {
                pdVar2 = (double*)(*(NXTPixToolkit**)positionData)->GetScreen();
                uVar5 = local_38._12_4_;
                local_38._8_4_ = local_38._8_4_;
                local_38._0_8_ = local_38._0_8_ * -0.4142136100914581 + *pdVar2;
                local_38._12_4_ = uVar5;
                puVar3 = (uint64_t*)(*(NXTPixToolkit**)(lookatData + 8))->GetScreen();
                goto LAB_10062065f;
            }
            local_28 = local_28 * -2.4142135827301394;
        } else {
            local_28 = local_28 * -0.4142135751758648;
        }
        pdVar2 = (double*)(*(compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>**)positionData)
                     ->second();
        local_28 = local_28 + *pdVar2;
        puVar3 =
            (uint64_t*)(*(compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>**)(lookatData +
                                                                                                         8))
                ->second();
        local_38._0_4_ = (uint32_t)local_28;
        local_38._4_4_ = (uint32_t)((unsigned long)local_28 >> 32);
    LAB_10062065f:
        *puVar3 = (((uint64_t)local_38._4_4_ << 32) | (uint32_t)local_38._0_4_);
    }

    // 0x100620680
    void OldCamera::UpdateLookAt(unsigned long long arg1, float arg2, const math::QuaternionT<double>& quaternion) {
        shared_ptr<ILookatManager>* psVar2;
        long* plVar3;
        shared_ptr<IPositionManager>* this_02;
        OldCamera* this_03;
        float arg1_00;
        Vector3T<double>* local_68[2];
        Vector3T<double>* local_58;
        OldCamera* local_48[3];

        if (m_cameraMode != 3) {
            psVar2 = (shared_ptr<ILookatManager>*)(**(void (**)(...))((long)field_0 + 192))(this);
            if (!(((ILookatManager*)(*psVar2).operator->())->IsSpline())) {
                new (local_68) eastl::DequeIterator();
                psVar2 = (shared_ptr<ILookatManager>*)(**(void (**)(...))((long)field_0 + 192))(this);
                plVar3 = (long*)(*psVar2).operator->();
                if (!((**(void (**)(...))(*plVar3 + 40))(
                        plVar3, (DequeIterator<render::DynamicBuffer<render::VertexBuffer>::Buffer,
                                               render::DynamicBuffer<render::VertexBuffer>::Buffer*,
                                               render::DynamicBuffer<render::VertexBuffer>::Buffer&, 7u>*)local_68))) {
                    return;
                }
                if (m_cameraMode == 2) {
                    if (!(((**(void (**)(...))((long)field_0 + 200))(this))->operator_cast_to_bool())) {
                        return;
                    }
                    new (local_48) oldscape::dash3d::ModelLit::AABB();
                    this_02 = (shared_ptr<IPositionManager>*)(**(void (**)(...))((long)field_0 + 200))(this);
                    this_03 = (OldCamera*)(*this_02).operator->();
                    GetAngularPositionInterpolant();
                    if ((**(void (**)(...))((long)this_03->field_0 + 72))(this_03, (AABB*)local_48)) {
                        DeceleratingMovement::DeceleratingLookatUpdateWorldSpace(arg1_00, *local_48[0], *local_68[0],
                                                                                 *local_58, field_628, field_636);
                        this_03 = local_48[0];
                    }
                    ClampCinematicXAngle(this_03, (LookatData*)local_68, (PositionData*)local_48);
                    return;
                }
                UpdateLookAt(arg1, arg2, quaternion);
                if (m_cameraMode != 5) {
                    return;
                }
                if (!(DoingTimedMove())) {
                    m_cameraMode = 1;
                    return;
                }
                return;
            }
        }
        psVar2 = (shared_ptr<ILookatManager>*)(**(void (**)(...))((long)field_0 + 192))(this);
        plVar3 = (long*)(*psVar2).operator->();
        uint64_t uVar4 = GetEmissiveUVScale();
        uint64_t uVar5 = GetLinearLookatAcceleration();
        (**(void (**)(...))(*plVar3 + 24))(arg2, plVar3, uVar4, uVar5);
    }

    // 0x100620830
    void OldCamera::UpdatePosition(unsigned long long arg1, float arg2, const HeightMap* heightMap,
                                   const LinkMap* linkMap, const math::QuaternionT<double>& quaternion, int arg6,
                                   int arg7) {
        double dVar1;
        bool cVar2;
        ShaderVariablePrecision shaderVariablePrecision2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        shared_ptr<IPositionManager>* psVar7;
        long* plVar8;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar9;
        double* pdVar12;
        float arg1_00;
        uint8_t local_80[24];
        NXTPixToolkit_vtbl* local_68;
        NXTRenderer* pNStack_60;
        uint64_t local_58;
        double local_38;

        local_38 = (double)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)arg2);
        if (m_cameraMode != 3) {
            psVar7 = (shared_ptr<IPositionManager>*)(**(void (**)(...))((long)field_0 + 200))(this);
            plVar8 = (long*)(*psVar7).operator->();
            cVar2 = (**(void (**)(...))(*plVar8 + 16))(plVar8);
            if (!cVar2) {
                DoRotationUpdate(arg1);
                new (local_80) oldscape::dash3d::ModelLit::AABB();
                psVar7 = (shared_ptr<IPositionManager>*)(**(void (**)(...))((long)field_0 + 200))(this);
                plVar8 = (long*)(*psVar7).operator->();
                GetAngularPositionInterpolant();
                cVar2 = (**(void (**)(...))(*plVar8 + 72))(plVar8, local_80);
                if (cVar2) {
                    if (m_cameraMode == 2) {
                        DeceleratingMovement::DeceleratingMovementUpdateWorldSpace(
                            arg1_00, *local_80._0_8_, *local_80._8_8_, field_632, field_640);
                    } else {
                        UpdatePosition(arg1, local_38._0_4_, heightMap, linkMap, quaternion, arg6, arg7);
                        if ((m_cameraMode == 5) && (cVar2 = DoingTimedMove(), !cVar2)) {
                            m_cameraMode = 1;
                        }
                    }
                }
                if (5 < m_cameraMode) {
                    return;
                }
                if ((50U >> (m_cameraMode & 31) & 1) == 0) {
                    return;
                }
                shaderVariablePrecision2 = eastl::min<graphics::GraphicsQuality>(100, arg6 - 334);
                iVar3 = eastl::max<int>(0, shaderVariablePrecision2);
                iVar6 = m_camZoomScaleSmall;
                iVar5 = m_camZoomScaleBig;
                psVar7 = (shared_ptr<IPositionManager>*)(**(void (**)(...))((long)field_0 + 200))(this);
                plVar8 = (long*)(*psVar7).operator->();
                dVar1 = (double)(**(void (**)(...))(*plVar8 + 136))(plVar8);
                iVar4 = math::conversion::RadiansToOldJagexAngle((float)dVar1);
                iVar5 = (iVar4 * 3 + 600) * (((iVar5 - iVar6) * iVar3) / 100 + iVar6);
                iVar6 = iVar5 + 255;
                if (-1 < iVar5) {
                    iVar6 = iVar5;
                }
                local_58 = field_760;
                local_68 = (NXTPixToolkit_vtbl*)field_744;
                pNStack_60 = field_752;
                local_38 = (double)(iVar6 >> 8);
                pdVar12 = (double*)local_68.GetScreen();
                *pdVar12 = local_38;
                psVar7 = (shared_ptr<IPositionManager>*)(**(void (**)(...))((long)field_0 + 200))(this);
                iVar6 = ((CommandLine*)(*psVar7).operator->())->GetPos();
                if (iVar6 != 1) {
                    LogAssert("GetPositionManager()->GetMode() == PositionMode::ENTITY",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "camera/OldCamera.cpp",
                              181, nullptr);
                }
                pvVar9 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(**(void (**)(...))(
                    (long)field_0 + 200))(this);
                ((PositionEntity*)pvVar9->end())->SetPositionOffset(local_68);
                return;
            }
        }
        pvVar9 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(**(void (**)(...))((long)field_0 +
                                                                                                        200))(this);
        auto this_00 = pvVar9->end();
        psVar7 = (shared_ptr<IPositionManager>*)(**(void (**)(...))((long)field_0 + 200))(this);
        plVar8 = (long*)(*psVar7).operator->();
        uint64_t uVar10 = GetLinearPositionMaxSpeed();
        uint64_t uVar11 = GetServerPosition();
        (**(void (**)(...))(*plVar8 + 24))(local_38._0_4_, plVar8, uVar10, uVar11);
        cVar2 = this_00->Finished();
        if (cVar2) {
            field_680 = 1;
        }
    }

    // 0x100620b20
    void OldCamera::DoRotationUpdate(unsigned long long arg1) {
        bool cVar1;
        shared_ptr<IPositionManager>* this_00;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        PositionEntity* this_03;
        ReturnValue* pRVar3;
        double dVar4;
        Vector3T<double> local_68;
        ReturnValue local_50;

        if (((m_cameraMode == 4) || (m_cameraMode == 1)) && (cVar1 = ManagersReady(), cVar1)) {
            this_00 = (shared_ptr<IPositionManager>*)(**(void (**)(...))((long)field_0 + 200))(this);
            if (((CommandLine*)(*this_00).operator->())->GetPos() != 1) {
                LogAssert("GetPositionManager()->GetMode() == PositionMode::ENTITY",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                          "OldCamera.cpp",
                          551, nullptr);
            }
            this_02 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(**(void (**)(...))(
                (long)field_0 + 200))(this);
            this_03 = (PositionEntity*)this_02->end();
            local_50 = math::QuaternionT<double>();
            if (field_696 == 0.0) {
                if (field_705 != '\0') {
                    field_705 = '\0';
                    if (field_688 == 0.0) {
                        if (field_704 == '\0') {
                            return;
                        }
                    } else {
                        this_03->GetOrientationOffset(local_50);
                        local_68** PTR_RIGHT_100ee66c8;
                        local_50.FromAxisAngle(local_68, field_688 * 0.0016666666666666668);
                        pRVar3 = local_50 = math::QuaternionT<double>::Normalise();
                        this_03->UpdateOrientationOffset(*pRVar3, arg1);
                        if (field_704 == '\0') {
                            dVar4 = field_688 * 0.5;
                            field_688 = dVar4;
                            if (1.0 <= ABS(dVar4)) {
                                return;
                            }
                            field_688 = 0.0;
                            return;
                        }
                    }
                    field_704 = '\0';
                }
            } else {
                local_50.FromAxisAngle(*PTR_UP_100ee66b0, field_696 * 0.0016666666666666668);
                pRVar3 = local_50 = math::QuaternionT<double>::Normalise();
                this_03->UpdateOrientationOffset(*pRVar3, arg1);
                if (field_705 == '\0') {
                    dVar4 = field_696 * 0.5;
                    field_696 = dVar4;
                    if (ABS(dVar4) < 1.0) {
                        field_696 = 0.0;
                    }
                } else {
                    field_705 = '\0';
                }
            }
        }
    }

    // 0x100620d50
    void OldCamera::MoveTo(int arg1, int arg2, int arg3, int arg4, int arg5, bool arg6,
                           const math::Vector3T<double>& vector3) {
        int iVar2;
        Logger* pLVar3;
        shared_ptr<IPositionManager>* psVar4;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        PositionPoint* this_02;
        Vector3T<double> local_78;
        ColourHSL local_60;
        Vector3T<double>* local_50[3];
        int local_34;

        bool cVar1 = ManagersReady();
        if (!cVar1) {
            pLVar3 = logger::default_logger();
            pLVar3->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "OldCamera.cpp",
                        196, "%s - managers not ready!", "MoveTo");
        } else {
            if (m_cameraMode == 1) {
                local_34 = arg2;
                cVar1 = field_648->operator_cast_to_bool();
                if (cVar1) {
                    pLVar3 = logger::default_logger();
                    pLVar3->Log(false, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "camera/OldCamera.cpp",
                                206,
                                "Camera.moveTo - Overwriting currently stored player position manager, this may be "
                                "problematic");
                }
                psVar4 = (shared_ptr<IPositionManager>*)(**(void (**)(...))((long)field_0 + 200))(this);
                *field_648 = *psVar4;
                arg2 = local_34;
            }
            iVar2 = GetMinGridZ();
            if (iVar2 != 0) {
                SetPositionMode(0, arg6);
            }
            local_34 = arg5;
            psVar4 = (shared_ptr<IPositionManager>*)(**(void (**)(...))((long)field_0 + 200))(this);
            iVar2 = ((CommandLine*)(*psVar4).operator->())->GetPos();
            if (iVar2 != 0) {
                LogAssert("GetPositionManager()->GetMode() == PositionMode::POINT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                          "OldCamera.cpp",
                          218, nullptr);
            }
            this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(**(void (**)(...))(
                (long)field_0 + 200))(this);
            this_02 = (PositionPoint*)this_01->end();
            local_60 = math::ColourHSL((float)arg1, (float)arg3, (float)arg2);
            new (local_50) CoordFine(0, &local_60);
            this_02->SetDestination(*local_50);
            new (local_50) oldscape::dash3d::ModelLit::AABB();
            cVar1 = this_02->GetPositionData(NAN);
            iVar2 = local_34;
            if (cVar1) {
                if ((arg6) && (99 < local_34)) {
                    vector3 = &local_78;
                    vector3.Vector3T<float>(local_60);
                }
                iVar2 = local_34;
                *local_50[0] = vector3;
            }
            field_632 = arg4;
            field_640 = iVar2;
            m_cameraMode = 2;
        }
    }

    // 0x100620fb0
    void OldCamera::LookAt(int arg1, int arg2, int arg3, int arg4, int arg5, bool arg6,
                           const math::Vector3T<double>& vector3) {
        uint8_t* this_00;
        int iVar2;
        Logger* pLVar3;
        shared_ptr<ILookatManager>* psVar4;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        LookatPoint* this_03;
        int iVar5;
        Vector3T<double> local_88;
        Vector3T<double>* local_70[4];
        ColourHSL local_50;

        bool cVar1 = ManagersReady();
        if (!cVar1) {
            pLVar3 = logger::default_logger();
            pLVar3->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "OldCamera.cpp",
                        268, "%s - managers not ready!", "LookAt");
        } else {
            if (m_cameraMode == 1) {
                this_00 = field_664;
                cVar1 = this_00->operator_cast_to_bool();
                if (cVar1) {
                    pLVar3 = logger::default_logger();
                    pLVar3->Log(
                        false, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "OldCamera.cpp",
                        277,
                        "Camera.lookAt - Overwriting currently stored player lookAt manager, this may be problematic");
                }
                this = this;
                psVar4 = (shared_ptr<ILookatManager>*)(**(void (**)(...))((long)field_0 + 192))(this);
                *this_00 = *psVar4;
            }
            iVar2 = SampleRate();
            if (iVar2 != 0) {
                SetLookatMode(0, arg6);
            }
            psVar4 = (shared_ptr<ILookatManager>*)(**(void (**)(...))((long)field_0 + 192))(this);
            iVar2 = ((CommandLine*)(*psVar4).operator->())->GetPos();
            if (iVar2 != 0) {
                LogAssert("GetLookatManager()->GetMode() == LookatMode::POINT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                          "OldCamera.cpp",
                          288, nullptr);
            }
            this_02 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(**(void (**)(...))(
                (long)field_0 + 192))(this);
            this_03 = (LookatPoint*)this_02->end();
            local_50 = math::ColourHSL((float)arg1, (float)arg3, (float)arg2);
            new (local_70) CoordFine(0, &local_50);
            this_03->SetLookat(*local_70);
            new (local_70) eastl::DequeIterator();
            cVar1 = this_03->GetLookatData();
            iVar2 = arg4;
            iVar5 = arg5;
            if (cVar1) {
                if (99 < arg5) {
                    vector3 = &local_88;
                    vector3.Vector3T<float>(local_50);
                }
                iVar5 = arg5;
                *local_70[0] = vector3;
            }
            field_628 = iVar2;
            field_636 = iVar5;
            m_cameraMode = 2;
        }
    }

    // 0x100621200
    void OldCamera::SmoothReset(const shared_ptr<Entity>& entity, unsigned long long arg2) {
        uint8_t* vector31;
        uint8_t* vector32;
        shared_ptr<IPositionManager>* psVar2;
        long* plVar3;
        shared_ptr<ILookatManager>* psVar4;
        Vector3T<double>* local_68[3];
        Vector3T<double>* local_50;
        Vector3T<double>* local_48;

        if (ManagersReady() == '\0') {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                      "OldCamera.cpp",
                      332, "%s - managers not ready!", "SmoothReset");
        } else {
            psVar2 = (shared_ptr<IPositionManager>*)(**(void (**)(...))((long)field_0 + 200))(this);
            plVar3 = (long*)(*psVar2).operator->();
            vector31 = field_848;
            (**(void (**)(...))(*plVar3 + 80))(plVar3, vector31, arg2);
            psVar4 = (shared_ptr<ILookatManager>*)(**(void (**)(...))((long)field_0 + 192))(this);
            plVar3 = (long*)(*psVar4).operator->();
            vector32 = field_872;
            (**(void (**)(...))(*plVar3 + 56))(plVar3, vector32);
            TimedMovement(*vector31, *vector32, arg2, -1);
            (**(void (**)(...))((long)field_0 + 312))(this, entity, 1);
            new (local_68) oldscape::dash3d::ModelLit::AABB();
            new (&local_50) eastl::DequeIterator();
            psVar2 = (shared_ptr<IPositionManager>*)(**(void (**)(...))((long)field_0 + 200))(this);
            plVar3 = (long*)(*psVar2).operator->();
            (**(void (**)(...))(*plVar3 + 72))(9221120237041090560, plVar3, (AABB*)local_68);
            psVar4 = (shared_ptr<ILookatManager>*)(**(void (**)(...))((long)field_0 + 192))(this);
            plVar3 = (long*)(*psVar4).operator->();
            (**(void (**)(...))(*plVar3 + 40))(
                plVar3, (DequeIterator<render::DynamicBuffer<render::VertexBuffer>::Buffer,
                                       render::DynamicBuffer<render::VertexBuffer>::Buffer*,
                                       render::DynamicBuffer<render::VertexBuffer>::Buffer&, 7u>*)&local_50);
            *local_68[0] = *vector31;
            *local_50 = *vector32;
            *local_48 = *vector32;
            m_cameraMode = 5;
        }
    }

    // 0x100621380
    void OldCamera::SetGradientParametricSplines(const BSplineCubic& bSplineCubic1, float arg2, float arg3,
                                                 const BSplineCubic& bSplineCubic2, float arg5, float arg6) {
        if (ManagersReady() == '\0') {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                      "OldCamera.cpp",
                      371, "%s - managers not ready!", "SetGradientParametricSplines");
        }
        m_cameraMode = 3;
        SetPositionMode(4, true);
        SetLookatMode(6, true);
        shared_ptr<IPositionManager>* this_01 =
            (shared_ptr<IPositionManager>*)(**(void (**)(...))((long)field_0 + 200))(this);
        CommandLine* pCVar3 = (CommandLine*)(*this_01).operator->();
        int iVar2 = pCVar3->GetPos();
        if (iVar2 != 4) {
            LogAssert("GetPositionManager()->GetMode() == PositionMode::SPLINE_GRADIENTSPEEDPARAMETRICPROFILE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                      "OldCamera.cpp",
                      379, nullptr);
        }
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar4 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(**(void (**)(...))((long)field_0 +
                                                                                                   200))(this);
        auto this_02 = pvVar4->end();
        auto pSVar5 = this_02->GetScreen();
        pSVar5->AddSpline(bSplineCubic1, -1, 0.0);
        pSVar5 = (SplineMovement*)this_02->GetScreen();
        pSVar5->SetSpeedParameters((double)arg2, (double)arg3);
        shared_ptr<ILookatManager>* this_03 =
            (shared_ptr<ILookatManager>*)(**(void (**)(...))((long)field_0 + 192))(this);
        pCVar3 = (CommandLine*)(*this_03).operator->();
        iVar2 = pCVar3->GetPos();
        if (iVar2 != 6) {
            LogAssert("GetLookatManager()->GetMode() == LookatMode::SPLINE_GRADIENTSPEEDPARAMETRICPROFILE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                      "OldCamera.cpp",
                      384, nullptr);
        }
        pvVar4 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(**(void (**)(...))((long)field_0 +
                                                                                                        192))(this);
        auto this_04 = pvVar4->end();
        pSVar5 = (SplineMovement*)this_04->get_overflow_allocator();
        pSVar5->AddSpline(bSplineCubic2, -1, 0.0);
        pSVar5 = (SplineMovement*)this_04->get_overflow_allocator();
        pSVar5->SetSpeedParameters((double)arg5, (double)arg6);
    }

    // 0x100621630
    void OldCamera::Shake(camera::ShakeMode shakeMode, int arg2, int arg3, int arg4, int arg5) {
        ReturnValue local_50;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_40;

        float local_28 = (float)arg2;
        float local_24 = (float)arg3;
        float local_20 = (float)arg4;
        float local_1c = (float)arg5;
        ShakeMode local_2c = shakeMode;
        make_shared<camera::OldShake, camera::ShakeMode&, float, float, float, float>(&local_50, &local_2c, &local_28,
                                                                                      &local_24, &local_20, &local_1c);
        local_40.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_50);
        AddEffect(local_40);
    }

    // 0x1006217b0
    void OldCamera::StopShake() {
        RemoveAllEffects();
    }

    // 0x1006217c0
    void OldCamera::AlterRotationSpeed(bool arg1, bool arg2) {
        double dVar2;

        if ((IsClientControlled() != '\0') && ((m_cameraMode == 4 || (m_cameraMode == 1)))) {
            if (arg1) {
                if (field_704 == '\0') {
                    if (arg2) {
                        dVar2 = 6.0;
                    } else {
                        dVar2 = -6.0;
                    }
                    field_688 = field_688 * 0.5 + dVar2;
                    field_704 = '\x01';
                }
            } else if (field_705 == '\0') {
                if (arg2) {
                    dVar2 = 12.0;
                } else {
                    dVar2 = -12.0;
                }
                field_696 = field_696 * 0.5 + dVar2;
                field_705 = '\x01';
            }
        }
    }

    // 0x100621890
    void OldCamera::TrackPlayer(const shared_ptr<Entity>& entity, bool arg2) {
        bool cVar1;
        bool bVar2;
        int iVar3;
        shared_ptr<ILookatManager>* psVar4;
        shared_ptr* psVar5;
        shared_ptr<IPositionManager>* psVar6;
        long* plVar7;
        CommandLine* pCVar8;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar9;
        PositionEntity* this_01;
        uint64_t in_register_00000011;
        ReturnValue local_a0;
        AABB local_88;
        shared_ptr<oldscape::ClientScript> local_70;
        shared_ptr<oldscape::ClientScript> local_60;
        AABB local_50;

        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
        LAB_1006218da:
            iVar3 = SampleRate();
            bVar2 = true;
            if (iVar3 == 1) {
                psVar5 = (shared_ptr*)(**(void (**)(...))((long)field_0 + 192))(this);
                cVar1 = shared_ptr::operator_cast_to_bool(psVar5);
                if (cVar1) {
                    psVar4 = (shared_ptr<ILookatManager>*)(**(void (**)(...))((long)field_0 + 192))(this);
                    plVar7 = (long*)(*psVar4).operator->();
                    (**(void (**)(...))(*plVar7 + 16))(&local_70, plVar7);
                    bVar2 = local_70 != entity;
                }
            }
            if (bVar2 != false) {
                local_50 = oldscape::dash3d::ModelLit::AABB();
                psVar5 = (shared_ptr*)(**(void (**)(...))((long)field_0 + 192))(this);
                cVar1 = shared_ptr::operator_cast_to_bool(psVar5);
                if ((!cVar1) || (iVar3 = SampleRate(), iVar3 != 1)) {
                    SetLookatMode(1, false);
                    local_50 = field_720;
                } else {
                    psVar4 = (shared_ptr<ILookatManager>*)(**(void (**)(...))((long)field_0 + 192))(this);
                    plVar7 = (long*)(*psVar4).operator->();
                    (**(void (**)(...))(*plVar7 + 48))(plVar7, &local_50);
                }
                psVar4 = (shared_ptr<ILookatManager>*)(**(void (**)(...))((long)field_0 + 192))(this);
                pCVar8 = (CommandLine*)(*psVar4).operator->();
                iVar3 = pCVar8->GetPos();
                if (iVar3 != 1) {
                    LogAssert("GetLookatManager()->GetMode() == LookatMode::ENTITY",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "camera/OldCamera.cpp",
                              460, nullptr);
                }
                pvVar9 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(**(void (**)(...))(
                    (long)field_0 + 192))(this);
                ((LookatEntity*)pvVar9->end())->SetLookatEntity(entity, local_50, false);
            }
        } else {
            cVar1 = field_664->operator_cast_to_bool();
            if (!cVar1)
                goto LAB_1006218da;
            SetLookatManager(*field_664);
        }
        if (arg2) {
            cVar1 = field_648->operator_cast_to_bool();
            if (cVar1) {
                SetPositionManager(*field_648);
                goto LAB_100621c48;
            }
        }
        iVar3 = GetMinGridZ();
        bVar2 = true;
        if (iVar3 == 1) {
            psVar5 = (shared_ptr*)(**(void (**)(...))((long)field_0 + 200))(this);
            cVar1 = shared_ptr::operator_cast_to_bool(psVar5);
            if (cVar1) {
                psVar6 = (shared_ptr<IPositionManager>*)(**(void (**)(...))((long)field_0 + 200))(this);
                plVar7 = (long*)(*psVar6).operator->();
                (**(void (**)(...))(*plVar7 + 64))(&local_60, plVar7);
                bVar2 = local_60 != entity;
            }
        }
        if (bVar2 != false) {
            local_88 = oldscape::dash3d::ModelLit::AABB();
            local_50 = math::QuaternionT<double>();
            psVar5 = (shared_ptr*)(**(void (**)(...))((long)field_0 + 200))(this);
            cVar1 = shared_ptr::operator_cast_to_bool(psVar5);
            if ((!cVar1) || (iVar3 = GetMinGridZ(), iVar3 != 1)) {
                SetPositionMode(1, false);
                local_88 = field_744;
                local_50 = field_768;
            } else {
                psVar6 = (shared_ptr<IPositionManager>*)(**(void (**)(...))((long)field_0 + 200))(this);
                pCVar8 = (CommandLine*)(*psVar6).operator->();
                iVar3 = pCVar8->GetPos();
                if (iVar3 != 1) {
                    LogAssert("GetPositionManager()->GetMode() == PositionMode::ENTITY",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "camera/OldCamera.cpp",
                              486, nullptr);
                }
                pvVar9 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(**(void (**)(...))(
                    (long)field_0 + 200))(this);
                this_01 = (PositionEntity*)pvVar9->end();
                this_01->GetPositionOffset(&local_a0, this_01);
                local_88 = local_a0;
                this_01->GetOrientationOffset(local_50);
            }
            psVar6 = (shared_ptr<IPositionManager>*)(**(void (**)(...))((long)field_0 + 200))(this);
            pCVar8 = (CommandLine*)(*psVar6).operator->();
            iVar3 = pCVar8->GetPos();
            if (iVar3 != 1) {
                LogAssert("GetPositionManager()->GetMode() == PositionMode::ENTITY",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                          "OldCamera.cpp",
                          492, nullptr);
            }
            pvVar9 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(**(void (**)(...))(
                (long)field_0 + 200))(this);
            PositionEntity::SetPositionEntity(*((shared_ptr<Entity>*)pvVar9->end()), entity, local_88,
                                              (uint8_t)(&local_50), 0, 200);
        }
    LAB_100621c48:
        field_648->reset();
        field_664->reset();
        field_896.reset();
        m_cameraMode = 1;
    }

    // 0x100621d80
    void OldCamera::TrackEntity(const shared_ptr<Entity>& entity, unsigned long long arg2) {
        shared_ptr<IPositionManager>* this_00;
        long* plVar2;
        shared_ptr<ILookatManager>* this_01;

        if (ManagersReady() == '\0') {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                      "OldCamera.cpp",
                      525, "%s - managers not ready!", "TrackEntity");
        } else {
            this_00 = (shared_ptr<IPositionManager>*)(**(void (**)(...))((long)field_0 + 200))(this);
            plVar2 = (long*)(*this_00).operator->();
            (**(void (**)(...))(*plVar2 + 80))(plVar2, field_848, arg2);
            this_01 = (shared_ptr<ILookatManager>*)(**(void (**)(...))((long)field_0 + 192))(this);
            plVar2 = (long*)(*this_01).operator->();
            (**(void (**)(...))(*plVar2 + 56))(plVar2, field_872);
            TimedMovement(*field_848, *field_872, arg2, -1);
            (**(void (**)(...))((long)field_0 + 312))(this, entity, 0);
            field_896 = entity;
            m_cameraMode = 4;
        }
    }

    // 0x100621ed0
    void OldCamera::SetFOVClamping(float arg1, float arg2, float arg3, float arg4) {
        float fVar1 = -1.0;
        float fVar2 = -1.0;
        float fVar3 = -1.0;
        if (arg1 != 0.0) {
            fVar1 = arg3;
            fVar2 = arg2;
            fVar3 = arg4;
        }
        field_824 =
            (float)(~-(unsigned int)(arg1 == 0.0) & (unsigned int)arg1 | -(unsigned int)(arg1 == 0.0) & 3212836864);
        field_828 = fVar2;
        field_832 = fVar1;
        field_836 = fVar3;
    }

    // 0x100621f30
    void OldCamera::UpdateFOV(int arg1, int arg2) {
        float fVar1;
        uint32_t uVar3;
        uint32_t* puVar5;
        float fVar8;

        int iVar2 = 334;
        if (334 < arg1) {
            iVar2 = arg1;
        }
        int iVar6 = 434;
        if (iVar2 < 434) {
            iVar6 = iVar2;
        }
        float fVar10 = (float)(iVar6 - 334) * 0.01 * (m_verticalFOVBig - m_verticalFOVSmall) + m_verticalFOVSmall;
        float fVar9 = (float)arg2;
        field_816 = fVar10;
        field_820 = (fVar10 * fVar9) / (float)arg1;
        uint8_t* this_00 = &field_840;
        int* piVar4 = (int*)this_00->SSOBeginPtr();
        *piVar4 = arg2;
        piVar4 = (int*)this_00->y();
        *piVar4 = arg1;
        if (field_824 != -1.0) {
            fVar10 = field_832;
            if (field_820 < fVar10) {
                field_820 = fVar10;
                fVar8 = (fVar10 * (float)arg1) / fVar9;
                field_816 = fVar8;
                fVar1 = field_828;
                fVar8 = (float)::abs(fVar8 - fVar1);
                if (2.0 < fVar8) {
                    field_816 = fVar1;
                    uVar3 = eastl::min<graphics::GraphicsQuality>(arg1, (int)((fVar1 * fVar9) / fVar10) & 4294967294);
                    puVar5 = (uint32_t*)this_00->y();
                    *puVar5 = uVar3;
                }
            }
            fVar10 = field_836;
            if (fVar10 < field_820) {
                field_820 = fVar10;
                fVar9 = ((float)arg1 * fVar10) / fVar9;
                field_816 = fVar9;
                fVar1 = field_824;
                fVar9 = (float)::abs(fVar9 - fVar1);
                if (2.0 < fVar9) {
                    field_816 = fVar1;
                    uVar3 =
                        eastl::min<graphics::GraphicsQuality>(arg2, (int)(((float)arg1 * fVar10) / fVar1) & 4294967294);
                    puVar5 = (uint32_t*)this_00->SSOBeginPtr();
                    *puVar5 = uVar3;
                }
            }
        }
    }

    // 0x100622130
    void OldCamera::ResetRotation() {
        field_688 = 0.0;
        field_696 = 0.0;
        field_704 = '\0';
        field_705 = '\x01';
    }

} // namespace jag::game

// 0x100622120
unsigned long abs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}
