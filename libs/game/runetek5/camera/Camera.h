// libs/game/runetek5/camera/Camera.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class Camera {
    public:
        GetLinearPositionAcceleration() const;
        GetLookatManager() const;
        GetPositionManager() const;
        GetLinearPositionMaxSpeed() const;
        GetPositionMode() const;
        GetLinearLookatAcceleration() const;
        GetProjectionMode() const;
        GetLinearLookatMaxSpeed() const;
        DoingTimedMove() const;
        GetLookatMode() const;
        void SetLookatManager(shared_ptr<ILookatManager>&);
        void SetPositionManager(shared_ptr<IPositionManager>&);
        void Ready() const;
        Camera(std::function<shared_ptr<Entity>(CameraTrackableType, int)> const&);
        ManagersReady() const;
        CamLocked() const;
        void LockCamera();
        void UnlockCamera();
        void SetLookatMode(LookatMode, bool);
        void SetPositionMode(PositionMode, bool);
        void SetNearPlane(int);
        double GetFarPlane(World const*) const;
        void GetOrientationQuat(unsigned long long, math::QuaternionT<double>&);
        void UpdateLookAt(unsigned long long, float, math::QuaternionT<double> const&);
        void UpdatePosition(unsigned long long, float, HeightMap const*, LinkMap const*,
                            math::QuaternionT<double> const&, int, int);
        double GetAngularPositionInterpolant() const;
        void Update(float, HeightMap const*, LinkMap const*, int, int);
        GetViewVector(math::Vector3T<double>&) const;
        void GetPosition(math::Vector3T<double>&, unsigned long long) const;
        ulong GetCameraPosition(math::Vector3T<double>&) const;
        GetCameraPosition(math::Vector3T<float>&) const;
        ulong GetCameraCurrentPosition(math::Vector3T<double>&) const;
        ulong GetCameraCurrentPosition(math::Vector3T<float>&) const;
        ulong GetCameraPositionOffset(math::Vector3T<double>&) const;
        ulong GetCameraPositionOffset(math::Vector3T<float>&) const;
        ulong GetCameraLookat(math::Vector3T<double>&) const;
        ulong GetCameraLookat(math::Vector3T<float>&) const;
        ulong GetCameraCurrentLookat(math::Vector3T<double>&) const;
        ulong GetCameraCurrentLookat(math::Vector3T<float>&) const;
        GetCameraMatrix(math::Matrix44T<float>&) const;
        void UpdateOrientation(math::Matrix44T<float>&, unsigned long long) const;
        void DrawDebugCameraBits() const;
        GetOrientationOffset(math::QuaternionT<double>&, math::Point<int>&) const;
        GetOrientationOffset(math::QuaternionT<double>&) const;
        ulong GetPositionFine(CoordFine&) const;
        ulong GetLookatFine(CoordFine&) const;
        GetFollowAngle(double&, math::Point<int>&) const;
        ulong GetYAngle() const;
        void SetAngularLookatInterpolant(double);
        void SetAngularPositionInterpolant(double);
        void SetLinearMovementMode(LinearMovement::Mode);
        void SetLinearLookatAcceleration(math::Vector3T<double> const&);
        void SetLinearPositionAcceleration(math::Vector3T<double> const&);
        void SetLinearLookatMaxSpeed(math::Vector3T<double> const&);
        void SetLinearPositionMaxSpeed(math::Vector3T<double> const&);
        void SetSpringProperties(math::Vector3T<double> const&, double);
        void SetLookatSpringProperties(math::Vector3T<double> const&, double);
        void SetPositionSpringProperties(math::Vector3T<double> const&, double);
        void SetLookatPoint(CoordFine const&);
        void SetPositionPoint(CoordFine const&);
        void SetPositionPointCollision(bool);
        void SetLookatOrientationVector(math::Vector3T<float>);
        void SetLookatOrientationXRotation(int);
        void SetLookatOrientationYRotation(int);
        void SetLookatOrientationXMovement(float);
        void SetLookatOrientationZMovement(float);
        void SetMaxDistanceClamping(math::Vector3T<float> const&, int, int, int, int, int, int);
        void AddEffect(shared_ptr<ICameraEffect> const&);
        void RemoveEffect(int);
        GetEffect(int);
        void ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, unsigned int);
        void SetOrientationOffset(math::QuaternionT<double> const&, int, int);
        byte IsClientControlled() const;
        void UpdatePositionAndLookAtEntities();
        void SetPositionEntity(shared_ptr<Entity> const&, int, int, int, int, int, bool, int, int);
        void SetLookatEntity(shared_ptr<Entity> const&, int, int, int, bool);
        void TimedMovement(math::Vector3T<double> const&, math::Vector3T<double> const&, unsigned long long, int);
        void RemoveAllEffects();
        void SetFieldOfView(float, float);
        void SetAspectRatio(float);
        void UpdateFOVScaling();
        double GetVerticalFOV() const;
        double GetAspectRatio() const;
        double GetNearPlane() const;
        void SetFarPlaneDirty();
        ~Camera();
        static /* 1 bytes */ m_debugCameraEffects;
        static /* 7 bytes */ m_freezeCameraUpdate;
        static math::Vector3T<double> /* 24 bytes */ infiniteAcceleration; // = Vector3T<double>(INFINITY, 0.0, 0.0)

        // data members, from how the methods use this: 624 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[136];
        undefined1 field_144; // offset 144
        char _unknown_145[47];
        byte m_clientControlled; // offset 192
        char _unknown_193[3];
        uint field_196; // offset 196
        int field_200;  // offset 200
        char _unknown_204[4];
        shared_ptr field_208; // offset 208
        int field_224;        // offset 224
        char _unknown_228[4];
        shared_ptr field_232; // offset 232
        char _unknown_248[40];
        undefined4 field_288; // offset 288
        bool field_292;       // offset 292
        bool field_293;       // offset 293
        char _unknown_294[2];
        uint field_296; // offset 296
        char _unknown_300[4];
        double field_304;                    // offset 304
        double m_angularPositionInterpolant; // offset 312
        uint field_320;                      // offset 320
        char _unknown_324[4];
        double field_328;     // offset 328
        int field_336;        // offset 336
        int field_340;        // offset 340
        undefined4 field_344; // offset 344
        char _unknown_348[4];
        AABB field_352;                        // offset 352
        AABB m_linearPositionMaxSpeed;         // offset 376
        undefined8 m_linearLookatAcceleration; // offset 400
        undefined8 field_408;                  // offset 408
        undefined8 field_416;                  // offset 416
        undefined8 field_424;                  // offset 424
        undefined8 field_432;                  // offset 432
        undefined8 field_440;                  // offset 440
        AABB field_448;                        // offset 448
        AABB field_472;                        // offset 472
        double field_496;                      // offset 496
        double field_504;                      // offset 504
        float m_fieldOfView;                   // offset 512
        float field_516;                       // offset 516
        float m_aspectRatio;                   // offset 520
        float field_524;                       // offset 524
        double m_nearPlane;                    // offset 528
        double field_536;                      // offset 536
        undefined1 field_544;                  // offset 544
        undefined1 field_545;                  // offset 545
        char _unknown_546[2];
        uint field_548; // offset 548
        uint field_552; // offset 552
        char _unknown_556[4];
        ulonglong field_560; // offset 560
        ulonglong field_568; // offset 568
        AABB field_576;      // offset 576
        AABB field_600;      // offset 600
    };

    // 0x100620820, 16 bytes, inline, placed by class name and debug map
    // Camera::DoingTimedMove() const
    undefined1 Camera::DoingTimedMove() {
        return field_545;
    }

    // 0x1006211f0, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Camera::GetLookatMode() const
    /* hal::audio::AudioBuffer::SampleRate() const */

    int hal::audio::AudioBuffer::SampleRate() {
        return field_200;
    }

    // 0x100621cb0, 32 bytes, inline, placed by class name
    // Camera::SetLookatManager(shared_ptr<ILookatManager>&)
    void Camera::SetLookatManager(shared_ptr* param_1) {
        shared_ptr<ILookatManager>::operator=((shared_ptr<ILookatManager>*)field_208, param_1);
    }

    // 0x100621cd0, 32 bytes, inline, placed by class name
    // Camera::SetPositionManager(shared_ptr<IPositionManager>&)
    void Camera::SetPositionManager(shared_ptr* param_1) {
        shared_ptr<IPositionManager>::operator=((shared_ptr<IPositionManager>*)field_232, param_1);
    }

    // 0x100630050, 16 bytes, inline, placed by class name
    // Camera::GetAngularPositionInterpolant() const
    double Camera::GetAngularPositionInterpolant() {
        return m_angularPositionInterpolant;
    }

    // 0x100632f30, 16 bytes, inline, placed by class name
    // Camera::IsClientControlled() const
    byte Camera::IsClientControlled() {
        return m_clientControlled;
    }

    // 0x100633260, 32 bytes, inline, placed by class name
    // Camera::RemoveAllEffects()
    void Camera::RemoveAllEffects() {
        (&field_248)->clear();
    }

    // 0x100633440, 16 bytes, inline, placed by class name
    // Camera::GetNearPlane() const
    double Camera::GetNearPlane() {
        return m_nearPlane;
    }

    // 0x100633450, 16 bytes, inline, placed by class name
    // Camera::SetFarPlaneDirty()
    void Camera::SetFarPlaneDirty() {
        field_544 = 1;
    }

    // 0x100633460, 32 bytes, complete-object destructor, inline, placed by class name
    // Camera::~Camera()
    void Camera::~Camera() {
        ~Camera(this);
    }

    // 0x100633480, 32 bytes, deleting destructor, inline, placed by class name
    // Camera::~Camera()
    void Camera::~Camera() {
        ~Camera(this);
        operator_delete(this);
    }

    // 0x1006339f0, 96 bytes, base-object destructor, inline, placed by class name
    // Camera::~Camera()
    void Camera::~Camera() {
        undefined** ppuVar1;
        long* in_RSI;

        ppuVar1 = (undefined**)*in_RSI;
        field_0 = ppuVar1;
        *(long*)(field_208 + (long)(ppuVar1[-33] + -208)) = in_RSI[1];
        (&field_248)->~vector_map();
        field_232->~shared_ptr();
        field_208->~shared_ptr();
        std::function<shared_ptr<Entity>(CameraTrackableType, int)>::~function(
            (function<shared_ptr<Entity>(CameraTrackableType, int)>*)&field_144);
    }

} // namespace jag::game

namespace jag {
    class Camera {
    public:
        // virtual methods in vtable order
        virtual ~Camera();
        GetProjectionMode() const;
        GetRot() const;
        SetProjectionMode(ProjectionMode);
        GetPos() const;
        GetVerticalFov() const;
        GetAspect() const;
        GetTopClip() const;
        void SetTopClip(float);
        SetBottomClip(float);
        SetLeftClip(float);
        SetRightClip(float);
        void SetVerticalFov(float);
        void SetAspect(float);
        void SetNearClip(float);
        void SetFarClip(float);
        void SetPos(math::Vector3T<float> const&);
        void SetRot(math::QuaternionT<float> const&);
        GetLeftClip() const;
        GetNearClip() const;
        GetBottomClip() const;
        GetRightClip() const;
        float GetFarClip() const;
        Camera(ProjectionMode);

        // data members, from how the methods use this: 76 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined4 field_8;  // offset 8
        float m_verticalFov; // offset 12
        float m_aspect;      // offset 16
        undefined8 field_20; // offset 20
        char _unknown_28[4];
        float m_topClip;  // offset 32
        float m_nearClip; // offset 36
        float m_farClip;  // offset 40
        char _unknown_44[16];
        ColourHSL m_pos; // offset 60
    };

    // 0x1003c0090, 16 bytes, inline, placed by class name
    // Camera::SetTopClip(float)
    void Camera::SetTopClip(float param_1) {
        m_topClip = param_1;
    }

    // 0x1003c00a0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Camera::SetBottomClip(float)
    /* OpenGLView::SetMainRenderTargetScaleFactor(float) */

    void OpenGLView::SetMainRenderTargetScaleFactor(float param_1) {
        m_mainRenderTargetScaleFactor = param_1;
    }

    // 0x1003c00b0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Camera::SetLeftClip(float)
    /* game::LookatOrientation::SetOrientationXMovement(float) */

    void game::LookatOrientation::SetOrientationXMovement(float param_1) {
        m_orientationXMovement = param_1;
    }

    // 0x1003c00c0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Camera::SetRightClip(float)
    /* game::LookatOrientation::SetOrientationZMovement(float) */

    void game::LookatOrientation::SetOrientationZMovement(float param_1) {
        m_orientationZMovement = param_1;
    }

    // 0x10047de70, 16 bytes, inline, placed by class name
    // Camera::SetNearClip(float)
    void Camera::SetNearClip(float param_1) {
        m_nearClip = param_1;
    }

    // 0x10047de80, 16 bytes, inline, placed by class name
    // Camera::SetFarClip(float)
    void Camera::SetFarClip(float param_1) {
        m_farClip = param_1;
    }

    // 0x10047de90, 16 bytes, inline, placed by class name
    // Camera::SetPos(math::Vector3T<float> const&)
    void Camera::SetPos(Vector3T* param_1) {
        (m_pos, param_1)->SetXYZ();
    }

    // 0x10047dea0, 16 bytes, inline, placed by class name
    // Camera::SetRot(math::QuaternionT<float> const&)
    void Camera::SetRot(QuaternionT* param_1) {
        (&field_44, (Vector4T*)param_1)->Set();
    }

} // namespace jag

namespace jag::game::camera {
    // 0x10061db70, 48 bytes, inline, placed by class name
    // ShakeModeString(ShakeMode)
    char* ShakeModeString(uint param_1) {
        if (param_1 < 6) {
            return (&PTR_s_POSITION_X_100f0c400)[(int)param_1];
        }
        return "Unknown";
    }

} // namespace jag::game::camera
