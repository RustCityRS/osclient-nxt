// libs/game/runetek5/assetbuilder/RenderAssetBuilder.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class RenderAssetBuilder {
    public:
        // virtual methods in vtable order
        virtual ~RenderAssetBuilder();
        virtual SecondaryContextCreate();
        virtual void SecondaryContextDestroy();

        // data members, from how the methods use this: 352 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[32];
        Js5ResourceProvider* field_40; // offset 40
        ConfigProvider* field_48;      // offset 48
        char field_56;                 // offset 56
        char _unknown_57[295];
    };

    // 0x10065aba0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // RenderAssetBuilder::~RenderAssetBuilder(): jumps straight to the base-object destructor

    // 0x10065abb0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // RenderAssetBuilder::~RenderAssetBuilder()
    void RenderAssetBuilder::~RenderAssetBuilder() {
        ~RenderAssetBuilder(this);
        operator_delete(this);
    }

    // 0x10065b040, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // AssetWorkerJob::AssetWorkerJob()
    void AssetWorkerJob::AssetWorkerJob() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        new (&field_16, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x10065b2f0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // AssetWorkerJob::AssetWorkerJob(shared_ptr<AssetWorker> const&, shared_ptr<AssetJob> const&)
    void AssetWorkerJob::AssetWorkerJob(shared_ptr* param_1, shared_ptr* param_2) {
        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
        new (&field_16, param_2) shared_ptr<oldscape::dash3d::Decor>();
    }

    // 0x10065b380, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // RenderAssetBuilder::~RenderAssetBuilder()
    void RenderAssetBuilder::~RenderAssetBuilder() {
        (&field_344)->~RenderDeviceSecondaryContext();
        ~AssetBuilder();
    }

    // 0x10065e550, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // AssetWorkerJob::AssetWorkerJob(AssetWorkerJob&&): jumps straight to the base-object constructor

    // 0x10065e5a0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // AssetWorkerJob::AssetWorkerJob(AssetWorkerJob&&)
    void AssetWorkerJob::AssetWorkerJob(AssetWorkerJob* param_1) {
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, (shared_ptr*)param_1);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&field_16, (shared_ptr*)&param_1->field_16);
    }

    // 0x10065f0d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // AssetWorkerJob::AssetWorkerJob(AssetWorkerJob const&): jumps straight to the base-object constructor

    // 0x10065f0f0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // AssetWorkerJob::AssetWorkerJob(AssetWorkerJob const&)
    void AssetWorkerJob::AssetWorkerJob(AssetWorkerJob* param_1) {
        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
        new (&field_16, (shared_ptr*)&param_1->field_16) shared_ptr<oldscape::dash3d::Decor>();
    }

} // namespace jag::game

namespace jag {
    // 0x10065f7b0, 32 bytes, inline, placed by debug map only (low confidence)
    // std::function<void ()>* placement_new<std::function<void ()>, std::function<void ()> const&>(void*, std::function<void ()> const&)
    /* std::function<void ()>* placement_new<std::function<void ()>, std::function<void ()>
   const&>(void*, std::function<void ()> const&) */

    function* placement_new<std::function<void()>, std::function<void()> const&>(void* param_1, function* param_2) {
        std::function<void()>::function(param_1, param_2);
        return param_1;
    }

    // 0x10065f7d0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<std::function<void ()> >* placement_new<ref_counter_shared<std::function<void ()> >, int, std::function<void ()>*&>(void*, int&&, std::function<void ()>*&)
    /* ref_counter_shared<std::function<void ()> >*
   placement_new<ref_counter_shared<std::function<void ()> >, int, std::function<void
   ()>*&>(void*, int&&, std::function<void ()>*&) */

    ref_counter_shared*
    placement_new<ref_counter_shared<std::function<void()>>, int, std::function<void()>*&>(void* param_1, int* param_2,
                                                                                           function** param_3) {
        ref_counter_shared<std::function<void()>>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10065f850, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<std::function<void ()> >::ref_counter_shared(unsigned long, std::function<void ()>*): jumps straight to the base-object constructor

    // 0x10065f860, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<std::function<void ()> >::ref_counter_shared(unsigned long, std::function<void ()>*)
    /* ref_counter_shared<std::function<void ()> >::ref_counter_shared(unsigned long,
   std::function<void ()>*) */

    void ref_counter_shared<std::function<void()>>::ref_counter_shared(ref_counter_shared<std::function<void()>>* this,
                                                                       ulong param_1, function* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7998 + 16;
        *(ulong*)(this + 16) = param_1;
        *(function**)(this + 24) = param_2;
    }

    // 0x10065f8a0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<std::function<void ()> >::DeleteData()
    /* ref_counter_shared<std::function<void ()> >::DeleteData() */

    void ref_counter_shared<std::function<void()>>::DeleteData(ref_counter_shared<std::function<void()>>* this) {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    std::function<void()>::~function((function<void()>*)(*(long*)(this + 24) + lVar2));
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 48;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10065f8f0, 32 bytes, inline, placed by debug map only (low confidence)
    // game::BuildFunctionMain* placement_new<game::BuildFunctionMain, int, shared_ptr<std::function<void ()> >, unsigned int&>(void*, int&&, shared_ptr<std::function<void ()> >&&, unsigned int&)
    /* game::BuildFunctionMain* placement_new<game::BuildFunctionMain, int,
   shared_ptr<std::function<void ()> >, unsigned int&>(void*, int&&,
   shared_ptr<std::function<void ()> >&&, unsigned int&) */

    BuildFunctionMain*
    jag::placement_new<game::BuildFunctionMain, int, shared_ptr<std::function<void()>>, unsigned int&>(
        void* param_1, int* param_2, shared_ptr* param_3, uint* param_4) {
        game::BuildFunctionMain::BuildFunctionMain(param_1, *param_2, param_3, *param_4);
        return param_1;
    }

    // 0x10065f910, 32 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildFunctionMain>* placement_new<BucketRefCounter<game::BuildFunctionMain>, managed_ptr_counter_and_data<BucketRefCounter<game::BuildFunctionMain>, game::BuildFunctionMain>*&, game::BuildFunctionMain*&>(void*, managed_ptr_counter_and_data<BucketRefCounter<game::BuildFunctionMain>, game::BuildFunctionMain>*&, game::BuildFunctionMain*&)
    BucketRefCounter* jag::placement_new<
        BucketRefCounter<game::BuildFunctionMain>,
        managed_ptr_counter_and_data<BucketRefCounter<game::BuildFunctionMain>, game::BuildFunctionMain>*&,
        game::BuildFunctionMain*&>(void* param_1, managed_ptr_counter_and_data** param_2, BuildFunctionMain** param_3) {
        BucketRefCounter<game::BuildFunctionMain>::BucketRefCounter(param_1, *param_2, *param_3, 0);
        return param_1;
    }

    // 0x10065f930, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildFunctionMain>::BucketRefCounter(void*, game::BuildFunctionMain*, unsigned int): jumps straight to the base-object constructor

    // 0x10065f940, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildFunctionMain>::BucketRefCounter(void*, game::BuildFunctionMain*, unsigned int)
    void BucketRefCounter<game::BuildFunctionMain>::BucketRefCounter(void* param_1, BuildFunctionMain* param_2,
                                                                     uint param_3) {
        undefined8 uVar1;

        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee70d8 + 16;
        *(void**)(this + 16) = param_1;
        *(BuildFunctionMain**)(this + 24) = param_2;
        uVar1 = this_thread::GetThreadID();
        *(undefined8*)(this + 32) = uVar1;
        *(uint*)(this + 40) = param_3;
    }

    // 0x10065f9a0, 96 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildFunctionMain>::DeleteSelf()
    void BucketRefCounter<game::BuildFunctionMain>::DeleteSelf() {
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

} // namespace jag

namespace jag::fixedfunction {
    // 0x10065aef0, 80 bytes, inline, placed by debug map only (low confidence)
    // function<void (), 64ul, 16ul, (Methods)0>::operator=(function<void (), 64ul, 16ul, (Methods)0> const&)
    /* function<void (), 64ul, 16ul,
   (Methods)0>::TEMPNAMEPLACEHOLDERVALUE(function<void (),
   64ul, 16ul, (Methods)0> const&) */

    function<void(), 64ul, 16ul, (Methods)0>*
    function<void(), 64ul, 16ul, (Methods)0>::operator=(function<void(), 64ul, 16ul, (Methods)0>* this,
                                                        function* param_1) {
        clean(this);
        *(long*)this = param_1->field_0;
        *(undefined8*)(this + 80) = *(undefined8*)&param_1->field_80;
        *(undefined8*)(this + 88) = *(undefined8*)&param_1->field_88;
        if (operator_cast_to_bool()) {
            copy((function<void(), 64ul, 16ul, (Methods)0>*)param_1, this + 16);
        }
        return this;
    }

    // 0x10065af40, 48 bytes, inline, placed by debug map only (low confidence)
    // function<void (), 64ul, 16ul, (Methods)0>::clean()
    void function<void(), 64ul, 16ul, (Methods)0>::clean(function<void(), 64ul, 16ul, (Methods)0>* this) {
        if (operator_cast_to_bool()) {
            destruct(this);
            *(undefined8*)this = 0;
        }
    }

    // 0x10065af70, 48 bytes, inline, placed by debug map only (low confidence)
    // function<void (), 64ul, 16ul, (Methods)0>::copy(void*) const
    void function<void(), 64ul, 16ul, (Methods)0>::copy(function<void(), 64ul, 16ul, (Methods)0>* this, void* param_1) {
        if (operator_cast_to_bool()) {
            (**(code**)(this + 80))(this + 16, param_1);
        }
    }

    // 0x10065ca90, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (), 64ul, 16ul, (Methods)0>::function(function<void (), 64ul, 16ul, (Methods)0> const&)
    /* function<void (), 64ul, 16ul,
   (Methods)0>::function(function<void (), 64ul, 16ul,
   (Methods)0>&&) */

    void function<void(), 64ul, 16ul, (Methods)0>::function(function<void(), 64ul, 16ul, (Methods)0>* this,
                                                            function* param_1) {
        *(long*)this = param_1->field_0;
        *(undefined8*)(this + 80) = *(undefined8*)&param_1->field_80;
        *(undefined8*)(this + 88) = *(undefined8*)&param_1->field_88;
        if (operator_cast_to_bool()) {
            copy((function<void(), 64ul, 16ul, (Methods)0>*)param_1, this + 16);
        }
    }

} // namespace jag::fixedfunction
