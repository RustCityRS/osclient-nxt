// libs/graphics/runetek7/model/GeometryBatchDE.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag {
    // 0x100838a60
    render::Query* placement_new<render::Query>(void* arg1) {
        new (arg1) render::Query();
        return arg1;
    }

    // 0x100838a80
    ref_counter_shared<render::Query>*
    placement_new<ref_counter_shared<render::Query>, int, render::Query*&>(void* arg1, int&& arg2,
                                                                           render::Query*& arg3) {
        new (arg1) ref_counter_shared<render::Query>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100838aa0
    void shared_ptr_do_enable_shared_from_this<render::Query>(ref_counter_base* ref_counter_base, render::Query* query,
                                                              render::Query::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)query);
            local_38 = weak_ptr(local_48);
            query->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x100838b50
    ref_counter_shared<render::Query>::ref_counter_shared(unsigned long arg1, render::Query* query)
        : ref_counter_base() {}

    // 0x100838b90
    void ref_counter_shared<render::Query>::DeleteData() {
        ref_counter_shared<render::Query> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((Query*)((long)&(this[3]._vptr)->_dtor + lVar2))->~Query();
                    prVar1 = (ref_counter_shared<render::Query> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 184;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100838f50
    graphics::GeometryQuery*
    placement_new<graphics::GeometryQuery, render::QueryType&, bool&>(void* arg1, render::QueryType& queryType,
                                                                      bool& arg3) {
        new (arg1) graphics::GeometryQuery(queryType, arg3);
        return arg1;
    }

    // 0x100838f70
    ref_counter_shared<graphics::GeometryQuery>*
    placement_new<ref_counter_shared<graphics::GeometryQuery>, int, graphics::GeometryQuery*&>(
        void* arg1, int&& arg2, graphics::GeometryQuery*& arg3) {
        new (arg1) ref_counter_shared<graphics::GeometryQuery>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100838fa0
    ref_counter_shared<graphics::GeometryQuery>::ref_counter_shared(unsigned long arg1,
                                                                    graphics::GeometryQuery* geometryQuery)
        : ref_counter_base() {}

    // 0x100838fe0
    void ref_counter_shared<graphics::GeometryQuery>::DeleteData() {
        ref_counter_shared<graphics::GeometryQuery> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((GeometryQuery*)((long)&(this[3]._vptr)->_dtor + lVar2))->~GeometryQuery();
                    prVar1 = (ref_counter_shared<graphics::GeometryQuery> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 32;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100844a10
    graphics::ModelParticleSource* placement_new<graphics::ModelParticleSource, graphics::ModelParticleSource&>(
        void* arg1, graphics::ModelParticleSource& modelParticleSource) {
        new (arg1) graphics::ModelParticleSource(modelParticleSource);
        return arg1;
    }

    // 0x100844a30
    MakeSharedPoolRefCounter<graphics::ModelParticleSource, MakeSharedPool<graphics::ModelParticleSource, 768>>*
    placement_new<
        MakeSharedPoolRefCounter<graphics::ModelParticleSource, MakeSharedPool<graphics::ModelParticleSource, 768>>,
        MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData*&, graphics::ModelParticleSource*>(
        void* arg1, MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData*& arg2,
        graphics::ModelParticleSource*&& arg3) {
        new (arg1)
            MakeSharedPoolRefCounter<graphics::ModelParticleSource, MakeSharedPool<graphics::ModelParticleSource, 768>>(
                arg2, arg3);
        return arg1;
    }

    // 0x1008450e0
    MakeSharedPoolRefCounter<graphics::ModelParticleSource, MakeSharedPool<graphics::ModelParticleSource, 768>>::
        MakeSharedPoolRefCounter(void* arg1, graphics::ModelParticleSource* modelParticleSource)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7bf0 + 16;
        *(void**)(this + 16) = arg1;
        *(ModelParticleSource**)(this + 24) = modelParticleSource;
    }

    // 0x100845120
    void MakeSharedPoolRefCounter<graphics::ModelParticleSource,
                                  MakeSharedPool<graphics::ModelParticleSource, 768>>::DeleteData() {
        if (*(long**)(this + 24) != nullptr) {
            (**(void (**)(...))(**(long**)(this + 24) + 32))();
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x100845150
    void MakeSharedPoolRefCounter<graphics::ModelParticleSource,
                                  MakeSharedPool<graphics::ModelParticleSource, 768>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<graphics::ModelParticleSource, 768>::deallocate(arg1);
    }

    // 0x100845520
    graphics::VFXAttachmentInfo* placement_new<graphics::VFXAttachmentInfo, graphics::VFXAttachmentInfo&>(
        void* arg1, graphics::VFXAttachmentInfo& vfxAttachmentInfo) {
        new (arg1) graphics::VFXAttachmentInfo(vfxAttachmentInfo);
        return arg1;
    }

    // 0x100845540
    MakeSharedPoolRefCounter<graphics::VFXAttachmentInfo, MakeSharedPool<graphics::VFXAttachmentInfo, 768>>*
    placement_new<
        MakeSharedPoolRefCounter<graphics::VFXAttachmentInfo, MakeSharedPool<graphics::VFXAttachmentInfo, 768>>,
        MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData*&, graphics::VFXAttachmentInfo*>(
        void* arg1, MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData*& arg2,
        graphics::VFXAttachmentInfo*&& arg3) {
        new (arg1)
            MakeSharedPoolRefCounter<graphics::VFXAttachmentInfo, MakeSharedPool<graphics::VFXAttachmentInfo, 768>>(
                arg2, arg3);
        return arg1;
    }

    // 0x100845690
    MakeSharedPoolRefCounter<graphics::VFXAttachmentInfo, MakeSharedPool<graphics::VFXAttachmentInfo, 768>>::
        MakeSharedPoolRefCounter(void* arg1, graphics::VFXAttachmentInfo* vfxAttachmentInfo)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7be8 + 16;
        *(void**)(this + 16) = arg1;
        *(VFXAttachmentInfo**)(this + 24) = vfxAttachmentInfo;
    }

    // 0x1008456d0
    void MakeSharedPoolRefCounter<graphics::VFXAttachmentInfo,
                                  MakeSharedPool<graphics::VFXAttachmentInfo, 768>>::DeleteData() {
        if (*(VFXAttachmentInfo**)(this + 24) != nullptr) {
            (*(VFXAttachmentInfo**)(this + 24))->~VFXAttachmentInfo();
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x100845700
    void MakeSharedPoolRefCounter<graphics::VFXAttachmentInfo,
                                  MakeSharedPool<graphics::VFXAttachmentInfo, 768>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<graphics::VFXAttachmentInfo, 768>::deallocate(arg1);
    }

    // 0x1008464e0
    graphics::VFXAttachmentInfo*
    placement_new<graphics::VFXAttachmentInfo, int, graphics::VFXAttachmentInfo::VertexBonePos,
                  graphics::VFXAttachmentInfo::VertexBonePos, graphics::VFXAttachmentInfo::VertexBonePos>(
        void* arg1, int&& arg2, graphics::VFXAttachmentInfo::VertexBonePos&& vertexBonePos1,
        graphics::VFXAttachmentInfo::VertexBonePos&& vertexBonePos2,
        graphics::VFXAttachmentInfo::VertexBonePos&& vertexBonePos3) {
        new (arg1) graphics::VFXAttachmentInfo(arg2, vertexBonePos1, vertexBonePos2, vertexBonePos3);
        return arg1;
    }

    // 0x100846500
    graphics::ModelParticleSource*
    placement_new<graphics::ModelParticleSource, unsigned short&, graphics::ModelParticleSource::VertexBonePos,
                  graphics::ModelParticleSource::VertexBonePos, graphics::ModelParticleSource::VertexBonePos>(
        void* arg1, unsigned short& arg2, graphics::ModelParticleSource::VertexBonePos&& vertexBonePos1,
        graphics::ModelParticleSource::VertexBonePos&& vertexBonePos2,
        graphics::ModelParticleSource::VertexBonePos&& vertexBonePos3) {
        new (arg1) graphics::ModelParticleSource((unsigned int)*arg2, vertexBonePos1, vertexBonePos2, vertexBonePos3);
        return arg1;
    }

    // 0x100846520
    graphics::ModelParticleSource*
    placement_new<graphics::ModelParticleSource, unsigned short&, graphics::ModelParticleSource::VertexBonePos>(
        void* arg1, unsigned short& arg2, graphics::ModelParticleSource::VertexBonePos&& vertexBonePos) {
        new (arg1) graphics::ModelParticleSource((unsigned int)*arg2, vertexBonePos);
        return arg1;
    }

} // namespace jag

namespace jag::graphicutils {
    // 0x10083a660
    void BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::OnDestroy<
        BatchDestroy<eastl::fixed_vector<shared_ptr<graphics::TextureAtlasReference>, 1ul>>>(
        BatchDestroy<eastl::fixed_vector<shared_ptr<graphics::TextureAtlasReference>, 1ul>>& batchDestroy) {
        long lVar1;
        long lVar2;
        shared_ptr<graphics::TextureAtlasReference>* textureAtlasReference1;
        shared_ptr<graphics::TextureAtlasReference>* textureAtlasReference2;
        back_insert_iterator<eastl::vector<shared_ptr<graphics::TextureAtlasReference>> _>* back_insert_iterator;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_00;

        scoped_lock<std::mutex> local_30(*((this + 56)));
        if (UseDestroyList(this) != '\0') {
            this_00 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)(this + 16);
            lVar1 = this_00->size();
            lVar2 = batchDestroy.size();
            this_00->reserve(lVar1 + lVar2);
            textureAtlasReference1 = (shared_ptr<graphics::TextureAtlasReference>*)batchDestroy.HeapBeginPtr();
            textureAtlasReference2 = (shared_ptr<graphics::TextureAtlasReference>*)batchDestroy.end();
            back_insert_iterator = (back_insert_iterator<eastl::vector<shared_ptr<graphics::TextureAtlasReference>> _>*)
                std::back_inserter<eastl::vector<shared_ptr<graphics::TextureAtlasReference>>>(*this_00);
            eastl::move<shared_ptr<graphics::TextureAtlasReference>*,
                        std::back_insert_iterator<eastl::vector<shared_ptr<graphics::TextureAtlasReference>>>>(
                textureAtlasReference1, textureAtlasReference2, back_insert_iterator);
            batchDestroy.reset_lose_memory();
        }
    }

    // 0x10083a780
    BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::BatchDestroyHelper() {
        function<void()>* this_01;
        function<void()> local_68[56];
        long local_30;

        new (this) AutoSingleton<BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>>();
        new (this) render::RenderDeviceOnEndFrame(true);
        *(uint8_t**)this = PTR_vtable_100ee7090 + 16;
        new ((this + 16)) eastl::vector<shared_ptr<graphics::TextureAtlasReference>>();
        this[48] = (BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>)1;
        new ((this + 56)) std::mutex();
        atomic<int>* this_00 = (atomic<int>*)(this + 120);
        new (this_00) std::atomic<int>(0);
        auto pBVar1 = this_00->Instance();
        std::function<void()>::function<
            BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::BatchDestroyHelper()::_lambda() _1_, void>(
            local_68, (_lambda___1_*)this);
        pBVar1->AddPauseCallback(*local_68);
        this_01 = local_68;
        this_01->~function();
        pBVar1 = (BatchDestroyManager*)this_01->Instance();
        std::function<void()>::function<
            BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::BatchDestroyHelper()::_lambda() _2_, void>(
            local_68, (_lambda___2_*)this);
        pBVar1->AddResumeCallback(*local_68);
    }

    // 0x10083a970
    void BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::OnEndFrame() {
        Flush(this);
    }

    // 0x10083b420
    void BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::BatchDestroyHelper()::{
        lambda() #1
    }
    ::operator()() const {
        OnPause(*(BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>**)this);
    }

    // 0x10083b430
    void BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::OnPause() {

        scoped_lock<std::mutex> local_18(*((this + 56)));
        this[48] = (BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>)0;
        ((this + 16))->clear();
        WaitDestroyList(this);
    }

    // 0x10083b480
    void BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::WaitDestroyList() {
        type* extraout_RDX;
        type* arg2;
        type* extraout_RDX_00;
        memory_order memory_order;
        uint8_t* in_RSI;
        duration<long long, std::ratio<1l, 1000l>> local_30;

        __atomic_base* this_01 = (__atomic_base*)(this + 120);
        int iVar1 = std::__atomic_base::operator_cast_to_int(this_01);
        uint8_t* arg1 = PTR_ITERATION_WAIT_TIME_MS_100ee95b0;
        memory_order = (memory_order)in_RSI;
        int iVar3 = 0;
        if (iVar1 != 0) {
            arg2 = extraout_RDX;
            do {
                memory_order = (memory_order)in_RSI;
                if (iVar3 == 1000)
                    goto LAB_10083b4e6;
                in_RSI = arg1;
                local_30.duration<int>(*arg1, arg2);
                std::this_thread::sleep_for<long long, std::ratio<1l, 1000l>>(local_30);
                iVar1 = std::__atomic_base::operator_cast_to_int(this_01);
                memory_order = (memory_order)in_RSI;
                iVar3 = iVar3 + 1;
                arg2 = extraout_RDX_00;
            } while (iVar1 != 0);
        }
        if (iVar3 < 1000) {
            return;
        }
    LAB_10083b4e6:
        auto this_00 = logger::default_logger();
        uint32_t uVar2 = this_01->load(memory_order);
        this_00->Log(false, 2,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                     "BatchDestroy.h",
                     220, "BatchDestroy took too long, %d entries remaining", uVar2);
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                        "BatchDestroy.h",
                        221, nullptr);
    }

    // 0x10083c270
    BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::~BatchDestroyHelper() {
        *(uint8_t**)this = PTR_vtable_100ee7090 + 16;
        ((this + 56))->~mutex();
        ((this + 16))->~vector();
    }

    // 0x10083c2b0
    void BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush() {
        ReturnValue local_20;

        auto this_00 = Instance();
        auto this_01 = this_00->SSOBeginPtr();
        BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>* local_18 = this;
        ThreadPool::AddTask<BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::_lambda() _1_>(
            &local_20, this_01, "Flush", (_lambda___1_*)&local_18);
    }

    // 0x10083cc60
    void BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
        lambda() #1
    }
    ::operator()() const {
        shared_ptr<graphics::TextureAtlasReference>* textureAtlasReference1;
        shared_ptr<graphics::TextureAtlasReference>* textureAtlasReference2;
        shared_ptr<graphics::TextureAtlasReference>* textureAtlasReference3;

        long lVar1 = *(long*)this;
        Array<shared_ptr<graphics::TextureAtlasReference>, BucketAllocatorEASTL> local_48;
        scoped_lock<std::mutex> local_30(*((lVar1 + 56)));
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_00 =
            (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)(lVar1 + 16);
        int iVar2 = this_00->size();
        (*((lVar1 + 120))) += iVar2;
        local_48.set_max_size(this_00->size(), 0);
        textureAtlasReference1 = (shared_ptr<graphics::TextureAtlasReference>*)this_00->HeapBeginPtr();
        textureAtlasReference2 = (shared_ptr<graphics::TextureAtlasReference>*)this_00->end();
        textureAtlasReference3 = (shared_ptr<graphics::TextureAtlasReference>*)local_48.data();
        eastl::move<shared_ptr<graphics::TextureAtlasReference>*, shared_ptr<graphics::TextureAtlasReference>*>(
            textureAtlasReference1, textureAtlasReference2, textureAtlasReference3);
        this_00->reset_lose_memory();
        iVar2 = local_48.end();
        local_48.clear();
        (*((lVar1 + 120))) -= iVar2;
    }

    // 0x100840c40
    void BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance,
                                            MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::
        OnDestroy<BatchDestroy<
            eastl::vector<std::unique_ptr<graphics::BillboardBatchInstance,
                                          MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>>>(
            BatchDestroy<eastl::vector<
                std::unique_ptr<graphics::BillboardBatchInstance,
                                MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>>&
                batchDestroy) {
        long lVar1;
        long lVar2;
        unique_ptr<graphics::BillboardBatchInstance,
                   MakeUniquePool<graphics::BillboardBatchInstance, _64>::UniquePoolDeleter>* billboardBatchInstance1;
        unique_ptr<graphics::BillboardBatchInstance,
                   MakeUniquePool<graphics::BillboardBatchInstance, _64>::UniquePoolDeleter>* billboardBatchInstance2;
        back_insert_iterator<eastl::vector<std::unique_ptr<
            graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, _64>::UniquePoolDeleter>>
                                 _>* back_insert_iterator;
        vector<eastl::pair<int, int>>* this_00;

        scoped_lock<std::mutex> local_30(*((this + 56)));
        if (UseDestroyList() != '\0') {
            this_00 = (vector<eastl::pair<int, int>>*)(this + 16);
            lVar1 = this_00->size();
            lVar2 = batchDestroy.size();
            this_00->reserve(lVar1 + lVar2);
            billboardBatchInstance1 =
                (unique_ptr<graphics::BillboardBatchInstance,
                            MakeUniquePool<graphics::BillboardBatchInstance, _64>::UniquePoolDeleter>*)
                    batchDestroy.HeapBeginPtr();
            billboardBatchInstance2 =
                (unique_ptr<graphics::BillboardBatchInstance,
                            MakeUniquePool<graphics::BillboardBatchInstance, _64>::UniquePoolDeleter>*)
                    batchDestroy.end();
            back_insert_iterator =
                (back_insert_iterator<eastl::vector<
                     std::unique_ptr<graphics::BillboardBatchInstance,
                                     MakeUniquePool<graphics::BillboardBatchInstance, _64>::UniquePoolDeleter>>
                                          _>*)
                    std::back_inserter<eastl::vector<
                        std::unique_ptr<graphics::BillboardBatchInstance,
                                        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>>(
                        *this_00);
            eastl::move<std::unique_ptr<graphics::BillboardBatchInstance,
                                        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>*,
                        std::back_insert_iterator<eastl::vector<
                            std::unique_ptr<graphics::BillboardBatchInstance,
                                            MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>>>(
                billboardBatchInstance1, billboardBatchInstance2, back_insert_iterator);
            batchDestroy.reset_lose_memory();
        }
    }

    // 0x100840d90
    BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance,
                                       MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::
        BatchDestroyHelper() {
        function<void()>* this_01;
        function<void()> local_68[56];
        long local_30;

        new (this) AutoSingleton<BatchDestroyHelper<
            std::unique_ptr<graphics::BillboardBatchInstance,
                            MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>>();
        new (this) render::RenderDeviceOnEndFrame(true);
        *(uint8_t**)this = PTR_vtable_100ee70a0 + 16;
        new ((this + 16)) eastl::vector();
        this[48] = (BatchDestroyHelper<
                    std::unique_ptr<graphics::BillboardBatchInstance,
                                    MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>)1;
        new ((this + 56)) std::mutex();
        atomic<int>* this_00 = (atomic<int>*)(this + 120);
        new (this_00) std::atomic<int>(0);
        auto pBVar1 = this_00->Instance();
        std::function<void()>::function<
            BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance,
                                               MakeUniquePool<graphics::BillboardBatchInstance, 64>::
                                                   UniquePoolDeleter>>::BatchDestroyHelper()::_lambda() _1_,
            void>(local_68, (_lambda___1_*)this);
        pBVar1->AddPauseCallback(*local_68);
        this_01 = local_68;
        this_01->~function();
        pBVar1 = (BatchDestroyManager*)this_01->Instance();
        std::function<void()>::function<
            BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance,
                                               MakeUniquePool<graphics::BillboardBatchInstance, 64>::
                                                   UniquePoolDeleter>>::BatchDestroyHelper()::_lambda() _2_,
            void>(local_68, (_lambda___2_*)this);
        pBVar1->AddResumeCallback(*local_68);
    }

    // 0x100840f70
    void BatchDestroyHelper<
        std::unique_ptr<graphics::BillboardBatchInstance,
                        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::OnEndFrame() {
        Flush(this);
    }

    // 0x1008418d0
    void BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance,
                                            MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::
        BatchDestroyHelper()::{
        lambda() #1
    }
    ::operator()() const {
        OnPause(*(BatchDestroyHelper<
                  std::unique_ptr<graphics::BillboardBatchInstance,
                                  MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>**)this);
    }

    // 0x1008418e0
    void BatchDestroyHelper<
        std::unique_ptr<graphics::BillboardBatchInstance,
                        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::OnPause() {

        scoped_lock<std::mutex> local_18(*((this + 56)));
        this[48] = (BatchDestroyHelper<
                    std::unique_ptr<graphics::BillboardBatchInstance,
                                    MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>)0;
        ((this + 16))->clear();
        WaitDestroyList(this);
    }

    // 0x100841930
    void BatchDestroyHelper<
        std::unique_ptr<graphics::BillboardBatchInstance,
                        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::WaitDestroyList() {
        type* extraout_RDX;
        type* arg2;
        type* extraout_RDX_00;
        memory_order memory_order;
        uint8_t* in_RSI;
        duration<long long, std::ratio<1l, 1000l>> local_30;

        __atomic_base* this_01 = (__atomic_base*)(this + 120);
        int iVar1 = std::__atomic_base::operator_cast_to_int(this_01);
        uint8_t* arg1 = PTR_ITERATION_WAIT_TIME_MS_100ee95b8;
        memory_order = (memory_order)in_RSI;
        int iVar3 = 0;
        if (iVar1 != 0) {
            arg2 = extraout_RDX;
            do {
                memory_order = (memory_order)in_RSI;
                if (iVar3 == 1000)
                    goto LAB_100841996;
                in_RSI = arg1;
                local_30.duration<int>(*arg1, arg2);
                std::this_thread::sleep_for<long long, std::ratio<1l, 1000l>>(local_30);
                iVar1 = std::__atomic_base::operator_cast_to_int(this_01);
                memory_order = (memory_order)in_RSI;
                iVar3 = iVar3 + 1;
                arg2 = extraout_RDX_00;
            } while (iVar1 != 0);
        }
        if (iVar3 < 1000) {
            return;
        }
    LAB_100841996:
        auto this_00 = logger::default_logger();
        uint32_t uVar2 = this_01->load(memory_order);
        this_00->Log(false, 2,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                     "BatchDestroy.h",
                     220, "BatchDestroy took too long, %d entries remaining", uVar2);
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                        "BatchDestroy.h",
                        221, nullptr);
    }

    // 0x100842300
    BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance,
                                       MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::
        ~BatchDestroyHelper() {
        *(uint8_t**)this = PTR_vtable_100ee70a0 + 16;
        ((this + 56))->~mutex();
        ((this + 16))->~vector();
    }

    // 0x100842340
    void BatchDestroyHelper<
        std::unique_ptr<graphics::BillboardBatchInstance,
                        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::Flush() {
        ReturnValue local_20;

        auto this_00 = Instance();
        auto this_01 = this_00->SSOBeginPtr();
        BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance,
                                           MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>*
            local_18 = this;
        ThreadPool::AddTask<BatchDestroyHelper<std::unique_ptr<
            graphics::BillboardBatchInstance,
            MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::Flush()::_lambda() _1_>(
            &local_20, this_01, "Flush", (_lambda___1_*)&local_18);
    }

    // 0x1008429f0
    void BatchDestroyHelper<
        std::unique_ptr<graphics::BillboardBatchInstance,
                        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::Flush()::{
        lambda() #1
    }
    ::operator()() const {
        unique_ptr<graphics::BillboardBatchInstance,
                   MakeUniquePool<graphics::BillboardBatchInstance, _64>::UniquePoolDeleter>* billboardBatchInstance1;
        unique_ptr<graphics::BillboardBatchInstance,
                   MakeUniquePool<graphics::BillboardBatchInstance, _64>::UniquePoolDeleter>* billboardBatchInstance2;
        unique_ptr<graphics::BillboardBatchInstance,
                   MakeUniquePool<graphics::BillboardBatchInstance, _64>::UniquePoolDeleter>* billboardBatchInstance3;

        long lVar1 = *(long*)this;
        Array<std::unique_ptr<graphics::BillboardBatchInstance,
                              MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>,
              BucketAllocatorEASTL>
            local_48;
        scoped_lock<std::mutex> local_30(*((lVar1 + 56)));
        vector<eastl::pair<int, int>>* this_00 = (vector<eastl::pair<int, int>>*)(lVar1 + 16);
        int iVar2 = this_00->size();
        (*((lVar1 + 120))) += iVar2;
        local_48.set_max_size(this_00->size(), 0);
        billboardBatchInstance1 =
            (unique_ptr<graphics::BillboardBatchInstance,
                        MakeUniquePool<graphics::BillboardBatchInstance, _64>::UniquePoolDeleter>*)
                this_00->HeapBeginPtr();
        billboardBatchInstance2 =
            (unique_ptr<graphics::BillboardBatchInstance,
                        MakeUniquePool<graphics::BillboardBatchInstance, _64>::UniquePoolDeleter>*)this_00->end();
        billboardBatchInstance3 =
            (unique_ptr<graphics::BillboardBatchInstance,
                        MakeUniquePool<graphics::BillboardBatchInstance, _64>::UniquePoolDeleter>*)local_48.data();
        eastl::move<std::unique_ptr<graphics::BillboardBatchInstance,
                                    MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>*,
                    std::unique_ptr<graphics::BillboardBatchInstance,
                                    MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>*>(
            billboardBatchInstance1, billboardBatchInstance2, billboardBatchInstance3);
        this_00->reset_lose_memory();
        iVar2 = local_48.end();
        local_48.clear();
        (*((lVar1 + 120))) -= iVar2;
    }

} // namespace jag::graphicutils

namespace jag::fixedfunction {
    // 0x100848fb0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::Model::ConstructFinishAndUpload()::$_2, void>(
        graphics::Model::ConstructFinishAndUpload()::$_2&& arg1) {
        *(uint64_t*)this = 0;
        *(Model**)(this + 16) = arg1.field_0;
        *(void (**)(...))(this + 144) = function<graphics::Model::ConstructFinishAndUpload()::$_2, void>(
            graphics::Model::ConstructFinishAndUpload()::$_2&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<graphics::Model::ConstructFinishAndUpload()::$_2, void>(
            graphics::Model::ConstructFinishAndUpload()::$_2&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<graphics::Model::ConstructFinishAndUpload()::$_2, void>(
            graphics::Model::ConstructFinishAndUpload()::$_2&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100848ff0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::Model::ConstructFinishAndUpload()::$_2, void>(graphics::Model::ConstructFinishAndUpload()::$_2&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100849000
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::Model::ConstructFinishAndUpload()::$_2, void>(graphics::Model::ConstructFinishAndUpload()::$_2&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100849010
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::Model::ConstructFinishAndUpload()::$_2, void>(graphics::Model::ConstructFinishAndUpload()::$_2&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100849020
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::Model::ConstructFinishAndUpload()::$_2, void>(graphics::Model::ConstructFinishAndUpload()::$_2&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        graphics::Model::ConstructFinishAndUpload()::$_2::operator()((__2*)this, arg1);
    }

    // 0x100849040
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::Model::ConstructFinishAndUpload()::$_2, void>(graphics::Model::ConstructFinishAndUpload()::$_2&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x10084a500
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<graphics::ModelMaterial::DestroyEnvironmentMap()::$_4,
                                                                void>(
        graphics::ModelMaterial::DestroyEnvironmentMap()::$_4&& arg1) {
        *(uint64_t*)this = 0;
        graphics::ModelMaterial::DestroyEnvironmentMap()::$_4::__4((__4*)(this + 16), (__4*)arg1);
        *(void (**)(...))(this + 144) = function<graphics::ModelMaterial::DestroyEnvironmentMap()::$_4, void>(
            graphics::ModelMaterial::DestroyEnvironmentMap()::$_4&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<graphics::ModelMaterial::DestroyEnvironmentMap()::$_4, void>(
            graphics::ModelMaterial::DestroyEnvironmentMap()::$_4&&)::{
            lambda(void*, BaseApp*) #1
        }
        ::BaseApp__;
        *(void (**)(...))(this + 152) = function<graphics::ModelMaterial::DestroyEnvironmentMap()::$_4, void>(
            graphics::ModelMaterial::DestroyEnvironmentMap()::$_4&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x10084a570
    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<graphics::ModelMaterial::DestroyEnvironmentMap()::$_4,
                                                                void>(
        graphics::ModelMaterial::DestroyEnvironmentMap()::$_4&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x10084a580
    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<graphics::ModelMaterial::DestroyEnvironmentMap()::$_4,
                                                                void>(
        graphics::ModelMaterial::DestroyEnvironmentMap()::$_4&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        graphics::ModelMaterial::DestroyEnvironmentMap()::$_4::__4(arg1, (__4*)this);
    }

    // 0x10084a5c0
    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<graphics::ModelMaterial::DestroyEnvironmentMap()::$_4,
                                                                void>(
        graphics::ModelMaterial::DestroyEnvironmentMap()::$_4&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::__invoke(void* arg1, BaseApp* baseApp) {}

    // 0x10084a5d0
    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<graphics::ModelMaterial::DestroyEnvironmentMap()::$_4,
                                                                void>(
        graphics::ModelMaterial::DestroyEnvironmentMap()::$_4&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {
        operator()(this, arg1);
    }

    // 0x10084a5e0
    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<graphics::ModelMaterial::DestroyEnvironmentMap()::$_4,
                                                                void>(
        graphics::ModelMaterial::DestroyEnvironmentMap()::$_4&&)::{
        lambda(void*) #1
    }
    ::operator()(void* arg1) const {
        graphics::ModelMaterial::DestroyEnvironmentMap()::$_4::~__4((__4*)this);
    }

} // namespace jag::fixedfunction

namespace jag::graphics {
    class GeometryBatch_DE {
    public:
        // virtual methods in vtable order
        virtual ~GeometryBatch_DE();
        virtual void Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                            const SceneViewData& sceneViewData, RenderPassType renderPassType,
                            EffectManager& effectManager);
        virtual void GetRenderer(RT7Core& rt7Core);
        GeometryBatch_DE(const math::OBB& obb, float arg2, const eastl::vector_map<int, FaceGroupRenderMasks>* arg3,
                         unsigned int arg4, GeometryBatchInstance& geometryBatchInstance);

    private:
        uint8_t _unknown_8[96];
        vector_map<int, FaceGroupRenderMasks>* field_104;
        unsigned int field_112;
        uint8_t _unknown_116[4];
        GeometryBatchInstance* field_120;
        uint8_t _unknown_128[16];
        uint16_t field_144;
        uint8_t _unknown_146[14];
    };

    class SharedVertexCountNormal {
    public:
        SharedVertexCountNormal();

        uint8_t _unknown_0[12];
    };

    // 0x1008382f0
    GeometryBatch_DE::GeometryBatch_DE(const math::OBB& obb, float arg2,
                                       const eastl::vector_map<int, FaceGroupRenderMasks>* arg3, unsigned int arg4,
                                       GeometryBatchInstance& geometryBatchInstance) {
        unsigned int arg2_00 = geometryBatchInstance.field_8.GetPos();
        new (this) DrawableElementPool<GeometryBatch_DE>(obb, arg2_00, arg2);
        field_104 = arg3;
        field_112 = arg4;
        field_120 = geometryBatchInstance;
        new (&field_128) math::Vector3T();
        field_144 = 0;
    }

    // 0x100838380
    DrawableElementPool<GeometryBatch_DE>::DrawableElementPool(const math::OBB& obb, unsigned int arg2, float arg3)
        : DrawableElement(obb, arg2, arg3) {}

    // 0x1008383b0
    void DrawableElementPool<GeometryBatch_DE>::Release() {
        GetDrawableElementPool();
        if (((FastPool<GeometryBatch_DE, int>*)&GetDrawableElementPool()::pool)->is_owner(this) == '\0') {
            if (this != nullptr) {
                ~();
            }
        } else {
            ((FastPool<GeometryBatch_DE, int>*)&GetDrawableElementPool()::pool)->Destroy(this);
        }
    }

    // 0x100838400
    void GeometryBatch_DE::Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                                  const SceneViewData& sceneViewData, RenderPassType renderPassType,
                                  EffectManager& effectManager) {
        auto geometryBatch_DE = rt7Core.GetGeometryBatchRenderer();
        auto drawCallState_00 = rt7Core.GetRenderContext();
        GeometryBatchRenderer::Render(*geometryBatch_DE, *this, *drawCallState_00, drawCallState,
                                      (RenderPassType)sceneViewData, *((EffectManager*)(unsigned long)renderPassType));
    }

    // 0x100838460
    void GeometryBatch_DE::GetRenderer(RT7Core& rt7Core) {
        rt7Core.GetGeometryBatchRenderer();
    }

    // 0x1008499c0
    SharedVertexCountNormal::SharedVertexCountNormal() {
        new (&field_4) math::Vector3T();
    }

} // namespace jag::graphics

// 0x1008390f0
void cos(float arg1) {
    _cosf();
}

// 0x100839100
void sin(float arg1) {
    _sinf();
}

namespace jag::math {
    // 0x100839110
    Matrix44T<float> operator* <float>(const Matrix44T<float>& matrix44, const Matrix33T<float>& matrix33) {
        Matrix33T<float>* in_RDX;

        float* pfVar73 = &matrix33[0];
        float fVar1 = *pfVar73;
        pfVar73 = (float*)(*in_RDX)[0];
        float fVar2 = *pfVar73;
        long lVar74 = matrix33[0];
        float fVar3 = *(float*)(lVar74 + 4);
        pfVar73 = (float*)(*in_RDX)[1];
        float fVar4 = *pfVar73;
        lVar74 = matrix33[0];
        float fVar5 = *(float*)(lVar74 + 8);
        pfVar73 = (float*)(*in_RDX)[2];
        float fVar6 = *pfVar73;
        pfVar73 = &matrix33[0];
        float fVar7 = *pfVar73;
        lVar74 = (*in_RDX)[0];
        float fVar8 = *(float*)(lVar74 + 4);
        lVar74 = matrix33[0];
        float fVar9 = *(float*)(lVar74 + 4);
        lVar74 = (*in_RDX)[1];
        float fVar10 = *(float*)(lVar74 + 4);
        lVar74 = matrix33[0];
        float fVar11 = *(float*)(lVar74 + 8);
        lVar74 = (*in_RDX)[2];
        float fVar12 = *(float*)(lVar74 + 4);
        pfVar73 = &matrix33[0];
        float fVar13 = *pfVar73;
        lVar74 = (*in_RDX)[0];
        float fVar14 = *(float*)(lVar74 + 8);
        lVar74 = matrix33[0];
        float fVar15 = *(float*)(lVar74 + 4);
        lVar74 = (*in_RDX)[1];
        float fVar16 = *(float*)(lVar74 + 8);
        lVar74 = matrix33[0];
        float fVar17 = *(float*)(lVar74 + 8);
        lVar74 = (*in_RDX)[2];
        float fVar18 = *(float*)(lVar74 + 8);
        lVar74 = matrix33[0];
        float arg4 = *(float*)(lVar74 + 12);
        pfVar73 = &matrix33[1];
        float fVar19 = *pfVar73;
        pfVar73 = (float*)(*in_RDX)[0];
        float fVar20 = *pfVar73;
        lVar74 = matrix33[1];
        float fVar21 = *(float*)(lVar74 + 4);
        pfVar73 = (float*)(*in_RDX)[1];
        float fVar22 = *pfVar73;
        lVar74 = matrix33[1];
        float fVar23 = *(float*)(lVar74 + 8);
        pfVar73 = (float*)(*in_RDX)[2];
        float fVar24 = *pfVar73;
        pfVar73 = &matrix33[1];
        float fVar25 = *pfVar73;
        lVar74 = (*in_RDX)[0];
        float fVar26 = *(float*)(lVar74 + 4);
        lVar74 = matrix33[1];
        float fVar27 = *(float*)(lVar74 + 4);
        lVar74 = (*in_RDX)[1];
        float fVar28 = *(float*)(lVar74 + 4);
        lVar74 = matrix33[1];
        float fVar29 = *(float*)(lVar74 + 8);
        lVar74 = (*in_RDX)[2];
        float fVar30 = *(float*)(lVar74 + 4);
        pfVar73 = &matrix33[1];
        float fVar31 = *pfVar73;
        lVar74 = (*in_RDX)[0];
        float fVar32 = *(float*)(lVar74 + 8);
        lVar74 = matrix33[1];
        float fVar33 = *(float*)(lVar74 + 4);
        lVar74 = (*in_RDX)[1];
        float fVar34 = *(float*)(lVar74 + 8);
        lVar74 = matrix33[1];
        float fVar35 = *(float*)(lVar74 + 8);
        lVar74 = (*in_RDX)[2];
        float fVar36 = *(float*)(lVar74 + 8);
        lVar74 = matrix33[1];
        float arg8 = *(float*)(lVar74 + 12);
        pfVar73 = &matrix33[2];
        float fVar37 = *pfVar73;
        pfVar73 = (float*)(*in_RDX)[0];
        float fVar38 = *pfVar73;
        lVar74 = matrix33[2];
        float fVar39 = *(float*)(lVar74 + 4);
        pfVar73 = (float*)(*in_RDX)[1];
        float fVar40 = *pfVar73;
        lVar74 = matrix33[2];
        float fVar41 = *(float*)(lVar74 + 8);
        pfVar73 = (float*)(*in_RDX)[2];
        float fVar42 = *pfVar73;
        pfVar73 = &matrix33[2];
        float fVar43 = *pfVar73;
        lVar74 = (*in_RDX)[0];
        float fVar44 = *(float*)(lVar74 + 4);
        lVar74 = matrix33[2];
        float fVar45 = *(float*)(lVar74 + 4);
        lVar74 = (*in_RDX)[1];
        float fVar46 = *(float*)(lVar74 + 4);
        lVar74 = matrix33[2];
        float fVar47 = *(float*)(lVar74 + 8);
        lVar74 = (*in_RDX)[2];
        float fVar48 = *(float*)(lVar74 + 4);
        pfVar73 = &matrix33[2];
        float fVar49 = *pfVar73;
        lVar74 = (*in_RDX)[0];
        float fVar50 = *(float*)(lVar74 + 8);
        lVar74 = matrix33[2];
        float fVar51 = *(float*)(lVar74 + 4);
        lVar74 = (*in_RDX)[1];
        float fVar52 = *(float*)(lVar74 + 8);
        lVar74 = matrix33[2];
        float fVar53 = *(float*)(lVar74 + 8);
        lVar74 = (*in_RDX)[2];
        float fVar54 = *(float*)(lVar74 + 8);
        lVar74 = matrix33[2];
        float arg12 = *(float*)(lVar74 + 12);
        pfVar73 = &matrix33[3];
        float fVar55 = *pfVar73;
        pfVar73 = (float*)(*in_RDX)[0];
        float fVar56 = *pfVar73;
        lVar74 = matrix33[3];
        float fVar57 = *(float*)(lVar74 + 4);
        pfVar73 = (float*)(*in_RDX)[1];
        float fVar58 = *pfVar73;
        lVar74 = matrix33[3];
        float fVar59 = *(float*)(lVar74 + 8);
        pfVar73 = (float*)(*in_RDX)[2];
        float fVar60 = *pfVar73;
        pfVar73 = &matrix33[3];
        float fVar61 = *pfVar73;
        lVar74 = (*in_RDX)[0];
        float fVar62 = *(float*)(lVar74 + 4);
        lVar74 = matrix33[3];
        float fVar63 = *(float*)(lVar74 + 4);
        lVar74 = (*in_RDX)[1];
        float fVar64 = *(float*)(lVar74 + 4);
        lVar74 = matrix33[3];
        float fVar65 = *(float*)(lVar74 + 8);
        lVar74 = (*in_RDX)[2];
        float fVar66 = *(float*)(lVar74 + 4);
        pfVar73 = &matrix33[3];
        float fVar67 = *pfVar73;
        lVar74 = (*in_RDX)[0];
        float fVar68 = *(float*)(lVar74 + 8);
        lVar74 = matrix33[3];
        float fVar69 = *(float*)(lVar74 + 4);
        lVar74 = (*in_RDX)[1];
        float fVar70 = *(float*)(lVar74 + 8);
        lVar74 = matrix33[3];
        float fVar71 = *(float*)(lVar74 + 8);
        lVar74 = (*in_RDX)[2];
        float fVar72 = *(float*)(lVar74 + 8);
        lVar74 = matrix33[3];
        new (matrix44) Matrix44T<float>(
            fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2, fVar11 * fVar12 + fVar9 * fVar10 + fVar7 * fVar8,
            fVar17 * fVar18 + fVar15 * fVar16 + fVar13 * fVar14, arg4,
            fVar23 * fVar24 + fVar21 * fVar22 + fVar19 * fVar20, fVar29 * fVar30 + fVar27 * fVar28 + fVar25 * fVar26,
            fVar35 * fVar36 + fVar33 * fVar34 + fVar31 * fVar32, arg8,
            fVar41 * fVar42 + fVar39 * fVar40 + fVar37 * fVar38, fVar47 * fVar48 + fVar45 * fVar46 + fVar43 * fVar44,
            fVar53 * fVar54 + fVar51 * fVar52 + fVar49 * fVar50, arg12,
            fVar59 * fVar60 + fVar57 * fVar58 + fVar55 * fVar56, fVar65 * fVar66 + fVar63 * fVar64 + fVar61 * fVar62,
            fVar71 * fVar72 + fVar69 * fVar70 + fVar67 * fVar68, *(float*)(lVar74 + 12));
        return matrix44;
    }

} // namespace jag::math
