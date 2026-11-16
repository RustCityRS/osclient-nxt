// libs/jtl/allocator/Bucket.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class Bucket {
    public:
        void GetAllocator() const;
        long GetStart() const;
        unsigned long GetSlotAlignment() const;
        Bucket();
        Bucket(unsigned long arg1, unsigned long arg2, unsigned long arg3, unsigned int arg4);
        Bucket* Allocate();
        void DeAllocate(void* arg1);
        void DirectDeAllocation(const SimpleAllocator::AllocatedBlock& allocatedBlock);
        void CheckOverflow(const void* arg1) const;
        void ResetMetrics();
        void PrintMetrics();
        void PrintAllocations(bool arg1);
        unsigned long GetSlotSize() const;
        unsigned long GetEnd() const;
        ~Bucket();

    private:
        uint8_t _unknown_0[8];
        long field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint8_t _unknown_40[8];
        AuthLibWrapper* field_48;
        uint8_t _unknown_56[136];
        uint8_t field_192;
        uint8_t _unknown_193[15];
        long m_pStart;
        unsigned long m_end;
        unsigned long m_slotSize;
        unsigned long m_slotAlignment;
        unsigned int field_240;
        uint8_t _unknown_244[4];
    };

    template <
        typename...> // 6 instantiations, e.g. <game::NPCTypeCustomisation>, <graphics::EffectStateSaveRestore>, <graphics::Model>
    class BucketDeleter {
    public:
        void operator()(oldscape::configdecoder::NPCTypeCustomisation* npcTypeCustomisation) const;
        void operator()(game::NPCTypeCustomisation* npcTypeCustomisation) const;
        void operator()(graphics::Model* model) const;
        void operator()(ui::HTTPSpriteData* httpSpriteData) const;
        void operator()(http::HTTPRequest* httpRequest) const;
        void operator()(graphics::EffectStateSaveRestore* effectStateSaveRestore) const;
    };

    class BucketManager {
    public:
        class DirectAllocation;
        class SafeStaticDestructor;
        class StaticDestructor;
        void DeAllocate(void* arg1, unsigned long arg2);
        void Allocate(unsigned long arg1, unsigned int arg2, unsigned long arg3);
        void Init(unsigned long arg1, unsigned long arg2);
        void CreateGenericBuckets();
        unsigned long CreateBucket(unsigned long arg1, unsigned long arg2, unsigned long arg3);
        unsigned long CreateSafeBucket(unsigned long arg1, unsigned long arg2, unsigned long arg3);
        long GetBucket(unsigned long arg1, unsigned long arg2);
        long GetBucket(unsigned long arg1, unsigned long arg2, bool arg3);
        long GetSafeBucket(unsigned long arg1, unsigned long arg2);
        void PrintBuckets();
        void PrintBucketAllocations(bool arg1);
        void PrintBucketUsage(const char* str, bool arg2);
        void ResetMetrics();
        void PrintMetrics();
        DirectAllocation DoAllocate(unsigned long arg1, unsigned long arg2, unsigned int arg3);
        void DirectDeAllocate(const DirectAllocation& directAllocation);
        bool CheckInBucket(void* arg1);
        PostProcessManager* CheckAllocation(std::array<Bucket, 256ul>& buckets, unsigned long arg2, void* arg3);
        void GetAllocationSize(void* arg1);
        void DeAllocate(void* arg1);
        static int32_t m_metricsMutex[18];          // initialised in its definition
        static int32_t m_bucketStaticDestructor[6]; // = { 0, 0, 0, 0, 165672, 0 }
        static int32_t m_smallBuckets[6];           // = { 0, 0, 0, 0, 165680, 0 }
        static int32_t m_buckets[6];                // = { 0, 0, 0, 0, 167728, 0 }
        static int32_t m_bucketCount[6];            // = { 0, 0, 0, 0, 231216, 0 }
        static eastl m_safeBucketStaticDestructor;
        static std::array<unsigned long, 256ul> m_smallSafeBuckets;
        static std::array<Bucket, 256ul> m_safeBuckets; // = array<Bucket, 256ul>()
        static int64_t m_safeBucketCount;

        uint8_t _unknown_0[32];
    };

    class BucketManager::DirectAllocation {
    public:
        DirectAllocation();

    private:
        uint8_t _unknown_0[24];
        uint64_t field_24;
        uint32_t field_32;
        uint8_t _unknown_36[4];
    };

    class BucketManager::SafeStaticDestructor {
    public:
        SafeStaticDestructor();
        ~SafeStaticDestructor();

    private:
        unsigned long field_0;
        uint8_t _unknown_8[105];
    };

    class BucketManager::StaticDestructor {
    public:
        StaticDestructor();
        ~StaticDestructor();

        uint8_t _unknown_0[1];
    };

    template <
        typename...> // 21 instantiations, e.g. <Js5MemoryCacheWrapper>, <game::BuildAnimationMain>, <game::BuildAnimationRequestData>
    class BucketRefCounter {
    public:
        // virtual methods in vtable order
        virtual void DeleteData();
        virtual void DeleteSelf();
        BucketRefCounter(void* arg1, oldscape::configdecoder::OldscapeVarType* oldscapeVarType, unsigned int arg3);
        BucketRefCounter(void* arg1, game::BuildTerrainMain* buildTerrainMain, unsigned int arg3);
        BucketRefCounter(void* arg1, game::BuildCombinedLocationMain* buildCombinedLocationMain, unsigned int arg3);
        BucketRefCounter(void* arg1, game::BuildSingleLocationMain* buildSingleLocationMain, unsigned int arg3);
        BucketRefCounter(void* arg1, game::BuildAnimationMain* buildAnimationMain, unsigned int arg3);
        BucketRefCounter(void* arg1, game::BuildModelMain* buildModelMain, unsigned int arg3);
        BucketRefCounter(void* arg1, game::BuildSingleLocationRequestData* buildSingleLocationRequestData,
                         unsigned int arg3);
        BucketRefCounter(void* arg1, game::BuildSingleLocationWorker* buildSingleLocationWorker, unsigned int arg3);
        BucketRefCounter(void* arg1, game::BuildTerrainRequestData* buildTerrainRequestData, unsigned int arg3);
        BucketRefCounter(void* arg1, game::BuildTerrainWorker* buildTerrainWorker, unsigned int arg3);
        BucketRefCounter(void* arg1, game::BuildFunctionRequestData* buildFunctionRequestData, unsigned int arg3);
        BucketRefCounter(void* arg1, game::BuildFunctionWorker* buildFunctionWorker, unsigned int arg3);
        BucketRefCounter(void* arg1, game::BuildModelRequestData* buildModelRequestData, unsigned int arg3);
        BucketRefCounter(void* arg1, game::BuildModelWorker* buildModelWorker, unsigned int arg3);
        BucketRefCounter(void* arg1, game::BuildAnimationRequestData* buildAnimationRequestData, unsigned int arg3);
        BucketRefCounter(void* arg1, game::BuildAnimationWorker* buildAnimationWorker, unsigned int arg3);
        BucketRefCounter(void* arg1, game::BuildCombinedLocationRequestData* buildCombinedLocationRequestData,
                         unsigned int arg3);
        BucketRefCounter(void* arg1, game::BuildCombinedLocationWorker* buildCombinedLocationWorker, unsigned int arg3);
        BucketRefCounter(void* arg1, game::BuildFunctionMain* buildFunctionMain, unsigned int arg3);
        BucketRefCounter(void* arg1, graphics::GUIAnimation* guiAnimation, unsigned int arg3);
        BucketRefCounter(void* arg1, Js5MemoryCacheWrapper* js5MemoryCacheWrapper, unsigned int arg3);
    };

    // 0x10019be00
    void BucketManager::DeAllocate(void* arg1, unsigned long arg2) {
        DeAllocate(this);
    }

    // 0x10019c250
    Js5WorkerThread* placement_new<Js5WorkerThread>(void* arg1) {
        new (arg1) Js5WorkerThread();
        return arg1;
    }

    // 0x10019c270
    ref_counter_shared<Js5WorkerThread>*
    placement_new<ref_counter_shared<Js5WorkerThread>, int, Js5WorkerThread*&>(void* arg1, int&& arg2,
                                                                               Js5WorkerThread*& arg3) {
        new (arg1) ref_counter_shared<Js5WorkerThread>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10054d050
    BucketRefCounter<game::BuildModelMain>::BucketRefCounter(void* arg1, game::BuildModelMain* buildModelMain,
                                                             unsigned int arg3)
        : ref_counter_base() {}

    // 0x10054d0b0
    void BucketRefCounter<game::BuildModelMain>::DeleteSelf() {
        BucketRefCounter<game::BuildModelMain> _vtbl* pBVar1;

        if (*(int*)&this[5]._vptr != 4) {
            pBVar1 = (BucketRefCounter<game::BuildModelMain> _vtbl*)this_thread::GetThreadID();
            if (pBVar1 != this[4]._vptr) {
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, nullptr);
            }
        }
        pBVar1 = this[2]._vptr;
        std::destroy_at(this);
        BucketManager::DeAllocate(pBVar1);
    }

    // 0x10064fc30
    BucketRefCounter<game::BuildAnimationRequestData>::BucketRefCounter(
        void* arg1, game::BuildAnimationRequestData* buildAnimationRequestData, unsigned int arg3)
        : ref_counter_base() {}

    // 0x10064fc90
    void BucketRefCounter<game::BuildAnimationRequestData>::DeleteData() {
        if ((BuildAnimationRequestData*)this[3]._vptr != nullptr) {
            this[3]._vptr->~BuildAnimationRequestData();
            this[3]._vptr = nullptr;
        }
    }

    // 0x10064fcc0
    void BucketRefCounter<game::BuildAnimationRequestData>::DeleteSelf() {
        BucketRefCounter<game::BuildAnimationRequestData> _vtbl* pBVar1;

        if (*(int*)&this[5]._vptr != 4) {
            pBVar1 = (BucketRefCounter<game::BuildAnimationRequestData> _vtbl*)this_thread::GetThreadID();
            if (pBVar1 != this[4]._vptr) {
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, nullptr);
            }
        }
        pBVar1 = this[2]._vptr;
        std::destroy_at(this);
        BucketManager::DeAllocate(pBVar1);
    }

    // 0x100a06390
    BucketRefCounter<Js5MemoryCacheWrapper>::BucketRefCounter(void* arg1, Js5MemoryCacheWrapper* js5MemoryCacheWrapper,
                                                              unsigned int arg3)
        : ref_counter_base() {}

    // 0x100a063f0
    void BucketRefCounter<Js5MemoryCacheWrapper>::DeleteSelf() {
        BucketRefCounter<Js5MemoryCacheWrapper> _vtbl* pBVar1;

        if (*(int*)&this[5]._vptr != 4) {
            pBVar1 = (BucketRefCounter<Js5MemoryCacheWrapper> _vtbl*)this_thread::GetThreadID();
            if (pBVar1 != this[4]._vptr) {
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, nullptr);
            }
        }
        pBVar1 = this[2]._vptr;
        std::destroy_at(this);
        BucketManager::DeAllocate(pBVar1);
    }

    // 0x100cbbc80
    unsigned long Bucket::GetSlotSize() const {
        return m_slotSize;
    }

    // 0x100cbc390
    unsigned long Bucket::GetEnd() const {
        return m_end;
    }

    // 0x100cbf510
    Bucket::~Bucket() {}

} // namespace jag
