// libs/hal/taskrunner/taskrunner.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.taskrunner

#include "taskrunner.h"

namespace jag {
    // 0x100afcda0
    void TaskRunner::Response(Task* task, shared_ptr<PacketT<Array<unsigned char>>>& arg2) {

        scoped_lock<std::mutex> local_28(field_240);
        TaskMessage local_40(task, arg2);
        field_304.push(local_40);
    }

    // 0x100afce30
    void getTaskRunner() {
        if (getTaskRunner()::taskRunner == '\0') {
            if (___cxa_guard_acquire(&getTaskRunner()::taskRunner) != 0) {
                new ((TaskRunner*)&getTaskRunner()::taskRunner) TaskRunner();
                ___cxa_atexit(PTR__TaskRunner_100ee5150, &getTaskRunner()::taskRunner, 4294967296);
                ___cxa_guard_release(&getTaskRunner()::taskRunner);
            }
        }
        return &getTaskRunner()::taskRunner;
    }

    // 0x100afced0
    TaskRunner::TaskRunner() {
        new (this) eastl::vector_map<eastl::string, std::function<Task*()>>();
        new (&field_40) std::mutex();
        new (&field_104) eastl::vector_map<std::__thread_id, shared_ptr<Task>>();
        new (&field_144) std::mutex();
        new (&field_208) eastl::vector<shared_ptr<Task>>();
        new (&field_240) std::mutex();
        new (&field_304) eastl::queue<TaskMessage, eastl::deque<TaskMessage, eastl::allocator, 8u>>();
        ((deque<TaskMessage, eastl::allocator, 8u>*)field_304.SSOBeginPtr())->set_capacity(512);
        reserve(16);
        field_104.reserve(16);
        field_208.reserve(16);
    }

    // 0x100afd1c0
    long TaskRunner::GetTaskFactory(const char* str) const {
        eastl::string local_50(str);
        long lVar1 = eastl::vector_map<eastl::string, std::function<Task*()>>::find(*this);
        long lVar2 = end();
        if (lVar1 == lVar2) {
            LogAssert(
                "it != m_Factories.end()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/taskrunner/taskrunner.cpp",
                28, "Could not find registered class called: %s", str);
        }
        return lVar1 + 32;
    }

    // 0x100afd2a0
    void TaskRunner::Service() {
        TaskMessage* taskMessage;
        shared_ptr<PacketT<Array<unsigned char>>>* psVar2;
        long* plVar3;
        uint64_t uVar4;
        unsigned long uVar6;
        shared_ptr<Task>* this_02;
        Task* pTVar7;
        pair<std::__thread_id, shared_ptr<Task> _>* arg1;
        pair<std::__thread_id, shared_ptr<Task> _>* ppVar8;
        unsigned long arg1_00;
        uint8_t* thread_id;
        uint64_t local_48;
        mutex* local_40;

        scoped_lock<std::mutex> local_38(field_240);
        bool cVar1 = field_304.empty();
        if (!cVar1) {
            do {
                taskMessage =
                    (TaskMessage*)eastl::queue<TaskMessage, eastl::deque<TaskMessage, eastl::allocator, 8u>>::front();
                local_60 = TaskMessage(*taskMessage);
                eastl::queue<TaskMessage, eastl::deque<TaskMessage, eastl::allocator, 8u>>::pop();
                psVar2 = (shared_ptr<PacketT<Array<unsigned char>>>*)local_60.second();
                ((PacketT<Array<unsigned char>>*)(*psVar2).operator->())->SetPos(0);
                plVar3 = (long*)local_60.HeapBeginPtr();
                psVar2 = (shared_ptr<PacketT<Array<unsigned char>>>*)local_60.second();
                uVar4 = **psVar2;
                (**(void (**)(...))(*plVar3 + 48))(plVar3, uVar4);
                cVar1 = field_304.empty();
            } while (!cVar1);
        }
        TaskMessage local_60(field_144);
        uint8_t* this_00 = &field_208;
        if (this_00->size() != 0) {
            local_40 = (mutex*)&field_40;
            thread_id = &field_104;
            arg1_00 = 0;
            do {
                this_02 = (shared_ptr<Task>*)(*this_00)[arg1_00];
                pTVar7 = (Task*)(*this_02).operator->();
                pTVar7->ReleaseThread();
                plVar3 = (long*)(*this_02).operator->();
                (**(void (**)(...))(*plVar3 + 40))(plVar3);
                local_38 = std::scoped_lock(*local_40);
                pTVar7 = (Task*)(*this_02).operator->();
                local_48 = pTVar7->GetId();
                arg1 = (pair<std::__thread_id, shared_ptr<Task> _>*)
                    eastl::vector_map<std::__thread_id, shared_ptr<Task>>::find(*thread_id);
                ppVar8 = (pair<std::__thread_id, shared_ptr<Task> _>*)thread_id->end();
                if (arg1 != ppVar8) {
                    thread_id->erase(arg1);
                }
                arg1_00 = arg1_00 + 1;
                uVar6 = this_00->size();
            } while (arg1_00 < uVar6);
        }
        this_00->clear();
    }

    // 0x100afd590
    void TaskRunner::ShutdownTasks() {
        pair<std::__thread_id, shared_ptr<Task> _>* arg1;
        shared_ptr<oldscape::dash3d::Decor> local_88;

        scoped_lock<std::mutex> local_30(field_40);
        uint8_t* this_00 = &field_104;
        bool cVar1 = this_00->empty();
        if (!cVar1) {
            do {
                arg1 = (pair<std::__thread_id, shared_ptr<Task> _>*)this_00->HeapBeginPtr();
                local_88 = shared_ptr((arg1 + 8));
                this_00->erase(arg1);
                ((Task*)local_88.operator->())->Join();
                cVar1 = this_00->empty();
            } while (!cVar1);
        }
        clear();
        field_208.clear();
        new (&local_88) eastl::queue<TaskMessage, eastl::deque<TaskMessage, eastl::allocator, 8u>>();
        field_304.swap(local_88);
        local_88.~queue();
    }

    // 0x100afd710
    bool TaskRunner::AddTaskImpl(const char* str, const shared_ptr<Task>& task) {
        shared_ptr<Task>* this_00;
        TaskRunner* local_58;
        shared_ptr<oldscape::dash3d::Decor> local_50;
        char* local_40;
        uint64_t local_38;

        auto pTVar1 = task.operator->();
        pTVar1->SetTaskName(str);
        new (&local_58) eastl::string(str);
        long lVar2 = eastl::vector_map<eastl::string, std::function<Task*()>>::find(*this);
        long lVar3 = end();
        if (lVar2 == lVar3) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/taskrunner/"
                      "taskrunner.cpp",
                      99, "RUN_TASK(%s) used without DECLARE_TASK(%s)", str, str);
        } else {
            pTVar1 = (Task*)task.operator->();
            local_58 = this;
            local_50 = shared_ptr(task);
            local_40 = str;
            Task::StartTask<TaskRunner::AddTaskImpl(char const*, shared_ptr<Task> const&)::__0>(pTVar1, this,
                                                                                                (__0*)&local_58);
            AddTaskImpl(char const*, shared_ptr<Task> const&)::$_0::~__0((__0*)&local_58);
            new (&local_58) std::scoped_lock(field_40);
            pTVar1 = (Task*)task.operator->();
            local_38 = pTVar1->GetId();
            this_00 = &field_104[local_38];
            *this_00 = task;
        }
        return lVar2 != lVar3;
    }

    // 0x100afdaf0
    void TaskRunner::ContinueTaskRun(const shared_ptr<Task>& task) {
        auto pTVar1 = task.operator->();
        pTVar1->RunWrapper();
        scoped_lock<std::mutex> local_20(field_144);
        field_208.push_back(task);
        pTVar1 = (Task*)task.operator->();
        pTVar1->SetComplete(true);
    }

    // 0x100b01f80
    shared_ptr_if_not_array<std::thread>::type make_shared<std::thread, std::thread>(std::thread&& thread) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        thread* local_30[2];

        auto arg1 = aligned_alloc(40, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<std::thread>::type result;
        } else {
            local_30[0] = placement_new<std::thread, std::thread>((void*)((long)arg1 + 32), thread);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<std::thread>, int, std::thread*&>(arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag
