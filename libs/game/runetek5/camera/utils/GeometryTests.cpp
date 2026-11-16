// libs/game/runetek5/camera/utils/GeometryTests.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::math {
    class GeometryTests {
    public:
        void SphereLineTest(Intersection& intersection, const Vector3T<double>& vector31,
                            const Vector3T<double>& vector32, const Vector3T<double>& vector33, double arg5);
        float Cross(const Vector2T<float>& vector21, const Vector2T<float>& vector22, const Vector2T<float>& vector23);
        bool PointTriangle2DTest(const Vector2T<float>& vector21, const Vector2T<float>& vector22,
                                 const Vector2T<float>& vector23, const Vector2T<float>& vector24);
        static int32_t EPSILON; // = 981467136
    };

    // 0x100d431a8
    int32_t GeometryTests::EPSILON = 981467136;

    // 0x100607490
    void GeometryTests::SphereLineTest(GeometryTests::Intersection& intersection, const Vector3T<double>& vector31,
                                       const Vector3T<double>& vector32, const Vector3T<double>& vector33,
                                       double arg5) {
        uint64_t uVar1;
        Vector3T<double>* vector3T;
        Vector3T<double> local_90;
        Vector3T<double> local_78;
        Vector3T<double> local_60;

        double local_38 = arg5;
        local_90 - vector31;
        double local_48 = Vector3Dot<double>(&local_90, &local_90);
        local_38 = local_38 * local_38;
        double dVar2 = Vector3Dot<double>(vector32, &local_90);
        local_38 = (local_38 - local_48) + dVar2 * dVar2;
        if (0.0 <= local_38) {
            local_48 = dVar2;
            intersection = vector31;
            if (0.0009765625f <= local_38) {
                vector3T = (Vector3T<double>*)(intersection + 24);
                *vector3T = vector31;
                *(uint32_t*)(intersection + 48) = 2;
                local_38 = SQRT(local_38);
                local_60*(*(-(local_38 + local_48)));
                intersection += local_60;
                local_78*(*(local_38 - local_48));
                local_60 = local_78;
            } else {
                *(uint32_t*)(intersection + 48) = 1;
                local_60*(*(-local_48));
                vector3T = (Vector3T<double>*)intersection;
            }
            *vector3T += local_60;
            uVar1 = 1;
        } else {
            uVar1 = 0;
        }
        return uVar1;
    }

    // 0x100607630
    float GeometryTests::Cross(const Vector2T<float>& vector21, const Vector2T<float>& vector22,
                               const Vector2T<float>& vector23) {
        auto pfVar8 = vector21.SSOBeginPtr();
        float fVar1 = *pfVar8;
        pfVar8 = (float*)vector23.SSOBeginPtr();
        float fVar2 = *pfVar8;
        pfVar8 = (float*)vector22.y();
        float fVar3 = *pfVar8;
        pfVar8 = (float*)vector23.y();
        float fVar4 = *pfVar8;
        pfVar8 = (float*)vector22.SSOBeginPtr();
        float fVar5 = *pfVar8;
        pfVar8 = (float*)vector23.SSOBeginPtr();
        float fVar6 = *pfVar8;
        pfVar8 = (float*)vector21.y();
        float fVar7 = *pfVar8;
        pfVar8 = (float*)vector23.y();
        return (*pfVar8 - fVar7) * (fVar5 - fVar6) + (fVar3 - fVar4) * (fVar1 - fVar2);
    }

    // 0x100607700
    bool GeometryTests::PointTriangle2DTest(const Vector2T<float>& vector21, const Vector2T<float>& vector22,
                                            const Vector2T<float>& vector23, const Vector2T<float>& vector24) {
        float extraout_XMM0_Da;

        float fVar1 = (float)Cross(vector21, vector22, vector23);
        float fVar2 = (float)Cross(vector21, vector23, vector24);
        Cross(vector21, vector24, vector22);
        return fVar1 < 0.0 != 0.0 <= fVar2 && 0.0 <= extraout_XMM0_Da != fVar1 < 0.0;
    }

} // namespace jag::math
