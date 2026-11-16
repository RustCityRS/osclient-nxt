// libs/oldscape/jagex3/math/AffineTransform3.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

namespace jag::oldscape::math {
    class AffineTransform3 {
    public:
        void AppendXRotation(float);
        void AppendYRotation(float);
        void AppendZRotation(float);
        void AppendTranslate(float, float, float);
        AffineTransform3();
        void SetIdenity();
        AffineTransform3(AffineTransform3 const&);
        void Set(AffineTransform3 const&);
        AffineTransform3(float, float, float, float, float, float, float, float, float, float, float, float);
        void Set(float, float, float, float, float, float, float, float, float, float, float, float);
        void Set(RotTrans const&);
        void FromRotTrans(RotTrans const&);
        void SetScale(jag::math::Vector3T<float>);
        void AppendRotation(jag::math::QuaternionT<float> const&);
        void AppendTranslate(jag::math::Vector3T<float>);
        void FromQuaternion(jag::math::QuaternionT<float> const&);
        void SetLookAt(double, double, double, double, double, double, double, double, double);
        void SetCoordinateFrame(float, float, float, float, float, float, float, float, float);
        void SetInverse(AffineTransform3 const*);
        void Invert();
        void SetXRotation(float);
        void SetYRotation(float);
        void SetZRotation(float);
        void SetRotation(float, float, float, float);
        void SetRotation(jag::math::QuaternionT<float> const&);
        void SetQuaternion(float, float, float, float);
        void PrependRotation(float, float, float, float);
        void AppendRotation(float, float, float, float);
        void AppendQuaternion(float, float, float, float);
        void PrependQuaternion(float, float, float, float);
        void SetScale(float, float, float);
        void Scale(float, float, float);
        void Scale(jag::math::Vector3T<float>);
        void SetTranslate(jag::math::Vector3T<float>);
        void SetTranslate(float, float, float);
        void PrependTranslate(float, float, float);
        void SetReflection(jag::math::Vector3T<float>, float);
        void Prepend(AffineTransform3 const&);
        void PrependInverse(AffineTransform3 const&);
        void Append(AffineTransform3 const&);
        void Multiply(AffineTransform3 const&, AffineTransform3 const&);
        void TransformCoord(float, float, float, Array<float, eastl::allocator>&);
        void TransformCoord(int, Array<int, eastl::allocator>&, Array<int, eastl::allocator>&,
                            Array<int, eastl::allocator>&);
        void TransformCoord(int, Array<float, eastl::allocator>&, Array<float, eastl::allocator>&,
                            Array<float, eastl::allocator>&);
        void InvTransformCoord(float, float, float, Array<float, eastl::allocator>&);
        void InvTransformCoord(Array<float, eastl::allocator>&);
        void TransformVector(float, float, float, Array<float, eastl::allocator>&);
        void TransformVector(int, Array<int, eastl::allocator>&, Array<int, eastl::allocator>&,
                             Array<int, eastl::allocator>&);
        void TransformVector(int, Array<float, eastl::allocator>&, Array<float, eastl::allocator>&,
                             Array<float, eastl::allocator>&);
        void InvTransformVector(float, float, float, Array<float, eastl::allocator>&);
        void InvTransformVector(Array<float, eastl::allocator>&);
        Array* GetTranslationComponent(Array<float, eastl::allocator>&);
        Array* ToLinearMatrix3x3(Array<float, eastl::allocator>&);
        Array* ToTransposedLinearMatrix3x3(Array<float, eastl::allocator>&);
        Array* ToTransposedLinearMatrix3x4(Array<float, eastl::allocator>&);
        Array* ToAffineMatrix4x4(Array<float, eastl::allocator>&, int);
        Array* ToTransposedAffineMatrix3x4(Array<float, eastl::allocator>&);
        Array* ToTransposedAffineMatrix4x4(Array<float, eastl::allocator>&, int);
        ToString();
        bool HasSameRotation(AffineTransform3 const&, AffineTransform3 const&);

        // data members, from how the methods use this: 52 bytes
        float field_0;  // offset 0
        float field_4;  // offset 4
        float field_8;  // offset 8
        float field_12; // offset 12
        float field_16; // offset 16
        float field_20; // offset 20
        float field_24; // offset 24
        float field_28; // offset 28
        float field_32; // offset 32
        float field_36; // offset 36
        float field_40; // offset 40
        float field_44; // offset 44
        char _unknown_48[4];
    };

    // 0x1002af4b0, 256 bytes, placed by class name and debug map
    // AffineTransform3::AppendXRotation(float)
    void AffineTransform3::AppendXRotation(float param_1) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;

        fVar5 = (float)::cos(param_1);
        fVar6 = (float)::sin(param_1);
        fVar1 = field_16;
        fVar2 = field_28;
        fVar3 = field_40;
        fVar4 = field_4;
        field_4 = fVar4 * fVar5 - field_8 * fVar6;
        field_8 = field_8 * fVar5 + fVar4 * fVar6;
        field_16 = fVar1 * fVar5 - field_20 * fVar6;
        field_20 = field_20 * fVar5 + fVar1 * fVar6;
        field_28 = fVar2 * fVar5 - field_32 * fVar6;
        field_32 = field_32 * fVar5 + fVar2 * fVar6;
        field_40 = fVar3 * fVar5 - field_44 * fVar6;
        field_44 = field_44 * fVar5 + fVar3 * fVar6;
    }

    // 0x1002af5c0, 256 bytes, placed by class name and debug map
    // AffineTransform3::AppendYRotation(float)
    void AffineTransform3::AppendYRotation(float param_1) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;

        fVar5 = (float)::cos(param_1);
        fVar6 = (float)::sin(param_1);
        fVar1 = field_12;
        fVar2 = field_24;
        fVar3 = field_36;
        fVar4 = field_0;
        field_0 = field_8 * fVar6 + fVar4 * fVar5;
        field_8 = field_8 * fVar5 - fVar4 * fVar6;
        field_12 = field_20 * fVar6 + fVar1 * fVar5;
        field_20 = field_20 * fVar5 - fVar1 * fVar6;
        field_24 = field_32 * fVar6 + fVar2 * fVar5;
        field_32 = field_32 * fVar5 - fVar2 * fVar6;
        field_36 = field_44 * fVar6 + fVar3 * fVar5;
        field_44 = field_44 * fVar5 - fVar3 * fVar6;
    }

    // 0x1002af6c0, 256 bytes, placed by class name and debug map
    // AffineTransform3::AppendZRotation(float)
    void AffineTransform3::AppendZRotation(float param_1) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;

        fVar5 = (float)::cos(param_1);
        fVar6 = (float)::sin(param_1);
        fVar1 = field_12;
        fVar2 = field_24;
        fVar3 = field_36;
        fVar4 = field_0;
        field_0 = fVar4 * fVar5 - field_4 * fVar6;
        field_4 = field_4 * fVar5 + fVar4 * fVar6;
        field_12 = fVar1 * fVar5 - field_16 * fVar6;
        field_16 = field_16 * fVar5 + fVar1 * fVar6;
        field_24 = fVar2 * fVar5 - field_28 * fVar6;
        field_28 = field_28 * fVar5 + fVar2 * fVar6;
        field_36 = fVar3 * fVar5 - field_40 * fVar6;
        field_40 = field_40 * fVar5 + fVar3 * fVar6;
    }

    // 0x1002af7c0, 48 bytes, placed by class name and debug map
    // AffineTransform3::AppendTranslate(float, float, float)
    void AffineTransform3::AppendTranslate(float param_1, float param_2, float param_3) {
        field_36 = param_1 + field_36;
        field_40 = param_2 + field_40;
        field_44 = param_3 + field_44;
    }

    // 0x1002c3bf0, 16 bytes, base-object constructor, placed by class name
    // AffineTransform3::AffineTransform3()
    void AffineTransform3::AffineTransform3() {
        SetIdenity(this);
    }

    // 0x1002c3c00, 64 bytes, placed by class name
    // AffineTransform3::SetIdenity()
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

    // 0x1002c3c40, 16 bytes, complete-object constructor, placed by class name
    // AffineTransform3::AffineTransform3(): jumps straight to the base-object constructor

    // 0x1002c3c50, 16 bytes, base-object constructor, placed by class name
    // AffineTransform3::AffineTransform3(AffineTransform3 const&)
    void AffineTransform3::AffineTransform3(AffineTransform3* param_1) {
        Set(this, param_1);
    }

    // 0x1002c3c60, 128 bytes, placed by class name
    // AffineTransform3::Set(AffineTransform3 const&)
    void AffineTransform3::Set(AffineTransform3* param_1) {
        field_0 = param_1->field_0;
        field_12 = param_1->field_12;
        field_24 = param_1->field_24;
        field_36 = param_1->field_36;
        field_4 = param_1->field_4;
        field_16 = param_1->field_16;
        field_28 = param_1->field_28;
        field_40 = param_1->field_40;
        field_8 = param_1->field_8;
        field_20 = param_1->field_20;
        field_32 = param_1->field_32;
        field_44 = param_1->field_44;
    }

    // 0x1002c3ce0, 16 bytes, complete-object constructor, placed by class name
    // AffineTransform3::AffineTransform3(AffineTransform3 const&): jumps straight to the base-object constructor

    // 0x1002c3cf0, 80 bytes, base-object constructor, placed by class name
    // AffineTransform3::AffineTransform3(float, float, float, float, float, float, float, float, float, float, float, float)
    void AffineTransform3::AffineTransform3(float param_1, float param_2, float param_3, float param_4, float param_5,
                                            float param_6, float param_7, float param_8, float param_9, float param_10,
                                            float param_11, float param_12) {
        Set(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10, param_11,
            param_12);
    }

    // 0x1002c3d40, 96 bytes, placed by class name
    // AffineTransform3::Set(float, float, float, float, float, float, float, float, float, float, float, float)
    void AffineTransform3::Set(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6,
                               float param_7, float param_8, float param_9, float param_10, float param_11,
                               float param_12) {
        field_0 = param_1;
        field_4 = param_5;
        field_8 = param_9;
        field_12 = param_2;
        field_16 = param_6;
        field_20 = param_10;
        field_24 = param_3;
        field_28 = param_7;
        field_32 = param_11;
        field_36 = param_4;
        field_40 = param_8;
        field_44 = param_12;
    }

    // 0x1002c3da0, 80 bytes, complete-object constructor, placed by class name
    // AffineTransform3::AffineTransform3(float, float, float, float, float, float, float, float, float, float, float, float)
    void AffineTransform3::AffineTransform3(float param_1, float param_2, float param_3, float param_4, float param_5,
                                            float param_6, float param_7, float param_8, float param_9, float param_10,
                                            float param_11, float param_12) {
        AffineTransform3(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9,
                         param_10, param_11, param_12);
    }

    // 0x1002c3df0, 16 bytes, placed by class name
    // AffineTransform3::Set(RotTrans const&)
    void AffineTransform3::Set(RotTrans* param_1) {
        FromRotTrans(this, param_1);
    }

    // 0x1002c3e00, 96 bytes, placed by class name
    // AffineTransform3::FromRotTrans(RotTrans const&)
    void AffineTransform3::FromRotTrans(RotTrans* param_1) {
        undefined8* puVar1;
        QuaternionT* pQVar2;

        puVar1 = (undefined8*)shared_ptr<jag::math::Vector3T<float>>::operator*(
            (shared_ptr<jag::math::Vector3T<float>>*)&param_1->field_16);
        SetScale(*puVar1, *(undefined4*)(puVar1 + 1), this);
        pQVar2 = (QuaternionT*)shared_ptr<jag::math::QuaternionT<float>>::operator*(
            (shared_ptr<jag::math::QuaternionT<float>>*)param_1);
        AppendRotation(this, pQVar2);
        puVar1 = (undefined8*)shared_ptr<jag::math::Vector3T<float>>::operator*(
            (shared_ptr<jag::math::Vector3T<float>>*)&param_1->field_32);
        AppendTranslate(*puVar1, *(undefined4*)(puVar1 + 1), this);
    }

    // 0x1002c3e60, 112 bytes, placed by class name
    // AffineTransform3::SetScale(jag::math::Vector3T<float>)
    void AffineTransform3::SetScale(undefined8 param_1, undefined4 param_2, AffineTransform3* param_3, type* param_4) {
        vector* pvVar1;
        float* pfVar2;
        undefined8 local_30;
        undefined4 local_28;
        float local_20;
        float local_1c;

        local_30 = param_1;
        local_28 = param_2;
        pvVar1 = local_30.SSOBeginPtr(param_4);
        local_20 = *(float*)pvVar1;
        pfVar2 = (float*)local_30.y();
        local_1c = *pfVar2;
        pfVar2 = (float*)local_30.second();
        SetScale(param_3, local_20, local_1c, *pfVar2);
    }

    // 0x1002c3f10, 32 bytes, placed by class name
    // AffineTransform3::AppendRotation(jag::math::QuaternionT<float> const&)
    void AffineTransform3::AppendRotation(QuaternionT* param_1) {
        AppendQuaternion(this, *(float*)param_1, *(float*)(param_1 + 4), *(float*)(param_1 + 8),
                         *(float*)(param_1 + 12));
    }

    // 0x1002c3f70, 112 bytes, placed by class name
    // AffineTransform3::AppendTranslate(jag::math::Vector3T<float>)
    void AffineTransform3::AppendTranslate(undefined8 param_1, undefined4 param_2, AffineTransform3* param_3,
                                           type* param_4) {
        vector* pvVar1;
        float* pfVar2;
        undefined8 local_30;
        undefined4 local_28;
        float local_20;
        float local_1c;

        local_30 = param_1;
        local_28 = param_2;
        pvVar1 = local_30.SSOBeginPtr(param_4);
        local_20 = *(float*)pvVar1;
        pfVar2 = (float*)local_30.y();
        local_1c = *pfVar2;
        pfVar2 = (float*)local_30.second();
        AppendTranslate(param_3, local_20, local_1c, *pfVar2);
    }

    // 0x1002c3fe0, 272 bytes, placed by class name
    // AffineTransform3::FromQuaternion(jag::math::QuaternionT<float> const&)
    void AffineTransform3::FromQuaternion(QuaternionT* param_1) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;

        fVar8 = *(float*)(param_1 + 12);
        fVar6 = fVar8 * fVar8;
        fVar1 = *(float*)param_1;
        fVar2 = *(float*)(param_1 + 4);
        fVar3 = *(float*)(param_1 + 8);
        fVar9 = fVar1 * fVar1;
        fVar4 = fVar2 * fVar2;
        fVar5 = fVar3 * fVar3;
        field_0 = (fVar9 + fVar6) - (fVar4 + fVar5);
        fVar7 = fVar8 * fVar3 + fVar2 * fVar1;
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

    // 0x1002c40f0, 640 bytes, placed by class name
    // AffineTransform3::SetLookAt(double, double, double, double, double, double, double, double, double)
    void AffineTransform3::SetLookAt(double param_1, double param_2, double param_3, double param_4, double param_5,
                                     double param_6, double param_7, double param_8, double param_9) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;

        fVar9 = (float)(param_4 - param_1);
        fVar5 = (float)(param_5 - param_2);
        fVar4 = (float)(param_6 - param_3);
        fVar8 = (float)((double)fVar4 * param_8 - (double)fVar5 * param_9);
        fVar1 = (float)(param_9 * (double)fVar9 - (double)fVar4 * param_7);
        fVar6 = (float)((double)fVar5 * param_7 - (double)fVar9 * param_8);
        fVar2 = (float)::sqrt(fVar6 * fVar6 + fVar1 * fVar1 + fVar8 * fVar8);
        fVar2 = 1.0 / fVar2;
        fVar3 = (float)::sqrt(fVar4 * fVar4 + fVar5 * fVar5 + fVar9 * fVar9);
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
        fVar7 = fVar9 * fVar1 - fVar5 * fVar8;
        field_28 = fVar7;
        field_36 = -(float)((double)fVar2 * param_3 + (double)fVar1 * param_2 + (double)fVar8 * param_1);
        field_40 = -(float)((double)fVar7 * param_3 + (double)fVar6 * param_2 + (double)fVar4 * param_1);
        field_44 = -(float)((double)fVar3 * param_3 + (double)fVar5 * param_2 + (double)fVar9 * param_1);
    }

    // 0x1002c43b0, 80 bytes, placed by class name
    // AffineTransform3::SetCoordinateFrame(float, float, float, float, float, float, float, float, float)
    void AffineTransform3::SetCoordinateFrame(float param_1, float param_2, float param_3, float param_4, float param_5,
                                              float param_6, float param_7, float param_8, float param_9) {
        field_0 = param_1;
        field_12 = param_4;
        field_24 = param_7;
        field_36 = 0.0;
        field_4 = param_2;
        field_16 = param_5;
        field_28 = param_8;
        field_40 = 0.0;
        field_44 = 0.0;
        field_8 = param_3;
        field_20 = param_6;
        field_32 = param_9;
    }

    // 0x1002c4400, 240 bytes, placed by class name
    // AffineTransform3::SetInverse(AffineTransform3 const*)
    void AffineTransform3::SetInverse(AffineTransform3* param_1) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;

        if (param_1 == this) {
            Invert(this);
            return;
        }
        fVar1 = param_1->field_0;
        field_0 = fVar1;
        fVar2 = param_1->field_4;
        field_12 = fVar2;
        fVar3 = param_1->field_8;
        field_24 = fVar3;
        fVar4 = param_1->field_12;
        field_4 = fVar4;
        fVar5 = param_1->field_16;
        field_16 = fVar5;
        fVar6 = param_1->field_20;
        field_28 = fVar6;
        fVar7 = param_1->field_24;
        field_8 = fVar7;
        fVar8 = param_1->field_28;
        field_20 = fVar8;
        fVar9 = param_1->field_32;
        field_32 = fVar9;
        fVar10 = param_1->field_40;
        fVar11 = param_1->field_44;
        field_36 = -(fVar3 * fVar11 + fVar2 * fVar10 + fVar1 * param_1->field_36);
        fVar1 = param_1->field_36;
        field_40 = -(fVar6 * fVar11 + fVar10 * fVar5 + fVar4 * fVar1);
        field_44 = -(fVar11 * fVar9 + fVar1 * fVar7 + fVar8 * param_1->field_40);
    }

    // 0x1002c44f0, 192 bytes, placed by class name
    // AffineTransform3::Invert()
    void AffineTransform3::Invert() {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;

        fVar1 = field_36;
        fVar2 = field_40;
        fVar3 = field_12;
        fVar4 = field_4;
        fVar5 = field_8;
        field_12 = fVar4;
        field_4 = fVar3;
        fVar6 = field_24;
        field_24 = fVar5;
        field_8 = fVar6;
        fVar7 = field_28;
        fVar8 = field_20;
        field_28 = fVar8;
        field_20 = fVar7;
        fVar9 = field_44;
        field_36 = -(fVar5 * fVar9 + fVar4 * fVar2 + field_0 * fVar1);
        field_40 = -(fVar8 * fVar9 + fVar3 * fVar1 + fVar2 * field_16);
        field_44 = -(fVar9 * field_32 + fVar6 * fVar1 + fVar7 * fVar2);
    }

    // 0x1002c45b0, 112 bytes, placed by class name
    // AffineTransform3::SetXRotation(float)
    void AffineTransform3::SetXRotation(float param_1) {
        float fVar1;

        field_0 = 1.0;
        fVar1 = (float)::cos(param_1);
        field_32 = fVar1;
        field_16 = fVar1;
        fVar1 = (float)::sin(param_1);
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

    // 0x1002c4640, 112 bytes, placed by class name
    // AffineTransform3::SetYRotation(float)
    void AffineTransform3::SetYRotation(float param_1) {
        float fVar1;

        field_16 = 1.0;
        fVar1 = (float)::cos(param_1);
        field_32 = fVar1;
        field_0 = fVar1;
        fVar1 = (float)::sin(param_1);
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

    // 0x1002c46b0, 112 bytes, placed by class name
    // AffineTransform3::SetZRotation(float)
    void AffineTransform3::SetZRotation(float param_1) {
        float fVar1;

        field_32 = 1.0;
        fVar1 = (float)::cos(param_1);
        field_16 = fVar1;
        field_0 = fVar1;
        fVar1 = (float)::sin(param_1);
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

    // 0x1002c4720, 304 bytes, placed by class name
    // AffineTransform3::SetRotation(float, float, float, float)
    void AffineTransform3::SetRotation(float param_1, float param_2, float param_3, float param_4) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;

        fVar1 = (float)::cos(param_4);
        fVar2 = (float)::sin(param_4);
        fVar3 = 1.0 - fVar1;
        field_0 = param_1 * param_1 * fVar3 + fVar1;
        fVar4 = param_2 * param_1 * fVar3;
        field_4 = fVar2 * param_3 + fVar4;
        fVar5 = fVar3 * param_3 * param_1;
        field_8 = fVar5 - fVar2 * param_2;
        field_12 = fVar4 - fVar2 * param_3;
        fVar4 = fVar3 * param_3 * param_2;
        field_16 = param_2 * param_2 * fVar3 + fVar1;
        field_20 = fVar2 * param_1 + fVar4;
        field_24 = fVar2 * param_2 + fVar5;
        field_28 = fVar4 - fVar2 * param_1;
        field_32 = param_3 * param_3 * fVar3 + fVar1;
        field_44 = 0.0;
        field_36 = 0.0;
        field_40 = 0.0;
    }

    // 0x1002c4850, 32 bytes, placed by class name
    // AffineTransform3::SetRotation(jag::math::QuaternionT<float> const&)
    void AffineTransform3::SetRotation(QuaternionT* param_1) {
        SetQuaternion(this, *(float*)param_1, *(float*)(param_1 + 4), *(float*)(param_1 + 8), *(float*)(param_1 + 12));
    }

    // 0x1002c4870, 256 bytes, placed by class name
    // AffineTransform3::SetQuaternion(float, float, float, float)
    void AffineTransform3::SetQuaternion(float param_1, float param_2, float param_3, float param_4) {
        float fVar1;

        fVar1 = param_3 * param_3 + param_2 * param_2;
        field_0 = 1.0 - (fVar1 + fVar1);
        fVar1 = param_2 * param_1 - param_4 * param_3;
        field_12 = fVar1 + fVar1;
        fVar1 = param_2 * param_4 + param_3 * param_1;
        field_24 = fVar1 + fVar1;
        fVar1 = param_4 * param_3 + param_2 * param_1;
        field_4 = fVar1 + fVar1;
        fVar1 = param_3 * param_3 + param_1 * param_1;
        field_16 = 1.0 - (fVar1 + fVar1);
        fVar1 = param_3 * param_2 - param_1 * param_4;
        field_28 = fVar1 + fVar1;
        fVar1 = param_3 * param_1 - param_2 * param_4;
        field_8 = fVar1 + fVar1;
        fVar1 = param_3 * param_2 + param_1 * param_4;
        field_20 = fVar1 + fVar1;
        fVar1 = param_2 * param_2 + param_1 * param_1;
        field_32 = 1.0 - (fVar1 + fVar1);
        field_44 = 0.0;
        field_36 = 0.0;
        field_40 = 0.0;
    }

    // 0x1002c4970, 656 bytes, placed by class name
    // AffineTransform3::PrependRotation(float, float, float, float)
    void AffineTransform3::PrependRotation(float param_1, float param_2, float param_3, float param_4) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;
        float fVar12;
        float fVar13;
        float fVar14;
        float fVar15;
        float fVar16;
        float fVar17;
        float fVar18;

        fVar8 = (float)::cos(param_4);
        fVar9 = (float)::sin(param_4);
        fVar11 = 1.0 - fVar8;
        fVar16 = param_1 * param_1 * fVar11 + fVar8;
        fVar12 = param_2 * param_1 * fVar11;
        fVar15 = fVar9 * param_3 + fVar12;
        fVar17 = fVar11 * param_3 * param_1;
        fVar13 = fVar17 - fVar9 * param_2;
        fVar12 = fVar12 - fVar9 * param_3;
        fVar10 = fVar11 * param_3 * param_2;
        fVar18 = param_2 * param_2 * fVar11 + fVar8;
        fVar14 = fVar9 * param_1 + fVar10;
        fVar17 = fVar9 * param_2 + fVar17;
        fVar10 = fVar10 - fVar9 * param_1;
        fVar8 = param_3 * param_3 * fVar11 + fVar8;
        fVar9 = field_0;
        fVar11 = field_4;
        fVar1 = field_8;
        fVar2 = field_12;
        fVar3 = field_24;
        fVar4 = field_16;
        fVar5 = field_20;
        fVar6 = field_28;
        fVar7 = field_32;
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

    // 0x1002c4c00, 768 bytes, placed by class name
    // AffineTransform3::AppendRotation(float, float, float, float)
    void AffineTransform3::AppendRotation(float param_1, float param_2, float param_3, float param_4) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;
        float fVar12;
        float fVar13;
        float fVar14;
        float fVar15;
        float fVar16;
        float fVar17;
        float fVar18;

        fVar8 = (float)::cos(param_4);
        fVar9 = (float)::sin(param_4);
        fVar13 = 1.0 - fVar8;
        fVar18 = param_1 * param_1 * fVar13 + fVar8;
        fVar15 = param_2 * param_1 * fVar13;
        fVar10 = fVar9 * param_3 + fVar15;
        fVar16 = fVar13 * param_3 * param_1;
        fVar11 = fVar16 - fVar9 * param_2;
        fVar15 = fVar15 - fVar9 * param_3;
        fVar14 = fVar13 * param_3 * param_2;
        fVar12 = param_2 * param_2 * fVar13 + fVar8;
        fVar17 = fVar9 * param_1 + fVar14;
        fVar16 = fVar9 * param_2 + fVar16;
        fVar14 = fVar14 - fVar9 * param_1;
        fVar8 = param_3 * param_3 * fVar13 + fVar8;
        fVar9 = field_0;
        fVar13 = field_4;
        fVar1 = field_12;
        fVar2 = field_16;
        fVar3 = field_8;
        fVar4 = field_24;
        fVar5 = field_28;
        fVar6 = field_36;
        fVar7 = field_40;
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

    // 0x1002c4f00, 704 bytes, placed by class name
    // AffineTransform3::AppendQuaternion(float, float, float, float)
    void AffineTransform3::AppendQuaternion(float param_1, float param_2, float param_3, float param_4) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;
        float fVar12;
        float fVar13;
        float fVar14;
        float fVar15;
        float fVar16;
        float fVar17;
        float fVar18;

        fVar12 = param_3 * param_3 + param_2 * param_2;
        fVar9 = 1.0 - (fVar12 + fVar12);
        fVar16 = param_2 * param_1 - param_4 * param_3;
        fVar16 = fVar16 + fVar16;
        fVar13 = param_2 * param_4 + param_3 * param_1;
        fVar13 = fVar13 + fVar13;
        fVar15 = param_4 * param_3 + param_2 * param_1;
        fVar12 = param_3 * param_3 + param_1 * param_1;
        fVar10 = 1.0 - (fVar12 + fVar12);
        fVar11 = param_3 * param_2 - param_1 * param_4;
        fVar18 = param_3 * param_1 - param_2 * param_4;
        fVar14 = param_3 * param_2 + param_1 * param_4;
        fVar12 = param_2 * param_2 + param_1 * param_1;
        fVar17 = 1.0 - (fVar12 + fVar12);
        fVar12 = field_0;
        fVar1 = field_4;
        fVar2 = field_12;
        fVar3 = field_16;
        fVar4 = field_8;
        fVar5 = field_24;
        fVar6 = field_28;
        fVar7 = field_36;
        fVar8 = field_40;
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

    // 0x1002c51c0, 592 bytes, placed by class name
    // AffineTransform3::PrependQuaternion(float, float, float, float)
    void AffineTransform3::PrependQuaternion(float param_1, float param_2, float param_3, float param_4) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;
        float fVar12;
        float fVar13;
        float fVar14;
        float fVar15;
        float fVar16;
        float fVar17;
        float fVar18;

        fVar14 = param_3 * param_3 + param_2 * param_2;
        fVar18 = 1.0 - (fVar14 + fVar14);
        fVar15 = param_2 * param_1 - param_4 * param_3;
        fVar11 = param_2 * param_4 + param_3 * param_1;
        fVar10 = param_4 * param_3 + param_2 * param_1;
        fVar10 = fVar10 + fVar10;
        fVar14 = param_3 * param_3 + param_1 * param_1;
        fVar17 = 1.0 - (fVar14 + fVar14);
        fVar9 = param_3 * param_2 - param_1 * param_4;
        fVar12 = param_3 * param_1 - param_2 * param_4;
        fVar12 = fVar12 + fVar12;
        fVar13 = param_3 * param_2 + param_1 * param_4;
        fVar14 = param_2 * param_2 + param_1 * param_1;
        fVar16 = 1.0 - (fVar14 + fVar14);
        fVar14 = field_0;
        fVar1 = field_4;
        fVar2 = field_8;
        fVar3 = field_12;
        fVar4 = field_24;
        fVar5 = field_16;
        fVar6 = field_20;
        fVar7 = field_28;
        fVar8 = field_32;
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

    // 0x1002c5410, 80 bytes, placed by class name
    // AffineTransform3::SetScale(float, float, float)
    void AffineTransform3::SetScale(float param_1, float param_2, float param_3) {
        field_0 = param_1;
        field_12 = 0.0;
        field_36 = 0.0;
        field_4 = 0.0;
        field_8 = 0.0;
        field_16 = param_2;
        field_28 = 0.0;
        field_40 = 0.0;
        field_44 = 0.0;
        field_20 = 0.0;
        field_24 = 0.0;
        field_32 = param_3;
    }

    // 0x1002c5460, 160 bytes, placed by class name
    // AffineTransform3::Scale(float, float, float)
    void AffineTransform3::Scale(float param_1, float param_2, float param_3) {
        field_0 = field_0 * param_1;
        field_12 = field_12 * param_1;
        field_24 = field_24 * param_1;
        field_36 = param_1 * field_36;
        field_4 = field_4 * param_2;
        field_16 = field_16 * param_2;
        field_28 = field_28 * param_2;
        field_40 = param_2 * field_40;
        field_8 = field_8 * param_3;
        field_20 = field_20 * param_3;
        field_32 = field_32 * param_3;
        field_44 = param_3 * field_44;
    }

    // 0x1002c5500, 112 bytes, placed by class name
    // AffineTransform3::Scale(jag::math::Vector3T<float>)
    void AffineTransform3::Scale(undefined8 param_1, undefined4 param_2, AffineTransform3* param_3, type* param_4) {
        vector* pvVar1;
        float* pfVar2;
        undefined8 local_30;
        undefined4 local_28;
        float local_20;
        float local_1c;

        local_30 = param_1;
        local_28 = param_2;
        pvVar1 = local_30.SSOBeginPtr(param_4);
        local_20 = *(float*)pvVar1;
        pfVar2 = (float*)local_30.y();
        local_1c = *pfVar2;
        pfVar2 = (float*)local_30.second();
        Scale(param_3, local_20, local_1c, *pfVar2);
    }

    // 0x1002c5570, 112 bytes, placed by class name
    // AffineTransform3::SetTranslate(jag::math::Vector3T<float>)
    void AffineTransform3::SetTranslate(undefined8 param_1, undefined4 param_2, AffineTransform3* param_3,
                                        type* param_4) {
        vector* pvVar1;
        float* pfVar2;
        undefined8 local_30;
        undefined4 local_28;
        float local_20;
        float local_1c;

        local_30 = param_1;
        local_28 = param_2;
        pvVar1 = local_30.SSOBeginPtr(param_4);
        local_20 = *(float*)pvVar1;
        pfVar2 = (float*)local_30.y();
        local_1c = *pfVar2;
        pfVar2 = (float*)local_30.second();
        SetTranslate(param_3, local_20, local_1c, *pfVar2);
    }

    // 0x1002c55e0, 80 bytes, placed by class name
    // AffineTransform3::SetTranslate(float, float, float)
    void AffineTransform3::SetTranslate(float param_1, float param_2, float param_3) {
        field_28 = 0.0;
        field_32 = 1.0;
        field_24 = 0.0;
        field_8 = 0.0;
        field_12 = 0.0;
        field_16 = 1.0;
        field_20 = 0.0;
        field_0 = 1.0;
        field_4 = 0.0;
        field_36 = param_1;
        field_40 = param_2;
        field_44 = param_3;
    }

    // 0x1002c5630, 128 bytes, placed by class name
    // AffineTransform3::PrependTranslate(float, float, float)
    void AffineTransform3::PrependTranslate(float param_1, float param_2, float param_3) {
        field_36 = field_24 * param_3 + field_12 * param_2 + field_0 * param_1 + field_36;
        field_40 = field_28 * param_3 + field_16 * param_2 + field_4 * param_1 + field_40;
        field_44 = param_3 * field_32 + param_2 * field_20 + param_1 * field_8 + field_44;
    }

    // 0x1002c56b0, 576 bytes, placed by class name
    // AffineTransform3::SetReflection(jag::math::Vector3T<float>, float)
    void AffineTransform3::SetReflection(undefined8 param_1, undefined4 param_2, float param_3, float* param_4,
                                         type* param_5) {
        vector* pvVar1;
        float* pfVar2;
        undefined8 local_30;
        undefined4 local_28;
        float local_20;
        float local_1c;

        local_30 = param_1;
        local_28 = param_2;
        local_20 = param_3;
        pvVar1 = local_30.SSOBeginPtr(param_5);
        local_1c = *(float*)pvVar1;
        pvVar1 = local_30.SSOBeginPtr(param_5);
        *param_4 = 1.0 - (*(float*)pvVar1 + *(float*)pvVar1) * local_1c;
        pfVar2 = (float*)local_30.y();
        local_1c = *pfVar2 * -2.0;
        pvVar1 = local_30.SSOBeginPtr(param_5);
        param_4[1] = local_1c * *(float*)pvVar1;
        pfVar2 = (float*)local_30.second();
        local_1c = *pfVar2 * -2.0;
        pvVar1 = local_30.SSOBeginPtr(param_5);
        param_4[2] = local_1c * *(float*)pvVar1;
        pvVar1 = local_30.SSOBeginPtr(param_5);
        local_1c = *(float*)pvVar1 * -2.0;
        pfVar2 = (float*)local_30.y();
        param_4[3] = local_1c * *pfVar2;
        pfVar2 = (float*)local_30.y();
        local_1c = *pfVar2;
        pfVar2 = (float*)local_30.y();
        param_4[4] = 1.0 - (*pfVar2 + *pfVar2) * local_1c;
        pfVar2 = (float*)local_30.second();
        local_1c = *pfVar2 * -2.0;
        pfVar2 = (float*)local_30.y();
        param_4[5] = local_1c * *pfVar2;
        pvVar1 = local_30.SSOBeginPtr(param_5);
        local_1c = *(float*)pvVar1 * -2.0;
        pfVar2 = (float*)local_30.second();
        param_4[6] = local_1c * *pfVar2;
        pfVar2 = (float*)local_30.y();
        local_1c = *pfVar2 * -2.0;
        pfVar2 = (float*)local_30.second();
        param_4[7] = local_1c * *pfVar2;
        pfVar2 = (float*)local_30.second();
        local_1c = *pfVar2;
        pfVar2 = (float*)local_30.second();
        param_4[8] = 1.0 - (*pfVar2 + *pfVar2) * local_1c;
        pvVar1 = local_30.SSOBeginPtr(param_5);
        local_20 = local_20 * -2.0;
        param_4[9] = *(float*)pvVar1 * local_20;
        pfVar2 = (float*)local_30.y();
        param_4[10] = *pfVar2 * local_20;
        pfVar2 = (float*)local_30.second();
        param_4[11] = local_20 * *pfVar2;
    }

    // 0x1002c58f0, 528 bytes, placed by class name
    // AffineTransform3::Prepend(AffineTransform3 const&)
    void AffineTransform3::Prepend(AffineTransform3* param_1) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;
        float fVar12;

        fVar1 = field_0;
        fVar2 = field_4;
        fVar3 = field_8;
        fVar4 = field_12;
        fVar5 = field_16;
        fVar6 = field_20;
        fVar7 = field_24;
        fVar8 = field_28;
        fVar9 = field_32;
        fVar10 = param_1->field_4;
        fVar11 = param_1->field_8;
        field_0 = fVar11 * fVar7 + fVar10 * fVar4 + param_1->field_0 * fVar1;
        fVar12 = param_1->field_0;
        field_4 = fVar11 * fVar8 + fVar10 * fVar5 + fVar12 * fVar2;
        field_8 = fVar11 * fVar9 + fVar12 * fVar3 + param_1->field_4 * fVar6;
        fVar10 = param_1->field_16;
        fVar11 = param_1->field_20;
        field_12 = fVar11 * fVar7 + fVar10 * fVar4 + param_1->field_12 * fVar1;
        fVar12 = param_1->field_12;
        field_16 = fVar11 * fVar8 + fVar10 * fVar5 + fVar12 * fVar2;
        field_20 = fVar11 * fVar9 + fVar12 * fVar3 + param_1->field_16 * fVar6;
        fVar10 = param_1->field_28;
        fVar11 = param_1->field_32;
        field_24 = fVar11 * fVar7 + fVar10 * fVar4 + param_1->field_24 * fVar1;
        fVar12 = param_1->field_24;
        field_28 = fVar11 * fVar8 + fVar10 * fVar5 + fVar12 * fVar2;
        field_32 = fVar11 * fVar9 + fVar12 * fVar3 + param_1->field_28 * fVar6;
        fVar10 = param_1->field_40;
        fVar11 = param_1->field_44;
        field_36 = fVar7 * fVar11 + fVar4 * fVar10 + fVar1 * param_1->field_36 + field_36;
        fVar1 = param_1->field_36;
        field_40 = fVar8 * fVar11 + fVar10 * fVar5 + fVar2 * fVar1 + field_40;
        field_44 = fVar11 * fVar9 + fVar1 * fVar3 + fVar6 * param_1->field_40 + field_44;
    }

    // 0x1002c5b00, 720 bytes, placed by class name
    // AffineTransform3::PrependInverse(AffineTransform3 const&)
    void AffineTransform3::PrependInverse(AffineTransform3* param_1) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;
        float fVar12;
        float fVar13;
        float fVar14;
        float fVar15;
        float fVar16;
        float fVar17;
        float fVar18;
        float fVar19;
        float fVar20;
        float fVar21;

        fVar1 = field_0;
        fVar2 = field_4;
        fVar3 = field_8;
        fVar4 = field_12;
        fVar5 = field_16;
        fVar6 = field_24;
        fVar20 = param_1->field_36;
        fVar7 = param_1->field_12;
        fVar8 = param_1->field_40;
        fVar9 = param_1->field_44;
        fVar19 = param_1->field_8 * fVar9 + param_1->field_4 * fVar8 + param_1->field_0 * fVar20;
        fVar10 = param_1->field_16;
        fVar11 = param_1->field_20;
        fVar12 = param_1->field_24;
        fVar13 = param_1->field_28;
        fVar14 = param_1->field_32;
        fVar21 = fVar9 * fVar14 + fVar8 * fVar13 + fVar20 * fVar12;
        fVar15 = field_20;
        fVar16 = field_28;
        fVar17 = field_32;
        field_0 = fVar12 * fVar6 + fVar7 * fVar4 + param_1->field_0 * fVar1;
        fVar18 = param_1->field_0;
        field_4 = fVar12 * fVar16 + fVar7 * fVar5 + fVar18 * fVar2;
        field_8 = fVar12 * fVar17 + fVar7 * fVar15 + fVar18 * fVar3;
        fVar12 = param_1->field_4;
        field_12 = fVar13 * fVar6 + fVar10 * fVar4 + fVar12 * fVar1;
        field_16 = fVar13 * fVar16 + fVar10 * fVar5 + fVar12 * fVar2;
        field_20 = fVar13 * fVar17 + fVar12 * fVar3 + param_1->field_16 * fVar15;
        fVar12 = param_1->field_8;
        fVar13 = param_1->field_20;
        field_24 = fVar14 * fVar6 + fVar12 * fVar1 + fVar13 * fVar4;
        field_28 = fVar14 * fVar16 + fVar12 * fVar2 + fVar13 * fVar5;
        field_32 = fVar14 * fVar17 + fVar12 * fVar3 + fVar13 * fVar15;
        fVar20 = -(fVar11 * fVar9 + fVar10 * fVar8 + fVar7 * fVar20);
        field_36 = (fVar4 * fVar20 - (fVar6 * fVar21 + fVar1 * fVar19)) + field_36;
        field_40 = (fVar5 * fVar20 - (fVar16 * fVar21 + fVar2 * fVar19)) + field_40;
        field_44 = (fVar20 * fVar15 - (fVar21 * fVar17 + fVar19 * fVar3)) + field_44;
    }

    // 0x1002c5dd0, 560 bytes, placed by class name
    // AffineTransform3::Append(AffineTransform3 const&)
    void AffineTransform3::Append(AffineTransform3* param_1) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;
        float fVar12;
        float fVar13;
        float fVar14;
        float fVar15;
        float fVar16;
        float fVar17;
        float fVar18;

        fVar1 = field_0;
        fVar2 = field_4;
        fVar3 = field_12;
        fVar4 = field_16;
        fVar5 = field_24;
        fVar6 = field_28;
        fVar7 = field_36;
        fVar8 = field_40;
        fVar9 = field_8;
        fVar10 = field_20;
        fVar11 = field_32;
        fVar12 = field_44;
        fVar13 = param_1->field_12;
        fVar14 = param_1->field_24;
        field_0 = fVar14 * fVar9 + fVar13 * fVar2 + param_1->field_0 * fVar1;
        fVar15 = param_1->field_16;
        fVar16 = param_1->field_28;
        field_4 = fVar16 * fVar9 + fVar15 * fVar2 + param_1->field_4 * fVar1;
        fVar17 = param_1->field_20;
        fVar18 = param_1->field_32;
        field_8 = fVar9 * fVar18 + fVar2 * fVar17 + fVar1 * param_1->field_8;
        fVar1 = param_1->field_0;
        field_12 = fVar14 * fVar10 + fVar13 * fVar4 + fVar1 * fVar3;
        fVar2 = param_1->field_4;
        field_16 = fVar16 * fVar10 + fVar15 * fVar4 + fVar2 * fVar3;
        fVar9 = param_1->field_8;
        field_20 = fVar10 * fVar18 + fVar17 * fVar4 + fVar3 * fVar9;
        fVar3 = param_1->field_12;
        field_24 = fVar14 * fVar11 + fVar1 * fVar5 + fVar3 * fVar6;
        fVar4 = param_1->field_16;
        field_28 = fVar16 * fVar11 + fVar2 * fVar5 + fVar4 * fVar6;
        fVar10 = param_1->field_20;
        field_32 = fVar18 * fVar11 + fVar5 * fVar9 + fVar6 * fVar10;
        field_36 = param_1->field_24 * fVar12 + fVar3 * fVar8 + fVar1 * fVar7 + param_1->field_36;
        field_40 = param_1->field_28 * fVar12 + fVar4 * fVar8 + fVar2 * fVar7 + param_1->field_40;
        field_44 = fVar12 * param_1->field_32 + fVar10 * fVar8 + fVar9 * fVar7 + param_1->field_44;
    }

    // 0x1002c6000, 528 bytes, placed by class name
    // AffineTransform3::Multiply(AffineTransform3 const&, AffineTransform3 const&)
    void AffineTransform3::Multiply(AffineTransform3* param_1, AffineTransform3* param_2) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;

        fVar1 = param_2->field_12;
        fVar2 = param_1->field_4;
        fVar3 = param_1->field_8;
        fVar4 = param_2->field_24;
        field_0 = fVar4 * fVar3 + fVar1 * fVar2 + param_2->field_0 * param_1->field_0;
        fVar5 = param_1->field_0;
        fVar6 = param_2->field_16;
        fVar7 = param_2->field_28;
        field_4 = fVar7 * fVar3 + fVar2 * fVar6 + param_2->field_4 * fVar5;
        fVar2 = param_2->field_20;
        fVar8 = param_2->field_32;
        field_8 = fVar3 * fVar8 + param_1->field_4 * fVar2 + fVar5 * param_2->field_8;
        fVar3 = param_2->field_0;
        fVar5 = param_1->field_16;
        fVar9 = param_1->field_20;
        field_12 = fVar9 * fVar4 + fVar1 * fVar5 + param_1->field_12 * fVar3;
        fVar1 = param_1->field_12;
        fVar10 = param_2->field_4;
        field_16 = fVar9 * fVar7 + fVar5 * fVar6 + fVar10 * fVar1;
        fVar5 = param_2->field_8;
        field_20 = fVar9 * fVar8 + fVar1 * fVar5 + fVar2 * param_1->field_16;
        fVar1 = param_2->field_12;
        fVar2 = param_1->field_28;
        fVar6 = param_1->field_32;
        field_24 = fVar4 * fVar6 + fVar1 * fVar2 + param_1->field_24 * fVar3;
        fVar4 = param_1->field_24;
        fVar9 = param_2->field_16;
        field_28 = fVar7 * fVar6 + fVar4 * fVar10 + fVar2 * fVar9;
        fVar2 = param_2->field_20;
        field_32 = fVar6 * fVar8 + fVar4 * fVar5 + param_1->field_28 * fVar2;
        fVar4 = param_1->field_40;
        fVar6 = param_1->field_44;
        field_36 = param_2->field_24 * fVar6 + fVar1 * fVar4 + fVar3 * param_1->field_36 + param_2->field_36;
        fVar1 = param_1->field_36;
        field_40 = param_2->field_28 * fVar6 + fVar4 * fVar9 + fVar10 * fVar1 + param_2->field_40;
        field_44 = fVar6 * param_2->field_32 + fVar2 * param_1->field_40 + fVar1 * fVar5 + param_2->field_44;
    }

    // 0x1002c6210, 256 bytes, placed by class name
    // AffineTransform3::TransformCoord(float, float, float, Array<float, eastl::allocator>&)
    void AffineTransform3::TransformCoord(float param_1, float param_2, float param_3, Array* param_4) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float* pfVar5;

        fVar1 = field_0;
        fVar2 = field_12;
        fVar3 = field_24;
        fVar4 = field_36;
        pfVar5 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_4, 0);
        *pfVar5 = fVar3 * param_3 + fVar2 * param_2 + fVar1 * param_1 + fVar4;
        fVar1 = field_4;
        fVar2 = field_16;
        fVar3 = field_28;
        fVar4 = field_40;
        pfVar5 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_4, 1);
        *pfVar5 = fVar3 * param_3 + fVar2 * param_2 + fVar1 * param_1 + fVar4;
        fVar1 = field_8;
        fVar2 = field_20;
        fVar3 = field_32;
        fVar4 = field_44;
        pfVar5 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_4, 2);
        *pfVar5 = param_3 * fVar3 + param_2 * fVar2 + param_1 * fVar1 + fVar4;
    }

    // 0x1002c6390, 304 bytes, placed by class name
    // AffineTransform3::TransformCoord(int, Array<int, eastl::allocator>&, Array<int, eastl::allocator>&, Array<int, eastl::allocator>&)
    void AffineTransform3::TransformCoord(int param_1, Array* param_2, Array* param_3, Array* param_4) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        int* piVar5;
        float fVar7;
        float fVar8;
        float fVar9;

        piVar5 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_2, (ulong)param_1);
        fVar7 = (float)*piVar5;
        piVar5 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_3, (ulong)param_1);
        fVar8 = (float)*piVar5;
        piVar5 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_4, (ulong)param_1);
        fVar1 = field_0;
        fVar2 = field_12;
        fVar9 = (float)*piVar5;
        fVar3 = field_24;
        fVar4 = field_36;
        piVar5 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_2, (ulong)param_1);
        *piVar5 = (int)(fVar3 * fVar9 + fVar2 * fVar8 + fVar1 * fVar7 + fVar4);
        fVar1 = field_4;
        fVar2 = field_16;
        fVar3 = field_28;
        fVar4 = field_40;
        piVar5 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_3, (ulong)param_1);
        *piVar5 = (int)(fVar3 * fVar9 + fVar2 * fVar8 + fVar1 * fVar7 + fVar4);
        fVar1 = field_8;
        fVar2 = field_20;
        fVar3 = field_32;
        fVar4 = field_44;
        piVar5 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_4, (ulong)param_1);
        *piVar5 = (int)(fVar9 * fVar3 + fVar8 * fVar2 + fVar7 * fVar1 + fVar4);
    }

    // 0x1002c64c0, 320 bytes, placed by class name
    // AffineTransform3::TransformCoord(int, Array<float, eastl::allocator>&, Array<float, eastl::allocator>&, Array<float, eastl::allocator>&)
    void AffineTransform3::TransformCoord(int param_1, Array* param_2, Array* param_3, Array* param_4) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float* pfVar8;

        pfVar8 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_2,
                                                                    (ulong)param_1);
        fVar1 = *pfVar8;
        pfVar8 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_3,
                                                                    (ulong)param_1);
        fVar2 = *pfVar8;
        pfVar8 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_4,
                                                                    (ulong)param_1);
        fVar3 = *pfVar8;
        fVar4 = field_0;
        fVar5 = field_12;
        fVar6 = field_24;
        fVar7 = field_36;
        pfVar8 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_2,
                                                                    (ulong)param_1);
        *pfVar8 = fVar6 * fVar3 + fVar5 * fVar2 + fVar4 * fVar1 + fVar7;
        fVar4 = field_4;
        fVar5 = field_16;
        fVar6 = field_28;
        fVar7 = field_40;
        pfVar8 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_3,
                                                                    (ulong)param_1);
        *pfVar8 = fVar6 * fVar3 + fVar5 * fVar2 + fVar4 * fVar1 + fVar7;
        fVar4 = field_8;
        fVar5 = field_20;
        fVar6 = field_32;
        fVar7 = field_44;
        pfVar8 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_4,
                                                                    (ulong)param_1);
        *pfVar8 = fVar3 * fVar6 + fVar2 * fVar5 + fVar1 * fVar4 + fVar7;
    }

    // 0x1002c6600, 256 bytes, placed by class name
    // AffineTransform3::InvTransformCoord(float, float, float, Array<float, eastl::allocator>&)
    void AffineTransform3::InvTransformCoord(float param_1, float param_2, float param_3, Array* param_4) {
        float fVar1;
        float fVar2;
        float fVar3;
        float* pfVar4;
        float fVar5;
        float fVar6;
        float fVar7;

        fVar5 = param_1 - field_36;
        fVar6 = param_2 - field_40;
        fVar7 = param_3 - field_44;
        fVar1 = field_0;
        fVar2 = field_4;
        fVar3 = field_8;
        pfVar4 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_4, 0);
        *pfVar4 = fVar3 * fVar7 + fVar2 * fVar6 + fVar1 * fVar5;
        fVar1 = field_12;
        fVar2 = field_16;
        fVar3 = field_20;
        pfVar4 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_4, 1);
        *pfVar4 = fVar3 * fVar7 + fVar2 * fVar6 + fVar1 * fVar5;
        fVar1 = field_24;
        fVar2 = field_28;
        fVar3 = field_32;
        pfVar4 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_4, 2);
        *pfVar4 = fVar7 * fVar3 + fVar6 * fVar2 + fVar5 * fVar1;
    }

    // 0x1002c6700, 304 bytes, placed by class name
    // AffineTransform3::InvTransformCoord(Array<float, eastl::allocator>&)
    void AffineTransform3::InvTransformCoord(Array* param_1) {
        float fVar1;
        float fVar2;
        float fVar3;
        float* pfVar4;
        float fVar5;
        float fVar6;
        float fVar7;

        pfVar4 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 0);
        fVar5 = *pfVar4 - field_36;
        pfVar4 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 1);
        fVar6 = *pfVar4 - field_40;
        pfVar4 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 2);
        fVar7 = *pfVar4 - field_44;
        fVar1 = field_0;
        fVar2 = field_4;
        fVar3 = field_8;
        pfVar4 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 0);
        *pfVar4 = fVar3 * fVar7 + fVar2 * fVar6 + fVar1 * fVar5;
        fVar1 = field_12;
        fVar2 = field_16;
        fVar3 = field_20;
        pfVar4 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 1);
        *pfVar4 = fVar3 * fVar7 + fVar2 * fVar6 + fVar1 * fVar5;
        fVar1 = field_24;
        fVar2 = field_28;
        fVar3 = field_32;
        pfVar4 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 2);
        *pfVar4 = fVar7 * fVar3 + fVar6 * fVar2 + fVar5 * fVar1;
    }

    // 0x1002c6830, 240 bytes, placed by class name
    // AffineTransform3::TransformVector(float, float, float, Array<float, eastl::allocator>&)
    void AffineTransform3::TransformVector(float param_1, float param_2, float param_3, Array* param_4) {
        float fVar1;
        float fVar2;
        float fVar3;
        float* pfVar4;

        fVar1 = field_0;
        fVar2 = field_12;
        fVar3 = field_24;
        pfVar4 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_4, 0);
        *pfVar4 = fVar3 * param_3 + fVar2 * param_2 + fVar1 * param_1;
        fVar1 = field_4;
        fVar2 = field_16;
        fVar3 = field_28;
        pfVar4 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_4, 1);
        *pfVar4 = fVar3 * param_3 + fVar2 * param_2 + fVar1 * param_1;
        fVar1 = field_8;
        fVar2 = field_20;
        fVar3 = field_32;
        pfVar4 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_4, 2);
        *pfVar4 = param_3 * fVar3 + param_2 * fVar2 + param_1 * fVar1;
    }

    // 0x1002c6920, 304 bytes, placed by class name
    // AffineTransform3::TransformVector(int, Array<int, eastl::allocator>&, Array<int, eastl::allocator>&, Array<int, eastl::allocator>&)
    void AffineTransform3::TransformVector(int param_1, Array* param_2, Array* param_3, Array* param_4) {
        int* piVar1;
        undefined4* puVar2;
        undefined4 uVar3;
        float fVar5;
        float fVar6;
        float fVar7;

        piVar1 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_2, (ulong)param_1);
        fVar5 = (float)*piVar1;
        piVar1 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_3, (ulong)param_1);
        fVar6 = (float)*piVar1;
        piVar1 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_4, (ulong)param_1);
        fVar7 = (float)*piVar1;
        uVar3 = jag::math::RoundFloatToInt(field_24 * fVar7 + field_12 * fVar6 + field_0 * fVar5);
        puVar2 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_2,
                                                                       (ulong)param_1);
        *puVar2 = uVar3;
        uVar3 = jag::math::RoundFloatToInt(field_28 * fVar7 + field_16 * fVar6 + field_4 * fVar5);
        puVar2 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_3,
                                                                       (ulong)param_1);
        *puVar2 = uVar3;
        uVar3 = jag::math::RoundFloatToInt(fVar7 * field_32 + fVar6 * field_20 + fVar5 * field_8);
        puVar2 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_4,
                                                                       (ulong)param_1);
        *puVar2 = uVar3;
    }

    // 0x1002c6a50, 304 bytes, placed by class name
    // AffineTransform3::TransformVector(int, Array<float, eastl::allocator>&, Array<float, eastl::allocator>&, Array<float, eastl::allocator>&)
    void AffineTransform3::TransformVector(int param_1, Array* param_2, Array* param_3, Array* param_4) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float* pfVar7;

        pfVar7 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_2,
                                                                    (ulong)param_1);
        fVar1 = *pfVar7;
        pfVar7 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_3,
                                                                    (ulong)param_1);
        fVar2 = *pfVar7;
        pfVar7 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_4,
                                                                    (ulong)param_1);
        fVar3 = *pfVar7;
        fVar4 = field_0;
        fVar5 = field_12;
        fVar6 = field_24;
        pfVar7 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_2,
                                                                    (ulong)param_1);
        *pfVar7 = fVar6 * fVar3 + fVar5 * fVar2 + fVar4 * fVar1;
        fVar4 = field_4;
        fVar5 = field_16;
        fVar6 = field_28;
        pfVar7 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_3,
                                                                    (ulong)param_1);
        *pfVar7 = fVar6 * fVar3 + fVar5 * fVar2 + fVar4 * fVar1;
        fVar4 = field_8;
        fVar5 = field_20;
        fVar6 = field_32;
        pfVar7 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_4,
                                                                    (ulong)param_1);
        *pfVar7 = fVar3 * fVar6 + fVar2 * fVar5 + fVar1 * fVar4;
    }

    // 0x1002c6b80, 240 bytes, placed by class name
    // AffineTransform3::InvTransformVector(float, float, float, Array<float, eastl::allocator>&)
    void AffineTransform3::InvTransformVector(float param_1, float param_2, float param_3, Array* param_4) {
        float fVar1;
        float fVar2;
        float fVar3;
        float* pfVar4;

        fVar1 = field_0;
        fVar2 = field_4;
        fVar3 = field_8;
        pfVar4 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_4, 0);
        *pfVar4 = fVar3 * param_3 + fVar2 * param_2 + fVar1 * param_1;
        fVar1 = field_12;
        fVar2 = field_16;
        fVar3 = field_20;
        pfVar4 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_4, 1);
        *pfVar4 = fVar3 * param_3 + fVar2 * param_2 + fVar1 * param_1;
        fVar1 = field_24;
        fVar2 = field_28;
        fVar3 = field_32;
        pfVar4 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_4, 2);
        *pfVar4 = param_3 * fVar3 + param_2 * fVar2 + param_1 * fVar1;
    }

    // 0x1002c6c70, 288 bytes, placed by class name
    // AffineTransform3::InvTransformVector(Array<float, eastl::allocator>&)
    void AffineTransform3::InvTransformVector(Array* param_1) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float* pfVar7;

        pfVar7 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 0);
        fVar1 = *pfVar7;
        pfVar7 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 1);
        fVar2 = *pfVar7;
        pfVar7 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 2);
        fVar3 = *pfVar7;
        fVar4 = field_0;
        fVar5 = field_4;
        fVar6 = field_8;
        pfVar7 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 0);
        *pfVar7 = fVar6 * fVar3 + fVar5 * fVar2 + fVar4 * fVar1;
        fVar4 = field_12;
        fVar5 = field_16;
        fVar6 = field_20;
        pfVar7 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 1);
        *pfVar7 = fVar6 * fVar3 + fVar5 * fVar2 + fVar4 * fVar1;
        fVar4 = field_24;
        fVar5 = field_28;
        fVar6 = field_32;
        pfVar7 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 2);
        *pfVar7 = fVar3 * fVar6 + fVar2 * fVar5 + fVar1 * fVar4;
    }

    // 0x1002c6d90, 128 bytes, placed by class name
    // AffineTransform3::GetTranslationComponent(Array<float, eastl::allocator>&)
    Array* AffineTransform3::GetTranslationComponent(Array* param_1) {
        float fVar1;
        float* pfVar2;

        fVar1 = field_36;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 0);
        *pfVar2 = fVar1;
        fVar1 = field_40;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 1);
        *pfVar2 = fVar1;
        fVar1 = field_44;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 2);
        *pfVar2 = fVar1;
        return param_1;
    }

    // 0x1002c6e10, 320 bytes, placed by class name
    // AffineTransform3::ToLinearMatrix3x3(Array<float, eastl::allocator>&)
    Array* AffineTransform3::ToLinearMatrix3x3(Array* param_1) {
        float fVar1;
        float* pfVar2;

        fVar1 = field_0;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 0);
        *pfVar2 = fVar1;
        fVar1 = field_4;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 1);
        *pfVar2 = fVar1;
        fVar1 = field_8;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 2);
        *pfVar2 = fVar1;
        fVar1 = field_12;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 3);
        *pfVar2 = fVar1;
        fVar1 = field_16;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 4);
        *pfVar2 = fVar1;
        fVar1 = field_20;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 5);
        *pfVar2 = fVar1;
        fVar1 = field_24;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 6);
        *pfVar2 = fVar1;
        fVar1 = field_28;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 7);
        *pfVar2 = fVar1;
        fVar1 = field_32;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 8);
        *pfVar2 = fVar1;
        return param_1;
    }

    // 0x1002c6f50, 320 bytes, placed by class name
    // AffineTransform3::ToTransposedLinearMatrix3x3(Array<float, eastl::allocator>&)
    Array* AffineTransform3::ToTransposedLinearMatrix3x3(Array* param_1) {
        float fVar1;
        float* pfVar2;

        fVar1 = field_0;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 0);
        *pfVar2 = fVar1;
        fVar1 = field_12;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 1);
        *pfVar2 = fVar1;
        fVar1 = field_24;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 2);
        *pfVar2 = fVar1;
        fVar1 = field_4;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 3);
        *pfVar2 = fVar1;
        fVar1 = field_16;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 4);
        *pfVar2 = fVar1;
        fVar1 = field_28;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 5);
        *pfVar2 = fVar1;
        fVar1 = field_8;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 6);
        *pfVar2 = fVar1;
        fVar1 = field_20;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 7);
        *pfVar2 = fVar1;
        fVar1 = field_32;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 8);
        *pfVar2 = fVar1;
        return param_1;
    }

    // 0x1002c7090, 384 bytes, placed by class name
    // AffineTransform3::ToTransposedLinearMatrix3x4(Array<float, eastl::allocator>&)
    Array* AffineTransform3::ToTransposedLinearMatrix3x4(Array* param_1) {
        float fVar1;
        float* pfVar2;
        undefined4* puVar3;

        fVar1 = field_0;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 0);
        *pfVar2 = fVar1;
        fVar1 = field_12;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 1);
        *pfVar2 = fVar1;
        fVar1 = field_24;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 2);
        *pfVar2 = fVar1;
        puVar3 = (undefined4*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 3);
        *puVar3 = 0;
        fVar1 = field_4;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 4);
        *pfVar2 = fVar1;
        fVar1 = field_16;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 5);
        *pfVar2 = fVar1;
        fVar1 = field_28;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 6);
        *pfVar2 = fVar1;
        puVar3 = (undefined4*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 7);
        *puVar3 = 0;
        fVar1 = field_8;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 8);
        *pfVar2 = fVar1;
        fVar1 = field_20;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 9);
        *pfVar2 = fVar1;
        fVar1 = field_32;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 10);
        *pfVar2 = fVar1;
        puVar3 = (undefined4*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 11);
        *puVar3 = 0;
        return param_1;
    }

    // 0x1002c7210, 528 bytes, placed by class name
    // AffineTransform3::ToAffineMatrix4x4(Array<float, eastl::allocator>&, int)
    Array* AffineTransform3::ToAffineMatrix4x4(Array* param_1, int param_2) {
        float fVar1;
        float* pfVar2;
        undefined4* puVar3;

        fVar1 = field_0;
        pfVar2 =
            (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, (long)param_2);
        *pfVar2 = fVar1;
        fVar1 = field_4;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                    (long)(param_2 + 1));
        *pfVar2 = fVar1;
        fVar1 = field_8;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                    (long)(param_2 + 2));
        *pfVar2 = fVar1;
        puVar3 = (undefined4*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                         (long)(param_2 + 3));
        *puVar3 = 0;
        fVar1 = field_12;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                    (long)(param_2 + 4));
        *pfVar2 = fVar1;
        fVar1 = field_16;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                    (long)(param_2 + 5));
        *pfVar2 = fVar1;
        fVar1 = field_20;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                    (long)(param_2 + 6));
        *pfVar2 = fVar1;
        puVar3 = (undefined4*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                         (long)(param_2 + 7));
        *puVar3 = 0;
        fVar1 = field_24;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                    (long)(param_2 + 8));
        *pfVar2 = fVar1;
        fVar1 = field_28;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                    (long)(param_2 + 9));
        *pfVar2 = fVar1;
        fVar1 = field_32;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                    (long)(param_2 + 10));
        *pfVar2 = fVar1;
        puVar3 = (undefined4*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                         (long)(param_2 + 11));
        *puVar3 = 0;
        fVar1 = field_36;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                    (long)(param_2 + 12));
        *pfVar2 = fVar1;
        fVar1 = field_40;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                    (long)(param_2 + 13));
        *pfVar2 = fVar1;
        fVar1 = field_44;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                    (long)(param_2 + 14));
        *pfVar2 = fVar1;
        puVar3 = (undefined4*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                         (long)(param_2 + 15));
        *puVar3 = 1065353216;
        return param_1;
    }

    // 0x1002c7420, 416 bytes, placed by class name
    // AffineTransform3::ToTransposedAffineMatrix3x4(Array<float, eastl::allocator>&)
    Array* AffineTransform3::ToTransposedAffineMatrix3x4(Array* param_1) {
        float fVar1;
        float* pfVar2;

        fVar1 = field_0;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 0);
        *pfVar2 = fVar1;
        fVar1 = field_12;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 1);
        *pfVar2 = fVar1;
        fVar1 = field_24;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 2);
        *pfVar2 = fVar1;
        fVar1 = field_36;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 3);
        *pfVar2 = fVar1;
        fVar1 = field_4;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 4);
        *pfVar2 = fVar1;
        fVar1 = field_16;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 5);
        *pfVar2 = fVar1;
        fVar1 = field_28;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 6);
        *pfVar2 = fVar1;
        fVar1 = field_40;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 7);
        *pfVar2 = fVar1;
        fVar1 = field_8;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 8);
        *pfVar2 = fVar1;
        fVar1 = field_20;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 9);
        *pfVar2 = fVar1;
        fVar1 = field_32;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 10);
        *pfVar2 = fVar1;
        fVar1 = field_44;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, 11);
        *pfVar2 = fVar1;
        return param_1;
    }

    // 0x1002c75c0, 528 bytes, placed by class name
    // AffineTransform3::ToTransposedAffineMatrix4x4(Array<float, eastl::allocator>&, int)
    Array* AffineTransform3::ToTransposedAffineMatrix4x4(Array* param_1, int param_2) {
        float fVar1;
        float* pfVar2;
        undefined4* puVar3;

        fVar1 = field_0;
        pfVar2 =
            (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1, (long)param_2);
        *pfVar2 = fVar1;
        fVar1 = field_12;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                    (long)(param_2 + 1));
        *pfVar2 = fVar1;
        fVar1 = field_24;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                    (long)(param_2 + 2));
        *pfVar2 = fVar1;
        fVar1 = field_36;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                    (long)(param_2 + 3));
        *pfVar2 = fVar1;
        fVar1 = field_4;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                    (long)(param_2 + 4));
        *pfVar2 = fVar1;
        fVar1 = field_16;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                    (long)(param_2 + 5));
        *pfVar2 = fVar1;
        fVar1 = field_28;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                    (long)(param_2 + 6));
        *pfVar2 = fVar1;
        fVar1 = field_40;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                    (long)(param_2 + 7));
        *pfVar2 = fVar1;
        fVar1 = field_8;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                    (long)(param_2 + 8));
        *pfVar2 = fVar1;
        fVar1 = field_20;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                    (long)(param_2 + 9));
        *pfVar2 = fVar1;
        fVar1 = field_32;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                    (long)(param_2 + 10));
        *pfVar2 = fVar1;
        fVar1 = field_44;
        pfVar2 = (float*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                    (long)(param_2 + 11));
        *pfVar2 = fVar1;
        puVar3 = (undefined4*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                         (long)(param_2 + 12));
        *puVar3 = 0;
        puVar3 = (undefined4*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                         (long)(param_2 + 13));
        *puVar3 = 0;
        puVar3 = (undefined4*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                         (long)(param_2 + 14));
        *puVar3 = 0;
        puVar3 = (undefined4*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)param_1,
                                                                         (long)(param_2 + 15));
        *puVar3 = 1065353216;
        return param_1;
    }

    // 0x1002c77d0, 224 bytes, placed by class name
    // AffineTransform3::ToString()
    AffineTransform3* AffineTransform3::ToString() {
        float* in_RSI;

        new (this) eastl::string();
        eastl::string::append_sprintf((char*)this, (double)*in_RSI, (double)in_RSI[3], (double)in_RSI[6],
                                      (double)in_RSI[9], (double)in_RSI[1], (double)in_RSI[4], (double)in_RSI[7],
                                      (double)in_RSI[10], "%f,%f,%f,%f\n%f,%f,%f,%f\n%f,%f,%f%f");
        return this;
    }

    // 0x1002c78b0, 112 bytes, placed by class name
    // AffineTransform3::HasSameRotation(AffineTransform3 const&, AffineTransform3 const&)
    bool AffineTransform3::HasSameRotation(AffineTransform3* param_1, AffineTransform3* param_2) {
        if (((((param_1->field_0 == param_2->field_0) && (param_1->field_4 == param_2->field_4)) &&
              (param_1->field_8 == param_2->field_8)) &&
             ((param_1->field_12 == param_2->field_12 && (param_1->field_16 == param_2->field_16)))) &&
            ((param_1->field_20 == param_2->field_20 &&
              ((param_1->field_24 == param_2->field_24 && (param_1->field_28 == param_2->field_28)))))) {
            return param_1->field_32 == param_2->field_32;
        }
        return false;
    }

} // namespace jag::oldscape::math

// 0x1002c4370, 64 bytes, placed by neighbouring functions
// sqrt(float)
undefined8 sqrt(float param_1) {
    uint in_XMM0_Db;
    undefined4 in_XMM0_Dc;
    undefined4 in_XMM0_Dd;
    undefined1 in_XMM1[16];
    undefined1 auVar1[16];
    float fVar2;

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = param_1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    fVar2 = param_1 * auVar1._0_4_;
    return CONCAT44(~(in_XMM0_Db & 2147483647) & in_XMM0_Db,
                    ~-(uint)(ABS(param_1) < 1.1754944e-38) & (uint)((fVar2 * auVar1._0_4_ + -3.0) * fVar2 * -0.5));
}

// 0x1002c4620, 16 bytes, placed by neighbouring functions
// cos(float)
void cos(float param_1) {
    _cosf();
}

// 0x1002c4630, 16 bytes, placed by neighbouring functions
// sin(float)
void sin(float param_1) {
    _sinf();
}
