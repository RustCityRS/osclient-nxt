// libs/graphics/runetek5/AnimBase.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "AnimBase.h"

namespace jag::graphics {
    // 0x100073980: the linker folded this into math::Rect<int>::MinY() const, which has identical code
    AnimBase::GetBaseID();

    // 0x10016ea80: the linker folded this into oldscape::minimenu::Minimenu::GetPlayerOps() const, which has identical code
    AnimBase::GetLabelSetToJointMap() const;

    // 0x100396010: the linker folded this into oldscape::auth::SteamAuthLibWrapper::GetGameToken(), which has identical code
    AnimBase::GetJointMoveMap();

    // 0x1006ac930: the linker folded this into ui::SpriteData::GetSpriteRotate() const, which has identical code
    AnimBase::GetTransformCount() const;

    // 0x100976910, 352 bytes, base-object constructor, placed by class name
    // AnimBase::AnimBase()
    void AnimBase::AnimBase() {
        allocator local_60[8];
        undefined1* local_58;
        undefined1* local_50;
        undefined1* local_48;
        undefined1* local_40;
        undefined1* local_38;

        new (this) MakeSharedPool<AnimBase, 256>();
        field_0 = 0;
        field_4 = 0;
        m_transformCount = 0;
        local_58 = &field_16;
        new (local_58) Array<AnimTransform, eastl::allocator>();
        new (&field_40) Array<Array<unsigned short, eastl::allocator>, eastl::allocator>();
        local_50 = &field_40;
        new (&field_64) Array<Array<Joint, eastl::allocator>, eastl::allocator>();
        local_48 = &field_64;
        new (&field_88) Array<Array<short, eastl::allocator>, eastl::allocator>();
        local_40 = &field_88;
        new (&field_112) Array<short, eastl::allocator>();
        local_38 = &field_112;
        new (&field_136) Array<short, eastl::allocator>();
        new (&field_160) Array<unsigned short, eastl::allocator>();
        m_maxLabelID = 0;
        eastl::allocator::allocator(local_60, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)&field_192);
        new (&field_240) Array<unsigned short, eastl::allocator>();
        m_numJoints = 0;
    }

    // 0x100976b40, 16 bytes, complete-object constructor, placed by class name
    // AnimBase::AnimBase(): jumps straight to the base-object constructor

    // 0x100976b50, 2400 bytes, base-object constructor, placed by class name
    // AnimBase::AnimBase(unsigned int, PacketT<Array<unsigned char, eastl::allocator> >&)
    void AnimBase::AnimBase(uint param_1, PacketT* param_2) {
        Array<AnimTransform, eastl::allocator>* this_00;
        Array<Array<unsigned short, eastl::allocator>, eastl::allocator>* this_01;
        Array<Array<Joint, eastl::allocator>, eastl::allocator>* this_02;
        char cVar1;
        byte bVar2;
        ushort uVar3;
        short sVar4;
        undefined2 uVar5;
        ushort uVar6;
        char* pcVar7;
        char* pcVar8;
        long lVar9;
        Array<unsigned short, eastl::allocator>* this_03;
        Array<unsigned short, eastl::allocator>* pAVar10;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_04;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* pAVar11;
        ushort* puVar12;
        ushort* puVar13;
        Array<Joint, eastl::allocator>* pAVar14;
        Array<Joint, eastl::allocator>* pAVar15;
        Joint* pJVar16;
        undefined2* puVar17;
        short* psVar18;
        Joint* this_05;
        Array<short, eastl::allocator>* pAVar19;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        ulong uVar20;
        AnimBase* pAVar21;
        ulong uVar22;
        uint uVar23;
        unkbyte10 Var24;
        Joint local_1f8;
        Array<short, BucketAllocatorEASTL> local_b0[24];
        Array<unsigned short, eastl::allocator>* local_98;
        Array<short, eastl::allocator>* local_90;
        Array<unsigned short, eastl::allocator>* local_88;
        ulong local_80;
        map<short, short, eastl::less<short>, eastl::allocator>* local_78;
        Array<AnimTransform, eastl::allocator>* local_70;
        Array<Array<unsigned short, eastl::allocator>, eastl::allocator>* local_68;
        Array<Array<Joint, eastl::allocator>, eastl::allocator>* local_60;
        Array<Array<short, eastl::allocator>, eastl::allocator>* local_58;
        Array<short, eastl::allocator>* local_50;
        short local_44;
        ushort local_42;
        AnimBase* local_40;
        byte local_31;

        new (this) MakeSharedPool<AnimBase, 256>();
        field_0 = 0;
        field_4 = 0;
        m_transformCount = 0;
        local_70 = (Array<AnimTransform, eastl::allocator>*)&field_16;
        Array<AnimTransform, eastl::allocator>::Array(local_70);
        local_68 = (Array<Array<unsigned short, eastl::allocator>, eastl::allocator>*)&field_40;
        Array<Array<unsigned short, eastl::allocator>, eastl::allocator>::Array(local_68);
        local_60 = (Array<Array<Joint, eastl::allocator>, eastl::allocator>*)&field_64;
        Array<Array<Joint, eastl::allocator>, eastl::allocator>::Array(local_60);
        local_58 = (Array<Array<short, eastl::allocator>, eastl::allocator>*)&field_88;
        Array<Array<short, eastl::allocator>, eastl::allocator>::Array(local_58);
        local_50 = (Array<short, eastl::allocator>*)&field_112;
        Array<short, eastl::allocator>::Array(local_50);
        local_90 = (Array<short, eastl::allocator>*)&field_136;
        Array<short, eastl::allocator>::Array(local_90);
        local_88 = (Array<unsigned short, eastl::allocator>*)&field_160;
        Array<unsigned short, eastl::allocator>::Array(local_88);
        m_maxLabelID = 0;
        new (&local_1f8) eastl::allocator("EASTL map");
        local_78 = (map<short, short, eastl::less<short>, eastl::allocator>*)&field_192;
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)local_78);
        local_98 = (Array<unsigned short, eastl::allocator>*)&field_240;
        Array<unsigned short, eastl::allocator>::Array(local_98);
        m_numJoints = 0;
        field_4 = param_1;
        uVar3 = param_2->g2();
        m_transformCount = uVar3;
        local_70->set_max_size((ulong)uVar3, 0);
        local_68->set_max_size((ulong)m_transformCount, 0);
        this_00 = local_70;
        local_40 = this;
        pcVar7 = (char*)local_70->data();
        pcVar8 = (char*)this_00->end();
        for (; pcVar7 != pcVar8; pcVar7 = pcVar7 + 1) {
            cVar1 = param_2->g1();
            if (cVar1 == '\x06') {
                cVar1 = '\x02';
            }
            *pcVar7 = cVar1;
        }
        lVar9 = param_2->size();
        pAVar21 = local_40;
        param_2->SetPos((ulong)local_40->m_transformCount + lVar9);
        lVar9 = param_2->size();
        param_2->SetPos(lVar9 + (ulong)pAVar21->m_transformCount * 2);
        this_01 = local_68;
        this_03 = (Array<unsigned short, eastl::allocator>*)local_68->data();
        pAVar10 = (Array<unsigned short, eastl::allocator>*)this_01->end();
        pAVar11 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)local_68;
        for (;
             local_68 = (Array<Array<unsigned short, eastl::allocator>, eastl::allocator>*)pAVar11, this_03 != pAVar10;
             this_03 = this_03 + 24) {
            uVar3 = param_2->gSmart1or2();
            this_03->set_max_size((ulong)uVar3, 0);
            pAVar11 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                             std::default_delete<LoadingScreenScript::AnimLayer>>,
                             eastl::allocator>*)local_68;
        }
        this_04 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)pAVar11->data();
        pAVar11 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)pAVar11->end();
        for (; this_04 != pAVar11; this_04 = this_04 + 24) {
            puVar12 = (ushort*)this_04->data();
            puVar13 = (ushort*)this_04->end();
            for (; puVar12 != puVar13; puVar12 = puVar12 + 1) {
                uVar3 = param_2->gSmart1or2();
                *puVar12 = uVar3;
                if ((ushort)local_40->m_maxLabelID < uVar3) {
                    local_40->m_maxLabelID = uVar3;
                }
            }
        }
        sVar4 = param_2->g2s();
        this_02 = local_60;
        local_40->m_numJoints = sVar4;
        bVar2 = param_2->g1();
        local_80 = (ulong)bVar2;
        this_02->set_max_size(local_80, 0);
        local_31 = bVar2;
        pAVar14 = (Array<Joint, eastl::allocator>*)this_02->data();
        pAVar15 = (Array<Joint, eastl::allocator>*)this_02->end();
        for (; pAVar14 != pAVar15; pAVar14 = pAVar14 + 24) {
            pAVar14->set_max_size((long)local_40->m_numJoints, 0);
        }
        if (0 < local_40->m_numJoints) {
            uVar20 = 0;
            do {
                sVar4 = param_2->g2s();
                if (local_31 != 0) {
                    uVar22 = 0;
                    do {
                        new (&local_1f8) Joint(param_2, sVar4);
                        pAVar14 = (Array<Joint, eastl::allocator>*)
                            Array<Array<Joint, eastl::allocator>, eastl::allocator>::operator[](local_60, uVar22);
                        pJVar16 = (Joint*)Array<Joint, eastl::allocator>::operator[](pAVar14, uVar20);
                        Joint::operator=(pJVar16, &local_1f8);
                        uVar22 = uVar22 + 1;
                    } while (local_80 != uVar22);
                }
                uVar20 = uVar20 + 1;
            } while ((long)uVar20 < (long)local_40->m_numJoints);
        }
        uVar3 = param_2->g2s();
        local_50->set_max_size((long)(short)uVar3, 0);
        new (&local_1f8) Array<short, BucketAllocatorEASTL>();
        local_1f8.set_max_size((long)(short)uVar3, 0);
        local_42 = uVar3;
        if (0 < (short)uVar3) {
            uVar20 = 0;
            do {
                uVar5 = param_2->g2s();
                puVar17 = (undefined2*)Array<short, eastl::allocator>::operator[](local_50, uVar20);
                *puVar17 = uVar5;
                puVar17 = (undefined2*)Array<short, eastl::allocator>::operator[](local_50, uVar20);
                uVar5 = *puVar17;
                puVar17 = (undefined2*)Array<short, BucketAllocatorEASTL>::operator[](
                    (Array<short, BucketAllocatorEASTL>*)&local_1f8, uVar20);
                *puVar17 = uVar5;
                uVar20 = uVar20 + 1;
            } while (uVar3 != uVar20);
        }
        Array<short, BucketAllocatorEASTL>::Array(local_b0, (long)local_40->m_numJoints);
        psVar18 = (short*)local_b0->data();
        Var24 = local_b0->end();
        std::iota<short*, short>(psVar18, (short*)Var24, (short)((unkuint10)Var24 >> 64));
        if (local_31 != 0) {
            if (0 < local_40->m_numJoints) {
                uVar20 = 0;
                do {
                    psVar18 = (short*)Array<short, BucketAllocatorEASTL>::operator[](local_b0, uVar20);
                    puVar17 = (undefined2*)eastl::map<short, short, eastl::less<short>, eastl::allocator>::operator[](
                        local_78, psVar18);
                    *puVar17 = (short)uVar20;
                    uVar20 = uVar20 + 1;
                } while ((long)uVar20 < (long)local_40->m_numJoints);
            }
            if (0 < (short)local_42) {
                uVar20 = 0;
                do {
                    psVar18 = (short*)Array<short, BucketAllocatorEASTL>::operator[](
                        (Array<short, BucketAllocatorEASTL>*)&local_1f8, uVar20);
                    puVar17 = (undefined2*)eastl::map<short, short, eastl::less<short>, eastl::allocator>::operator[](
                        local_78, psVar18);
                    uVar5 = *puVar17;
                    puVar17 = (undefined2*)Array<short, eastl::allocator>::operator[](local_50, uVar20);
                    *puVar17 = uVar5;
                    uVar20 = uVar20 + 1;
                } while (uVar3 != uVar20);
            }
        }
        if (local_31 != 0) {
            uVar20 = 0;
            do {
                pAVar14 = (Array<Joint, eastl::allocator>*)
                    Array<Array<Joint, eastl::allocator>, eastl::allocator>::operator[](local_60, uVar20);
                if (1 < local_40->m_numJoints) {
                    uVar22 = 1;
                    do {
                        pJVar16 = (Joint*)Array<Joint, eastl::allocator>::operator[](pAVar14, uVar22);
                        this_05 = (Joint*)Array<Joint, eastl::allocator>::operator[](pAVar14, uVar22);
                        local_44 = this_05->GetParentJointID();
                        psVar18 = (short*)eastl::map<short, short, eastl::less<short>, eastl::allocator>::operator[](
                            local_78, &local_44);
                        pJVar16->SetParentJointID(*psVar18);
                        uVar22 = uVar22 + 1;
                    } while ((long)uVar22 < (long)local_40->m_numJoints);
                }
                uVar20 = uVar20 + 1;
            } while (uVar20 != local_80);
        }
        local_88->set_max_size((long)local_40->m_numJoints, 0);
        local_90->set_max_size((ulong)local_40->m_transformCount, 0);
        if ((0 < local_40->m_numJoints) && (local_40->m_transformCount != 0)) {
            uVar20 = 0;
            sVar4 = 0;
            do {
                pcVar7 = (char*)Array<AnimTransform, eastl::allocator>::operator[](local_70, uVar20);
                if (*pcVar7 == '\0') {
                    psVar18 = (short*)Array<short, eastl::allocator>::operator[](local_50, (long)sVar4);
                    puVar17 =
                        (undefined2*)Array<unsigned short, eastl::allocator>::operator[](local_88, (long)*psVar18);
                    *puVar17 = (short)uVar20;
                    sVar4 = sVar4 + 1;
                }
                psVar18 = (short*)Array<short, eastl::allocator>::operator[](local_90, uVar20);
                *psVar18 = sVar4 + -1;
                uVar20 = uVar20 + 1;
            } while (uVar20 < local_40->m_transformCount);
        }
        local_58->set_max_size(local_80, 0);
        if (local_31 != 0) {
            uVar20 = 0;
            do {
                pAVar19 = (Array<short, eastl::allocator>*)
                    Array<Array<short, eastl::allocator>, eastl::allocator>::operator[](local_58, uVar20);
                pAVar19->set_max_size((long)local_40->m_numJoints, 0);
                pAVar19 = (Array<short, eastl::allocator>*)
                    Array<Array<short, eastl::allocator>, eastl::allocator>::operator[](local_58, uVar20);
                puVar17 = (undefined2*)Array<short, eastl::allocator>::operator[](pAVar19, 0);
                *puVar17 = 0;
                if (1 < local_40->m_numJoints) {
                    uVar22 = 1;
                    do {
                        pAVar19 = (Array<short, eastl::allocator>*)
                            Array<Array<short, eastl::allocator>, eastl::allocator>::operator[](local_58, uVar20);
                        pAVar14 = (Array<Joint, eastl::allocator>*)
                            Array<Array<Joint, eastl::allocator>, eastl::allocator>::operator[](local_60, uVar20);
                        pJVar16 = (Joint*)Array<Joint, eastl::allocator>::operator[](pAVar14, uVar22);
                        sVar4 = pJVar16->GetParentJointID();
                        psVar18 = (short*)Array<short, eastl::allocator>::operator[](pAVar19, (long)sVar4);
                        sVar4 = *psVar18;
                        pAVar19 = (Array<short, eastl::allocator>*)
                            Array<Array<short, eastl::allocator>, eastl::allocator>::operator[](local_58, uVar20);
                        psVar18 = (short*)Array<short, eastl::allocator>::operator[](pAVar19, uVar22);
                        *psVar18 = sVar4 + 1;
                        uVar22 = uVar22 + 1;
                    } while ((long)uVar22 < (long)local_40->m_numJoints);
                }
                uVar20 = uVar20 + 1;
            } while (uVar20 != local_80);
        }
        BuildParentJoints(local_40);
        pAVar21 = local_40;
        uVar3 = local_40->m_maxLabelID;
        local_98->set_max_size((ulong)uVar3 + 1, 0);
        if (0 < pAVar21->m_numJoints) {
            uVar23 = 0;
            do {
                uVar6 = GetOriginTransformIDByJointID(pAVar21, uVar23);
                this_06 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)GetTransformLabels(
                    pAVar21, uVar6 + 1);
                lVar9 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_06);
                if (lVar9 != 0) {
                    uVar20 = 0;
                    do {
                        puVar12 = (ushort*)Array<unsigned short, eastl::allocator>::operator[](
                            (Array<unsigned short, eastl::allocator>*)this_06, uVar20);
                        if (*puVar12 <= uVar3) {
                            puVar12 = (ushort*)Array<unsigned short, eastl::allocator>::operator[](
                                (Array<unsigned short, eastl::allocator>*)this_06, uVar20);
                            puVar17 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](local_98,
                                                                                                       (ulong)*puVar12);
                            *puVar17 = (short)uVar23;
                        }
                        uVar20 = uVar20 + 1;
                        uVar22 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_06);
                    } while (uVar20 < uVar22);
                }
                uVar23 = uVar23 + 1;
                pAVar21 = local_40;
            } while ((int)uVar23 < (int)local_40->m_numJoints);
        }
        pAVar21->field_0 = 1;
        local_b0->~Array();
        local_1f8.~Array();
    }

    // 0x100978190, 304 bytes, placed by class name
    // AnimBase::BuildParentJoints()
    void AnimBase::BuildParentJoints() {
        Joint* pJVar1;
        short sVar2;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* pAVar3;
        Joint* pJVar4;
        Joint* pJVar5;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* pAVar6;
        undefined1* this_00;

        this_00 = &field_64;
        pAVar6 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)this_00->data();
        pAVar3 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)this_00->end();
        for (; pAVar6 != pAVar3; pAVar6 = pAVar6 + 24) {
            pJVar5 = (Joint*)pAVar6->data();
            pJVar4 = (Joint*)pAVar6->end();
            for (; pJVar5 != pJVar4; pJVar5 = pJVar5 + 1) {
                sVar2 = pJVar5->GetParentJointID();
                if (-1 < sVar2) {
                    sVar2 = pJVar5->GetParentJointID();
                    pJVar1 = (Joint*)Array<Joint, eastl::allocator>::operator[]((Array<Joint, eastl::allocator>*)pAVar6,
                                                                                (long)sVar2);
                    pJVar5->SetParentJoint(pJVar1);
                }
            }
        }
        pAVar6 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)this_00->data();
        pAVar3 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)this_00->end();
        for (; pAVar6 != pAVar3; pAVar6 = pAVar6 + 24) {
            pJVar5 = (Joint*)pAVar6->data();
            pJVar4 = (Joint*)pAVar6->end();
            for (; pJVar5 != pJVar4; pJVar5 = pJVar5 + 1) {
                pJVar5->CalculateWorldBind();
            }
        }
    }

    // 0x100978310, 16 bytes, complete-object constructor, placed by class name
    // AnimBase::AnimBase(unsigned int, PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x100978360, 624 bytes, placed by class name
    // AnimBase::DebugDrawBindPose(math::Matrix44T<float> const&, unsigned char) const
    void AnimBase::DebugDrawBindPose(Matrix44T* param_1, uchar param_2) {
        undefined8* this_00;
        short sVar1;
        uint uVar2;
        int iVar3;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        long lVar4;
        ulong uVar5;
        Joint* this_02;
        Vector4T<float>* pVVar6;
        long* plVar7;
        Joint* pJVar8;
        Array<short, eastl::allocator>* this_03;
        short* psVar9;
        undefined7 in_register_00000011;
        ulong uVar10;
        float fVar11;
        float in_XMM1_Da;
        math local_128;
        undefined1 local_a8[64];
        undefined1 local_68[16];
        undefined8 local_50;
        float local_48;
        uint local_38;
        undefined4 local_34;

        local_34 = (undefined4)CONCAT71(in_register_00000011, param_2);
        this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)GetBindPose(this, param_2);
        lVar4 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
        if (lVar4 != 0) {
            local_38 = 1;
            this_00 = &local_128.field_64;
            uVar10 = 0;
            local_68._8_8_ = this_01;
            do {
                this_02 = (Joint*)Array<Joint, eastl::allocator>::operator[]((Array<Joint, eastl::allocator>*)this_01,
                                                                             uVar10);
                this_00->GetWorldBind();
                math::operator*(&local_128, (Matrix44T*)this_00, param_1);
                pVVar6 = (Vector4T<float>*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)&local_128, 3);
                local_50 = pVVar6->GetXYZ();
                local_48 = in_XMM1_Da;
                lVar4 = this_02->GetParentJoint();
                plVar7 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar7 != (long*)0) {
                    iVar3 = -16777216;
                    if (lVar4 == 0) {
                        iVar3 = -16776961;
                    }
                    new (this_00) math::Sphere((Vector3T*)&local_50, 4.0);
                    new (local_a8) oldscape::sidebars::SideBarData(iVar3, 1);
                    (**(code**)(*plVar7 + 32))(plVar7, this_00, local_a8);
                }
                pJVar8 = (Joint*)this_02->GetParentJoint();
                if (this_02 == pJVar8) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("&joint != joint.GetParentJoint()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek5/"
                              "AnimBase.cpp",
                              228, (char*)0);
                }
                lVar4 = this_02->GetParentJoint();
                if (lVar4 != 0) {
                    this_03 = (Array<short, eastl::allocator>*)GetJointTreeLevels((AnimBase*)this, (uchar)local_34);
                    psVar9 = (short*)Array<short, eastl::allocator>::operator[](this_03, uVar10);
                    sVar1 = *psVar9;
                    this_02->GetParentJoint();
                    local_a8->GetWorldBind();
                    math::operator*((math*)this_00, (Matrix44T*)local_a8, param_1);
                    pVVar6 = (Vector4T<float>*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)this_00, 3);
                    local_a8._0_8_ = pVVar6->GetXYZ();
                    local_a8._8_4_ = in_XMM1_Da;
                    fVar11 = (float)pow((float)(int)sVar1, in_XMM1_Da);
                    in_XMM1_Da = 255.0 - fVar11 * 255.0;
                    new (local_68) math::ColourStorage8888<math::ARGB8StorageLayout>(255, (uint)(long)(fVar11 * 255.0),
                                                                                     0, (uint)(long)in_XMM1_Da);
                    iVar3 = local_68->GetX();
                    plVar7 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                    if (plVar7 != (long*)0) {
                        new (local_68) oldscape::sidebars::SideBarData(iVar3, 1);
                        (**(code**)(*plVar7 + 24))(plVar7, (Joint*)local_a8, &local_50);
                    }
                }
                uVar2 = local_38;
                this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)local_68._8_8_;
                uVar10 = (ulong)local_38;
                uVar5 = local_68._8_8_->end();
                local_38 = uVar2 + 1;
            } while (uVar10 < uVar5);
        }
    }

} // namespace jag::graphics
