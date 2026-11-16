// libs/graphics/runetek7/occlusion/OcclusionManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class OcclusionManager {
    public:
        // virtual methods in vtable order
        virtual ~OcclusionManager();
        void SetMinimumDepthVariation(float arg1);
        unsigned int GetBufferWidth() const;
        unsigned int GetBufferHeight() const;
        OcclusionManager(ThreadPool* threadPool);
        void Destroy();
        void SetNoCullingAABB(const math::Vector3T<float>& vector3);
        void GetGPUCullingSupported();
        auto RegisterTweakVars(tweak::ContainerGroup& containerGroup);
        void Init(unsigned int arg1, unsigned int arg2);
        void RasterizeToDepthBuffer(RT7Core& rt7Core, RenderPassType renderPassType, const SceneViewData& sceneViewData,
                                    DrawableQueue& drawableQueue);
        void RenderDebug();
        void RenderAABBDepthBuffer();
        void ClearAABBDepthBuffer();
        void LoadPackedDepthBuffer(const unsigned char* arg1, render::Format format);
        void LoadPackedDepthBufferInternalSSENonInterlaced<true>(float* arg1, const unsigned char* arg2,
                                                                 unsigned long arg3, unsigned long arg4);
        void LoadPackedDepthBufferInternalSSENonInterlaced<false>(float* arg1, const unsigned char* arg2,
                                                                  unsigned long arg3, unsigned long arg4);
        void LoadFloatDepthBuffer(float* arg1, const float* arg2);
        void LoadHalfFloatDepthBuffer(float* arg1, const unsigned short* arg2);
        void SetSuccessfulDepthReadFrame();
        uint8_t[16] LoadPackedDepthBufferInternalNonSSE(float* arg1, const unsigned char* arg2, render::Format format);
        void DeinterlaceFloatDebugBuffer(unsigned char* arg1, const float* arg2, unsigned int arg3, unsigned int arg4);
        bool DepthBufferCanOcclude() const;
        void UpdateStats();
        uint64_t OBBVisible(const math::OBB& obb, const SceneViewData& sceneViewData1,
                            const SceneViewData* sceneViewData2, float arg4);
        bool AABBVisible(const math::AABB& aabb, const SceneViewData& sceneViewData1,
                         const SceneViewData* sceneViewData2);
        uint32_t TransformAABBox(const math::AABB& aabb, math::Vector4T<float>* vector4,
                                 const SceneViewData& sceneViewData);
        bool ApproxDepthTestAABBox(const float* arg1, const math::Vector4T<float>* vector4);
        unsigned long TransformAABBoxInternal(const math::AABB& aabb, math::Vector4T<float>* vector4,
                                              const math::Matrix44T<float>& matrix44);
        void Gather(math::Vector4T<float>* vector41, unsigned int arg2, const math::Vector4T<float>* vector42);
        void AABBGather(vFloat4* vFloat4, unsigned int arg2, const math::Vector4T<float>* vector4, unsigned int arg4);
        uint64_t RasterizeAndDepthTestAABBox(unsigned int* arg1, const math::Vector4T<float>* vector4,
                                             unsigned int arg3);
        void GetCPUDepthBuffer();
        void GetCPUDepthBuffer() const;
        void SetMinimumDepth(float arg1);
        float GetMinimumDepth() const;
        void GetCullingStatsAvgTotal() const;
        void GetCullingStatsAvgIn() const;
        void GetCullingStatsAvgPassed() const;
        void SetRenderInvalidTransforms(bool arg1);
        static bool m_OcclusionEnabled;             // = 1
        static bool m_GammaCorrectDebugDepthBuffer; // = 1
        static bool m_MergeAABBCPUDepthBuffers;     // = 1
        static bool m_CPUDepthBufferGenerationEnabled;
        static bool m_ShowDownsampledGPUDepthBuffer;
        static bool m_ShowAABBDebugDepthBuffer;
        static bool m_ShowEntireDebugAABB;
        static bool m_ShowFailPointOnly;
        static bool m_ShowCulledAABB;
        static bool m_ShowNonCulledAABB;
        static bool m_ShowClippedAABB;
        static bool m_FilterAABBDebug;
        static float m_NDCThreshold;
        static bool m_GeometryBatchCullingEnabled;
        static bool m_FlipVisibilityResults;
        static bool m_useAsyncDepthLoad;
        static bool m_useCurrentFrameAABBViewTransforms;
        static bool m_disableOnVerticalCameraRotation;

    private:
        uint8_t field_8;
        uint8_t _unknown_9[7];
        uint8_t field_16;
        uint8_t _unknown_17[79];
        float m_minimumDepth;
        uint8_t _unknown_100[12];
        float* field_112;
        uint8_t _unknown_120[520];
        unsigned int m_bufferWidth;
        unsigned int m_bufferHeight;
        float field_648;
        float field_652;
        float m_minimumDepthVariation;
        uint8_t _unknown_660[24];
        unsigned int field_684;
        uint8_t _unknown_688[12];
        unsigned int field_700;
        ThreadPool* field_704;
        bool m_renderInvalidTransforms;
    };

    // 0x1001bca50
    void OcclusionManager::SetMinimumDepthVariation(float arg1) {
        m_minimumDepthVariation = arg1;
    }

    // 0x1007addf0
    unsigned int OcclusionManager::GetBufferWidth() const {
        return m_bufferWidth;
    }

    // 0x1007ade90
    unsigned int OcclusionManager::GetBufferHeight() const {
        return m_bufferHeight;
    }

    // 0x100824d30
    void OcclusionManager::LoadPackedDepthBufferInternalSSENonInterlaced<true>(float* arg1, const unsigned char* arg2,
                                                                               unsigned long arg3, unsigned long arg4) {
        float* pfVar1;
        uint8_t auVar2[16];
        uint8_t auVar3[15];
        uint8_t auVar4[14];
        uint8_t auVar5[15];
        uint8_t auVar6[15];
        unsigned int uVar7;
        uint8_t auVar8[15];
        uint8_t auVar9[14];
        uint8_t auVar10[13];
        uint8_t auVar11[13];
        uint8_t auVar12[13];
        uint8_t auVar13[15];
        uint8_t auVar14[15];
        uint8_t auVar15[15];
        uint8_t auVar16[15];
        uint8_t auVar17[15];
        unkuint9 Var18;
        uint8_t auVar19[15];
        uint8_t auVar20[11];
        uint8_t auVar21[15];
        uint8_t auVar22[14];
        uint8_t auVar23[13];
        uint64_t uVar24;
        unsigned long uVar25;
        unsigned char* puVar26;
        unsigned long uVar27;
        long lVar28;
        unsigned long uVar30;
        unsigned int uVar32;

        unsigned long uVar31 = arg4 * arg3;
        unsigned long uVar29 = (arg4 + 1) * arg3;
        if (uVar31 < uVar29) {
            uVar30 = (unsigned long)(m_bufferWidth >> 1);
            puVar26 = arg2 + arg4 * arg3 * uVar30 * 4;
            do {
                uVar27 = (unsigned long)m_bufferWidth;
                if (uVar27 != 0) {
                    uVar25 = 0;
                    do {
                        lVar28 = uVar27 * uVar31 + uVar25;
                        auVar2 = *(uint8_t(*)[16])(puVar26 + uVar25 * 2);
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
                        Var18 = (((uint64_t)((uint64_t)((auVar17 << 64) >> 56)) << 8) | (uint8_t)auVar2[3]);
                        auVar19._9_6_ = 0;
                        auVar19._0_9_ = Var18;
                        auVar20._1_10_ = (uint64_t)((auVar19 << 48) >> 40);
                        auVar20[0] = auVar2[2];
                        auVar21._11_4_ = 0;
                        auVar21._0_11_ = auVar20;
                        auVar15[2] = auVar2[1];
                        auVar15._0_2_ = auVar2._0_2_;
                        auVar15._3_12_ = (uint64_t)((auVar21 << 32) >> 24);
                        auVar16._2_13_ = auVar15._2_13_;
                        auVar16._0_2_ = auVar2._0_2_ & 255;
                        uVar32 = (((uint32_t)0 << 24) |
                                  (uint32_t)((((uint32_t)auVar2[9] << 16) | (uint16_t)((unsigned short)auVar2[8]))));
                        auVar4._10_2_ = 0;
                        auVar4._0_10_ = auVar16._0_10_;
                        auVar4._12_2_ = (short)Var18;
                        uVar24 = (((uint64_t)auVar4._10_4_ << 16) | (uint16_t)auVar20._0_2_);
                        auVar22._6_8_ = 0;
                        auVar22._0_6_ = uVar24;
                        auVar9._4_2_ = auVar15._2_2_;
                        auVar9._0_4_ = auVar16._0_4_;
                        auVar9._6_8_ = (uint64_t)((auVar22 << 64) >> 48);
                        auVar10[12] = auVar2[11];
                        auVar10._0_12_ = (uint64_t)auVar2[12] << 64;
                        auVar11._10_3_ = auVar10._10_3_;
                        auVar11._0_10_ = (unkuint10)auVar2[10] << 64;
                        auVar23._5_8_ = 0;
                        auVar23._0_5_ = auVar11._8_5_;
                        auVar12[4] = auVar2[9];
                        auVar12._0_4_ = uVar32;
                        auVar12[5] = 0;
                        auVar12._6_7_ = (uint64_t)((auVar23 << 64) >> 48);
                        pfVar1 = arg1 + lVar28;
                        *pfVar1 = 1.0 - ((float)auVar9._4_4_ * 1.5378702e-05 + (float)(int)uVar24 * 0.003921569f);
                        pfVar1[1] = 1.0 - ((float)(auVar4._10_4_ >> 16) * 1.5378702e-05 +
                                           (float)(auVar16._0_4_ & 65535) * 0.003921569f);
                        pfVar1[2] =
                            1.0 - ((float)auVar8._10_2_ * 1.5378702e-05 + (float)(uVar7 >> 8 & 65535) * 0.003921569f);
                        pfVar1[3] = 1.0 - ((float)(uVar7 >> 24) * 1.5378702e-05 + (float)auVar14._8_2_ * 0.003921569f);
                        pfVar1 = arg1 + lVar28 + 4;
                        *pfVar1 = 1.0 - ((float)auVar12._4_4_ * 1.5378702e-05 + (float)auVar11._8_4_ * 0.003921569f);
                        pfVar1[1] = 1.0 - ((float)(uint32_t)(auVar10._10_3_ >> 16) * 1.5378702e-05 +
                                           (float)(uVar32 & 65535) * 0.003921569f);
                        pfVar1[2] = 1.0 - ((float)auVar2[13] * 1.5378702e-05 + (float)auVar2[14] * 0.003921569f);
                        pfVar1[3] = 1.0 - ((float)auVar2[15] * 1.5378702e-05 + (float)auVar2[12] * 0.003921569f);
                        uVar25 = uVar25 + 8;
                        uVar27 = (unsigned long)m_bufferWidth;
                    } while (uVar25 < uVar27);
                }
                uVar31 = uVar31 + 1;
                puVar26 = puVar26 + uVar30 * 4;
            } while (uVar31 != uVar29);
        }
    }

    // 0x100824e40
    void OcclusionManager::LoadPackedDepthBufferInternalSSENonInterlaced<false>(float* arg1, const unsigned char* arg2,
                                                                                unsigned long arg3,
                                                                                unsigned long arg4) {
        float* pfVar1;
        uint8_t auVar2[16];
        uint8_t auVar3[15];
        uint8_t auVar4[14];
        uint8_t auVar5[15];
        uint8_t auVar6[15];
        unsigned int uVar7;
        uint8_t auVar8[15];
        uint8_t auVar9[14];
        uint8_t auVar10[13];
        uint8_t auVar11[13];
        uint8_t auVar12[13];
        uint8_t auVar13[15];
        uint8_t auVar14[15];
        uint8_t auVar15[15];
        uint8_t auVar16[15];
        uint8_t auVar17[15];
        unkuint9 Var18;
        uint8_t auVar19[15];
        uint8_t auVar20[11];
        uint8_t auVar21[15];
        uint8_t auVar22[14];
        uint8_t auVar23[13];
        uint64_t uVar24;
        unsigned long uVar25;
        unsigned char* puVar26;
        unsigned long uVar27;
        long lVar28;
        unsigned long uVar30;
        unsigned int uVar32;

        unsigned long uVar31 = arg4 * arg3;
        unsigned long uVar29 = (arg4 + 1) * arg3;
        if (uVar31 < uVar29) {
            uVar30 = (unsigned long)(m_bufferWidth >> 1);
            puVar26 = arg2 + arg4 * arg3 * uVar30 * 4;
            do {
                uVar27 = (unsigned long)m_bufferWidth;
                if (uVar27 != 0) {
                    uVar25 = 0;
                    do {
                        auVar2 = *(uint8_t(*)[16])(puVar26 + uVar25 * 2);
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
                        Var18 = (((uint64_t)((uint64_t)((auVar17 << 64) >> 56)) << 8) | (uint8_t)auVar2[3]);
                        auVar19._9_6_ = 0;
                        auVar19._0_9_ = Var18;
                        auVar20._1_10_ = (uint64_t)((auVar19 << 48) >> 40);
                        auVar20[0] = auVar2[2];
                        auVar21._11_4_ = 0;
                        auVar21._0_11_ = auVar20;
                        auVar15[2] = auVar2[1];
                        auVar15._0_2_ = auVar2._0_2_;
                        auVar15._3_12_ = (uint64_t)((auVar21 << 32) >> 24);
                        auVar16._2_13_ = auVar15._2_13_;
                        auVar16._0_2_ = auVar2._0_2_ & 255;
                        uVar32 = (((uint32_t)0 << 24) |
                                  (uint32_t)((((uint32_t)auVar2[9] << 16) | (uint16_t)((unsigned short)auVar2[8]))));
                        auVar4._10_2_ = 0;
                        auVar4._0_10_ = auVar16._0_10_;
                        auVar4._12_2_ = (short)Var18;
                        uVar24 = (((uint64_t)auVar4._10_4_ << 16) | (uint16_t)auVar20._0_2_);
                        auVar22._6_8_ = 0;
                        auVar22._0_6_ = uVar24;
                        auVar9._4_2_ = auVar15._2_2_;
                        auVar9._0_4_ = auVar16._0_4_;
                        auVar9._6_8_ = (uint64_t)((auVar22 << 64) >> 48);
                        auVar10[12] = auVar2[11];
                        auVar10._0_12_ = (uint64_t)auVar2[12] << 64;
                        auVar11._10_3_ = auVar10._10_3_;
                        auVar11._0_10_ = (unkuint10)auVar2[10] << 64;
                        auVar23._5_8_ = 0;
                        auVar23._0_5_ = auVar11._8_5_;
                        auVar12[4] = auVar2[9];
                        auVar12._0_4_ = uVar32;
                        auVar12[5] = 0;
                        auVar12._6_7_ = (uint64_t)((auVar23 << 64) >> 48);
                        lVar28 = uVar27 * uVar31 + uVar25;
                        pfVar1 = arg1 + lVar28;
                        *pfVar1 =
                            1.0 - ((float)(auVar16._0_4_ & 65535) * 0.003921569f + (float)auVar9._4_4_ * 1.5378702e-05);
                        pfVar1[1] =
                            1.0 - ((float)(int)uVar24 * 0.003921569f + (float)(auVar4._10_4_ >> 16) * 1.5378702e-05);
                        pfVar1[2] = 1.0 - ((float)auVar14._8_2_ * 0.003921569f + (float)auVar8._10_2_ * 1.5378702e-05);
                        pfVar1[3] =
                            1.0 - ((float)(uVar7 >> 8 & 65535) * 0.003921569f + (float)(uVar7 >> 24) * 1.5378702e-05);
                        pfVar1 = arg1 + lVar28 + 4;
                        *pfVar1 = 1.0 - ((float)(uVar32 & 65535) * 0.003921569f + (float)auVar12._4_4_ * 1.5378702e-05);
                        pfVar1[1] = 1.0 - ((float)auVar11._8_4_ * 0.003921569f +
                                           (float)(uint32_t)(auVar10._10_3_ >> 16) * 1.5378702e-05);
                        pfVar1[2] = 1.0 - ((float)auVar2[12] * 0.003921569f + (float)auVar2[13] * 1.5378702e-05);
                        pfVar1[3] = 1.0 - ((float)auVar2[14] * 0.003921569f + (float)auVar2[15] * 1.5378702e-05);
                        uVar25 = uVar25 + 8;
                        uVar27 = (unsigned long)m_bufferWidth;
                    } while (uVar25 < uVar27);
                }
                uVar31 = uVar31 + 1;
                puVar26 = puVar26 + uVar30 * 4;
            } while (uVar31 != uVar29);
        }
    }

    // 0x100827760
    void OcclusionManager::GetCPUDepthBuffer() {
        ((Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)field_48[0])->data();
    }

    // 0x100827780
    void OcclusionManager::GetCPUDepthBuffer() const {
        unsigned long in_RSI;

        ((Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)field_48[in_RSI])->data();
    }

    // 0x100827ac0
    void OcclusionManager::SetMinimumDepth(float arg1) {
        m_minimumDepth = arg1;
    }

    // 0x100828280
    float OcclusionManager::GetMinimumDepth() const {
        return m_minimumDepth;
    }

    // 0x1008a71f0
    void OcclusionManager::GetCullingStatsAvgTotal() const {
        (&field_672)->operator_cast_to_unsigned_int();
    }

    // 0x1008a7210
    void OcclusionManager::GetCullingStatsAvgIn() const {
        (&field_676)->operator_cast_to_unsigned_int();
    }

    // 0x1008a7230
    void OcclusionManager::GetCullingStatsAvgPassed() const {
        (&field_680)->operator_cast_to_unsigned_int();
    }

    // 0x1008b0550
    void OcclusionManager::SetRenderInvalidTransforms(bool arg1) {
        m_renderInvalidTransforms = arg1;
    }

} // namespace jag::graphics
