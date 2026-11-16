// libs/oldscape/jagex3/dash3d/Operation.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "Operation.h"
#include "NXTRenderCanvas.h"

namespace jag::oldscape::dash3d {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Operation::Append(Operation&&);

    // 0x100024170: the linker folded this into option::IScriptOption::GetId() const, which has identical code
    Operation::GetType() const;

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    Operation::CanAppend() const;

    // 0x100369600, 16 bytes, placed by class name
    // Operation::IsEqual(Operation const&) const
    undefined8 Operation::IsEqual(Operation* param_1) {
        return 0;
    }

    // 0x100369610, 80 bytes, placed by class name
    // Operation::CloneModel(jag::graphics::Model const&, jag::graphics::ModelCopyType) const
    Operation* Operation::CloneModel(CommandLine* param_1, Model* param_3, undefined4 param_4) {
        int iVar1;
        undefined4 local_1c;

        g_numModelCopiesEver._0_4_ = (int)g_numModelCopiesEver + 1;
        local_1c = param_4;
        iVar1 = param_1->GetPos();
        *(int*)(&g_numCopiesPerOpType + (long)iVar1 * 4) = *(int*)(&g_numCopiesPerOpType + (long)iVar1 * 4) + 1;
        make_shared<jag::graphics::Model, jag::graphics::Model_const&, jag::graphics::ModelCopyType>(
            (jag*)this, param_3, (ModelCopyType*)&local_1c);
        return this;
    }

    // 0x100369660, 160 bytes, placed by neighbouring functions
    // TransformOperation::Apply(ResolvedModel const&, OperationRecordEntry const*) const
    TransformOperation* TransformOperation::Apply(ResolvedModel* param_1, OperationRecordEntry* param_2) {
        Matrix44T MVar1;
        shared_ptr* psVar2;
        ResolvedModel local_b8;
        undefined8 local_48;
        shared_ptr* local_38;

        local_38 = (shared_ptr*)param_2->GetModel();
        psVar2 = (shared_ptr*)param_2->GetAnimationState();
        local_b8.GetLocalTransform();
        jag::math::operator*((math*)&local_b8.field_64, (Matrix44T*)&local_b8, (Matrix44T*)&param_1->field_16);
        MVar1._8_8_ = local_b8.field_72;
        MVar1._0_8_ = local_b8.field_64;
        MVar1._16_8_ = local_b8.field_80;
        MVar1._24_8_ = local_b8.field_88;
        MVar1._32_8_ = local_b8.field_96;
        MVar1._40_8_ = local_b8.field_104;
        MVar1._48_8_ = local_48;
        new (this) ResolvedModel(local_38, psVar2, MVar1);
        return this;
    }

    // 0x100369700, 16 bytes, placed by neighbouring functions
    // ResolvedModel::GetModel() const
    ResolvedModel* ResolvedModel::GetModel() {
        return this;
    }

    // 0x100369710, 16 bytes, placed by neighbouring functions
    // ResolvedModel::GetAnimationState() const
    undefined8* ResolvedModel::GetAnimationState() {
        return &m_animationState;
    }

    // 0x100369720, 48 bytes, placed by neighbouring functions
    // ResolvedModel::GetLocalTransform() const
    ResolvedModel* ResolvedModel::GetLocalTransform() {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        long in_RSI;

        uVar1 = *(undefined8*)(in_RSI + 48);
        uVar2 = *(undefined8*)(in_RSI + 56);
        uVar3 = *(undefined8*)(in_RSI + 64);
        uVar4 = *(undefined8*)(in_RSI + 72);
        uVar5 = *(undefined8*)(in_RSI + 80);
        uVar6 = *(undefined8*)(in_RSI + 88);
        uVar7 = *(undefined8*)(in_RSI + 104);
        field_48 = *(undefined8*)(in_RSI + 96);
        field_56 = uVar7;
        m_animationState = uVar5;
        field_40 = uVar6;
        field_16 = uVar3;
        field_24 = uVar4;
        field_0 = uVar1;
        field_8 = uVar2;
        return this;
    }

    // 0x1003697e0, 48 bytes, placed by neighbouring functions
    // TransformOperation::ApplyAABB(jag::math::AABB const&) const
    TransformOperation* TransformOperation::ApplyAABB(AABB* param_1) {
        AABB* in_RDX;

        new (this) jag::math::AABB(in_RDX);
        Transform((Matrix44T*)&param_1->field_16);
        return this;
    }

    // 0x100369810, 64 bytes, placed by neighbouring functions
    // TransformOperation::IsEqual(Operation const&) const
    bool TransformOperation::IsEqual(Operation* param_1) {
        bool bVar1;

        if (param_1->GetPos() == 12) {
            bVar1 = jag::math::operator==((Matrix44T*)&field_16, (Matrix44T*)(param_1 + 1));
        } else {
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x100369850, 144 bytes, placed by neighbouring functions
    // SetModelOperation::Apply(ResolvedModel const&, OperationRecordEntry const*) const
    SetModelOperation* SetModelOperation::Apply(ResolvedModel* param_1, OperationRecordEntry* param_2) {
        shared_ptr local_30;

        new (&local_30) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        new (this) ResolvedModel((shared_ptr*)&param_1->field_16, &local_30, *(Matrix44T*)PTR_IDENTITY_100ee6730);
        local_30.~shared_ptr();
        return this;
    }

    // 0x1003698e0, 48 bytes, placed by neighbouring functions
    // SetModelOperation::ApplyAABB(jag::math::AABB const&) const
    SetModelOperation* SetModelOperation::ApplyAABB(AABB* param_1) {
        NXTPixToolkit* this_00;
        AABB* pAVar1;

        this_00 = (NXTPixToolkit*)shared_ptr<jag::graphics::Model>::operator->(
            (shared_ptr<jag::graphics::Model>*)&param_1->field_16);
        pAVar1 = (AABB*)this_00->GetScreen();
        new (this) jag::math::AABB(pAVar1);
        return this;
    }

    // 0x100369910, 64 bytes, placed by neighbouring functions
    // SetModelOperation::IsEqual(Operation const&) const
    bool SetModelOperation::IsEqual(Operation* param_1) {
        bool bVar1;
        shared_ptr* extraout_RDX;

        if (param_1->GetPos() == 9) {
            bVar1 = operator==((jag*)field_16, (shared_ptr*)(param_1 + 1), extraout_RDX);
        } else {
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x100369950, 336 bytes, placed by __FILE__ string
    // OperationBuffer::AddOperation(shared_ptr<Operation>&&)
    void OperationBuffer::AddOperation(shared_ptr* param_1) {
        char cVar2;
        int iVar3;
        int iVar4;
        vector* pvVar5;
        vector<shared_ptr<Operation>, eastl::allocator>* pvVar6;
        vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>* this_00;
        CommandLine* this_01;
        shared_ptr<Operation>* psVar8;
        CommandLine* this_02;
        long* plVar9;
        shared_ptr local_38;

        if (!operator!=((shared_ptr*)this, (_func_decltype_nullptr*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_impl != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "Operation.cpp",
                      133, (char*)0);
        }
        iVar3 = use_count();
        if (iVar3 < 2) {
            this_00 = (vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>*)
                shared_ptr<OperationBuffer::OperationImpl_const>::operator*(
                    (shared_ptr<OperationBuffer::OperationImpl_const>*)this);
            this_01 = (CommandLine*)shared_ptr<Operation>::operator*((shared_ptr<Operation>*)param_1);
            if ((eastl::vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>::size(this_00) != 0) &&
                (cVar2 = (**(code**)(this_01->field_0 + 8))(this_01), cVar2 != '\0')) {
                iVar3 = this_01->GetPos();
                psVar8 = (shared_ptr<Operation>*)this_00->back();
                this_02 = (CommandLine*)shared_ptr<Operation>::operator->(psVar8);
                iVar4 = this_02->GetPos();
                if (iVar3 == iVar4) {
                    psVar8 = (shared_ptr<Operation>*)this_00->back();
                    plVar9 = (long*)shared_ptr<Operation>::operator->(psVar8);
                    (**(code**)(*plVar9 + 16))(plVar9, this_01);
                    return;
                }
            }
            this_00->push_back(param_1);
        } else {
            make_shared<OperationBuffer::OperationImpl>((jag*)&local_38);
            pvVar5 = (vector*)shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
                (shared_ptr<OperationBuffer::OperationImpl_const>*)this);
            pvVar6 = (vector<shared_ptr<Operation>, eastl::allocator>*)
                         shared_ptr<OperationBuffer::OperationImpl>::operator->(
                             (shared_ptr<OperationBuffer::OperationImpl>*)&local_38);
            eastl::vector<shared_ptr<Operation>, eastl::allocator>::operator=(pvVar6, pvVar5);
            pvVar6 = (vector<shared_ptr<Operation>, eastl::allocator>*)
                         shared_ptr<OperationBuffer::OperationImpl>::operator->(
                             (shared_ptr<OperationBuffer::OperationImpl>*)&local_38);
            eastl::vector<shared_ptr<Operation>, eastl::allocator>::push_back(pvVar6, param_1);
            shared_ptr<OperationBuffer::OperationImpl_const>::operator=(
                (shared_ptr<OperationBuffer::OperationImpl_const>*)this, &local_38);
            local_38.~shared_ptr();
        }
    }

    // 0x100369d20, 160 bytes, placed by neighbouring functions
    // OperationBuffer::ClearCache() const
    void OperationBuffer::ClearCache() {
        long lVar1;
        ResolvedModel local_98;
        undefined8 local_20;
        undefined8 local_18;

        new (&local_20) std::initializer_list<OperationRecordEntry>();
        lVar1 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
            (shared_ptr<OperationBuffer::OperationImpl_const>*)this);
        eastl::vector<OperationRecordEntry, eastl::allocator>::operator=(
            (vector<OperationRecordEntry, eastl::allocator>*)(lVar1 + 32), local_20, local_18);
        new (&local_98) ResolvedModel();
        lVar1 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
            (shared_ptr<OperationBuffer::OperationImpl_const>*)this);
        ResolvedModel::operator=((ResolvedModel*)(lVar1 + 64), &local_98);
        local_98.~ResolvedModel();
        lVar1 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
            (shared_ptr<OperationBuffer::OperationImpl_const>*)this);
        *(undefined1*)(lVar1 + 208) = 0;
    }

    // 0x100369f30, 960 bytes, placed by __FILE__ string
    // OperationBuffer::Resolve(OperationBuffer const*) const
    ResolvedModel* OperationBuffer::Resolve(OperationBuffer* param_1) {
        Matrix44T MVar1;
        bool bVar2;
        char cVar3;
        long* plVar5;
        long lVar6;
        long lVar7;
        vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>* this_00;
        vector<shared_ptr<Operation>, eastl::allocator>* this_01;
        shared_ptr* psVar9;
        undefined8* puVar10;
        jag* this_02;
        shared_ptr* psVar11;
        ResolvedModel* this_03;
        ulong uVar12;
        undefined1 auVar13[16];
        ResolvedModel local_258;
        OperationRecordEntry local_1e8;
        ResolvedModel local_f8;
        undefined8 local_88;
        undefined8 uStack_80;
        undefined8 local_78;
        undefined8 uStack_70;
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58;
        ulong local_40;

        plVar5 = (long*)OSRenderCore_AudioThread::Instance();
        cVar3 = (((long)plVar5 + *(long*)(*plVar5 + -24)))->IsLogicThread();
        if (cVar3 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("OSRenderCore_LogicThread::Instance().IsLogicThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "Operation.cpp",
                      169, (char*)0);
        }
        lVar6 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
            (shared_ptr<OperationBuffer::OperationImpl_const>*)this);
        if (*(char*)(lVar6 + 208) != '\0')
            goto LAB_10036a261;
        lVar6 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
            (shared_ptr<OperationBuffer::OperationImpl_const>*)this);
        *(undefined1*)(lVar6 + 208) = 1;
        new (&local_f8) ResolvedModel();
        local_40 = 0;
        if ((param_1 == (OperationBuffer*)0) || (lVar6 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
                                                     (shared_ptr<OperationBuffer::OperationImpl_const>*)param_1),
                                                 *(char*)(lVar6 + 208) == '\0')) {
        LAB_10036a03c:
            uVar12 = local_40;
            while (true) {
                this_03 = (ResolvedModel*)this;
                this_00 = (vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>*)
                              shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
                                  (shared_ptr<OperationBuffer::OperationImpl_const>*)(ResolvedModel*)this);
                if (eastl::vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>::size(this_00) <= uVar12)
                    break;
                this_01 = (vector<shared_ptr<Operation>, eastl::allocator>*)
                              shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
                                  (shared_ptr<OperationBuffer::OperationImpl_const>*)this_03);
                psVar9 =
                    (shared_ptr*)eastl::vector<shared_ptr<Operation>, eastl::allocator>::operator[](this_01, uVar12);
                puVar10 = (undefined8*)shared_ptr<Operation>::operator->((shared_ptr<Operation>*)psVar9);
                (**(code**)*puVar10)(&local_258, puVar10, &local_f8, 0);
                lVar6 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
                    (shared_ptr<OperationBuffer::OperationImpl_const>*)this_03);
                new (&local_1e8) OperationRecordEntry(psVar9, &local_f8, &local_258);
                ((lVar6 + 32))->push_back(&local_1e8);
                local_1e8.~OperationRecordEntry();
                ResolvedModel::operator=(&local_f8, &local_258);
                uVar12 = uVar12 + 1;
                local_258.~ResolvedModel();
            }
            local_40 = uVar12;
            lVar6 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
                (shared_ptr<OperationBuffer::OperationImpl_const>*)this_03);
            ResolvedModel::operator=((ResolvedModel*)(lVar6 + 64), &local_f8);
            bVar2 = true;
            if ((param_1 != (OperationBuffer*)0) &&
                (lVar6 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
                     (shared_ptr<OperationBuffer::OperationImpl_const>*)param_1),
                 *(char*)(lVar6 + 208) != '\0')) {
                lVar6 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
                    (shared_ptr<OperationBuffer::OperationImpl_const>*)(ResolvedModel*)this);
                lVar7 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
                    (shared_ptr<OperationBuffer::OperationImpl_const>*)param_1);
                this_02 = (jag*)((lVar6 + 64))->GetModel();
                this_03 = (ResolvedModel*)(lVar7 + 64);
                auVar13 = this_03->GetModel();
                if (operator==(this_02, auVar13._0_8_, auVar13._8_8_)) {
                    lVar6 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
                        (shared_ptr<OperationBuffer::OperationImpl_const>*)(ResolvedModel*)this);
                    psVar9 = (shared_ptr*)((lVar6 + 64))->GetModel();
                    lVar6 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
                        (shared_ptr<OperationBuffer::OperationImpl_const>*)param_1);
                    psVar11 = (shared_ptr*)((lVar6 + 64))->TryGetUploadableModel();
                    lVar6 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
                        (shared_ptr<OperationBuffer::OperationImpl_const>*)(ResolvedModel*)this);
                    shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
                        (shared_ptr<OperationBuffer::OperationImpl_const>*)(ResolvedModel*)this);
                    this_03 = (ResolvedModel*)((lVar6 + 64))->GetAnimationState();
                    local_88.GetLocalTransform();
                    MVar1._8_8_ = uStack_80;
                    MVar1._0_8_ = local_88;
                    MVar1._16_8_ = local_78;
                    MVar1._24_8_ = uStack_70;
                    MVar1._32_8_ = local_68;
                    MVar1._40_8_ = uStack_60;
                    MVar1._48_8_ = local_58;
                    new (&local_1e8) ResolvedModel(psVar9, psVar11, this_03, MVar1);
                    lVar6 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
                        (shared_ptr<OperationBuffer::OperationImpl_const>*)(ResolvedModel*)this);
                    ResolvedModel::operator=((ResolvedModel*)(lVar6 + 64), (ResolvedModel*)&local_1e8);
                    local_1e8.~ResolvedModel();
                }
            }
        } else {
            lVar6 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
                (shared_ptr<OperationBuffer::OperationImpl_const>*)param_1);
            cVar3 = ResolveAgainstPrevious((OperationBuffer*)(ResolvedModel*)this, &local_f8, &local_40,
                                           (vector*)(lVar6 + 32));
            if (cVar3 == '\0')
                goto LAB_10036a03c;
            lVar6 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
                (shared_ptr<OperationBuffer::OperationImpl_const>*)param_1);
            lVar7 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
                (shared_ptr<OperationBuffer::OperationImpl_const>*)(ResolvedModel*)this);
            ResolvedModel::operator=((ResolvedModel*)(lVar7 + 64), (ResolvedModel*)(lVar6 + 64));
            lVar6 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
                (shared_ptr<OperationBuffer::OperationImpl_const>*)(ResolvedModel*)this);
            this_03 = (ResolvedModel*)(lVar6 + 64);
            bVar2 = false;
        }
        local_f8.~ResolvedModel();
        this = (OperationBuffer*)(ResolvedModel*)this;
        if (!bVar2) {
            return this_03;
        }
    LAB_10036a261:
        lVar6 = shared_ptr<OperationBuffer::OperationImpl_const>::operator->(
            (shared_ptr<OperationBuffer::OperationImpl_const>*)this);
        return (ResolvedModel*)(lVar6 + 64);
    }

    // 0x10036ab30, 1104 bytes, placed by __FILE__ string
    // CombineOperation::ApplyFresh(ResolvedModel const&, OperationRecordEntry const*) const
    ResolvedModel* CombineOperation::ApplyFresh(ResolvedModel* param_1, OperationRecordEntry* param_2) {
        Matrix44T MVar1;
        Matrix44T MVar2;
        shared_ptr<jag::graphics::Model>* psVar3;
        undefined8 uVar4;
        Model* pMVar5;
        shared_ptr* psVar6;
        MaterialManager* pMVar7;
        ulong uVar8;
        long lVar9;
        OperationBuffer* this_00;
        OperationBuffer* pOVar10;
        ResolvedModel* pRVar11;
        ulong uVar12;
        vector<rseven::ModelFace, eastl::allocator>* this_01;
        OperationRecordEntry* in_RCX;
        CombineOperation* this_02;
        ResolvedModel local_228;
        undefined1 local_1b8[128];
        undefined1 local_138[72];
        undefined8 uStack_f0;
        undefined8 local_e8;
        undefined8 uStack_e0;
        undefined8 local_d8;
        undefined8 uStack_d0;
        undefined8 local_c8;
        ushort* puStack_c0;
        Operation local_b0;
        vector<shared_ptr<jag::graphics::Model>, eastl::allocator> local_a0[32];
        OperationRecordEntry* local_80;
        CombineOperation* local_78;
        shared_ptr local_70;
        OSRenderCore_LogicThread_RSeven* local_60;
        Operation local_50;
        ResolvedModel* local_40;
        ushort local_36[3];

        local_80 = in_RCX;
        local_60 = (OSRenderCore_LogicThread_RSeven*)Instance();
        psVar3 = (shared_ptr<jag::graphics::Model>*)param_2->GetModel();
        uVar4 = shared_ptr<jag::graphics::Model>::operator*(psVar3);
        local_40 = param_1;
        local_50.CloneModel(param_1, uVar4, 1);
        new (&local_70) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        pMVar5 = (Model*)local_50.end();
        new ((local_1b8 + 40)) jag::graphics::ModelCombineHelper(pMVar5, true);
        local_36[0] = 0;
        local_36[1] = 0;
        local_36[2] = 0;
        pMVar5 = (Model*)shared_ptr<jag::graphics::Model>::operator*((shared_ptr<jag::graphics::Model>*)&local_50);
        SetModelExternalId(pMVar5, 1);
        pMVar5 = (Model*)shared_ptr<jag::graphics::Model>::operator*((shared_ptr<jag::graphics::Model>*)&local_50);
        psVar6 = (shared_ptr*)param_2->GetAnimationState();
        local_138->GetLocalTransform();
        MVar1._8_8_ = local_138._8_8_;
        MVar1._0_8_ = local_138._0_8_;
        MVar1._16_8_ = local_138._16_8_;
        MVar1._24_8_ = local_138._24_8_;
        MVar1._32_8_ = local_138._32_8_;
        MVar1._40_8_ = local_138._40_8_;
        MVar1._48_8_ = local_138._48_8_;
        UpdateTransformAndAnimationState((CombineOperation*)local_40, pMVar5, &local_70, psVar6, MVar1, local_36,
                                         local_36 + 1, (ushort*)local_138._56_8_);
        pMVar5 = (Model*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)&local_50);
        pMVar7 = (MaterialManager*)local_60->GetMaterialManagerForCombining();
        pMVar5->SetupInitialMaterials(pMVar7);
        GetTextureAtlasQuality((CombineOperation*)local_1b8);
        eastl::vector<shared_ptr<jag::graphics::Model>, eastl::allocator>::vector(local_a0);
        this_02 = (CombineOperation*)&local_40->field_16;
        uVar8 = this_02->size();
        eastl::vector<shared_ptr<jag::graphics::Model>, eastl::allocator>::reserve(local_a0, uVar8);
        lVar9 = this_02->size();
        if (lVar9 != 0) {
            uVar8 = 0;
            local_78 = this_02;
            do {
                this_00 = (OperationBuffer*)eastl::vector<OperationBuffer, eastl::allocator>::operator[](
                    (vector<OperationBuffer, eastl::allocator>*)this_02, uVar8);
                pOVar10 = (OperationBuffer*)GetPreviousBuffer(this_02, local_80, uVar8);
                pRVar11 = (ResolvedModel*)this_00->Resolve(pOVar10);
                new (&local_228) ResolvedModel(pRVar11);
                psVar3 = (shared_ptr<jag::graphics::Model>*)local_228.GetModel();
                uVar4 = shared_ptr<jag::graphics::Model>::operator*(psVar3);
                local_b0.CloneModel(local_40, uVar4, 1);
                pMVar5 =
                    (Model*)shared_ptr<jag::graphics::Model>::operator*((shared_ptr<jag::graphics::Model>*)&local_b0);
                psVar6 = (shared_ptr*)local_228.GetAnimationState();
                ((local_138 + 64))->GetLocalTransform();
                MVar2._8_8_ = uStack_f0;
                MVar2._0_8_ = local_138._64_8_;
                MVar2._16_8_ = local_e8;
                MVar2._24_8_ = uStack_e0;
                MVar2._32_8_ = local_d8;
                MVar2._40_8_ = uStack_d0;
                MVar2._48_8_ = local_c8;
                UpdateTransformAndAnimationState((CombineOperation*)local_40, pMVar5, &local_70, psVar6, MVar2,
                                                 local_36, local_36 + 1, puStack_c0);
                pMVar5 =
                    (Model*)shared_ptr<jag::graphics::Model>::operator*((shared_ptr<jag::graphics::Model>*)&local_b0);
                SetModelExternalId(pMVar5, (int)uVar8 + 2);
                pMVar5 =
                    (Model*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)&local_b0);
                pMVar7 = (MaterialManager*)local_60->GetMaterialManagerForCombining();
                pMVar5->SetupInitialMaterials(pMVar7);
                pMVar5 = (Model*)local_b0.end();
                ((local_1b8 + 40))->Combine(pMVar5, local_1b8, false);
                eastl::vector<shared_ptr<jag::graphics::Model>, eastl::allocator>::push_back(local_a0,
                                                                                             (shared_ptr*)&local_b0);
                local_b0.~shared_ptr();
                local_228.~ResolvedModel();
                this_02 = local_78;
                uVar8 = uVar8 + 1;
                uVar12 = local_78->size();
            } while (uVar8 < uVar12);
        }
        ((local_1b8 + 40))->FinishCombine();
        pMVar5 = (Model*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)&local_50);
        pMVar5->UpdateAABB();
        this_01 = (vector<rseven::ModelFace, eastl::allocator>*)
                      shared_ptr<eastl::vector<CombineOperation::LabelShiftRange, eastl::allocator>>::operator->(
                          (shared_ptr<eastl::vector<CombineOperation::LabelShiftRange, eastl::allocator>>*)&local_40
                              ->field_48);
        lVar9 = eastl::vector<rseven::ModelFace, eastl::allocator>::size(this_01);
        if (lVar9 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_labelShiftRanges->size() > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "Operation.cpp",
                      440, (char*)0);
        }
        new (this) ResolvedModel((shared_ptr*)&local_50, &local_70, *(Matrix44T*)PTR_IDENTITY_100ee6730);
        eastl::vector<shared_ptr<jag::graphics::Model>, eastl::allocator>::~vector(local_a0);
        ((local_1b8 + 40))->~ModelCombineHelper();
        local_70.~shared_ptr();
        local_50.~shared_ptr();
        return (ResolvedModel*)this;
    }

    // 0x10036df00, 112 bytes, placed by __FILE__ string
    // RecolourOperation::Append(Operation&&)
    void RecolourOperation::Append(Operation* param_1) {
        long lVar1;
        pair<unsigned short, unsigned short> local_28[8];

        lVar1 = ((param_1 + 1))->size();
        if (lVar1 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("toAdd.m_moreColours.size() == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "Operation.cpp",
                      919, (char*)0);
        }
        std::pair<unsigned short, unsigned short>::pair<true, false>(local_28, (ushort*)&param_1->field_12,
                                                                     (ushort*)&param_1->field_14);
        (&field_16, (pair*)local_28)->push_back();
    }

    // 0x10036dfe0, 160 bytes, placed by neighbouring functions
    // RecolourOperation::MapBatch(std::unique_ptr<jag::graphics::GeometryBatchInstance, MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&) const
    /* RecolourOperation::MapBatch(std::unique_ptr<jag::graphics::GeometryBatchInstance,
   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&) const */

    void RecolourOperation::MapBatch(unique_ptr* param_1) {
        ushort uVar1;
        ushort uVar2;
        GeometryBatchInstance* pGVar3;
        GeometryBatch* pGVar4;
        ushort* puVar5;
        ushort* puVar6;

        pGVar3 =
            (GeometryBatchInstance*)
                std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::
                operator->((
                    unique_ptr<jag::graphics::GeometryBatchInstance,
                               MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)param_1);
        pGVar4 = (GeometryBatch*)pGVar3->GetGeometryBatch();
        pGVar4->RecolourSingle(field_12, field_14);
        puVar5 = (ushort*)(&field_16)->HeapBeginPtr();
        puVar6 = (ushort*)(&field_16)->end();
        for (; puVar5 != puVar6; puVar5 = puVar5 + 2) {
            uVar1 = *puVar5;
            uVar2 = puVar5[1];
            pGVar3 =
                (GeometryBatchInstance*)
                    std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                    MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::
                    operator->(
                        (unique_ptr<jag::graphics::GeometryBatchInstance,
                                    MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                            param_1);
            pGVar4 = (GeometryBatch*)pGVar3->GetGeometryBatch();
            pGVar4->RecolourSingle(uVar1, uVar2);
        }
    }

    // 0x10036e080, 64 bytes, placed by neighbouring functions
    // RecolourOperation::IsEqual(Operation const&) const
    undefined2 RecolourOperation::IsEqual(Operation* param_1) {
        undefined2 uVar1;

        if ((param_1->GetPos() == 7) && (field_12 == *(ushort*)&param_1->field_12)) {
            uVar1 = CONCAT11((char)(field_14 >> 8), field_14 == *(ushort*)&param_1->field_14);
        } else {
            uVar1 = 0;
        }
        return uVar1;
    }

    // 0x10036e0c0, 48 bytes, placed by neighbouring functions
    // RetextureOperation::MapBatch(std::unique_ptr<jag::graphics::GeometryBatchInstance, MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&) const
    /* RetextureOperation::MapBatch(std::unique_ptr<jag::graphics::GeometryBatchInstance,
   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&) const */

    void RetextureOperation::MapBatch(unique_ptr* param_1) {
        GeometryBatchInstance* this_00;

        this_00 =
            (GeometryBatchInstance*)
                std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::
                operator->((
                    unique_ptr<jag::graphics::GeometryBatchInstance,
                               MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)param_1);
        this_00->RematerialSingle(field_12, field_14);
    }

    // 0x10036e0f0, 64 bytes, placed by neighbouring functions
    // RetextureOperation::IsEqual(Operation const&) const
    undefined2 RetextureOperation::IsEqual(Operation* param_1) {
        undefined2 uVar1;

        if ((param_1->GetPos() == 8) && (field_12 == *(ushort*)&param_1->field_12)) {
            uVar1 = CONCAT11((char)(field_14 >> 8), field_14 == *(ushort*)&param_1->field_14);
        } else {
            uVar1 = 0;
        }
        return uVar1;
    }

    // 0x10036e130, 128 bytes, placed by neighbouring functions
    // MirrorOperation::ApplyAABB(jag::math::AABB const&) const
    AABB* MirrorOperation::ApplyAABB(AABB* param_1) {
        AABB* in_RDX;
        Matrix44T local_88;
        Matrix33T<float> local_48[40];

        jag::math::AABB::AABB(param_1, in_RDX);
        jag::math::Matrix33T<float>::Matrix33T(local_48, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, -1.0);
        new (&local_88) jag::math::Matrix44T<float>(local_48, PTR_ZERO_100ee66e8);
        param_1->Transform(&local_88);
        return param_1;
    }

    // 0x10036e1b0, 32 bytes, placed by neighbouring functions
    // MirrorOperation::MapBatch(std::unique_ptr<jag::graphics::GeometryBatchInstance, MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&) const
    /* MirrorOperation::MapBatch(std::unique_ptr<jag::graphics::GeometryBatchInstance,
   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&) const */

    void MirrorOperation::MapBatch(unique_ptr* param_1) {
        GeometryBatchInstance* this_00;
        GeometryBatch* this_01;

        this_00 =
            (GeometryBatchInstance*)
                std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::
                operator->((
                    unique_ptr<jag::graphics::GeometryBatchInstance,
                               MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)param_1);
        this_01 = (GeometryBatch*)this_00->GetGeometryBatch();
        this_01->MirrorZ();
    }

    // 0x10036e1d0, 32 bytes, placed by neighbouring functions
    // MirrorOperation::IsEqual(Operation const&) const
    bool MirrorOperation::IsEqual(Operation* param_1) {
        return param_1->GetPos() == 6;
    }

    // 0x10036e1f0, 288 bytes, placed by neighbouring functions
    // BatchMapBaseOperation::ApplyFresh(ResolvedModel const&, OperationRecordEntry const*) const
    BatchMapBaseOperation* BatchMapBaseOperation::ApplyFresh(ResolvedModel* param_1, OperationRecordEntry* param_2) {
        Matrix44T MVar1;
        shared_ptr<jag::graphics::Model>* this_00;
        undefined8 uVar2;
        Model* this_01;
        Layout* this_02;
        long lVar3;
        long lVar4;
        shared_ptr* psVar5;
        undefined8 local_88;
        undefined8 uStack_80;
        undefined8 local_78;
        undefined8 uStack_70;
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58;
        Operation local_40;

        this_00 = (shared_ptr<jag::graphics::Model>*)param_2->GetModel();
        uVar2 = shared_ptr<jag::graphics::Model>::operator*(this_00);
        local_40.CloneModel(param_1, uVar2, 1);
        this_01 = (Model*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)&local_40);
        this_02 = (Layout*)this_01->GetBatchList();
        lVar3 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_02);
        lVar4 = this_02->end();
        for (; lVar3 != lVar4; lVar3 = lVar3 + 8) {
            (**(code**)(param_1->field_0 + 48))(param_1, lVar3);
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
        new (this) ResolvedModel((shared_ptr*)&local_40, psVar5, MVar1);
        local_40.~shared_ptr();
        return this;
    }

    // 0x10036e310, 1168 bytes, placed by neighbouring functions
    // HillSkewOperation::CanApproximate(ResolvedModel const&) const
    undefined8 HillSkewOperation::CanApproximate(ResolvedModel* param_1) {
        bool bVar2;
        int iVar3;
        shared_ptr<jag::graphics::Model>* this_00;
        NXTPixToolkit* pNVar4;
        AABB* pAVar5;
        Model* this_01;
        undefined7 extraout_var;
        ulong uVar6;
        undefined7 extraout_var_00;
        undefined8 uVar7;
        ColourHSL* this_02;
        LocationData* this_03;
        ResolvedModel* this_04;
        float fVar8;
        undefined1 local_d8[32];
        undefined8 local_b8;
        undefined4 local_b0;
        float local_ac;
        undefined1 local_a8[12];
        undefined1 local_9c[16];
        float local_8c;
        float local_88;
        ColourHSL local_84;
        undefined1 local_68[16];
        int local_58;
        undefined1 local_50[16];
        int local_40;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (shared_ptr<jag::graphics::Model>*)param_1->GetModel();
        pNVar4 = (NXTPixToolkit*)shared_ptr<jag::graphics::Model>::operator->(this_00);
        pAVar5 = (AABB*)pNVar4->GetScreen();
        new (local_d8) jag::math::AABB(pAVar5);
        if (local_d8->IsValid() == '\0') {
            this_01 = (Model*)shared_ptr<jag::graphics::Model>::operator->(this_00);
            this_01->UpdateAABB();
            pNVar4 = (NXTPixToolkit*)shared_ptr<jag::graphics::Model>::operator->(this_00);
            pAVar5 = (AABB*)pNVar4->GetScreen();
            jag::math::AABB::operator=((AABB*)local_d8, pAVar5);
        }
        this_02 = (ColourHSL*)local_68;
        local_ac = (float)jag::math::AABB::GetMinX();
        fVar8 = (float)local_d8->GetMinZ();
        jag::math::ColourHSL::ColourHSL(this_02, local_ac, 0.0, fVar8);
        local_ac = (float)jag::math::AABB::GetMinX();
        fVar8 = (float)local_d8->GetMaxZ();
        new ((local_68 + 12)) jag::math::ColourHSL(local_ac, 0.0, fVar8);
        local_ac = (float)jag::math::AABB::GetMaxX();
        fVar8 = (float)local_d8->GetMinZ();
        new (local_50) jag::math::ColourHSL(local_ac, 0.0, fVar8);
        local_ac = (float)jag::math::AABB::GetMaxX();
        fVar8 = (float)local_d8->GetMaxZ();
        new ((local_50 + 12)) jag::math::ColourHSL(local_ac, 0.0, fVar8);
        this_04 = (ResolvedModel*)local_a8;
        this_04->GetLocalTransform();
        local_d8->Reset();
        do {
            local_b8 = jag::math::operator*((Matrix44T*)this_04, (Vector3T*)this_02);
            local_b0 = 0;
            this_02->SetXYZ((Vector3T*)&local_b8);
            this_02->field_0 = (float)field_12 + this_02->field_0;
            this_02->field_8 = (float)field_20 + this_02->field_8;
            local_d8->AddPoint(this_02);
            this_02 = (ColourHSL*)&this_02->field_12;
        } while (this_02 != (ColourHSL*)&local_38);
        local_ac = (float)jag::math::AABB::GetMinX();
        fVar8 = (float)local_d8->GetMinZ();
        new (this_04) jag::math::ColourHSL(local_ac, 0.0, fVar8);
        local_ac = (float)jag::math::AABB::GetMinX();
        fVar8 = (float)local_d8->GetMaxZ();
        new (local_9c) jag::math::ColourHSL(local_ac, 0.0, fVar8);
        local_ac = (float)jag::math::AABB::GetMaxX();
        fVar8 = (float)local_d8->GetMinZ();
        new ((local_9c + 12)) jag::math::ColourHSL(local_ac, 0.0, fVar8);
        local_ac = (float)jag::math::AABB::GetMaxX();
        fVar8 = (float)local_d8->GetMaxZ();
        new (&local_84) jag::math::ColourHSL(local_ac, 0.0, fVar8);
        do {
            iVar3 = ClientBuild::GetGroundHeightAtFinePos(field_24, (int)*(float*)&this_04->field_0,
                                                          (int)*(float*)&this_04->field_8);
            *(float*)((long)&this_04->field_0 + 4) = (float)-iVar3;
            this_04 = (ResolvedModel*)((long)&this_04->field_8 + 4);
        } while (this_04 != (ResolvedModel*)&local_84.field_12);
        this_03 = (LocationData*)local_68;
        rs2lib::worldmap::LocationData::LocationData(this_03, field_12, 0, field_20);
        new ((local_68 + 12)) rs2lib::worldmap::LocationData(field_12, 0, field_20 + 16);
        new (local_50) rs2lib::worldmap::LocationData(field_12 + 16, 0, field_20);
        new ((local_50 + 12)) rs2lib::worldmap::LocationData(field_12 + 16, 0, field_20 + 16);
        do {
            iVar3 = ClientBuild::GetGroundHeightAtFinePos(field_24, this_03->field_0, this_03->field_8);
            uVar6 = (ulong)(uint)-iVar3;
            this_03->field_4 = -iVar3;
            this_03 = (LocationData*)&this_03->field_12;
        } while (this_03 != (LocationData*)&local_38);
        if (local_84.field_8 - local_88 == 0.0) {
        LAB_10036e706:
            if (local_84.field_0 - (float)local_9c._0_4_ != 0.0) {
                bVar2 = jag::math::EqualAbs<float>(
                    (float)((local_50._4_4_ + local_40) - (local_58 + local_68._4_4_)) * 0.03125,
                    (((local_84.field_4 + local_8c) - ((float)local_9c._4_4_ + (float)local_a8._4_4_)) * 0.5) /
                        (local_84.field_0 - (float)local_9c._0_4_),
                    0.001);
                uVar6 = CONCAT71(extraout_var_00, bVar2);
                if (!bVar2)
                    goto LAB_10036e772;
            }
            uVar7 = CONCAT71((int7)(uVar6 >> 8), 1);
        } else {
            bVar2 = jag::math::EqualAbs<float>(
                (float)(((local_40 + local_58) - local_50._4_4_) - local_68._4_4_) * 0.03125,
                (((local_84.field_4 + (float)local_9c._4_4_) - (local_8c + (float)local_a8._4_4_)) * 0.5) /
                    (local_84.field_8 - local_88),
                0.001);
            uVar6 = CONCAT71(extraout_var, bVar2);
            if (bVar2)
                goto LAB_10036e706;
        LAB_10036e772:
            uVar7 = 0;
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar7;
    }

    // 0x10036e9d0, 400 bytes, placed by neighbouring functions
    // HillSkewOperation::Apply(ResolvedModel const&, OperationRecordEntry const*) const
    HillSkewOperation* HillSkewOperation::Apply(ResolvedModel* param_1, OperationRecordEntry* param_2) {
        Matrix44T MVar1;
        shared_ptr* this_00;
        undefined1 local_f8[64];
        undefined1 local_b8[64];
        shared_ptr* local_38;

        this_00 = (shared_ptr*)param_2->GetAnimationState();
        if (shared_ptr::operator_cast_to_bool(this_00)) {
        LAB_10036ea08:
            local_38 = (shared_ptr*)param_2->GetModel();
            local_b8->GetLocalTransform();
            CreateSkewModelMatrixApproximate();
            jag::math::operator*((math*)local_f8, (Matrix44T*)local_b8, (Matrix44T*)(local_b8 + 64));
            MVar1._8_8_ = local_f8._8_8_;
            MVar1._0_8_ = local_f8._0_8_;
            MVar1._16_8_ = local_f8._16_8_;
            MVar1._24_8_ = local_f8._24_8_;
            MVar1._32_8_ = local_f8._32_8_;
            MVar1._40_8_ = local_f8._40_8_;
            MVar1._48_8_ = local_f8._48_8_;
            new (this) ResolvedModel(local_38, this_00, MVar1);
        } else {
            if ((*(int*)((long)&param_1->field_24 + 4) == 0) && (*(char*)&param_1->m_animationState == '\0')) {
                if (CanApproximate((HillSkewOperation*)param_1, (ResolvedModel*)param_2) != '\0')
                    goto LAB_10036ea08;
            }
            SkewModelExact((ResolvedModel*)local_b8);
            new ((local_b8 + 64)) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            new (this) ResolvedModel(local_b8, (shared_ptr*)(local_b8 + 64), *(Matrix44T*)PTR_IDENTITY_100ee6730);
            ((local_b8 + 64))->~shared_ptr();
            local_b8->~shared_ptr();
        }
        return this;
    }

    // 0x10036eb60, 368 bytes, placed by neighbouring functions
    // HillSkewOperation::CreateSkewModelMatrixApproximate() const
    Matrix44T<float>* HillSkewOperation::CreateSkewModelMatrixApproximate() {
        Layout* this;
        int iVar1;
        uint uVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        vector* pvVar6;
        int* piVar7;
        type* in_RSI;
        type* ptVar8;
        Matrix44T<float>* in_RDI;
        Matrix33T<float> local_88[40];
        ColourHSL local_60;
        ColourHSL local_50;
        Matrix44T<float>* local_40;
        undefined8 local_38;

        iVar1 = *(int*)(in_RSI + 24);
        this = (Layout*)(in_RSI + 12);
        local_40 = in_RDI;
        pvVar6 = eastl::string::Layout::SSOBeginPtr(this, in_RSI);
        uVar2 = *(uint*)pvVar6;
        piVar7 = (int*)second();
        ptVar8 = (type*)(ulong)uVar2;
        local_38 = ClientBuild::GetGroundHeightAtFinePos(iVar1, uVar2, *piVar7);
        iVar1 = *(int*)(in_RSI + 24);
        pvVar6 = eastl::string::Layout::SSOBeginPtr(this, ptVar8);
        iVar5 = *(int*)pvVar6;
        piVar7 = (int*)second();
        ptVar8 = (type*)(ulong)(iVar5 + 16U);
        iVar3 = ClientBuild::GetGroundHeightAtFinePos(iVar1, iVar5 + 16U, *piVar7);
        iVar1 = *(int*)(in_RSI + 24);
        pvVar6 = eastl::string::Layout::SSOBeginPtr(this, ptVar8);
        uVar2 = *(uint*)pvVar6;
        piVar7 = (int*)second();
        ptVar8 = (type*)(ulong)uVar2;
        iVar4 = ClientBuild::GetGroundHeightAtFinePos(iVar1, uVar2, *piVar7 + 16);
        iVar1 = *(int*)(in_RSI + 24);
        pvVar6 = eastl::string::Layout::SSOBeginPtr(this, ptVar8);
        iVar5 = *(int*)pvVar6;
        piVar7 = (int*)second();
        iVar5 = ClientBuild::GetGroundHeightAtFinePos(iVar1, iVar5 + 16, *piVar7 + 16);
        iVar1 = (int)local_38;
        local_38 = CONCAT44(local_38._4_4_, (float)((iVar3 + iVar1) - (iVar4 + iVar5)) * 0.03125);
        new (&local_60) jag::math::ColourHSL(1.0, (float)(((iVar1 + iVar4) - iVar3) - iVar5) * 0.03125, 0.0);
        new (&local_50) jag::math::ColourHSL(0.0, (float)local_38, 1.0);
        jag::math::Matrix33T<float>::Matrix33T(local_88, (Vector3T*)&local_60, (Vector3T*)PTR_UP_100ee66d0,
                                               (Vector3T*)&local_50);
        jag::math::Matrix44T<float>::Matrix44T(local_40, local_88, (Vector3T*)PTR_ZERO_100ee66e8);
        return local_40;
    }

    // 0x10036ecd0, 608 bytes, placed by neighbouring functions
    // HillSkewOperation::SkewModelExact(ResolvedModel const&) const
    ResolvedModel* HillSkewOperation::SkewModelExact(ResolvedModel* param_1) {
        shared_ptr<jag::graphics::Model>* this;
        Model* pMVar1;
        NXTPixToolkit* pNVar2;
        AABB* pAVar3;
        Layout* this_00;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_01;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar4;
        GeometryBatchInstance* this_02;
        GeometryBatch* this_03;
        ResolvedModel* in_RDX;
        long in_RSI;
        HillSkewBuildInput* pHVar5;
        int iVar6;
        int iVar7;
        float fVar8;
        float fVar9;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* local_e0;
        ResolvedModel* local_d8;
        float local_d0;
        float local_cc;
        undefined1 local_c8[16];
        int local_b8;
        int local_b4;
        int local_b0;
        int local_ac;
        int local_a8;
        int local_a4;
        int local_a0;
        function<jag::math::Vector3T<int>(int)> local_98[48];
        function<void(int, int)> local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this = (shared_ptr<jag::graphics::Model>*)in_RDX->GetModel();
        shared_ptr<jag::graphics::Model>::operator*(this);
        param_1->CloneModel();
        local_d8 = param_1;
        pMVar1 = (Model*)shared_ptr<jag::graphics::Model>::operator*((shared_ptr<jag::graphics::Model>*)param_1);
        TransformStaticModel(in_RDX, pMVar1);
        pMVar1 = (Model*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)param_1);
        pMVar1->UpdateAABB();
        pNVar2 =
            (NXTPixToolkit*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)param_1);
        pAVar3 = (AABB*)pNVar2->GetScreen();
        new (local_c8) HillSkewBuildInput();
        local_c8._0_4_ = *(int*)(in_RSI + 24);
        jag::math::Vector3T<int>::operator=((Vector3T<int>*)(local_c8 + 4), (Vector3T*)(in_RSI + 12));
        local_b8 = *(int*)(in_RSI + 28);
        local_d0 = (float)jag::math::AABB::GetMinX();
        local_cc = (float)jag::math::AABB::GetMaxX();
        fVar8 = (float)pAVar3->GetMinZ();
        iVar6 = (int)local_cc;
        iVar7 = (int)local_d0;
        fVar9 = (float)pAVar3->GetMaxZ();
        local_a8 = (int)fVar9;
        local_b4 = iVar7;
        local_b0 = iVar6;
        local_ac = (int)fVar8;
        pNVar2 =
            (NXTPixToolkit*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)param_1);
        pAVar3 = (AABB*)pNVar2->GetScreen();
        fVar8 = (float)pAVar3->GetHeight();
        local_a4 = (int)fVar8;
        pMVar1 = (Model*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)param_1);
        this_00 = (Layout*)pMVar1->GetBatchList();
        this_01 = (unique_ptr<jag::graphics::GeometryBatchInstance,
                              MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_00);
        puVar4 =
            (unique_ptr<jag::graphics::GeometryBatchInstance,
                        MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)this_00->end();
        if (this_01 != puVar4) {
            do {
                this_02 = (GeometryBatchInstance*)
                              std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                              MakeUniquePool<jag::graphics::GeometryBatchInstance,
                                                             3072>::UniquePoolDeleter>::operator->(this_01);
                this_03 = (GeometryBatch*)this_02->GetGeometryBatch();
                local_a0 = this_03->GetVertexCount();
                local_e0 = this_01;
                std::function<jag::math::Vector3T<int>(int)>::operator=(local_98, (__12*)&local_e0);
                pHVar5 = (HillSkewBuildInput*)&local_e0;
                local_e0 = this_01;
                std::function<void(int, int)>::operator=(local_68, (__13*)&local_e0);
                local_c8->PerformHillSkew(pHVar5);
                this_01 = this_01 + 8;
            } while (this_01 != puVar4);
        }
        local_c8->~HillSkewBuildInput();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return local_d8;
    }

    // 0x10036ef30, 80 bytes, placed by neighbouring functions
    // HillSkewOperation::ApplyAABB(jag::math::AABB const&) const
    AABB* HillSkewOperation::ApplyAABB(AABB* param_1) {
        AABB* in_RDX;
        Matrix44T local_68;

        jag::math::AABB::AABB(param_1, in_RDX);
        CreateSkewModelMatrixApproximate();
        param_1->Transform(&local_68);
        return param_1;
    }

    // 0x10036ef80, 80 bytes, placed by neighbouring functions
    // HillSkewOperation::IsEqual(Operation const&) const
    undefined4 HillSkewOperation::IsEqual(Operation* param_1) {
        bool bVar1;

        if (((param_1->GetPos() == 4) &&
             (bVar1 = jag::math::operator==((Vector3T*)&field_12, (Vector3T*)&param_1->field_12), bVar1)) &&
            (field_24 == param_1[1].field_8)) {
            return CONCAT31((int3)((uint)field_28 >> 8), field_28 == *(int*)&param_1[1].field_12);
        }
        return 0;
    }

    // 0x10036efd0, 192 bytes, placed by __FILE__ string
    // TransformStaticModel(ResolvedModel const&, jag::graphics::Model&)
    void TransformStaticModel(ResolvedModel* param_1, Model* param_2) {
        bool bVar1;
        shared_ptr* this;
        undefined1 local_68[72];

        this = (shared_ptr*)param_1->GetAnimationState();
        bVar1 = shared_ptr::operator_cast_to_bool(this);
        if (bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("!input.GetAnimationState()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "Operation.cpp",
                      989, "Cannot transform an animated model.");
        }
        local_68->GetLocalTransform();
        bVar1 = jag::math::operator!=((Matrix44T*)local_68, (Matrix44T*)PTR_IDENTITY_100ee6730);
        if (bVar1) {
            param_2->StartTransform();
            local_68->GetLocalTransform();
            param_2->Transform(local_68);
            local_68->GetLocalTransform();
            jag::graphics::Model::TransformNormals((Matrix44T*)param_2, SUB81((ResolvedModel*)local_68, 0));
            param_2->EndTransform(true);
        }
    }

} // namespace jag::oldscape::dash3d
