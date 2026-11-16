// libs/game/runetek5/assetbuilder/jobs/buildfunction/BuildFunctionData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x100647080, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildFunctionResultData, MakeSharedPool<game::BuildFunctionResultData, 32> >::MakeSharedPoolRefCounter(void*, game::BuildFunctionResultData*): jumps straight to the base-object constructor

    // 0x100647090, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildFunctionResultData, MakeSharedPool<game::BuildFunctionResultData, 32> >::MakeSharedPoolRefCounter(void*, game::BuildFunctionResultData*)
    void
    jag::MakeSharedPoolRefCounter<game::BuildFunctionResultData, MakeSharedPool<game::BuildFunctionResultData, 32>>::
        MakeSharedPoolRefCounter(MakeSharedPoolRefCounter<game::BuildFunctionResultData,
                                                          MakeSharedPool<game::BuildFunctionResultData, 32>>* this,
                                 void* param_1, BuildFunctionResultData* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7aa8 + 16;
        *(void**)(this + 16) = param_1;
        *(BuildFunctionResultData**)(this + 24) = param_2;
    }

    // 0x1006470d0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildFunctionResultData, MakeSharedPool<game::BuildFunctionResultData, 32> >::DeleteData()
    void
    jag::MakeSharedPoolRefCounter<game::BuildFunctionResultData, MakeSharedPool<game::BuildFunctionResultData, 32>>::
        DeleteData(MakeSharedPoolRefCounter<game::BuildFunctionResultData,
                                            MakeSharedPool<game::BuildFunctionResultData, 32>>* this) {
        if (*(long*)(this + 24) != 0) {
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1006470f0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildFunctionResultData, MakeSharedPool<game::BuildFunctionResultData, 32> >::DeleteSelf()
    void
    jag::MakeSharedPoolRefCounter<game::BuildFunctionResultData, MakeSharedPool<game::BuildFunctionResultData, 32>>::
        DeleteSelf(MakeSharedPoolRefCounter<game::BuildFunctionResultData,
                                            MakeSharedPool<game::BuildFunctionResultData, 32>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::BuildFunctionResultData, 32>::deallocate(pvVar1);
    }

    // 0x100648440, 32 bytes, inline, placed by debug map only (low confidence)
    // game::BuildModelRequestData* placement_new<game::BuildModelRequestData>(void*)
    BuildModelRequestData* placement_new<game::BuildModelRequestData>(void* param_1) {
        game::BuildModelRequestData::BuildModelRequestData(param_1);
        return param_1;
    }

    // 0x100648460, 32 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildModelRequestData>* placement_new<BucketRefCounter<game::BuildModelRequestData>, managed_ptr_counter_and_data<BucketRefCounter<game::BuildModelRequestData>, game::BuildModelRequestData>*&, game::BuildModelRequestData*&>(void*, managed_ptr_counter_and_data<BucketRefCounter<game::BuildModelRequestData>, game::BuildModelRequestData>*&, game::BuildModelRequestData*&)
    BucketRefCounter* jag::placement_new<
        BucketRefCounter<game::BuildModelRequestData>,
        managed_ptr_counter_and_data<BucketRefCounter<game::BuildModelRequestData>, game::BuildModelRequestData>*&,
        game::BuildModelRequestData*&>(void* param_1, managed_ptr_counter_and_data** param_2,
                                       BuildModelRequestData** param_3) {
        BucketRefCounter<game::BuildModelRequestData>::BucketRefCounter(param_1, *param_2, *param_3, 0);
        return param_1;
    }

    // 0x100648480, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildModelRequestData>::BucketRefCounter(void*, game::BuildModelRequestData*, unsigned int): jumps straight to the base-object constructor

    // 0x100648490, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildModelRequestData>::BucketRefCounter(void*, game::BuildModelRequestData*, unsigned int)
    void BucketRefCounter<game::BuildModelRequestData>::BucketRefCounter(void* param_1, BuildModelRequestData* param_2,
                                                                         uint param_3) {
        undefined8 uVar1;

        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7100 + 16;
        *(void**)(this + 16) = param_1;
        *(BuildModelRequestData**)(this + 24) = param_2;
        uVar1 = this_thread::GetThreadID();
        *(undefined8*)(this + 32) = uVar1;
        *(uint*)(this + 40) = param_3;
    }

    // 0x1006484f0, 48 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildModelRequestData>::DeleteData()
    void BucketRefCounter<game::BuildModelRequestData>::DeleteData() {
        if (*(BuildModelRequestData**)(this + 24) != (BuildModelRequestData*)0) {
            (*(BuildModelRequestData**)(this + 24))->~BuildModelRequestData();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100648520, 96 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildModelRequestData>::DeleteSelf()
    void BucketRefCounter<game::BuildModelRequestData>::DeleteSelf() {
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

    // 0x100648d20, 32 bytes, inline, placed by debug map only (low confidence)
    // game::BuildModelWorker* placement_new<game::BuildModelWorker>(void*)
    BuildModelWorker* placement_new<game::BuildModelWorker>(void* param_1) {
        game::BuildModelWorker::BuildModelWorker(param_1);
        return param_1;
    }

    // 0x100648d40, 32 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildModelWorker>* placement_new<BucketRefCounter<game::BuildModelWorker>, managed_ptr_counter_and_data<BucketRefCounter<game::BuildModelWorker>, game::BuildModelWorker>*&, game::BuildModelWorker*&>(void*, managed_ptr_counter_and_data<BucketRefCounter<game::BuildModelWorker>, game::BuildModelWorker>*&, game::BuildModelWorker*&)
    BucketRefCounter*
    jag::placement_new<BucketRefCounter<game::BuildModelWorker>,
                       managed_ptr_counter_and_data<BucketRefCounter<game::BuildModelWorker>, game::BuildModelWorker>*&,
                       game::BuildModelWorker*&>(void* param_1, managed_ptr_counter_and_data** param_2,
                                                 BuildModelWorker** param_3) {
        BucketRefCounter<game::BuildModelWorker>::BucketRefCounter(param_1, *param_2, *param_3, 0);
        return param_1;
    }

    // 0x100648d60, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildModelWorker>::BucketRefCounter(void*, game::BuildModelWorker*, unsigned int): jumps straight to the base-object constructor

    // 0x100648d70, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildModelWorker>::BucketRefCounter(void*, game::BuildModelWorker*, unsigned int)
    void BucketRefCounter<game::BuildModelWorker>::BucketRefCounter(void* param_1, BuildModelWorker* param_2,
                                                                    uint param_3) {
        undefined8 uVar1;

        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee70c8 + 16;
        *(void**)(this + 16) = param_1;
        *(BuildModelWorker**)(this + 24) = param_2;
        uVar1 = this_thread::GetThreadID();
        *(undefined8*)(this + 32) = uVar1;
        *(uint*)(this + 40) = param_3;
    }

    // 0x100648dd0, 96 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildModelWorker>::DeleteSelf()
    void BucketRefCounter<game::BuildModelWorker>::DeleteSelf() {
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

    // 0x100648f10, 32 bytes, inline, placed by debug map only (low confidence)
    // game::BuildModelResultData* placement_new<game::BuildModelResultData>(void*)
    BuildModelResultData* placement_new<game::BuildModelResultData>(void* param_1) {
        game::BuildModelResultData::BuildModelResultData(param_1);
        return param_1;
    }

    // 0x100648f30, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildModelResultData, MakeSharedPool<game::BuildModelResultData, 512> >* placement_new<MakeSharedPoolRefCounter<game::BuildModelResultData, MakeSharedPool<game::BuildModelResultData, 512> >, MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData*&, game::BuildModelResultData*>(void*, MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData*&, game::BuildModelResultData*&&)
    MakeSharedPoolRefCounter* jag::placement_new<
        MakeSharedPoolRefCounter<game::BuildModelResultData, MakeSharedPool<game::BuildModelResultData, 512>>,
        MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData*&, game::BuildModelResultData*>(
        void* param_1, RefCounterAndData** param_2, BuildModelResultData** param_3) {
        MakeSharedPoolRefCounter<game::BuildModelResultData,
                                 MakeSharedPool<game::BuildModelResultData, 512>>::MakeSharedPoolRefCounter(param_1,
                                                                                                            *param_2,
                                                                                                            *param_3);
        return param_1;
    }

    // 0x100648fb0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildModelResultData, MakeSharedPool<game::BuildModelResultData, 512> >::MakeSharedPoolRefCounter(void*, game::BuildModelResultData*): jumps straight to the base-object constructor

    // 0x100648fc0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildModelResultData, MakeSharedPool<game::BuildModelResultData, 512> >::MakeSharedPoolRefCounter(void*, game::BuildModelResultData*)
    void jag::MakeSharedPoolRefCounter<game::BuildModelResultData, MakeSharedPool<game::BuildModelResultData, 512>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<game::BuildModelResultData, MakeSharedPool<game::BuildModelResultData, 512>>* this,
            void* param_1, BuildModelResultData* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7a88 + 16;
        *(void**)(this + 16) = param_1;
        *(BuildModelResultData**)(this + 24) = param_2;
    }

    // 0x100649000, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildModelResultData, MakeSharedPool<game::BuildModelResultData, 512> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<game::BuildModelResultData, MakeSharedPool<game::BuildModelResultData, 512>>::
        DeleteSelf(MakeSharedPoolRefCounter<game::BuildModelResultData,
                                            MakeSharedPool<game::BuildModelResultData, 512>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::BuildModelResultData, 512>::deallocate(pvVar1);
    }

} // namespace jag

namespace jag::game {
    class BuildFunctionResultData {
    public:
        BuildFunctionResultData();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100646500, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BuildFunctionResultData::BuildFunctionResultData(): jumps straight to the base-object constructor

    // 0x100646510, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BuildFunctionResultData::BuildFunctionResultData()
    void BuildFunctionResultData::BuildFunctionResultData() {
        new (this) MakeSharedPool<BuildFunctionResultData, 32>();
    }

    // 0x100648580, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // BuildModelRequestData::~BuildModelRequestData(): jumps straight to the base-object destructor

    // 0x100648590, 256 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // BuildModelRequestData::~BuildModelRequestData()
    void BuildModelRequestData::~BuildModelRequestData() {
        (&field_680)->~shared_ptr();
        (&field_632)->~Array();
        (&field_608)->~Array();
        (&field_584)->~Array();
        (&field_560)->~Array();
        (&field_536)->~Array();
        (&field_512)->~Array();
        (&field_488)->~Array();
        (&field_464)->~Array();
        (&field_440)->~Array();
        (&field_416)->~Array();
        (&field_392)->~Array();
        (&field_336)->~vector();
        (&field_288)->~vector();
        (&field_256)->~vector();
        (&field_224)->~vector();
        (&field_192)->~vector();
        (&field_160)->~vector();
        (&field_80)->~fixed_vector();
        (&field_16)->~mutex();
    }

} // namespace jag::game

// 0x100648e30, 16 bytes, placed by debug map only (low confidence)
// sin(float)
void sin(float param_1) {
    _sinf();
}

// 0x100648e40, 16 bytes, placed by debug map only (low confidence)
// cos(float)
void cos(float param_1) {
    _cosf();
}
