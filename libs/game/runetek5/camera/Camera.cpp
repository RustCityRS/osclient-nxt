// libs/game/runetek5/camera/Camera.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "Camera.h"

namespace jag::game {
    // 0x1039bc140, 1 bytes, __common; zero-initialised
    Camera::m_debugCameraEffects;

    // 0x1039bc141, 7 bytes, __common; zero-initialised
    Camera::m_freezeCameraUpdate;

    // 0x1039bc148, 24 bytes, __common; set at startup by ___cxx_global_var_init.32
    math::Vector3T<double> Camera::infiniteAcceleration = Vector3T<double>(INFINITY, 0.0, 0.0);

    // 0x1000fa850: the linker folded this into oldscape::graphics::NXTPixToolkit::getWorldRenderer(), which has identical code
    Camera::GetLinearPositionAcceleration() const;

    // 0x1001d07d0: the linker folded this into graphics::SceneViewData::GetViewFrustum() const, which has identical code
    shared_ptr Camera::GetLookatManager() const;

    // 0x100324d50: the linker folded this into oldscape::graphics::NXTPixToolkit::GetPix3D(), which has identical code
    shared_ptr Camera::GetPositionManager() const;

    // 0x10036f470: the linker folded this into graphics::GeometryBatch::GetFaceHSLBuffer(), which has identical code
    AABB Camera::GetLinearPositionMaxSpeed() const;

    // 0x1003f51a0: the linker folded this into BASType::GetHillRotateLength() const, which has identical code
    int Camera::GetPositionMode() const;

    // 0x100412e50: the linker folded this into MapSquarePointLights::GetPointLightTexture(), which has identical code
    Camera::GetLinearLookatAcceleration() const;

    // 0x1004198f0: the linker folded this into GraphicsDefaults::GetNpcChatTimeout() const, which has identical code
    uint Camera::GetProjectionMode() const;

    // 0x1004ab8a0: the linker folded this into EnvironmentOverride::GetVolumetricOverrides() const, which has identical code
    AABB Camera::GetLinearLookatMaxSpeed() const;

    // 0x100623060: the linker folded this into OldCamera::Ready() const, which has identical code
    Camera::Ready() const;

    // 0x10062e760, 624 bytes, base-object constructor, placed by class name and debug map
    // Camera::Camera(std::function<shared_ptr<Entity> (CameraTrackableType, int)> const&)
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* Camera::Camera(std::function<shared_ptr<Entity>
   (CameraTrackableType, int)> const&) */

    void Camera::Camera(function* param_1) {
        undefined** ppuVar1;
        undefined8 uVar2;
        function* in_RDX;

        ppuVar1 = *(undefined***)param_1;
        field_0 = ppuVar1;
        *(undefined8*)(m_pLookatManager + (long)(ppuVar1[-33] + -208)) = *(undefined8*)(param_1 + 8);
        new (&field_16) math::Matrix44T<float>();
        new (&field_80) math::Matrix44T<float>();
        std::function<shared_ptr<Entity>(CameraTrackableType, int)>::function(
            (function<shared_ptr<Entity>(CameraTrackableType, int)>*)&field_144, in_RDX);
        m_clientControlled = 1;
        m_projectionMode = 0;
        m_lookatMode = 1;
        new (m_pLookatManager, (_func_decltype_nullptr*)in_RDX)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        m_positionMode = 1;
        new (m_positionManager, (_func_decltype_nullptr*)in_RDX)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_248)
            eastl::vector_map<int, shared_ptr<ICameraEffect>, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, shared_ptr<ICameraEffect>>, eastl::allocator>>();
        field_288 = 0;
        field_292 = true;
        field_293 = true;
        field_296 = 1;
        field_304 = 0.05000000074505806;
        m_angularPositionInterpolant = 0.05000000074505806;
        field_320 = 0;
        field_328 = 1.0;
        field_336 = 1280;
        field_340 = 10;
        field_344 = 1;
        new (m_linearLookatMaxSpeed) oldscape::dash3d::ModelLit::AABB();
        new (m_linearPositionMaxSpeed) oldscape::dash3d::ModelLit::AABB();
        field_416 = DAT_1039bc158;
        uVar2 = uRam00000001039bc150;
        m_linearLookatAcceleration = _infiniteAcceleration;
        field_408 = uVar2;
        uVar2 = uRam00000001039bc150;
        m_linearPositionAcceleration = _infiniteAcceleration;
        field_432 = uVar2;
        field_440 = DAT_1039bc158;
        new (field_448) oldscape::dash3d::ModelLit::AABB();
        new (field_472) oldscape::dash3d::ModelLit::AABB();
        field_496 = 0.0;
        field_504 = 0.0;
        m_fieldOfView = 1.5707965;
        field_516 = 1.5707965;
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
        (&field_248, 4)->reserve();
    }

    // 0x10062ea50, 624 bytes, complete-object constructor, placed by class name and debug map
    // Camera::Camera(std::function<shared_ptr<Entity> (CameraTrackableType, int)> const&)
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* Camera::Camera(std::function<shared_ptr<Entity>
   (CameraTrackableType, int)> const&) */

    void Camera::Camera(function* param_1) {
        undefined8 uVar1;

        new (this) ICamera();
        field_0 = &PTR_Ready_100f0cbc8;
        new (&field_16) math::Matrix44T<float>();
        new (&field_80) math::Matrix44T<float>();
        std::function<shared_ptr<Entity>(CameraTrackableType, int)>::function(
            (function<shared_ptr<Entity>(CameraTrackableType, int)>*)&field_144, param_1);
        m_clientControlled = 1;
        m_projectionMode = 0;
        m_lookatMode = 1;
        new (m_pLookatManager, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        m_positionMode = 1;
        new (m_positionManager, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_248)
            eastl::vector_map<int, shared_ptr<ICameraEffect>, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, shared_ptr<ICameraEffect>>, eastl::allocator>>();
        field_288 = 0;
        field_292 = true;
        field_293 = true;
        field_296 = 1;
        field_304 = 0.05000000074505806;
        m_angularPositionInterpolant = 0.05000000074505806;
        field_320 = 0;
        field_328 = 1.0;
        field_336 = 1280;
        field_340 = 10;
        field_344 = 1;
        new (m_linearLookatMaxSpeed) oldscape::dash3d::ModelLit::AABB();
        new (m_linearPositionMaxSpeed) oldscape::dash3d::ModelLit::AABB();
        field_416 = DAT_1039bc158;
        uVar1 = uRam00000001039bc150;
        m_linearLookatAcceleration = _infiniteAcceleration;
        field_408 = uVar1;
        uVar1 = uRam00000001039bc150;
        m_linearPositionAcceleration = _infiniteAcceleration;
        field_432 = uVar1;
        field_440 = DAT_1039bc158;
        new (field_448) oldscape::dash3d::ModelLit::AABB();
        new (field_472) oldscape::dash3d::ModelLit::AABB();
        field_496 = 0.0;
        field_504 = 0.0;
        m_fieldOfView = 1.5707965;
        field_516 = 1.5707965;
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
        (&field_248, 4)->reserve();
    }

    // 0x10062ece0, 96 bytes, placed by class name
    // Camera::ManagersReady() const
    undefined8 Camera::ManagersReady() {
        bool bVar1;
        long* plVar3;

        bVar1 = m_pLookatManager->operator_cast_to_bool();
        if (bVar1) {
            plVar3 = (long*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)m_pLookatManager);
            if ((**(code**)(*plVar3 + 104))(plVar3) != '\0') {
                bVar1 = m_positionManager->operator_cast_to_bool();
                if (bVar1) {
                    plVar3 = (long*)shared_ptr<IPositionManager>::operator->(
                        (shared_ptr<IPositionManager>*)m_positionManager);
                    return (**(code**)(*plVar3 + 32))(plVar3);
                }
            }
        }
        return 0;
    }

    // 0x10062edc0, 128 bytes, placed by class name
    // Camera::CamLocked() const
    undefined8 Camera::CamLocked() {
        undefined1* this_00;
        CommandLine* this_01;
        PositionPoint* this_02;
        undefined8 uVar3;

        this_00 = m_positionManager;
        if ((this_00->operator_cast_to_bool()) && (m_positionMode == 1)) {
            this_01 = (CommandLine*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)this_00);
            if (this_01->GetPos() != 1) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_positionManager->GetMode() == PositionMode::ENTITY",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                          "Camera.cpp",
                          55, (char*)0);
            }
            this_02 = (PositionPoint*)this_00->end();
            uVar3 = this_02->Ready();
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x10062ee60, 160 bytes, placed by class name
    // Camera::LockCamera()
    void Camera::LockCamera() {
        CommandLine* this_00;
        PositionEntity* this_01;
        QuaternionT<double> local_38[32];

        if (m_positionMode == 1) {
            this_00 = (CommandLine*)shared_ptr<IPositionManager>::operator->(
                (shared_ptr<IPositionManager>*)m_positionManager);
            if (this_00->GetPos() != 1) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_positionManager->GetMode() == PositionMode::ENTITY",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                          "Camera.cpp",
                          68, (char*)0);
            }
            this_01 = (PositionEntity*)m_positionManager->end();
            this_01->InvalidateAsyncUpdate();
            math::QuaternionT<double>::QuaternionT(local_38);
            CameraHelpers::OldJagexAnglesToQuaternion((QuaternionT*)local_38, 256, 0, 0);
            this_01->SetOrientationOffset(local_38);
        }
    }

    // 0x10062ef20, 112 bytes, placed by class name
    // Camera::UnlockCamera()
    void Camera::UnlockCamera() {
        undefined1* this_00;
        CommandLine* this_01;
        PositionEntity* this_02;

        this_00 = m_positionManager;
        if ((this_00->operator_cast_to_bool()) && (m_positionMode == 1)) {
            this_01 = (CommandLine*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)this_00);
            if (this_01->GetPos() != 1) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_positionManager->GetMode() == PositionMode::ENTITY",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                          "Camera.cpp",
                          81, (char*)0);
            }
            this_02 = (PositionEntity*)this_00->end();
            this_02->UnlockCamera();
        }
    }

    // 0x10062efa0, 496 bytes, placed by class name
    // Camera::SetLookatMode(LookatMode, bool)
    void Camera::SetLookatMode(int param_2, int param_3) {
        undefined8 uVar1;
        shared_ptr local_30;
        int local_1c;

        local_1c = param_2;
        if ((param_3 == 0) && (m_clientControlled == 0)) {
            uVar1 = logger::default_logger();
            logger::Logger::Log(
                uVar1, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
                92, "Camera: client-driven call to setLookatMode, but server is in control of camera.");
        } else {
            switch (param_2) {
            case 0:
                make_shared<LookatPoint>((jag*)&local_30);
                shared_ptr<ILookatManager>::operator=((shared_ptr<ILookatManager>*)m_pLookatManager, &local_30);
                local_30.~shared_ptr();
                break;
            case 1:
                make_shared<LookatEntity>((jag*)&local_30);
                shared_ptr<ILookatManager>::operator=((shared_ptr<ILookatManager>*)m_pLookatManager, &local_30);
                local_30.~shared_ptr();
                break;
            case 2:
            case 4:
            case 6:
                make_shared<LookatSpline, LookatMode&>((jag*)&local_30, (LookatMode*)&local_1c);
                shared_ptr<ILookatManager>::operator=((shared_ptr<ILookatManager>*)m_pLookatManager, &local_30);
                local_30.~shared_ptr();
                break;
            case 3:
                make_shared<LookatOrientation>((jag*)&local_30);
                shared_ptr<ILookatManager>::operator=((shared_ptr<ILookatManager>*)m_pLookatManager, &local_30);
                local_30.~shared_ptr();
                break;
            case 5:
                make_shared<LookatSplineMatchPosition>((jag*)&local_30);
                shared_ptr<ILookatManager>::operator=((shared_ptr<ILookatManager>*)m_pLookatManager, &local_30);
                local_30.~shared_ptr();
                break;
            default:
                uVar1 = logger::default_logger();
                logger::Logger::Log(uVar1, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/camera/Camera.cpp",
                                    116, "Camera.setLookatMode: unknown mode %d", local_1c);
            }
            m_lookatMode = local_1c;
        }
    }

    // 0x10062f4b0, 336 bytes, placed by class name
    // Camera::SetPositionMode(PositionMode, bool)
    void Camera::SetPositionMode(int param_2, int param_3) {
        undefined8 uVar1;
        undefined8 uVar2;
        char* pcVar3;
        shared_ptr local_30;
        int local_1c;

        local_1c = param_2;
        if ((param_3 == 0) && (m_clientControlled == 0)) {
            uVar1 = logger::default_logger();
            pcVar3 = "Camera: client-driven call to setPositionMode, but server is in control of camera.";
            uVar2 = 130;
        LAB_10062f5ac:
            logger::Logger::Log(
                uVar1, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
                uVar2, pcVar3);
        } else {
            if (param_2 - 2U < 3) {
                make_shared<PositionSpline, PositionMode&>((jag*)&local_30, (PositionMode*)&local_1c);
                shared_ptr<IPositionManager>::operator=((shared_ptr<IPositionManager>*)m_positionManager, &local_30);
                local_30.~shared_ptr();
            } else if (param_2 == 1) {
                make_shared<PositionEntity>((jag*)&local_30);
                shared_ptr<IPositionManager>::operator=((shared_ptr<IPositionManager>*)m_positionManager, &local_30);
                local_30.~shared_ptr();
            } else {
                if (param_2 != 0) {
                    uVar1 = logger::default_logger();
                    pcVar3 = "Camera.setPositionMode: unknown mode %d";
                    uVar2 = 148;
                    goto LAB_10062f5ac;
                }
                make_shared<PositionPoint>((jag*)&local_30);
                shared_ptr<IPositionManager>::operator=((shared_ptr<IPositionManager>*)m_positionManager, &local_30);
                local_30.~shared_ptr();
            }
            m_positionMode = local_1c;
        }
    }

    // 0x10062f800, 48 bytes, placed by class name
    // Camera::SetNearPlane(int)
    void Camera::SetNearPlane(int param_1) {
        double dVar1;

        if (param_1 < 1) {
            dVar1 = 115.0;
        } else {
            dVar1 = (double)param_1;
        }
        m_nearPlane = dVar1;
        field_544 = 1;
    }

    // 0x10062f850, 96 bytes, placed by class name
    // Camera::GetFarPlane(World const*) const
    double Camera::GetFarPlane(World* param_1) {
        uint uVar1;
        LODSettings* this_00;
        double dVar2;

        if (field_544 != '\0') {
            if (param_1 == (World*)0) {
                dVar2 = 12288.0;
            } else {
                this_00 = (LODSettings*)param_1->GetLODSettings();
                uVar1 = this_00->GetFarPlane();
                dVar2 = (double)uVar1;
            }
            field_536 = dVar2;
            field_544 = 0;
        }
        return field_536;
    }

    // 0x10062f8d0, 368 bytes, placed by class name
    // Camera::GetOrientationQuat(unsigned long long, math::QuaternionT<double>&)
    void Camera::GetOrientationQuat(ulonglong param_1, QuaternionT* param_2) {
        long* plVar1;
        vector* pvVar2;
        undefined8* puVar3;
        double* pdVar4;
        double dVar6;
        AABB local_80;
        AABB local_68;
        undefined1 local_50[24];
        double local_38;

        new (&local_80) oldscape::dash3d::ModelLit::AABB();
        plVar1 = (long*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)m_pLookatManager);
        (**(code**)(*plVar1 + 56))(plVar1, &local_80);
        new (&local_68) oldscape::dash3d::ModelLit::AABB();
        plVar1 = (long*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)m_positionManager);
        (**(code**)(*plVar1 + 80))(plVar1, &local_68, param_1);
        math::Vector3Cross<double>((math*)local_50, (Vector3T*)&local_80, (Vector3T*)&local_68);
        pvVar2 = local_50->SSOBeginPtr((type*)&local_80);
        local_38 = *(double*)pvVar2;
        pvVar2 = param_2->SSOBeginPtr((type*)&local_80);
        *(double*)pvVar2 = local_38;
        puVar3 = (undefined8*)local_50->second();
        local_38 = (double)*puVar3;
        puVar3 = (undefined8*)param_2->second();
        *puVar3 = local_38;
        puVar3 = (undefined8*)local_50->GetScreen();
        local_38 = (double)*puVar3;
        puVar3 = (undefined8*)param_2->GetScreen();
        *puVar3 = local_38;
        local_38 = (double)local_80.Length();
        dVar6 = (double)local_68.Length();
        local_38 = SQRT(dVar6 * local_38);
        dVar6 = math::Vector3Dot<double>((Vector3T*)&local_80, (Vector3T*)&local_68);
        local_38 = dVar6 + local_38;
        pdVar4 = (double*)param_2->second();
        *pdVar4 = local_38;
        param_2->Normalise();
        dVar6 = (double)param_2->LengthSq();
        if (dVar6 == 0.0) {
            puVar3 = (undefined8*)param_2->second();
            *puVar3 = 4607182418800017408;
        }
    }

    // 0x10062fa70, 656 bytes, placed by class name
    // Camera::UpdateLookAt(unsigned long long, float, math::QuaternionT<double> const&)
    void Camera::UpdateLookAt(ulonglong param_1, float param_2, QuaternionT* param_3) {
        undefined1* this_00;
        AABB* this_01;
        uint uVar1;
        char cVar2;
        ILookatManager* this_02;
        long* plVar3;
        long* plVar4;
        Vector3T* pVVar5;
        Vector3T* in_R9;
        int in_stack_ffffffffffffff48;
        AABB local_a0;
        undefined1 local_88[24];
        AABB local_70;
        DequeIterator<render::DynamicBuffer<render::VertexBuffer>::Buffer,
                      render::DynamicBuffer<render::VertexBuffer>::Buffer*,
                      render::DynamicBuffer<render::VertexBuffer>::Buffer&, 7u>
            local_58[8];
        LinearMovement* local_50;
        Vector3T* local_48;
        Vector3T* local_40;
        Vector3T<double>* local_38;

        local_38 = (Vector3T<double>*)CONCAT44(local_38._4_4_, param_2);
        this_00 = m_pLookatManager;
        this_02 = (ILookatManager*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)this_00);
        cVar2 = this_02->IsSpline();
        if (cVar2 == '\0') {
            eastl::DequeIterator<render::DynamicBuffer<render::VertexBuffer>::Buffer,
                                 render::DynamicBuffer<render::VertexBuffer>::Buffer*,
                                 render::DynamicBuffer<render::VertexBuffer>::Buffer&, 7u>::DequeIterator(local_58);
            plVar3 = (long*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)this_00);
            cVar2 = (**(code**)(*plVar3 + 40))(plVar3, local_58);
            if (cVar2 != '\0') {
                if (field_545 == '\0') {
                    uVar1 = field_296;
                    if (uVar1 == 2) {
                        LinearMovement::LinearSpringMovementUpdateCameraSpace(
                            local_38._0_4_, (Vector3T*)local_50, param_3, local_48, local_40, (Vector3T*)field_448,
                            field_496, field_336, field_344);
                    } else if (uVar1 == 1) {
                        local_50->LinearMovementUpdateCameraSpace(
                            local_38._0_4_, param_3, local_48, local_40, (Vector3T*)&m_linearLookatAcceleration,
                            (Vector3T*)m_linearLookatMaxSpeed, (Vector3T*)(ulong)field_320, field_336, field_328,
                            field_340, 6486777);
                    } else if (uVar1 == 0) {
                        local_50->LinearMovementUpdateWorldSpace(
                            local_38._0_4_, local_48, local_40, (Vector3T*)&m_linearLookatAcceleration,
                            (Vector3T*)m_linearLookatMaxSpeed, (Vector3T*)(ulong)field_320, field_336, field_328,
                            field_340, in_stack_ffffffffffffff48);
                    }
                } else {
                    new (&local_70) oldscape::dash3d::ModelLit::AABB();
                    this_01 = (AABB*)(local_88 + -48);
                    oldscape::dash3d::ModelLit::AABB::AABB(this_01);
                    plVar3 = (long*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)this_00);
                    (**(code**)(*plVar3 + 56))(plVar3, &local_70);
                    plVar3 = (long*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)this_00);
                    (**(code**)(*plVar3 + 72))(plVar3, this_01);
                    local_38 = (Vector3T<double>*)field_600;
                    cVar2 = ((param_1 - field_560), (ulong)field_548, (uint)local_38, (Vector3T*)&local_70,
                             (Vector3T*)this_01, in_R9)
                                ->TimedMovementUpdateWorldSpace();
                    new (&local_a0) oldscape::dash3d::ModelLit::AABB();
                    plVar3 = (long*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)this_00);
                    plVar4 = (long*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)this_00);
                    pVVar5 = (Vector3T*)(**(code**)(*plVar4 + 48))(plVar4, &local_a0);
                    math::operator-((math*)local_88, (Vector3T*)&local_70, pVVar5);
                    (**(code**)(*plVar3 + 64))(plVar3, (math*)local_88);
                    if (cVar2 != '\0') {
                        field_576->SetToZero();
                        local_38->SetToZero();
                        field_545 = 0;
                    }
                }
            }
        } else {
            plVar3 = (long*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)this_00);
            (**(code**)(*plVar3 + 24))(local_38._0_4_, plVar3, m_linearLookatMaxSpeed, &m_linearLookatAcceleration);
        }
    }

    // 0x10062fd50, 768 bytes, placed by class name
    // Camera::UpdatePosition(unsigned long long, float, HeightMap const*, LinkMap const*, math::QuaternionT<double> const&, int, int)
    void Camera::UpdatePosition(ulonglong param_1, float param_2, HeightMap* param_3, LinkMap* param_4,
                                QuaternionT* param_5, int param_6, int param_7) {
        undefined1* this_00;
        QuaternionT<double>* this_01;
        uint uVar1;
        char cVar2;
        undefined1 uVar3;
        int iVar4;
        long* plVar5;
        shared_ptr<IPositionManager>* this_02;
        CommandLine* this_03;
        PositionEntity* this_04;
        undefined4 in_register_0000008c;
        Vector3T* pVVar6;
        int in_stack_ffffffffffffff38;
        AABB local_c0;
        undefined1 local_a8[56];
        AABB local_70;
        LinearMovement* local_50;
        Vector3T* local_48;
        Vector3T* local_40;
        float local_34;

        pVVar6 = (Vector3T*)CONCAT44(in_register_0000008c, param_6);
        this_00 = m_positionManager;
        local_34 = param_2;
        plVar5 = (long*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)this_00);
        cVar2 = (**(code**)(*plVar5 + 16))(plVar5);
        if (cVar2 == '\0') {
            new (&local_50) oldscape::dash3d::ModelLit::AABB();
            plVar5 = (long*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)this_00);
            GetAngularPositionInterpolant(this);
            iVar4 = 6487530;
            cVar2 = (**(code**)(*plVar5 + 72))(plVar5, (AABB*)&local_50);
            if (cVar2 != '\0') {
                if (field_545 == '\0') {
                    uVar1 = field_296;
                    if (uVar1 == 2) {
                        LinearMovement::LinearSpringMovementUpdateCameraSpace(local_34, (Vector3T*)local_50, param_5,
                                                                              local_48, local_40, (Vector3T*)field_472,
                                                                              field_504, field_336, field_344);
                    } else if (uVar1 == 1) {
                        local_50->LinearMovementUpdateCameraSpace(
                            local_34, param_5, local_48, local_40, (Vector3T*)&m_linearPositionAcceleration,
                            (Vector3T*)m_linearPositionMaxSpeed, (Vector3T*)(ulong)field_320, field_336, field_328,
                            field_340, iVar4);
                    } else if (uVar1 == 0) {
                        local_50->LinearMovementUpdateWorldSpace(
                            local_34, local_48, local_40, (Vector3T*)&m_linearPositionAcceleration,
                            (Vector3T*)m_linearPositionMaxSpeed, (Vector3T*)(ulong)field_320, field_336, field_328,
                            field_340, in_stack_ffffffffffffff38);
                    }
                } else {
                    this_02 = (shared_ptr<IPositionManager>*)(*(code*)field_0[25])(this);
                    this_03 = (CommandLine*)shared_ptr<IPositionManager>::operator->(this_02);
                    iVar4 = this_03->GetPos();
                    if (iVar4 != 1) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("GetPositionManager()->GetMode() == PositionMode::ENTITY",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "camera/Camera.cpp",
                                  270, (char*)0);
                    }
                    this_04 = (PositionEntity*)this_00->end();
                    new (&local_70) oldscape::dash3d::ModelLit::AABB();
                    new (&local_c0) oldscape::dash3d::ModelLit::AABB();
                    (*(code*)this_04->field_0[10])(this_04, &local_70, param_1);
                    (*(code*)this_04->field_0[12])(this_04, &local_c0);
                    uVar3 = ((param_1 - field_568), (ulong)field_552, (uint)field_576, (Vector3T*)&local_70,
                             (Vector3T*)&local_c0, pVVar6)
                                ->TimedMovementUpdateWorldSpace();
                    local_34 = (float)CONCAT31(local_34._1_3_, uVar3);
                    (*(code*)this_04->field_0[7])((Vector3T*)(local_a8 + 24), this_04);
                    math::Vector3T<double>::operator=((Vector3T<double>*)&local_c0, (Vector3T*)(local_a8 + 24));
                    this_01 = (QuaternionT<double>*)(local_a8 + 24);
                    math::QuaternionT<double>::QuaternionT(this_01);
                    this_04->GetOrientationOffset(this_01);
                    math::Vector3T<double>::operator*=((Vector3T<double>*)&local_c0, (QuaternionT*)this_01);
                    math::operator-((math*)local_a8, (Vector3T*)&local_70, (Vector3T*)&local_c0);
                    (*(code*)this_04->field_0[5])(this_04, (math*)local_a8);
                    if (local_34._0_1_ != '\0') {
                        field_576->SetToZero();
                        field_600->SetToZero();
                        field_545 = 0;
                    }
                }
            }
        } else {
            plVar5 = (long*)this_00->end();
            (**(code**)(*plVar5 + 24))(local_34, plVar5, m_linearPositionMaxSpeed, &m_linearPositionAcceleration);
        }
    }

    // 0x1006302d0, 464 bytes, placed by class name
    // Camera::Update(float, HeightMap const*, LinkMap const*, int, int)
    void Camera::Update(float param_1, HeightMap* param_2, LinkMap* param_3, int param_4, int param_5) {
        undefined1* this_00;
        bool bVar2;
        int iVar3;
        ulonglong uVar4;
        CommandLine* pCVar5;
        PositionEntity* this_01;
        PositionPoint* this_02;
        long lVar6;
        long lVar7;
        long* plVar8;
        QuaternionT<double> local_68[32];
        ulonglong local_48;

        if (m_freezeCameraUpdate != '\0') {
            return;
        }
        uVar4 = FrameTime::GetCurrentTimeMS();
        math::QuaternionT<double>::QuaternionT(local_68);
        if (ManagersReady(this) != '\0') {
            pCVar5 =
                (CommandLine*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)m_pLookatManager);
            iVar3 = pCVar5->GetPos();
            if (iVar3 != 3) {
                GetOrientationQuat(this, uVar4, (QuaternionT*)local_68);
                goto LAB_100630353;
            }
        }
        local_68->SetToIdentity();
    LAB_100630353:
        bVar2 = m_pLookatManager->operator_cast_to_bool();
        if (bVar2) {
            (*(code*)field_0[32])(param_1, this, uVar4, local_68);
        }
        this_00 = m_positionManager;
        local_48 = uVar4;
        bVar2 = this_00->operator_cast_to_bool();
        if (bVar2) {
            pCVar5 = (CommandLine*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)this_00);
            iVar3 = pCVar5->GetPos();
            if ((iVar3 == 1) && (this_01 = (PositionEntity*)this_00->end(), this_01 != (PositionEntity*)0)) {
                this_01->TestAndResolveCollision(param_2, param_3, field_293, field_292);
            }
            pCVar5 = (CommandLine*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)this_00);
            iVar3 = pCVar5->GetPos();
            if ((iVar3 == 0) && (this_02 = (PositionPoint*)this_00->end(), this_02 != (PositionPoint*)0)) {
                this_02->TestAndResolveCollision(param_2, param_3, field_293, field_292);
            }
            (*(code*)field_0[33])(param_1, this, local_48, param_2, param_3, local_68, param_4, param_5);
        }
        lVar6 = (&field_248)->HeapBeginPtr();
        lVar7 = (&field_248)->end();
        for (; lVar6 != lVar7; lVar6 = lVar6 + 24) {
            plVar8 = (long*)shared_ptr<ICameraEffect>::operator->((shared_ptr<ICameraEffect>*)(lVar6 + 8));
            (**(code**)(*plVar8 + 16))(param_1, plVar8);
        }
    }

    // 0x100630530, 176 bytes, placed by class name
    // Camera::GetViewVector(math::Vector3T<double>&) const
    undefined4 Camera::GetViewVector(Vector3T* param_1) {
        undefined4 uVar1;
        long* plVar2;
        ulonglong uVar3;
        Vector3T* pVVar4;
        undefined8 uVar5;
        AABB local_40;

        uVar1 = ManagersReady(this);
        if ((char)uVar1 == '\0') {
            uVar5 = logger::default_logger();
            logger::Logger::Log(
                uVar5, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
                381, "Camera::GetViewVector: lookat or position manager is not ready!");
        } else {
            plVar2 = (long*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)m_pLookatManager);
            (**(code**)(*plVar2 + 56))(plVar2, param_1);
            new (&local_40) oldscape::dash3d::ModelLit::AABB();
            uVar3 = FrameTime::GetCurrentTimeMS();
            pVVar4 = (Vector3T*)GetPosition(this, (Vector3T*)&local_40, uVar3);
            math::Vector3T<double>::operator-=((Vector3T<double>*)param_1, pVVar4);
            param_1->Normalize();
        }
        return uVar1;
    }

    // 0x1006305e0, 112 bytes, placed by class name
    // Camera::GetPosition(math::Vector3T<double>&, unsigned long long) const
    void Camera::GetPosition(Vector3T* param_1, ulonglong param_2) {
        undefined1* this_00;
        CommandLine* this_01;
        long* plVar2;

        this_00 = m_positionManager;
        this_01 = (CommandLine*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)this_00);
        if (this_01->GetPos() == 1) {
            plVar2 = (long*)this_00->end();
            (**(code**)(*plVar2 + 88))(field_524, plVar2, param_1, param_2);
        } else {
            plVar2 = (long*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)this_00);
            (**(code**)(*plVar2 + 80))(plVar2, param_1, param_2);
        }
    }

    // 0x1006306b0, 144 bytes, placed by class name
    // Camera::GetCameraPosition(math::Vector3T<double>&) const
    ulong Camera::GetCameraPosition(Vector3T* param_1) {
        undefined1* this_00;
        long* plVar3;
        ulonglong uVar4;
        undefined8 uVar5;
        ulong uVar6;

        this_00 = m_positionManager;
        if (this_00->operator_cast_to_bool()) {
            plVar3 = (long*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)this_00);
            if ((**(code**)(*plVar3 + 32))(plVar3) != '\0') {
                uVar4 = FrameTime::GetCurrentTimeMS();
                GetPosition(this, param_1, uVar4);
                uVar6 = CONCAT71((int7)((ulong)this_00 >> 8), 1);
                goto LAB_10063072b;
            }
        }
        uVar5 = logger::default_logger();
        uVar6 = 0;
        logger::Logger::Log(
            uVar5, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            396, "Camera.getCameraPosition: position manager is not ready!");
    LAB_10063072b:
        return uVar6 & 4294967295;
    }

    // 0x100630760, 176 bytes, placed by class name
    // Camera::GetCameraPosition(math::Vector3T<float>&) const
    undefined4 Camera::GetCameraPosition(Vector3T* param_1) {
        undefined4 uVar1;
        long* plVar2;
        ulonglong uVar3;
        undefined8 uVar4;
        math* pmVar5;
        undefined1 local_50[24];
        undefined8 local_38[2];

        plVar2 = (long*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)m_positionManager);
        uVar1 = (**(code**)(*plVar2 + 32))(plVar2);
        if ((char)uVar1 == '\0') {
            uVar4 = logger::default_logger();
            logger::Logger::Log(
                uVar4, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
                408, "Camera.getCameraPosition: position manager is not ready!");
        } else {
            new (local_50) oldscape::dash3d::ModelLit::AABB();
            uVar3 = FrameTime::GetCurrentTimeMS();
            pmVar5 = (math*)local_50;
            GetPosition(this, (Vector3T*)local_50, uVar3);
            local_38[0] = math::Vector3FromVector3T<double>((math*)local_50, (Vector3T*)pmVar5);
            param_1->SetXYZ(local_38);
        }
        return uVar1;
    }

    // 0x100630830, 160 bytes, placed by class name
    // Camera::GetCameraCurrentPosition(math::Vector3T<double>&) const
    ulong Camera::GetCameraCurrentPosition(Vector3T* param_1) {
        long* plVar3;
        undefined8 uVar4;
        undefined1* this_00;
        ulong uVar5;
        Vector3T local_30[24];

        this_00 = m_positionManager;
        if (this_00->operator_cast_to_bool()) {
            plVar3 = (long*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)this_00);
            if ((**(code**)(*plVar3 + 32))(plVar3) != '\0') {
                plVar3 = (long*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)this_00);
                (**(code**)(*plVar3 + 48))(local_30, plVar3);
                math::Vector3T<double>::operator=((Vector3T<double>*)param_1, local_30);
                uVar5 = CONCAT71((int7)((ulong)local_30 >> 8), 1);
                goto LAB_1006308bc;
            }
        }
        uVar4 = logger::default_logger();
        uVar5 = 0;
        logger::Logger::Log(
            uVar4, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            422, "Camera.getCameraCurrentPosition: position manager is not ready!");
    LAB_1006308bc:
        return uVar5 & 4294967295;
    }

    // 0x1006308f0, 176 bytes, placed by class name
    // Camera::GetCameraCurrentPosition(math::Vector3T<float>&) const
    ulong Camera::GetCameraCurrentPosition(Vector3T* param_1) {
        long* plVar3;
        Vector3T* pVVar4;
        undefined8 uVar5;
        undefined1* this_00;
        ulong uVar6;
        undefined1 local_40[24];
        undefined8 local_28[2];

        this_00 = m_positionManager;
        if (this_00->operator_cast_to_bool()) {
            plVar3 = (long*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)this_00);
            if ((**(code**)(*plVar3 + 32))(plVar3) != '\0') {
                pVVar4 = (Vector3T*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)this_00);
                (**(code**)(*(long*)pVVar4 + 48))((math*)local_40);
                local_28[0] = math::Vector3FromVector3T<double>((math*)local_40, pVVar4);
                param_1->SetXYZ(local_28);
                uVar6 = CONCAT71((int7)((ulong)local_40 >> 8), 1);
                goto LAB_10063098e;
            }
        }
        uVar5 = logger::default_logger();
        uVar6 = 0;
        logger::Logger::Log(
            uVar5, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            434, "Camera.getCameraCurrentPosition: position manager is not ready!");
    LAB_10063098e:
        return uVar6 & 4294967295;
    }

    // 0x1006309c0, 160 bytes, placed by class name
    // Camera::GetCameraPositionOffset(math::Vector3T<double>&) const
    ulong Camera::GetCameraPositionOffset(Vector3T* param_1) {
        long* plVar3;
        undefined8 uVar4;
        undefined1* this_00;
        ulong uVar5;
        Vector3T local_30[24];

        this_00 = m_positionManager;
        if (this_00->operator_cast_to_bool()) {
            plVar3 = (long*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)this_00);
            if ((**(code**)(*plVar3 + 32))(plVar3) != '\0') {
                plVar3 = (long*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)this_00);
                (**(code**)(*plVar3 + 56))(local_30, plVar3);
                math::Vector3T<double>::operator=((Vector3T<double>*)param_1, local_30);
                uVar5 = CONCAT71((int7)((ulong)local_30 >> 8), 1);
                goto LAB_100630a4c;
            }
        }
        uVar4 = logger::default_logger();
        uVar5 = 0;
        logger::Logger::Log(
            uVar4, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            447, "Camera.getCameraPositionOffset: position manager is not ready!");
    LAB_100630a4c:
        return uVar5 & 4294967295;
    }

    // 0x100630a60, 176 bytes, placed by class name
    // Camera::GetCameraPositionOffset(math::Vector3T<float>&) const
    ulong Camera::GetCameraPositionOffset(Vector3T* param_1) {
        long* plVar3;
        Vector3T* pVVar4;
        undefined8 uVar5;
        undefined1* this_00;
        ulong uVar6;
        undefined1 local_40[24];
        undefined8 local_28[2];

        this_00 = m_positionManager;
        if (this_00->operator_cast_to_bool()) {
            plVar3 = (long*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)this_00);
            if ((**(code**)(*plVar3 + 32))(plVar3) != '\0') {
                pVVar4 = (Vector3T*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)this_00);
                (**(code**)(*(long*)pVVar4 + 56))((math*)local_40);
                local_28[0] = math::Vector3FromVector3T<double>((math*)local_40, pVVar4);
                param_1->SetXYZ(local_28);
                uVar6 = CONCAT71((int7)((ulong)local_40 >> 8), 1);
                goto LAB_100630afe;
            }
        }
        uVar5 = logger::default_logger();
        uVar6 = 0;
        logger::Logger::Log(
            uVar5, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            458, "Camera.getCameraPositionOffset: position manager is not ready!");
    LAB_100630afe:
        return uVar6 & 4294967295;
    }

    // 0x100630b10, 128 bytes, placed by class name
    // Camera::GetCameraLookat(math::Vector3T<double>&) const
    ulong Camera::GetCameraLookat(Vector3T* param_1) {
        long* plVar3;
        undefined8 uVar4;
        undefined1* this_00;
        ulong uVar5;

        this_00 = m_pLookatManager;
        if (this_00->operator_cast_to_bool()) {
            plVar3 = (long*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)this_00);
            if ((**(code**)(*plVar3 + 104))(plVar3) != '\0') {
                plVar3 = (long*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)this_00);
                (**(code**)(*plVar3 + 56))(plVar3, param_1);
                uVar5 = CONCAT71((int7)((ulong)this_00 >> 8), 1);
                goto LAB_100630b89;
            }
        }
        uVar4 = logger::default_logger();
        uVar5 = 0;
        logger::Logger::Log(
            uVar4, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            469, "Camera.getViewVector: lookat manager is not ready!");
    LAB_100630b89:
        return uVar5 & 4294967295;
    }

    // 0x100630bb0, 192 bytes, placed by class name
    // Camera::GetCameraLookat(math::Vector3T<float>&) const
    ulong Camera::GetCameraLookat(Vector3T* param_1) {
        long* plVar3;
        undefined8 uVar4;
        undefined1* this_00;
        ulong uVar5;
        math* pmVar6;
        undefined1 local_48[24];
        undefined8 local_30[2];

        this_00 = m_pLookatManager;
        if (this_00->operator_cast_to_bool()) {
            plVar3 = (long*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)this_00);
            if ((**(code**)(*plVar3 + 104))(plVar3) != '\0') {
                new (local_48) oldscape::dash3d::ModelLit::AABB();
                plVar3 = (long*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)this_00);
                pmVar6 = (math*)local_48;
                (**(code**)(*plVar3 + 56))(plVar3);
                local_30[0] = math::Vector3FromVector3T<double>((math*)local_48, (Vector3T*)pmVar6);
                param_1->SetXYZ(local_30);
                uVar5 = CONCAT71((int7)((ulong)this_00 >> 8), 1);
                goto LAB_100630c58;
            }
        }
        uVar4 = logger::default_logger();
        uVar5 = 0;
        logger::Logger::Log(
            uVar4, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            480, "Camera.getViewVector: lookat manager is not ready!");
    LAB_100630c58:
        return uVar5 & 4294967295;
    }

    // 0x100630c90, 144 bytes, placed by class name
    // Camera::GetCameraCurrentLookat(math::Vector3T<double>&) const
    ulong Camera::GetCameraCurrentLookat(Vector3T* param_1) {
        long* plVar3;
        Vector3T* pVVar4;
        undefined8 uVar5;
        undefined1* this_00;
        ulong uVar6;

        this_00 = m_pLookatManager;
        if (this_00->operator_cast_to_bool()) {
            plVar3 = (long*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)this_00);
            if ((**(code**)(*plVar3 + 104))(plVar3) != '\0') {
                plVar3 = (long*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)this_00);
                pVVar4 = (Vector3T*)(**(code**)(*plVar3 + 32))(plVar3);
                math::Vector3T<double>::operator=((Vector3T<double>*)param_1, pVVar4);
                uVar6 = CONCAT71((int7)((ulong)this_00 >> 8), 1);
                goto LAB_100630d11;
            }
        }
        uVar5 = logger::default_logger();
        uVar6 = 0;
        logger::Logger::Log(
            uVar5, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            493, "Camera.getCameraCurrentLookat: lookat manager is not ready!");
    LAB_100630d11:
        return uVar6 & 4294967295;
    }

    // 0x100630d40, 176 bytes, placed by class name
    // Camera::GetCameraCurrentLookat(math::Vector3T<float>&) const
    ulong Camera::GetCameraCurrentLookat(Vector3T* param_1) {
        long* plVar3;
        math* this_00;
        undefined8 uVar4;
        undefined1* this_01;
        ulong uVar5;
        undefined8 local_28[2];

        this_01 = m_pLookatManager;
        if (this_01->operator_cast_to_bool()) {
            plVar3 = (long*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)this_01);
            if ((**(code**)(*plVar3 + 104))(plVar3) != '\0') {
                plVar3 = (long*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)this_01);
                this_00 = (math*)(**(code**)(*plVar3 + 32))(plVar3);
                local_28[0] = math::Vector3FromVector3T<double>(this_00, param_1);
                param_1->SetXYZ(local_28);
                uVar5 = CONCAT71((int7)((ulong)this_01 >> 8), 1);
                goto LAB_100630dd7;
            }
        }
        uVar4 = logger::default_logger();
        uVar5 = 0;
        logger::Logger::Log(
            uVar4, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            505, "Camera.getCameraCurrentLookat: lookat manager is not ready!");
    LAB_100630dd7:
        return uVar5 & 4294967295;
    }

    // 0x100630e10, 496 bytes, placed by class name
    // Camera::GetCameraMatrix(math::Matrix44T<float>&) const
    undefined4 Camera::GetCameraMatrix(Matrix44T* param_1) {
        undefined4 uVar1;
        ulonglong uVar2;
        undefined8 uVar3;
        long lVar4;
        long lVar5;
        long* plVar6;
        double dVar7;
        AABB local_c8;
        AABB local_b0;
        AABB local_98;
        QuaternionT<double> local_80[32];
        Vector3T<double> local_60[24];
        double local_48;
        ulonglong local_38;

        uVar1 = ManagersReady(this);
        if ((char)uVar1 == '\0') {
            uVar3 = logger::default_logger();
            logger::Logger::Log(
                uVar3, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
                517, "Camera.getCameraMatrix: lookat or position manager is not ready!");
        } else {
            uVar2 = FrameTime::GetCurrentTimeMS();
            if (m_lookatMode == 3) {
                UpdateOrientation(this, param_1, uVar2);
            } else {
                local_38 = uVar2;
                new (&local_c8) oldscape::dash3d::ModelLit::AABB();
                math::QuaternionT<double>::QuaternionT(local_80);
                plVar6 =
                    (long*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)m_positionManager);
                local_48 = (double)(**(code**)(*plVar6 + 144))(plVar6);
                (*(code*)field_0[10])(this, &local_c8);
                local_80->FromAxisAngle((Vector3T*)&local_c8, -local_48);
                math::operator*((math*)local_60, (Vector3T*)PTR_UP_100ee66b0, (QuaternionT*)local_80);
                dVar7 = math::Vector3Dot<double>((Vector3T*)&local_c8, (Vector3T*)local_60);
                if (ABS(dVar7) == 1.0) {
                    math::Vector3T<double>::operator=(local_60, (Vector3T*)PTR_LOOK_100ee66b8);
                }
                new (&local_b0) oldscape::dash3d::ModelLit::AABB();
                new (&local_98) oldscape::dash3d::ModelLit::AABB();
                GetPosition(this, (Vector3T*)&local_b0, local_38);
                plVar6 = (long*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)m_pLookatManager);
                (**(code**)(*plVar6 + 56))(plVar6, &local_98);
                math::Matrix44LookAtLH<float>(param_1, (Vector3T*)&local_b0, (Vector3T*)&local_98, (Vector3T*)local_60);
            }
            math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_16, param_1);
            lVar4 = (&field_248)->HeapBeginPtr();
            lVar5 = (&field_248)->end();
            for (; lVar4 != lVar5; lVar4 = lVar4 + 24) {
                plVar6 = (long*)shared_ptr<ICameraEffect>::operator->((shared_ptr<ICameraEffect>*)(lVar4 + 8));
                (**(code**)(*plVar6 + 24))(plVar6, param_1);
            }
            math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_80, param_1);
        }
        return uVar1;
    }

    // 0x100631000, 384 bytes, placed by class name
    // Camera::UpdateOrientation(math::Matrix44T<float>&, unsigned long long) const
    void Camera::UpdateOrientation(Matrix44T* param_1, ulonglong param_2) {
        undefined1* this_00;
        long* plVar2;
        long* plVar3;
        QuaternionT* pQVar4;
        Vector3T* pVVar5;
        math* pmVar6;
        undefined1 local_90[40];
        undefined1 local_68[24];
        PositionPoint* local_48;
        undefined8 local_40[2];

        plVar2 = (long*)m_pLookatManager->end();
        this_00 = m_positionManager;
        plVar3 = (long*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)this_00);
        (**(code**)(*plVar3 + 48))(local_90, plVar3);
        (**(code**)(*plVar2 + 64))(plVar2, local_90);
        param_1->SetToIdentity();
        if (((**(code**)(*plVar2 + 136))(plVar2) != '\0') && (m_positionMode == 0)) {
            local_48 = (PositionPoint*)this_00->end();
            new (local_68) CoordFine();
            new (local_90) oldscape::dash3d::ModelLit::AABB();
            plVar3 = (long*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)this_00);
            (**(code**)(*plVar3 + 104))(plVar3, (CoordFine*)local_68, param_2);
            pmVar6 = (math*)local_90;
            (**(code**)(*plVar2 + 72))(plVar2);
            local_40[0] = math::Vector3FromVector3T<double>((math*)local_90, (Vector3T*)pmVar6);
            ((local_68 + 4))->SetXYZ(local_40);
            local_48->SetDestination(local_68);
        }
        pQVar4 = (QuaternionT*)(**(code**)(*plVar2 + 152))(plVar2);
        new (local_68) math::QuaternionT<float>(pQVar4);
        new (local_90) math::Matrix33T<float>(local_68);
        param_1->SetRot(local_90);
        pVVar5 = (Vector3T*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)this_00);
        (**(code**)(*(long*)pVVar5 + 48))((math*)local_68);
        local_40[0] = math::Vector3FromVector3T<double>((math*)local_68, pVVar5);
        param_1->SetPos(local_40);
        param_1->Invert(0);
    }

    // 0x100631480, 96 bytes, placed by class name
    // Camera::DrawDebugCameraBits() const
    void Camera::DrawDebugCameraBits() {
        long* plVar1;

        if (m_debugCameraEffects != '\0') {
            plVar1 = (long*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)m_positionManager);
            (**(code**)(*plVar1 + 160))(plVar1, 4278255360);
            plVar1 = (long*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)m_pLookatManager);
            (**(code**)(*plVar1 + 120))(plVar1, 4278190335);
        }
    }

    // 0x100631500, 128 bytes, placed by class name
    // Camera::GetOrientationOffset(math::QuaternionT<double>&, math::Point<int>&) const
    undefined8 Camera::GetOrientationOffset(QuaternionT* param_1, Point* param_2) {
        long* plVar4;
        CommandLine* this_00;
        PositionEntity* this_01;
        undefined1* this_02;

        this_02 = m_positionManager;
        if (this_02->operator_cast_to_bool()) {
            plVar4 = (long*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)this_02);
            if ((**(code**)(*plVar4 + 32))(plVar4) != '\0') {
                this_00 =
                    (CommandLine*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)this_02);
                if (this_00->GetPos() == 1) {
                    this_01 = (PositionEntity*)this_02->end();
                    this_01->GetOrientationOffset(param_1, param_2);
                    return 1;
                }
            }
        }
        param_1->SetToIdentity();
        return 0;
    }

    // 0x1006315a0, 112 bytes, placed by class name
    // Camera::GetOrientationOffset(math::QuaternionT<double>&) const
    undefined8 Camera::GetOrientationOffset(QuaternionT* param_1) {
        long* plVar4;
        CommandLine* this_00;
        PositionEntity* this_01;
        undefined1* this_02;

        this_02 = m_positionManager;
        if (this_02->operator_cast_to_bool()) {
            plVar4 = (long*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)this_02);
            if ((**(code**)(*plVar4 + 32))(plVar4) != '\0') {
                this_00 =
                    (CommandLine*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)this_02);
                if (this_00->GetPos() == 1) {
                    this_01 = (PositionEntity*)this_02->end();
                    this_01->GetOrientationOffset(param_1);
                    return 1;
                }
            }
        }
        param_1->SetToIdentity();
        return 0;
    }

    // 0x100631630, 144 bytes, placed by class name
    // Camera::GetPositionFine(CoordFine&) const
    ulong Camera::GetPositionFine(CoordFine* param_1) {
        long* plVar3;
        undefined8 uVar4;
        undefined1* this_00;
        ulong uVar5;

        this_00 = m_positionManager;
        if (this_00->operator_cast_to_bool()) {
            plVar3 = (long*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)this_00);
            if ((**(code**)(*plVar3 + 32))(plVar3) != '\0') {
                plVar3 = (long*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)this_00);
                uVar4 = FrameTime::GetCurrentTimeMS();
                (**(code**)(*plVar3 + 104))(plVar3, param_1, uVar4);
                uVar5 = CONCAT71((int7)((ulong)plVar3 >> 8), 1);
                goto LAB_1006316b4;
            }
        }
        uVar4 = logger::default_logger();
        uVar5 = 0;
        logger::Logger::Log(
            uVar4, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            645, "Camera::GetPositionFine: position manager is not ready!");
    LAB_1006316b4:
        return uVar5 & 4294967295;
    }

    // 0x1006316e0, 128 bytes, placed by class name
    // Camera::GetLookatFine(CoordFine&) const
    ulong Camera::GetLookatFine(CoordFine* param_1) {
        long* plVar3;
        undefined8 uVar4;
        undefined1* this_00;
        ulong uVar5;

        this_00 = m_pLookatManager;
        if (this_00->operator_cast_to_bool()) {
            plVar3 = (long*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)this_00);
            if ((**(code**)(*plVar3 + 104))(plVar3) != '\0') {
                plVar3 = (long*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)this_00);
                (**(code**)(*plVar3 + 80))(plVar3, param_1);
                uVar5 = CONCAT71((int7)((ulong)this_00 >> 8), 1);
                goto LAB_100631759;
            }
        }
        uVar4 = logger::default_logger();
        uVar5 = 0;
        logger::Logger::Log(
            uVar4, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            656, "Camera::GetLookatFine: lookat manager is not ready!");
    LAB_100631759:
        return uVar5 & 4294967295;
    }

    // 0x100631780, 96 bytes, placed by class name
    // Camera::GetFollowAngle(double&, math::Point<int>&) const
    undefined4 Camera::GetFollowAngle(double* param_1, Point* param_2) {
        undefined4 uVar1;
        long* plVar2;
        double dVar3;

        uVar1 = (*(code*)*field_0)();
        dVar3 = 0.0;
        if ((char)uVar1 != '\0') {
            plVar2 = (long*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)m_positionManager);
            dVar3 = (double)(**(code**)(*plVar2 + 128))(plVar2, param_2);
        }
        *param_1 = dVar3;
        return uVar1;
    }

    // 0x100631800, 96 bytes, placed by class name
    // Camera::GetYAngle() const
    ulong Camera::GetYAngle() {
        char cVar1;
        long* plVar2;
        ulong uVar3;
        double dVar4;

        cVar1 = (*(code*)*field_0)();
        uVar3 = 0;
        if (cVar1 != '\0') {
            plVar2 = (long*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)m_positionManager);
            dVar4 = (double)(**(code**)(*plVar2 + 120))(plVar2);
            uVar3 = ~-(ulong)(dVar4 < 0.0) & (ulong)dVar4 | (ulong)(dVar4 + 6.2831854820251465) & -(ulong)(dVar4 < 0.0);
        }
        return uVar3;
    }

    // 0x100631880, 112 bytes, placed by class name
    // Camera::SetAngularLookatInterpolant(double)
    void Camera::SetAngularLookatInterpolant(double param_1) {
        undefined8 uVar1;

        if (m_clientControlled == 0) {
            uVar1 = logger::default_logger();
            logger::Logger::Log(
                uVar1, 0, 8,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
                694, "%s - client not in control of camera", "SetAngularLookatInterpolant");
        }
        field_304 = param_1;
    }

    // 0x1006318f0, 112 bytes, placed by class name
    // Camera::SetAngularPositionInterpolant(double)
    void Camera::SetAngularPositionInterpolant(double param_1) {
        undefined8 uVar1;

        if (m_clientControlled == 0) {
            uVar1 = logger::default_logger();
            logger::Logger::Log(
                uVar1, 0, 8,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
                703, "%s - client not in control of camera", "SetAngularPositionInterpolant");
        }
        m_angularPositionInterpolant = param_1;
    }

    // 0x100631960, 96 bytes, placed by class name
    // Camera::SetLinearMovementMode(LinearMovement::Mode)
    void Camera::SetLinearMovementMode(uint param_2) {
        undefined8 uVar1;

        if (m_clientControlled == 0) {
            uVar1 = logger::default_logger();
            logger::Logger::Log(
                uVar1, 0, 8,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
                712, "%s - client not in control of camera", "SetLinearMovementMode");
        }
        field_296 = param_2;
    }

    // 0x1006319c0, 112 bytes, placed by class name
    // Camera::SetLinearLookatAcceleration(math::Vector3T<double> const&)
    void Camera::SetLinearLookatAcceleration(Vector3T* param_1) {
        undefined8 uVar1;

        if (m_clientControlled == 0) {
            uVar1 = logger::default_logger();
            logger::Logger::Log(
                uVar1, 0, 8,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
                721, "%s - client not in control of camera", "SetLinearLookatAcceleration");
        }
        math::Vector3T<double>::operator=((Vector3T<double>*)&m_linearLookatAcceleration, param_1);
    }

    // 0x100631a30, 128 bytes, placed by class name
    // Camera::SetLinearPositionAcceleration(math::Vector3T<double> const&)
    void Camera::SetLinearPositionAcceleration(Vector3T* param_1) {
        undefined8 uVar2;

        if (m_clientControlled != 0) {
            if (graphics::IsShadowPass(field_296) != '\0')
                goto LAB_100631a8e;
        }
        uVar2 = logger::default_logger();
        logger::Logger::Log(
            uVar2, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            730, "%s - cannot set at this time", "SetLinearPositionAcceleration");
    LAB_100631a8e:
        math::Vector3T<double>::operator=((Vector3T<double>*)&m_linearPositionAcceleration, param_1);
    }

    // 0x100631ac0, 128 bytes, placed by class name
    // Camera::SetLinearLookatMaxSpeed(math::Vector3T<double> const&)
    void Camera::SetLinearLookatMaxSpeed(Vector3T* param_1) {
        undefined8 uVar2;

        if (m_clientControlled != 0) {
            if (graphics::IsShadowPass(field_296) != '\0')
                goto LAB_100631b1e;
        }
        uVar2 = logger::default_logger();
        logger::Logger::Log(
            uVar2, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            739, "%s - cannot set at this time", "SetLinearLookatMaxSpeed");
    LAB_100631b1e:
        math::Vector3T<double>::operator=((Vector3T<double>*)m_linearLookatMaxSpeed, param_1);
    }

    // 0x100631b40, 128 bytes, placed by class name
    // Camera::SetLinearPositionMaxSpeed(math::Vector3T<double> const&)
    void Camera::SetLinearPositionMaxSpeed(Vector3T* param_1) {
        undefined8 uVar2;

        if (m_clientControlled != 0) {
            if (graphics::IsShadowPass(field_296) != '\0')
                goto LAB_100631b9e;
        }
        uVar2 = logger::default_logger();
        logger::Logger::Log(
            uVar2, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            748, "%s - cannot set at this time", "SetLinearPositionMaxSpeed");
    LAB_100631b9e:
        math::Vector3T<double>::operator=((Vector3T<double>*)m_linearPositionMaxSpeed, param_1);
    }

    // 0x100631bc0, 160 bytes, placed by class name
    // Camera::SetSpringProperties(math::Vector3T<double> const&, double)
    void Camera::SetSpringProperties(Vector3T* param_1, double param_2) {
        undefined8 uVar2;

        if (m_clientControlled != 0) {
            if (graphics::IsShadowPass(field_296) == '\0')
                goto LAB_100631c23;
        }
        uVar2 = logger::default_logger();
        logger::Logger::Log(
            uVar2, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            757, "%s - cannot set at this time", "SetSpringProperties");
    LAB_100631c23:
        math::Vector3T<double>::operator=((Vector3T<double>*)field_448, param_1);
        math::Vector3T<double>::operator=((Vector3T<double>*)field_472, param_1);
        field_496 = param_2;
        field_504 = param_2;
    }

    // 0x100631c60, 144 bytes, placed by class name
    // Camera::SetLookatSpringProperties(math::Vector3T<double> const&, double)
    void Camera::SetLookatSpringProperties(Vector3T* param_1, double param_2) {
        undefined8 uVar2;

        if (m_clientControlled != 0) {
            if (graphics::IsShadowPass(field_296) == '\0')
                goto LAB_100631cc3;
        }
        uVar2 = logger::default_logger();
        logger::Logger::Log(
            uVar2, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            769, "%s - cannot set at this time", "SetLookatSpringProperties");
    LAB_100631cc3:
        math::Vector3T<double>::operator=((Vector3T<double>*)field_448, param_1);
        field_496 = param_2;
    }

    // 0x100631cf0, 144 bytes, placed by class name
    // Camera::SetPositionSpringProperties(math::Vector3T<double> const&, double)
    void Camera::SetPositionSpringProperties(Vector3T* param_1, double param_2) {
        undefined8 uVar2;

        if (m_clientControlled != 0) {
            if (graphics::IsShadowPass(field_296) == '\0')
                goto LAB_100631d53;
        }
        uVar2 = logger::default_logger();
        logger::Logger::Log(
            uVar2, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            779, "%s - cannot set at this time", "SetPositionSpringProperties");
    LAB_100631d53:
        math::Vector3T<double>::operator=((Vector3T<double>*)field_472, param_1);
        field_504 = param_2;
    }

    // 0x100631d80, 304 bytes, placed by class name
    // Camera::SetLookatPoint(CoordFine const&)
    void Camera::SetLookatPoint(CoordFine* param_1) {
        int iVar2;
        CommandLine* pCVar3;
        undefined8 uVar4;
        LookatPoint* this_00;
        undefined1* this_01;
        undefined8 uVar5;
        char* pcVar6;

        if (m_clientControlled == 0) {
            uVar4 = logger::default_logger();
            pcVar6 = "%s - client not in control of camera";
            uVar5 = 789;
        } else {
            this_01 = m_pLookatManager;
            if (this_01->operator_cast_to_bool()) {
                pCVar3 = (CommandLine*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)this_01);
                iVar2 = pCVar3->GetPos();
                if (iVar2 == 0) {
                    pCVar3 = (CommandLine*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)this_01);
                    iVar2 = pCVar3->GetPos();
                    if (iVar2 != 0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("m_lookatManager->GetMode() == LookatMode::POINT",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "camera/Camera.cpp",
                                  801, (char*)0);
                    }
                    this_00 = (LookatPoint*)this_01->end();
                    this_00->SetLookat(param_1);
                    return;
                }
                uVar4 = logger::default_logger();
                pcVar6 = "%s - lookatManager mode is not POINT";
                uVar5 = 797;
            } else {
                uVar4 = logger::default_logger();
                pcVar6 = "%s - this camera has no lookatManager";
                uVar5 = 793;
            }
        }
        logger::Logger::Log(
            uVar4, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            uVar5, pcVar6, "SetLookatPoint");
    }

    // 0x100631eb0, 304 bytes, placed by class name
    // Camera::SetPositionPoint(CoordFine const&)
    void Camera::SetPositionPoint(CoordFine* param_1) {
        int iVar2;
        CommandLine* pCVar3;
        undefined8 uVar4;
        PositionPoint* this_00;
        undefined1* this_01;
        undefined8 uVar5;
        char* pcVar6;

        if (m_clientControlled == 0) {
            uVar4 = logger::default_logger();
            pcVar6 = "%s - client not in control of camera";
            uVar5 = 811;
        } else {
            this_01 = m_positionManager;
            if (this_01->operator_cast_to_bool()) {
                pCVar3 = (CommandLine*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)this_01);
                iVar2 = pCVar3->GetPos();
                if (iVar2 == 0) {
                    pCVar3 =
                        (CommandLine*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)this_01);
                    iVar2 = pCVar3->GetPos();
                    if (iVar2 != 0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("m_positionManager->GetMode() == PositionMode::POINT",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "camera/Camera.cpp",
                                  823, (char*)0);
                    }
                    this_00 = (PositionPoint*)this_01->end();
                    this_00->SetDestination(param_1);
                    return;
                }
                uVar4 = logger::default_logger();
                pcVar6 = "%s - positionManager mode is not POINT";
                uVar5 = 819;
            } else {
                uVar4 = logger::default_logger();
                pcVar6 = "%s - this camera has no positionManager";
                uVar5 = 815;
            }
        }
        logger::Logger::Log(
            uVar4, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            uVar5, pcVar6, "SetPositionPoint");
    }

    // 0x100631fe0, 256 bytes, placed by class name
    // Camera::SetPositionPointCollision(bool)
    void Camera::SetPositionPointCollision(bool param_1) {
        CommandLine* this_00;
        undefined8 uVar3;
        PositionPoint* this_01;
        undefined1* this_02;
        undefined8 uVar4;
        char* pcVar5;

        if (m_clientControlled == 0) {
            uVar3 = logger::default_logger();
            pcVar5 = "%s - client not in control of camera";
            uVar4 = 833;
        } else {
            this_02 = m_positionManager;
            if (this_02->operator_cast_to_bool()) {
                this_00 =
                    (CommandLine*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)this_02);
                if (this_00->GetPos() == 0) {
                    this_01 = (PositionPoint*)this_02->end();
                    this_01->SetGroundCollision(param_1);
                    return;
                }
                uVar3 = logger::default_logger();
                pcVar5 = "%s - positionManager mode is not POINT";
                uVar4 = 841;
            } else {
                uVar3 = logger::default_logger();
                pcVar5 = "%s - this camera has no positionManager";
                uVar4 = 837;
            }
        }
        logger::Logger::Log(
            uVar3, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            uVar4, pcVar5, "SetPositionPointCollision");
    }

    // 0x1006320f0, 144 bytes, placed by class name
    // Camera::SetLookatOrientationVector(math::Vector3T<float>)
    void Camera::SetLookatOrientationVector(undefined4 param_1, undefined4 param_2, long param_3) {
        CommandLine* this;
        undefined8 uVar2;
        long* plVar3;

        this = (CommandLine*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)(param_3 + 208));
        if (GetPos() != 3) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
                856, "%s - Tried to set an OrientationLookatManager when not in LookAtOrientation Mode!",
                "SetLookatOrientationVector");
        }
        plVar3 = (long*)((param_3 + 208))->end();
        (**(code**)(*plVar3 + 144))(param_1, param_2, plVar3);
    }

    // 0x100632180, 128 bytes, placed by class name
    // Camera::SetLookatOrientationXRotation(int)
    void Camera::SetLookatOrientationXRotation(int param_1) {
        CommandLine* this_00;
        undefined8 uVar2;
        Minimap* this_01;

        this_00 = (CommandLine*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)m_pLookatManager);
        if (this_00->GetPos() != 3) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
                866, "%s - Tried to set an OrientationLookatManager when not in LookAtOrientation Mode!",
                "SetLookatOrientationXRotation");
        }
        this_01 = (Minimap*)m_pLookatManager->end();
        this_01->SetLevel(param_1);
    }

    // 0x100632200, 128 bytes, placed by class name
    // Camera::SetLookatOrientationYRotation(int)
    void Camera::SetLookatOrientationYRotation(int param_1) {
        CommandLine* this_00;
        undefined8 uVar2;
        StockPlayerOffer* this_01;

        this_00 = (CommandLine*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)m_pLookatManager);
        if (this_00->GetPos() != 3) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
                876, "%s - Tried to set an OrientationLookatManager when not in LookAtOrientation Mode!",
                "SetLookatOrientationYRotation");
        }
        this_01 = (StockPlayerOffer*)m_pLookatManager->end();
        this_01->SetCompletedCount(param_1);
    }

    // 0x100632280, 128 bytes, placed by class name
    // Camera::SetLookatOrientationXMovement(float)
    void Camera::SetLookatOrientationXMovement(float param_1) {
        CommandLine* this_00;
        undefined8 uVar2;
        LookatOrientation* this_01;

        this_00 = (CommandLine*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)m_pLookatManager);
        if (this_00->GetPos() != 3) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
                886, "%s - Tried to set an OrientationLookatManager when not in LookAtOrientation Mode!",
                "SetLookatOrientationXMovement");
        }
        this_01 = (LookatOrientation*)m_pLookatManager->end();
        this_01->SetOrientationXMovement(param_1);
    }

    // 0x100632300, 128 bytes, placed by class name
    // Camera::SetLookatOrientationZMovement(float)
    void Camera::SetLookatOrientationZMovement(float param_1) {
        CommandLine* this_00;
        undefined8 uVar2;
        LookatOrientation* this_01;

        this_00 = (CommandLine*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)m_pLookatManager);
        if (this_00->GetPos() != 3) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
                896, "%s - Tried to set an OrientationLookatManager when not in LookAtOrientation Mode!",
                "SetLookatOrientationZMovement");
        }
        this_01 = (LookatOrientation*)m_pLookatManager->end();
        this_01->SetOrientationZMovement(param_1);
    }

    // 0x100632380, 176 bytes, placed by class name
    // Camera::SetMaxDistanceClamping(math::Vector3T<float> const&, int, int, int, int, int, int)
    void Camera::SetMaxDistanceClamping(Vector3T* param_1, int param_2, int param_3, int param_4, int param_5,
                                        int param_6, int param_7) {
        CommandLine* this_00;
        undefined8 uVar2;
        LookatOrientation* this_01;

        this_00 = (CommandLine*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)m_pLookatManager);
        if (this_00->GetPos() != 3) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
                906, "%s - Tried to set an OrientationLookatManager when not in LookAtOrientation Mode!",
                "SetMaxDistanceClamping");
        }
        this_01 = (LookatOrientation*)m_pLookatManager->end();
        this_01->SetMaxDistanceClamping(param_1, param_2, param_3, param_4, param_5, param_6, param_7);
    }

    // 0x100632430, 80 bytes, placed by class name
    // Camera::AddEffect(shared_ptr<ICameraEffect> const&)
    void Camera::AddEffect(shared_ptr* param_1) {
        Minimap* this_00;
        shared_ptr<ICameraEffect>* this_01;
        int local_1c;

        this_00 = (Minimap*)shared_ptr<ICameraEffect>::operator->((shared_ptr<ICameraEffect>*)param_1);
        local_1c = this_00->GetLevel();
        this_01 = (shared_ptr<ICameraEffect>*)
            eastl::vector_map<int, shared_ptr<ICameraEffect>, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, shared_ptr<ICameraEffect>>, eastl::allocator>>::
            operator[](
                (vector_map<int, shared_ptr<ICameraEffect>, eastl::less<int>, eastl::allocator,
                            eastl::vector<eastl::pair<int, shared_ptr<ICameraEffect>>, eastl::allocator>>*)&field_248,
                &local_1c);
        shared_ptr<ICameraEffect>::operator=(this_01, param_1);
    }

    // 0x100632590, 48 bytes, placed by class name
    // Camera::RemoveEffect(int)
    void Camera::RemoveEffect(int param_1) {
        int local_c;

        local_c = param_1;
        (&field_248, &local_c)->erase();
    }

    // 0x100632600, 80 bytes, placed by class name
    // Camera::GetEffect(int)
    undefined8 Camera::GetEffect(int param_1) {
        long lVar1;
        long lVar2;
        undefined8 uVar3;
        int local_1c;

        local_1c = param_1;
        lVar1 = (&field_248, &local_1c)->find();
        lVar2 = (&field_248)->end();
        if (lVar1 == lVar2) {
            uVar3 = 0;
        } else {
            uVar3 = ((lVar1 + 8))->end();
        }
        return uVar3;
    }

    // 0x100632650, 1680 bytes, placed by class name
    // Camera::ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&, unsigned int)
    /* WARNING: Type propagation algorithm not settling */
    /* Camera::ProcessServerUpdate(PacketT<Array<unsigned char,
   BucketAllocatorEASTL> >&, unsigned int) */

    void Camera::ProcessServerUpdate(PacketT* param_1, uint param_2) {
        byte bVar1;
        byte bVar2;
        char cVar3;
        bool bVar4;
        ushort uVar5;
        long* plVar6;
        long lVar7;
        undefined8 uVar8;
        uint uVar9;
        float fVar10;
        Vector3T<float> local_90[16];
        long local_80;
        shared_ptr local_78;
        uint local_60[4];
        uint local_50;
        uint local_4c;
        shared_ptr local_48;
        byte local_31;

        local_80 = param_1->size();
        bVar1 = param_1->g1();
        m_clientControlled = bVar1 & 1;
        if (((bVar1 & 8) != 0) && (bVar2 = param_1->g1(), m_lookatMode != (uint)bVar2)) {
            SetLookatMode(this, bVar2, 1);
        }
        if (((bVar1 & 16) != 0) && (bVar2 = param_1->g1(), m_positionMode != (uint)bVar2)) {
            SetPositionMode(this, bVar2, 1);
        }
        if ((char)bVar1 < '\0') {
            local_50 = param_2;
            uVar5 = param_1->g2();
            local_31 = bVar1;
            if ((uVar5 & 1) != 0) {
                new (&local_48) math::Vector3T<float>(param_1, false);
                math::Vector3T<double>::Vector3T<float>((Vector3T<double>*)&local_78, (Vector3T*)&local_48);
                math::Vector3T<double>::operator=((Vector3T<double>*)m_linearLookatMaxSpeed, (Vector3T*)&local_78);
            }
            if ((uVar5 & 2) != 0) {
                new (&local_48) math::Vector3T<float>(param_1, false);
                math::Vector3T<double>::Vector3T<float>((Vector3T<double>*)&local_78, (Vector3T*)&local_48);
                math::Vector3T<double>::operator=((Vector3T<double>*)m_linearPositionMaxSpeed, (Vector3T*)&local_78);
            }
            if ((uVar5 & 4) != 0) {
                new (&local_48) math::Vector3T<float>(param_1, false);
                math::Vector3T<double>::Vector3T<float>((Vector3T<double>*)&local_78, (Vector3T*)&local_48);
                math::Vector3T<double>::operator=((Vector3T<double>*)&m_linearLookatAcceleration, (Vector3T*)&local_78);
            }
            if ((uVar5 & 8) != 0) {
                new (&local_48) math::Vector3T<float>(param_1, false);
                math::Vector3T<double>::Vector3T<float>((Vector3T<double>*)&local_78, (Vector3T*)&local_48);
                math::Vector3T<double>::operator=((Vector3T<double>*)&m_linearPositionAcceleration,
                                                  (Vector3T*)&local_78);
            }
            if ((uVar5 & 16) != 0) {
                fVar10 = (float)param_1->gFloat();
                fVar10 = (float)eastl::max_alt(115.0, fVar10);
                m_nearPlane = (double)fVar10;
                fVar10 = (float)param_1->gFloat();
                field_536 = (double)fVar10;
                field_544 = 1;
            }
            if ((uVar5 & 32) != 0) {
                fVar10 = (float)param_1->gFloat();
                field_516 = fVar10;
                fVar10 = (float)param_1->gFloat();
                m_fieldOfView = fVar10;
            }
            if ((uVar5 & 64) != 0) {
                bVar1 = param_1->g1();
                m_projectionMode = (uint)bVar1;
            }
            if ((char)uVar5 < '\0') {
                param_1->Skip(3);
                param_1->Skip(1);
            }
            if ((uVar5 & 256) != 0) {
                bVar1 = param_1->g1();
                field_292 = (bool)(bVar1 & 1);
                field_293 = (bool)(bVar1 >> 1 & 1);
            }
            local_4c = (uint)uVar5;
            if (((uVar5 & 512) != 0) && (bVar1 = param_1->g1(), bVar1 != 0)) {
                uVar9 = (uint)bVar1;
                do {
                    cVar3 = param_1->g1();
                    bVar1 = param_1->g1();
                    local_60[0] = (uint)bVar1;
                    if (cVar3 == '\0') {
                        RemoveEffect(this, local_60[0]);
                    } else {
                        cVar3 = param_1->g1();
                        plVar6 = (long*)GetEffect(this, local_60[0]);
                        if (plVar6 == (long*)0) {
                            if (cVar3 == '\x01') {
                                make_shared<camera::ZTilt, int&, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&>(
                                    (jag*)&local_48, (int*)local_60, param_1);
                                shared_ptr<ICameraEffect>::shared_ptr<camera::ZTilt, void>(
                                    (shared_ptr<ICameraEffect>*)&local_78, &local_48);
                                AddEffect(this, &local_78);
                                local_78.~shared_ptr();
                                local_48.~shared_ptr();
                            } else if (cVar3 == '\0') {
                                make_shared<camera::Shake, int&, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&>(
                                    (jag*)&local_48, (int*)local_60, param_1);
                                shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<
                                    oldscape::FileRSevenDebugPresetProvider, void>(
                                    (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_78, &local_48);
                                AddEffect(this, &local_78);
                                local_78.~shared_ptr();
                                local_48.~shared_ptr();
                            }
                        } else {
                            (**(code**)(*plVar6 + 32))(plVar6, param_1);
                        }
                    }
                    uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
            }
            uVar9 = local_4c;
            if ((local_4c & 1024) != 0) {
                uVar5 = param_1->g2();
                field_320 = (uint)uVar5;
                fVar10 = (float)param_1->gFloat();
                field_328 = (double)fVar10;
            }
            bVar1 = local_31;
            param_2 = local_50;
            if ((uVar9 & 2048) != 0) {
                bVar2 = param_1->g1();
                field_296 = (uint)bVar2;
            }
            if ((uVar9 & 4096) != 0) {
                new (&local_48) math::Vector3T<int>();
                new (local_60) math::Vector3T<int>();
                math::Vector3T<float>::Vector3T(local_90, param_1, false);
                math::Vector3T<double>::Vector3T<float>((Vector3T<double>*)&local_78, (Vector3T*)local_90);
                math::Vector3T<double>::operator=((Vector3T<double>*)field_448, (Vector3T*)&local_78);
                math::Vector3T<float>::Vector3T(local_90, param_1, false);
                bVar1 = local_31;
                math::Vector3T<double>::Vector3T<float>((Vector3T<double>*)&local_78, (Vector3T*)local_90);
                uVar9 = local_4c;
                math::Vector3T<double>::operator=((Vector3T<double>*)field_472, (Vector3T*)&local_78);
                fVar10 = (float)param_1->gFloat();
                field_496 = (double)fVar10;
                fVar10 = (float)param_1->gFloat();
                field_504 = (double)fVar10;
            }
            if ((uVar9 & 8192) != 0) {
                fVar10 = (float)param_1->gFloat();
                field_304 = (double)fVar10;
            }
            if ((uVar9 & 16384) != 0) {
                fVar10 = (float)param_1->gFloat();
                m_angularPositionInterpolant = (double)fVar10;
            }
        }
        bVar4 = m_pLookatManager->operator_cast_to_bool();
        if ((bVar4) && ((bVar1 & 32) != 0)) {
            plVar6 = (long*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)m_pLookatManager);
            (**(code**)(*plVar6 + 112))(plVar6, param_1, &field_144);
        }
        bVar4 = m_positionManager->operator_cast_to_bool();
        if ((bVar4) && ((bVar1 & 64) != 0)) {
            plVar6 = (long*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)m_positionManager);
            (**(code**)(*plVar6 + 112))(plVar6, param_1, &field_144);
        }
        lVar7 = param_1->size();
        if (lVar7 - local_80 != (ulong)param_2) {
            uVar8 = logger::default_logger();
            logger::Logger::Log(
                uVar8, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
                1128, "%s: Read incorrect number of bytes.", "ProcessServerUpdate");
        }
    }

    // 0x100632e50, 224 bytes, placed by class name
    // Camera::SetOrientationOffset(math::QuaternionT<double> const&, int, int)
    void Camera::SetOrientationOffset(QuaternionT* param_1, int param_2, int param_3) {
        char cVar1;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        PositionEntity* this_01;
        undefined8 uVar2;
        undefined8 uVar3;
        char* pcVar4;

        cVar1 = ManagersReady(this);
        if (cVar1 == '\0') {
            uVar2 = logger::default_logger();
            pcVar4 = "%s managers not ready";
            uVar3 = 1152;
        } else {
            cVar1 = IsClientControlled(this);
            if (cVar1 != '\0') {
                if (m_positionMode == 1) {
                    this_00 =
                        (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*(code*)field_0[25])(this);
                    this_01 =
                        (PositionEntity*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                            this_00);
                    this_01->SetOrientationOffset(param_1, param_2, param_3);
                    return;
                }
                return;
            }
            uVar2 = logger::default_logger();
            pcVar4 = "%s camera not under client control";
            uVar3 = 1157;
        }
        logger::Logger::Log(
            uVar2, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
            uVar3, pcVar4, "SetOrientationOffset");
    }

    // 0x100632f60, 128 bytes, placed by class name
    // Camera::UpdatePositionAndLookAtEntities()
    void Camera::UpdatePositionAndLookAtEntities() {
        LookatEntity* this_00;
        PositionEntity* this_01;
        bool bVar1;

        if (m_lookatMode == 1) {
            bVar1 = m_pLookatManager->operator_cast_to_bool();
            if (bVar1) {
                this_00 = (LookatEntity*)m_pLookatManager->end();
                this_00->UpdateLookAtEntity((function*)&field_144);
            }
        }
        if (m_positionMode == 1) {
            bVar1 = m_positionManager->operator_cast_to_bool();
            if (bVar1) {
                this_01 = (PositionEntity*)m_positionManager->end();
                this_01->UpdatePositionEntity((function*)&field_144);
            }
        }
    }

    // 0x100632fe0, 288 bytes, placed by class name
    // Camera::SetPositionEntity(shared_ptr<Entity> const&, int, int, int, int, int, bool, int, int)
    void Camera::SetPositionEntity(shared_ptr* param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                   bool param_7, int param_8, int param_9) {
        CommandLine* this_00;
        PositionEntity* this_01;
        QuaternionT<double> local_78[32];
        Vector3T<double> local_58[24];
        shared_ptr local_40;

        math::Vector3T<double>::Vector3T(local_58, (double)param_2, (double)param_3, (double)param_4);
        math::QuaternionT<double>::QuaternionT(local_78);
        CameraHelpers::JagexAnglesToQuaternion((QuaternionT*)local_78, param_5, param_6, 0);
        if (m_positionMode != 1) {
            m_positionMode = 1;
            make_shared<PositionEntity>((jag*)&local_40);
            shared_ptr<IPositionManager>::operator=((shared_ptr<IPositionManager>*)m_positionManager, &local_40);
            local_40.~shared_ptr();
        }
        this_00 =
            (CommandLine*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)m_positionManager);
        if (this_00->GetPos() != 1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_positionManager->GetMode() == PositionMode::ENTITY",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
                1196, (char*)0);
        }
        this_01 = (PositionEntity*)m_positionManager->end();
        this_01->SetPositionEntity(param_1, local_58, local_78, param_7, param_8, param_9, param_5, param_6);
    }

    // 0x100633100, 224 bytes, placed by class name
    // Camera::SetLookatEntity(shared_ptr<Entity> const&, int, int, int, bool)
    void Camera::SetLookatEntity(shared_ptr* param_1, int param_2, int param_3, int param_4, bool param_5) {
        CommandLine* this_00;
        LookatEntity* this_01;
        Vector3T<double> local_50[24];
        shared_ptr local_38;

        math::Vector3T<double>::Vector3T(local_50, (double)param_2, (double)param_3, (double)param_4);
        if (m_lookatMode != 1) {
            m_lookatMode = 1;
            make_shared<LookatEntity>((jag*)&local_38);
            shared_ptr<ILookatManager>::operator=((shared_ptr<ILookatManager>*)m_pLookatManager, &local_38);
            local_38.~shared_ptr();
        }
        this_00 = (CommandLine*)shared_ptr<ILookatManager>::operator->((shared_ptr<ILookatManager>*)m_pLookatManager);
        if (this_00->GetPos() != 1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_lookatManager->GetMode() == LookatMode::ENTITY",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/Camera.cpp",
                1211, (char*)0);
        }
        this_01 = (LookatEntity*)m_pLookatManager->end();
        this_01->SetLookatEntity(param_1, local_50, param_5);
    }

    // 0x1006331e0, 128 bytes, placed by class name
    // Camera::TimedMovement(math::Vector3T<double> const&, math::Vector3T<double> const&, unsigned long long, int)
    void Camera::TimedMovement(Vector3T* param_1, Vector3T* param_2, ulonglong param_3, int param_4) {
        uint uVar1;

        math::Vector3T<double>::operator=((Vector3T<double>*)field_576, param_1);
        math::Vector3T<double>::operator=((Vector3T<double>*)field_600, param_2);
        field_560 = param_3;
        field_568 = param_3;
        field_545 = 1;
        uVar1 = 2000;
        if (param_4 != -1) {
            uVar1 = param_4;
        }
        field_548 = uVar1;
        field_552 = uVar1;
        RemoveAllEffects(this);
    }

    // 0x100633280, 32 bytes, placed by class name
    // Camera::SetFieldOfView(float, float)
    void Camera::SetFieldOfView(float param_1, float param_2) {
        m_fieldOfView = param_1;
        field_516 = param_2;
    }

    // 0x1006332a0, 32 bytes, placed by class name
    // Camera::SetAspectRatio(float)
    void Camera::SetAspectRatio(float param_1) {
        m_aspectRatio = param_1;
        UpdateFOVScaling(this);
    }

    // 0x1006332c0, 64 bytes, placed by class name
    // Camera::UpdateFOVScaling()
    void Camera::UpdateFOVScaling() {
        field_524 = (float)eastl::max_alt(1.0, m_aspectRatio * 0.5625);
    }

    // 0x100633300, 64 bytes, placed by class name
    // Camera::GetVerticalFOV() const
    double Camera::GetVerticalFOV() {
        CommandLine* this_00;
        int iVar1;
        float fVar2;

        this_00 =
            (CommandLine*)shared_ptr<IPositionManager>::operator->((shared_ptr<IPositionManager>*)m_positionManager);
        iVar1 = this_00->GetPos();
        fVar2 = m_fieldOfView;
        if (iVar1 == 1) {
            fVar2 = fVar2 / field_524;
        }
        return (double)fVar2;
    }

    // 0x100633360, 32 bytes, placed by class name
    // Camera::GetAspectRatio() const
    double Camera::GetAspectRatio() {
        return (double)m_aspectRatio;
    }

    // 0x1006422c0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.32
    void ___cxx_global_var_init_32() {
        new (&Camera::infiniteAcceleration) math::Vector3T<double>(INFINITY, 0.0, 0.0);
    }

} // namespace jag::game

namespace jag {
    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    Camera::GetProjectionMode() const;

    // 0x10005fc30: the linker folded this into oldscape::widgets::Widget::GetBounds() const, which has identical code
    Camera::GetRot() const;

    // 0x10005fd90: the linker folded this into oldscape::widgets::Widget::SetBackgroundColour(unsigned int), which has identical code
    Camera::SetProjectionMode(ProjectionMode);

    // 0x1000605a0: the linker folded this into oldscape::widgets::Widget::GetContentBounds() const, which has identical code
    ColourHSL Camera::GetPos() const;

    // 0x1000641f0: the linker folded this into graphics::SunlightOptions::GetSunElevation() const, which has identical code
    Camera::GetVerticalFov() const;

    // 0x100064210: the linker folded this into graphics::SunlightOptions::GetSunAngle() const, which has identical code
    float Camera::GetAspect() const;

    // 0x100064240: the linker folded this into graphics::SunlightOptions::GetSunIntensity() const, which has identical code
    float Camera::GetTopClip() const;

    // 0x1003e9e60: the linker folded this into FacingController::SetTurnSpeedMultiplier(float), which has identical code
    Camera::SetVerticalFov(float);

    // 0x10048fc90: the linker folded this into game::EnvLightingSettings::GetContrast() const, which has identical code
    Camera::GetLeftClip() const;

    // 0x10048fca0: the linker folded this into game::EnvLightingSettings::GetSunlightShadowStrength() const, which has identical code
    float Camera::GetNearClip() const;

    // 0x10048fce0: the linker folded this into game::EnvLightingSettings::GetSpecularHorzOcclusionScale() const, which has identical code
    float Camera::GetBottomClip() const;

    // 0x100490070: the linker folded this into game::EnvFogSettings::GetFogAngleOffset() const, which has identical code
    Camera::GetRightClip() const;

    // 0x1007dda80: the linker folded this into graphics::GeometryBatch::GetVertexScale() const, which has identical code
    float Camera::GetFarClip() const;

} // namespace jag

namespace jag::graphics {
    // 0x100631ab0: the linker folded this into game::LinearMovement::IsModeBasic(game::LinearMovement::Mode), which has identical code
    IsShadowPass(RenderPassType);

} // namespace jag::graphics
