// libs/hal/thread/pthread/ThreadInc_Pthread.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100b02020, 96 bytes, inline, placed by debug map only (low confidence)
    // std::thread MakeRealTimeThread<TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0>(TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0&&)
    /* std::thread MakeRealTimeThread<TaskRunner::AddTaskImpl(char const*,
   shared_ptr<Task> const&)::$_0>(TaskRunner::AddTaskImpl(char const*,
   shared_ptr<Task> const&)::$_0&&) */

    jag* jag::MakeRealTimeThread<TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::__0>(__0* param_1) {
        pthread_t p_Var1;
        sched_param local_20;

        std::thread::thread<TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::__0&, , void>((thread*)this,
                                                                                                         param_1);
        local_20.sched_priority = 1;
        local_20.__opaque[0] = '\0';
        local_20.__opaque[1] = '\0';
        local_20.__opaque[2] = '\0';
        local_20.__opaque[3] = '\0';
        p_Var1 = (pthread_t)native_handle();
        _pthread_setschedparam(p_Var1, 4, &local_20);
        return this;
    }

    // 0x100b020d0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<std::thread>::type make_shared<std::thread, TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0>(TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0&&)
    /* shared_ptr_if_not_array<std::thread>::type make_shared<std::thread,
   TaskRunner::AddTaskImpl(char const*, shared_ptr<Task>
   const&)::$_0>(TaskRunner::AddTaskImpl(char const*, shared_ptr<Task>
   const&)::$_0&&) */

    jag*
    jag::make_shared<std::thread, TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::__0>(__0* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        thread* local_30[2];

        pvVar1 = (void*)aligned_alloc(40, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<std::thread, (char const*)->AddTaskImpl(shared_ptr<Task> const&)::__0>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<std::thread>, int, std::thread*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x100b021a0, 32 bytes, inline, placed by debug map only (low confidence)
    // std::thread* placement_new<std::thread, std::thread>(void*, std::thread&&)
    /* std::thread* placement_new<std::thread, std::thread>(void*, std::thread&&) */

    thread* placement_new<std::thread, std::thread>(void* param_1, thread* param_2) {
        std::thread::thread(param_1, param_2);
        return param_1;
    }

    // 0x100b021c0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<std::thread>* placement_new<ref_counter_shared<std::thread>, int, std::thread*&>(void*, int&&, std::thread*&)
    /* ref_counter_shared<std::thread>* placement_new<ref_counter_shared<std::thread>,
   int, std::thread*&>(void*, int&&, std::thread*&) */

    ref_counter_shared* placement_new<ref_counter_shared<std::thread>, int, std::thread*&>(void* param_1, int* param_2,
                                                                                           thread** param_3) {
        ref_counter_shared<std::thread>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100b02210, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<std::thread>::ref_counter_shared(unsigned long, std::thread*): jumps straight to the base-object constructor

    // 0x100b02220, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<std::thread>::ref_counter_shared(unsigned long, std::thread*)
    /* ref_counter_shared<std::thread>::ref_counter_shared(unsigned long, std::thread*) */

    void ref_counter_shared<std::thread>::ref_counter_shared(ulong param_1, thread* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7990 + 16;
        *(ulong*)(this + 16) = param_1;
        *(thread**)(this + 24) = param_2;
    }

    // 0x100b02260, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<std::thread>::DeleteData()
    /* ref_counter_shared<std::thread>::DeleteData() */

    void ref_counter_shared<std::thread>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~thread();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 8;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100b02a30, 32 bytes, inline, placed by debug map only (low confidence)
    // std::thread* placement_new<std::thread, TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0>(void*, TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0&&)
    /* std::thread* placement_new<std::thread, TaskRunner::AddTaskImpl(char const*,
   shared_ptr<Task> const&)::$_0>(void*, TaskRunner::AddTaskImpl(char const*,
   shared_ptr<Task> const&)::$_0&&) */

    thread*
    jag::placement_new<std::thread, TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::__0>(void* param_1,
                                                                                                        __0* param_2) {
        std::thread::thread<TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::__0, , void>(param_1,
                                                                                                        param_2);
        return param_1;
    }

} // namespace jag
