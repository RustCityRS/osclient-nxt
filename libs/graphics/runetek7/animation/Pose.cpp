// libs/graphics/runetek7/animation/Pose.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "Pose.h"

namespace jag::graphics::pose {
    // 0x10094dbf0
    void ConvertToMatrices(WrapArray<math::Matrix44T<float>> wrapArray1, const WrapArray<JointPose const>& wrapArray2,
                           const WrapArray<Joint const>& wrapArray3) {
        bool bVar1;
        short sVar2;
        uint64_t* puVar8;
        unsigned long uVar9;
        uint32_t in_XMM1_Da;
        uint64_t uStack_80;
        uint32_t local_78;
        uint32_t uStack_74;
        uint32_t uStack_70;
        uint32_t uStack_6c;
        uint64_t local_68;
        uint64_t uStack_60;
        uint64_t local_58;
        uint64_t uStack_50;
        Joint* local_40;

        long lVar3 = wrapArray1->HeapBeginPtr();
        long lVar4 = wrapArray2.HeapBeginPtr();
        if (lVar3 != lVar4) {
            LogAssert("matricesOut.size() == jointPoses.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/Pose.cpp",
                      45, nullptr);
        }
        lVar3 = wrapArray1->HeapBeginPtr();
        lVar4 = wrapArray3.HeapBeginPtr();
        if (lVar3 != lVar4) {
            LogAssert("matricesOut.size() == bindPose.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/Pose.cpp",
                      46, nullptr);
        }
        QuaternionT<float>* pQVar5 = &wrapArray2[0];
        lVar3 = wrapArray2[0];
        uint64_t local_88 = ((lVar3 + 16))->GetXYZ();
        uStack_80 = (((uint64_t)uStack_80._4_4_ << 32) | (uint32_t)in_XMM1_Da);
        lVar3 = wrapArray2[0];
        uint64_t local_c8 = ((lVar3 + 32))->GetXYZ();
        uint32_t local_c0 = in_XMM1_Da;
        Matrix44T<float> local_108(*pQVar5, local_88, local_c8);
        Matrix44T<float>* pMVar6 = (Matrix44T<float>*)(*wrapArray1)[0];
        *pMVar6 = local_108;
        unsigned long uVar7 = wrapArray2.HeapBeginPtr();
        if (1 < uVar7) {
            uVar7 = 1;
            uVar9 = 2;
            do {
                local_40 = &wrapArray3[uVar7];
                pQVar5 = &wrapArray2[uVar7];
                lVar3 = wrapArray2[uVar7];
                local_88 = ((lVar3 + 16))->GetXYZ();
                uStack_80 = (((uint64_t)uStack_80._4_4_ << 32) | (uint32_t)in_XMM1_Da);
                lVar3 = wrapArray2[uVar7];
                local_c8 = ((lVar3 + 32))->GetXYZ();
                local_c0 = in_XMM1_Da;
                local_108 = math::Matrix44T<float>(*pQVar5, local_88, local_c8);
                sVar2 = local_40->GetParentJointID();
                puVar8 = (uint64_t*)(*wrapArray1)[(long)sVar2];
                local_88 = *puVar8;
                uStack_80 = puVar8[1];
                in_XMM1_Da = *(uint32_t*)(puVar8 + 2);
                uStack_74 = *(uint32_t*)((long)puVar8 + 20);
                uStack_70 = *(uint32_t*)(puVar8 + 3);
                uStack_6c = *(uint32_t*)((long)puVar8 + 28);
                local_68 = puVar8[4];
                uStack_60 = puVar8[5];
                local_58 = puVar8[6];
                uStack_50 = puVar8[7];
                local_78 = in_XMM1_Da;
                local_c8* local_108;
                pMVar6 = (Matrix44T<float>*)(*wrapArray1)[uVar7];
                *pMVar6 = local_c8;
                uVar7 = wrapArray2.HeapBeginPtr();
                bVar1 = uVar9 < uVar7;
                uVar7 = uVar9;
                uVar9 = (unsigned long)((int)uVar9 + 1);
            } while (bVar1);
        }
    }

    // 0x10094e720
    void BlendJointPoses(WrapArray<JointPose> wrapArray1, const WrapArray<JointPose const>& wrapArray2,
                         const WrapArray<JointPose const>& wrapArray3, float arg4) {
        bool bVar1;
        QuaternionT<float>* quaternion2;
        ReturnValue* quaternion;
        Rect<float>* this_00;
        unsigned long uVar4;
        unsigned long uVar5;
        ReturnValue RVar6;
        uint64_t in_XMM1_Qa;
        ReturnValue local_68;
        uint32_t uStack_60;
        uint32_t uStack_5c;
        WrapArray<JointPose const>* local_50;

        long lVar2 = wrapArray2.HeapBeginPtr();
        long lVar3 = wrapArray3.HeapBeginPtr();
        if (lVar2 != lVar3) {
            LogAssert("jointPoses1.size() == jointPoses2.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/Pose.cpp",
                      15, nullptr);
        }
        lVar2 = wrapArray2.HeapBeginPtr();
        lVar3 = wrapArray1->HeapBeginPtr();
        if (lVar2 != lVar3) {
            LogAssert("jointPoses1.size() == jointPosesOut.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/Pose.cpp",
                      16, nullptr);
        }
        lVar2 = wrapArray1->HeapBeginPtr();
        if (lVar2 != 0) {
            uVar4 = 0;
            uVar5 = 1;
            local_50 = wrapArray3;
            do {
                lVar2 = wrapArray2[uVar4];
                lVar3 = wrapArray3[uVar4];
                RVar6 = (ReturnValue)math::Lerp<math::Vector4T<float>, float>(*((lVar2 + 16)), *((lVar3 + 16)), arg4);
                uStack_60 = (uint32_t)in_XMM1_Qa;
                uStack_5c = (uint32_t)((unsigned long)in_XMM1_Qa >> 32);
                local_68 = RVar6;
                lVar2 = (*wrapArray1)[uVar4];
                (*((lVar2 + 16))) = local_68;
                quaternion2 = &wrapArray2[uVar4];
                wrapArray3[uVar4];
                math::QuaternionLerpShortest<float>((QuaternionT<float>*)&local_68, quaternion2, arg4);
                quaternion = local_68 = math::QuaternionT<float>::Normalise();
                this_00 = (Rect<float>*)(*wrapArray1)[uVar4];
                *this_00 = *quaternion;
                lVar2 = wrapArray2[uVar4];
                lVar3 = wrapArray3[uVar4];
                RVar6 = (ReturnValue)math::Lerp<math::Vector4T<float>, float>(*((lVar2 + 32)), *((lVar3 + 32)), arg4);
                uStack_60 = (uint32_t)in_XMM1_Qa;
                uStack_5c = (uint32_t)((unsigned long)in_XMM1_Qa >> 32);
                local_68 = RVar6;
                lVar2 = (*wrapArray1)[uVar4];
                (*((lVar2 + 32))) = local_68;
                uVar4 = wrapArray1->HeapBeginPtr();
                bVar1 = uVar5 < uVar4;
                uVar4 = uVar5;
                uVar5 = (unsigned long)((int)uVar5 + 1);
            } while (bVar1);
        }
    }

    // 0x10094e9f0
    void AddJointPoses(WrapArray<JointPose> wrapArray1, const WrapArray<JointPose const>& wrapArray2,
                       const WrapArray<JointPose const>& wrapArray3, float arg4) {
        unsigned int uVar1;
        QuaternionT<float>* quaternion2;
        ReturnValue* quaternion;
        Rect<float>* rect;
        unsigned long uVar4;
        unsigned long arg1;
        uint64_t uVar5;
        ReturnValue RVar6;
        uint64_t in_XMM1_Qa;
        ReturnValue local_88;
        uint32_t uStack_80;
        uint32_t uStack_7c;
        QuaternionT<float>* local_70;
        uint64_t local_68;
        uint32_t uStack_60;
        uint32_t uStack_5c;
        WrapArray<JointPose>* local_50;
        unsigned int local_44;

        long lVar2 = wrapArray2.HeapBeginPtr();
        long lVar3 = wrapArray3.HeapBeginPtr();
        if (lVar2 != lVar3) {
            LogAssert("pose1.size() == pose2.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/Pose.cpp",
                      29, nullptr);
        }
        lVar2 = wrapArray2.HeapBeginPtr();
        lVar3 = wrapArray1->HeapBeginPtr();
        if (lVar2 != lVar3) {
            LogAssert("pose1.size() == poseOut.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/Pose.cpp",
                      30, nullptr);
        }
        lVar2 = wrapArray1->HeapBeginPtr();
        if (lVar2 != 0) {
            local_44 = 1;
            arg1 = 0;
            local_50 = wrapArray1;
            do {
                lVar2 = wrapArray2[arg1];
                lVar3 = wrapArray3[arg1];
                uVar5 = (*((lVar3 + 16))) * *arg4;
                uStack_60 = (uint32_t)in_XMM1_Qa;
                uStack_5c = (uint32_t)((unsigned long)in_XMM1_Qa >> 32);
                local_68 = uVar5;
                RVar6 = (ReturnValue)(*((lVar2 + 16))) + local_68;
                uStack_80 = (uint32_t)in_XMM1_Qa;
                uStack_7c = (uint32_t)((unsigned long)in_XMM1_Qa >> 32);
                local_88 = RVar6;
                lVar2 = (*wrapArray1)[arg1];
                (*((lVar2 + 16))) = local_88;
                local_70 = &wrapArray2[arg1];
                quaternion2 = &wrapArray2[arg1];
                wrapArray3[arg1];
                local_68** quaternion2;
                uVar1 = local_44;
                math::SLerp<float>(local_88, *local_70, arg4);
                quaternion = local_88 = math::QuaternionT<float>::Normalise();
                rect = (Rect<float>*)(*local_50)[arg1];
                *rect = *quaternion;
                lVar2 = wrapArray2[arg1];
                lVar3 = wrapArray3[arg1];
                uVar5 = (*((lVar3 + 32))) * *arg4;
                wrapArray1 = local_50;
                uStack_60 = (uint32_t)in_XMM1_Qa;
                uStack_5c = (uint32_t)((unsigned long)in_XMM1_Qa >> 32);
                local_68 = uVar5;
                RVar6 = (ReturnValue)(*((lVar2 + 32))) + local_68;
                uStack_80 = (uint32_t)in_XMM1_Qa;
                uStack_7c = (uint32_t)((unsigned long)in_XMM1_Qa >> 32);
                local_88 = RVar6;
                lVar2 = (*wrapArray1)[arg1];
                (*((lVar2 + 32))) = local_88;
                arg1 = (unsigned long)uVar1;
                uVar4 = wrapArray1->HeapBeginPtr();
                local_44 = uVar1 + 1;
            } while (arg1 < uVar4);
        }
    }

    // 0x10094ed00
    Matrix44T<float>* ConvertToMatrix(int arg1, const WrapArray<JointPose const>& wrapArray1,
                                      const WrapArray<Joint const>& wrapArray2) {
        int iVar2;
        QuaternionT<float>* pQVar3;
        Layout* in_RCX;
        uint32_t in_register_0000003c;
        uint64_t local_c8[8];
        uint64_t local_88[9];
        uint64_t local_40[2];

        Matrix44T<float>* this_00 = (Matrix44T<float>*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        if ((int)wrapArray1 == 0) {
            pQVar3 = &wrapArray2[0];
            local_c8[0] = ((pQVar3 + 16))->GetXYZ();
            local_88[0] = ((pQVar3 + 32))->GetXYZ();
            new (this_00) math::Matrix44T<float>(*pQVar3, *local_c8, *local_88);
            return this_00;
        }
        if ((((int)wrapArray1 < 1) || (iVar2 = in_RCX->HeapBeginPtr(), iVar2 <= (int)wrapArray1)) ||
            (iVar2 = wrapArray2.HeapBeginPtr(), iVar2 <= (int)wrapArray1)) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "animation/Pose.cpp",
                            90, nullptr);
        }
        Joint* joint = (Joint*)(*in_RCX)[(long)(int)wrapArray1];
        pQVar3 = &wrapArray2[(long)(int)wrapArray1];
        local_88[0] = ((pQVar3 + 16))->GetXYZ();
        local_40[0] = ((pQVar3 + 32))->GetXYZ();
        new (local_c8) math::Matrix44T<float>(*pQVar3, *local_88, *local_40);
        short sVar1 = joint->GetParentJointID();
        ConvertToMatrix((int)local_88, (WrapArray<JointPose const>*)(unsigned long)(unsigned int)(int)sVar1,
                        wrapArray2);
        *this_00** local_c8;
        return this_00;
    }

    // 0x10094ee80
    void DebugDrawSkeleton(const shared_ptr<AnimBase>& animBase, unsigned char arg2,
                           const WrapArray<JointPose const>& wrapArray, const math::Matrix44T<float>& matrix44,
                           math::Vector3T<float> vector31, math::Vector3T<float> vector32) {
        unsigned int uVar2;
        short sVar4;
        int iVar5;
        unsigned long uVar8;
        unsigned long uVar10;
        Joint* this_02;
        Matrix44T<float>* pMVar11;
        Vector4T<float>* pVVar12;
        Joint* pJVar13;
        long* plVar14;
        Array<short>* this_03;
        float* pfVar15;
        float in_XMM0_Da;
        float in_XMM0_Db;
        float in_XMM0_Dc;
        float in_XMM0_Dd;
        float in_XMM1_Da;
        float fVar16;
        float in_XMM2_Da;
        float fVar17;
        float in_XMM2_Db;
        float in_XMM2_Dc;
        float in_XMM2_Dd;
        float in_XMM3_Da;
        Sphere local_11c8;
        WrapArray<unsigned char const> local_1188;
        ColourHSL local_1148;
        WrapArray<math::Matrix44T<float>> local_1138;
        float local_1128;
        float fStack_1124;
        float fStack_1120;
        float fStack_111c;
        float local_1118;
        float fStack_1114;
        float fStack_1110;
        float fStack_110c;
        uint64_t local_10d0;
        float local_10c8;
        uint8_t local_10c0[16];
        uint8_t local_10b0[16];
        float local_108c;
        float local_1084;
        unsigned long local_1080;
        unsigned int local_1074;
        fixed_vector<math::Matrix44T<float>, 64ul> local_1068;

        float local_1108 = in_XMM0_Da;
        float fStack_1104 = in_XMM0_Db;
        float fStack_1100 = in_XMM0_Dc;
        float fStack_10fc = in_XMM0_Dd;
        float local_10e8 = in_XMM2_Da;
        float fStack_10e4 = in_XMM2_Db;
        float fStack_10e0 = in_XMM2_Dc;
        float fStack_10dc = in_XMM2_Dd;
        local_10b0._8_8_ = matrix44;
        float local_1070 = in_XMM1_Da;
        float local_106c = in_XMM3_Da;
        auto pAVar6 = animBase.operator->();
        auto local_10a0 = pAVar6->GetBindPose(arg2);
        pAVar6 = (AnimBase*)animBase.operator->();
        auto this_00 = pAVar6->GetJointTreeLevels(arg2);
        auto psVar7 = this_00->data();
        pAVar6 = (AnimBase*)animBase.operator->();
        auto this_01 = pAVar6->GetJointTreeLevels(arg2);
        auto arg2_00 = this_01->end();
        psVar7 = std::max_element<short const*>(psVar7, arg2_00);
        short sVar1 = *psVar7;
        if (wrapArray.empty() == '\0') {
            uVar8 = wrapArray.HeapBeginPtr();
            local_1068 = eastl::fixed_vector<math::Matrix44T<float>, 64ul>(uVar8);
            local_1138.WrapArray<eastl::fixed_vector<math::Matrix44T<float>, 64ul>>(local_1068);
            local_1188.WrapArray<Array<unsigned char>>(*local_10a0);
            ConvertToMatrices(&local_1138, wrapArray, &local_1188);
            if (wrapArray.HeapBeginPtr() != 0) {
                local_1084 = (float)(int)sVar1;
                local_10e8 = local_10e8 - local_1108;
                local_1118 = fStack_10e4 - fStack_1104;
                fStack_10e0 = fStack_10e0 - fStack_1100;
                fStack_1110 = fStack_10dc - fStack_10fc;
                local_1128 = fStack_1104;
                fStack_1124 = fStack_1104;
                fStack_1120 = fStack_10fc;
                fStack_111c = fStack_10fc;
                local_106c = local_106c - local_1070;
                local_1074 = 1;
                uVar8 = 0;
                fVar16 = fStack_1104;
                fStack_1114 = local_1118;
                fStack_110c = fStack_1110;
                fStack_10e4 = local_1118;
                fStack_10dc = fStack_1110;
                do {
                    this_02 = (Joint*)(*local_10a0)[uVar8];
                    pMVar11 = &local_1068[uVar8];
                    local_1188** pMVar11;
                    local_1080 = uVar8;
                    pVVar12 = &local_1188[3];
                    local_10d0 = pVVar12->GetXYZ();
                    local_10c8 = fVar16;
                    pJVar13 = this_02->GetParentJoint();
                    iVar5 = -16777216;
                    if (pJVar13 == nullptr) {
                        iVar5 = -16776961;
                    }
                    plVar14 = DebugPrimitiveCollectorBasic::GetCollector("");
                    if (plVar14 != nullptr) {
                        local_11c8 = math::Sphere(local_10d0, 4.0);
                        new (local_10c0) oldscape::sidebars::SideBarData(iVar5, 1);
                        (**(void (**)(...))(*plVar14 + 32))(plVar14, &local_11c8, (SideBarData*)local_10c0);
                    }
                    pJVar13 = this_02->GetParentJoint();
                    if (this_02 == pJVar13) {
                        LogAssert("&joint != joint.GetParentJoint()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/animation/Pose.cpp",
                                  122, nullptr);
                    }
                    pJVar13 = this_02->GetParentJoint();
                    if (pJVar13 != nullptr) {
                        pAVar6 = (AnimBase*)animBase.operator->();
                        this_03 = (Array<short>*)pAVar6->GetJointTreeLevels((unsigned char)(unsigned int)arg2);
                        psVar7 = (short*)(*this_03)[local_1080];
                        sVar1 = *psVar7;
                        sVar4 = this_02->GetParentJointID();
                        pMVar11 = &local_1068[(long)sVar4];
                        local_11c8** pMVar11;
                        pVVar12 = &local_11c8[3];
                        local_10c0._0_8_ = pVVar12->GetXYZ();
                        fVar17 = (float)(sVar1 - 1) / local_1084;
                        local_10c0._8_4_ = fVar16;
                        local_1148 = math::ColourHSL(fVar17 * local_10e8 + local_1108, fVar17 * local_1118 + local_1128,
                                                     fVar17 * local_106c + local_1070);
                        pfVar15 = &local_1148[0];
                        local_1080 = (((uint64_t)local_1080._4_4_ << 32) | (uint32_t)(*pfVar15 * 255.0));
                        pfVar15 = &local_1148[1];
                        local_108c = *pfVar15;
                        pfVar15 = &local_1148[2];
                        fVar16 = 255.0;
                        new (local_10b0) math::ColourStorage8888(255, (unsigned int)(long)(float)local_1080,
                                                                 (unsigned int)(long)(local_108c * 255.0),
                                                                 (unsigned int)(long)(*pfVar15 * 255.0));
                        iVar5 = local_10b0->GetX();
                        plVar14 = DebugPrimitiveCollectorBasic::GetCollector("");
                        if (plVar14 != nullptr) {
                            new (local_10b0) oldscape::sidebars::SideBarData(iVar5, 1);
                            (**(void (**)(...))(*plVar14 + 24))(plVar14, local_10c0, &local_10d0);
                        }
                    }
                    uVar2 = local_1074;
                    uVar8 = (unsigned long)local_1074;
                    uVar10 = wrapArray.HeapBeginPtr();
                    local_1074 = uVar2 + 1;
                } while (uVar8 < uVar10);
            }
        }
    }

} // namespace jag::graphics::pose
