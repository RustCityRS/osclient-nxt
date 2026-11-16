// libs/game/runetek5/camera/OldCamera.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class OldCamera {
    public:
        int GetCamHeight() const;
        int GetCamZoom() const;
        OldCamera(const std::function<shared_ptr<Entity>(CameraTrackableType, int)>& callback);
        double GetVerticalFOV() const;
        double GetAspectRatio() const;
        void ClampCinematicXAngle(LookatData& lookatData, PositionData& positionData);
        void UpdateLookAt(unsigned long long arg1, float arg2, const math::QuaternionT<double>& quaternion);
        void UpdatePosition(unsigned long long arg1, float arg2, const HeightMap* heightMap, const LinkMap* linkMap,
                            const math::QuaternionT<double>& quaternion, int arg6, int arg7);
        void DoRotationUpdate(unsigned long long arg1);
        void MoveTo(int arg1, int arg2, int arg3, int arg4, int arg5, bool arg6, const math::Vector3T<double>& vector3);
        void LookAt(int arg1, int arg2, int arg3, int arg4, int arg5, bool arg6, const math::Vector3T<double>& vector3);
        void SmoothReset(const shared_ptr<Entity>& entity, unsigned long long arg2);
        void SetGradientParametricSplines(const BSplineCubic& bSplineCubic1, float arg2, float arg3,
                                          const BSplineCubic& bSplineCubic2, float arg5, float arg6);
        void Shake(camera::ShakeMode shakeMode, int arg2, int arg3, int arg4, int arg5);
        void StopShake();
        void AlterRotationSpeed(bool arg1, bool arg2);
        void TrackPlayer(const shared_ptr<Entity>& entity, bool arg2);
        void TrackEntity(const shared_ptr<Entity>& entity, unsigned long long arg2);
        void SetFOVClamping(float arg1, float arg2, float arg3, float arg4);
        void UpdateFOV(int arg1, int arg2);
        void ResetRotation();
        void Ready() const;
        ~OldCamera();
        CameraMode GetCameraMode() const;
        void SetCameraMode(CameraMode cameraMode);
        bool HasPositionSplineFinished();
        void SetCamHeight(int arg1);
        void SetCamZoom(int arg1);
        void SetCamZoomScales(int arg1, int arg2);
        int GetCamZoomScaleSmall() const;
        int GetCamZoomScaleBig() const;
        void SetVerticalFOV(float arg1, float arg2);
        float GetVerticalFOVSmall() const;
        float GetVerticalFOVBig() const;
        uint8_t* GetClampedSceneSize() const;
        void IncreaseXAngleSpeed();
        void DecreaseXAngleSpeed();
        void IncreaseYAngleSpeed();
        void DecreaseYAngleSpeed();

    private:
        uint8_t _unknown_8[184];
        uint8_t field_192;
        uint8_t _unknown_193[3];
        unsigned int field_196;
        LookatMode field_200;
        uint8_t _unknown_204[4];
        shared_ptr field_208;
        PositionMode field_224;
        uint8_t _unknown_228[4];
        shared_ptr field_232;
        uint8_t _unknown_248[40];
        uint32_t field_288;
        bool field_292;
        bool field_293;
        uint8_t _unknown_294[2];
        Mode field_296;
        uint8_t _unknown_300[4];
        double field_304;
        double field_312;
        unsigned int field_320;
        uint8_t _unknown_324[4];
        double field_328;
        unsigned int field_336;
        int field_340;
        uint32_t field_344;
        uint8_t _unknown_348[4];
        AABB field_352;
        AABB field_376;
        uint64_t field_400;
        uint64_t field_408;
        uint64_t field_416;
        uint64_t field_424;
        uint64_t field_432;
        uint64_t field_440;
        AABB field_448;
        AABB field_472;
        double field_496;
        double field_504;
        float field_512;
        float field_516;
        float field_520;
        float field_524;
        double field_528;
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
        CameraMode m_cameraMode;
        int field_628;
        int field_632;
        int field_636;
        int field_640;
        uint8_t _unknown_644[4];
        shared_ptr field_648;
        shared_ptr field_664;
        uint8_t field_680;
        uint8_t _unknown_681[7];
        double field_688;
        double field_696;
        char field_704;
        char field_705;
        uint8_t _unknown_706[2];
        int m_camHeight;
        int m_camZoom;
        uint8_t _unknown_716[28];
        uint8_t** field_744;
        NXTRenderer* field_752;
        uint64_t field_760;
        uint8_t _unknown_768[32];
        int m_camZoomScaleSmall;
        int m_camZoomScaleBig;
        float m_verticalFOVSmall;
        float m_verticalFOVBig;
        float field_816;
        float field_820;
        float field_824;
        float field_828;
        float field_832;
        float field_836;
        uint8_t _unknown_840[8];
        AABB field_848;
        AABB field_872;
        uint8_t _unknown_896[8];
    };

    // 0x100623060
    void OldCamera::Ready() const {
        ManagersReady(this);
    }

    // 0x1006230b0
    CameraMode OldCamera::GetCameraMode() const {
        return m_cameraMode;
    }

    // 0x1006230c0
    void OldCamera::SetCameraMode(CameraMode cameraMode) {
        m_cameraMode = cameraMode;
    }

    // 0x1006230d0
    bool OldCamera::HasPositionSplineFinished() {
        uint8_t uVar1 = field_680;
        field_680 = 0;
        return uVar1;
    }

    // 0x1006230f0
    void OldCamera::SetCamHeight(int arg1) {

        m_camHeight = arg1;
        Vector3T<double> local_30(0.0, (double)arg1, (double)m_camZoom);
        field_744 = local_30;
        local_30 = math::Vector3T(0.0, (double)m_camHeight, 0.0);
        field_720 = local_30;
    }

    // 0x100623170
    void OldCamera::SetCamZoom(int arg1) {

        m_camZoom = arg1;
        Vector3T<double> local_30(0.0, (double)m_camHeight, (double)arg1);
        field_744 = local_30;
    }

    // 0x1006231c0
    void OldCamera::SetCamZoomScales(int arg1, int arg2) {
        m_camZoomScaleSmall = arg1;
        m_camZoomScaleBig = arg2;
    }

    // 0x1006231e0
    int OldCamera::GetCamZoomScaleSmall() const {
        return m_camZoomScaleSmall;
    }

    // 0x1006231f0
    int OldCamera::GetCamZoomScaleBig() const {
        return m_camZoomScaleBig;
    }

    // 0x100623200
    void OldCamera::SetVerticalFOV(float arg1, float arg2) {
        m_verticalFOVSmall = arg1;
        m_verticalFOVBig = arg2;
    }

    // 0x100623220
    float OldCamera::GetVerticalFOVSmall() const {
        return m_verticalFOVSmall;
    }

    // 0x100623230
    float OldCamera::GetVerticalFOVBig() const {
        return m_verticalFOVBig;
    }

    // 0x100623240
    uint8_t* OldCamera::GetClampedSceneSize() const {
        return m_geometryQuery;
    }

    // 0x100623250
    void OldCamera::IncreaseXAngleSpeed() {
        AlterRotationSpeed(true, true);
    }

    // 0x100623270
    void OldCamera::DecreaseXAngleSpeed() {
        AlterRotationSpeed(true, false);
    }

    // 0x100623290
    void OldCamera::IncreaseYAngleSpeed() {
        AlterRotationSpeed(false, true);
    }

    // 0x1006232b0
    void OldCamera::DecreaseYAngleSpeed() {
        AlterRotationSpeed(false, false);
    }

    // 0x100623400
    OldCamera::~OldCamera() {

        field_896.~shared_ptr();
        field_664->~shared_ptr();
        field_648->~shared_ptr();
    }

} // namespace jag::game
