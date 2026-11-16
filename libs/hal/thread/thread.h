// libs/hal/thread/thread.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100b25ce0
    void
    SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<FileSystem::DeleteDirectory(Filename const&)::$_0>,
                                                     SafeBucketAllocatorSTL<std::packaged_task<int()>>, int()>>::
        allocate(
            unsigned long arg1,
            std::__packaged_task_func<std::__bind<FileSystem::DeleteDirectory(Filename const&)::$_0>,
                                      SafeBucketAllocatorSTL<std::packaged_task<int()>>, int()>* packaged_task_func) {
        BucketManager::Allocate(320, 4, 8);
    }

    // 0x100b260b0
    void
    SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<FileSystem::DeleteDirectory(Filename const&)::$_0>,
                                                     SafeBucketAllocatorSTL<std::packaged_task<int()>>, int()>>::
        deallocate(
            std::__packaged_task_func<std::__bind<FileSystem::DeleteDirectory(Filename const&)::$_0>,
                                      SafeBucketAllocatorSTL<std::packaged_task<int()>>, int()>* packaged_task_func,
            unsigned long arg2) {
        DeAllocate((void*)((long)packaged_task_func * 320), arg2);
    }

    // 0x100b26290
    void
    SafeBucketAllocatorSTL<std::__assoc_state_alloc<int, SafeBucketAllocatorSTL<std::packaged_task<int()>>>>::allocate(
        unsigned long arg1,
        std::__assoc_state_alloc<int, SafeBucketAllocatorSTL<std::packaged_task<int()>>>* assoc_state_alloc) {
        BucketManager::Allocate((long)assoc_state_alloc * 152, 4, 8);
    }

    // 0x100b265b0
    void SafeBucketAllocatorSTL<std::__assoc_state_alloc<int, SafeBucketAllocatorSTL<std::packaged_task<int()>>>>::
        deallocate(std::__assoc_state_alloc<int, SafeBucketAllocatorSTL<std::packaged_task<int()>>>* assoc_state_alloc,
                   unsigned long arg2) {
        assoc_state_alloc->DeAllocate((arg2 * 152), arg2);
    }

    // 0x100b28530
    FileSystem_SQLite* placement_new<FileSystem_SQLite, Filename const&, FileSystem::Scope&, char const*&, bool&>(
        void* arg1, const Filename& filename, FileSystem::Scope& scope, const char*& arg4, bool& arg5) {
        new (arg1) FileSystem_SQLite(filename, scope, arg4, arg5);
        return arg1;
    }

    // 0x100b28560
    ref_counter_shared<FileSystem_SQLite>*
    placement_new<ref_counter_shared<FileSystem_SQLite>, int, FileSystem_SQLite*&>(void* arg1, int&& arg2,
                                                                                   FileSystem_SQLite*& arg3) {
        new (arg1) ref_counter_shared<FileSystem_SQLite>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100b28590
    ref_counter_shared<FileSystem_SQLite>::ref_counter_shared(unsigned long arg1, FileSystem_SQLite* fileSystem_SQLite)
        : ref_counter_base() {}

    // 0x100b285d0
    void ref_counter_shared<FileSystem_SQLite>::DeleteData() {
        long lVar1;
        ref_counter_shared<FileSystem_SQLite> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (**(void (**)(...))(*(long*)((long)&(this[3]._vptr)->_dtor + lVar1) + 16))(
                        (long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<FileSystem_SQLite> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 2592;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100b29420
    char const* GetErrorString<eastl::fixed_string<char, 256>>(eastl::fixed_string<char, 256>& str, int arg2) {
        char local_228[520];

        if (_strerror_r(arg2, local_228, 512) == 0) {
            str = local_228;
        } else {
            str.clear();
        }
        if (str.empty() != '\0') {
            str.reserve(16);
            str.sprintf("Error (%d)", (unsigned long)(unsigned int)arg2);
        }
        return (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

} // namespace jag

namespace jag::filesystem {
    // 0x100b230c0
    QueueItem::QueueItem() : field_0(-1), field_336(0) {
        field_544->XPlotBlender<int>(0);
    }

    // 0x100b23c10
    QueueItem::~QueueItem() {
        field_496.~function();
        field_448.~function();
        field_400.~function();
        field_352.~function();
        field_312.~Array();
        field_8.~pair();
    }

    // 0x100b23de0
    QueueItem::QueueItem(const QueueItem& queueItem)
        : field_0(queueItem.field_0), field_8(&queueItem.field_8), field_312(&queueItem.field_312),
          field_336(queueItem.field_336), field_352(&queueItem.field_352), field_400(queueItem.field_400),
          field_448(queueItem.field_448), field_496(queueItem.field_496) {
        *(uint32_t*)field_544 = *(uint32_t*)queueItem.field_544;
    }

    // 0x100b29a40
    QueueItem::QueueItem(QueueItem&& queueItem)
        : field_0(queueItem.field_0), field_8(&queueItem.field_8), field_312(&queueItem.field_312),
          field_336(queueItem.field_336), field_352(&queueItem.field_352), field_400(queueItem.field_400),
          field_448(queueItem.field_448), field_496(queueItem.field_496) {
        *(uint32_t*)field_544 = *(uint32_t*)queueItem.field_544;
    }

} // namespace jag::filesystem

namespace jag::this_thread {
    // 0x100b209b0
    void SetThreadName(const eastl::string& str) {
        SetThreadName((char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin());
    }

} // namespace jag::this_thread
