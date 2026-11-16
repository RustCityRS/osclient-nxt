// libs/graphics/view/EulerCamera.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.view

namespace jag {
    class EulerCamera {
    public:
        // virtual methods in vtable order
        virtual ~EulerCamera();
        EulerCamera* TranslateXYZ(math::Vector3T<float> const&);
        EulerCamera* YawPitchRoll(math::Vector3T<float> const&);
        EulerCamera();
        TranslateX(float);
        TranslateY(float);
        TranslateZ(float);
        Yaw(float);
        SetYaw(float);
        Pitch(float);
        SetPitch(float);
        Roll(float);
        SetRoll(float);
        void GetCameraMatrix(math::Matrix44T<float>&);

        // data members, from how the methods use this: 88 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined4 field_8;  // offset 8
        float field_12;      // offset 12
        float field_16;      // offset 16
        undefined8 field_20; // offset 20
        undefined8 field_28; // offset 28
        float field_36;      // offset 36
        float field_40;      // offset 40
        char _unknown_44[28];
        ColourHSL field_72; // offset 72
    };

    // 0x1009dbea0, 96 bytes, placed by class name and debug map
    // EulerCamera::TranslateXYZ(math::Vector3T<float> const&)
    EulerCamera* EulerCamera::TranslateXYZ(Vector3T* param_1) {
        vector* pvVar1;
        float* pfVar2;

        pvVar1 = param_1->SSOBeginPtr(param_1);
        TranslateX(this, *(float*)pvVar1);
        pfVar2 = (float*)param_1->y();
        TranslateY(this, *pfVar2);
        pfVar2 = (float*)param_1->second();
        TranslateZ(this, *pfVar2);
        return this;
    }

    // 0x1009dbf00, 128 bytes, placed by class name and debug map
    // EulerCamera::YawPitchRoll(math::Vector3T<float> const&)
    EulerCamera* EulerCamera::YawPitchRoll(Vector3T* param_1) {
        undefined1* this_00;
        float fVar1;
        float fVar2;
        vector* pvVar3;
        float* pfVar4;
        QuaternionT<float>* this_01;

        this_00 = field_72;
        math::Vector3T<float>::operator+=((Vector3T<float>*)this_00, param_1);
        pvVar3 = this_00->SSOBeginPtr(param_1);
        fVar1 = *(float*)pvVar3;
        pfVar4 = (float*)this_00->y();
        fVar2 = *pfVar4;
        pfVar4 = (float*)this_00->second();
        this_01 = (QuaternionT<float>*)(&field_44, fVar1, fVar2, *pfVar4)->FromYawPitchRoll();
        this_01->Normalise();
        return this;
    }

    // 0x1009dc2f0, 64 bytes, base-object constructor, placed by class name and debug map
    // EulerCamera::EulerCamera()
    void EulerCamera::EulerCamera() {
        new (this) Camera(0);
        field_0 = &PTR__EulerCamera_100f1cc90;
        new (field_72, 0.0, 0.0, 0.0) math::ColourHSL();
    }

    // 0x1009dc330, 16 bytes, complete-object constructor, placed by class name and debug map
    // EulerCamera::EulerCamera(): jumps straight to the base-object constructor

    // 0x1009dc340, 16 bytes, base-object destructor, placed by class name and debug map
    // EulerCamera::~EulerCamera()
    void EulerCamera::~EulerCamera() {}

    // 0x1009dc350, 16 bytes, complete-object destructor, placed by class name and debug map
    // EulerCamera::~EulerCamera(): jumps straight to the base-object destructor

    // 0x1009dc360, 16 bytes, deleting destructor, placed by class name and debug map
    // EulerCamera::~EulerCamera()
    void EulerCamera::~EulerCamera() {
        operator_delete(this);
    }

    // 0x1009dc370, 96 bytes, placed by class name and debug map
    // EulerCamera::TranslateX(float)
    EulerCamera* EulerCamera::TranslateX(float param_1) {
        undefined8 local_30[2];
        undefined8 local_20;

        local_20 = (&field_44)->GetXAxis();
        local_30[0] = math::operator*((Vector3T*)&local_20, param_1);
        math::Vector3T<float>::operator+=((Vector3T<float>*)&field_60, (Vector3T*)local_30);
        return this;
    }

    // 0x1009dc460, 96 bytes, placed by class name and debug map
    // EulerCamera::TranslateY(float)
    EulerCamera* EulerCamera::TranslateY(float param_1) {
        undefined8 local_30[2];
        undefined8 local_20;

        local_20 = (&field_44)->GetYAxis();
        local_30[0] = math::operator*((Vector3T*)&local_20, param_1);
        math::Vector3T<float>::operator+=((Vector3T<float>*)&field_60, (Vector3T*)local_30);
        return this;
    }

    // 0x1009dc550, 96 bytes, placed by class name and debug map
    // EulerCamera::TranslateZ(float)
    EulerCamera* EulerCamera::TranslateZ(float param_1) {
        undefined8 local_30[2];
        undefined8 local_20;

        local_20 = (&field_44)->GetZAxis();
        local_30[0] = math::operator*((Vector3T*)&local_20, param_1);
        math::Vector3T<float>::operator+=((Vector3T<float>*)&field_60, (Vector3T*)local_30);
        return this;
    }

    // 0x1009dc640, 144 bytes, placed by class name and debug map
    // EulerCamera::Yaw(float)
    EulerCamera* EulerCamera::Yaw(float param_1) {
        undefined1* this_00;
        float fVar1;
        float fVar2;
        vector* pvVar3;
        float* pfVar4;
        QuaternionT<float>* this_01;
        type* in_RSI;

        this_00 = field_72;
        pvVar3 = this_00->SSOBeginPtr(in_RSI);
        *(float*)pvVar3 = param_1 + *(float*)pvVar3;
        pvVar3 = this_00->SSOBeginPtr(in_RSI);
        fVar1 = *(float*)pvVar3;
        pfVar4 = (float*)this_00->y();
        fVar2 = *pfVar4;
        pfVar4 = (float*)this_00->second();
        this_01 = (QuaternionT<float>*)(&field_44, fVar1, fVar2, *pfVar4)->FromYawPitchRoll();
        this_01->Normalise();
        return this;
    }

    // 0x1009dc7f0, 144 bytes, placed by class name and debug map
    // EulerCamera::SetYaw(float)
    EulerCamera* EulerCamera::SetYaw(float param_1) {
        undefined1* this_00;
        float fVar1;
        float fVar2;
        vector* pvVar3;
        float* pfVar4;
        QuaternionT<float>* this_01;
        type* in_RSI;

        this_00 = field_72;
        pvVar3 = this_00->SSOBeginPtr(in_RSI);
        *(float*)pvVar3 = param_1;
        pvVar3 = this_00->SSOBeginPtr(in_RSI);
        fVar1 = *(float*)pvVar3;
        pfVar4 = (float*)this_00->y();
        fVar2 = *pfVar4;
        pfVar4 = (float*)this_00->second();
        this_01 = (QuaternionT<float>*)(&field_44, fVar1, fVar2, *pfVar4)->FromYawPitchRoll();
        this_01->Normalise();
        return this;
    }

    // 0x1009dc880, 144 bytes, placed by class name and debug map
    // EulerCamera::Pitch(float)
    EulerCamera* EulerCamera::Pitch(float param_1) {
        undefined1* this_00;
        float fVar1;
        float fVar2;
        float* pfVar3;
        vector* pvVar4;
        QuaternionT<float>* this_01;
        type* in_RSI;

        this_00 = field_72;
        pfVar3 = (float*)this_00->y();
        *pfVar3 = param_1 + *pfVar3;
        pvVar4 = this_00->SSOBeginPtr(in_RSI);
        fVar1 = *(float*)pvVar4;
        pfVar3 = (float*)this_00->y();
        fVar2 = *pfVar3;
        pfVar3 = (float*)this_00->second();
        this_01 = (QuaternionT<float>*)(&field_44, fVar1, fVar2, *pfVar3)->FromYawPitchRoll();
        this_01->Normalise();
        return this;
    }

    // 0x1009dc910, 144 bytes, placed by class name and debug map
    // EulerCamera::SetPitch(float)
    EulerCamera* EulerCamera::SetPitch(float param_1) {
        undefined1* this_00;
        float fVar1;
        float fVar2;
        float* pfVar3;
        vector* pvVar4;
        QuaternionT<float>* this_01;
        type* in_RSI;

        this_00 = field_72;
        pfVar3 = (float*)this_00->y();
        *pfVar3 = param_1;
        pvVar4 = this_00->SSOBeginPtr(in_RSI);
        fVar1 = *(float*)pvVar4;
        pfVar3 = (float*)this_00->y();
        fVar2 = *pfVar3;
        pfVar3 = (float*)this_00->second();
        this_01 = (QuaternionT<float>*)(&field_44, fVar1, fVar2, *pfVar3)->FromYawPitchRoll();
        this_01->Normalise();
        return this;
    }

    // 0x1009dc9a0, 144 bytes, placed by class name and debug map
    // EulerCamera::Roll(float)
    EulerCamera* EulerCamera::Roll(float param_1) {
        undefined1* this_00;
        float fVar1;
        float fVar2;
        float* pfVar3;
        vector* pvVar4;
        QuaternionT<float>* this_01;
        type* in_RSI;

        this_00 = field_72;
        pfVar3 = (float*)this_00->second();
        *pfVar3 = param_1 + *pfVar3;
        pvVar4 = this_00->SSOBeginPtr(in_RSI);
        fVar1 = *(float*)pvVar4;
        pfVar3 = (float*)this_00->y();
        fVar2 = *pfVar3;
        pfVar3 = (float*)this_00->second();
        this_01 = (QuaternionT<float>*)(&field_44, fVar1, fVar2, *pfVar3)->FromYawPitchRoll();
        this_01->Normalise();
        return this;
    }

    // 0x1009dca30, 144 bytes, placed by class name and debug map
    // EulerCamera::SetRoll(float)
    EulerCamera* EulerCamera::SetRoll(float param_1) {
        undefined1* this_00;
        float fVar1;
        float fVar2;
        float* pfVar3;
        vector* pvVar4;
        QuaternionT<float>* this_01;
        type* in_RSI;

        this_00 = field_72;
        pfVar3 = (float*)this_00->second();
        *pfVar3 = param_1;
        pvVar4 = this_00->SSOBeginPtr(in_RSI);
        fVar1 = *(float*)pvVar4;
        pfVar3 = (float*)this_00->y();
        fVar2 = *pfVar3;
        pfVar3 = (float*)this_00->second();
        this_01 = (QuaternionT<float>*)(&field_44, fVar1, fVar2, *pfVar3)->FromYawPitchRoll();
        this_01->Normalise();
        return this;
    }

    // 0x1009dcac0, 96 bytes, placed by class name and debug map
    // EulerCamera::GetCameraMatrix(math::Matrix44T<float>&)
    void EulerCamera::GetCameraMatrix(Matrix44T* param_1) {
        Matrix33T<float> local_48[40];

        param_1->SetToIdentity();
        math::Matrix33T<float>::Matrix33T(local_48, (QuaternionT*)&field_44);
        param_1->SetRot(local_48);
        param_1->SetPos((Vector3T*)&field_60);
        param_1->Invert(0);
    }

} // namespace jag

// 0x1009dc2e0, 16 bytes, placed by neighbouring functions
// abs(float)
ulong abs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}
