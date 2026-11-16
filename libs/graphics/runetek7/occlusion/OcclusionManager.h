// libs/graphics/runetek7/occlusion/OcclusionManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class OcclusionManager {
    public:
        // virtual methods in vtable order
        virtual ~OcclusionManager();
        void SetMinimumDepthVariation(float);
        uint GetBufferWidth() const;
        uint GetBufferHeight() const;
        OcclusionManager(ThreadPool*);
        void Destroy();
        void SetNoCullingAABB(math::Vector3T<float> const&);
        void GetGPUCullingSupported();
        OcclusionManager* RegisterTweakVars(tweak::ContainerGroup&);
        void Init(unsigned int, unsigned int);
        void RasterizeToDepthBuffer(RT7Core&, RenderPassType, SceneViewData const&, DrawableQueue&);
        void RenderDebug();
        void RenderAABBDepthBuffer();
        void ClearAABBDepthBuffer();
        void LoadPackedDepthBuffer(unsigned char const*, render::Format);
        void LoadPackedDepthBufferInternalSSENonInterlaced<true>(float*, unsigned char const*, unsigned long,
                                                                 unsigned long);
        void LoadPackedDepthBufferInternalSSENonInterlaced<false>(float*, unsigned char const*, unsigned long,
                                                                  unsigned long);
        void LoadFloatDepthBuffer(float*, float const*);
        void LoadHalfFloatDepthBuffer(float*, unsigned short const*);
        void SetSuccessfulDepthReadFrame();
        LoadPackedDepthBufferInternalNonSSE(float*, unsigned char const*, render::Format);
        void DeinterlaceFloatDebugBuffer(unsigned char*, float const*, unsigned int, unsigned int);
        bool DepthBufferCanOcclude() const;
        void UpdateStats();
        OBBVisible(math::OBB const&, SceneViewData const&, SceneViewData const*, float);
        bool AABBVisible(math::AABB const&, SceneViewData const&, SceneViewData const*);
        TransformAABBox(math::AABB const&, math::Vector4T<float>*, SceneViewData const&);
        bool ApproxDepthTestAABBox(float const*, math::Vector4T<float> const*);
        ulong TransformAABBoxInternal(math::AABB const&, math::Vector4T<float>*, math::Matrix44T<float> const&);
        void Gather(math::Vector4T<float>*, unsigned int, math::Vector4T<float> const*);
        void AABBGather(vFloat4*, unsigned int, math::Vector4T<float> const*, unsigned int);
        RasterizeAndDepthTestAABBox(unsigned int*, math::Vector4T<float> const*, unsigned int);
        void GetCPUDepthBuffer();
        void GetCPUDepthBuffer() const;
        void SetMinimumDepth(float);
        float GetMinimumDepth() const;
        void GetCullingStatsAvgTotal() const;
        void GetCullingStatsAvgIn() const;
        void GetCullingStatsAvgPassed() const;
        void SetRenderInvalidTransforms(bool);
        static /* 1 bytes */ m_OcclusionEnabled;             // = 1
        static /* 1 bytes */ m_GammaCorrectDebugDepthBuffer; // = 1
        static /* 1 bytes */ m_MergeAABBCPUDepthBuffers;     // = 1
        static /* 1 bytes */ m_CPUDepthBufferGenerationEnabled;
        static /* 1 bytes */ m_ShowDownsampledGPUDepthBuffer;
        static /* 1 bytes */ m_ShowAABBDebugDepthBuffer;
        static /* 1 bytes */ m_ShowEntireDebugAABB;
        static /* 1 bytes */ m_ShowFailPointOnly;
        static /* 1 bytes */ m_ShowCulledAABB;
        static /* 1 bytes */ m_ShowNonCulledAABB;
        static /* 1 bytes */ m_ShowClippedAABB;
        static /* 4 bytes */ m_FilterAABBDebug;
        static /* 4 bytes */ m_NDCThreshold;
        static /* 1 bytes */ m_GeometryBatchCullingEnabled;
        static /* 1 bytes */ m_FlipVisibilityResults;
        static /* 1 bytes */ m_useAsyncDepthLoad;
        static /* 1 bytes */ m_useCurrentFrameAABBViewTransforms;
        static /* 16 bytes */ m_disableOnVerticalCameraRotation;

        // data members, from how the methods use this: 713 bytes
        undefined** field_0; // offset 0, vtable pointer
        long field_8;        // offset 8
        undefined1 field_16; // offset 16
        char _unknown_17[31];
        undefined1 field_48; // offset 48
        char _unknown_49[47];
        float m_minimumDepth; // offset 96
        char _unknown_100[12];
        float* field_112; // offset 112
        char _unknown_120[520];
        uint m_bufferWidth;            // offset 640
        uint m_bufferHeight;           // offset 644
        float field_648;               // offset 648
        float field_652;               // offset 652
        float m_minimumDepthVariation; // offset 656
        char _unknown_660[24];
        uint field_684; // offset 684
        char _unknown_688[12];
        uint field_700;                 // offset 700
        ThreadPool* field_704;          // offset 704
        bool m_renderInvalidTransforms; // offset 712
    };

    // 0x1001bca50, 16 bytes, inline, placed by class name and debug map
    // OcclusionManager::SetMinimumDepthVariation(float)
    void OcclusionManager::SetMinimumDepthVariation(float param_1) {
        m_minimumDepthVariation = param_1;
    }

    // 0x1007addf0, 16 bytes, inline, placed by class name
    // OcclusionManager::GetBufferWidth() const
    uint OcclusionManager::GetBufferWidth() {
        return m_bufferWidth;
    }

    // 0x1007ade90, 16 bytes, inline, placed by class name
    // OcclusionManager::GetBufferHeight() const
    uint OcclusionManager::GetBufferHeight() {
        return m_bufferHeight;
    }

    // 0x100824d30, 272 bytes, inline, placed by class name
    // void OcclusionManager::LoadPackedDepthBufferInternalSSENonInterlaced<true>(float*, unsigned char const*, unsigned long, unsigned long)
    void OcclusionManager::LoadPackedDepthBufferInternalSSENonInterlaced<true>(float* param_1, uchar* param_2,
                                                                               ulong param_3, ulong param_4) {
        float* pfVar1;
        undefined1 auVar2[16];
        undefined1 auVar3[15];
        undefined1 auVar4[14];
        undefined1 auVar5[15];
        undefined1 auVar6[15];
        uint uVar7;
        undefined1 auVar8[15];
        undefined1 auVar9[14];
        undefined1 auVar10[13];
        undefined1 auVar11[13];
        undefined1 auVar12[13];
        undefined1 auVar13[15];
        undefined1 auVar14[15];
        undefined1 auVar15[15];
        undefined1 auVar16[15];
        undefined1 auVar17[15];
        unkuint9 Var18;
        undefined1 auVar19[15];
        undefined1 auVar20[11];
        undefined1 auVar21[15];
        undefined1 auVar22[14];
        undefined1 auVar23[13];
        uint6 uVar24;
        ulong uVar25;
        uchar* puVar26;
        ulong uVar27;
        long lVar28;
        ulong uVar29;
        ulong uVar30;
        ulong uVar31;
        uint uVar32;

        uVar31 = param_4 * param_3;
        uVar29 = (param_4 + 1) * param_3;
        if (uVar31 < uVar29) {
            uVar30 = (ulong)(m_bufferWidth >> 1);
            puVar26 = param_2 + param_4 * param_3 * uVar30 * 4;
            do {
                uVar27 = (ulong)m_bufferWidth;
                if (uVar27 != 0) {
                    uVar25 = 0;
                    do {
                        lVar28 = uVar27 * uVar31 + uVar25;
                        auVar2 = *(undefined1(*)[16])(puVar26 + uVar25 * 2);
                        auVar3[13] = 0;
                        auVar3._0_13_ = auVar2._0_13_;
                        auVar3[14] = auVar2[7];
                        auVar5[12] = auVar2[6];
                        auVar5._0_12_ = auVar2._0_12_;
                        auVar5._13_2_ = auVar3._13_2_;
                        auVar6[11] = 0;
                        auVar6._0_11_ = auVar2._0_11_;
                        auVar6._12_3_ = auVar5._12_3_;
                        uVar7 = auVar6._11_4_;
                        auVar8[10] = auVar2[5];
                        auVar8._0_10_ = auVar2._0_10_;
                        auVar8._11_4_ = uVar7;
                        auVar13[9] = 0;
                        auVar13._0_9_ = auVar2._0_9_;
                        auVar13._10_5_ = auVar8._10_5_;
                        auVar14[8] = auVar2[4];
                        auVar14._0_8_ = auVar2._0_8_;
                        auVar14._9_6_ = auVar13._9_6_;
                        auVar17._7_8_ = 0;
                        auVar17._0_7_ = auVar14._8_7_;
                        Var18 = CONCAT81(SUB158(auVar17 << 64, 7), auVar2[3]);
                        auVar19._9_6_ = 0;
                        auVar19._0_9_ = Var18;
                        auVar20._1_10_ = SUB1510(auVar19 << 48, 5);
                        auVar20[0] = auVar2[2];
                        auVar21._11_4_ = 0;
                        auVar21._0_11_ = auVar20;
                        auVar15[2] = auVar2[1];
                        auVar15._0_2_ = auVar2._0_2_;
                        auVar15._3_12_ = SUB1512(auVar21 << 32, 3);
                        auVar16._2_13_ = auVar15._2_13_;
                        auVar16._0_2_ = auVar2._0_2_ & 255;
                        uVar32 = CONCAT13(0, CONCAT12(auVar2[9], (ushort)auVar2[8]));
                        auVar4._10_2_ = 0;
                        auVar4._0_10_ = auVar16._0_10_;
                        auVar4._12_2_ = (short)Var18;
                        uVar24 = CONCAT42(auVar4._10_4_, auVar20._0_2_);
                        auVar22._6_8_ = 0;
                        auVar22._0_6_ = uVar24;
                        auVar9._4_2_ = auVar15._2_2_;
                        auVar9._0_4_ = auVar16._0_4_;
                        auVar9._6_8_ = SUB148(auVar22 << 64, 6);
                        auVar10[12] = auVar2[11];
                        auVar10._0_12_ = ZEXT112(auVar2[12]) << 64;
                        auVar11._10_3_ = auVar10._10_3_;
                        auVar11._0_10_ = (unkuint10)auVar2[10] << 64;
                        auVar23._5_8_ = 0;
                        auVar23._0_5_ = auVar11._8_5_;
                        auVar12[4] = auVar2[9];
                        auVar12._0_4_ = uVar32;
                        auVar12[5] = 0;
                        auVar12._6_7_ = SUB137(auVar23 << 64, 6);
                        pfVar1 = param_1 + lVar28;
                        *pfVar1 = 1.0 - ((float)auVar9._4_4_ * 1.5378702e-05 + (float)(int)uVar24 * 0.003921569);
                        pfVar1[1] = 1.0 - ((float)(auVar4._10_4_ >> 16) * 1.5378702e-05 +
                                           (float)(auVar16._0_4_ & 65535) * 0.003921569);
                        pfVar1[2] =
                            1.0 - ((float)auVar8._10_2_ * 1.5378702e-05 + (float)(uVar7 >> 8 & 65535) * 0.003921569);
                        pfVar1[3] = 1.0 - ((float)(uVar7 >> 24) * 1.5378702e-05 + (float)auVar14._8_2_ * 0.003921569);
                        pfVar1 = param_1 + lVar28 + 4;
                        *pfVar1 = 1.0 - ((float)auVar12._4_4_ * 1.5378702e-05 + (float)auVar11._8_4_ * 0.003921569);
                        pfVar1[1] = 1.0 - ((float)(uint3)(auVar10._10_3_ >> 16) * 1.5378702e-05 +
                                           (float)(uVar32 & 65535) * 0.003921569);
                        pfVar1[2] = 1.0 - ((float)auVar2[13] * 1.5378702e-05 + (float)auVar2[14] * 0.003921569);
                        pfVar1[3] = 1.0 - ((float)auVar2[15] * 1.5378702e-05 + (float)auVar2[12] * 0.003921569);
                        uVar25 = uVar25 + 8;
                        uVar27 = (ulong)m_bufferWidth;
                    } while (uVar25 < uVar27);
                }
                uVar31 = uVar31 + 1;
                puVar26 = puVar26 + uVar30 * 4;
            } while (uVar31 != uVar29);
        }
    }

    // 0x100824e40, 240 bytes, inline, placed by class name
    // void OcclusionManager::LoadPackedDepthBufferInternalSSENonInterlaced<false>(float*, unsigned char const*, unsigned long, unsigned long)
    void OcclusionManager::LoadPackedDepthBufferInternalSSENonInterlaced<false>(float* param_1, uchar* param_2,
                                                                                ulong param_3, ulong param_4) {
        float* pfVar1;
        undefined1 auVar2[16];
        undefined1 auVar3[15];
        undefined1 auVar4[14];
        undefined1 auVar5[15];
        undefined1 auVar6[15];
        uint uVar7;
        undefined1 auVar8[15];
        undefined1 auVar9[14];
        undefined1 auVar10[13];
        undefined1 auVar11[13];
        undefined1 auVar12[13];
        undefined1 auVar13[15];
        undefined1 auVar14[15];
        undefined1 auVar15[15];
        undefined1 auVar16[15];
        undefined1 auVar17[15];
        unkuint9 Var18;
        undefined1 auVar19[15];
        undefined1 auVar20[11];
        undefined1 auVar21[15];
        undefined1 auVar22[14];
        undefined1 auVar23[13];
        uint6 uVar24;
        ulong uVar25;
        uchar* puVar26;
        ulong uVar27;
        long lVar28;
        ulong uVar29;
        ulong uVar30;
        ulong uVar31;
        uint uVar32;

        uVar31 = param_4 * param_3;
        uVar29 = (param_4 + 1) * param_3;
        if (uVar31 < uVar29) {
            uVar30 = (ulong)(m_bufferWidth >> 1);
            puVar26 = param_2 + param_4 * param_3 * uVar30 * 4;
            do {
                uVar27 = (ulong)m_bufferWidth;
                if (uVar27 != 0) {
                    uVar25 = 0;
                    do {
                        auVar2 = *(undefined1(*)[16])(puVar26 + uVar25 * 2);
                        auVar3[13] = 0;
                        auVar3._0_13_ = auVar2._0_13_;
                        auVar3[14] = auVar2[7];
                        auVar5[12] = auVar2[6];
                        auVar5._0_12_ = auVar2._0_12_;
                        auVar5._13_2_ = auVar3._13_2_;
                        auVar6[11] = 0;
                        auVar6._0_11_ = auVar2._0_11_;
                        auVar6._12_3_ = auVar5._12_3_;
                        uVar7 = auVar6._11_4_;
                        auVar8[10] = auVar2[5];
                        auVar8._0_10_ = auVar2._0_10_;
                        auVar8._11_4_ = uVar7;
                        auVar13[9] = 0;
                        auVar13._0_9_ = auVar2._0_9_;
                        auVar13._10_5_ = auVar8._10_5_;
                        auVar14[8] = auVar2[4];
                        auVar14._0_8_ = auVar2._0_8_;
                        auVar14._9_6_ = auVar13._9_6_;
                        auVar17._7_8_ = 0;
                        auVar17._0_7_ = auVar14._8_7_;
                        Var18 = CONCAT81(SUB158(auVar17 << 64, 7), auVar2[3]);
                        auVar19._9_6_ = 0;
                        auVar19._0_9_ = Var18;
                        auVar20._1_10_ = SUB1510(auVar19 << 48, 5);
                        auVar20[0] = auVar2[2];
                        auVar21._11_4_ = 0;
                        auVar21._0_11_ = auVar20;
                        auVar15[2] = auVar2[1];
                        auVar15._0_2_ = auVar2._0_2_;
                        auVar15._3_12_ = SUB1512(auVar21 << 32, 3);
                        auVar16._2_13_ = auVar15._2_13_;
                        auVar16._0_2_ = auVar2._0_2_ & 255;
                        uVar32 = CONCAT13(0, CONCAT12(auVar2[9], (ushort)auVar2[8]));
                        auVar4._10_2_ = 0;
                        auVar4._0_10_ = auVar16._0_10_;
                        auVar4._12_2_ = (short)Var18;
                        uVar24 = CONCAT42(auVar4._10_4_, auVar20._0_2_);
                        auVar22._6_8_ = 0;
                        auVar22._0_6_ = uVar24;
                        auVar9._4_2_ = auVar15._2_2_;
                        auVar9._0_4_ = auVar16._0_4_;
                        auVar9._6_8_ = SUB148(auVar22 << 64, 6);
                        auVar10[12] = auVar2[11];
                        auVar10._0_12_ = ZEXT112(auVar2[12]) << 64;
                        auVar11._10_3_ = auVar10._10_3_;
                        auVar11._0_10_ = (unkuint10)auVar2[10] << 64;
                        auVar23._5_8_ = 0;
                        auVar23._0_5_ = auVar11._8_5_;
                        auVar12[4] = auVar2[9];
                        auVar12._0_4_ = uVar32;
                        auVar12[5] = 0;
                        auVar12._6_7_ = SUB137(auVar23 << 64, 6);
                        lVar28 = uVar27 * uVar31 + uVar25;
                        pfVar1 = param_1 + lVar28;
                        *pfVar1 =
                            1.0 - ((float)(auVar16._0_4_ & 65535) * 0.003921569 + (float)auVar9._4_4_ * 1.5378702e-05);
                        pfVar1[1] =
                            1.0 - ((float)(int)uVar24 * 0.003921569 + (float)(auVar4._10_4_ >> 16) * 1.5378702e-05);
                        pfVar1[2] = 1.0 - ((float)auVar14._8_2_ * 0.003921569 + (float)auVar8._10_2_ * 1.5378702e-05);
                        pfVar1[3] =
                            1.0 - ((float)(uVar7 >> 8 & 65535) * 0.003921569 + (float)(uVar7 >> 24) * 1.5378702e-05);
                        pfVar1 = param_1 + lVar28 + 4;
                        *pfVar1 = 1.0 - ((float)(uVar32 & 65535) * 0.003921569 + (float)auVar12._4_4_ * 1.5378702e-05);
                        pfVar1[1] = 1.0 - ((float)auVar11._8_4_ * 0.003921569 +
                                           (float)(uint3)(auVar10._10_3_ >> 16) * 1.5378702e-05);
                        pfVar1[2] = 1.0 - ((float)auVar2[12] * 0.003921569 + (float)auVar2[13] * 1.5378702e-05);
                        pfVar1[3] = 1.0 - ((float)auVar2[14] * 0.003921569 + (float)auVar2[15] * 1.5378702e-05);
                        uVar25 = uVar25 + 8;
                        uVar27 = (ulong)m_bufferWidth;
                    } while (uVar25 < uVar27);
                }
                uVar31 = uVar31 + 1;
                puVar26 = puVar26 + uVar30 * 4;
            } while (uVar31 != uVar29);
        }
    }

    // 0x100827760, 32 bytes, inline, placed by class name
    // OcclusionManager::GetCPUDepthBuffer()
    void OcclusionManager::GetCPUDepthBuffer() {
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_00;

        this_00 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)
                std::array<Array<unsigned char, eastl::allocator>, 2ul>::operator[](
                    (array<Array<unsigned char, eastl::allocator>, 2ul>*)&field_48, 0);
        this_00->data();
    }

    // 0x100827780, 32 bytes, inline, placed by class name
    // OcclusionManager::GetCPUDepthBuffer() const
    void OcclusionManager::GetCPUDepthBuffer() {
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_00;

        this_00 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)
                std::array<Array<unsigned char, eastl::allocator>, 2ul>::operator[]((ulong)&field_48);
        this_00->data();
    }

    // 0x100827ac0, 16 bytes, inline, placed by class name
    // OcclusionManager::SetMinimumDepth(float)
    void OcclusionManager::SetMinimumDepth(float param_1) {
        m_minimumDepth = param_1;
    }

    // 0x100828280, 16 bytes, inline, placed by class name
    // OcclusionManager::GetMinimumDepth() const
    float OcclusionManager::GetMinimumDepth() {
        return m_minimumDepth;
    }

    // 0x1008a71f0, 32 bytes, inline, placed by class name
    // OcclusionManager::GetCullingStatsAvgTotal() const
    void OcclusionManager::GetCullingStatsAvgTotal() {
        (&field_672)->operator_cast_to_unsigned_int();
    }

    // 0x1008a7210, 32 bytes, inline, placed by class name
    // OcclusionManager::GetCullingStatsAvgIn() const
    void OcclusionManager::GetCullingStatsAvgIn() {
        (&field_676)->operator_cast_to_unsigned_int();
    }

    // 0x1008a7230, 32 bytes, inline, placed by class name
    // OcclusionManager::GetCullingStatsAvgPassed() const
    void OcclusionManager::GetCullingStatsAvgPassed() {
        (&field_680)->operator_cast_to_unsigned_int();
    }

    // 0x1008b0550, 16 bytes, inline, placed by class name
    // OcclusionManager::SetRenderInvalidTransforms(bool)
    void OcclusionManager::SetRenderInvalidTransforms(bool param_1) {
        m_renderInvalidTransforms = param_1;
    }

} // namespace jag::graphics
