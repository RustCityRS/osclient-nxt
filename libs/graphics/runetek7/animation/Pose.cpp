// libs/graphics/runetek7/animation/Pose.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "Pose.h"

namespace jag::graphics::pose {
    // 0x10094dbf0, 576 bytes, placed by class name and debug map
    // ConvertToMatrices(WrapArray<math::Matrix44T<float> >, WrapArray<JointPose const> const&, WrapArray<Joint const> const&)
    void ConvertToMatrices(undefined8 param_1, float param_2, Layout* param_3, Layout* param_4, Layout* param_5) {
        bool bVar1;
        short sVar2;
        long lVar3;
        long lVar4;
        QuaternionT* pQVar5;
        Matrix44T<float>* pMVar6;
        ulong uVar7;
        undefined8* puVar8;
        ulong uVar9;
        Matrix44T local_108;
        undefined1 local_c8[64];
        undefined1 local_88[16];
        float local_78;
        undefined4 uStack_74;
        undefined4 uStack_70;
        undefined4 uStack_6c;
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58;
        undefined8 uStack_50;
        Joint* local_40;

        lVar3 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(param_3);
        lVar4 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(param_4);
        if (lVar3 != lVar4) {
            /* WARNING: Subroutine does not return */
            LogAssert("matricesOut.size() == jointPoses.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/Pose.cpp",
                      45, (char*)0);
        }
        lVar3 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(param_3);
        lVar4 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(param_5);
        if (lVar3 != lVar4) {
            /* WARNING: Subroutine does not return */
            LogAssert("matricesOut.size() == bindPose.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/Pose.cpp",
                      46, (char*)0);
        }
        pQVar5 = (QuaternionT*)WrapArray<JointPose_const>::operator[]((WrapArray<JointPose_const>*)param_4, 0);
        lVar3 = WrapArray<JointPose_const>::operator[]((WrapArray<JointPose_const>*)param_4, 0);
        local_88._0_8_ = ((lVar3 + 16))->GetXYZ();
        local_88._8_4_ = param_2;
        lVar3 = WrapArray<JointPose_const>::operator[]((WrapArray<JointPose_const>*)param_4, 0);
        local_c8._0_8_ = ((lVar3 + 32))->GetXYZ();
        local_c8._8_4_ = param_2;
        new (&local_108) math::Matrix44T<float>(pQVar5, local_88, local_c8);
        pMVar6 = (Matrix44T<float>*)WrapArray<math::Matrix44T<float>>::operator[](
            (WrapArray<math::Matrix44T<float>>*)param_3, 0);
        math::Matrix44T<float>::operator=(pMVar6, &local_108);
        uVar7 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(param_4);
        if (1 < uVar7) {
            uVar7 = 1;
            uVar9 = 2;
            do {
                local_40 = (Joint*)WrapArray<Joint_const>::operator[]((WrapArray<Joint_const>*)param_5, uVar7);
                pQVar5 =
                    (QuaternionT*)WrapArray<JointPose_const>::operator[]((WrapArray<JointPose_const>*)param_4, uVar7);
                lVar3 = WrapArray<JointPose_const>::operator[]((WrapArray<JointPose_const>*)param_4, uVar7);
                local_88._0_8_ = ((lVar3 + 16))->GetXYZ();
                local_88._8_4_ = param_2;
                lVar3 = WrapArray<JointPose_const>::operator[]((WrapArray<JointPose_const>*)param_4, uVar7);
                local_c8._0_8_ = ((lVar3 + 32))->GetXYZ();
                local_c8._8_4_ = param_2;
                new (&local_108) math::Matrix44T<float>(pQVar5, local_88, local_c8);
                sVar2 = local_40->GetParentJointID();
                puVar8 = (undefined8*)WrapArray<math::Matrix44T<float>>::operator[](
                    (WrapArray<math::Matrix44T<float>>*)param_3, (long)sVar2);
                local_88._0_8_ = *puVar8;
                local_88._8_8_ = puVar8[1];
                param_2 = *(float*)(puVar8 + 2);
                uStack_74 = *(undefined4*)((long)puVar8 + 20);
                uStack_70 = *(undefined4*)(puVar8 + 3);
                uStack_6c = *(undefined4*)((long)puVar8 + 28);
                local_68 = puVar8[4];
                uStack_60 = puVar8[5];
                local_58 = puVar8[6];
                uStack_50 = puVar8[7];
                local_78 = param_2;
                math::operator*((math*)local_c8, &local_108, (Matrix44T*)local_88);
                pMVar6 = (Matrix44T<float>*)WrapArray<math::Matrix44T<float>>::operator[](
                    (WrapArray<math::Matrix44T<float>>*)param_3, uVar7);
                math::Matrix44T<float>::operator=(pMVar6, (Matrix44T*)local_c8);
                uVar7 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(param_4);
                bVar1 = uVar9 < uVar7;
                uVar7 = uVar9;
                uVar9 = (ulong)((int)uVar9 + 1);
            } while (bVar1);
        }
    }

    // 0x10094e720, 480 bytes, placed by class name
    // BlendJointPoses(WrapArray<JointPose>, WrapArray<JointPose const> const&, WrapArray<JointPose const> const&, float)
    void BlendJointPoses(float param_1, undefined8 param_2, pose* this, Layout* param_4, Layout* param_5) {
        bool bVar1;
        long lVar2;
        long lVar3;
        QuaternionT* pQVar4;
        QuaternionT* pQVar5;
        Rect* pRVar6;
        Rect<float>* this_01;
        ulong uVar7;
        ulong uVar8;
        undefined8 uVar9;
        undefined1 auVar10[16];
        float local_68;
        float fStack_60;
        float fStack_5c;
        Layout* local_50;

        lVar2 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(param_4);
        lVar3 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(param_5);
        if (lVar2 != lVar3) {
            /* WARNING: Subroutine does not return */
            LogAssert("jointPoses1.size() == jointPoses2.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/Pose.cpp",
                      15, (char*)0);
        }
        lVar2 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(param_4);
        lVar3 = HeapBeginPtr();
        if (lVar2 != lVar3) {
            /* WARNING: Subroutine does not return */
            LogAssert("jointPoses1.size() == jointPosesOut.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/Pose.cpp",
                      16, (char*)0);
        }
        lVar2 = HeapBeginPtr();
        if (lVar2 != 0) {
            uVar7 = 0;
            uVar8 = 1;
            local_50 = param_5;
            do {
                lVar2 = WrapArray<JointPose_const>::operator[]((WrapArray<JointPose_const>*)param_4, uVar7);
                auVar10 = WrapArray<JointPose_const>::operator[]((WrapArray<JointPose_const>*)param_5, uVar7);
                uVar9 = math::Lerp<math::Vector4T<float>, float>((math*)(lVar2 + 16), (Vector4T*)(auVar10._0_8_ + 16),
                                                                 auVar10._8_8_, param_1);
                fStack_60 = (float)param_2;
                fStack_5c = (float)((ulong)param_2 >> 32);
                _local_68 = uVar9;
                lVar2 = WrapArray<JointPose>::operator[]((WrapArray<JointPose>*)this, uVar7);
                math::Rect<float>::operator=((Rect<float>*)(lVar2 + 16), (Rect*)&local_68);
                pQVar4 =
                    (QuaternionT*)WrapArray<JointPose_const>::operator[]((WrapArray<JointPose_const>*)param_4, uVar7);
                pQVar5 =
                    (QuaternionT*)WrapArray<JointPose_const>::operator[]((WrapArray<JointPose_const>*)param_5, uVar7);
                math::QuaternionLerpShortest<float>((math*)&local_68, pQVar4, pQVar5, param_1);
                pRVar6 = (Rect*)local_68.Normalise();
                this_01 = (Rect<float>*)WrapArray<JointPose>::operator[]((WrapArray<JointPose>*)this, uVar7);
                math::Rect<float>::operator=(this_01, pRVar6);
                lVar2 = WrapArray<JointPose_const>::operator[]((WrapArray<JointPose_const>*)param_4, uVar7);
                auVar10 = WrapArray<JointPose_const>::operator[]((WrapArray<JointPose_const>*)param_5, uVar7);
                uVar9 = math::Lerp<math::Vector4T<float>, float>((math*)(lVar2 + 32), (Vector4T*)(auVar10._0_8_ + 32),
                                                                 auVar10._8_8_, param_1);
                fStack_60 = (float)param_2;
                fStack_5c = (float)((ulong)param_2 >> 32);
                _local_68 = uVar9;
                lVar2 = WrapArray<JointPose>::operator[]((WrapArray<JointPose>*)this, uVar7);
                math::Rect<float>::operator=((Rect<float>*)(lVar2 + 32), (Rect*)&local_68);
                uVar7 = HeapBeginPtr();
                bVar1 = uVar8 < uVar7;
                uVar7 = uVar8;
                uVar8 = (ulong)((int)uVar8 + 1);
            } while (bVar1);
        }
    }

    // 0x10094e9f0, 528 bytes, placed by class name
    // AddJointPoses(WrapArray<JointPose>, WrapArray<JointPose const> const&, WrapArray<JointPose const> const&, float)
    void AddJointPoses(float param_1, undefined8 param_2, pose* this, Layout* param_4, Layout* param_5) {
        uint uVar1;
        long lVar2;
        long lVar3;
        QuaternionT* pQVar4;
        QuaternionT* pQVar5;
        Rect* pRVar6;
        Rect<float>* this_00;
        ulong uVar7;
        ulong uVar8;
        undefined8 uVar9;
        float local_88;
        float fStack_80;
        float fStack_7c;
        QuaternionT* local_70;
        float local_68;
        float fStack_60;
        float fStack_5c;
        uint local_44;

        lVar2 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(param_4);
        lVar3 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(param_5);
        if (lVar2 != lVar3) {
            /* WARNING: Subroutine does not return */
            LogAssert("pose1.size() == pose2.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/Pose.cpp",
                      29, (char*)0);
        }
        lVar2 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(param_4);
        lVar3 = HeapBeginPtr();
        if (lVar2 != lVar3) {
            /* WARNING: Subroutine does not return */
            LogAssert("pose1.size() == poseOut.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/Pose.cpp",
                      30, (char*)0);
        }
        lVar2 = HeapBeginPtr();
        if (lVar2 != 0) {
            local_44 = 1;
            uVar8 = 0;
            do {
                lVar2 = WrapArray<JointPose_const>::operator[]((WrapArray<JointPose_const>*)param_4, uVar8);
                lVar3 = WrapArray<JointPose_const>::operator[]((WrapArray<JointPose_const>*)param_5, uVar8);
                uVar9 = math::operator*((Vector4T*)(lVar3 + 16), param_1);
                fStack_60 = (float)param_2;
                fStack_5c = (float)((ulong)param_2 >> 32);
                _local_68 = uVar9;
                uVar9 = math::operator+((Vector4T*)(lVar2 + 16), (Vector4T*)&local_68);
                fStack_80 = (float)param_2;
                fStack_7c = (float)((ulong)param_2 >> 32);
                _local_88 = uVar9;
                lVar2 = WrapArray<JointPose>::operator[]((WrapArray<JointPose>*)this, uVar8);
                math::Rect<float>::operator=((Rect<float>*)(lVar2 + 16), (Rect*)&local_88);
                local_70 =
                    (QuaternionT*)WrapArray<JointPose_const>::operator[]((WrapArray<JointPose_const>*)param_4, uVar8);
                pQVar4 =
                    (QuaternionT*)WrapArray<JointPose_const>::operator[]((WrapArray<JointPose_const>*)param_4, uVar8);
                pQVar5 =
                    (QuaternionT*)WrapArray<JointPose_const>::operator[]((WrapArray<JointPose_const>*)param_5, uVar8);
                math::operator*((math*)&local_68, pQVar4, pQVar5);
                uVar1 = local_44;
                math::SLerp<float>((math*)&local_88, local_70, (QuaternionT*)&local_68, param_1);
                pRVar6 = (Rect*)local_88.Normalise();
                this_00 = (Rect<float>*)WrapArray<JointPose>::operator[]((WrapArray<JointPose>*)this, uVar8);
                math::Rect<float>::operator=(this_00, pRVar6);
                lVar2 = WrapArray<JointPose_const>::operator[]((WrapArray<JointPose_const>*)param_4, uVar8);
                lVar3 = WrapArray<JointPose_const>::operator[]((WrapArray<JointPose_const>*)param_5, uVar8);
                uVar9 = math::operator*((Vector4T*)(lVar3 + 32), param_1);
                this = this;
                fStack_60 = (float)param_2;
                fStack_5c = (float)((ulong)param_2 >> 32);
                _local_68 = uVar9;
                uVar9 = math::operator+((Vector4T*)(lVar2 + 32), (Vector4T*)&local_68);
                fStack_80 = (float)param_2;
                fStack_7c = (float)((ulong)param_2 >> 32);
                _local_88 = uVar9;
                lVar2 = WrapArray<JointPose>::operator[]((WrapArray<JointPose>*)this, uVar8);
                math::Rect<float>::operator=((Rect<float>*)(lVar2 + 32), (Rect*)&local_88);
                uVar8 = (ulong)uVar1;
                uVar7 = HeapBeginPtr();
                local_44 = uVar1 + 1;
            } while (uVar8 < uVar7);
        }
    }

    // 0x10094ed00, 384 bytes, placed by class name
    // ConvertToMatrix(int, WrapArray<JointPose const> const&, WrapArray<Joint const> const&)
    math* ConvertToMatrix(int param_1, WrapArray* param_2, WrapArray* param_3) {
        short sVar1;
        int iVar2;
        Joint* this;
        QuaternionT* pQVar3;
        Layout* in_RCX;
        undefined4 in_register_0000003c;
        math* this_00;
        Matrix44T local_c8;
        Matrix44T local_88;
        undefined8 local_40[2];

        this_00 = (math*)CONCAT44(in_register_0000003c, param_1);
        if ((int)param_2 == 0) {
            pQVar3 = (QuaternionT*)WrapArray<JointPose_const>::operator[]((WrapArray<JointPose_const>*)param_3, 0);
            local_c8._0_8_ = ((pQVar3 + 16))->GetXYZ();
            local_88._0_8_ = ((pQVar3 + 32))->GetXYZ();
            new (this_00) math::Matrix44T<float>(pQVar3, (Vector3T*)&local_c8, (Vector3T*)&local_88);
            return this_00;
        }
        if ((((int)param_2 < 1) ||
             (iVar2 = eastl::basic_string<char,
                                          eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                  Layout::HeapBeginPtr(in_RCX),
              iVar2 <= (int)param_2)) ||
            (iVar2 = param_3->HeapBeginPtr(), iVar2 <= (int)param_2)) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "animation/Pose.cpp",
                            90, (char*)0);
        }
        this = (Joint*)WrapArray<Joint_const>::operator[]((WrapArray<Joint_const>*)in_RCX, (long)(int)param_2);
        pQVar3 = (QuaternionT*)WrapArray<JointPose_const>::operator[]((WrapArray<JointPose_const>*)param_3,
                                                                      (long)(int)param_2);
        local_88._0_8_ = ((pQVar3 + 16))->GetXYZ();
        local_40[0] = ((pQVar3 + 32))->GetXYZ();
        new (&local_c8) math::Matrix44T<float>(pQVar3, (Vector3T*)&local_88, local_40);
        sVar1 = GetParentJointID();
        ConvertToMatrix((int)&local_88, (WrapArray*)(ulong)(uint)(int)sVar1, param_3);
        math::operator*(this_00, &local_c8, &local_88);
        return this_00;
    }

    // 0x10094ee80, 1296 bytes, placed by class name
    // DebugDrawSkeleton(shared_ptr<AnimBase> const&, unsigned char, WrapArray<JointPose const> const&, math::Matrix44T<float> const&, math::Vector3T<float>, math::Vector3T<float>)
    void DebugDrawSkeleton(
        undefined8 param_1_00, float param_2_00, undefined8 param_3_00, float param_4_00, shared_ptr<AnimBase>* param_1,
        byte param_2,
        SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                    std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>* param_3,
        Matrix44T* param_4) {
        ColourHSL* this;
        short sVar1;
        SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                    std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>* this_00;
        uint uVar2;
        char cVar3;
        short sVar4;
        int iVar5;
        AnimBase* pAVar6;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_01;
        short* psVar7;
        Array<unsigned short, BucketAllocatorEASTL>* this_02;
        short* psVar8;
        long lVar9;
        ulong uVar10;
        Joint* this_03;
        Matrix44T* pMVar11;
        Vector4T<float>* pVVar12;
        long* plVar13;
        Joint* pJVar14;
        Array<short, eastl::allocator>* this_04;
        float* pfVar15;
        ulong uVar16;
        float in_XMM0_Dc;
        float in_XMM0_Dd;
        float fVar17;
        float fVar18;
        float in_XMM2_Dc;
        float in_XMM2_Dd;
        undefined1 local_11c8[64];
        undefined1 local_1188[80];
        WrapArray<math::Matrix44T<float>> local_1138[16];
        float local_1128;
        float fStack_1124;
        float fStack_1120;
        float fStack_111c;
        float local_1118;
        float fStack_1114;
        float fStack_1110;
        float fStack_110c;
        float local_1108;
        float fStack_1104;
        float fStack_1100;
        float fStack_10fc;
        shared_ptr<AnimBase>* local_10f0;
        float local_10e8;
        float fStack_10e4;
        float fStack_10e0;
        float fStack_10dc;
        undefined8 local_10d0;
        float local_10c8;
        undefined1 local_10c0[16];
        undefined1 local_10b0[16];
        Array* local_10a0;
        SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                    std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>* local_1098;
        float local_108c;
        uint local_1088;
        float local_1084;
        ulong local_1080;
        uint local_1074;
        float local_1070;
        float local_106c;
        fixed_vector local_1068[4144];
        long local_38;

        fStack_10e4 = (float)((ulong)param_3_00 >> 32);
        local_10e8 = (float)param_3_00;
        fStack_1104 = (float)((ulong)param_1_00 >> 32);
        local_1108 = (float)param_1_00;
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        fStack_1100 = in_XMM0_Dc;
        fStack_10fc = in_XMM0_Dd;
        fStack_10e0 = in_XMM2_Dc;
        fStack_10dc = in_XMM2_Dd;
        local_10b0._8_8_ = param_4;
        local_1070 = param_2_00;
        local_106c = param_4_00;
        pAVar6 = (AnimBase*)shared_ptr<AnimBase>::operator->(param_1);
        local_10a0 = (Array*)pAVar6->GetBindPose(param_2);
        pAVar6 = (AnimBase*)shared_ptr<AnimBase>::operator->(param_1);
        this_01 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)pAVar6->GetJointTreeLevels(param_2);
        psVar7 = (short*)this_01->data();
        local_10f0 = param_1;
        pAVar6 = (AnimBase*)shared_ptr<AnimBase>::operator->(param_1);
        this_02 = (Array<unsigned short, BucketAllocatorEASTL>*)pAVar6->GetJointTreeLevels(param_2);
        psVar8 = (short*)this_02->end();
        psVar7 = std::max_element<short const*>(psVar7, psVar8);
        sVar1 = *psVar7;
        cVar3 = param_3->empty();
        if (cVar3 == '\0') {
            local_1098 = param_3;
            param_3->HeapBeginPtr();
            eastl::fixed_vector<math::Matrix44T<float>, 64ul, true, eastl::allocator>::fixed_vector((ulong)local_1068);
            WrapArray<math::Matrix44T<float>>::WrapArray<
                eastl::fixed_vector<math::Matrix44T<float>, 64ul, true, eastl::allocator>>(local_1138, local_1068);
            WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(
                (WrapArray<unsigned char const>*)local_1188, local_10a0);
            this_00 = local_1098;
            ConvertToMatrices(local_1138, local_1098, local_1188);
            lVar9 = this_00->HeapBeginPtr();
            if (lVar9 != 0) {
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
                local_1088 = (uint)param_2;
                uVar16 = 0;
                fVar17 = fStack_1104;
                fStack_1114 = local_1118;
                fStack_110c = fStack_1110;
                fStack_10e4 = local_1118;
                fStack_10dc = fStack_1110;
                do {
                    this_03 = (Joint*)Array<Joint, eastl::allocator>::operator[](
                        (Array<Joint, eastl::allocator>*)local_10a0, uVar16);
                    pMVar11 = (Matrix44T*)
                        eastl::vector<math::Matrix44T<float>,
                                      eastl::fixed_vector_allocator<64ul, 64ul, 16ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<math::Matrix44T<float>,
                                    eastl::fixed_vector_allocator<64ul, 64ul, 16ul, 0ul, true, eastl::allocator>>*)
                                local_1068,
                            uVar16);
                    math::operator*((math*)local_1188, pMVar11, (Matrix44T*)local_10b0._8_8_);
                    local_1080 = uVar16;
                    pVVar12 = (Vector4T<float>*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)local_1188, 3);
                    local_10d0 = pVVar12->GetXYZ();
                    local_10c8 = fVar17;
                    lVar9 = this_03->GetParentJoint();
                    iVar5 = -16777216;
                    if (lVar9 == 0) {
                        iVar5 = -16776961;
                    }
                    plVar13 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                    if (plVar13 != (long*)0) {
                        new (local_11c8) math::Sphere((Vector3T*)&local_10d0, 4.0);
                        new (local_10c0) oldscape::sidebars::SideBarData(iVar5, 1);
                        (**(code**)(*plVar13 + 32))(plVar13, (math*)local_11c8, (SideBarData*)local_10c0);
                    }
                    pJVar14 = (Joint*)this_03->GetParentJoint();
                    if (this_03 == pJVar14) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("&joint != joint.GetParentJoint()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/animation/Pose.cpp",
                                  122, (char*)0);
                    }
                    lVar9 = this_03->GetParentJoint();
                    if (lVar9 != 0) {
                        pAVar6 = (AnimBase*)shared_ptr<AnimBase>::operator->(local_10f0);
                        this_04 = (Array<short, eastl::allocator>*)pAVar6->GetJointTreeLevels((uchar)local_1088);
                        psVar7 = (short*)Array<short, eastl::allocator>::operator[](this_04, local_1080);
                        sVar1 = *psVar7;
                        sVar4 = this_03->GetParentJointID();
                        pMVar11 = (Matrix44T*)eastl::vector<
                            math::Matrix44T<float>,
                            eastl::fixed_vector_allocator<64ul, 64ul, 16ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<math::Matrix44T<float>,
                                    eastl::fixed_vector_allocator<64ul, 64ul, 16ul, 0ul, true, eastl::allocator>>*)
                                local_1068,
                            (long)sVar4);
                        math::operator*((math*)local_11c8, pMVar11, (Matrix44T*)local_10b0._8_8_);
                        pVVar12 =
                            (Vector4T<float>*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)local_11c8, 3);
                        local_10c0._0_8_ = pVVar12->GetXYZ();
                        fVar18 = (float)(sVar1 + -1) / local_1084;
                        this = (ColourHSL*)(local_1188 + 64);
                        local_10c0._8_4_ = fVar17;
                        math::ColourHSL::ColourHSL(this, fVar18 * local_10e8 + local_1108,
                                                   fVar18 * local_1118 + local_1128, fVar18 * local_106c + local_1070);
                        pfVar15 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this, 0);
                        local_1080 = CONCAT44(local_1080._4_4_, *pfVar15 * 255.0);
                        pfVar15 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this, 1);
                        local_108c = *pfVar15;
                        pfVar15 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this, 2);
                        fVar17 = 255.0;
                        new (local_10b0) math::ColourStorage8888<math::ARGB8StorageLayout>(
                            255, (uint)(long)(float)local_1080, (uint)(long)(local_108c * 255.0),
                            (uint)(long)(*pfVar15 * 255.0));
                        iVar5 = local_10b0->GetX();
                        plVar13 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                        if (plVar13 != (long*)0) {
                            new (local_10b0) oldscape::sidebars::SideBarData(iVar5, 1);
                            (**(code**)(*plVar13 + 24))(plVar13, local_10c0, &local_10d0);
                        }
                    }
                    uVar2 = local_1074;
                    uVar16 = (ulong)local_1074;
                    uVar10 = local_1098->HeapBeginPtr();
                    local_1074 = uVar2 + 1;
                } while (uVar16 < uVar10);
            }
            local_1068->~fixed_vector();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::graphics::pose
