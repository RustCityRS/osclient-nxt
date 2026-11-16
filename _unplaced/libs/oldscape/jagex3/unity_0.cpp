// _unplaced/libs/oldscape/jagex3/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "libs/oldscape/jagex3/dash3d/AnimFrameSet.h"
#include "libs/oldscape/jagex3/dash3d/ModelRSeven.h"

namespace jag::oldscape::dash3d {
    class GeometryEditBaseOperation {
    public:
        // virtual methods in vtable order
        virtual ResolvedModel* Apply(ResolvedModel const&, OperationRecordEntry const*) const;
        GeometryEditBaseOperation(Operation::Type);

        // data members, from how the methods use this: 8 bytes
        undefined** field_0; // offset 0, vtable pointer
    };

    class TintOperation {
    public:
        // virtual methods in vtable order
        virtual bool IsEqual(Operation const&) const;
        virtual TintOperation* ApplyFresh(ResolvedModel const&, OperationRecordEntry const*) const;
        TintOperation(signed char, signed char, signed char, unsigned char);
        PackColourWeight(signed char, signed char, signed char, unsigned char);

        // data members, from how the methods use this: 17 bytes
        char _unknown_0[17];
    };

    // 0x100f37e10, 4 bytes, __data
    ModelLitRenderer_drawModels = 1;

    // 0x103936070, 8 bytes, __common; zero-initialised
    g_usingRSeven;

    // 0x103936560, 8 bytes, __common; zero-initialised
    ModelLitRenderer_lastModelLitUploadTotal;

    // 0x103936568, 8 bytes, __common; zero-initialised
    ModelLitRenderer_lastModelLitWorldRenderTotal;

    // 0x103936570, 8 bytes, __common; zero-initialised
    ModelLitRenderer_lastModelLitWorldRenderTotalNanos;

    // 0x103936578, 8 bytes, __common; zero-initialised
    ModelLitRenderer_lastCachedModelsTotal;

    // 0x10422a888, 8 bytes, __bss; zero-initialised
    g_numModelCopiesEver;

    // 0x10422a890, 64 bytes, __bss; zero-initialised
    g_numCopiesPerOpType;

    // 0x10036cf50, 176 bytes, placed by nothing (unplaced)
    // AnimateBaseOperation::CanReusePreviousTransparencyBatching(ResolvedModel const&, OperationRecordEntry const*) const
    bool AnimateBaseOperation::CanReusePreviousTransparencyBatching(ResolvedModel* param_1,
                                                                    OperationRecordEntry* param_2) {
        bool bVar1;
        int iVar2;
        int iVar3;
        shared_ptr<Operation>* this_00;
        CommandLine* this_01;
        long lVar4;
        jag* this_02;
        ResolvedModel* this_03;
        undefined1 auVar5[16];

        if (param_2 != (OperationRecordEntry*)0) {
            this_00 = (shared_ptr<Operation>*)param_2->GetOperation();
            this_01 = (CommandLine*)shared_ptr<Operation>::operator->(this_00);
            iVar2 = this_01->GetPos();
            iVar3 = GetPos();
            if (iVar2 == iVar3) {
                lVar4 = shared_ptr<Operation>::operator*(this_00);
                this_02 = (jag*)param_1->GetModel();
                this_03 = (ResolvedModel*)param_2->GetInputModel();
                auVar5 = this_03->GetModel();
                bVar1 = operator==(this_02, auVar5._0_8_, auVar5._8_8_);
                if (bVar1) {
                    bVar1 = eastl::operator==((optional*)&field_16, (optional*)(lVar4 + 16));
                    return bVar1;
                }
            }
        }
        return false;
    }

    // 0x10036d050, 528 bytes, placed by nothing (unplaced)
    // AnimateBaseOperation::SeparateBatchByLabelTransparency(jag::graphics::GeometryBatchInstance const&, jag::graphics::Model&, eastl::vector<std::unique_ptr<jag::graphics::GeometryBatchInstance, MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>, eastl::allocator>&) const
    /* AnimateBaseOperation::SeparateBatchByLabelTransparency(jag::graphics::GeometryBatchInstance
   const&, jag::graphics::Model&,
   eastl::vector<std::unique_ptr<jag::graphics::GeometryBatchInstance,
   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
   eastl::allocator>&) const */

    void AnimateBaseOperation::SeparateBatchByLabelTransparency(GeometryBatchInstance* param_1, Model* param_2,
                                                                vector* param_3) {
        GeometryBatch* this_00;
        GeometryBatchInstance* pGVar1;
        AnimateBaseOperation* this_01;
        vector_map local_f0[40];
        vector<AnimateBaseOperation::SeparatedIndexCount, eastl::allocator> local_c8[32];
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
            local_a8[8];
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
            local_a0[8];
        AnimateBaseOperation local_98[2];
        function<unsigned short(unsigned short)> local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (GeometryBatch*)param_1->GetGeometryBatch();
        this_00->GetMaterial();
        InvertLabelMapping(local_f0);
        CopyBatchInstanceVertices((GeometryBatchInstance*)local_a8, (Model*)param_1);
        CopyBatchInstanceVertices((GeometryBatchInstance*)local_a0, (Model*)param_1);
        pGVar1 =
            (GeometryBatchInstance*)std::unique_ptr<
                jag::graphics::GeometryBatchInstance,
                MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(local_a8);
        pGVar1->GetGeometryBatch();
        pGVar1 =
            (GeometryBatchInstance*)std::unique_ptr<
                jag::graphics::GeometryBatchInstance,
                MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(local_a0);
        pGVar1->GetGeometryBatch();
        SplitBatchIndices((GeometryBatch*)local_c8, (vector_map*)this, this_00, (GeometryBatch*)local_f0);
        std::unique_ptr<
            jag::graphics::GeometryBatchInstance,
            MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator*(local_a8);
        std::function<unsigned short(unsigned short)>::function<
            AnimateBaseOperation::SeparateBatchByLabelTransparency(
                jag::graphics::GeometryBatchInstance_const&, jag::graphics::Model&,
                eastl::vector<
                    std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                    MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                    eastl::allocator>&) const ::__10,
            void>(local_68, local_c8);
        UpdateBatchExternalIndexList();
        std::function<unsigned short(unsigned short)>::~function(local_68);
        std::unique_ptr<
            jag::graphics::GeometryBatchInstance,
            MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator*(local_a0);
        std::function<unsigned short(unsigned short)>::function<
            AnimateBaseOperation::SeparateBatchByLabelTransparency(
                jag::graphics::GeometryBatchInstance_const&, jag::graphics::Model&,
                eastl::vector<
                    std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                    MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                    eastl::allocator>&) const ::__11,
            void>(local_98, local_c8);
        UpdateBatchExternalIndexList();
        this_01 = local_98;
        std::function<unsigned short(unsigned short)>::~function((function<unsigned short(unsigned short)>*)this_01);
        OutputIfNonempty(this_01, (unique_ptr*)local_a8, param_3);
        OutputIfNonempty(this_01, (unique_ptr*)local_a0, param_3);
        eastl::vector<AnimateBaseOperation::SeparatedIndexCount, eastl::allocator>::~vector(local_c8);
        std::unique_ptr<
            jag::graphics::GeometryBatchInstance,
            MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::~unique_ptr(local_a0);
        std::unique_ptr<
            jag::graphics::GeometryBatchInstance,
            MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::~unique_ptr(local_a8);
        local_f0->~vector_map();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10036d270, 112 bytes, placed by nothing (unplaced)
    // AnimateBaseOperation::ReplaceModelBatches(jag::graphics::Model&, eastl::vector<std::unique_ptr<jag::graphics::GeometryBatchInstance, MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>, eastl::allocator>&) const
    /* AnimateBaseOperation::ReplaceModelBatches(jag::graphics::Model&,
   eastl::vector<std::unique_ptr<jag::graphics::GeometryBatchInstance,
   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
   eastl::allocator>&) const */

    void AnimateBaseOperation::ReplaceModelBatches(Model* param_1, vector* param_2) {
        vector<std::unique_ptr<jag::graphics::GeometryBatchInstance,
                               MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
               eastl::allocator>* pvVar1;
        unique_ptr* puVar2;
        unique_ptr* puVar3;

        pvVar1 = (vector<std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                         MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                         eastl::allocator>*)param_1->GetBatchList();
        eastl::vector<std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                      MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                      eastl::allocator>::clear(pvVar1);
        puVar2 = (unique_ptr*)param_2->HeapBeginPtr();
        puVar3 = (unique_ptr*)param_2->end();
        for (; puVar2 != puVar3; puVar2 = puVar2 + 8) {
            pvVar1 =
                (vector<std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                        MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                        eastl::allocator>*)param_1->GetBatchList();
            eastl::vector<
                std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                eastl::allocator>::push_back(pvVar1, puVar2);
        }
    }

    // 0x10036d3e0, 144 bytes, placed by nothing (unplaced)
    // AnimateBaseOperation::InvertLabelMapping(eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&) const
    vector_map* AnimateBaseOperation::InvertLabelMapping(vector_map* param_1) {
        ulong uVar1;
        ushort* puVar2;
        ushort* puVar3;
        vector<unsigned int, eastl::allocator>* in_RDX;

        new (param_1) eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>();
        uVar1 = eastl::vector<unsigned int, eastl::allocator>::size(in_RDX);
        param_1->set_capacity(uVar1);
        puVar2 = (ushort*)in_RDX->HeapBeginPtr();
        puVar3 = (ushort*)in_RDX->end();
        for (; puVar2 != puVar3; puVar2 = puVar2 + 2) {
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::
                emplace<unsigned short const&, unsigned short const&>(
                    (vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>*)param_1,
                    puVar2 + 1, puVar2);
        }
        return param_1;
    }

    // 0x10036d470, 160 bytes, placed by nothing (unplaced)
    // AnimateBaseOperation::CopyBatchInstanceVertices(jag::graphics::GeometryBatchInstance const&, jag::graphics::Model&) const
    GeometryBatchInstance* AnimateBaseOperation::CopyBatchInstanceVertices(GeometryBatchInstance* param_1,
                                                                           Model* param_2) {
        GeometryBatchInstance* pGVar1;
        GeometryBatch* this;
        Model* in_RCX;
        GeometryBatchInstance* in_RDX;
        MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072> local_28[15];
        bool local_19;

        local_19 = false;
        MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::MakeUnique<
            jag::graphics::GeometryBatchInstance_const&, jag::graphics::Model&, bool>(local_28, in_RDX, in_RCX,
                                                                                      &local_19);
        pGVar1 =
            (GeometryBatchInstance*)
                std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::
                operator->((unique_ptr<jag::graphics::GeometryBatchInstance,
                                       MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                               local_28);
        this = (GeometryBatch*)pGVar1->GetGeometryBatch();
        ClearFaceData();
        pGVar1 =
            (GeometryBatchInstance*)
                std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::
                operator->((unique_ptr<jag::graphics::GeometryBatchInstance,
                                       MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                               local_28);
        pGVar1 = (GeometryBatchInstance*)pGVar1->GetGeometryBatch();
        pGVar1->GetMaterial();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        new (param_1)
            std::unique_ptr<jag::graphics::GeometryBatchInstance,
                            MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>(local_28);
        local_28->~unique_ptr();
        return param_1;
    }

    // 0x10036d510, 720 bytes, placed by nothing (unplaced)
    // AnimateBaseOperation::SplitBatchIndices(jag::graphics::GeometryBatch const&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, jag::graphics::GeometryBatch&, jag::graphics::GeometryBatch&) const
    GeometryBatch* AnimateBaseOperation::SplitBatchIndices(GeometryBatch* param_1, vector_map* param_2,
                                                           GeometryBatch* param_3, GeometryBatch* param_4) {
        ushort uVar1;
        uint uVar2;
        vector<game::MapSquare::MapSquarePos, eastl::allocator>* pvVar3;
        ulong uVar4;
        vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>* pvVar5;
        ulong uVar6;
        ushort* puVar7;
        vector<jag::graphics::GeometryBatchVertexPos, eastl::allocator>* this;
        long lVar8;
        vector_set<unsigned short, eastl::less<unsigned short>, eastl::allocator,
                   eastl::vector<unsigned short, eastl::allocator>>* this_00;
        vector<EntityHighlight*, BucketAllocatorEASTL>* this_01;
        long lVar9;
        ushort uVar10;
        GeometryBatch* in_R8;
        GeometryBatch* in_R9;
        uint uVar11;
        ushort uVar12;
        GeometryBatch* pGVar13;
        SeparatedIndexCount local_90[2];
        GeometryBatch* local_88;
        vector<game::MapSquare::MapSquarePos, eastl::allocator>* local_80;
        ulong local_78;
        uint local_6c;
        SeparatedIndexCount local_68[2];
        vector_map* local_60;
        GeometryBatch* local_58;
        GeometryBatch* local_50;
        GeometryBatch* local_48;
        GeometryBatch* local_40;
        uint local_38;
        ushort local_34;
        ushort local_32;

        local_88 = param_4;
        local_60 = param_2;
        local_40 = param_3;
        pvVar3 = (vector<game::MapSquare::MapSquarePos, eastl::allocator>*)param_3->GetVertexIndexBuffer();
        new (param_1) eastl::vector<AnimateBaseOperation::SeparatedIndexCount, eastl::allocator>();
        uVar4 = eastl::vector<game::MapSquare::MapSquarePos, eastl::allocator>::size(pvVar3);
        param_1->reserve(uVar4);
        local_50 = in_R9;
        local_48 = in_R8;
        local_78 = eastl::vector<game::MapSquare::MapSquarePos, eastl::allocator>::size(pvVar3);
        local_78 = local_78 / 3;
        local_6c = (uint)local_78 & 65535;
        if ((local_78 & 65535) == 0) {
            local_38 = 0;
            uVar10 = 0;
        } else {
            local_60 = local_60 + 16;
            uVar12 = 1;
            uVar11 = 0;
            uVar10 = 0;
            local_38 = 0;
            local_80 = pvVar3;
            local_58 = param_1;
            do {
                pGVar13 = local_58;
                pvVar3 = (vector<game::MapSquare::MapSquarePos, eastl::allocator>*)local_48->GetVertexIndexBuffer();
                uVar4 = eastl::vector<game::MapSquare::MapSquarePos, eastl::allocator>::size(pvVar3);
                pvVar3 = (vector<game::MapSquare::MapSquarePos, eastl::allocator>*)local_50->GetVertexIndexBuffer();
                uVar6 = eastl::vector<game::MapSquare::MapSquarePos, eastl::allocator>::size(pvVar3);
                SeparatedIndexCount::SeparatedIndexCount(local_90, uVar4, uVar6);
                pGVar13->push_back(local_90);
                puVar7 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                    (vector<unsigned short, eastl::allocator>*)local_80, (ulong)(uVar11 & 65535));
                uVar1 = *puVar7;
                this = (vector<jag::graphics::GeometryBatchVertexPos, eastl::allocator>*)
                           local_40->GetVertexDataBufferPos();
                lVar8 = eastl::vector<jag::graphics::GeometryBatchVertexPos, eastl::allocator>::operator[](
                    this, (ulong)uVar1);
                local_34 = (ushort) * (byte*)(lVar8 + 13);
                lVar8 = local_88->find(&local_34);
                local_32 = *(ushort*)(lVar8 + 2);
                this_00 =
                    (vector_set<unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                eastl::vector<unsigned short, eastl::allocator>>*)
                        eastl::optional<eastl::vector_set<unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                                          eastl::vector<unsigned short, eastl::allocator>>>::
                        operator->(
                            (optional<eastl::vector_set<unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                                        eastl::vector<unsigned short, eastl::allocator>>>*)local_60);
                lVar8 = eastl::vector_set<unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                          eastl::vector<unsigned short, eastl::allocator>>::find(this_00, &local_32);
                uVar1 = uVar12 - 1;
                this_01 =
                    (vector<EntityHighlight*, BucketAllocatorEASTL>*)
                        eastl::optional<eastl::vector_set<unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                                          eastl::vector<unsigned short, eastl::allocator>>>::
                        operator->(
                            (optional<eastl::vector_set<unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                                        eastl::vector<unsigned short, eastl::allocator>>>*)local_60);
                lVar9 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
                if (lVar8 == lVar9) {
                    if ((local_38 & 1) == 0) {
                        local_38 = (uint)CONCAT71((int7)((ulong)lVar9 >> 8), 1);
                        local_50->PushFaceRange(local_40, uVar10, uVar1);
                        uVar10 = uVar1;
                    }
                    pvVar5 = (vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                         eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>*)
                                 local_48->GetMaterial();
                    eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                      eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::
                        emplace<unsigned short&, unsigned short&>(pvVar5, &local_32, &local_34);
                } else {
                    if ((local_38 & 1) != 0) {
                        local_48->PushFaceRange(local_40, uVar10, uVar1);
                        local_38 = 0;
                        uVar10 = uVar1;
                    }
                    pvVar5 = (vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                         eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>*)
                                 local_50->GetMaterial();
                    eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                      eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>>::
                        emplace<unsigned short&, unsigned short&>(pvVar5, &local_32, &local_34);
                }
                uVar2 = (uint)uVar12;
                uVar12 = uVar12 + 1;
                uVar11 = uVar11 + 3;
                param_1 = local_58;
            } while (uVar2 < local_6c);
        }
        if ((local_38 & 1) == 0) {
            local_50->PushFaceRange(local_40, uVar10, (ushort)local_78);
            pGVar13 = local_50;
        } else {
            local_48->PushFaceRange(local_40, uVar10, (ushort)local_78);
            pGVar13 = local_50;
        }
        pvVar3 = (vector<game::MapSquare::MapSquarePos, eastl::allocator>*)local_48->GetVertexIndexBuffer();
        uVar4 = eastl::vector<game::MapSquare::MapSquarePos, eastl::allocator>::size(pvVar3);
        pvVar3 = (vector<game::MapSquare::MapSquarePos, eastl::allocator>*)pGVar13->GetVertexIndexBuffer();
        uVar6 = eastl::vector<game::MapSquare::MapSquarePos, eastl::allocator>::size(pvVar3);
        SeparatedIndexCount::SeparatedIndexCount(local_68, uVar4, uVar6);
        param_1->push_back(local_68);
        return param_1;
    }

    // 0x10036d7e0, 176 bytes, placed by nothing (unplaced)
    // AnimateBaseOperation::UpdateBatchExternalIndexList(jag::graphics::GeometryBatchInstance&, std::function<unsigned short (unsigned short)>) const
    /* AnimateBaseOperation::UpdateBatchExternalIndexList(jag::graphics::GeometryBatchInstance&,
   std::function<unsigned short (unsigned short)>) const */

    void AnimateBaseOperation::UpdateBatchExternalIndexList(undefined8 param_1_00, ObjType* param_1,
                                                            function<unsigned short(unsigned short)>* param_3) {
        ushort uVar1;
        Layout* this;
        long lVar2;
        long lVar3;
        uint* puVar4;
        uint* puVar5;

        this = (Layout*)param_1->GetRecolourDest();
        lVar2 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                        eastl::allocator>>::Layout::HeapBeginPtr(this);
        lVar3 = end();
        for (; lVar2 != lVar3; lVar2 = lVar2 + 68) {
            puVar4 = (uint*)((lVar2 + 20))->begin();
            puVar5 = (uint*)((lVar2 + 20))->end();
            for (; puVar4 != puVar5; puVar4 = puVar4 + 2) {
                uVar1 = std::function<unsigned short(unsigned short)>::operator()(param_3, (ushort)*puVar4);
                *puVar4 = (uint)uVar1;
                uVar1 = std::function<unsigned short(unsigned short)>::operator()(param_3, (ushort)puVar4[1]);
                puVar4[1] = (uint)uVar1;
            }
        }
    }

    // 0x10036d8c0, 80 bytes, placed by nothing (unplaced)
    // AnimateBaseOperation::OutputIfNonempty(std::unique_ptr<jag::graphics::GeometryBatchInstance, MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&&, eastl::vector<std::unique_ptr<jag::graphics::GeometryBatchInstance, MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>, eastl::allocator>&) const
    /* AnimateBaseOperation::OutputIfNonempty(std::unique_ptr<jag::graphics::GeometryBatchInstance,
   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&&,
   eastl::vector<std::unique_ptr<jag::graphics::GeometryBatchInstance,
   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
   eastl::allocator>&) const */

    void AnimateBaseOperation::OutputIfNonempty(unique_ptr* param_1, vector* param_2) {
        GeometryBatchInstance* this_00;
        GeometryBatch* this_01;
        vector<game::MapSquare::MapSquarePos, eastl::allocator>* this_02;

        this_00 =
            (GeometryBatchInstance*)
                std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::
                operator->((
                    unique_ptr<jag::graphics::GeometryBatchInstance,
                               MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)param_1);
        this_01 = (GeometryBatch*)this_00->GetGeometryBatch();
        this_02 = (vector<game::MapSquare::MapSquarePos, eastl::allocator>*)this_01->GetVertexIndexBuffer();
        if (eastl::vector<game::MapSquare::MapSquarePos, eastl::allocator>::size(this_02) != 0) {
            param_2->push_back(param_1);
        }
    }

    // 0x10036de00, 256 bytes, placed by nothing (unplaced)
    // GeometryEditBaseOperation::Apply(ResolvedModel const&, OperationRecordEntry const*) const
    ResolvedModel* GeometryEditBaseOperation::Apply(ResolvedModel* param_1, OperationRecordEntry* param_2) {
        Matrix44T MVar1;
        shared_ptr<Operation>* this;
        Operation* pOVar4;
        jag* this_00;
        ResolvedModel* pRVar5;
        shared_ptr* psVar6;
        shared_ptr* psVar7;
        OperationRecordEntry* in_RCX;
        ResolvedModel* in_RDX;
        undefined1 auVar8[16];
        undefined8 local_78;
        undefined8 uStack_70;
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58;
        undefined8 uStack_50;
        undefined8 local_48;

        if (in_RCX != (OperationRecordEntry*)0) {
            this = (shared_ptr<Operation>*)in_RCX->GetOperation();
            pOVar4 = (Operation*)shared_ptr<Operation>::operator*(this);
            if (dash3d::operator==((Operation*)param_2, pOVar4) != '\0') {
                this_00 = (jag*)in_RDX->GetModel();
                pRVar5 = (ResolvedModel*)in_RCX->GetInputModel();
                auVar8 = pRVar5->GetModel();
                if (operator==(this_00, auVar8._0_8_, auVar8._8_8_)) {
                    pRVar5 = (ResolvedModel*)in_RCX->GetOutputModel();
                    psVar6 = (shared_ptr*)pRVar5->GetModel();
                    psVar7 = (shared_ptr*)in_RDX->GetAnimationState();
                    local_78.GetLocalTransform();
                    MVar1._8_8_ = uStack_70;
                    MVar1._0_8_ = local_78;
                    MVar1._16_8_ = local_68;
                    MVar1._24_8_ = uStack_60;
                    MVar1._32_8_ = local_58;
                    MVar1._40_8_ = uStack_50;
                    MVar1._48_8_ = local_48;
                    ResolvedModel::ResolvedModel(param_1, psVar6, psVar7, MVar1);
                    return param_1;
                }
            }
        }
        (**(code**)(*(long*)param_2 + 40))(param_1, param_2);
        return param_1;
    }

    // 0x10036f180, 336 bytes, placed by nothing (unplaced)
    // LightOperation::Apply(ResolvedModel const&, OperationRecordEntry const*) const
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* LightOperation::Apply(ResolvedModel const&,
   OperationRecordEntry const*) const */

    ResolvedModel* LightOperation::Apply(ResolvedModel* param_1, OperationRecordEntry* param_2) {
        Matrix44T MVar1;
        shared_ptr<jag::graphics::Model>* this_00;
        Model* pMVar3;
        Layout* this_01;
        unique_ptr* puVar4;
        unique_ptr* puVar5;
        shared_ptr* psVar6;
        ResolvedModel local_c8;
        undefined8 local_58;
        shared_ptr local_48;

        this_00 = (shared_ptr<jag::graphics::Model>*)param_2->GetModel();
        pMVar3 = (Model*)shared_ptr<jag::graphics::Model>::operator*(this_00);
        local_c8.field_0._0_4_ = 1;
        make_shared<jag::graphics::Model, jag::graphics::Model_const&, jag::graphics::ModelCopyType>(
            (jag*)&local_48, pMVar3, (ModelCopyType*)&local_c8);
        g_numModelCopiesEver._0_4_ = (int)g_numModelCopiesEver + 1;
        _DAT_10422a8a4 = _DAT_10422a8a4 + 1;
        pMVar3 = (Model*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)&local_48);
        this_01 = (Layout*)pMVar3->GetBatchList();
        puVar4 = (unique_ptr*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_01);
        puVar5 = (unique_ptr*)this_01->end();
        if (puVar4 != puVar5) {
            do {
                local_c8.GetLocalTransform();
                MapBatch((LightOperation*)param_1, puVar4, (Matrix44T*)&local_c8);
                puVar4 = puVar4 + 8;
            } while (puVar4 != puVar5);
        }
        psVar6 = (shared_ptr*)param_2->GetAnimationState();
        local_c8.field_64.GetLocalTransform();
        MVar1._8_8_ = local_c8.field_72;
        MVar1._0_8_ = local_c8.field_64;
        MVar1._16_8_ = local_c8.field_80;
        MVar1._24_8_ = local_c8.field_88;
        MVar1._32_8_ = local_c8.field_96;
        MVar1._40_8_ = local_c8.field_104;
        MVar1._48_8_ = local_58;
        new (this) ResolvedModel(&local_48, psVar6, MVar1);
        local_48.~shared_ptr();
        return (ResolvedModel*)this;
    }

    // 0x10036f2d0, 352 bytes, placed by nothing (unplaced)
    // LightOperation::MapBatch(std::unique_ptr<jag::graphics::GeometryBatchInstance, MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&, jag::math::Matrix44T<float> const&) const
    /* LightOperation::MapBatch(std::unique_ptr<jag::graphics::GeometryBatchInstance,
   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&,
   jag::math::Matrix44T<float> const&) const */

    void LightOperation::MapBatch(unique_ptr* param_1, Matrix44T* param_2) {
        int iVar1;
        GeometryBatchInstance* this_00;
        Terrain* this_01;
        vector<game::MapSquare::MapSquarePos, eastl::allocator>* this_02;
        long lVar2;
        ushort* puVar3;
        vector<unsigned char, eastl::allocator>* this_03;
        uchar* puVar4;
        vector<jag::graphics::GeometryBatchVertex, eastl::allocator>* this_04;
        GeometryBatchVertex* pGVar5;
        ulong uVar6;
        long lVar7;
        ulong uVar8;
        undefined4 local_40;
        uint local_3c;
        int local_38;
        uchar local_31;

        local_38 = field_20->Length();
        local_38 = local_38 * field_16;
        this_00 =
            (GeometryBatchInstance*)
                std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::
                operator->((
                    unique_ptr<jag::graphics::GeometryBatchInstance,
                               MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)param_1);
        this_01 = (Terrain*)this_00->GetGeometryBatch();
        this_02 = (vector<game::MapSquare::MapSquarePos, eastl::allocator>*)this_01->GetLinearPositionMaxSpeed();
        lVar2 = eastl::vector<game::MapSquare::MapSquarePos, eastl::allocator>::size(this_02);
        if (lVar2 != 0) {
            local_38 = local_38 >> 8;
            lVar2 = 0;
            uVar8 = 0;
            do {
                puVar3 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                    (vector<unsigned short, eastl::allocator>*)this_02, uVar8);
                local_3c = (uint)*puVar3;
                this_03 = (vector<unsigned char, eastl::allocator>*)this_01->GetWaterPatches();
                puVar4 = (uchar*)eastl::vector<unsigned char, eastl::allocator>::operator[](this_03, uVar8);
                local_31 = *puVar4;
                lVar7 = 0;
                do {
                    this_04 =
                        (vector<jag::graphics::GeometryBatchVertex, eastl::allocator>*)this_01->GetVertexDataBuffer();
                    pGVar5 = (GeometryBatchVertex*)
                        eastl::vector<jag::graphics::GeometryBatchVertex, eastl::allocator>::operator[](this_04,
                                                                                                        lVar2 + lVar7);
                    iVar1 = LightForVertex((GeometryBatchVertex*)this, (Matrix44T*)pGVar5, (int)param_2);
                    local_40 = GetVertexColor(this, pGVar5, local_3c, iVar1, local_31);
                    AssignVertexColor((LightOperation*)this, pGVar5, (ColourStorage8888*)&local_40);
                    lVar7 = lVar7 + 1;
                } while (lVar7 != 3);
                uVar8 = uVar8 + 1;
                uVar6 = eastl::vector<game::MapSquare::MapSquarePos, eastl::allocator>::size(this_02);
                lVar2 = lVar2 + 3;
            } while (uVar8 < uVar6);
        }
        this_01->SetFaceHSLBaked(true);
    }

    // 0x10036f430, 32 bytes, placed by nothing (unplaced)
    // LightOperation::ApplyAABB(jag::math::AABB const&) const
    AABB* LightOperation::ApplyAABB(AABB* param_1) {
        AABB* in_RDX;

        jag::math::AABB::AABB(param_1, in_RDX);
        return param_1;
    }

    // 0x10036f520, 224 bytes, placed by nothing (unplaced)
    // LightOperation::GetVertexColor(jag::graphics::GeometryBatchVertex const&, int, int, unsigned char) const
    int LightOperation::GetVertexColor(GeometryBatchVertex* param_1, int param_2, int param_3, uchar param_4) {
        int iVar1;
        int iVar2;
        uchar uVar3;
        undefined1 uVar4;
        ushort uVar5;
        uint uVar6;
        short* psVar7;
        LightOperation* pLVar8;
        undefined1 local_38[8];
        int local_30;
        undefined4 local_2c;

        new (&local_2c) callstack::Callstack();
        psVar7 = (short*)std::array<unsigned short, 2ul>::operator[]((array<unsigned short, 2ul>*)param_1, 0);
        if (*psVar7 == 0) {
            psVar7 = (short*)std::array<unsigned short, 2ul>::operator[]((array<unsigned short, 2ul>*)param_1, 1);
            if (*psVar7 == 0) {
                uVar5 = ModelUnlit::GetColour(param_2, param_3);
                uVar6 = jag::math::RunetekColour::HSLToRGB(uVar5);
                pLVar8 = (LightOperation*)&local_30;
                new (pLVar8) jag::math::ColourStorage8888<jag::math::ARGB8StorageLayout>(uVar6);
                local_2c = local_30;
                iVar1 = local_2c;
                local_2c._2_1_ = (uchar)((uint)local_30 >> 16);
                uVar3 = local_2c._2_1_;
                local_2c = iVar1;
                uVar4 = ColorGammaCorrect(pLVar8, uVar3);
                iVar1 = local_2c;
                local_2c._0_3_ = CONCAT12(uVar4, (undefined2)local_2c);
                iVar2 = local_2c;
                local_2c._1_1_ = SUB41(iVar1, 1);
                uVar3 = local_2c._1_1_;
                local_2c = iVar2;
                uVar4 = ColorGammaCorrect(pLVar8, uVar3);
                local_2c._0_2_ = CONCAT11(uVar4, (uchar)local_2c);
                uVar4 = ColorGammaCorrect(pLVar8, (uchar)local_2c);
                local_2c = CONCAT31(local_2c._1_3_, uVar4);
                goto LAB_10036f596;
            }
        }
        uVar5 = ModelUnlit::GetTexLight(param_3);
        uVar6 = jag::math::RunetekColour::HSLToRGB(uVar5);
        pLVar8 = (LightOperation*)local_38;
        new (local_38) jag::math::ColourStorage8888<jag::math::ARGB8StorageLayout>(uVar6);
        uVar4 = TextureGammaCorrect(pLVar8, (ColourStorage8888*)local_38);
        local_2c._0_2_ = CONCAT11(uVar4, uVar4);
        local_2c._0_3_ = CONCAT12(uVar4, (undefined2)local_2c);
        local_2c = (uint)(uint3)local_2c;
    LAB_10036f596:
        local_2c = CONCAT13(param_4, (uint3)local_2c);
        return local_2c;
    }

    // 0x10036f600, 160 bytes, placed by nothing (unplaced)
    // LightOperation::LightForVertex(jag::graphics::GeometryBatchVertex const&, jag::math::Matrix44T<float> const&, int) const
    int LightOperation::LightForVertex(GeometryBatchVertex* param_1, Matrix44T* param_2, int param_3) {
        char cVar1;
        int iVar2;
        int iVar3;
        char* pcVar4;
        int in_ECX;
        undefined4 in_register_00000014;
        Vector3T<int> local_60[16];
        Vector3T<float> local_50[16];
        undefined8 local_40[2];

        jag::math::Vector3T<float>::Vector3T<signed char>(local_50, (Vector3T*)&param_2->field_4);
        local_40[0] = (CONCAT44(in_register_00000014, param_3))->TransformVector(local_50);
        jag::math::Vector3T<int>::Vector3T<float>(local_60, (Vector3T*)local_40);
        pcVar4 = (char*)(&param_2->field_8)->y();
        cVar1 = *pcVar4;
        iVar2 = *(int*)(param_1->field_8 + 4);
        iVar3 = jag::math::Vector3Dot<int>((Vector3T*)local_60, (Vector3T*)(param_1->field_8 + 12));
        if (cVar1 != '\0') {
            in_ECX = in_ECX + in_ECX / 2;
        }
        return (iVar3 * 2) / in_ECX + iVar2;
    }

    // 0x10036f6a0, 160 bytes, placed by nothing (unplaced)
    // LightOperation::AssignVertexColor(jag::graphics::GeometryBatchVertex&, jag::math::ColourStorage8888<jag::math::ARGB8StorageLayout> const&) const
    void LightOperation::AssignVertexColor(GeometryBatchVertex* param_1, ColourStorage8888* param_2) {
        array<unsigned char, 3ul>* this_00;
        ColourStorage8888 CVar1;
        ColourStorage8888* pCVar2;
        array<unsigned char, 4ul>* this_01;

        CVar1 = param_2[2];
        this_00 = (array<unsigned char, 3ul>*)(param_1->field_8 + 8);
        pCVar2 = (ColourStorage8888*)std::array<unsigned char, 3ul>::operator[](this_00, 0);
        *pCVar2 = CVar1;
        this_01 = (array<unsigned char, 4ul>*)(param_1->field_8 + 4);
        pCVar2 = (ColourStorage8888*)std::array<unsigned char, 4ul>::operator[](this_01, 0);
        *pCVar2 = CVar1;
        CVar1 = param_2[1];
        pCVar2 = (ColourStorage8888*)std::array<unsigned char, 3ul>::operator[](this_00, 1);
        *pCVar2 = CVar1;
        pCVar2 = (ColourStorage8888*)std::array<unsigned char, 4ul>::operator[](this_01, 1);
        *pCVar2 = CVar1;
        CVar1 = *param_2;
        pCVar2 = (ColourStorage8888*)std::array<unsigned char, 3ul>::operator[](this_00, 2);
        *pCVar2 = CVar1;
        pCVar2 = (ColourStorage8888*)std::array<unsigned char, 4ul>::operator[](this_01, 2);
        *pCVar2 = CVar1;
        CVar1 = param_2[3];
        pCVar2 = (ColourStorage8888*)std::array<unsigned char, 4ul>::operator[](this_01, 3);
        *pCVar2 = CVar1;
    }

    // 0x10036f750, 80 bytes, placed by nothing (unplaced)
    // LightOperation::IsEqual(Operation const&) const
    bool LightOperation::IsEqual(Operation* param_1) {
        bool bVar1;

        if (((param_1->GetPos() == 5) && (field_12 == *(int*)&param_1->field_12)) &&
            (field_16 == *(int*)&param_1[1].field_0)) {
            bVar1 = jag::math::operator==((Vector3T*)field_20, (Vector3T*)((long)&param_1[1].field_0 + 4));
        } else {
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x10036f7e0, 80 bytes, placed by nothing (unplaced)
    // LightOperation::ColorGammaCorrect(unsigned char) const
    uint LightOperation::ColorGammaCorrect(uchar param_1) {
        float* pfVar1;
        undefined7 in_register_00000031;
        float local_14;
        float local_10;
        float local_c;

        local_14 = (float)(int)CONCAT71(in_register_00000031, param_1) * 1.0463493 + 8.925;
        local_10 = 0.0;
        local_c = 255.0;
        pfVar1 = std::clamp<float>(&local_14, &local_10, &local_c);
        return (int)*pfVar1 & 255;
    }

    // 0x10036f830, 160 bytes, placed by nothing (unplaced)
    // LightOperation::TextureGammaCorrect(jag::math::ColourStorage8888<jag::math::ARGB8StorageLayout> const&) const
    uint LightOperation::TextureGammaCorrect(ColourStorage8888* param_1) {
        uchar* puVar1;
        byte* pbVar2;
        float* pfVar3;
        float local_30;
        float local_2c;
        float local_28;
        float local_24;

        puVar1 = std::min<unsigned char>((uchar*)(param_1 + 2), (uchar*)(param_1 + 1));
        pbVar2 = std::min<unsigned char>(puVar1, (uchar*)param_1);
        local_24 = (float)*pbVar2;
        puVar1 = std::max<unsigned char>((uchar*)(param_1 + 2), (uchar*)(param_1 + 1));
        pbVar2 = std::max<unsigned char>(puVar1, (uchar*)param_1);
        local_30 = ((float)*pbVar2 + local_24) * 0.50793654;
        local_2c = 0.0;
        local_28 = 255.0;
        pfVar3 = std::clamp<float>(&local_30, &local_2c, &local_28);
        return (int)*pfVar3 & 255;
    }

    // 0x10036fb00, 96 bytes, base-object constructor, placed by nothing (unplaced)
    // TintOperation::TintOperation(signed char, signed char, signed char, unsigned char)
    void TintOperation::TintOperation(undefined8 param_1, undefined8 param_2, TintOperation* this, undefined4 param_4,
                                      undefined4 param_5, undefined4 param_6, undefined4 param_7) {
        undefined8 uVar1;

        new (this) GeometryEditBaseOperation(11);
        *(undefined***)this = &PTR_Apply_100efbfe0;
        uVar1 = PackColourWeight(param_4, param_5, param_6, param_7);
        *(undefined8*)&field_16 = uVar1;
        *(undefined8*)&this[1].field_7 = param_2;
    }

    // 0x10036fb60, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // GeometryEditBaseOperation::GeometryEditBaseOperation(Operation::Type)
    void GeometryEditBaseOperation::GeometryEditBaseOperation() {
        Operation::Operation();
        field_0 = &PTR_Apply_100efc2d0;
    }

    // 0x10036fb80, 112 bytes, placed by nothing (unplaced)
    // TintOperation::PackColourWeight(signed char, signed char, signed char, unsigned char)
    undefined1[16] TintOperation::PackColourWeight(int param_1, int param_2, int param_3, float param_4) {
        float fVar1;
        float fVar2;
        undefined1 auVar3[16];
        ImVec4 local_18[16];

        fVar1 = (float)((int)param_4 + 256);
        if ((char)param_1 < '\0') {
            fVar1 = param_4;
        }
        fVar2 = (float)((int)fVar1 + 512);
        if ((char)param_2 < '\0') {
            fVar2 = fVar1;
        }
        fVar1 = (float)((int)fVar2 + 1024);
        if ((char)param_3 < '\0') {
            fVar1 = fVar2;
        }
        ImVec4::ImVec4(local_18, (float)param_1 * 0.015873017, (float)param_2 * 0.14285715,
                       (float)param_3 * 0.007874016, fVar1);
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

    // 0x10036fbf0, 16 bytes, complete-object constructor, placed by nothing (unplaced)
    // TintOperation::TintOperation(signed char, signed char, signed char, unsigned char): jumps straight to the base-object constructor

    // 0x10036fc00, 304 bytes, placed by nothing (unplaced)
    // TintOperation::ApplyFresh(ResolvedModel const&, OperationRecordEntry const*) const
    TintOperation* TintOperation::ApplyFresh(ResolvedModel* param_1, OperationRecordEntry* param_2) {
        Matrix44T MVar1;
        shared_ptr<jag::graphics::Model>* this_00;
        Model* pMVar2;
        Layout* this_01;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_02;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar3;
        undefined8 uVar4;
        shared_ptr* psVar5;
        undefined8 local_88;
        undefined8 uStack_80;
        undefined8 local_78;
        undefined8 uStack_70;
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58;
        shared_ptr local_48;
        undefined4 local_34;

        this_00 = (shared_ptr<jag::graphics::Model>*)param_2->GetModel();
        pMVar2 = (Model*)shared_ptr<jag::graphics::Model>::operator*(this_00);
        local_34 = 2;
        make_shared<jag::graphics::Model, jag::graphics::Model_const&, jag::graphics::ModelCopyType>(
            (jag*)&local_48, pMVar2, (ModelCopyType*)&local_34);
        pMVar2 = (Model*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)&local_48);
        this_01 = (Layout*)pMVar2->GetBatchList();
        this_02 = (unique_ptr<jag::graphics::GeometryBatchInstance,
                              MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_01);
        puVar3 =
            (unique_ptr<jag::graphics::GeometryBatchInstance,
                        MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)this_01->end();
        for (; this_02 != puVar3; this_02 = this_02 + 8) {
            uVar4 =
                std::unique_ptr<
                    jag::graphics::GeometryBatchInstance,
                    MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_02);
            jag::graphics::GeometryBatchInstance::SetTint((int)param_1->field_16, (int)param_1->field_24, uVar4);
        }
        psVar5 = (shared_ptr*)param_2->GetAnimationState();
        local_88.GetLocalTransform();
        MVar1._8_8_ = uStack_80;
        MVar1._0_8_ = local_88;
        MVar1._16_8_ = local_78;
        MVar1._24_8_ = uStack_70;
        MVar1._32_8_ = local_68;
        MVar1._40_8_ = uStack_60;
        MVar1._48_8_ = local_58;
        new (this) ResolvedModel(&local_48, psVar5, MVar1);
        local_48.~shared_ptr();
        return this;
    }

    // 0x10036fd30, 64 bytes, placed by nothing (unplaced)
    // TintOperation::IsEqual(Operation const&) const
    bool TintOperation::IsEqual(Operation* param_1) {
        bool bVar1;

        if (param_1->GetPos() == 11) {
            bVar1 = jag::math::operator==((Vector4T*)&field_16, (Vector4T*)(param_1 + 1));
        } else {
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x10036fd70, 400 bytes, placed by nothing (unplaced)
    // FixNormalsOperation::MapBatch(std::unique_ptr<jag::graphics::GeometryBatchInstance, MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&) const
    /* FixNormalsOperation::MapBatch(std::unique_ptr<jag::graphics::GeometryBatchInstance,
   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&) const */

    void FixNormalsOperation::MapBatch(unique_ptr* param_1) {
        GeometryBatchInstance* this_00;
        GeometryBatch* this_01;
        GeometryBatch* this_02;
        ulong uVar2;
        vector<jag::graphics::GeometryBatchVertex, eastl::allocator>* this_03;
        ushort* puVar3;
        long lVar4;
        ulong uVar5;
        long lVar6;
        undefined1 auVar7[12];
        LocationData local_a0;
        Vector3T<int> local_90[16];
        undefined1 local_80[12];
        undefined1 local_70[12];
        GeometryBatch* local_60;
        ulong local_58;
        undefined1 local_50[12];
        long local_40;
        ulong local_38;

        this_00 =
            (GeometryBatchInstance*)
                std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::
                operator->((
                    unique_ptr<jag::graphics::GeometryBatchInstance,
                               MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)param_1);
        this_01 = (GeometryBatch*)this_00->GetGeometryBatch();
        this_02 = (GeometryBatch*)this_01->GetVertexIndexBuffer();
        local_60 = this_02;
        uVar2 = this_02->size();
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
                    auVar7 = CalculateFaceNormal(this_02, (ulong)this_01);
                    local_80 = auVar7;
                    new (&local_a0) rs2lib::worldmap::LocationData(0, 381, 0);
                    auVar7 = jag::math::operator+((Vector3T*)&local_a0, (Vector3T*)local_80);
                    local_70 = auVar7;
                    jag::math::Vector3T<int>::Vector3T(local_90, 4);
                    auVar7 = jag::math::operator/((Vector3T*)local_70, (Vector3T*)local_90);
                    local_50 = auVar7;
                    jag::math::Vector3T<int>::operator=((Vector3T<int>*)local_80, (Vector3T*)local_50);
                    lVar6 = 0;
                    local_40 = lVar4;
                    do {
                        jag::math::Vector3T<signed char>::Vector3T<int>((Vector3T<signed char>*)local_50,
                                                                        (Vector3T*)local_80);
                        this_03 = (vector<jag::graphics::GeometryBatchVertex, eastl::allocator>*)
                                      this_01->GetVertexDataBuffer();
                        puVar3 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                            (vector<unsigned short, eastl::allocator>*)local_60, local_40 + lVar6);
                        lVar4 = eastl::vector<jag::graphics::GeometryBatchVertex, eastl::allocator>::operator[](
                            this_03, (ulong)*puVar3);
                        this_02 = (GeometryBatch*)(lVar4 + 4);
                        jag::math::Vector3T<unsigned char>::operator=((Vector3T<unsigned char>*)this_02,
                                                                      (Vector3T*)local_50);
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

    // 0x10036ff00, 192 bytes, placed by nothing (unplaced)
    // FixNormalsOperation::AnySmallVertexNormal(jag::graphics::GeometryBatch const&, unsigned long) const
    ulong FixNormalsOperation::AnySmallVertexNormal(GeometryBatch* param_1, ulong param_2) {
        vector<unsigned short, eastl::allocator>* this_00;
        vector<jag::graphics::GeometryBatchVertex, eastl::allocator>* this_01;
        ushort* puVar2;
        long lVar3;
        char* pcVar4;
        ulong uVar5;
        undefined8 unaff_R13;
        bool bVar6;
        Vector3T<int> local_48[16];
        long local_38;

        local_38 = param_2 * 3;
        this_00 = (vector<unsigned short, eastl::allocator>*)param_1->GetVertexIndexBuffer();
        this_01 = (vector<jag::graphics::GeometryBatchVertex, eastl::allocator>*)param_1->GetVertexDataBuffer();
        bVar6 = true;
        uVar5 = 0;
        do {
            puVar2 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](this_00, local_38 + uVar5);
            lVar3 = eastl::vector<jag::graphics::GeometryBatchVertex, eastl::allocator>::operator[](this_01,
                                                                                                    (ulong)*puVar2);
            jag::math::Vector3T<int>::Vector3T<signed char>(local_48, (Vector3T*)(lVar3 + 4));
            pcVar4 = (char*)((lVar3 + 8))->y();
            if (*pcVar4 == '\0') {
                if (local_48->LengthSq() < 1024)
                    break;
            }
            bVar6 = uVar5 < 2;
            uVar5 = uVar5 + 1;
        } while (uVar5 != 3);
        return CONCAT71((int7)((ulong)unaff_R13 >> 8), bVar6) & 4294967295;
    }

    // 0x10036ffc0, 496 bytes, placed by nothing (unplaced)
    // FixNormalsOperation::CalculateFaceNormal(jag::graphics::GeometryBatch const&, unsigned long) const
    undefined1[16] FixNormalsOperation::CalculateFaceNormal(GeometryBatch* param_1, ulong param_2) {
        int iVar1;
        vector<unsigned short, eastl::allocator>* this;
        vector<jag::graphics::GeometryBatchVertexPos, eastl::allocator>* this_00;
        ushort* puVar2;
        undefined8* puVar3;
        Vector3T* pVVar4;
        int* piVar5;
        long in_RDX;
        double dVar6;
        undefined1 auVar7[16];
        undefined1 auVar8[12];
        Vector3T<int> local_b0[16];
        Vector3T<int> local_a0[16];
        Vector3T<int> local_90[16];
        undefined8 local_80;
        undefined4 local_78;
        undefined8 local_70[2];
        undefined1 local_60[12];
        Vector3T local_50[16];
        undefined1 local_40[12];

        this = (vector<unsigned short, eastl::allocator>*)param_2->GetVertexIndexBuffer();
        this_00 = (vector<jag::graphics::GeometryBatchVertexPos, eastl::allocator>*)param_2->GetVertexDataBufferPos();
        puVar2 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](this, in_RDX * 3);
        puVar3 = (undefined8*)eastl::vector<jag::graphics::GeometryBatchVertexPos, eastl::allocator>::operator[](
            this_00, (ulong)*puVar2);
        local_80 = *puVar3;
        local_78 = *(undefined4*)(puVar3 + 1);
        puVar2 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](this, in_RDX * 3 + 1);
        pVVar4 = (Vector3T*)eastl::vector<jag::graphics::GeometryBatchVertexPos, eastl::allocator>::operator[](
            this_00, (ulong)*puVar2);
        local_70[0] = jag::math::operator-(pVVar4, (Vector3T*)&local_80);
        jag::math::Vector3T<int>::Vector3T<float>(local_90, (Vector3T*)local_70);
        puVar2 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](this, in_RDX * 3 + 2);
        pVVar4 = (Vector3T*)eastl::vector<jag::graphics::GeometryBatchVertexPos, eastl::allocator>::operator[](
            this_00, (ulong)*puVar2);
        local_40._0_8_ = jag::math::operator-(pVVar4, (Vector3T*)&local_80);
        jag::math::Vector3T<int>::Vector3T<float>((Vector3T<int>*)local_70, (Vector3T*)local_40);
        local_50._0_12_ = jag::math::Vector3Cross<int>((Vector3T*)local_90, (Vector3T*)local_70);
        local_40 = jag::math::Vector3Abs<int>(local_50);
        iVar1 = jag::math::Vector3T<int>::MaxElement();
        if (8192 < iVar1) {
            do {
                jag::math::Vector3T<int>::operator/=((Vector3T<int>*)local_50, 2);
                auVar8 = jag::math::Vector3Abs<int>(local_50);
                local_40 = auVar8;
                iVar1 = jag::math::Vector3T<int>::MaxElement();
            } while (8192 < iVar1);
        }
        iVar1 = local_50->LengthSq();
        dVar6 = (double)sqrt<int>(iVar1);
        local_40._0_4_ = (int)dVar6;
        local_60._0_4_ = 1;
        piVar5 = std::max<int>((int*)local_40, (int*)local_60);
        iVar1 = *piVar5;
        jag::math::Vector3T<int>::Vector3T(local_b0, 128);
        local_60 = jag::math::operator*((Vector3T*)local_b0, local_50);
        jag::math::Vector3T<int>::Vector3T(local_a0, iVar1);
        local_40 = jag::math::operator/((Vector3T*)local_60, (Vector3T*)local_a0);
        jag::math::Vector3T<int>::operator=((Vector3T<int>*)local_50, (Vector3T*)local_40);
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

    // 0x100370230, 32 bytes, placed by nothing (unplaced)
    // FixNormalsOperation::IsEqual(Operation const&) const
    bool FixNormalsOperation::IsEqual(Operation* param_1) {
        return param_1->GetPos() == 3;
    }

    // 0x100370d10: the linker folded this into ModelRSevenUnlit::~ModelRSevenUnlit(), which has identical code
    ModelRSevenLit::~ModelRSevenLit();

    // 0x100370d20: the linker folded this into ModelRSevenUnlit::~ModelRSevenUnlit(), which has identical code
    ModelRSevenLit::~ModelRSevenLit();

    // 0x100370d70: the linker folded this into ModelRSevenUnlit::Rotate90(), which has identical code
    ModelRSevenLit::Rotate90();

    // 0x100370d80: the linker folded this into ModelRSevenUnlit::Rotate180(), which has identical code
    ModelRSevenLit::Rotate180();

    // 0x100370d90: the linker folded this into ModelRSevenUnlit::Rotate270(), which has identical code
    ModelRSevenLit::Rotate270();

    // 0x100370db0: the linker folded this into ModelRSevenUnlit::RotateXAxis(int), which has identical code
    ModelRSevenLit::RotateXAxis(int);

    // 0x100370dc0: the linker folded this into ModelRSevenUnlit::Translate(int, int, int), which has identical code
    ModelRSevenLit::Translate(int, int, int);

    // 0x100370dd0: the linker folded this into ModelRSevenUnlit::Resize(int, int, int), which has identical code
    ModelRSevenLit::Resize(int, int, int);

    // 0x10038e590, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        undefined1 local_50[40];
        Vector3T<int> local_28[16];

        jag::math::Matrix33Scaling<float>((math*)local_50, 1.0, 1.0, -1.0);
        jag::math::Vector3T<int>::Vector3T(local_28);
        new (&jag::graphics::MAYA_ANIM_INVERT_MATRIX) jag::math::Matrix44T<float>(local_50, local_28);
    }

    // 0x10038e5f0, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.1
    void ___cxx_global_var_init_1() {
        new (&jag::graphics::WORLD_ORTHOGONAL) jag::math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x10038e610, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.3
    void ___cxx_global_var_init_3() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x10038e670, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.5
    void ___cxx_global_var_init_5() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x10038e6d0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.7
    void ___cxx_global_var_init_7() {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x10038f6c0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.75
    void ___cxx_global_var_init_75() {
        make_shared<ModelLitImpl>((jag*)&ModelLitImpl::m_tempModel);
        ___cxa_atexit(PTR__shared_ptr_100ee54e0, &ModelLitImpl::m_tempModel, 4294967296);
    }

    // 0x10038f740, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.77
    void ___cxx_global_var_init_77() {
        make_shared<ModelLitImpl>((jag*)&ModelLitImpl::m_tempModel2);
        ___cxa_atexit(PTR__shared_ptr_100ee54e0, &ModelLitImpl::m_tempModel2, 4294967296);
    }

    // 0x10038f7c0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.79
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

    void ___cxx_global_var_init_79() {
        _DAT_1039364c0 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 48);
        uRam00000001039364c8 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 56);
        _DAT_1039364b0 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 32);
        uRam00000001039364b8 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 40);
        _DAT_1039364a0 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 16);
        uRam00000001039364a8 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 24);
        _m_sumMatrix = *(undefined8*)PTR_IDENTITY_100ee6730;
        uRam0000000103936498 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 8);
    }

    // 0x10038f800, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.80
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

    void ___cxx_global_var_init_80() {
        _DAT_103936500 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 48);
        uRam0000000103936508 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 56);
        _DAT_1039364f0 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 32);
        uRam00000001039364f8 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 40);
        _DAT_1039364e0 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 16);
        uRam00000001039364e8 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 24);
        _m_weightMatrix = *(undefined8*)PTR_IDENTITY_100ee6730;
        uRam00000001039364d8 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 8);
    }

    // 0x10038f840, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.81
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

    void ___cxx_global_var_init_81() {
        _DAT_103936540 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 48);
        uRam0000000103936548 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 56);
        _DAT_103936530 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 32);
        uRam0000000103936538 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 40);
        _DAT_103936520 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 16);
        uRam0000000103936528 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 24);
        _m_skinMatrix = *(undefined8*)PTR_IDENTITY_100ee6730;
        uRam0000000103936518 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 8);
    }

    // 0x10038f940, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.112
    void ___cxx_global_var_init_112() {
        eastl::fixed_vector<long long, 1000ul, true, eastl::allocator>::fixed_vector(4355038968);
        ___cxa_atexit(PTR__fixed_vector_100ee6cf0, &MousePickingHelper::m_pickedEntityTypecode, 4294967296);
    }

    // 0x10038f9c0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.130
    void ___cxx_global_var_init_130() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10038fa00, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.131
    void ___cxx_global_var_init_131() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10038fa40, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.132
    void ___cxx_global_var_init_132() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10038fa80, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.133
    void ___cxx_global_var_init_133() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10038fac0, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.134
    void ___cxx_global_var_init_134() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) jag::math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10038faf0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.135
    void ___cxx_global_var_init_135() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10038fb30, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.136
    void ___cxx_global_var_init_136() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10038fb70, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.137
    void ___cxx_global_var_init_137() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10038fbb0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.138
    void ___cxx_global_var_init_138() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10038fbf0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.139
    void ___cxx_global_var_init_139() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10038fc30, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.140
    void ___cxx_global_var_init_140() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10038fc70, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.141
    void ___cxx_global_var_init_141() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) jag::math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10038fcb0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.142
    void ___cxx_global_var_init_142() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<jag::graphics::AnimationManager,
                                          std::default_delete<jag::graphics::AnimationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10038fcf0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.143
    void ___cxx_global_var_init_143() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728) jag::math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                                                                 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10038fd50, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.144
    void ___cxx_global_var_init_144() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10038fd90, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.145
    void ___cxx_global_var_init_145() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730) jag::math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
                                                                     1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10038fdf0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.146
    void ___cxx_global_var_init_146() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10038fe30, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.147
    void ___cxx_global_var_init_147() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager,
                                          std::default_delete<graphicutils::BatchDestroyManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5940, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10038fe70, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.148
    void ___cxx_global_var_init_148() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4818;
        if (*PTR_IDENTITY_100ee4818 == '\0') {
            new (PTR_IDENTITY_100ee6720)
                jag::math::Matrix43T<float>(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10038fed0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.149
    void ___cxx_global_var_init_149() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10038ff10, 80 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.150
    void ___cxx_global_var_init_150() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4810;
        if (*PTR_IDENTITY_100ee4810 == '\0') {
            new (PTR_IDENTITY_100ee6718) jag::math::Matrix33T<float>(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10038ffa0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.152
    void ___cxx_global_var_init_152() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49f0;
        if (*PTR_m_pSingleton_100ee49f0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<hardware::HardwareInfo, std::default_delete<hardware::HardwareInfo>>::~unique_ptr,
                PTR_m_pSingleton_100ee6c60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10038ffe0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.153
    void ___cxx_global_var_init_153() {
        undefined* puVar1;

        puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) jag::math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100390020, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.154
    void ___cxx_global_var_init_154() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4630;
        if (*PTR_m_mutex_100ee4630 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee6020, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100390060, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.155
    void ___cxx_global_var_init_155() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4280;
        if (*PTR_m_pSingleton_100ee4280 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<
                    graphicutils::BatchDestroyHelper<
                        std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                        MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>,
                    std::default_delete<graphicutils::BatchDestroyHelper<std::unique_ptr<
                        jag::graphics::GeometryBatchInstance,
                        MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>>>::~unique_ptr,
                PTR_m_pSingleton_100ee5930, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003900a0, 189 bytes, placed by nothing (unplaced)
    // __GLOBAL__sub_I_unity_0_cxx.cxx
    void __GLOBAL__sub_I_unity_0_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
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
    // 0x10036e800, 416 bytes, inline, placed by nothing (unplaced)
    // Vector3T<float> operator*<float>(Matrix44T<float> const&, Vector3T<float> const&)
    /* Vector3T<float> TEMPNAMEPLACEHOLDERVALUE(Matrix44T<float>
   const&, Vector3T<float> const&) */

    undefined8 operator*(Matrix44T* param_1, Vector3T* param_2) {
        float* pfVar1;
        long lVar2;
        undefined8 uVar3;
        undefined1 local_30[16];
        float local_20;
        float local_1c;

        pfVar1 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 0);
        local_20 = *(float*)param_2 * *pfVar1;
        lVar2 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 0);
        local_20 = *(float*)(param_2 + 4) * *(float*)(lVar2 + 4) + local_20;
        lVar2 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 0);
        local_20 = *(float*)(param_2 + 8) * *(float*)(lVar2 + 8) + local_20;
        lVar2 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 0);
        local_20 = local_20 + *(float*)(lVar2 + 12);
        pfVar1 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 1);
        local_1c = *(float*)param_2 * *pfVar1;
        lVar2 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 1);
        local_1c = *(float*)(param_2 + 4) * *(float*)(lVar2 + 4) + local_1c;
        lVar2 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 1);
        local_1c = *(float*)(param_2 + 8) * *(float*)(lVar2 + 8) + local_1c;
        lVar2 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 1);
        local_1c = local_1c + *(float*)(lVar2 + 12);
        pfVar1 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 2);
        local_30._12_4_ = *(float*)param_2 * *pfVar1;
        lVar2 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 2);
        local_30._12_4_ = *(float*)(param_2 + 4) * *(float*)(lVar2 + 4) + (float)local_30._12_4_;
        lVar2 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 2);
        local_30._12_4_ = *(float*)(param_2 + 8) * *(float*)(lVar2 + 8) + (float)local_30._12_4_;
        lVar2 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 2);
        new (local_30) ColourHSL(local_20, local_1c, (float)local_30._12_4_ + *(float*)(lVar2 + 12));
        uVar3._0_4_ = (float)local_30._0_4_;
        uVar3._4_4_ = (float)local_30._4_4_;
        return uVar3;
    }

    // 0x10036e9a0, 48 bytes, inline, placed by nothing (unplaced)
    // bool EqualAbs<float>(float, float, float)
    bool EqualAbs<float>(float param_1, float param_2, float param_3) {
        return (float)::abs(param_1 - param_2) < param_3;
    }

    // 0x10036fab0, 32 bytes, inline, placed by nothing (unplaced)
    // int Vector3Dot<int>(Vector3T<int> const&, Vector3T<int> const&)
    int Vector3Dot<int>(Vector3T* param_1, Vector3T* param_2) {
        return *(int*)(param_2 + 8) * *(int*)(param_1 + 8) + *(int*)(param_2 + 4) * *(int*)(param_1 + 4) +
               *(int*)param_2 * *(int*)param_1;
    }

    // 0x1003701b0, 64 bytes, inline, placed by nothing (unplaced)
    // Vector3T<int> operator/<int>(Vector3T<int> const&, Vector3T<int> const&)
    /* Vector3T<int> TEMPNAMEPLACEHOLDERVALUE(Vector3T<int> const&,
   Vector3T<int> const&) */

    undefined1[16] operator/(Vector3T * param_1, Vector3T * param_2) {
        undefined1 auVar1[16];
        LocationData local_18;

        new (&local_18) oldscape::rs2lib::worldmap::LocationData(*(int*)param_1 / *(int*)param_2,
                                                                 *(int*)(param_1 + 4) / *(int*)(param_2 + 4),
                                                                 *(int*)(param_1 + 8) / *(int*)(param_2 + 8));
        auVar1._12_4_ = 0;
        auVar1._0_4_ = local_18.field_0;
        auVar1._4_4_ = local_18.field_4;
        auVar1._8_4_ = local_18.field_8;
        return auVar1;
    }

    // 0x1003702c0, 96 bytes, inline, placed by nothing (unplaced)
    // Vector3T<int> Vector3Cross<int>(Vector3T<int> const&, Vector3T<int> const&)
    undefined1[16] Vector3Cross<int>(Vector3T* param_1, Vector3T* param_2) {
        undefined1 auVar1[16];
        LocationData local_18;

        new (&local_18) oldscape::rs2lib::worldmap::LocationData(
            *(int*)(param_2 + 8) * *(int*)(param_1 + 4) - *(int*)(param_2 + 4) * *(int*)(param_1 + 8),
            *(int*)(param_1 + 8) * *(int*)param_2 - *(int*)(param_2 + 8) * *(int*)param_1,
            *(int*)param_1 * *(int*)(param_2 + 4) - *(int*)param_2 * *(int*)(param_1 + 4));
        auVar1._12_4_ = 0;
        auVar1._0_4_ = local_18.field_0;
        auVar1._4_4_ = local_18.field_4;
        auVar1._8_4_ = local_18.field_8;
        return auVar1;
    }

    // 0x100370320, 64 bytes, inline, placed by nothing (unplaced)
    // Vector3T<int> Vector3Abs<int>(Vector3T<int> const&)
    undefined1[16] Vector3Abs<int>(Vector3T* param_1) {
        int iVar1;
        int iVar2;
        int iVar3;
        undefined1 auVar4[16];
        LocationData local_18;

        iVar3 = -*(int*)param_1;
        if (iVar3 < 0) {
            iVar3 = *(int*)param_1;
        }
        iVar2 = -*(int*)(param_1 + 4);
        if (iVar2 < 0) {
            iVar2 = *(int*)(param_1 + 4);
        }
        iVar1 = -*(int*)(param_1 + 8);
        if (iVar1 < 0) {
            iVar1 = *(int*)(param_1 + 8);
        }
        new (&local_18) oldscape::rs2lib::worldmap::LocationData(iVar3, iVar2, iVar1);
        auVar4._12_4_ = 0;
        auVar4._0_4_ = local_18.field_0;
        auVar4._4_4_ = local_18.field_4;
        auVar4._8_4_ = local_18.field_8;
        return auVar4;
    }

    // 0x1003703b0, 64 bytes, inline, placed by nothing (unplaced)
    // Vector3T<int> operator*<int>(Vector3T<int> const&, Vector3T<int> const&)
    /* Vector3T<int> TEMPNAMEPLACEHOLDERVALUE(Vector3T<int> const&,
   Vector3T<int> const&) */

    undefined1[16] operator*(Vector3T * param_1, Vector3T * param_2) {
        undefined1 auVar1[16];
        LocationData local_18;

        new (&local_18) oldscape::rs2lib::worldmap::LocationData(*(int*)param_2 * *(int*)param_1,
                                                                 *(int*)(param_2 + 4) * *(int*)(param_1 + 4),
                                                                 *(int*)(param_2 + 8) * *(int*)(param_1 + 8));
        auVar1._12_4_ = 0;
        auVar1._0_4_ = local_18.field_0;
        auVar1._4_4_ = local_18.field_4;
        auVar1._8_4_ = local_18.field_8;
        return auVar1;
    }

    // 0x100370b80, 64 bytes, inline, placed by nothing (unplaced)
    // NearestPowerOf2GreaterOrEqual(unsigned int)
    int NearestPowerOf2GreaterOrEqual(uint param_1) {
        uint uVar1;

        uVar1 = param_1 - 1;
        if (param_1 == 0) {
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
    // 0x10422a830, 64 bytes, __bss; zero-initialised
    MAYA_ANIM_INVERT_MATRIX;

    // 0x10422a870, 16 bytes, __bss; zero-initialised
    WORLD_ORTHOGONAL;

} // namespace jag::graphics

namespace jag::threading {
    // 0x100d429a4, 8 bytes, __const
    MAX_HARDWARE_THREAD_LIMIT = 4935945191598063632;

} // namespace jag::threading
