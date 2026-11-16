// libs/math/geometry/BoundingSphereBuilder.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.math

#include "BoundingSphereBuilder.h"

namespace jag::graphicutils {
    // 0x10014e180: BoundingSphereBuilder::GetBestFitSphere() const has the same machine code as math::Vector2T<float>::y() const

    // 0x100c635f0
    void BoundingSphereBuilder::BeginPass1() {
        if (field_0 != 0) {
            LogAssert("m_buildStatus == BuildState::READY",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/geometry/"
                      "BoundingSphereBuilder.cpp",
                      11, nullptr);
        }
        field_48->Reset();
        ((field_48 + 32))->SetToZero();
        field_96 = 0;
        ((field_100 + 16))->Set(3.4028235e+38, 0.0, 0.0);
        field_128.Set(-3.4028235e+38, 0.0, 0.0);
        field_140.Set(0.0, 3.4028235e+38, 0.0);
        field_152.Set(0.0, -3.4028235e+38, 0.0);
        field_164.Set(0.0, 0.0, 3.4028235e+38);
        field_176.Set(0.0, 0.0, -3.4028235e+38);
        field_0 = 1;
    }

    // 0x100c63790
    void BoundingSphereBuilder::AddPointPass1(const math::Vector3T<float>& vector3) {
        if (field_0 != 1) {
            LogAssert("m_buildStatus == BuildState::PASS1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/geometry/"
                      "BoundingSphereBuilder.cpp",
                      30, nullptr);
        }
        field_48->AddPoint(vector3);
        ((field_48 + 32))->Translate(vector3);
        field_96 = field_96 + 1;
        auto pfVar2 = vector3.SSOBeginPtr();
        float fVar1 = *pfVar2;
        pfVar2 = (float*)((field_100 + 16))->SSOBeginPtr();
        if (fVar1 < *pfVar2) {
            ((field_100 + 16))->SetXYZ(vector3);
        }
        pfVar2 = (float*)vector3.SSOBeginPtr();
        fVar1 = *pfVar2;
        pfVar2 = (float*)field_128.SSOBeginPtr();
        if (*pfVar2 <= fVar1 && fVar1 != *pfVar2) {
            field_128.SetXYZ(vector3);
        }
        pfVar2 = (float*)vector3.y();
        fVar1 = *pfVar2;
        pfVar2 = (float*)field_140.y();
        if (fVar1 < *pfVar2) {
            field_140.SetXYZ(vector3);
        }
        pfVar2 = (float*)vector3.y();
        fVar1 = *pfVar2;
        pfVar2 = (float*)field_152.y();
        if (*pfVar2 <= fVar1 && fVar1 != *pfVar2) {
            field_152.SetXYZ(vector3);
        }
        pfVar2 = (float*)vector3.second();
        fVar1 = *pfVar2;
        pfVar2 = (float*)field_164.second();
        if (fVar1 < *pfVar2) {
            field_164.SetXYZ(vector3);
        }
        pfVar2 = (float*)vector3.second();
        fVar1 = *pfVar2;
        pfVar2 = (float*)field_176.second();
        if (*pfVar2 <= fVar1 && fVar1 != *pfVar2) {
            field_176.SetXYZ(vector3);
        }
    }

    // 0x100c63a20
    void BoundingSphereBuilder::BeginPass2() {
        float in_XMM1_Da;
        float local_2c;

        if (field_0 != 1) {
            LogAssert("m_buildStatus == BuildState::PASS1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/geometry/"
                      "BoundingSphereBuilder.cpp",
                      69, nullptr);
        }
        uint64_t local_40 = field_48->GetCentrePos();
        field_20->Set(local_40, 0.0);
        if (field_96 < 1) {
            local_2c = 1.0;
        } else {
            in_XMM1_Da = 1.0 / (float)field_96;
            local_2c = in_XMM1_Da;
        }
        Vector3T<float>* vector3 = (Vector3T<float>*)((field_48 + 32))->SSOBeginPtr();
        local_40 = *local_2c * *vector3;
        float local_38 = in_XMM1_Da;
        ((field_48 + 32))->Set(local_40, 0.0);
        local_38 = field_124;
        local_40 = *(uint64_t*)(field_100 + 16);
        uint32_t local_48 = field_136;
        uint64_t local_50 = field_128;
        auto pfVar3 = field_128.SSOBeginPtr();
        local_2c = *pfVar3;
        pfVar3 = (float*)((field_100 + 16))->SSOBeginPtr();
        local_2c = (float)::abs(local_2c - *pfVar3);
        uint8_t* puVar1 = &field_152;
        pfVar3 = (float*)puVar1->y();
        float local_30 = *pfVar3;
        uint8_t* puVar2 = &field_140;
        pfVar3 = (float*)puVar2->y();
        float fVar4 = (float)::abs(local_30 - *pfVar3);
        if (local_2c < fVar4) {
            pfVar3 = (float*)puVar1->y();
            local_2c = *pfVar3;
            pfVar3 = (float*)puVar2->y();
            local_2c = (float)::abs(local_2c - *pfVar3);
            local_40.SetXYZ(*puVar2);
            local_50.SetXYZ(*puVar1);
        }
        puVar1 = &field_176;
        pfVar3 = (float*)puVar1->second();
        local_30 = *pfVar3;
        puVar2 = &field_164;
        pfVar3 = (float*)puVar2->second();
        fVar4 = (float)::abs(local_30 - *pfVar3);
        if (local_2c < fVar4) {
            puVar1->second();
            puVar2->second();
            local_40.SetXYZ(*puVar2);
            local_50.SetXYZ(*puVar1);
        }
        uint64_t local_70 = local_40 + local_50;
        float local_68 = in_XMM1_Da;
        uint64_t local_80 = *0.5 * local_70;
        float local_78 = in_XMM1_Da;
        uint64_t local_60 = local_50 - local_40;
        float local_58 = in_XMM1_Da;
        fVar4 = (float)local_60.Length();
        field_100->Set(local_80, fVar4 * 0.5);
        field_0 = 2;
    }

    // 0x100c63d40
    void BoundingSphereBuilder::AddPointPass2(const math::Vector3T<float>& vector3) {
        uint64_t local_40;
        float local_38;
        float local_34;

        if (field_0 != 2) {
            LogAssert("m_buildStatus == BuildState::PASS2",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/geometry/"
                      "BoundingSphereBuilder.cpp",
                      105, nullptr);
        }
        uint8_t* puVar2 = field_20;
        auto pVVar1 = puVar2->SSOBeginPtr();
        uint64_t local_30 = vector3 - *pVVar1;
        float local_24 = (float)local_30.Length();
        float fVar3 = (float)puVar2->GetOutlineRadiusAdjustment();
        float fVar4 = local_24;
        if (fVar3 < local_24) {
            puVar2->SetVerticalFov(local_24);
        }
        Camera* this_00 = (Camera*)(field_48 + 32);
        pVVar1 = (Vector3T<float>*)this_00->SSOBeginPtr();
        local_30 = vector3 - *pVVar1;
        float local_28 = fVar4;
        local_24 = (float)local_30.Length();
        fVar3 = (float)this_00->GetOutlineRadiusAdjustment();
        fVar4 = local_24;
        if (fVar3 < local_24) {
            this_00->SetVerticalFov(local_24);
        }
        puVar2 = field_100;
        pVVar1 = (Vector3T<float>*)puVar2->SSOBeginPtr();
        local_30 = vector3 - *pVVar1;
        local_28 = fVar4;
        local_24 = (float)local_30.Length();
        fVar4 = (float)puVar2->GetOutlineRadiusAdjustment();
        if (fVar4 < local_24) {
            fVar4 = (float)puVar2->GetOutlineRadiusAdjustment();
            fVar4 = (local_24 - fVar4) * 0.5;
            local_34 = fVar4;
            local_40 = (*(fVar4 / local_24)) * local_30;
            local_38 = fVar4;
            puVar2->Translate(local_40);
            fVar4 = (float)puVar2->GetOutlineRadiusAdjustment();
            puVar2->SetVerticalFov(fVar4 + local_34);
        }
    }

    // 0x100c63ec0
    void BoundingSphereBuilder::End() {
        if (field_0 != 2) {
            LogAssert("m_buildStatus == BuildState::PASS2",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/geometry/"
                      "BoundingSphereBuilder.cpp",
                      136, nullptr);
        }
        uint8_t* this_00 = &field_4;
        *this_00 = *field_20;
        float fVar1 = (float)((field_48 + 32))->GetOutlineRadiusAdjustment();
        float fVar2 = (float)this_00->GetOutlineRadiusAdjustment();
        if (fVar1 < fVar2) {
            *this_00 = (*((field_48 + 32)));
        }
        fVar1 = (float)field_100->GetOutlineRadiusAdjustment();
        fVar2 = (float)this_00->GetOutlineRadiusAdjustment();
        if (fVar1 < fVar2) {
            *this_00 = *field_100;
        }
        field_0 = 0;
    }

} // namespace jag::graphicutils
