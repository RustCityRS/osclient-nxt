// libs/oldscape/jagex3/math/AffineTransform3.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

namespace jag::oldscape::math {
    class AffineTransform3 {
    public:
        void AppendXRotation(float arg1);
        void AppendYRotation(float arg1);
        void AppendZRotation(float arg1);
        void AppendTranslate(float arg1, float arg2, float arg3);
        AffineTransform3();
        void SetIdenity();
        AffineTransform3(const AffineTransform3& affineTransform3);
        void Set(const AffineTransform3& affineTransform3);
        AffineTransform3(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, float arg8,
                         float arg9, float arg10, float arg11, float arg12);
        void Set(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, float arg8,
                 float arg9, float arg10, float arg11, float arg12);
        void Set(const RotTrans& rotTrans);
        void FromRotTrans(const RotTrans& rotTrans);
        void SetScale(jag::math::Vector3T<float> vector3);
        void AppendRotation(const jag::math::QuaternionT<float>& quaternion);
        void AppendTranslate(jag::math::Vector3T<float> vector3);
        void FromQuaternion(const jag::math::QuaternionT<float>& quaternion);
        void SetLookAt(double arg1, double arg2, double arg3, double arg4, double arg5, double arg6, double arg7,
                       double arg8, double arg9);
        void SetCoordinateFrame(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7,
                                float arg8, float arg9);
        void SetInverse(const AffineTransform3* affineTransform3);
        void Invert();
        void SetXRotation(float arg1);
        void SetYRotation(float arg1);
        void SetZRotation(float arg1);
        void SetRotation(float arg1, float arg2, float arg3, float arg4);
        void SetRotation(const jag::math::QuaternionT<float>& quaternion);
        void SetQuaternion(float arg1, float arg2, float arg3, float arg4);
        void PrependRotation(float arg1, float arg2, float arg3, float arg4);
        void AppendRotation(float arg1, float arg2, float arg3, float arg4);
        void AppendQuaternion(float arg1, float arg2, float arg3, float arg4);
        void PrependQuaternion(float arg1, float arg2, float arg3, float arg4);
        void SetScale(float arg1, float arg2, float arg3);
        void Scale(float arg1, float arg2, float arg3);
        void Scale(jag::math::Vector3T<float> vector3);
        void SetTranslate(jag::math::Vector3T<float> vector3);
        void SetTranslate(float arg1, float arg2, float arg3);
        void PrependTranslate(float arg1, float arg2, float arg3);
        void SetReflection(jag::math::Vector3T<float> vector3, float arg2);
        void Prepend(const AffineTransform3& affineTransform3);
        void PrependInverse(const AffineTransform3& affineTransform3);
        void Append(const AffineTransform3& affineTransform3);
        void Multiply(const AffineTransform3& affineTransform31, const AffineTransform3& affineTransform32);
        void TransformCoord(float arg1, float arg2, float arg3, Array<float>& arg4);
        void TransformCoord(int arg1, Array<int>& arg2, Array<int>& arg3, Array<int>& arg4);
        void TransformCoord(int arg1, Array<float>& arg2, Array<float>& arg3, Array<float>& arg4);
        void InvTransformCoord(float arg1, float arg2, float arg3, Array<float>& arg4);
        void InvTransformCoord(Array<float>& arg1);
        void TransformVector(float arg1, float arg2, float arg3, Array<float>& arg4);
        void TransformVector(int arg1, Array<int>& arg2, Array<int>& arg3, Array<int>& arg4);
        void TransformVector(int arg1, Array<float>& arg2, Array<float>& arg3, Array<float>& arg4);
        void InvTransformVector(float arg1, float arg2, float arg3, Array<float>& arg4);
        void InvTransformVector(Array<float>& arg1);
        Array<float>* GetTranslationComponent(Array<float>& arg1);
        Array<float>* ToLinearMatrix3x3(Array<float>& arg1);
        Array<float>* ToTransposedLinearMatrix3x3(Array<float>& arg1);
        Array<float>* ToTransposedLinearMatrix3x4(Array<float>& arg1);
        Array<float>* ToAffineMatrix4x4(Array<float>& arg1, int arg2);
        Array<float>* ToTransposedAffineMatrix3x4(Array<float>& arg1);
        Array<float>* ToTransposedAffineMatrix4x4(Array<float>& arg1, int arg2);
        AffineTransform3* ToString();
        bool HasSameRotation(const AffineTransform3& affineTransform31, const AffineTransform3& affineTransform32);

    private:
        float field_0;
        float field_4;
        float field_8;
        float field_12;
        float field_16;
        float field_20;
        float field_24;
        float field_28;
        float field_32;
        float field_36;
        float field_40;
        float field_44;
        uint8_t _unknown_48[4];
    };

    // 0x1002af4b0
    void AffineTransform3::AppendXRotation(float arg1) {
        float fVar5 = (float)::cos(arg1);
        float fVar6 = (float)::sin(arg1);
        float fVar1 = field_16;
        float fVar2 = field_28;
        float fVar3 = field_40;
        float fVar4 = field_4;
        field_4 = fVar4 * fVar5 - field_8 * fVar6;
        field_8 = field_8 * fVar5 + fVar4 * fVar6;
        field_16 = fVar1 * fVar5 - field_20 * fVar6;
        field_20 = field_20 * fVar5 + fVar1 * fVar6;
        field_28 = fVar2 * fVar5 - field_32 * fVar6;
        field_32 = field_32 * fVar5 + fVar2 * fVar6;
        field_40 = fVar3 * fVar5 - field_44 * fVar6;
        field_44 = field_44 * fVar5 + fVar3 * fVar6;
    }

    // 0x1002af5c0
    void AffineTransform3::AppendYRotation(float arg1) {
        float fVar5 = (float)::cos(arg1);
        float fVar6 = (float)::sin(arg1);
        float fVar1 = field_12;
        float fVar2 = field_24;
        float fVar3 = field_36;
        float fVar4 = field_0;
        field_0 = field_8 * fVar6 + fVar4 * fVar5;
        field_8 = field_8 * fVar5 - fVar4 * fVar6;
        field_12 = field_20 * fVar6 + fVar1 * fVar5;
        field_20 = field_20 * fVar5 - fVar1 * fVar6;
        field_24 = field_32 * fVar6 + fVar2 * fVar5;
        field_32 = field_32 * fVar5 - fVar2 * fVar6;
        field_36 = field_44 * fVar6 + fVar3 * fVar5;
        field_44 = field_44 * fVar5 - fVar3 * fVar6;
    }

    // 0x1002af6c0
    void AffineTransform3::AppendZRotation(float arg1) {
        float fVar5 = (float)::cos(arg1);
        float fVar6 = (float)::sin(arg1);
        float fVar1 = field_12;
        float fVar2 = field_24;
        float fVar3 = field_36;
        float fVar4 = field_0;
        field_0 = fVar4 * fVar5 - field_4 * fVar6;
        field_4 = field_4 * fVar5 + fVar4 * fVar6;
        field_12 = fVar1 * fVar5 - field_16 * fVar6;
        field_16 = field_16 * fVar5 + fVar1 * fVar6;
        field_24 = fVar2 * fVar5 - field_28 * fVar6;
        field_28 = field_28 * fVar5 + fVar2 * fVar6;
        field_36 = fVar3 * fVar5 - field_40 * fVar6;
        field_40 = field_40 * fVar5 + fVar3 * fVar6;
    }

    // 0x1002af7c0
    void AffineTransform3::AppendTranslate(float arg1, float arg2, float arg3) {
        field_36 = arg1 + field_36;
        field_40 = arg2 + field_40;
        field_44 = arg3 + field_44;
    }

    // 0x1002c3bf0
    AffineTransform3::AffineTransform3() {
        SetIdenity();
    }

    // 0x1002c3c00
    void AffineTransform3::SetIdenity() {
        field_40 = 0.0;
        field_44 = 0.0;
        field_24 = 0.0;
        field_28 = 0.0;
        field_8 = 0.0;
        field_12 = 0.0;
        field_32 = 1.0;
        field_36 = 0.0;
        field_16 = 1.0;
        field_20 = 0.0;
        field_0 = 1.0;
        field_4 = 0.0;
    }

    // 0x1002c3c50
    AffineTransform3::AffineTransform3(const AffineTransform3& affineTransform3) {
        Set(affineTransform3);
    }

    // 0x1002c3c60
    void AffineTransform3::Set(const AffineTransform3& affineTransform3) {
        field_0 = affineTransform3.field_0;
        field_12 = affineTransform3.field_12;
        field_24 = affineTransform3.field_24;
        field_36 = affineTransform3.field_36;
        field_4 = affineTransform3.field_4;
        field_16 = affineTransform3.field_16;
        field_28 = affineTransform3.field_28;
        field_40 = affineTransform3.field_40;
        field_8 = affineTransform3.field_8;
        field_20 = affineTransform3.field_20;
        field_32 = affineTransform3.field_32;
        field_44 = affineTransform3.field_44;
    }

    // 0x1002c3cf0
    AffineTransform3::AffineTransform3(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6,
                                       float arg7, float arg8, float arg9, float arg10, float arg11, float arg12) {
        Set(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
    }

    // 0x1002c3d40
    void AffineTransform3::Set(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7,
                               float arg8, float arg9, float arg10, float arg11, float arg12) {
        field_0 = arg1;
        field_4 = arg5;
        field_8 = arg9;
        field_12 = arg2;
        field_16 = arg6;
        field_20 = arg10;
        field_24 = arg3;
        field_28 = arg7;
        field_32 = arg11;
        field_36 = arg4;
        field_40 = arg8;
        field_44 = arg12;
    }

    // 0x1002c3df0
    void AffineTransform3::Set(const RotTrans& rotTrans) {
        FromRotTrans(rotTrans);
    }

    // 0x1002c3e00
    void AffineTransform3::FromRotTrans(const RotTrans& rotTrans) {
        rotTrans.field_16;
        SetScale((Vector3T<float>*)this);
        AppendRotation(*(QuaternionT<float>*)rotTrans);
        rotTrans.field_32;
        AppendTranslate((Vector3T<float>*)this);
    }

    // 0x1002c3e60
    void AffineTransform3::SetScale(jag::math::Vector3T<float> vector3) {
        Layout local_30;

        auto pfVar1 = local_30.SSOBeginPtr();
        float local_20 = *pfVar1;
        pfVar1 = (float*)local_30.y();
        float local_1c = *pfVar1;
        pfVar1 = (float*)local_30.second();
        SetScale((AffineTransform3*)vector3, local_20, local_1c, *pfVar1);
    }

    // 0x1002c3f10
    void AffineTransform3::AppendRotation(const jag::math::QuaternionT<float>& quaternion) {
        AppendQuaternion(*(float*)quaternion, *(float*)(quaternion + 4), *(float*)(quaternion + 8),
                         *(float*)(quaternion + 12));
    }

    // 0x1002c3f70
    void AffineTransform3::AppendTranslate(jag::math::Vector3T<float> vector3) {
        Layout local_30;

        auto pfVar1 = local_30.SSOBeginPtr();
        float local_20 = *pfVar1;
        pfVar1 = (float*)local_30.y();
        float local_1c = *pfVar1;
        pfVar1 = (float*)local_30.second();
        AppendTranslate((AffineTransform3*)vector3, local_20, local_1c, *pfVar1);
    }

    // 0x1002c3fe0
    void AffineTransform3::FromQuaternion(const jag::math::QuaternionT<float>& quaternion) {
        float fVar8 = *(float*)(quaternion + 12);
        float fVar6 = fVar8 * fVar8;
        float fVar1 = *(float*)quaternion;
        float fVar2 = *(float*)(quaternion + 4);
        float fVar3 = *(float*)(quaternion + 8);
        float fVar9 = fVar1 * fVar1;
        float fVar4 = fVar2 * fVar2;
        float fVar5 = fVar3 * fVar3;
        field_0 = (fVar9 + fVar6) - (fVar4 + fVar5);
        float fVar7 = fVar8 * fVar3 + fVar2 * fVar1;
        field_4 = fVar7 + fVar7;
        fVar7 = fVar1 * fVar3 - fVar2 * fVar8;
        field_8 = fVar7 + fVar7;
        fVar7 = fVar2 * fVar1 - fVar8 * fVar3;
        field_12 = fVar7 + fVar7;
        field_16 = (fVar6 + fVar4) - (fVar9 + fVar5);
        fVar7 = fVar3 * fVar2 + fVar1 * fVar8;
        field_20 = fVar7 + fVar7;
        fVar7 = fVar1 * fVar3 + fVar2 * fVar8;
        field_24 = fVar7 + fVar7;
        fVar8 = fVar3 * fVar2 - fVar1 * fVar8;
        field_28 = fVar8 + fVar8;
        field_32 = (fVar6 - (fVar4 + fVar9)) + fVar5;
        field_36 = 0.0;
        field_40 = 0.0;
        field_44 = 0.0;
    }

    // 0x1002c40f0
    void AffineTransform3::SetLookAt(double arg1, double arg2, double arg3, double arg4, double arg5, double arg6,
                                     double arg7, double arg8, double arg9) {
        float fVar9 = (float)(arg4 - arg1);
        float fVar5 = (float)(arg5 - arg2);
        float fVar4 = (float)(arg6 - arg3);
        float fVar8 = (float)((double)fVar4 * arg8 - (double)fVar5 * arg9);
        float fVar1 = (float)(arg9 * (double)fVar9 - (double)fVar4 * arg7);
        float fVar6 = (float)((double)fVar5 * arg7 - (double)fVar9 * arg8);
        float fVar2 = (float)::sqrt(fVar6 * fVar6 + fVar1 * fVar1 + fVar8 * fVar8);
        fVar2 = 1.0 / fVar2;
        float fVar3 = (float)::sqrt(fVar4 * fVar4 + fVar5 * fVar5 + fVar9 * fVar9);
        fVar3 = 1.0 / fVar3;
        fVar8 = fVar8 * fVar2;
        field_0 = fVar8;
        fVar1 = fVar1 * fVar2;
        field_12 = fVar1;
        fVar2 = fVar2 * fVar6;
        field_24 = fVar2;
        fVar9 = fVar9 * fVar3;
        field_8 = fVar9;
        fVar5 = fVar5 * fVar3;
        field_20 = fVar5;
        fVar3 = fVar3 * fVar4;
        field_32 = fVar3;
        fVar4 = fVar5 * fVar2 - fVar3 * fVar1;
        field_4 = fVar4;
        fVar6 = fVar3 * fVar8 - fVar9 * fVar2;
        field_16 = fVar6;
        float fVar7 = fVar9 * fVar1 - fVar5 * fVar8;
        field_28 = fVar7;
        field_36 = -(float)((double)fVar2 * arg3 + (double)fVar1 * arg2 + (double)fVar8 * arg1);
        field_40 = -(float)((double)fVar7 * arg3 + (double)fVar6 * arg2 + (double)fVar4 * arg1);
        field_44 = -(float)((double)fVar3 * arg3 + (double)fVar5 * arg2 + (double)fVar9 * arg1);
    }

    // 0x1002c43b0
    void AffineTransform3::SetCoordinateFrame(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6,
                                              float arg7, float arg8, float arg9) {
        field_0 = arg1;
        field_12 = arg4;
        field_24 = arg7;
        field_36 = 0.0;
        field_4 = arg2;
        field_16 = arg5;
        field_28 = arg8;
        field_40 = 0.0;
        field_44 = 0.0;
        field_8 = arg3;
        field_20 = arg6;
        field_32 = arg9;
    }

    // 0x1002c4400
    void AffineTransform3::SetInverse(const AffineTransform3* affineTransform3) {
        if (affineTransform3 == this) {
            Invert();
            return;
        }
        float fVar1 = affineTransform3->field_0;
        field_0 = fVar1;
        float fVar2 = affineTransform3->field_4;
        field_12 = fVar2;
        float fVar3 = affineTransform3->field_8;
        field_24 = fVar3;
        float fVar4 = affineTransform3->field_12;
        field_4 = fVar4;
        float fVar5 = affineTransform3->field_16;
        field_16 = fVar5;
        float fVar6 = affineTransform3->field_20;
        field_28 = fVar6;
        float fVar7 = affineTransform3->field_24;
        field_8 = fVar7;
        float fVar8 = affineTransform3->field_28;
        field_20 = fVar8;
        float fVar9 = affineTransform3->field_32;
        field_32 = fVar9;
        float fVar10 = affineTransform3->field_40;
        float fVar11 = affineTransform3->field_44;
        field_36 = -(fVar3 * fVar11 + fVar2 * fVar10 + fVar1 * affineTransform3->field_36);
        fVar1 = affineTransform3->field_36;
        field_40 = -(fVar6 * fVar11 + fVar10 * fVar5 + fVar4 * fVar1);
        field_44 = -(fVar11 * fVar9 + fVar1 * fVar7 + fVar8 * affineTransform3->field_40);
    }

    // 0x1002c44f0
    void AffineTransform3::Invert() {
        float fVar1 = field_36;
        float fVar2 = field_40;
        float fVar3 = field_12;
        float fVar4 = field_4;
        float fVar5 = field_8;
        field_12 = fVar4;
        field_4 = fVar3;
        float fVar6 = field_24;
        field_24 = fVar5;
        field_8 = fVar6;
        float fVar7 = field_28;
        float fVar8 = field_20;
        field_28 = fVar8;
        field_20 = fVar7;
        float fVar9 = field_44;
        field_36 = -(fVar5 * fVar9 + fVar4 * fVar2 + field_0 * fVar1);
        field_40 = -(fVar8 * fVar9 + fVar3 * fVar1 + fVar2 * field_16);
        field_44 = -(fVar9 * field_32 + fVar6 * fVar1 + fVar7 * fVar2);
    }

    // 0x1002c45b0
    void AffineTransform3::SetXRotation(float arg1) {
        field_0 = 1.0;
        float fVar1 = (float)::cos(arg1);
        field_32 = fVar1;
        field_16 = fVar1;
        fVar1 = (float)::sin(arg1);
        field_20 = fVar1;
        field_28 = -fVar1;
        field_44 = 0.0;
        field_4 = 0.0;
        field_8 = 0.0;
        field_36 = 0.0;
        field_40 = 0.0;
        field_24 = 0.0;
        field_12 = 0.0;
    }

    // 0x1002c4640
    void AffineTransform3::SetYRotation(float arg1) {
        field_16 = 1.0;
        float fVar1 = (float)::cos(arg1);
        field_32 = fVar1;
        field_0 = fVar1;
        fVar1 = (float)::sin(arg1);
        field_24 = fVar1;
        field_8 = -fVar1;
        field_44 = 0.0;
        field_20 = 0.0;
        field_28 = 0.0;
        field_4 = 0.0;
        field_36 = 0.0;
        field_40 = 0.0;
        field_12 = 0.0;
    }

    // 0x1002c46b0
    void AffineTransform3::SetZRotation(float arg1) {
        field_32 = 1.0;
        float fVar1 = (float)::cos(arg1);
        field_16 = fVar1;
        field_0 = fVar1;
        fVar1 = (float)::sin(arg1);
        field_4 = fVar1;
        field_12 = -fVar1;
        field_44 = 0.0;
        field_20 = 0.0;
        field_8 = 0.0;
        field_36 = 0.0;
        field_40 = 0.0;
        field_24 = 0.0;
        field_28 = 0.0;
    }

    // 0x1002c4720
    void AffineTransform3::SetRotation(float arg1, float arg2, float arg3, float arg4) {
        float fVar1 = (float)::cos(arg4);
        float fVar2 = (float)::sin(arg4);
        float fVar3 = 1.0 - fVar1;
        field_0 = arg1 * arg1 * fVar3 + fVar1;
        float fVar4 = arg2 * arg1 * fVar3;
        field_4 = fVar2 * arg3 + fVar4;
        float fVar5 = fVar3 * arg3 * arg1;
        field_8 = fVar5 - fVar2 * arg2;
        field_12 = fVar4 - fVar2 * arg3;
        fVar4 = fVar3 * arg3 * arg2;
        field_16 = arg2 * arg2 * fVar3 + fVar1;
        field_20 = fVar2 * arg1 + fVar4;
        field_24 = fVar2 * arg2 + fVar5;
        field_28 = fVar4 - fVar2 * arg1;
        field_32 = arg3 * arg3 * fVar3 + fVar1;
        field_44 = 0.0;
        field_36 = 0.0;
        field_40 = 0.0;
    }

    // 0x1002c4850
    void AffineTransform3::SetRotation(const jag::math::QuaternionT<float>& quaternion) {
        SetQuaternion(*(float*)quaternion, *(float*)(quaternion + 4), *(float*)(quaternion + 8),
                      *(float*)(quaternion + 12));
    }

    // 0x1002c4870
    void AffineTransform3::SetQuaternion(float arg1, float arg2, float arg3, float arg4) {
        float fVar1 = arg3 * arg3 + arg2 * arg2;
        field_0 = 1.0 - (fVar1 + fVar1);
        fVar1 = arg2 * arg1 - arg4 * arg3;
        field_12 = fVar1 + fVar1;
        fVar1 = arg2 * arg4 + arg3 * arg1;
        field_24 = fVar1 + fVar1;
        fVar1 = arg4 * arg3 + arg2 * arg1;
        field_4 = fVar1 + fVar1;
        fVar1 = arg3 * arg3 + arg1 * arg1;
        field_16 = 1.0 - (fVar1 + fVar1);
        fVar1 = arg3 * arg2 - arg1 * arg4;
        field_28 = fVar1 + fVar1;
        fVar1 = arg3 * arg1 - arg2 * arg4;
        field_8 = fVar1 + fVar1;
        fVar1 = arg3 * arg2 + arg1 * arg4;
        field_20 = fVar1 + fVar1;
        fVar1 = arg2 * arg2 + arg1 * arg1;
        field_32 = 1.0 - (fVar1 + fVar1);
        field_44 = 0.0;
        field_36 = 0.0;
        field_40 = 0.0;
    }

    // 0x1002c4970
    void AffineTransform3::PrependRotation(float arg1, float arg2, float arg3, float arg4) {
        float fVar8 = (float)::cos(arg4);
        float fVar9 = (float)::sin(arg4);
        float fVar11 = 1.0 - fVar8;
        float fVar16 = arg1 * arg1 * fVar11 + fVar8;
        float fVar12 = arg2 * arg1 * fVar11;
        float fVar15 = fVar9 * arg3 + fVar12;
        float fVar17 = fVar11 * arg3 * arg1;
        float fVar13 = fVar17 - fVar9 * arg2;
        fVar12 = fVar12 - fVar9 * arg3;
        float fVar10 = fVar11 * arg3 * arg2;
        float fVar18 = arg2 * arg2 * fVar11 + fVar8;
        float fVar14 = fVar9 * arg1 + fVar10;
        fVar17 = fVar9 * arg2 + fVar17;
        fVar10 = fVar10 - fVar9 * arg1;
        fVar8 = arg3 * arg3 * fVar11 + fVar8;
        fVar9 = field_0;
        fVar11 = field_4;
        float fVar1 = field_8;
        float fVar2 = field_12;
        float fVar3 = field_24;
        float fVar4 = field_16;
        float fVar5 = field_20;
        float fVar6 = field_28;
        float fVar7 = field_32;
        field_0 = fVar3 * fVar13 + fVar2 * fVar15 + fVar9 * fVar16;
        field_4 = fVar6 * fVar13 + fVar4 * fVar15 + fVar11 * fVar16;
        field_8 = fVar13 * fVar7 + fVar15 * fVar5 + fVar16 * fVar1;
        field_12 = fVar3 * fVar14 + fVar2 * fVar18 + fVar12 * fVar9;
        field_16 = fVar6 * fVar14 + fVar4 * fVar18 + fVar12 * fVar11;
        field_20 = fVar14 * fVar7 + fVar18 * fVar5 + fVar1 * fVar12;
        field_24 = fVar3 * fVar8 + fVar2 * fVar10 + fVar9 * fVar17;
        field_28 = fVar6 * fVar8 + fVar4 * fVar10 + fVar11 * fVar17;
        field_32 = fVar8 * fVar7 + fVar10 * fVar5 + fVar17 * fVar1;
    }

    // 0x1002c4c00
    void AffineTransform3::AppendRotation(float arg1, float arg2, float arg3, float arg4) {
        float fVar8 = (float)::cos(arg4);
        float fVar9 = (float)::sin(arg4);
        float fVar13 = 1.0 - fVar8;
        float fVar18 = arg1 * arg1 * fVar13 + fVar8;
        float fVar15 = arg2 * arg1 * fVar13;
        float fVar10 = fVar9 * arg3 + fVar15;
        float fVar16 = fVar13 * arg3 * arg1;
        float fVar11 = fVar16 - fVar9 * arg2;
        fVar15 = fVar15 - fVar9 * arg3;
        float fVar14 = fVar13 * arg3 * arg2;
        float fVar12 = arg2 * arg2 * fVar13 + fVar8;
        float fVar17 = fVar9 * arg1 + fVar14;
        fVar16 = fVar9 * arg2 + fVar16;
        fVar14 = fVar14 - fVar9 * arg1;
        fVar8 = arg3 * arg3 * fVar13 + fVar8;
        fVar9 = field_0;
        fVar13 = field_4;
        float fVar1 = field_12;
        float fVar2 = field_16;
        float fVar3 = field_8;
        float fVar4 = field_24;
        float fVar5 = field_28;
        float fVar6 = field_36;
        float fVar7 = field_40;
        field_0 = fVar3 * fVar16 + fVar13 * fVar15 + fVar9 * fVar18;
        field_4 = fVar3 * fVar14 + fVar13 * fVar12 + fVar10 * fVar9;
        field_8 = fVar3 * fVar8 + fVar13 * fVar17 + fVar9 * fVar11;
        fVar9 = field_20;
        field_12 = fVar9 * fVar16 + fVar2 * fVar15 + fVar1 * fVar18;
        field_16 = fVar9 * fVar14 + fVar2 * fVar12 + fVar1 * fVar10;
        field_20 = fVar9 * fVar8 + fVar2 * fVar17 + fVar1 * fVar11;
        fVar9 = field_32;
        field_24 = fVar9 * fVar16 + fVar5 * fVar15 + fVar4 * fVar18;
        field_28 = fVar9 * fVar14 + fVar5 * fVar12 + fVar4 * fVar10;
        field_32 = fVar9 * fVar8 + fVar5 * fVar17 + fVar4 * fVar11;
        fVar9 = field_44;
        field_36 = fVar16 * fVar9 + fVar15 * fVar7 + fVar18 * fVar6;
        field_40 = fVar14 * fVar9 + fVar12 * fVar7 + fVar10 * fVar6;
        field_44 = fVar8 * fVar9 + fVar17 * fVar7 + fVar11 * fVar6;
    }

    // 0x1002c4f00
    void AffineTransform3::AppendQuaternion(float arg1, float arg2, float arg3, float arg4) {
        float fVar12 = arg3 * arg3 + arg2 * arg2;
        float fVar9 = 1.0 - (fVar12 + fVar12);
        float fVar16 = arg2 * arg1 - arg4 * arg3;
        fVar16 = fVar16 + fVar16;
        float fVar13 = arg2 * arg4 + arg3 * arg1;
        fVar13 = fVar13 + fVar13;
        float fVar15 = arg4 * arg3 + arg2 * arg1;
        fVar12 = arg3 * arg3 + arg1 * arg1;
        float fVar10 = 1.0 - (fVar12 + fVar12);
        float fVar11 = arg3 * arg2 - arg1 * arg4;
        float fVar18 = arg3 * arg1 - arg2 * arg4;
        float fVar14 = arg3 * arg2 + arg1 * arg4;
        fVar12 = arg2 * arg2 + arg1 * arg1;
        float fVar17 = 1.0 - (fVar12 + fVar12);
        fVar12 = field_0;
        float fVar1 = field_4;
        float fVar2 = field_12;
        float fVar3 = field_16;
        float fVar4 = field_8;
        float fVar5 = field_24;
        float fVar6 = field_28;
        float fVar7 = field_36;
        float fVar8 = field_40;
        field_0 = fVar4 * fVar13 + fVar1 * fVar16 + fVar12 * fVar9;
        fVar15 = fVar15 + fVar15;
        fVar11 = fVar11 + fVar11;
        field_4 = fVar4 * fVar11 + fVar12 * fVar15 + fVar1 * fVar10;
        fVar18 = fVar18 + fVar18;
        fVar14 = fVar14 + fVar14;
        field_8 = fVar4 * fVar17 + fVar1 * fVar14 + fVar12 * fVar18;
        fVar12 = field_20;
        field_12 = fVar12 * fVar13 + fVar3 * fVar16 + fVar2 * fVar9;
        field_16 = fVar12 * fVar11 + fVar2 * fVar15 + fVar3 * fVar10;
        field_20 = fVar12 * fVar17 + fVar3 * fVar14 + fVar2 * fVar18;
        fVar12 = field_32;
        field_24 = fVar12 * fVar13 + fVar6 * fVar16 + fVar5 * fVar9;
        field_28 = fVar12 * fVar11 + fVar5 * fVar15 + fVar6 * fVar10;
        field_32 = fVar12 * fVar17 + fVar6 * fVar14 + fVar5 * fVar18;
        fVar12 = field_44;
        field_36 = fVar13 * fVar12 + fVar16 * fVar8 + fVar9 * fVar7;
        field_40 = fVar11 * fVar12 + fVar15 * fVar7 + fVar10 * fVar8;
        field_44 = fVar17 * fVar12 + fVar14 * fVar8 + fVar18 * fVar7;
    }

    // 0x1002c51c0
    void AffineTransform3::PrependQuaternion(float arg1, float arg2, float arg3, float arg4) {
        float fVar14 = arg3 * arg3 + arg2 * arg2;
        float fVar18 = 1.0 - (fVar14 + fVar14);
        float fVar15 = arg2 * arg1 - arg4 * arg3;
        float fVar11 = arg2 * arg4 + arg3 * arg1;
        float fVar10 = arg4 * arg3 + arg2 * arg1;
        fVar10 = fVar10 + fVar10;
        fVar14 = arg3 * arg3 + arg1 * arg1;
        float fVar17 = 1.0 - (fVar14 + fVar14);
        float fVar9 = arg3 * arg2 - arg1 * arg4;
        float fVar12 = arg3 * arg1 - arg2 * arg4;
        fVar12 = fVar12 + fVar12;
        float fVar13 = arg3 * arg2 + arg1 * arg4;
        fVar14 = arg2 * arg2 + arg1 * arg1;
        float fVar16 = 1.0 - (fVar14 + fVar14);
        fVar14 = field_0;
        float fVar1 = field_4;
        float fVar2 = field_8;
        float fVar3 = field_12;
        float fVar4 = field_24;
        float fVar5 = field_16;
        float fVar6 = field_20;
        float fVar7 = field_28;
        float fVar8 = field_32;
        field_0 = fVar4 * fVar12 + fVar3 * fVar10 + fVar14 * fVar18;
        field_4 = fVar7 * fVar12 + fVar5 * fVar10 + fVar1 * fVar18;
        fVar15 = fVar15 + fVar15;
        fVar13 = fVar13 + fVar13;
        field_8 = fVar12 * fVar8 + fVar10 * fVar6 + fVar18 * fVar2;
        field_12 = fVar4 * fVar13 + fVar14 * fVar15 + fVar3 * fVar17;
        field_16 = fVar7 * fVar13 + fVar1 * fVar15 + fVar5 * fVar17;
        field_20 = fVar13 * fVar8 + fVar15 * fVar2 + fVar17 * fVar6;
        fVar11 = fVar11 + fVar11;
        fVar9 = fVar9 + fVar9;
        field_24 = fVar4 * fVar16 + fVar3 * fVar9 + fVar14 * fVar11;
        field_28 = fVar7 * fVar16 + fVar5 * fVar9 + fVar1 * fVar11;
        field_32 = fVar16 * fVar8 + fVar9 * fVar6 + fVar11 * fVar2;
    }

    // 0x1002c5410
    void AffineTransform3::SetScale(float arg1, float arg2, float arg3) {
        field_0 = arg1;
        field_12 = 0.0;
        field_36 = 0.0;
        field_4 = 0.0;
        field_8 = 0.0;
        field_16 = arg2;
        field_28 = 0.0;
        field_40 = 0.0;
        field_44 = 0.0;
        field_20 = 0.0;
        field_24 = 0.0;
        field_32 = arg3;
    }

    // 0x1002c5460
    void AffineTransform3::Scale(float arg1, float arg2, float arg3) {
        field_0 = field_0 * arg1;
        field_12 = field_12 * arg1;
        field_24 = field_24 * arg1;
        field_36 = arg1 * field_36;
        field_4 = field_4 * arg2;
        field_16 = field_16 * arg2;
        field_28 = field_28 * arg2;
        field_40 = arg2 * field_40;
        field_8 = field_8 * arg3;
        field_20 = field_20 * arg3;
        field_32 = field_32 * arg3;
        field_44 = arg3 * field_44;
    }

    // 0x1002c5500
    void AffineTransform3::Scale(jag::math::Vector3T<float> vector3) {
        Layout local_30;

        auto pfVar1 = local_30.SSOBeginPtr();
        float local_20 = *pfVar1;
        pfVar1 = (float*)local_30.y();
        float local_1c = *pfVar1;
        pfVar1 = (float*)local_30.second();
        Scale((AffineTransform3*)vector3, local_20, local_1c, *pfVar1);
    }

    // 0x1002c5570
    void AffineTransform3::SetTranslate(jag::math::Vector3T<float> vector3) {
        Layout local_30;

        auto pfVar1 = local_30.SSOBeginPtr();
        float local_20 = *pfVar1;
        pfVar1 = (float*)local_30.y();
        float local_1c = *pfVar1;
        pfVar1 = (float*)local_30.second();
        SetTranslate((AffineTransform3*)vector3, local_20, local_1c, *pfVar1);
    }

    // 0x1002c55e0
    void AffineTransform3::SetTranslate(float arg1, float arg2, float arg3) {
        field_28 = 0.0;
        field_32 = 1.0;
        field_24 = 0.0;
        field_8 = 0.0;
        field_12 = 0.0;
        field_16 = 1.0;
        field_20 = 0.0;
        field_0 = 1.0;
        field_4 = 0.0;
        field_36 = arg1;
        field_40 = arg2;
        field_44 = arg3;
    }

    // 0x1002c5630
    void AffineTransform3::PrependTranslate(float arg1, float arg2, float arg3) {
        field_36 = field_24 * arg3 + field_12 * arg2 + field_0 * arg1 + field_36;
        field_40 = field_28 * arg3 + field_16 * arg2 + field_4 * arg1 + field_40;
        field_44 = arg3 * field_32 + arg2 * field_20 + arg1 * field_8 + field_44;
    }

    // 0x1002c56b0
    void AffineTransform3::SetReflection(jag::math::Vector3T<float> vector3, float arg2) {
        uint32_t in_XMM0_Db;
        float in_XMM2_Da;
        uint64_t local_30[2];

        local_30[0] = (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg2);
        float local_20 = in_XMM2_Da;
        auto pfVar1 = local_30->SSOBeginPtr();
        float local_1c = *pfVar1;
        pfVar1 = (float*)local_30->SSOBeginPtr();
        *(float*)vector3 = 1.0 - (*pfVar1 + *pfVar1) * local_1c;
        pfVar1 = (float*)local_30->y();
        local_1c = *pfVar1 * -2.0;
        pfVar1 = (float*)local_30->SSOBeginPtr();
        *(float*)(vector3 + 4) = local_1c * *pfVar1;
        pfVar1 = (float*)local_30->second();
        local_1c = *pfVar1 * -2.0;
        pfVar1 = (float*)local_30->SSOBeginPtr();
        *(float*)(vector3 + 8) = local_1c * *pfVar1;
        pfVar1 = (float*)local_30->SSOBeginPtr();
        local_1c = *pfVar1 * -2.0;
        pfVar1 = (float*)local_30->y();
        *(float*)(vector3 + 12) = local_1c * *pfVar1;
        pfVar1 = (float*)local_30->y();
        local_1c = *pfVar1;
        pfVar1 = (float*)local_30->y();
        *(float*)(vector3 + 16) = 1.0 - (*pfVar1 + *pfVar1) * local_1c;
        pfVar1 = (float*)local_30->second();
        local_1c = *pfVar1 * -2.0;
        pfVar1 = (float*)local_30->y();
        *(float*)(vector3 + 20) = local_1c * *pfVar1;
        pfVar1 = (float*)local_30->SSOBeginPtr();
        local_1c = *pfVar1 * -2.0;
        pfVar1 = (float*)local_30->second();
        *(float*)(vector3 + 24) = local_1c * *pfVar1;
        pfVar1 = (float*)local_30->y();
        local_1c = *pfVar1 * -2.0;
        pfVar1 = (float*)local_30->second();
        *(float*)(vector3 + 28) = local_1c * *pfVar1;
        pfVar1 = (float*)local_30->second();
        local_1c = *pfVar1;
        pfVar1 = (float*)local_30->second();
        *(float*)(vector3 + 32) = 1.0 - (*pfVar1 + *pfVar1) * local_1c;
        pfVar1 = (float*)local_30->SSOBeginPtr();
        local_20 = local_20 * -2.0;
        *(float*)(vector3 + 36) = *pfVar1 * local_20;
        pfVar1 = (float*)local_30->y();
        *(float*)(vector3 + 40) = *pfVar1 * local_20;
        pfVar1 = (float*)local_30->second();
        *(float*)(vector3 + 44) = local_20 * *pfVar1;
    }

    // 0x1002c58f0
    void AffineTransform3::Prepend(const AffineTransform3& affineTransform3) {
        float fVar1 = field_0;
        float fVar2 = field_4;
        float fVar3 = field_8;
        float fVar4 = field_12;
        float fVar5 = field_16;
        float fVar6 = field_20;
        float fVar7 = field_24;
        float fVar8 = field_28;
        float fVar9 = field_32;
        float fVar10 = affineTransform3.field_4;
        float fVar11 = affineTransform3.field_8;
        field_0 = fVar11 * fVar7 + fVar10 * fVar4 + affineTransform3.field_0 * fVar1;
        float fVar12 = affineTransform3.field_0;
        field_4 = fVar11 * fVar8 + fVar10 * fVar5 + fVar12 * fVar2;
        field_8 = fVar11 * fVar9 + fVar12 * fVar3 + affineTransform3.field_4 * fVar6;
        fVar10 = affineTransform3.field_16;
        fVar11 = affineTransform3.field_20;
        field_12 = fVar11 * fVar7 + fVar10 * fVar4 + affineTransform3.field_12 * fVar1;
        fVar12 = affineTransform3.field_12;
        field_16 = fVar11 * fVar8 + fVar10 * fVar5 + fVar12 * fVar2;
        field_20 = fVar11 * fVar9 + fVar12 * fVar3 + affineTransform3.field_16 * fVar6;
        fVar10 = affineTransform3.field_28;
        fVar11 = affineTransform3.field_32;
        field_24 = fVar11 * fVar7 + fVar10 * fVar4 + affineTransform3.field_24 * fVar1;
        fVar12 = affineTransform3.field_24;
        field_28 = fVar11 * fVar8 + fVar10 * fVar5 + fVar12 * fVar2;
        field_32 = fVar11 * fVar9 + fVar12 * fVar3 + affineTransform3.field_28 * fVar6;
        fVar10 = affineTransform3.field_40;
        fVar11 = affineTransform3.field_44;
        field_36 = fVar7 * fVar11 + fVar4 * fVar10 + fVar1 affineTransform3.field_36 + field_36;
        fVar1 = affineTransform3.field_36;
        field_40 = fVar8 * fVar11 + fVar10 * fVar5 + fVar2 * fVar1 + field_40;
        field_44 = fVar11 * fVar9 + fVar1 * fVar3 + fVar6 affineTransform3.field_40 + field_44;
    }

    // 0x1002c5b00
    void AffineTransform3::PrependInverse(const AffineTransform3& affineTransform3) {
        float fVar1 = field_0;
        float fVar2 = field_4;
        float fVar3 = field_8;
        float fVar4 = field_12;
        float fVar5 = field_16;
        float fVar6 = field_24;
        float fVar20 = affineTransform3.field_36;
        float fVar7 = affineTransform3.field_12;
        float fVar8 = affineTransform3.field_40;
        float fVar9 = affineTransform3.field_44;
        float fVar19 =
            affineTransform3.field_8 * fVar9 + affineTransform3.field_4 * fVar8 + affineTransform3.field_0 * fVar20;
        float fVar10 = affineTransform3.field_16;
        float fVar11 = affineTransform3.field_20;
        float fVar12 = affineTransform3.field_24;
        float fVar13 = affineTransform3.field_28;
        float fVar14 = affineTransform3.field_32;
        float fVar21 = fVar9 * fVar14 + fVar8 * fVar13 + fVar20 * fVar12;
        float fVar15 = field_20;
        float fVar16 = field_28;
        float fVar17 = field_32;
        field_0 = fVar12 * fVar6 + fVar7 * fVar4 + affineTransform3.field_0 * fVar1;
        float fVar18 = affineTransform3.field_0;
        field_4 = fVar12 * fVar16 + fVar7 * fVar5 + fVar18 * fVar2;
        field_8 = fVar12 * fVar17 + fVar7 * fVar15 + fVar18 * fVar3;
        fVar12 = affineTransform3.field_4;
        field_12 = fVar13 * fVar6 + fVar10 * fVar4 + fVar12 * fVar1;
        field_16 = fVar13 * fVar16 + fVar10 * fVar5 + fVar12 * fVar2;
        field_20 = fVar13 * fVar17 + fVar12 * fVar3 + affineTransform3.field_16 * fVar15;
        fVar12 = affineTransform3.field_8;
        fVar13 = affineTransform3.field_20;
        field_24 = fVar14 * fVar6 + fVar12 * fVar1 + fVar13 * fVar4;
        field_28 = fVar14 * fVar16 + fVar12 * fVar2 + fVar13 * fVar5;
        field_32 = fVar14 * fVar17 + fVar12 * fVar3 + fVar13 * fVar15;
        fVar20 = -(fVar11 * fVar9 + fVar10 * fVar8 + fVar7 * fVar20);
        field_36 = (fVar4 * fVar20 - (fVar6 * fVar21 + fVar1 * fVar19)) + field_36;
        field_40 = (fVar5 * fVar20 - (fVar16 * fVar21 + fVar2 * fVar19)) + field_40;
        field_44 = (fVar20 * fVar15 - (fVar21 * fVar17 + fVar19 * fVar3)) + field_44;
    }

    // 0x1002c5dd0
    void AffineTransform3::Append(const AffineTransform3& affineTransform3) {
        float fVar1 = field_0;
        float fVar2 = field_4;
        float fVar3 = field_12;
        float fVar4 = field_16;
        float fVar5 = field_24;
        float fVar6 = field_28;
        float fVar7 = field_36;
        float fVar8 = field_40;
        float fVar9 = field_8;
        float fVar10 = field_20;
        float fVar11 = field_32;
        float fVar12 = field_44;
        float fVar13 = affineTransform3.field_12;
        float fVar14 = affineTransform3.field_24;
        field_0 = fVar14 * fVar9 + fVar13 * fVar2 + affineTransform3.field_0 * fVar1;
        float fVar15 = affineTransform3.field_16;
        float fVar16 = affineTransform3.field_28;
        field_4 = fVar16 * fVar9 + fVar15 * fVar2 + affineTransform3.field_4 * fVar1;
        float fVar17 = affineTransform3.field_20;
        float fVar18 = affineTransform3.field_32;
        field_8 = fVar9 * fVar18 + fVar2 * fVar17 + fVar1 affineTransform3.field_8;
        fVar1 = affineTransform3.field_0;
        field_12 = fVar14 * fVar10 + fVar13 * fVar4 + fVar1 * fVar3;
        fVar2 = affineTransform3.field_4;
        field_16 = fVar16 * fVar10 + fVar15 * fVar4 + fVar2 * fVar3;
        fVar9 = affineTransform3.field_8;
        field_20 = fVar10 * fVar18 + fVar17 * fVar4 + fVar3 * fVar9;
        fVar3 = affineTransform3.field_12;
        field_24 = fVar14 * fVar11 + fVar1 * fVar5 + fVar3 * fVar6;
        fVar4 = affineTransform3.field_16;
        field_28 = fVar16 * fVar11 + fVar2 * fVar5 + fVar4 * fVar6;
        fVar10 = affineTransform3.field_20;
        field_32 = fVar18 * fVar11 + fVar5 * fVar9 + fVar6 * fVar10;
        field_36 = affineTransform3.field_24 * fVar12 + fVar3 * fVar8 + fVar1 * fVar7 + affineTransform3.field_36;
        field_40 = affineTransform3.field_28 * fVar12 + fVar4 * fVar8 + fVar2 * fVar7 + affineTransform3.field_40;
        field_44 = fVar12 affineTransform3.field_32 + fVar10 * fVar8 + fVar9 * fVar7 + affineTransform3.field_44;
    }

    // 0x1002c6000
    void AffineTransform3::Multiply(const AffineTransform3& affineTransform31,
                                    const AffineTransform3& affineTransform32) {
        float fVar1 = affineTransform32.field_12;
        float fVar2 = affineTransform31.field_4;
        float fVar3 = affineTransform31.field_8;
        float fVar4 = affineTransform32.field_24;
        field_0 = fVar4 * fVar3 + fVar1 * fVar2 + affineTransform32.field_0 affineTransform31.field_0;
        float fVar5 = affineTransform31.field_0;
        float fVar6 = affineTransform32.field_16;
        float fVar7 = affineTransform32.field_28;
        field_4 = fVar7 * fVar3 + fVar2 * fVar6 + affineTransform32.field_4 * fVar5;
        fVar2 = affineTransform32.field_20;
        float fVar8 = affineTransform32.field_32;
        field_8 = fVar3 * fVar8 + affineTransform31.field_4 * fVar2 + fVar5 affineTransform32.field_8;
        fVar3 = affineTransform32.field_0;
        fVar5 = affineTransform31.field_16;
        float fVar9 = affineTransform31.field_20;
        field_12 = fVar9 * fVar4 + fVar1 * fVar5 + affineTransform31.field_12 * fVar3;
        fVar1 = affineTransform31.field_12;
        float fVar10 = affineTransform32.field_4;
        field_16 = fVar9 * fVar7 + fVar5 * fVar6 + fVar10 * fVar1;
        fVar5 = affineTransform32.field_8;
        field_20 = fVar9 * fVar8 + fVar1 * fVar5 + fVar2 affineTransform31.field_16;
        fVar1 = affineTransform32.field_12;
        fVar2 = affineTransform31.field_28;
        fVar6 = affineTransform31.field_32;
        field_24 = fVar4 * fVar6 + fVar1 * fVar2 + affineTransform31.field_24 * fVar3;
        fVar4 = affineTransform31.field_24;
        fVar9 = affineTransform32.field_16;
        field_28 = fVar7 * fVar6 + fVar4 * fVar10 + fVar2 * fVar9;
        fVar2 = affineTransform32.field_20;
        field_32 = fVar6 * fVar8 + fVar4 * fVar5 + affineTransform31.field_28 * fVar2;
        fVar4 = affineTransform31.field_40;
        fVar6 = affineTransform31.field_44;
        field_36 = affineTransform32.field_24 * fVar6 + fVar1 * fVar4 + fVar3 affineTransform31.field_36 +
                   affineTransform32.field_36;
        fVar1 = affineTransform31.field_36;
        field_40 = affineTransform32.field_28 * fVar6 + fVar4 * fVar9 + fVar10 * fVar1 + affineTransform32.field_40;
        field_44 = fVar6 affineTransform32.field_32 + fVar2 affineTransform31.field_40 + fVar1 * fVar5 +
                   affineTransform32.field_44;
    }

    // 0x1002c6210
    void AffineTransform3::TransformCoord(float arg1, float arg2, float arg3, Array<float>& arg4) {
        float fVar1 = field_0;
        float fVar2 = field_12;
        float fVar3 = field_24;
        float fVar4 = field_36;
        float* pfVar5 = &arg4[0];
        *pfVar5 = fVar3 * arg3 + fVar2 * arg2 + fVar1 * arg1 + fVar4;
        fVar1 = field_4;
        fVar2 = field_16;
        fVar3 = field_28;
        fVar4 = field_40;
        pfVar5 = &arg4[1];
        *pfVar5 = fVar3 * arg3 + fVar2 * arg2 + fVar1 * arg1 + fVar4;
        fVar1 = field_8;
        fVar2 = field_20;
        fVar3 = field_32;
        fVar4 = field_44;
        pfVar5 = &arg4[2];
        *pfVar5 = arg3 * fVar3 + arg2 * fVar2 + arg1 * fVar1 + fVar4;
    }

    // 0x1002c6390
    void AffineTransform3::TransformCoord(int arg1, Array<int>& arg2, Array<int>& arg3, Array<int>& arg4) {
        int* piVar5 = &arg2[(unsigned long)arg1];
        float fVar6 = (float)*piVar5;
        piVar5 = &arg3[(unsigned long)arg1];
        float fVar7 = (float)*piVar5;
        piVar5 = &arg4[(unsigned long)arg1];
        float fVar1 = field_0;
        float fVar2 = field_12;
        float fVar8 = (float)*piVar5;
        float fVar3 = field_24;
        float fVar4 = field_36;
        piVar5 = &arg2[(unsigned long)arg1];
        *piVar5 = (int)(fVar3 * fVar8 + fVar2 * fVar7 + fVar1 * fVar6 + fVar4);
        fVar1 = field_4;
        fVar2 = field_16;
        fVar3 = field_28;
        fVar4 = field_40;
        piVar5 = &arg3[(unsigned long)arg1];
        *piVar5 = (int)(fVar3 * fVar8 + fVar2 * fVar7 + fVar1 * fVar6 + fVar4);
        fVar1 = field_8;
        fVar2 = field_20;
        fVar3 = field_32;
        fVar4 = field_44;
        piVar5 = &arg4[(unsigned long)arg1];
        *piVar5 = (int)(fVar8 * fVar3 + fVar7 * fVar2 + fVar6 * fVar1 + fVar4);
    }

    // 0x1002c64c0
    void AffineTransform3::TransformCoord(int arg1, Array<float>& arg2, Array<float>& arg3, Array<float>& arg4) {
        float* pfVar8 = &arg2[(unsigned long)arg1];
        float fVar1 = *pfVar8;
        pfVar8 = &arg3[(unsigned long)arg1];
        float fVar2 = *pfVar8;
        pfVar8 = &arg4[(unsigned long)arg1];
        float fVar3 = *pfVar8;
        float fVar4 = field_0;
        float fVar5 = field_12;
        float fVar6 = field_24;
        float fVar7 = field_36;
        pfVar8 = &arg2[(unsigned long)arg1];
        *pfVar8 = fVar6 * fVar3 + fVar5 * fVar2 + fVar4 * fVar1 + fVar7;
        fVar4 = field_4;
        fVar5 = field_16;
        fVar6 = field_28;
        fVar7 = field_40;
        pfVar8 = &arg3[(unsigned long)arg1];
        *pfVar8 = fVar6 * fVar3 + fVar5 * fVar2 + fVar4 * fVar1 + fVar7;
        fVar4 = field_8;
        fVar5 = field_20;
        fVar6 = field_32;
        fVar7 = field_44;
        pfVar8 = &arg4[(unsigned long)arg1];
        *pfVar8 = fVar3 * fVar6 + fVar2 * fVar5 + fVar1 * fVar4 + fVar7;
    }

    // 0x1002c6600
    void AffineTransform3::InvTransformCoord(float arg1, float arg2, float arg3, Array<float>& arg4) {
        float fVar5 = arg1 - field_36;
        float fVar6 = arg2 - field_40;
        float fVar7 = arg3 - field_44;
        float fVar1 = field_0;
        float fVar2 = field_4;
        float fVar3 = field_8;
        float* pfVar4 = &arg4[0];
        *pfVar4 = fVar3 * fVar7 + fVar2 * fVar6 + fVar1 * fVar5;
        fVar1 = field_12;
        fVar2 = field_16;
        fVar3 = field_20;
        pfVar4 = &arg4[1];
        *pfVar4 = fVar3 * fVar7 + fVar2 * fVar6 + fVar1 * fVar5;
        fVar1 = field_24;
        fVar2 = field_28;
        fVar3 = field_32;
        pfVar4 = &arg4[2];
        *pfVar4 = fVar7 * fVar3 + fVar6 * fVar2 + fVar5 * fVar1;
    }

    // 0x1002c6700
    void AffineTransform3::InvTransformCoord(Array<float>& arg1) {
        float* pfVar4 = &arg1[0];
        float fVar5 = *pfVar4 - field_36;
        pfVar4 = &arg1[1];
        float fVar6 = *pfVar4 - field_40;
        pfVar4 = &arg1[2];
        float fVar7 = *pfVar4 - field_44;
        float fVar1 = field_0;
        float fVar2 = field_4;
        float fVar3 = field_8;
        pfVar4 = &arg1[0];
        *pfVar4 = fVar3 * fVar7 + fVar2 * fVar6 + fVar1 * fVar5;
        fVar1 = field_12;
        fVar2 = field_16;
        fVar3 = field_20;
        pfVar4 = &arg1[1];
        *pfVar4 = fVar3 * fVar7 + fVar2 * fVar6 + fVar1 * fVar5;
        fVar1 = field_24;
        fVar2 = field_28;
        fVar3 = field_32;
        pfVar4 = &arg1[2];
        *pfVar4 = fVar7 * fVar3 + fVar6 * fVar2 + fVar5 * fVar1;
    }

    // 0x1002c6830
    void AffineTransform3::TransformVector(float arg1, float arg2, float arg3, Array<float>& arg4) {
        float fVar1 = field_0;
        float fVar2 = field_12;
        float fVar3 = field_24;
        float* pfVar4 = &arg4[0];
        *pfVar4 = fVar3 * arg3 + fVar2 * arg2 + fVar1 * arg1;
        fVar1 = field_4;
        fVar2 = field_16;
        fVar3 = field_28;
        pfVar4 = &arg4[1];
        *pfVar4 = fVar3 * arg3 + fVar2 * arg2 + fVar1 * arg1;
        fVar1 = field_8;
        fVar2 = field_20;
        fVar3 = field_32;
        pfVar4 = &arg4[2];
        *pfVar4 = arg3 * fVar3 + arg2 * fVar2 + arg1 * fVar1;
    }

    // 0x1002c6920
    void AffineTransform3::TransformVector(int arg1, Array<int>& arg2, Array<int>& arg3, Array<int>& arg4) {
        int* piVar1 = &arg2[(unsigned long)arg1];
        float fVar4 = (float)*piVar1;
        piVar1 = &arg3[(unsigned long)arg1];
        float fVar5 = (float)*piVar1;
        piVar1 = &arg4[(unsigned long)arg1];
        float fVar6 = (float)*piVar1;
        uint32_t uVar3 = jag::math::RoundFloatToInt(field_24 * fVar6 + field_12 * fVar5 + field_0 * fVar4);
        uint32_t* puVar2 = &arg2[(unsigned long)arg1];
        *puVar2 = uVar3;
        uVar3 = jag::math::RoundFloatToInt(field_28 * fVar6 + field_16 * fVar5 + field_4 * fVar4);
        puVar2 = &arg3[(unsigned long)arg1];
        *puVar2 = uVar3;
        uVar3 = jag::math::RoundFloatToInt(fVar6 * field_32 + fVar5 * field_20 + fVar4 * field_8);
        puVar2 = &arg4[(unsigned long)arg1];
        *puVar2 = uVar3;
    }

    // 0x1002c6a50
    void AffineTransform3::TransformVector(int arg1, Array<float>& arg2, Array<float>& arg3, Array<float>& arg4) {
        float* pfVar7 = &arg2[(unsigned long)arg1];
        float fVar1 = *pfVar7;
        pfVar7 = &arg3[(unsigned long)arg1];
        float fVar2 = *pfVar7;
        pfVar7 = &arg4[(unsigned long)arg1];
        float fVar3 = *pfVar7;
        float fVar4 = field_0;
        float fVar5 = field_12;
        float fVar6 = field_24;
        pfVar7 = &arg2[(unsigned long)arg1];
        *pfVar7 = fVar6 * fVar3 + fVar5 * fVar2 + fVar4 * fVar1;
        fVar4 = field_4;
        fVar5 = field_16;
        fVar6 = field_28;
        pfVar7 = &arg3[(unsigned long)arg1];
        *pfVar7 = fVar6 * fVar3 + fVar5 * fVar2 + fVar4 * fVar1;
        fVar4 = field_8;
        fVar5 = field_20;
        fVar6 = field_32;
        pfVar7 = &arg4[(unsigned long)arg1];
        *pfVar7 = fVar3 * fVar6 + fVar2 * fVar5 + fVar1 * fVar4;
    }

    // 0x1002c6b80
    void AffineTransform3::InvTransformVector(float arg1, float arg2, float arg3, Array<float>& arg4) {
        float fVar1 = field_0;
        float fVar2 = field_4;
        float fVar3 = field_8;
        float* pfVar4 = &arg4[0];
        *pfVar4 = fVar3 * arg3 + fVar2 * arg2 + fVar1 * arg1;
        fVar1 = field_12;
        fVar2 = field_16;
        fVar3 = field_20;
        pfVar4 = &arg4[1];
        *pfVar4 = fVar3 * arg3 + fVar2 * arg2 + fVar1 * arg1;
        fVar1 = field_24;
        fVar2 = field_28;
        fVar3 = field_32;
        pfVar4 = &arg4[2];
        *pfVar4 = arg3 * fVar3 + arg2 * fVar2 + arg1 * fVar1;
    }

    // 0x1002c6c70
    void AffineTransform3::InvTransformVector(Array<float>& arg1) {
        float* pfVar7 = &arg1[0];
        float fVar1 = *pfVar7;
        pfVar7 = &arg1[1];
        float fVar2 = *pfVar7;
        pfVar7 = &arg1[2];
        float fVar3 = *pfVar7;
        float fVar4 = field_0;
        float fVar5 = field_4;
        float fVar6 = field_8;
        pfVar7 = &arg1[0];
        *pfVar7 = fVar6 * fVar3 + fVar5 * fVar2 + fVar4 * fVar1;
        fVar4 = field_12;
        fVar5 = field_16;
        fVar6 = field_20;
        pfVar7 = &arg1[1];
        *pfVar7 = fVar6 * fVar3 + fVar5 * fVar2 + fVar4 * fVar1;
        fVar4 = field_24;
        fVar5 = field_28;
        fVar6 = field_32;
        pfVar7 = &arg1[2];
        *pfVar7 = fVar3 * fVar6 + fVar2 * fVar5 + fVar1 * fVar4;
    }

    // 0x1002c6d90
    Array<float>* AffineTransform3::GetTranslationComponent(Array<float>& arg1) {
        float fVar1 = field_36;
        float* pfVar2 = &arg1[0];
        *pfVar2 = fVar1;
        fVar1 = field_40;
        pfVar2 = &arg1[1];
        *pfVar2 = fVar1;
        fVar1 = field_44;
        pfVar2 = &arg1[2];
        *pfVar2 = fVar1;
        return arg1;
    }

    // 0x1002c6e10
    Array<float>* AffineTransform3::ToLinearMatrix3x3(Array<float>& arg1) {
        float fVar1 = field_0;
        float* pfVar2 = &arg1[0];
        *pfVar2 = fVar1;
        fVar1 = field_4;
        pfVar2 = &arg1[1];
        *pfVar2 = fVar1;
        fVar1 = field_8;
        pfVar2 = &arg1[2];
        *pfVar2 = fVar1;
        fVar1 = field_12;
        pfVar2 = &arg1[3];
        *pfVar2 = fVar1;
        fVar1 = field_16;
        pfVar2 = &arg1[4];
        *pfVar2 = fVar1;
        fVar1 = field_20;
        pfVar2 = &arg1[5];
        *pfVar2 = fVar1;
        fVar1 = field_24;
        pfVar2 = &arg1[6];
        *pfVar2 = fVar1;
        fVar1 = field_28;
        pfVar2 = &arg1[7];
        *pfVar2 = fVar1;
        fVar1 = field_32;
        pfVar2 = &arg1[8];
        *pfVar2 = fVar1;
        return arg1;
    }

    // 0x1002c6f50
    Array<float>* AffineTransform3::ToTransposedLinearMatrix3x3(Array<float>& arg1) {
        float fVar1 = field_0;
        float* pfVar2 = &arg1[0];
        *pfVar2 = fVar1;
        fVar1 = field_12;
        pfVar2 = &arg1[1];
        *pfVar2 = fVar1;
        fVar1 = field_24;
        pfVar2 = &arg1[2];
        *pfVar2 = fVar1;
        fVar1 = field_4;
        pfVar2 = &arg1[3];
        *pfVar2 = fVar1;
        fVar1 = field_16;
        pfVar2 = &arg1[4];
        *pfVar2 = fVar1;
        fVar1 = field_28;
        pfVar2 = &arg1[5];
        *pfVar2 = fVar1;
        fVar1 = field_8;
        pfVar2 = &arg1[6];
        *pfVar2 = fVar1;
        fVar1 = field_20;
        pfVar2 = &arg1[7];
        *pfVar2 = fVar1;
        fVar1 = field_32;
        pfVar2 = &arg1[8];
        *pfVar2 = fVar1;
        return arg1;
    }

    // 0x1002c7090
    Array<float>* AffineTransform3::ToTransposedLinearMatrix3x4(Array<float>& arg1) {
        float fVar1 = field_0;
        float* pfVar2 = &arg1[0];
        *pfVar2 = fVar1;
        fVar1 = field_12;
        pfVar2 = &arg1[1];
        *pfVar2 = fVar1;
        fVar1 = field_24;
        pfVar2 = &arg1[2];
        *pfVar2 = fVar1;
        uint32_t* puVar3 = &arg1[3];
        *puVar3 = 0;
        fVar1 = field_4;
        pfVar2 = &arg1[4];
        *pfVar2 = fVar1;
        fVar1 = field_16;
        pfVar2 = &arg1[5];
        *pfVar2 = fVar1;
        fVar1 = field_28;
        pfVar2 = &arg1[6];
        *pfVar2 = fVar1;
        puVar3 = &arg1[7];
        *puVar3 = 0;
        fVar1 = field_8;
        pfVar2 = &arg1[8];
        *pfVar2 = fVar1;
        fVar1 = field_20;
        pfVar2 = &arg1[9];
        *pfVar2 = fVar1;
        fVar1 = field_32;
        pfVar2 = &arg1[10];
        *pfVar2 = fVar1;
        puVar3 = &arg1[11];
        *puVar3 = 0;
        return arg1;
    }

    // 0x1002c7210
    Array<float>* AffineTransform3::ToAffineMatrix4x4(Array<float>& arg1, int arg2) {
        float fVar1 = field_0;
        float* pfVar2 = &arg1[(long)arg2];
        *pfVar2 = fVar1;
        fVar1 = field_4;
        pfVar2 = &arg1[(long)(arg2 + 1)];
        *pfVar2 = fVar1;
        fVar1 = field_8;
        pfVar2 = &arg1[(long)(arg2 + 2)];
        *pfVar2 = fVar1;
        uint32_t* puVar3 = &arg1[(long)(arg2 + 3)];
        *puVar3 = 0;
        fVar1 = field_12;
        pfVar2 = &arg1[(long)(arg2 + 4)];
        *pfVar2 = fVar1;
        fVar1 = field_16;
        pfVar2 = &arg1[(long)(arg2 + 5)];
        *pfVar2 = fVar1;
        fVar1 = field_20;
        pfVar2 = &arg1[(long)(arg2 + 6)];
        *pfVar2 = fVar1;
        puVar3 = &arg1[(long)(arg2 + 7)];
        *puVar3 = 0;
        fVar1 = field_24;
        pfVar2 = &arg1[(long)(arg2 + 8)];
        *pfVar2 = fVar1;
        fVar1 = field_28;
        pfVar2 = &arg1[(long)(arg2 + 9)];
        *pfVar2 = fVar1;
        fVar1 = field_32;
        pfVar2 = &arg1[(long)(arg2 + 10)];
        *pfVar2 = fVar1;
        puVar3 = &arg1[(long)(arg2 + 11)];
        *puVar3 = 0;
        fVar1 = field_36;
        pfVar2 = &arg1[(long)(arg2 + 12)];
        *pfVar2 = fVar1;
        fVar1 = field_40;
        pfVar2 = &arg1[(long)(arg2 + 13)];
        *pfVar2 = fVar1;
        fVar1 = field_44;
        pfVar2 = &arg1[(long)(arg2 + 14)];
        *pfVar2 = fVar1;
        puVar3 = &arg1[(long)(arg2 + 15)];
        *puVar3 = 1065353216;
        return arg1;
    }

    // 0x1002c7420
    Array<float>* AffineTransform3::ToTransposedAffineMatrix3x4(Array<float>& arg1) {
        float fVar1 = field_0;
        float* pfVar2 = &arg1[0];
        *pfVar2 = fVar1;
        fVar1 = field_12;
        pfVar2 = &arg1[1];
        *pfVar2 = fVar1;
        fVar1 = field_24;
        pfVar2 = &arg1[2];
        *pfVar2 = fVar1;
        fVar1 = field_36;
        pfVar2 = &arg1[3];
        *pfVar2 = fVar1;
        fVar1 = field_4;
        pfVar2 = &arg1[4];
        *pfVar2 = fVar1;
        fVar1 = field_16;
        pfVar2 = &arg1[5];
        *pfVar2 = fVar1;
        fVar1 = field_28;
        pfVar2 = &arg1[6];
        *pfVar2 = fVar1;
        fVar1 = field_40;
        pfVar2 = &arg1[7];
        *pfVar2 = fVar1;
        fVar1 = field_8;
        pfVar2 = &arg1[8];
        *pfVar2 = fVar1;
        fVar1 = field_20;
        pfVar2 = &arg1[9];
        *pfVar2 = fVar1;
        fVar1 = field_32;
        pfVar2 = &arg1[10];
        *pfVar2 = fVar1;
        fVar1 = field_44;
        pfVar2 = &arg1[11];
        *pfVar2 = fVar1;
        return arg1;
    }

    // 0x1002c75c0
    Array<float>* AffineTransform3::ToTransposedAffineMatrix4x4(Array<float>& arg1, int arg2) {
        float fVar1 = field_0;
        float* pfVar2 = &arg1[(long)arg2];
        *pfVar2 = fVar1;
        fVar1 = field_12;
        pfVar2 = &arg1[(long)(arg2 + 1)];
        *pfVar2 = fVar1;
        fVar1 = field_24;
        pfVar2 = &arg1[(long)(arg2 + 2)];
        *pfVar2 = fVar1;
        fVar1 = field_36;
        pfVar2 = &arg1[(long)(arg2 + 3)];
        *pfVar2 = fVar1;
        fVar1 = field_4;
        pfVar2 = &arg1[(long)(arg2 + 4)];
        *pfVar2 = fVar1;
        fVar1 = field_16;
        pfVar2 = &arg1[(long)(arg2 + 5)];
        *pfVar2 = fVar1;
        fVar1 = field_28;
        pfVar2 = &arg1[(long)(arg2 + 6)];
        *pfVar2 = fVar1;
        fVar1 = field_40;
        pfVar2 = &arg1[(long)(arg2 + 7)];
        *pfVar2 = fVar1;
        fVar1 = field_8;
        pfVar2 = &arg1[(long)(arg2 + 8)];
        *pfVar2 = fVar1;
        fVar1 = field_20;
        pfVar2 = &arg1[(long)(arg2 + 9)];
        *pfVar2 = fVar1;
        fVar1 = field_32;
        pfVar2 = &arg1[(long)(arg2 + 10)];
        *pfVar2 = fVar1;
        fVar1 = field_44;
        pfVar2 = &arg1[(long)(arg2 + 11)];
        *pfVar2 = fVar1;
        uint32_t* puVar3 = &arg1[(long)(arg2 + 12)];
        *puVar3 = 0;
        puVar3 = &arg1[(long)(arg2 + 13)];
        *puVar3 = 0;
        puVar3 = &arg1[(long)(arg2 + 14)];
        *puVar3 = 0;
        puVar3 = &arg1[(long)(arg2 + 15)];
        *puVar3 = 1065353216;
        return arg1;
    }

    // 0x1002c77d0
    AffineTransform3* AffineTransform3::ToString() {
        float* in_RSI;

        new (this) eastl::string();
        append_sprintf("%f,%f,%f,%f\n%f,%f,%f,%f\n%f,%f,%f%f", (double)*in_RSI, (double)in_RSI[3], (double)in_RSI[6],
                       (double)in_RSI[9], (double)in_RSI[1], (double)in_RSI[4], (double)in_RSI[7], (double)in_RSI[10]);
        return this;
    }

    // 0x1002c78b0
    bool AffineTransform3::HasSameRotation(const AffineTransform3& affineTransform31,
                                           const AffineTransform3& affineTransform32) {
        if (((((affineTransform31.field_0 == affineTransform32.field_0) &&
               (affineTransform31.field_4 == affineTransform32.field_4)) &&
              (affineTransform31.field_8 == affineTransform32.field_8)) &&
             ((affineTransform31.field_12 == affineTransform32.field_12 &&
               (affineTransform31.field_16 == affineTransform32.field_16)))) &&
            ((affineTransform31.field_20 == affineTransform32.field_20 &&
              ((affineTransform31.field_24 == affineTransform32.field_24 &&
                (affineTransform31.field_28 == affineTransform32.field_28)))))) {
            return affineTransform31.field_32 == affineTransform32.field_32;
        }
        return false;
    }

} // namespace jag::oldscape::math

// 0x1002c4370
void sqrt(float arg1) {
    unsigned int in_XMM0_Db;
    uint32_t in_XMM0_Dc;
    uint32_t in_XMM0_Dd;
    uint8_t in_XMM1[16];
    uint8_t auVar1[16];

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = arg1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    float fVar2 = arg1 * auVar1._0_4_;
    return (((uint64_t)(~(in_XMM0_Db & 2147483647) & in_XMM0_Db) << 32) |
            (uint32_t)(~-(unsigned int)(ABS(arg1) < 1.1754944e-38) &
                       (unsigned int)((fVar2 * auVar1._0_4_ - 3.0) * fVar2 * -0.5)));
}

// 0x1002c4620
void cos(float arg1) {
    _cosf();
}

// 0x1002c4630
void sin(float arg1) {
    _sinf();
}
