// libs/game/runetek5/camera/utils/GeometryTests.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::math {
    class GeometryTests {
    public:
        SphereLineTest(Intersection&, Vector3T<double> const&, Vector3T<double> const&, Vector3T<double> const&,
                       double);
        float Cross(Vector2T<float> const&, Vector2T<float> const&, Vector2T<float> const&);
        bool PointTriangle2DTest(Vector2T<float> const&, Vector2T<float> const&, Vector2T<float> const&,
                                 Vector2T<float> const&);
        static /* 4 bytes */ EPSILON; // = 981467136
    };

    // 0x100d431a8, 4 bytes, __const
    GeometryTests::EPSILON = 981467136;

    // 0x100607490, 352 bytes, placed by class name and debug map
    // GeometryTests::SphereLineTest(GeometryTests::Intersection&, Vector3T<double> const&, Vector3T<double> const&, Vector3T<double> const&, double)
    undefined8 GeometryTests::SphereLineTest(Intersection* param_1, Vector3T* param_2, Vector3T* param_3,
                                             Vector3T* param_4, double param_5) {
        math* this;
        undefined8 uVar1;
        Vector3T<double>* this_00;
        double dVar2;
        undefined1 local_90[72];
        double local_48;
        double local_38;

        local_38 = param_5;
        math::operator-((math*)local_90, param_2, param_4);
        local_48 = Vector3Dot<double>((Vector3T*)local_90, (Vector3T*)local_90);
        local_38 = local_38 * local_38;
        dVar2 = Vector3Dot<double>(param_3, (Vector3T*)local_90);
        local_38 = (local_38 - local_48) + dVar2 * dVar2;
        if (0.0 <= local_38) {
            local_48 = dVar2;
            Vector3T<double>::operator=((Vector3T<double>*)param_1, param_2);
            if (0.0009765625 <= local_38) {
                this_00 = (Vector3T<double>*)(param_1 + 24);
                Vector3T<double>::operator=(this_00, param_2);
                *(undefined4*)(param_1 + 48) = 2;
                local_38 = SQRT(local_38);
                this = (math*)(local_90 + 48);
                math::operator*(this, -(local_38 + local_48), param_3);
                Vector3T<double>::operator+=((Vector3T<double>*)param_1, (Vector3T*)this);
                math::operator*((math*)(local_90 + 24), local_38 - local_48, param_3);
                Vector3T<double>::operator=((Vector3T<double>*)this, (Vector3T*)(local_90 + 24));
            } else {
                *(undefined4*)(param_1 + 48) = 1;
                math::operator*((math*)(local_90 + 48), -local_48, param_3);
                this_00 = (Vector3T<double>*)param_1;
            }
            Vector3T<double>::operator+=(this_00, (Vector3T*)(local_90 + 48));
            uVar1 = 1;
        } else {
            uVar1 = 0;
        }
        return uVar1;
    }

    // 0x100607630, 208 bytes, placed by class name and debug map
    // GeometryTests::Cross(Vector2T<float> const&, Vector2T<float> const&, Vector2T<float> const&)
    float GeometryTests::Cross(Vector2T* param_1, Vector2T* param_2, Vector2T* param_3) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        vector* pvVar8;
        float* pfVar9;

        pvVar8 = param_1->SSOBeginPtr(param_2);
        fVar1 = *(float*)pvVar8;
        pvVar8 = param_3->SSOBeginPtr(param_2);
        fVar2 = *(float*)pvVar8;
        pfVar9 = (float*)param_2->y();
        fVar3 = *pfVar9;
        pfVar9 = (float*)param_3->y();
        fVar4 = *pfVar9;
        pvVar8 = param_2->SSOBeginPtr(param_2);
        fVar5 = *(float*)pvVar8;
        pvVar8 = param_3->SSOBeginPtr(param_2);
        fVar6 = *(float*)pvVar8;
        pfVar9 = (float*)param_1->y();
        fVar7 = *pfVar9;
        pfVar9 = (float*)param_3->y();
        return (*pfVar9 - fVar7) * (fVar5 - fVar6) + (fVar3 - fVar4) * (fVar1 - fVar2);
    }

    // 0x100607700, 144 bytes, placed by class name and debug map
    // GeometryTests::PointTriangle2DTest(Vector2T<float> const&, Vector2T<float> const&, Vector2T<float> const&, Vector2T<float> const&)
    bool GeometryTests::PointTriangle2DTest(Vector2T* param_1, Vector2T* param_2, Vector2T* param_3,
                                            Vector2T* param_4) {
        float fVar1;
        float fVar2;
        float extraout_XMM0_Da;

        fVar1 = (float)Cross(param_1, param_2, param_3);
        fVar2 = (float)Cross(param_1, param_3, param_4);
        Cross(param_1, param_4, param_2);
        return fVar1 < 0.0 != 0.0 <= fVar2 && 0.0 <= extraout_XMM0_Da != fVar1 < 0.0;
    }

} // namespace jag::math
