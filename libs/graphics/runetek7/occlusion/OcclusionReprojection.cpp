// libs/graphics/runetek7/occlusion/OcclusionReprojection.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "OcclusionReprojection.h"

namespace jag::graphics {
    // 0x1000096a0: OcclusionReprojection::IsCPUReprojectionReady() const has the same machine code as BaseApp::GetExitAfterInit()

    // 0x100827170
    OcclusionReprojection::OcclusionReprojection(OcclusionManager& occlusionManager, ProjectionMode projectionMode)
        : field_0(occlusionManager), m_cPUReprojectionReady(0) {
        int iVar1;
        int iVar2;

        *(uint64_t*)&field_1520 = 12884901888;
        field_1528 = projectionMode;
        if (projectionMode == 2) {
            LogAssert("projectionMode != ProjectionMode::OBLIQUE_PROJECTION",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "occlusion/OcclusionReprojection.cpp",
                      16, nullptr);
        }
        Array<float>* this_00 = (Array<float>*)std::array<OcclusionReprojection::FrameData, 2ul>::begin();
        Array<float>* pAVar3 = (Array<float>*)std::array<OcclusionReprojection::FrameData, 2ul>::end();
        for (; this_00 != pAVar3; this_00 = this_00 + 752) {
            iVar1 = field_0->GetBufferWidth();
            iVar2 = field_0->GetBufferHeight();
            this_00->set_max_size((unsigned long)(unsigned int)(iVar1 * iVar2), 0);
            iVar1 = field_0->GetBufferWidth();
            iVar2 = field_0->GetBufferHeight();
            (this_00 + 24)->set_max_size((unsigned long)(unsigned int)(iVar1 * iVar2), 0);
        }
    }

    // 0x1008272d0
    OcclusionReprojection::~OcclusionReprojection() {
        long lVar3 = std::array<OcclusionReprojection::FrameData, 2ul>::begin();
        long lVar2 = std::array<OcclusionReprojection::FrameData, 2ul>::end();
        for (; lVar3 != lVar2; lVar3 = lVar3 + 752) {
            if (((lVar3 + 48))->valid() != '\0') {
                ((lVar3 + 48))->wait();
            }
        }
        field_16.~array();
    }

    // 0x100827360
    void OcclusionReprojection::ReprojectOcclusionBuffer(const OcclusionManager& occlusionManager,
                                                         ThreadPool& threadPool, const SceneViewData& sceneViewData1,
                                                         const SceneViewData& sceneViewData2, bool arg5,
                                                         SceneViewData* sceneViewData3) {
        uint8_t* uint8_t;
        bool cVar1;
        unsigned int uVar2;
        long lVar5;
        uint64_t* puVar6;
        long lVar7;
        unsigned int uVar8;
        uint64_t in_register_00000081;
        bool arg2;
        SceneViewData* in_stack_00000008;
        __6 local_198;
        ReturnValue local_f0;
        uint32_t local_cc;
        unsigned int local_c8;
        unsigned int local_c4;
        float* local_c0;
        uint64_t local_b8;
        uint64_t uStack_b0;
        uint64_t local_a8;
        uint64_t uStack_a0;
        uint64_t local_98;
        uint64_t uStack_90;
        uint64_t local_88;
        uint64_t uStack_80;
        uint64_t local_78;
        uint64_t uStack_70;
        uint64_t local_68;
        uint64_t uStack_60;
        uint64_t local_58;
        uint64_t uStack_50;
        uint64_t local_48;
        uint64_t uStack_40;

        SceneViewData* local_e0 = (SceneViewData*)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg5);
        occlusionManager.field_8 = 0;
        float* pfVar3 = (float*)occlusionManager._vptr->GetCPUDepthBuffer();
        long lVar4 = threadPool.GetCPUDepthBuffer();
        if (pfVar3 != nullptr) {
            if ((lVar4 == 0) || (cVar1 = threadPool.DepthBufferCanOcclude(), !cVar1)) {
                if (RenderPass::m_useAsyncReprojection != '\0') {
                    lVar4 = std::array<OcclusionReprojection::FrameData, 2ul>::begin();
                    lVar5 = std::array<OcclusionReprojection::FrameData, 2ul>::end();
                    for (; lVar4 != lVar5; lVar4 = lVar4 + 752) {
                        *(uint8_t*)(lVar4 + 736) = 0;
                    }
                }
            } else {
                occlusionManager.field_8 = 1;
                local_c8 = threadPool.GetBufferWidth();
                local_c4 = threadPool.GetBufferHeight();
                local_c0 = pfVar3;
                if ((char)sceneViewData3 == '\0') {
                    local_cc = 0;
                } else {
                    local_cc = occlusionManager._vptr->DepthBufferCanOcclude();
                }
                if (RenderPass::m_useAsyncReprojection == '\0') {
                    *(uint32_t*)&occlusionManager[2].field_94 = 0;
                    lVar5 = std::array<OcclusionReprojection::FrameData, 2ul>::begin();
                    lVar7 = std::array<OcclusionReprojection::FrameData, 2ul>::end();
                    for (; lVar5 != lVar7; lVar5 = lVar5 + 752) {
                        *(uint8_t*)(lVar5 + 736) = 0;
                    }
                }
                uVar8 = *(unsigned int*)&occlusionManager[2].field_94;
                uint8_t = &occlusionManager.field_16;
                lVar5 = (*uint8_t)[(unsigned long) uVar8];
                (*((lVar5 + 64))) = *local_e0;
                puVar6 = (uint64_t*)sceneViewData2.GetScreen();
                local_78 = *puVar6;
                uStack_70 = puVar6[1];
                local_68 = puVar6[2];
                uStack_60 = puVar6[3];
                local_58 = puVar6[4];
                uStack_50 = puVar6[5];
                local_48 = puVar6[6];
                uStack_40 = puVar6[7];
                puVar6 = (uint64_t*)((WorldmapAreaMetadata*)(NXTPixToolkit*)sceneViewData2)->GetOrigin();
                local_198._76_8_ = *puVar6;
                local_198._84_8_ = puVar6[1];
                local_198._92_8_ = puVar6[2];
                local_198._100_8_ = puVar6[3];
                local_198._108_8_ = puVar6[4];
                local_198._116_8_ = puVar6[5];
                local_198._124_8_ = puVar6[6];
                local_198._132_8_ = puVar6[7];
                local_198.field_0 = local_c8;
                local_198.field_4 = local_c4;
                local_198._12_8_ = local_78;
                local_198._20_8_ = uStack_70;
                local_198._28_8_ = local_68;
                local_198._36_8_ = uStack_60;
                local_198._44_8_ = local_58;
                local_198._52_8_ = uStack_50;
                local_198._60_8_ = local_48;
                local_198._68_8_ = uStack_40;
                arg2 = (uint8_t)local_cc;
                local_198.field_8 = uVar8;
                local_198.field_144 = lVar4;
                local_198._152_1_ = arg2;
                local_198.field_160 = (OcclusionReprojection*)occlusionManager;
                local_b8 = local_198._76_8_;
                uStack_b0 = local_198._84_8_;
                local_a8 = local_198._92_8_;
                uStack_a0 = local_198._100_8_;
                local_98 = local_198._108_8_;
                uStack_90 = local_198._116_8_;
                local_88 = local_198._124_8_;
                uStack_80 = local_198._132_8_;
                if (RenderPass::m_useAsyncReprojection == '\0') {
                    ReprojectOcclusionBuffer(OcclusionManager const&, ThreadPool&, SceneViewData const&,
                                             SceneViewData const&, bool, SceneViewData*)::$_6::operator()(&local_198);
                    WriteReprojectionResult((OcclusionReprojection*)occlusionManager, local_c0, arg2,
                                            in_stack_00000008);
                } else {
                    ThreadPool::AddTask<OcclusionReprojection::ReprojectOcclusionBuffer(
                        OcclusionManager const&, ThreadPool&, SceneViewData const&, SceneViewData const&, bool,
                        SceneViewData*)::__6&>(&local_f0, (char*)sceneViewData1, (__6*)&local_198);
                    lVar4 = (*uint8_t)[(unsigned long)*(unsigned int*)&occlusionManager[2].field_94];
                    (*((lVar4 + 48))) = local_f0;
                    uVar8 = *(unsigned int*)&occlusionManager[2].field_94;
                    lVar4 = (*uint8_t)[(unsigned long) uVar8];
                    *(uint8_t*)(lVar4 + 736) = 1;
                    uVar8 = ~uVar8 & 1;
                    *(unsigned int*)&occlusionManager[2].field_94 = uVar8;
                    lVar4 = (*uint8_t)[(unsigned long) uVar8];
                    if (*(char*)(lVar4 + 736) == '\0') {
                        if (arg2 == false) {
                            uVar8 = occlusionManager._vptr->GetBufferHeight();
                            uVar2 = occlusionManager._vptr->GetBufferWidth();
                            ___bzero(local_c0, (unsigned long)uVar2 * (unsigned long)uVar8 * 4);
                            occlusionManager._vptr->SetMinimumDepth(0.0);
                        }
                    } else {
                        cVar1 = ((lVar4 + 48))->valid();
                        if (!cVar1) {
                            LogAssert("m_bufferedFrames[m_currentFrame].m_future.valid()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/occlusion/OcclusionReprojection.cpp",
                                      179, nullptr);
                        }
                        lVar4 = (*uint8_t)[(unsigned long)*(unsigned int*)&occlusionManager[2].field_94];
                        ((lVar4 + 48))->wait();
                        WriteReprojectionResult((OcclusionReprojection*)occlusionManager, local_c0, arg2,
                                                in_stack_00000008);
                    }
                }
            }
        }
    }

    // 0x100827950
    void OcclusionReprojection::WriteReprojectionResult(float* arg1, bool arg2, SceneViewData* sceneViewData) {
        Array<float>* this_00;
        OcclusionManager* this_01;
        int iVar1;
        int iVar2;
        unsigned int uVar3;
        unsigned int uVar4;
        float* pfVar6;
        uint64_t in_register_00000011;
        unsigned long arg1_00;
        float local_3c;
        void* local_38;

        void* pvVar5 = &field_16[(unsigned long)field_1520];
        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            local_38 = (void*)((Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)((long)pvVar5 + 24))->data();
            uVar3 = field_0->GetBufferHeight();
            uVar4 = field_0->GetBufferWidth();
            _memcpy(arg1, local_38, (unsigned long)uVar4 * (unsigned long)uVar3 * 4);
            field_0->SetMinimumDepth(*(float*)((long)pvVar5 + 740));
            field_0->SetSuccessfulDepthReadFrame();
        } else {
            local_38 = pvVar5;
            iVar1 = field_0->GetBufferHeight();
            iVar2 = field_0->GetBufferWidth();
            if (iVar2 * iVar1 != 0) {
                this_00 = (Array<float>*)((long)local_38 + 24);
                arg1_00 = 0;
                do {
                    pfVar6 = (float*)(*this_00)[arg1_00];
                    pfVar6 = std::max<float>(*arg1, *pfVar6);
                    *arg1 = *pfVar6;
                    arg1_00 = arg1_00 + 1;
                    iVar1 = field_0->GetBufferHeight();
                    iVar2 = field_0->GetBufferWidth();
                    arg1 = arg1 + 1;
                } while (arg1_00 < (unsigned int)(iVar2 * iVar1));
            }
            this_01 = field_0;
            local_3c = (float)this_01->GetMinimumDepth();
            pvVar5 = local_38;
            pfVar6 = std::min<float>(local_3c, *((float*)((long)local_38 + 740)));
            this_01->SetMinimumDepth(*pfVar6);
        }
        if (sceneViewData != nullptr) {
            *sceneViewData = (*((SceneViewData*)((long)pvVar5 + 64)));
        }
    }

    // 0x100827ad0
    void OcclusionReprojection::ReprojectOcclusionBuffer(OcclusionManager const&, ThreadPool&, SceneViewData const&,
                                                         SceneViewData const&, bool,
                                                         SceneViewData*)::$_6::operator()() const {
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        unsigned long uVar10;
        uint32_t* puVar11;
        unsigned long uVar13;
        long lVar14;
        Matrix44T<float> local_178;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* local_88;
        Array<float>* local_80;
        unsigned long local_78;
        unsigned long local_70;
        unsigned int local_5c;
        unsigned long local_48;
        float local_3c;

        OcclusionReprojection* pOVar12 = field_160;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* pAVar7 = &pOVar12->field_16[(unsigned long)field_8];
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* local_68 = pAVar7;
        math::Matrix44T<float> local_1f8(field_12);
        local_1f8 = math::Matrix44T<float>::Invert(nullptr);
        math::Matrix44T<float> local_1b8(field_76);
        local_1b8 = math::Matrix44T<float>::Invert(nullptr);
        uint64_t* puVar8 = (uint64_t*)((pAVar7 + 64))->GetImmediateThreadPool();
        uint64_t local_138 = *puVar8;
        uint64_t uStack_130 = puVar8[1];
        uint64_t local_128 = puVar8[2];
        uint64_t uStack_120 = puVar8[3];
        uint64_t local_118 = puVar8[4];
        uint64_t uStack_110 = puVar8[5];
        uint64_t local_108 = puVar8[6];
        uint64_t uStack_100 = puVar8[7];
        local_178* local_1f8;
        puVar8 = &local_1b8[0];
        local_138 = *puVar8;
        uStack_130 = puVar8[1];
        puVar8 = &local_1b8[1];
        uint64_t local_f8 = *puVar8;
        uint64_t uStack_f0 = puVar8[1];
        puVar8 = &local_1b8[2];
        uint64_t local_e8 = *puVar8;
        uint64_t uStack_e0 = puVar8[1];
        puVar8 = &local_1b8[3];
        uint64_t local_d8 = *puVar8;
        uint64_t uStack_d0 = puVar8[1];
        puVar8 = &local_178[0];
        uint64_t local_c8 = *puVar8;
        uint64_t uStack_c0 = puVar8[1];
        puVar8 = &local_178[1];
        uint64_t local_b8 = *puVar8;
        uint64_t uStack_b0 = puVar8[1];
        puVar8 = &local_178[2];
        uint64_t local_a8 = *puVar8;
        uint64_t uStack_a0 = puVar8[1];
        puVar8 = &local_178[3];
        uint64_t local_98 = *puVar8;
        uint64_t uStack_90 = puVar8[1];
        unsigned int uVar1 = field_0;
        unsigned int uVar2 = field_4;
        auto pfVar9 = local_68->data();
        unsigned long local_58 = (unsigned long)uVar1;
        unsigned long local_50 = (unsigned long)uVar2;
        if (field_152 == '\0') {
            iVar4 = pOVar12->field_0->GetBufferHeight();
            iVar3 = pOVar12->field_0->GetBufferWidth();
            if (iVar3 * iVar4 != 0) {
                uVar13 = 0;
                do {
                    pfVar9[uVar13] = 2.0;
                    uVar13 = uVar13 + 1;
                    iVar4 = pOVar12->field_0->GetBufferHeight();
                    iVar3 = pOVar12->field_0->GetBufferWidth();
                } while (uVar13 < (unsigned int)(iVar3 * iVar4));
            }
        } else {
            uVar1 = pOVar12->field_0->GetBufferHeight();
            uVar2 = pOVar12->field_0->GetBufferWidth();
            ___bzero(pfVar9, (unsigned long)uVar2 * (unsigned long)uVar1 * 4);
        }
        OcclusionReprojection* local_38 = pOVar12;
        if (field_4 != 0) {
            local_70 = (((uint64_t)local_70._4_4_ << 32) | (uint32_t)((float)(long)local_58));
            local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)((float)(long)local_50));
            lVar14 = 0;
            uVar13 = 0;
            do {
                uVar10 = (unsigned long)field_0;
                local_50 = uVar13;
                if (uVar10 != 0) {
                    local_58 = (((uint64_t)local_58._4_4_ << 32) | (uint32_t)(1.0 - (float)uVar13 / (float)local_48));
                    uVar13 = 0;
                    do {
                        ReprojectAndRenderDepth(local_38, pfVar9, *(float*)(uVar10 * lVar14 + field_144 + uVar13 * 4),
                                                (float)uVar13 / (float)local_70, (float)local_58,
                                                (float___vector_4_*)&local_138, (float___vector_4_*)&local_f8,
                                                (float___vector_4_*)&local_e8, (float___vector_4_*)&local_d8,
                                                (float___vector_4_*)&local_c8, (float___vector_4_*)&local_b8,
                                                (float___vector_4_*)&local_a8, (float___vector_4_*)&local_98);
                        uVar13 = uVar13 + 1;
                        uVar10 = (unsigned long)field_0;
                    } while (uVar13 < uVar10);
                }
                uVar13 = local_50 + 1;
                lVar14 = lVar14 + 4;
            } while (uVar13 < field_4);
        }
        pOVar12 = local_38;
        *(uint32_t*)(local_68 + 740) = 2139095039;
        if (*(int*)&local_38->field_1524 % 2 != 1) {
            LogAssert("m_occlusionDilationKernelSize % 2 == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "occlusion/OcclusionReprojection.cpp",
                      140, nullptr);
        }
        iVar4 = *(int*)&local_38->field_1524;
        iVar3 = local_38->field_0->GetBufferHeight();
        if (iVar3 != 0) {
            local_88 = local_68 + 740;
            local_5c = -(iVar4 / 2);
            local_78 = (unsigned long)local_5c;
            local_80 = (Array<float>*)(local_68 + 24);
            local_48 = 0;
            do {
                iVar4 = pOVar12->field_0->GetBufferWidth();
                if (iVar4 != 0) {
                    local_58 = (((uint64_t)local_58._4_4_ << 32) | (uint32_t)((int)local_48 + (int)local_78));
                    uVar13 = 0;
                    uVar10 = local_78 & 4294967295;
                    do {
                        local_3c = 2.0;
                        local_70 = uVar13;
                        if (0 < *(int*)&pOVar12->field_1524) {
                            iVar4 = 0;
                            uVar1 = local_5c;
                            do {
                                iVar3 = (int)(float)local_58 + iVar4;
                                if (((-1 < iVar3) && (iVar5 = local_38->field_0->GetBufferHeight(), pOVar12 = local_38,
                                                      iVar3 < iVar5)) &&
                                    (0 < *(int*)&local_38->field_1524)) {
                                    iVar3 = 0;
                                    do {
                                        iVar5 = (int)uVar10 + iVar3;
                                        if ((-1 < iVar5) && (iVar6 = local_38->field_0->GetBufferWidth(),
                                                             pOVar12 = local_38, iVar5 < iVar6)) {
                                            iVar6 = local_38->field_0->GetBufferWidth();
                                            pfVar9 = (float*)(*local_68)[(unsigned long)(iVar5 + iVar6 * uVar1)];
                                            pfVar9 = std::min<float>(*pfVar9, local_3c);
                                            local_3c = *pfVar9;
                                            pOVar12 = local_38;
                                        }
                                        iVar3 = iVar3 + 1;
                                    } while (iVar3 < *(int*)&pOVar12->field_1524);
                                }
                                iVar4 = iVar4 + 1;
                                uVar1 = uVar1 + 1;
                            } while (iVar4 < *(int*)&pOVar12->field_1524);
                        }
                        pAVar7 = local_88;
                        pfVar9 = std::min<float>(local_3c, *local_88);
                        *(float*)pAVar7 = *pfVar9;
                        local_50 = (((uint64_t)local_50._4_4_ << 32) | (uint32_t)local_3c);
                        iVar3 = pOVar12->field_0->GetBufferWidth();
                        iVar4 = (int)local_70;
                        puVar11 =
                            (uint32_t*)(*local_80)[(unsigned long)(unsigned int)(iVar3 * (int)(float)local_48 + iVar4)];
                        *puVar11 = (uint32_t)local_50;
                        uVar2 = iVar4 + 1;
                        uVar13 = (unsigned long)uVar2;
                        uVar1 = pOVar12->field_0->GetBufferWidth();
                        uVar10 = (unsigned long)((int)uVar10 + 1);
                    } while (uVar2 < uVar1);
                }
                uVar2 = (int)local_48 + 1;
                uVar1 = pOVar12->field_0->GetBufferHeight();
                local_5c = local_5c + 1;
                local_48 = (unsigned long)uVar2;
            } while (uVar2 < uVar1);
        }
    }

    // 0x100828060
    void OcclusionReprojection::ReprojectAndRenderDepth(float* arg1, float arg2, float arg3, float arg4,
                                                        const float __vector(4) & arg5, const float __vector(4) & arg6,
                                                        const float __vector(4) & arg7, const float __vector(4) & arg8,
                                                        const float __vector(4) & arg9, const float __vector(4) & arg10,
                                                        const float __vector(4) & arg11,
                                                        const float __vector(4) & arg12) const {
        uint8_t auVar2[16];
        uint8_t auVar6[16];

        float fVar5 = arg3 + arg3 - 1.0;
        float fVar7 = arg4 + arg4 - 1.0;
        float fVar8 = (1.0 - arg2) + (1.0 - arg2) - 1.0;
        float fVar9 = *(float*)(arg8 + 12) * 1.0 + fVar8 * *(float*)(arg7 + 12) + fVar7 * *(float*)(arg6 + 12) +
                      fVar5 * *(float*)(arg5 + 12);
        auVar2._4_4_ = fVar9;
        auVar2._0_4_ = fVar9;
        auVar2._8_4_ = fVar9;
        auVar2._12_4_ = fVar9;
        auVar2 = rcpps(auVar2, auVar2);
        float fVar1 = auVar2._0_4_ *
                      (*(float*)arg8 * 1.0 + fVar8 * *(float*)arg7 + fVar7 * *(float*)arg6 + fVar5 * *(float*)arg5);
        float fVar3 = auVar2._4_4_ * (*(float*)(arg8 + 4) * 1.0 + fVar8 * *(float*)(arg7 + 4) +
                                      fVar7 * *(float*)(arg6 + 4) + fVar5 * *(float*)(arg5 + 4));
        fVar8 = auVar2._8_4_ * (*(float*)(arg8 + 8) * 1.0 + fVar8 * *(float*)(arg7 + 8) + fVar7 * *(float*)(arg6 + 8) +
                                fVar5 * *(float*)(arg5 + 8));
        fVar9 = auVar2._12_4_ * fVar9;
        fVar5 = fVar9 * *(float*)arg12 + fVar8 * *(float*)arg11 + fVar3 * *(float*)arg10 + fVar1 * *(float*)arg9;
        fVar7 = fVar9 * *(float*)(arg12 + 4) + fVar8 * *(float*)(arg11 + 4) + fVar3 * *(float*)(arg10 + 4) +
                fVar1 * *(float*)(arg9 + 4);
        float fVar4 = fVar9 * *(float*)(arg12 + 8) + fVar8 * *(float*)(arg11 + 8) + fVar3 * *(float*)(arg10 + 8) +
                      fVar1 * *(float*)(arg9 + 8);
        fVar1 = fVar9 * *(float*)(arg12 + 12) + fVar8 * *(float*)(arg11 + 12) + fVar3 * *(float*)(arg10 + 12) +
                fVar1 * *(float*)(arg9 + 12);
        if (field_1528 == 0) {
            auVar6._4_4_ = fVar1;
            auVar6._0_4_ = fVar1;
            auVar6._8_4_ = fVar1;
            auVar6._12_4_ = fVar1;
            auVar2 = rcpps(auVar6, auVar6);
            fVar5 = fVar5 * auVar2._0_4_;
            fVar7 = fVar7 * auVar2._4_4_;
            fVar4 = fVar4 * auVar2._8_4_;
            fVar1 = fVar1 * auVar2._12_4_;
        }
        float local_28 = fVar5 * 0.5 + 0.5;
        float fStack_24 = fVar7 * 0.5 + 0.5;
        float fStack_20 = fVar4 * 0.5 + 0.5;
        float fStack_1c = fVar1 * 0.5 + 0.5;
        RenderDepth(arg1, local_28);
    }

    // 0x100828140
    void OcclusionReprojection::RenderDepth(float* arg1, const math::Vector4T<float>& vector4) const {
        float fVar1;
        float fVar2;
        unsigned int uVar3;
        unsigned int uVar4;
        int iVar5;
        int iVar7;

        auto pfVar6 = vector4.SSOBeginPtr();
        if (0.0 < *pfVar6 || *pfVar6 == 0.0) {
            pfVar6 = (float*)vector4.SSOBeginPtr();
            if (*pfVar6 <= 1.0 && *pfVar6 != 1.0) {
                pfVar6 = (float*)vector4.y();
                if (0.0 < *pfVar6) {
                    pfVar6 = (float*)vector4.y();
                    if (*pfVar6 <= 1.0) {
                        pfVar6 = (float*)vector4.SSOBeginPtr();
                        fVar1 = *pfVar6;
                        uVar3 = field_0->GetBufferWidth();
                        pfVar6 = (float*)vector4.y();
                        fVar2 = *pfVar6;
                        uVar4 = field_0->GetBufferHeight();
                        iVar7 = (int)((float)uVar4 * (1.0 - fVar2));
                        pfVar6 = (float*)vector4.second();
                        fVar2 = *pfVar6;
                        iVar5 = field_0->GetBufferWidth();
                        if (1.0 - fVar2 < arg1[(iVar5 * iVar7 + (int)((float)uVar3 * fVar1))]) {
                            iVar5 = field_0->GetBufferWidth();
                            arg1[(iVar5 * iVar7 + (int)((float)uVar3 * fVar1))] = 1.0 - fVar2;
                        }
                    }
                }
            }
        }
    }

} // namespace jag::graphics
