// libs/game/runetek5/assetbuilder/RenderAssetBuilder.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x10065f7b0
    std::function<void()>*
    placement_new<std::function<void()>, std::function<void()> const&>(void* arg1,
                                                                       const std::function<void()>& callback) {
        new (arg1) std::function<void()>(callback);
        return arg1;
    }

    // 0x10065f7d0
    ref_counter_shared<std::function<void()>>*
    placement_new<ref_counter_shared<std::function<void()>>, int, std::function<void()>*&>(
        void* arg1, int&& arg2, std::function<void()>*& arg3) {
        new (arg1) ref_counter_shared<std::function<void()>>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10065f860
    ref_counter_shared<std::function<void()>>::ref_counter_shared(unsigned long arg1, std::function<void()>* callback)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7998 + 16;
        *(unsigned long*)(this + 16) = arg1;
        *(function<void_()>**)(this + 24) = callback;
    }

    // 0x10065f8a0
    void ref_counter_shared<std::function<void()>>::DeleteData() {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((function<void()>*)(*(long*)(this + 24) + lVar2))->~function();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 48;
                } while (uVar1 < *(unsigned long*)(this + 16));
            }
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x10065f8f0
    game::BuildFunctionMain*
    placement_new<game::BuildFunctionMain, int, shared_ptr<std::function<void()>>, unsigned int&>(
        void* arg1, int&& arg2, shared_ptr<std::function<void()>>&& callback, unsigned int& arg4) {
        new (arg1) game::BuildFunctionMain(arg2, callback, arg4);
        return arg1;
    }

    // 0x10065f910
    BucketRefCounter<game::BuildFunctionMain>*
    placement_new<BucketRefCounter<game::BuildFunctionMain>,
                  managed_ptr_counter_and_data<BucketRefCounter<game::BuildFunctionMain>, game::BuildFunctionMain>*&,
                  game::BuildFunctionMain*&>(
        void* arg1,
        managed_ptr_counter_and_data<BucketRefCounter<game::BuildFunctionMain>, game::BuildFunctionMain>*& arg2,
        game::BuildFunctionMain*& arg3) {
        new (arg1) BucketRefCounter<game::BuildFunctionMain>(arg2, arg3, 0);
        return arg1;
    }

    // 0x10065f940
    BucketRefCounter<game::BuildFunctionMain>::BucketRefCounter(void* arg1, game::BuildFunctionMain* buildFunctionMain,
                                                                unsigned int arg3)
        : ref_counter_base() {}

    // 0x10065f9a0
    void BucketRefCounter<game::BuildFunctionMain>::DeleteSelf() {
        BucketRefCounter<game::BuildFunctionMain> _vtbl* pBVar1;

        if (*(int*)&this[5]._vptr != 4) {
            pBVar1 = (BucketRefCounter<game::BuildFunctionMain> _vtbl*)this_thread::GetThreadID();
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

} // namespace jag

namespace jag::game {
    class RenderAssetBuilder {
    public:
        // virtual methods in vtable order
        virtual ~RenderAssetBuilder();
        virtual uint8_t SecondaryContextCreate();
        virtual void SecondaryContextDestroy();

    private:
        uint8_t _unknown_8[32];
        Js5ResourceProvider* field_40;
        ConfigProvider* field_48;
        char field_56;
        uint8_t _unknown_57[295];
    };

    // 0x10065b040
    AssetWorkerJob::AssetWorkerJob() : shared_ptr() {
        new (&field_16) shared_ptr();
    }

    // 0x10065b2f0
    AssetWorkerJob::AssetWorkerJob(const shared_ptr<AssetWorker>& assetWorker, const shared_ptr<AssetJob>& assetJob)
        : shared_ptr(assetWorker), field_16(assetJob) {}

    // 0x10065b380
    RenderAssetBuilder::~RenderAssetBuilder() {
        field_344.~RenderDeviceSecondaryContext();
    }

    // 0x10065e5a0
    AssetWorkerJob::AssetWorkerJob(AssetWorkerJob&& assetWorkerJob) {
        shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(assetWorkerJob);
        field_16.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(assetWorkerJob.field_16);
    }

    // 0x10065f0f0
    AssetWorkerJob::AssetWorkerJob(const AssetWorkerJob& assetWorkerJob)
        : shared_ptr(assetWorkerJob), field_16(&assetWorkerJob.field_16) {}

} // namespace jag::game

namespace jag::fixedfunction {
    // 0x10065aef0
    function<void(), 64ul, 16ul, (Methods)0>*
    function<void(), 64ul, 16ul, (Methods)0>::operator=(const function<void(), 64ul, 16ul, (Methods)0>& callback) {
        clean(this);
        *(uint64_t*)this = *(uint64_t*)callback;
        *(uint64_t*)(this + 80) = *(uint64_t*)(callback + 80);
        *(uint64_t*)(this + 88) = *(uint64_t*)(callback + 88);
        if (operator_cast_to_bool() != '\0') {
            copy((function<void(), 64ul, 16ul, (Methods)0>*)callback, this + 16);
        }
        return this;
    }

    // 0x10065af40
    void function<void(), 64ul, 16ul, (Methods)0>::clean() {
        if (operator_cast_to_bool() != '\0') {
            destruct(this);
            *(uint64_t*)this = 0;
        }
    }

    // 0x10065af70
    void function<void(), 64ul, 16ul, (Methods)0>::copy(void* arg1) const {
        if (operator_cast_to_bool() != '\0') {
            (**(void (**)(...))(this + 80))(this + 16, arg1);
        }
    }

    // 0x10065ca90
    function<void(), 64ul, 16ul, (Methods)0>::function(const function<void(), 64ul, 16ul, (Methods)0>& callback) {
        *(uint64_t*)this = *(uint64_t*)callback;
        *(uint64_t*)(this + 80) = *(uint64_t*)(callback + 80);
        *(uint64_t*)(this + 88) = *(uint64_t*)(callback + 88);
        if (operator_cast_to_bool() != '\0') {
            copy((function<void(), 64ul, 16ul, (Methods)0>*)callback, this + 16);
        }
    }

} // namespace jag::fixedfunction
