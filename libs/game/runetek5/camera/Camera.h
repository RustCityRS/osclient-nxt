// libs/game/runetek5/camera/Camera.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class Camera {
    public:
        uint8_t* GetLinearPositionAcceleration() const;
        shared_ptr GetLookatManager() const;
        shared_ptr GetPositionManager() const;
        AABB GetLinearPositionMaxSpeed() const;
        PositionMode GetPositionMode() const;
        uint64_t* GetLinearLookatAcceleration() const;
        unsigned int GetProjectionMode() const;
        AABB GetLinearLookatMaxSpeed() const;
        uint8_t DoingTimedMove() const;
        LookatMode GetLookatMode() const;
        void SetLookatManager(shared_ptr<ILookatManager>& iLookatManager);
        void SetPositionManager(shared_ptr<IPositionManager>& iPositionManager);
        void Ready() const;
        Camera(const std::function<shared_ptr<Entity>(CameraTrackableType, int)>& callback);
        uint64_t ManagersReady() const;
        uint64_t CamLocked() const;
        void LockCamera();
        void UnlockCamera();
        void SetLookatMode(LookatMode lookatMode, bool arg2);
        void SetPositionMode(PositionMode positionMode, bool arg2);
        void SetNearPlane(int arg1);
        double GetFarPlane(const World* world) const;
        void GetOrientationQuat(unsigned long long arg1, math::QuaternionT<double>& quaternion);
        void UpdateLookAt(unsigned long long arg1, float arg2, const math::QuaternionT<double>& quaternion);
        void UpdatePosition(unsigned long long arg1, float arg2, const HeightMap* heightMap, const LinkMap* linkMap,
                            const math::QuaternionT<double>& quaternion, int arg6, int arg7);
        double GetAngularPositionInterpolant() const;
        void Update(float arg1, const HeightMap* heightMap, const LinkMap* linkMap, int arg4, int arg5);
        uint32_t GetViewVector(math::Vector3T<double>& vector3) const;
        void GetPosition(math::Vector3T<double>& vector3, unsigned long long arg2) const;
        unsigned long GetCameraPosition(math::Vector3T<double>& vector3) const;
        uint32_t GetCameraPosition(math::Vector3T<float>& vector3) const;
        unsigned long GetCameraCurrentPosition(math::Vector3T<double>& vector3) const;
        unsigned long GetCameraCurrentPosition(math::Vector3T<float>& vector3) const;
        unsigned long GetCameraPositionOffset(math::Vector3T<double>& vector3) const;
        unsigned long GetCameraPositionOffset(math::Vector3T<float>& vector3) const;
        unsigned long GetCameraLookat(math::Vector3T<double>& vector3) const;
        unsigned long GetCameraLookat(math::Vector3T<float>& vector3) const;
        unsigned long GetCameraCurrentLookat(math::Vector3T<double>& vector3) const;
        unsigned long GetCameraCurrentLookat(math::Vector3T<float>& vector3) const;
        uint32_t GetCameraMatrix(math::Matrix44T<float>& matrix44) const;
        void UpdateOrientation(math::Matrix44T<float>& matrix44, unsigned long long arg2) const;
        void DrawDebugCameraBits() const;
        uint64_t GetOrientationOffset(math::QuaternionT<double>& quaternion, math::Point<int>& point) const;
        uint64_t GetOrientationOffset(math::QuaternionT<double>& quaternion) const;
        unsigned long GetPositionFine(CoordFine& coordFine) const;
        unsigned long GetLookatFine(CoordFine& coordFine) const;
        uint32_t GetFollowAngle(double& arg1, math::Point<int>& point) const;
        unsigned long GetYAngle() const;
        void SetAngularLookatInterpolant(double arg1);
        void SetAngularPositionInterpolant(double arg1);
        void SetLinearMovementMode(LinearMovement::Mode mode);
        void SetLinearLookatAcceleration(const math::Vector3T<double>& vector3);
        void SetLinearPositionAcceleration(const math::Vector3T<double>& vector3);
        void SetLinearLookatMaxSpeed(const math::Vector3T<double>& vector3);
        void SetLinearPositionMaxSpeed(const math::Vector3T<double>& vector3);
        void SetSpringProperties(const math::Vector3T<double>& vector3, double arg2);
        void SetLookatSpringProperties(const math::Vector3T<double>& vector3, double arg2);
        void SetPositionSpringProperties(const math::Vector3T<double>& vector3, double arg2);
        void SetLookatPoint(const CoordFine& coordFine);
        void SetPositionPoint(const CoordFine& coordFine);
        void SetPositionPointCollision(bool arg1);
        void SetLookatOrientationVector(math::Vector3T<float> vector3);
        void SetLookatOrientationXRotation(int arg1);
        void SetLookatOrientationYRotation(int arg1);
        void SetLookatOrientationXMovement(float arg1);
        void SetLookatOrientationZMovement(float arg1);
        void SetMaxDistanceClamping(const math::Vector3T<float>& vector3, int arg2, int arg3, int arg4, int arg5,
                                    int arg6, int arg7);
        void AddEffect(const shared_ptr<ICameraEffect>& iCameraEffect);
        void RemoveEffect(int arg1);
        uint64_t GetEffect(int arg1);
        void ProcessServerUpdate(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        void SetOrientationOffset(const math::QuaternionT<double>& quaternion, int arg2, int arg3);
        bool IsClientControlled() const;
        void UpdatePositionAndLookAtEntities();
        void SetPositionEntity(const shared_ptr<Entity>& entity, int arg2, int arg3, int arg4, int arg5, int arg6,
                               bool arg7, int arg8, int arg9);
        void SetLookatEntity(const shared_ptr<Entity>& entity, int arg2, int arg3, int arg4, bool arg5);
        void TimedMovement(const math::Vector3T<double>& vector31, const math::Vector3T<double>& vector32,
                           unsigned long long arg3, int arg4);
        void RemoveAllEffects();
        void SetFieldOfView(float arg1, float arg2);
        void SetAspectRatio(float arg1);
        void UpdateFOVScaling();
        double GetVerticalFOV() const;
        double GetAspectRatio() const;
        double GetNearPlane() const;
        void SetFarPlaneDirty();
        ~Camera();
        static bool m_debugCameraEffects;
        static bool m_freezeCameraUpdate;
        static math::Vector3T<double> infiniteAcceleration; // = Vector3T<double>(INFINITY, 0.0, 0.0)

    private:
        uint8_t _unknown_8[136];
        uint8_t field_144;
        uint8_t _unknown_145[47];
        uint8_t m_clientControlled;
        uint8_t _unknown_193[3];
        unsigned int m_projectionMode;
        LookatMode m_lookatMode;
        uint8_t _unknown_204[4];
        shared_ptr m_pLookatManager;
        PositionMode m_positionMode;
        uint8_t _unknown_228[4];
        shared_ptr m_positionManager;
        int field_248;
        uint8_t _unknown_252[36];
        uint32_t field_288;
        bool field_292;
        bool field_293;
        uint8_t _unknown_294[2];
        Mode field_296;
        uint8_t _unknown_300[4];
        double field_304;
        double m_angularPositionInterpolant;
        unsigned int field_320;
        uint8_t _unknown_324[4];
        double field_328;
        unsigned int field_336;
        int field_340;
        uint32_t field_344;
        uint8_t _unknown_348[4];
        AABB m_linearLookatMaxSpeed;
        AABB m_linearPositionMaxSpeed;
        uint64_t m_linearLookatAcceleration;
        uint64_t field_408;
        uint64_t field_416;
        uint64_t m_linearPositionAcceleration;
        uint64_t field_432;
        uint64_t field_440;
        AABB field_448;
        AABB field_472;
        double field_496;
        double field_504;
        float m_fieldOfView;
        float field_516;
        float m_aspectRatio;
        float field_524;
        double m_nearPlane;
        double field_536;
        uint8_t field_544;
        uint8_t field_545;
        uint8_t _unknown_546[2];
        unsigned int field_548;
        unsigned int field_552;
        uint8_t _unknown_556[4];
        unsigned long long field_560;
        unsigned long long field_568;
        AABB field_576;
        AABB field_600;
    };

    // 0x100620820
    uint8_t Camera::DoingTimedMove() const {
        return field_545;
    }

    // 0x1006211f0
    LookatMode Camera::GetLookatMode() const {
        return field_200;
    }

    // 0x100621cb0
    void Camera::SetLookatManager(shared_ptr<ILookatManager>& iLookatManager) {
        *m_pLookatManager = iLookatManager;
    }

    // 0x100621cd0
    void Camera::SetPositionManager(shared_ptr<IPositionManager>& iPositionManager) {
        *m_positionManager = iPositionManager;
    }

    // 0x100630050
    double Camera::GetAngularPositionInterpolant() const {
        return m_angularPositionInterpolant;
    }

    // 0x100632f30
    bool Camera::IsClientControlled() const {
        return m_clientControlled;
    }

    // 0x100633260
    void Camera::RemoveAllEffects() {
        field_248.clear();
    }

    // 0x100633440
    double Camera::GetNearPlane() const {
        return m_nearPlane;
    }

    // 0x100633450
    void Camera::SetFarPlaneDirty() {
        field_544 = 1;
    }

    // 0x1006339f0
    Camera::~Camera() {

        m_positionManager->~shared_ptr();
        m_pLookatManager->~shared_ptr();
    }

} // namespace jag::game

namespace jag {
    class Camera {
    public:
        // virtual methods in vtable order
        virtual ~Camera();
        EnumOptionToggle GetProjectionMode() const;
        uint8_t* GetRot() const;
        void SetProjectionMode(ProjectionMode arg1);
        ColourHSL GetPos() const;
        uint32_t GetVerticalFov() const;
        float GetAspect() const;
        float GetTopClip() const;
        void SetTopClip(float arg1);
        void SetBottomClip(float arg1);
        void SetLeftClip(float arg1);
        void SetRightClip(float arg1);
        void SetVerticalFov(float arg1);
        void SetAspect(float arg1);
        void SetNearClip(float arg1);
        void SetFarClip(float arg1);
        void SetPos(const math::Vector3T<float>& vector3);
        void SetRot(const math::QuaternionT<float>& quaternion);
        float GetLeftClip() const;
        float GetNearClip() const;
        float GetBottomClip() const;
        uint32_t GetRightClip() const;
        float GetFarClip() const;
        Camera(ProjectionMode projectionMode);

    private:
        ProjectionMode m_projectionMode;
        float m_verticalFov;
        float m_aspect;
        uint64_t m_leftClip;
        float m_bottomClip;
        float m_topClip;
        float m_nearClip;
        float m_farClip;
        uint8_t _unknown_44[16];
        ColourHSL m_pos;
    };

    // 0x1003c0090
    void Camera::SetTopClip(float arg1) {
        m_topClip = arg1;
    }

    // 0x1003c00a0
    void Camera::SetBottomClip(float arg1) {
        m_mainRenderTargetScaleFactor = arg1;
    }

    // 0x1003c00b0
    void Camera::SetLeftClip(float arg1) {
        m_orientationXMovement = arg1;
    }

    // 0x1003c00c0
    void Camera::SetRightClip(float arg1) {
        m_orientationZMovement = arg1;
    }

    // 0x10047de70
    void Camera::SetNearClip(float arg1) {
        m_nearClip = arg1;
    }

    // 0x10047de80
    void Camera::SetFarClip(float arg1) {
        m_farClip = arg1;
    }

    // 0x10047de90
    void Camera::SetPos(const math::Vector3T<float>& vector3) {
        m_pos->SetXYZ(vector3);
    }

    // 0x10047dea0
    void Camera::SetRot(const math::QuaternionT<float>& quaternion) {
        field_44.Set(quaternion);
    }

} // namespace jag

namespace jag::game::camera {
    // 0x10061db70
    char* ShakeModeString(ShakeMode shakeMode) {
        if (shakeMode < 6) {
            return (&PTR_s_POSITION_X_100f0c400)[shakeMode];
        }
        return "Unknown";
    }

} // namespace jag::game::camera
