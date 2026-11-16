// libs/oldscape/jagex3/dash3d/ZFightDetection.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

namespace jag::oldscape::dash3d {
    class DepthBiasComputer {
    public:
        class Node;
        DepthBiasComputer(ModelUnlitImpl&);
        ~DepthBiasComputer();
        int ResolveAll();
        void ResolveNode(Node&);
        void Run();

        // data members, from how the methods use this: 16 bytes
        ModelUnlitImpl* field_0; // offset 0
        char _unknown_8[8];
    };

    class DepthBiasComputer::Node {
    public:
        ~Node();
        Node(Node&&);
        Node();

        // data members, from how the methods use this: 48 bytes
        char _unknown_0[32];
        undefined8 field_32; // offset 32
        undefined4 field_40; // offset 40
        char _unknown_44[4];
    };

    class FaceCollider {
    public:
        class FaceWithIntermediates;
        class ModelPointers;
        float Vector2Cross(jag::math::Vector2T<float> const&, jag::math::Vector2T<float> const&);
        bool SideTest(float, float, float, float, float, float, jag::math::Vector3T<float> const (&)[3]);
        ulong Do2dTriangle1DivideTriangles(jag::math::Vector3T<float> const (&)[3],
                                           jag::math::Vector3T<float> const (&)[3]);
        ulong Do2dTrianglesOverlap(jag::math::Vector3T<float> const (&)[3], jag::math::Vector3T<float> const (&)[3]);
        ulong TestFacePair(FaceWithIntermediates const&, Face const&, float&, bool);
        bool TestAllFacePairs(ModelPointers const&, ModelPointers const&, std::function<bool(int, int, float)>);
        TestAllFacePairs(ModelUnlitImpl const&, std::function<bool(int, int, float)>);
        TestAllFacePairs(ModelUnlitImpl const&, ModelUnlitImpl const&, std::function<bool(int, int, float)>);
    };

    class FaceCollider::FaceWithIntermediates {
    public:
        void ComputeIntermdiates();
        FaceWithIntermediates();

        // data members, from how the methods use this: 116 bytes
        int field_0;         // offset 0
        int field_4;         // offset 4
        int field_8;         // offset 8
        int field_12;        // offset 12
        int field_16;        // offset 16
        int field_20;        // offset 20
        int field_24;        // offset 24
        int field_28;        // offset 28
        int field_32;        // offset 32
        undefined1 field_36; // offset 36
        char _unknown_37[55];
        float field_92; // offset 92
        char _unknown_96[8];
        float field_104; // offset 104
        float field_108; // offset 108
        char _unknown_112[4];
    };

    class FaceCollider::ModelPointers {
    public:
        IsFaceEnabled(int) const;
        void GetFace(Face&, int) const;
        ModelPointers(ModelUnlitImpl const&);

        // data members, from how the methods use this: 72 bytes
        undefined8 field_0;  // offset 0
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        undefined8 field_40; // offset 40
        long field_48;       // offset 48
        int field_56;        // offset 56
        int field_60;        // offset 60
        undefined4 field_64; // offset 64
        char _unknown_68[4];
    };

    // 0x100313380, 576 bytes, placed by debug map only (low confidence)
    // FaceCollider::FaceWithIntermediates::ComputeIntermdiates()
    void FaceCollider::FaceWithIntermediates::ComputeIntermdiates() {
        undefined1* this_00;
        Vector4T<float>* pVVar1;
        long lVar2;
        Vector4T<float>* this_01;
        Vector3T* pVVar3;
        float fVar4;
        float local_60;
        float local_5c;
        float local_58;
        float local_50;
        float local_4c;
        float local_48;
        float local_44;
        undefined8 local_40[2];

        new (&local_60) jag::math::Vector3T<int>();
        local_60 = (float)(field_12 - field_0);
        local_5c = (float)(field_16 - field_4);
        local_58 = (float)(field_20 - field_8);
        new (&local_50) jag::math::Vector3T<int>();
        local_50 = (float)(field_24 - field_0);
        local_4c = (float)(field_28 - field_4);
        local_48 = (float)(field_32 - field_8);
        this_00 = &field_36;
        pVVar1 = (Vector4T<float>*)jag::math::Matrix33T<float>::operator[]((Matrix33T<float>*)this_00, 2);
        local_40[0] = jag::math::Vector3Cross<float>((Vector3T*)&local_60, (Vector3T*)&local_50);
        jag::math::Vector4T<float>::SetXYZ(pVVar1, (Vector3T*)local_40);
        fVar4 = (float)fabs(*(float*)pVVar1);
        if (fVar4 < 1e-05) {
            fVar4 = (float)fabs(*(float*)(pVVar1 + 4));
            if (fVar4 < 1e-05) {
                local_44 = *(float*)(pVVar1 + 8);
                jag::math::Matrix33T<float>::operator=((Matrix33T<float>*)this_00, PTR_IDENTITY_100ee6718);
                if (local_44 < 0.0) {
                    lVar2 = jag::math::Matrix33T<float>::operator[]((Matrix33T<float>*)this_00, 1);
                    *(undefined4*)(lVar2 + 4) = 3212836864;
                    lVar2 = jag::math::Matrix33T<float>::operator[]((Matrix33T<float>*)this_00, 2);
                    *(undefined4*)(lVar2 + 8) = 3212836864;
                }
                goto LAB_100313538;
            }
        }
        pVVar1->Normalize();
        local_40[0] = jag::math::Vector3Cross<float>((Vector3T*)pVVar1, (Vector3T*)PTR_LOOK_100ee66e0);
        this_01 = (Vector4T<float>*)jag::math::Matrix33T<float>::operator[]((Matrix33T<float>*)this_00, 0);
        jag::math::Vector4T<float>::SetXYZ(this_01, (Vector3T*)local_40);
        pVVar3 = (Vector3T*)jag::math::Matrix33T<float>::operator[]((Matrix33T<float>*)this_00, 0);
        local_40[0] = jag::math::Vector3Cross<float>((Vector3T*)pVVar1, pVVar3);
        pVVar1 = (Vector4T<float>*)jag::math::Matrix33T<float>::operator[]((Matrix33T<float>*)this_00, 1);
        jag::math::Vector4T<float>::SetXYZ(pVVar1, (Vector3T*)local_40);
    LAB_100313538:
        (&field_72, (Vector3T*)PTR_ZERO_100ee66e8)->SetXYZ();
        local_40[0] = jag::math::operator*(this_00, (Vector3T*)&local_60);
        (&field_84, (Vector3T*)local_40)->SetXYZ();
        local_40[0] = jag::math::operator*(this_00, (Vector3T*)&local_50);
        (&field_96, (Vector3T*)local_40)->SetXYZ();
        field_108 = field_92;
        if (field_92 < field_104) {
            field_108 = field_104;
        }
    }

    // 0x100313660, 32 bytes, placed by debug map only (low confidence)
    // FaceCollider::Vector2Cross(jag::math::Vector2T<float> const&, jag::math::Vector2T<float> const&)
    float FaceCollider::Vector2Cross(Vector2T* param_1, Vector2T* param_2) {
        return *(float*)(param_2 + 4) * *(float*)param_1 - *(float*)(param_1 + 4) * *(float*)param_2;
    }

    // 0x100313680, 512 bytes, placed by debug map only (low confidence)
    // FaceCollider::SideTest(float, float, float, float, float, float, jag::math::Vector3T<float> const (&) [3])
    bool FaceCollider::SideTest(float param_1, float param_2, float param_3, float param_4, float param_5,
                                float param_6, Vector3T<float>* param_7) {
        float* pfVar1;
        long lVar2;
        bool bVar3;
        float fVar4;
        Point<float> local_70[8];
        Point<float> local_68[8];
        float local_60[2];
        undefined1 local_58[16];
        float local_40[3];
        float local_2c;

        local_2c = param_5;
        local_58._0_4_ = param_6;
        jag::math::Point<float>::Point(local_68, param_3 - param_1, param_4 - param_2);
        jag::math::Point<float>::Point(local_70, local_2c - param_1, (float)local_58._0_4_ - param_2);
        local_58._0_4_ = Vector2Cross((Vector2T*)local_68, (Vector2T*)local_70);
        new (local_40) jag::math::Point<float>(*(float*)(param_7 + 12) - *(float*)param_7,
                                               *(float*)(param_7 + 16) - *(float*)(param_7 + 4));
        new (local_60) jag::math::Point<float>(*(float*)(param_7 + 24) - *(float*)param_7,
                                               *(float*)(param_7 + 28) - *(float*)(param_7 + 4));
        local_2c = (float)Vector2Cross((Vector2T*)local_40, (Vector2T*)local_60);
        local_40[0] = (float)fabs((float)local_58._0_4_);
        local_60[0] = (float)fabs(local_2c);
        pfVar1 = std::min<float>(local_40, local_60);
        bVar3 = true;
        if ((float)local_58._0_4_ != 0.0) {
            if (0.0 <= (float)local_58._0_4_) {
                local_58 = ZEXT416((uint)(*pfVar1 * 0.05));
                lVar2 = 4;
                do {
                    new (local_40) jag::math::Point<float>(*(float*)(param_7 + lVar2 + -4) - param_1,
                                                           *(float*)(param_7 + lVar2) - param_2);
                    fVar4 = (float)Vector2Cross((Vector2T*)local_68, (Vector2T*)local_40);
                    if ((float)local_58._0_4_ < fVar4)
                        break;
                    bVar3 = lVar2 != 28;
                    lVar2 = lVar2 + 12;
                } while (bVar3);
                bVar3 = fVar4 <= (float)local_58._0_4_;
            } else {
                local_58._4_4_ = 2147483648;
                local_58._0_4_ = -(*pfVar1 * 0.05);
                local_58._8_4_ = 2147483648;
                local_58._12_4_ = 2147483648;
                lVar2 = 4;
                do {
                    new (local_40) jag::math::Point<float>(*(float*)(param_7 + lVar2 + -4) - param_1,
                                                           *(float*)(param_7 + lVar2) - param_2);
                    fVar4 = (float)Vector2Cross((Vector2T*)local_68, (Vector2T*)local_40);
                    if (fVar4 < (float)local_58._0_4_)
                        break;
                    bVar3 = lVar2 != 28;
                    lVar2 = lVar2 + 12;
                } while (bVar3);
                bVar3 = (float)local_58._0_4_ <= fVar4;
            }
        }
        return bVar3;
    }

    // 0x100313880, 160 bytes, placed by debug map only (low confidence)
    // FaceCollider::Do2dTriangle1DivideTriangles(jag::math::Vector3T<float> const (&) [3], jag::math::Vector3T<float> const (&) [3])
    ulong FaceCollider::Do2dTriangle1DivideTriangles(Vector3T<float>* param_1, Vector3T<float>* param_2) {
        char cVar1;
        uint uVar2;
        undefined8 unaff_R15;
        ulong uVar3;

        cVar1 = SideTest(*(float*)param_1, *(float*)(param_1 + 4), *(float*)(param_1 + 12), *(float*)(param_1 + 16),
                         *(float*)(param_1 + 24), *(float*)(param_1 + 28), param_2);
        uVar3 = CONCAT71((int7)((ulong)unaff_R15 >> 8), 1);
        if (cVar1 == '\0') {
            cVar1 = SideTest(*(float*)param_1, *(float*)(param_1 + 4), *(float*)(param_1 + 24), *(float*)(param_1 + 28),
                             *(float*)(param_1 + 12), *(float*)(param_1 + 16), param_2);
            if (cVar1 == '\0') {
                uVar2 = SideTest(*(float*)(param_1 + 12), *(float*)(param_1 + 16), *(float*)(param_1 + 24),
                                 *(float*)(param_1 + 28), *(float*)param_1, *(float*)(param_1 + 4), param_2);
                uVar3 = (ulong)uVar2;
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x100313920, 48 bytes, placed by debug map only (low confidence)
    // FaceCollider::Do2dTrianglesOverlap(jag::math::Vector3T<float> const (&) [3], jag::math::Vector3T<float> const (&) [3])
    ulong FaceCollider::Do2dTrianglesOverlap(Vector3T<float>* param_1, Vector3T<float>* param_2) {
        ulong uVar2;

        if (Do2dTriangle1DivideTriangles(param_1, param_2) == '\0') {
            uVar2 = Do2dTriangle1DivideTriangles(param_2, param_1);
            uVar2 = uVar2 ^ 1;
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x100313950, 1504 bytes, placed by debug map only (low confidence)
    // FaceCollider::TestFacePair(FaceCollider::FaceWithIntermediates const&, FaceCollider::Face const&, float&, bool)
    ulong FaceCollider::TestFacePair(FaceWithIntermediates* param_1, Face* param_2, float* param_3, bool param_4) {
        float fVar1;
        Matrix33T* pMVar2;
        char cVar3;
        uint uVar4;
        Vector3T* pVVar5;
        Face* pFVar6;
        long lVar7;
        longlong lVar8;
        undefined7 in_register_00000009;
        ulong uVar9;
        long lVar10;
        ulong uVar11;
        ulong uVar12;
        ulong uVar13;
        float fVar14;
        int in_XMM1_Da;
        float fVar15;
        FaceWithIntermediates local_178;
        undefined8 local_100[2];
        undefined1 local_f0[12];
        Matrix33T* local_e0;
        float* local_d8;
        float local_d0;
        float local_cc;
        float local_c8;
        float local_c0;
        float local_bc;
        float local_b8;
        int local_a8;
        int local_a4;
        int local_a0;
        int local_98;
        int local_94;
        int local_90;
        undefined4 local_8c;
        float local_88;
        float local_84;
        float local_80;
        undefined1 local_78[12];
        Vector4T<float> local_6c[8];
        float local_64;
        Vector4T<float> local_60[8];
        float local_58;
        int local_54[7];
        long local_38;

        local_8c = (undefined4)CONCAT71(in_register_00000009, param_4);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_d0) jag::math::Vector3T<int>();
        local_d0 = (float)(*(int*)(param_2 + 12) - *(int*)param_2);
        local_cc = (float)(*(int*)(param_2 + 16) - *(int*)(param_2 + 4));
        local_c8 = (float)(*(int*)(param_2 + 20) - *(int*)(param_2 + 8));
        new (&local_c0) jag::math::Vector3T<int>();
        local_c0 = (float)(*(int*)(param_2 + 24) - *(int*)param_2);
        local_bc = (float)(*(int*)(param_2 + 28) - *(int*)(param_2 + 4));
        local_b8 = (float)(*(int*)(param_2 + 32) - *(int*)(param_2 + 8));
        local_100[0] = jag::math::Vector3Cross<float>((Vector3T*)&local_d0, (Vector3T*)&local_c0);
        local_100->Normalize();
        local_e0 = &param_1->field_36;
        pVVar5 = (Vector3T*)jag::math::Matrix33T<float>::operator[]((Matrix33T<float>*)local_e0, 2);
        cVar3 = local_100->SloppyCompare(pVVar5, 0.1);
        uVar12 = 0;
        if (cVar3 == '\0')
            goto LAB_100313f00;
        local_54[5] = 4294967295;
        local_54[3] = -1;
        local_54[4] = -1;
        uVar9 = 0;
        uVar13 = 0;
        do {
            lVar7 = 0;
            pFVar6 = param_2 + 8;
            do {
                if ((((&param_1->field_0)[uVar9 * 3] == *(int*)(pFVar6 + -8)) &&
                     ((&param_1->field_4)[uVar9 * 3] == *(int*)(pFVar6 + -4))) &&
                    ((&param_1->field_4 + uVar9 * 3)[1] == *(int*)pFVar6)) {
                    local_54[lVar7 + 3] = (int)uVar9;
                    local_54[(int)uVar12] = (int)uVar9;
                    uVar12 = (ulong)((int)uVar12 + 1);
                    goto LAB_100313aa3;
                }
                lVar7 = lVar7 + 1;
                pFVar6 = pFVar6 + 12;
            } while (lVar7 != 3);
            uVar13 = uVar9 & 4294967295;
        LAB_100313aa3:
            uVar9 = uVar9 + 1;
        } while (uVar9 != 3);
        if ((int)uVar12 == 2) {
            uVar9 = 0;
            uVar11 = 0;
            do {
                if (local_54[uVar9 + 3] == -1) {
                    uVar11 = uVar9 & 4294967295;
                }
                uVar9 = uVar9 + 1;
            } while (uVar9 != 3);
            local_d8 = param_3;
            new (&local_88) jag::math::Vector3T<int>();
            lVar7 = (long)local_54[1];
            lVar10 = (long)local_54[0];
            local_88 = (float)((&param_1->field_0)[lVar7 * 3] - (&param_1->field_0)[lVar10 * 3]);
            local_84 = (float)((&param_1->field_4)[lVar7 * 3] - (&param_1->field_4)[lVar10 * 3]);
            local_80 = (float)((&param_1->field_8)[lVar7 * 3] - (&param_1->field_8)[lVar10 * 3]);
            new (&local_a8) jag::math::Vector3T<int>();
            lVar7 = (long)(int)uVar13;
            local_a8 = (&param_1->field_0)[lVar7 * 3] - (&param_1->field_0)[lVar10 * 3];
            local_a4 = (&param_1->field_4)[lVar7 * 3] - (&param_1->field_4)[lVar10 * 3];
            local_a0 = (&param_1->field_8)[lVar7 * 3] - (&param_1->field_8)[lVar10 * 3];
            new (&local_98) jag::math::Vector3T<int>();
            lVar7 = (long)(int)uVar11;
            local_98 = *(int*)(param_2 + lVar7 * 12) - (&param_1->field_0)[lVar10 * 3];
            local_94 = *(int*)(param_2 + lVar7 * 12 + 4) - (&param_1->field_4)[lVar10 * 3];
            local_90 = *(int*)(param_2 + lVar7 * 12 + 8) - (&param_1->field_8)[lVar10 * 3];
            local_78 = jag::math::Vector3Cross<int>((Vector3T*)&local_88, (Vector3T*)&local_a8);
            jag::math::Vector3T<long long>::Vector3T<int>((Vector3T<long long>*)&local_178, (Vector3T*)local_78);
            local_f0 = jag::math::Vector3Cross<int>((Vector3T*)&local_88, (Vector3T*)&local_98);
            jag::math::Vector3T<long long>::Vector3T<int>((Vector3T<long long>*)local_78, (Vector3T*)local_f0);
            lVar8 = jag::math::Vector3Dot<long long>((Vector3T*)&local_178, (Vector3T*)local_78);
            param_3 = local_d8;
            if (lVar8 < 1) {
                uVar12 = 0;
                goto LAB_100313f00;
            }
        }
        *param_3 = 0.0;
        if ((int)uVar12 < 2) {
            lVar7 = 0;
            do {
                new ((local_6c + lVar7 + -12)) jag::math::Vector3T<int>();
                lVar7 = lVar7 + 12;
            } while (lVar7 != 36);
            new (&local_88) jag::math::Vector3T<int>();
            pFVar6 = param_2;
            pMVar2 = local_e0;
            local_88 = (float)(*(int*)param_2 - param_1->field_0);
            local_84 = (float)(*(int*)(param_2 + 4) - param_1->field_4);
            local_80 = (float)(*(int*)(param_2 + 8) - param_1->field_8);
            local_178._0_8_ = jag::math::operator*(local_e0, (Vector3T*)&local_88);
            local_78->SetXYZ((Vector3T*)&local_178);
            local_88 = (float)(*(int*)(pFVar6 + 12) - param_1->field_0);
            local_84 = (float)(*(int*)(pFVar6 + 16) - param_1->field_4);
            local_80 = (float)(*(int*)(pFVar6 + 20) - param_1->field_8);
            local_178._0_8_ = jag::math::operator*(pMVar2, (Vector3T*)&local_88);
            jag::math::Vector4T<float>::SetXYZ(local_6c, (Vector3T*)&local_178);
            local_88 = (float)(*(int*)(pFVar6 + 24) - param_1->field_0);
            local_84 = (float)(*(int*)(pFVar6 + 28) - param_1->field_4);
            local_80 = (float)(*(int*)(pFVar6 + 32) - param_1->field_8);
            local_178._0_8_ = jag::math::operator*(pMVar2, (Vector3T*)&local_88);
            local_178.field_8 = in_XMM1_Da;
            jag::math::Vector4T<float>::SetXYZ(local_60, (Vector3T*)&local_178);
            lVar7 = 20;
            fVar14 = (float)local_78._8_4_;
            fVar15 = (float)local_78._8_4_;
            do {
                fVar1 = *(float*)(local_6c + lVar7 + -12);
                if (fVar14 <= fVar1) {
                    fVar14 = fVar1;
                }
                if (fVar1 <= fVar15) {
                    fVar15 = fVar1;
                }
                lVar7 = lVar7 + 12;
            } while (lVar7 != 44);
            if ((fVar14 <= 0.0 == 0.0 < fVar15) && ((char)local_8c == '\0')) {
                new (&local_178) FaceWithIntermediates();
                local_178.field_32 = *(int*)(pFVar6 + 32);
                local_178._0_8_ = *(undefined8*)pFVar6;
                local_178._8_8_ = *(undefined8*)(pFVar6 + 8);
                local_178._16_8_ = *(undefined8*)(pFVar6 + 16);
                local_178._24_8_ = *(undefined8*)(pFVar6 + 24);
                local_178.ComputeIntermdiates();
                uVar4 = TestFacePair(&local_178, (Face*)param_1, param_3, true);
                uVar12 = (ulong)uVar4;
                *param_3 = -*param_3;
                goto LAB_100313f00;
            }
            fVar14 = ((float)local_78._8_4_ + local_64 + local_58) * 0.33333334;
            *param_3 = fVar14;
            fVar14 = (float)fabs(fVar14);
            if (fVar14 <= 10.0) {
                cVar3 = Do2dTrianglesOverlap((Vector3T<float>*)&param_1->field_72, (Vector3T<float>*)local_78);
            } else {
                cVar3 = '\0';
            }
            uVar12 = 0;
            if (cVar3 == '\0')
                goto LAB_100313f00;
        }
        uVar12 = CONCAT71((int7)(uVar12 >> 8), 1);
    LAB_100313f00:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar12;
    }

    // 0x100313f70, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // FaceCollider::FaceWithIntermediates::FaceWithIntermediates(): jumps straight to the base-object constructor

    // 0x100313f80, 352 bytes, placed by debug map only (low confidence)
    // FaceCollider::TestAllFacePairs(FaceCollider::ModelPointers const&, FaceCollider::ModelPointers const&, std::function<bool (int, int, float)>)
    /* FaceCollider::TestAllFacePairs(FaceCollider::ModelPointers
   const&, FaceCollider::ModelPointers const&, std::function<bool (int, int,
   float)>) */

    bool FaceCollider::TestAllFacePairs(ModelPointers* param_1, ModelPointers* param_2,
                                        function<bool(int, int, float)>* param_3) {
        char cVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        bool bVar5;
        undefined1 local_f0[152];
        function<bool(int, int, float)>* local_58;
        long local_50;
        long local_48;
        float local_3c;
        ModelPointers* local_38;

        if (0 < param_1->field_56) {
            local_50 = param_1->field_0;
            local_48 = param_2->field_0;
            iVar3 = 0;
            local_58 = param_3;
            local_38 = param_1;
            do {
                cVar1 = param_1->IsFaceEnabled(iVar3);
                if (cVar1 != '\0') {
                    new (local_f0) FaceWithIntermediates();
                    param_1->GetFace(local_f0, iVar3);
                    local_f0->ComputeIntermdiates();
                    iVar4 = iVar3 + 1;
                    iVar2 = 0;
                    if (local_50 != local_48) {
                        iVar4 = 0;
                    }
                    bVar5 = iVar4 < param_2->field_56;
                    if (iVar4 < param_2->field_56) {
                        do {
                            cVar1 = param_2->IsFaceEnabled(iVar4);
                            if (cVar1 != '\0') {
                                param_2->GetFace((Face*)(local_f0 + 112), iVar4);
                                cVar1 = TestFacePair((FaceWithIntermediates*)local_f0, (Face*)(local_f0 + 112),
                                                     &local_3c, false);
                                if ((cVar1 != '\0') && (cVar1 = std::function<bool(int, int, float)>::operator()(
                                                            local_58, iVar3, iVar4, local_3c),
                                                        cVar1 != '\0')) {
                                    iVar2 = 1;
                                    goto LAB_100313fd6;
                                }
                            }
                            iVar4 = iVar4 + 1;
                            bVar5 = iVar4 < param_2->field_56;
                        } while (iVar4 < param_2->field_56);
                        iVar2 = 0;
                    }
                LAB_100313fd6:
                    param_1 = local_38;
                    if (bVar5)
                        goto LAB_1003140c3;
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 < param_1->field_56);
        }
        iVar2 = 2;
    LAB_1003140c3:
        return iVar2 != 2;
    }

    // 0x1003140e0, 32 bytes, inline, placed by class header (inline)
    // FaceCollider::ModelPointers::IsFaceEnabled(int) const
    undefined8 FaceCollider::ModelPointers::IsFaceEnabled(int param_1) {
        long lVar1;

        lVar1 = field_48;
        if (lVar1 == 0) {
            return 1;
        }
        return CONCAT71((int7)((ulong)lVar1 >> 8), *(char*)(lVar1 + param_1) != '\x02');
    }

    // 0x100314100, 272 bytes, inline, placed by class header (inline)
    // FaceCollider::ModelPointers::GetFace(FaceCollider::Face&, int) const
    void FaceCollider::ModelPointers::GetFace(Face* param_1, int param_2) {
        int iVar1;
        long lVar2;

        iVar1 = *(int*)(field_0 + (long)param_2 * 4);
        lVar2 = (long)iVar1;
        if (field_60 <= iVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("p1 < m_numPoints",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ZFightDetection.cpp",
                      125, (char*)0);
        }
        *(undefined4*)param_1 = *(undefined4*)(field_24 + lVar2 * 4);
        *(undefined4*)(param_1 + 4) = *(undefined4*)(field_32 + lVar2 * 4);
        *(undefined4*)(param_1 + 8) = *(undefined4*)(field_40 + lVar2 * 4);
        iVar1 = *(int*)(field_8 + (long)param_2 * 4);
        lVar2 = (long)iVar1;
        if (field_60 <= iVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("p2 < m_numPoints",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ZFightDetection.cpp",
                      130, (char*)0);
        }
        *(undefined4*)(param_1 + 12) = *(undefined4*)(field_24 + lVar2 * 4);
        *(undefined4*)(param_1 + 16) = *(undefined4*)(field_32 + lVar2 * 4);
        *(undefined4*)(param_1 + 20) = *(undefined4*)(field_40 + lVar2 * 4);
        iVar1 = *(int*)(field_16 + (long)param_2 * 4);
        lVar2 = (long)iVar1;
        if (field_60 <= iVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("p3 < m_numPoints",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ZFightDetection.cpp",
                      135, (char*)0);
        }
        *(undefined4*)(param_1 + 24) = *(undefined4*)(field_24 + lVar2 * 4);
        *(undefined4*)(param_1 + 28) = *(undefined4*)(field_32 + lVar2 * 4);
        *(undefined4*)(param_1 + 32) = *(undefined4*)(field_40 + lVar2 * 4);
    }

    // 0x100314240, 160 bytes, placed by debug map only (low confidence)
    // FaceCollider::TestAllFacePairs(ModelUnlitImpl const&, std::function<bool (int, int, float)>)
    /* FaceCollider::TestAllFacePairs(ModelUnlitImpl
   const&, std::function<bool (int, int, float)>) */

    undefined4 FaceCollider::TestAllFacePairs(ModelUnlitImpl* param_1, function* param_2) {
        undefined4 uVar1;
        ModelPointers local_a0;
        function<bool(int, int, float)> local_58[48];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_a0) ModelPointers(param_1);
        std::function<bool(int, int, float)>::function(local_58, param_2);
        uVar1 = TestAllFacePairs(&local_a0, &local_a0, local_58);
        std::function<bool(int, int, float)>::~function(local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar1;
    }

    // 0x1003142e0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // FaceCollider::ModelPointers::ModelPointers(ModelUnlitImpl const&): jumps straight to the base-object constructor

    // 0x100314310, 176 bytes, placed by debug map only (low confidence)
    // FaceCollider::TestAllFacePairs(ModelUnlitImpl const&, ModelUnlitImpl const&, std::function<bool (int, int, float)>)
    /* FaceCollider::TestAllFacePairs(ModelUnlitImpl
   const&, ModelUnlitImpl const&, std::function<bool (int, int, float)>) */

    undefined4 FaceCollider::TestAllFacePairs(ModelUnlitImpl* param_1, ModelUnlitImpl* param_2, function* param_3) {
        undefined4 uVar1;
        ModelPointers local_f8;
        ModelPointers local_b0;
        function<bool(int, int, float)> local_68[56];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_f8) ModelPointers(param_1);
        new (&local_b0) ModelPointers(param_2);
        std::function<bool(int, int, float)>::function(local_68, param_3);
        uVar1 = TestAllFacePairs(&local_f8, &local_b0, local_68);
        std::function<bool(int, int, float)>::~function(local_68);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar1;
    }

    // 0x1003143c0, 64 bytes, base-object constructor, placed by debug map only (low confidence)
    // DepthBiasComputer::DepthBiasComputer(ModelUnlitImpl&)
    void DepthBiasComputer::DepthBiasComputer(ModelUnlitImpl* param_1) {
        field_0 = param_1;
        new (&field_8) eastl::vector<DepthBiasComputer::Node, eastl::allocator>();
        (&field_8, (long)param_1->field_96)->resize();
    }

    // 0x100314480, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // DepthBiasComputer::DepthBiasComputer(ModelUnlitImpl&): jumps straight to the base-object constructor

    // 0x100314490, 16 bytes, base-object destructor, placed by debug map only (low confidence)
    // DepthBiasComputer::~DepthBiasComputer()
    void DepthBiasComputer::~DepthBiasComputer() {
        (&field_8)->~vector();
    }

    // 0x1003144a0, 16 bytes, complete-object destructor, placed by debug map only (low confidence)
    // DepthBiasComputer::~DepthBiasComputer(): jumps straight to the base-object destructor

    // 0x1003144b0, 128 bytes, placed by debug map only (low confidence)
    // DepthBiasComputer::ResolveAll()
    int DepthBiasComputer::ResolveAll() {
        undefined1* this_00;
        int iVar1;
        Node* pNVar2;
        ulong uVar3;
        int iVar4;

        this_00 = &field_8;
        iVar1 = this_00->size();
        iVar4 = 0;
        if (0 < iVar1) {
            uVar3 = 0;
            do {
                pNVar2 = (Node*)eastl::vector<DepthBiasComputer::Node, eastl::allocator>::operator[](
                    (vector<DepthBiasComputer::Node, eastl::allocator>*)this_00, uVar3);
                ResolveNode(this, pNVar2);
                iVar4 = iVar4 + *(int*)&pNVar2->field_32;
                uVar3 = uVar3 + 1;
                iVar1 = this_00->size();
            } while ((long)uVar3 < (long)iVar1);
            iVar4 = CONCAT31((int3)((uint)iVar4 >> 8), 0 < iVar4);
        }
        return iVar4;
    }

    // 0x100314580, 192 bytes, placed by debug map only (low confidence)
    // DepthBiasComputer::ResolveNode(DepthBiasComputer::Node&)
    void DepthBiasComputer::ResolveNode(Node* param_1) {
        Node* pNVar1;
        char cVar2;
        undefined8* puVar3;
        undefined8* puVar4;
        int iVar5;
        int iVar6;

        if (*(int*)((long)&param_1->field_32 + 4) == 0) {
            cVar2 = param_1->empty();
            if ((cVar2 == '\0') && (*(int*)&param_1->field_32 == 0)) {
                *(undefined4*)((long)&param_1->field_32 + 4) = 1;
                puVar3 = (undefined8*)param_1->HeapBeginPtr();
                puVar4 = (undefined8*)param_1->end();
                if (puVar3 == puVar4) {
                    iVar6 = 0;
                } else {
                    iVar6 = 0;
                    do {
                        pNVar1 = (Node*)*puVar3;
                        ResolveNode(this, pNVar1);
                        iVar5 = *(int*)(puVar3 + 1) + *(int*)&pNVar1->field_32;
                        if (iVar5 <= iVar6) {
                            iVar5 = iVar6;
                        }
                        iVar6 = iVar5;
                        puVar3 = puVar3 + 2;
                    } while (puVar3 != puVar4);
                }
                *(int*)&param_1->field_32 = iVar6;
            }
            *(undefined4*)((long)&param_1->field_32 + 4) = 2;
        }
    }

    // 0x100314640, 672 bytes, placed by debug map only (low confidence)
    // DepthBiasComputer::Run()
    void DepthBiasComputer::Run() {
        int iVar1;
        uint uVar2;
        ModelUnlitImpl* pMVar3;
        ulong uVar4;
        int iVar5;
        DepthBiasComputer* pDVar6;
        bool bVar7;
        char cVar8;
        vector<EntityHighlight*, BucketAllocatorEASTL>* this_00;
        long lVar9;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_01;
        undefined8 uVar10;
        undefined1* puVar11;
        undefined1 uVar12;
        int iVar13;
        ulong uVar14;
        SharedArray<signed char> local_90[24];
        DepthBiasComputer* local_78;
        vector<DepthBiasComputer::Node, eastl::allocator>* local_70;
        function<bool(int, int, float)> local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        bVar7 = operator!=((shared_ptr*)&field_0->field_192, (_func_decltype_nullptr*)0);
        if (bVar7) {
            this_00 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)
                shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                    (shared_ptr<Array<signed char, eastl::allocator>>*)&field_0->field_192);
            lVar9 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
            if (lVar9 != 0) {
                this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                 std::default_delete<LoadingScreenScript::AnimLayer>>,
                                 eastl::allocator>*)
                    shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                        (shared_ptr<Array<signed char, eastl::allocator>>*)&field_0->field_192);
                uVar10 = this_01->data();
                pMVar3 = field_0;
                std::function<bool(int, int, float)>::function<DepthBiasComputer::Run()::__5, void>(local_68, this,
                                                                                                    uVar10);
                FaceCollider::TestAllFacePairs(pMVar3, local_68);
                std::function<bool(int, int, float)>::~function(local_68);
                SharedArray<signed char>::SharedArray(local_90, (long)field_0->field_96);
                SharedArray<signed char>::operator=((SharedArray<signed char>*)&field_0->field_288,
                                                    (SharedArray*)local_90);
                local_90->~SharedArray();
                cVar8 = ResolveAll(this);
                if (cVar8 == '\0') {
                    uVar10 = (&field_0->field_288)->data();
                    ___bzero(uVar10, (long)field_0->field_96);
                } else if (0 < field_0->field_96) {
                    local_70 = (vector<DepthBiasComputer::Node, eastl::allocator>*)&field_8;
                    uVar14 = 0;
                    iVar13 = 0;
                    bVar7 = false;
                    local_78 = this;
                    do {
                        pDVar6 = local_78;
                        lVar9 = eastl::vector<DepthBiasComputer::Node, eastl::allocator>::operator[](local_70, uVar14);
                        iVar1 = *(int*)(lVar9 + 32);
                        iVar5 = iVar13;
                        if (iVar13 < iVar1) {
                            iVar5 = iVar1;
                        }
                        if (12 < iVar1) {
                            iVar13 = iVar5;
                            bVar7 = true;
                        }
                        uVar12 = (undefined1)iVar1;
                        if (11 < iVar1) {
                            uVar12 = 12;
                        }
                        uVar4 = *(ulong*)&pDVar6->field_0->field_288;
                        if (uVar4 <= uVar14) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("(index < m_Size)",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                      "SharedArray.h",
                                      299, "Index of %d outside range 0 to %d", uVar14, uVar4 - 1);
                        }
                        puVar11 = (undefined1*)shared_ptr<signed char[]>::operator[](
                            (shared_ptr<signed char[]>*)&pDVar6->field_0->field_296, uVar14);
                        *puVar11 = uVar12;
                        uVar14 = uVar14 + 1;
                    } while ((long)uVar14 < (long)local_78->field_0->field_96);
                    if (bVar7) {
                        uVar2 = local_78->field_0->field_12;
                        uVar10 = logger::default_logger();
                        logger::Logger::Log(
                            uVar10, 0, 3,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "dash3d/ZFightDetection.cpp",
                            609,
                            "Model %d.%d required a maximum bias of %d, which exceeds the maximum allowed bias of %d",
                            uVar2 >> 16, uVar2 & 65535, iVar13, 12);
                    }
                }
                if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                    /* WARNING: Subroutine does not return */
                    ___stack_chk_fail();
                }
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("m_model.m_fSeq != nullptr && (*m_model.m_fSeq).size() > 0",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                  "ZFightDetection.cpp",
                  506, (char*)0);
    }

} // namespace jag::oldscape::dash3d

namespace jag::math {
    // 0x1003135d0, 144 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float> operator*<float>(Matrix33T<float> const&, Vector3T<float> const&)
    /* Vector3T<float> TEMPNAMEPLACEHOLDERVALUE(Matrix33T<float>
   const&, Vector3T<float> const&) */

    undefined8 operator*(Matrix33T* param_1, Vector3T* param_2) {
        Vector3T* pVVar1;
        float fVar2;
        undefined8 uVar3;
        ColourHSL local_30;
        float local_20;
        float local_1c;

        pVVar1 = (Vector3T*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 0);
        local_20 = Vector3Dot<float>(pVVar1, param_2);
        pVVar1 = (Vector3T*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 1);
        local_1c = Vector3Dot<float>(pVVar1, param_2);
        pVVar1 = (Vector3T*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 2);
        fVar2 = Vector3Dot<float>(pVVar1, param_2);
        new (&local_30) ColourHSL(local_20, local_1c, fVar2);
        uVar3._0_4_ = local_30.field_0;
        uVar3._4_4_ = local_30.field_4;
        return uVar3;
    }

    // 0x100313f40, 48 bytes, inline, placed by debug map only (low confidence)
    // long long Vector3Dot<long long>(Vector3T<long long> const&, Vector3T<long long> const&)
    longlong Vector3Dot<long long>(Vector3T* param_1, Vector3T* param_2) {
        return *(long*)(param_2 + 16) * *(long*)(param_1 + 16) + *(long*)(param_2 + 8) * *(long*)(param_1 + 8) +
               *(long*)param_2 * *(long*)param_1;
    }

} // namespace jag::math

// 0x1003135c0, 16 bytes, placed by debug map only (low confidence)
// fabs(float)
ulong fabs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}
