// libs/oldscape/jagex3/dash3d/NXTRenderCanvas.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "NXTRenderCanvas.h"
#include "Operation.h"

namespace jag::oldscape::dash3d {
    // 0x10012f260: NXTRenderCanvas::GetLastNumVerts() has the same machine code as social::OnlinePlayerData<social::FriendChatUser>::GetWorldId() const

    // 0x1001fb280: NXTRenderCanvas::GetPixelBuffer() has the same machine code as http::CRMData::GetActionInfo() const

    // 0x100366380
    void NXTRenderCanvas::SetRenderRect(int arg1, int arg2, int arg3, int arg4) {
        field_48 = arg1;
        field_52 = arg2;
        field_56 = arg3;
        field_60 = arg4;
    }

    // 0x100366c80
    NXTRenderCanvas::NXTRenderCanvas() {
        unsigned int local_28[2];
        unsigned int local_20[2];

        field_40.XPlotBlender<int>(0);
        field_44.XPlotBlender<int>(0);
        field_48 = 0;
        field_52 = 0;
        field_64 = true;
        new (&field_80) jag::math::Vector4T();
        m_depthBufferEnabled = false;
        new (&field_112) SharedArray();
        field_140 = 0;
        SetScreenSize(1, 1);
        local_28->XPlotBlender<int>(1);
        local_20->XPlotBlender<int>(1);
        SetUIRect(1, 1, (CoordType<UICoordSpecializer>*)(unsigned long)local_28[0],
                  (CoordType<UICoordSpecializer>*)(unsigned long)local_20[0]);
    }

    // 0x100366d40
    void NXTRenderCanvas::SetScreenSize(int arg1, int arg2) {
        m_screenSize = arg1;
        field_36 = arg2;
    }

    // 0x100366d50
    void NXTRenderCanvas::SetUIRect(int arg1, int arg2, CoordType<UICoordSpecializer> coordType1,
                                    CoordType<UICoordSpecializer> coordType2) {
        SharedArray<unsigned int> local_48;
        CoordMapSquare local_30;

        local_30._8_4_ = (uint32_t)coordType2;
        local_30.m_x = (unsigned int)coordType1;
        field_24 = arg1;
        field_28 = arg2;
        field_40 = local_30.m_x;
        field_44 = local_30._8_4_;
        int iVar1 = local_30.GetX();
        int iVar2 = local_30.field_8.GetX();
        if (field_112.HeapBeginPtr() != (long)(iVar2 * iVar1)) {
            local_48 = SharedArray((long)(iVar2 * iVar1));
            field_112 = local_48;
        }
    }

    // 0x100366e30
    void NXTRenderCanvas::SetSkyboxColour(jag::math::Vector4T<float> vector4) {
        QuaternionT<float> local_18;

        (*((vector4 + 80))) = local_18;
    }

    // 0x100366e60
    void NXTRenderCanvas::ShowSkybox(bool arg1) {
        field_72 = arg1;
    }

    // 0x100366e70
    void NXTRenderCanvas::SetFogParams(float arg1, float arg2) {
        m_fogParams = arg1;
        field_100 = arg2;
    }

    // 0x100366e80
    void NXTRenderCanvas::ShowUI(bool arg1) {
        field_64 = arg1;
    }

    // 0x100366e90
    void NXTRenderCanvas::SetScaledUIQuality(ScaledUIQuality scaledUIQuality) {
        m_scaledUIQuality = scaledUIQuality;
    }

    // 0x100366ea0
    void NXTRenderCanvas::RenderThread_PrepareRender() {}

    // 0x100366eb0
    void NXTRenderCanvas::RenderThread_Render(bool arg1) {
        unsigned int arg1_00;
        unsigned int arg2;
        void** this_03;

        unsigned long long uVar3 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
        auto this_00 = OSRenderCore_RenderThread::Instance();
        uint8_t bVar1 = IsRenderContextReady();
        if ((bVar1 & arg1) == 1) {
            ((OSRenderCore_RenderThread_Common*)(this_00->field_32 + (long)(this_00->_vptr[-3].GetUISize - 32)))
                ->ShowSkybox(field_72);
            OSRenderCore_RenderThread::SetSkyboxColour(this_00);
            this_00->SetFogParams(m_fogParams, field_100);
            this_03 = &this_00->field_112;
            arg1_00 = field_40.GetX();
            arg2 = field_44.GetX();
            this_03->SetUISize(arg1_00, arg2);
            this_03->SetUIViewRect(field_24, field_28, m_screenSize, field_36);
            this_00->SetScreenSize(m_screenSize, field_36);
            ((OSRenderCore_RenderThread_Common*)(this_00->field_32 + (long)(this_00->_vptr[-3].GetUISize - 32)))
                ->ShowUI(field_64);
            this_03->SetScaledUIQuality(m_scaledUIQuality);
            ((OSRenderCore_RenderThread_Common*)(this_00->field_32 + (long)(this_00->_vptr[-3].GetUISize - 32)))
                ->SetRenderViewRect(field_48, field_52, field_56, field_60);
            OSRenderCore_RenderThread_JavaStyle::Instance()->SetDepthBufferEnabled(m_depthBufferEnabled);
            if (field_140 == '\0') {
                this_00->NewFrame3D();
            } else {
                this_03->NewFrame2D();
            }
            this_03->UploadUI((unsigned int*)field_112.data());
            this_00->UploadBuffers(field_140 == '\0');
            if (field_140 == '\0') {
                this_00->EndFrame3D();
            } else {
                this_03->EndFrame2D();
            }
        } else {
            this_00->UploadBuffers(false);
        }
        uint32_t uVar2 = 0;
        if ((bVar1 & arg1) != 0) {
            uVar2 = ((OSRenderCore_RenderThread_Common*)(this_00->field_32 + (long)(this_00->_vptr[-3].GetUISize - 32)))
                        ->GetNumVerts();
        }
        m_lastNumVerts = uVar2;
        unsigned long long uVar4 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
        this_00->Paint();
        unsigned long long uVar5 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
        field_0 = uVar4 - uVar3;
        field_8 = uVar5 - uVar4;
        field_140 = 0;
    }

    // 0x100367b10
    void CalculateGroundProjectionPointsInner(GroundProjPoints& groundProjPoints, int arg2, int arg3, int arg4,
                                              int arg5, int arg6, int arg7, int arg8) {
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar9;
        int iVar10;
        int iVar11;
        int iVar12;
        int iVar13;

        groundProjPoints = (GroundProjPoints)0;
        int iVar1 = *(int*)(groundProjPoints + 4) * arg5 + *(int*)(groundProjPoints + 36) * arg4 >> 16;
        int iVar2 = *(int*)(groundProjPoints + 36) * arg5 - *(int*)(groundProjPoints + 4) * arg4 >> 16;
        *(int*)(groundProjPoints + 4) = iVar1;
        int iVar7 = *(int*)(groundProjPoints + 20) * arg3 - iVar2 * arg2 >> 16;
        iVar2 = iVar2 * arg3 + *(int*)(groundProjPoints + 20) * arg2;
        int iVar8 = iVar2 >> 16;
        *(int*)(groundProjPoints + 36) = iVar8;
        *(int*)(groundProjPoints + 20) = iVar7;
        if (3276799 < iVar2) {
            iVar3 = *(int*)(groundProjPoints + 8) * arg5 + *(int*)(groundProjPoints + 40) * arg4 >> 16;
            iVar2 = *(int*)(groundProjPoints + 40) * arg5 - *(int*)(groundProjPoints + 8) * arg4 >> 16;
            *(int*)(groundProjPoints + 8) = iVar3;
            iVar6 = *(int*)(groundProjPoints + 24) * arg3 - iVar2 * arg2 >> 16;
            iVar2 = iVar2 * arg3 + *(int*)(groundProjPoints + 24) * arg2;
            iVar4 = iVar2 >> 16;
            *(int*)(groundProjPoints + 40) = iVar4;
            *(int*)(groundProjPoints + 24) = iVar6;
            if (3276799 < iVar2) {
                iVar11 = *(int*)(groundProjPoints + 12) * arg5 + *(int*)(groundProjPoints + 44) * arg4 >> 16;
                iVar2 = *(int*)(groundProjPoints + 44) * arg5 - *(int*)(groundProjPoints + 12) * arg4 >> 16;
                *(int*)(groundProjPoints + 12) = iVar11;
                iVar12 = *(int*)(groundProjPoints + 28) * arg3 - iVar2 * arg2 >> 16;
                iVar13 = iVar2 * arg3 + *(int*)(groundProjPoints + 28) * arg2;
                iVar2 = iVar13 >> 16;
                *(int*)(groundProjPoints + 44) = iVar2;
                *(int*)(groundProjPoints + 28) = iVar12;
                if (3276799 < iVar13) {
                    iVar13 = *(int*)(groundProjPoints + 16) * arg5 + *(int*)(groundProjPoints + 48) * arg4 >> 16;
                    iVar9 = *(int*)(groundProjPoints + 48) * arg5 - *(int*)(groundProjPoints + 16) * arg4 >> 16;
                    *(int*)(groundProjPoints + 16) = iVar13;
                    iVar5 = *(int*)(groundProjPoints + 32) * arg3 - iVar9 * arg2 >> 16;
                    iVar10 = iVar9 * arg3 + *(int*)(groundProjPoints + 32) * arg2;
                    iVar9 = iVar10 >> 16;
                    *(int*)(groundProjPoints + 48) = iVar9;
                    *(int*)(groundProjPoints + 32) = iVar5;
                    if (3276799 < iVar10) {
                        *(int*)(groundProjPoints + 52) = (iVar1 * arg8) / iVar8 + arg6;
                        *(int*)(groundProjPoints + 56) = (iVar7 * arg8) / iVar8 + arg7;
                        *(int*)(groundProjPoints + 60) = (iVar3 * arg8) / iVar4 + arg6;
                        *(int*)(groundProjPoints + 64) = (iVar6 * arg8) / iVar4 + arg7;
                        *(int*)(groundProjPoints + 68) = (iVar11 * arg8) / iVar2 + arg6;
                        *(int*)(groundProjPoints + 72) = (iVar12 * arg8) / iVar2 + arg7;
                        *(int*)(groundProjPoints + 76) = (iVar13 * arg8) / iVar9 + arg6;
                        *(int*)(groundProjPoints + 80) = (iVar5 * arg8) / iVar9 + arg7;
                        groundProjPoints = (GroundProjPoints)1;
                    }
                }
            }
        }
    }

    // 0x100367d80
    world* CalculateGroundProjectionPointsGrid(const world& world, int arg2, int arg3, int arg4, int arg5, int arg6,
                                               int arg7, int arg8, int arg9, int arg10, int arg11) {
        uint32_t in_register_00000034;
        world world;
        int in_stack_00000030;

        world = (world*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        int iVar1 = arg8 * 128 - dash3d::world::m_cx;
        int iVar2 = arg9 * 128 - dash3d::world::m_cz;
        *(uint8_t*)&world.field_0 = 0;
        *(int*)&world.field_16 = iVar1;
        *(int*)((long)&world.field_0 + 4) = iVar1;
        *(int*)&world.field_36 = iVar2;
        *(int*)&world.field_40 = iVar2;
        *(int*)&world.field_8 = iVar1 + 128;
        *(int*)((long)&world.field_8 + 4) = iVar1 + 128;
        *(int*)&world.field_44 = iVar2 + 128;
        *(int*)&world.field_48 = iVar2 + 128;
        iVar1 = world.GetGroundHeight(arg3, arg8, arg9);
        *(int*)&world.field_20 = iVar1 - dash3d::world::m_cy;
        iVar1 = world.GetGroundHeight(arg3, arg8 + 1, arg9);
        *(int*)&world.field_24 = iVar1 - dash3d::world::m_cy;
        iVar1 = world.GetGroundHeight(arg3, arg8 + 1, arg9 + 1);
        *(int*)&world.field_28 = iVar1 - dash3d::world::m_cy;
        iVar1 = world.GetGroundHeight(arg3, arg8, arg9 + 1);
        *(int*)&world.field_32 = iVar1 - dash3d::world::m_cy;
        CalculateGroundProjectionPointsInner((GroundProjPoints*)world, arg4, arg5, arg6, arg7, arg10, arg11,
                                             in_stack_00000030);
        return world;
    }

    // 0x100367ea0
    world* CalculateGroundProjectionPointsFine(const world& world, int arg2, int arg3, int arg4, int arg5, int arg6,
                                               int arg7, int arg8, int arg9, int arg10, int arg11) {
        uint32_t in_register_00000034;
        world world;
        int in_stack_00000030;

        world = (world*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        int iVar1 = arg8 - dash3d::world::m_cx;
        int iVar2 = arg9 - dash3d::world::m_cz;
        *(uint8_t*)&world.field_0 = 0;
        *(int*)&world.field_16 = iVar1;
        *(int*)((long)&world.field_0 + 4) = iVar1;
        *(int*)&world.field_36 = iVar2;
        *(int*)&world.field_40 = iVar2;
        *(int*)&world.field_8 = iVar1 + 128;
        *(int*)((long)&world.field_8 + 4) = iVar1 + 128;
        *(int*)&world.field_44 = iVar2 + 128;
        *(int*)&world.field_48 = iVar2 + 128;
        iVar1 = world.GetGroundHeightAtFinePos(arg3, arg8, arg9);
        *(int*)&world.field_20 = iVar1 - dash3d::world::m_cy;
        iVar1 = world.GetGroundHeightAtFinePos(arg3, arg8 + 128, arg9);
        *(int*)&world.field_24 = iVar1 - dash3d::world::m_cy;
        iVar1 = world.GetGroundHeightAtFinePos(arg3, arg8 + 128, arg9 + 128);
        *(int*)&world.field_28 = iVar1 - dash3d::world::m_cy;
        iVar1 = world.GetGroundHeightAtFinePos(arg3, arg8, arg9 + 128);
        *(int*)&world.field_32 = iVar1 - dash3d::world::m_cy;
        CalculateGroundProjectionPointsInner((GroundProjPoints*)world, arg4, arg5, arg6, arg7, arg10, arg11,
                                             in_stack_00000030);
        return world;
    }

    // 0x1003692f0
    bool operator==(const ResolvedModel& resolvedModel1, const ResolvedModel& resolvedModel2) {
        uint8_t bVar2;
        PoseStateRSeven* poseStateRSeven1;
        PoseStateRSeven* poseStateRSeven2;

        uint8_t* uint8_t = resolvedModel1.m_animationState;
        char cVar1 = uint8_t->operator_cast_to_bool();
        if (!cVar1) {
            bVar2 = resolvedModel2.m_animationState->operator_cast_to_bool();
            bVar2 = bVar2 ^ 1;
        } else {
            bVar2 = 0;
        }
        cVar1 = uint8_t->operator_cast_to_bool();
        if (!cVar1) {
            cVar1 = '\0';
        } else {
            cVar1 = resolvedModel2.m_animationState->operator_cast_to_bool();
        }
        bool bVar3 = resolvedModel1 == resolvedModel2;
        if (bVar3) {
            if (bVar2 != 0) {
            LAB_100369356:
                bVar3 = resolvedModel1.field_48 == resolvedModel2.field_48;
                return bVar3;
            }
            if (cVar1) {
                poseStateRSeven1 = (PoseStateRSeven*)**uint8_t;
                poseStateRSeven2 = (PoseStateRSeven*)*resolvedModel2.m_animationState;
                cVar1 = *poseStateRSeven1 == *poseStateRSeven2;
                if (cVar1)
                    goto LAB_100369356;
            }
        }
        return false;
    }

    // 0x100369410
    uint8_t operator!=(const ResolvedModel& resolvedModel1, const ResolvedModel& resolvedModel2) {
        return resolvedModel1 == resolvedModel2 ^ 1;
    }

    // 0x100369420
    void operator==(const Operation& operation1, const Operation& operation2) {
        (operation1._vptr->IsEqual)(operation1);
    }

    // 0x100369430
    uint8_t operator!=(const Operation& operation1, const Operation& operation2) {
        return operation1 == operation2 ^ 1;
    }

    // 0x100369440
    unsigned long operator==(const OperationBuffer& operationBuffer1, const OperationBuffer& operationBuffer2) {
        vector<shared_ptr<Operation>>* pvVar5;
        shared_ptr<Operation>* psVar6;
        Operation* operation1;
        Operation* operation2;
        unsigned long uVar7;
        unsigned long uVar8;
        uint64_t unaff_R12;
        bool bVar9;

        auto pvVar2 = operationBuffer1.operator->();
        long lVar3 = pvVar2->size();
        pvVar2 = (vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>*)operationBuffer2.operator->();
        long lVar4 = pvVar2->size();
        if (lVar3 == lVar4) {
            pvVar2 = (vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>*)operationBuffer1.operator->();
            lVar3 = pvVar2->size();
            bVar9 = lVar3 != 0;
            if (bVar9) {
                uVar8 = 0;
                do {
                    pvVar5 = (vector<shared_ptr<Operation>>*)operationBuffer1.operator->();
                    psVar6 = (shared_ptr<Operation>*)(*pvVar5)[uVar8];
                    operation1 = (Operation*)**psVar6;
                    pvVar5 = (vector<shared_ptr<Operation>>*)operationBuffer2.operator->();
                    psVar6 = (shared_ptr<Operation>*)(*pvVar5)[uVar8];
                    operation2 = (Operation*)**psVar6;
                    if (*operation1 != *operation2 != '\0')
                        break;
                    uVar8 = uVar8 + 1;
                    pvVar2 = (vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>*)operationBuffer1.operator->();
                    uVar7 = pvVar2->size();
                    bVar9 = uVar8 < uVar7;
                } while (bVar9);
            }
            uVar8 = (((uint64_t)((int64_t)((unsigned long)unaff_R12 >> 8)) << 8) | (uint8_t)bVar9) ^ 1;
        } else {
            uVar8 = 0;
        }
        return uVar8 & 4294967041;
    }

    // 0x1003695f0
    uint8_t operator!=(const OperationBuffer& operationBuffer1, const OperationBuffer& operationBuffer2) {
        return operationBuffer1 == operationBuffer2 ^ 1;
    }

    // 0x10036a2f0
    bool
    OperationBuffer::ResolveAgainstPrevious(ResolvedModel& resolvedModel, unsigned long& arg2,
                                            const eastl::vector<OperationRecordEntry>& operationRecordEntrys) const {
        OperationRecordEntry* this_01;
        vector<shared_ptr<Operation>>* this_02;
        shared_ptr<Operation>* this_03;
        shared_ptr<Operation>* this_04;
        Operation* operation1;
        Operation* operation2;
        ResolvedModel* resolvedModel_00;
        uint64_t* puVar5;
        uint64_t extraout_RAX;
        long lVar6;
        OperationRecordEntry local_1c8;
        ResolvedModel local_d8;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_60;
        unsigned int local_34;

        unsigned long uVar1 = arg2;
        vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>* pvVar3 =
            (vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>*)(*this).operator->();
        unsigned long uVar4 = pvVar3->size();
        if (uVar1 < uVar4) {
            local_34 = 0;
            do {
                uVar1 = arg2;
                uVar4 = operationRecordEntrys.size();
                if (uVar4 <= uVar1)
                    break;
                this_01 = &operationRecordEntrys[arg2];
                this_02 = (vector<shared_ptr<Operation>>*)(*this).operator->();
                this_03 = (shared_ptr<Operation>*)(*this_02)[arg2];
                this_04 = this_01->GetOperation();
                local_60 = shared_ptr();
                local_d8 = ResolvedModel();
                if ((local_34 & 1) == 0) {
                    operation1 = (Operation*)**this_03;
                    operation2 = (Operation*)**this_04;
                    if (*operation1 == *operation2 == '\0')
                        goto LAB_10036a3f0;
                    resolvedModel_00 = this_01->GetOutputModel();
                    local_d8 = *resolvedModel_00;
                    local_60 = *this_04;
                } else {
                LAB_10036a3f0:
                    puVar5 = (uint64_t*)(*this_03).operator->();
                    (**(void (**)(...))*puVar5)(&local_1c8, puVar5, resolvedModel, this_01);
                    local_d8 = local_1c8;
                    local_34 =
                        (unsigned int)(((uint64_t)((int64_t)((unsigned long)extraout_RAX >> 8)) << 8) | (uint8_t)1);
                    local_60 = *this_03;
                }
                lVar6 = (*this).operator->();
                local_1c8 = OperationRecordEntry(local_60, resolvedModel, local_d8);
                ((lVar6 + 32))->push_back(local_1c8);
                resolvedModel = local_d8;
                arg2 = arg2 + 1;
                uVar1 = arg2;
                pvVar3 = (vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>*)(*this).operator->();
                uVar4 = pvVar3->size();
            } while (uVar1 < uVar4);
            if ((local_34 & 1) != 0) {
                return false;
            }
        } else {
            local_34 = 0;
        }
        uVar1 = arg2;
        pvVar3 = (vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>*)(*this).operator->();
        uVar4 = pvVar3->size();
        if (uVar1 == uVar4) {
            uVar1 = arg2;
            uVar4 = operationRecordEntrys.size();
            return uVar1 == uVar4;
        }
        return false;
    }

    // 0x10036a640
    uint8_t* ResolvedModel::TryGetUploadableModel() const {
        return field_16;
    }

    // 0x10036a740
    shared_ptr<Operation>* OperationRecordEntry::GetOperation() const {
        return (shared_ptr<Operation>*)this;
    }

    // 0x10036a750
    ResolvedModel* OperationRecordEntry::GetOutputModel() const {
        return (ResolvedModel*)m_outputModel;
    }

    // 0x10036a7a0
    ResolvedModel* OperationRecordEntry::GetInputModel() const {
        return (ResolvedModel*)m_inputModel;
    }

    // 0x10036a7b0
    auto ResolvedModel::GetWorldTransform(int arg1, int arg2, int arg3, int arg4) const {
        auto result;
        ReturnValue local_88;

        jag::math::Matrix33RotationY<float>((float)arg1 * 0.0030679617f);
        ColourHSL local_40((float)arg2, (float)arg3, (float)arg4);
        Matrix44T<float> local_c8(local_88, local_40);
        GetLocalTransform(&local_88, this);
        result* local_88;
        return result;
    }

    // 0x10036a850
    uint8_t* ResolvedModel::GetUploadableModel() const {
        shared_ptr<jag::graphics::Model>* this_01;
        Model* model;
        ReturnValue local_30;
        uint32_t local_1c;

        uint8_t* this_00 = field_16;
        if (this_00->operator_cast_to_bool() == '\0') {
            this_01 = (shared_ptr<jag::graphics::Model>*)GetModel();
            model = (Model*)**this_01;
            local_1c = 1;
            make_shared<jag::graphics::Model, jag::graphics::Model const&, jag::graphics::ModelCopyType>(
                &local_30, model, (ModelCopyType*)&local_1c);
            *this_00 = local_30;
            g_numModelCopiesEver._0_4_ = (int)g_numModelCopiesEver + 1;
            _DAT_10422a8c4 = _DAT_10422a8c4 + 1;
        }
        return this_00;
    }

    // 0x10036a930
    ResolvedModel CombineOperation::Apply(const ResolvedModel& resolvedModel,
                                          const OperationRecordEntry* operationRecordEntry) const {
        shared_ptr<Operation>* this_00;

        if (!(field_16.empty())) {
            if (operationRecordEntry != nullptr) {
                this_00 = operationRecordEntry->GetOperation();
                if (((CommandLine*)(*this_00).operator->())->GetPos() == 1) {
                    ResolvedModel result;
                    if (TryReuseModelCombination(resolvedModel, operationRecordEntry, result)) {
                        return result;
                    }
                    result.~ResolvedModel();
                }
            }
            ApplyFresh(&result, (ResolvedModel*)this, (OperationRecordEntry*)resolvedModel);
        } else {
            new (&result) ResolvedModel(resolvedModel);
        }
        return result;
    }

    // 0x10036a9f0
    uint64_t CombineOperation::TryReuseModelCombination(const ResolvedModel& resolvedModel1,
                                                        const OperationRecordEntry* operationRecordEntry,
                                                        ResolvedModel& resolvedModel2) const {
        auto this_00 = operationRecordEntry->GetOperation();
        long lVar2 = **this_00;
        auto pRVar3 = operationRecordEntry->GetInputModel();
        bool cVar1 = OnlyAnimationsChanged((CombineOperation*)operationRecordEntry, resolvedModel1, pRVar3);
        if ((!cVar1) || (cVar1 = OnlyAnimationsChangedBetweenModelSets((CombineOperation*)operationRecordEntry,
                                                                       (vector<OperationBuffer>*)&field_16,
                                                                       (vector<OperationBuffer>*)(lVar2 + 16)),
                         !cVar1)) {
            return 0;
        }
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_40;
        field_48 = (*((lVar2 + 48)));
        RelabelAnimationsForModelSet(local_40, resolvedModel1);
        pRVar3 = operationRecordEntry->GetOutputModel();
        auto model = pRVar3->GetModel();
        ResolvedModel local_b8(*model, local_40, PTR_IDENTITY_100ee6730);
        resolvedModel2 = local_b8;
        return 1;
    }

    // 0x10036af80
    jag::math::AABB CombineOperation::ApplyAABB(const jag::math::AABB& aabb) const {
        uint8_t local_48[32];

        jag::math::AABB result(aabb);
        auto this_00 = field_16.HeapBeginPtr();
        auto pOVar1 = field_16.end();
        if (this_00 != pOVar1) {
            do {
                *local_48 = this_00->ResolveAABB();
                result.AddAABB(*local_48);
                this_00 = this_00 + 1;
            } while (this_00 != pOVar1);
        }
        return result;
    }

    // 0x10036aff0
    unsigned long CombineOperation::IsEqual(const Operation& operation) const {
        bool cVar1;
        long lVar3;
        long lVar4;
        OperationBuffer* pOVar5;
        OperationBuffer* pOVar6;
        unsigned long uVar7;
        unsigned long uVar8;
        uint64_t unaff_R12;
        Operation* this_00;
        uint8_t* this_01;
        bool bVar9;

        if (operation.GetPos() == 1) {
            this_01 = &field_16;
            lVar3 = this_01->size();
            this_00 = operation + 1;
            lVar4 = this_00->size();
            if (lVar3 == lVar4) {
                lVar3 = this_01->size();
                bVar9 = lVar3 != 0;
                if (bVar9) {
                    pOVar5 = (OperationBuffer*)(*this_01)[0];
                    pOVar6 = (OperationBuffer*)(*this_00)[0];
                    cVar1 = *pOVar5 != *pOVar6;
                    if (!cVar1) {
                        uVar8 = 1;
                        do {
                            uVar7 = this_01->size();
                            bVar9 = uVar8 < uVar7;
                            if (!bVar9)
                                break;
                            pOVar5 = (OperationBuffer*)(*this_01)[uVar8];
                            pOVar6 = (OperationBuffer*)(*this_00)[uVar8];
                            cVar1 = *pOVar5 != *pOVar6;
                            uVar8 = uVar8 + 1;
                        } while (!cVar1);
                    }
                }
                uVar8 = (((uint64_t)((int64_t)((unsigned long)unaff_R12 >> 8)) << 8) | (uint8_t)bVar9) ^ 1;
                goto LAB_10036b0c6;
            }
        }
        uVar8 = 0;
    LAB_10036b0c6:
        return uVar8 & 4294967295;
    }

    // 0x10036b120
    void CombineOperation::Append(Operation&& operation) {
        OperationBuffer* operationBuffer;

        operationBuffer = (OperationBuffer*)((operation + 1))->HeapBeginPtr();
        OperationBuffer* pOVar1 = (OperationBuffer*)((operation + 1))->end();
        if (operationBuffer != pOVar1) {
            do {
                field_16.push_back(*operationBuffer);
                operationBuffer = operationBuffer + 1;
            } while (operationBuffer != pOVar1);
        }
    }

    // 0x10036b1e0
    void SetModelExternalId(jag::graphics::Model& model, int arg2) {
        auto layout = model.GetBatchList();
        auto this_00 = layout->HeapBeginPtr();
        auto puVar1 = layout->end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            ((GeometryBatchInstance*)(*this_00).operator->())->ChangeSourceExternalIDs(arg2);
        }
    }

    // 0x10036b250
    void CombineOperation::UpdateTransformAndAnimationState(jag::graphics::Model& model,
                                                            shared_ptr<PoseStateRSeven>& poseStateRSeven1,
                                                            const shared_ptr<PoseStateRSeven>& poseStateRSeven2,
                                                            jag::math::Matrix44T<float> matrix44, unsigned short& arg5,
                                                            unsigned short& arg6, unsigned short& arg7) const {
        uint16_t uVar1;
        uint16_t uVar3;
        unsigned short uVar5;
        CombineOperation* this_00;
        LabelShiftRange* labelShiftRange;
        vector<CombineOperation::LabelShiftRange>* this_01;
        unsigned short* in_stack_00000048;
        uint8_t local_80[16];
        uint32_t local_68;
        unsigned short local_32;

        shared_ptr local_58(poseStateRSeven2);
        shared_ptr<PoseStateRSeven>* poseStateRSeven = (shared_ptr<PoseStateRSeven>*)PTR_IDENTITY_100ee6730;
        if (arg6 != *PTR_IDENTITY_100ee6730) {
            if (!(poseStateRSeven2.operator_cast_to_bool())) {
                model.StartTransform();
                model.Transform(arg6);
                model.TransformNormals(arg6, false);
                model.EndTransform(true);
            } else {
                TransformAnimationState((CombineOperation*)local_80, poseStateRSeven, (Matrix44T<float>*)&local_58);
            }
        }
        if (!(shared_ptr::operator_cast_to_bool(&local_58))) {
            this_01 = (vector<CombineOperation::LabelShiftRange>*)field_48.operator->();
            local_68 = 0;
            this_01->push_back(18446462603027742720);
        } else {
            uVar1 = *(uint16_t*)matrix44;
            local_32 = *in_stack_00000048;
            RelabelModelForAnimation(model, *matrix44, arg5, *in_stack_00000048);
            this_00 = (CombineOperation*)field_48.operator->();
            labelShiftRange = (LabelShiftRange*)this_00->push_back();
            uVar3 = *(uint16_t*)matrix44;
            uVar5 = *in_stack_00000048;
            *(uint16_t*)labelShiftRange = uVar1;
            *(uint16_t*)(labelShiftRange + 2) = uVar3;
            *(unsigned short*)(labelShiftRange + 4) = (unsigned short)arg5;
            *(unsigned short*)(labelShiftRange + 6) = (unsigned short)arg5;
            *(unsigned short*)(labelShiftRange + 8) = local_32;
            *(unsigned short*)(labelShiftRange + 10) = uVar5;
            ShiftLabelsAndCombineAnimation(this_00, poseStateRSeven1, (shared_ptr<PoseStateRSeven>*)&local_58,
                                           labelShiftRange);
        }
    }

    // 0x10036b430
    auto CombineOperation::GetTextureAtlasQuality() {
        auto result;
        ReturnValue RVar1;
        ReturnValue RVar2;
        ReturnValue RVar3;
        TextureManager* this_01;
        long lVar4;

        auto oSRenderCore_RenderThread = OSRenderCore_RenderThread::Instance();
        auto this_00 = oSRenderCore_RenderThread->GetRT7Core();
        if (this_00 == nullptr) {
            &result[2] = (ReturnValue)0;
            &result[3] = (ReturnValue)0;
            result = (ReturnValue)0;
            &result[1] = (ReturnValue)0;
            *(uint32_t*)(&result + 4) = 0;
        } else {
            this_01 = this_00->GetTextureManager();
            lVar4 = ((TextureAtlasManager*)this_01->GetTextureAtlasManager())->GetSettings();
            RVar1 = *(ReturnValue*)(lVar4 + 152);
            RVar2 = *(ReturnValue*)(lVar4 + 160);
            RVar3 = *(ReturnValue*)(lVar4 + 168);
            result = *(ReturnValue*)(lVar4 + 144);
            &result[1] = RVar1;
            &result[2] = RVar2;
            &result[3] = RVar3;
            *(uint32_t*)(&result + 4) = *(uint32_t*)(lVar4 + 176);
        }
        return result;
    }

    // 0x10036b4f0
    uint64_t CombineOperation::GetPreviousBuffer(const OperationRecordEntry* operationRecordEntry,
                                                 unsigned long arg2) const {
        shared_ptr<Operation>* this_00;
        long lVar2;
        unsigned long uVar3;

        if (operationRecordEntry != nullptr) {
            this_00 = operationRecordEntry->GetOperation();
            if (((CommandLine*)(*this_00).operator->())->GetPos() == 1) {
                lVar2 = **this_00;
                uVar3 = ((lVar2 + 16))->size();
                if (arg2 < uVar3) {
                    return (*((lVar2 + 16)))[arg2];
                }
            }
        }
        return 0;
    }

} // namespace jag::oldscape::dash3d

namespace jag::math {
    // 0x1003693b0
    bool operator== <float>(const Matrix44T<float>& matrix441, const Matrix44T<float>& matrix442) {
        bool bVar1 = matrix441 == matrix442;
        if (((bVar1) && (bVar1 = (*((matrix441 + 16))) == (*((matrix442 + 16))), bVar1)) &&
            (bVar1 = (*((matrix441 + 32))) == (*((matrix442 + 32))), bVar1)) {
            bVar1 = (*((matrix441 + 48))) == (*((matrix442 + 48)));
            return bVar1;
        }
        return false;
    }

} // namespace jag::math

namespace jag {
    // 0x100369aa0
    shared_ptr_if_not_array<oldscape::dash3d::OperationBuffer::OperationImpl>::type
    make_shared<oldscape::dash3d::OperationBuffer::OperationImpl>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        OperationImpl* local_28[2];

        auto arg1 = aligned_alloc(256, 16);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::OperationBuffer::OperationImpl>::type result;
        } else {
            local_28[0] = placement_new<oldscape::dash3d::OperationBuffer::OperationImpl>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::OperationBuffer::OperationImpl>, int,
                              oldscape::dash3d::OperationBuffer::OperationImpl*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
