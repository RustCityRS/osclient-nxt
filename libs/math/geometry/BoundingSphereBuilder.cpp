// libs/math/geometry/BoundingSphereBuilder.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.math

#include "BoundingSphereBuilder.h"

namespace jag::graphicutils {
    // 0x10014e180: the linker folded this into math::Vector2T<float>::y() const, which has identical code
    BoundingSphereBuilder::GetBestFitSphere() const;

    // 0x100c635f0, 240 bytes, placed by class name and debug map
    // BoundingSphereBuilder::BeginPass1()
    void BoundingSphereBuilder::BeginPass1() {
        if (field_0 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_buildStatus == BuildState::READY",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/geometry/"
                      "BoundingSphereBuilder.cpp",
                      11, (char*)0);
        }
        (&field_48)->Reset();
        (&field_80)->SetToZero();
        field_96 = 0;
        ((field_100 + 16), 3.4028235e+38, 0.0, 0.0)->Set();
        (&field_128, -3.4028235e+38, 0.0, 0.0)->Set();
        (&field_140, 0.0, 3.4028235e+38, 0.0)->Set();
        (&field_152, 0.0, -3.4028235e+38, 0.0)->Set();
        (&field_164, 0.0, 0.0, 3.4028235e+38)->Set();
        (&field_176, 0.0, 0.0, -3.4028235e+38)->Set();
        field_0 = 1;
    }

    // 0x100c63790, 416 bytes, placed by class name
    // BoundingSphereBuilder::AddPointPass1(math::Vector3T<float> const&)
    void BoundingSphereBuilder::AddPointPass1(Vector3T* param_1) {
        float fVar1;
        vector* pvVar2;
        float* pfVar3;
        Vector3T* pVVar4;

        if (field_0 != 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_buildStatus == BuildState::PASS1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/geometry/"
                      "BoundingSphereBuilder.cpp",
                      30, (char*)0);
        }
        (&field_48, param_1)->AddPoint();
        pVVar4 = param_1;
        (&field_80, param_1)->Translate();
        field_96 = field_96 + 1;
        pvVar2 = param_1->SSOBeginPtr(pVVar4);
        fVar1 = *(float*)pvVar2;
        pvVar2 = ((field_100 + 16), (type*)pVVar4)->SSOBeginPtr();
        if (fVar1 < *(float*)pvVar2) {
            pVVar4 = param_1;
            ((field_100 + 16), param_1)->SetXYZ();
        }
        pvVar2 = param_1->SSOBeginPtr(pVVar4);
        fVar1 = *(float*)pvVar2;
        pvVar2 = (&field_128, (type*)pVVar4)->SSOBeginPtr();
        if (*(float*)pvVar2 <= fVar1 && fVar1 != *(float*)pvVar2) {
            (&field_128, param_1)->SetXYZ();
        }
        pfVar3 = (float*)param_1->y();
        fVar1 = *pfVar3;
        pfVar3 = (float*)(&field_140)->y();
        if (fVar1 < *pfVar3) {
            (&field_140, param_1)->SetXYZ();
        }
        pfVar3 = (float*)param_1->y();
        fVar1 = *pfVar3;
        pfVar3 = (float*)(&field_152)->y();
        if (*pfVar3 <= fVar1 && fVar1 != *pfVar3) {
            (&field_152, param_1)->SetXYZ();
        }
        pfVar3 = (float*)param_1->second();
        fVar1 = *pfVar3;
        pfVar3 = (float*)(&field_164)->second();
        if (fVar1 < *pfVar3) {
            (&field_164, param_1)->SetXYZ();
        }
        pfVar3 = (float*)param_1->second();
        fVar1 = *pfVar3;
        pfVar3 = (float*)(&field_176)->second();
        if (*pfVar3 <= fVar1 && fVar1 != *pfVar3) {
            (&field_176, param_1)->SetXYZ();
        }
    }

    // 0x100c63a20, 656 bytes, placed by class name
    // BoundingSphereBuilder::BeginPass2()
    void BoundingSphereBuilder::BeginPass2() {
        undefined1* puVar1;
        undefined1* puVar2;
        vector* pvVar3;
        float* pfVar4;
        Vector3T* pVVar5;
        float fVar6;
        float in_XMM1_Da;
        undefined8 local_80;
        float local_78;
        undefined8 local_70;
        float local_68;
        undefined8 local_60;
        float local_58;
        undefined8 local_50;
        undefined4 local_48;
        undefined8 local_40;
        float local_38;
        float local_30;
        float local_2c;

        if (field_0 != 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_buildStatus == BuildState::PASS1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/geometry/"
                      "BoundingSphereBuilder.cpp",
                      69, (char*)0);
        }
        local_40 = (&field_48)->GetCentrePos();
        pVVar5 = (Vector3T*)&local_40;
        (field_20, pVVar5, 0.0)->Set();
        if (field_96 < 1) {
            local_2c = 1.0;
        } else {
            in_XMM1_Da = 1.0 / (float)field_96;
            local_2c = in_XMM1_Da;
        }
        pvVar3 = (&field_80, (type*)pVVar5)->SSOBeginPtr();
        local_40 = math::operator*((Vector3T*)pvVar3, local_2c);
        pVVar5 = (Vector3T*)&local_40;
        local_38 = in_XMM1_Da;
        (&field_80, pVVar5, 0.0)->Set();
        local_38 = field_124;
        local_40 = *(undefined8*)(field_100 + 16);
        local_48 = field_136;
        local_50 = field_128;
        pvVar3 = (&field_128, (type*)pVVar5)->SSOBeginPtr();
        local_2c = *(float*)pvVar3;
        pvVar3 = ((field_100 + 16), (type*)pVVar5)->SSOBeginPtr();
        local_2c = (float)::abs(local_2c - *(float*)pvVar3);
        puVar1 = &field_152;
        pfVar4 = (float*)puVar1->y();
        local_30 = *pfVar4;
        puVar2 = &field_140;
        pfVar4 = (float*)puVar2->y();
        fVar6 = (float)::abs(local_30 - *pfVar4);
        if (local_2c < fVar6) {
            pfVar4 = (float*)puVar1->y();
            local_2c = *pfVar4;
            pfVar4 = (float*)puVar2->y();
            local_2c = (float)::abs(local_2c - *pfVar4);
            local_40.SetXYZ(puVar2);
            local_50.SetXYZ(puVar1);
        }
        puVar1 = &field_176;
        pfVar4 = (float*)puVar1->second();
        local_30 = *pfVar4;
        puVar2 = &field_164;
        pfVar4 = (float*)puVar2->second();
        fVar6 = (float)::abs(local_30 - *pfVar4);
        if (local_2c < fVar6) {
            puVar1->second();
            puVar2->second();
            local_40.SetXYZ(puVar2);
            local_50.SetXYZ(puVar1);
        }
        local_70 = math::operator+((Vector3T*)&local_40, (Vector3T*)&local_50);
        local_68 = in_XMM1_Da;
        local_80 = math::operator*((Vector3T*)&local_70, 0.5);
        local_78 = in_XMM1_Da;
        local_60 = math::operator-((Vector3T*)&local_50, (Vector3T*)&local_40);
        local_58 = in_XMM1_Da;
        fVar6 = (float)local_60.Length();
        (field_100, (Vector3T*)&local_80, fVar6 * 0.5)->Set();
        field_0 = 2;
    }

    // 0x100c63d40, 384 bytes, placed by class name
    // BoundingSphereBuilder::AddPointPass2(math::Vector3T<float> const&)
    void BoundingSphereBuilder::AddPointPass2(Vector3T* param_1) {
        vector* pvVar1;
        undefined1* puVar2;
        float fVar3;
        float fVar4;
        undefined8 local_40;
        float local_38;
        float local_34;
        undefined8 local_30;
        float local_28;
        float local_24;

        if (field_0 != 2) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_buildStatus == BuildState::PASS2",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/geometry/"
                      "BoundingSphereBuilder.cpp",
                      105, (char*)0);
        }
        puVar2 = field_20;
        pvVar1 = puVar2->SSOBeginPtr(param_1);
        local_30 = math::operator-(param_1, (Vector3T*)pvVar1);
        local_24 = (float)local_30.Length();
        fVar3 = (float)puVar2->GetOutlineRadiusAdjustment();
        fVar4 = local_24;
        if (fVar3 < local_24) {
            puVar2->SetVerticalFov(local_24);
        }
        puVar2 = &field_80;
        pvVar1 = puVar2->SSOBeginPtr(pvVar1);
        local_30 = math::operator-(param_1, (Vector3T*)pvVar1);
        local_28 = fVar4;
        local_24 = (float)local_30.Length();
        fVar3 = (float)puVar2->GetOutlineRadiusAdjustment();
        fVar4 = local_24;
        if (fVar3 < local_24) {
            puVar2->SetVerticalFov(local_24);
        }
        puVar2 = field_100;
        pvVar1 = puVar2->SSOBeginPtr(pvVar1);
        local_30 = math::operator-(param_1, (Vector3T*)pvVar1);
        local_28 = fVar4;
        local_24 = (float)local_30.Length();
        fVar4 = (float)puVar2->GetOutlineRadiusAdjustment();
        if (fVar4 < local_24) {
            fVar4 = (float)puVar2->GetOutlineRadiusAdjustment();
            fVar4 = (local_24 - fVar4) * 0.5;
            local_34 = fVar4;
            local_40 = math::operator*((Vector3T*)&local_30, fVar4 / local_24);
            local_38 = fVar4;
            puVar2->Translate((Vector3T*)&local_40);
            fVar4 = (float)puVar2->GetOutlineRadiusAdjustment();
            puVar2->SetVerticalFov(fVar4 + local_34);
        }
    }

    // 0x100c63ec0, 176 bytes, placed by class name
    // BoundingSphereBuilder::End()
    void BoundingSphereBuilder::End() {
        undefined1* this_00;
        float fVar1;
        float fVar2;

        if (field_0 != 2) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_buildStatus == BuildState::PASS2",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/geometry/"
                      "BoundingSphereBuilder.cpp",
                      136, (char*)0);
        }
        this_00 = &field_4;
        math::PlaneT<float>::operator=((PlaneT<float>*)this_00, (PlaneT*)field_20);
        fVar1 = (float)(&field_80)->GetOutlineRadiusAdjustment();
        fVar2 = (float)this_00->GetOutlineRadiusAdjustment();
        if (fVar1 < fVar2) {
            math::PlaneT<float>::operator=((PlaneT<float>*)this_00, (PlaneT*)&field_80);
        }
        fVar1 = (float)field_100->GetOutlineRadiusAdjustment();
        fVar2 = (float)this_00->GetOutlineRadiusAdjustment();
        if (fVar1 < fVar2) {
            math::PlaneT<float>::operator=((PlaneT<float>*)this_00, (PlaneT*)field_100);
        }
        field_0 = 0;
    }

} // namespace jag::graphicutils
