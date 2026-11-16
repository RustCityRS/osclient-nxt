// _unplaced/libs/oldscape/jagex3/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "libs/oldscape/jagex3/dash3d/AnimFrameSet.h"
#include "libs/oldscape/jagex3/dash3d/ModelRSeven.h"

namespace jag::oldscape::dash3d {
    class GeometryEditBaseOperation {
    public:
        // virtual methods in vtable order
        virtual auto Apply(const ResolvedModel& resolvedModel, const OperationRecordEntry* operationRecordEntry) const;
        GeometryEditBaseOperation(Operation::Type arg1);

    private:
        Type field_8;
    };

    class TintOperation {
    public:
        // virtual methods in vtable order
        virtual bool IsEqual(const Operation& operation) const;
        virtual auto ApplyFresh(const ResolvedModel& resolvedModel,
                                const OperationRecordEntry* operationRecordEntry) const;
        TintOperation(signed char arg1, signed char arg2, signed char arg3, unsigned char arg4);
        void PackColourWeight(signed char arg1, signed char arg2, signed char arg3, unsigned char arg4);

    private:
        uint8_t _unknown_8[8];
        uint64_t field_16;
        uint64_t field_24;
    };

    // 0x100f37e10
    int32_t ModelLitRenderer_drawModels = 1;

    // 0x103936070
    int64_t g_usingRSeven;

    // 0x103936560
    int64_t ModelLitRenderer_lastModelLitUploadTotal;

    // 0x103936568
    int64_t ModelLitRenderer_lastModelLitWorldRenderTotal;

    // 0x103936570
    int64_t ModelLitRenderer_lastModelLitWorldRenderTotalNanos;

    // 0x103936578
    int64_t ModelLitRenderer_lastCachedModelsTotal;

    // 0x10422a888
    int64_t g_numModelCopiesEver;

    // 0x10422a890
    uint8_t g_numCopiesPerOpType[64];

    // 0x10036cf50
    bool
    AnimateBaseOperation::CanReusePreviousTransparencyBatching(const ResolvedModel& resolvedModel,
                                                               const OperationRecordEntry* operationRecordEntry) const {
        bool bVar1;
        int iVar2;
        int iVar3;
        shared_ptr<Operation>* this_00;
        long lVar4;
        shared_ptr<midi2::MidiRequest>* midiRequest1;
        ResolvedModel* this_02;
        shared_ptr<midi2::MidiRequest>* midiRequest2;

        if (operationRecordEntry != nullptr) {
            this_00 = operationRecordEntry->GetOperation();
            iVar2 = ((CommandLine*)(*this_00).operator->())->GetPos();
            iVar3 = GetPos();
            if (iVar2 == iVar3) {
                lVar4 = **this_00;
                midiRequest1 = (shared_ptr<midi2::MidiRequest>*)resolvedModel.GetModel();
                this_02 = operationRecordEntry->GetInputModel();
                midiRequest2 = (shared_ptr<midi2::MidiRequest>*)this_02->GetModel();
                bVar1 = *midiRequest1 == *midiRequest2;
                if (bVar1) {
                    bVar1 = *field_16 == (*((lVar4 + 16)));
                    return bVar1;
                }
            }
        }
        return false;
    }

    // 0x10036d050
    void AnimateBaseOperation::SeparateBatchByLabelTransparency(
        const jag::graphics::GeometryBatchInstance& geometryBatchInstance, jag::graphics::Model& model,
        eastl::vector<std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                      MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>&
            geometryBatchInstances) const {
        ReturnValue local_f0;
        ReturnValue local_c8;
        ReturnValue local_a8;
        ReturnValue local_a0;
        uint8_t local_98[48];
        function<unsigned short(unsigned short)> local_68[48];
        long local_38;

        GeometryBatchInstance* pGVar1 = geometryBatchInstance;
        auto this_00 = geometryBatchInstance.GetGeometryBatch();
        auto arg1 = this_00->GetMaterial();
        InvertLabelMapping(&local_f0, (AnimateBaseOperation*)pGVar1, arg1);
        CopyBatchInstanceVertices(&local_a8, (AnimateBaseOperation*)pGVar1, geometryBatchInstance, model);
        CopyBatchInstanceVertices(&local_a0, (AnimateBaseOperation*)pGVar1, geometryBatchInstance, model);
        pGVar1 = (GeometryBatchInstance*)local_a8.operator->();
        auto geometryBatch2 = pGVar1->GetGeometryBatch();
        pGVar1 = (GeometryBatchInstance*)local_a0.operator->();
        auto geometryBatch3 = pGVar1->GetGeometryBatch();
        SplitBatchIndices(&local_c8, this, (GeometryBatch*)this_00, &local_f0, geometryBatch2, geometryBatch3);
        pGVar1 = (GeometryBatchInstance*)*local_a8;
        AnimateBaseOperation* pAVar2 = (AnimateBaseOperation*)local_68;
        std::function<unsigned short(unsigned short)>::function<
            AnimateBaseOperation::SeparateBatchByLabelTransparency(
                jag::graphics::GeometryBatchInstance const&, jag::graphics::Model&,
                eastl::vector<std::unique_ptr<
                    jag::graphics::GeometryBatchInstance,
                    MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>&) const ::__10,
            void>(local_68, &local_c8);
        UpdateBatchExternalIndexList(pAVar2, pGVar1, (function<unsigned_short_(unsigned short)>*)local_68);
        pGVar1 = (GeometryBatchInstance*)*local_a0;
        pAVar2 = (AnimateBaseOperation*)local_98;
        std::function<unsigned short(unsigned short)>::function<
            AnimateBaseOperation::SeparateBatchByLabelTransparency(
                jag::graphics::GeometryBatchInstance const&, jag::graphics::Model&,
                eastl::vector<std::unique_ptr<
                    jag::graphics::GeometryBatchInstance,
                    MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>&) const ::__11,
            void>((function<unsigned short(unsigned short)>*)local_98, &local_c8);
        UpdateBatchExternalIndexList(pAVar2, pGVar1, (function<unsigned_short_(unsigned short)>*)local_98);
        pAVar2 = (AnimateBaseOperation*)local_98;
        pAVar2->~function();
        OutputIfNonempty(
            pAVar2,
            (unique_ptr<jag::graphics::GeometryBatchInstance,
                        MakeUniquePool<jag::graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>*)&local_a8,
            geometryBatchInstances);
        OutputIfNonempty(
            pAVar2,
            (unique_ptr<jag::graphics::GeometryBatchInstance,
                        MakeUniquePool<jag::graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>*)&local_a0,
            geometryBatchInstances);
    }

    // 0x10036d270
    void AnimateBaseOperation::ReplaceModelBatches(
        jag::graphics::Model& model,
        eastl::vector<std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                      MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>&
            geometryBatchInstances) const {
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>*
            geometryBatchInstance;

        auto pvVar1 = model.GetBatchList();
        pvVar1->clear();
        geometryBatchInstance =
            (unique_ptr<jag::graphics::GeometryBatchInstance,
                        MakeUniquePool<jag::graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>*)
                geometryBatchInstances.HeapBeginPtr();
        auto puVar2 = geometryBatchInstances.end();
        for (; geometryBatchInstance != puVar2; geometryBatchInstance = geometryBatchInstance + 8) {
            pvVar1 = (vector<
                      std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                      MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>*)
                         model.GetBatchList();
            pvVar1->push_back(*geometryBatchInstance);
        }
    }

    // 0x10036d3e0
    auto AnimateBaseOperation::InvertLabelMapping(const eastl::vector_map<unsigned short, unsigned short>& arg1) const {
        auto result;
        result.set_capacity(arg1.size());
        auto arg2 = arg1.HeapBeginPtr();
        auto puVar1 = arg1.end();
        for (; arg2 != puVar1; arg2 = arg2 + 2) {
            result.emplace<unsigned short const&, unsigned short const&>(*(arg2 + 1), *arg2);
        }
        return result;
    }

    // 0x10036d470
    auto
    AnimateBaseOperation::CopyBatchInstanceVertices(const jag::graphics::GeometryBatchInstance& geometryBatchInstance,
                                                    jag::graphics::Model& model) const {
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
            local_28;

        uint8_t local_19 = 0;
        MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::MakeUnique<
            jag::graphics::GeometryBatchInstance const&, jag::graphics::Model&, bool>(
            &local_28, (Model*)geometryBatchInstance, (bool*)model);
        auto pGVar1 = local_28.operator->();
        ((GeometryBatch*)pGVar1->GetGeometryBatch())->ClearFaceData();
        pGVar1 = (GeometryBatchInstance*)local_28.operator->();
        pGVar1 = (GeometryBatchInstance*)pGVar1->GetGeometryBatch();
        ((vector<eastl::pair<int, int>>*)pGVar1->GetMaterial())->clear();
        auto result(local_28);
        return result;
    }

    // 0x10036d510
    auto AnimateBaseOperation::SplitBatchIndices(const jag::graphics::GeometryBatch& geometryBatch1,
                                                 const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                                 jag::graphics::GeometryBatch& geometryBatch2,
                                                 jag::graphics::GeometryBatch& geometryBatch3) const {
        unsigned short uVar1;
        ReturnValue* this_00;
        unsigned int uVar2;
        int iVar3;
        int iVar4;
        vector_map<unsigned short, unsigned short>* pvVar6;
        unsigned short* puVar7;
        vector<jag::graphics::GeometryBatchVertexPos>* this_01;
        long lVar8;
        long lVar9;
        unsigned short arg2_00;
        unsigned int uVar10;
        unsigned short uVar11;
        SeparatedIndexCount local_90;
        vector<game::MapSquare::MapSquarePos>* local_80;
        ReturnValue* local_58;
        unsigned int local_38;
        unsigned short local_34;
        unsigned short local_32;

        AnimateBaseOperation* local_60 = this;
        auto pvVar5 = geometryBatch1.GetVertexIndexBuffer();
        auto result;
        result.reserve(pvVar5->size());
        unsigned long local_78 = pvVar5->size();
        local_78 = local_78 / 3;
        unsigned int local_6c = (unsigned int)local_78 & 65535;
        if ((local_78 & 65535) == 0) {
            local_38 = 0;
            arg2_00 = 0;
        } else {
            local_60 = (AnimateBaseOperation*)local_60->field_16;
            uVar11 = 1;
            uVar10 = 0;
            arg2_00 = 0;
            local_38 = 0;
            local_80 = pvVar5;
            local_58 = &result;
            do {
                this_00 = local_58;
                pvVar5 =
                    (vector<game::MapSquare::MapSquarePos>*)((GeometryBatch*)(GeometryBatchInstance*)geometryBatch2)
                        ->GetVertexIndexBuffer();
                iVar3 = pvVar5->size();
                pvVar5 =
                    (vector<game::MapSquare::MapSquarePos>*)((GeometryBatch*)(GeometryBatchInstance*)geometryBatch3)
                        ->GetVertexIndexBuffer();
                iVar4 = pvVar5->size();
                local_90 = SeparatedIndexCount(iVar3, iVar4);
                this_00->push_back(local_90);
                puVar7 = (unsigned short*)(*local_80)[(unsigned long)(uVar10 & 65535)];
                uVar1 = *puVar7;
                this_01 = (vector<jag::graphics::GeometryBatchVertexPos>*)geometryBatch1.GetVertexDataBufferPos();
                lVar8 = (*this_01)[(unsigned long)uVar1];
                local_34 = (unsigned short)*(uint8_t*)(lVar8 + 13);
                lVar8 = eastl::vector_map<unsigned short, unsigned short>::find(arg2);
                local_32 = *(unsigned short*)(lVar8 + 2);
                puVar7 = (unsigned short*)(*local_60).operator->();
                lVar8 = eastl::vector_set<unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                          eastl::vector<unsigned short>>::find(*puVar7);
                uVar1 = uVar11 - 1;
                lVar9 = ((vector<EntityHighlight*, BucketAllocatorEASTL>*)(*local_60).operator->())->end();
                if (lVar8 == lVar9) {
                    if ((local_38 & 1) == 0) {
                        local_38 = (unsigned int)(((uint64_t)((int64_t)((unsigned long)lVar9 >> 8)) << 8) | (uint8_t)1);
                        ((GeometryBatch*)(GeometryBatchInstance*)geometryBatch3)
                            ->PushFaceRange(geometryBatch1, arg2_00, uVar1);
                        arg2_00 = uVar1;
                    }
                    pvVar6 = (vector_map<unsigned short, unsigned short>*)geometryBatch2.GetMaterial();
                    pvVar6->emplace<unsigned short&, unsigned short&>(local_32, local_34);
                } else {
                    if ((local_38 & 1) != 0) {
                        ((GeometryBatch*)(GeometryBatchInstance*)geometryBatch2)
                            ->PushFaceRange(geometryBatch1, arg2_00, uVar1);
                        local_38 = 0;
                        arg2_00 = uVar1;
                    }
                    pvVar6 = (vector_map<unsigned short, unsigned short>*)geometryBatch3.GetMaterial();
                    pvVar6->emplace<unsigned short&, unsigned short&>(local_32, local_34);
                }
                uVar2 = (unsigned int)uVar11;
                uVar11 = uVar11 + 1;
                uVar10 = uVar10 + 3;
                &result = local_58;
            } while (uVar2 < local_6c);
        }
        GeometryBatchInstance* this_03 = (GeometryBatchInstance*)geometryBatch2;
        GeometryBatchInstance* this_04 = (GeometryBatchInstance*)geometryBatch3;
        if ((local_38 & 1) == 0) {
            ((GeometryBatch*)(GeometryBatchInstance*)geometryBatch3)
                ->PushFaceRange(geometryBatch1, arg2_00, (unsigned short)local_78);
            this_03 = (GeometryBatchInstance*)geometryBatch2;
        } else {
            ((GeometryBatch*)(GeometryBatchInstance*)geometryBatch2)
                ->PushFaceRange(geometryBatch1, arg2_00, (unsigned short)local_78);
            this_04 = (GeometryBatchInstance*)geometryBatch3;
        }
        pvVar5 = (vector<game::MapSquare::MapSquarePos>*)this_03->GetVertexIndexBuffer();
        iVar3 = pvVar5->size();
        pvVar5 = (vector<game::MapSquare::MapSquarePos>*)this_04->GetVertexIndexBuffer();
        iVar4 = pvVar5->size();
        SeparatedIndexCount local_68(iVar3, iVar4);
        result.push_back(local_68);
        return result;
    }

    // 0x10036d7e0
    void
    AnimateBaseOperation::UpdateBatchExternalIndexList(jag::graphics::GeometryBatchInstance& geometryBatchInstance,
                                                       std::function<unsigned short(unsigned short)> callback) const {
        unsigned short uVar1;
        unsigned int* puVar4;
        unsigned int* puVar5;

        auto this_00 = geometryBatchInstance.GetRecolourDest();
        long lVar2 = this_00->HeapBeginPtr();
        long lVar3 = this_00->end();
        for (; lVar2 != lVar3; lVar2 = lVar2 + 68) {
            puVar4 = (unsigned int*)std::array<jag::graphics::IndexRange, 5ul>::begin();
            puVar5 = (unsigned int*)std::array<jag::graphics::IndexRange, 5ul>::end();
            for (; puVar4 != puVar5; puVar4 = puVar4 + 2) {
                uVar1 = std::function<unsigned short(unsigned short)>::operator()(
                    (function<unsigned short(unsigned short)>*)callback, (unsigned short)*puVar4);
                *puVar4 = (unsigned int)uVar1;
                uVar1 = std::function<unsigned short(unsigned short)>::operator()(
                    (function<unsigned short(unsigned short)>*)callback, (unsigned short)puVar4[1]);
                puVar4[1] = (unsigned int)uVar1;
            }
        }
    }

    // 0x10036d8c0
    void AnimateBaseOperation::OutputIfNonempty(
        std::unique_ptr<jag::graphics::GeometryBatchInstance,
                        MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&&
            geometryBatchInstance,
        eastl::vector<std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                      MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>&
            geometryBatchInstances) const {
        auto this_00 = geometryBatchInstance.operator->();
        auto this_01 = this_00->GetGeometryBatch();
        if (((vector<game::MapSquare::MapSquarePos>*)this_01->GetVertexIndexBuffer())->size() != 0) {
            geometryBatchInstances.push_back(geometryBatchInstance);
        }
    }

    // 0x10036de00
    auto GeometryEditBaseOperation::Apply(const ResolvedModel& resolvedModel,
                                          const OperationRecordEntry* operationRecordEntry) const {
        shared_ptr<Operation>* this_00;
        Operation* operation2;
        shared_ptr<midi2::MidiRequest>* midiRequest1;
        ResolvedModel* pRVar3;
        shared_ptr<midi2::MidiRequest>* midiRequest2;
        shared_ptr<jag::graphics::Model>* model;
        shared_ptr<PoseStateRSeven>* poseStateRSeven;
        ReturnValue local_78;

        if (operationRecordEntry != nullptr) {
            this_00 = operationRecordEntry->GetOperation();
            operation2 = (Operation*)**this_00;
            if (*this == *operation2 != '\0') {
                midiRequest1 = (shared_ptr<midi2::MidiRequest>*)resolvedModel.GetModel();
                pRVar3 = operationRecordEntry->GetInputModel();
                midiRequest2 = (shared_ptr<midi2::MidiRequest>*)pRVar3->GetModel();
                if (*midiRequest1 == *midiRequest2) {
                    pRVar3 = operationRecordEntry->GetOutputModel();
                    model = (shared_ptr<jag::graphics::Model>*)pRVar3->GetModel();
                    poseStateRSeven = (shared_ptr<PoseStateRSeven>*)resolvedModel.GetAnimationState();
                    local_78 = resolvedModel.GetLocalTransform();
                    return auto(*model, *poseStateRSeven, operationRecordEntry);
                }
            }
        }
        (*this->_vptr[1].Apply)(&result, this, resolvedModel, operationRecordEntry);
        return result;
    }

    // 0x10036f180
    ResolvedModel* LightOperation::Apply(const ResolvedModel& resolvedModel,
                                         const OperationRecordEntry* operationRecordEntry) const {
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>*
            geometryBatchInstance;
        shared_ptr<PoseStateRSeven>* poseStateRSeven;
        Matrix44T<float>* in_RCX;
        ReturnValue local_c8;
        ReturnValue local_48;

        auto this_00 = operationRecordEntry->GetModel();
        Model* pMVar2 = (Model*)**this_00;
        local_c8[0]._0_4_ = 1;
        make_shared<jag::graphics::Model, jag::graphics::Model const&, jag::graphics::ModelCopyType>(&local_48, pMVar2,
                                                                                                     &local_c8);
        g_numModelCopiesEver._0_4_ = (int)g_numModelCopiesEver + 1;
        _DAT_10422a8a4 = _DAT_10422a8a4 + 1;
        pMVar2 = (Model*)local_48.operator->();
        auto this_01 = pMVar2->GetBatchList();
        geometryBatchInstance =
            (unique_ptr<jag::graphics::GeometryBatchInstance,
                        MakeUniquePool<jag::graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>*)
                this_01->HeapBeginPtr();
        auto puVar3 = this_01->end();
        if (geometryBatchInstance != puVar3) {
            do {
                local_c8 = operationRecordEntry->GetLocalTransform();
                MapBatch((LightOperation*)resolvedModel, geometryBatchInstance, &local_c8);
                geometryBatchInstance = geometryBatchInstance + 8;
            } while (geometryBatchInstance != puVar3);
        }
        poseStateRSeven = (shared_ptr<PoseStateRSeven>*)operationRecordEntry->GetAnimationState();
        auto local_88 = operationRecordEntry->GetLocalTransform();
        new (this) ResolvedModel(local_48, *poseStateRSeven, in_RCX);
        return (ResolvedModel*)this;
    }

    // 0x10036f2d0
    void LightOperation::MapBatch(
        std::unique_ptr<jag::graphics::GeometryBatchInstance,
                        MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&
            geometryBatchInstance,
        const jag::math::Matrix44T<float>& matrix44) const {
        int arg3;
        int arg3_00;
        unsigned short* puVar2;
        vector<unsigned char>* this_03;
        unsigned char* puVar3;
        vector<jag::graphics::GeometryBatchVertex>* this_04;
        GeometryBatchVertex* geometryBatchVertex;
        unsigned long uVar4;
        long lVar5;
        unsigned long arg1;
        uint32_t local_40;
        unsigned int local_3c;
        unsigned char local_31;

        int local_38 = field_20->Length();
        local_38 = local_38 * field_16;
        auto this_00 = geometryBatchInstance.operator->();
        auto this_01 = this_00->GetGeometryBatch();
        auto this_02 = this_01->GetLinearPositionMaxSpeed();
        long lVar1 = this_02->size();
        if (lVar1 != 0) {
            arg3 = local_38 >> 8;
            lVar1 = 0;
            arg1 = 0;
            local_38 = arg3;
            do {
                puVar2 = (unsigned short*)(*this_02)[arg1];
                local_3c = (unsigned int)*puVar2;
                this_03 = (vector<unsigned char>*)this_01->GetWaterPatches();
                puVar3 = (unsigned char*)(*this_03)[arg1];
                local_31 = *puVar3;
                lVar5 = 0;
                do {
                    this_04 = (vector<jag::graphics::GeometryBatchVertex>*)this_01->GetVertexDataBuffer();
                    geometryBatchVertex = (GeometryBatchVertex*)(*this_04)[lVar1 + lVar5];
                    arg3_00 = LightForVertex(*geometryBatchVertex, matrix44, arg3);
                    local_40 = GetVertexColor(*geometryBatchVertex, local_3c, arg3_00, local_31);
                    AssignVertexColor(*geometryBatchVertex, local_40);
                    lVar5 = lVar5 + 1;
                } while (lVar5 != 3);
                arg1 = arg1 + 1;
                uVar4 = this_02->size();
                lVar1 = lVar1 + 3;
            } while (arg1 < uVar4);
        }
        this_01->SetFaceHSLBaked(true);
    }

    // 0x10036f430
    jag::math::AABB LightOperation::ApplyAABB(const jag::math::AABB& aabb) const {
        return jag::math::AABB(aabb);
    }

    // 0x10036f520
    int LightOperation::GetVertexColor(const jag::graphics::GeometryBatchVertex& geometryBatchVertex, int arg2,
                                       int arg3, unsigned char arg4) const {
        Type TVar1;
        int iVar2;
        unsigned char uVar3;
        uint8_t uVar4;
        unsigned short uVar5;
        unsigned int uVar6;
        LightOperation* pLVar8;
        uint8_t local_38[8];
        Type local_30;

        return local_2c;
        short* psVar7 = &geometryBatchVertex[0];
        if (*psVar7 == 0) {
            psVar7 = &geometryBatchVertex[1];
            if (*psVar7 == 0) {
                uVar5 = ModelUnlit::GetColour(arg2, arg3);
                uVar6 = jag::math::RunetekColour::HSLToRGB(uVar5);
                pLVar8 = (LightOperation*)&local_30;
                new (pLVar8) jag::math::ColourStorage8888(uVar6);
                local_2c = local_30;
                TVar1 = local_2c;
                local_2c._2_1_ = (unsigned char)(local_30 >> 16);
                uVar3 = local_2c._2_1_;
                local_2c = TVar1;
                uVar4 = ColorGammaCorrect(pLVar8, uVar3);
                TVar1 = local_2c;
                local_2c._0_3_ = (((uint32_t)uVar4 << 16) | (uint16_t)((uint16_t)local_2c));
                iVar2 = local_2c;
                local_2c._1_1_ = (uint8_t)(TVar1 >> 8);
                uVar3 = local_2c._1_1_;
                local_2c = iVar2;
                uVar4 = ColorGammaCorrect(pLVar8, uVar3);
                local_2c._0_2_ = (((uint16_t)uVar4 << 8) | (uint8_t)((unsigned char)local_2c));
                uVar4 = ColorGammaCorrect(pLVar8, (unsigned char)local_2c);
                local_2c = (((uint32_t)local_2c._1_3_ << 8) | (uint8_t)uVar4);
                goto LAB_10036f596;
            }
        }
        uVar5 = ModelUnlit::GetTexLight(arg3);
        uVar6 = jag::math::RunetekColour::HSLToRGB(uVar5);
        pLVar8 = (LightOperation*)local_38;
        new (local_38) jag::math::ColourStorage8888(uVar6);
        uVar4 = TextureGammaCorrect(pLVar8, (ColourStorage8888<jag::math::ARGB8StorageLayout>*)local_38);
        local_2c._0_2_ = (((uint16_t)uVar4 << 8) | (uint8_t)uVar4);
        local_2c._0_3_ = (((uint32_t)uVar4 << 16) | (uint16_t)((uint16_t)local_2c));
        local_2c = (Type)(uint32_t)local_2c;
    LAB_10036f596:
        local_2c = (((uint32_t)arg4 << 24) | (uint32_t)((uint32_t)local_2c));
        return local_2c;
    }

    // 0x10036f600
    int LightOperation::LightForVertex(const jag::graphics::GeometryBatchVertex& geometryBatchVertex,
                                       const jag::math::Matrix44T<float>& matrix44, int arg3) const {
        Vector3T<int> local_60;
        Vector3T<float> local_50;
        uint64_t local_40[2];

        local_50.Vector3T<signed char>(geometryBatchVertex.field_4);
        local_40[0] = matrix44.TransformVector(local_50);
        local_60.Vector3T<float>(*local_40);
        auto pcVar4 = geometryBatchVertex.field_8->y();
        bool cVar1 = *pcVar4;
        int iVar2 = field_12;
        int iVar3 = jag::math::Vector3Dot<int>(local_60, *field_20);
        if (cVar1) {
            arg3 = arg3 + arg3 / 2;
        }
        return (iVar3 * 2) / arg3 + iVar2;
    }

    // 0x10036f6a0
    void LightOperation::AssignVertexColor(
        jag::graphics::GeometryBatchVertex& geometryBatchVertex,
        const jag::math::ColourStorage8888<jag::math::ARGB8StorageLayout>& colourStorage8888) const {
        ColourStorage8888<jag::math::ARGB8StorageLayout> CVar1 = colourStorage8888[2];
        array<unsigned char, 3ul>* this_00 = (array<unsigned char, 3ul>*)(geometryBatchVertex.field_8 + 8);
        ColourStorage8888<jag::math::ARGB8StorageLayout>* pCVar2 =
            (ColourStorage8888<jag::math::ARGB8StorageLayout>*)(*this_00)[0];
        *pCVar2 = CVar1;
        array<unsigned char, 4ul>* this_01 = (array<unsigned char, 4ul>*)(geometryBatchVertex.field_8 + 4);
        pCVar2 = (ColourStorage8888<jag::math::ARGB8StorageLayout>*)(*this_01)[0];
        *pCVar2 = CVar1;
        CVar1 = colourStorage8888[1];
        pCVar2 = (ColourStorage8888<jag::math::ARGB8StorageLayout>*)(*this_00)[1];
        *pCVar2 = CVar1;
        pCVar2 = (ColourStorage8888<jag::math::ARGB8StorageLayout>*)(*this_01)[1];
        *pCVar2 = CVar1;
        CVar1 = colourStorage8888;
        pCVar2 = (ColourStorage8888<jag::math::ARGB8StorageLayout>*)(*this_00)[2];
        *pCVar2 = CVar1;
        pCVar2 = (ColourStorage8888<jag::math::ARGB8StorageLayout>*)(*this_01)[2];
        *pCVar2 = CVar1;
        CVar1 = colourStorage8888[3];
        pCVar2 = (ColourStorage8888<jag::math::ARGB8StorageLayout>*)(*this_01)[3];
        *pCVar2 = CVar1;
    }

    // 0x10036f750
    bool LightOperation::IsEqual(const Operation& operation) const {
        bool bVar1;

        if (((operation.GetPos() == 5) && (field_12 == *(int*)&operation.field_12)) &&
            (field_16 == *(int*)&operation[1]._vptr)) {
            bVar1 = *field_20 == (*((Vector3T<int>*)((long)&operation[1]._vptr + 4)));
        } else {
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x10036f7e0
    unsigned int LightOperation::ColorGammaCorrect(unsigned char arg1) const {
        uint64_t in_register_00000031;

        float local_14 = (float)(int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) * 1.0463493f + 8.925;
        auto pfVar1 = std::clamp<float>(local_14, 0.0, 255.0);
        return (int)*pfVar1 & 255;
    }

    // 0x10036f830
    unsigned int LightOperation::TextureGammaCorrect(
        const jag::math::ColourStorage8888<jag::math::ARGB8StorageLayout>& colourStorage8888) const {
        auto puVar1 = std::min<unsigned char>(*((colourStorage8888 + 2)), *((colourStorage8888 + 1)));
        auto pbVar2 = std::min<unsigned char>(*puVar1, colourStorage8888);
        float local_24 = (float)*pbVar2;
        puVar1 = std::max<unsigned char>(*((colourStorage8888 + 2)), *((colourStorage8888 + 1)));
        pbVar2 = std::max<unsigned char>(*puVar1, colourStorage8888);
        float local_30 = ((float)*pbVar2 + local_24) * 0.50793654f;
        auto pfVar3 = std::clamp<float>(local_30, 0.0, 255.0);
        return (int)*pfVar3 & 255;
    }

    // 0x10036fb00
    TintOperation::TintOperation(signed char arg1, signed char arg2, signed char arg3, unsigned char arg4)
        : GeometryEditBaseOperation(11) {
        uint64_t in_XMM1_Qa;

        field_16 = PackColourWeight(arg1, arg2, arg3, arg4);
        field_24 = in_XMM1_Qa;
    }

    // 0x10036fb60
    GeometryEditBaseOperation::GeometryEditBaseOperation(Operation::Type arg1) : Operation(arg1) {}

    // 0x10036fb80
    void TintOperation::PackColourWeight(signed char arg1, signed char arg2, signed char arg3, unsigned char arg4) {
        uint64_t in_register_00000009;
        uint32_t in_register_00000011;
        uint32_t in_register_00000031;
        uint64_t in_register_00000039;
        uint8_t auVar3[16];

        float fVar2 = (float)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg4);
        float fVar1 = (float)((int)fVar2 + 256);
        if (arg1 < '\0') {
            fVar1 = fVar2;
        }
        fVar2 = (float)((int)fVar1 + 512);
        if (arg2 < '\0') {
            fVar2 = fVar1;
        }
        fVar1 = (float)((int)fVar2 + 1024);
        if (arg3 < '\0') {
            fVar1 = fVar2;
        }
        ImVec4 local_18((float)(int)(((uint64_t)in_register_00000039 << 8) | (uint8_t)arg1) * 0.015873017f,
                        (float)(((uint32_t)in_register_00000031 << 8) | (uint8_t)arg2) * 0.14285715f,
                        (float)(((uint32_t)in_register_00000011 << 8) | (uint8_t)arg3) * 0.007874016f, fVar1);
        auVar3[0] = local_18[0];
        auVar3[1] = local_18[1];
        auVar3[2] = local_18[2];
        auVar3[3] = local_18[3];
        auVar3[4] = local_18[4];
        auVar3[5] = local_18[5];
        auVar3[6] = local_18[6];
        auVar3[7] = local_18[7];
        auVar3[8] = local_18[8];
        auVar3[9] = local_18[9];
        auVar3[10] = local_18[10];
        auVar3[11] = local_18[11];
        auVar3[12] = local_18[12];
        auVar3[13] = local_18[13];
        auVar3[14] = local_18[14];
        auVar3[15] = local_18[15];
        return auVar3;
    }

    // 0x10036fc00
    auto TintOperation::ApplyFresh(const ResolvedModel& resolvedModel,
                                   const OperationRecordEntry* operationRecordEntry) const {
        shared_ptr<PoseStateRSeven>* poseStateRSeven;
        ReturnValue local_48;

        auto this_00 = resolvedModel.GetModel();
        Model* pMVar1 = (Model*)**this_00;
        uint32_t local_34 = 2;
        make_shared<jag::graphics::Model, jag::graphics::Model const&, jag::graphics::ModelCopyType>(
            &local_48, pMVar1, (ModelCopyType*)&local_34);
        pMVar1 = (Model*)local_48.operator->();
        auto this_01 = pMVar1->GetBatchList();
        auto this_02 = this_01->HeapBeginPtr();
        auto puVar2 = this_01->end();
        for (; this_02 != puVar2; this_02 = this_02 + 8) {
            jag::graphics::GeometryBatchInstance::SetTint((Vector4T<float>*)(*this_02).operator->());
        }
        poseStateRSeven = (shared_ptr<PoseStateRSeven>*)resolvedModel.GetAnimationState();
        auto local_88 = resolvedModel.GetLocalTransform();
        auto result(local_48, *poseStateRSeven, operationRecordEntry);
        return result;
    }

    // 0x10036fd30
    bool TintOperation::IsEqual(const Operation& operation) const {
        bool bVar1;

        if (operation.GetPos() == 11) {
            bVar1 = field_16 == (*((operation + 1)));
        } else {
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x10036fd70
    void FixNormalsOperation::MapBatch(
        std::unique_ptr<jag::graphics::GeometryBatchInstance,
                        MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&
            geometryBatchInstance) const {
        vector<jag::graphics::GeometryBatchVertex>* this_03;
        unsigned short* puVar3;
        long lVar4;
        unsigned long uVar5;
        long lVar6;
        uint8_t auVar7[12];
        LocationData local_a0;
        Vector3T<int> local_90;
        uint8_t local_80[12];
        uint8_t local_70[12];
        unsigned long local_58;
        uint8_t local_50[12];
        long local_40;
        unsigned long local_38;

        auto this_00 = geometryBatchInstance.operator->();
        auto this_01 = this_00->GetGeometryBatch();
        auto this_02 = this_01->GetVertexIndexBuffer();
        vector<game::MapSquare::MapSquarePos>* local_60 = (vector<game::MapSquare::MapSquarePos>*)this_02;
        unsigned long uVar2 = this_02->size();
        if (2 < uVar2) {
            uVar5 = 1;
            if (1 < uVar2 / 3) {
                uVar5 = uVar2 / 3;
            }
            lVar4 = 0;
            local_38 = 0;
            local_58 = uVar5;
            do {
                if (AnySmallVertexNormal((FixNormalsOperation*)this_02, this_01, local_38) != '\0') {
                    auVar7 = CalculateFaceNormal((FixNormalsOperation*)this_02, this_01, local_38);
                    local_80 = auVar7;
                    local_a0 = rs2lib::worldmap::LocationData(0, 381, 0);
                    auVar7 = local_a0 + *local_80;
                    local_70 = auVar7;
                    local_90 = jag::math::Vector3T(4);
                    auVar7 = *local_70 / local_90;
                    local_50 = auVar7;
                    *local_80 = *local_50;
                    lVar6 = 0;
                    local_40 = lVar4;
                    do {
                        local_50->Vector3T<int>(*local_80);
                        this_03 = (vector<jag::graphics::GeometryBatchVertex>*)this_01->GetVertexDataBuffer();
                        puVar3 = (unsigned short*)(*local_60)[local_40 + lVar6];
                        lVar4 = (*this_03)[(unsigned long)*puVar3];
                        this_02 = (Vector3T<unsigned char>*)(lVar4 + 4);
                        *this_02 = *local_50;
                        lVar6 = lVar6 + 1;
                    } while (lVar6 != 3);
                    lVar4 = local_40;
                    uVar5 = local_58;
                }
                local_38 = local_38 + 1;
                lVar4 = lVar4 + 3;
            } while (local_38 != uVar5);
        }
    }

    // 0x10036ff00
    unsigned long FixNormalsOperation::AnySmallVertexNormal(const jag::graphics::GeometryBatch& geometryBatch,
                                                            unsigned long arg2) const {
        unsigned short* puVar2;
        long lVar3;
        char* pcVar4;
        Vector3T<int> local_48;

        long local_38 = arg2 * 3;
        auto this_00 = geometryBatch.GetVertexIndexBuffer();
        auto this_01 = geometryBatch.GetVertexDataBuffer();
        bool bVar6 = true;
        unsigned long uVar5 = 0;
        do {
            puVar2 = (unsigned short*)(*this_00)[local_38 + uVar5];
            lVar3 = (*this_01)[(unsigned long)*puVar2];
            local_48.Vector3T<signed char>(*((lVar3 + 4)));
            pcVar4 = (char*)((lVar3 + 8))->y();
            if (*pcVar4 == '\0') {
                if (local_48.LengthSq() < 1024)
                    break;
            }
            bVar6 = uVar5 < 2;
            uVar5 = uVar5 + 1;
        } while (uVar5 != 3);
        return bVar6 & 4294967295;
    }

    // 0x10036ffc0
    uint8_t[16] FixNormalsOperation::CalculateFaceNormal(const jag::graphics::GeometryBatch& geometryBatch,
                                                         unsigned long arg2) const {
        uint8_t auVar7[16];
        uint8_t auVar8[12];
        Vector3T<int> local_90;
        uint64_t local_70[2];
        uint8_t local_60[12];
        uint8_t local_40[12];

        auto this_00 = geometryBatch.GetVertexIndexBuffer();
        auto this_01 = geometryBatch.GetVertexDataBufferPos();
        unsigned short* puVar2 = (unsigned short*)(*this_00)[arg2 * 3];
        uint64_t* puVar3 = (uint64_t*)(*this_01)[(unsigned long)*puVar2];
        uint64_t local_80 = *puVar3;
        uint32_t local_78 = *(uint32_t*)(puVar3 + 1);
        puVar2 = (unsigned short*)(*this_00)[arg2 * 3 + 1];
        Vector3T<float>* pVVar4 = (Vector3T<float>*)(*this_01)[(unsigned long)*puVar2];
        local_70[0] = *pVVar4 - local_80;
        local_90.Vector3T<float>(*local_70);
        puVar2 = (unsigned short*)(*this_00)[arg2 * 3 + 2];
        pVVar4 = (Vector3T<float>*)(*this_01)[(unsigned long)*puVar2];
        local_40._0_8_ = *pVVar4 - local_80;
        local_70->Vector3T<float>(*local_40);
        local_50._0_12_ = jag::math::Vector3Cross<int>(local_90, *local_70);
        local_40 = jag::math::Vector3Abs<int>(local_50);
        int iVar1 = local_40->MaxElement();
        if (8192 < iVar1) {
            do {
                local_50 /= 2;
                auVar8 = jag::math::Vector3Abs<int>(local_50);
                local_40 = auVar8;
                iVar1 = local_40->MaxElement();
            } while (8192 < iVar1);
        }
        iVar1 = local_50.LengthSq();
        double dVar6 = (double)sqrt<int>(iVar1);
        local_40._0_4_ = (int)dVar6;
        local_60._0_4_ = 1;
        auto piVar5 = std::max<int>(*local_40, *local_60);
        iVar1 = *piVar5;
        Vector3T<int> local_b0(128);
        local_60 = local_b0 * local_50;
        Vector3T<int> local_a0(iVar1);
        local_40 = *local_60 / local_a0;
        Vector3T<int> local_50 = *local_40;
        auVar7._12_4_ = 0;
        auVar7[0] = local_50[0];
        auVar7[1] = local_50[1];
        auVar7[2] = local_50[2];
        auVar7[3] = local_50[3];
        auVar7[4] = local_50[4];
        auVar7[5] = local_50[5];
        auVar7[6] = local_50[6];
        auVar7[7] = local_50[7];
        auVar7[8] = local_50[8];
        auVar7[9] = local_50[9];
        auVar7[10] = local_50[10];
        auVar7[11] = local_50[11];
        return auVar7;
    }

    // 0x100370230
    bool FixNormalsOperation::IsEqual(const Operation& operation) const {
        return operation.GetPos() == 3;
    }

    // 0x100370d10: ModelRSevenLit::~ModelRSevenLit() has the same machine code as ModelRSevenUnlit::~ModelRSevenUnlit()

    // 0x100370d70: ModelRSevenLit::Rotate90() has the same machine code as ModelRSevenUnlit::Rotate90()

    // 0x100370d80: ModelRSevenLit::Rotate180() has the same machine code as ModelRSevenUnlit::Rotate180()

    // 0x100370d90: ModelRSevenLit::Rotate270() has the same machine code as ModelRSevenUnlit::Rotate270()

    // 0x100370db0: ModelRSevenLit::RotateXAxis(int) has the same machine code as ModelRSevenUnlit::RotateXAxis(int)

    // 0x100370dc0: ModelRSevenLit::Translate(int, int, int) has the same machine code as ModelRSevenUnlit::Translate(int, int, int)

    // 0x100370dd0: ModelRSevenLit::Resize(int, int, int) has the same machine code as ModelRSevenUnlit::Resize(int, int, int)

    // 0x10038e590
    void ___cxx_global_var_init(void) {
        Matrix33T<float> local_50;

        jag::math::Matrix33Scaling<float>(1.0, 1.0, -1.0);
        Vector3T<int> local_28;
        new ((Matrix44T<float>*)&jag::graphics::MAYA_ANIM_INVERT_MATRIX)
            jag::math::Matrix44T<float>(local_50, local_28);
    }

    // 0x10038e5f0
    void ___cxx_global_var_init_1(void) {
        new ((ColourHSL*)&jag::graphics::WORLD_ORTHOGONAL) jag::math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x10038e610
    void ___cxx_global_var_init_3(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x10038e670
    void ___cxx_global_var_init_5(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x10038e6d0
    void ___cxx_global_var_init_7(void) {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x10038f6c0
    void ___cxx_global_var_init_75(void) {
        make_shared<ModelLitImpl>();
        ___cxa_atexit(PTR__shared_ptr_100ee54e0, &ModelLitImpl::m_tempModel, 4294967296);
    }

    // 0x10038f740
    void ___cxx_global_var_init_77(void) {
        make_shared<ModelLitImpl>();
        ___cxa_atexit(PTR__shared_ptr_100ee54e0, &ModelLitImpl::m_tempModel2, 4294967296);
    }

    // 0x10038f7c0
    void ___cxx_global_var_init_79(void) {
        _DAT_1039364c0 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 48);
        reinterpret_cast<const uint64_t*>(&m_sumMatrix)[7] = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 56);
        _DAT_1039364b0 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 32);
        reinterpret_cast<const uint64_t*>(&m_sumMatrix)[5] = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 40);
        _DAT_1039364a0 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 16);
        reinterpret_cast<const uint64_t*>(&m_sumMatrix)[3] = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 24);
        m_sumMatrix = *(uint64_t*)PTR_IDENTITY_100ee6730;
        reinterpret_cast<const uint64_t*>(&m_sumMatrix)[1] = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 8);
    }

    // 0x10038f800
    void ___cxx_global_var_init_80(void) {
        _DAT_103936500 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 48);
        reinterpret_cast<const uint64_t*>(&m_weightMatrix)[7] = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 56);
        _DAT_1039364f0 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 32);
        reinterpret_cast<const uint64_t*>(&m_weightMatrix)[5] = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 40);
        _DAT_1039364e0 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 16);
        reinterpret_cast<const uint64_t*>(&m_weightMatrix)[3] = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 24);
        m_weightMatrix = *(uint64_t*)PTR_IDENTITY_100ee6730;
        reinterpret_cast<const uint64_t*>(&m_weightMatrix)[1] = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 8);
    }

    // 0x10038f840
    void ___cxx_global_var_init_81(void) {
        _DAT_103936540 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 48);
        reinterpret_cast<const uint64_t*>(&m_skinMatrix)[7] = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 56);
        _DAT_103936530 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 32);
        reinterpret_cast<const uint64_t*>(&m_skinMatrix)[5] = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 40);
        _DAT_103936520 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 16);
        reinterpret_cast<const uint64_t*>(&m_skinMatrix)[3] = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 24);
        m_skinMatrix = *(uint64_t*)PTR_IDENTITY_100ee6730;
        reinterpret_cast<const uint64_t*>(&m_skinMatrix)[1] = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 8);
    }

    // 0x10038f9c0
    void ___cxx_global_var_init_130(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10038fa00
    void ___cxx_global_var_init_131(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10038fa40
    void ___cxx_global_var_init_132(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10038fa80
    void ___cxx_global_var_init_133(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10038fac0
    void ___cxx_global_var_init_134(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) jag::math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10038faf0
    void ___cxx_global_var_init_135(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10038fb30
    void ___cxx_global_var_init_136(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10038fb70
    void ___cxx_global_var_init_137(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10038fbb0
    void ___cxx_global_var_init_138(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10038fbf0
    void ___cxx_global_var_init_139(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10038fc30
    void ___cxx_global_var_init_140(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10038fc70
    void ___cxx_global_var_init_141(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) jag::math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10038fcb0
    void ___cxx_global_var_init_142(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<jag::graphics::AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10038fcf0
    void ___cxx_global_var_init_143(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728) jag::math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                                                                 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10038fd50
    void ___cxx_global_var_init_144(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10038fd90
    void ___cxx_global_var_init_145(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730) jag::math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
                                                                     1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10038fdf0
    void ___cxx_global_var_init_146(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10038fe30
    void ___cxx_global_var_init_147(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10038fe70
    void ___cxx_global_var_init_148(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4818;
        if (*PTR_IDENTITY_100ee4818 == '\0') {
            new (PTR_IDENTITY_100ee6720)
                jag::math::Matrix43T<float>(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10038fed0
    void ___cxx_global_var_init_149(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10038ff10
    void ___cxx_global_var_init_150(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4810;
        if (*PTR_IDENTITY_100ee4810 == '\0') {
            new (PTR_IDENTITY_100ee6718) jag::math::Matrix33T<float>(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10038ffa0
    void ___cxx_global_var_init_152(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49f0;
        if (*PTR_m_pSingleton_100ee49f0 == '\0') {
            ___cxa_atexit(std::unique_ptr<hardware::HardwareInfo>::~unique_ptr, PTR_m_pSingleton_100ee6c60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10038ffe0
    void ___cxx_global_var_init_153(void) {
        uint8_t* puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) jag::math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100390020
    void ___cxx_global_var_init_154(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4630;
        if (*PTR_m_mutex_100ee4630 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee6020, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100390060
    void ___cxx_global_var_init_155(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4280;
        if (*PTR_m_pSingleton_100ee4280 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<graphicutils::BatchDestroyHelper<std::unique_ptr<
                    jag::graphics::GeometryBatchInstance,
                    MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>>::~unique_ptr,
                PTR_m_pSingleton_100ee5930, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003900a0
    void __GLOBAL__sub_I_unity_0_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_9();
        ___cxx_global_var_init_10();
        ___cxx_global_var_init_11();
        ___cxx_global_var_init_12();
        ___cxx_global_var_init_13();
        ___cxx_global_var_init_14();
        ___cxx_global_var_init_15();
        ___cxx_global_var_init_16();
        ___cxx_global_var_init_17();
        ___cxx_global_var_init_18();
        ___cxx_global_var_init_19();
        ___cxx_global_var_init_34();
        ___cxx_global_var_init_35();
        ___cxx_global_var_init_36();
        ___cxx_global_var_init_37();
        ___cxx_global_var_init_44();
        ___cxx_global_var_init_55();
        ___cxx_global_var_init_75();
        ___cxx_global_var_init_76();
        ___cxx_global_var_init_77();
        ___cxx_global_var_init_78();
        ___cxx_global_var_init_79();
        ___cxx_global_var_init_80();
        ___cxx_global_var_init_81();
        ___cxx_global_var_init_101();
        ___cxx_global_var_init_102();
        ___cxx_global_var_init_110();
        ___cxx_global_var_init_111();
        ___cxx_global_var_init_112();
        ___cxx_global_var_init_129();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::oldscape::dash3d

namespace jag::math {
    // 0x10036e800
    Vector3T<float> operator* <float>(const Matrix44T<float>& matrix44, const Vector3T<float>& vector3) {
        uint64_t uVar3;
        uint8_t local_30[16];

        float* pfVar1 = &matrix44[0];
        float local_20 = *(float*)vector3 * *pfVar1;
        long lVar2 = matrix44[0];
        local_20 = *(float*)(vector3 + 4) * *(float*)(lVar2 + 4) + local_20;
        lVar2 = matrix44[0];
        local_20 = *(float*)(vector3 + 8) * *(float*)(lVar2 + 8) + local_20;
        lVar2 = matrix44[0];
        local_20 = local_20 + *(float*)(lVar2 + 12);
        pfVar1 = &matrix44[1];
        float local_1c = *(float*)vector3 * *pfVar1;
        lVar2 = matrix44[1];
        local_1c = *(float*)(vector3 + 4) * *(float*)(lVar2 + 4) + local_1c;
        lVar2 = matrix44[1];
        local_1c = *(float*)(vector3 + 8) * *(float*)(lVar2 + 8) + local_1c;
        lVar2 = matrix44[1];
        local_1c = local_1c + *(float*)(lVar2 + 12);
        pfVar1 = &matrix44[2];
        local_30._12_4_ = *(float*)vector3 * *pfVar1;
        lVar2 = matrix44[2];
        local_30._12_4_ = *(float*)(vector3 + 4) * *(float*)(lVar2 + 4) + (float)local_30._12_4_;
        lVar2 = matrix44[2];
        local_30._12_4_ = *(float*)(vector3 + 8) * *(float*)(lVar2 + 8) + (float)local_30._12_4_;
        lVar2 = matrix44[2];
        new (local_30) ColourHSL(local_20, local_1c, (float)local_30._12_4_ + *(float*)(lVar2 + 12));
        uVar3._0_4_ = (float)local_30._0_4_;
        uVar3._4_4_ = (float)local_30._4_4_;
        return uVar3;
    }

    // 0x10036e9a0
    bool EqualAbs<float>(float arg1, float arg2, float arg3) {
        return (float)::abs(arg1 - arg2) < arg3;
    }

    // 0x10036fab0
    int Vector3Dot<int>(const Vector3T<int>& vector31, const Vector3T<int>& vector32) {
        return *(int*)(vector32 + 8) * *(int*)(vector31 + 8) + *(int*)(vector32 + 4) * *(int*)(vector31 + 4) +
               *(int*)vector32 * *(int*)vector31;
    }

    // 0x1003701b0
    Vector3T<int> operator/ <int>(const Vector3T<int>& vector31, const Vector3T<int>& vector32) {
        uint8_t auVar1[16];

        LocationData local_18(*(int*)vector31 / *(int*)vector32, *(int*)(vector31 + 4) / *(int*)(vector32 + 4),
                              *(int*)(vector31 + 8) / *(int*)(vector32 + 8));
        auVar1._12_4_ = 0;
        auVar1._0_4_ = local_18.field_0;
        auVar1._4_4_ = local_18.field_4;
        auVar1._8_4_ = local_18.field_8;
        return auVar1;
    }

    // 0x1003702c0
    Vector3T<int> Vector3Cross<int>(const Vector3T<int>& vector31, const Vector3T<int>& vector32) {
        uint8_t auVar1[16];

        LocationData local_18(*(int*)(vector32 + 8) * *(int*)(vector31 + 4) -
                                  *(int*)(vector32 + 4) * *(int*)(vector31 + 8),
                              *(int*)(vector31 + 8) * *(int*)vector32 - *(int*)(vector32 + 8) * *(int*)vector31,
                              *(int*)vector31 * *(int*)(vector32 + 4) - *(int*)vector32 * *(int*)(vector31 + 4));
        auVar1._12_4_ = 0;
        auVar1._0_4_ = local_18.field_0;
        auVar1._4_4_ = local_18.field_4;
        auVar1._8_4_ = local_18.field_8;
        return auVar1;
    }

    // 0x100370320
    Vector3T<int> Vector3Abs<int>(const Vector3T<int>& vector3) {
        uint8_t auVar1[16];

        int arg1 = -*(int*)vector3;
        if (arg1 < 0) {
            arg1 = *(int*)vector3;
        }
        unsigned int arg2 = -*(unsigned int*)(vector3 + 4);
        if ((int)arg2 < 0) {
            arg2 = *(unsigned int*)(vector3 + 4);
        }
        unsigned int arg3 = -*(unsigned int*)(vector3 + 8);
        if ((int)arg3 < 0) {
            arg3 = *(unsigned int*)(vector3 + 8);
        }
        LocationData local_18(arg1, arg2, arg3);
        auVar1._12_4_ = 0;
        auVar1._0_4_ = local_18.field_0;
        auVar1._4_4_ = local_18.field_4;
        auVar1._8_4_ = local_18.field_8;
        return auVar1;
    }

    // 0x1003703b0
    Vector3T<int> operator* <int>(const Vector3T<int>& vector31, const Vector3T<int>& vector32) {
        uint8_t auVar1[16];

        LocationData local_18(*(int*)vector32 * *(int*)vector31, *(int*)(vector32 + 4) * *(int*)(vector31 + 4),
                              *(int*)(vector32 + 8) * *(int*)(vector31 + 8));
        auVar1._12_4_ = 0;
        auVar1._0_4_ = local_18.field_0;
        auVar1._4_4_ = local_18.field_4;
        auVar1._8_4_ = local_18.field_8;
        return auVar1;
    }

    // 0x100370b80
    int NearestPowerOf2GreaterOrEqual(unsigned int arg1) {
        unsigned int uVar1 = arg1 - 1;
        if (arg1 == 0) {
            uVar1 = 0;
        }
        uVar1 = uVar1 >> 1 | uVar1;
        uVar1 = uVar1 >> 2 | uVar1;
        uVar1 = uVar1 >> 4 | uVar1;
        uVar1 = uVar1 >> 8 | uVar1;
        return (uVar1 >> 16 | uVar1) + 1;
    }

} // namespace jag::math

namespace jag::graphics {
    // 0x10422a830
    uint8_t MAYA_ANIM_INVERT_MATRIX[64];

    // 0x10422a870
    uint8_t WORLD_ORTHOGONAL[16];

} // namespace jag::graphics

namespace jag::threading {
    // 0x100d429a4
    int32_t MAX_HARDWARE_THREAD_LIMIT = 4935945191598063632;

} // namespace jag::threading
