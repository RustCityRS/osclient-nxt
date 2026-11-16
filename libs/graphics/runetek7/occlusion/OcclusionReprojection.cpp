// libs/graphics/runetek7/occlusion/OcclusionReprojection.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "OcclusionReprojection.h"

namespace jag::graphics {
    // 0x1000096a0: the linker folded this into BaseApp::GetExitAfterInit(), which has identical code
    OcclusionReprojection::IsCPUReprojectionReady() const;

    // 0x100827170, 256 bytes, base-object constructor, placed by class name
    // OcclusionReprojection::OcclusionReprojection(OcclusionManager&, ProjectionMode)
    void OcclusionReprojection::OcclusionReprojection(OcclusionManager* param_1, int param_3) {
        undefined1* this_00;
        int iVar1;
        int iVar2;
        Array<float, eastl::allocator>* this_01;
        Array<float, eastl::allocator>* pAVar3;

        field_0 = param_1;
        m_cPUReprojectionReady = 0;
        this_00 = &field_16;
        new (this_00) std::array<OcclusionReprojection::FrameData, 2ul>();
        *(undefined8*)&field_1520 = 12884901888;
        field_1528 = param_3;
        if (param_3 == 2) {
            /* WARNING: Subroutine does not return */
            LogAssert("projectionMode != ProjectionMode::OBLIQUE_PROJECTION",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "occlusion/OcclusionReprojection.cpp",
                      16, (char*)0);
        }
        this_01 = (Array<float, eastl::allocator>*)this_00->begin();
        pAVar3 = (Array<float, eastl::allocator>*)this_00->end();
        for (; this_01 != pAVar3; this_01 = this_01 + 752) {
            iVar1 = field_0->GetBufferWidth();
            iVar2 = field_0->GetBufferHeight();
            this_01->set_max_size((ulong)(uint)(iVar1 * iVar2), 0);
            iVar1 = field_0->GetBufferWidth();
            iVar2 = field_0->GetBufferHeight();
            (this_01 + 24)->set_max_size((ulong)(uint)(iVar1 * iVar2), 0);
        }
    }

    // 0x1008272c0, 16 bytes, complete-object constructor, placed by class name
    // OcclusionReprojection::OcclusionReprojection(OcclusionManager&, ProjectionMode): jumps straight to the base-object constructor

    // 0x1008272d0, 128 bytes, base-object destructor, placed by class name
    // OcclusionReprojection::~OcclusionReprojection()
    void OcclusionReprojection::~OcclusionReprojection() {
        long lVar2;
        long lVar3;
        undefined1* this_00;

        this_00 = &field_16;
        lVar3 = this_00->begin();
        lVar2 = this_00->end();
        for (; lVar3 != lVar2; lVar3 = lVar3 + 752) {
            if (((lVar3 + 48))->valid() != '\0') {
                std::future<void>::wait();
            }
        }
        this_00->~array();
    }

    // 0x100827350, 16 bytes, complete-object destructor, placed by class name
    // OcclusionReprojection::~OcclusionReprojection(): jumps straight to the base-object destructor

    // 0x100827360, 1024 bytes, placed by class name
    // OcclusionReprojection::ReprojectOcclusionBuffer(OcclusionManager const&, ThreadPool&, SceneViewData const&, SceneViewData const&, bool, SceneViewData*)
    void OcclusionReprojection::ReprojectOcclusionBuffer(OcclusionManager* param_1, ThreadPool* param_2,
                                                         SceneViewData* param_3, SceneViewData* param_4, bool param_5,
                                                         SceneViewData* param_6) {
        undefined1* this_00;
        char cVar1;
        uint uVar2;
        float* pfVar3;
        long lVar4;
        long lVar5;
        undefined8* puVar6;
        long lVar7;
        uint uVar8;
        bool bVar9;
        __6 local_198;
        undefined1 local_f0[8];
        undefined4 local_cc;
        uint local_c8;
        uint local_c4;
        float* local_c0;
        undefined8 local_b8;
        undefined8 uStack_b0;
        undefined8 local_a8;
        undefined8 uStack_a0;
        undefined8 local_98;
        undefined8 uStack_90;
        undefined8 local_88;
        undefined8 uStack_80;
        undefined8 local_78;
        undefined8 uStack_70;
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58;
        undefined8 uStack_50;
        undefined8 local_48;
        undefined8 uStack_40;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        m_cPUReprojectionReady = 0;
        pfVar3 = (float*)field_0->GetCPUDepthBuffer();
        lVar4 = param_1->GetCPUDepthBuffer();
        if (pfVar3 != (float*)0) {
            if ((lVar4 == 0) || (cVar1 = param_1->DepthBufferCanOcclude(), cVar1 == '\0')) {
                if (RenderPass::m_useAsyncReprojection != '\0') {
                    lVar4 = (&field_16)->begin();
                    lVar5 = (&field_16)->end();
                    for (; lVar4 != lVar5; lVar4 = lVar4 + 752) {
                        *(undefined1*)(lVar4 + 736) = 0;
                    }
                }
            } else {
                m_cPUReprojectionReady = 1;
                local_c8 = param_1->GetBufferWidth();
                local_c4 = param_1->GetBufferHeight();
                local_c0 = pfVar3;
                if (param_5) {
                    local_cc = field_0->DepthBufferCanOcclude();
                } else {
                    local_cc = 0;
                }
                if (RenderPass::m_useAsyncReprojection == '\0') {
                    field_1520 = 0;
                    lVar5 = (&field_16)->begin();
                    lVar7 = (&field_16)->end();
                    for (; lVar5 != lVar7; lVar5 = lVar5 + 752) {
                        *(undefined1*)(lVar5 + 736) = 0;
                    }
                }
                uVar8 = field_1520;
                this_00 = &field_16;
                lVar5 = std::array<OcclusionReprojection::FrameData, 2ul>::operator[](
                    (array<OcclusionReprojection::FrameData, 2ul>*)this_00, (ulong)uVar8);
                SceneViewData::operator=((SceneViewData*)(lVar5 + 64), param_4);
                puVar6 = (undefined8*)param_3->GetScreen();
                local_78 = *puVar6;
                uStack_70 = puVar6[1];
                local_68 = puVar6[2];
                uStack_60 = puVar6[3];
                local_58 = puVar6[4];
                uStack_50 = puVar6[5];
                local_48 = puVar6[6];
                uStack_40 = puVar6[7];
                puVar6 = (undefined8*)((NXTPixToolkit*)param_3)->GetOrigin();
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
                bVar9 = SUB41(local_cc, 0);
                local_198.field_8 = uVar8;
                local_198.field_144 = lVar4;
                local_198._152_1_ = bVar9;
                local_198.field_160 = this;
                local_b8 = local_198._76_8_;
                uStack_b0 = local_198._84_8_;
                local_a8 = local_198._92_8_;
                uStack_a0 = local_198._100_8_;
                local_98 = local_198._108_8_;
                uStack_90 = local_198._116_8_;
                local_88 = local_198._124_8_;
                uStack_80 = local_198._132_8_;
                if (RenderPass::m_useAsyncReprojection == '\0') {
                    ReprojectOcclusionBuffer(OcclusionManager_const&, ThreadPool&, SceneViewData_const&,
                                             SceneViewData_const&, bool, SceneViewData*)::$_6::operator()(&local_198);
                    WriteReprojectionResult(this, local_c0, bVar9, param_6);
                } else {
                    ThreadPool::AddTask<OcclusionReprojection::ReprojectOcclusionBuffer(
                        OcclusionManager_const&, ThreadPool&, SceneViewData_const&, SceneViewData_const&, bool,
                        SceneViewData*)::__6&>((ThreadPool*)local_f0, (char*)param_2, &local_198);
                    lVar4 = std::array<OcclusionReprojection::FrameData, 2ul>::operator[](
                        (array<OcclusionReprojection::FrameData, 2ul>*)this_00, (ulong)field_1520);
                    std::future<void>::operator=((future<void>*)(lVar4 + 48), (future*)local_f0);
                    local_f0->~future();
                    uVar8 = field_1520;
                    lVar4 = std::array<OcclusionReprojection::FrameData, 2ul>::operator[](
                        (array<OcclusionReprojection::FrameData, 2ul>*)this_00, (ulong)uVar8);
                    *(undefined1*)(lVar4 + 736) = 1;
                    uVar8 = ~uVar8 & 1;
                    field_1520 = uVar8;
                    lVar4 = std::array<OcclusionReprojection::FrameData, 2ul>::operator[](
                        (array<OcclusionReprojection::FrameData, 2ul>*)this_00, (ulong)uVar8);
                    if (*(char*)(lVar4 + 736) == '\0') {
                        if (bVar9 == false) {
                            uVar8 = field_0->GetBufferHeight();
                            uVar2 = field_0->GetBufferWidth();
                            ___bzero(local_c0, (ulong)uVar2 * (ulong)uVar8 * 4);
                            (field_0, 0.0)->SetMinimumDepth();
                        }
                    } else {
                        cVar1 = ((lVar4 + 48))->valid();
                        if (cVar1 == '\0') {
                            /* WARNING: Subroutine does not return */
                            LogAssert("m_bufferedFrames[m_currentFrame].m_future.valid()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/occlusion/OcclusionReprojection.cpp",
                                      179, (char*)0);
                        }
                        std::array<OcclusionReprojection::FrameData, 2ul>::operator[](
                            (array<OcclusionReprojection::FrameData, 2ul>*)this_00, (ulong)field_1520);
                        std::future<void>::wait();
                        WriteReprojectionResult(this, local_c0, bVar9, param_6);
                    }
                }
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100827950, 368 bytes, placed by class name
    // OcclusionReprojection::WriteReprojectionResult(float*, bool, SceneViewData*)
    void OcclusionReprojection::WriteReprojectionResult(float* param_1, bool param_2, SceneViewData* param_3) {
        Array<float, eastl::allocator>* this_00;
        OcclusionManager* this_01;
        int iVar1;
        int iVar2;
        uint uVar3;
        uint uVar4;
        void* pvVar5;
        float* pfVar6;
        undefined7 in_register_00000011;
        ulong uVar7;
        float local_3c;
        void* local_38;

        pvVar5 = (void*)std::array<OcclusionReprojection::FrameData, 2ul>::operator[](
            (array<OcclusionReprojection::FrameData, 2ul>*)&field_16, (ulong)field_1520);
        if ((int)CONCAT71(in_register_00000011, param_2) == 0) {
            local_38 = (void*)(((long)pvVar5 + 24))->data();
            uVar3 = field_0->GetBufferHeight();
            uVar4 = field_0->GetBufferWidth();
            _memcpy(param_1, local_38, (ulong)uVar4 * (ulong)uVar3 * 4);
            (field_0, *(float*)((long)pvVar5 + 740))->SetMinimumDepth();
            field_0->SetSuccessfulDepthReadFrame();
        } else {
            local_38 = pvVar5;
            iVar1 = field_0->GetBufferHeight();
            iVar2 = field_0->GetBufferWidth();
            if (iVar2 * iVar1 != 0) {
                this_00 = (Array<float, eastl::allocator>*)((long)local_38 + 24);
                uVar7 = 0;
                do {
                    pfVar6 = (float*)Array<float, eastl::allocator>::operator[](this_00, uVar7);
                    pfVar6 = std::max<float>(param_1, pfVar6);
                    *param_1 = *pfVar6;
                    uVar7 = uVar7 + 1;
                    iVar1 = field_0->GetBufferHeight();
                    iVar2 = field_0->GetBufferWidth();
                    param_1 = param_1 + 1;
                } while (uVar7 < (uint)(iVar2 * iVar1));
            }
            this_01 = field_0;
            local_3c = (float)this_01->GetMinimumDepth();
            pvVar5 = local_38;
            pfVar6 = std::min<float>(&local_3c, (float*)((long)local_38 + 740));
            this_01->SetMinimumDepth(*pfVar6);
        }
        if (param_3 != (SceneViewData*)0) {
            SceneViewData::operator=(param_3, (SceneViewData*)((long)pvVar5 + 64));
        }
    }

    // 0x100827ad0, 1424 bytes, placed by class name
    // OcclusionReprojection::ReprojectOcclusionBuffer(OcclusionManager const&, ThreadPool&, SceneViewData const&, SceneViewData const&, bool, SceneViewData*)::$_6::operator()() const
    /* OcclusionReprojection::ReprojectOcclusionBuffer(OcclusionManager
   const&, ThreadPool&, SceneViewData const&, SceneViewData
   const&, bool, SceneViewData*)::$_6::TEMPNAMEPLACEHOLDERVALUE() const */

    void OcclusionReprojection::ReprojectOcclusionBuffer(OcclusionManager_const&, ThreadPool&, SceneViewData_const&,
                                                         SceneViewData_const&, bool,
                                                         SceneViewData*)::$_6::operator()() {
        uint uVar1;
        uint uVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* pAVar7;
        undefined8* puVar8;
        float* pfVar9;
        ulong uVar10;
        undefined4* puVar11;
        OcclusionReprojection* pOVar12;
        ulong uVar13;
        long lVar14;
        Matrix44T local_1f8;
        Matrix44T<float> local_1b8[64];
        undefined1 local_178[72];
        undefined8 uStack_130;
        undefined8 local_128;
        undefined8 uStack_120;
        undefined8 local_118;
        undefined8 uStack_110;
        undefined8 local_108;
        undefined8 uStack_100;
        _func_float_int* local_f8;
        undefined8 uStack_f0;
        _func_float_int* local_e8;
        undefined8 uStack_e0;
        _func_float_int* local_d8;
        undefined8 uStack_d0;
        _func_float_int* local_c8;
        undefined8 uStack_c0;
        _func_float_int* local_b8;
        undefined8 uStack_b0;
        _func_float_int* local_a8;
        undefined8 uStack_a0;
        _func_float_int* local_98;
        undefined8 uStack_90;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* local_88;
        Array<float, eastl::allocator>* local_80;
        ulong local_78;
        ulong local_70;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* local_68;
        uint local_5c;
        ulong local_58;
        ulong local_50;
        ulong local_48;
        float local_3c;
        OcclusionReprojection* local_38;

        pOVar12 = field_160;
        pAVar7 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)
                std::array<OcclusionReprojection::FrameData, 2ul>::operator[](
                    (array<OcclusionReprojection::FrameData, 2ul>*)&pOVar12->field_16, (ulong)field_8);
        local_68 = pAVar7;
        new (&local_1f8) math::Matrix44T<float>((array*)&field_12);
        local_1f8.Invert(0);
        math::Matrix44T<float>::Matrix44T(local_1b8, (array*)&field_76);
        local_1b8->Invert(0);
        puVar8 = (undefined8*)((pAVar7 + 64))->GetImmediateThreadPool();
        local_178._64_8_ = *puVar8;
        uStack_130 = puVar8[1];
        local_128 = puVar8[2];
        uStack_120 = puVar8[3];
        local_118 = puVar8[4];
        uStack_110 = puVar8[5];
        local_108 = puVar8[6];
        uStack_100 = puVar8[7];
        math::operator*((math*)local_178, &local_1f8, (Matrix44T*)(local_178 + 64));
        puVar8 = (undefined8*)math::Matrix44T<float>::operator[](local_1b8, 0);
        local_178._64_8_ = *puVar8;
        uStack_130 = puVar8[1];
        puVar8 = (undefined8*)math::Matrix44T<float>::operator[](local_1b8, 1);
        local_f8 = (_func_float_int*)*puVar8;
        uStack_f0 = puVar8[1];
        puVar8 = (undefined8*)math::Matrix44T<float>::operator[](local_1b8, 2);
        local_e8 = (_func_float_int*)*puVar8;
        uStack_e0 = puVar8[1];
        puVar8 = (undefined8*)math::Matrix44T<float>::operator[](local_1b8, 3);
        local_d8 = (_func_float_int*)*puVar8;
        uStack_d0 = puVar8[1];
        puVar8 = (undefined8*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)local_178, 0);
        local_c8 = (_func_float_int*)*puVar8;
        uStack_c0 = puVar8[1];
        puVar8 = (undefined8*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)local_178, 1);
        local_b8 = (_func_float_int*)*puVar8;
        uStack_b0 = puVar8[1];
        puVar8 = (undefined8*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)local_178, 2);
        local_a8 = (_func_float_int*)*puVar8;
        uStack_a0 = puVar8[1];
        puVar8 = (undefined8*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)local_178, 3);
        local_98 = (_func_float_int*)*puVar8;
        uStack_90 = puVar8[1];
        uVar1 = field_0;
        uVar2 = field_4;
        pfVar9 = (float*)local_68->data();
        local_58 = (ulong)uVar1;
        local_50 = (ulong)uVar2;
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
                } while (uVar13 < (uint)(iVar3 * iVar4));
            }
        } else {
            uVar1 = pOVar12->field_0->GetBufferHeight();
            uVar2 = pOVar12->field_0->GetBufferWidth();
            ___bzero(pfVar9, (ulong)uVar2 * (ulong)uVar1 * 4);
        }
        local_38 = pOVar12;
        if (field_4 != 0) {
            local_70 = CONCAT44(local_70._4_4_, (float)(long)local_58);
            local_48 = CONCAT44(local_48._4_4_, (float)(long)local_50);
            lVar14 = 0;
            uVar13 = 0;
            do {
                uVar10 = (ulong)field_0;
                local_50 = uVar13;
                if (uVar10 != 0) {
                    local_58 = CONCAT44(local_58._4_4_, 1.0 - (float)uVar13 / (float)local_48);
                    uVar13 = 0;
                    do {
                        ReprojectAndRenderDepth(local_38, pfVar9, *(float*)(uVar10 * lVar14 + field_144 + uVar13 * 4),
                                                (float)uVar13 / (float)local_70, (float)local_58,
                                                (_func_float_int**)(local_178 + 64), &local_f8, &local_e8, &local_d8,
                                                &local_c8, &local_b8, &local_a8, &local_98);
                        uVar13 = uVar13 + 1;
                        uVar10 = (ulong)field_0;
                    } while (uVar13 < uVar10);
                }
                uVar13 = local_50 + 1;
                lVar14 = lVar14 + 4;
            } while (uVar13 < field_4);
        }
        pOVar12 = local_38;
        *(undefined4*)(local_68 + 740) = 2139095039;
        if (*(int*)&local_38->field_1524 % 2 != 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_occlusionDilationKernelSize % 2 == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "occlusion/OcclusionReprojection.cpp",
                      140, (char*)0);
        }
        iVar4 = *(int*)&local_38->field_1524;
        iVar3 = local_38->field_0->GetBufferHeight();
        if (iVar3 != 0) {
            local_88 = local_68 + 740;
            local_5c = -(iVar4 / 2);
            local_78 = (ulong)local_5c;
            local_80 = (Array<float, eastl::allocator>*)(local_68 + 24);
            local_48 = 0;
            do {
                iVar4 = pOVar12->field_0->GetBufferWidth();
                if (iVar4 != 0) {
                    local_58 = CONCAT44(local_58._4_4_, (int)local_48 + (int)local_78);
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
                                            pfVar9 = (float*)Array<float, eastl::allocator>::operator[](
                                                (Array<float, eastl::allocator>*)local_68,
                                                (ulong)(iVar5 + iVar6 * uVar1));
                                            pfVar9 = std::min<float>(pfVar9, &local_3c);
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
                        pfVar9 = std::min<float>(&local_3c, (float*)local_88);
                        *(float*)pAVar7 = *pfVar9;
                        local_50 = CONCAT44(local_50._4_4_, local_3c);
                        iVar3 = pOVar12->field_0->GetBufferWidth();
                        iVar4 = (int)local_70;
                        puVar11 = (undefined4*)Array<float, eastl::allocator>::operator[](
                            local_80, (ulong)(uint)(iVar3 * (int)(float)local_48 + iVar4));
                        *puVar11 = (undefined4)local_50;
                        uVar2 = iVar4 + 1;
                        uVar13 = (ulong)uVar2;
                        uVar1 = pOVar12->field_0->GetBufferWidth();
                        uVar10 = (ulong)((int)uVar10 + 1);
                    } while (uVar2 < uVar1);
                }
                uVar2 = (int)local_48 + 1;
                uVar1 = pOVar12->field_0->GetBufferHeight();
                local_5c = local_5c + 1;
                local_48 = (ulong)uVar2;
            } while (uVar2 < uVar1);
        }
    }

    // 0x100828060, 224 bytes, placed by class name
    // OcclusionReprojection::ReprojectAndRenderDepth(float*, float, float, float, float __vector(4) const&, float __vector(4) const&, float __vector(4) const&, float __vector(4) const&, float __vector(4) const&, float __vector(4) const&, float __vector(4) const&, float __vector(4) const&) const
    void OcclusionReprojection::ReprojectAndRenderDepth(float* param_1, float param_2, float param_3, float param_4,
                                                        _func_float_int** param_5, _func_float_int** param_6,
                                                        _func_float_int** param_7, _func_float_int** param_8,
                                                        _func_float_int** param_9, _func_float_int** param_10,
                                                        _func_float_int** param_11, _func_float_int** param_12) {
        float fVar1;
        float fVar3;
        float fVar4;
        undefined1 auVar2[16];
        float fVar5;
        float fVar7;
        float fVar8;
        float fVar9;
        undefined1 auVar6[16];
        float local_28;
        float fStack_24;
        float fStack_20;
        float fStack_1c;

        fVar5 = param_3 + param_3 + -1.0;
        fVar7 = param_4 + param_4 + -1.0;
        fVar8 = (1.0 - param_2) + (1.0 - param_2) + -1.0;
        fVar9 = *(float*)((long)param_8 + 12) * 1.0 + fVar8 * *(float*)((long)param_7 + 12) +
                fVar7 * *(float*)((long)param_6 + 12) + fVar5 * *(float*)((long)param_5 + 12);
        auVar2._4_4_ = fVar9;
        auVar2._0_4_ = fVar9;
        auVar2._8_4_ = fVar9;
        auVar2._12_4_ = fVar9;
        auVar2 = rcpps(auVar2, auVar2);
        fVar1 = auVar2._0_4_ * (*(float*)param_8 * 1.0 + fVar8 * *(float*)param_7 + fVar7 * *(float*)param_6 +
                                fVar5 * *(float*)param_5);
        fVar3 = auVar2._4_4_ * (*(float*)((long)param_8 + 4) * 1.0 + fVar8 * *(float*)((long)param_7 + 4) +
                                fVar7 * *(float*)((long)param_6 + 4) + fVar5 * *(float*)((long)param_5 + 4));
        fVar8 = auVar2._8_4_ * (*(float*)(param_8 + 1) * 1.0 + fVar8 * *(float*)(param_7 + 1) +
                                fVar7 * *(float*)(param_6 + 1) + fVar5 * *(float*)(param_5 + 1));
        fVar9 = auVar2._12_4_ * fVar9;
        fVar5 = fVar9 * *(float*)param_12 + fVar8 * *(float*)param_11 + fVar3 * *(float*)param_10 +
                fVar1 * *(float*)param_9;
        fVar7 = fVar9 * *(float*)((long)param_12 + 4) + fVar8 * *(float*)((long)param_11 + 4) +
                fVar3 * *(float*)((long)param_10 + 4) + fVar1 * *(float*)((long)param_9 + 4);
        fVar4 = fVar9 * *(float*)(param_12 + 1) + fVar8 * *(float*)(param_11 + 1) + fVar3 * *(float*)(param_10 + 1) +
                fVar1 * *(float*)(param_9 + 1);
        fVar1 = fVar9 * *(float*)((long)param_12 + 12) + fVar8 * *(float*)((long)param_11 + 12) +
                fVar3 * *(float*)((long)param_10 + 12) + fVar1 * *(float*)((long)param_9 + 12);
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
        local_28 = fVar5 * 0.5 + 0.5;
        fStack_24 = fVar7 * 0.5 + 0.5;
        fStack_20 = fVar4 * 0.5 + 0.5;
        fStack_1c = fVar1 * 0.5 + 0.5;
        RenderDepth(this, param_1, (Vector4T*)&local_28);
    }

    // 0x100828140, 320 bytes, placed by class name
    // OcclusionReprojection::RenderDepth(float*, math::Vector4T<float> const&) const
    void OcclusionReprojection::RenderDepth(float* param_1, Vector4T* param_2) {
        float fVar1;
        float fVar2;
        uint uVar3;
        uint uVar4;
        int iVar5;
        vector* pvVar6;
        float* pfVar7;
        int iVar9;

        pvVar6 = param_2->SSOBeginPtr(param_1);
        if (0.0 < *(float*)pvVar6 || *(float*)pvVar6 == 0.0) {
            pvVar6 = param_2->SSOBeginPtr(param_1);
            if (*(float*)pvVar6 <= 1.0 && *(float*)pvVar6 != 1.0) {
                pfVar7 = (float*)param_2->y();
                if (0.0 < *pfVar7) {
                    pfVar7 = (float*)param_2->y();
                    if (*pfVar7 <= 1.0) {
                        pvVar6 = param_2->SSOBeginPtr(param_1);
                        fVar1 = *(float*)pvVar6;
                        uVar3 = field_0->GetBufferWidth();
                        pfVar7 = (float*)param_2->y();
                        fVar2 = *pfVar7;
                        uVar4 = field_0->GetBufferHeight();
                        iVar9 = (int)((float)uVar4 * (1.0 - fVar2));
                        pfVar7 = (float*)param_2->second();
                        fVar2 = *pfVar7;
                        iVar5 = field_0->GetBufferWidth();
                        if (1.0 - fVar2 < param_1[(uint)(iVar5 * iVar9 + (int)((float)uVar3 * fVar1))]) {
                            iVar5 = field_0->GetBufferWidth();
                            param_1[(uint)(iVar5 * iVar9 + (int)((float)uVar3 * fVar1))] = 1.0 - fVar2;
                        }
                    }
                }
            }
        }
    }

} // namespace jag::graphics
