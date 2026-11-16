// libs/hal/thread/thread.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100b25ce0, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<FileSystem::DeleteDirectory(Filename const&)::$_0>, SafeBucketAllocatorSTL<std::packaged_task<int ()> >, int ()> >::allocate(unsigned long, std::__packaged_task_func<std::__bind<FileSystem::DeleteDirectory(Filename const&)::$_0>, SafeBucketAllocatorSTL<std::packaged_task<int ()> >, int ()>*)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<FileSystem::DeleteDirectory(Filename
   const&)::$_0>, SafeBucketAllocatorSTL<std::packaged_task<int ()> >, int ()>
   >::allocate(unsigned long,
   std::__packaged_task_func<std::__bind<FileSystem::DeleteDirectory(Filename
   const&)::$_0>, SafeBucketAllocatorSTL<std::packaged_task<int ()> >, int ()>*) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<FileSystem::DeleteDirectory(Filename_const&)::$_0>,
        SafeBucketAllocatorSTL<std::packaged_task<int()>>, int()>>::allocate(ulong param_1,
                                                                             __packaged_task_func* param_2) {
        BucketManager::Allocate(320, 4, 8);
    }

    // 0x100b260b0, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<FileSystem::DeleteDirectory(Filename const&)::$_0>, SafeBucketAllocatorSTL<std::packaged_task<int ()> >, int ()> >::deallocate(std::__packaged_task_func<std::__bind<FileSystem::DeleteDirectory(Filename const&)::$_0>, SafeBucketAllocatorSTL<std::packaged_task<int ()> >, int ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<FileSystem::DeleteDirectory(Filename
   const&)::$_0>, SafeBucketAllocatorSTL<std::packaged_task<int ()> >, int ()>
   >::deallocate(std::__packaged_task_func<std::__bind<FileSystem::DeleteDirectory(Filename
   const&)::$_0>, SafeBucketAllocatorSTL<std::packaged_task<int ()> >, int ()>*, unsigned long)
    */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<FileSystem::DeleteDirectory(Filename_const&)::$_0>,
        SafeBucketAllocatorSTL<std::packaged_task<int()>>, int()>>::deallocate(__packaged_task_func* param_1,
                                                                               ulong param_2) {
        BucketManager::DeAllocate(param_1, param_2 * 320);
    }

    // 0x100b26290, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__assoc_state_alloc<int, SafeBucketAllocatorSTL<std::packaged_task<int ()> > > >::allocate(unsigned long, std::__assoc_state_alloc<int, SafeBucketAllocatorSTL<std::packaged_task<int ()> > >*)
    /* SafeBucketAllocatorSTL<std::__assoc_state_alloc<int,
   SafeBucketAllocatorSTL<std::packaged_task<int ()> > > >::allocate(unsigned long,
   std::__assoc_state_alloc<int, SafeBucketAllocatorSTL<std::packaged_task<int ()> > >*) */

    void jag::SafeBucketAllocatorSTL<std::__assoc_state_alloc<int, SafeBucketAllocatorSTL<std::packaged_task<int()>>>>::
        allocate(ulong param_1, __assoc_state_alloc* param_2) {
        BucketManager::Allocate((long)param_2 * 152, 4, 8);
    }

    // 0x100b265b0, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__assoc_state_alloc<int, SafeBucketAllocatorSTL<std::packaged_task<int ()> > > >::deallocate(std::__assoc_state_alloc<int, SafeBucketAllocatorSTL<std::packaged_task<int ()> > >*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__assoc_state_alloc<int,
   SafeBucketAllocatorSTL<std::packaged_task<int ()> > >
   >::deallocate(std::__assoc_state_alloc<int, SafeBucketAllocatorSTL<std::packaged_task<int
   ()> > >*, unsigned long) */

    void jag::SafeBucketAllocatorSTL<std::__assoc_state_alloc<int, SafeBucketAllocatorSTL<std::packaged_task<int()>>>>::
        deallocate(SafeBucketAllocatorSTL<
                       std::__assoc_state_alloc<int, SafeBucketAllocatorSTL<std::packaged_task<int()>>>>* this,
                   __assoc_state_alloc* param_1, ulong param_2) {
        BucketManager::DeAllocate(param_1, param_2 * 152);
    }

    // 0x100b28530, 48 bytes, inline, placed by debug map only (low confidence)
    // FileSystem_SQLite* placement_new<FileSystem_SQLite, Filename const&, FileSystem::Scope&, char const*&, bool&>(void*, Filename const&, FileSystem::Scope&, char const*&, bool&)
    FileSystem_SQLite* jag::placement_new<FileSystem_SQLite, Filename_const&, FileSystem::Scope&, char const*&, bool&>(
        void* param_1, Filename* param_2, Scope* param_3, char** param_4, bool* param_5) {
        FileSystem_SQLite::FileSystem_SQLite(param_1, param_2, *(undefined4*)param_3, *param_4, *param_5);
        return param_1;
    }

    // 0x100b28560, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<FileSystem_SQLite>* placement_new<ref_counter_shared<FileSystem_SQLite>, int, FileSystem_SQLite*&>(void*, int&&, FileSystem_SQLite*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<FileSystem_SQLite>, int, FileSystem_SQLite*&>(void* param_1, int* param_2,
                                                                                   FileSystem_SQLite** param_3) {
        ref_counter_shared<FileSystem_SQLite>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100b28580, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<FileSystem_SQLite>::ref_counter_shared(unsigned long, FileSystem_SQLite*): jumps straight to the base-object constructor

    // 0x100b28590, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<FileSystem_SQLite>::ref_counter_shared(unsigned long, FileSystem_SQLite*)
    void ref_counter_shared<FileSystem_SQLite>::ref_counter_shared(ulong param_1, FileSystem_SQLite* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7260 + 16;
        *(ulong*)(this + 16) = param_1;
        *(FileSystem_SQLite**)(this + 24) = param_2;
    }

    // 0x100b285d0, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<FileSystem_SQLite>::DeleteData()
    void ref_counter_shared<FileSystem_SQLite>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (**(code**)(*(long*)(*(long*)(this + 24) + lVar1) + 16))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 2592;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100b29420, 176 bytes, inline, placed by debug map only (low confidence)
    // char const* GetErrorString<eastl::fixed_string<char, 256, true, eastl::allocator> >(eastl::fixed_string<char, 256, true, eastl::allocator>&, int)
    char* GetErrorString<eastl::fixed_string<char, 256, true, eastl::allocator>>(fixed_string* param_1, int param_2) {
        char* pcVar3;
        char local_228[520];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (_strerror_r(param_2, local_228, 512) == 0) {
            eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(
                (fixed_string<char, 16, true, eastl::allocator>*)param_1, local_228);
        } else {
            eastl::string::clear();
        }
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() !=
            '\0') {
            param_1->reserve(16);
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf((char*)param_1, "Error (%d)", (ulong)(uint)param_2);
        }
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return pcVar3;
    }

} // namespace jag

namespace jag::filesystem {
    // 0x100b21e50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // QueueItem::QueueItem(QueueItem const&): jumps straight to the base-object constructor

    // 0x100b230c0, 224 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // QueueItem::QueueItem()
    void QueueItem::QueueItem() {
        field_0 = 4294967295;
        new (field_8) Filename();
        new (&field_312) Array<unsigned char, SafeBucketAllocatorEASTL>();
        field_336 = 0;
        std::function<void()>::function((function<void()>*)&field_352);
        std::function<void(Filename_const&)>::function((function<void(Filename_const&)>*)&field_400);
        std::function<void(Filename_const&, Array<unsigned char, eastl::allocator> const&)>::function(
            (function<void(Filename_const&, Array<unsigned char, eastl::allocator> const&)>*)&field_448);
        std::function<void(Filename_const&, int, eastl::stringconst&)>::function(
            (function<void(Filename_const&, int, eastl::stringconst&)>*)&field_496);
        oldscape::graphics::XPlotBlender<oldscape::graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<oldscape::graphics::XPlot_NormalAlpha>*)field_544, 0);
    }

    // 0x100b23c10, 96 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // QueueItem::~QueueItem()
    void QueueItem::~QueueItem() {
        std::function<void(Filename_const&, int, eastl::stringconst&)>::~function(
            (function<void(Filename_const&, int, eastl::stringconst&)>*)&field_496);
        std::function<void(Filename_const&, Array<unsigned char, eastl::allocator> const&)>::~function(
            (function<void(Filename_const&, Array<unsigned char, eastl::allocator> const&)>*)&field_448);
        std::function<void(Filename_const&)>::~function((function<void(Filename_const&)>*)&field_400);
        std::function<void()>::~function((function<void()>*)&field_352);
        (&field_312)->~Array();
        field_8->~pair();
    }

    // 0x100b23de0, 272 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // QueueItem::QueueItem(QueueItem const&)
    void QueueItem::QueueItem(QueueItem* param_1) {
        field_0 = param_1->field_0;
        new (field_8, (Filename*)param_1->field_8) Filename();
        new (&field_312, (Array*)&param_1->field_312) Array<unsigned char, SafeBucketAllocatorEASTL>();
        field_336 = param_1->field_336;
        std::function<void()>::function((function<void()>*)&field_352, (function*)&param_1->field_352);
        std::function<void(Filename_const&)>::function((function<void(Filename_const&)>*)&field_400,
                                                       (function*)&param_1->field_400);
        std::function<void(Filename_const&, Array<unsigned char, eastl::allocator> const&)>::function(
            (function<void(Filename_const&, Array<unsigned char, eastl::allocator> const&)>*)&field_448,
            (function*)&param_1->field_448);
        std::function<void(Filename_const&, int, eastl::stringconst&)>::function(
            (function<void(Filename_const&, int, eastl::stringconst&)>*)&field_496, (function*)&param_1->field_496);
        *(undefined4*)field_544 = *(undefined4*)param_1->field_544;
    }

    // 0x100b29a30, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // QueueItem::QueueItem(QueueItem&&): jumps straight to the base-object constructor

    // 0x100b29a40, 160 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // QueueItem::QueueItem(QueueItem&&)
    void QueueItem::QueueItem(QueueItem* param_1) {
        field_0 = param_1->field_0;
        new (field_8, (Filename*)param_1->field_8) Filename();
        new (&field_312, (Array*)&param_1->field_312) Array<unsigned char, SafeBucketAllocatorEASTL>();
        field_336 = param_1->field_336;
        std::function<void()>::function((function<void()>*)&field_352, (function*)&param_1->field_352);
        std::function<void(Filename_const&)>::function((function<void(Filename_const&)>*)&field_400,
                                                       (function*)&param_1->field_400);
        std::function<void(Filename_const&, Array<unsigned char, eastl::allocator> const&)>::function(
            (function<void(Filename_const&, Array<unsigned char, eastl::allocator> const&)>*)&field_448,
            (function*)&param_1->field_448);
        std::function<void(Filename_const&, int, eastl::stringconst&)>::function(
            (function<void(Filename_const&, int, eastl::stringconst&)>*)&field_496, (function*)&param_1->field_496);
        *(undefined4*)field_544 = *(undefined4*)param_1->field_544;
    }

} // namespace jag::filesystem

namespace jag::this_thread {
    // 0x100b209b0, 32 bytes, inline, placed by debug map only (low confidence)
    // SetThreadName(eastl::string const&)
    void SetThreadName(basic_string* param_1) {
        char* pcVar1;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        SetThreadName(pcVar1);
    }

} // namespace jag::this_thread
