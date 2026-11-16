// libs/math/primitives/Sphere.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.math

#include "Sphere.h"

namespace jag::math {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    Sphere::GetPos();

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    Sphere::GetPos() const;

    // 0x1000641f0: the linker folded this into graphics::SunlightOptions::GetSunElevation() const, which has identical code
    Sphere::GetRadius() const;

    // 0x1001df680: the linker folded this into PlaneT<float>::operator=(PlaneT<float> const&), which has identical code
    Sphere::operator=(Sphere const&);

    // 0x1003e9e60: the linker folded this into FacingController::SetTurnSpeedMultiplier(float), which has identical code
    Sphere::SetRadius(float);

    // 0x100c6c9e0, 240 bytes, placed by debug map only (low confidence)
    // NearestPointOnInfiniteLine(Vector3T<float> const&, Vector3T<float> const&, Vector3T<float> const&, Vector3T<float>&)
    undefined8 NearestPointOnInfiniteLine(Vector3T* param_1, Vector3T* param_2, Vector3T* param_3, Vector3T* param_4) {
        uint extraout_XMM0_Db;
        uint extraout_XMM0_Dc;
        uint extraout_XMM0_Dd;
        undefined8 local_78[2];
        undefined8 local_68[2];
        undefined8 local_58[2];
        float local_48;
        uint uStack_44;
        uint uStack_40;
        uint uStack_3c;
        undefined8 local_30;
        float local_24;

        local_78[0] = operator-(param_1, param_3);
        local_30 = operator-(param_2, param_1);
        local_24 = (float)local_30.LengthSq();
        local_48 = Vector3Dot<float>((Vector3T*)local_78, (Vector3T*)&local_30);
        uStack_44 = extraout_XMM0_Db;
        uStack_40 = extraout_XMM0_Dc;
        uStack_3c = extraout_XMM0_Dd;
        if ((float)::abs(local_24) <= 1e-06) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "std::abs(dRdR) > literals_float::REAL_APPROX_ZERO",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/primitives/Sphere.cpp", 17,
                (char*)0);
        }
        uStack_44 = uStack_44 ^ 2147483648;
        uStack_40 = uStack_40 ^ 2147483648;
        uStack_3c = uStack_3c ^ 2147483648;
        local_48 = -local_48 / local_24;
        local_58[0] = operator*((Vector3T*)&local_30, local_48);
        local_68[0] = operator+(param_1, (Vector3T*)local_58);
        param_4->SetXYZ(local_68);
        return CONCAT44(uStack_44, local_48);
    }

    // 0x100c6cad0, 656 bytes, placed by class name and debug map
    // Sphere::TimeIntersection(Vector3T<float> const&, Vector3T<float> const&) const
    undefined8 Sphere::TimeIntersection(Vector3T* param_1, Vector3T* param_2) {
        vector* pvVar1;
        Vector3T* pVVar2;
        float fVar3;
        float fVar4;
        undefined8 uVar5;
        uint uVar6;
        uint uVar7;
        Vector3T<int> local_88[12];
        float local_7c;
        undefined8 local_78;
        uint local_70;
        float local_68;
        uint uStack_64;
        undefined8 local_58;
        undefined8 local_48;
        float local_40;
        undefined8 local_38;
        float local_30;

        fVar3 = (float)param_2->LengthSq();
        uVar6 = 897988541;
        uVar7 = 0;
        if (fVar3 < 1e-06)
            goto LAB_100c6cd4c;
        Vector3T<int>::Vector3T(local_88);
        pVVar2 = param_2;
        local_78 = math::operator+(param_1, param_2);
        local_70 = uVar6;
        pvVar1 = SSOBeginPtr(pVVar2);
        pVVar2 = (Vector3T*)&local_78;
        local_58._0_4_ = (float)NearestPointOnInfiniteLine(param_1, pVVar2, (Vector3T*)pvVar1, (Vector3T*)local_88);
        pvVar1 = SSOBeginPtr(pVVar2);
        local_78 = math::operator-((Vector3T*)local_88, (Vector3T*)pvVar1);
        local_70 = uVar6;
        local_68 = (float)local_78.LengthSq();
        fVar3 = (float)GetRadiusSq(this);
        uVar6 = 0;
        uVar7 = 0;
        if (fVar3 < local_68)
            goto LAB_100c6cd4c;
        fVar3 = (float)local_58;
        if (0.0 <= (float)local_58) {
        LAB_100c6cbd8:
            if (1.0 < (float)local_58) {
                pVVar2 = param_2;
                local_38 = math::operator+(param_1, param_2);
                local_30 = fVar3;
                pvVar1 = SSOBeginPtr(pVVar2);
                local_48 = math::operator-((Vector3T*)&local_38, (Vector3T*)pvVar1);
                local_40 = fVar3;
                local_58._0_4_ = (float)local_48.LengthSq();
                fVar3 = (float)GetRadiusSq(this);
                if (fVar3 <= (float)local_58)
                    goto LAB_100c6cd44;
            }
            fVar3 = (float)GetRadiusSq(this);
            local_58._0_4_ = (float)::sqrt(fVar3 - local_68);
            local_68 = (float)param_2->Length();
            if (local_68 <= 1e-06) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "lineLength > REAL_APPROX_ZERO",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/primitives/Sphere.cpp",
                    71, (char*)0);
            }
            fVar3 = 1.0 / local_68;
            local_68 = fVar3;
            local_38 = math::operator*(param_2, (float)local_58 * fVar3);
            local_30 = fVar3;
            local_48 = math::operator-((Vector3T*)local_88, (Vector3T*)&local_38);
            pVVar2 = param_1;
            local_40 = fVar3;
            local_38 = math::operator-((Vector3T*)&local_48, param_1);
            local_30 = fVar3;
            uVar5 = local_38.Length();
            uStack_64 = (uint)((ulong)uVar5 >> 32);
            local_68 = (float)uVar5 * local_68;
            pvVar1 = SSOBeginPtr(pVVar2);
            local_38 = math::operator-(param_1, (Vector3T*)pvVar1);
            local_30 = fVar3;
            local_58 = local_38.LengthSq();
            fVar3 = (float)GetRadiusSq(this);
            uVar6 =
                ~-(uint)((float)local_58 < fVar3) & (uint)local_68 | (uint)-local_68 & -(uint)((float)local_58 < fVar3);
            uVar7 = ~local_58._4_4_ & uStack_64 | (uStack_64 ^ 2147483648) & local_58._4_4_;
        } else {
            pvVar1 = SSOBeginPtr(pvVar1);
            local_48 = math::operator-(param_1, (Vector3T*)pvVar1);
            local_40 = fVar3;
            local_7c = (float)local_48.LengthSq();
            fVar4 = (float)GetRadiusSq(this);
            fVar3 = local_7c;
            if (local_7c < fVar4)
                goto LAB_100c6cbd8;
        LAB_100c6cd44:
            uVar6 = 897988541;
            uVar7 = 0;
        }
    LAB_100c6cd4c:
        return CONCAT44(uVar7, uVar6);
    }

} // namespace jag::math
