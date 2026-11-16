// libs/hal/thread/ThreadPool.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.thread

#include "ThreadPool.h"

namespace jag {
    // 0x100325c30: ThreadPool::GetNumberOfThreads() has the same machine code as oldscape::dash3d::RSevenModelLitRenderer::StaticBatchAppendList::Count() const

    // 0x100c94d60
    ThreadPool* ThreadPool::InitialiseWorkGroups(unsigned long arg1, unsigned long arg2) {
        unsigned long uVar1;
        unsigned long* puVar3;
        unsigned long in_RCX;
        long lVar4;
        bool bVar5;
        long local_68[2];
        unsigned long local_50;

        unsigned long uVar2 = GetNumberOfThreads((ThreadPool*)arg1);
        unsigned long local_48 = uVar2;
        if (in_RCX < uVar2) {
            local_48 = in_RCX;
        }
        if (in_RCX == 0) {
            local_48 = uVar2;
        }
        unsigned long local_58 = arg2 / local_48;
        uVar2 = arg2 % local_48;
        new (this) eastl::vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>();
        reserve(local_48);
        unsigned long local_40 = 0;
        if (arg2 != 0) {
            do {
                uVar1 = local_40;
                local_68[0] = arg2 - local_40;
                puVar3 = std::min<unsigned long>(*local_68, local_58);
                lVar4 = (*puVar3 + 1) - (unsigned long)(uVar2 == 0);
                local_50 = uVar1 + lVar4;
                local_68->pair<unsigned long&, unsigned long, false>(local_40, local_50);
                push_back(*local_68);
                bVar5 = uVar2 == 0;
                uVar2 = uVar2 - 1;
                if (bVar5) {
                    uVar2 = 0;
                }
                local_40 = lVar4 + local_40;
            } while (local_40 != arg2);
        }
        uVar2 = size();
        if (local_48 < uVar2) {
            LogAssert("workGroups.size() <= numWorkers",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.cpp",
                      52, nullptr);
        }
        return this;
    }

    // 0x100c94f80
    void ThreadPool::Init(unsigned int arg1, const char* str) {
        unsigned int uVar4;
        mutex* this_01;
        mutex* mutex;
        ThreadPool* local_68;
        unsigned int local_60;
        char* local_58;
        unique_ptr<std::mutex[]>* local_48;

        if (16 < arg1) {
            LogAssert("numThreads <= threading::MAX_HARDWARE_THREAD_LIMIT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.cpp",
                      59, nullptr);
        }
        vector<std::thread>* local_40 = (vector<std::thread>*)&field_8;
        local_40->reserve((unsigned long)arg1);
        local_48 = (unique_ptr<std::mutex[]>*)&field_40;
        long lVar5 = (unsigned long)arg1 * 64;
        auto puVar3 = operator_new__(lVar5 + 8);
        *puVar3 = (unsigned long)arg1;
        mutex = (mutex*)(puVar3 + 1);
        if (arg1 != 0) {
            this_01 = mutex;
            do {
                new (this_01) std::mutex();
                this_01 = this_01 + 64;
                lVar5 = lVar5 - 64;
            } while (lVar5 != 0);
        }
        vector<std::thread>* this_00 = local_40;
        local_48->reset<std::mutex*>(mutex);
        field_192 = ((unsigned int)mutex);
        if (arg1 != 0) {
            uVar4 = arg1;
            do {
                field_96.emplace_back<>();
                uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
        }
        if (arg1 != 0) {
            uVar4 = 0;
            do {
                local_58 = str;
                local_68 = this;
                local_60 = uVar4;
                eastl::vector<std::thread>::emplace_back<ThreadPool::Init(unsigned int, char const*)::__1>(
                    this_00, (__1*)&local_68);
                uVar4 = uVar4 + 1;
            } while (arg1 != uVar4);
        }
    }

    // 0x100c951b0
    void ThreadPool::ThreadFunc(int arg1, const char* str) {
        bool cVar2;
        int iVar3;
        unsigned int uVar4;
        mutex* mutex;
        deque<ThreadPool::TaskInfo>* pdVar5;
        TaskInfo* taskInfo;
        int arg2;
        bool bVar7;
        unique_lock<std::mutex> local_128;
        unique_ptr<std::mutex[]>* local_108;

        unsigned long uVar6 = 0;
        TaskInfo local_d8((CtorSprintf*)"%s-%d", str, (unsigned long)(unsigned int)arg1);
        this_thread::SetThreadName((char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin());
        BucketManager::Init(512, 0);
        BucketManager::CreateBucket(4, 16, 4);
        BucketManager::CreateBucket(8, 32, 8);
        BucketManager::CreateBucket(16, 32, 16);
        BucketManager::CreateBucket(32, 32, 32);
        BucketManager::CreateBucket(48, 8, 16);
        BucketManager::CreateBucket(64, 8, 64);
        BucketManager::CreateBucket(96, 24, 32);
        BucketManager::CreateBucket(128, 64, 64);
        this_thread::GetThreadName();
        mutex* local_118 = (mutex*)&field_128;
        condition_variable* local_110 = (condition_variable*)&field_48;
        __atomic_base* local_f0 = (__atomic_base*)&field_192;
        local_108 = (unique_ptr<std::mutex[]>*)&field_40;
        vector<std::deque<ThreadPool::TaskInfo>>* local_e0 = (vector<std::deque<ThreadPool::TaskInfo>>*)&field_96;
        do {
            local_d8 = TaskInfo();
            local_128 = std::unique_lock<std::mutex>(*local_118);
            std::condition_variable::wait<ThreadPool::ThreadFunc(int, char const*)::__2>(local_110, &local_128,
                                                                                         (__2*)this);
            if (((char)field_0 == '\0') ||
                (iVar3 = std::__atomic_base::operator_cast_to_unsigned_int(local_f0), iVar3 != 0)) {
                iVar3 = std::__atomic_base::operator_cast_to_unsigned_int(local_f0);
                if (iVar3 == 0) {
                    uVar4 = 0;
                } else {
                    mutex = (mutex*)(*local_108)[(unsigned long)arg1];
                    local_128 = std::unique_lock<std::mutex>(*mutex);
                    pdVar5 = (deque<ThreadPool::TaskInfo>*)(*local_e0)[(unsigned long)arg1];
                    cVar2 = pdVar5->empty();
                    iVar3 = arg1;
                    if (!cVar2) {
                        pdVar5 = (deque<ThreadPool::TaskInfo>*)(*local_e0)[(unsigned long)arg1];
                        taskInfo = (TaskInfo*)pdVar5->front();
                        local_d8 = *taskInfo;
                        pdVar5 = (deque<ThreadPool::TaskInfo>*)(*local_e0)[(unsigned long)arg1];
                        pdVar5->pop_front();
                        std::__atomic_base<unsigned int, true>::operator--();
                        uVar4 = 1;
                    } else {
                        bVar7 = true;
                        uVar4 = 0;
                        do {
                            if (!bVar7)
                                break;
                            arg2 = (int)uVar6;
                            if (arg2 != iVar3) {
                                uVar4 = TrySteal(local_d8, arg2);
                            }
                            uVar6 = field_8.size();
                            bVar7 = false;
                            uVar6 = (unsigned long)(long)(arg2 + 1) % uVar6;
                        } while ((uVar4 & 1) == 0);
                    }
                }
                bVar7 = true;
                if ((uVar4 & 1) != 0) {
                    std::function<void()>::operator()((function<void()>*)&local_d8);
                }
            } else {
                bVar7 = false;
            }
            if (!bVar7) {
                return;
            }
        } while (true);
    }

    // 0x100c95970
    unsigned long ThreadPool::TrySteal(ThreadPool::TaskInfo& taskInfo, int arg2) {
        uint8_t* this_00;
        deque<ThreadPool::TaskInfo>* pdVar2;
        long lVar3;
        TaskInfo* taskInfo_00;
        uint8_t auVar5[12];

        unsigned long uVar4 = (unsigned long)arg2;
        auVar5 = (*((unique_ptr<std::mutex[]>*)&field_40))[uVar4];
        unique_lock<std::mutex> local_40(*auVar5._0_8_, auVar5._8_4_);
        if (local_40.owns_lock()) {
            this_00 = &field_96;
            pdVar2 = (deque<ThreadPool::TaskInfo>*)(*this_00)[uVar4];
            if (!(pdVar2->empty())) {
                pdVar2 = (deque<ThreadPool::TaskInfo>*)(*this_00)[uVar4];
                lVar3 = pdVar2->back();
                if (*(char*)(lVar3 + 52) != '\0') {
                    pdVar2 = (deque<ThreadPool::TaskInfo>*)(*this_00)[uVar4];
                    taskInfo_00 = (TaskInfo*)pdVar2->back();
                    taskInfo = *taskInfo_00;
                    pdVar2 = (deque<ThreadPool::TaskInfo>*)(*this_00)[uVar4];
                    pdVar2->pop_back();
                    std::__atomic_base<unsigned int, true>::operator--();
                    uVar4 = (((uint64_t)((int64_t)((unsigned long)&local_40 >> 8)) << 8) | (uint8_t)1);
                    goto LAB_100c95a2b;
                }
            }
        }
        uVar4 = 0;
    LAB_100c95a2b:
        return uVar4 & 4294967295;
    }

    // 0x100c98430
    void ThreadPool::Init(unsigned int, char const*)::$_1::operator()() const {
        ThreadFunc(field_0, field_8, field_16);
    }

    // 0x100c985c0
    bool ThreadPool::ThreadFunc(int, char const*)::$_2::operator()() const {
        if (**(char**)this == '\0') {
            return ((*(char**)this + 192))->operator_cast_to_unsigned_int() != 0;
        }
        return true;
    }

} // namespace jag
