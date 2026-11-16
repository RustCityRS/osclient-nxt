// libs/jtl/allocator/SimpleAllocator.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.jtl

#include "SimpleAllocator.h"
#include "Bucket.h"

namespace jag {
    // 0x100f4e4d0, 24 bytes, __thread_vars
    SimpleAllocator::m_threadLocalAllocators = {0, 0, 0, 0, 231224, 0};

    // 0x100f4e4e8, 24 bytes, __thread_vars
    SimpleAllocator::m_threadLocalAllocatorCount = {0, 0, 0, 0, 237880, 0};

    // 0x100f4e500, 24 bytes, __thread_vars
    SimpleAllocator::m_totalSlotSize = {0, 0, 0, 0, 237888, 0};

    // 0x100f4e518, 24 bytes, __thread_vars
    SimpleAllocator::m_totalSize = {0, 0, 0, 0, 237896, 0};

    // 0x103bf2668, 53248 bytes, __common; set at startup by ___cxx_global_var_init.84
    std::array<SimpleAllocator, 256ul> SimpleAllocator::m_allocators = array<SimpleAllocator, 256ul>();

    // 0x103bff668, 8 bytes, __common; zero-initialised
    SimpleAllocator::m_allocatorCount;

    // 0x10000b2a0: the linker folded this into eastl::string::Layout::GetHeapSize() const, which has identical code
    SimpleAllocator::GetSize() const;

    // 0x100023f30: the linker folded this into oldscape::option::IOption::GetName() const, which has identical code
    SimpleAllocator::GetSlotSize() const;

    // 0x1000fcbb0: the linker folded this into oldscape::ClientObj::GetHighlight(), which has identical code
    SimpleAllocator::begin() const;

    // 0x1001fb280: the linker folded this into http::CRMData::GetActionInfo() const, which has identical code
    SimpleAllocator::GetOverflowList() const;

    // 0x100cbae80, 16 bytes, complete-object constructor, placed by class name and debug map
    // SimpleAllocator::SimpleAllocator(): jumps straight to the base-object constructor

    // 0x100cbaf20, 16 bytes, complete-object constructor, placed by class name and debug map
    // SimpleAllocator::SimpleAllocator(unsigned long, unsigned long, unsigned int, unsigned long): jumps straight to the base-object constructor

    // 0x100cbaf30, 16 bytes, complete-object destructor, placed by class name and debug map
    // SimpleAllocator::~SimpleAllocator(): jumps straight to the base-object destructor

    // 0x100cbaf90, 240 bytes, placed by class name and debug map
    // SimpleAllocator::Allocate()
    SimpleAllocator* SimpleAllocator::Allocate() {
        char cVar1;
        undefined8 uVar2;
        mutex* pmVar3;
        long in_RSI;
        lock_guard<std::mutex> local_20[8];

        if ((*(byte*)(in_RSI + 192) & 4) == 0) {
            if (*(char*)(in_RSI + 176) == '\0') {
                uVar2 = std::this_thread::get_id();
                cVar1 = std::operator!=(*(undefined8*)(in_RSI + 168), uVar2);
                if (cVar1 != '\0') {
                    uVar2 = std::this_thread::get_id();
                    *(undefined8*)(in_RSI + 168) = uVar2;
                    *(undefined1*)(in_RSI + 176) = 1;
                }
            }
            uVar2 = std::this_thread::get_id();
            cVar1 = std::operator==(*(undefined8*)(in_RSI + 168), uVar2);
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("m_thread == currentThread",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/"
                          "SimpleAllocator.cpp",
                          179, "Unsafe allocator: %p accessed from multiple threads: BlockSize:%zu !");
            }
            SafeAllocate(this);
        } else {
            pmVar3 = (mutex*)std::unique_ptr<std::mutex, std::default_delete<std::mutex>>::operator*(
                (unique_ptr<std::mutex, std::default_delete<std::mutex>>*)(in_RSI + 184));
            std::lock_guard<std::mutex>::lock_guard(local_20, pmVar3);
            SafeAllocate(this);
            local_20->~lock_guard();
        }
        return this;
    }

    // 0x100cbb090, 160 bytes, placed by class name and debug map
    // SimpleAllocator::DeAllocate(void*)
    void SimpleAllocator::DeAllocate(void* param_1) {
        mutex* pmVar1;
        AllocatedBlock local_40;
        lock_guard<std::mutex> local_28[8];

        if ((*(byte*)((long)param_1 + 192) & 4) == 0) {
            GetBlock((SimpleAllocator*)&local_40, param_1);
            SafeDeAllocate(param_1, &local_40);
        } else {
            pmVar1 = (mutex*)std::unique_ptr<std::mutex, std::default_delete<std::mutex>>::operator*(
                (unique_ptr<std::mutex, std::default_delete<std::mutex>>*)((long)param_1 + 184));
            std::lock_guard<std::mutex>::lock_guard(local_28, pmVar1);
            GetBlock((SimpleAllocator*)&local_40, param_1);
            SafeDeAllocate(param_1, &local_40);
            local_28->~lock_guard();
        }
    }

    // 0x100cbb140, 128 bytes, placed by class name and debug map
    // SimpleAllocator::DeAllocate(SimpleAllocator::AllocatedBlock const&)
    void SimpleAllocator::DeAllocate(AllocatedBlock* param_1) {
        mutex* pmVar1;
        lock_guard<std::mutex> local_20[8];

        if ((field_192 & 4) == 0) {
            CheckThreadContention(this);
            SafeDeAllocate(this, param_1);
        } else {
            pmVar1 = (mutex*)std::unique_ptr<std::mutex, std::default_delete<std::mutex>>::operator*(
                (unique_ptr<std::mutex, std::default_delete<std::mutex>>*)&field_184);
            std::lock_guard<std::mutex>::lock_guard(local_20, pmVar1);
            SafeDeAllocate(this, param_1);
            local_20->~lock_guard();
        }
    }

    // 0x100cbb1d0, 128 bytes, placed by class name and debug map
    // SimpleAllocator::CheckOverflow(void const*) const
    undefined4 SimpleAllocator::CheckOverflow(void* param_1) {
        undefined4 uVar1;
        mutex* pmVar2;
        lock_guard<std::mutex> local_20[8];

        if ((field_192 & 4) == 0) {
            uVar1 = SafeCheckOverflow(this, param_1);
        } else {
            pmVar2 = (mutex*)std::unique_ptr<std::mutex, std::default_delete<std::mutex>>::operator*(
                (unique_ptr<std::mutex, std::default_delete<std::mutex>>*)&field_184);
            std::lock_guard<std::mutex>::lock_guard(local_20, pmVar2);
            uVar1 = SafeCheckOverflow(this, param_1);
            local_20->~lock_guard();
        }
        return uVar1;
    }

    // 0x100cbb260, 96 bytes, placed by class name and debug map
    // SimpleAllocator::ResetMetrics()
    void SimpleAllocator::ResetMetrics() {
        mutex* pmVar1;
        lock_guard<std::mutex> local_20[8];

        if ((field_192 & 4) == 0) {
            field_24 = 0;
            field_32 = 0;
        } else {
            pmVar1 = (mutex*)std::unique_ptr<std::mutex, std::default_delete<std::mutex>>::operator*(
                (unique_ptr<std::mutex, std::default_delete<std::mutex>>*)&field_184);
            std::lock_guard<std::mutex>::lock_guard(local_20, pmVar1);
            field_24 = 0;
            field_32 = 0;
            local_20->~lock_guard();
        }
    }

    // 0x100cbb2d0, 176 bytes, placed by class name and debug map
    // SimpleAllocator::PrintMetrics()
    void SimpleAllocator::PrintMetrics() {
        ulong uVar1;
        ulong uVar2;
        ulong uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        char* pcVar8;

        uVar5 = logger::default_logger();
        pcVar8 = "ThreadSafe ";
        if ((field_192 & 4) == 0) {
            pcVar8 = "";
        }
        uVar1 = field_48;
        uVar2 = field_8;
        uVar3 = field_16;
        uVar4 = field_24;
        uVar6 = (&field_80)->size();
        uVar7 = GetOverflowCount(this);
        logger::Logger::Log(
            uVar5, 0, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/SimpleAllocator.cpp",
            406,
            "%sStore at: %p, entry size: %zu, reserved capacity: %zu, ceiling: %zu, freelist ceiling: %zu, overflowed "
            "by %zu",
            pcVar8, uVar1, uVar3, uVar2, uVar4, uVar6, uVar7);
    }

    // 0x100cbb390, 16 bytes, placed by class name and debug map
    // SimpleAllocator::PrintAllocations(bool)
    void SimpleAllocator::PrintAllocations(bool param_1) {}

    // 0x100cbbf50, 48 bytes, inline, placed by debug map only (low confidence)
    // float Bytes2Megabytes<unsigned long>(unsigned long)
    float Bytes2Megabytes<unsigned long>(ulong param_1) {
        return (float)param_1 * 9.536743e-07;
    }

    // 0x100cbc0f0, 32 bytes, placed by debug map only (low confidence)
    // BucketManager::DirectDeAllocate(BucketManager::DirectAllocation const&)
    void BucketManager::DirectDeAllocate(DirectAllocation* param_1) {
        (param_1->field_24, (AllocatedBlock*)param_1)->DirectDeAllocation();
    }

    // 0x100cbc110, 112 bytes, placed by debug map only (low confidence)
    // BucketManager::CheckInBucket(void*)
    bool BucketManager::CheckInBucket(void* param_1) {
        ulong* puVar1;
        array* this;
        long lVar2;
        ulong uVar3;
        bool bVar4;

        if (param_1 == (void*)0) {
            bVar4 = false;
        } else {
            m_buckets();
            puVar1 = (ulong*)(*(code*)m_bucketCount)();
            uVar3 = *puVar1;
            this = (array*)(*(code*)m_buckets)();
            lVar2 = CheckAllocation(this, uVar3, param_1);
            bVar4 = true;
            if (lVar2 == 0) {
                uVar3 = operator_cast_to_unsigned_long();
                lVar2 = CheckAllocation((array*)&m_safeBuckets, uVar3, param_1);
                bVar4 = lVar2 != 0;
            }
        }
        return bVar4;
    }

    // 0x100cbc180, 272 bytes, placed by debug map only (low confidence)
    // BucketManager::CheckAllocation(std::array<Bucket, 256ul>&, unsigned long, void*)
    /* BucketManager::CheckAllocation(std::array<Bucket, 256ul>&, unsigned long, void*) */

    PostProcessManager* BucketManager::CheckAllocation(array* param_1, ulong param_2, void* param_3) {
        char cVar1;
        PostProcessManager* pPVar2;
        long lVar3;
        void* pvVar4;
        ulong uVar5;
        bool bVar6;
        PostProcessManager* local_40;

        if (param_2 != 0) {
            uVar5 = 0;
            bVar6 = true;
            do {
                pPVar2 =
                    (PostProcessManager*)std::array<Bucket, 256ul>::operator[]((array<Bucket, 256ul>*)param_1, uVar5);
                lVar3 = pPVar2->GetSlotSize();
                if (((lVar3 != 0) && (pvVar4 = (void*)pPVar2->GetRenderTargetsManager(), pvVar4 <= param_3)) &&
                    (pvVar4 = (void*)pPVar2->GetEnd(), param_3 < pvVar4)) {
                    local_40 = pPVar2;
                    break;
                }
                uVar5 = uVar5 + 1;
                bVar6 = uVar5 < param_2;
            } while (param_2 != uVar5);
            if (bVar6) {
                return local_40;
            }
        }
        if (param_2 != 0) {
            uVar5 = 0;
            do {
                pPVar2 =
                    (PostProcessManager*)std::array<Bucket, 256ul>::operator[]((array<Bucket, 256ul>*)param_1, uVar5);
                lVar3 = pPVar2->GetSlotSize();
                if ((lVar3 != 0) && (cVar1 = pPVar2->CheckOverflow(param_3), cVar1 != '\0')) {
                    return pPVar2;
                }
                uVar5 = uVar5 + 1;
            } while (param_2 != uVar5);
        }
        return (PostProcessManager*)0;
    }

    // 0x100cbc290, 128 bytes, placed by debug map only (low confidence)
    // BucketManager::GetAllocationSize(void*)
    undefined8 BucketManager::GetAllocationSize(void* param_1) {
        ulong* puVar1;
        array* this;
        Bucket* this_00;
        ulong uVar2;
        undefined8 uVar3;

        if (param_1 == (void*)0) {
            uVar3 = 0;
        } else {
            m_buckets();
            puVar1 = (ulong*)(*(code*)m_bucketCount)();
            uVar2 = *puVar1;
            this = (array*)(*(code*)m_buckets)();
            this_00 = (Bucket*)CheckAllocation(this, uVar2, param_1);
            if (this_00 == (Bucket*)0) {
                uVar2 = operator_cast_to_unsigned_long();
                this_00 = (Bucket*)CheckAllocation((array*)&m_safeBuckets, uVar2, param_1);
                if (this_00 == (Bucket*)0) {
                    uVar3 = _malloc_size(param_1);
                    return uVar3;
                }
            }
            uVar3 = this_00->GetSlotSize();
        }
        return uVar3;
    }

    // 0x100cbc310, 128 bytes, placed by debug map only (low confidence)
    // BucketManager::DeAllocate(void*)
    void BucketManager::DeAllocate(void* param_1) {
        ulong* puVar1;
        array* this;
        void* pvVar2;
        ulong uVar3;
        HeapInterface* this_00;

        if (param_1 != (void*)0) {
            m_buckets();
            puVar1 = (ulong*)(*(code*)m_bucketCount)();
            uVar3 = *puVar1;
            this = (array*)(*(code*)m_buckets)();
            pvVar2 = (void*)CheckAllocation(this, uVar3, param_1);
            if (pvVar2 == (void*)0) {
                uVar3 = operator_cast_to_unsigned_long();
                pvVar2 = (void*)CheckAllocation((array*)&m_safeBuckets, uVar3, param_1);
                if (pvVar2 == (void*)0) {
                    this_00 = (HeapInterface*)HeapInterface::Instance();
                    this_00->AlignedFree(param_1);
                    return;
                }
            }
            Bucket::DeAllocate(pvVar2);
        }
    }

    // 0x100cbcaa0, 672 bytes, placed by class name
    // SimpleAllocator::New(unsigned long, unsigned long, unsigned int, unsigned long)
    long SimpleAllocator::New(ulong param_1, ulong param_2, uint param_3, ulong param_4) {
        char cVar1;
        long lVar2;
        long* plVar3;
        ulong* puVar4;
        SimpleAllocator* pSVar5;
        byte extraout_DL;
        uint uVar6;
        ulong uVar7;
        long unaff_R12;
        ulong uVar8;
        bool bVar9;
        byte bVar10;

        if ((param_3 & 1) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("(flags & SimpleAllocator::NEW) == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/"
                      "SimpleAllocator.cpp",
                      22, "NEW flag is deprecated, instead construct an instance of SimpleAllocator directly");
        }
        cVar1 = this_thread::IsMainThread();
        uVar7 = m_allocatorCount;
        if (cVar1 == '\0') {
            if ((param_3 & 4) != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("(flags & SimpleAllocator::THREAD_SAFE) == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/"
                          "SimpleAllocator.cpp",
                          47, (char*)0);
            }
            if ((param_3 & 1) == 0) {
                plVar3 = (long*)(*(code*)m_threadLocalAllocatorCount)();
                bVar9 = *plVar3 != 0;
                if (bVar9) {
                    uVar7 = 0;
                    do {
                        m_threadLocalAllocators();
                        lVar2 = std::array<SimpleAllocator, 32ul>::operator[](uVar7);
                        bVar10 = (*(byte*)(lVar2 + 192) & 2) == 0;
                        m_threadLocalAllocators();
                        bVar10 = *(ulong*)(lVar2 + 16) == param_2 & bVar10;
                        if (bVar10 == 1) {
                            m_threadLocalAllocators();
                            unaff_R12 = lVar2;
                            bVar10 = extraout_DL;
                        }
                        if (bVar10 != 0)
                            break;
                        uVar7 = uVar7 + 1;
                        puVar4 = (ulong*)(*(code*)m_threadLocalAllocatorCount)();
                        bVar9 = uVar7 < *puVar4;
                    } while (bVar9);
                }
                if (bVar9) {
                    return unaff_R12;
                }
            }
            puVar4 = (ulong*)(*(code*)m_threadLocalAllocatorCount)();
            if (31 < *puVar4) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_threadLocalAllocatorCount < NUMBER_OF_THREADLOCAL_ALLOCATORS",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/"
                          "SimpleAllocator.cpp",
                          62, "Not enough thread local allocators!");
            }
            m_threadLocalAllocators();
            puVar4 = (ulong*)(*(code*)m_threadLocalAllocatorCount)();
            pSVar5 = (SimpleAllocator*)std::array<SimpleAllocator, 32ul>::operator[](*puVar4);
            SimpleAllocator(pSVar5, param_1, param_2, param_3, param_4);
            m_threadLocalAllocators();
            uVar7 = *puVar4;
            *puVar4 = uVar7 + 1;
            lVar2 = std::array<SimpleAllocator, 32ul>::operator[](uVar7);
        } else {
            if ((param_3 & 1) == 0) {
                bVar9 = m_allocatorCount != 0;
                if (bVar9) {
                    uVar8 = 0;
                    do {
                        lVar2 = std::array<SimpleAllocator, 256ul>::operator[](uVar8);
                        cVar1 = '\x01';
                        if (((*(ulong*)(lVar2 + 16) == param_2) && ((*(uint*)(lVar2 + 192) & 2) == 0)) &&
                            (uVar6 = (*(uint*)(lVar2 + 192) ^ param_3) & 4, cVar1 = (char)(uVar6 >> 2), uVar6 == 0)) {
                            unaff_R12 = lVar2;
                        }
                        if (cVar1 == '\0')
                            break;
                        uVar8 = uVar8 + 1;
                        bVar9 = uVar8 < uVar7;
                    } while (uVar7 != uVar8);
                }
                if (bVar9) {
                    return unaff_R12;
                }
            }
            if (255 < m_allocatorCount) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_allocatorCount < NUMBER_OF_ALLOCATORS",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/"
                          "SimpleAllocator.cpp",
                          40, "Not enough allocators!");
            }
            pSVar5 = (SimpleAllocator*)std::array<SimpleAllocator, 256ul>::operator[](m_allocatorCount);
            SimpleAllocator(pSVar5, param_1, param_2, param_3, param_4);
            uVar7 = m_allocatorCount;
            m_allocatorCount = m_allocatorCount + 1;
            lVar2 = std::array<SimpleAllocator, 256ul>::operator[](uVar7);
        }
        return lVar2;
    }

    // 0x100cbcda0, 208 bytes, base-object constructor, placed by class name
    // SimpleAllocator::SimpleAllocator()
    void SimpleAllocator::SimpleAllocator() {
        allocator local_30[8];

        field_48 = 0;
        field_56 = 0;
        field_32 = 0;
        field_40 = 0;
        field_16 = 0;
        field_24 = 0;
        field_0 = 0;
        field_8 = 0;
        std::unique_ptr<unsigned int[], std::default_delete<unsigned int[]>>::unique_ptr<true, void>(
            (_func_decltype_nullptr*)&field_64);
        std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::unique_ptr<true, void>(
            (_func_decltype_nullptr*)&field_72);
        new (&field_80) eastl::vector<SimpleAllocator::FreeListEntry, eastl::allocator>();
        eastl::allocator::allocator(local_30, "EASTL hash_set");
        new (&field_112, local_30)
            eastl::hash_set<void*, eastl::hash<void*>, eastl::equal_to<void*>, eastl::allocator, false>();
        new (&field_168) std::__thread_id();
        field_176 = 0;
        std::unique_ptr<std::mutex, std::default_delete<std::mutex>>::unique_ptr<true, void>(
            (unique_ptr<std::mutex, std::default_delete<std::mutex>>*)&field_184);
        field_192 = 0;
        field_200 = 0;
    }

    // 0x100cbcf00, 608 bytes, base-object constructor, placed by class name
    // SimpleAllocator::SimpleAllocator(unsigned long, unsigned long, unsigned int, unsigned long)
    void SimpleAllocator::SimpleAllocator(ulong param_1, ulong param_2, uint param_3, ulong param_4) {
        undefined1* this_00;
        undefined1* this_01;
        uchar* puVar1;
        ulong uVar2;
        uint* puVar3;
        long* plVar4;
        undefined8 uVar5;
        long lVar6;
        ulong uVar7;
        ulong uVar8;
        undefined1* this_02;
        allocator local_38[8];

        field_0 = 0;
        field_8 = param_1;
        field_16 = param_2;
        this_02 = &field_64;
        field_24 = 0;
        field_32 = 0;
        field_40 = 0;
        field_48 = 0;
        field_56 = 0;
        std::unique_ptr<unsigned int[], std::default_delete<unsigned int[]>>::unique_ptr<true, void>(
            (_func_decltype_nullptr*)this_02);
        this_00 = &field_72;
        std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::unique_ptr<true, void>(
            (_func_decltype_nullptr*)this_00);
        this_01 = &field_80;
        new (this_01) eastl::vector<SimpleAllocator::FreeListEntry, eastl::allocator>();
        eastl::allocator::allocator(local_38, "EASTL hash_set");
        new (&field_112, local_38)
            eastl::hash_set<void*, eastl::hash<void*>, eastl::equal_to<void*>, eastl::allocator, false>();
        new (&field_168) std::__thread_id();
        field_176 = 0;
        std::unique_ptr<std::mutex, std::default_delete<std::mutex>>::unique_ptr<true, void>(
            (unique_ptr<std::mutex, std::default_delete<std::mutex>>*)&field_184);
        field_192 = param_3;
        field_200 = param_4;
        uVar7 = field_16 * param_1;
        if (param_4 == 0) {
            puVar1 = operator_new__(uVar7);
            std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::reset<unsigned char*>(
                (unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>*)this_00, puVar1);
            uVar2 = this_00->get();
            field_48 = uVar2;
        } else {
            uVar7 = uVar7 + param_4;
            puVar1 = operator_new__(uVar7);
            std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::reset<unsigned char*>(
                (unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>*)this_00, puVar1);
            uVar2 = this_00->get();
            uVar2 = (uVar2 / param_4 + 1) * param_4;
            field_48 = uVar2;
            if (uVar2 % param_4 != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("reinterpret_cast<uintptr_t>(m_aligned) % alignment == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/"
                          "SimpleAllocator.cpp",
                          91, (char*)0);
            }
        }
        uVar8 = ((param_1 >> 5) + 1) - (ulong)((param_1 & 31) == 0);
        uVar2 = uVar8 * 4;
        puVar3 = operator_new__(uVar2);
        std::unique_ptr<unsigned int[], std::default_delete<unsigned int[]>>::reset<unsigned int*>(
            (unique_ptr<unsigned int[], std::default_delete<unsigned int[]>>*)this_02, puVar3);
        field_56 = uVar8;
        plVar4 = (long*)(*(code*)m_totalSlotSize)();
        *plVar4 = *plVar4 + uVar7;
        uVar5 = std::unique_ptr<unsigned int[], std::default_delete<unsigned int[]>>::operator[](
            (unique_ptr<unsigned int[], std::default_delete<unsigned int[]>>*)this_02, 0);
        ___bzero(uVar5, uVar2);
        this_01->reserve(param_1);
        plVar4 = (long*)(*(code*)m_totalSize)();
        *plVar4 = *plVar4 + uVar7 + uVar2;
        lVar6 = this_01->capacity();
        *plVar4 = *plVar4 + lVar6 * 32;
        if ((param_3 & 4) != 0) {
            std::make_unique<std::mutex>();
            std::unique_ptr<std::mutex, std::default_delete<std::mutex>>::operator=(
                (unique_ptr<std::mutex, std::default_delete<std::mutex>>*)&field_184, (unique_ptr*)local_38);
            local_38->~unique_ptr();
        }
    }

    // 0x100cbd2c0, 240 bytes, base-object destructor, placed by class name
    // SimpleAllocator::~SimpleAllocator()
    void SimpleAllocator::~SimpleAllocator() {
        undefined8* puVar1;
        undefined8 extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* phVar3;
        hashtable_iterator_base* extraout_RDX_01;
        undefined8 local_48;
        undefined8 local_40;
        undefined8 local_38;
        hashtable_iterator_base* local_30;

        local_48 = eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                    eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                    eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                    eastl::prime_rehash_policy, false, true, true>::begin();
        local_40 = extraout_RDX;
        local_38 = (&field_112)->end();
        phVar3 = extraout_RDX_00;
        local_30 = extraout_RDX_00;
        while (true) {
            if (!eastl::operator!=((eastl*)&local_48, (hashtable_iterator_base*)&local_38, phVar3))
                break;
            puVar1 = (undefined8*)local_48.HeapBeginPtr();
            HeapFree(this, (void*)*puVar1);
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>::operator++(
                (hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>*)&local_48);
            phVar3 = extraout_RDX_01;
        }
        (&field_184)->~unique_ptr();
        (&field_112)->~hash_map();
        (&field_80)->~vector();
        (&field_72)->~unique_ptr();
        (&field_64)->~unique_ptr();
    }

    // 0x100cbd3b0, 128 bytes, placed by class name
    // SimpleAllocator::HeapFree(void*)
    void SimpleAllocator::HeapFree(void* param_1) {
        HeapInterface* pHVar1;

        if (param_1 == (void*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("address",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/"
                      "SimpleAllocator.cpp",
                      527, (char*)0);
        }
        if ((field_200 == 0) || ((field_192 & 16) != 0)) {
            pHVar1 = (HeapInterface*)HeapInterface::Instance();
            pHVar1->Free(param_1);
        } else {
            pHVar1 = (HeapInterface*)HeapInterface::Instance();
            pHVar1->AlignedFree(param_1);
        }
    }

    // 0x100cbd430, 64 bytes, placed by class name
    // SimpleAllocator::Allocate(unsigned long)
    SimpleAllocator* SimpleAllocator::Allocate(ulong param_1) {
        ulong in_RDX;

        if (*(ulong*)(param_1 + 16) < in_RDX) {
            new (this) AllocatedBlock(0, 0, 0);
        } else {
            Allocate(this);
        }
        return this;
    }

    // 0x100cbd4a0, 544 bytes, placed by class name
    // SimpleAllocator::SafeAllocate()
    SimpleAllocator* SimpleAllocator::SafeAllocate() {
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        ulong uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        ulong uVar6;
        long* plVar7;
        undefined8* puVar8;
        undefined8* puVar9;
        uint* puVar10;
        ulong* puVar11;
        ulong* in_RSI;
        ulong uVar12;
        ulong uVar13;
        undefined4 local_80[2];
        undefined4 uStack_78;
        undefined4 uStack_74;
        ulong local_70;
        ulong local_68;
        ulong local_60;
        AllocatedBlock local_58;

        this_00 =
            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)(in_RSI + 10);
        if (eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                this_00) == '\0') {
            plVar7 = (long*)eastl::vector<SimpleAllocator::FreeListEntry, eastl::allocator>::operator[](
                (vector<SimpleAllocator::FreeListEntry, eastl::allocator>*)this_00, 0);
            uVar1 = plVar7[1];
            field_0 = *plVar7;
            field_8 = uVar1;
            field_16 = plVar7[2];
            puVar8 = (undefined8*)this_00->back();
            puVar9 = (undefined8*)eastl::vector<SimpleAllocator::FreeListEntry, eastl::allocator>::operator[](
                (vector<SimpleAllocator::FreeListEntry, eastl::allocator>*)this_00, 0);
            uVar2 = puVar8[1];
            uVar3 = puVar8[2];
            uVar4 = puVar8[3];
            *puVar9 = *puVar8;
            puVar9[1] = uVar2;
            puVar9[2] = uVar3;
            puVar9[3] = uVar4;
            this_00->pop_back();
            if ((int)field_0 != 2) {
                uVar1 = field_16;
                puVar10 = (uint*)std::unique_ptr<unsigned int[], std::default_delete<unsigned int[]>>::operator[](
                    (unique_ptr<unsigned int[], std::default_delete<unsigned int[]>>*)(in_RSI + 8), uVar1 >> 5);
                *puVar10 = *puVar10 | 1 << ((byte)uVar1 & 31);
            }
            *in_RSI = *in_RSI + 1;
            puVar11 = std::max<unsigned long>(in_RSI, in_RSI + 3);
            in_RSI[3] = *puVar11;
        } else {
            uVar1 = in_RSI[1];
            new (&local_58) AllocatedBlock();
            local_60 = uVar1;
            if (*in_RSI < uVar1) {
                local_68 = (ulong)((uint)uVar1 & 31);
                do {
                    uVar12 = in_RSI[5];
                    uVar13 = uVar12 << 5;
                    if (uVar12 < uVar1 >> 5) {
                        do {
                            uVar6 = std::unique_ptr<unsigned int[], std::default_delete<unsigned int[]>>::operator[](
                                (unique_ptr<unsigned int[], std::default_delete<unsigned int[]>>*)(in_RSI + 8), uVar12);
                            AllocateInRange((SimpleAllocator*)local_80, (uint*)in_RSI, uVar6, uVar13);
                            local_58.field_16 = local_70;
                            local_58.field_0 = local_80[0];
                            local_58._4_4_ = local_80[1];
                            local_58.field_8._0_4_ = uStack_78;
                            local_58.field_8._4_4_ = uStack_74;
                            if (CONCAT44(uStack_74, uStack_78) != 0)
                                goto LAB_100cbd691;
                            uVar12 = uVar12 + 1;
                            uVar13 = uVar13 + 32;
                            in_RSI[5] = in_RSI[5] + 1;
                        } while (uVar1 >> 5 != uVar12);
                    }
                    if (local_68 != 0) {
                        uVar12 = std::unique_ptr<unsigned int[], std::default_delete<unsigned int[]>>::operator[](
                            (unique_ptr<unsigned int[], std::default_delete<unsigned int[]>>*)(in_RSI + 8),
                            uVar13 >> 5);
                        AllocateInRange((SimpleAllocator*)local_80, (uint*)in_RSI, uVar12, uVar13);
                        local_58.field_16 = local_70;
                        local_58.field_0 = local_80[0];
                        local_58._4_4_ = local_80[1];
                        local_58.field_8._0_4_ = uStack_78;
                        local_58.field_8._4_4_ = uStack_74;
                        if (CONCAT44(uStack_74, uStack_78) != 0) {
                        LAB_100cbd691:
                            ((SimpleAllocator*)this)->field_16 = local_58.field_16;
                            ((SimpleAllocator*)this)->field_0 = CONCAT44(local_58._4_4_, local_58.field_0);
                            ((SimpleAllocator*)this)->field_8 =
                                CONCAT44(local_58.field_8._4_4_, (undefined4)local_58.field_8);
                            return (SimpleAllocator*)this;
                        }
                    }
                    in_RSI[5] = 0;
                } while (*in_RSI < local_60);
            }
            this = (SimpleAllocator*)this;
            if ((in_RSI[24] & 8) != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("!(m_flags & NO_OVERFLOW)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/"
                          "SimpleAllocator.cpp",
                          254, (char*)0);
            }
            AllocateOverflow((SimpleAllocator*)this);
        }
        return this;
    }

    // 0x100cbd7e0, 16 bytes, placed by class name
    // SimpleAllocator::TrackAllocation(SimpleAllocator::AllocatedBlock const&)
    void SimpleAllocator::TrackAllocation(AllocatedBlock* param_1) {}

    // 0x100cbd8d0, 192 bytes, placed by class name
    // SimpleAllocator::AllocateOverflow()
    SimpleAllocator* SimpleAllocator::AllocateOverflow() {
        ulong uVar1;
        long lVar2;
        long lVar3;
        long lVar4;
        ulong* puVar5;
        SimpleAllocator* in_RSI;
        ulong local_40;
        ulong local_38;

        new (this) AllocatedBlock();
        uVar1 = in_RSI->field_8;
        lVar3 = (&in_RSI->field_112)->size();
        local_38 = OverflowAlloc(in_RSI);
        if (local_38 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("newSlotAddress",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/"
                      "SimpleAllocator.cpp",
                      308, "Cannot allocate %i bytes from heap for overflow", in_RSI->field_16);
        }
        lVar2 = in_RSI->field_0;
        lVar4 = (&in_RSI->field_112)->size();
        local_40 = lVar4 + lVar2;
        puVar5 = std::max<unsigned long>(&local_40, &in_RSI->field_24);
        in_RSI->field_24 = *puVar5;
        *(undefined4*)&field_0 = 2;
        field_8 = local_38;
        field_16 = lVar3 + uVar1;
        return this;
    }

    // 0x100cbd990, 64 bytes, placed by class name
    // SimpleAllocator::OverflowAlloc()
    undefined8 SimpleAllocator::OverflowAlloc() {
        void* local_30[3];
        undefined8 local_18;

        local_18 = HeapAlloc(this);
        eastl::hashtable<void*, void*, eastl::allocator, eastl::use_self<void*>, eastl::equal_to<void*>,
                         eastl::hash<void*>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, false, true>::insert(local_30);
        return local_18;
    }

    // 0x100cbd9d0, 112 bytes, placed by class name
    // SimpleAllocator::AddToFreeList(SimpleAllocator::AllocatedBlock const&, int const*)
    bool SimpleAllocator::AddToFreeList(AllocatedBlock* param_1, int* param_2) {
        ulong uVar1;
        ulong uVar2;
        undefined1* this_00;
        FreeListEntry local_50;

        this_00 = &field_80;
        uVar1 = this_00->size();
        uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            new (&local_50) FreeListEntry(param_1, param_2);
            eastl::vector<SimpleAllocator::FreeListEntry, eastl::allocator>::emplace_back<
                SimpleAllocator::FreeListEntry>((vector<SimpleAllocator::FreeListEntry, eastl::allocator>*)this_00,
                                                &local_50);
        }
        return uVar1 < uVar2;
    }

    // 0x100cbdaf0, 96 bytes, placed by class name
    // SimpleAllocator::SafeDeAllocate(SimpleAllocator::AllocatedBlock const&)
    void SimpleAllocator::SafeDeAllocate(AllocatedBlock* param_1) {
        if (param_1->field_0 == 2) {
            OverflowFree(this, (void*)param_1->field_8);
        } else {
            AddToFreeList(this, param_1, (int*)0);
            MarkUnAllocated(this, param_1->field_16);
            if ((param_1->field_0 == 1) && ((void*)param_1->field_8 != (void*)0)) {
                _memset((void*)param_1->field_8, 221, field_16);
            }
        }
    }

    // 0x100cbdb50, 96 bytes, placed by class name
    // SimpleAllocator::CheckThreadContention()
    void SimpleAllocator::CheckThreadContention() {
        undefined8 uVar1;
        undefined8 uVar3;

        if (field_176 != '\0') {
            uVar1 = field_168;
            uVar3 = std::this_thread::get_id();
            if (std::operator==(uVar1, uVar3) == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("m_thread == std::this_thread::get_id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/"
                          "SimpleAllocator.cpp",
                          583, "Unsafe allocator: %p, slotSize:%zu accessed from multiple threads!", this, field_16);
            }
        }
    }

    // 0x100cbdbb0, 48 bytes, placed by class name
    // SimpleAllocator::OverflowFree(void*)
    void SimpleAllocator::OverflowFree(void* param_1) {
        void* local_18;

        local_18 = param_1;
        HeapFree(this, param_1);
        (&field_112, &local_18)->erase();
    }

    // 0x100cbdbe0, 144 bytes, placed by class name
    // SimpleAllocator::MarkUnAllocated(unsigned long)
    void SimpleAllocator::MarkUnAllocated(ulong param_1) {
        byte bVar1;
        uint* puVar3;

        if (((&field_72)->operator_cast_to_bool()) && (param_1 < field_8)) {
            puVar3 = (uint*)std::unique_ptr<unsigned int[], std::default_delete<unsigned int[]>>::operator[](
                (unique_ptr<unsigned int[], std::default_delete<unsigned int[]>>*)&field_64, param_1 >> 5);
            if ((*puVar3 >> ((uint)param_1 & 31) & 1) != 0) {
                bVar1 = (byte)param_1 & 31;
                puVar3 = (uint*)std::unique_ptr<unsigned int[], std::default_delete<unsigned int[]>>::operator[](
                    (unique_ptr<unsigned int[], std::default_delete<unsigned int[]>>*)&field_64, param_1 >> 5);
                *puVar3 = *puVar3 & (-2 << bVar1 | 4294967294U >> 32 - bVar1);
                field_0 = field_0 + -1;
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert(
            "m_store && slot < m_storeSize && m_allocationFlags[slot >> FLAG_UINT] & (1 << (slot & FLAG_MASK))",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/SimpleAllocator.cpp",
            498, "Attempting to free up an invalid slot");
    }

    // 0x100cbdc90, 96 bytes, placed by class name
    // SimpleAllocator::HeapAlloc()
    void SimpleAllocator::HeapAlloc() {
        HeapInterface* pHVar1;

        field_32 = field_32 + 1;
        if ((field_200 == 0) || ((field_192 & 16) != 0)) {
            pHVar1 = (HeapInterface*)HeapInterface::Instance();
            pHVar1->Alloc(field_16);
        } else {
            pHVar1 = (HeapInterface*)HeapInterface::Instance();
            pHVar1->AlignedAlloc(field_16, field_200);
        }
    }

    // 0x100cbdde0, 112 bytes, placed by class name
    // SimpleAllocator::GetBlock(void const*) const
    SimpleAllocator* SimpleAllocator::GetBlock(void* param_1) {
        byte bVar1;
        ulong uVar2;
        void* in_RDX;
        ulong uVar3;
        int iVar4;

        uVar2 = (ulong)((long)in_RDX - *(long*)((long)param_1 + 48)) / *(ulong*)((long)param_1 + 16);
        uVar3 = *(ulong*)((long)param_1 + 8);
        if (uVar2 < uVar3) {
            iVar4 = 1;
            uVar3 = uVar2;
        } else {
            bVar1 = SafeCheckOverflow(param_1, in_RDX);
            if (bVar1 == 0) {
                in_RDX = (void*)0;
            }
            iVar4 = (uint)bVar1 * 2;
        }
        new (this) AllocatedBlock(iVar4, in_RDX, uVar3);
        return this;
    }

    // 0x100cbdea0, 64 bytes, placed by class name
    // SimpleAllocator::ResetThreadContentionTracking()
    void SimpleAllocator::ResetThreadContentionTracking() {
        ulong uVar1;
        long lVar2;
        ulong uVar3;

        uVar1 = m_allocatorCount;
        if (m_allocatorCount != 0) {
            uVar3 = 0;
            do {
                lVar2 = std::array<SimpleAllocator, 256ul>::operator[](uVar3);
                *(undefined1*)(lVar2 + 176) = 0;
                uVar3 = uVar3 + 1;
            } while (uVar1 != uVar3);
        }
    }

    // 0x100cbdee0, 96 bytes, placed by class name
    // SimpleAllocator::GetAllocatedBlock(unsigned long)
    SimpleAllocator* SimpleAllocator::GetAllocatedBlock(ulong param_1) {
        ulong in_RDX;

        new (this) AllocatedBlock();
        field_16 = in_RDX;
        if (in_RDX < *(ulong*)(param_1 + 8)) {
            *(undefined4*)&field_0 = 1;
            if (IsAllocated((SimpleAllocator*)param_1, (AllocatedBlock*)this) != '\0') {
                field_8 = in_RDX * *(long*)(param_1 + 16) + *(long*)(param_1 + 48);
            }
        }
        return this;
    }

    // 0x100cbdf40, 64 bytes, placed by class name
    // SimpleAllocator::IsAllocated(SimpleAllocator::AllocatedBlock const&) const
    bool SimpleAllocator::IsAllocated(AllocatedBlock* param_1) {
        ulong uVar1;
        uint* puVar2;
        bool bVar3;

        bVar3 = true;
        if (param_1->field_0 != 2) {
            uVar1 = param_1->field_16;
            if (uVar1 < field_8) {
                puVar2 = (uint*)std::unique_ptr<unsigned int[], std::default_delete<unsigned int[]>>::operator[](
                    (unique_ptr<unsigned int[], std::default_delete<unsigned int[]>>*)&field_64, uVar1 >> 5);
                bVar3 = (*puVar2 >> ((uint)uVar1 & 31) & 1) != 0;
            } else {
                bVar3 = false;
            }
        }
        return bVar3;
    }

    // 0x100cbdf80, 128 bytes, placed by class name
    // SimpleAllocator::GetAllocationCountFromFlags()
    long SimpleAllocator::GetAllocationCountFromFlags() {
        int* piVar1;
        long lVar2;
        ulong uVar3;
        long lVar4;
        bitset<32ul, unsigned int> local_38[8];

        if (field_56 == 0) {
            lVar4 = 0;
        } else {
            uVar3 = 0;
            lVar4 = 0;
            do {
                eastl::bitset<32ul, unsigned int>::bitset(local_38);
                piVar1 = (int*)std::unique_ptr<unsigned int[], std::default_delete<unsigned int[]>>::operator[](
                    (unique_ptr<unsigned int[], std::default_delete<unsigned int[]>>*)&field_64, uVar3);
                oldscape::graphics::XPlotBlender<oldscape::graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                    (XPlotBlender<oldscape::graphics::XPlot_NormalAlpha>*)local_38, *piVar1);
                lVar2 = local_38->count();
                lVar4 = lVar4 + lVar2;
                uVar3 = uVar3 + 1;
            } while (uVar3 < field_56);
        }
        return lVar4;
    }

    // 0x100cc5270, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.84
    void ___cxx_global_var_init_84() {
        new (&SimpleAllocator::m_allocators) std::array<SimpleAllocator, 256ul>();
        ___cxa_atexit(PTR__array_100ee6e98, &SimpleAllocator::m_allocators, 4294967296);
    }

} // namespace jag

// 0x100cbcd60, 32 bytes, placed by neighbouring functions
// TLS wrapper function for jag::SimpleAllocator::m_threadLocalAllocators
void jag::SimpleAllocator::m_threadLocalAllocators() {
    ___tls_init();
    (*(code*)m_threadLocalAllocators)();
}
