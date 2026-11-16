// libs/hal/thread/ThreadPool.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.thread

#include "ThreadPool.h"

namespace jag {
    // 0x100325c30: the linker folded this into oldscape::dash3d::RSevenModelLitRenderer::StaticBatchAppendList::Count() const, which has identical code
    ThreadPool::GetNumberOfThreads();

    // 0x100c94d60, 320 bytes, placed by class name and debug map
    // ThreadPool::InitialiseWorkGroups(unsigned long, unsigned long)
    ThreadPool* ThreadPool::InitialiseWorkGroups(ulong param_1, ulong param_2) {
        ulong uVar1;
        ulong uVar2;
        ulong* puVar3;
        ulong in_RCX;
        long lVar4;
        bool bVar5;
        long local_68[2];
        ulong local_58;
        ulong local_50;
        ulong local_48;
        ulong local_40;

        uVar2 = GetNumberOfThreads((ThreadPool*)param_1);
        local_48 = uVar2;
        if (in_RCX < uVar2) {
            local_48 = in_RCX;
        }
        if (in_RCX == 0) {
            local_48 = uVar2;
        }
        local_58 = param_2 / local_48;
        uVar2 = param_2 % local_48;
        eastl::vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>::vector();
        reserve(local_48);
        local_40 = 0;
        if (param_2 != 0) {
            do {
                uVar1 = local_40;
                local_68[0] = param_2 - local_40;
                puVar3 = std::min<unsigned long>((ulong*)local_68, &local_58);
                lVar4 = (*puVar3 + 1) - (ulong)(uVar2 == 0);
                local_50 = uVar1 + lVar4;
                std::pair<unsigned long, unsigned long>::pair<unsigned long&, unsigned long, false>(
                    (pair<unsigned long, unsigned long>*)local_68, &local_40, &local_50);
                ((ThreadPool*)this)->push_back(local_68);
                bVar5 = uVar2 == 0;
                uVar2 = uVar2 - 1;
                if (bVar5) {
                    uVar2 = 0;
                }
                local_40 = lVar4 + local_40;
            } while (local_40 != param_2);
        }
        uVar2 = ((ThreadPool*)this)->size();
        if (local_48 < uVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("workGroups.size() <= numWorkers",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.cpp",
                      52, (char*)0);
        }
        return (ThreadPool*)this;
    }

    // 0x100c94f80, 272 bytes, placed by class name and debug map
    // ThreadPool::Init(unsigned int, char const*)
    void ThreadPool::Init(uint param_1, char* param_2) {
        vector<std::thread, eastl::allocator>* this_00;
        ulong* puVar3;
        uint uVar4;
        mutex* this_01;
        mutex* pmVar6;
        long lVar7;
        __1 local_68;
        unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>* local_48;
        vector<std::thread, eastl::allocator>* local_40;

        if (16 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("numThreads <= threading::MAX_HARDWARE_THREAD_LIMIT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.cpp",
                      59, (char*)0);
        }
        local_40 = (vector<std::thread, eastl::allocator>*)&field_8;
        eastl::vector<std::thread, eastl::allocator>::reserve(local_40, (ulong)param_1);
        local_48 = (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)&field_40;
        lVar7 = (ulong)param_1 * 64;
        puVar3 = operator_new__(lVar7 + 8);
        *puVar3 = (ulong)param_1;
        pmVar6 = (mutex*)(puVar3 + 1);
        if (param_1 != 0) {
            this_01 = pmVar6;
            do {
                std::mutex::mutex(this_01);
                this_01 = this_01 + 64;
                lVar7 = lVar7 + -64;
            } while (lVar7 != 0);
        }
        this_00 = local_40;
        std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::reset<std::mutex*>(local_48, pmVar6);
        std::atomic<unsigned int>::operator=((atomic<unsigned int>*)&field_192, (uint)pmVar6);
        if (param_1 != 0) {
            uVar4 = param_1;
            do {
                eastl::vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                              eastl::allocator>::
                    emplace_back<>((vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                                           eastl::allocator>*)&field_96);
                uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
        }
        if (param_1 != 0) {
            uVar4 = 0;
            do {
                local_68.field_16 = param_2;
                local_68.field_0 = this;
                local_68.field_8 = uVar4;
                eastl::vector<std::thread, eastl::allocator>::emplace_back<ThreadPool::Init(
                    unsigned int, char const*)::__1>(this_00, &local_68);
                uVar4 = uVar4 + 1;
            } while (param_1 != uVar4);
        }
    }

    // 0x100c951b0, 976 bytes, placed by class name and debug map
    // ThreadPool::ThreadFunc(int, char const*)
    void ThreadPool::ThreadFunc(int param_1, char* param_2) {
        ThreadPool* pTVar1;
        int iVar2;
        ulong uVar3;
        char cVar4;
        uint uVar5;
        char* pcVar6;
        mutex* pmVar7;
        deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>* pdVar8;
        ulong uVar9;
        TaskInfo* pTVar10;
        int iVar11;
        bool bVar12;
        unique_lock<std::mutex> local_128[16];
        mutex* local_118;
        condition_variable* local_110;
        unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>* local_108;
        ThreadPool* local_100;
        int local_f4;
        __atomic_base* local_f0;
        ulong local_e8;
        vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>* local_e0;
        TaskInfo local_d8[2];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar9 = 0;
        eastl::string::basic_string(local_d8, "%s-%d", param_2, param_1);
        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        this_thread::SetThreadName(pcVar6);
        local_d8->~basic_string();
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
        local_118 = (mutex*)&field_128;
        local_110 = (condition_variable*)&field_48;
        local_f0 = (__atomic_base*)&field_192;
        local_108 = (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)&field_40;
        local_e8 = (ulong)param_1;
        local_e0 = (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                           eastl::allocator>*)&field_96;
        local_100 = this;
        local_f4 = param_1;
        do {
            TaskInfo::TaskInfo(local_d8);
            std::unique_lock<std::mutex>::unique_lock(local_128, local_118);
            pTVar1 = local_100;
            std::condition_variable::wait<ThreadPool::ThreadFunc(int, char const*)::__2>(local_110, local_128,
                                                                                         local_100);
            std::unique_lock<std::mutex>::~unique_lock(local_128);
            if (((char)pTVar1->field_0 == '\0') ||
                (uVar5 = std::__atomic_base::operator_cast_to_unsigned_int(local_f0), uVar5 != 0)) {
                uVar5 = std::__atomic_base::operator_cast_to_unsigned_int(local_f0);
                uVar3 = local_e8;
                if (uVar5 == 0) {
                    uVar5 = 0;
                } else {
                    pmVar7 = (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
                        local_108, local_e8);
                    std::unique_lock<std::mutex>::unique_lock(local_128, pmVar7);
                    pdVar8 = (deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*)
                        eastl::vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                                      eastl::allocator>::operator[](local_e0, uVar3);
                    cVar4 = std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::empty(pdVar8);
                    iVar2 = local_f4;
                    if (cVar4 == '\0') {
                        pdVar8 = (deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*)
                            eastl::vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                                          eastl::allocator>::operator[](local_e0, local_e8);
                        pTVar10 =
                            (TaskInfo*)std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::front(
                                pdVar8);
                        TaskInfo::operator=(local_d8, pTVar10);
                        pdVar8 = (deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*)
                            eastl::vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                                          eastl::allocator>::operator[](local_e0, local_e8);
                        std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::pop_front(pdVar8);
                        std::__atomic_base<unsigned int, true>::operator--(
                            (__atomic_base<unsigned int, true>*)local_f0);
                        uVar5 = 1;
                    } else {
                        bVar12 = true;
                        uVar5 = 0;
                        do {
                            if (!bVar12)
                                break;
                            iVar11 = (int)uVar9;
                            if (iVar11 != iVar2) {
                                uVar5 = TrySteal(local_100, local_d8, iVar11);
                            }
                            uVar9 = (&field_8)->size();
                            bVar12 = false;
                            uVar9 = (ulong)(long)(iVar11 + 1) % uVar9;
                        } while ((uVar5 & 1) == 0);
                    }
                    std::unique_lock<std::mutex>::~unique_lock(local_128);
                }
                bVar12 = true;
                if ((uVar5 & 1) != 0) {
                    std::function<void()>::operator()((function<void()>*)local_d8);
                }
            } else {
                bVar12 = false;
            }
            local_d8->~TaskInfo();
            if (!bVar12) {
                if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                    /* WARNING: Subroutine does not return */
                    ___stack_chk_fail();
                }
                return;
            }
        } while (true);
    }

    // 0x100c95970, 240 bytes, placed by class name
    // ThreadPool::TrySteal(ThreadPool::TaskInfo&, int)
    ulong ThreadPool::TrySteal(TaskInfo* param_1, int param_2) {
        undefined1* this_00;
        char cVar1;
        undefined8 uVar2;
        deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>* pdVar3;
        long lVar4;
        TaskInfo* pTVar5;
        ulong uVar6;
        unique_lock<std::mutex> local_40[16];

        uVar6 = (ulong)param_2;
        uVar2 = std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
            (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)&field_40, uVar6);
        std::unique_lock<std::mutex>::unique_lock(local_40, uVar2);
        cVar1 = std::unique_lock<std::mutex>::owns_lock(local_40);
        if (cVar1 != '\0') {
            this_00 = &field_96;
            pdVar3 = (deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*)eastl::vector<
                std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::
            operator[](
                (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>*)
                    this_00,
                uVar6);
            cVar1 = std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::empty(pdVar3);
            if (cVar1 == '\0') {
                pdVar3 = (deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*)eastl::vector<
                    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::
                operator[](
                    (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>*)
                        this_00,
                    uVar6);
                lVar4 = std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::back(pdVar3);
                if (*(char*)(lVar4 + 52) != '\0') {
                    pdVar3 = (deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*)eastl::vector<
                        std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::
                    operator[]((vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                                       eastl::allocator>*)this_00,
                               uVar6);
                    pTVar5 =
                        (TaskInfo*)std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::back(pdVar3);
                    TaskInfo::operator=(param_1, pTVar5);
                    eastl::vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                                  eastl::allocator>::
                    operator[]((vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                                       eastl::allocator>*)this_00,
                               uVar6);
                    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::pop_back();
                    std::__atomic_base<unsigned int, true>::operator--((__atomic_base<unsigned int, true>*)&field_192);
                    uVar6 = CONCAT71((int7)((ulong)local_40 >> 8), 1);
                    goto LAB_100c95a2b;
                }
            }
        }
        uVar6 = 0;
    LAB_100c95a2b:
        std::unique_lock<std::mutex>::~unique_lock(local_40);
        return uVar6 & 4294967295;
    }

    // 0x100c98430, 32 bytes, placed by class name
    // ThreadPool::Init(unsigned int, char const*)::$_1::operator()() const
    /* ThreadPool::Init(unsigned int, char const*)::$_1::TEMPNAMEPLACEHOLDERVALUE() const */

    void ThreadPool::Init(unsigned int, char const*)::$_1::operator()() {
        ThreadFunc(field_0, field_8, field_16);
    }

    // 0x100c985c0, 48 bytes, placed by class name
    // ThreadPool::ThreadFunc(int, char const*)::$_2::operator()() const
    /* ThreadPool::ThreadFunc(int, char const*)::$_2::TEMPNAMEPLACEHOLDERVALUE() const */

    bool ThreadPool::ThreadFunc(int, char const*)::$_2::operator()() {
        uint uVar1;

        if (**(char**)this == '\0') {
            uVar1 = ((*(char**)this + 192))->operator_cast_to_unsigned_int();
            return uVar1 != 0;
        }
        return true;
    }

} // namespace jag
