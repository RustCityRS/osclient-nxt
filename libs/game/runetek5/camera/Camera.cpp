// libs/game/runetek5/camera/Camera.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "Camera.h"

namespace jag::game {
    // 0x1039bc140
    bool Camera::m_debugCameraEffects;

    // 0x1039bc141
    bool Camera::m_freezeCameraUpdate;

    // 0x1039bc148, set at startup by ___cxx_global_var_init.32
    math::Vector3T<double> Camera::infiniteAcceleration = Vector3T<double>(INFINITY, 0.0, 0.0);

    // 0x1000fa850: Camera::GetLinearPositionAcceleration() const has the same machine code as oldscape::graphics::NXTPixToolkit::getWorldRenderer()

    // 0x1001d07d0: Camera::GetLookatManager() const has the same machine code as graphics::SceneViewData::GetViewFrustum() const

    // 0x100324d50: Camera::GetPositionManager() const has the same machine code as oldscape::graphics::NXTPixToolkit::GetPix3D()

    // 0x10036f470: Camera::GetLinearPositionMaxSpeed() const has the same machine code as graphics::GeometryBatch::GetFaceHSLBuffer()

    // 0x1003f51a0: Camera::GetPositionMode() const has the same machine code as BASType::GetHillRotateLength() const

    // 0x100412e50: Camera::GetLinearLookatAcceleration() const has the same machine code as MapSquarePointLights::GetPointLightTexture()

    // 0x1004198f0: Camera::GetProjectionMode() const has the same machine code as GraphicsDefaults::GetNpcChatTimeout() const

    // 0x1004ab8a0: Camera::GetLinearLookatMaxSpeed() const has the same machine code as EnvironmentOverride::GetVolumetricOverrides() const

    // 0x100623060: Camera::Ready() const has the same machine code as OldCamera::Ready() const

    // 0x10062e760
    Camera::Camera(const std::function<shared_ptr<Entity>(CameraTrackableType, int)>& callback)
        : field_144(callback), m_clientControlled(1), m_projectionMode(0), m_lookatMode(1), m_positionMode(1),
          field_288(0), field_292(true), field_293(true), field_296(1), field_304(0.05f),
          m_angularPositionInterpolant(0.05f), field_320(0), field_328(1.0), field_336(1280), field_340(10),
          field_344(1) {
        field_416 = reinterpret_cast<const uint64_t*>(&infiniteAcceleration)[2];
        uint64_t uVar2 = reinterpret_cast<const uint64_t*>(&infiniteAcceleration)[1];
        m_linearLookatAcceleration = infiniteAcceleration;
        field_408 = uVar2;
        uVar2 = reinterpret_cast<const uint64_t*>(&infiniteAcceleration)[1];
        m_linearPositionAcceleration = infiniteAcceleration;
        field_432 = uVar2;
        field_440 = reinterpret_cast<const uint64_t*>(&infiniteAcceleration)[2];
        new (field_448) oldscape::dash3d::ModelLit::AABB();
        new (field_472) oldscape::dash3d::ModelLit::AABB();
        field_496 = 0.0;
        field_504 = 0.0;
        m_fieldOfView = 1.5707965f;
        field_516 = 1.5707965f;
        m_aspectRatio = 1.0;
        field_524 = 1.0;
        m_nearPlane = 115.0;
        field_536 = 230.0;
        field_544 = 1;
        field_545 = 0;
        field_548 = 2000;
        field_552 = 2000;
        field_560 = 0;
        field_568 = 0;
        new (field_576) oldscape::dash3d::ModelLit::AABB();
        new (field_600) oldscape::dash3d::ModelLit::AABB();
        field_248.reserve(4);
    }

    // 0x10062ece0
    uint64_t Camera::ManagersReady() const {
        long* plVar2;

        if (m_pLookatManager->operator_cast_to_bool()) {
            plVar2 = (long*)(*m_pLookatManager).operator->();
            if ((**(void (**)(...))(*plVar2 + 104))(plVar2)) {
                if (m_positionManager->operator_cast_to_bool()) {
                    plVar2 = (long*)(*m_positionManager).operator->();
                    return (**(void (**)(...))(*plVar2 + 32))(plVar2);
                }
            }
        }
        return 0;
    }

    // 0x10062edc0
    uint64_t Camera::CamLocked() const {
        uint64_t uVar3;

        uint8_t* this_00 = m_positionManager;
        if ((this_00->operator_cast_to_bool() == '\0') || (m_positionMode != 1)) {
            uVar3 = 0;
        } else {
            if (((CommandLine*)(*this_00).operator->())->GetPos() != 1) {
                LogAssert("m_positionManager->GetMode() == PositionMode::ENTITY",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                          "Camera.cpp",
                          55, nullptr);
            }
            uVar3 = ((PositionPoint*)this_00->end())->Ready();
        }
        return uVar3;
    }

    // 0x10062ee60
    void Camera::LockCamera() {
        PositionEntity* this_01;
        QuaternionT<double> local_38;

        if (m_positionMode == 1) {
            if (((CommandLine*)(*m_positionManager).operator->())->GetPos() != 1) {
                LogAssert("m_positionManager->GetMode() == PositionMode::ENTITY",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                          "Camera.cpp",
                          68, nullptr);
            }
            this_01 = (PositionEntity*)m_positionManager->end();
            this_01->InvalidateAsyncUpdate();
            local_38 = math::QuaternionT<double>();
            CameraHelpers::OldJagexAnglesToQuaternion(local_38, 256, 0, 0);
            this_01->SetOrientationOffset(local_38);
        }
    }

    // 0x10062ef20
    void Camera::UnlockCamera() {
        uint8_t* this_00 = m_positionManager;
        if ((this_00->operator_cast_to_bool() != '\0') && (m_positionMode == 1)) {
            if (((CommandLine*)(*this_00).operator->())->GetPos() != 1) {
                LogAssert("m_positionManager->GetMode() == PositionMode::ENTITY",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                          "Camera.cpp",
                          81, nullptr);
            }
            ((PositionEntity*)this_00->end())->UnlockCamera();
        }
    }

    // 0x10062efa0
    void Camera::SetLookatMode(LookatMode lookatMode, bool arg2) {
        Logger* pLVar1;
        uint64_t in_register_00000011;
        ReturnValue local_30;

        LookatMode local_1c = lookatMode;
        if (((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) && (m_clientControlled == 0)) {
            pLVar1 = logger::default_logger();
            pLVar1->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
                92, "Camera: client-driven call to setLookatMode, but server is in control of camera.");
        } else {
            switch (lookatMode) {
            case 0:
                make_shared<LookatPoint>(&local_30);
                *m_pLookatManager = local_30;
                break;
            case 1:
                make_shared<LookatEntity>(&local_30);
                *m_pLookatManager = local_30;
                break;
            case 2:
            case 4:
            case 6:
                make_shared<LookatSpline, LookatMode&>(&local_30, &local_1c);
                *m_pLookatManager = local_30;
                break;
            case 3:
                make_shared<LookatOrientation>(&local_30);
                *m_pLookatManager = local_30;
                break;
            case 5:
                make_shared<LookatSplineMatchPosition>(&local_30);
                *m_pLookatManager = local_30;
                break;
            default:
                pLVar1 = logger::default_logger();
                pLVar1->Log(false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "camera/Camera.cpp",
                            116, "Camera.setLookatMode: unknown mode %d", local_1c);
            }
            m_lookatMode = local_1c;
        }
    }

    // 0x10062f4b0
    void Camera::SetPositionMode(PositionMode positionMode, bool arg2) {
        Logger* this_00;
        uint64_t in_register_00000011;
        int arg4;
        char* str2;
        ReturnValue local_30;

        PositionMode local_1c = positionMode;
        if (((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) && (m_clientControlled == 0)) {
            this_00 = logger::default_logger();
            str2 = "Camera: client-driven call to setPositionMode, but server is in control of camera.";
            arg4 = 130;
        LAB_10062f5ac:
            this_00->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
                arg4, str2);
        } else {
            if (positionMode - 2 < 3) {
                make_shared<PositionSpline, PositionMode&>(&local_30, &local_1c);
                *m_positionManager = local_30;
            } else if (positionMode == 1) {
                make_shared<PositionEntity>(&local_30);
                *m_positionManager = local_30;
            } else {
                if (positionMode != 0) {
                    this_00 = logger::default_logger();
                    str2 = "Camera.setPositionMode: unknown mode %d";
                    arg4 = 148;
                    goto LAB_10062f5ac;
                }
                make_shared<PositionPoint>(&local_30);
                *m_positionManager = local_30;
            }
            m_positionMode = local_1c;
        }
    }

    // 0x10062f800
    void Camera::SetNearPlane(int arg1) {
        double dVar1;

        if (arg1 < 1) {
            dVar1 = 115.0;
        } else {
            dVar1 = (double)arg1;
        }
        m_nearPlane = dVar1;
        field_544 = 1;
    }

    // 0x10062f850
    double Camera::GetFarPlane(const World* world) const {
        unsigned int uVar1;
        double dVar2;

        if (field_544 != '\0') {
            if (world == nullptr) {
                dVar2 = 12288.0;
            } else {
                uVar1 = world->GetLODSettings()->GetFarPlane();
                dVar2 = (double)uVar1;
            }
            field_536 = dVar2;
            field_544 = 0;
        }
        return field_536;
    }

    // 0x10062f8d0
    void Camera::GetOrientationQuat(unsigned long long arg1, math::QuaternionT<double>& quaternion) {
        uint8_t local_50[24];

        AABB local_80;
        long* plVar1 = (long*)(*m_pLookatManager).operator->();
        (**(void (**)(...))(*plVar1 + 56))(plVar1, &local_80);
        AABB local_68;
        plVar1 = (long*)(*m_positionManager).operator->();
        (**(void (**)(...))(*plVar1 + 80))(plVar1, &local_68, arg1);
        math::Vector3Cross<double>(*local_50, local_80);
        auto puVar2 = local_50->SSOBeginPtr();
        double local_38 = (double)*puVar2;
        puVar2 = (uint64_t*)quaternion.SSOBeginPtr();
        *puVar2 = local_38;
        puVar2 = (uint64_t*)local_50->second();
        local_38 = (double)*puVar2;
        puVar2 = (uint64_t*)quaternion.second();
        *puVar2 = local_38;
        puVar2 = (uint64_t*)local_50->GetScreen();
        local_38 = (double)*puVar2;
        puVar2 = (uint64_t*)quaternion.GetScreen();
        *puVar2 = local_38;
        local_38 = (double)local_80.Length();
        double dVar4 = (double)local_68.Length();
        local_38 = SQRT(dVar4 * local_38);
        dVar4 = math::Vector3Dot<double>(local_80, local_68);
        local_38 = dVar4 + local_38;
        auto pdVar3 = quaternion.second();
        *pdVar3 = local_38;
        quaternion = math::QuaternionT<double>::Normalise();
        dVar4 = (double)quaternion.LengthSq();
        if (dVar4 == 0.0) {
            puVar2 = (uint64_t*)quaternion.second();
            *puVar2 = 4607182418800017408;
        }
    }

    // 0x10062fa70
    void Camera::UpdateLookAt(unsigned long long arg1, float arg2, const math::QuaternionT<double>& quaternion) {
        AABB* this_01;
        Mode MVar1;
        long* plVar3;
        long* plVar4;
        int in_stack_ffffffffffffff48;
        AABB local_a0;
        Vector3T<double> local_88;
        AABB local_70;
        DequeIterator<render::DynamicBuffer<render::VertexBuffer>::Buffer,
                      render::DynamicBuffer<render::VertexBuffer>::Buffer*,
                      render::DynamicBuffer<render::VertexBuffer>::Buffer&, 7u>
            local_58[8];
        LinearMovement* local_50;
        Vector3T<double>* local_48;
        Vector3T<double>* local_40;
        ReturnValue* local_38;

        local_38 = (ReturnValue*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)arg2);
        uint8_t* this_00 = m_pLookatManager;
        bool cVar2 = ((ILookatManager*)(*this_00).operator->())->IsSpline();
        if (!cVar2) {
            new (local_58) eastl::DequeIterator();
            plVar3 = (long*)(*this_00).operator->();
            cVar2 = (**(void (**)(...))(*plVar3 + 40))(plVar3, local_58);
            if (cVar2) {
                if (field_545 == '\0') {
                    MVar1 = field_296;
                    if (MVar1 == 2) {
                        local_50->LinearSpringMovementUpdateCameraSpace(
                            local_38._0_4_, quaternion, *local_48, *local_40, *field_448,
                            *((Vector3T<double>*)(unsigned long)field_336), field_496, field_344, 6486777);
                    } else if (MVar1 == 1) {
                        local_50->LinearMovementUpdateCameraSpace(local_38._0_4_, quaternion, *local_48, *local_40,
                                                                  m_linearLookatAcceleration, *m_linearLookatMaxSpeed,
                                                                  *((Vector3T<double>*)(unsigned long)field_320),
                                                                  field_336, field_328, field_340, 6486777);
                    } else if (MVar1 == 0) {
                        local_50->LinearMovementUpdateWorldSpace(
                            local_38._0_4_, *local_48, *local_40, m_linearLookatAcceleration, *m_linearLookatMaxSpeed,
                            *((Vector3T<double>*)(unsigned long)field_320), field_336, field_328, field_340,
                            in_stack_ffffffffffffff48);
                    }
                } else {
                    local_70 = oldscape::dash3d::ModelLit::AABB();
                    this_01 = (AABB*)(&local_88 - 48);
                    new (this_01) oldscape::dash3d::ModelLit::AABB();
                    plVar3 = (long*)(*this_00).operator->();
                    (**(void (**)(...))(*plVar3 + 56))(plVar3, &local_70);
                    plVar3 = (long*)(*this_00).operator->();
                    (**(void (**)(...))(*plVar3 + 72))(plVar3, this_01);
                    local_38 = (ReturnValue*)field_600;
                    cVar2 = game::TimedMovement::TimedMovementUpdateWorldSpace(arg1 - field_560, field_548, *local_38,
                                                                               local_70, *this_01);
                    local_a0 = oldscape::dash3d::ModelLit::AABB();
                    plVar3 = (long*)(*this_00).operator->();
                    plVar4 = (long*)(*this_00).operator->();
                    (**(void (**)(...))(*plVar4 + 48))(plVar4, &local_a0);
                    local_88 - local_70;
                    (**(void (**)(...))(*plVar3 + 64))(plVar3, &local_88);
                    if (cVar2) {
                        *field_576 = math::Vector3T<double>::SetToZero();
                        *local_38 = math::Vector3T<double>::SetToZero();
                        field_545 = 0;
                    }
                }
            }
        } else {
            plVar3 = (long*)(*this_00).operator->();
            (**(void (**)(...))(*plVar3 + 24))(local_38._0_4_, plVar3, m_linearLookatMaxSpeed,
                                               &m_linearLookatAcceleration);
        }
    }

    // 0x10062fd50
    void Camera::UpdatePosition(unsigned long long arg1, float arg2, const HeightMap* heightMap, const LinkMap* linkMap,
                                const math::QuaternionT<double>& quaternion, int arg6, int arg7) {
        Mode MVar1;
        uint8_t uVar3;
        int iVar4;
        shared_ptr<IPositionManager>* this_01;
        PositionEntity* this_03;
        int in_stack_ffffffffffffff38;
        AABB local_c0;
        Vector3T<double> local_a8;
        ReturnValue local_90;
        AABB local_70;
        LinearMovement* local_50;
        Vector3T<double>* local_48;
        Vector3T<double>* local_40;

        uint8_t* this_00 = m_positionManager;
        float local_34 = arg2;
        long* plVar5 = (long*)(*this_00).operator->();
        if (!((**(void (**)(...))(*plVar5 + 16))(plVar5))) {
            new (&local_50) oldscape::dash3d::ModelLit::AABB();
            plVar5 = (long*)(*this_00).operator->();
            GetAngularPositionInterpolant();
            iVar4 = 6487530;
            if ((**(void (**)(...))(*plVar5 + 72))(plVar5, (AABB*)&local_50)) {
                if (field_545 == '\0') {
                    MVar1 = field_296;
                    if (MVar1 == 2) {
                        local_50->LinearSpringMovementUpdateCameraSpace(
                            local_34, quaternion, *local_48, *local_40, *field_472,
                            *((Vector3T<double>*)(unsigned long)field_336), field_504, field_344, iVar4);
                    } else if (MVar1 == 1) {
                        local_50->LinearMovementUpdateCameraSpace(
                            local_34, quaternion, *local_48, *local_40, m_linearPositionAcceleration,
                            *m_linearPositionMaxSpeed, *((Vector3T<double>*)(unsigned long)field_320), field_336,
                            field_328, field_340, iVar4);
                    } else if (MVar1 == 0) {
                        local_50->LinearMovementUpdateWorldSpace(
                            local_34, *local_48, *local_40, m_linearPositionAcceleration, *m_linearPositionMaxSpeed,
                            *((Vector3T<double>*)(unsigned long)field_320), field_336, field_328, field_340,
                            in_stack_ffffffffffffff38);
                    }
                } else {
                    this_01 = (shared_ptr<IPositionManager>*)(**(void (**)(...))((long)field_0 + 200))(this);
                    iVar4 = ((CommandLine*)(*this_01).operator->())->GetPos();
                    if (iVar4 != 1) {
                        LogAssert("GetPositionManager()->GetMode() == PositionMode::ENTITY",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "camera/Camera.cpp",
                                  270, nullptr);
                    }
                    this_03 = (PositionEntity*)this_00->end();
                    local_70 = oldscape::dash3d::ModelLit::AABB();
                    local_c0 = oldscape::dash3d::ModelLit::AABB();
                    this_03->GetPosition((unsigned long long)&local_70);
                    this_03->GetDestinationPosition();
                    uVar3 = game::TimedMovement::TimedMovementUpdateWorldSpace(arg1 - field_568, field_552, *field_576,
                                                                               local_70, local_c0);
                    local_34 = (float)(((uint32_t)local_34._1_3_ << 8) | (uint8_t)uVar3);
                    this_03->GetPositionOffset(&local_90, this_03);
                    local_c0 = local_90;
                    local_90 = math::QuaternionT<double>();
                    this_03->GetOrientationOffset(local_90);
                    local_c0 *= &local_90;
                    local_a8 - local_70;
                    this_03->SetCurrentPosition();
                    if (local_34._0_1_ != '\0') {
                        *field_576 = math::Vector3T<double>::SetToZero();
                        *field_600 = math::Vector3T<double>::SetToZero();
                        field_545 = 0;
                    }
                }
            }
        } else {
            plVar5 = (long*)this_00->end();
            (**(void (**)(...))(*plVar5 + 24))(local_34, plVar5, m_linearPositionMaxSpeed,
                                               &m_linearPositionAcceleration);
        }
    }

    // 0x1006302d0
    void Camera::Update(float arg1, const HeightMap* heightMap, const LinkMap* linkMap, int arg4, int arg5) {
        int iVar2;
        CommandLine* pCVar3;
        PositionEntity* this_01;
        PositionPoint* this_02;
        long* plVar6;

        if (m_freezeCameraUpdate != '\0') {
            return;
        }
        unsigned long long arg1_00 = FrameTime::GetCurrentTimeMS();
        QuaternionT<double> local_68;
        if (ManagersReady()) {
            pCVar3 = (CommandLine*)(*m_pLookatManager).operator->();
            iVar2 = pCVar3->GetPos();
            if (iVar2 != 3) {
                GetOrientationQuat(arg1_00, local_68);
                goto LAB_100630353;
            }
        }
        local_68.SetToIdentity();
    LAB_100630353:
        if (m_pLookatManager->operator_cast_to_bool()) {
            (**(void (**)(...))((long)field_0 + 256))(arg1, this, arg1_00, &local_68);
        }
        uint8_t* this_00 = m_positionManager;
        unsigned long long local_48 = arg1_00;
        if (this_00->operator_cast_to_bool()) {
            pCVar3 = (CommandLine*)(*this_00).operator->();
            iVar2 = pCVar3->GetPos();
            if ((iVar2 == 1) && (this_01 = (PositionEntity*)this_00->end(), this_01 != nullptr)) {
                this_01->TestAndResolveCollision(heightMap, linkMap, field_293, field_292);
            }
            pCVar3 = (CommandLine*)(*this_00).operator->();
            iVar2 = pCVar3->GetPos();
            if ((iVar2 == 0) && (this_02 = (PositionPoint*)this_00->end(), this_02 != nullptr)) {
                this_02->TestAndResolveCollision(heightMap, linkMap, field_293, field_292);
            }
            (**(void (**)(...))((long)field_0 + 264))(arg1, this, local_48, heightMap, linkMap, &local_68, arg4, arg5);
        }
        long lVar4 = field_248.HeapBeginPtr();
        long lVar5 = field_248.end();
        for (; lVar4 != lVar5; lVar4 = lVar4 + 24) {
            plVar6 = (long*)(*((lVar4 + 8))).operator->();
            (**(void (**)(...))(*plVar6 + 16))(arg1, plVar6);
        }
    }

    // 0x100630530
    uint32_t Camera::GetViewVector(math::Vector3T<double>& vector3) const {
        long* plVar2;
        unsigned long long arg2;
        Vector3T<double>* vector3_00;
        AABB local_40;

        uint32_t uVar1 = ManagersReady();
        if ((char)uVar1 == '\0') {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                      "Camera.cpp",
                      381, "Camera::GetViewVector: lookat or position manager is not ready!");
        } else {
            plVar2 = (long*)(*m_pLookatManager).operator->();
            (**(void (**)(...))(*plVar2 + 56))(plVar2, vector3);
            local_40 = oldscape::dash3d::ModelLit::AABB();
            arg2 = FrameTime::GetCurrentTimeMS();
            vector3_00 = (Vector3T<double>*)GetPosition(local_40, arg2);
            vector3 -= *vector3_00;
            vector3 = math::Vector3T<double>::Normalize();
        }
        return uVar1;
    }

    // 0x1006305e0
    void Camera::GetPosition(math::Vector3T<double>& vector3, unsigned long long arg2) const {
        long* plVar2;

        uint8_t* this_00 = m_positionManager;
        if (((CommandLine*)(*this_00).operator->())->GetPos() == 1) {
            plVar2 = (long*)this_00->end();
            (**(void (**)(...))(*plVar2 + 88))(field_524, plVar2, vector3, arg2);
        } else {
            plVar2 = (long*)(*this_00).operator->();
            (**(void (**)(...))(*plVar2 + 80))(plVar2, vector3, arg2);
        }
    }

    // 0x1006306b0
    unsigned long Camera::GetCameraPosition(math::Vector3T<double>& vector3) const {
        long* plVar2;
        unsigned long long arg2;
        unsigned long uVar3;

        uint8_t* this_00 = m_positionManager;
        if (this_00->operator_cast_to_bool()) {
            plVar2 = (long*)(*this_00).operator->();
            if ((**(void (**)(...))(*plVar2 + 32))(plVar2)) {
                arg2 = FrameTime::GetCurrentTimeMS();
                GetPosition(vector3, arg2);
                uVar3 = (((uint64_t)((int64_t)((unsigned long)this_00 >> 8)) << 8) | (uint8_t)1);
                goto LAB_10063072b;
            }
        }
        auto this_01 = logger::default_logger();
        uVar3 = 0;
        this_01->Log(
            false, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            396, "Camera.getCameraPosition: position manager is not ready!");
    LAB_10063072b:
        return uVar3 & 4294967295;
    }

    // 0x100630760
    uint32_t Camera::GetCameraPosition(math::Vector3T<float>& vector3) const {
        unsigned long long arg2;
        AABB local_50;
        uint64_t local_38[2];

        long* plVar2 = (long*)(*m_positionManager).operator->();
        uint32_t uVar1 = (**(void (**)(...))(*plVar2 + 32))(plVar2);
        if ((char)uVar1 == '\0') {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                      "Camera.cpp",
                      408, "Camera.getCameraPosition: position manager is not ready!");
        } else {
            local_50 = oldscape::dash3d::ModelLit::AABB();
            arg2 = FrameTime::GetCurrentTimeMS();
            GetPosition(local_50, arg2);
            local_38[0] = math::Vector3FromVector3T<double>(local_50);
            vector3.SetXYZ(*local_38);
        }
        return uVar1;
    }

    // 0x100630830
    unsigned long Camera::GetCameraCurrentPosition(math::Vector3T<double>& vector3) const {
        long* plVar2;
        unsigned long uVar3;
        Vector3T<double> local_30;

        uint8_t* this_01 = m_positionManager;
        if (this_01->operator_cast_to_bool()) {
            plVar2 = (long*)(*this_01).operator->();
            if ((**(void (**)(...))(*plVar2 + 32))(plVar2)) {
                plVar2 = (long*)(*this_01).operator->();
                (**(void (**)(...))(*plVar2 + 48))(&local_30, plVar2);
                vector3 = local_30;
                uVar3 = (((uint64_t)((int64_t)((unsigned long)&local_30 >> 8)) << 8) | (uint8_t)1);
                goto LAB_1006308bc;
            }
        }
        auto this_00 = logger::default_logger();
        uVar3 = 0;
        this_00->Log(
            false, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            422, "Camera.getCameraCurrentPosition: position manager is not ready!");
    LAB_1006308bc:
        return uVar3 & 4294967295;
    }

    // 0x1006308f0
    unsigned long Camera::GetCameraCurrentPosition(math::Vector3T<float>& vector3) const {
        long* plVar2;
        unsigned long uVar3;
        Vector3T<double> local_40;
        uint64_t local_28[2];

        uint8_t* this_01 = m_positionManager;
        if (this_01->operator_cast_to_bool()) {
            plVar2 = (long*)(*this_01).operator->();
            if ((**(void (**)(...))(*plVar2 + 32))(plVar2)) {
                plVar2 = (long*)(*this_01).operator->();
                (**(void (**)(...))(*plVar2 + 48))(&local_40, plVar2);
                local_28[0] = math::Vector3FromVector3T<double>(local_40);
                vector3.SetXYZ(*local_28);
                uVar3 = (((uint64_t)((int64_t)((unsigned long)&local_40 >> 8)) << 8) | (uint8_t)1);
                goto LAB_10063098e;
            }
        }
        auto this_00 = logger::default_logger();
        uVar3 = 0;
        this_00->Log(
            false, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            434, "Camera.getCameraCurrentPosition: position manager is not ready!");
    LAB_10063098e:
        return uVar3 & 4294967295;
    }

    // 0x1006309c0
    unsigned long Camera::GetCameraPositionOffset(math::Vector3T<double>& vector3) const {
        long* plVar2;
        unsigned long uVar3;
        Vector3T<double> local_30;

        uint8_t* this_01 = m_positionManager;
        if (this_01->operator_cast_to_bool()) {
            plVar2 = (long*)(*this_01).operator->();
            if ((**(void (**)(...))(*plVar2 + 32))(plVar2)) {
                plVar2 = (long*)(*this_01).operator->();
                (**(void (**)(...))(*plVar2 + 56))(&local_30, plVar2);
                vector3 = local_30;
                uVar3 = (((uint64_t)((int64_t)((unsigned long)&local_30 >> 8)) << 8) | (uint8_t)1);
                goto LAB_100630a4c;
            }
        }
        auto this_00 = logger::default_logger();
        uVar3 = 0;
        this_00->Log(
            false, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            447, "Camera.getCameraPositionOffset: position manager is not ready!");
    LAB_100630a4c:
        return uVar3 & 4294967295;
    }

    // 0x100630a60
    unsigned long Camera::GetCameraPositionOffset(math::Vector3T<float>& vector3) const {
        long* plVar2;
        unsigned long uVar3;
        Vector3T<double> local_40;
        uint64_t local_28[2];

        uint8_t* this_01 = m_positionManager;
        if (this_01->operator_cast_to_bool()) {
            plVar2 = (long*)(*this_01).operator->();
            if ((**(void (**)(...))(*plVar2 + 32))(plVar2)) {
                plVar2 = (long*)(*this_01).operator->();
                (**(void (**)(...))(*plVar2 + 56))(&local_40, plVar2);
                local_28[0] = math::Vector3FromVector3T<double>(local_40);
                vector3.SetXYZ(*local_28);
                uVar3 = (((uint64_t)((int64_t)((unsigned long)&local_40 >> 8)) << 8) | (uint8_t)1);
                goto LAB_100630afe;
            }
        }
        auto this_00 = logger::default_logger();
        uVar3 = 0;
        this_00->Log(
            false, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            458, "Camera.getCameraPositionOffset: position manager is not ready!");
    LAB_100630afe:
        return uVar3 & 4294967295;
    }

    // 0x100630b10
    unsigned long Camera::GetCameraLookat(math::Vector3T<double>& vector3) const {
        long* plVar2;
        unsigned long uVar3;

        uint8_t* this_01 = m_pLookatManager;
        if (this_01->operator_cast_to_bool()) {
            plVar2 = (long*)(*this_01).operator->();
            if ((**(void (**)(...))(*plVar2 + 104))(plVar2)) {
                plVar2 = (long*)(*this_01).operator->();
                (**(void (**)(...))(*plVar2 + 56))(plVar2, vector3);
                uVar3 = (((uint64_t)((int64_t)((unsigned long)this_01 >> 8)) << 8) | (uint8_t)1);
                goto LAB_100630b89;
            }
        }
        auto this_00 = logger::default_logger();
        uVar3 = 0;
        this_00->Log(
            false, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            469, "Camera.getViewVector: lookat manager is not ready!");
    LAB_100630b89:
        return uVar3 & 4294967295;
    }

    // 0x100630bb0
    unsigned long Camera::GetCameraLookat(math::Vector3T<float>& vector3) const {
        long* plVar2;
        unsigned long uVar3;
        AABB local_48;
        uint64_t local_30[2];

        uint8_t* this_01 = m_pLookatManager;
        if (this_01->operator_cast_to_bool()) {
            plVar2 = (long*)(*this_01).operator->();
            if ((**(void (**)(...))(*plVar2 + 104))(plVar2)) {
                local_48 = oldscape::dash3d::ModelLit::AABB();
                plVar2 = (long*)(*this_01).operator->();
                (**(void (**)(...))(*plVar2 + 56))(plVar2, &local_48);
                local_30[0] = math::Vector3FromVector3T<double>(local_48);
                vector3.SetXYZ(*local_30);
                uVar3 = (((uint64_t)((int64_t)((unsigned long)this_01 >> 8)) << 8) | (uint8_t)1);
                goto LAB_100630c58;
            }
        }
        auto this_00 = logger::default_logger();
        uVar3 = 0;
        this_00->Log(
            false, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            480, "Camera.getViewVector: lookat manager is not ready!");
    LAB_100630c58:
        return uVar3 & 4294967295;
    }

    // 0x100630c90
    unsigned long Camera::GetCameraCurrentLookat(math::Vector3T<double>& vector3) const {
        long* plVar2;
        Vector3T<double>* vector3_00;
        unsigned long uVar3;

        uint8_t* this_01 = m_pLookatManager;
        if (this_01->operator_cast_to_bool()) {
            plVar2 = (long*)(*this_01).operator->();
            if ((**(void (**)(...))(*plVar2 + 104))(plVar2)) {
                plVar2 = (long*)(*this_01).operator->();
                vector3_00 = (Vector3T<double>*)(**(void (**)(...))(*plVar2 + 32))(plVar2);
                vector3 = *vector3_00;
                uVar3 = (((uint64_t)((int64_t)((unsigned long)this_01 >> 8)) << 8) | (uint8_t)1);
                goto LAB_100630d11;
            }
        }
        auto this_00 = logger::default_logger();
        uVar3 = 0;
        this_00->Log(
            false, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            493, "Camera.getCameraCurrentLookat: lookat manager is not ready!");
    LAB_100630d11:
        return uVar3 & 4294967295;
    }

    // 0x100630d40
    unsigned long Camera::GetCameraCurrentLookat(math::Vector3T<float>& vector3) const {
        long* plVar2;
        Vector3T<double>* vector3_00;
        unsigned long uVar3;
        uint64_t local_28[2];

        uint8_t* this_01 = m_pLookatManager;
        if (this_01->operator_cast_to_bool()) {
            plVar2 = (long*)(*this_01).operator->();
            if ((**(void (**)(...))(*plVar2 + 104))(plVar2)) {
                plVar2 = (long*)(*this_01).operator->();
                vector3_00 = (Vector3T<double>*)(**(void (**)(...))(*plVar2 + 32))(plVar2);
                local_28[0] = math::Vector3FromVector3T<double>(*vector3_00);
                vector3.SetXYZ(*local_28);
                uVar3 = (((uint64_t)((int64_t)((unsigned long)this_01 >> 8)) << 8) | (uint8_t)1);
                goto LAB_100630dd7;
            }
        }
        auto this_00 = logger::default_logger();
        uVar3 = 0;
        this_00->Log(
            false, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            505, "Camera.getCameraCurrentLookat: lookat manager is not ready!");
    LAB_100630dd7:
        return uVar3 & 4294967295;
    }

    // 0x100630e10
    uint32_t Camera::GetCameraMatrix(math::Matrix44T<float>& matrix44) const {
        unsigned long long arg2;
        long lVar2;
        long lVar3;
        long* plVar4;
        double dVar5;
        AABB local_c8;
        AABB local_b0;
        AABB local_98;
        QuaternionT<double> local_80;
        Vector3T<double> local_60;
        double local_48;
        unsigned long long local_38;

        uint32_t uVar1 = ManagersReady();
        if ((char)uVar1 == '\0') {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                      "Camera.cpp",
                      517, "Camera.getCameraMatrix: lookat or position manager is not ready!");
        } else {
            arg2 = FrameTime::GetCurrentTimeMS();
            if (m_lookatMode == 3) {
                UpdateOrientation(matrix44, arg2);
            } else {
                local_38 = arg2;
                local_c8 = oldscape::dash3d::ModelLit::AABB();
                local_80 = math::QuaternionT<double>();
                plVar4 = (long*)(*m_positionManager).operator->();
                local_48 = (double)(**(void (**)(...))(*plVar4 + 144))(plVar4);
                (**(void (**)(...))((long)field_0 + 80))(this, &local_c8);
                local_80.FromAxisAngle(local_c8, -local_48);
                local_60** PTR_UP_100ee66b0;
                dVar5 = math::Vector3Dot<double>(local_c8, local_60);
                if (ABS(dVar5) == 1.0) {
                    local_60 = *PTR_LOOK_100ee66b8;
                }
                local_b0 = oldscape::dash3d::ModelLit::AABB();
                local_98 = oldscape::dash3d::ModelLit::AABB();
                GetPosition(local_b0, local_38);
                plVar4 = (long*)(*m_pLookatManager).operator->();
                (**(void (**)(...))(*plVar4 + 56))(plVar4, &local_98);
                math::Matrix44LookAtLH<float>(matrix44, local_b0, local_98, local_60);
            }
            field_16 = matrix44;
            lVar2 = field_248.HeapBeginPtr();
            lVar3 = field_248.end();
            for (; lVar2 != lVar3; lVar2 = lVar2 + 24) {
                plVar4 = (long*)(*((lVar2 + 8))).operator->();
                (**(void (**)(...))(*plVar4 + 24))(plVar4, matrix44);
            }
            field_80 = matrix44;
        }
        return uVar1;
    }

    // 0x100631000
    void Camera::UpdateOrientation(math::Matrix44T<float>& matrix44, unsigned long long arg2) const {
        uint8_t local_68[24];
        PositionPoint* local_48;
        uint64_t local_40[2];

        auto plVar2 = m_pLookatManager->end();
        uint8_t* this_00 = m_positionManager;
        long* plVar3 = (long*)(*this_00).operator->();
        (**(void (**)(...))(*plVar3 + 48))(&local_90, plVar3);
        (**(void (**)(...))(*plVar2 + 64))(plVar2, &local_90);
        matrix44.SetToIdentity();
        if (((**(void (**)(...))(*plVar2 + 136))(plVar2) != '\0') && (m_positionMode == 0)) {
            local_48 = (PositionPoint*)this_00->end();
            new (local_68) CoordFine();
            local_90 = oldscape::dash3d::ModelLit::AABB();
            plVar3 = (long*)(*this_00).operator->();
            (**(void (**)(...))(*plVar3 + 104))(plVar3, (CoordFine*)local_68, arg2);
            (**(void (**)(...))(*plVar2 + 72))(plVar2, &local_90);
            local_40[0] = math::Vector3FromVector3T<double>(local_90);
            ((local_68 + 4))->SetXYZ(*local_40);
            local_48->SetDestination(*local_68);
        }
        QuaternionT<float>* quaternion = (QuaternionT<float>*)(**(void (**)(...))(*plVar2 + 152))(plVar2);
        new (local_68) math::QuaternionT<float>(*quaternion);
        AABB local_90(*local_68);
        matrix44.SetRot(local_90);
        plVar2 = (long*)(*this_00).operator->();
        (**(void (**)(...))(*plVar2 + 48))((Vector3T<double>*)local_68, plVar2);
        local_40[0] = math::Vector3FromVector3T<double>(*local_68);
        matrix44.SetPos(*local_40);
        matrix44 = math::Matrix44T<float>::Invert(nullptr);
    }

    // 0x100631480
    void Camera::DrawDebugCameraBits() const {
        long* plVar1;

        if (m_debugCameraEffects != '\0') {
            plVar1 = (long*)(*m_positionManager).operator->();
            (**(void (**)(...))(*plVar1 + 160))(plVar1, 4278255360);
            plVar1 = (long*)(*m_pLookatManager).operator->();
            (**(void (**)(...))(*plVar1 + 120))(plVar1, 4278190335);
        }
    }

    // 0x100631500
    uint64_t Camera::GetOrientationOffset(math::QuaternionT<double>& quaternion, math::Point<int>& point) const {
        long* plVar3;

        uint8_t* this_02 = m_positionManager;
        if (this_02->operator_cast_to_bool()) {
            plVar3 = (long*)(*this_02).operator->();
            if ((**(void (**)(...))(*plVar3 + 32))(plVar3)) {
                if (((CommandLine*)(*this_02).operator->())->GetPos() == 1) {
                    ((PositionEntity*)this_02->end())->GetOrientationOffset(quaternion, point);
                    return 1;
                }
            }
        }
        quaternion.SetToIdentity();
        return 0;
    }

    // 0x1006315a0
    uint64_t Camera::GetOrientationOffset(math::QuaternionT<double>& quaternion) const {
        long* plVar3;

        uint8_t* this_02 = m_positionManager;
        if (this_02->operator_cast_to_bool()) {
            plVar3 = (long*)(*this_02).operator->();
            if ((**(void (**)(...))(*plVar3 + 32))(plVar3)) {
                if (((CommandLine*)(*this_02).operator->())->GetPos() == 1) {
                    ((PositionEntity*)this_02->end())->GetOrientationOffset(quaternion);
                    return 1;
                }
            }
        }
        quaternion.SetToIdentity();
        return 0;
    }

    // 0x100631630
    unsigned long Camera::GetPositionFine(CoordFine& coordFine) const {
        long* plVar2;
        uint64_t uVar3;
        unsigned long uVar4;

        uint8_t* this_01 = m_positionManager;
        if (this_01->operator_cast_to_bool()) {
            plVar2 = (long*)(*this_01).operator->();
            if ((**(void (**)(...))(*plVar2 + 32))(plVar2)) {
                plVar2 = (long*)(*this_01).operator->();
                uVar3 = FrameTime::GetCurrentTimeMS();
                (**(void (**)(...))(*plVar2 + 104))(plVar2, coordFine, uVar3);
                uVar4 = (((uint64_t)((int64_t)((unsigned long)plVar2 >> 8)) << 8) | (uint8_t)1);
                goto LAB_1006316b4;
            }
        }
        auto this_00 = logger::default_logger();
        uVar4 = 0;
        this_00->Log(
            false, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            645, "Camera::GetPositionFine: position manager is not ready!");
    LAB_1006316b4:
        return uVar4 & 4294967295;
    }

    // 0x1006316e0
    unsigned long Camera::GetLookatFine(CoordFine& coordFine) const {
        long* plVar2;
        unsigned long uVar3;

        uint8_t* this_01 = m_pLookatManager;
        if (this_01->operator_cast_to_bool()) {
            plVar2 = (long*)(*this_01).operator->();
            if ((**(void (**)(...))(*plVar2 + 104))(plVar2)) {
                plVar2 = (long*)(*this_01).operator->();
                (**(void (**)(...))(*plVar2 + 80))(plVar2, coordFine);
                uVar3 = (((uint64_t)((int64_t)((unsigned long)this_01 >> 8)) << 8) | (uint8_t)1);
                goto LAB_100631759;
            }
        }
        auto this_00 = logger::default_logger();
        uVar3 = 0;
        this_00->Log(
            false, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            656, "Camera::GetLookatFine: lookat manager is not ready!");
    LAB_100631759:
        return uVar3 & 4294967295;
    }

    // 0x100631780
    uint32_t Camera::GetFollowAngle(double& arg1, math::Point<int>& point) const {
        long* plVar2;

        uint32_t uVar1 = (**(void (**)(...))field_0)();
        double dVar3 = 0.0;
        if ((char)uVar1 != '\0') {
            plVar2 = (long*)(*m_positionManager).operator->();
            dVar3 = (double)(**(void (**)(...))(*plVar2 + 128))(plVar2, point);
        }
        arg1 = dVar3;
        return uVar1;
    }

    // 0x100631800
    unsigned long Camera::GetYAngle() const {
        long* plVar2;
        double dVar4;

        bool cVar1 = (**(void (**)(...))field_0)();
        unsigned long uVar3 = 0;
        if (cVar1) {
            plVar2 = (long*)(*m_positionManager).operator->();
            dVar4 = (double)(**(void (**)(...))(*plVar2 + 120))(plVar2);
            uVar3 = ~-(unsigned long)(dVar4 < 0.0) & (unsigned long)dVar4 |
                    (unsigned long)(dVar4 + 6.2831855f) & -(unsigned long)(dVar4 < 0.0);
        }
        return uVar3;
    }

    // 0x100631880
    void Camera::SetAngularLookatInterpolant(double arg1) {
        if (m_clientControlled == 0) {
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                      "Camera.cpp",
                      694, "%s - client not in control of camera", "SetAngularLookatInterpolant");
        }
        field_304 = arg1;
    }

    // 0x1006318f0
    void Camera::SetAngularPositionInterpolant(double arg1) {
        if (m_clientControlled == 0) {
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                      "Camera.cpp",
                      703, "%s - client not in control of camera", "SetAngularPositionInterpolant");
        }
        m_angularPositionInterpolant = arg1;
    }

    // 0x100631960
    void Camera::SetLinearMovementMode(LinearMovement::Mode mode) {
        if (m_clientControlled == 0) {
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                      "Camera.cpp",
                      712, "%s - client not in control of camera", "SetLinearMovementMode");
        }
        field_296 = mode;
    }

    // 0x1006319c0
    void Camera::SetLinearLookatAcceleration(const math::Vector3T<double>& vector3) {
        if (m_clientControlled == 0) {
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                      "Camera.cpp",
                      721, "%s - client not in control of camera", "SetLinearLookatAcceleration");
        }
        m_linearLookatAcceleration = vector3;
    }

    // 0x100631a30
    void Camera::SetLinearPositionAcceleration(const math::Vector3T<double>& vector3) {
        if (m_clientControlled != 0) {
            if (graphics::IsShadowPass(field_296) != '\0')
                goto LAB_100631a8e;
        }
        (logger::default_logger())
            ->Log(
                false, 8,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
                730, "%s - cannot set at this time", "SetLinearPositionAcceleration");
    LAB_100631a8e:
        m_linearPositionAcceleration = vector3;
    }

    // 0x100631ac0
    void Camera::SetLinearLookatMaxSpeed(const math::Vector3T<double>& vector3) {
        if (m_clientControlled != 0) {
            if (graphics::IsShadowPass(field_296) != '\0')
                goto LAB_100631b1e;
        }
        (logger::default_logger())
            ->Log(
                false, 8,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
                739, "%s - cannot set at this time", "SetLinearLookatMaxSpeed");
    LAB_100631b1e:
        *m_linearLookatMaxSpeed = vector3;
    }

    // 0x100631b40
    void Camera::SetLinearPositionMaxSpeed(const math::Vector3T<double>& vector3) {
        if (m_clientControlled != 0) {
            if (graphics::IsShadowPass(field_296) != '\0')
                goto LAB_100631b9e;
        }
        (logger::default_logger())
            ->Log(
                false, 8,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
                748, "%s - cannot set at this time", "SetLinearPositionMaxSpeed");
    LAB_100631b9e:
        *m_linearPositionMaxSpeed = vector3;
    }

    // 0x100631bc0
    void Camera::SetSpringProperties(const math::Vector3T<double>& vector3, double arg2) {
        if (m_clientControlled != 0) {
            if (graphics::IsShadowPass(field_296) == '\0')
                goto LAB_100631c23;
        }
        (logger::default_logger())
            ->Log(
                false, 8,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
                757, "%s - cannot set at this time", "SetSpringProperties");
    LAB_100631c23:
        *field_448 = vector3;
        *field_472 = vector3;
        field_496 = arg2;
        field_504 = arg2;
    }

    // 0x100631c60
    void Camera::SetLookatSpringProperties(const math::Vector3T<double>& vector3, double arg2) {
        if (m_clientControlled != 0) {
            if (graphics::IsShadowPass(field_296) == '\0')
                goto LAB_100631cc3;
        }
        (logger::default_logger())
            ->Log(
                false, 8,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
                769, "%s - cannot set at this time", "SetLookatSpringProperties");
    LAB_100631cc3:
        *field_448 = vector3;
        field_496 = arg2;
    }

    // 0x100631cf0
    void Camera::SetPositionSpringProperties(const math::Vector3T<double>& vector3, double arg2) {
        if (m_clientControlled != 0) {
            if (graphics::IsShadowPass(field_296) == '\0')
                goto LAB_100631d53;
        }
        (logger::default_logger())
            ->Log(
                false, 8,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
                779, "%s - cannot set at this time", "SetPositionSpringProperties");
    LAB_100631d53:
        *field_472 = vector3;
        field_504 = arg2;
    }

    // 0x100631d80
    void Camera::SetLookatPoint(const CoordFine& coordFine) {
        int iVar2;
        CommandLine* pCVar3;
        Logger* this_00;
        uint8_t* this_02;
        char* str2;

        if (m_clientControlled == 0) {
            this_00 = logger::default_logger();
            str2 = "%s - client not in control of camera";
            iVar2 = 789;
        } else {
            this_02 = m_pLookatManager;
            if (this_02->operator_cast_to_bool() == '\0') {
                this_00 = logger::default_logger();
                str2 = "%s - this camera has no lookatManager";
                iVar2 = 793;
            } else {
                pCVar3 = (CommandLine*)(*this_02).operator->();
                iVar2 = pCVar3->GetPos();
                if (iVar2 == 0) {
                    pCVar3 = (CommandLine*)(*this_02).operator->();
                    iVar2 = pCVar3->GetPos();
                    if (iVar2 != 0) {
                        LogAssert("m_lookatManager->GetMode() == LookatMode::POINT",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "camera/Camera.cpp",
                                  801, nullptr);
                    }
                    ((LookatPoint*)this_02->end())->SetLookat(coordFine);
                    return;
                }
                this_00 = logger::default_logger();
                str2 = "%s - lookatManager mode is not POINT";
                iVar2 = 797;
            }
        }
        this_00->Log(
            false, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            iVar2, str2, "SetLookatPoint");
    }

    // 0x100631eb0
    void Camera::SetPositionPoint(const CoordFine& coordFine) {
        int iVar2;
        CommandLine* pCVar3;
        Logger* this_00;
        uint8_t* this_02;
        char* str2;

        if (m_clientControlled == 0) {
            this_00 = logger::default_logger();
            str2 = "%s - client not in control of camera";
            iVar2 = 811;
        } else {
            this_02 = m_positionManager;
            if (this_02->operator_cast_to_bool() == '\0') {
                this_00 = logger::default_logger();
                str2 = "%s - this camera has no positionManager";
                iVar2 = 815;
            } else {
                pCVar3 = (CommandLine*)(*this_02).operator->();
                iVar2 = pCVar3->GetPos();
                if (iVar2 == 0) {
                    pCVar3 = (CommandLine*)(*this_02).operator->();
                    iVar2 = pCVar3->GetPos();
                    if (iVar2 != 0) {
                        LogAssert("m_positionManager->GetMode() == PositionMode::POINT",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "camera/Camera.cpp",
                                  823, nullptr);
                    }
                    ((PositionPoint*)this_02->end())->SetDestination(coordFine);
                    return;
                }
                this_00 = logger::default_logger();
                str2 = "%s - positionManager mode is not POINT";
                iVar2 = 819;
            }
        }
        this_00->Log(
            false, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            iVar2, str2, "SetPositionPoint");
    }

    // 0x100631fe0
    void Camera::SetPositionPointCollision(bool arg1) {
        int iVar2;
        Logger* this_01;
        uint8_t* this_03;
        char* str2;

        if (m_clientControlled == 0) {
            this_01 = logger::default_logger();
            str2 = "%s - client not in control of camera";
            iVar2 = 833;
        } else {
            this_03 = m_positionManager;
            if (this_03->operator_cast_to_bool() == '\0') {
                this_01 = logger::default_logger();
                str2 = "%s - this camera has no positionManager";
                iVar2 = 837;
            } else {
                iVar2 = ((CommandLine*)(*this_03).operator->())->GetPos();
                if (iVar2 == 0) {
                    ((PositionPoint*)this_03->end())->SetGroundCollision(arg1);
                    return;
                }
                this_01 = logger::default_logger();
                str2 = "%s - positionManager mode is not POINT";
                iVar2 = 841;
            }
        }
        this_01->Log(
            false, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            iVar2, str2, "SetPositionPointCollision");
    }

    // 0x1006320f0
    void Camera::SetLookatOrientationVector(math::Vector3T<float> vector3) {
        uint32_t in_XMM0_Da;
        uint32_t in_XMM1_Da;

        if (((CommandLine*)(*((vector3 + 208))).operator->())->GetPos() != 3) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                      "Camera.cpp",
                      856, "%s - Tried to set an OrientationLookatManager when not in LookAtOrientation Mode!",
                      "SetLookatOrientationVector");
        }
        long* plVar2 = (long*)((vector3 + 208))->end();
        (**(void (**)(...))(*plVar2 + 144))(in_XMM0_Da, in_XMM1_Da, plVar2);
    }

    // 0x100632180
    void Camera::SetLookatOrientationXRotation(int arg1) {
        if (((CommandLine*)(*m_pLookatManager).operator->())->GetPos() != 3) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                      "Camera.cpp",
                      866, "%s - Tried to set an OrientationLookatManager when not in LookAtOrientation Mode!",
                      "SetLookatOrientationXRotation");
        }
        ((Minimap*)m_pLookatManager->end())->SetLevel(arg1);
    }

    // 0x100632200
    void Camera::SetLookatOrientationYRotation(int arg1) {
        if (((CommandLine*)(*m_pLookatManager).operator->())->GetPos() != 3) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                      "Camera.cpp",
                      876, "%s - Tried to set an OrientationLookatManager when not in LookAtOrientation Mode!",
                      "SetLookatOrientationYRotation");
        }
        ((StockPlayerOffer*)m_pLookatManager->end())->SetCompletedCount(arg1);
    }

    // 0x100632280
    void Camera::SetLookatOrientationXMovement(float arg1) {
        if (((CommandLine*)(*m_pLookatManager).operator->())->GetPos() != 3) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                      "Camera.cpp",
                      886, "%s - Tried to set an OrientationLookatManager when not in LookAtOrientation Mode!",
                      "SetLookatOrientationXMovement");
        }
        ((LookatOrientation*)m_pLookatManager->end())->SetOrientationXMovement(arg1);
    }

    // 0x100632300
    void Camera::SetLookatOrientationZMovement(float arg1) {
        if (((CommandLine*)(*m_pLookatManager).operator->())->GetPos() != 3) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                      "Camera.cpp",
                      896, "%s - Tried to set an OrientationLookatManager when not in LookAtOrientation Mode!",
                      "SetLookatOrientationZMovement");
        }
        ((LookatOrientation*)m_pLookatManager->end())->SetOrientationZMovement(arg1);
    }

    // 0x100632380
    void Camera::SetMaxDistanceClamping(const math::Vector3T<float>& vector3, int arg2, int arg3, int arg4, int arg5,
                                        int arg6, int arg7) {
        if (((CommandLine*)(*m_pLookatManager).operator->())->GetPos() != 3) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                      "Camera.cpp",
                      906, "%s - Tried to set an OrientationLookatManager when not in LookAtOrientation Mode!",
                      "SetMaxDistanceClamping");
        }
        ((LookatOrientation*)m_pLookatManager->end())
            ->SetMaxDistanceClamping(vector3, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x100632430
    void Camera::AddEffect(const shared_ptr<ICameraEffect>& iCameraEffect) {
        int local_1c = ((Minimap*)iCameraEffect.operator->())->GetLevel();
        shared_ptr<ICameraEffect>* this_01 = &field_248[local_1c];
        *this_01 = iCameraEffect;
    }

    // 0x100632590
    void Camera::RemoveEffect(int arg1) {
        eastl::vector_map<int, shared_ptr<ICameraEffect>>::erase(field_248);
    }

    // 0x100632600
    uint64_t Camera::GetEffect(int arg1) {
        uint64_t uVar3;

        long lVar1 = eastl::vector_map<int, shared_ptr<graphics::AnimationStateMachineProvider>>::find(field_248);
        long lVar2 = field_248.end();
        if (lVar1 == lVar2) {
            uVar3 = 0;
        } else {
            uVar3 = ((lVar1 + 8))->end();
        }
        return uVar3;
    }

    // 0x100632650
    void Camera::ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1, unsigned int arg2) {
        uint8_t bVar2;
        char cVar3;
        unsigned short uVar4;
        long* plVar5;
        unsigned int uVar7;
        float fVar8;
        Vector3T<float> local_90;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_78;
        unsigned int local_60[4];
        unsigned int local_50;
        unsigned int local_4c;
        ReturnValue local_48;
        uint8_t local_31;

        long local_80 = arg1.size();
        uint8_t bVar1 = arg1.g1();
        m_clientControlled = bVar1 & 1;
        if ((bVar1 & 8) != 0) {
            bVar2 = arg1.g1();
            if (m_lookatMode != (unsigned int)bVar2) {
                SetLookatMode((unsigned int)bVar2, true);
            }
        }
        if ((bVar1 & 16) != 0) {
            bVar2 = arg1.g1();
            if (m_positionMode != (unsigned int)bVar2) {
                SetPositionMode((unsigned int)bVar2, true);
            }
        }
        if ((char)bVar1 < '\0') {
            local_50 = arg2;
            uVar4 = arg1.g2();
            local_31 = bVar1;
            if ((uVar4 & 1) != 0) {
                local_48 = math::Vector3T(arg1, false);
                local_78.Vector3T<float>(local_48);
                *m_linearLookatMaxSpeed = local_78;
            }
            if ((uVar4 & 2) != 0) {
                local_48 = math::Vector3T(arg1, false);
                local_78.Vector3T<float>(local_48);
                *m_linearPositionMaxSpeed = local_78;
            }
            if ((uVar4 & 4) != 0) {
                local_48 = math::Vector3T(arg1, false);
                local_78.Vector3T<float>(local_48);
                m_linearLookatAcceleration = local_78;
            }
            if ((uVar4 & 8) != 0) {
                local_48 = math::Vector3T(arg1, false);
                local_78.Vector3T<float>(local_48);
                m_linearPositionAcceleration = local_78;
            }
            if ((uVar4 & 16) != 0) {
                fVar8 = (float)arg1.gFloat();
                fVar8 = (float)eastl::max_alt(115.0, fVar8);
                m_nearPlane = (double)fVar8;
                fVar8 = (float)arg1.gFloat();
                field_536 = (double)fVar8;
                field_544 = 1;
            }
            if ((uVar4 & 32) != 0) {
                fVar8 = (float)arg1.gFloat();
                field_516 = fVar8;
                fVar8 = (float)arg1.gFloat();
                m_fieldOfView = fVar8;
            }
            if ((uVar4 & 64) != 0) {
                bVar1 = arg1.g1();
                m_projectionMode = (unsigned int)bVar1;
            }
            if ((char)uVar4 < '\0') {
                arg1.Skip(3);
                arg1.Skip(1);
            }
            if ((uVar4 & 256) != 0) {
                bVar1 = arg1.g1();
                field_292 = (bool)(bVar1 & 1);
                field_293 = (bool)(bVar1 >> 1 & 1);
            }
            local_4c = (unsigned int)uVar4;
            if (((uVar4 & 512) != 0) && (bVar1 = arg1.g1(), bVar1 != 0)) {
                uVar7 = (unsigned int)bVar1;
                do {
                    cVar3 = arg1.g1();
                    bVar1 = arg1.g1();
                    local_60[0] = (unsigned int)bVar1;
                    if (!cVar3) {
                        RemoveEffect(local_60[0]);
                    } else {
                        cVar3 = arg1.g1();
                        plVar5 = (long*)GetEffect(local_60[0]);
                        if (plVar5 == nullptr) {
                            if (cVar3 == '\x01') {
                                make_shared<camera::ZTilt, int&, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&>(
                                    &local_48, (int*)local_60, arg1);
                                local_78.shared_ptr<camera::ZTilt, void>(local_48);
                                AddEffect(local_78);
                            } else if (!cVar3) {
                                make_shared<camera::Shake, int&, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&>(
                                    &local_48, (int*)local_60, arg1);
                                local_78.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_48);
                                AddEffect(local_78);
                            }
                        } else {
                            (**(void (**)(...))(*plVar5 + 32))(plVar5);
                        }
                    }
                    uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
            }
            uVar7 = local_4c;
            if ((local_4c & 1024) != 0) {
                uVar4 = arg1.g2();
                field_320 = (unsigned int)uVar4;
                fVar8 = (float)arg1.gFloat();
                field_328 = (double)fVar8;
            }
            bVar1 = local_31;
            arg2 = local_50;
            if ((uVar7 & 2048) != 0) {
                bVar2 = arg1.g1();
                field_296 = (unsigned int)bVar2;
            }
            if ((uVar7 & 4096) != 0) {
                local_48 = math::Vector3T();
                new (local_60) math::Vector3T();
                local_90 = math::Vector3T(arg1, false);
                local_78.Vector3T<float>(local_90);
                *field_448 = local_78;
                local_90 = math::Vector3T(arg1, false);
                bVar1 = local_31;
                local_78.Vector3T<float>(local_90);
                uVar7 = local_4c;
                *field_472 = local_78;
                fVar8 = (float)arg1.gFloat();
                field_496 = (double)fVar8;
                fVar8 = (float)arg1.gFloat();
                field_504 = (double)fVar8;
            }
            if ((uVar7 & 8192) != 0) {
                fVar8 = (float)arg1.gFloat();
                field_304 = (double)fVar8;
            }
            if ((uVar7 & 16384) != 0) {
                fVar8 = (float)arg1.gFloat();
                m_angularPositionInterpolant = (double)fVar8;
            }
        }
        cVar3 = m_pLookatManager->operator_cast_to_bool();
        if ((cVar3) && ((bVar1 & 32) != 0)) {
            plVar5 = (long*)(*m_pLookatManager).operator->();
            (**(void (**)(...))(*plVar5 + 112))(plVar5, arg1, &field_144);
        }
        cVar3 = m_positionManager->operator_cast_to_bool();
        if ((cVar3) && ((bVar1 & 64) != 0)) {
            plVar5 = (long*)(*m_positionManager).operator->();
            (**(void (**)(...))(*plVar5 + 112))(plVar5, arg1, &field_144);
        }
        if (arg1.size() - local_80 != (unsigned long)arg2) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                      "Camera.cpp",
                      1128, "%s: Read incorrect number of bytes.", "ProcessServerUpdate");
        }
    }

    // 0x100632e50
    void Camera::SetOrientationOffset(const math::QuaternionT<double>& quaternion, int arg2, int arg3) {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        Logger* this_02;
        int arg4;
        char* str2;

        if (!(ManagersReady())) {
            this_02 = logger::default_logger();
            str2 = "%s managers not ready";
            arg4 = 1152;
        } else {
            if (IsClientControlled()) {
                if (m_positionMode == 1) {
                    this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(**(void (**)(...))(
                        (long)field_0 + 200))(this);
                    ((PositionEntity*)this_00->end())->SetOrientationOffset(quaternion, arg2, arg3);
                    return;
                }
                return;
            }
            this_02 = logger::default_logger();
            str2 = "%s camera not under client control";
            arg4 = 1157;
        }
        this_02->Log(
            false, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            arg4, str2, "SetOrientationOffset");
    }

    // 0x100632f60
    void Camera::UpdatePositionAndLookAtEntities() {

        if (m_lookatMode == 1) {
            if (m_pLookatManager->operator_cast_to_bool()) {
                ((LookatEntity*)m_pLookatManager->end())->UpdateLookAtEntity(field_144);
            }
        }
        if (m_positionMode == 1) {
            if (m_positionManager->operator_cast_to_bool()) {
                ((PositionEntity*)m_positionManager->end())->UpdatePositionEntity(field_144);
            }
        }
    }

    // 0x100632fe0
    void Camera::SetPositionEntity(const shared_ptr<Entity>& entity, int arg2, int arg3, int arg4, int arg5, int arg6,
                                   bool arg7, int arg8, int arg9) {
        ReturnValue local_40;

        Vector3T<double> local_58((double)arg2, (double)arg3, (double)arg4);
        QuaternionT<double> local_78;
        CameraHelpers::JagexAnglesToQuaternion(local_78, arg5, arg6, 0);
        if (m_positionMode != 1) {
            m_positionMode = 1;
            make_shared<PositionEntity>(&local_40);
            *m_positionManager = local_40;
        }
        if (((CommandLine*)(*m_positionManager).operator->())->GetPos() != 1) {
            LogAssert(
                "m_positionManager->GetMode() == PositionMode::ENTITY",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
                1196, nullptr);
        }
        ((PositionEntity*)m_positionManager->end())
            ->SetPositionEntity(entity, local_58, local_78, arg7, arg8, arg9, arg5, arg6);
    }

    // 0x100633100
    void Camera::SetLookatEntity(const shared_ptr<Entity>& entity, int arg2, int arg3, int arg4, bool arg5) {
        ReturnValue local_38;

        Vector3T<double> local_50((double)arg2, (double)arg3, (double)arg4);
        if (m_lookatMode != 1) {
            m_lookatMode = 1;
            make_shared<LookatEntity>(&local_38);
            *m_pLookatManager = local_38;
        }
        if (((CommandLine*)(*m_pLookatManager).operator->())->GetPos() != 1) {
            LogAssert(
                "m_lookatManager->GetMode() == LookatMode::ENTITY",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
                1211, nullptr);
        }
        ((LookatEntity*)m_pLookatManager->end())->SetLookatEntity(entity, local_50, arg5);
    }

    // 0x1006331e0
    void Camera::TimedMovement(const math::Vector3T<double>& vector31, const math::Vector3T<double>& vector32,
                               unsigned long long arg3, int arg4) {
        *field_576 = vector31;
        *field_600 = vector32;
        field_560 = arg3;
        field_568 = arg3;
        field_545 = 1;
        unsigned int uVar1 = 2000;
        if (arg4 != -1) {
            uVar1 = arg4;
        }
        field_548 = uVar1;
        field_552 = uVar1;
        RemoveAllEffects();
    }

    // 0x100633280
    void Camera::SetFieldOfView(float arg1, float arg2) {
        m_fieldOfView = arg1;
        field_516 = arg2;
    }

    // 0x1006332a0
    void Camera::SetAspectRatio(float arg1) {
        m_aspectRatio = arg1;
        UpdateFOVScaling();
    }

    // 0x1006332c0
    void Camera::UpdateFOVScaling() {
        field_524 = (float)eastl::max_alt(1.0, m_aspectRatio * 0.5625);
    }

    // 0x100633300
    double Camera::GetVerticalFOV() const {
        int iVar1 = ((CommandLine*)(*m_positionManager).operator->())->GetPos();
        float fVar2 = m_fieldOfView;
        if (iVar1 == 1) {
            fVar2 = fVar2 / field_524;
        }
        return (double)fVar2;
    }

    // 0x100633360
    double Camera::GetAspectRatio() const {
        return (double)m_aspectRatio;
    }

} // namespace jag::game

namespace jag {
    // 0x100024170: Camera::GetProjectionMode() const has the same machine code as oldscape::option::IScriptOption::GetId() const

    // 0x10005fc30: Camera::GetRot() const has the same machine code as oldscape::widgets::Widget::GetBounds() const

    // 0x10005fd90: Camera::SetProjectionMode(ProjectionMode) has the same machine code as oldscape::widgets::Widget::SetBackgroundColour(unsigned int)

    // 0x1000605a0: Camera::GetPos() const has the same machine code as oldscape::widgets::Widget::GetContentBounds() const

    // 0x1000641f0: Camera::GetVerticalFov() const has the same machine code as graphics::SunlightOptions::GetSunElevation() const

    // 0x100064210: Camera::GetAspect() const has the same machine code as graphics::SunlightOptions::GetSunAngle() const

    // 0x100064240: Camera::GetTopClip() const has the same machine code as graphics::SunlightOptions::GetSunIntensity() const

    // 0x1003e9e60: Camera::SetVerticalFov(float) has the same machine code as FacingController::SetTurnSpeedMultiplier(float)

    // 0x10048fc90: Camera::GetLeftClip() const has the same machine code as game::EnvLightingSettings::GetContrast() const

    // 0x10048fca0: Camera::GetNearClip() const has the same machine code as game::EnvLightingSettings::GetSunlightShadowStrength() const

    // 0x10048fce0: Camera::GetBottomClip() const has the same machine code as game::EnvLightingSettings::GetSpecularHorzOcclusionScale() const

    // 0x100490070: Camera::GetRightClip() const has the same machine code as game::EnvFogSettings::GetFogAngleOffset() const

    // 0x1007dda80: Camera::GetFarClip() const has the same machine code as graphics::GeometryBatch::GetVertexScale() const

} // namespace jag

namespace jag::graphics {
    // 0x100631ab0: IsShadowPass(RenderPassType) has the same machine code as game::LinearMovement::IsModeBasic(game::LinearMovement::Mode)

} // namespace jag::graphics
