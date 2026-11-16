// libs/oldscape/jagex3/dash3d/ZFightDetection.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

namespace jag::oldscape::dash3d {
    class DepthBiasComputer {
    public:
        class Node;
        DepthBiasComputer(ModelUnlitImpl& modelUnlitImpl);
        ~DepthBiasComputer();
        int ResolveAll();
        void ResolveNode(Node& node);
        void Run();

    private:
        ModelUnlitImpl* field_0;
        uint8_t _unknown_8[8];
    };

    class DepthBiasComputer::Node {
    public:
        ~Node();
        Node(Node&& node);
        Node();

    private:
        uint8_t _unknown_0[32];
        uint64_t field_32;
        uint32_t field_40;
        uint8_t _unknown_44[4];
    };

    class FaceCollider {
    public:
        class FaceWithIntermediates;
        class ModelPointers;
        float Vector2Cross(const jag::math::Vector2T<float>& vector21, const jag::math::Vector2T<float>& vector22);
        bool SideTest(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6,
                      jag::math::Vector3T<float> const (&arg7)[3]);
        unsigned long Do2dTriangle1DivideTriangles(jag::math::Vector3T<float> const (&arg1)[3],
                                                   jag::math::Vector3T<float> const (&arg2)[3]);
        unsigned long Do2dTrianglesOverlap(jag::math::Vector3T<float> const (&arg1)[3],
                                           jag::math::Vector3T<float> const (&arg2)[3]);
        unsigned long TestFacePair(const FaceWithIntermediates& faceWithIntermediates, const Face& face, float& arg3,
                                   bool arg4);
        bool TestAllFacePairs(const ModelPointers& modelPointers1, const ModelPointers& modelPointers2,
                              std::function<bool(int, int, float)> callback);
        void TestAllFacePairs(const ModelUnlitImpl& modelUnlitImpl, std::function<bool(int, int, float)> callback);
        void TestAllFacePairs(const ModelUnlitImpl& modelUnlitImpl1, const ModelUnlitImpl& modelUnlitImpl2,
                              std::function<bool(int, int, float)> callback);
    };

    class FaceCollider::FaceWithIntermediates {
    public:
        void ComputeIntermdiates();
        FaceWithIntermediates();

    private:
        int field_0;
        int field_4;
        int field_8;
        int field_12;
        int field_16;
        int field_20;
        int field_24;
        int field_28;
        int field_32;
        uint8_t _unknown_36[56];
        float field_92;
        uint8_t _unknown_96[8];
        float field_104;
        float field_108;
        uint8_t _unknown_112[4];
    };

    class FaceCollider::ModelPointers {
    public:
        bool IsFaceEnabled(int arg1) const;
        void GetFace(Face& face, int arg2) const;
        ModelPointers(const ModelUnlitImpl& modelUnlitImpl);

    private:
        uint64_t field_0;
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint64_t field_40;
        long field_48;
        int field_56;
        int field_60;
        uint32_t field_64;
        uint8_t _unknown_68[4];
    };

    // 0x100313380
    void FaceCollider::FaceWithIntermediates::ComputeIntermdiates() {
        void result;
        ReturnValue result;
        long lVar1;
        float local_60;
        float local_50;
        float local_44;
        uint64_t local_40[2];

        new (&local_60) jag::math::Vector3T();
        local_60 = (float)(field_12 - field_0);
        float local_5c = (float)(field_16 - field_4);
        float local_58 = (float)(field_20 - field_8);
        new (&local_50) jag::math::Vector3T();
        local_50 = (float)(field_24 - field_0);
        float local_4c = (float)(field_28 - field_4);
        float local_48 = (float)(field_32 - field_8);
        uint8_t* this_00 = &field_36;
        &result = (ReturnValue*)(*this_00)[2];
        local_40[0] = jag::math::Vector3Cross<float>(local_60, local_50);
        result.SetXYZ(*local_40);
        float fVar3 = (float)fabs(result);
        if (fVar3 < 1e-05) {
            fVar3 = (float)fabs(*(float*)&result.field_4);
            if (fVar3 < 1e-05) {
                local_44 = *(float*)(&result + 1);
                *this_00 = *PTR_IDENTITY_100ee6718;
                if (local_44 < 0.0) {
                    lVar1 = (*this_00)[1];
                    *(uint32_t*)(lVar1 + 4) = 3212836864;
                    lVar1 = (*this_00)[2];
                    *(uint32_t*)(lVar1 + 8) = 3212836864;
                }
                goto LAB_100313538;
            }
        }
        result = jag::math::Vector3T<float>::Normalize();
        local_40[0] = jag::math::Vector3Cross<float>(result, *PTR_LOOK_100ee66e0);
        Vector4T<float>* pVVar2 = (Vector4T<float>*)(*this_00)[0];
        pVVar2->SetXYZ(*local_40);
        Vector3T<float>* vector32 = (Vector3T<float>*)(*this_00)[0];
        local_40[0] = jag::math::Vector3Cross<float>(result, *vector32);
        pVVar2 = (Vector4T<float>*)(*this_00)[1];
        pVVar2->SetXYZ(*local_40);
    LAB_100313538:
        field_72.SetXYZ(*PTR_ZERO_100ee66e8);
        local_40[0] = *this_00 * local_60;
        field_84.SetXYZ(*local_40);
        local_40[0] = *this_00 * local_50;
        field_96.SetXYZ(*local_40);
        field_108 = field_92;
        if (field_92 < field_104) {
            field_108 = field_104;
        }
    }

    // 0x100313660
    float FaceCollider::Vector2Cross(const jag::math::Vector2T<float>& vector21,
                                     const jag::math::Vector2T<float>& vector22) {
        return *(float*)(vector22 + 4) * *(float*)vector21 - *(float*)(vector21 + 4) * *(float*)vector22;
    }

    // 0x100313680
    bool FaceCollider::SideTest(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6,
                                jag::math::Vector3T<float> const (&arg7)[3]) {
        long lVar2;
        float fVar4;
        float local_60[2];
        uint8_t local_58[16];
        float local_40[3];

        float local_2c = arg5;
        local_58._0_4_ = arg6;
        Point<float> local_68(arg3 - arg1, arg4 - arg2);
        Point<float> local_70(local_2c - arg1, (float)local_58._0_4_ - arg2);
        local_58._0_4_ = Vector2Cross(&local_68, &local_70);
        new (local_40) jag::math::Point(*(float*)((long)arg7 + 12) - *(float*)arg7,
                                        *(float*)((long)arg7 + 16) - *(float*)((long)arg7 + 4));
        new (local_60) jag::math::Point(*(float*)((long)arg7 + 24) - *(float*)arg7,
                                        *(float*)((long)arg7 + 28) - *(float*)((long)arg7 + 4));
        local_2c = (float)Vector2Cross((Vector2T<float>*)local_40, (Vector2T<float>*)local_60);
        local_40[0] = (float)fabs((float)local_58._0_4_);
        local_60[0] = (float)fabs(local_2c);
        auto pfVar1 = std::min<float>(*local_40, *local_60);
        bool bVar3 = true;
        if ((float)local_58._0_4_ != 0.0) {
            if (0.0 <= (float)local_58._0_4_) {
                local_58 = (unsigned __int128)((unsigned int)(*pfVar1 * 0.05));
                lVar2 = 4;
                do {
                    new (local_40) jag::math::Point(*(float*)((long)arg7 + lVar2 - 4) - arg1,
                                                    *(float*)((long)arg7 + lVar2) - arg2);
                    fVar4 = (float)Vector2Cross(&local_68, (Vector2T<float>*)local_40);
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
                    new (local_40) jag::math::Point(*(float*)((long)arg7 + lVar2 - 4) - arg1,
                                                    *(float*)((long)arg7 + lVar2) - arg2);
                    fVar4 = (float)Vector2Cross(&local_68, (Vector2T<float>*)local_40);
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

    // 0x100313880
    unsigned long FaceCollider::Do2dTriangle1DivideTriangles(jag::math::Vector3T<float> const (&arg1)[3],
                                                             jag::math::Vector3T<float> const (&arg2)[3]) {
        unsigned int uVar2;
        uint64_t unaff_R15;

        bool cVar1 = SideTest(*(float*)arg1, *(float*)((long)arg1 + 4), *(float*)((long)arg1 + 12),
                              *(float*)((long)arg1 + 16), *(float*)((long)arg1 + 24), *(float*)((long)arg1 + 28), arg2);
        unsigned long uVar3 = (((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)1);
        if (!cVar1) {
            cVar1 = SideTest(*(float*)arg1, *(float*)((long)arg1 + 4), *(float*)((long)arg1 + 24),
                             *(float*)((long)arg1 + 28), *(float*)((long)arg1 + 12), *(float*)((long)arg1 + 16), arg2);
            if (!cVar1) {
                uVar2 = SideTest(*(float*)((long)arg1 + 12), *(float*)((long)arg1 + 16), *(float*)((long)arg1 + 24),
                                 *(float*)((long)arg1 + 28), *(float*)arg1, *(float*)((long)arg1 + 4), arg2);
                uVar3 = (unsigned long)uVar2;
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x100313920
    unsigned long FaceCollider::Do2dTrianglesOverlap(jag::math::Vector3T<float> const (&arg1)[3],
                                                     jag::math::Vector3T<float> const (&arg2)[3]) {
        unsigned long uVar2;

        if (Do2dTriangle1DivideTriangles(arg1, arg2) == '\0') {
            uVar2 = Do2dTriangle1DivideTriangles(arg2, arg1);
            uVar2 = uVar2 ^ 1;
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x100313950
    unsigned long FaceCollider::TestFacePair(const FaceCollider::FaceWithIntermediates& faceWithIntermediates,
                                             const FaceCollider::Face& face, float& arg3, bool arg4) {
        float fVar1;
        Matrix33T<float>* matrix33;
        unsigned int uVar3;
        Face* pFVar4;
        long lVar5;
        long long lVar6;
        uint64_t in_register_00000009;
        long lVar8;
        unsigned long uVar9;
        float fVar12;
        int in_XMM1_Da;
        float fVar13;
        FaceWithIntermediates local_178;
        uint8_t local_f0[12];
        float* local_d8;
        float local_d0;
        float local_c0;
        int local_a8;
        int local_a4;
        int local_a0;
        int local_98;
        int local_94;
        int local_90;
        float local_88;
        float local_84;
        float local_80;
        uint8_t local_78[12];
        Vector4T<float> local_6c;
        float local_64;
        Vector4T<float> local_60;
        float local_58;
        int local_54[7];

        uint32_t local_8c = (uint32_t)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg4);
        new (&local_d0) jag::math::Vector3T();
        local_d0 = (float)(*(int*)(face + 12) - *(int*)face);
        float local_cc = (float)(*(int*)(face + 16) - *(int*)(face + 4));
        float local_c8 = (float)(*(int*)(face + 20) - *(int*)(face + 8));
        new (&local_c0) jag::math::Vector3T();
        local_c0 = (float)(*(int*)(face + 24) - *(int*)face);
        float local_bc = (float)(*(int*)(face + 28) - *(int*)(face + 4));
        float local_b8 = (float)(*(int*)(face + 32) - *(int*)(face + 8));
        local_100[0] = (ReturnValue)jag::math::Vector3Cross<float>(local_d0, local_c0);
        auto local_100 = jag::math::Vector3T<float>::Normalize();
        Matrix33T<float>* local_e0 = (Matrix33T<float>*)&faceWithIntermediates.field_36;
        Vector3T<float>* vector3 = (Vector3T<float>*)(*local_e0)[2];
        char cVar2 = local_100.SloppyCompare(*vector3, 0.1);
        unsigned long uVar10 = 0;
        if (!cVar2)
            goto LAB_100313f00;
        local_54[5] = 4294967295;
        local_54[3] = -1;
        local_54[4] = -1;
        unsigned long uVar7 = 0;
        unsigned long uVar11 = 0;
        do {
            lVar5 = 0;
            pFVar4 = face + 8;
            do {
                if ((((&faceWithIntermediates.field_0)[uVar7 * 3] == *(int*)(pFVar4 - 8)) &&
                     ((&faceWithIntermediates.field_4)[uVar7 * 3] == *(int*)(pFVar4 - 4))) &&
                    ((&faceWithIntermediates.field_4 + uVar7 * 3)[1] == *(int*)pFVar4)) {
                    local_54[lVar5 + 3] = (int)uVar7;
                    local_54[uVar10] = (int)uVar7;
                    uVar10 = (unsigned long)((int)uVar10 + 1);
                    goto LAB_100313aa3;
                }
                lVar5 = lVar5 + 1;
                pFVar4 = pFVar4 + 12;
            } while (lVar5 != 3);
            uVar11 = uVar7 & 4294967295;
        LAB_100313aa3:
            uVar7 = uVar7 + 1;
        } while (uVar7 != 3);
        if ((int)uVar10 == 2) {
            uVar7 = 0;
            uVar9 = 0;
            do {
                if (local_54[uVar7 + 3] == -1) {
                    uVar9 = uVar7 & 4294967295;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 != 3);
            local_d8 = arg3;
            new (&local_88) jag::math::Vector3T();
            lVar5 = (long)local_54[1];
            lVar8 = (long)local_54[0];
            local_88 =
                (float)((&faceWithIntermediates.field_0)[lVar5 * 3] - (&faceWithIntermediates.field_0)[lVar8 * 3]);
            local_84 =
                (float)((&faceWithIntermediates.field_4)[lVar5 * 3] - (&faceWithIntermediates.field_4)[lVar8 * 3]);
            local_80 =
                (float)((&faceWithIntermediates.field_8)[lVar5 * 3] - (&faceWithIntermediates.field_8)[lVar8 * 3]);
            new (&local_a8) jag::math::Vector3T();
            lVar5 = (long)(int)uVar11;
            local_a8 = (&faceWithIntermediates.field_0)[lVar5 * 3] - (&faceWithIntermediates.field_0)[lVar8 * 3];
            local_a4 = (&faceWithIntermediates.field_4)[lVar5 * 3] - (&faceWithIntermediates.field_4)[lVar8 * 3];
            local_a0 = (&faceWithIntermediates.field_8)[lVar5 * 3] - (&faceWithIntermediates.field_8)[lVar8 * 3];
            new (&local_98) jag::math::Vector3T();
            lVar5 = (long)(int)uVar9;
            local_98 = *(int*)(face + lVar5 * 12) - (&faceWithIntermediates.field_0)[lVar8 * 3];
            local_94 = *(int*)(face + lVar5 * 12 + 4) - (&faceWithIntermediates.field_4)[lVar8 * 3];
            local_90 = *(int*)(face + lVar5 * 12 + 8) - (&faceWithIntermediates.field_8)[lVar8 * 3];
            local_78 = jag::math::Vector3Cross<int>(local_88, local_a8);
            local_178.Vector3T<int>(*local_78);
            local_f0 = jag::math::Vector3Cross<int>(local_88, local_98);
            local_78->Vector3T<int>(*local_f0);
            lVar6 = jag::math::Vector3Dot<long long>(local_178, *local_78);
            arg3 = local_d8;
            if (lVar6 < 1) {
                uVar10 = 0;
                goto LAB_100313f00;
            }
        }
        arg3 = 0.0;
        if ((int)uVar10 < 2) {
            lVar5 = 0;
            do {
                new ((&local_6c + lVar5 - 12)) jag::math::Vector3T();
                lVar5 = lVar5 + 12;
            } while (lVar5 != 36);
            new (&local_88) jag::math::Vector3T();
            pFVar4 = face;
            matrix33 = local_e0;
            local_88 = (float)(*(int*)face - faceWithIntermediates.field_0);
            local_84 = (float)(*(int*)(face + 4) - faceWithIntermediates.field_4);
            local_80 = (float)(*(int*)(face + 8) - faceWithIntermediates.field_8);
            local_178._0_8_ = *local_e0 * local_88;
            local_78->SetXYZ(local_178);
            local_88 = (float)(*(int*)(pFVar4 + 12) - faceWithIntermediates.field_0);
            local_84 = (float)(*(int*)(pFVar4 + 16) - faceWithIntermediates.field_4);
            local_80 = (float)(*(int*)(pFVar4 + 20) - faceWithIntermediates.field_8);
            local_178._0_8_ = *matrix33 * local_88;
            local_6c.SetXYZ(local_178);
            local_88 = (float)(*(int*)(pFVar4 + 24) - faceWithIntermediates.field_0);
            local_84 = (float)(*(int*)(pFVar4 + 28) - faceWithIntermediates.field_4);
            local_80 = (float)(*(int*)(pFVar4 + 32) - faceWithIntermediates.field_8);
            local_178._0_8_ = *matrix33 * local_88;
            local_178.field_8 = in_XMM1_Da;
            local_60.SetXYZ(local_178);
            lVar5 = 20;
            fVar12 = (float)local_78._8_4_;
            fVar13 = (float)local_78._8_4_;
            do {
                fVar1 = *(float*)(&local_6c + lVar5 - 12);
                if (fVar12 <= fVar1) {
                    fVar12 = fVar1;
                }
                if (fVar1 <= fVar13) {
                    fVar13 = fVar1;
                }
                lVar5 = lVar5 + 12;
            } while (lVar5 != 44);
            if ((fVar12 <= 0.0 == 0.0 < fVar13) && ((char)local_8c == '\0')) {
                local_178 = FaceWithIntermediates();
                local_178.field_32 = *(int*)(pFVar4 + 32);
                local_178._0_8_ = *(uint64_t*)pFVar4;
                local_178._8_8_ = *(uint64_t*)(pFVar4 + 8);
                local_178._16_8_ = *(uint64_t*)(pFVar4 + 16);
                local_178._24_8_ = *(uint64_t*)(pFVar4 + 24);
                local_178.ComputeIntermdiates();
                uVar3 = TestFacePair(&local_178, (Face*)faceWithIntermediates, arg3, true);
                uVar10 = (unsigned long)uVar3;
                arg3 = -arg3;
                goto LAB_100313f00;
            }
            fVar12 = ((float)local_78._8_4_ + local_64 + local_58) * 0.33333334f;
            arg3 = fVar12;
            fVar12 = (float)fabs(fVar12);
            if (fVar12 <= 10.0) {
                cVar2 = Do2dTrianglesOverlap(&faceWithIntermediates.field_72, local_78);
            } else {
                cVar2 = '\0';
            }
            uVar10 = 0;
            if (!cVar2)
                goto LAB_100313f00;
        }
        uVar10 = (((uint64_t)((int64_t)(uVar10 >> 8)) << 8) | (uint8_t)1);
    LAB_100313f00:
        return uVar10;
    }

    // 0x100313f80
    bool FaceCollider::TestAllFacePairs(const FaceCollider::ModelPointers& modelPointers1,
                                        const FaceCollider::ModelPointers& modelPointers2,
                                        std::function<bool(int, int, float)> callback) {
        bool cVar1;
        int iVar2;
        int arg1;
        int arg1_00;
        bool bVar3;
        uint8_t local_f0[152];
        function<bool_(int, int, float)>* local_58;
        long local_50;
        long local_48;
        float local_3c;
        ModelPointers* local_38;

        if (0 < modelPointers1.field_56) {
            local_50 = modelPointers1.field_0;
            local_48 = modelPointers2.field_0;
            arg1 = 0;
            local_58 = callback;
            local_38 = modelPointers1;
            do {
                cVar1 = modelPointers1.IsFaceEnabled(arg1);
                if (cVar1) {
                    new (local_f0) FaceWithIntermediates();
                    modelPointers1.GetFace(*local_f0, arg1);
                    local_f0->ComputeIntermdiates();
                    arg1_00 = arg1 + 1;
                    iVar2 = 0;
                    if (local_50 != local_48) {
                        arg1_00 = 0;
                    }
                    bVar3 = arg1_00 < modelPointers2.field_56;
                    if (arg1_00 < modelPointers2.field_56) {
                        do {
                            cVar1 = modelPointers2.IsFaceEnabled(arg1_00);
                            if (cVar1) {
                                modelPointers2.GetFace(*((local_f0 + 112)), arg1_00);
                                cVar1 = TestFacePair((FaceWithIntermediates*)local_f0, (Face*)(local_f0 + 112),
                                                     &local_3c, false);
                                if ((cVar1) &&
                                    (cVar1 = std::function<bool(int, int, float)>::operator()(
                                         (function<bool(int, int, float)>*)local_58, arg1, arg1_00, local_3c),
                                     cVar1)) {
                                    iVar2 = 1;
                                    goto LAB_100313fd6;
                                }
                            }
                            arg1_00 = arg1_00 + 1;
                            bVar3 = arg1_00 < modelPointers2.field_56;
                        } while (arg1_00 < modelPointers2.field_56);
                        iVar2 = 0;
                    }
                LAB_100313fd6:
                    modelPointers1 = local_38;
                    if (bVar3)
                        goto LAB_1003140c3;
                }
                arg1 = arg1 + 1;
            } while (arg1 < modelPointers1.field_56);
        }
        iVar2 = 2;
    LAB_1003140c3:
        return iVar2 != 2;
    }

    // 0x1003140e0
    bool FaceCollider::ModelPointers::IsFaceEnabled(int arg1) const {
        long lVar1 = field_48;
        if (lVar1 == 0) {
            return 1;
        }
        return *(char*)(lVar1 + arg1) != '\x02';
    }

    // 0x100314100
    void FaceCollider::ModelPointers::GetFace(FaceCollider::Face& face, int arg2) const {
        int iVar1 = *(int*)(field_0 + (long)arg2 * 4);
        long lVar2 = (long)iVar1;
        if (field_60 <= iVar1) {
            LogAssert("p1 < m_numPoints",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ZFightDetection.cpp",
                      125, nullptr);
        }
        *(uint32_t*)face = *(uint32_t*)(field_24 + lVar2 * 4);
        *(uint32_t*)(face + 4) = *(uint32_t*)(field_32 + lVar2 * 4);
        *(uint32_t*)(face + 8) = *(uint32_t*)(field_40 + lVar2 * 4);
        iVar1 = *(int*)(field_8 + (long)arg2 * 4);
        lVar2 = (long)iVar1;
        if (field_60 <= iVar1) {
            LogAssert("p2 < m_numPoints",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ZFightDetection.cpp",
                      130, nullptr);
        }
        *(uint32_t*)(face + 12) = *(uint32_t*)(field_24 + lVar2 * 4);
        *(uint32_t*)(face + 16) = *(uint32_t*)(field_32 + lVar2 * 4);
        *(uint32_t*)(face + 20) = *(uint32_t*)(field_40 + lVar2 * 4);
        iVar1 = *(int*)(field_16 + (long)arg2 * 4);
        lVar2 = (long)iVar1;
        if (field_60 <= iVar1) {
            LogAssert("p3 < m_numPoints",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ZFightDetection.cpp",
                      135, nullptr);
        }
        *(uint32_t*)(face + 24) = *(uint32_t*)(field_24 + lVar2 * 4);
        *(uint32_t*)(face + 28) = *(uint32_t*)(field_32 + lVar2 * 4);
        *(uint32_t*)(face + 32) = *(uint32_t*)(field_40 + lVar2 * 4);
    }

    // 0x100314240
    void FaceCollider::TestAllFacePairs(const ModelUnlitImpl& modelUnlitImpl,
                                        std::function<bool(int, int, float)> callback) {
        function<bool(int, int, float)> local_58[48];
        long local_28;

        ModelPointers local_a0(modelUnlitImpl);
        new (local_58) std::function<bool(int, int, float)>(*callback);
        uint32_t uVar1 = TestAllFacePairs(&local_a0, &local_a0, (function<bool_(int, int, float)>*)local_58);
        return uVar1;
    }

    // 0x100314310
    void FaceCollider::TestAllFacePairs(const ModelUnlitImpl& modelUnlitImpl1, const ModelUnlitImpl& modelUnlitImpl2,
                                        std::function<bool(int, int, float)> callback) {
        function<bool(int, int, float)> local_68[56];
        long local_30;

        ModelPointers local_f8(modelUnlitImpl1);
        ModelPointers local_b0(modelUnlitImpl2);
        new (local_68) std::function<bool(int, int, float)>(*callback);
        uint32_t uVar1 = TestAllFacePairs(&local_f8, &local_b0, (function<bool_(int, int, float)>*)local_68);
        return uVar1;
    }

    // 0x1003143c0
    DepthBiasComputer::DepthBiasComputer(ModelUnlitImpl& modelUnlitImpl) : field_0(modelUnlitImpl) {
        field_8.resize((long)modelUnlitImpl.field_96);
    }

    // 0x100314490
    DepthBiasComputer::~DepthBiasComputer() {
        field_8.~vector();
    }

    // 0x1003144b0
    int DepthBiasComputer::ResolveAll() {
        Node* node;
        unsigned long arg1;

        uint8_t* this_00 = &field_8;
        int iVar1 = this_00->size();
        int iVar2 = 0;
        if (0 < iVar1) {
            arg1 = 0;
            do {
                node = (Node*)(*this_00)[arg1];
                ResolveNode(*node);
                iVar2 = iVar2 + *(int*)&node->field_32;
                arg1 = arg1 + 1;
                iVar1 = this_00->size();
            } while ((long)arg1 < (long)iVar1);
            iVar2 = (((uint32_t)((int32_t)((unsigned int)iVar2 >> 8)) << 8) | (uint8_t)(0 < iVar2));
        }
        return iVar2;
    }

    // 0x100314580
    void DepthBiasComputer::ResolveNode(DepthBiasComputer::Node& node) {
        Node* node_00;
        uint64_t* puVar2;
        uint64_t* puVar3;
        int iVar4;
        int iVar5;

        if (*(int*)((long)&node.field_32 + 4) == 0) {
            if ((node.empty() == '\0') && (*(int*)&node.field_32 == 0)) {
                *(uint32_t*)((long)&node.field_32 + 4) = 1;
                puVar2 = (uint64_t*)node.HeapBeginPtr();
                puVar3 = (uint64_t*)node.end();
                if (puVar2 == puVar3) {
                    iVar5 = 0;
                } else {
                    iVar5 = 0;
                    do {
                        node_00 = (Node*)*puVar2;
                        ResolveNode(*node_00);
                        iVar4 = *(int*)(puVar2 + 1) + *(int*)&node_00->field_32;
                        if (iVar4 <= iVar5) {
                            iVar4 = iVar5;
                        }
                        iVar5 = iVar4;
                        puVar2 = puVar2 + 2;
                    } while (puVar2 != puVar3);
                }
                *(int*)&node.field_32 = iVar5;
            }
            *(uint32_t*)((long)&node.field_32 + 4) = 2;
        }
    }

    // 0x100314640
    void DepthBiasComputer::Run() {
        int iVar1;
        unsigned int uVar2;
        ModelUnlitImpl* modelUnlitImpl;
        unsigned long uVar3;
        int iVar4;
        DepthBiasComputer* pDVar5;
        vector<EntityHighlight*, BucketAllocatorEASTL>* this_00;
        long lVar8;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01;
        uint8_t* puVar9;
        uint64_t uVar10;
        Logger* this_02;
        uint8_t uVar11;
        int iVar12;
        unsigned long arg1;
        __5 arg1_00;
        SharedArray<signed char> local_90;
        DepthBiasComputer* local_78;
        vector<DepthBiasComputer::Node>* local_70;
        function<bool(int, int, float)> local_68[48];
        long local_38;

        bool bVar6 = field_0->field_192 != nullptr;
        if (bVar6) {
            this_00 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)*field_0->field_192;
            lVar8 = this_00->end();
            if (lVar8 != 0) {
                this_01 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)*field_0->field_192;
                lVar8 = this_01->data();
                modelUnlitImpl = field_0;
                arg1_00.field_8 = lVar8;
                arg1_00.field_0 = (long*)this;
                std::function<bool(int, int, float)>::function<DepthBiasComputer::Run()::__5, void>(local_68, arg1_00);
                FaceCollider::TestAllFacePairs(*modelUnlitImpl, local_68);
                local_90 = SharedArray((long)field_0->field_96);
                field_0->field_288 = local_90;
                if (!(ResolveAll())) {
                    uVar10 = field_0->field_288.data();
                    ___bzero(uVar10, (long)field_0->field_96);
                } else if (0 < field_0->field_96) {
                    local_70 = (vector<DepthBiasComputer::Node>*)&field_8;
                    arg1 = 0;
                    iVar12 = 0;
                    bVar6 = false;
                    local_78 = this;
                    do {
                        pDVar5 = local_78;
                        lVar8 = (*local_70)[arg1];
                        iVar1 = *(int*)(lVar8 + 32);
                        iVar4 = iVar12;
                        if (iVar12 < iVar1) {
                            iVar4 = iVar1;
                        }
                        if (12 < iVar1) {
                            iVar12 = iVar4;
                            bVar6 = true;
                        }
                        uVar11 = (uint8_t)iVar1;
                        if (11 < iVar1) {
                            uVar11 = 12;
                        }
                        uVar3 = *(unsigned long*)&pDVar5->field_0->field_288;
                        if (uVar3 <= arg1) {
                            LogAssert("(index < m_Size)",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                      "SharedArray.h",
                                      299, "Index of %d outside range 0 to %d", arg1, uVar3 - 1);
                        }
                        puVar9 = (uint8_t*)(*((shared_ptr<signed char[]>*)&pDVar5->field_0->field_296))[arg1];
                        *puVar9 = uVar11;
                        arg1 = arg1 + 1;
                    } while ((long)arg1 < (long)local_78->field_0->field_96);
                    if (bVar6) {
                        uVar2 = local_78->field_0->field_12;
                        this_02 = logger::default_logger();
                        this_02->Log(
                            false, 3,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "dash3d/ZFightDetection.cpp",
                            609,
                            "Model %d.%d required a maximum bias of %d, which exceeds the maximum allowed bias of %d",
                            uVar2 >> 16, uVar2 & 65535, iVar12, 12);
                    }
                }
                return;
            }
        }
        LogAssert("m_model.m_fSeq != nullptr && (*m_model.m_fSeq).size() > 0",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                  "ZFightDetection.cpp",
                  506, nullptr);
    }

} // namespace jag::oldscape::dash3d

namespace jag::math {
    // 0x1003135d0
    Vector3T<float> operator* <float>(const Matrix33T<float>& matrix33, const Vector3T<float>& vector3) {
        uint64_t uVar2;

        Vector3T<float>* pVVar1 = &matrix33[0];
        float local_20 = Vector3Dot<float>(pVVar1, vector3);
        pVVar1 = &matrix33[1];
        float local_1c = Vector3Dot<float>(pVVar1, vector3);
        pVVar1 = &matrix33[2];
        float arg3 = Vector3Dot<float>(pVVar1, vector3);
        ColourHSL local_30(local_20, local_1c, arg3);
        uVar2._0_4_ = local_30.field_0;
        uVar2._4_4_ = local_30.field_4;
        return uVar2;
    }

    // 0x100313f40
    long long Vector3Dot<long long>(const Vector3T<long long>& vector31, const Vector3T<long long>& vector32) {
        return *(long*)(vector32 + 16) * *(long*)(vector31 + 16) + *(long*)(vector32 + 8) * *(long*)(vector31 + 8) +
               *(long*)vector32 * *(long*)vector31;
    }

} // namespace jag::math

// 0x1003135c0
unsigned long fabs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}
