// libs/math/primitives/Sphere.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.math

#include "Sphere.h"

namespace jag::math {
    // 0x100009ca0: Sphere::GetPos() has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100009ca0: Sphere::GetPos() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x1000641f0: Sphere::GetRadius() const has the same machine code as graphics::SunlightOptions::GetSunElevation() const

    // 0x1001df680: Sphere::operator=(Sphere const&) has the same machine code as PlaneT<float>::operator=(PlaneT<float> const&)

    // 0x1003e9e60: Sphere::SetRadius(float) has the same machine code as FacingController::SetTurnSpeedMultiplier(float)

    // 0x100c6c9e0
    void NearestPointOnInfiniteLine(const Vector3T<float>& vector31, const Vector3T<float>& vector32,
                                    const Vector3T<float>& vector33, Vector3T<float>& vector34) {
        unsigned int extraout_XMM0_Db;
        unsigned int extraout_XMM0_Dc;
        unsigned int extraout_XMM0_Dd;
        uint64_t local_78[2];
        uint64_t local_68[2];
        uint64_t local_58[2];

        local_78[0] = vector31 - vector33;
        uint64_t local_30 = vector32 - vector31;
        float local_24 = (float)local_30.LengthSq();
        float local_48 = Vector3Dot<float>((Vector3T<float>*)local_78, (Vector3T<float>*)&local_30);
        unsigned int uStack_44 = extraout_XMM0_Db;
        unsigned int uStack_40 = extraout_XMM0_Dc;
        unsigned int uStack_3c = extraout_XMM0_Dd;
        if ((float)::abs(local_24) <= 1e-06) {
            LogAssert(
                "std::abs(dRdR) > literals_float::REAL_APPROX_ZERO",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/primitives/Sphere.cpp", 17,
                nullptr);
        }
        uStack_44 = uStack_44 ^ 2147483648;
        uStack_40 = uStack_40 ^ 2147483648;
        uStack_3c = uStack_3c ^ 2147483648;
        local_48 = -local_48 / local_24;
        local_58[0] = local_48 * &local_30;
        local_68[0] = vector31 + *local_58;
        vector34.SetXYZ(*local_68);
        return (((uint64_t)uStack_44 << 32) | (uint32_t)local_48);
    }

    // 0x100c6cad0
    uint64_t Sphere::TimeIntersection(const Vector3T<float>& vector31, const Vector3T<float>& vector32) const {
        float fVar3;
        uint64_t uVar4;
        float local_7c;
        unsigned int uStack_64;
        uint64_t local_58;
        uint64_t local_48;
        float local_40;
        uint64_t local_38;
        float local_30;

        float fVar2 = (float)vector32.LengthSq();
        unsigned int uVar5 = 897988541;
        unsigned int uVar6 = 0;
        if (fVar2 < 1e-06)
            goto LAB_100c6cd4c;
        Vector3T<int> local_88;
        uint64_t local_78 = vector31 + vector32;
        unsigned int local_70 = uVar5;
        auto pVVar1 = SSOBeginPtr();
        local_58._0_4_ = (float)NearestPointOnInfiniteLine(vector31, (Vector3T<float>*)&local_78, pVVar1, &local_88);
        pVVar1 = (Vector3T<float>*)SSOBeginPtr();
        local_78 = local_88 - *pVVar1;
        local_70 = uVar5;
        float local_68 = (float)local_78.LengthSq();
        fVar2 = (float)GetRadiusSq();
        uVar5 = 0;
        uVar6 = 0;
        if (fVar2 < local_68)
            goto LAB_100c6cd4c;
        fVar2 = (float)local_58;
        if (0.0 <= (float)local_58) {
        LAB_100c6cbd8:
            if (1.0 < (float)local_58) {
                local_38 = vector31 + vector32;
                local_30 = fVar2;
                pVVar1 = (Vector3T<float>*)SSOBeginPtr();
                local_48 = local_38 - *pVVar1;
                local_40 = fVar2;
                local_58._0_4_ = (float)local_48.LengthSq();
                fVar2 = (float)GetRadiusSq();
                if (fVar2 <= (float)local_58)
                    goto LAB_100c6cd44;
            }
            fVar2 = (float)GetRadiusSq();
            local_58._0_4_ = (float)::sqrt(fVar2 - local_68);
            local_68 = (float)vector32.Length();
            if (local_68 <= 1e-06) {
                LogAssert(
                    "lineLength > REAL_APPROX_ZERO",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/primitives/Sphere.cpp",
                    71, nullptr);
            }
            fVar2 = 1.0 / local_68;
            local_68 = fVar2;
            local_38 = (*((float)local_58 * fVar2)) vector32;
            local_30 = fVar2;
            local_48 = local_88 - local_38;
            local_40 = fVar2;
            local_38 = local_48 - vector31;
            local_30 = fVar2;
            uVar4 = local_38.Length();
            uStack_64 = (unsigned int)((unsigned long)uVar4 >> 32);
            local_68 = (float)uVar4 * local_68;
            pVVar1 = (Vector3T<float>*)SSOBeginPtr();
            local_38 = vector31 - *pVVar1;
            local_30 = fVar2;
            local_58 = local_38.LengthSq();
            fVar2 = (float)GetRadiusSq();
            uVar5 = ~-(unsigned int)((float)local_58 < fVar2) & (unsigned int)local_68 |
                    (unsigned int)-local_68 & -(unsigned int)((float)local_58 < fVar2);
            uVar6 = ~local_58._4_4_ & uStack_64 | (uStack_64 ^ 2147483648) & local_58._4_4_;
        } else {
            pVVar1 = (Vector3T<float>*)SSOBeginPtr();
            local_48 = vector31 - *pVVar1;
            local_40 = fVar2;
            local_7c = (float)local_48.LengthSq();
            fVar3 = (float)GetRadiusSq();
            fVar2 = local_7c;
            if (local_7c < fVar3)
                goto LAB_100c6cbd8;
        LAB_100c6cd44:
            uVar5 = 897988541;
            uVar6 = 0;
        }
    LAB_100c6cd4c:
        return (((uint64_t)uVar6 << 32) | (uint32_t)uVar5);
    }

} // namespace jag::math
