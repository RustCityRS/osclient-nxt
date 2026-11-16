// libs/graphics/runetek5/AnimBase.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "AnimBase.h"

namespace jag::graphics {
    // 0x100073980: AnimBase::GetBaseID() has the same machine code as math::Rect<int>::MinY() const

    // 0x10016ea80: AnimBase::GetLabelSetToJointMap() const has the same machine code as oldscape::minimenu::Minimenu::GetPlayerOps() const

    // 0x100396010: AnimBase::GetJointMoveMap() has the same machine code as oldscape::auth::SteamAuthLibWrapper::GetGameToken()

    // 0x1006ac930: AnimBase::GetTransformCount() const has the same machine code as ui::SpriteData::GetSpriteRotate() const

    // 0x100976910
    AnimBase::AnimBase() : MakeSharedPool<AnimBase, 256>(), field_0(0), m_baseID(0), m_transformCount(0) {
        uint8_t* local_58 = &field_16;
        new (local_58) Array<AnimTransform>();
        new (&field_40) Array<Array<unsigned short>>();
        uint8_t* local_50 = &field_40;
        new (&field_64) Array<Array<Joint>>();
        uint8_t* local_48 = &field_64;
        new (&field_88) Array<Array<short>>();
        uint8_t* local_40 = &field_88;
        new (&field_112) Array<short>();
        uint8_t* local_38 = &field_112;
        new (&field_136) Array<short>();
        new (&field_160) Array<unsigned short>();
        m_maxLabelID = 0;
        new (&field_192) eastl::map(local_60);
        new (&field_240) Array<unsigned short>();
        m_numJoints = 0;
    }

    // 0x100976b50
    AnimBase::AnimBase(unsigned int arg1, PacketT<Array<unsigned char>>& arg2)
        : MakeSharedPool<AnimBase, 256>(), field_0(0), m_baseID(0), m_transformCount(0) {
        char cVar1;
        uint16_t uVar5;
        unsigned short uVar6;
        unsigned short* puVar12;
        unsigned short* puVar13;
        Joint* pJVar16;
        uint16_t* puVar17;
        Array<short>* pAVar19;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        unsigned long uVar20;
        unsigned long uVar22;
        unsigned int arg1_00;
        short local_44;

        Array<AnimTransform>* local_70 = (Array<AnimTransform>*)&field_16;
        new (local_70) Array<AnimTransform>();
        Array<Array<unsigned short>>* local_68 = (Array<Array<unsigned short>>*)&field_40;
        new (local_68) Array<Array<unsigned short>>();
        Array<Array<Joint>>* local_60 = (Array<Array<Joint>>*)&field_64;
        new (local_60) Array<Array<Joint>>();
        Array<Array<short>>* local_58 = (Array<Array<short>>*)&field_88;
        new (local_58) Array<Array<short>>();
        Array<short>* local_50 = (Array<short>*)&field_112;
        new (local_50) Array<short>();
        Array<short>* local_90 = (Array<short>*)&field_136;
        new (local_90) Array<short>();
        Array<unsigned short>* local_88 = (Array<unsigned short>*)&field_160;
        new (local_88) Array<unsigned short>();
        m_maxLabelID = 0;
        map<short, short>* local_78 = (map<short, short>*)&field_192;
        new (local_78) eastl::map(local_1f8);
        Array<unsigned short>* local_98 = (Array<unsigned short>*)&field_240;
        new (local_98) Array<unsigned short>();
        m_numJoints = 0;
        m_baseID = arg1;
        unsigned short uVar3 = arg2.g2();
        m_transformCount = uVar3;
        local_70->set_max_size((unsigned long)uVar3, 0);
        local_68->set_max_size((unsigned long)m_transformCount, 0);
        Array<AnimTransform>* this_00 = local_70;
        auto pcVar7 = local_70->data();
        auto pcVar8 = this_00->end();
        for (; pcVar7 != pcVar8; pcVar7 = pcVar7 + 1) {
            cVar1 = arg2.g1();
            if (cVar1 == '\x06') {
                cVar1 = '\x02';
            }
            *pcVar7 = cVar1;
        }
        long lVar9 = arg2.size();
        AnimBase* pAVar21 = this;
        arg2.SetPos((unsigned long)m_transformCount + lVar9);
        lVar9 = arg2.size();
        arg2.SetPos(lVar9 + (unsigned long)pAVar21->m_transformCount * 2);
        Array<Array<unsigned short>>* this_01 = local_68;
        auto this_03 = local_68->data();
        auto pAVar10 = this_01->end();
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* pAVar11 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)local_68;
        for (; local_68 = (Array<Array<unsigned short>>*)pAVar11, this_03 != pAVar10; this_03 = this_03 + 24) {
            uVar3 = arg2.gSmart1or2();
            this_03->set_max_size((unsigned long)uVar3, 0);
            pAVar11 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)local_68;
        }
        auto this_04 = pAVar11->data();
        pAVar11 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)pAVar11->end();
        for (; this_04 != pAVar11; this_04 = this_04 + 24) {
            puVar12 = (unsigned short*)this_04->data();
            puVar13 = (unsigned short*)this_04->end();
            for (; puVar12 != puVar13; puVar12 = puVar12 + 1) {
                uVar3 = arg2.gSmart1or2();
                *puVar12 = uVar3;
                if ((unsigned short)m_maxLabelID < uVar3) {
                    m_maxLabelID = uVar3;
                }
            }
        }
        short sVar4 = arg2.g2s();
        Array<Array<Joint>>* this_02 = local_60;
        m_numJoints = sVar4;
        uint8_t bVar2 = arg2.g1();
        unsigned long local_80 = (unsigned long)bVar2;
        this_02->set_max_size(local_80, 0);
        uint8_t local_31 = bVar2;
        auto pAVar14 = this_02->data();
        auto pAVar15 = this_02->end();
        for (; pAVar14 != pAVar15; pAVar14 = pAVar14 + 24) {
            pAVar14->set_max_size((long)m_numJoints, 0);
        }
        if (0 < m_numJoints) {
            uVar20 = 0;
            do {
                sVar4 = arg2.g2s();
                if (local_31 != 0) {
                    uVar22 = 0;
                    do {
                        local_1f8 = Joint(arg2, sVar4);
                        pAVar14 = (Array<Joint>*)(*local_60)[uVar22];
                        pJVar16 = (Joint*)(*pAVar14)[uVar20];
                        *pJVar16 = local_1f8;
                        uVar22 = uVar22 + 1;
                    } while (local_80 != uVar22);
                }
                uVar20 = uVar20 + 1;
            } while ((long)uVar20 < (long)m_numJoints);
        }
        uVar3 = arg2.g2s();
        local_50->set_max_size((long)(short)uVar3, 0);
        Joint local_1f8;
        local_1f8.set_max_size((long)(short)uVar3, 0);
        unsigned short local_42 = uVar3;
        if (0 < (short)uVar3) {
            uVar20 = 0;
            do {
                uVar5 = arg2.g2s();
                puVar17 = (uint16_t*)(*local_50)[uVar20];
                *puVar17 = uVar5;
                puVar17 = (uint16_t*)(*local_50)[uVar20];
                uVar5 = *puVar17;
                puVar17 = &local_1f8[uVar20];
                *puVar17 = uVar5;
                uVar20 = uVar20 + 1;
            } while (uVar3 != uVar20);
        }
        Array<short, BucketAllocatorEASTL> local_b0((long)m_numJoints);
        auto psVar18 = local_b0.data();
        auto Var23 = local_b0.end();
        std::iota<short*, short>(psVar18, Var23, (short)((unkuint10)Var23 >> 64));
        if (local_31 != 0) {
            if (0 < m_numJoints) {
                uVar20 = 0;
                do {
                    psVar18 = &local_b0[uVar20];
                    puVar17 = (uint16_t*)(*local_78)[*psVar18];
                    *puVar17 = (short)uVar20;
                    uVar20 = uVar20 + 1;
                } while ((long)uVar20 < (long)m_numJoints);
            }
            if (0 < (short)local_42) {
                uVar20 = 0;
                do {
                    psVar18 = &local_1f8[uVar20];
                    puVar17 = (uint16_t*)(*local_78)[*psVar18];
                    uVar5 = *puVar17;
                    puVar17 = (uint16_t*)(*local_50)[uVar20];
                    *puVar17 = uVar5;
                    uVar20 = uVar20 + 1;
                } while (uVar3 != uVar20);
            }
        }
        if (local_31 != 0) {
            uVar20 = 0;
            do {
                pAVar14 = (Array<Joint>*)(*local_60)[uVar20];
                if (1 < m_numJoints) {
                    uVar22 = 1;
                    do {
                        pJVar16 = (Joint*)(*pAVar14)[uVar22];
                        local_44 = ((Joint*)(*pAVar14)[uVar22])->GetParentJointID();
                        psVar18 = (short*)(*local_78)[local_44];
                        pJVar16->SetParentJointID(*psVar18);
                        uVar22 = uVar22 + 1;
                    } while ((long)uVar22 < (long)m_numJoints);
                }
                uVar20 = uVar20 + 1;
            } while (uVar20 != local_80);
        }
        local_88->set_max_size((long)m_numJoints, 0);
        local_90->set_max_size((unsigned long)m_transformCount, 0);
        if ((0 < m_numJoints) && (m_transformCount != 0)) {
            uVar20 = 0;
            sVar4 = 0;
            do {
                pcVar7 = (char*)(*local_70)[uVar20];
                if (*pcVar7 == '\0') {
                    psVar18 = (short*)(*local_50)[(long)sVar4];
                    puVar17 = (uint16_t*)(*local_88)[(long)*psVar18];
                    *puVar17 = (short)uVar20;
                    sVar4 = sVar4 + 1;
                }
                psVar18 = (short*)(*local_90)[uVar20];
                *psVar18 = sVar4 - 1;
                uVar20 = uVar20 + 1;
            } while (uVar20 < m_transformCount);
        }
        local_58->set_max_size(local_80, 0);
        if (local_31 != 0) {
            uVar20 = 0;
            do {
                pAVar19 = (Array<short>*)(*local_58)[uVar20];
                pAVar19->set_max_size((long)m_numJoints, 0);
                pAVar19 = (Array<short>*)(*local_58)[uVar20];
                puVar17 = (uint16_t*)(*pAVar19)[0];
                *puVar17 = 0;
                if (1 < m_numJoints) {
                    uVar22 = 1;
                    do {
                        pAVar19 = (Array<short>*)(*local_58)[uVar20];
                        pAVar14 = (Array<Joint>*)(*local_60)[uVar20];
                        pJVar16 = (Joint*)(*pAVar14)[uVar22];
                        sVar4 = pJVar16->GetParentJointID();
                        psVar18 = (short*)(*pAVar19)[(long)sVar4];
                        sVar4 = *psVar18;
                        pAVar19 = (Array<short>*)(*local_58)[uVar20];
                        psVar18 = (short*)(*pAVar19)[uVar22];
                        *psVar18 = sVar4 + 1;
                        uVar22 = uVar22 + 1;
                    } while ((long)uVar22 < (long)m_numJoints);
                }
                uVar20 = uVar20 + 1;
            } while (uVar20 != local_80);
        }
        BuildParentJoints();
        pAVar21 = this;
        uVar3 = m_maxLabelID;
        local_98->set_max_size((unsigned long)uVar3 + 1, 0);
        if (0 < pAVar21->m_numJoints) {
            arg1_00 = 0;
            do {
                uVar6 = GetOriginTransformIDByJointID(pAVar21, arg1_00);
                this_06 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)GetTransformLabels(
                    pAVar21, uVar6 + 1);
                lVar9 = this_06->end();
                if (lVar9 != 0) {
                    uVar20 = 0;
                    do {
                        puVar12 = (unsigned short*)(*this_06)[uVar20];
                        if (*puVar12 <= uVar3) {
                            puVar12 = (unsigned short*)(*this_06)[uVar20];
                            puVar17 = (uint16_t*)(*local_98)[(unsigned long)*puVar12];
                            *puVar17 = (short)arg1_00;
                        }
                        uVar20 = uVar20 + 1;
                        uVar22 = this_06->end();
                    } while (uVar20 < uVar22);
                }
                arg1_00 = arg1_00 + 1;
                pAVar21 = this;
            } while ((int)arg1_00 < (int)m_numJoints);
        }
        pAVar21->field_0 = 1;
    }

    // 0x100978190
    void AnimBase::BuildParentJoints() {
        short sVar1;
        Joint* pJVar3;
        Joint* pJVar4;

        uint8_t* this_00 = &field_64;
        auto pAVar5 = this_00->data();
        auto pAVar2 = this_00->end();
        for (; pAVar5 != pAVar2; pAVar5 = pAVar5 + 24) {
            pJVar4 = (Joint*)pAVar5->data();
            pJVar3 = (Joint*)pAVar5->end();
            for (; pJVar4 != pJVar3; pJVar4 = pJVar4 + 1) {
                sVar1 = pJVar4->GetParentJointID();
                if (-1 < sVar1) {
                    sVar1 = pJVar4->GetParentJointID();
                    pJVar4->SetParentJoint((Joint*)(*pAVar5)[(long)sVar1]);
                }
            }
        }
        pAVar5 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)this_00->data();
        pAVar2 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)this_00->end();
        for (; pAVar5 != pAVar2; pAVar5 = pAVar5 + 24) {
            pJVar4 = (Joint*)pAVar5->data();
            pJVar3 = (Joint*)pAVar5->end();
            for (; pJVar4 != pJVar3; pJVar4 = pJVar4 + 1) {
                pJVar4->CalculateWorldBind();
            }
        }
    }

    // 0x100978360
    void AnimBase::DebugDrawBindPose(const math::Matrix44T<float>& matrix44, unsigned char arg2) const {
        short sVar1;
        unsigned int uVar2;
        int iVar3;
        unsigned long uVar5;
        Joint* pJVar6;
        Vector4T<float>* pVVar7;
        Joint* pJVar8;
        long* plVar9;
        Array<short>* this_01;
        short* psVar10;
        uint64_t in_register_00000011;
        unsigned long arg1;
        float fVar11;
        float in_XMM1_Da;
        Matrix44T<float> local_128;
        Sphere local_e8;
        uint8_t local_a8[64];
        uint8_t local_68[16];
        uint64_t local_50;
        float local_48;
        unsigned int local_38;

        uint32_t local_34 = (uint32_t)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2);
        Matrix44T<float>* local_40 = matrix44;
        auto this_00 = GetBindPose(arg2);
        if (this_00->end() != 0) {
            local_38 = 1;
            arg1 = 0;
            local_68._8_8_ = this_00;
            do {
                pJVar6 = (Joint*)(*this_00)[arg1];
                local_e8 = pJVar6->GetWorldBind();
                local_128* local_e8;
                pVVar7 = &local_128[3];
                local_50 = pVVar7->GetXYZ();
                local_48 = in_XMM1_Da;
                pJVar8 = pJVar6->GetParentJoint();
                plVar9 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar9 != nullptr) {
                    iVar3 = -16777216;
                    if (pJVar8 == nullptr) {
                        iVar3 = -16776961;
                    }
                    local_e8 = math::Sphere(local_50, 4.0);
                    new (local_a8) oldscape::sidebars::SideBarData(iVar3, 1);
                    (**(void (**)(...))(*plVar9 + 32))(plVar9, &local_e8, local_a8);
                }
                pJVar8 = pJVar6->GetParentJoint();
                if (pJVar6 == pJVar8) {
                    LogAssert("&joint != joint.GetParentJoint()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek5/"
                              "AnimBase.cpp",
                              228, nullptr);
                }
                pJVar8 = pJVar6->GetParentJoint();
                if (pJVar8 != nullptr) {
                    this_01 = (Array<short>*)GetJointTreeLevels((unsigned char)local_34);
                    psVar10 = (short*)(*this_01)[arg1];
                    sVar1 = *psVar10;
                    pJVar6 = pJVar6->GetParentJoint();
                    *local_a8 = pJVar6->GetWorldBind();
                    local_e8** local_a8;
                    pVVar7 = &local_e8[3];
                    local_a8._0_8_ = pVVar7->GetXYZ();
                    local_a8._8_4_ = in_XMM1_Da;
                    fVar11 = (float)pow((float)(int)sVar1, in_XMM1_Da);
                    in_XMM1_Da = 255.0 - fVar11 * 255.0;
                    new (local_68) math::ColourStorage8888(255, (unsigned int)(long)(fVar11 * 255.0), 0,
                                                           (unsigned int)(long)in_XMM1_Da);
                    iVar3 = local_68->GetX();
                    plVar9 = DebugPrimitiveCollectorBasic::GetCollector("");
                    if (plVar9 != nullptr) {
                        new (local_68) oldscape::sidebars::SideBarData(iVar3, 1);
                        (**(void (**)(...))(*plVar9 + 24))(plVar9, (ReturnValue*)local_a8, &local_50);
                    }
                }
                uVar2 = local_38;
                this_00 = (Array<Joint>*)local_68._8_8_;
                arg1 = (unsigned long)local_38;
                uVar5 = local_68._8_8_->end();
                local_38 = uVar2 + 1;
            } while (arg1 < uVar5);
        }
    }

} // namespace jag::graphics
