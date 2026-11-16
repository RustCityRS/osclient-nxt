// libs/game/runetek5/assetbuilder/jobs/buildmodel/BuildModelWorker.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x1006458c0, 32 bytes, inline, placed by debug map only (low confidence)
    // game::BuildFunctionRequestData* placement_new<game::BuildFunctionRequestData>(void*)
    BuildFunctionRequestData* placement_new<game::BuildFunctionRequestData>(void* param_1) {
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob::OldscapeAnimCurveLoadJob(
            param_1);
        return param_1;
    }

    // 0x1006458e0, 32 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildFunctionRequestData>* placement_new<BucketRefCounter<game::BuildFunctionRequestData>, managed_ptr_counter_and_data<BucketRefCounter<game::BuildFunctionRequestData>, game::BuildFunctionRequestData>*&, game::BuildFunctionRequestData*&>(void*, managed_ptr_counter_and_data<BucketRefCounter<game::BuildFunctionRequestData>, game::BuildFunctionRequestData>*&, game::BuildFunctionRequestData*&)
    BucketRefCounter* jag::placement_new<BucketRefCounter<game::BuildFunctionRequestData>,
                                         managed_ptr_counter_and_data<BucketRefCounter<game::BuildFunctionRequestData>,
                                                                      game::BuildFunctionRequestData>*&,
                                         game::BuildFunctionRequestData*&>(void* param_1,
                                                                           managed_ptr_counter_and_data** param_2,
                                                                           BuildFunctionRequestData** param_3) {
        BucketRefCounter<game::BuildFunctionRequestData>::BucketRefCounter(param_1, *param_2, *param_3, 0);
        return param_1;
    }

    // 0x100645900, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildFunctionRequestData>::BucketRefCounter(void*, game::BuildFunctionRequestData*, unsigned int): jumps straight to the base-object constructor

    // 0x100645910, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildFunctionRequestData>::BucketRefCounter(void*, game::BuildFunctionRequestData*, unsigned int)
    void BucketRefCounter<game::BuildFunctionRequestData>::BucketRefCounter(void* param_1,
                                                                            BuildFunctionRequestData* param_2,
                                                                            uint param_3) {
        undefined8 uVar1;

        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7118 + 16;
        *(void**)(this + 16) = param_1;
        *(BuildFunctionRequestData**)(this + 24) = param_2;
        uVar1 = this_thread::GetThreadID();
        *(undefined8*)(this + 32) = uVar1;
        *(uint*)(this + 40) = param_3;
    }

    // 0x100645970, 96 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildFunctionRequestData>::DeleteSelf()
    void BucketRefCounter<game::BuildFunctionRequestData>::DeleteSelf() {
        void* pvVar1;

        if (*(int*)(this + 40) != 4) {
            if (this_thread::GetThreadID() != *(long*)(this + 32)) {
                /* WARNING: Subroutine does not return */
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, (char*)0);
            }
        }
        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)(this);
        BucketManager::DeAllocate(pvVar1);
    }

    // 0x100645b70, 32 bytes, inline, placed by debug map only (low confidence)
    // game::BuildFunctionWorker* placement_new<game::BuildFunctionWorker>(void*)
    BuildFunctionWorker* placement_new<game::BuildFunctionWorker>(void* param_1) {
        game::BuildFunctionWorker::BuildFunctionWorker(param_1);
        return param_1;
    }

    // 0x100645b90, 32 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildFunctionWorker>* placement_new<BucketRefCounter<game::BuildFunctionWorker>, managed_ptr_counter_and_data<BucketRefCounter<game::BuildFunctionWorker>, game::BuildFunctionWorker>*&, game::BuildFunctionWorker*&>(void*, managed_ptr_counter_and_data<BucketRefCounter<game::BuildFunctionWorker>, game::BuildFunctionWorker>*&, game::BuildFunctionWorker*&)
    BucketRefCounter* jag::placement_new<
        BucketRefCounter<game::BuildFunctionWorker>,
        managed_ptr_counter_and_data<BucketRefCounter<game::BuildFunctionWorker>, game::BuildFunctionWorker>*&,
        game::BuildFunctionWorker*&>(void* param_1, managed_ptr_counter_and_data** param_2,
                                     BuildFunctionWorker** param_3) {
        BucketRefCounter<game::BuildFunctionWorker>::BucketRefCounter(param_1, *param_2, *param_3, 0);
        return param_1;
    }

    // 0x100645bb0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildFunctionWorker>::BucketRefCounter(void*, game::BuildFunctionWorker*, unsigned int): jumps straight to the base-object constructor

    // 0x100645bc0, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildFunctionWorker>::BucketRefCounter(void*, game::BuildFunctionWorker*, unsigned int)
    void BucketRefCounter<game::BuildFunctionWorker>::BucketRefCounter(void* param_1, BuildFunctionWorker* param_2,
                                                                       uint param_3) {
        undefined8 uVar1;

        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee70f0 + 16;
        *(void**)(this + 16) = param_1;
        *(BuildFunctionWorker**)(this + 24) = param_2;
        uVar1 = this_thread::GetThreadID();
        *(undefined8*)(this + 32) = uVar1;
        *(uint*)(this + 40) = param_3;
    }

    // 0x100645c20, 96 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildFunctionWorker>::DeleteSelf()
    void BucketRefCounter<game::BuildFunctionWorker>::DeleteSelf() {
        void* pvVar1;

        if (*(int*)(this + 40) != 4) {
            if (this_thread::GetThreadID() != *(long*)(this + 32)) {
                /* WARNING: Subroutine does not return */
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, (char*)0);
            }
        }
        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)(this);
        BucketManager::DeAllocate(pvVar1);
    }

    // 0x100645e00, 32 bytes, inline, placed by debug map only (low confidence)
    // game::BuildFunctionResultData* placement_new<game::BuildFunctionResultData>(void*)
    BuildFunctionResultData* placement_new<game::BuildFunctionResultData>(void* param_1) {
        game::BuildFunctionResultData::BuildFunctionResultData(param_1);
        return param_1;
    }

    // 0x100645e20, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildFunctionResultData, MakeSharedPool<game::BuildFunctionResultData, 32> >* placement_new<MakeSharedPoolRefCounter<game::BuildFunctionResultData, MakeSharedPool<game::BuildFunctionResultData, 32> >, MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData*&, game::BuildFunctionResultData*>(void*, MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData*&, game::BuildFunctionResultData*&&)
    MakeSharedPoolRefCounter* jag::placement_new<
        MakeSharedPoolRefCounter<game::BuildFunctionResultData, MakeSharedPool<game::BuildFunctionResultData, 32>>,
        MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData*&, game::BuildFunctionResultData*>(
        void* param_1, RefCounterAndData** param_2, BuildFunctionResultData** param_3) {
        MakeSharedPoolRefCounter<game::BuildFunctionResultData,
                                 MakeSharedPool<game::BuildFunctionResultData, 32>>::MakeSharedPoolRefCounter(param_1,
                                                                                                              *param_2,
                                                                                                              *param_3);
        return param_1;
    }

} // namespace jag

namespace jag::game {
    class BuildModelWorker : public ui::ComponentValueMixin // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~BuildModelWorker();
        virtual GetWorkerJobType() const;
        virtual Service(int);
        BuildModelWorker();

        // data members, from how the methods use this: 32 bytes, the first 8 are ComponentValueMixin
        shared_ptr field_8; // offset 8
        char _unknown_24[8];
    };

    // 0x100644fb0, 16 bytes, inline, placed by class name and debug map
    // BuildModelWorker::GetWorkerJobType() const
    undefined8 BuildModelWorker::GetWorkerJobType() {
        return 50;
    }

} // namespace jag::game
