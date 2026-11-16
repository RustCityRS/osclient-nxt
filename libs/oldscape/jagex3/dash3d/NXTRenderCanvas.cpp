// libs/oldscape/jagex3/dash3d/NXTRenderCanvas.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "NXTRenderCanvas.h"
#include "Operation.h"

namespace jag::oldscape::dash3d {
    // 0x10012f260: the linker folded this into social::OnlinePlayerData<social::FriendChatUser>::GetWorldId() const, which has identical code
    NXTRenderCanvas::GetLastNumVerts();

    // 0x1001fb280: the linker folded this into http::CRMData::GetActionInfo() const, which has identical code
    NXTRenderCanvas::GetPixelBuffer();

    // 0x100366380, 32 bytes, placed by class name and debug map
    // NXTRenderCanvas::SetRenderRect(int, int, int, int)
    void NXTRenderCanvas::SetRenderRect(int param_1, int param_2, int param_3, int param_4) {
        m_renderRect = param_1;
        field_52 = param_2;
        field_56 = param_3;
        field_60 = param_4;
    }

    // 0x100366c80, 192 bytes, base-object constructor, placed by class name and debug map
    // NXTRenderCanvas::NXTRenderCanvas()
    void NXTRenderCanvas::NXTRenderCanvas() {
        undefined4 local_28[2];
        undefined4 local_20[2];

        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_40, 0);
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&field_44, 0);
        m_renderRect = 0;
        field_52 = 0;
        field_64 = true;
        new (&field_80) jag::math::Vector4T<float>();
        m_depthBufferEnabled = false;
        new (&field_112) SharedArray<unsigned int>();
        field_140 = 0;
        SetScreenSize(this, 1, 1);
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_28, 1);
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_20, 1);
        SetUIRect(this, 1, 1, local_28[0], local_20[0]);
    }

    // 0x100366d40, 16 bytes, placed by class name and debug map
    // NXTRenderCanvas::SetScreenSize(int, int)
    void NXTRenderCanvas::SetScreenSize(int param_1, int param_2) {
        m_screenSize = param_1;
        field_36 = param_2;
    }

    // 0x100366d50, 160 bytes, placed by class name and debug map
    // NXTRenderCanvas::SetUIRect(int, int, CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>)
    void NXTRenderCanvas::SetUIRect(undefined4 param_1, undefined4 param_2, uint param_4, undefined4 param_5) {
        int iVar1;
        int iVar2;
        SharedArray<unsigned int> local_48[24];
        CoordMapSquare local_30;

        field_24 = param_1;
        field_28 = param_2;
        field_40 = param_4;
        field_44 = param_5;
        local_30.m_x = param_4;
        local_30._8_4_ = param_5;
        iVar1 = local_30.GetX();
        iVar2 = local_30.field_8.GetX();
        if ((&field_112)->HeapBeginPtr() != (long)(iVar2 * iVar1)) {
            SharedArray<unsigned int>::SharedArray(local_48, (long)(iVar2 * iVar1));
            SharedArray<unsigned int>::operator=((SharedArray<unsigned int>*)&field_112, (SharedArray*)local_48);
            local_48->~SharedArray();
        }
    }

    // 0x100366df0, 16 bytes, complete-object constructor, placed by class name and debug map
    // NXTRenderCanvas::NXTRenderCanvas(): jumps straight to the base-object constructor

    // 0x100366e30, 48 bytes, placed by class name and debug map
    // NXTRenderCanvas::SetSkyboxColour(jag::math::Vector4T<float>)
    void NXTRenderCanvas::SetSkyboxColour(undefined8 param_1, undefined8 param_2, long param_3) {
        undefined8 local_18;
        undefined8 uStack_10;

        local_18 = param_1;
        uStack_10 = param_2;
        jag::math::Rect<float>::operator=((Rect<float>*)(param_3 + 80), (Rect*)&local_18);
    }

    // 0x100366e60, 16 bytes, placed by class name and debug map
    // NXTRenderCanvas::ShowSkybox(bool)
    void NXTRenderCanvas::ShowSkybox(bool param_1) {
        field_72 = param_1;
    }

    // 0x100366e70, 16 bytes, placed by class name and debug map
    // NXTRenderCanvas::SetFogParams(float, float)
    void NXTRenderCanvas::SetFogParams(float param_1, float param_2) {
        m_fogParams = param_1;
        field_100 = param_2;
    }

    // 0x100366e80, 16 bytes, placed by class name and debug map
    // NXTRenderCanvas::ShowUI(bool)
    void NXTRenderCanvas::ShowUI(bool param_1) {
        field_64 = param_1;
    }

    // 0x100366e90, 16 bytes, placed by class name and debug map
    // NXTRenderCanvas::SetScaledUIQuality(ScaledUIQuality)
    void NXTRenderCanvas::SetScaledUIQuality(undefined4 param_2) {
        m_scaledUIQuality = param_2;
    }

    // 0x100366ea0, 16 bytes, placed by class name and debug map
    // NXTRenderCanvas::RenderThread_PrepareRender()
    void NXTRenderCanvas::RenderThread_PrepareRender() {}

    // 0x100366eb0, 512 bytes, placed by class name and debug map
    // NXTRenderCanvas::RenderThread_Render(bool)
    void NXTRenderCanvas::RenderThread_Render(bool param_1) {
        byte bVar1;
        uint uVar2;
        uint uVar3;
        undefined4 uVar4;
        ulonglong uVar5;
        OSRenderCore_RenderThread* this_00;
        OSRenderCore_RenderThread_JavaStyle* pOVar6;
        uint* puVar7;
        ulonglong uVar8;
        ulonglong uVar9;
        OSRenderCore_RenderThread* this_02;

        uVar5 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this);
        this_00 = (OSRenderCore_RenderThread*)OSRenderCore_RenderThread::Instance();
        bVar1 = ((NXTRenderCanvas*)this)->IsRenderContextReady();
        if ((bVar1 & param_1) == 1) {
            ((this_00->field_32 + (long)(this_00->field_0[-3] + -32)), field_72)->ShowSkybox();
            OSRenderCore_RenderThread::SetSkyboxColour(field_80, field_88, this_00);
            this_00->SetFogParams(m_fogParams, field_100);
            this_02 = (OSRenderCore_RenderThread*)this_00->field_112;
            uVar2 = (&field_40)->GetX();
            uVar3 = (&field_44)->GetX();
            this_02->SetUISize(uVar2, uVar3);
            this_02->SetUIViewRect(field_24, field_28, m_screenSize, field_36);
            this_00->SetScreenSize(m_screenSize, field_36);
            ((this_00->field_32 + (long)(this_00->field_0[-3] + -32)), field_64)->ShowUI();
            this_02->SetScaledUIQuality(m_scaledUIQuality);
            pOVar6 = (OSRenderCore_RenderThread_JavaStyle*)(this_00->field_32 + (long)(this_00->field_0[-3] + -32));
            pOVar6->SetRenderViewRect(m_renderRect, field_52, field_56, field_60);
            pOVar6 = (OSRenderCore_RenderThread_JavaStyle*)pOVar6->Instance();
            pOVar6->SetDepthBufferEnabled(m_depthBufferEnabled);
            if (field_140 == '\0') {
                this_00->NewFrame3D();
            } else {
                this_02->NewFrame2D();
            }
            puVar7 = (uint*)(&field_112)->data();
            this_02->UploadUI(puVar7);
            this_00->UploadBuffers(field_140 == '\0');
            if (field_140 == '\0') {
                this_02 = this_00;
                this_00->EndFrame3D();
            } else {
                this_02->EndFrame2D();
            }
        } else {
            this_02 = this_00;
            this_00->UploadBuffers(false);
        }
        uVar4 = 0;
        if ((bVar1 & param_1) != 0) {
            this_02 = (OSRenderCore_RenderThread*)(this_00->field_32 + (long)(this_00->field_0[-3] + -32));
            uVar4 = this_02->GetNumVerts();
        }
        m_lastNumVerts = uVar4;
        uVar8 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_02);
        this_00->Paint();
        uVar9 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_00);
        field_0 = uVar8 - uVar5;
        field_8 = uVar9 - uVar8;
        field_140 = 0;
    }

    // 0x100367b10, 624 bytes, placed by debug map only (low confidence)
    // CalculateGroundProjectionPointsInner(GroundProjPoints&, int, int, int, int, int, int, int)
    void CalculateGroundProjectionPointsInner(GroundProjPoints* param_1, int param_2, int param_3, int param_4,
                                              int param_5, int param_6, int param_7, int param_8) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        int iVar11;
        int iVar12;
        int iVar13;

        *param_1 = (GroundProjPoints)0;
        iVar1 = *(int*)(param_1 + 4) * param_5 + *(int*)(param_1 + 36) * param_4 >> 16;
        iVar2 = *(int*)(param_1 + 36) * param_5 - *(int*)(param_1 + 4) * param_4 >> 16;
        *(int*)(param_1 + 4) = iVar1;
        iVar7 = *(int*)(param_1 + 20) * param_3 - iVar2 * param_2 >> 16;
        iVar2 = iVar2 * param_3 + *(int*)(param_1 + 20) * param_2;
        iVar8 = iVar2 >> 16;
        *(int*)(param_1 + 36) = iVar8;
        *(int*)(param_1 + 20) = iVar7;
        if (3276799 < iVar2) {
            iVar3 = *(int*)(param_1 + 8) * param_5 + *(int*)(param_1 + 40) * param_4 >> 16;
            iVar2 = *(int*)(param_1 + 40) * param_5 - *(int*)(param_1 + 8) * param_4 >> 16;
            *(int*)(param_1 + 8) = iVar3;
            iVar6 = *(int*)(param_1 + 24) * param_3 - iVar2 * param_2 >> 16;
            iVar2 = iVar2 * param_3 + *(int*)(param_1 + 24) * param_2;
            iVar4 = iVar2 >> 16;
            *(int*)(param_1 + 40) = iVar4;
            *(int*)(param_1 + 24) = iVar6;
            if (3276799 < iVar2) {
                iVar11 = *(int*)(param_1 + 12) * param_5 + *(int*)(param_1 + 44) * param_4 >> 16;
                iVar2 = *(int*)(param_1 + 44) * param_5 - *(int*)(param_1 + 12) * param_4 >> 16;
                *(int*)(param_1 + 12) = iVar11;
                iVar12 = *(int*)(param_1 + 28) * param_3 - iVar2 * param_2 >> 16;
                iVar13 = iVar2 * param_3 + *(int*)(param_1 + 28) * param_2;
                iVar2 = iVar13 >> 16;
                *(int*)(param_1 + 44) = iVar2;
                *(int*)(param_1 + 28) = iVar12;
                if (3276799 < iVar13) {
                    iVar13 = *(int*)(param_1 + 16) * param_5 + *(int*)(param_1 + 48) * param_4 >> 16;
                    iVar9 = *(int*)(param_1 + 48) * param_5 - *(int*)(param_1 + 16) * param_4 >> 16;
                    *(int*)(param_1 + 16) = iVar13;
                    iVar5 = *(int*)(param_1 + 32) * param_3 - iVar9 * param_2 >> 16;
                    iVar10 = iVar9 * param_3 + *(int*)(param_1 + 32) * param_2;
                    iVar9 = iVar10 >> 16;
                    *(int*)(param_1 + 48) = iVar9;
                    *(int*)(param_1 + 32) = iVar5;
                    if (3276799 < iVar10) {
                        *(int*)(param_1 + 52) = (iVar1 * param_8) / iVar8 + param_6;
                        *(int*)(param_1 + 56) = (iVar7 * param_8) / iVar8 + param_7;
                        *(int*)(param_1 + 60) = (iVar3 * param_8) / iVar4 + param_6;
                        *(int*)(param_1 + 64) = (iVar6 * param_8) / iVar4 + param_7;
                        *(int*)(param_1 + 68) = (iVar11 * param_8) / iVar2 + param_6;
                        *(int*)(param_1 + 72) = (iVar12 * param_8) / iVar2 + param_7;
                        *(int*)(param_1 + 76) = (iVar13 * param_8) / iVar9 + param_6;
                        *(int*)(param_1 + 80) = (iVar5 * param_8) / iVar9 + param_7;
                        *param_1 = (GroundProjPoints)1;
                    }
                }
            }
        }
    }

    // 0x100367d80, 288 bytes, placed by debug map only (low confidence)
    // CalculateGroundProjectionPointsGrid(world const&, int, int, int, int, int, int, int, int, int, int)
    dash3d* CalculateGroundProjectionPointsGrid(world* param_1, int param_2, int param_3, int param_4, int param_5,
                                                int param_6, int param_7, int param_8, int param_9, int param_10,
                                                int param_11) {
        int iVar1;
        int iVar2;

        iVar1 = param_7 * 128 - world::m_cx;
        iVar2 = param_8 * 128 - world::m_cz;
        field_0[0] = 0;
        field_16 = iVar1;
        field_4 = iVar1;
        field_36 = iVar2;
        field_40 = iVar2;
        field_8 = iVar1 + 128;
        field_12 = iVar1 + 128;
        field_44 = iVar2 + 128;
        field_48 = iVar2 + 128;
        iVar1 = param_1->GetGroundHeight(param_2, param_7, param_8);
        field_20 = iVar1 - world::m_cy;
        iVar1 = param_1->GetGroundHeight(param_2, param_7 + 1, param_8);
        field_24 = iVar1 - world::m_cy;
        iVar1 = param_1->GetGroundHeight(param_2, param_7 + 1, param_8 + 1);
        field_28 = iVar1 - world::m_cy;
        iVar1 = param_1->GetGroundHeight(param_2, param_7, param_8 + 1);
        field_32 = iVar1 - world::m_cy;
        CalculateGroundProjectionPointsInner((GroundProjPoints*)this, param_3, param_4, param_5, param_6, param_9,
                                             param_10, param_11);
        return this;
    }

    // 0x100367ea0, 288 bytes, placed by debug map only (low confidence)
    // CalculateGroundProjectionPointsFine(world const&, int, int, int, int, int, int, int, int, int, int)
    dash3d* CalculateGroundProjectionPointsFine(world* param_1, int param_2, int param_3, int param_4, int param_5,
                                                int param_6, int param_7, int param_8, int param_9, int param_10,
                                                int param_11) {
        int iVar1;
        int iVar2;

        iVar1 = param_7 - world::m_cx;
        iVar2 = param_8 - world::m_cz;
        field_0[0] = 0;
        field_16 = iVar1;
        field_4 = iVar1;
        field_36 = iVar2;
        field_40 = iVar2;
        field_8 = iVar1 + 128;
        field_12 = iVar1 + 128;
        field_44 = iVar2 + 128;
        field_48 = iVar2 + 128;
        iVar1 = param_1->GetGroundHeightAtFinePos(param_2, param_7, param_8);
        field_20 = iVar1 - world::m_cy;
        iVar1 = param_1->GetGroundHeightAtFinePos(param_2, param_7 + 128, param_8);
        field_24 = iVar1 - world::m_cy;
        iVar1 = param_1->GetGroundHeightAtFinePos(param_2, param_7 + 128, param_8 + 128);
        field_28 = iVar1 - world::m_cy;
        iVar1 = param_1->GetGroundHeightAtFinePos(param_2, param_7, param_8 + 128);
        field_32 = iVar1 - world::m_cy;
        CalculateGroundProjectionPointsInner((GroundProjPoints*)this, param_3, param_4, param_5, param_6, param_9,
                                             param_10, param_11);
        return this;
    }

    // 0x1003692f0, 192 bytes, placed by debug map only (low confidence)
    // operator==(ResolvedModel const&, ResolvedModel const&)
    /* TEMPNAMEPLACEHOLDERVALUE(ResolvedModel const&,
   ResolvedModel const&) */

    bool operator==(ResolvedModel* param_1, ResolvedModel* param_2) {
        undefined8* this;
        bool bVar1;
        bool bVar2;
        PoseStateRSeven* pPVar5;
        PoseStateRSeven* pPVar6;
        shared_ptr* extraout_RDX;
        shared_ptr* extraout_RDX_00;
        shared_ptr* psVar7;

        this = &param_1->m_animationState;
        bVar1 = operator_cast_to_bool();
        if (bVar1) {
            bVar1 = false;
        } else {
            bVar1 = (&param_2->m_animationState)->operator_cast_to_bool();
            bVar1 = !bVar1;
        }
        bVar2 = operator_cast_to_bool();
        if (bVar2) {
            bVar2 = (&param_2->m_animationState)->operator_cast_to_bool();
            psVar7 = extraout_RDX_00;
        } else {
            bVar2 = false;
            psVar7 = extraout_RDX;
        }
        if (operator==((jag*)param_1, (shared_ptr*)param_2, psVar7)) {
            if (bVar1) {
            LAB_100369356:
                bVar1 = jag::math::operator==((Matrix44T*)&param_1->field_48, (Matrix44T*)&param_2->field_48);
                return bVar1;
            }
            if (bVar2 != false) {
                pPVar5 = (PoseStateRSeven*)shared_ptr<PoseStateRSeven>::operator*((shared_ptr<PoseStateRSeven>*)this);
                pPVar6 = (PoseStateRSeven*)shared_ptr<PoseStateRSeven>::operator*(
                    (shared_ptr<PoseStateRSeven>*)&param_2->m_animationState);
                if (operator==(pPVar5, pPVar6) != '\0')
                    goto LAB_100369356;
            }
        }
        return false;
    }

    // 0x100369410, 16 bytes, placed by debug map only (low confidence)
    // operator!=(ResolvedModel const&, ResolvedModel const&)
    /* TEMPNAMEPLACEHOLDERVALUE(ResolvedModel const&,
   ResolvedModel const&) */

    byte operator!=(ResolvedModel* param_1, ResolvedModel* param_2) {
        return operator==(param_1, param_2) ^ 1;
    }

    // 0x100369420, 16 bytes, placed by debug map only (low confidence)
    // operator==(Operation const&, Operation const&)
    /* TEMPNAMEPLACEHOLDERVALUE(Operation const&,
   Operation const&) */

    void operator==(Operation* param_1, Operation* param_2) {
        (*(code*)param_1->field_0[4])();
    }

    // 0x100369430, 16 bytes, placed by debug map only (low confidence)
    // operator!=(Operation const&, Operation const&)
    /* TEMPNAMEPLACEHOLDERVALUE(Operation const&,
   Operation const&) */

    byte operator!=(Operation* param_1, Operation* param_2) {
        return operator==(param_1, param_2) ^ 1;
    }

    // 0x100369440, 240 bytes, placed by debug map only (low confidence)
    // operator==(OperationBuffer const&, OperationBuffer const&)
    /* TEMPNAMEPLACEHOLDERVALUE(OperationBuffer const&,
   OperationBuffer const&) */

    ulong operator==(OperationBuffer* param_1, OperationBuffer* param_2) {
        vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>* pvVar2;
        long lVar3;
        long lVar4;
        vector<shared_ptr<Operation>, eastl::allocator>* pvVar5;
        shared_ptr<Operation>* psVar6;
        Operation* pOVar7;
        Operation* pOVar8;
        ulong uVar9;
        ulong uVar10;
        undefined8 unaff_R12;
        bool bVar11;

        pvVar2 = (vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>*)
                     shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
                         (shared_ptr<OperationBuffer::OperationImpl_const>*)param_1);
        lVar3 = eastl::vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>::size(pvVar2);
        pvVar2 = (vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>*)
                     shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
                         (shared_ptr<OperationBuffer::OperationImpl_const>*)param_2);
        lVar4 = eastl::vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>::size(pvVar2);
        if (lVar3 == lVar4) {
            pvVar2 = (vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>*)
                         shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
                             (shared_ptr<OperationBuffer::OperationImpl_const>*)param_1);
            lVar3 = eastl::vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>::size(pvVar2);
            bVar11 = lVar3 != 0;
            if (bVar11) {
                uVar10 = 0;
                do {
                    pvVar5 = (vector<shared_ptr<Operation>, eastl::allocator>*)
                                 shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
                                     (shared_ptr<OperationBuffer::OperationImpl_const>*)param_1);
                    psVar6 = (shared_ptr<Operation>*)eastl::vector<shared_ptr<Operation>, eastl::allocator>::operator[](
                        pvVar5, uVar10);
                    pOVar7 = (Operation*)shared_ptr<Operation>::operator*(psVar6);
                    pvVar5 = (vector<shared_ptr<Operation>, eastl::allocator>*)
                                 shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
                                     (shared_ptr<OperationBuffer::OperationImpl_const>*)param_2);
                    psVar6 = (shared_ptr<Operation>*)eastl::vector<shared_ptr<Operation>, eastl::allocator>::operator[](
                        pvVar5, uVar10);
                    pOVar8 = (Operation*)shared_ptr<Operation>::operator*(psVar6);
                    if (operator!=(pOVar7, pOVar8) != '\0')
                        break;
                    uVar10 = uVar10 + 1;
                    pvVar2 = (vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>*)
                                 shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
                                     (shared_ptr<OperationBuffer::OperationImpl_const>*)param_1);
                    uVar9 = eastl::vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>::size(pvVar2);
                    bVar11 = uVar10 < uVar9;
                } while (bVar11);
            }
            uVar10 = CONCAT71((int7)((ulong)unaff_R12 >> 8), bVar11) ^ 1;
        } else {
            uVar10 = 0;
        }
        return uVar10 & 4294967041;
    }

    // 0x1003695f0, 16 bytes, placed by debug map only (low confidence)
    // operator!=(OperationBuffer const&, OperationBuffer const&)
    /* TEMPNAMEPLACEHOLDERVALUE(OperationBuffer const&,
   OperationBuffer const&) */

    byte operator!=(OperationBuffer* param_1, OperationBuffer* param_2) {
        return operator==(param_1, param_2) ^ 1;
    }

    // 0x10036a2f0, 640 bytes, placed by debug map only (low confidence)
    // OperationBuffer::ResolveAgainstPrevious(ResolvedModel&, unsigned long&, eastl::vector<OperationRecordEntry, eastl::allocator> const&) const
    bool OperationBuffer::ResolveAgainstPrevious(ResolvedModel* param_1, ulong* param_2, vector* param_3) {
        ulong uVar1;
        vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>* pvVar3;
        ulong uVar4;
        OperationRecordEntry* this_01;
        vector<shared_ptr<Operation>, eastl::allocator>* this_02;
        shared_ptr* this_03;
        shared_ptr* this_04;
        Operation* pOVar5;
        Operation* pOVar6;
        ResolvedModel* pRVar7;
        undefined8* puVar8;
        undefined8 uVar9;
        long lVar10;
        _func_decltype_nullptr* p_Var11;
        OperationRecordEntry local_1c8;
        ResolvedModel local_d8;
        shared_ptr local_60;
        uint local_34;

        uVar1 = *param_2;
        pvVar3 = (vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>*)
                     shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
                         (shared_ptr<OperationBuffer::OperationImpl_const>*)this);
        uVar4 = eastl::vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>::size(pvVar3);
        if (uVar1 < uVar4) {
            local_34 = 0;
            do {
                uVar1 = *param_2;
                uVar4 = param_3->size();
                if (uVar4 <= uVar1)
                    break;
                this_01 = (OperationRecordEntry*)eastl::vector<OperationRecordEntry, eastl::allocator>::operator[](
                    (vector<OperationRecordEntry, eastl::allocator>*)param_3, *param_2);
                this_02 = (vector<shared_ptr<Operation>, eastl::allocator>*)
                              shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
                                  (shared_ptr<OperationBuffer::OperationImpl_const>*)(OperationBuffer*)this);
                p_Var11 = (_func_decltype_nullptr*)*param_2;
                this_03 = (shared_ptr*)eastl::vector<shared_ptr<Operation>, eastl::allocator>::operator[](
                    this_02, (ulong)p_Var11);
                this_04 = (shared_ptr*)this_01->GetOperation();
                new (&local_60) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var11);
                new (&local_d8) ResolvedModel();
                if ((local_34 & 1) == 0) {
                    pOVar5 = (Operation*)shared_ptr<Operation>::operator*((shared_ptr<Operation>*)this_03);
                    pOVar6 = (Operation*)shared_ptr<Operation>::operator*((shared_ptr<Operation>*)this_04);
                    if (dash3d::operator==(pOVar5, pOVar6) == '\0')
                        goto LAB_10036a3f0;
                    pRVar7 = (ResolvedModel*)this_01->GetOutputModel();
                    ResolvedModel::operator=(&local_d8, pRVar7);
                    shared_ptr<Operation>::operator=((shared_ptr<Operation>*)&local_60, this_04);
                } else {
                LAB_10036a3f0:
                    puVar8 = (undefined8*)shared_ptr<Operation>::operator->((shared_ptr<Operation>*)this_03);
                    (**(code**)*puVar8)(&local_1c8, puVar8, param_1, this_01);
                    ResolvedModel::operator=(&local_d8, (ResolvedModel*)&local_1c8);
                    uVar9 = local_1c8.~ResolvedModel();
                    local_34 = (uint)CONCAT71((int7)((ulong)uVar9 >> 8), 1);
                    shared_ptr<Operation>::operator=((shared_ptr<Operation>*)&local_60, this_03);
                }
                lVar10 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
                    (shared_ptr<OperationBuffer::OperationImpl_const>*)(OperationBuffer*)this);
                new (&local_1c8) OperationRecordEntry(&local_60, param_1, &local_d8);
                ((lVar10 + 32))->push_back(&local_1c8);
                local_1c8.~OperationRecordEntry();
                ResolvedModel::operator=(param_1, &local_d8);
                *param_2 = *param_2 + 1;
                local_d8.~ResolvedModel();
                local_60.~shared_ptr();
                uVar1 = *param_2;
                pvVar3 = (vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>*)
                             shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
                                 (shared_ptr<OperationBuffer::OperationImpl_const>*)(OperationBuffer*)this);
                uVar4 = eastl::vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>::size(pvVar3);
            } while (uVar1 < uVar4);
            if ((local_34 & 1) != 0) {
                return false;
            }
        } else {
            local_34 = 0;
        }
        uVar1 = *param_2;
        pvVar3 = (vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>*)
                     shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
                         (shared_ptr<OperationBuffer::OperationImpl_const>*)(OperationBuffer*)this);
        uVar4 = eastl::vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>::size(pvVar3);
        if (uVar1 == uVar4) {
            uVar1 = *param_2;
            uVar4 = param_3->size();
            return uVar1 == uVar4;
        }
        return false;
    }

    // 0x10036a640, 16 bytes, placed by debug map only (low confidence)
    // ResolvedModel::TryGetUploadableModel() const
    undefined8* ResolvedModel::TryGetUploadableModel() {
        return &field_16;
    }

    // 0x10036a740, 16 bytes, placed by debug map only (low confidence)
    // OperationRecordEntry::GetOperation() const
    OperationRecordEntry* OperationRecordEntry::GetOperation() {
        return this;
    }

    // 0x10036a750, 16 bytes, placed by debug map only (low confidence)
    // OperationRecordEntry::GetOutputModel() const
    undefined1* OperationRecordEntry::GetOutputModel() {
        return m_outputModel;
    }

    // 0x10036a7a0, 16 bytes, placed by debug map only (low confidence)
    // OperationRecordEntry::GetInputModel() const
    undefined1* OperationRecordEntry::GetInputModel() {
        return m_inputModel;
    }

    // 0x10036a7b0, 160 bytes, placed by debug map only (low confidence)
    // ResolvedModel::GetWorldTransform(int, int, int, int) const
    ResolvedModel* ResolvedModel::GetWorldTransform(int param_1, int param_2, int param_3, int param_4) {
        int in_R9D;
        Matrix44T local_c8;
        undefined1 local_88[72];
        ColourHSL local_40;

        jag::math::Matrix33RotationY<float>((math*)local_88, (float)param_2 * 0.0030679617);
        new (&local_40) jag::math::ColourHSL((float)param_3, (float)param_4, (float)in_R9D);
        new (&local_c8) jag::math::Matrix44T<float>(local_88, (Vector3T*)&local_40);
        GetLocalTransform((ResolvedModel*)local_88);
        jag::math::operator*((math*)this, (Matrix44T*)local_88, &local_c8);
        return this;
    }

    // 0x10036a850, 144 bytes, placed by debug map only (low confidence)
    // ResolvedModel::GetUploadableModel() const
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* ResolvedModel::GetUploadableModel() const */

    undefined8* ResolvedModel::GetUploadableModel() {
        undefined8* this_00;
        shared_ptr<jag::graphics::Model>* this_01;
        Model* pMVar2;
        shared_ptr local_30;
        undefined4 local_1c;

        this_00 = &field_16;
        if (!this_00->operator_cast_to_bool()) {
            this_01 = (shared_ptr<jag::graphics::Model>*)GetModel(this);
            pMVar2 = (Model*)shared_ptr<jag::graphics::Model>::operator*(this_01);
            local_1c = 1;
            make_shared<jag::graphics::Model, jag::graphics::Model_const&, jag::graphics::ModelCopyType>(
                (jag*)&local_30, pMVar2, (ModelCopyType*)&local_1c);
            shared_ptr<jag::graphics::Model>::operator=((shared_ptr<jag::graphics::Model>*)this_00, &local_30);
            local_30.~shared_ptr();
            g_numModelCopiesEver._0_4_ = (int)g_numModelCopiesEver + 1;
            _DAT_10422a8c4 = _DAT_10422a8c4 + 1;
        }
        return this_00;
    }

    // 0x10036a930, 176 bytes, placed by debug map only (low confidence)
    // CombineOperation::Apply(ResolvedModel const&, OperationRecordEntry const*) const
    CombineOperation* CombineOperation::Apply(ResolvedModel* param_1, OperationRecordEntry* param_2) {
        char cVar1;
        shared_ptr<Operation>* this_00;
        CommandLine* this_01;
        OperationRecordEntry* in_RCX;

        cVar1 = (&param_1->field_16)->empty();
        if (cVar1 == '\0') {
            if (in_RCX != (OperationRecordEntry*)0) {
                this_00 = (shared_ptr<Operation>*)in_RCX->GetOperation();
                this_01 = (CommandLine*)shared_ptr<Operation>::operator->(this_00);
                if (this_01->GetPos() == 1) {
                    new (this) ResolvedModel();
                    cVar1 = TryReuseModelCombination((CombineOperation*)param_1, (ResolvedModel*)param_2, in_RCX,
                                                     (ResolvedModel*)this);
                    if (cVar1 != '\0') {
                        return this;
                    }
                    ~ResolvedModel();
                }
            }
            ApplyFresh(this, param_1, param_2);
        } else {
            new (this) ResolvedModel(param_2);
        }
        return this;
    }

    // 0x10036a9f0, 320 bytes, placed by debug map only (low confidence)
    // CombineOperation::TryReuseModelCombination(ResolvedModel const&, OperationRecordEntry const*, ResolvedModel&) const
    undefined8 CombineOperation::TryReuseModelCombination(ResolvedModel* param_1, OperationRecordEntry* param_2,
                                                          ResolvedModel* param_3) {
        char cVar1;
        shared_ptr<Operation>* this_00;
        long lVar2;
        ResolvedModel* pRVar3;
        shared_ptr* psVar4;
        ResolvedModel local_b8;
        shared_ptr local_40;

        this_00 = (shared_ptr<Operation>*)param_2->GetOperation();
        lVar2 = shared_ptr<Operation>::operator*(this_00);
        pRVar3 = (ResolvedModel*)param_2->GetInputModel();
        cVar1 = OnlyAnimationsChanged((CombineOperation*)param_2, param_1, pRVar3);
        if ((cVar1 == '\0') || (cVar1 = OnlyAnimationsChangedBetweenModelSets(
                                    (CombineOperation*)param_2, (vector*)&field_16, (vector*)(lVar2 + 16)),
                                cVar1 == '\0')) {
            return 0;
        }
        new (&local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<eastl::vector<CombineOperation::LabelShiftRange, eastl::allocator>>::operator=(
            (shared_ptr<eastl::vector<CombineOperation::LabelShiftRange, eastl::allocator>>*)&field_48,
            (shared_ptr*)(lVar2 + 48));
        RelabelAnimationsForModelSet(this, &local_40, param_1);
        pRVar3 = (ResolvedModel*)param_2->GetOutputModel();
        psVar4 = (shared_ptr*)pRVar3->GetModel();
        new (&local_b8) ResolvedModel(psVar4, &local_40, *(Matrix44T*)PTR_IDENTITY_100ee6730);
        ResolvedModel::operator=(param_3, &local_b8);
        local_b8.~ResolvedModel();
        local_40.~shared_ptr();
        return 1;
    }

    // 0x10036af80, 112 bytes, placed by debug map only (low confidence)
    // CombineOperation::ApplyAABB(jag::math::AABB const&) const
    CombineOperation* CombineOperation::ApplyAABB(AABB* param_1) {
        long lVar1;
        long lVar2;
        AABB* in_RDX;
        undefined1 local_48[32];

        new (this) jag::math::AABB(in_RDX);
        lVar1 = (&param_1->m_maximum)->HeapBeginPtr();
        lVar2 = (&param_1->m_maximum)->end();
        if (lVar1 != lVar2) {
            do {
                local_48->ResolveAABB();
                AddAABB(local_48);
                lVar1 = lVar1 + 16;
            } while (lVar1 != lVar2);
        }
        return this;
    }

    // 0x10036aff0, 240 bytes, placed by debug map only (low confidence)
    // CombineOperation::IsEqual(Operation const&) const
    ulong CombineOperation::IsEqual(Operation* param_1) {
        char cVar1;
        long lVar3;
        long lVar4;
        OperationBuffer* pOVar5;
        OperationBuffer* pOVar6;
        ulong uVar7;
        ulong uVar8;
        undefined8 unaff_R12;
        Operation* this_00;
        undefined8* this_01;
        bool bVar9;

        if (param_1->GetPos() == 1) {
            this_01 = &field_16;
            lVar3 = this_01->size();
            this_00 = param_1 + 1;
            lVar4 = this_00->size();
            if (lVar3 == lVar4) {
                lVar3 = this_01->size();
                bVar9 = lVar3 != 0;
                if (bVar9) {
                    pOVar5 = (OperationBuffer*)eastl::vector<OperationBuffer, eastl::allocator>::operator[](
                        (vector<OperationBuffer, eastl::allocator>*)this_01, 0);
                    pOVar6 = (OperationBuffer*)eastl::vector<OperationBuffer, eastl::allocator>::operator[](
                        (vector<OperationBuffer, eastl::allocator>*)this_00, 0);
                    cVar1 = dash3d::operator!=(pOVar5, pOVar6);
                    if (cVar1 == '\0') {
                        uVar8 = 1;
                        do {
                            uVar7 = this_01->size();
                            bVar9 = uVar8 < uVar7;
                            if (!bVar9)
                                break;
                            pOVar5 = (OperationBuffer*)eastl::vector<OperationBuffer, eastl::allocator>::operator[](
                                (vector<OperationBuffer, eastl::allocator>*)this_01, uVar8);
                            pOVar6 = (OperationBuffer*)eastl::vector<OperationBuffer, eastl::allocator>::operator[](
                                (vector<OperationBuffer, eastl::allocator>*)this_00, uVar8);
                            cVar1 = dash3d::operator!=(pOVar5, pOVar6);
                            uVar8 = uVar8 + 1;
                        } while (cVar1 == '\0');
                    }
                }
                uVar8 = CONCAT71((int7)((ulong)unaff_R12 >> 8), bVar9) ^ 1;
                goto LAB_10036b0c6;
            }
        }
        uVar8 = 0;
    LAB_10036b0c6:
        return uVar8 & 4294967295;
    }

    // 0x10036b120, 96 bytes, placed by debug map only (low confidence)
    // CombineOperation::Append(Operation&&)
    void CombineOperation::Append(Operation* param_1) {
        OperationBuffer* pOVar1;
        OperationBuffer* pOVar2;

        pOVar1 = (OperationBuffer*)((param_1 + 1))->HeapBeginPtr();
        pOVar2 = (OperationBuffer*)((param_1 + 1))->end();
        if (pOVar1 != pOVar2) {
            do {
                (&field_16, pOVar1)->push_back();
                pOVar1 = pOVar1 + 1;
            } while (pOVar1 != pOVar2);
        }
    }

    // 0x10036b1e0, 96 bytes, placed by debug map only (low confidence)
    // SetModelExternalId(jag::graphics::Model&, int)
    void SetModelExternalId(Model* param_1, int param_2) {
        Layout* this;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar1;
        GeometryBatchInstance* this_01;

        this = (Layout*)param_1->GetBatchList();
        this_00 = (unique_ptr<jag::graphics::GeometryBatchInstance,
                              MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this);
        puVar1 = (unique_ptr<jag::graphics::GeometryBatchInstance,
                             MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            this_01 =
                (GeometryBatchInstance*)std::unique_ptr<
                    jag::graphics::GeometryBatchInstance,
                    MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
            this_01->ChangeSourceExternalIDs(param_2);
        }
    }

    // 0x10036b250, 448 bytes, placed by debug map only (low confidence)
    // CombineOperation::UpdateTransformAndAnimationState(jag::graphics::Model&, shared_ptr<PoseStateRSeven>&, shared_ptr<PoseStateRSeven> const&, jag::math::Matrix44T<float>, unsigned short&, unsigned short&, unsigned short&) const
    void CombineOperation::UpdateTransformAndAnimationState(Model* param_1, shared_ptr* param_2, shared_ptr* param_3,
                                                            Matrix44T param_4, ushort* param_5, ushort* param_6,
                                                            ushort* param_7) {
        ushort uVar1;
        ushort uVar2;
        ushort uVar3;
        ushort uVar4;
        ushort uVar5;
        Matrix44T MVar6;
        bool bVar7;
        CombineOperation* this_00;
        LabelShiftRange* pLVar8;
        vector<CombineOperation::LabelShiftRange, eastl::allocator>* this_01;
        shared_ptr* psVar9;
        ushort* in_stack_00000048;
        undefined1 local_80[16];
        undefined8 local_70;
        undefined4 local_68;
        shared_ptr local_58;
        ushort local_32;

        new (&local_58) shared_ptr<Decor>(param_3);
        psVar9 = (shared_ptr*)PTR_IDENTITY_100ee6730;
        bVar7 = jag::math::operator!=(&param_4, (Matrix44T*)PTR_IDENTITY_100ee6730);
        if (bVar7) {
            bVar7 = shared_ptr::operator_cast_to_bool(param_3);
            if (bVar7) {
                MVar6._8_8_ = param_4._8_8_;
                MVar6._0_8_ = param_4._0_8_;
                MVar6._16_8_ = param_4._16_8_;
                MVar6._24_8_ = param_4._24_8_;
                MVar6._32_8_ = param_4._32_8_;
                MVar6._40_8_ = param_4._40_8_;
                MVar6._48_8_ = param_4._48_8_;
                TransformAnimationState((CombineOperation*)local_80, psVar9, MVar6);
                local_80->~shared_ptr();
            } else {
                param_1->StartTransform();
                param_1->Transform(&param_4);
                jag::graphics::Model::TransformNormals((Matrix44T*)param_1, SUB81(&param_4, 0));
                param_1->EndTransform(true);
            }
        }
        bVar7 = shared_ptr::operator_cast_to_bool(&local_58);
        if (bVar7) {
            uVar1 = *param_5;
            uVar2 = *param_6;
            local_32 = *in_stack_00000048;
            RelabelModelForAnimation(this, param_1, param_5, param_6, in_stack_00000048);
            this_00 =
                (CombineOperation*)
                    shared_ptr<eastl::vector<CombineOperation::LabelShiftRange, eastl::allocator>>::operator->(
                        (shared_ptr<eastl::vector<CombineOperation::LabelShiftRange, eastl::allocator>>*)&field_48);
            pLVar8 = (LabelShiftRange*)this_00->push_back();
            uVar3 = *param_5;
            uVar4 = *param_6;
            uVar5 = *in_stack_00000048;
            *(ushort*)pLVar8 = uVar1;
            *(ushort*)(pLVar8 + 2) = uVar3;
            *(ushort*)(pLVar8 + 4) = uVar2;
            *(ushort*)(pLVar8 + 6) = uVar4;
            *(ushort*)(pLVar8 + 8) = local_32;
            *(ushort*)(pLVar8 + 10) = uVar5;
            ShiftLabelsAndCombineAnimation(this_00, param_2, &local_58, pLVar8);
        } else {
            this_01 =
                (vector<CombineOperation::LabelShiftRange, eastl::allocator>*)
                    shared_ptr<eastl::vector<CombineOperation::LabelShiftRange, eastl::allocator>>::operator->(
                        (shared_ptr<eastl::vector<CombineOperation::LabelShiftRange, eastl::allocator>>*)&field_48);
            local_70 = 18446462603027742720;
            local_68 = 0;
            eastl::vector<CombineOperation::LabelShiftRange, eastl::allocator>::push_back(this_01,
                                                                                          (LabelShiftRange*)&local_70);
        }
        local_58.~shared_ptr();
    }

    // 0x10036b430, 112 bytes, placed by debug map only (low confidence)
    // CombineOperation::GetTextureAtlasQuality()
    CombineOperation* CombineOperation::GetTextureAtlasQuality() {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        OSRenderCore_RenderThread* this_00;
        RT7Core* this_01;
        TextureManager* this_02;
        TextureAtlasManager* this_03;
        long lVar4;

        this_00 = (OSRenderCore_RenderThread*)OSRenderCore_RenderThread::Instance();
        this_01 = (RT7Core*)this_00->GetRT7Core();
        if (this_01 == (RT7Core*)0) {
            field_16 = 0;
            field_24 = 0;
            field_0 = (undefined**)0;
            *(undefined8*)&field_8 = 0;
            field_32 = 0;
        } else {
            this_02 = (TextureManager*)this_01->GetTextureManager();
            this_03 = (TextureAtlasManager*)this_02->GetTextureAtlasManager();
            lVar4 = this_03->GetSettings();
            uVar1 = *(undefined8*)(lVar4 + 152);
            uVar2 = *(undefined8*)(lVar4 + 160);
            uVar3 = *(undefined8*)(lVar4 + 168);
            field_0 = *(undefined***)(lVar4 + 144);
            *(undefined8*)&field_8 = uVar1;
            field_16 = uVar2;
            field_24 = uVar3;
            field_32 = *(undefined4*)(lVar4 + 176);
        }
        return this;
    }

    // 0x10036b4f0, 96 bytes, placed by debug map only (low confidence)
    // CombineOperation::GetPreviousBuffer(OperationRecordEntry const*, unsigned long) const
    undefined8 CombineOperation::GetPreviousBuffer(OperationRecordEntry* param_1, ulong param_2) {
        shared_ptr<Operation>* this_00;
        CommandLine* this_01;
        long lVar2;
        ulong uVar3;
        undefined8 uVar4;

        if (param_1 != (OperationRecordEntry*)0) {
            this_00 = (shared_ptr<Operation>*)param_1->GetOperation();
            this_01 = (CommandLine*)shared_ptr<Operation>::operator->(this_00);
            if (this_01->GetPos() == 1) {
                lVar2 = shared_ptr<Operation>::operator*(this_00);
                uVar3 = ((lVar2 + 16))->size();
                if (param_2 < uVar3) {
                    uVar4 = eastl::vector<OperationBuffer, eastl::allocator>::operator[](
                        (vector<OperationBuffer, eastl::allocator>*)(lVar2 + 16), param_2);
                    return uVar4;
                }
            }
        }
        return 0;
    }

} // namespace jag::oldscape::dash3d

namespace jag::math {
    // 0x1003693b0, 96 bytes, inline, placed by debug map only (low confidence)
    // bool operator==<float>(Matrix44T<float> const&, Matrix44T<float> const&)
    /* bool TEMPNAMEPLACEHOLDERVALUE(Matrix44T<float> const&,
   Matrix44T<float> const&) */

    bool operator==(Matrix44T* param_1, Matrix44T* param_2) {
        bool bVar1;

        bVar1 = operator==((Vector4T*)param_1, (Vector4T*)param_2);
        if (((bVar1) && (bVar1 = operator==((Vector4T*)&param_1->field_16, (Vector4T*)&param_2->field_16), bVar1)) &&
            (bVar1 = operator==((Vector4T*)&param_1->field_32, (Vector4T*)&param_2->field_32), bVar1)) {
            bVar1 = operator==((Vector4T*)&param_1->field_48, (Vector4T*)&param_2->field_48);
            return bVar1;
        }
        return false;
    }

} // namespace jag::math

namespace jag {
    // 0x100369aa0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::OperationBuffer::OperationImpl>::type make_shared<oldscape::dash3d::OperationBuffer::OperationImpl>()
    jag* make_shared<oldscape::dash3d::OperationBuffer::OperationImpl>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        OperationImpl* local_28[2];

        pvVar1 = (void*)aligned_alloc(256, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_28[0] = placement_new<oldscape::dash3d::OperationBuffer::OperationImpl>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::OperationBuffer::OperationImpl>, int,
                                   oldscape::dash3d::OperationBuffer::OperationImpl*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
