// libs/hal/thread/pthread/ThreadInc_Pthread.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100b02020
    std::thread MakeRealTimeThread<TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0>(
        TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0&& arg1) {
        __0* in_RSI;
        sched_param local_20;

        arg1.thread<TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::__0&, , void>(in_RSI);
        local_20.sched_priority = 1;
        local_20.__opaque[0] = '\0';
        local_20.__opaque[1] = '\0';
        local_20.__opaque[2] = '\0';
        local_20.__opaque[3] = '\0';
        _pthread_setschedparam((pthread_t)arg1.native_handle(), 4, &local_20);
        return arg1;
    }

    // 0x100b020d0
    shared_ptr_if_not_array<std::thread>::type
    make_shared<std::thread, TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0>(
        TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0&& arg1) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        thread* local_30[2];

        auto arg1_00 = aligned_alloc(40, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<std::thread>::type result;
        } else {
            local_30[0] = placement_new<std::thread, (char const*)->AddTaskImpl(shared_ptr<Task> const&)::__0>(
                (void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<std::thread>, int, std::thread*&>(arg1_00, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x100b021a0
    std::thread* placement_new<std::thread, std::thread>(void* arg1, std::thread&& thread) {
        new (arg1) std::thread(thread);
        return arg1;
    }

    // 0x100b021c0
    ref_counter_shared<std::thread>*
    placement_new<ref_counter_shared<std::thread>, int, std::thread*&>(void* arg1, int&& arg2, std::thread*& arg3) {
        new (arg1) ref_counter_shared<std::thread>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100b02220
    ref_counter_shared<std::thread>::ref_counter_shared(unsigned long arg1, std::thread* thread) : ref_counter_base() {}

    // 0x100b02260
    void ref_counter_shared<std::thread>::DeleteData() {
        ref_counter_shared<std::thread> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    (((long)&(this[3]._vptr)->_dtor + lVar2))->~thread();
                    prVar1 = (ref_counter_shared<std::thread> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 8;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100b02a30
    std::thread* placement_new<std::thread, TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0>(
        void* arg1, TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0&& arg2) {
        std::thread::thread<TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::__0, , void>(arg1, arg2);
        return arg1;
    }

} // namespace jag
