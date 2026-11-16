// libs/jtl/allocator/Bucket.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.jtl

#include "Bucket.h"

namespace jag {
    // 0x100f4df08, 72 bytes, __data
    BucketManager::m_metricsMutex = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x100f4e470, 24 bytes, __thread_vars
    BucketManager::m_bucketStaticDestructor = {0, 0, 0, 0, 165672, 0};

    // 0x100f4e488, 24 bytes, __thread_vars
    BucketManager::m_smallBuckets = {0, 0, 0, 0, 165680, 0};

    // 0x100f4e4a0, 24 bytes, __thread_vars
    BucketManager::m_buckets = {0, 0, 0, 0, 167728, 0};

    // 0x100f4e4b8, 24 bytes, __thread_vars
    BucketManager::m_bucketCount = {0, 0, 0, 0, 231216, 0};

    // 0x103be2658, 8 bytes, __common; zero-initialised
    BucketManager::m_safeBucketStaticDestructor;

    // 0x103be2660, 2048 bytes, __common; zero-initialised
    BucketManager::m_smallSafeBuckets;

    // 0x103be2e60, 63488 bytes, __common; set at startup by ___cxx_global_var_init.42
    std::array<Bucket, 256ul> BucketManager::m_safeBuckets = array<Bucket, 256ul>();

    // 0x103bf2660, 8 bytes, __common; zero-initialised
    BucketManager::m_safeBucketCount;

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    Bucket::GetAllocator() const;

    // 0x100102fa0: the linker folded this into oldscape::rs2lib::InputField::GetSelectionStart() const, which has identical code
    long Bucket::GetStart() const;

    // 0x100159b20: the linker folded this into oldscape::rs2lib::InputField::GetCharacterLimit() const, which has identical code
    ulong Bucket::GetSlotAlignment() const;

    // 0x100cbac60, 16 bytes, complete-object destructor, placed by debug map only (low confidence)
    // BucketManager::StaticDestructor::~StaticDestructor(): jumps straight to the base-object destructor

    // 0x100cbac70, 16 bytes, complete-object destructor, placed by debug map only (low confidence)
    // BucketManager::SafeStaticDestructor::~SafeStaticDestructor(): jumps straight to the base-object destructor

    // 0x100cbaca0, 176 bytes, base-object destructor, placed by debug map only (low confidence)
    // BucketManager::StaticDestructor::~StaticDestructor()
    void BucketManager::StaticDestructor::~StaticDestructor() {
        long* plVar1;
        ulong* puVar2;
        array<Bucket, 256ul>* this_00;
        Layout* this_01;
        SimpleAllocator* this_02;
        undefined8* puVar4;
        uint uVar5;
        type* ptVar6;

        plVar1 = (long*)(*(code*)m_bucketCount)();
        if (*plVar1 != 0) {
            uVar5 = 1;
            ptVar6 = (type*)0;
            do {
                m_buckets();
                this_00 = (array<Bucket, 256ul>*)(*(code*)m_buckets)();
                this_01 = (Layout*)std::array<Bucket, 256ul>::operator[](this_00, (ulong)ptVar6);
                this_02 = (SimpleAllocator*)eastl::string::Layout::SSOBeginPtr(this_01, ptVar6);
                if (this_02->size() != 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_buckets[i].GetAllocator().size() == 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/"
                              "Bucket.cpp",
                              36, (char*)0);
                }
                ptVar6 = (type*)(ulong)uVar5;
                puVar2 = (ulong*)(*(code*)m_bucketCount)();
                uVar5 = uVar5 + 1;
            } while (ptVar6 < (type*)*puVar2);
        }
        puVar4 = (undefined8*)(*(code*)m_bucketCount)();
        *puVar4 = 0;
    }

    // 0x100cbada0, 160 bytes, base-object destructor, placed by debug map only (low confidence)
    // BucketManager::SafeStaticDestructor::~SafeStaticDestructor()
    void BucketManager::SafeStaticDestructor::~SafeStaticDestructor() {
        bool bVar1;
        type* ptVar3;
        Layout* this_00;
        type* in_RSI;
        type* ptVar5;

        if (operator_cast_to_unsigned_long() != 0) {
            ptVar3 = (type*)0;
            ptVar5 = (type*)&DAT_00000001;
            do {
                this_00 = (Layout*)std::array<Bucket, 256ul>::operator[]((array<Bucket, 256ul>*)&m_safeBuckets,
                                                                         (ulong)ptVar3);
                this = (SafeStaticDestructor*)eastl::string::Layout::SSOBeginPtr(this_00, ptVar3);
                if (size() != 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_safeBuckets[i].GetAllocator().size() == 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/"
                              "Bucket.cpp",
                              47, (char*)0);
                }
                in_RSI = ptVar3;
                ptVar3 = (type*)operator_cast_to_unsigned_long();
                bVar1 = ptVar5 < ptVar3;
                ptVar3 = ptVar5;
                ptVar5 = (type*)(ulong)((int)ptVar5 + 1);
            } while (bVar1);
        }
        std::atomic<unsigned long>::operator=((atomic<unsigned long>*)this, (ulong)in_RSI);
    }

    // 0x100cbae60, 32 bytes, base-object constructor, placed by class name and debug map
    // Bucket::Bucket()
    void Bucket::Bucket() {
        new (this) SimpleAllocator();
        m_slotSize = 0;
        m_slotAlignment = 0;
    }

    // 0x100cbae90, 16 bytes, complete-object constructor, placed by class name
    // Bucket::Bucket(): jumps straight to the base-object constructor

    // 0x100cbaea0, 128 bytes, base-object constructor, placed by class name
    // Bucket::Bucket(unsigned long, unsigned long, unsigned long, unsigned int)
    void Bucket::Bucket(ulong param_1, ulong param_2, ulong param_3, uint param_4) {
        long lVar1;
        ulong uVar2;

        uVar2 = 16;
        if (16 < param_3) {
            uVar2 = param_3;
        }
        new (this) SimpleAllocator(param_2, param_1, param_4 | 1, uVar2);
        lVar1 = GetAuthWrapper();
        m_pStart = lVar1;
        m_end = param_2 * param_1 + lVar1;
        m_slotSize = param_1;
        m_slotAlignment = uVar2;
        field_240 = param_4;
    }

    // 0x100cbaf40, 16 bytes, complete-object constructor, placed by class name
    // Bucket::Bucket(unsigned long, unsigned long, unsigned long, unsigned int): jumps straight to the base-object constructor

    // 0x100cbaf50, 64 bytes, placed by class name
    // Bucket::Allocate()
    Bucket* Bucket::Allocate() {
        Allocate();
        if (field_8 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("block.m_address",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                      71, (char*)0);
        }
        return this;
    }

    // 0x100cbb080, 16 bytes, placed by class name
    // Bucket::DeAllocate(void*)
    void Bucket::DeAllocate(void* param_1) {
        param_1->DeAllocate();
    }

    // 0x100cbb130, 16 bytes, placed by class name
    // Bucket::DirectDeAllocation(SimpleAllocator::AllocatedBlock const&)
    void Bucket::DirectDeAllocation(AllocatedBlock* param_1) {
        DeAllocate(param_1);
    }

    // 0x100cbb1c0, 16 bytes, placed by class name
    // Bucket::CheckOverflow(void const*) const
    void Bucket::CheckOverflow(void* param_1) {
        CheckOverflow(param_1);
    }

    // 0x100cbb250, 16 bytes, placed by class name
    // Bucket::ResetMetrics()
    void Bucket::ResetMetrics() {
        ResetMetrics();
    }

    // 0x100cbb2c0, 16 bytes, placed by class name
    // Bucket::PrintMetrics()
    void Bucket::PrintMetrics() {
        PrintMetrics();
    }

    // 0x100cbb380, 16 bytes, placed by class name
    // Bucket::PrintAllocations(bool)
    void Bucket::PrintAllocations(bool param_1) {}

    // 0x100cbb3a0, 224 bytes, placed by __FILE__ string
    // BucketManager::Init(unsigned long, unsigned long)
    void BucketManager::Init(ulong param_1, ulong param_2) {
        long* plVar2;
        array<Bucket, 256ul>* this;
        Bucket* pBVar3;
        undefined** this_00;

        plVar2 = (long*)(*(code*)m_bucketCount)();
        if (*plVar2 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_bucketCount == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                      120, (char*)0);
        }
        m_buckets();
        this = (array<Bucket, 256ul>*)(*(code*)m_buckets)();
        pBVar3 = (Bucket*)std::array<Bucket, 256ul>::operator[](this, 0);
        Bucket::Bucket(pBVar3, 256, param_1, 16, 0);
        this_00 = &m_bucketCount;
        plVar2 = (long*)(*(code*)m_bucketCount)();
        *plVar2 = *plVar2 + 1;
        if (this_thread::IsMainThread() != '\0') {
            if (this_00->operator_cast_to_unsigned_long() != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "m_safeBucketCount == 0",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                    126, (char*)0);
            }
            pBVar3 = (Bucket*)std::array<Bucket, 256ul>::operator[]((array<Bucket, 256ul>*)&m_safeBuckets, 0);
            Bucket::Bucket(pBVar3, 256, param_2, 16, 4);
            std::__atomic_base<unsigned long, true>::operator++((__atomic_base<unsigned long, true>*)pBVar3);
        }
    }

    // 0x100cbb490, 384 bytes, placed by __FILE__ string
    // BucketManager::CreateGenericBuckets()
    void BucketManager::CreateGenericBuckets() {
        ulong uVar1;
        long* plVar2;

        uVar1 = operator_cast_to_unsigned_long();
        plVar2 = (long*)(*(code*)m_bucketCount)();
        if ((uVar1 == 0) || (*plVar2 == 0)) {
            /* WARNING: Subroutine does not return */
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

    // 0x100cbb610, 576 bytes, placed by __FILE__ string
    // BucketManager::CreateBucket(unsigned long, unsigned long, unsigned long)
    ulong BucketManager::CreateBucket(ulong param_1, ulong param_2, ulong param_3) {
        ulong uVar1;
        long* plVar2;
        ulong* puVar3;
        array<Bucket, 256ul>* paVar4;
        Bucket* this;
        array<unsigned long, 256ul>* this_00;
        Layout* this_01;
        vector* this_02;
        ulong uVar5;
        ulong uVar6;
        type* ptVar7;
        ulong uVar8;

        if (param_1 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("slotSize",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                      190, (char*)0);
        }
        if ((param_3 != 0) && (uVar1 = param_3 - (param_3 >> 1 & 6148914691236517205),
                               uVar1 = (uVar1 >> 2 & 3689348814741910323) + (uVar1 & 3689348814741910323),
                               1 < (byte)(((uVar1 >> 4) + uVar1 & 1085102592571150095) * 72340172838076673 >> 56))) {
            /* WARNING: Subroutine does not return */
            LogAssert("alignment == 0 || (alignment & (alignment - 1)) == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                      191, (char*)0);
        }
        if ((param_3 != 0) && (param_1 % param_3 != 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("alignment == 0 || slotSize % alignment == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                      192, (char*)0);
        }
        plVar2 = (long*)(*(code*)m_bucketCount)();
        if (*plVar2 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_bucketCount > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                      193, "Ensure that Bucket::Init() is called before calling CreateBucket()");
        }
        m_buckets();
        puVar3 = (ulong*)(*(code*)m_bucketCount)();
        uVar1 = *puVar3;
        paVar4 = (array<Bucket, 256ul>*)(*(code*)m_buckets)();
        this = (Bucket*)std::array<Bucket, 256ul>::operator[](paVar4, uVar1);
        Bucket::Bucket(this, param_1, param_2, param_3, 0);
        uVar1 = *puVar3;
        *puVar3 = uVar1 + 1;
        if (255 < uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("entry < NUMBER_OF_BUCKETS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                      199, "Bucket Capacity of: %u exceeded", 256);
        }
        if (param_1 < 256) {
            uVar8 = (long)(int)param_1;
            while (0 < (long)uVar8) {
                m_buckets();
                this_00 = (array<unsigned long, 256ul>*)(*(code*)m_smallBuckets)();
                puVar3 = (ulong*)std::array<unsigned long, 256ul>::operator[](this_00, uVar8 - 1);
                ptVar7 = (type*)*puVar3;
                paVar4 = (array<Bucket, 256ul>*)(*(code*)m_buckets)();
                this_01 = (Layout*)std::array<Bucket, 256ul>::operator[](paVar4, (ulong)ptVar7);
                this_02 = eastl::string::Layout::SSOBeginPtr(this_01, ptVar7);
                uVar5 = this_02->data();
                uVar6 = uVar1;
                if (uVar5 < param_1)
                    goto LAB_100cbb82f;
                *puVar3 = uVar1;
                uVar8 = uVar8 - 1;
            }
            uVar6 = param_1;
        LAB_100cbb82f:
            if (0 < (long)uVar8) {
                return uVar6;
            }
        }
        return uVar1;
    }

    // 0x100cbb850, 544 bytes, placed by __FILE__ string
    // BucketManager::CreateSafeBucket(unsigned long, unsigned long, unsigned long)
    ulong BucketManager::CreateSafeBucket(ulong param_1, ulong param_2, ulong param_3) {
        ulong uVar1;
        Bucket* this;
        ulong* puVar2;
        Layout* this_00;
        vector* this_01;
        ulong uVar3;
        ulong uVar4;
        type* ptVar5;
        ulong unaff_R12;
        ulong uVar6;

        if (param_1 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("slotSize",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                      159, (char*)0);
        }
        if ((param_3 != 0) && (uVar1 = param_3 - (param_3 >> 1 & 6148914691236517205),
                               uVar1 = (uVar1 >> 2 & 3689348814741910323) + (uVar1 & 3689348814741910323),
                               1 < (byte)(((uVar1 >> 4) + uVar1 & 1085102592571150095) * 72340172838076673 >> 56))) {
            /* WARNING: Subroutine does not return */
            LogAssert("alignment == 0 || (alignment & (alignment - 1)) == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                      160, (char*)0);
        }
        if ((param_3 != 0) && (param_1 % param_3 != 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("alignment == 0 || slotSize % alignment == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                      161, (char*)0);
        }
        uVar1 = param_1->operator_cast_to_unsigned_long();
        if (uVar1 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_safeBucketCount > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                      162, "Ensure that BucketManager::Init() is called before calling CreateBucket()");
        }
        uVar1 = param_1->operator_cast_to_unsigned_long();
        this = (Bucket*)std::array<Bucket, 256ul>::operator[]((array<Bucket, 256ul>*)&m_safeBuckets, uVar1);
        uVar1 = param_1;
        Bucket::Bucket(this, param_1, param_2, param_3, 4);
        uVar1 =
            std::__atomic_base<unsigned long, true>::operator++((__atomic_base<unsigned long, true>*)this, (int)uVar1);
        if (255 < uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("entry < NUMBER_OF_BUCKETS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                      168, "SafeBucket Capacity of: %u exceeded", 256);
        }
        if (param_1 < 256) {
            uVar6 = (long)(int)param_1;
            while (0 < (long)uVar6) {
                puVar2 = (ulong*)std::array<unsigned long, 256ul>::operator[](
                    (array<unsigned long, 256ul>*)&m_smallSafeBuckets, uVar6 - 1);
                ptVar5 = (type*)*puVar2;
                this_00 = (Layout*)std::array<Bucket, 256ul>::operator[]((array<Bucket, 256ul>*)&m_safeBuckets,
                                                                         (ulong)ptVar5);
                this_01 = eastl::string::Layout::SSOBeginPtr(this_00, ptVar5);
                uVar3 = this_01->data();
                uVar4 = uVar1;
                if (uVar3 < param_1)
                    goto LAB_100cbba4f;
                *puVar2 = uVar1;
                uVar6 = uVar6 - 1;
            }
            uVar4 = unaff_R12;
        LAB_100cbba4f:
            if (0 < (long)uVar6) {
                return uVar4;
            }
        }
        return uVar1;
    }

    // 0x100cbba90, 96 bytes, placed by neighbouring functions
    // BucketManager::GetBucket(unsigned long, unsigned long)
    long BucketManager::GetBucket(ulong param_1, ulong param_2) {
        long* plVar1;
        array<unsigned long, 256ul>* this;
        ulong uVar3;

        plVar1 = (long*)(*(code*)m_bucketCount)();
        if (*plVar1 == 0) {
            return 0;
        }
        if ((param_1 < 257) && ((param_2 & 15) == 0)) {
            uVar3 = param_1 - 1;
            this = (array<unsigned long, 256ul>*)(*(code*)m_smallBuckets)();
            plVar1 = (long*)std::array<unsigned long, 256ul>::operator[](this, uVar3);
            return *plVar1 + 1;
        }
        return GetBucket(param_1, param_2, false);
    }

    // 0x100cbbaf0, 288 bytes, placed by neighbouring functions
    // BucketManager::GetBucket(unsigned long, unsigned long, bool)
    long BucketManager::GetBucket(ulong param_1, ulong param_2, bool param_3) {
        bool bVar1;
        unkbyte9 Var2;
        ulong uVar3;
        Bucket* this;
        ulong uVar4;
        ulong uVar5;
        ulong* puVar6;
        long lVar7;
        undefined7 in_register_00000011;
        ulong uVar8;
        ulong uVar9;
        undefined1 auVar10[16];
        ulong local_48;
        ulong local_40;

        if ((int)CONCAT71(in_register_00000011, param_3) == 0) {
            m_buckets();
            auVar10 = (*(code*)m_buckets)();
            Var2 = auVar10._0_9_;
        } else {
            auVar10._8_8_ = CONCAT71(in_register_00000011, param_3);
            auVar10._0_8_ = &m_safeBuckets;
            Var2 = auVar10._0_9_;
        }
        if ((char)((unkuint9)Var2 >> 64) == '\0') {
            puVar6 = (ulong*)(*(code*)m_bucketCount)();
            uVar3 = *puVar6;
        } else {
            uVar3 = std::__atomic_base<unsigned long, false>::load();
        }
        if (uVar3 == 0) {
            bVar1 = false;
            local_40 = 0;
        } else {
            local_48 = 18446744073709551615;
            local_40 = 0;
            bVar1 = false;
            uVar8 = 0;
            do {
                uVar9 = uVar8 + 1;
                this = (Bucket*)std::array<Bucket, 256ul>::operator[]((array<Bucket, 256ul>*)Var2, uVar8);
                uVar4 = GetSlotSize();
                uVar5 = GetSlotAlignment();
                if ((((uVar4 != 0) && (uVar5 != 0)) && ((param_2 == 0 || (uVar5 % param_2 == 0)))) &&
                    ((param_1 <= uVar4 && (uVar4 < local_48)))) {
                    bVar1 = true;
                    local_48 = uVar4;
                    local_40 = uVar8;
                }
                uVar8 = uVar9;
            } while (uVar3 != uVar9);
        }
        lVar7 = 0;
        if (bVar1) {
            lVar7 = local_40 + 1;
        }
        return lVar7;
    }

    // 0x100cbbc10, 96 bytes, placed by neighbouring functions
    // BucketManager::GetSafeBucket(unsigned long, unsigned long)
    long BucketManager::GetSafeBucket(ulong param_1, ulong param_2) {
        long* plVar2;
        long lVar3;

        if (param_1->operator_cast_to_unsigned_long() == 0) {
            lVar3 = 0;
        } else if ((param_1 < 257) && ((param_2 & 15) == 0)) {
            plVar2 = (long*)std::array<unsigned long, 256ul>::operator[](
                (array<unsigned long, 256ul>*)&m_smallSafeBuckets, param_1 - 1);
            lVar3 = *plVar2 + 1;
        } else {
            lVar3 = GetBucket(param_1, param_2, true);
        }
        return lVar3;
    }

    // 0x100cbbc90, 96 bytes, placed by __FILE__ string
    // BucketManager::PrintBuckets()
    void BucketManager::PrintBuckets() {
        __atomic_base* this;
        ulong uVar1;
        uint uVar2;
        ulong uVar3;

        this = (__atomic_base*)logger::default_logger();
        uVar2 = 0;
        logger::Logger::Log(
            this, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp", 318,
            "Thread Safe Shared Allocator Buckets:");
        do {
            uVar3 = (ulong)uVar2;
            uVar1 = std::__atomic_base::operator_cast_to_unsigned_long(this);
            uVar2 = uVar2 + 1;
        } while (uVar3 < uVar1);
    }

    // 0x100cbbcf0, 16 bytes, placed by neighbouring functions
    // BucketManager::PrintBucketAllocations(bool)
    void BucketManager::PrintBucketAllocations(bool param_1) {}

    // 0x100cbbd00, 16 bytes, placed by neighbouring functions
    // BucketManager::PrintBucketUsage(char const*, bool)
    void BucketManager::PrintBucketUsage(char* param_1, bool param_2) {}

    // 0x100cbbd10, 160 bytes, placed by neighbouring functions
    // BucketManager::ResetMetrics()
    void BucketManager::ResetMetrics() {
        long* plVar1;
        array<Bucket, 256ul>* this;
        Bucket* pBVar2;
        ulong* puVar3;
        ulong uVar4;
        ulong uVar5;
        undefined** this_00;

        this_00 = &m_bucketCount;
        plVar1 = (long*)(*(code*)m_bucketCount)();
        if (*plVar1 != 0) {
            uVar5 = 0;
            do {
                m_buckets();
                this = (array<Bucket, 256ul>*)(*(code*)m_buckets)();
                pBVar2 = (Bucket*)std::array<Bucket, 256ul>::operator[](this, uVar5);
                pBVar2->ResetMetrics();
                uVar5 = uVar5 + 1;
                this_00 = &m_bucketCount;
                puVar3 = (ulong*)(*(code*)m_bucketCount)();
            } while (uVar5 < *puVar3);
        }
        uVar5 = this_00->operator_cast_to_unsigned_long();
        if (uVar5 != 0) {
            uVar5 = 0;
            do {
                pBVar2 = (Bucket*)std::array<Bucket, 256ul>::operator[]((array<Bucket, 256ul>*)&m_safeBuckets, uVar5);
                pBVar2->ResetMetrics();
                uVar5 = uVar5 + 1;
                uVar4 = pBVar2->operator_cast_to_unsigned_long();
            } while (uVar5 < uVar4);
        }
    }

    // 0x100cbbdb0, 416 bytes, placed by __FILE__ string
    // BucketManager::PrintMetrics()
    void BucketManager::PrintMetrics() {
        undefined8 uVar2;
        undefined8 uVar3;
        ulong uVar4;
        long* plVar5;
        array<Bucket, 256ul>* this;
        Bucket* pBVar6;
        ulong* puVar7;
        ulong uVar8;
        undefined** this_00;
        float fVar9;
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)&m_metricsMutex);
        uVar2 = logger::default_logger();
        uVar3 = this_thread::GetThreadName();
        logger::Logger::Log(
            uVar2, 0, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp", 514,
            "\n\nBUCKET MANAGER: Bucket Usage Metrics (Thread: %s)", uVar3);
        uVar2 = logger::default_logger();
        logger::Logger::Log(
            uVar2, 0, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp", 515,
            "-----------------------------------------------------------------");
        uVar2 = logger::default_logger();
        uVar4 = SimpleAllocator::GetTotalSize();
        fVar9 = Bytes2Megabytes<unsigned long>(uVar4);
        logger::Logger::Log(
            (double)fVar9, uVar2, 0, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp", 516,
            "Total bucket allocator heap size: %.2fMb");
        this_00 = &m_bucketCount;
        plVar5 = (long*)(*(code*)m_bucketCount)();
        if (*plVar5 != 0) {
            uVar4 = 0;
            do {
                m_buckets();
                this = (array<Bucket, 256ul>*)(*(code*)m_buckets)();
                pBVar6 = (Bucket*)std::array<Bucket, 256ul>::operator[](this, uVar4);
                pBVar6->PrintMetrics();
                uVar4 = uVar4 + 1;
                this_00 = &m_bucketCount;
                puVar7 = (ulong*)(*(code*)m_bucketCount)();
            } while (uVar4 < *puVar7);
        }
        if (this_thread::IsMainThread() != '\0') {
            uVar4 = this_00->operator_cast_to_unsigned_long();
            if (uVar4 != 0) {
                uVar4 = 0;
                do {
                    pBVar6 =
                        (Bucket*)std::array<Bucket, 256ul>::operator[]((array<Bucket, 256ul>*)&m_safeBuckets, uVar4);
                    pBVar6->PrintMetrics();
                    uVar4 = uVar4 + 1;
                    uVar8 = pBVar6->operator_cast_to_unsigned_long();
                } while (uVar4 < uVar8);
            }
        }
        uVar2 = logger::default_logger();
        logger::Logger::Log(
            uVar2, 0, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp", 531,
            "-----------------------------------------------------------------\n");
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x100cbbfa0, 320 bytes, placed by __FILE__ string
    // BucketManager::DoAllocate(unsigned long, unsigned long, unsigned int)
    BucketManager* BucketManager::DoAllocate(ulong param_1, ulong param_2, uint param_3) {
        long lVar1;
        array<Bucket, 256ul>* this_00;
        Bucket* this_01;
        HeapInterface* this_02;
        ulong uVar2;
        undefined1 local_40[8];
        long lStack_38;
        undefined8 local_30;

        new (this) DirectAllocation();
        if ((param_3 & 4) == 0) {
            lVar1 = GetBucket(param_1, param_2);
            if (lVar1 == 0) {
            LAB_100cbc0a1:
                uVar2 = 16;
                if (16 < param_2) {
                    uVar2 = param_2;
                }
                *(undefined4*)field_0 = 2;
                this_02 = (HeapInterface*)HeapInterface::Instance();
                lVar1 = this_02->AlignedAlloc(param_1, uVar2);
                field_8 = lVar1;
                return this;
            }
            uVar2 = lVar1 - 1;
            m_buckets();
            this_00 = (array<Bucket, 256ul>*)(*(code*)m_buckets)();
            this_01 = (Bucket*)std::array<Bucket, 256ul>::operator[](this_00, uVar2);
            uVar2 = this_01->GetSlotSize();
            if (uVar2 < param_1) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "m_buckets[bucketIndex].GetSlotSize() >= size",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                    579,
                    "Selected bucket too small for allocation, ensure Bucket::Init() is called before creating "
                    "buckets");
            }
            m_buckets();
        } else {
            lVar1 = GetSafeBucket(param_1, param_2);
            if (lVar1 == 0)
                goto LAB_100cbc0a1;
            this_01 = (Bucket*)std::array<Bucket, 256ul>::operator[]((array<Bucket, 256ul>*)&m_safeBuckets, lVar1 - 1);
            uVar2 = this_01->GetSlotSize();
            if (uVar2 < param_1) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "m_safeBuckets[bucketIndex].GetSlotSize() >= size",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/allocator/Bucket.cpp",
                    544,
                    "Selected bucket too small for allocation, ensure Bucket::Init() is called before creating "
                    "buckets");
            }
        }
        field_24 = this_01;
        local_40->Allocate();
        field_16 = local_30;
        *&field_0 = local_40;
        field_8 = lStack_38;
        return this;
    }

    // 0x100cc5210, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.42
    void ___cxx_global_var_init_42() {
        new (&BucketManager::m_safeBuckets) std::array<Bucket, 256ul>();
        ___cxa_atexit(PTR__array_100ee6eb0, &BucketManager::m_safeBuckets, 4294967296);
    }

} // namespace jag

// 0x100cbad50, 32 bytes, placed by neighbouring functions
// TLS wrapper function for jag::BucketManager::m_buckets
void jag::BucketManager::m_buckets() {
    ___tls_init();
    (*(code*)m_buckets)();
}
