// libs/game/runetek5/assetbuilder/jobs/buildfunction/BuildFunctionData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x100647090
    MakeSharedPoolRefCounter<game::BuildFunctionResultData, MakeSharedPool<game::BuildFunctionResultData, 32>>::
        MakeSharedPoolRefCounter(void* arg1, game::BuildFunctionResultData* buildFunctionResultData)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7aa8 + 16;
        *(void**)(this + 16) = arg1;
        *(BuildFunctionResultData**)(this + 24) = buildFunctionResultData;
    }

    // 0x1006470d0
    void MakeSharedPoolRefCounter<game::BuildFunctionResultData,
                                  MakeSharedPool<game::BuildFunctionResultData, 32>>::DeleteData() {
        if (*(long*)(this + 24) != 0) {
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x1006470f0
    void MakeSharedPoolRefCounter<game::BuildFunctionResultData,
                                  MakeSharedPool<game::BuildFunctionResultData, 32>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::BuildFunctionResultData, 32>::deallocate(arg1);
    }

    // 0x100648440
    game::BuildModelRequestData* placement_new<game::BuildModelRequestData>(void* arg1) {
        new (arg1) game::BuildModelRequestData();
        return arg1;
    }

    // 0x100648460
    BucketRefCounter<game::BuildModelRequestData>* placement_new<
        BucketRefCounter<game::BuildModelRequestData>,
        managed_ptr_counter_and_data<BucketRefCounter<game::BuildModelRequestData>, game::BuildModelRequestData>*&,
        game::BuildModelRequestData*&>(
        void* arg1,
        managed_ptr_counter_and_data<BucketRefCounter<game::BuildModelRequestData>, game::BuildModelRequestData>*& arg2,
        game::BuildModelRequestData*& arg3) {
        new (arg1) BucketRefCounter<game::BuildModelRequestData>(arg2, arg3, 0);
        return arg1;
    }

    // 0x100648490
    BucketRefCounter<game::BuildModelRequestData>::BucketRefCounter(void* arg1,
                                                                    game::BuildModelRequestData* buildModelRequestData,
                                                                    unsigned int arg3)
        : ref_counter_base() {}

    // 0x1006484f0
    void BucketRefCounter<game::BuildModelRequestData>::DeleteData() {
        if ((BuildModelRequestData*)this[3]._vptr != nullptr) {
            this[3]._vptr->~BuildModelRequestData();
            this[3]._vptr = nullptr;
        }
    }

    // 0x100648520
    void BucketRefCounter<game::BuildModelRequestData>::DeleteSelf() {
        BucketRefCounter<game::BuildModelRequestData> _vtbl* pBVar1;

        if (*(int*)&this[5]._vptr != 4) {
            pBVar1 = (BucketRefCounter<game::BuildModelRequestData> _vtbl*)this_thread::GetThreadID();
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

    // 0x100648d20
    game::BuildModelWorker* placement_new<game::BuildModelWorker>(void* arg1) {
        new (arg1) game::BuildModelWorker();
        return arg1;
    }

    // 0x100648d40
    BucketRefCounter<game::BuildModelWorker>*
    placement_new<BucketRefCounter<game::BuildModelWorker>,
                  managed_ptr_counter_and_data<BucketRefCounter<game::BuildModelWorker>, game::BuildModelWorker>*&,
                  game::BuildModelWorker*&>(
        void* arg1,
        managed_ptr_counter_and_data<BucketRefCounter<game::BuildModelWorker>, game::BuildModelWorker>*& arg2,
        game::BuildModelWorker*& arg3) {
        new (arg1) BucketRefCounter<game::BuildModelWorker>(arg2, arg3, 0);
        return arg1;
    }

    // 0x100648d70
    BucketRefCounter<game::BuildModelWorker>::BucketRefCounter(void* arg1, game::BuildModelWorker* buildModelWorker,
                                                               unsigned int arg3)
        : ref_counter_base() {}

    // 0x100648dd0
    void BucketRefCounter<game::BuildModelWorker>::DeleteSelf() {
        BucketRefCounter<game::BuildModelWorker> _vtbl* pBVar1;

        if (*(int*)&this[5]._vptr != 4) {
            pBVar1 = (BucketRefCounter<game::BuildModelWorker> _vtbl*)this_thread::GetThreadID();
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

    // 0x100648f10
    game::BuildModelResultData* placement_new<game::BuildModelResultData>(void* arg1) {
        new (arg1) game::BuildModelResultData();
        return arg1;
    }

    // 0x100648f30
    MakeSharedPoolRefCounter<game::BuildModelResultData, MakeSharedPool<game::BuildModelResultData, 512>>*
    placement_new<MakeSharedPoolRefCounter<game::BuildModelResultData, MakeSharedPool<game::BuildModelResultData, 512>>,
                  MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData*&, game::BuildModelResultData*>(
        void* arg1, MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData*& arg2,
        game::BuildModelResultData*&& arg3) {
        new (arg1)
            MakeSharedPoolRefCounter<game::BuildModelResultData, MakeSharedPool<game::BuildModelResultData, 512>>(arg2,
                                                                                                                  arg3);
        return arg1;
    }

    // 0x100648fc0
    MakeSharedPoolRefCounter<game::BuildModelResultData, MakeSharedPool<game::BuildModelResultData, 512>>::
        MakeSharedPoolRefCounter(void* arg1, game::BuildModelResultData* buildModelResultData)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7a88 + 16;
        *(void**)(this + 16) = arg1;
        *(BuildModelResultData**)(this + 24) = buildModelResultData;
    }

    // 0x100649000
    void MakeSharedPoolRefCounter<game::BuildModelResultData,
                                  MakeSharedPool<game::BuildModelResultData, 512>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::BuildModelResultData, 512>::deallocate(arg1);
    }

} // namespace jag

namespace jag::game {
    class BuildFunctionResultData {
    public:
        BuildFunctionResultData();

        uint8_t _unknown_0[1];
    };

    // 0x100646510
    BuildFunctionResultData::BuildFunctionResultData() : MakeSharedPool<BuildFunctionResultData, 32>() {}

    // 0x100648590
    BuildModelRequestData::~BuildModelRequestData() {
        field_680.~shared_ptr();
        field_632.~Array();
        field_608.~Array();
        field_584.~Array();
        field_560.~Array();
        field_536.~Array();
        field_512.~Array();
        field_488.~Array();
        field_464.~Array();
        field_440.~Array();
        field_416.~Array();
        field_392.~Array();
        field_336.~vector();
        field_288.~vector();
        field_256.~vector();
        field_224.~vector();
        field_192.~vector();
        field_160.~vector();
        field_80.~fixed_vector();
        (&field_16)->~mutex();
    }

} // namespace jag::game

// 0x100648e30
void sin(float arg1) {
    _sinf();
}

// 0x100648e40
void cos(float arg1) {
    _cosf();
}
