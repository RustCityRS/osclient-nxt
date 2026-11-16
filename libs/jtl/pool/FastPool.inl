// libs/jtl/pool/FastPool.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x1000553c0
    long FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 64 + lVar3;
    }

    // 0x1000555a0
    MakeSharedPoolRefCounter<oldscape::DBTableIndex, MakeSharedPool<oldscape::DBTableIndex, 64>>::
        MakeSharedPoolRefCounter(void* arg1, oldscape::DBTableIndex* dbTableIndex)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7c30 + 16;
        *(void**)(this + 16) = arg1;
        *(DBTableIndex**)(this + 24) = dbTableIndex;
    }

    // 0x1000555e0
    void MakeSharedPoolRefCounter<oldscape::DBTableIndex, MakeSharedPool<oldscape::DBTableIndex, 64>>::DeleteData() {
        if (*(DBTableIndex**)(this + 24) != nullptr) {
            (*(DBTableIndex**)(this + 24))->~DBTableIndex();
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x100055610
    void MakeSharedPoolRefCounter<oldscape::DBTableIndex, MakeSharedPool<oldscape::DBTableIndex, 64>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<oldscape::DBTableIndex, 64>::deallocate(arg1);
    }

    // 0x100055750
    void FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData* refCounterAndData) {
        if (is_owner(refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) + ((long)refCounterAndData - *(long*)this >> 3)));
    }

    // 0x1000557a0
    void FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x10019f640
    void FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 << 6, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x10019fb70
    long FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 64 + lVar3;
    }

    // 0x10019fdc0
    void FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, (RefCounterAndData*)refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) + ((long)refCounterAndData - *(long*)this >> 3)));
    }

    // 0x10019fe10
    void FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1001e5400
    void
    FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(arg1 * 12640, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset(this);
    }

    // 0x1001e59c0
    long FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData,
                  unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 12640 + lVar3;
    }

    // 0x1001e6c70
    void FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData,
                  unsigned long>::deallocate(const MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel,
                                                                  64>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 5) * 6864990832494440728));
    }

    // 0x1001e6cd0
    void FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData,
                  unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1001ee220
    void FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(arg1 * 240, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1001ee560
    long FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 240 + lVar3;
    }

    // 0x1001ee790
    void FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData* refCounterAndData) {
        if (is_owner(refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 4) * 8608480567731124088));
    }

    // 0x1001ee7f0
    void FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100255230
    void
    FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                   unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 << 6, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100339040
    void FastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData,
                  unsigned long>::resize(unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 232, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100388750
    void FastPool<graphics::GeometryBatchInstance, unsigned long>::resize(unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(arg1 * 896, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100388a80
    void FastPool<graphics::GeometryBatchInstance, unsigned long>::deallocate(
        const graphics::GeometryBatchInstance* geometryBatchInstance) {
        if (is_owner(this, geometryBatchInstance) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)geometryBatchInstance - *(long*)this >> 7) * 7905747460161236408));
    }

    // 0x100388ae0
    void FastPool<graphics::GeometryBatchInstance, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x10038cd80
    long FastPool<graphics::GeometryBatchInstance, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 896 + lVar3;
    }

    // 0x1003e2e00
    long FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 704 + lVar3;
    }

    // 0x1003e3180
    void FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 6) * 8384883669867978008));
    }

    // 0x1003e31e0
    void FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1003e3da0
    void FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 120, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1003e4110
    long FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 120 + lVar3;
    }

    // 0x1003e4ed0
    void FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((unsigned long)((long)refCounterAndData - *(long*)this) >> 3) *
                                               8608480567731124088));
    }

    // 0x1003e4f30
    void FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100403500
    long FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 976 + lVar3;
    }

    // 0x1004038b0
    void FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<graphics::Model, 3072>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 4) * 9072169216578468008));
    }

    // 0x100403910
    void
    FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100406670
    void FastPool<SpotAnimation, unsigned long>::resize(unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(arg1 * 464, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1004069a0
    void FastPool<SpotAnimation, unsigned long>::deallocate(const SpotAnimation* spotAnimation) {
        if (is_owner(this, spotAnimation) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)spotAnimation - *(long*)this >> 4) * -6360946232313638488));
    }

    // 0x100406a00
    void FastPool<SpotAnimation, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x10040a3b0
    long FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 1664 + lVar3;
    }

    // 0x10040a700
    void FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 7) * 8513881880173639208));
    }

    // 0x10040a760
    void FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x10041f340
    long FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 912 + lVar3;
    }

    // 0x10041f6f0
    void FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::Location, 256>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 4) * 1294508356049793096));
    }

    // 0x10041f750
    void
    FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100421160
    void FastPool<game::EnvironmentLoader, unsigned long>::resize(unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 56, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100421490
    void
    FastPool<game::EnvironmentLoader, unsigned long>::deallocate(const game::EnvironmentLoader* environmentLoader) {
        if (is_owner(this, environmentLoader) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((unsigned long)((long)environmentLoader - *(long*)this) >> 3) *
                                               7905747460161236408));
    }

    // 0x1004214f0
    void FastPool<game::EnvironmentLoader, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100421ab0
    void FastPool<game::Terrain, unsigned long>::resize(unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(arg1 * 1696, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100421de0
    void FastPool<game::Terrain, unsigned long>::deallocate(const game::Terrain* terrain) {
        if (is_owner(this, terrain) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this,
                   *(unsigned long*)(*(long*)(this + 16) + ((long)terrain - *(long*)this >> 5) * 1044155324926955752));
    }

    // 0x100421e40
    void FastPool<game::Terrain, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100422090
    long FastPool<game::EnvironmentLoader, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 56 + lVar3;
    }

    // 0x100422300
    long FastPool<game::Terrain, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 1696 + lVar3;
    }

    // 0x100422d10
    long FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 496 + lVar3;
    }

    // 0x100423060
    void FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::LightSource, 1024>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 4) * 8925843906633654008));
    }

    // 0x1004230c0
    void FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100425290
    void FastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                           unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(arg1 * 4464, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100435070
    void
    FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(arg1 * 496, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100437a60
    void FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                 unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(arg1 * 912, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100438570
    void FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 152, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100438910
    long FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 152 + lVar3;
    }

    // 0x1004396a0
    void FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData* refCounterAndData) {
        if (is_owner(refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((unsigned long)((long)refCounterAndData - *(long*)this) >> 3) *
                                               3883525068149379288));
    }

    // 0x100439700
    void FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x10044ebc0
    void
    FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                   unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(arg1 * 224, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1004514e0
    void FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 9872, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100451a40
    long FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 9872 + lVar3;
    }

    // 0x100452970
    void FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 4) * 4006262084079546056));
    }

    // 0x1004529d0
    void FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100454de0
    void FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(arg1 * 704, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100456140
    void FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                 unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(arg1 * 1280, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100456490
    long FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 1280 + lVar3;
    }

    // 0x100456670
    void FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::MapSquare, 32>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 8) * 7378697629483820648));
    }

    // 0x1004566d0
    void
    FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x10045c420
    void FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(arg1 * 688, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x10045d020
    void FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(arg1 * 368, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x10045d360
    long FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 368 + lVar3;
    }

    // 0x10045d540
    void FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData* refCounterAndData) {
        if (is_owner(refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 4) * -7218291159277650632));
    }

    // 0x10045d5a0
    void FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100487020
    void FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                 unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(arg1 * 368, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100487360
    long FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 368 + lVar3;
    }

    // 0x100487510
    void FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, (RefCounterAndData*)refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 4) * -7218291159277650632));
    }

    // 0x100487570
    void
    FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x10049b290
    void FastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                   unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 9728, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x10049cc70
    void FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 << 6, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x10049cfe0
    long FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 64 + lVar3;
    }

    // 0x10049d1d0
    void FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData* refCounterAndData) {
        if (is_owner(refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) + ((long)refCounterAndData - *(long*)this >> 3)));
    }

    // 0x10049d220
    void FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x10049de70
    long FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 224 + lVar3;
    }

    // 0x10049e0c0
    void FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData* refCounterAndData) {
        if (is_owner(refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 5) * 7905747460161236408));
    }

    // 0x10049e120
    void FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1004ca880
    void
    FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                               unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 112, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1004cbb70
    void FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                 unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 584, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1004d7e90
    void FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                 unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 << 7, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1004d91a0
    long FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 128 + lVar3;
    }

    // 0x1004d9400
    void FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::VarType, 5504>::RefCounterAndData* refCounterAndData) {
        if (is_owner(refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) + ((long)refCounterAndData - *(long*)this >> 4)));
    }

    // 0x1004d9450
    void
    FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1004e3ac0
    void FastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 176, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1004e68c0
    long FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 232 + lVar3;
    }

    // 0x1004e6c90
    void FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<graphics::Animation, 512>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((unsigned long)((long)refCounterAndData - *(long*)this) >> 3) *
                                               -6360946232313638488));
    }

    // 0x1004e6cf0
    void FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1004eb700
    void FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                               unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 1872, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1004eba50
    long FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 1872 + lVar3;
    }

    // 0x1004ecdd0
    void FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::SeqType, 96>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 4) * 9144539797223538408));
    }

    // 0x1004ece30
    void FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1004f07a0
    long FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 168 + lVar3;
    }

    // 0x1004f0b60
    void FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((unsigned long)((long)refCounterAndData - *(long*)this) >> 3) *
                                               8784163844623596008));
    }

    // 0x1004f0bc0
    void FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1004f1000
    long FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 184 + lVar3;
    }

    // 0x1004f13c0
    void FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((unsigned long)((long)refCounterAndData - *(long*)this) >> 3) *
                                               -7218291159277650632));
    }

    // 0x1004f1420
    void FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1004f8c70
    void FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                               unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 1040, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1004f9110
    long FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 1040 + lVar3;
    }

    // 0x1004f9350
    void FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::ObjType, 96>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 4) * 9081474005518548488));
    }

    // 0x1004f93b0
    void FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1004ffd30
    void
    FastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                  unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 136, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x10050c730
    void FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 1176, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x10050fb20
    long FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 1176 + lVar3;
    }

    // 0x10050fd00
    void FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::NPCType, 216>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((unsigned long)((long)refCounterAndData - *(long*)this) >> 3) *
                                               -6650866910929294120));
    }

    // 0x10050fd60
    void
    FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x10051ae50
    void FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 1064, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x10051b5c0
    long FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 1064 + lVar3;
    }

    // 0x10051b800
    void FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::LocType, 256>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((unsigned long)((long)refCounterAndData - *(long*)this) >> 3) *
                                               -7350958164711325080));
    }

    // 0x10051b860
    void
    FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x10051f4a0
    long FastPool<game::MapElementType::Polygon, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 144 + lVar3;
    }

    // 0x10052af00
    void FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 136, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x10052b270
    long FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 136 + lVar3;
    }

    // 0x10052c120
    void FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData* refCounterAndData) {
        if (is_owner(refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((unsigned long)((long)refCounterAndData - *(long*)this) >> 3) *
                                               -8680820740569200760));
    }

    // 0x10052c180
    void FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x10053ef80
    void FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 144, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x10053f310
    long FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 144 + lVar3;
    }

    // 0x10053f5a0
    void FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<ui::Interface, 128>::RefCounterAndData* refCounterAndData) {
        if (is_owner(refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 4) * 8198552921648689608));
    }

    // 0x10053f600
    void
    FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x10055fc80
    void
    FastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                               unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 << 6, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100572920
    void FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                  unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 144, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100572cf0
    long FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 144 + lVar3;
    }

    // 0x100573ae0
    void FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::ParamType, 640>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, (Polygon*)refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 4) * 8198552921648689608));
    }

    // 0x100573b40
    void
    FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100578250
    void FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                  unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 144, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1005789f0
    long FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 144 + lVar3;
    }

    // 0x100579790
    void FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::DBRowType, 128>::RefCounterAndData* refCounterAndData) {
        if (is_owner(refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 4) * 8198552921648689608));
    }

    // 0x1005797f0
    void
    FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x10057dd20
    void FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                  unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 136, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x10057e100
    long FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 136 + lVar3;
    }

    // 0x10057ee70
    void FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::DBTableType, 4>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, (RefCounterAndData*)refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((unsigned long)((long)refCounterAndData - *(long*)this) >> 3) *
                                               -8680820740569200760));
    }

    // 0x10057eed0
    void
    FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100583410
    void FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                               unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 152, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1005837e0
    long FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 152 + lVar3;
    }

    // 0x100584550
    void FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::InvType, 32>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, (RefCounterAndData*)refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((unsigned long)((long)refCounterAndData - *(long*)this) >> 3) *
                                               3883525068149379288));
    }

    // 0x1005845b0
    void FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100588700
    long FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 112 + lVar3;
    }

    // 0x1005888e0
    void FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData* refCounterAndData) {
        if (is_owner(refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 4) * 7905747460161236408));
    }

    // 0x100588940
    void
    FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x10058ce90
    void FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                               unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 288, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x10058d280
    long FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 288 + lVar3;
    }

    // 0x10058e090
    void FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::BASType, 96>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 5) * 8198552921648689608));
    }

    // 0x10058e0f0
    void FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100592600
    void FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 104, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1005929b0
    long FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 104 + lVar3;
    }

    // 0x100593730
    void FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData* refCounterAndData) {
        if (is_owner(refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((unsigned long)((long)refCounterAndData - *(long*)this) >> 3) *
                                               8513881880173639208));
    }

    // 0x100593790
    void FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100597cc0
    void FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 136, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100598070
    long FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 136 + lVar3;
    }

    // 0x100598de0
    void FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData* refCounterAndData) {
        if (is_owner(refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((unsigned long)((long)refCounterAndData - *(long*)this) >> 3) *
                                               -8680820740569200760));
    }

    // 0x100598e40
    void FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x10059d440
    void FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                   unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 216, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x10059d820
    long FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 216 + lVar3;
    }

    // 0x10059da50
    void FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((unsigned long)((long)refCounterAndData - *(long*)this) >> 3) *
                                               2732850973882896536));
    }

    // 0x10059dab0
    void
    FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1005a2490
    void FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                   unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 152, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1005a2840
    long FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 152 + lVar3;
    }

    // 0x1005a35c0
    void FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData* refCounterAndData) {
        if (is_owner(refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((unsigned long)((long)refCounterAndData - *(long*)this) >> 3) *
                                               3883525068149379288));
    }

    // 0x1005a3620
    void
    FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1005a7a60
    void FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                               unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 296, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1005a7e80
    long FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 296 + lVar3;
    }

    // 0x1005a8dc0
    void FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::IDKType, 32>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((unsigned long)((long)refCounterAndData - *(long*)this) >> 3) *
                                               -6481288458330383000));
    }

    // 0x1005a8e20
    void FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1005ad3f0
    void
    FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                  unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 384, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1005adb00
    void FastPool<game::MapElementType::Polygon, unsigned long>::resize(unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 144, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1005ade10
    void
    FastPool<game::MapElementType::Polygon, unsigned long>::deallocate(const game::MapElementType::Polygon* polygon) {
        if (is_owner(polygon) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this,
                   *(unsigned long*)(*(long*)(this + 16) + ((long)polygon - *(long*)this >> 4) * 8198552921648689608));
    }

    // 0x1005ade70
    void FastPool<game::MapElementType::Polygon, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1005ae100
    long FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 384 + lVar3;
    }

    // 0x1005af020
    void FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::MapElementType, 512>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 7) * 6148914691236517208));
    }

    // 0x1005af080
    void FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1005b3c80
    void FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                               unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 104, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1005b4030
    long FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 104 + lVar3;
    }

    // 0x1005b4d70
    void FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::MSIType, 32>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, (RefCounterAndData*)refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((unsigned long)((long)refCounterAndData - *(long*)this) >> 3) *
                                               8513881880173639208));
    }

    // 0x1005b4dd0
    void FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1005b96b0
    void FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                  unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 376, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1005b9d60
    long FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 376 + lVar3;
    }

    // 0x1005bad20
    void FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::QuestType, 128>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((unsigned long)((long)refCounterAndData - *(long*)this) >> 3) *
                                               -8242162245700012424));
    }

    // 0x1005bad80
    void
    FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1005bf2a0
    void
    FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                               unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 152, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1005bf690
    long FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 152 + lVar3;
    }

    // 0x1005c0440
    void FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData* refCounterAndData) {
        if (is_owner(refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((unsigned long)((long)refCounterAndData - *(long*)this) >> 3) *
                                               3883525068149379288));
    }

    // 0x1005c04a0
    void
    FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1005c49d0
    void FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                 unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 144, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1005c4d80
    long FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 144 + lVar3;
    }

    // 0x1005c5af0
    void FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::LightType, 32>::RefCounterAndData* refCounterAndData) {
        if (is_owner(refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 4) * 8198552921648689608));
    }

    // 0x1005c5b50
    void
    FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1005ca160
    void FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                  unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 136, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1005ca530
    long FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 136 + lVar3;
    }

    // 0x1005cb290
    void FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData* refCounterAndData) {
        if (is_owner(refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((unsigned long)((long)refCounterAndData - *(long*)this) >> 3) *
                                               -8680820740569200760));
    }

    // 0x1005cb2f0
    void
    FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1005cfb50
    long FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 584 + lVar3;
    }

    // 0x1005cfd30
    void FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::WaterType, 16>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((unsigned long)((long)refCounterAndData - *(long*)this) >> 3) *
                                               -1010780497189564472));
    }

    // 0x1005cfd90
    void
    FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1005d4290
    void FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                  unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 96, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1005d4640
    long FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 96 + lVar3;
    }

    // 0x1005d53a0
    void FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::CursorType, 64>::RefCounterAndData* refCounterAndData) {
        if (is_owner(refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 5) * 6148914691236517208));
    }

    // 0x1005d5400
    void
    FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1005d9850
    void
    FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                  unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 240, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1005d9ba0
    long FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 240 + lVar3;
    }

    // 0x1005da990
    void FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, (RefCounterAndData*)refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 4) * 8608480567731124088));
    }

    // 0x1005da9f0
    void FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1005df170
    void FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                 unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 312, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1005df8e0
    long FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 312 + lVar3;
    }

    // 0x1005e0cd0
    void FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::EnumType, 128>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((unsigned long)((long)refCounterAndData - *(long*)this) >> 3) *
                                               8986875317961063608));
    }

    // 0x1005e0d30
    void
    FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1005e5500
    void
    FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                  unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 224, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1005e58f0
    long FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 224 + lVar3;
    }

    // 0x1005e66f0
    void FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, (RefCounterAndData*)refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 5) * 7905747460161236408));
    }

    // 0x1005e6750
    void FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1005eb230
    void
    FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                               unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 88, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1005eb5e0
    long FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 88 + lVar3;
    }

    // 0x1005ec340
    void FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::StructType, 1024>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((unsigned long)((long)refCounterAndData - *(long*)this) >> 3) *
                                               8384883669867978008));
    }

    // 0x1005ec3a0
    void
    FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1005f08c0
    void
    FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                   unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 728, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1005f1090
    long FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 728 + lVar3;
    }

    // 0x1005f2290
    void FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::AchievementType, 256>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((unsigned long)((long)refCounterAndData - *(long*)this) >> 3) *
                                               9122016300186042008));
    }

    // 0x1005f22f0
    void FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100634c50
    void FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(arg1 << 7, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100634f90
    long
    FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 128 + lVar3;
    }

    // 0x100635d30
    void
    FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, (RefCounterAndData*)refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) + ((long)refCounterAndData - *(long*)this >> 4)));
    }

    // 0x100635d80
    void
    FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100638310
    void FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 << 7, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1006386f0
    long FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 128 + lVar3;
    }

    // 0x1006394d0
    void FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData* refCounterAndData) {
        if (is_owner(refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) + ((long)refCounterAndData - *(long*)this >> 4)));
    }

    // 0x100639520
    void FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100639a50
    void FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(arg1 * 12704, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100639e10
    long FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 12704 + lVar3;
    }

    // 0x10063ac40
    void FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 5) * 1486891209971550760));
    }

    // 0x10063aca0
    void FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x10063c2e0
    void FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(arg1 * 144, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x10063c670
    long FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 144 + lVar3;
    }

    // 0x10063d400
    void FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData* refCounterAndData) {
        if (is_owner(refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 4) * 8198552921648689608));
    }

    // 0x10063d460
    void FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x10063e960
    void FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 112, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x10063ed00
    long FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 112 + lVar3;
    }

    // 0x10063fa50
    void FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, (RefCounterAndData*)refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 4) * 7905747460161236408));
    }

    // 0x10063fab0
    void FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100646180
    void FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 40, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1006464a0
    long FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 40 + lVar3;
    }

    // 0x100647230
    void FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData* refCounterAndData) {
        if (is_owner(refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((unsigned long)((long)refCounterAndData - *(long*)this) >> 3) *
                                               7378697629483820648));
    }

    // 0x100647290
    void FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100648120
    void FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 48, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100648f50
    long FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 48 + lVar3;
    }

    // 0x100649130
    void FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData* refCounterAndData) {
        if (is_owner(refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 4) * 6148914691236517208));
    }

    // 0x100649190
    void FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100650810
    long FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 48 + lVar3;
    }

    // 0x100650b30
    void FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, (RefCounterAndData*)refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 4) * 6148914691236517208));
    }

    // 0x100650b90
    void FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100652930
    long FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 688 + lVar3;
    }

    // 0x100652b10
    void FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 4) * 1715976192903214104));
    }

    // 0x100652b70
    void FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1006534f0
    void FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 << 7, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100653970
    long
    FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 128 + lVar3;
    }

    // 0x100654880
    void
    FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData* refCounterAndData) {
        if (is_owner(refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) + ((long)refCounterAndData - *(long*)this >> 4)));
    }

    // 0x1006548d0
    void
    FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x10065c7a0
    long FastPool<graphics::AnimationParameters, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 192 + lVar3;
    }

    // 0x100661ab0
    void FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 48, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x10066af90
    void FastPool<audio::SoundInstance, int>::resize(int arg1, int arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((0 < arg1) && (*(int*)(this + 28) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if ((unsigned int)arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc((long)arg1 * 192, (long)arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = (long)arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)4) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)4);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(int*)(this + 28) = arg1;
        }
        Reset();
    }

    // 0x10066eda0
    void FastPool<audio::SoundInstance, int>::Destroy(audio::SoundInstance* soundInstance) {
        if (soundInstance != nullptr) {
            if (is_owner(soundInstance) == '\0') {
                LogAssert("is_owner(entity)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          42, nullptr);
            }
            std::destroy_at(soundInstance);
            deallocate(this, soundInstance);
        }
    }

    // 0x10066ee30
    void FastPool<audio::SoundInstance, int>::deallocate(const audio::SoundInstance* soundInstance) {
        if (is_owner(soundInstance) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this,
                   *(int*)(*(long*)(this + 16) + ((long)soundInstance - *(long*)this >> 6) * -6148914691236517204));
    }

    // 0x10066ee90
    void FastPool<audio::SoundInstance, int>::deallocate(int arg1) {
        if ((arg1 < 0) || (*(int*)(this + 28) <= arg1)) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(int*)(this + 24) < 1) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar2 = *(long*)(this + 8);
        int iVar1 = *(int*)(lVar2 + (long)arg1 * 4);
        *(uint32_t*)(*(long*)(this + 16) + (long)*(int*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4) * 4) =
            *(uint32_t*)(*(long*)(this + 16) + (long)iVar1 * 4);
        *(uint32_t*)(lVar2 + (long)arg1 * 4) = *(uint32_t*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4);
        *(int*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) - 1;
    }

    // 0x10066faa0
    long FastPool<audio::SoundInstance, int>::allocate() {
        int iVar1 = *(int*)(this + 24);
        if (*(int*)(this + 28) <= iVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar3 = (long)*(int*)(*(long*)(this + 8) + (long)iVar1 * 4);
        long lVar2 = *(long*)this;
        *(int*)(*(long*)(this + 16) + lVar3 * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + 1;
        return lVar3 * 192 + lVar2;
    }

    // 0x100671640
    void FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 3816, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100671990
    long FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 3816 + lVar3;
    }

    // 0x100671b70
    void FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((unsigned long)((long)refCounterAndData - *(long*)this) >> 3) *
                                               -1933620972086955096));
    }

    // 0x100671bd0
    void FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100672530
    void FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(arg1 * 192, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100672b80
    void FastPool<graphics::AnimationParameters, unsigned long>::resize(unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(arg1 * 192, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100672ec0
    void FastPool<graphics::AnimationParameters, unsigned long>::deallocate(
        const graphics::AnimationParameters* animationParameters) {
        if (is_owner(animationParameters) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)animationParameters - *(long*)this >> 6) * 6148914691236517208));
    }

    // 0x100672f20
    void FastPool<graphics::AnimationParameters, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100673120
    long FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 192 + lVar3;
    }

    // 0x100673330
    void FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, (AnimationParameters*)refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 6) * 6148914691236517208));
    }

    // 0x100673390
    void FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100682c60
    void FastPool<ui::ConsoleSnow::SnowFlake, int>::deallocate(const ui::ConsoleSnow::SnowFlake* snowFlake) {
        if (is_owner(snowFlake) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(int*)(*(long*)(this + 16) + ((long)snowFlake - *(long*)this >> 3)));
    }

    // 0x1006b3a20
    void FastPool<ui::ConsoleSnow::SnowFlake, int>::resize(int arg1, int arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((0 < arg1) && (*(int*)(this + 28) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if ((unsigned int)arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc((long)arg1 << 5, (long)arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = (long)arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)4) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)4);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(int*)(this + 28) = arg1;
        }
        Reset(this);
    }

    // 0x1006b3be0
    void FastPool<ui::ConsoleSnow::SnowFlake, int>::deallocate(int arg1) {
        if ((arg1 < 0) || (*(int*)(this + 28) <= arg1)) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(int*)(this + 24) < 1) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar2 = *(long*)(this + 8);
        int iVar1 = *(int*)(lVar2 + (long)arg1 * 4);
        *(uint32_t*)(*(long*)(this + 16) + (long)*(int*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4) * 4) =
            *(uint32_t*)(*(long*)(this + 16) + (long)iVar1 * 4);
        *(uint32_t*)(lVar2 + (long)arg1 * 4) = *(uint32_t*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4);
        *(int*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) - 1;
    }

    // 0x1006b3c80
    long FastPool<ui::ConsoleSnow::SnowFlake, int>::allocate() {
        int iVar1 = *(int*)(this + 24);
        if (*(int*)(this + 28) <= iVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar3 = (long)*(int*)(*(long*)(this + 8) + (long)iVar1 * 4);
        long lVar2 = *(long*)this;
        *(int*)(*(long*)(this + 16) + lVar3 * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + 1;
        return lVar3 * 32 + lVar2;
    }

    // 0x1006c52e0
    void FastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                              unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 1032, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1006c6da0
    void FastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                            unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 584, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1006c7f40
    void FastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 1568, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1006d2120
    void FastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                              unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 776, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1006d3260
    void FastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                 unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 968, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1006d4560
    void FastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                          unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 1440, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1006d78e0
    void FastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 520, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1006d8a70
    void FastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 648, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1006daa30
    void FastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                            unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 864, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1007a36c0
    void FastPool<graphics::WaterPatch_DE, int>::resize(int arg1, int arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((0 < arg1) && (*(int*)(this + 28) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if ((unsigned int)arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc((long)arg1 * 192, (long)arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = (long)arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)4) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)4);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(int*)(this + 28) = arg1;
        }
        Reset();
    }

    // 0x1007c5e00
    long FastPool<graphics::TerrainPatch_DE, int>::allocate() {
        int iVar1 = *(int*)(this + 24);
        if (*(int*)(this + 28) <= iVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar3 = (long)*(int*)(*(long*)(this + 8) + (long)iVar1 * 4);
        long lVar2 = *(long*)this;
        *(int*)(*(long*)(this + 16) + lVar3 * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + 1;
        return lVar3 * 544 + lVar2;
    }

    // 0x1007c64c0
    void FastPool<graphics::TerrainPatch_DE, int>::Destroy(graphics::TerrainPatch_DE* terrainPatch_DE) {
        if (terrainPatch_DE != nullptr) {
            if (is_owner(this, terrainPatch_DE) == '\0') {
                LogAssert("is_owner(entity)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          42, nullptr);
            }
            std::destroy_at(terrainPatch_DE);
            deallocate(this, terrainPatch_DE);
        }
    }

    // 0x1007c6520
    void FastPool<graphics::TerrainPatch_DE, int>::deallocate(const graphics::TerrainPatch_DE* terrainPatch_DE) {
        if (is_owner(this, terrainPatch_DE) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this,
                   *(int*)(*(long*)(this + 16) + ((long)terrainPatch_DE - *(long*)this >> 5) * -4340410370284600380));
    }

    // 0x1007c6580
    void FastPool<graphics::TerrainPatch_DE, int>::deallocate(int arg1) {
        if ((arg1 < 0) || (*(int*)(this + 28) <= arg1)) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(int*)(this + 24) < 1) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar2 = *(long*)(this + 8);
        int iVar1 = *(int*)(lVar2 + (long)arg1 * 4);
        *(uint32_t*)(*(long*)(this + 16) + (long)*(int*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4) * 4) =
            *(uint32_t*)(*(long*)(this + 16) + (long)iVar1 * 4);
        *(uint32_t*)(lVar2 + (long)arg1 * 4) = *(uint32_t*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4);
        *(int*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) - 1;
    }

    // 0x1007c6ca0
    void FastPool<graphics::TerrainPatch_DE, int>::resize(int arg1, int arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((0 < arg1) && (*(int*)(this + 28) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if ((unsigned int)arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc((long)arg1 * 544, (long)arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = (long)arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)4) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)4);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(int*)(this + 28) = arg1;
        }
        Reset();
    }

    // 0x1007c7d20
    void
    FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                 unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(arg1 * 1664, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1007c89d0
    long FastPool<graphics::WaterPatch_DE, int>::allocate() {
        int iVar1 = *(int*)(this + 24);
        if (*(int*)(this + 28) <= iVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar3 = (long)*(int*)(*(long*)(this + 8) + (long)iVar1 * 4);
        long lVar2 = *(long*)this;
        *(int*)(*(long*)(this + 16) + lVar3 * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + 1;
        return lVar3 * 192 + lVar2;
    }

    // 0x1007c8c00
    void FastPool<graphics::WaterPatch_DE, int>::Destroy(graphics::WaterPatch_DE* waterPatch_DE) {
        if (waterPatch_DE != nullptr) {
            if (is_owner(this, (SoundInstance*)waterPatch_DE) == '\0') {
                LogAssert("is_owner(entity)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          42, nullptr);
            }
            std::destroy_at(waterPatch_DE);
            deallocate(this, waterPatch_DE);
        }
    }

    // 0x1007c8c60
    void FastPool<graphics::WaterPatch_DE, int>::deallocate(const graphics::WaterPatch_DE* waterPatch_DE) {
        if (is_owner(this, (SoundInstance*)waterPatch_DE) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this,
                   *(int*)(*(long*)(this + 16) + ((long)waterPatch_DE - *(long*)this >> 6) * -6148914691236517204));
    }

    // 0x1007c8cc0
    void FastPool<graphics::WaterPatch_DE, int>::deallocate(int arg1) {
        if ((arg1 < 0) || (*(int*)(this + 28) <= arg1)) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(int*)(this + 24) < 1) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar2 = *(long*)(this + 8);
        int iVar1 = *(int*)(lVar2 + (long)arg1 * 4);
        *(uint32_t*)(*(long*)(this + 16) + (long)*(int*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4) * 4) =
            *(uint32_t*)(*(long*)(this + 16) + (long)iVar1 * 4);
        *(uint32_t*)(lVar2 + (long)arg1 * 4) = *(uint32_t*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4);
        *(int*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) - 1;
    }

    // 0x1007ea100
    void FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(arg1 << 8, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1007f53e0
    void FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(arg1 * 42976, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1007f6e10
    long FastPool<graphics::ParticleSystem_DE, int>::allocate() {
        int iVar1 = *(int*)(this + 24);
        if (*(int*)(this + 28) <= iVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar3 = (long)*(int*)(*(long*)(this + 8) + (long)iVar1 * 4);
        long lVar2 = *(long*)this;
        *(int*)(*(long*)(this + 16) + lVar3 * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + 1;
        return lVar3 * 144 + lVar2;
    }

    // 0x1007f7060
    void FastPool<graphics::ParticleSystem_DE, int>::Destroy(graphics::ParticleSystem_DE* particleSystem_DE) {
        if (particleSystem_DE != nullptr) {
            if (is_owner(this, particleSystem_DE) == '\0') {
                LogAssert("is_owner(entity)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          42, nullptr);
            }
            std::destroy_at(particleSystem_DE);
            deallocate(this, particleSystem_DE);
        }
    }

    // 0x1007f70c0
    void FastPool<graphics::ParticleSystem_DE, int>::deallocate(const graphics::ParticleSystem_DE* particleSystem_DE) {
        if (is_owner(this, particleSystem_DE) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this,
                   *(int*)(*(long*)(this + 16) + ((long)particleSystem_DE - *(long*)this >> 4) * 4099276460824344804));
    }

    // 0x1007f7120
    void FastPool<graphics::ParticleSystem_DE, int>::deallocate(int arg1) {
        if ((arg1 < 0) || (*(int*)(this + 28) <= arg1)) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(int*)(this + 24) < 1) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar2 = *(long*)(this + 8);
        int iVar1 = *(int*)(lVar2 + (long)arg1 * 4);
        *(uint32_t*)(*(long*)(this + 16) + (long)*(int*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4) * 4) =
            *(uint32_t*)(*(long*)(this + 16) + (long)iVar1 * 4);
        *(uint32_t*)(lVar2 + (long)arg1 * 4) = *(uint32_t*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4);
        *(int*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) - 1;
    }

    // 0x1007f75f0
    long FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 42976 + lVar3;
    }

    // 0x1007f77d0
    void FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 5) * 8529730506160559608));
    }

    // 0x1007f7830
    void FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1007f7b90
    void FastPool<graphics::ParticleSystem_DE, int>::resize(int arg1, int arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((0 < arg1) && (*(int*)(this + 28) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if ((unsigned int)arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc((long)arg1 * 144, (long)arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = (long)arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)4) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)4);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(int*)(this + 28) = arg1;
        }
        Reset();
    }

    // 0x100831210
    void FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(arg1 * 2240, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1008364f0
    void FastPool<graphics::GeometryBatch_DE, int>::resize(int arg1, int arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((0 < arg1) && (*(int*)(this + 28) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if ((unsigned int)arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc((long)arg1 * 160, (long)arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = (long)arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)4) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)4);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(int*)(this + 28) = arg1;
        }
        Reset();
    }

    // 0x1008367c0
    long FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 2240 + lVar3;
    }

    // 0x100836a30
    void FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 6) * 8959847121516067928));
    }

    // 0x100836a90
    void FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100838290
    long FastPool<graphics::GeometryBatch_DE, int>::allocate() {
        int iVar1 = *(int*)(this + 24);
        if (*(int*)(this + 28) <= iVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar3 = (long)*(int*)(*(long*)(this + 8) + (long)iVar1 * 4);
        long lVar2 = *(long*)this;
        *(int*)(*(long*)(this + 16) + lVar3 * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + 1;
        return lVar3 * 160 + lVar2;
    }

    // 0x1008384a0
    void FastPool<graphics::GeometryBatch_DE, int>::Destroy(graphics::GeometryBatch_DE* geometryBatch_DE) {
        if (geometryBatch_DE != nullptr) {
            if (is_owner(this, geometryBatch_DE) == '\0') {
                LogAssert("is_owner(entity)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          42, nullptr);
            }
            std::destroy_at(geometryBatch_DE);
            deallocate(this, geometryBatch_DE);
        }
    }

    // 0x100838500
    void FastPool<graphics::GeometryBatch_DE, int>::deallocate(const graphics::GeometryBatch_DE* geometryBatch_DE) {
        if (is_owner(this, geometryBatch_DE) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this,
                   *(int*)(*(long*)(this + 16) + ((long)geometryBatch_DE - *(long*)this >> 5) * 3689348814741910324));
    }

    // 0x100838560
    void FastPool<graphics::GeometryBatch_DE, int>::deallocate(int arg1) {
        if ((arg1 < 0) || (*(int*)(this + 28) <= arg1)) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(int*)(this + 24) < 1) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar2 = *(long*)(this + 8);
        int iVar1 = *(int*)(lVar2 + (long)arg1 * 4);
        *(uint32_t*)(*(long*)(this + 16) + (long)*(int*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4) * 4) =
            *(uint32_t*)(*(long*)(this + 16) + (long)iVar1 * 4);
        *(uint32_t*)(lVar2 + (long)arg1 * 4) = *(uint32_t*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4);
        *(int*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) - 1;
    }

    // 0x1008431c0
    void FastPool<graphics::BillboardBatchInstance, unsigned long>::deallocate(
        const graphics::BillboardBatchInstance* billboardBatchInstance) {
        if (is_owner(this, billboardBatchInstance) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)billboardBatchInstance - *(long*)this >> 8) * 6148914691236517208));
    }

    // 0x100843220
    void FastPool<graphics::BillboardBatchInstance, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1008442f0
    long FastPool<graphics::BillboardBatchInstance, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 768 + lVar3;
    }

    // 0x100844d20
    void FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 112, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100845070
    long FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 112 + lVar3;
    }

    // 0x100845260
    void FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData* refCounterAndData) {
        if (is_owner(refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 4) * 7905747460161236408));
    }

    // 0x1008452c0
    void FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100845560
    long FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 256 + lVar3;
    }

    // 0x100845880
    void FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) + ((long)refCounterAndData - *(long*)this >> 5)));
    }

    // 0x1008458d0
    void FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x10084b3e0
    void FastPool<graphics::Billboard, unsigned long>::resize(unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 4) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 68, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1008734c0
    long FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 80 + lVar3;
    }

    // 0x1008738b0
    void FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 4) * 7378697629483820648));
    }

    // 0x100873910
    void FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1008813f0
    void FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(arg1 * 800, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100884ac0
    void FastPool<graphics::BillboardBatch_DE, int>::resize(int arg1, int arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((0 < arg1) && (*(int*)(this + 28) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if ((unsigned int)arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc((long)arg1 << 7, (long)arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = (long)arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)4) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)4);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(int*)(this + 28) = arg1;
        }
        Reset();
    }

    // 0x100884da0
    long FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 800 + lVar3;
    }

    // 0x100884fb0
    void FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 5) * 8854437155380584776));
    }

    // 0x100885010
    void FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100885d20
    void FastPool<graphics::BillboardBatchInstance, unsigned long>::resize(unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(arg1 * 768, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100887ae0
    long FastPool<graphics::BillboardBatch_DE, int>::allocate() {
        int iVar1 = *(int*)(this + 24);
        if (*(int*)(this + 28) <= iVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar3 = (long)*(int*)(*(long*)(this + 8) + (long)iVar1 * 4);
        long lVar2 = *(long*)this;
        *(int*)(*(long*)(this + 16) + lVar3 * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + 1;
        return lVar3 * 128 + lVar2;
    }

    // 0x100887cf0
    void FastPool<graphics::BillboardBatch_DE, int>::Destroy(graphics::BillboardBatch_DE* billboardBatch_DE) {
        if (billboardBatch_DE != nullptr) {
            if (is_owner(billboardBatch_DE) == '\0') {
                LogAssert("is_owner(entity)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          42, nullptr);
            }
            std::destroy_at(billboardBatch_DE);
            deallocate(this, billboardBatch_DE);
        }
    }

    // 0x100887d50
    void FastPool<graphics::BillboardBatch_DE, int>::deallocate(const graphics::BillboardBatch_DE* billboardBatch_DE) {
        if (is_owner(billboardBatch_DE) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(int*)(*(long*)(this + 16) + ((long)billboardBatch_DE - *(long*)this >> 5)));
    }

    // 0x100887da0
    void FastPool<graphics::BillboardBatch_DE, int>::deallocate(int arg1) {
        if ((arg1 < 0) || (*(int*)(this + 28) <= arg1)) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(int*)(this + 24) < 1) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar2 = *(long*)(this + 8);
        int iVar1 = *(int*)(lVar2 + (long)arg1 * 4);
        *(uint32_t*)(*(long*)(this + 16) + (long)*(int*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4) * 4) =
            *(uint32_t*)(*(long*)(this + 16) + (long)iVar1 * 4);
        *(uint32_t*)(lVar2 + (long)arg1 * 4) = *(uint32_t*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4);
        *(int*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) - 1;
    }

    // 0x1008d2c00
    long FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 160 + lVar3;
    }

    // 0x1008d2f80
    void FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData* refCounterAndData) {
        if (is_owner(refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 5) * 7378697629483820648));
    }

    // 0x1008d2fe0
    void FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1008d7c50
    void
    FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                  unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 336, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1008dc980
    void FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 72, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1008dccd0
    long FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 72 + lVar3;
    }

    // 0x1008dcf00
    void FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((unsigned long)((long)refCounterAndData - *(long*)this) >> 3) *
                                               8198552921648689608));
    }

    // 0x1008dcf60
    void FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1008dd310
    long FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 336 + lVar3;
    }

    // 0x1008dd520
    void FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 4) * 8784163844623596008));
    }

    // 0x1008dd580
    void FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1008f84a0
    void FastPool<graphics::GUIAnimationInstance, int>::Destroy(graphics::GUIAnimationInstance* guiAnimationInstance) {
        if (guiAnimationInstance != nullptr) {
            if (is_owner(this, guiAnimationInstance) == '\0') {
                LogAssert("is_owner(entity)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          42, nullptr);
            }
            guiAnimationInstance->~GUIAnimationInstance();
            deallocate(this, guiAnimationInstance);
        }
    }

    // 0x100907cb0
    void
    FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                  unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 13728, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100908000
    long FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 13728 + lVar3;
    }

    // 0x100908240
    void FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 5) * 9201872335137165608));
    }

    // 0x1009082a0
    void FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x10090e970
    void FastPool<graphics::GUIAnimationInstance, int>::resize(int arg1, int arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((0 < arg1) && (*(int*)(this + 28) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if ((unsigned int)arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc((long)arg1 * 368, (long)arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = (long)arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)4) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)4);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(int*)(this + 28) = arg1;
        }
        Reset();
    }

    // 0x1009103f0
    long FastPool<graphics::GUIAnimationInstance, int>::allocate() {
        int iVar1 = *(int*)(this + 24);
        if (*(int*)(this + 28) <= iVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar3 = (long)*(int*)(*(long*)(this + 8) + (long)iVar1 * 4);
        long lVar2 = *(long*)this;
        *(int*)(*(long*)(this + 16) + lVar3 * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + 1;
        return lVar3 * 368 + lVar2;
    }

    // 0x1009110d0
    void FastPool<graphics::GUIAnimationInstance, int>::deallocate(
        const graphics::GUIAnimationInstance* guiAnimationInstance) {
        if (is_owner(this, guiAnimationInstance) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(int*)(*(long*)(this + 16) +
                                 ((long)guiAnimationInstance - *(long*)this >> 4) * 5614226457215950492));
    }

    // 0x100911130
    void FastPool<graphics::GUIAnimationInstance, int>::deallocate(int arg1) {
        if ((arg1 < 0) || (*(int*)(this + 28) <= arg1)) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(int*)(this + 24) < 1) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar2 = *(long*)(this + 8);
        int iVar1 = *(int*)(lVar2 + (long)arg1 * 4);
        *(uint32_t*)(*(long*)(this + 16) + (long)*(int*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4) * 4) =
            *(uint32_t*)(*(long*)(this + 16) + (long)iVar1 * 4);
        *(uint32_t*)(lVar2 + (long)arg1 * 4) = *(uint32_t*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4);
        *(int*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) - 1;
    }

    // 0x100922880
    long FastPool<graphics::SkyBox_DE, int>::allocate() {
        int iVar1 = *(int*)(this + 24);
        if (*(int*)(this + 28) <= iVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar3 = (long)*(int*)(*(long*)(this + 8) + (long)iVar1 * 4);
        long lVar2 = *(long*)this;
        *(int*)(*(long*)(this + 16) + lVar3 * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + 1;
        return lVar3 * 128 + lVar2;
    }

    // 0x100927390
    void FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                  unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(arg1 * 784, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100928320
    void FastPool<graphics::SkyBox_DE, int>::resize(int arg1, int arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((0 < arg1) && (*(int*)(this + 28) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if ((unsigned int)arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc((long)arg1 << 7, (long)arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = (long)arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)4) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)4);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(int*)(this + 28) = arg1;
        }
        Reset();
    }

    // 0x1009288d0
    long FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 784 + lVar3;
    }

    // 0x100928b10
    void FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 4) * -1505856659078330744));
    }

    // 0x100928b70
    void
    FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100929b60
    void FastPool<graphics::SkyBox_DE, int>::Destroy(graphics::SkyBox_DE* skyBox_DE) {
        if (skyBox_DE != nullptr) {
            if (is_owner(this, (BillboardBatch_DE*)skyBox_DE) == '\0') {
                LogAssert("is_owner(entity)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          42, nullptr);
            }
            std::destroy_at(skyBox_DE);
            deallocate(this, skyBox_DE);
        }
    }

    // 0x100929bc0
    void FastPool<graphics::SkyBox_DE, int>::deallocate(const graphics::SkyBox_DE* skyBox_DE) {
        if (is_owner(this, (BillboardBatch_DE*)skyBox_DE) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(int*)(*(long*)(this + 16) + ((long)skyBox_DE - *(long*)this >> 5)));
    }

    // 0x100929c10
    void FastPool<graphics::SkyBox_DE, int>::deallocate(int arg1) {
        if ((arg1 < 0) || (*(int*)(this + 28) <= arg1)) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(int*)(this + 24) < 1) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar2 = *(long*)(this + 8);
        int iVar1 = *(int*)(lVar2 + (long)arg1 * 4);
        *(uint32_t*)(*(long*)(this + 16) + (long)*(int*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4) * 4) =
            *(uint32_t*)(*(long*)(this + 16) + (long)iVar1 * 4);
        *(uint32_t*)(lVar2 + (long)arg1 * 4) = *(uint32_t*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4);
        *(int*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) - 1;
    }

    // 0x10093f060
    long FastPool<graphics::LightProbe_DE, int>::allocate() {
        int iVar1 = *(int*)(this + 24);
        if (*(int*)(this + 28) <= iVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar3 = (long)*(int*)(*(long*)(this + 8) + (long)iVar1 * 4);
        long lVar2 = *(long*)this;
        *(int*)(*(long*)(this + 16) + lVar3 * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + 1;
        return lVar3 * 112 + lVar2;
    }

    // 0x10093f280
    void FastPool<graphics::LightProbe_DE, int>::Destroy(graphics::LightProbe_DE* lightProbe_DE) {
        if (lightProbe_DE != nullptr) {
            if (is_owner(this, lightProbe_DE) == '\0') {
                LogAssert("is_owner(entity)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          42, nullptr);
            }
            std::destroy_at(lightProbe_DE);
            deallocate(this, lightProbe_DE);
        }
    }

    // 0x10093f2e0
    void FastPool<graphics::LightProbe_DE, int>::deallocate(const graphics::LightProbe_DE* lightProbe_DE) {
        if (is_owner(this, lightProbe_DE) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this,
                   *(int*)(*(long*)(this + 16) + ((long)lightProbe_DE - *(long*)this >> 4) * -5270498306774157604));
    }

    // 0x10093f340
    void FastPool<graphics::LightProbe_DE, int>::deallocate(int arg1) {
        if ((arg1 < 0) || (*(int*)(this + 28) <= arg1)) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(int*)(this + 24) < 1) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar2 = *(long*)(this + 8);
        int iVar1 = *(int*)(lVar2 + (long)arg1 * 4);
        *(uint32_t*)(*(long*)(this + 16) + (long)*(int*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4) * 4) =
            *(uint32_t*)(*(long*)(this + 16) + (long)iVar1 * 4);
        *(uint32_t*)(lVar2 + (long)arg1 * 4) = *(uint32_t*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4);
        *(int*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) - 1;
    }

    // 0x10093f4a0
    void FastPool<graphics::LightProbe_DE, int>::resize(int arg1, int arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((0 < arg1) && (*(int*)(this + 28) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if ((unsigned int)arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc((long)arg1 * 112, (long)arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = (long)arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)4) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)4);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(int*)(this + 28) = arg1;
        }
        Reset();
    }

    // 0x10094be30
    void FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(arg1 * 160, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100967f70
    void FastPool<graphics::AnimState, unsigned long>::resize(unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 160, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100968280
    void FastPool<graphics::AnimState, unsigned long>::deallocate(const graphics::AnimState* animState) {
        if (is_owner(this, (RefCounterAndData*)animState) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(
            this, *(unsigned long*)(*(long*)(this + 16) + ((long)animState - *(long*)this >> 5) * 7378697629483820648));
    }

    // 0x1009682e0
    void FastPool<graphics::AnimState, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100968460
    long FastPool<graphics::AnimState, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 160 + lVar3;
    }

    // 0x100993d60
    void
    FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 304, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100995ca0
    void FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 168, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1009963e0
    long FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 304 + lVar3;
    }

    // 0x100996650
    void FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 4) * 3883525068149379288));
    }

    // 0x1009966b0
    void FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100996ee0
    void FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 96, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100997270
    long FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 96 + lVar3;
    }

    // 0x100997460
    void FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, (RefCounterAndData*)refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 5) * 6148914691236517208));
    }

    // 0x1009974c0
    void FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100999b50
    void
    FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                 unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 232, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x10099bcc0
    void FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 80, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x10099c300
    void FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::resize(unsigned long arg1,
                                                                                                   unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(arg1 * 976, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x10099e030
    void FastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 112, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x10099f0c0
    void FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 184, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1009a2660
    void FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 160, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x1009a29b0
    long FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 160 + lVar3;
    }

    // 0x1009a2cb0
    void FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData* refCounterAndData) {
        if (is_owner(refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)refCounterAndData - *(long*)this >> 5) * 7378697629483820648));
    }

    // 0x1009a2d10
    void FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x1009faba0
    void FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 104, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100a00fb0
    long FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 104 + lVar3;
    }

    // 0x100a011b0
    void FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData* refCounterAndData) {
        if (is_owner(refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((unsigned long)((long)refCounterAndData - *(long*)this) >> 3) *
                                               8513881880173639208));
    }

    // 0x100a01210
    void FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100b98d40
    void FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 8>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 << 6, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100b9a0f0
    void FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 2048>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 << 6, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100ba2740
    long FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 8>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 64 + lVar3;
    }

    // 0x100ba2900
    void FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 8>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<PacketT<Array<unsigned char>>, 8>::RefCounterAndData* refCounterAndData) {
        if (is_owner(refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) + ((long)refCounterAndData - *(long*)this >> 3)));
    }

    // 0x100ba2950
    void FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 8>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100ba3470
    long FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 2048>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 64 + lVar3;
    }

    // 0x100ba3630
    void FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 2048>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<PacketT<Array<unsigned char>>, 2048>::RefCounterAndData* refCounterAndData) {
        if (is_owner(refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) + ((long)refCounterAndData - *(long*)this >> 3)));
    }

    // 0x100ba3680
    void FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 2048>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100bd3ed0
    long FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 40 + lVar3;
    }

    // 0x100bd4980
    void FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::deallocate(
        const MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData* refCounterAndData) {
        if (is_owner(this, (RefCounterAndData*)refCounterAndData) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((unsigned long)((long)refCounterAndData - *(long*)this) >> 3) *
                                               7378697629483820648));
    }

    // 0x100bd49e0
    void FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::deallocate(
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100bd5c70
    void FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::Prefetch(
        unsigned long arg1, unsigned long arg2) const {
        if (arg1 != 1) {
            LogAssert("cacheLines == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      155, nullptr);
        }
        if (arg2 != 0) {
            LogAssert("offset == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      156, nullptr);
        }
        long lVar1 = *(long*)this;
        unsigned long arg1_00 = lVar1 + 63U & 18446744073709551552;
        long lVar3 = size();
        lVar3 = aligned_size(lVar3 * 40, 64);
        while (true) {
            if ((unsigned long)(lVar3 + lVar1) <= arg1_00) {
                return;
            }
            if (is_aligned<char>(arg1_00, 64) == '\0')
                break;
            arg1_00 = arg1_00 + 64;
        }
        LogAssert("is_aligned(pData, 64)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/core/memory/Utils.h", 56,
                  nullptr);
    }

    // 0x100c0b660
    void
    FastPool<render::ComputePipelineState, unsigned long>::Destroy(render::ComputePipelineState* computePipelineState) {
        if (computePipelineState != nullptr) {
            if (is_owner(this, computePipelineState) == '\0') {
                LogAssert("is_owner(entity)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          42, nullptr);
            }
            computePipelineState->~ComputePipelineState();
            deallocate(this, computePipelineState);
        }
    }

    // 0x100c0b6c0
    void FastPool<render::ComputePipelineState, unsigned long>::deallocate(
        const render::ComputePipelineState* computePipelineState) {
        if (is_owner(this, computePipelineState) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)computePipelineState - *(long*)this >> 7) * 7378697629483820648));
    }

    // 0x100c0b720
    void FastPool<render::ComputePipelineState, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100c0b870
    void
    FastPool<render::InputAssemblerState, unsigned long>::Destroy(render::InputAssemblerState* inputAssemblerState) {
        if (inputAssemblerState != nullptr) {
            if (is_owner(inputAssemblerState) == '\0') {
                LogAssert("is_owner(entity)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          42, nullptr);
            }
            inputAssemblerState->~InputAssemblerState();
            deallocate(this, inputAssemblerState);
        }
    }

    // 0x100c0b8d0
    void FastPool<render::InputAssemblerState, unsigned long>::deallocate(
        const render::InputAssemblerState* inputAssemblerState) {
        if (is_owner(inputAssemblerState) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)inputAssemblerState - *(long*)this >> 6) * 6148914691236517208));
    }

    // 0x100c0b930
    void FastPool<render::InputAssemblerState, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100c0ba00
    void
    FastPool<render::RenderPipelineState, unsigned long>::Destroy(render::RenderPipelineState* renderPipelineState) {
        if (renderPipelineState != nullptr) {
            if (is_owner(this, renderPipelineState) == '\0') {
                LogAssert("is_owner(entity)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          42, nullptr);
            }
            renderPipelineState->~RenderPipelineState();
            deallocate(this, renderPipelineState);
        }
    }

    // 0x100c0ba60
    void FastPool<render::RenderPipelineState, unsigned long>::deallocate(
        const render::RenderPipelineState* renderPipelineState) {
        if (is_owner(this, renderPipelineState) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)renderPipelineState - *(long*)this >> 4) * -8555011744329067416));
    }

    // 0x100c0bac0
    void FastPool<render::RenderPipelineState, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100c0bb90
    void FastPool<render::OutputMergerState, unsigned long>::Destroy(render::OutputMergerState* outputMergerState) {
        if (outputMergerState != nullptr) {
            if (is_owner(this, outputMergerState) == '\0') {
                LogAssert("is_owner(entity)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          42, nullptr);
            }
            outputMergerState->~OutputMergerState();
            deallocate(this, outputMergerState);
        }
    }

    // 0x100c0bbf0
    void
    FastPool<render::OutputMergerState, unsigned long>::deallocate(const render::OutputMergerState* outputMergerState) {
        if (is_owner(this, outputMergerState) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(unsigned long*)(*(long*)(this + 16) +
                                           ((long)outputMergerState - *(long*)this >> 4) * 8513881880173639208));
    }

    // 0x100c0bc50
    void FastPool<render::OutputMergerState, unsigned long>::deallocate(unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(long*)(this + 24) == 0) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar1 = *(long*)(this + 8);
        long lVar2 = *(long*)(lVar1 + arg1 * 8);
        *(uint64_t*)(*(long*)(this + 16) + *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) * 8) =
            *(uint64_t*)(*(long*)(this + 16) + lVar2 * 8);
        *(uint64_t*)(lVar1 + arg1 * 8) = *(uint64_t*)(lVar1 - 8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 - 8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) - 1;
    }

    // 0x100c34750
    void FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::resize(
        unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 40, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100c3cfb0
    void FastPool<render::InputAssemblerState, unsigned long>::resize(unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 192, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100c3d3c0
    void FastPool<render::RenderPipelineState, unsigned long>::resize(unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 1104, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100c3d7d0
    void FastPool<render::ComputePipelineState, unsigned long>::resize(unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 8) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(arg1 * 640, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100c3dbe0
    void FastPool<render::OutputMergerState, unsigned long>::resize(unsigned long arg1, unsigned long arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((arg1 != 0) && (*(unsigned long*)(this + 32) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if (arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(arg1 * 208, arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)8) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)8);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(unsigned long*)(this + 32) = arg1;
        }
        Reset();
    }

    // 0x100c42aa0
    long FastPool<render::InputAssemblerState, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 192 + lVar3;
    }

    // 0x100c42fe0
    long FastPool<render::RenderPipelineState, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 1104 + lVar3;
    }

    // 0x100c43f20
    long FastPool<render::OutputMergerState, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 208 + lVar3;
    }

    // 0x100c454b0
    long FastPool<render::ComputePipelineState, unsigned long>::allocate() {
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (*(unsigned long*)(this + 32) <= uVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        long lVar3 = *(long*)this;
        *(unsigned long*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 640 + lVar3;
    }

    // 0x100c80020
    void FastPool<game::console::Snow::SnowFlake, int>::deallocate(const game::console::Snow::SnowFlake* snowFlake) {
        if (is_owner(this, (SnowFlake*)snowFlake) == '\0') {
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      nullptr);
        }
        deallocate(this, *(int*)(*(long*)(this + 16) + ((long)snowFlake - *(long*)this >> 3)));
    }

    // 0x100c920a0
    void FastPool<game::console::Snow::SnowFlake, int>::resize(int arg1, int arg2) {
        uint8_t auVar1[16];
        uint64_t uVar2;
        unsigned long arg1_00;

        clear(this);
        if ((0 < arg1) && (*(int*)(this + 28) != arg1)) {
            safe_delete_array<float>((unsigned char**)(this + 16));
            safe_delete_array<float>((unsigned char**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(uint64_t*)this = 0;
            if ((unsigned int)arg2 < 16) {
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (arg2 < 16) {
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc((long)arg1 << 5, (long)arg2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = (long)arg1;
            *(uint64_t*)this = uVar2;
            arg1_00 = 18446744073709551615;
            if ((uint64_t)((auVar1 * (unsigned __int128)4) >> 64) == 0) {
                arg1_00 = (uint64_t)(auVar1 * (unsigned __int128)4);
            }
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 8) = uVar2;
            uVar2 = operator_new__(arg1_00);
            *(uint64_t*)(this + 16) = uVar2;
            *(int*)(this + 28) = arg1;
        }
        Reset();
    }

    // 0x100c92290
    void FastPool<game::console::Snow::SnowFlake, int>::deallocate(int arg1) {
        if ((arg1 < 0) || (*(int*)(this + 28) <= arg1)) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      nullptr);
        }
        if (*(int*)(this + 24) < 1) {
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, nullptr);
        }
        long lVar2 = *(long*)(this + 8);
        int iVar1 = *(int*)(lVar2 + (long)arg1 * 4);
        *(uint32_t*)(*(long*)(this + 16) + (long)*(int*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4) * 4) =
            *(uint32_t*)(*(long*)(this + 16) + (long)iVar1 * 4);
        *(uint32_t*)(lVar2 + (long)arg1 * 4) = *(uint32_t*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4);
        *(int*)(lVar2 - 4 + (long)*(int*)(this + 24) * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) - 1;
    }

    // 0x100c92330
    long FastPool<game::console::Snow::SnowFlake, int>::allocate() {
        int iVar1 = *(int*)(this + 24);
        if (*(int*)(this + 28) <= iVar1) {
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        long lVar3 = (long)*(int*)(*(long*)(this + 8) + (long)iVar1 * 4);
        long lVar2 = *(long*)this;
        *(int*)(*(long*)(this + 16) + lVar3 * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + 1;
        return lVar3 * 32 + lVar2;
    }

} // namespace jag
