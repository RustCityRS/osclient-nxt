// libs/graphics/graphicutils/BatchDestroy.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag {
    template <
        typename...> // 3 instantiations, e.g. <EndianSwap, short>, <EndianSwap, unsigned int>, <EndianSwap, unsigned long long>
    class ByteReorder {
    public:
        void swap(short&);
        void swap(unsigned int&);
        void swap(unsigned long long&);
    };

    // 0x1001a56f0, 144 bytes, inline, placed by debug map only (low confidence)
    // unsigned int PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gT<unsigned int>()
    uint PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gT<unsigned int>(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this) {
        ulong uVar1;
        long lVar2;
        undefined8 uVar3;
        long lVar4;
        ulong uVar5;
        undefined8 uVar6;
        uint local_2c;

        lVar4 = data();
        lVar2 = *(long*)(this + 24);
        uVar1 = lVar2 + 4;
        *(ulong*)(this + 24) = uVar1;
        uVar5 = end();
        if (uVar5 < uVar1) {
            uVar3 = *(undefined8*)(this + 24);
            uVar6 = end();
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                13, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        local_2c = *(uint*)(lVar4 + lVar2);
        ReorderToBE<int>((int*)&local_2c);
        return local_2c;
    }

    // 0x1001a5780, 48 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // void ReorderFromBE<unsigned int>(unsigned int&)
    /* void ReorderToBE<int>(int&) */

    void ReorderToBE<int>(int* param_1) {
        if (IsLittleEndian() != '\0') {
            DoByteReorder<EndianSwap, int>(param_1);
        }
    }

    // 0x1001a57b0, 16 bytes, inline, placed by debug map only (low confidence)
    // void DoByteReorder<EndianSwap, unsigned int>(unsigned int&)
    /* void DoByteReorder<EndianSwap, int>(int&) */

    void DoByteReorder<EndianSwap, int>(int* param_1) {
        ByteReorder<EndianSwap, int>::swap(param_1);
    }

    // 0x1001a57c0, 16 bytes, inline, placed by debug map only (low confidence)
    // ByteReorder<EndianSwap, unsigned int>::swap(unsigned int&)
    /* ByteReorder<EndianSwap, int>::swap(int&) */

    void ByteReorder<EndianSwap, int>::swap(int* param_1) {
        uint uVar1;

        uVar1 = *param_1;
        *param_1 = uVar1 >> 24 | (uVar1 & 16711680) >> 8 | (uVar1 & 65280) << 8 | uVar1 << 24;
    }

    // 0x1001a5eb0, 144 bytes, inline, placed by debug map only (low confidence)
    // unsigned int PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::gT<unsigned int>()
    uint PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gT<unsigned int>(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this) {
        ulong uVar1;
        long lVar2;
        undefined8 uVar3;
        long lVar4;
        ulong uVar5;
        undefined8 uVar6;
        uint local_2c;

        lVar4 = data();
        lVar2 = *(long*)(this + 24);
        uVar1 = lVar2 + 4;
        *(ulong*)(this + 24) = uVar1;
        uVar5 = end();
        if (uVar5 < uVar1) {
            uVar3 = *(undefined8*)(this + 24);
            uVar6 = end();
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                13, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        local_2c = *(uint*)(lVar4 + lVar2);
        ReorderToBE<int>((int*)&local_2c);
        return local_2c;
    }

    // 0x1001a5f40, 144 bytes, inline, placed by debug map only (low confidence)
    // unsigned long long PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::gT<unsigned long long>()
    ulonglong PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gT<unsigned long long>(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this) {
        ulong uVar1;
        long lVar2;
        undefined8 uVar3;
        long lVar4;
        ulong uVar5;
        undefined8 uVar6;
        ulonglong local_30;

        lVar4 = data();
        lVar2 = *(long*)(this + 24);
        uVar1 = lVar2 + 8;
        *(ulong*)(this + 24) = uVar1;
        uVar5 = end();
        if (uVar5 < uVar1) {
            uVar3 = *(undefined8*)(this + 24);
            uVar6 = end();
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                13, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        local_30 = *(ulonglong*)(lVar4 + lVar2);
        ReorderToBE<long long>((longlong*)&local_30);
        return local_30;
    }

    // 0x1001a5fd0, 48 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // void ReorderFromBE<unsigned long long>(unsigned long long&)
    /* void ReorderToBE<long long>(long long&) */

    void ReorderToBE<long long>(longlong* param_1) {
        if (IsLittleEndian() != '\0') {
            DoByteReorder<EndianSwap, long long>(param_1);
        }
    }

    // 0x1001a6000, 16 bytes, inline, placed by debug map only (low confidence)
    // void DoByteReorder<EndianSwap, unsigned long long>(unsigned long long&)
    /* void DoByteReorder<EndianSwap, long long>(long long&) */

    void DoByteReorder<EndianSwap, long long>(longlong* param_1) {
        ByteReorder<EndianSwap, long long>::swap(param_1);
    }

    // 0x1001a6010, 16 bytes, inline, placed by debug map only (low confidence)
    // ByteReorder<EndianSwap, unsigned long long>::swap(unsigned long long&)
    /* ByteReorder<EndianSwap, long long>::swap(long long&) */

    void ByteReorder<EndianSwap, long long>::swap(longlong* param_1) {
        ulong uVar1;

        uVar1 = *param_1;
        *param_1 = uVar1 >> 56 | (uVar1 & 71776119061217280) >> 40 | (uVar1 & 280375465082880) >> 24 |
                   (uVar1 & 1095216660480) >> 8 | (uVar1 & 4278190080) << 8 | (uVar1 & 16711680) << 24 |
                   (uVar1 & 65280) << 40 | uVar1 << 56;
    }

    // 0x1001a6290, 16 bytes, inline, placed by debug map only (low confidence)
    // BucketAllocatorEASTL::allocate(unsigned long, unsigned long, unsigned long)
    /* BucketAllocatorEASTL::allocate(unsigned long, unsigned long, unsigned long, int) */

    void BucketAllocatorEASTL::allocate(ulong param_1, ulong param_2, ulong param_3, int param_4) {
        BucketManager::Allocate(param_1, 0, param_2);
    }

    // 0x1001a6290: the linker folded this into BucketAllocatorEASTL::allocate(unsigned long, unsigned long, unsigned long), which has identical code
    BucketAllocatorEASTL::allocate(unsigned long, unsigned long, unsigned long, int);

    // 0x1001a6330, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL> >* placement_new<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL> >, int>(void*, int&&)
    /* oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL> >*
   placement_new<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL> >,
   int&>(void*, int&) */

    PacketJ* jag::placement_new<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, int&>(void* param_1,
                                                                                                     int* param_2) {
        param_1->PacketT((long)*param_2);
        return param_1;
    }

    // 0x1001a6350, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL> > >* placement_new<ref_counter_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL> > >, int, oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL> >*&>(void*, int&&, oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL> >*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>, int,
                       oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*&>(void* param_1, int* param_2,
                                                                                        PacketJ** param_3) {
        ref_counter_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1001a6390, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::PacketT(unsigned long)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, ulong param_1) {
        new (this) Array<unsigned char, BucketAllocatorEASTL>();
        *(undefined8*)(this + 24) = 0;
        Reserve(this, param_1);
    }

    // 0x1001a63d0, 16 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::Reserve(unsigned long)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Reserve(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, ulong param_1) {
        set_max_size(param_1, 5);
    }

    // 0x1001a63e0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL> > >::ref_counter_shared(unsigned long, oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL> >*): jumps straight to the base-object constructor

    // 0x1001a63f0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL> > >::ref_counter_shared(unsigned long, oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL> >*)
    void ref_counter_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::ref_counter_shared(
        ref_counter_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>* this, ulong param_1,
        PacketJ* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7930 + 16;
        *(ulong*)(this + 16) = param_1;
        *(PacketJ**)(this + 24) = param_2;
    }

    // 0x1001a6430, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL> > >::DeleteData()
    void ref_counter_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>::DeleteData(
        ref_counter_shared<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>>* this) {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~PacketJ();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 32;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1001a6480, 112 bytes, inline, placed by debug map only (low confidence)
    // void PacketT<Array<unsigned char, BucketAllocatorEASTL> >::pT<signed char>(signed char)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pT<signed char>(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, uchar* param_2) {
        ulong uVar1;
        long lVar2;
        jag local_19;

        local_19 = SUB81(param_2, 0);
        lVar2 = *(long*)(this + 24);
        uVar1 = end();
        if (uVar1 < lVar2 + 1U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + sizeof(T) <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      56, (char*)0);
        }
        ReorderToBE<unsigned char>(&local_19, param_2);
        lVar2 = data();
        *(jag*)(lVar2 + *(long*)(this + 24)) = local_19;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
    }

    // 0x1001a64f0, 112 bytes, inline, placed by debug map only (low confidence)
    // void PacketT<Array<unsigned char, BucketAllocatorEASTL> >::pT<int>(int)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pT<int>(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, int param_1) {
        long lVar1;
        ulong uVar2;
        long lVar3;
        int local_1c;

        lVar1 = *(long*)(this + 24);
        local_1c = param_1;
        uVar2 = end();
        if (uVar2 < lVar1 + 4U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + sizeof(T) <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      56, (char*)0);
        }
        ReorderToBE<int>(&local_1c);
        lVar3 = data();
        lVar1 = *(long*)(this + 24);
        *(int*)(lVar3 + lVar1) = local_1c;
        *(long*)(this + 24) = lVar1 + 4;
    }

    // 0x1001a6560, 112 bytes, inline, placed by debug map only (low confidence)
    // void PacketT<Array<unsigned char, BucketAllocatorEASTL> >::pT<long long>(long long)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pT<long long>(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, longlong param_1) {
        long lVar1;
        ulong uVar2;
        long lVar3;
        longlong local_20;

        lVar1 = *(long*)(this + 24);
        local_20 = param_1;
        uVar2 = end();
        if (uVar2 < lVar1 + 8U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + sizeof(T) <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      56, (char*)0);
        }
        ReorderToBE<long long>(&local_20);
        lVar3 = data();
        lVar1 = *(long*)(this + 24);
        *(longlong*)(lVar3 + lVar1) = local_20;
        *(long*)(this + 24) = lVar1 + 8;
    }

    // 0x1001a6b80, 176 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::pStringUTF8ToCP1252(char const*, unsigned long, bool)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, char* param_1, ulong param_2, bool param_3) {
        ulong uVar1;
        undefined1 uVar2;
        wchar16 wVar3;
        undefined1* puVar4;
        undefined3 in_register_00000009;
        ulong local_38;

        if (CONCAT31(in_register_00000009, param_3) != 0) {
            uVar1 = *(ulong*)(this + 24);
            *(ulong*)(this + 24) = uVar1 + 1;
            puVar4 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar1);
            *puVar4 = 0;
        }
        local_38 = 0;
        if (param_2 != 0) {
            do {
                wVar3 = stringtools::GetUTF8NextChar(param_1, &local_38, param_2);
                uVar2 = stringtools::WideToCP1252(wVar3);
                uVar1 = *(ulong*)(this + 24);
                *(ulong*)(this + 24) = uVar1 + 1;
                puVar4 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                    (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar1);
                *puVar4 = uVar2;
            } while (local_38 < param_2);
        }
        uVar1 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar1 + 1;
        puVar4 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar1);
        *puVar4 = 0;
    }

    // 0x1001a6c40, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL> >* placement_new<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL> >, unsigned long>(void*, unsigned long&&)
    PacketJ*
    jag::placement_new<oldscape::PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, unsigned long>(void* param_1,
                                                                                                     ulong* param_2) {
        param_1->PacketT(*param_2);
        return param_1;
    }

    // 0x1001a6c60, 112 bytes, inline, placed by debug map only (low confidence)
    // void PacketT<Array<unsigned char, BucketAllocatorEASTL> >::pT<short>(short)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pT<short>(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, short param_1) {
        long lVar1;
        ulong uVar2;
        long lVar3;
        short local_1a;

        lVar1 = *(long*)(this + 24);
        local_1a = param_1;
        uVar2 = end();
        if (uVar2 < lVar1 + 2U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + sizeof(T) <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      56, (char*)0);
        }
        ReorderToBE<short>(&local_1a);
        lVar3 = data();
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
                                          MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                          eastl::allocator>>>(
            BatchDestroy<
                eastl::vector<std::unique_ptr<graphics::GeometryBatchInstance,
                                              MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                              eastl::allocator>>&);
        BatchDestroyHelper();
        void OnPause();
        void WaitDestroyList();
        void OnResume();
        void Flush();
        ulong UseDestroyList() const;
        void OnDestroy<BatchDestroy<
            eastl::fixed_vector<shared_ptr<graphics::TextureAtlasReference>, 1ul, true, eastl::allocator>>>(
            BatchDestroy<
                eastl::fixed_vector<shared_ptr<graphics::TextureAtlasReference>, 1ul, true, eastl::allocator>>&);
        void OnDestroy<BatchDestroy<
            eastl::vector<std::unique_ptr<graphics::BillboardBatchInstance,
                                          MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>,
                          eastl::allocator>>>(
            BatchDestroy<
                eastl::vector<std::unique_ptr<graphics::BillboardBatchInstance,
                                              MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>,
                              eastl::allocator>>&);
    };

    class BatchDestroyManager {
    public:
        ~BatchDestroyManager();
        void Pause();
        void AddPauseCallback(std::function<void()>&&);
        void AddResumeCallback(std::function<void()>&&);
        BatchDestroyManager();

        // data members, from how the methods use this: 64 bytes
        undefined8 field_0;        // offset 0
        function<void()>* field_8; // offset 8
        char _unknown_16[48];
    };

    // 0x1001a5500, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // BatchDestroyManager::~BatchDestroyManager(): jumps straight to the base-object destructor

    // 0x1001a5510, 96 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // BatchDestroyManager::~BatchDestroyManager()
    void BatchDestroyManager::~BatchDestroyManager() {
        Pause(this);
        eastl::vector<std::function<void()>, eastl::allocator>::~vector(
            (vector<std::function<void()>, eastl::allocator>*)&field_32);
        eastl::vector<std::function<void()>, eastl::allocator>::~vector(
            (vector<std::function<void()>, eastl::allocator>*)this);
        ~AutoSingleton();
    }

    // 0x1001a5570, 80 bytes, inline, placed by debug map only (low confidence)
    // BatchDestroyManager::Pause()
    void BatchDestroyManager::Pause() {
        function<void()>* this_00;
        function<void()>* pfVar1;

        this_00 = (function<void()>*)HeapBeginPtr();
        pfVar1 = (function<void()>*)end();
        for (; this_00 != pfVar1; this_00 = this_00 + 48) {
            std::function<void()>::operator()(this_00);
        }
    }

    // 0x10036d000, 16 bytes, complete-object constructor, inline, placed by class name
    // BatchDestroy<eastl::vector<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>, eastl::allocator> >::BatchDestroy<>(): jumps straight to the base-object constructor

    // 0x10036d2e0, 16 bytes, complete-object destructor, inline, placed by class name
    // BatchDestroy<eastl::vector<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>, eastl::allocator> >::~BatchDestroy(): jumps straight to the base-object destructor

    // 0x100385020, 16 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // BatchDestroy<eastl::vector<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>, eastl::allocator> >::BatchDestroy<>()
    /* eastl::vector<std::unique_ptr<graphics::GeometryBatchInstance,
   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
   eastl::allocator>::vector() */

    void eastl::vector<std::unique_ptr<graphics::GeometryBatchInstance,
                                       MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                       eastl::allocator>::
        vector(vector<std::unique_ptr<graphics::GeometryBatchInstance,
                                      MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                      eastl::allocator>* this) {
        vector(this);
    }

    // 0x100385090, 80 bytes, base-object destructor, inline, placed by class name
    // BatchDestroy<eastl::vector<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>, eastl::allocator> >::~BatchDestroy()
    /* BatchDestroy<eastl::vector<std::unique_ptr<graphics::GeometryBatchInstance,
   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
   eastl::allocator> >::~BatchDestroy() */

    void graphicutils::BatchDestroy<
        eastl::vector<std::unique_ptr<graphics::GeometryBatchInstance,
                                      MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                      eastl::allocator>>::
        ~BatchDestroy(
            BatchDestroy<
                eastl::vector<std::unique_ptr<graphics::GeometryBatchInstance,
                                              MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                              eastl::allocator>>* this) {
        BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance,
                                           MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>*
            this_00;
        char cVar1;
        BatchDestroy<
            eastl::vector<std::unique_ptr<graphics::GeometryBatchInstance,
                                          MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                          eastl::allocator>>* this_01;

        this_01 = this;
        cVar1 = this_thread::IsMainThread();
        if (cVar1 != '\0') {
            this_00 = (BatchDestroyHelper<
                       std::unique_ptr<graphics::GeometryBatchInstance,
                                       MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>*)
                          this_01->Instance();
            BatchDestroyHelper<
                std::unique_ptr<graphics::GeometryBatchInstance,
                                MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::
                OnDestroy<BatchDestroy<eastl::vector<
                    std::unique_ptr<graphics::GeometryBatchInstance,
                                    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                    eastl::allocator>>>(this_00, (BatchDestroy*)this);
        }
        ~vector();
    }

    // 0x1008167f0, 16 bytes, complete-object constructor, inline, placed by class name
    // BatchDestroy<eastl::fixed_vector<shared_ptr<graphics::TextureAtlasReference>, 1ul, true, eastl::allocator> >::BatchDestroy<>(): jumps straight to the base-object constructor

    // 0x100816810, 16 bytes, complete-object constructor, inline, placed by class name
    // BatchDestroy<eastl::vector<std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>, eastl::allocator> >::BatchDestroy<>(): jumps straight to the base-object constructor

    // 0x100816860, 16 bytes, complete-object destructor, inline, placed by class name
    // BatchDestroy<eastl::vector<std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>, eastl::allocator> >::~BatchDestroy(): jumps straight to the base-object destructor

    // 0x100816870, 16 bytes, complete-object destructor, inline, placed by class name
    // BatchDestroy<eastl::fixed_vector<shared_ptr<graphics::TextureAtlasReference>, 1ul, true, eastl::allocator> >::~BatchDestroy(): jumps straight to the base-object destructor

    // 0x10083a3d0, 16 bytes, base-object constructor, inline, placed by class name
    // BatchDestroy<eastl::fixed_vector<shared_ptr<graphics::TextureAtlasReference>, 1ul, true, eastl::allocator> >::BatchDestroy<>()
    void graphicutils::BatchDestroy<
        eastl::fixed_vector<shared_ptr<graphics::TextureAtlasReference>, 1ul, true, eastl::allocator>>::
        BatchDestroy<>(BatchDestroy<eastl::fixed_vector<shared_ptr<graphics::TextureAtlasReference>, 1ul, true,
                                                        eastl::allocator>>* this) {
        new (this) eastl::fixed_vector<shared_ptr<graphics::TextureAtlasReference>, 1ul, true, eastl::allocator>();
    }

    // 0x10083a490, 16 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // BatchDestroy<eastl::vector<std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>, eastl::allocator> >::BatchDestroy<>()
    /* eastl::vector<std::unique_ptr<graphics::BillboardBatchInstance,
   MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>,
   eastl::allocator>::vector() */

    void eastl::vector<std::unique_ptr<graphics::BillboardBatchInstance,
                                       MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>,
                       eastl::allocator>::
        vector(vector<std::unique_ptr<graphics::BillboardBatchInstance,
                                      MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>,
                      eastl::allocator>* this) {
        vector(this);
    }

    // 0x10083a5c0, 80 bytes, base-object destructor, inline, placed by class name
    // BatchDestroy<eastl::fixed_vector<shared_ptr<graphics::TextureAtlasReference>, 1ul, true, eastl::allocator> >::~BatchDestroy()
    void graphicutils::BatchDestroy<
        eastl::fixed_vector<shared_ptr<graphics::TextureAtlasReference>, 1ul, true, eastl::allocator>>::
        ~BatchDestroy(BatchDestroy<eastl::fixed_vector<shared_ptr<graphics::TextureAtlasReference>, 1ul, true,
                                                       eastl::allocator>>* this) {
        BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>* this_00;
        char cVar1;
        BatchDestroy<eastl::fixed_vector<shared_ptr<graphics::TextureAtlasReference>, 1ul, true, eastl::allocator>>*
            this_01;

        this_01 = this;
        cVar1 = this_thread::IsMainThread();
        if (cVar1 != '\0') {
            this_00 = (BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>*)this_01->Instance();
            BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::OnDestroy<BatchDestroy<
                eastl::fixed_vector<shared_ptr<graphics::TextureAtlasReference>, 1ul, true, eastl::allocator>>>(
                this_00, (BatchDestroy*)this);
        }
        ~fixed_vector();
    }

    // 0x100840ba0, 80 bytes, base-object destructor, inline, placed by class name
    // BatchDestroy<eastl::vector<std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>, eastl::allocator> >::~BatchDestroy()
    /* BatchDestroy<eastl::vector<std::unique_ptr<graphics::BillboardBatchInstance,
   MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>,
   eastl::allocator> >::~BatchDestroy() */

    void graphicutils::BatchDestroy<
        eastl::vector<std::unique_ptr<graphics::BillboardBatchInstance,
                                      MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>,
                      eastl::allocator>>::
        ~BatchDestroy(
            BatchDestroy<
                eastl::vector<std::unique_ptr<graphics::BillboardBatchInstance,
                                              MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>,
                              eastl::allocator>>* this) {
        BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance,
                                           MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>*
            this_00;
        char cVar1;
        BatchDestroy<
            eastl::vector<std::unique_ptr<graphics::BillboardBatchInstance,
                                          MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>,
                          eastl::allocator>>* this_01;

        this_01 = this;
        cVar1 = this_thread::IsMainThread();
        if (cVar1 != '\0') {
            this_00 = (BatchDestroyHelper<
                       std::unique_ptr<graphics::BillboardBatchInstance,
                                       MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>*)
                          this_01->Instance();
            BatchDestroyHelper<
                std::unique_ptr<graphics::BillboardBatchInstance,
                                MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::
                OnDestroy<BatchDestroy<eastl::vector<
                    std::unique_ptr<graphics::BillboardBatchInstance,
                                    MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>,
                    eastl::allocator>>>(this_00, (BatchDestroy*)this);
        }
        ~vector();
    }

} // namespace jag::graphicutils

namespace jag::oldscape {
    // 0x1001a6370, 16 bytes, inline, placed by debug map only (low confidence)
    // PacketJ<Array<unsigned char, BucketAllocatorEASTL> >::PacketT(unsigned long)
    void PacketJ<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(
        PacketJ<Array<unsigned char, BucketAllocatorEASTL>>* this, ulong param_1) {
        new (this) PacketT<Array<unsigned char, BucketAllocatorEASTL>>(param_1);
    }

    // 0x1001a6380, 16 bytes, inline, placed by debug map only (low confidence)
    // PacketJ<Array<unsigned char, BucketAllocatorEASTL> >::PacketT(unsigned long)
    /* PacketT<Array<unsigned char, BucketAllocatorEASTL> >::PacketT(unsigned long) */

    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, ulong param_1) {
        PacketT(this, param_1);
    }

} // namespace jag::oldscape
