// libs/graphics/view/EulerCamera.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.view

namespace jag {
    class EulerCamera {
    public:
        // virtual methods in vtable order
        virtual ~EulerCamera();
        EulerCamera* TranslateXYZ(const math::Vector3T<float>& vector3);
        EulerCamera* YawPitchRoll(const math::Vector3T<float>& vector3);
        EulerCamera();
        EulerCamera* TranslateX(float arg1);
        EulerCamera* TranslateY(float arg1);
        EulerCamera* TranslateZ(float arg1);
        EulerCamera* Yaw(float arg1);
        EulerCamera* SetYaw(float arg1);
        EulerCamera* Pitch(float arg1);
        EulerCamera* SetPitch(float arg1);
        EulerCamera* Roll(float arg1);
        EulerCamera* SetRoll(float arg1);
        void GetCameraMatrix(math::Matrix44T<float>& matrix44);

    private:
        ProjectionMode field_8;
        float field_12;
        float field_16;
        uint64_t field_20;
        uint64_t field_28;
        float field_36;
        float field_40;
        uint8_t _unknown_44[28];
        ColourHSL field_72;
    };

    // 0x1009dbea0
    EulerCamera* EulerCamera::TranslateXYZ(const math::Vector3T<float>& vector3) {
        auto pfVar1 = vector3.SSOBeginPtr();
        TranslateX(*pfVar1);
        pfVar1 = (float*)vector3.y();
        TranslateY(*pfVar1);
        pfVar1 = (float*)vector3.second();
        TranslateZ(*pfVar1);
        return this;
    }

    // 0x1009dbf00
    EulerCamera* EulerCamera::YawPitchRoll(const math::Vector3T<float>& vector3) {
        EulerCamera* result;
        ReturnValue result;

        uint8_t* this_00 = field_72;
        *this_00 += vector3;
        auto pfVar1 = this_00->SSOBeginPtr();
        float arg1 = *pfVar1;
        pfVar1 = (float*)this_00->y();
        float arg2 = *pfVar1;
        pfVar1 = (float*)this_00->second();
        &result = (ReturnValue*)field_44.FromYawPitchRoll(arg1, arg2, *pfVar1);
        result = math::QuaternionT<float>::Normalise();
        return this;
    }

    // 0x1009dc2f0
    EulerCamera::EulerCamera() : Camera(0), field_72(0.0, 0.0, 0.0) {}

    // 0x1009dc340
    EulerCamera::~EulerCamera() {}

    // 0x1009dc370
    EulerCamera* EulerCamera::TranslateX(float arg1) {
        uint64_t local_30[2];

        uint64_t local_20 = field_44.GetXAxis();
        local_30[0] = *arg1 * local_20;
        field_60 += *local_30;
        return this;
    }

    // 0x1009dc460
    EulerCamera* EulerCamera::TranslateY(float arg1) {
        uint64_t local_30[2];

        uint64_t local_20 = field_44.GetYAxis();
        local_30[0] = *arg1 * local_20;
        field_60 += *local_30;
        return this;
    }

    // 0x1009dc550
    EulerCamera* EulerCamera::TranslateZ(float arg1) {
        uint64_t local_30[2];

        uint64_t local_20 = field_44.GetZAxis();
        local_30[0] = *arg1 * local_20;
        field_60 += *local_30;
        return this;
    }

    // 0x1009dc640
    EulerCamera* EulerCamera::Yaw(float arg1) {
        EulerCamera* result;
        ReturnValue result;

        uint8_t* this_00 = field_72;
        auto pfVar1 = this_00->SSOBeginPtr();
        *pfVar1 = arg1 + *pfVar1;
        pfVar1 = (float*)this_00->SSOBeginPtr();
        float arg1_00 = *pfVar1;
        pfVar1 = (float*)this_00->y();
        float arg2 = *pfVar1;
        pfVar1 = (float*)this_00->second();
        &result = (ReturnValue*)field_44.FromYawPitchRoll(arg1_00, arg2, *pfVar1);
        result = math::QuaternionT<float>::Normalise();
        return this;
    }

    // 0x1009dc7f0
    EulerCamera* EulerCamera::SetYaw(float arg1) {
        EulerCamera* result;
        ReturnValue result;

        uint8_t* this_00 = field_72;
        auto pfVar1 = this_00->SSOBeginPtr();
        *pfVar1 = arg1;
        pfVar1 = (float*)this_00->SSOBeginPtr();
        float arg1_00 = *pfVar1;
        pfVar1 = (float*)this_00->y();
        float arg2 = *pfVar1;
        pfVar1 = (float*)this_00->second();
        &result = (ReturnValue*)field_44.FromYawPitchRoll(arg1_00, arg2, *pfVar1);
        result = math::QuaternionT<float>::Normalise();
        return this;
    }

    // 0x1009dc880
    EulerCamera* EulerCamera::Pitch(float arg1) {
        EulerCamera* result;
        ReturnValue result;

        uint8_t* this_00 = field_72;
        auto pfVar1 = this_00->y();
        *pfVar1 = arg1 + *pfVar1;
        pfVar1 = (float*)this_00->SSOBeginPtr();
        float arg1_00 = *pfVar1;
        pfVar1 = (float*)this_00->y();
        float arg2 = *pfVar1;
        pfVar1 = (float*)this_00->second();
        &result = (ReturnValue*)field_44.FromYawPitchRoll(arg1_00, arg2, *pfVar1);
        result = math::QuaternionT<float>::Normalise();
        return this;
    }

    // 0x1009dc910
    EulerCamera* EulerCamera::SetPitch(float arg1) {
        EulerCamera* result;
        ReturnValue result;

        uint8_t* this_00 = field_72;
        auto pfVar1 = this_00->y();
        *pfVar1 = arg1;
        pfVar1 = (float*)this_00->SSOBeginPtr();
        float arg1_00 = *pfVar1;
        pfVar1 = (float*)this_00->y();
        float arg2 = *pfVar1;
        pfVar1 = (float*)this_00->second();
        &result = (ReturnValue*)field_44.FromYawPitchRoll(arg1_00, arg2, *pfVar1);
        result = math::QuaternionT<float>::Normalise();
        return this;
    }

    // 0x1009dc9a0
    EulerCamera* EulerCamera::Roll(float arg1) {
        EulerCamera* result;
        ReturnValue result;

        uint8_t* this_00 = field_72;
        auto pfVar1 = this_00->second();
        *pfVar1 = arg1 + *pfVar1;
        pfVar1 = (float*)this_00->SSOBeginPtr();
        float arg1_00 = *pfVar1;
        pfVar1 = (float*)this_00->y();
        float arg2 = *pfVar1;
        pfVar1 = (float*)this_00->second();
        &result = (ReturnValue*)field_44.FromYawPitchRoll(arg1_00, arg2, *pfVar1);
        result = math::QuaternionT<float>::Normalise();
        return this;
    }

    // 0x1009dca30
    EulerCamera* EulerCamera::SetRoll(float arg1) {
        EulerCamera* result;
        ReturnValue result;

        uint8_t* this_00 = field_72;
        auto pfVar1 = this_00->second();
        *pfVar1 = arg1;
        pfVar1 = (float*)this_00->SSOBeginPtr();
        float arg1_00 = *pfVar1;
        pfVar1 = (float*)this_00->y();
        float arg2 = *pfVar1;
        pfVar1 = (float*)this_00->second();
        &result = (ReturnValue*)field_44.FromYawPitchRoll(arg1_00, arg2, *pfVar1);
        result = math::QuaternionT<float>::Normalise();
        return this;
    }

    // 0x1009dcac0
    void EulerCamera::GetCameraMatrix(math::Matrix44T<float>& matrix44) {

        matrix44.SetToIdentity();
        Matrix33T<float> local_48(field_44);
        matrix44.SetRot(local_48);
        matrix44.SetPos(field_60);
        matrix44 = math::Matrix44T<float>::Invert(nullptr);
    }

} // namespace jag

// 0x1009dc2e0
unsigned long abs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}
