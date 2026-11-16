// libs/jtl/allocator/Bucket.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class Bucket {
    public:
        GetAllocator() const;
        GetStart() const;
        ulong GetSlotAlignment() const;
        Bucket();
        Bucket(unsigned long, unsigned long, unsigned long, unsigned int);
        Bucket* Allocate();
        void DeAllocate(void*);
        void DirectDeAllocation(SimpleAllocator::AllocatedBlock const&);
        void CheckOverflow(void const*) const;
        void ResetMetrics();
        void PrintMetrics();
        void PrintAllocations(bool);
        ulong GetSlotSize() const;
        ulong GetEnd() const;
        ~Bucket();

        // data members, from how the methods use this: 248 bytes
        char _unknown_0[8];
        long field_8;        // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        char _unknown_40[8];
        AuthLibWrapper* field_48; // offset 48
        char _unknown_56[136];
        undefined1 field_192; // offset 192
        char _unknown_193[15];
        long field_208;        // offset 208
        ulong m_end;           // offset 216
        ulong m_slotSize;      // offset 224
        ulong m_slotAlignment; // offset 232
        uint field_240;        // offset 240
        char _unknown_244[4];
    };

    template <
        typename...> // 6 instantiations, e.g. <game::NPCTypeCustomisation>, <graphics::EffectStateSaveRestore>, <graphics::Model>
    class BucketDeleter {
    public:
        void operator()(oldscape::configdecoder::NPCTypeCustomisation*) const;
        void operator()(game::NPCTypeCustomisation*) const;
        void operator()(graphics::Model*) const;
        void operator()(ui::HTTPSpriteData*) const;
        void operator()(http::HTTPRequest*) const;
        void operator()(graphics::EffectStateSaveRestore*) const;
    };

    class BucketManager {
    public:
        class DirectAllocation;
        class SafeStaticDestructor;
        class StaticDestructor;
        void DeAllocate(void*, unsigned long);
        long Allocate(unsigned long, unsigned int, unsigned long);
        void Init(unsigned long, unsigned long);
        void CreateGenericBuckets();
        ulong CreateBucket(unsigned long, unsigned long, unsigned long);
        ulong CreateSafeBucket(unsigned long, unsigned long, unsigned long);
        long GetBucket(unsigned long, unsigned long);
        long GetBucket(unsigned long, unsigned long, bool);
        long GetSafeBucket(unsigned long, unsigned long);
        void PrintBuckets();
        void PrintBucketAllocations(bool);
        void PrintBucketUsage(char const*, bool);
        void ResetMetrics();
        void PrintMetrics();
        BucketManager* DoAllocate(unsigned long, unsigned long, unsigned int);
        void DirectDeAllocate(DirectAllocation const&);
        bool CheckInBucket(void*);
        PostProcessManager* CheckAllocation(std::array<Bucket, 256ul>&, unsigned long, void*);
        GetAllocationSize(void*);
        void DeAllocate(void*);
        static /* 72 bytes */ m_metricsMutex;           // initialised in its definition
        static /* 24 bytes */ m_bucketStaticDestructor; // = { 0, 0, 0, 0, 165672, 0 }
        static /* 24 bytes */ m_smallBuckets;           // = { 0, 0, 0, 0, 165680, 0 }
        static /* 24 bytes */ m_buckets;                // = { 0, 0, 0, 0, 167728, 0 }
        static /* 24 bytes */ m_bucketCount;            // = { 0, 0, 0, 0, 231216, 0 }
        static /* 8 bytes */ m_safeBucketStaticDestructor;
        static /* 2048 bytes */ m_smallSafeBuckets;
        static std::array<Bucket, 256ul> /* 63488 bytes */ m_safeBuckets; // = array<Bucket,256ul>()
        static /* 8 bytes */ m_safeBucketCount;

        // data members, from how the methods use this: 32 bytes
        undefined1 field_0[8]; // offset 0
        long field_8;          // offset 8
        undefined8 field_16;   // offset 16
        Bucket* field_24;      // offset 24
    };

    class BucketManager::DirectAllocation {
    public:
        DirectAllocation();

        // data members, from how the methods use this: 40 bytes
        char _unknown_0[24];
        undefined8 field_24; // offset 24
        undefined4 field_32; // offset 32
        char _unknown_36[4];
    };

    class BucketManager::SafeStaticDestructor {
    public:
        SafeStaticDestructor();
        ~SafeStaticDestructor();

        // data members, from how the methods use this: 113 bytes
        long field_0; // offset 0
        char _unknown_8[105];
    };

    class BucketManager::StaticDestructor {
    public:
        StaticDestructor();
        ~StaticDestructor();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    template <
        typename...> // 21 instantiations, e.g. <Js5MemoryCacheWrapper>, <game::BuildAnimationMain>, <game::BuildAnimationRequestData>
    class BucketRefCounter {
    public:
        // virtual methods in vtable order
        virtual void DeleteData();
        virtual void DeleteSelf();
        BucketRefCounter(void*, oldscape::configdecoder::OldscapeVarType*, unsigned int);
        BucketRefCounter(void*, game::BuildTerrainMain*, unsigned int);
        BucketRefCounter(void*, game::BuildCombinedLocationMain*, unsigned int);
        BucketRefCounter(void*, game::BuildSingleLocationMain*, unsigned int);
        BucketRefCounter(void*, game::BuildAnimationMain*, unsigned int);
        BucketRefCounter(void*, game::BuildModelMain*, unsigned int);
        BucketRefCounter(void*, game::BuildSingleLocationRequestData*, unsigned int);
        BucketRefCounter(void*, game::BuildSingleLocationWorker*, unsigned int);
        BucketRefCounter(void*, game::BuildTerrainRequestData*, unsigned int);
        BucketRefCounter(void*, game::BuildTerrainWorker*, unsigned int);
        BucketRefCounter(void*, game::BuildFunctionRequestData*, unsigned int);
        BucketRefCounter(void*, game::BuildFunctionWorker*, unsigned int);
        BucketRefCounter(void*, game::BuildModelRequestData*, unsigned int);
        BucketRefCounter(void*, game::BuildModelWorker*, unsigned int);
        BucketRefCounter(void*, game::BuildAnimationRequestData*, unsigned int);
        BucketRefCounter(void*, game::BuildAnimationWorker*, unsigned int);
        BucketRefCounter(void*, game::BuildCombinedLocationRequestData*, unsigned int);
        BucketRefCounter(void*, game::BuildCombinedLocationWorker*, unsigned int);
        BucketRefCounter(void*, game::BuildFunctionMain*, unsigned int);
        BucketRefCounter(void*, graphics::GUIAnimation*, unsigned int);
        BucketRefCounter(void*, Js5MemoryCacheWrapper*, unsigned int);
    };

    // 0x10019be00, 16 bytes, inline, placed by debug map only (low confidence)
    // BucketManager::DeAllocate(void*, unsigned long)
    void BucketManager::DeAllocate(void* param_1, ulong param_2) {
        DeAllocate(param_1);
    }

    // 0x10019c250, 32 bytes, inline, placed by debug map only (low confidence)
    // Js5WorkerThread* placement_new<Js5WorkerThread>(void*)
    Js5WorkerThread* placement_new<Js5WorkerThread>(void* param_1) {
        Js5WorkerThread::Js5WorkerThread(param_1);
        return param_1;
    }

    // 0x10019c270, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Js5WorkerThread>* placement_new<ref_counter_shared<Js5WorkerThread>, int, Js5WorkerThread*&>(void*, int&&, Js5WorkerThread*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<Js5WorkerThread>, int, Js5WorkerThread*&>(void* param_1, int* param_2,
                                                                               Js5WorkerThread** param_3) {
        ref_counter_shared<Js5WorkerThread>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10054d040, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // BucketRefCounter<game::BuildModelMain>::BucketRefCounter(void*, game::BuildModelMain*, unsigned int): jumps straight to the base-object constructor

    // 0x10054d050, 96 bytes, base-object constructor, inline, placed by class header (inline)
    // BucketRefCounter<game::BuildModelMain>::BucketRefCounter(void*, game::BuildModelMain*, unsigned int)
    void BucketRefCounter<game::BuildModelMain>::BucketRefCounter(void* param_1, BuildModelMain* param_2,
                                                                  uint param_3) {
        undefined8 uVar1;

        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee70c0 + 16;
        *(void**)(this + 16) = param_1;
        *(BuildModelMain**)(this + 24) = param_2;
        uVar1 = this_thread::GetThreadID();
        *(undefined8*)(this + 32) = uVar1;
        *(uint*)(this + 40) = param_3;
    }

    // 0x10054d0b0, 96 bytes, inline, placed by class header (inline)
    // BucketRefCounter<game::BuildModelMain>::DeleteSelf()
    void BucketRefCounter<game::BuildModelMain>::DeleteSelf() {
        void* pvVar1;

        if (*(int*)(this + 40) != 4) {
            if (this_thread::GetThreadID() != *(long*)(this + 32)) {
                /* WARNING: Subroutine does not return */
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, (char*)0);
            }
        }
        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)(this);
        BucketManager::DeAllocate(pvVar1);
    }

    // 0x10064fc20, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // BucketRefCounter<game::BuildAnimationRequestData>::BucketRefCounter(void*, game::BuildAnimationRequestData*, unsigned int): jumps straight to the base-object constructor

    // 0x10064fc30, 96 bytes, base-object constructor, inline, placed by class header (inline)
    // BucketRefCounter<game::BuildAnimationRequestData>::BucketRefCounter(void*, game::BuildAnimationRequestData*, unsigned int)
    void BucketRefCounter<game::BuildAnimationRequestData>::BucketRefCounter(void* param_1,
                                                                             BuildAnimationRequestData* param_2,
                                                                             uint param_3) {
        undefined8 uVar1;

        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7120 + 16;
        *(void**)(this + 16) = param_1;
        *(BuildAnimationRequestData**)(this + 24) = param_2;
        uVar1 = this_thread::GetThreadID();
        *(undefined8*)(this + 32) = uVar1;
        *(uint*)(this + 40) = param_3;
    }

    // 0x10064fc90, 48 bytes, inline, placed by class header (inline)
    // BucketRefCounter<game::BuildAnimationRequestData>::DeleteData()
    void BucketRefCounter<game::BuildAnimationRequestData>::DeleteData() {
        if (*(BuildAnimationRequestData**)(this + 24) != (BuildAnimationRequestData*)0) {
            (*(BuildAnimationRequestData**)(this + 24))->~BuildAnimationRequestData();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10064fcc0, 96 bytes, inline, placed by class header (inline)
    // BucketRefCounter<game::BuildAnimationRequestData>::DeleteSelf()
    void BucketRefCounter<game::BuildAnimationRequestData>::DeleteSelf() {
        void* pvVar1;

        if (*(int*)(this + 40) != 4) {
            if (this_thread::GetThreadID() != *(long*)(this + 32)) {
                /* WARNING: Subroutine does not return */
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, (char*)0);
            }
        }
        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)(this);
        BucketManager::DeAllocate(pvVar1);
    }

    // 0x100a06380, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // BucketRefCounter<Js5MemoryCacheWrapper>::BucketRefCounter(void*, Js5MemoryCacheWrapper*, unsigned int): jumps straight to the base-object constructor

    // 0x100a06390, 96 bytes, base-object constructor, inline, placed by class header (inline)
    // BucketRefCounter<Js5MemoryCacheWrapper>::BucketRefCounter(void*, Js5MemoryCacheWrapper*, unsigned int)
    void BucketRefCounter<Js5MemoryCacheWrapper>::BucketRefCounter(void* param_1, Js5MemoryCacheWrapper* param_2,
                                                                   uint param_3) {
        undefined8 uVar1;

        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee70b8 + 16;
        *(void**)(this + 16) = param_1;
        *(Js5MemoryCacheWrapper**)(this + 24) = param_2;
        uVar1 = this_thread::GetThreadID();
        *(undefined8*)(this + 32) = uVar1;
        *(uint*)(this + 40) = param_3;
    }

    // 0x100a063f0, 96 bytes, inline, placed by class header (inline)
    // BucketRefCounter<Js5MemoryCacheWrapper>::DeleteSelf()
    void BucketRefCounter<Js5MemoryCacheWrapper>::DeleteSelf() {
        void* pvVar1;

        if (*(int*)(this + 40) != 4) {
            if (this_thread::GetThreadID() != *(long*)(this + 32)) {
                /* WARNING: Subroutine does not return */
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, (char*)0);
            }
        }
        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)(this);
        BucketManager::DeAllocate(pvVar1);
    }

    // 0x100cbbc80, 16 bytes, inline, placed by class name
    // Bucket::GetSlotSize() const
    ulong Bucket::GetSlotSize() {
        return m_slotSize;
    }

    // 0x100cbc0e0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // BucketManager::DirectAllocation::DirectAllocation(): jumps straight to the base-object constructor

    // 0x100cbc390, 16 bytes, inline, placed by class name
    // Bucket::GetEnd() const
    ulong Bucket::GetEnd() {
        return m_end;
    }

    // 0x100cbf500, 16 bytes, complete-object destructor, inline, placed by class name
    // Bucket::~Bucket(): jumps straight to the base-object destructor

    // 0x100cbf510, 16 bytes, base-object destructor, inline, placed by class name
    // Bucket::~Bucket()
    void Bucket::~Bucket() {
        ~SimpleAllocator();
    }

} // namespace jag
