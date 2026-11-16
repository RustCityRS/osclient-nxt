// libs/jtl/allocator/Bucket.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.jtl

#include "Bucket.h"

namespace jag {
    // 0x100f4df08
    int32_t BucketManager::m_metricsMutex[18] = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x100f4e470
    int32_t BucketManager::m_bucketStaticDestructor[6] = {0, 0, 0, 0, 165672, 0};

    // 0x100f4e488
    int32_t BucketManager::m_smallBuckets[6] = {0, 0, 0, 0, 165680, 0};

    // 0x100f4e4a0
    int32_t BucketManager::m_buckets[6] = {0, 0, 0, 0, 167728, 0};

    // 0x100f4e4b8
    int32_t BucketManager::m_bucketCount[6] = {0, 0, 0, 0, 231216, 0};

    // 0x103be2658
    eastl BucketManager::m_safeBucketStaticDestructor;

    // 0x103be2660
    std::array<unsigned long, 256ul> BucketManager::m_smallSafeBuckets;

    // 0x103be2e60, set at startup by ___cxx_global_var_init.42
    std::array<Bucket, 256ul> BucketManager::m_safeBuckets = array<Bucket, 256ul>();

    // 0x103bf2660
    int64_t BucketManager::m_safeBucketCount;

    // 0x100009ca0: Bucket::GetAllocator() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100102fa0: Bucket::GetStart() const has the same machine code as oldscape::rs2lib::InputField::GetSelectionStart() const

    // 0x100159b20: Bucket::GetSlotAlignment() const has the same machine code as oldscape::rs2lib::InputField::GetCharacterLimit() const

    // 0x100cbaca0
    BucketManager::StaticDestructor::~StaticDestructor() {
        unsigned long* puVar2;
        array<Bucket, 256ul>* this_00;
        Layout* this_01;
        unsigned int uVar5;
        unsigned long arg1;

        long* plVar1 = (long*)(*(void (*)(...))m_bucketCount)();
        if (*plVar1 != 0) {
            uVar5 = 1;
            arg1 = 0;
            do {
                m_buckets();
                this_00 = (array<Bucket, 256ul>*)(*(void (*)(...))m_buckets)();
                this_01 = (Layout*)(*this_00)[arg1];
                if (((SimpleAllocator*)this_01->SSOBeginPtr())->size() != 0) {
                    LogAssert("m_buckets[i].GetAllocator().size() == 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/"
                              "Bucket.cpp",
                              36, nullptr);
                }
                arg1 = (unsigned long)uVar5;
                puVar2 = (unsigned long*)(*(void (*)(...))m_bucketCount)();
                uVar5 = uVar5 + 1;
            } while (arg1 < *puVar2);
        }
        uint64_t* puVar4 = (uint64_t*)(*(void (*)(...))m_bucketCount)();
        *puVar4 = 0;
    }

    // 0x100cbada0
    BucketManager::SafeStaticDestructor::~SafeStaticDestructor() {
        bool bVar1;
        void** ppvVar3;
        Layout* this_00;
        void** ppvVar4;

        long lVar2 = operator_cast_to_unsigned_long();
        if (lVar2 != 0) {
            ppvVar3 = nullptr;
            ppvVar4 = (void**)&DAT_00000001;
            do {
                this_00 = &m_safeBuckets[(unsigned long)ppvVar3];
                this = (SafeStaticDestructor*)this_00->SSOBeginPtr();
                lVar2 = size();
                if (lVar2 != 0) {
                    LogAssert("m_safeBuckets[i].GetAllocator().size() == 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/"
                              "Bucket.cpp",
                              47, nullptr);
                }
                ppvVar3 = (void**)operator_cast_to_unsigned_long();
                bVar1 = ppvVar4 < ppvVar3;
                ppvVar3 = ppvVar4;
                ppvVar4 = (void**)(unsigned long)((int)ppvVar4 + 1);
            } while (bVar1);
        }
    }

    // 0x100cbae60
    Bucket::Bucket() : SimpleAllocator(), m_slotSize(0), m_slotAlignment(0) {}

    // 0x100cbaea0
    Bucket::Bucket(unsigned long arg1, unsigned long arg2, unsigned long arg3, unsigned int arg4) {
        unsigned long arg4_00 = 16;
        if (16 < arg3) {
            arg4_00 = arg3;
        }
        new (this) SimpleAllocator(arg2, arg1, arg4 | 1, arg4_00);
        long lVar1 = GetAuthWrapper();
        m_pStart = lVar1;
        m_end = arg2 * arg1 + lVar1;
        m_slotSize = arg1;
        m_slotAlignment = arg4_00;
        field_240 = arg4;
    }

    // 0x100cbaf50
    Bucket* Bucket::Allocate() {
        SimpleAllocator* in_RSI;

        *this = in_RSI->Allocate();
        if (field_8 == 0) {
            LogAssert("block.m_address",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                      71, nullptr);
        }
        return this;
    }

    // 0x100cbb080
    void Bucket::DeAllocate(void* arg1) {
        DeAllocate(arg1);
    }

    // 0x100cbb130
    void Bucket::DirectDeAllocation(const SimpleAllocator::AllocatedBlock& allocatedBlock) {
        DeAllocate(allocatedBlock);
    }

    // 0x100cbb1c0
    void Bucket::CheckOverflow(const void* arg1) const {
        CheckOverflow(arg1);
    }

    // 0x100cbb250
    void Bucket::ResetMetrics() {
        ResetMetrics();
    }

    // 0x100cbb2c0
    void Bucket::PrintMetrics() {
        PrintMetrics();
    }

    // 0x100cbb380
    void Bucket::PrintAllocations(bool arg1) {}

    // 0x100cbb3a0
    void BucketManager::Init(unsigned long arg1, unsigned long arg2) {
        array<Bucket, 256ul>* array;

        long* plVar2 = (long*)(*(void (*)(...))m_bucketCount)();
        if (*plVar2 != 0) {
            LogAssert("m_bucketCount == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                      120, nullptr);
        }
        m_buckets();
        array = (array<Bucket, 256ul>*)(*(void (*)(...))m_buckets)();
        Bucket* pBVar3 = (Bucket*)(*array)[0];
        new (pBVar3) Bucket(256, arg1, 16, 0);
        uint8_t** this_00 = &m_bucketCount;
        plVar2 = (long*)(*(void (*)(...))m_bucketCount)();
        *plVar2 = *plVar2 + 1;
        if (this_thread::IsMainThread() != '\0') {
            if (this_00->operator_cast_to_unsigned_long() != 0) {
                LogAssert(
                    "m_safeBucketCount == 0",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                    126, nullptr);
            }
            pBVar3 = (Bucket*)m_safeBuckets[0];
            new (pBVar3) Bucket(256, arg2, 16, 4);
            std::__atomic_base<unsigned long, true>::operator++();
        }
    }

    // 0x100cbb490
    void BucketManager::CreateGenericBuckets() {
        long lVar1 = operator_cast_to_unsigned_long();
        long* plVar2 = (long*)(*(void (*)(...))m_bucketCount)();
        if ((lVar1 == 0) || (*plVar2 == 0)) {
            LogAssert("m_safeBucketCount > 0 && m_bucketCount > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                      134, "BucketManager::Init() not yet called");
        }
        CreateBucket(8, 4096, 8);
        CreateBucket(16, 4096, 16);
        CreateBucket(32, 8192, 32);
        CreateBucket(64, 4096, 64);
        CreateBucket(96, 4096, 32);
        CreateBucket(128, 4096, 64);
        CreateBucket(192, 4096, 64);
        CreateSafeBucket(8, 25600, 8);
        CreateSafeBucket(16, 49152, 16);
        CreateSafeBucket(32, 114688, 32);
        CreateSafeBucket(64, 12288, 64);
        CreateSafeBucket(96, 132000, 32);
        CreateSafeBucket(128, 32768, 64);
        CreateSafeBucket(192, 49152, 64);
        CreateSafeBucket(512, 24000, 64);
    }

    // 0x100cbb610
    unsigned long BucketManager::CreateBucket(unsigned long arg1, unsigned long arg2, unsigned long arg3) {
        unsigned long uVar1;
        array<unsigned long, 256ul>* this_00;
        Layout* this_01;
        unsigned long uVar5;
        unsigned long uVar6;
        unsigned long uVar7;

        if (arg1 == 0) {
            LogAssert("slotSize",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                      190, nullptr);
        }
        if ((arg3 != 0) && (uVar1 = arg3 - (arg3 >> 1 & 6148914691236517205),
                            uVar1 = (uVar1 >> 2 & 3689348814741910323) + (uVar1 & 3689348814741910323),
                            1 < (uint8_t)(((uVar1 >> 4) + uVar1 & 1085102592571150095) * 72340172838076673 >> 56))) {
            LogAssert("alignment == 0 || (alignment & (alignment - 1)) == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                      191, nullptr);
        }
        if ((arg3 != 0) && (arg1 % arg3 != 0)) {
            LogAssert("alignment == 0 || slotSize % alignment == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                      192, nullptr);
        }
        long* plVar2 = (long*)(*(void (*)(...))m_bucketCount)();
        if (*plVar2 == 0) {
            LogAssert("m_bucketCount > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                      193, "Ensure that Bucket::Init() is called before calling CreateBucket()");
        }
        m_buckets();
        unsigned long* puVar3 = (unsigned long*)(*(void (*)(...))m_bucketCount)();
        uVar1 = *puVar3;
        array<Bucket, 256ul>* paVar4 = (array<Bucket, 256ul>*)(*(void (*)(...))m_buckets)();
        new ((Bucket*)(*paVar4)[uVar1]) Bucket(arg1, arg2, arg3, 0);
        uVar1 = *puVar3;
        *puVar3 = uVar1 + 1;
        if (255 < uVar1) {
            LogAssert("entry < NUMBER_OF_BUCKETS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                      199, "Bucket Capacity of: %u exceeded", 256);
        }
        if (arg1 < 256) {
            uVar7 = (long)(int)arg1;
            while (0 < (long)uVar7) {
                m_buckets();
                this_00 = (array<unsigned long, 256ul>*)(*(void (*)(...))m_smallBuckets)();
                puVar3 = (unsigned long*)(*this_00)[uVar7 - 1];
                uVar6 = *puVar3;
                paVar4 = (array<Bucket, 256ul>*)(*(void (*)(...))m_buckets)();
                this_01 = (Layout*)(*paVar4)[uVar6];
                uVar5 = ((Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)this_01->SSOBeginPtr())->data();
                uVar6 = uVar1;
                if (uVar5 < arg1)
                    goto LAB_100cbb82f;
                *puVar3 = uVar1;
                uVar7 = uVar7 - 1;
            }
            uVar6 = arg1;
        LAB_100cbb82f:
            if (0 < (long)uVar7) {
                return uVar6;
            }
        }
        return uVar1;
    }

    // 0x100cbb850
    unsigned long BucketManager::CreateSafeBucket(unsigned long arg1, unsigned long arg2, unsigned long arg3) {
        unsigned long uVar1;
        unsigned long* puVar3;
        Layout* this_00;
        unsigned long uVar4;
        unsigned long uVar5;
        unsigned long unaff_R12;
        unsigned long uVar6;

        if (arg1 == 0) {
            LogAssert("slotSize",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                      159, nullptr);
        }
        if ((arg3 != 0) && (uVar1 = arg3 - (arg3 >> 1 & 6148914691236517205),
                            uVar1 = (uVar1 >> 2 & 3689348814741910323) + (uVar1 & 3689348814741910323),
                            1 < (uint8_t)(((uVar1 >> 4) + uVar1 & 1085102592571150095) * 72340172838076673 >> 56))) {
            LogAssert("alignment == 0 || (alignment & (alignment - 1)) == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                      160, nullptr);
        }
        if ((arg3 != 0) && (arg1 % arg3 != 0)) {
            LogAssert("alignment == 0 || slotSize % alignment == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                      161, nullptr);
        }
        if (arg1->operator_cast_to_unsigned_long() == 0) {
            LogAssert("m_safeBucketCount > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                      162, "Ensure that BucketManager::Init() is called before calling CreateBucket()");
        }
        uVar1 = arg1->operator_cast_to_unsigned_long();
        Bucket* bucket = (Bucket*)m_safeBuckets[uVar1];
        uVar1 = arg1;
        new (bucket) Bucket(arg1, arg2, arg3, 4);
        uVar1 = (*bucket)++;
        if (255 < uVar1) {
            LogAssert("entry < NUMBER_OF_BUCKETS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                      168, "SafeBucket Capacity of: %u exceeded", 256);
        }
        if (arg1 < 256) {
            uVar6 = (long)(int)arg1;
            while (0 < (long)uVar6) {
                puVar3 = &m_smallSafeBuckets[uVar6 - 1];
                this_00 = &m_safeBuckets[*puVar3];
                uVar4 = ((Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)this_00->SSOBeginPtr())->data();
                uVar5 = uVar1;
                if (uVar4 < arg1)
                    goto LAB_100cbba4f;
                *puVar3 = uVar1;
                uVar6 = uVar6 - 1;
            }
            uVar5 = unaff_R12;
        LAB_100cbba4f:
            if (0 < (long)uVar6) {
                return uVar5;
            }
        }
        return uVar1;
    }

    // 0x100cbba90
    long BucketManager::GetBucket(unsigned long arg1, unsigned long arg2) {
        array<unsigned long, 256ul>* array;
        unsigned long arg1_00;

        long* plVar1 = (long*)(*(void (*)(...))m_bucketCount)();
        if (*plVar1 == 0) {
            return 0;
        }
        if ((arg1 < 257) && ((arg2 & 15) == 0)) {
            arg1_00 = arg1 - 1;
            array = (array<unsigned long, 256ul>*)(*(void (*)(...))m_smallBuckets)();
            plVar1 = (long*)(*array)[arg1_00];
            return *plVar1 + 1;
        }
        return GetBucket(arg1, arg2, false);
    }

    // 0x100cbbaf0
    long BucketManager::GetBucket(unsigned long arg1, unsigned long arg2, bool arg3) {
        bool bVar1;
        unkbyte9 Var2;
        Bucket* bucket;
        unsigned long uVar4;
        unsigned long uVar5;
        unsigned long* puVar6;
        uint64_t in_register_00000011;
        uint8_t** this_00;
        unsigned long arg1_00;
        unsigned long uVar8;
        uint8_t auVar9[16];
        unsigned long local_48;
        unsigned long local_40;

        unsigned long uVar3 = arg2;
        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg3) == 0) {
            m_buckets();
            this_00 = &m_buckets;
            auVar9 = (*(void (*)(...))m_buckets)();
            Var2 = auVar9._0_9_;
        } else {
            auVar9._8_8_ = (((uint64_t)in_register_00000011 << 8) | (uint8_t)arg3);
            auVar9._0_8_ = &m_safeBuckets;
            Var2 = auVar9._0_9_;
            this_00 = (uint8_t**)arg1;
        }
        if ((char)((unkuint9)Var2 >> 64) == '\0') {
            puVar6 = (unsigned long*)(*(void (*)(...))m_bucketCount)();
            uVar3 = *puVar6;
        } else {
            uVar3 = this_00->load((memory_order)uVar3);
        }
        if (uVar3 == 0) {
            bVar1 = false;
            local_40 = 0;
        } else {
            local_48 = 18446744073709551615;
            local_40 = 0;
            bVar1 = false;
            arg1_00 = 0;
            do {
                uVar8 = arg1_00 + 1;
                bucket = (Bucket*)(*Var2)[arg1_00];
                uVar4 = bucket->GetSlotSize();
                uVar5 = bucket->GetSlotAlignment();
                if ((((uVar4 != 0) && (uVar5 != 0)) && ((arg2 == 0 || (uVar5 % arg2 == 0)))) &&
                    ((arg1 <= uVar4 && (uVar4 < local_48)))) {
                    bVar1 = true;
                    local_48 = uVar4;
                    local_40 = arg1_00;
                }
                arg1_00 = uVar8;
            } while (uVar3 != uVar8);
        }
        long lVar7 = 0;
        if (bVar1) {
            lVar7 = local_40 + 1;
        }
        return lVar7;
    }

    // 0x100cbbc10
    long BucketManager::GetSafeBucket(unsigned long arg1, unsigned long arg2) {
        long* plVar2;

        long lVar1 = arg1->operator_cast_to_unsigned_long();
        if (lVar1 == 0) {
            lVar1 = 0;
        } else if ((arg1 < 257) && ((arg2 & 15) == 0)) {
            plVar2 = &m_smallSafeBuckets[arg1 - 1];
            lVar1 = *plVar2 + 1;
        } else {
            lVar1 = GetBucket(arg1, arg2, true);
        }
        return lVar1;
    }

    // 0x100cbbc90
    void BucketManager::PrintBuckets() {
        Logger* logger;
        unsigned long uVar1;
        unsigned long uVar3;

        logger = logger::default_logger();
        unsigned int uVar2 = 0;
        logger->Log(false, 8,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                    318, "Thread Safe Shared Allocator Buckets:");
        do {
            uVar3 = (unsigned long)uVar2;
            uVar1 = logger->operator_cast_to_unsigned_long();
            uVar2 = uVar2 + 1;
        } while (uVar3 < uVar1);
    }

    // 0x100cbbcf0
    void BucketManager::PrintBucketAllocations(bool arg1) {}

    // 0x100cbbd00
    void BucketManager::PrintBucketUsage(const char* str, bool arg2) {}

    // 0x100cbbd10
    void BucketManager::ResetMetrics() {
        array<Bucket, 256ul>* array;
        Bucket* pBVar2;
        unsigned long* puVar3;
        unsigned long uVar5;
        unsigned long uVar6;

        uint8_t** this_00 = &m_bucketCount;
        long* plVar1 = (long*)(*(void (*)(...))m_bucketCount)();
        if (*plVar1 != 0) {
            uVar6 = 0;
            do {
                m_buckets();
                array = (array<Bucket, 256ul>*)(*(void (*)(...))m_buckets)();
                pBVar2 = (Bucket*)(*array)[uVar6];
                pBVar2->ResetMetrics();
                uVar6 = uVar6 + 1;
                this_00 = &m_bucketCount;
                puVar3 = (unsigned long*)(*(void (*)(...))m_bucketCount)();
            } while (uVar6 < *puVar3);
        }
        if (this_00->operator_cast_to_unsigned_long() != 0) {
            uVar6 = 0;
            do {
                pBVar2 = &m_safeBuckets[uVar6];
                pBVar2->ResetMetrics();
                uVar6 = uVar6 + 1;
                uVar5 = pBVar2->operator_cast_to_unsigned_long();
            } while (uVar6 < uVar5);
        }
    }

    // 0x100cbbdb0
    void BucketManager::PrintMetrics() {
        array<Bucket, 256ul>* array;
        Bucket* pBVar6;
        unsigned long* puVar7;
        unsigned long uVar9;

        scoped_lock<std::mutex> local_20(m_metricsMutex);
        auto pLVar2 = logger::default_logger();
        uint64_t uVar3 = this_thread::GetThreadName();
        pLVar2->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                    514, "\n\nBUCKET MANAGER: Bucket Usage Metrics (Thread: %s)", uVar3);
        pLVar2 = logger::default_logger();
        pLVar2->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                    515, "-----------------------------------------------------------------");
        pLVar2 = logger::default_logger();
        unsigned long uVar4 = SimpleAllocator::GetTotalSize();
        float fVar10 = Bytes2Megabytes<unsigned long>(uVar4);
        pLVar2->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                    516, "Total bucket allocator heap size: %.2fMb", (double)fVar10);
        uint8_t** this_00 = &m_bucketCount;
        long* plVar5 = (long*)(*(void (*)(...))m_bucketCount)();
        if (*plVar5 != 0) {
            uVar4 = 0;
            do {
                m_buckets();
                array = (array<Bucket, 256ul>*)(*(void (*)(...))m_buckets)();
                pBVar6 = (Bucket*)(*array)[uVar4];
                pBVar6->PrintMetrics();
                uVar4 = uVar4 + 1;
                this_00 = &m_bucketCount;
                puVar7 = (unsigned long*)(*(void (*)(...))m_bucketCount)();
            } while (uVar4 < *puVar7);
        }
        if (this_thread::IsMainThread() != '\0') {
            if (this_00->operator_cast_to_unsigned_long() != 0) {
                uVar4 = 0;
                do {
                    pBVar6 = &m_safeBuckets[uVar4];
                    pBVar6->PrintMetrics();
                    uVar4 = uVar4 + 1;
                    uVar9 = pBVar6->operator_cast_to_unsigned_long();
                } while (uVar4 < uVar9);
            }
        }
        pLVar2 = logger::default_logger();
        pLVar2->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                    531, "-----------------------------------------------------------------\n");
    }

    // 0x100cbbfa0
    DirectAllocation BucketManager::DoAllocate(unsigned long arg1, unsigned long arg2, unsigned int arg3) {
        long lVar1;
        array<Bucket, 256ul>* array;
        ReturnValue RVar2;
        HeapInterface* this_00;
        unsigned long uVar3;
        ReturnValue local_40;
        ReturnValue RStack_38;
        ReturnValue local_30;

        DirectAllocation result;
        if ((arg3 & 4) == 0) {
            lVar1 = GetBucket(arg1, arg2);
            if (lVar1 == 0) {
            LAB_100cbc0a1:
                uVar3 = 16;
                if (16 < arg2) {
                    uVar3 = arg2;
                }
                result = 2;
                this_00 = HeapInterface::Instance();
                RVar2 = (ReturnValue)this_00->AlignedAlloc(arg1, uVar3);
                &result[1] = RVar2;
                return result;
            }
            uVar3 = lVar1 - 1;
            m_buckets();
            array = (array<Bucket, 256ul>*)(*(void (*)(...))m_buckets)();
            RVar2 = (ReturnValue)(*array)[uVar3];
            uVar3 = RVar2->GetSlotSize();
            if (uVar3 < arg1) {
                LogAssert(
                    "m_buckets[bucketIndex].GetSlotSize() >= size",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                    579,
                    "Selected bucket too small for allocation, ensure Bucket::Init() is called before creating "
                    "buckets");
            }
            m_buckets();
        } else {
            lVar1 = GetSafeBucket(arg1, arg2);
            if (lVar1 == 0)
                goto LAB_100cbc0a1;
            RVar2 = (ReturnValue)m_safeBuckets[lVar1 - 1];
            uVar3 = RVar2->GetSlotSize();
            if (uVar3 < arg1) {
                LogAssert(
                    "m_safeBuckets[bucketIndex].GetSlotSize() >= size",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                    544,
                    "Selected bucket too small for allocation, ensure Bucket::Init() is called before creating "
                    "buckets");
            }
        }
        &result[3] = RVar2;
        local_40.Allocate();
        &result[2] = local_30;
        result = local_40;
        &result[1] = RStack_38;
        return result;
    }

} // namespace jag

// 0x100cbad50
void jag::BucketManager::m_buckets(void) {
    ___tls_init();
    (*(void (*)(...))m_buckets)();
}
