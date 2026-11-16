// libs/graphics/graphicutils/BatchDestroy.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag {
    template <
        typename...> // 3 instantiations, e.g. <EndianSwap, short>, <EndianSwap, unsigned int>, <EndianSwap, unsigned long long>
    class ByteReorder {
    public:
        void swap(short& arg1);
        void swap(unsigned int& arg1);
        void swap(unsigned long long& arg1);
    };

    // 0x1001a56f0
    unsigned int PacketReaderMixin<PacketT<Array<unsigned char>>>::gT<unsigned int>() {
        uint64_t uVar3;
        uint64_t uVar6;

        long lVar4 = data();
        long lVar2 = *(long*)(this + 24);
        unsigned long uVar1 = lVar2 + 4;
        *(unsigned long*)(this + 24) = uVar1;
        if (end() < uVar1) {
            uVar3 = *(uint64_t*)(this + 24);
            uVar6 = end();
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                13, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        return local_2c = *(unsigned int*)(lVar4 + lVar2);
        ReorderToBE<int>(&local_2c);
        return local_2c;
    }

    // 0x1001a5780
    void ReorderFromBE<unsigned int>(unsigned int& arg1) {
        if (IsLittleEndian() != '\0') {
            DoByteReorder<EndianSwap, int>(arg1);
        }
    }

    // 0x1001a57b0
    void DoByteReorder<EndianSwap, unsigned int>(unsigned int& arg1) {
        ByteReorder<EndianSwap, int>::swap(arg1);
    }

    // 0x1001a57c0
    void ByteReorder<EndianSwap, unsigned int>::swap(unsigned int& arg1) {
        unsigned int uVar1 = arg1;
        arg1 = uVar1 >> 24 | (uVar1 & 16711680) >> 8 | (uVar1 & 65280) << 8 | uVar1 << 24;
    }

    // 0x1001a5eb0
    unsigned int PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gT<unsigned int>() {
        uint64_t uVar3;
        uint64_t uVar6;

        long lVar4 = data();
        long lVar2 = *(long*)(this + 24);
        unsigned long uVar1 = lVar2 + 4;
        *(unsigned long*)(this + 24) = uVar1;
        if (end() < uVar1) {
            uVar3 = *(uint64_t*)(this + 24);
            uVar6 = end();
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                13, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        return local_2c = *(unsigned int*)(lVar4 + lVar2);
        ReorderToBE<int>(&local_2c);
        return local_2c;
    }

    // 0x1001a5f40
    unsigned long long
    PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gT<unsigned long long>() {
        uint64_t uVar3;
        uint64_t uVar6;

        long lVar4 = data();
        long lVar2 = *(long*)(this + 24);
        unsigned long uVar1 = lVar2 + 8;
        *(unsigned long*)(this + 24) = uVar1;
        if (end() < uVar1) {
            uVar3 = *(uint64_t*)(this + 24);
            uVar6 = end();
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                13, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        return local_30 = *(unsigned long long*)(lVar4 + lVar2);
        ReorderToBE<long long>(&local_30);
        return local_30;
    }

    // 0x1001a5fd0
    void ReorderFromBE<unsigned long long>(unsigned long long& arg1) {
        if (IsLittleEndian() != '\0') {
            DoByteReorder<EndianSwap, long long>(arg1);
        }
    }

    // 0x1001a6000
    void DoByteReorder<EndianSwap, unsigned long long>(unsigned long long& arg1) {
        ByteReorder<EndianSwap, long long>::swap(arg1);
    }

    // 0x1001a6010
    void ByteReorder<EndianSwap, unsigned long long>::swap(unsigned long long& arg1) {
        unsigned long uVar1 = arg1;
        arg1 = uVar1 >> 56 | (uVar1 & 71776119061217280) >> 40 | (uVar1 & 280375465082880) >> 24 |
               (uVar1 & 1095216660480) >> 8 | (uVar1 & 4278190080) << 8 | (uVar1 & 16711680) << 24 |
               (uVar1 & 65280) << 40 | uVar1 << 56;
    }

    // 0x1001a6290
    void BucketAllocatorEASTL::allocate(unsigned long arg1, unsigned long arg2, unsigned long arg3) {
        BucketManager::Allocate(arg1, 0, arg2);
    }

    // 0x1001a6290: BucketAllocatorEASTL::allocate(unsigned long, unsigned long, unsigned long, int) has the same machine code as BucketAllocatorEASTL::allocate(unsigned long, unsigned long, unsigned long)

    // 0x1001a6330
    oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*
    placement_new<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, int>(void* arg1, int&& arg2) {
        arg1->PacketT((long)*arg2);
        return arg1;
    }

    // 0x1001a6350
    ref_counter_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>*
    placement_new<ref_counter_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>, int,
                  oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*&>(
        void* arg1, int&& arg2, oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*& arg3) {
        new (arg1) ref_counter_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1001a6390
    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(unsigned long arg1)
        : Array<unsigned char, BucketAllocatorEASTL>() {
        *(uint64_t*)(this + 24) = 0;
        Reserve(this, arg1);
    }

    // 0x1001a63d0
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Reserve(unsigned long arg1) {
        set_max_size(arg1, 5);
    }

    // 0x1001a63f0
    ref_counter_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::ref_counter_shared(
        unsigned long arg1, oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>* packetJ)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7930 + 16;
        *(unsigned long*)(this + 16) = arg1;
        *(PacketJ<Array<unsigned char, BucketAllocatorEASTL> _>**)(this + 24) = packetJ;
    }

    // 0x1001a6430
    void ref_counter_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::DeleteData() {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)(*(long*)(this + 24) + lVar2))->~PacketJ();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 32;
                } while (uVar1 < *(unsigned long*)(this + 16));
            }
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x1001a6480
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pT<signed char>(signed char arg1) {
        long lVar2 = *(long*)(this + 24);
        schar local_19 = arg1;
        if (end() < lVar2 + 1U) {
            LogAssert("m_pos + sizeof(T) <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      56, nullptr);
        }
        ReorderToBE<unsigned char>(&local_19);
        lVar2 = data();
        *(schar*)(lVar2 + *(long*)(this + 24)) = local_19;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
    }

    // 0x1001a64f0
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pT<int>(int arg1) {
        long lVar1 = *(long*)(this + 24);
        unsigned int local_1c = arg1;
        if (end() < lVar1 + 4U) {
            LogAssert("m_pos + sizeof(T) <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      56, nullptr);
        }
        ReorderToBE<int>(&local_1c);
        long lVar3 = data();
        lVar1 = *(long*)(this + 24);
        *(unsigned int*)(lVar3 + lVar1) = local_1c;
        *(long*)(this + 24) = lVar1 + 4;
    }

    // 0x1001a6560
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pT<long long>(long long arg1) {
        long lVar1 = *(long*)(this + 24);
        unsigned long long local_20 = arg1;
        if (end() < lVar1 + 8U) {
            LogAssert("m_pos + sizeof(T) <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      56, nullptr);
        }
        ReorderToBE<long long>(&local_20);
        long lVar3 = data();
        lVar1 = *(long*)(this + 24);
        *(unsigned long long*)(lVar3 + lVar1) = local_20;
        *(long*)(this + 24) = lVar1 + 8;
    }

    // 0x1001a6b80
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252(const char* str, unsigned long arg2,
                                                                                  bool arg3) {
        unsigned long uVar1;
        uint8_t uVar2;
        uint8_t* puVar3;
        uint32_t in_register_00000009;

        if ((((uint32_t)in_register_00000009 << 8) | (uint8_t)arg3) != 0) {
            uVar1 = *(unsigned long*)(this + 24);
            *(unsigned long*)(this + 24) = uVar1 + 1;
            puVar3 = (uint8_t*)(*this)[uVar1];
            *puVar3 = 0;
        }
        if (arg2 != 0) {
            do {
                uVar2 = stringtools::WideToCP1252(stringtools::GetUTF8NextChar(str, 0, arg2));
                uVar1 = *(unsigned long*)(this + 24);
                *(unsigned long*)(this + 24) = uVar1 + 1;
                puVar3 = (uint8_t*)(*this)[uVar1];
                *puVar3 = uVar2;
            } while (0 < arg2);
        }
        uVar1 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar1 + 1;
        puVar3 = (uint8_t*)(*this)[uVar1];
        *puVar3 = 0;
    }

    // 0x1001a6c40
    oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*
    placement_new<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, unsigned long>(void* arg1,
                                                                                                unsigned long&& arg2) {
        arg1->PacketT(arg2);
        return arg1;
    }

    // 0x1001a6c60
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pT<short>(short arg1) {
        long lVar1 = *(long*)(this + 24);
        short local_1a = arg1;
        if (end() < lVar1 + 2U) {
            LogAssert("m_pos + sizeof(T) <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      56, nullptr);
        }
        ReorderToBE<short>(&local_1a);
        long lVar3 = data();
        lVar1 = *(long*)(this + 24);
        *(short*)(lVar3 + lVar1) = local_1a;
        *(long*)(this + 24) = lVar1 + 2;
    }

} // namespace jag

namespace jag::graphicutils {
    template <
        typename...> // 3 instantiations, e.g. <eastl::fixed_vector<shared_ptr<graphics::TextureAtlasReference>, 1ul, true, eastl::alloca, <eastl::vector<std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<jag::, <eastl::vector<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<g
    class BatchDestroy {
    public:
        BatchDestroy<>();
        ~BatchDestroy();
    };

    template <
        typename...> // 3 instantiations, e.g. <shared_ptr<graphics::TextureAtlasReference> >, <std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::Bill, <std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::Geome
    class BatchDestroyHelper {
    public:
        // virtual methods in vtable order
        virtual ~BatchDestroyHelper();
        virtual void OnEndFrame();
        void OnDestroy<BatchDestroy<
            eastl::vector<std::unique_ptr<graphics::GeometryBatchInstance,
                                          MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>>>(
            BatchDestroy<eastl::vector<
                std::unique_ptr<graphics::GeometryBatchInstance,
                                MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>>&
                batchDestroy);
        BatchDestroyHelper();
        void OnPause();
        void WaitDestroyList();
        void OnResume();
        void Flush();
        unsigned long UseDestroyList() const;
        void OnDestroy<BatchDestroy<eastl::fixed_vector<shared_ptr<graphics::TextureAtlasReference>, 1ul>>>(
            BatchDestroy<eastl::fixed_vector<shared_ptr<graphics::TextureAtlasReference>, 1ul>>& batchDestroy);
        void OnDestroy<BatchDestroy<
            eastl::vector<std::unique_ptr<graphics::BillboardBatchInstance,
                                          MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>>>(
            BatchDestroy<eastl::vector<
                std::unique_ptr<graphics::BillboardBatchInstance,
                                MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>>&
                batchDestroy);
    };

    class BatchDestroyManager {
    public:
        ~BatchDestroyManager();
        void Pause();
        void AddPauseCallback(std::function<void()>&& callback);
        void AddResumeCallback(std::function<void()>&& callback);
        BatchDestroyManager();

    private:
        uint64_t field_0;
        function<void()>* field_8;
        uint8_t _unknown_16[48];
    };

    // 0x1001a5510
    BatchDestroyManager::~BatchDestroyManager() {
        Pause();
        field_32.~vector();
    }

    // 0x1001a5570
    void BatchDestroyManager::Pause() {
        function<void()>* this_00;
        function<void()>* pfVar1;

        this_00 = (function<void()>*)HeapBeginPtr();
        pfVar1 = (function<void()>*)end();
        for (; this_00 != pfVar1; this_00 = this_00 + 48) {
            std::function<void()>::operator()(this_00);
        }
    }

    // 0x100385020
    BatchDestroy<eastl::vector<
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>>::BatchDestroy<>() {
        vector(this);
    }

    // 0x100385090
    BatchDestroy<eastl::vector<
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>>::~BatchDestroy() {
        BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance,
                                           MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>*
            this_00;

        if (this_thread::IsMainThread() != '\0') {
            this_00 = (BatchDestroyHelper<
                       std::unique_ptr<graphics::GeometryBatchInstance,
                                       MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>*)
                Instance();
            BatchDestroyHelper<
                std::unique_ptr<graphics::GeometryBatchInstance,
                                MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::
                OnDestroy<BatchDestroy<eastl::vector<
                    std::unique_ptr<graphics::GeometryBatchInstance,
                                    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>>>(
                    this_00,
                    (BatchDestroy<eastl::vector<
                         std::unique_ptr<graphics::GeometryBatchInstance,
                                         MakeUniquePool<graphics::GeometryBatchInstance, _3072>::UniquePoolDeleter>>
                                      _>*)this);
        }
    }

    // 0x10083a3d0
    BatchDestroy<eastl::fixed_vector<shared_ptr<graphics::TextureAtlasReference>, 1ul>>::BatchDestroy<>()
        : eastl::fixed_vector<shared_ptr<graphics::TextureAtlasReference>, 1ul>() {}

    // 0x10083a490
    BatchDestroy<eastl::vector<
        std::unique_ptr<graphics::BillboardBatchInstance,
                        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>>::BatchDestroy<>() {
        vector(this);
    }

    // 0x10083a5c0
    BatchDestroy<eastl::fixed_vector<shared_ptr<graphics::TextureAtlasReference>, 1ul>>::~BatchDestroy() {
        if (this_thread::IsMainThread() != '\0') {
            ((BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>*)Instance())
                ->OnDestroy<BatchDestroy<eastl::fixed_vector<shared_ptr<graphics::TextureAtlasReference>, 1ul>>>(*this);
        }
    }

    // 0x100840ba0
    BatchDestroy<eastl::vector<
        std::unique_ptr<graphics::BillboardBatchInstance,
                        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>>::~BatchDestroy() {
        BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance,
                                           MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>*
            this_00;

        if (this_thread::IsMainThread() != '\0') {
            this_00 = (BatchDestroyHelper<
                       std::unique_ptr<graphics::BillboardBatchInstance,
                                       MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>*)
                Instance();
            BatchDestroyHelper<
                std::unique_ptr<graphics::BillboardBatchInstance,
                                MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::
                OnDestroy<BatchDestroy<eastl::vector<
                    std::unique_ptr<graphics::BillboardBatchInstance,
                                    MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>>>(
                    this_00,
                    (BatchDestroy<eastl::vector<
                         std::unique_ptr<graphics::BillboardBatchInstance,
                                         MakeUniquePool<graphics::BillboardBatchInstance, _64>::UniquePoolDeleter>>
                                      _>*)this);
        }
    }

} // namespace jag::graphicutils

namespace jag::oldscape {
    // 0x1001a6370
    void PacketJ<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(unsigned long arg1) {
        new (this) PacketT(arg1);
    }

    // 0x1001a6380
    void PacketJ<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(unsigned long arg1) {
        PacketT(this, arg1);
    }

} // namespace jag::oldscape
