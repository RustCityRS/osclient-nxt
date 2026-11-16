// libs/game/runetek5/assetbuilder/jobs/buildmodel/BuildModelWorker.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x1006458c0
    game::BuildFunctionRequestData* placement_new<game::BuildFunctionRequestData>(void* arg1) {
        new (arg1) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        return arg1;
    }

    // 0x1006458e0
    BucketRefCounter<game::BuildFunctionRequestData>*
    placement_new<BucketRefCounter<game::BuildFunctionRequestData>,
                  managed_ptr_counter_and_data<BucketRefCounter<game::BuildFunctionRequestData>,
                                               game::BuildFunctionRequestData>*&,
                  game::BuildFunctionRequestData*&>(
        void* arg1,
        managed_ptr_counter_and_data<BucketRefCounter<game::BuildFunctionRequestData>, game::BuildFunctionRequestData>*&
            arg2,
        game::BuildFunctionRequestData*& arg3) {
        new (arg1) BucketRefCounter<game::BuildFunctionRequestData>(arg2, arg3, 0);
        return arg1;
    }

    // 0x100645910
    BucketRefCounter<game::BuildFunctionRequestData>::BucketRefCounter(
        void* arg1, game::BuildFunctionRequestData* buildFunctionRequestData, unsigned int arg3)
        : ref_counter_base() {}

    // 0x100645970
    void BucketRefCounter<game::BuildFunctionRequestData>::DeleteSelf() {
        BucketRefCounter<game::BuildFunctionRequestData> _vtbl* pBVar1;

        if (*(int*)&this[5]._vptr != 4) {
            pBVar1 = (BucketRefCounter<game::BuildFunctionRequestData> _vtbl*)this_thread::GetThreadID();
            if (pBVar1 != this[4]._vptr) {
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, nullptr);
            }
        }
        pBVar1 = this[2]._vptr;
        std::destroy_at(this);
        BucketManager::DeAllocate(pBVar1);
    }

    // 0x100645b70
    game::BuildFunctionWorker* placement_new<game::BuildFunctionWorker>(void* arg1) {
        new (arg1) game::BuildFunctionWorker();
        return arg1;
    }

    // 0x100645b90
    BucketRefCounter<game::BuildFunctionWorker>* placement_new<
        BucketRefCounter<game::BuildFunctionWorker>,
        managed_ptr_counter_and_data<BucketRefCounter<game::BuildFunctionWorker>, game::BuildFunctionWorker>*&,
        game::BuildFunctionWorker*&>(
        void* arg1,
        managed_ptr_counter_and_data<BucketRefCounter<game::BuildFunctionWorker>, game::BuildFunctionWorker>*& arg2,
        game::BuildFunctionWorker*& arg3) {
        new (arg1) BucketRefCounter<game::BuildFunctionWorker>(arg2, arg3, 0);
        return arg1;
    }

    // 0x100645bc0
    BucketRefCounter<game::BuildFunctionWorker>::BucketRefCounter(void* arg1,
                                                                  game::BuildFunctionWorker* buildFunctionWorker,
                                                                  unsigned int arg3)
        : ref_counter_base() {}

    // 0x100645c20
    void BucketRefCounter<game::BuildFunctionWorker>::DeleteSelf() {
        BucketRefCounter<game::BuildFunctionWorker> _vtbl* pBVar1;

        if (*(int*)&this[5]._vptr != 4) {
            pBVar1 = (BucketRefCounter<game::BuildFunctionWorker> _vtbl*)this_thread::GetThreadID();
            if (pBVar1 != this[4]._vptr) {
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, nullptr);
            }
        }
        pBVar1 = this[2]._vptr;
        std::destroy_at(this);
        BucketManager::DeAllocate(pBVar1);
    }

    // 0x100645e00
    game::BuildFunctionResultData* placement_new<game::BuildFunctionResultData>(void* arg1) {
        new (arg1) game::BuildFunctionResultData();
        return arg1;
    }

    // 0x100645e20
    MakeSharedPoolRefCounter<game::BuildFunctionResultData, MakeSharedPool<game::BuildFunctionResultData, 32>>*
    placement_new<
        MakeSharedPoolRefCounter<game::BuildFunctionResultData, MakeSharedPool<game::BuildFunctionResultData, 32>>,
        MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData*&, game::BuildFunctionResultData*>(
        void* arg1, MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData*& arg2,
        game::BuildFunctionResultData*&& arg3) {
        new (arg1)
            MakeSharedPoolRefCounter<game::BuildFunctionResultData, MakeSharedPool<game::BuildFunctionResultData, 32>>(
                arg2, arg3);
        return arg1;
    }

} // namespace jag

namespace jag::game {
    class BuildModelWorker : public ui::ComponentValueMixin // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~BuildModelWorker();
        virtual uint64_t GetWorkerJobType() const;
        virtual uint8_t* Service(int arg1);
        BuildModelWorker();

    private:
        shared_ptr field_8;
        uint8_t _unknown_24[8];
    };

    // 0x100644fb0
    uint64_t BuildModelWorker::GetWorkerJobType() const {
        return 50;
    }

} // namespace jag::game
