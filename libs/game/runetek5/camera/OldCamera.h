// libs/game/runetek5/camera/OldCamera.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class OldCamera {
    public:
        int GetCamHeight() const;
        int GetCamZoom() const;
        OldCamera(std::function<shared_ptr<Entity>(CameraTrackableType, int)> const&);
        double GetVerticalFOV() const;
        double GetAspectRatio() const;
        void ClampCinematicXAngle(LookatData&, PositionData&);
        void UpdateLookAt(unsigned long long, float, math::QuaternionT<double> const&);
        void UpdatePosition(unsigned long long, float, HeightMap const*, LinkMap const*,
                            math::QuaternionT<double> const&, int, int);
        void DoRotationUpdate(unsigned long long);
        void MoveTo(int, int, int, int, int, bool, math::Vector3T<double> const&);
        void LookAt(int, int, int, int, int, bool, math::Vector3T<double> const&);
        void SmoothReset(shared_ptr<Entity> const&, unsigned long long);
        void SetGradientParametricSplines(BSplineCubic const&, float, float, BSplineCubic const&, float, float);
        void Shake(camera::ShakeMode, int, int, int, int);
        void StopShake();
        void AlterRotationSpeed(bool, bool);
        void TrackPlayer(shared_ptr<Entity> const&, bool);
        void TrackEntity(shared_ptr<Entity> const&, unsigned long long);
        void SetFOVClamping(float, float, float, float);
        void UpdateFOV(int, int);
        void ResetRotation();
        void Ready() const;
        ~OldCamera();
        int GetCameraMode() const;
        void SetCameraMode(CameraMode);
        HasPositionSplineFinished();
        void SetCamHeight(int);
        void SetCamZoom(int);
        void SetCamZoomScales(int, int);
        int GetCamZoomScaleSmall() const;
        int GetCamZoomScaleBig() const;
        void SetVerticalFOV(float, float);
        float GetVerticalFOVSmall() const;
        float GetVerticalFOVBig() const;
        GetClampedSceneSize() const;
        void IncreaseXAngleSpeed();
        void DecreaseXAngleSpeed();
        void IncreaseYAngleSpeed();
        void DecreaseYAngleSpeed();

        // data members, from how the methods use this: 904 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[184];
        byte field_192; // offset 192
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
        double field_304; // offset 304
        double field_312; // offset 312
        uint field_320;   // offset 320
        char _unknown_324[4];
        double field_328;     // offset 328
        int field_336;        // offset 336
        int field_340;        // offset 340
        undefined4 field_344; // offset 344
        char _unknown_348[4];
        AABB field_352;       // offset 352
        AABB field_376;       // offset 376
        undefined8 field_400; // offset 400
        undefined8 field_408; // offset 408
        undefined8 field_416; // offset 416
        undefined8 field_424; // offset 424
        undefined8 field_432; // offset 432
        undefined8 field_440; // offset 440
        AABB field_448;       // offset 448
        AABB field_472;       // offset 472
        double field_496;     // offset 496
        double field_504;     // offset 504
        float field_512;      // offset 512
        float field_516;      // offset 516
        float field_520;      // offset 520
        float field_524;      // offset 524
        double field_528;     // offset 528
        double field_536;     // offset 536
        undefined1 field_544; // offset 544
        undefined1 field_545; // offset 545
        char _unknown_546[2];
        uint field_548; // offset 548
        uint field_552; // offset 552
        char _unknown_556[4];
        ulonglong field_560; // offset 560
        ulonglong field_568; // offset 568
        AABB field_576;      // offset 576
        AABB field_600;      // offset 600
        int m_cameraMode;    // offset 624
        char _unknown_628[4];
        int field_632; // offset 632
        char _unknown_636[4];
        int field_640; // offset 640
        char _unknown_644[4];
        shared_ptr field_648; // offset 648
        shared_ptr field_664; // offset 664
        undefined1 field_680; // offset 680
        char _unknown_681[7];
        double field_688; // offset 688
        double field_696; // offset 696
        char field_704;   // offset 704
        char field_705;   // offset 705
        char _unknown_706[2];
        int m_camHeight; // offset 708
        int m_camZoom;   // offset 712
        char _unknown_716[84];
        int m_camZoomScales;    // offset 800
        int m_camZoomScaleBig;  // offset 804
        float m_verticalFOV;    // offset 808
        float m_verticalFOVBig; // offset 812
        float field_816;        // offset 816
        float field_820;        // offset 820
        float field_824;        // offset 824
        float field_828;        // offset 828
        float field_832;        // offset 832
        float field_836;        // offset 836
        char _unknown_840[8];
        AABB field_848; // offset 848
        AABB field_872; // offset 872
        char _unknown_896[8];
    };

    // 0x100623060, 16 bytes, inline, placed by class name
    // OldCamera::Ready() const
    /* Camera::Ready() const */

    void Camera::Ready() {
        ManagersReady(this);
    }

    // 0x100623070, 32 bytes, complete-object destructor, inline, placed by class name
    // OldCamera::~OldCamera()
    void OldCamera::~OldCamera() {
        ~OldCamera(this);
    }

    // 0x100623090, 32 bytes, deleting destructor, inline, placed by class name
    // OldCamera::~OldCamera()
    void OldCamera::~OldCamera() {
        ~OldCamera(this);
        operator_delete(this);
    }

    // 0x1006230b0, 16 bytes, inline, placed by class name
    // OldCamera::GetCameraMode() const
    int OldCamera::GetCameraMode() {
        return m_cameraMode;
    }

    // 0x1006230c0, 16 bytes, inline, placed by class name
    // OldCamera::SetCameraMode(CameraMode)
    void OldCamera::SetCameraMode(int param_2) {
        m_cameraMode = param_2;
    }

    // 0x1006230d0, 32 bytes, inline, placed by class name
    // OldCamera::HasPositionSplineFinished()
    undefined1 OldCamera::HasPositionSplineFinished() {
        undefined1 uVar1;

        uVar1 = field_680;
        field_680 = 0;
        return uVar1;
    }

    // 0x1006230f0, 128 bytes, inline, placed by class name
    // OldCamera::SetCamHeight(int)
    void OldCamera::SetCamHeight(int param_1) {
        Vector3T<double> local_30[24];

        m_camHeight = param_1;
        math::Vector3T<double>::Vector3T(local_30, 0.0, (double)param_1, (double)m_camZoom);
        math::Vector3T<double>::operator=((Vector3T<double>*)&field_744, (Vector3T*)local_30);
        math::Vector3T<double>::Vector3T(local_30, 0.0, (double)m_camHeight, 0.0);
        math::Vector3T<double>::operator=((Vector3T<double>*)&field_720, (Vector3T*)local_30);
    }

    // 0x100623170, 80 bytes, inline, placed by class name
    // OldCamera::SetCamZoom(int)
    void OldCamera::SetCamZoom(int param_1) {
        Vector3T<double> local_30[24];

        m_camZoom = param_1;
        math::Vector3T<double>::Vector3T(local_30, 0.0, (double)m_camHeight, (double)param_1);
        math::Vector3T<double>::operator=((Vector3T<double>*)&field_744, (Vector3T*)local_30);
    }

    // 0x1006231c0, 32 bytes, inline, placed by class name
    // OldCamera::SetCamZoomScales(int, int)
    void OldCamera::SetCamZoomScales(int param_1, int param_2) {
        m_camZoomScales = param_1;
        m_camZoomScaleBig = param_2;
    }

    // 0x1006231e0, 16 bytes, inline, placed by class name
    // OldCamera::GetCamZoomScaleSmall() const
    int OldCamera::GetCamZoomScaleSmall() {
        return m_camZoomScales;
    }

    // 0x1006231f0, 16 bytes, inline, placed by class name
    // OldCamera::GetCamZoomScaleBig() const
    int OldCamera::GetCamZoomScaleBig() {
        return m_camZoomScaleBig;
    }

    // 0x100623200, 32 bytes, inline, placed by class name
    // OldCamera::SetVerticalFOV(float, float)
    void OldCamera::SetVerticalFOV(float param_1, float param_2) {
        m_verticalFOV = param_1;
        m_verticalFOVBig = param_2;
    }

    // 0x100623220, 16 bytes, inline, placed by class name
    // OldCamera::GetVerticalFOVSmall() const
    float OldCamera::GetVerticalFOVSmall() {
        return m_verticalFOV;
    }

    // 0x100623230, 16 bytes, inline, placed by class name
    // OldCamera::GetVerticalFOVBig() const
    float OldCamera::GetVerticalFOVBig() {
        return m_verticalFOVBig;
    }

    // 0x100623240, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // OldCamera::GetClampedSceneSize() const
    /* graphics::Model::GetGeometryQuery() const */

    undefined1* graphics::Model::GetGeometryQuery() {
        return m_geometryQuery;
    }

    // 0x100623250, 32 bytes, inline, placed by class name
    // OldCamera::IncreaseXAngleSpeed()
    void OldCamera::IncreaseXAngleSpeed() {
        AlterRotationSpeed(this, true, true);
    }

    // 0x100623270, 32 bytes, inline, placed by class name
    // OldCamera::DecreaseXAngleSpeed()
    void OldCamera::DecreaseXAngleSpeed() {
        AlterRotationSpeed(this, true, false);
    }

    // 0x100623290, 32 bytes, inline, placed by class name
    // OldCamera::IncreaseYAngleSpeed()
    void OldCamera::IncreaseYAngleSpeed() {
        AlterRotationSpeed(this, false, true);
    }

    // 0x1006232b0, 16 bytes, inline, placed by class name
    // OldCamera::DecreaseYAngleSpeed()
    void OldCamera::DecreaseYAngleSpeed() {
        AlterRotationSpeed(this, false, false);
    }

    // 0x100623400, 96 bytes, base-object destructor, inline, placed by class name
    // OldCamera::~OldCamera()
    void OldCamera::~OldCamera() {
        undefined** ppuVar1;
        long* in_RSI;

        ppuVar1 = (undefined**)*in_RSI;
        field_0 = ppuVar1;
        *(long*)(field_208 + (long)(ppuVar1[-33] + -208)) = in_RSI[3];
        (&field_896)->~shared_ptr();
        field_664->~shared_ptr();
        field_648->~shared_ptr();
        ~Camera();
    }

} // namespace jag::game
