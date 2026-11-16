// libs/jtl/allocator/SimpleAllocator.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.jtl

#include "SimpleAllocator.h"
#include "Bucket.h"

namespace jag {
    // 0x100f4e4d0
    int32_t SimpleAllocator::m_threadLocalAllocators[6] = {0, 0, 0, 0, 231224, 0};

    // 0x100f4e4e8
    int32_t SimpleAllocator::m_threadLocalAllocatorCount[6] = {0, 0, 0, 0, 237880, 0};

    // 0x100f4e500
    int32_t SimpleAllocator::m_totalSlotSize[6] = {0, 0, 0, 0, 237888, 0};

    // 0x100f4e518
    int32_t SimpleAllocator::m_totalSize[6] = {0, 0, 0, 0, 237896, 0};

    // 0x103bf2668, set at startup by ___cxx_global_var_init.84
    std::array<SimpleAllocator, 256ul> SimpleAllocator::m_allocators = array<SimpleAllocator, 256ul>();

    // 0x103bff668
    int64_t SimpleAllocator::m_allocatorCount;

    // 0x10000b2a0: SimpleAllocator::GetSize() const has the same machine code as eastl::string::Layout::GetHeapSize() const

    // 0x100023f30: SimpleAllocator::GetSlotSize() const has the same machine code as oldscape::option::IOption::GetName() const

    // 0x1000fcbb0: SimpleAllocator::begin() const has the same machine code as oldscape::ClientObj::GetHighlight()

    // 0x1001fb280: SimpleAllocator::GetOverflowList() const has the same machine code as http::CRMData::GetActionInfo() const

    // 0x100cbaf90
    auto SimpleAllocator::Allocate() {
        auto result;
        __thread_id* p_Var2;
        mutex* mutex;
        lock_guard<std::mutex> local_20;

        if ((field_192 & 4) == 0) {
            if (field_176 == '\0') {
                p_Var2 = std::this_thread::get_id();
                if (field_168 != p_Var2) {
                    p_Var2 = std::this_thread::get_id();
                    field_168 = p_Var2;
                    field_176 = 1;
                }
            }
            p_Var2 = std::this_thread::get_id();
            if (!(field_168 == p_Var2)) {
                LogAssert("m_thread == currentThread",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/"
                          "SimpleAllocator.cpp",
                          179, "Unsafe allocator: %p accessed from multiple threads: BlockSize:%zu !", this,
                          m_slotSize);
            }
            SafeAllocate(&result, this);
        } else {
            mutex = (mutex*)*field_184;
            local_20 = std::lock_guard(*mutex);
            SafeAllocate(&result, this);
        }
        return result;
    }

    // 0x100cbb090
    void SimpleAllocator::DeAllocate(void* arg1) {
        mutex* mutex;
        AllocatedBlock local_40;
        lock_guard<std::mutex> local_28;

        if ((field_192 & 4) == 0) {
            GetBlock(&local_40, this, arg1);
            SafeDeAllocate(local_40);
        } else {
            mutex = (mutex*)*field_184;
            local_28 = std::lock_guard(*mutex);
            GetBlock(&local_40, this, arg1);
            SafeDeAllocate(local_40);
        }
    }

    // 0x100cbb140
    void SimpleAllocator::DeAllocate(const SimpleAllocator::AllocatedBlock& allocatedBlock) {
        mutex* mutex;
        lock_guard<std::mutex> local_20;

        if ((field_192 & 4) == 0) {
            CheckThreadContention();
            SafeDeAllocate(allocatedBlock);
        } else {
            mutex = (mutex*)*field_184;
            local_20 = std::lock_guard(*mutex);
            SafeDeAllocate(allocatedBlock);
        }
    }

    // 0x100cbb1d0
    uint32_t SimpleAllocator::CheckOverflow(const void* arg1) const {
        uint32_t uVar1;
        mutex* mutex;
        lock_guard<std::mutex> local_20;

        if ((field_192 & 4) == 0) {
            uVar1 = SafeCheckOverflow(arg1);
        } else {
            mutex = (mutex*)*field_184;
            local_20 = std::lock_guard(*mutex);
            uVar1 = SafeCheckOverflow(arg1);
        }
        return uVar1;
    }

    // 0x100cbb260
    void SimpleAllocator::ResetMetrics() {
        mutex* mutex;
        lock_guard<std::mutex> local_20;

        if ((field_192 & 4) == 0) {
            field_24 = 0;
            field_32 = 0;
        } else {
            mutex = (mutex*)*field_184;
            local_20 = std::lock_guard(*mutex);
            field_24 = 0;
            field_32 = 0;
        }
    }

    // 0x100cbb2d0
    void SimpleAllocator::PrintMetrics() {
        auto this_00 = logger::default_logger();
        char* pcVar7 = "ThreadSafe ";
        if ((field_192 & 4) == 0) {
            pcVar7 = "";
        }
        unsigned long uVar1 = field_48;
        unsigned long uVar2 = field_8;
        unsigned long uVar3 = m_slotSize;
        unsigned long uVar4 = field_24;
        uint64_t uVar5 = field_80.size();
        uint64_t uVar6 = GetOverflowCount();
        this_00->Log(
            false, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/SimpleAllocator.cpp",
            406,
            "%sStore at: %p, entry size: %zu, reserved capacity: %zu, ceiling: %zu, freelist ceiling: %zu, overflowed "
            "by %zu",
            pcVar7, uVar1, uVar3, uVar2, uVar4, uVar5, uVar6);
    }

    // 0x100cbb390
    void SimpleAllocator::PrintAllocations(bool arg1) {}

    // 0x100cbbf50
    float Bytes2Megabytes<unsigned long>(unsigned long arg1) {
        return (float)arg1 * 9.536743e-07;
    }

    // 0x100cbc0f0
    void BucketManager::DirectDeAllocate(const BucketManager::DirectAllocation& directAllocation) {
        directAllocation.field_24->DirectDeAllocation(directAllocation);
    }

    // 0x100cbc110
    bool BucketManager::CheckInBucket(void* arg1) {
        unsigned long* puVar1;
        array<Bucket, _256ul>* buckets;
        long lVar2;
        unsigned long uVar3;
        bool bVar4;

        if (arg1 == nullptr) {
            bVar4 = false;
        } else {
            m_buckets();
            puVar1 = (unsigned long*)(*(void (*)(...))m_bucketCount)();
            uVar3 = *puVar1;
            buckets = (array<Bucket, _256ul>*)(*(void (*)(...))m_buckets)();
            lVar2 = CheckAllocation(buckets, uVar3, arg1);
            bVar4 = true;
            if (lVar2 == 0) {
                uVar3 = buckets->operator_cast_to_unsigned_long();
                lVar2 = CheckAllocation((array<Bucket, _256ul>*)&m_safeBuckets, uVar3, arg1);
                bVar4 = lVar2 != 0;
            }
        }
        return bVar4;
    }

    // 0x100cbc180
    PostProcessManager* BucketManager::CheckAllocation(std::array<Bucket, 256ul>& buckets, unsigned long arg2,
                                                       void* arg3) {
        bool cVar1;
        PostProcessManager* pPVar2;
        long lVar3;
        void* pvVar4;
        unsigned long uVar5;
        bool bVar6;
        PostProcessManager* local_40;

        if (arg2 != 0) {
            uVar5 = 0;
            bVar6 = true;
            do {
                pPVar2 = &buckets[uVar5];
                lVar3 = pPVar2->GetSlotSize();
                if (((lVar3 != 0) && (pvVar4 = (void*)pPVar2->GetRenderTargetsManager(), pvVar4 <= arg3)) &&
                    (pvVar4 = (void*)pPVar2->GetEnd(), arg3 < pvVar4)) {
                    local_40 = pPVar2;
                    break;
                }
                uVar5 = uVar5 + 1;
                bVar6 = uVar5 < arg2;
            } while (arg2 != uVar5);
            if (bVar6) {
                return local_40;
            }
        }
        if (arg2 != 0) {
            uVar5 = 0;
            do {
                pPVar2 = &buckets[uVar5];
                lVar3 = pPVar2->GetSlotSize();
                if ((lVar3 != 0) && (cVar1 = pPVar2->CheckOverflow(arg3), cVar1)) {
                    return pPVar2;
                }
                uVar5 = uVar5 + 1;
            } while (arg2 != uVar5);
        }
        return nullptr;
    }

    // 0x100cbc290
    void BucketManager::GetAllocationSize(void* arg1) {
        unsigned long* puVar1;
        array<Bucket, _256ul>* buckets;
        Bucket* bucket;
        unsigned long uVar2;
        uint64_t uVar3;

        if (arg1 == nullptr) {
            uVar3 = 0;
        } else {
            m_buckets();
            puVar1 = (unsigned long*)(*(void (*)(...))m_bucketCount)();
            uVar2 = *puVar1;
            buckets = (array<Bucket, _256ul>*)(*(void (*)(...))m_buckets)();
            bucket = (Bucket*)CheckAllocation(buckets, uVar2, arg1);
            if (bucket == nullptr) {
                uVar2 = buckets->operator_cast_to_unsigned_long();
                bucket = (Bucket*)CheckAllocation((array<Bucket, _256ul>*)&m_safeBuckets, uVar2, arg1);
                if (bucket == nullptr) {
                    uVar3 = _malloc_size(arg1);
                    return uVar3;
                }
            }
            uVar3 = bucket->GetSlotSize();
        }
        return uVar3;
    }

    // 0x100cbc310
    void BucketManager::DeAllocate(void* arg1) {
        unsigned long* puVar1;
        array<Bucket, _256ul>* buckets;
        Bucket* bucket;
        unsigned long uVar2;

        if (arg1 != nullptr) {
            m_buckets();
            puVar1 = (unsigned long*)(*(void (*)(...))m_bucketCount)();
            uVar2 = *puVar1;
            buckets = (array<Bucket, _256ul>*)(*(void (*)(...))m_buckets)();
            bucket = (Bucket*)CheckAllocation(buckets, uVar2, arg1);
            if (bucket == nullptr) {
                uVar2 = buckets->operator_cast_to_unsigned_long();
                bucket = (Bucket*)CheckAllocation((array<Bucket, _256ul>*)&m_safeBuckets, uVar2, arg1);
                if (bucket == nullptr) {
                    HeapInterface::Instance()->AlignedFree(arg1);
                    return;
                }
            }
            bucket->DeAllocate(arg1);
        }
    }

    // 0x100cbcaa0
    long SimpleAllocator::New(unsigned long arg1, unsigned long arg2, unsigned int arg3, unsigned long arg4) {
        long lVar3;
        long* plVar4;
        unsigned long* puVar5;
        SimpleAllocator* pSVar6;
        uint8_t bVar7;
        uint8_t extraout_DL;
        array<SimpleAllocator, 32ul>* paVar8;
        unsigned int uVar9;
        long unaff_R12;
        array<SimpleAllocator, 256ul>* array;
        bool bVar10;

        if ((arg3 & 1) != 0) {
            LogAssert("(flags & SimpleAllocator::NEW) == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/"
                      "SimpleAllocator.cpp",
                      22, "NEW flag is deprecated, instead construct an instance of SimpleAllocator directly");
        }
        unsigned long arg1_00 = arg2;
        char cVar2 = this_thread::IsMainThread();
        array<SimpleAllocator, 256ul>* paVar1 = m_allocatorCount;
        if (!cVar2) {
            if ((arg3 & 4) != 0) {
                LogAssert("(flags & SimpleAllocator::THREAD_SAFE) == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/"
                          "SimpleAllocator.cpp",
                          47, nullptr);
            }
            if ((arg3 & 1) == 0) {
                plVar4 = (long*)(*(void (*)(...))m_threadLocalAllocatorCount)();
                bVar10 = *plVar4 != 0;
                if (bVar10) {
                    paVar8 = nullptr;
                    do {
                        m_threadLocalAllocators();
                        lVar3 = (*paVar8)[arg1_00];
                        arg1_00 = (((uint64_t)((int64_t)(arg1_00 >> 8)) << 8) |
                                   (uint8_t)((*(uint8_t*)(lVar3 + 192) & 2) == 0));
                        m_threadLocalAllocators();
                        bVar7 = *(unsigned long*)(lVar3 + 16) == arg2 & (uint8_t)arg1_00;
                        if (bVar7 == 1) {
                            m_threadLocalAllocators();
                            unaff_R12 = lVar3;
                            bVar7 = extraout_DL;
                        }
                        if (bVar7 != 0)
                            break;
                        paVar8 = paVar8 + 1;
                        puVar5 = (unsigned long*)(*(void (*)(...))m_threadLocalAllocatorCount)();
                        bVar10 = paVar8 < (array<SimpleAllocator, 32ul>*)*puVar5;
                    } while (bVar10);
                }
                if (bVar10) {
                    return unaff_R12;
                }
            }
            puVar5 = (unsigned long*)(*(void (*)(...))m_threadLocalAllocatorCount)();
            if (31 < *puVar5) {
                LogAssert("m_threadLocalAllocatorCount < NUMBER_OF_THREADLOCAL_ALLOCATORS",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/"
                          "SimpleAllocator.cpp",
                          62, "Not enough thread local allocators!");
            }
            m_threadLocalAllocators();
            plVar4 = (long*)(*(void (*)(...))m_threadLocalAllocatorCount)();
            pSVar6 = (SimpleAllocator*)(*(*plVar4))[arg1_00];
            SimpleAllocator(pSVar6, arg1, arg2, arg3, arg4);
            m_threadLocalAllocators();
            paVar8 = (array<SimpleAllocator, 32ul>*)*plVar4;
            *plVar4 = (long)(paVar8 + 1);
            lVar3 = (*paVar8)[arg1];
        } else {
            if ((arg3 & 1) == 0) {
                bVar10 = m_allocatorCount != nullptr;
                if (bVar10) {
                    array = nullptr;
                    do {
                        lVar3 = (*array)[arg1_00];
                        cVar2 = '\x01';
                        if (*(unsigned long*)(lVar3 + 16) == arg2) {
                            uVar9 = *(unsigned int*)(lVar3 + 192) & 2;
                            arg1_00 = (unsigned long)uVar9;
                            if ((uVar9 == 0) && (uVar9 = (*(unsigned int*)(lVar3 + 192) ^ arg3) & 4,
                                                 cVar2 = (char)(uVar9 >> 2), uVar9 == 0)) {
                                unaff_R12 = lVar3;
                            }
                        }
                        if (!cVar2)
                            break;
                        array = array + 1;
                        bVar10 = array < paVar1;
                    } while (paVar1 != array);
                }
                if (bVar10) {
                    return unaff_R12;
                }
            }
            if ((array<SimpleAllocator, 256ul>*)255 < m_allocatorCount) {
                LogAssert("m_allocatorCount < NUMBER_OF_ALLOCATORS",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/"
                          "SimpleAllocator.cpp",
                          40, "Not enough allocators!");
            }
            pSVar6 = (SimpleAllocator*)(*m_allocatorCount)[arg1_00];
            SimpleAllocator(pSVar6, arg1, arg2, arg3, arg4);
            paVar1 = m_allocatorCount;
            m_allocatorCount = m_allocatorCount + 1;
            lVar3 = (*paVar1)[arg1];
        }
        return lVar3;
    }

    // 0x100cbcda0
    SimpleAllocator::SimpleAllocator()
        : field_48(0), field_56(0), field_32(0), field_40(0), m_slotSize(0), field_24(0), field_0(0), field_8(0) {

        new (&field_112) eastl::hash_set<void*>(local_30);
        new (&field_168) std::__thread_id();
        field_176 = 0;
        field_184.unique_ptr<true, void>();
        field_192 = 0;
        field_200 = 0;
    }

    // 0x100cbcf00
    SimpleAllocator::SimpleAllocator(unsigned long arg1, unsigned long arg2, unsigned int arg3, unsigned long arg4)
        : field_0(0), field_8(arg1), m_slotSize(arg2) {
        unsigned char* puVar1;
        unsigned long uVar2;
        ReturnValue local_38;

        uint8_t* this_02 = &field_64;
        field_24 = 0;
        field_32 = 0;
        field_40 = 0;
        field_48 = 0;
        field_56 = 0;
        ((unique_ptr<unsigned int[]>*)this_02)->unique_ptr<true, void>(arg1);
        uint8_t* this_00 = &field_72;
        ((unique_ptr<unsigned char[]>*)this_00)->unique_ptr<true, void>(arg1);
        uint8_t* this_01 = &field_80;
        new (this_01) eastl::vector<SimpleAllocator::FreeListEntry>();
        new (&field_112) eastl::hash_set<void*>(local_38);
        new (&field_168) std::__thread_id();
        field_176 = 0;
        field_184.unique_ptr<true, void>();
        field_192 = arg3;
        field_200 = arg4;
        unsigned long arg1_01 = m_slotSize * arg1;
        if (arg4 == 0) {
            puVar1 = (unsigned char*)operator_new__(arg1_01);
            ((unique_ptr<unsigned char[]>*)this_00)->reset<unsigned char*>(puVar1);
            uVar2 = ((unique_ptr<unsigned char[]>*)this_00)->get();
            field_48 = uVar2;
        } else {
            arg1_01 = arg1_01 + arg4;
            puVar1 = (unsigned char*)operator_new__(arg1_01);
            ((unique_ptr<unsigned char[]>*)this_00)->reset<unsigned char*>(puVar1);
            uVar2 = ((unique_ptr<unsigned char[]>*)this_00)->get();
            uVar2 = (uVar2 / arg4 + 1) * arg4;
            field_48 = uVar2;
            if (uVar2 % arg4 != 0) {
                LogAssert("reinterpret_cast<uintptr_t>(m_aligned) % alignment == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/"
                          "SimpleAllocator.cpp",
                          91, nullptr);
            }
        }
        unsigned long uVar6 = ((arg1 >> 5) + 1) - (unsigned long)((arg1 & 31) == 0);
        uVar2 = uVar6 * 4;
        auto arg1_00 = operator_new__(uVar2);
        ((unique_ptr<unsigned int[]>*)this_02)->reset<unsigned int*>(arg1_00);
        field_56 = uVar6;
        long* plVar3 = (long*)(*(void (*)(...))m_totalSlotSize)();
        *plVar3 = *plVar3 + arg1_01;
        ___bzero((*((unique_ptr<unsigned int[]>*)this_02))[0], uVar2);
        this_01->reserve(arg1);
        plVar3 = (long*)(*(void (*)(...))m_totalSize)();
        *plVar3 = *plVar3 + arg1_01 + uVar2;
        long lVar5 = this_01->capacity();
        *plVar3 = *plVar3 + lVar5 * 32;
        if ((arg3 & 4) != 0) {
            local_38 = std::make_unique<std::mutex>();
            field_184 = local_38;
        }
    }

    // 0x100cbd2c0
    SimpleAllocator::~SimpleAllocator() {
        uint64_t* puVar1;
        uint64_t extraout_RDX;
        uint64_t extraout_RDX_00;

        uint8_t* this_00 = &field_112;
        uint64_t local_48 = this_00->begin();
        uint64_t local_40 = extraout_RDX;
        uint64_t local_38 = this_00->end();
        uint64_t local_30 = extraout_RDX_00;
        while (true) {
            if (local_48 != local_38 == '\0')
                break;
            puVar1 = (uint64_t*)local_48.HeapBeginPtr();
            HeapFree(*puVar1);
            ++local_48;
        }
        field_184.~unique_ptr();
        this_00->~hash_map();
        field_80.~vector();
        ((unique_ptr<unsigned char[]>*)&field_72)->~unique_ptr();
        ((unique_ptr<unsigned int[]>*)&field_64)->~unique_ptr();
    }

    // 0x100cbd3b0
    void SimpleAllocator::HeapFree(void* arg1) {
        HeapInterface* pHVar1;

        if (arg1 == nullptr) {
            LogAssert("address",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/"
                      "SimpleAllocator.cpp",
                      527, nullptr);
        }
        if ((field_200 == 0) || ((field_192 & 16) != 0)) {
            pHVar1 = HeapInterface::Instance();
            pHVar1->Free(arg1);
        } else {
            pHVar1 = HeapInterface::Instance();
            pHVar1->AlignedFree(arg1);
        }
    }

    // 0x100cbd430
    AllocatedBlock SimpleAllocator::Allocate(unsigned long arg1) {
        if (m_slotSize < arg1) {
            AllocatedBlock result(0, nullptr, 0);
        } else {
            Allocate(&result, this);
        }
        return result;
    }

    // 0x100cbd4a0
    auto SimpleAllocator::SafeAllocate() {
        auto result;
        unsigned long uVar1;
        ReturnValue RVar2;
        uint64_t uVar3;
        uint64_t uVar4;
        uint64_t uVar5;
        unsigned int* puVar7;
        ReturnValue* pRVar8;
        uint64_t* puVar9;
        uint64_t* puVar10;
        unsigned long* puVar11;
        unsigned long uVar12;
        unsigned long arg2;
        ReturnValue local_80;
        ReturnValue RStack_78;
        ReturnValue local_70;
        unsigned long local_68;
        unsigned long local_60;
        ReturnValue local_58;
        ReturnValue RStack_50;
        ReturnValue local_48;
        ReturnValue* local_38;

        uint8_t* this_00 = &field_80;
        if (this_00->empty() == '\0') {
            pRVar8 = (ReturnValue*)(*this_00)[0];
            RVar2 = pRVar8[1];
            result = *pRVar8;
            &result[1] = RVar2;
            &result[2] = pRVar8[2];
            puVar9 = (uint64_t*)this_00->back();
            puVar10 = (uint64_t*)(*this_00)[0];
            uVar3 = puVar9[1];
            uVar4 = puVar9[2];
            uVar5 = puVar9[3];
            *puVar10 = *puVar9;
            puVar10[1] = uVar3;
            puVar10[2] = uVar4;
            puVar10[3] = uVar5;
            this_00->pop_back();
            if (result != 2) {
                RVar2 = &result[2];
                puVar7 = (unsigned int*)(*((unique_ptr<unsigned int[]>*)&field_64))[(unsigned long)RVar2 >> 5];
                *puVar7 = *puVar7 | 1 << (RVar2._0_1_ & 31);
            }
            field_0 = field_0 + 1;
            puVar11 = std::max<unsigned long>(field_0, field_24);
            field_24 = *puVar11;
        } else {
            uVar1 = field_8;
            local_38 = &result;
            new (&local_58) AllocatedBlock();
            local_60 = uVar1;
            if (field_0 < uVar1) {
                local_68 = (unsigned long)((unsigned int)uVar1 & 31);
                do {
                    uVar12 = field_40;
                    arg2 = uVar12 << 5;
                    if (uVar12 < uVar1 >> 5) {
                        do {
                            puVar7 = (unsigned int*)(*((unique_ptr<unsigned int[]>*)&field_64))[uVar12];
                            AllocateInRange(&local_80, this, puVar7, arg2, 32);
                            local_48 = local_70;
                            local_58 = local_80;
                            RStack_50 = RStack_78;
                            if (RStack_78 != (ReturnValue)0)
                                goto LAB_100cbd691;
                            uVar12 = uVar12 + 1;
                            arg2 = arg2 + 32;
                            field_40 = field_40 + 1;
                        } while (uVar1 >> 5 != uVar12);
                    }
                    uVar12 = local_68;
                    if (local_68 != 0) {
                        puVar7 = (unsigned int*)(*((unique_ptr<unsigned int[]>*)&field_64))[arg2 >> 5];
                        AllocateInRange(&local_80, this, puVar7, arg2, uVar12);
                        local_48 = local_70;
                        local_58 = local_80;
                        RStack_50 = RStack_78;
                        if (RStack_78 != (ReturnValue)0) {
                        LAB_100cbd691:
                            local_38[2] = local_48;
                            *local_38 = local_58;
                            local_38[1] = RStack_50;
                            return local_38;
                        }
                    }
                    field_40 = 0;
                } while (field_0 < local_60);
            }
            &result = local_38;
            if ((field_192 & 8) != 0) {
                LogAssert("!(m_flags & NO_OVERFLOW)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/"
                          "SimpleAllocator.cpp",
                          254, nullptr);
            }
            AllocateOverflow(local_38, this);
        }
        return result;
    }

    // 0x100cbd7e0
    void SimpleAllocator::TrackAllocation(const SimpleAllocator::AllocatedBlock& allocatedBlock) {}

    // 0x100cbd8d0
    AllocatedBlock SimpleAllocator::AllocateOverflow() {
        AllocatedBlock result;
        unsigned long uVar1 = field_8;
        long lVar3 = field_112.size();
        ReturnValue local_38 = (ReturnValue)OverflowAlloc();
        if (local_38 == (ReturnValue)0) {
            LogAssert("newSlotAddress",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/"
                      "SimpleAllocator.cpp",
                      308, "Cannot allocate %i bytes from heap for overflow", m_slotSize);
        }
        unsigned long uVar2 = field_0;
        unsigned long local_40 = field_112.size() + uVar2;
        auto puVar5 = std::max<unsigned long>(local_40, field_24);
        field_24 = *puVar5;
        result = 2;
        &result[1] = local_38;
        &result[2] = (ReturnValue)(lVar3 + uVar1);
        return result;
    }

    // 0x100cbd990
    uint64_t SimpleAllocator::OverflowAlloc() {
        void* local_30[3];

        return local_18 = HeapAlloc();
        eastl::hashtable<void*, void*, eastl::allocator, eastl::use_self<void*>, eastl::equal_to<void*>,
                         eastl::hash<void*>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, false, true>::insert(*local_30);
        return local_18;
    }

    // 0x100cbd9d0
    bool SimpleAllocator::AddToFreeList(const SimpleAllocator::AllocatedBlock& allocatedBlock, const int* arg2) {
        FreeListEntry local_50;

        uint8_t* this_00 = &field_80;
        unsigned long uVar1 = this_00->size();
        unsigned long uVar2 = this_00->capacity();
        if (uVar1 < uVar2) {
            local_50 = FreeListEntry(allocatedBlock, arg2);
            this_00->emplace_back<SimpleAllocator::FreeListEntry>(local_50);
        }
        return uVar1 < uVar2;
    }

    // 0x100cbdaf0
    void SimpleAllocator::SafeDeAllocate(const SimpleAllocator::AllocatedBlock& allocatedBlock) {
        if (allocatedBlock.field_0 == 2) {
            OverflowFree(allocatedBlock.field_8);
        } else {
            AddToFreeList(allocatedBlock, nullptr);
            MarkUnAllocated(allocatedBlock.field_16);
            if ((allocatedBlock.field_0 == 1) && (allocatedBlock.field_8 != nullptr)) {
                _memset(allocatedBlock.field_8, 221, m_slotSize);
            }
        }
    }

    // 0x100cbdb50
    void SimpleAllocator::CheckThreadContention() {
        __thread_id* thread_id1;
        __thread_id* thread_id2;

        if (field_176 != '\0') {
            thread_id1 = field_168;
            thread_id2 = std::this_thread::get_id();
            if (thread_id1 == thread_id2 == '\0') {
                LogAssert("m_thread == std::this_thread::get_id()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/"
                          "SimpleAllocator.cpp",
                          583, "Unsafe allocator: %p, slotSize:%zu accessed from multiple threads!", this, m_slotSize);
            }
        }
    }

    // 0x100cbdbb0
    void SimpleAllocator::OverflowFree(void* arg1) {
        HeapFree(arg1);
        field_112.erase(arg1);
    }

    // 0x100cbdbe0
    void SimpleAllocator::MarkUnAllocated(unsigned long arg1) {
        uint8_t bVar1;
        unsigned int* puVar3;

        if (((&field_72)->operator_cast_to_bool() != '\0') && (arg1 < field_8)) {
            puVar3 = (unsigned int*)(*((unique_ptr<unsigned int[]>*)&field_64))[arg1 >> 5];
            if ((*puVar3 >> ((unsigned int)arg1 & 31) & 1) != 0) {
                bVar1 = (uint8_t)arg1 & 31;
                puVar3 = (unsigned int*)(*((unique_ptr<unsigned int[]>*)&field_64))[arg1 >> 5];
                *puVar3 = *puVar3 & (-2 << bVar1 | 4294967294U >> 32 - bVar1);
                field_0 = field_0 - 1;
                return;
            }
        }
        LogAssert(
            "m_store && slot < m_storeSize && m_allocationFlags[slot >> FLAG_UINT] & (1 << (slot & FLAG_MASK))",
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/SimpleAllocator.cpp",
            498, "Attempting to free up an invalid slot");
    }

    // 0x100cbdc90
    void SimpleAllocator::HeapAlloc() {
        HeapInterface* pHVar1;

        field_32 = field_32 + 1;
        if ((field_200 == 0) || ((field_192 & 16) != 0)) {
            pHVar1 = HeapInterface::Instance();
            pHVar1->Alloc(m_slotSize);
        } else {
            pHVar1 = HeapInterface::Instance();
            pHVar1->AlignedAlloc(m_slotSize, field_200);
        }
    }

    // 0x100cbdde0
    AllocatedBlock SimpleAllocator::GetBlock(const void* arg1) const {
        uint8_t bVar1;
        BlockState blockState;

        unsigned long uVar2 = ((long)arg1 - field_48) / m_slotSize;
        unsigned long arg3 = field_8;
        if (uVar2 < arg3) {
            blockState = 1;
            arg3 = uVar2;
        } else {
            bVar1 = SafeCheckOverflow(arg1);
            if (bVar1 == 0) {
                arg1 = nullptr;
            }
            blockState = (unsigned int)bVar1 * 2;
        }
        return AllocatedBlock(blockState, arg1, arg3);
    }

    // 0x100cbdea0
    void SimpleAllocator::ResetThreadContentionTracking() {
        long lVar2;
        array<SimpleAllocator, 256ul>* this_00;
        unsigned long in_RSI;

        array<SimpleAllocator, 256ul>* paVar1 = m_allocatorCount;
        if (m_allocatorCount != nullptr) {
            this_00 = nullptr;
            do {
                lVar2 = (*this_00)[in_RSI];
                *(uint8_t*)(lVar2 + 176) = 0;
                this_00 = this_00 + 1;
            } while (paVar1 != this_00);
        }
    }

    // 0x100cbdee0
    AllocatedBlock SimpleAllocator::GetAllocatedBlock(unsigned long arg1) {
        AllocatedBlock result;
        &result[2] = (ReturnValue)arg1;
        if (arg1 < field_8) {
            result = 1;
            if (IsAllocated(result) != '\0') {
                &result[1] = (ReturnValue)(arg1 * m_slotSize + field_48);
            }
        }
        return result;
    }

    // 0x100cbdf40
    bool SimpleAllocator::IsAllocated(const SimpleAllocator::AllocatedBlock& allocatedBlock) const {
        unsigned long uVar1;
        unsigned int* puVar2;

        bool bVar3 = true;
        if (allocatedBlock.field_0 != 2) {
            uVar1 = allocatedBlock.field_16;
            if (uVar1 < field_8) {
                puVar2 = (unsigned int*)(*((unique_ptr<unsigned int[]>*)&field_64))[uVar1 >> 5];
                bVar3 = (*puVar2 >> ((unsigned int)uVar1 & 31) & 1) != 0;
            } else {
                bVar3 = false;
            }
        }
        return bVar3;
    }

    // 0x100cbdf80
    long SimpleAllocator::GetAllocationCountFromFlags() {
        ResultType* pRVar1;
        long lVar2;
        unsigned long arg1;
        long lVar3;
        bitset<32ul, unsigned int> local_38;

        if (field_56 == 0) {
            lVar3 = 0;
        } else {
            arg1 = 0;
            lVar3 = 0;
            do {
                local_38 = eastl::bitset();
                pRVar1 = (ResultType*)(*((unique_ptr<unsigned int[]>*)&field_64))[arg1];
                local_38.XPlotBlender<int>(*pRVar1);
                lVar2 = local_38.count();
                lVar3 = lVar3 + lVar2;
                arg1 = arg1 + 1;
            } while (arg1 < field_56);
        }
        return lVar3;
    }

} // namespace jag

// 0x100cbcd60
void jag::SimpleAllocator::m_threadLocalAllocators(void) {
    ___tls_init();
    (*(void (*)(...))m_threadLocalAllocators)();
}
