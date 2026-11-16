// libs/hal/taskrunner/taskrunner.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.taskrunner

#include "taskrunner.h"

namespace jag {
    // 0x100afcda0, 144 bytes, placed by class name and debug map
    // TaskRunner::Response(Task*, shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&)
    void TaskRunner::Response(Task* param_1, shared_ptr* param_2) {
        TaskMessage local_40;
        scoped_lock<std::mutex> local_28[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)&field_240);
        new (&local_40) TaskMessage(param_1, param_2);
        (&field_304, &local_40)->push();
        local_40.~pair();
        std::scoped_lock<std::mutex>::~scoped_lock(local_28);
    }

    // 0x100afce30, 128 bytes, placed by neighbouring functions
    // getTaskRunner()
    undefined1* getTaskRunner() {
        if (getTaskRunner()::taskRunner == '\0') {
            if (___cxa_guard_acquire(&getTaskRunner()::taskRunner) != 0) {
                new (&getTaskRunner()::taskRunner) TaskRunner();
                ___cxa_atexit(PTR__TaskRunner_100ee5150, &getTaskRunner()::taskRunner, 4294967296);
                ___cxa_guard_release(&getTaskRunner()::taskRunner);
            }
        }
        return &getTaskRunner()::taskRunner;
    }

    // 0x100afceb0, 16 bytes, complete-object constructor, placed by class name and debug map
    // TaskRunner::TaskRunner(): jumps straight to the base-object constructor

    // 0x100afced0, 288 bytes, base-object constructor, placed by class name and debug map
    // TaskRunner::TaskRunner()
    void TaskRunner::TaskRunner() {
        vector* this_00;
        type* in_RSI;

        eastl::vector_map<eastl::string, std::function<Task*()>, eastl::less<eastl::string>, eastl::allocator,
                          eastl::vector<eastl::pair<eastl::string, std::function<Task*()>>, eastl::allocator>>::
            vector_map(
                (vector_map<eastl::string, std::function<Task*()>, eastl::less<eastl::string>, eastl::allocator,
                            eastl::vector<eastl::pair<eastl::string, std::function<Task*()>>, eastl::allocator>>*)this);
        new (&field_40) std::mutex();
        new (&field_104)
            eastl::vector_map<std::__thread_id, shared_ptr<Task>, eastl::less<std::__thread_id>, eastl::allocator,
                              eastl::vector<eastl::pair<std::__thread_id, shared_ptr<Task>>, eastl::allocator>>();
        new (&field_144) std::mutex();
        new (&field_208) eastl::vector<shared_ptr<Task>, eastl::allocator>();
        new (&field_240) std::mutex();
        new (&field_304) eastl::queue<TaskMessage, eastl::deque<TaskMessage, eastl::allocator, 8u>>();
        this_00 = (&field_304, in_RSI)->SSOBeginPtr();
        this_00->set_capacity(512);
        eastl::vector<eastl::pair<eastl::string, std::function<Task*()>>, eastl::allocator>::reserve(
            (vector<eastl::pair<eastl::string, std::function<Task*()>>, eastl::allocator>*)this, 16);
        (&field_104, 16)->reserve();
        (&field_208, 16)->reserve();
    }

    // 0x100afd1c0, 176 bytes, placed by class name and debug map
    // TaskRunner::GetTaskFactory(char const*) const
    long TaskRunner::GetTaskFactory(char* param_1) {
        long lVar1;
        long lVar2;
        eastl::string local_50[32];
        allocator local_30[8];

        eastl::allocator::allocator(local_30, "EASTL basic_string");
        eastl::string::basic_string(local_50, param_1, local_30);
        lVar1 = eastl::vector_map<eastl::string, std::function<Task*()>, eastl::less<eastl::string>, eastl::allocator,
                                  eastl::vector<eastl::pair<eastl::string, std::function<Task*()>>, eastl::allocator>>::
            find((vector_map<eastl::string, std::function<Task*()>, eastl::less<eastl::string>, eastl::allocator,
                             eastl::vector<eastl::pair<eastl::string, std::function<Task*()>>, eastl::allocator>>*)this,
                 (basic_string*)local_50);
        eastl::string::~basic_string(local_50);
        lVar2 = end();
        if (lVar1 == lVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "it != m_Factories.end()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/taskrunner/taskrunner.cpp",
                28, "Could not find registered class called: %s", param_1);
        }
        return lVar1 + 32;
    }

    // 0x100afd2a0, 512 bytes, placed by class name and debug map
    // TaskRunner::Service()
    void TaskRunner::Service() {
        undefined1* this_00;
        char cVar1;
        TaskMessage* pTVar2;
        shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>* psVar3;
        PacketT<Array<unsigned char, eastl::allocator>>* this_01;
        long* plVar4;
        undefined8 uVar5;
        long lVar6;
        ulong uVar7;
        shared_ptr<Task>* this_02;
        Task* pTVar8;
        pair* ppVar9;
        pair* ppVar10;
        ulong uVar11;
        undefined1* this_03;
        TaskMessage local_60;
        undefined8 local_48;
        mutex* local_40;
        scoped_lock<std::mutex> local_38[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)&field_240);
        cVar1 = (&field_304)->empty();
        if (cVar1 == '\0') {
            do {
                pTVar2 =
                    (TaskMessage*)eastl::queue<TaskMessage, eastl::deque<TaskMessage, eastl::allocator, 8u>>::front();
                new (&local_60) TaskMessage(pTVar2);
                eastl::queue<TaskMessage, eastl::deque<TaskMessage, eastl::allocator, 8u>>::pop();
                psVar3 = (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_60.second();
                this_01 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                              shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(psVar3);
                this_01->SetPos(0);
                plVar4 = (long*)local_60.HeapBeginPtr();
                psVar3 = (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)local_60.second();
                uVar5 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(psVar3);
                (**(code**)(*plVar4 + 48))(plVar4, uVar5);
                local_60.~pair();
                cVar1 = (&field_304)->empty();
            } while (cVar1 == '\0');
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
        new (&local_60) std::scoped_lock<std::mutex>((mutex*)&field_144);
        this_00 = &field_208;
        lVar6 = this_00->size();
        if (lVar6 != 0) {
            local_40 = (mutex*)&field_40;
            this_03 = &field_104;
            uVar11 = 0;
            do {
                this_02 = (shared_ptr<Task>*)eastl::vector<shared_ptr<Task>, eastl::allocator>::operator[](
                    (vector<shared_ptr<Task>, eastl::allocator>*)this_00, uVar11);
                pTVar8 = (Task*)shared_ptr<Task>::operator->(this_02);
                pTVar8->ReleaseThread();
                plVar4 = (long*)shared_ptr<Task>::operator->(this_02);
                (**(code**)(*plVar4 + 40))(plVar4);
                std::scoped_lock<std::mutex>::scoped_lock(local_38, local_40);
                pTVar8 = (Task*)shared_ptr<Task>::operator->(this_02);
                local_48 = pTVar8->GetId();
                ppVar9 = (pair*)this_03->find((__thread_id*)&local_48);
                ppVar10 = (pair*)this_03->end();
                if (ppVar9 != ppVar10) {
                    this_03->erase(ppVar9);
                }
                std::scoped_lock<std::mutex>::~scoped_lock(local_38);
                uVar11 = uVar11 + 1;
                uVar7 = this_00->size();
            } while (uVar11 < uVar7);
        }
        this_00->clear();
        local_60.~scoped_lock();
    }

    // 0x100afd590, 272 bytes, placed by class name and debug map
    // TaskRunner::ShutdownTasks()
    void TaskRunner::ShutdownTasks() {
        undefined1* this_00;
        Task* this_01;
        char cVar1;
        pair* ppVar2;
        shared_ptr<oldscape::dash3d::Decor> local_88[88];
        scoped_lock<std::mutex> local_30[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)&field_40);
        this_00 = &field_104;
        cVar1 = this_00->empty();
        if (cVar1 == '\0') {
            do {
                ppVar2 = (pair*)this_00->HeapBeginPtr();
                shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_88, (shared_ptr*)(ppVar2 + 8));
                this_00->erase(ppVar2);
                this_01 = (Task*)shared_ptr<Task>::operator->((shared_ptr<Task>*)local_88);
                this_01->Join();
                local_88->~shared_ptr();
                cVar1 = this_00->empty();
            } while (cVar1 == '\0');
        }
        eastl::vector<eastl::pair<eastl::string, std::function<Task*()>>, eastl::allocator>::clear(
            (vector<eastl::pair<eastl::string, std::function<Task*()>>, eastl::allocator>*)this);
        (&field_208)->clear();
        new (local_88) eastl::queue<TaskMessage, eastl::deque<TaskMessage, eastl::allocator, 8u>>();
        (&field_304, (queue*)local_88)->swap();
        local_88->~queue();
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
    }

    // 0x100afd710, 416 bytes, placed by class name and debug map
    // TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)
    bool TaskRunner::AddTaskImpl(char* param_1, shared_ptr* param_2) {
        Task* pTVar1;
        long lVar2;
        long lVar3;
        shared_ptr<Task>* this_00;
        undefined8 uVar4;
        TaskRunner* local_58;
        shared_ptr<oldscape::dash3d::Decor> local_50[16];
        char* local_40;
        undefined8 local_38;

        pTVar1 = (Task*)shared_ptr<Task>::operator->((shared_ptr<Task>*)param_2);
        pTVar1->SetTaskName(param_1);
        new (&local_38) eastl::allocator("EASTL basic_string");
        new (&local_58) eastl::string(param_1, (allocator*)&local_38);
        lVar2 = eastl::vector_map<eastl::string, std::function<Task*()>, eastl::less<eastl::string>, eastl::allocator,
                                  eastl::vector<eastl::pair<eastl::string, std::function<Task*()>>, eastl::allocator>>::
            find((vector_map<eastl::string, std::function<Task*()>, eastl::less<eastl::string>, eastl::allocator,
                             eastl::vector<eastl::pair<eastl::string, std::function<Task*()>>, eastl::allocator>>*)this,
                 (basic_string*)&local_58);
        lVar3 = end();
        local_58.~basic_string();
        if (lVar2 == lVar3) {
            uVar4 = logger::default_logger();
            logger::Logger::Log(
                uVar4, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/taskrunner/taskrunner.cpp",
                99, "RUN_TASK(%s) used without DECLARE_TASK(%s)", param_1, param_1);
        } else {
            pTVar1 = (Task*)shared_ptr<Task>::operator->((shared_ptr<Task>*)param_2);
            local_58 = this;
            shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_50, param_2);
            local_40 = param_1;
            Task::StartTask<TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::__0>(pTVar1, this,
                                                                                                (__0*)&local_58);
            AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0::~__0((__0*)&local_58);
            new (&local_58) std::scoped_lock<std::mutex>((mutex*)&field_40);
            pTVar1 = (Task*)shared_ptr<Task>::operator->((shared_ptr<Task>*)param_2);
            local_38 = pTVar1->GetId();
            this_00 = (shared_ptr<Task>*)
                eastl::vector_map<std::__thread_id, shared_ptr<Task>, eastl::less<std::__thread_id>, eastl::allocator,
                                  eastl::vector<eastl::pair<std::__thread_id, shared_ptr<Task>>, eastl::allocator>>::
                operator[](
                    (vector_map<
                        std::__thread_id, shared_ptr<Task>, eastl::less<std::__thread_id>, eastl::allocator,
                        eastl::vector<eastl::pair<std::__thread_id, shared_ptr<Task>>, eastl::allocator>>*)&field_104,
                    (__thread_id*)&local_38);
            shared_ptr<Task>::operator=(this_00, param_2);
            local_58.~scoped_lock();
        }
        return lVar2 != lVar3;
    }

    // 0x100afdaf0, 128 bytes, placed by class name and debug map
    // TaskRunner::ContinueTaskRun(shared_ptr<Task> const&)
    void TaskRunner::ContinueTaskRun(shared_ptr* param_1) {
        Task* pTVar1;
        scoped_lock<std::mutex> local_20[8];

        pTVar1 = (Task*)shared_ptr<Task>::operator->((shared_ptr<Task>*)param_1);
        pTVar1->RunWrapper();
        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)&field_144);
        (&field_208, param_1)->push_back();
        pTVar1 = (Task*)shared_ptr<Task>::operator->((shared_ptr<Task>*)param_1);
        pTVar1->SetComplete(true);
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x100b01f80, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<std::thread>::type make_shared<std::thread, std::thread>(std::thread&&)
    /* shared_ptr_if_not_array<std::thread>::type make_shared<std::thread,
   std::thread>(std::thread&&) */

    jag* make_shared<std::thread, std::thread>(thread* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        thread* local_30[2];

        pvVar1 = (void*)aligned_alloc(40, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<std::thread, std::thread>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<std::thread>, int, std::thread*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag
