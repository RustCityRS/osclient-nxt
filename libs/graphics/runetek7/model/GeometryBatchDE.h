// libs/graphics/runetek7/model/GeometryBatchDE.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag {
    // 0x100838a60, 32 bytes, inline, placed by debug map only (low confidence)
    // render::Query* placement_new<render::Query>(void*)
    Query* placement_new<render::Query>(void* param_1) {
        render::Query::Query(param_1);
        return param_1;
    }

    // 0x100838a80, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::Query>* placement_new<ref_counter_shared<render::Query>, int, render::Query*&>(void*, int&&, render::Query*&)
    ref_counter_shared* placement_new<ref_counter_shared<render::Query>, int, render::Query*&>(void* param_1,
                                                                                               int* param_2,
                                                                                               Query** param_3) {
        ref_counter_shared<render::Query>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100838aa0, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<render::Query>(ref_counter_base*, render::Query*, render::Query::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<render::Query>(ref_counter_base* param_1, Query* param_2,
                                                              enable_shared_type* param_3) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48[16];
        weak_ptr<oldscape::dash3d::Decor> local_38[24];

        if (param_1 != (ref_counter_base*)0) {
            param_1->IncRef();
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
                local_48, (hash_node*)param_1, (hash_node**)param_2);
            weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_38, (weak_ptr*)local_48);
            (&param_2->field_8, (weak_ptr*)local_38)->__internal_set_weak_ptr();
            local_38->~weak_ptr();
            local_48->~shared_ptr();
        }
    }

    // 0x100838b40, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::Query>::ref_counter_shared(unsigned long, render::Query*): jumps straight to the base-object constructor

    // 0x100838b50, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::Query>::ref_counter_shared(unsigned long, render::Query*)
    void ref_counter_shared<render::Query>::ref_counter_shared(ulong param_1, Query* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee74e0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Query**)(this + 24) = param_2;
    }

    // 0x100838b90, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::Query>::DeleteData()
    void ref_counter_shared<render::Query>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~Query();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 184;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100838f50, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::GeometryQuery* placement_new<graphics::GeometryQuery, render::QueryType&, bool&>(void*, render::QueryType&, bool&)
    GeometryQuery* placement_new<graphics::GeometryQuery, render::QueryType&, bool&>(void* param_1, QueryType* param_2,
                                                                                     bool* param_3) {
        graphics::GeometryQuery::GeometryQuery(param_1, *(undefined4*)param_2, *param_3);
        return param_1;
    }

    // 0x100838f70, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::GeometryQuery>* placement_new<ref_counter_shared<graphics::GeometryQuery>, int, graphics::GeometryQuery*&>(void*, int&&, graphics::GeometryQuery*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<graphics::GeometryQuery>, int, graphics::GeometryQuery*&>(
        void* param_1, int* param_2, GeometryQuery** param_3) {
        ref_counter_shared<graphics::GeometryQuery>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100838f90, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::GeometryQuery>::ref_counter_shared(unsigned long, graphics::GeometryQuery*): jumps straight to the base-object constructor

    // 0x100838fa0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::GeometryQuery>::ref_counter_shared(unsigned long, graphics::GeometryQuery*)
    void ref_counter_shared<graphics::GeometryQuery>::ref_counter_shared(ulong param_1, GeometryQuery* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7530 + 16;
        *(ulong*)(this + 16) = param_1;
        *(GeometryQuery**)(this + 24) = param_2;
    }

    // 0x100838fe0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::GeometryQuery>::DeleteData()
    void ref_counter_shared<graphics::GeometryQuery>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~GeometryQuery();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 32;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100844a10, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::ModelParticleSource* placement_new<graphics::ModelParticleSource, graphics::ModelParticleSource&>(void*, graphics::ModelParticleSource&)
    ModelParticleSource*
    placement_new<graphics::ModelParticleSource, graphics::ModelParticleSource&>(void* param_1,
                                                                                 ModelParticleSource* param_2) {
        graphics::ModelParticleSource::ModelParticleSource(param_1, param_2);
        return param_1;
    }

    // 0x100844a30, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::ModelParticleSource, MakeSharedPool<graphics::ModelParticleSource, 768> >* placement_new<MakeSharedPoolRefCounter<graphics::ModelParticleSource, MakeSharedPool<graphics::ModelParticleSource, 768> >, MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData*&, graphics::ModelParticleSource*>(void*, MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData*&, graphics::ModelParticleSource*&&)
    MakeSharedPoolRefCounter* jag::placement_new<
        MakeSharedPoolRefCounter<graphics::ModelParticleSource, MakeSharedPool<graphics::ModelParticleSource, 768>>,
        MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData*&, graphics::ModelParticleSource*>(
        void* param_1, RefCounterAndData** param_2, ModelParticleSource** param_3) {
        MakeSharedPoolRefCounter<graphics::ModelParticleSource, MakeSharedPool<graphics::ModelParticleSource, 768>>::
            MakeSharedPoolRefCounter(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1008450d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::ModelParticleSource, MakeSharedPool<graphics::ModelParticleSource, 768> >::MakeSharedPoolRefCounter(void*, graphics::ModelParticleSource*): jumps straight to the base-object constructor

    // 0x1008450e0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::ModelParticleSource, MakeSharedPool<graphics::ModelParticleSource, 768> >::MakeSharedPoolRefCounter(void*, graphics::ModelParticleSource*)
    void
    jag::MakeSharedPoolRefCounter<graphics::ModelParticleSource, MakeSharedPool<graphics::ModelParticleSource, 768>>::
        MakeSharedPoolRefCounter(MakeSharedPoolRefCounter<graphics::ModelParticleSource,
                                                          MakeSharedPool<graphics::ModelParticleSource, 768>>* this,
                                 void* param_1, ModelParticleSource* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7bf0 + 16;
        *(void**)(this + 16) = param_1;
        *(ModelParticleSource**)(this + 24) = param_2;
    }

    // 0x100845120, 48 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::ModelParticleSource, MakeSharedPool<graphics::ModelParticleSource, 768> >::DeleteData()
    void
    jag::MakeSharedPoolRefCounter<graphics::ModelParticleSource, MakeSharedPool<graphics::ModelParticleSource, 768>>::
        DeleteData(MakeSharedPoolRefCounter<graphics::ModelParticleSource,
                                            MakeSharedPool<graphics::ModelParticleSource, 768>>* this) {
        if (*(long**)(this + 24) != (long*)0) {
            (**(code**)(**(long**)(this + 24) + 32))();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100845150, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::ModelParticleSource, MakeSharedPool<graphics::ModelParticleSource, 768> >::DeleteSelf()
    void
    jag::MakeSharedPoolRefCounter<graphics::ModelParticleSource, MakeSharedPool<graphics::ModelParticleSource, 768>>::
        DeleteSelf(MakeSharedPoolRefCounter<graphics::ModelParticleSource,
                                            MakeSharedPool<graphics::ModelParticleSource, 768>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<graphics::ModelParticleSource, 768>::deallocate(pvVar1);
    }

    // 0x100845520, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::VFXAttachmentInfo* placement_new<graphics::VFXAttachmentInfo, graphics::VFXAttachmentInfo&>(void*, graphics::VFXAttachmentInfo&)
    VFXAttachmentInfo*
    placement_new<graphics::VFXAttachmentInfo, graphics::VFXAttachmentInfo&>(void* param_1,
                                                                             VFXAttachmentInfo* param_2) {
        graphics::VFXAttachmentInfo::VFXAttachmentInfo(param_1, param_2);
        return param_1;
    }

    // 0x100845540, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::VFXAttachmentInfo, MakeSharedPool<graphics::VFXAttachmentInfo, 768> >* placement_new<MakeSharedPoolRefCounter<graphics::VFXAttachmentInfo, MakeSharedPool<graphics::VFXAttachmentInfo, 768> >, MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData*&, graphics::VFXAttachmentInfo*>(void*, MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData*&, graphics::VFXAttachmentInfo*&&)
    MakeSharedPoolRefCounter* jag::placement_new<
        MakeSharedPoolRefCounter<graphics::VFXAttachmentInfo, MakeSharedPool<graphics::VFXAttachmentInfo, 768>>,
        MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData*&, graphics::VFXAttachmentInfo*>(
        void* param_1, RefCounterAndData** param_2, VFXAttachmentInfo** param_3) {
        MakeSharedPoolRefCounter<graphics::VFXAttachmentInfo,
                                 MakeSharedPool<graphics::VFXAttachmentInfo, 768>>::MakeSharedPoolRefCounter(param_1,
                                                                                                             *param_2,
                                                                                                             *param_3);
        return param_1;
    }

    // 0x100845680, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::VFXAttachmentInfo, MakeSharedPool<graphics::VFXAttachmentInfo, 768> >::MakeSharedPoolRefCounter(void*, graphics::VFXAttachmentInfo*): jumps straight to the base-object constructor

    // 0x100845690, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::VFXAttachmentInfo, MakeSharedPool<graphics::VFXAttachmentInfo, 768> >::MakeSharedPoolRefCounter(void*, graphics::VFXAttachmentInfo*)
    void jag::MakeSharedPoolRefCounter<graphics::VFXAttachmentInfo, MakeSharedPool<graphics::VFXAttachmentInfo, 768>>::
        MakeSharedPoolRefCounter(MakeSharedPoolRefCounter<graphics::VFXAttachmentInfo,
                                                          MakeSharedPool<graphics::VFXAttachmentInfo, 768>>* this,
                                 void* param_1, VFXAttachmentInfo* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7be8 + 16;
        *(void**)(this + 16) = param_1;
        *(VFXAttachmentInfo**)(this + 24) = param_2;
    }

    // 0x1008456d0, 48 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::VFXAttachmentInfo, MakeSharedPool<graphics::VFXAttachmentInfo, 768> >::DeleteData()
    void jag::MakeSharedPoolRefCounter<graphics::VFXAttachmentInfo, MakeSharedPool<graphics::VFXAttachmentInfo, 768>>::
        DeleteData(MakeSharedPoolRefCounter<graphics::VFXAttachmentInfo,
                                            MakeSharedPool<graphics::VFXAttachmentInfo, 768>>* this) {
        if (*(VFXAttachmentInfo**)(this + 24) != (VFXAttachmentInfo*)0) {
            (*(VFXAttachmentInfo**)(this + 24))->~VFXAttachmentInfo();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100845700, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::VFXAttachmentInfo, MakeSharedPool<graphics::VFXAttachmentInfo, 768> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<graphics::VFXAttachmentInfo, MakeSharedPool<graphics::VFXAttachmentInfo, 768>>::
        DeleteSelf(MakeSharedPoolRefCounter<graphics::VFXAttachmentInfo,
                                            MakeSharedPool<graphics::VFXAttachmentInfo, 768>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<graphics::VFXAttachmentInfo, 768>::deallocate(pvVar1);
    }

    // 0x1008464e0, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::VFXAttachmentInfo* placement_new<graphics::VFXAttachmentInfo, int, graphics::VFXAttachmentInfo::VertexBonePos, graphics::VFXAttachmentInfo::VertexBonePos, graphics::VFXAttachmentInfo::VertexBonePos>(void*, int&&, graphics::VFXAttachmentInfo::VertexBonePos&&, graphics::VFXAttachmentInfo::VertexBonePos&&, graphics::VFXAttachmentInfo::VertexBonePos&&)
    VFXAttachmentInfo*
    jag::placement_new<graphics::VFXAttachmentInfo, int, graphics::VFXAttachmentInfo::VertexBonePos,
                       graphics::VFXAttachmentInfo::VertexBonePos, graphics::VFXAttachmentInfo::VertexBonePos>(
        void* param_1, int* param_2, VertexBonePos* param_3, VertexBonePos* param_4, VertexBonePos* param_5) {
        graphics::VFXAttachmentInfo::VFXAttachmentInfo(param_1, *param_2, param_3, param_4, param_5);
        return param_1;
    }

    // 0x100846500, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::ModelParticleSource* placement_new<graphics::ModelParticleSource, unsigned short&, graphics::ModelParticleSource::VertexBonePos, graphics::ModelParticleSource::VertexBonePos, graphics::ModelParticleSource::VertexBonePos>(void*, unsigned short&, graphics::ModelParticleSource::VertexBonePos&&, graphics::ModelParticleSource::VertexBonePos&&, graphics::ModelParticleSource::VertexBonePos&&)
    ModelParticleSource*
    jag::placement_new<graphics::ModelParticleSource, unsigned short&, graphics::ModelParticleSource::VertexBonePos,
                       graphics::ModelParticleSource::VertexBonePos, graphics::ModelParticleSource::VertexBonePos>(
        void* param_1, ushort* param_2, VertexBonePos* param_3, VertexBonePos* param_4, VertexBonePos* param_5) {
        graphics::ModelParticleSource::ModelParticleSource(param_1, (uint)*param_2, param_3, param_4, param_5);
        return param_1;
    }

    // 0x100846520, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::ModelParticleSource* placement_new<graphics::ModelParticleSource, unsigned short&, graphics::ModelParticleSource::VertexBonePos>(void*, unsigned short&, graphics::ModelParticleSource::VertexBonePos&&)
    ModelParticleSource*
    jag::placement_new<graphics::ModelParticleSource, unsigned short&, graphics::ModelParticleSource::VertexBonePos>(
        void* param_1, ushort* param_2, VertexBonePos* param_3) {
        graphics::ModelParticleSource::ModelParticleSource(param_1, (uint)*param_2, param_3);
        return param_1;
    }

} // namespace jag

namespace jag::graphicutils {
    // 0x10083a660, 192 bytes, inline, placed by debug map only (low confidence)
    // void BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference> >::OnDestroy<BatchDestroy<eastl::fixed_vector<shared_ptr<graphics::TextureAtlasReference>, 1ul, true, eastl::allocator> > >(BatchDestroy<eastl::fixed_vector<shared_ptr<graphics::TextureAtlasReference>, 1ul, true, eastl::allocator> >&)
    void BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::OnDestroy<
        BatchDestroy<eastl::fixed_vector<shared_ptr<graphics::TextureAtlasReference>, 1ul, true, eastl::allocator>>>(
        BatchDestroy* param_1) {
        long lVar1;
        long lVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_00;
        scoped_lock<std::mutex> local_30[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)(this + 56));
        if (UseDestroyList(this) != '\0') {
            this_00 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)(this + 16);
            lVar1 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this_00);
            lVar2 = param_1->size();
            this_00->reserve(lVar1 + lVar2);
            uVar3 = param_1->HeapBeginPtr();
            uVar4 = param_1->end();
            uVar5 = std::back_inserter<eastl::vector<shared_ptr<graphics::TextureAtlasReference>, eastl::allocator>>(
                (vector*)this_00);
            eastl::move<shared_ptr<graphics::TextureAtlasReference>*,
                        std::back_insert_iterator<
                            eastl::vector<shared_ptr<graphics::TextureAtlasReference>, eastl::allocator>>>(uVar3, uVar4,
                                                                                                           uVar5);
            param_1->reset_lose_memory();
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
    }

    // 0x10083a740, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference> >::BatchDestroyHelper(): jumps straight to the base-object constructor

    // 0x10083a780, 304 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference> >::BatchDestroyHelper()
    void BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::BatchDestroyHelper() {
        BatchDestroyManager* pBVar1;
        BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>* this_00;
        function<void()>* this_01;
        function local_68[56];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (this) AutoSingleton<BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>>();
        new (this) render::RenderDeviceOnEndFrame(true);
        *(undefined**)this = PTR_vtable_100ee7090 + 16;
        new ((this + 16)) eastl::vector<shared_ptr<graphics::TextureAtlasReference>, eastl::allocator>();
        this[48] = (BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>)1;
        new ((this + 56)) std::mutex();
        this_00 = this + 120;
        std::atomic<int>::atomic((int)this_00);
        pBVar1 = (BatchDestroyManager*)this_00->Instance();
        std::function<void()>::function<
            BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::BatchDestroyHelper()::_lambda() _1_, void>(
            local_68, this);
        pBVar1->AddPauseCallback(local_68);
        this_01 = (function<void()>*)local_68;
        std::function<void()>::~function(this_01);
        pBVar1 = (BatchDestroyManager*)this_01->Instance();
        std::function<void()>::function<
            BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::BatchDestroyHelper()::_lambda() _2_, void>(
            local_68, this);
        pBVar1->AddResumeCallback(local_68);
        std::function<void()>::~function((function<void()>*)local_68);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10083a940, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference> >::~BatchDestroyHelper(): jumps straight to the base-object destructor

    // 0x10083a950, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference> >::~BatchDestroyHelper()
    void BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::~BatchDestroyHelper() {
        ~BatchDestroyHelper(this);
        operator_delete(this);
    }

    // 0x10083a970, 16 bytes, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference> >::OnEndFrame()
    void BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::OnEndFrame() {
        Flush(this);
    }

    // 0x10083b420, 16 bytes, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference> >::BatchDestroyHelper()::{lambda()#1}::operator()() const
    /* BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>
   >::BatchDestroyHelper()::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

    void BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::BatchDestroyHelper()::{
        lambda() #1
    }
    ::operator()() {
        OnPause(*(BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>**)this);
    }

    // 0x10083b430, 80 bytes, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference> >::OnPause()
    void BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::OnPause() {
        scoped_lock<std::mutex> local_18[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_18, (mutex*)(this + 56));
        this[48] = (BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>)0;
        ((this + 16))->clear();
        WaitDestroyList(this);
        std::scoped_lock<std::mutex>::~scoped_lock(local_18);
    }

    // 0x10083b480, 208 bytes, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference> >::WaitDestroyList()
    /* WARNING: Removing unreachable block (ram,4303598926) */
    /* BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>
   >::WaitDestroyList() */

    void BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::WaitDestroyList() {
        undefined* puVar1;
        int iVar2;
        undefined4 uVar3;
        undefined8 uVar4;
        int iVar5;
        __atomic_base* this_00;
        duration local_30[8];

        this_00 = (__atomic_base*)(this + 120);
        iVar2 = std::__atomic_base::operator_cast_to_int(this_00);
        puVar1 = PTR_ITERATION_WAIT_TIME_MS_100ee95b0;
        iVar5 = 0;
        if (iVar2 != 0) {
            do {
                if (iVar5 == 1000)
                    goto LAB_10083b4e6;
                std::chrono::duration<long long, std::ratio<1l, 1000l>>::duration<int>((int*)local_30, (type*)puVar1);
                std::this_thread::sleep_for<long long, std::ratio<1l, 1000l>>(local_30);
                iVar2 = std::__atomic_base::operator_cast_to_int(this_00);
                iVar5 = iVar5 + 1;
            } while (iVar2 != 0);
        }
        if (iVar5 < 1000) {
            return;
        }
    LAB_10083b4e6:
        uVar4 = logger::default_logger();
        uVar3 = std::__atomic_base<int, false>::load(this_00);
        logger::Logger::Log(uVar4, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                            "graphicutils/BatchDestroy.h",
                            220, "BatchDestroy took too long, %d entries remaining", uVar3);
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                        "BatchDestroy.h",
                        221, (char*)0);
    }

    // 0x10083c270, 64 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference> >::~BatchDestroyHelper()
    void BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::~BatchDestroyHelper() {
        *(undefined**)this = PTR_vtable_100ee7090 + 16;
        ((this + 56))->~mutex();
        ((this + 16))->~vector();
        ~RenderDeviceOnEndFrame();
        ~AutoSingleton();
    }

    // 0x10083c2b0, 80 bytes, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference> >::Flush()
    void BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush() {
        Layout* this_00;
        vector* pvVar1;
        type* in_RSI;
        undefined1 local_20[8];
        BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>* local_18;

        this_00 = (Layout*)Instance();
        pvVar1 = eastl::string::Layout::SSOBeginPtr(this_00, in_RSI);
        local_18 = this;
        ThreadPool::AddTask<BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::_lambda() _1_>(
            (ThreadPool*)local_20, (char*)pvVar1, (_lambda___1_*)"Flush");
        local_20->~future();
    }

    // 0x10083cc60, 256 bytes, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference> >::Flush()::{lambda()#1}::operator()() const
    /* BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>
   >::Flush()::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

    void BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
        lambda() #1
    }
    ::operator()() {
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_00;
        long lVar1;
        int iVar2;
        ulong uVar3;
        shared_ptr* psVar4;
        shared_ptr* psVar5;
        shared_ptr* psVar6;
        Array<shared_ptr<graphics::TextureAtlasReference>, BucketAllocatorEASTL> local_48[24];
        scoped_lock<std::mutex> local_30[8];

        lVar1 = *(long*)this;
        Array<shared_ptr<graphics::TextureAtlasReference>, BucketAllocatorEASTL>::Array(local_48);
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)(lVar1 + 56));
        this_00 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)(lVar1 + 16);
        iVar2 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this_00);
        std::__atomic_base<int, true>::operator+=((__atomic_base<int, true>*)(lVar1 + 120), iVar2);
        uVar3 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this_00);
        local_48->set_max_size(uVar3, 0);
        psVar4 = (shared_ptr*)this_00->HeapBeginPtr();
        psVar5 = (shared_ptr*)this_00->end();
        psVar6 = (shared_ptr*)local_48->data();
        eastl::move<shared_ptr<graphics::TextureAtlasReference>*, shared_ptr<graphics::TextureAtlasReference>*>(
            psVar4, psVar5, psVar6);
        this_00->reset_lose_memory();
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        iVar2 = local_48->end();
        local_48->clear();
        std::__atomic_base<int, true>::operator-=((__atomic_base<int, true>*)(lVar1 + 120), iVar2);
        local_48->~Array();
    }

    // 0x100840c40, 192 bytes, inline, placed by debug map only (low confidence)
    // void BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter> >::OnDestroy<BatchDestroy<eastl::vector<std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>, eastl::allocator> > >(BatchDestroy<eastl::vector<std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>, eastl::allocator> >&)
    /* void BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance,
   MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>
   >::OnDestroy<BatchDestroy<eastl::vector<std::unique_ptr<graphics::BillboardBatchInstance,
   MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>,
   eastl::allocator> >
   >(BatchDestroy<eastl::vector<std::unique_ptr<graphics::BillboardBatchInstance,
   MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>,
   eastl::allocator> >&) */

    void graphicutils::BatchDestroyHelper<std::unique_ptr<
        graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::
        OnDestroy<BatchDestroy<
            eastl::vector<std::unique_ptr<graphics::BillboardBatchInstance,
                                          MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>,
                          eastl::allocator>>>(
            BatchDestroyHelper<
                std::unique_ptr<graphics::BillboardBatchInstance,
                                MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>* this,
            BatchDestroy* param_1) {
        long lVar1;
        long lVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        char cVar6;
        vector<eastl::pair<int, int>, eastl::allocator>* this_00;
        scoped_lock<std::mutex> local_30[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)(this + 56));
        cVar6 = UseDestroyList();
        if (cVar6 != '\0') {
            this_00 = (vector<eastl::pair<int, int>, eastl::allocator>*)(this + 16);
            lVar1 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(this_00);
            lVar2 = param_1->size();
            this_00->reserve(lVar1 + lVar2);
            uVar3 = param_1->HeapBeginPtr();
            uVar4 = param_1->end();
            uVar5 = std::back_inserter<
                eastl::vector<std::unique_ptr<graphics::BillboardBatchInstance,
                                              MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>,
                              eastl::allocator>>((vector*)this_00);
            eastl::move<std::unique_ptr<graphics::BillboardBatchInstance,
                                        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>*,
                        std::back_insert_iterator<eastl::vector<
                            std::unique_ptr<graphics::BillboardBatchInstance,
                                            MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>,
                            eastl::allocator>>>(uVar3, uVar4, uVar5);
            param_1->reset_lose_memory();
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
    }

    // 0x100840d50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter> >::BatchDestroyHelper(): jumps straight to the base-object constructor

    // 0x100840d90, 304 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter> >::BatchDestroyHelper()
    /* BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance,
   MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>
   >::BatchDestroyHelper() */

    void graphicutils::BatchDestroyHelper<std::unique_ptr<
        graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::
        BatchDestroyHelper(
            BatchDestroyHelper<
                std::unique_ptr<graphics::BillboardBatchInstance,
                                MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>* this) {
        BatchDestroyManager* pBVar1;
        BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance,
                                           MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>*
            this_00;
        function<void()>* this_01;
        function local_68[56];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (this) AutoSingleton<BatchDestroyHelper<
            std::unique_ptr<graphics::BillboardBatchInstance,
                            MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>>();
        new (this) render::RenderDeviceOnEndFrame(true);
        *(undefined**)this = PTR_vtable_100ee70a0 + 16;
        new ((this + 16))
            eastl::vector<std::unique_ptr<graphics::BillboardBatchInstance,
                                          MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>,
                          eastl::allocator>();
        this[48] = (BatchDestroyHelper<
                    std::unique_ptr<graphics::BillboardBatchInstance,
                                    MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>)1;
        new ((this + 56)) std::mutex();
        this_00 = this + 120;
        std::atomic<int>::atomic((int)this_00);
        pBVar1 = (BatchDestroyManager*)this_00->Instance();
        std::function<void()>::function<
            BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance,
                                               MakeUniquePool<graphics::BillboardBatchInstance, 64>::
                                                   UniquePoolDeleter>>::BatchDestroyHelper()::_lambda() _1_,
            void>(local_68, this);
        pBVar1->AddPauseCallback(local_68);
        this_01 = (function<void()>*)local_68;
        std::function<void()>::~function(this_01);
        pBVar1 = (BatchDestroyManager*)this_01->Instance();
        std::function<void()>::function<
            BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance,
                                               MakeUniquePool<graphics::BillboardBatchInstance, 64>::
                                                   UniquePoolDeleter>>::BatchDestroyHelper()::_lambda() _2_,
            void>(local_68, this);
        pBVar1->AddResumeCallback(local_68);
        std::function<void()>::~function((function<void()>*)local_68);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100840f40, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter> >::~BatchDestroyHelper(): jumps straight to the base-object destructor

    // 0x100840f50, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter> >::~BatchDestroyHelper()
    /* BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance,
   MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>
   >::~BatchDestroyHelper() */

    void graphicutils::BatchDestroyHelper<std::unique_ptr<
        graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::
        ~BatchDestroyHelper(
            BatchDestroyHelper<
                std::unique_ptr<graphics::BillboardBatchInstance,
                                MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>* this) {
        ~BatchDestroyHelper(this);
        operator_delete(this);
    }

    // 0x100840f70, 16 bytes, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter> >::OnEndFrame()
    /* BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance,
   MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>
   >::OnEndFrame() */

    void graphicutils::BatchDestroyHelper<std::unique_ptr<
        graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::
        OnEndFrame(BatchDestroyHelper<
                   std::unique_ptr<graphics::BillboardBatchInstance,
                                   MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>* this) {
        Flush(this);
    }

    // 0x1008418d0, 16 bytes, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter> >::BatchDestroyHelper()::{lambda()#1}::operator()() const
    /* BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance,
   MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>
   >::BatchDestroyHelper()::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

    void graphicutils::BatchDestroyHelper<std::unique_ptr<
        graphics::BillboardBatchInstance,
        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::BatchDestroyHelper()::{
        lambda() #1
    }
    ::operator()() {
        OnPause(*(BatchDestroyHelper<
                  std::unique_ptr<graphics::BillboardBatchInstance,
                                  MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>**)this);
    }

    // 0x1008418e0, 80 bytes, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter> >::OnPause()
    /* BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance,
   MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter> >::OnPause()
    */

    void graphicutils::BatchDestroyHelper<std::unique_ptr<
        graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::
        OnPause(BatchDestroyHelper<
                std::unique_ptr<graphics::BillboardBatchInstance,
                                MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>* this) {
        scoped_lock<std::mutex> local_18[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_18, (mutex*)(this + 56));
        this[48] = (BatchDestroyHelper<
                    std::unique_ptr<graphics::BillboardBatchInstance,
                                    MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>)0;
        ((this + 16))->clear();
        WaitDestroyList(this);
        std::scoped_lock<std::mutex>::~scoped_lock(local_18);
    }

    // 0x100841930, 208 bytes, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter> >::WaitDestroyList()
    /* WARNING: Removing unreachable block (ram,4303624702) */
    /* BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance,
   MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>
   >::WaitDestroyList() */

    void graphicutils::BatchDestroyHelper<std::unique_ptr<
        graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::
        WaitDestroyList(
            BatchDestroyHelper<
                std::unique_ptr<graphics::BillboardBatchInstance,
                                MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>* this) {
        undefined* puVar1;
        int iVar2;
        undefined4 uVar3;
        undefined8 uVar4;
        int iVar5;
        __atomic_base* this_00;
        duration local_30[8];

        this_00 = (__atomic_base*)(this + 120);
        iVar2 = std::__atomic_base::operator_cast_to_int(this_00);
        puVar1 = PTR_ITERATION_WAIT_TIME_MS_100ee95b8;
        iVar5 = 0;
        if (iVar2 != 0) {
            do {
                if (iVar5 == 1000)
                    goto LAB_100841996;
                std::chrono::duration<long long, std::ratio<1l, 1000l>>::duration<int>((int*)local_30, (type*)puVar1);
                std::this_thread::sleep_for<long long, std::ratio<1l, 1000l>>(local_30);
                iVar2 = std::__atomic_base::operator_cast_to_int(this_00);
                iVar5 = iVar5 + 1;
            } while (iVar2 != 0);
        }
        if (iVar5 < 1000) {
            return;
        }
    LAB_100841996:
        uVar4 = logger::default_logger();
        uVar3 = std::__atomic_base<int, false>::load(this_00);
        logger::Logger::Log(uVar4, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                            "graphicutils/BatchDestroy.h",
                            220, "BatchDestroy took too long, %d entries remaining", uVar3);
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                        "BatchDestroy.h",
                        221, (char*)0);
    }

    // 0x100842300, 64 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter> >::~BatchDestroyHelper()
    /* BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance,
   MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>
   >::~BatchDestroyHelper() */

    void graphicutils::BatchDestroyHelper<std::unique_ptr<
        graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::
        ~BatchDestroyHelper(
            BatchDestroyHelper<
                std::unique_ptr<graphics::BillboardBatchInstance,
                                MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>* this) {
        *(undefined**)this = PTR_vtable_100ee70a0 + 16;
        ((this + 56))->~mutex();
        ((this + 16))->~vector();
        ~RenderDeviceOnEndFrame();
        ~AutoSingleton();
    }

    // 0x100842340, 80 bytes, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter> >::Flush()
    /* BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance,
   MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter> >::Flush() */

    void graphicutils::BatchDestroyHelper<std::unique_ptr<
        graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::
        Flush(BatchDestroyHelper<
              std::unique_ptr<graphics::BillboardBatchInstance,
                              MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>* this) {
        Layout* this_00;
        vector* pvVar1;
        type* in_RSI;
        undefined1 local_20[8];
        BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance,
                                           MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>*
            local_18;

        this_00 = (Layout*)Instance();
        pvVar1 = eastl::string::Layout::SSOBeginPtr(this_00, in_RSI);
        local_18 = this;
        ThreadPool::AddTask<BatchDestroyHelper<std::unique_ptr<
            graphics::BillboardBatchInstance,
            MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::Flush()::_lambda() _1_>(
            (ThreadPool*)local_20, (char*)pvVar1, (_lambda___1_*)"Flush");
        local_20->~future();
    }

    // 0x1008429f0, 256 bytes, inline, placed by debug map only (low confidence)
    // BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter> >::Flush()::{lambda()#1}::operator()() const
    /* BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance,
   MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>
   >::Flush()::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

    void graphicutils::BatchDestroyHelper<
        std::unique_ptr<graphics::BillboardBatchInstance,
                        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::Flush()::{
        lambda() #1
    }
    ::operator()() {
        vector<eastl::pair<int, int>, eastl::allocator>* this_00;
        long lVar1;
        int iVar2;
        ulong uVar3;
        unique_ptr* puVar4;
        unique_ptr* puVar5;
        unique_ptr* puVar6;
        Array<std::unique_ptr<graphics::BillboardBatchInstance,
                              MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>,
              BucketAllocatorEASTL>
            local_48[24];
        scoped_lock<std::mutex> local_30[8];

        lVar1 = *(long*)this;
        Array<std::unique_ptr<graphics::BillboardBatchInstance,
                              MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>,
              BucketAllocatorEASTL>::Array(local_48);
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)(lVar1 + 56));
        this_00 = (vector<eastl::pair<int, int>, eastl::allocator>*)(lVar1 + 16);
        iVar2 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(this_00);
        std::__atomic_base<int, true>::operator+=((__atomic_base<int, true>*)(lVar1 + 120), iVar2);
        uVar3 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(this_00);
        local_48->set_max_size(uVar3, 0);
        puVar4 = (unique_ptr*)this_00->HeapBeginPtr();
        puVar5 = (unique_ptr*)this_00->end();
        puVar6 = (unique_ptr*)local_48->data();
        eastl::move<std::unique_ptr<graphics::BillboardBatchInstance,
                                    MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>*,
                    std::unique_ptr<graphics::BillboardBatchInstance,
                                    MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>*>(
            puVar4, puVar5, puVar6);
        this_00->reset_lose_memory();
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
        iVar2 = local_48->end();
        local_48->clear();
        std::__atomic_base<int, true>::operator-=((__atomic_base<int, true>*)(lVar1 + 120), iVar2);
        local_48->~Array();
    }

} // namespace jag::graphicutils

namespace jag::fixedfunction {
    // 0x100848fb0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::Model::ConstructFinishAndUpload()::$_2, void>(graphics::Model::ConstructFinishAndUpload()::$_2&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::Model::ConstructFinishAndUpload()::__2, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __2* param_1) {
        *(undefined8*)this = 0;
        *(Model**)(this + 16) = param_1->field_0;
        *(code**)(this + 144) = function<graphics::Model::ConstructFinishAndUpload()::$_2, void>(
            graphics::Model::ConstructFinishAndUpload()::$_2&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<graphics::Model::ConstructFinishAndUpload()::$_2, void>(
            graphics::Model::ConstructFinishAndUpload()::$_2&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<graphics::Model::ConstructFinishAndUpload()::$_2, void>(
            graphics::Model::ConstructFinishAndUpload()::$_2&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100848ff0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::Model::ConstructFinishAndUpload()::$_2, void>(graphics::Model::ConstructFinishAndUpload()::$_2&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::Model::ConstructFinishAndUpload()::$_2, void>(graphics::Model::ConstructFinishAndUpload()::$_2&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100849000, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::Model::ConstructFinishAndUpload()::$_2, void>(graphics::Model::ConstructFinishAndUpload()::$_2&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<graphics::Model::ConstructFinishAndUpload()::$_2,
   void>(graphics::Model::ConstructFinishAndUpload()::$_2&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::Model::ConstructFinishAndUpload()::$_2, void>(graphics::Model::ConstructFinishAndUpload()::$_2&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100849010, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::Model::ConstructFinishAndUpload()::$_2, void>(graphics::Model::ConstructFinishAndUpload()::$_2&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::Model::ConstructFinishAndUpload()::$_2, void>(graphics::Model::ConstructFinishAndUpload()::$_2&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100849020, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::Model::ConstructFinishAndUpload()::$_2, void>(graphics::Model::ConstructFinishAndUpload()::$_2&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<graphics::Model::ConstructFinishAndUpload()::$_2,
   void>(graphics::Model::ConstructFinishAndUpload()::$_2&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::Model::ConstructFinishAndUpload()::$_2, void>(graphics::Model::ConstructFinishAndUpload()::$_2&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        graphics::Model::ConstructFinishAndUpload()::$_2::operator()(param_1, param_2);
    }

    // 0x100849040, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::Model::ConstructFinishAndUpload()::$_2, void>(graphics::Model::ConstructFinishAndUpload()::$_2&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::Model::ConstructFinishAndUpload()::$_2, void>(graphics::Model::ConstructFinishAndUpload()::$_2&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x10084a500, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<graphics::ModelMaterial::DestroyEnvironmentMap()::$_4, void>(graphics::ModelMaterial::DestroyEnvironmentMap()::$_4&&)
    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<graphics::ModelMaterial::DestroyEnvironmentMap()::__4,
                                                                void>(
        function<void(BaseApp*), 128ul, 16ul, (Methods)0>* this, __4* param_1) {
        *(undefined8*)this = 0;
        graphics::ModelMaterial::DestroyEnvironmentMap()::$_4::__4((__4*)(this + 16), (__4*)param_1);
        *(code**)(this + 144) = function<graphics::ModelMaterial::DestroyEnvironmentMap()::$_4, void>(
            graphics::ModelMaterial::DestroyEnvironmentMap()::$_4&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<graphics::ModelMaterial::DestroyEnvironmentMap()::$_4, void>(
            graphics::ModelMaterial::DestroyEnvironmentMap()::$_4&&)::{
            lambda(void*, BaseApp*) #1
        }
        ::BaseApp__;
        *(code**)(this + 152) = function<graphics::ModelMaterial::DestroyEnvironmentMap()::$_4, void>(
            graphics::ModelMaterial::DestroyEnvironmentMap()::$_4&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x10084a570, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<graphics::ModelMaterial::DestroyEnvironmentMap()::$_4, void>(graphics::ModelMaterial::DestroyEnvironmentMap()::$_4&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<graphics::ModelMaterial::DestroyEnvironmentMap()::$_4,
                                                                void>(
        graphics::ModelMaterial::DestroyEnvironmentMap()::$_4&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x10084a580, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<graphics::ModelMaterial::DestroyEnvironmentMap()::$_4, void>(graphics::ModelMaterial::DestroyEnvironmentMap()::$_4&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<graphics::ModelMaterial::DestroyEnvironmentMap()::$_4,
   void>(graphics::ModelMaterial::DestroyEnvironmentMap()::$_4&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<graphics::ModelMaterial::DestroyEnvironmentMap()::$_4,
                                                                void>(
        graphics::ModelMaterial::DestroyEnvironmentMap()::$_4&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        graphics::ModelMaterial::DestroyEnvironmentMap()::$_4::__4(param_2, param_1);
    }

    // 0x10084a5c0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<graphics::ModelMaterial::DestroyEnvironmentMap()::$_4, void>(graphics::ModelMaterial::DestroyEnvironmentMap()::$_4&&)::{lambda(void*, BaseApp*)#1}::__invoke(void*, BaseApp*)
    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<graphics::ModelMaterial::DestroyEnvironmentMap()::$_4,
                                                                void>(
        graphics::ModelMaterial::DestroyEnvironmentMap()::$_4&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::BaseApp__() {}

    // 0x10084a5d0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<graphics::ModelMaterial::DestroyEnvironmentMap()::$_4, void>(graphics::ModelMaterial::DestroyEnvironmentMap()::$_4&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<graphics::ModelMaterial::DestroyEnvironmentMap()::$_4,
                                                                void>(
        graphics::ModelMaterial::DestroyEnvironmentMap()::$_4&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {
        operator()(this, param_1);
    }

    // 0x10084a5e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<graphics::ModelMaterial::DestroyEnvironmentMap()::$_4, void>(graphics::ModelMaterial::DestroyEnvironmentMap()::$_4&&)::{lambda(void*)#1}::operator()(void*) const
    /* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<graphics::ModelMaterial::DestroyEnvironmentMap()::$_4,
   void>(graphics::ModelMaterial::DestroyEnvironmentMap()::$_4&&)::{lambda(void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*)
   const */

    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<graphics::ModelMaterial::DestroyEnvironmentMap()::$_4,
                                                                void>(
        graphics::ModelMaterial::DestroyEnvironmentMap()::$_4&&)::{
        lambda(void*) #1
    }
    ::operator()(void* param_1) {
        graphics::ModelMaterial::DestroyEnvironmentMap()::$_4::~__4((__4*)this);
    }

} // namespace jag::fixedfunction

namespace jag::graphics {
    class GeometryBatch_DE {
    public:
        // virtual methods in vtable order
        virtual ~GeometryBatch_DE();
        virtual void Render(RT7Core&, render::DrawCallState const&, SceneViewData const&, RenderPassType,
                            EffectManager&);
        virtual void GetRenderer(RT7Core&);
        GeometryBatch_DE(
            math::OBB const&, float,
            eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator>> const*,
            unsigned int, GeometryBatchInstance&);

        // data members, from how the methods use this: 160 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[96];
        vector_map* field_104; // offset 104
        uint field_112;        // offset 112
        char _unknown_116[4];
        GeometryBatchInstance* field_120; // offset 120
        char _unknown_128[16];
        undefined2 field_144; // offset 144
        char _unknown_146[14];
    };

    class SharedVertexCountNormal {
    public:
        SharedVertexCountNormal();

        // data members, from how the methods use this: 12 bytes
        char _unknown_0[12];
    };

    // 0x100838280, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // GeometryBatch_DE::GeometryBatch_DE(math::OBB const&, float, eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator> > const*, unsigned int, GeometryBatchInstance&): jumps straight to the base-object constructor

    // 0x1008382f0, 144 bytes, base-object constructor, inline, placed by class name and debug map
    // GeometryBatch_DE::GeometryBatch_DE(math::OBB const&, float, eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator> > const*, unsigned int, GeometryBatchInstance&)
    void GeometryBatch_DE::GeometryBatch_DE(OBB* param_1, float param_2, vector_map* param_3, uint param_4,
                                            GeometryBatchInstance* param_5) {
        uint uVar1;

        uVar1 = (&param_5->field_8)->GetPos();
        new (this) DrawableElementPool<GeometryBatch_DE>(param_1, uVar1, param_2);
        field_0 = PTR_vtable_100ee87a0 + 16;
        field_104 = param_3;
        field_112 = param_4;
        field_120 = param_5;
        new (&field_128) math::Vector3T<int>();
        field_144 = 0;
    }

    // 0x100838380, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DrawableElementPool<GeometryBatch_DE>::DrawableElementPool(math::OBB const&, unsigned int, float)
    void DrawableElementPool<GeometryBatch_DE>::DrawableElementPool(OBB* param_1, uint param_2, float param_3) {
        new (this) DrawableElement(param_1, param_2, param_3);
        *(undefined**)this = PTR_vtable_100ee87e8 + 16;
    }

    // 0x1008383b0, 80 bytes, inline, placed by debug map only (low confidence)
    // DrawableElementPool<GeometryBatch_DE>::Release()
    void DrawableElementPool<GeometryBatch_DE>::Release() {
        char cVar1;

        GetDrawableElementPool();
        cVar1 = (&GetDrawableElementPool()::pool)->is_owner(this);
        if (cVar1 == '\0') {
            if (this != (DrawableElementPool<GeometryBatch_DE>*)0) {
                (**(code**)(*(long*)this + 8))(this);
            }
        } else {
            (&GetDrawableElementPool()::pool)->Destroy(this);
        }
    }

    // 0x100838400, 96 bytes, inline, placed by class name and debug map
    // GeometryBatch_DE::Render(RT7Core&, render::DrawCallState const&, SceneViewData const&, RenderPassType, EffectManager&)
    void GeometryBatch_DE::Render(RT7Core* param_1, undefined8 param_2, undefined8 param_3, undefined4 param_5,
                                  undefined8 param_6) {
        undefined8 uVar1;
        undefined8 uVar2;

        uVar1 = param_1->GetGeometryBatchRenderer();
        uVar2 = param_1->GetRenderContext();
        GeometryBatchRenderer::Render(uVar1, this, uVar2, param_2, param_3, param_5, param_6);
    }

    // 0x100838460, 16 bytes, inline, placed by class name and debug map
    // GeometryBatch_DE::GetRenderer(RT7Core&)
    void GeometryBatch_DE::GetRenderer(RT7Core* param_1) {
        param_1->GetGeometryBatchRenderer();
    }

    // 0x1008499b0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // SharedVertexCountNormal::SharedVertexCountNormal(): jumps straight to the base-object constructor

    // 0x1008499c0, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // SharedVertexCountNormal::SharedVertexCountNormal()
    void SharedVertexCountNormal::SharedVertexCountNormal() {
        new (&field_4) math::Vector3T<int>();
    }

} // namespace jag::graphics

// 0x1008390f0, 16 bytes, placed by debug map only (low confidence)
// cos(float)
void cos(float param_1) {
    _cosf();
}

// 0x100839100, 16 bytes, placed by debug map only (low confidence)
// sin(float)
void sin(float param_1) {
    _sinf();
}

namespace jag::math {
    // 0x100839110, 2128 bytes, inline, placed by debug map only (low confidence)
    // Matrix44T<float> operator*<float>(Matrix44T<float> const&, Matrix33T<float> const&)
    /* Matrix44T<float> TEMPNAMEPLACEHOLDERVALUE(Matrix44T<float>
   const&, Matrix33T<float> const&) */

    Matrix44T* operator*(Matrix44T* __return_storage_ptr__, math* this, Matrix44T* param_1, Matrix33T* param_2) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;
        float fVar12;
        float fVar13;
        float fVar14;
        float fVar15;
        float fVar16;
        float fVar17;
        float fVar18;
        float fVar19;
        float fVar20;
        float fVar21;
        float fVar22;
        float fVar23;
        float fVar24;
        float fVar25;
        float fVar26;
        float fVar27;
        float fVar28;
        float fVar29;
        float fVar30;
        float fVar31;
        float fVar32;
        float fVar33;
        float fVar34;
        float fVar35;
        float fVar36;
        float fVar37;
        float fVar38;
        float fVar39;
        float fVar40;
        float fVar41;
        float fVar42;
        float fVar43;
        float fVar44;
        float fVar45;
        float fVar46;
        float fVar47;
        float fVar48;
        float fVar49;
        float fVar50;
        float fVar51;
        float fVar52;
        float fVar53;
        float fVar54;
        float fVar55;
        float fVar56;
        float fVar57;
        float fVar58;
        float fVar59;
        float fVar60;
        float fVar61;
        float fVar62;
        float fVar63;
        float fVar64;
        float fVar65;
        float fVar66;
        float fVar67;
        float fVar68;
        float fVar69;
        float fVar70;
        float fVar71;
        float fVar72;
        float fVar73;
        float fVar74;
        float fVar75;
        float* pfVar76;
        long lVar77;

        pfVar76 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)this, 0);
        fVar1 = *pfVar76;
        pfVar76 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 0);
        fVar2 = *pfVar76;
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)this, 0);
        fVar3 = *(float*)(lVar77 + 4);
        pfVar76 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 1);
        fVar4 = *pfVar76;
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)this, 0);
        fVar5 = *(float*)(lVar77 + 8);
        pfVar76 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 2);
        fVar6 = *pfVar76;
        pfVar76 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)this, 0);
        fVar7 = *pfVar76;
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 0);
        fVar8 = *(float*)(lVar77 + 4);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)this, 0);
        fVar9 = *(float*)(lVar77 + 4);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 1);
        fVar10 = *(float*)(lVar77 + 4);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)this, 0);
        fVar11 = *(float*)(lVar77 + 8);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 2);
        fVar12 = *(float*)(lVar77 + 4);
        pfVar76 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)this, 0);
        fVar13 = *pfVar76;
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 0);
        fVar14 = *(float*)(lVar77 + 8);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)this, 0);
        fVar15 = *(float*)(lVar77 + 4);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 1);
        fVar16 = *(float*)(lVar77 + 8);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)this, 0);
        fVar17 = *(float*)(lVar77 + 8);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 2);
        fVar18 = *(float*)(lVar77 + 8);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)this, 0);
        fVar19 = *(float*)(lVar77 + 12);
        pfVar76 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)this, 1);
        fVar20 = *pfVar76;
        pfVar76 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 0);
        fVar21 = *pfVar76;
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)this, 1);
        fVar22 = *(float*)(lVar77 + 4);
        pfVar76 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 1);
        fVar23 = *pfVar76;
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)this, 1);
        fVar24 = *(float*)(lVar77 + 8);
        pfVar76 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 2);
        fVar25 = *pfVar76;
        pfVar76 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)this, 1);
        fVar26 = *pfVar76;
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 0);
        fVar27 = *(float*)(lVar77 + 4);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)this, 1);
        fVar28 = *(float*)(lVar77 + 4);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 1);
        fVar29 = *(float*)(lVar77 + 4);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)this, 1);
        fVar30 = *(float*)(lVar77 + 8);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 2);
        fVar31 = *(float*)(lVar77 + 4);
        pfVar76 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)this, 1);
        fVar32 = *pfVar76;
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 0);
        fVar33 = *(float*)(lVar77 + 8);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)this, 1);
        fVar34 = *(float*)(lVar77 + 4);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 1);
        fVar35 = *(float*)(lVar77 + 8);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)this, 1);
        fVar36 = *(float*)(lVar77 + 8);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 2);
        fVar37 = *(float*)(lVar77 + 8);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)this, 1);
        fVar38 = *(float*)(lVar77 + 12);
        pfVar76 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)this, 2);
        fVar39 = *pfVar76;
        pfVar76 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 0);
        fVar40 = *pfVar76;
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)this, 2);
        fVar41 = *(float*)(lVar77 + 4);
        pfVar76 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 1);
        fVar42 = *pfVar76;
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)this, 2);
        fVar43 = *(float*)(lVar77 + 8);
        pfVar76 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 2);
        fVar44 = *pfVar76;
        pfVar76 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)this, 2);
        fVar45 = *pfVar76;
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 0);
        fVar46 = *(float*)(lVar77 + 4);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)this, 2);
        fVar47 = *(float*)(lVar77 + 4);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 1);
        fVar48 = *(float*)(lVar77 + 4);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)this, 2);
        fVar49 = *(float*)(lVar77 + 8);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 2);
        fVar50 = *(float*)(lVar77 + 4);
        pfVar76 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)this, 2);
        fVar51 = *pfVar76;
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 0);
        fVar52 = *(float*)(lVar77 + 8);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)this, 2);
        fVar53 = *(float*)(lVar77 + 4);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 1);
        fVar54 = *(float*)(lVar77 + 8);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)this, 2);
        fVar55 = *(float*)(lVar77 + 8);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 2);
        fVar56 = *(float*)(lVar77 + 8);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)this, 2);
        fVar57 = *(float*)(lVar77 + 12);
        pfVar76 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)this, 3);
        fVar58 = *pfVar76;
        pfVar76 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 0);
        fVar59 = *pfVar76;
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)this, 3);
        fVar60 = *(float*)(lVar77 + 4);
        pfVar76 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 1);
        fVar61 = *pfVar76;
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)this, 3);
        fVar62 = *(float*)(lVar77 + 8);
        pfVar76 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 2);
        fVar63 = *pfVar76;
        pfVar76 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)this, 3);
        fVar64 = *pfVar76;
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 0);
        fVar65 = *(float*)(lVar77 + 4);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)this, 3);
        fVar66 = *(float*)(lVar77 + 4);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 1);
        fVar67 = *(float*)(lVar77 + 4);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)this, 3);
        fVar68 = *(float*)(lVar77 + 8);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 2);
        fVar69 = *(float*)(lVar77 + 4);
        pfVar76 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)this, 3);
        fVar70 = *pfVar76;
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 0);
        fVar71 = *(float*)(lVar77 + 8);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)this, 3);
        fVar72 = *(float*)(lVar77 + 4);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 1);
        fVar73 = *(float*)(lVar77 + 8);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)this, 3);
        fVar74 = *(float*)(lVar77 + 8);
        lVar77 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 2);
        fVar75 = *(float*)(lVar77 + 8);
        lVar77 = Matrix44T<float>::operator[]((Matrix44T<float>*)this, 3);
        new (__return_storage_ptr__) Matrix44T<float>(
            fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2, fVar11 * fVar12 + fVar9 * fVar10 + fVar7 * fVar8,
            fVar17 * fVar18 + fVar15 * fVar16 + fVar13 * fVar14, fVar19,
            fVar24 * fVar25 + fVar22 * fVar23 + fVar20 * fVar21, fVar30 * fVar31 + fVar28 * fVar29 + fVar26 * fVar27,
            fVar36 * fVar37 + fVar34 * fVar35 + fVar32 * fVar33, fVar38,
            fVar43 * fVar44 + fVar41 * fVar42 + fVar39 * fVar40, fVar49 * fVar50 + fVar47 * fVar48 + fVar45 * fVar46,
            fVar55 * fVar56 + fVar53 * fVar54 + fVar51 * fVar52, fVar57,
            fVar62 * fVar63 + fVar60 * fVar61 + fVar58 * fVar59, fVar68 * fVar69 + fVar66 * fVar67 + fVar64 * fVar65,
            fVar74 * fVar75 + fVar72 * fVar73 + fVar70 * fVar71, *(float*)(lVar77 + 12));
        return __return_storage_ptr__;
    }

} // namespace jag::math
