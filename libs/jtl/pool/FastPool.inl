// libs/jtl/pool/FastPool.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x1000553c0, 96 bytes, inline, placed by class name and debug map
    // FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 64 + lVar3;
    }

    // 0x100055590, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<oldscape::DBTableIndex, MakeSharedPool<oldscape::DBTableIndex, 64> >::MakeSharedPoolRefCounter(void*, oldscape::DBTableIndex*): jumps straight to the base-object constructor

    // 0x1000555a0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<oldscape::DBTableIndex, MakeSharedPool<oldscape::DBTableIndex, 64> >::MakeSharedPoolRefCounter(void*, oldscape::DBTableIndex*)
    void jag::MakeSharedPoolRefCounter<oldscape::DBTableIndex, MakeSharedPool<oldscape::DBTableIndex, 64>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<oldscape::DBTableIndex, MakeSharedPool<oldscape::DBTableIndex, 64>>* this,
            void* param_1, DBTableIndex* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7c30 + 16;
        *(void**)(this + 16) = param_1;
        *(DBTableIndex**)(this + 24) = param_2;
    }

    // 0x1000555e0, 48 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<oldscape::DBTableIndex, MakeSharedPool<oldscape::DBTableIndex, 64> >::DeleteData()
    void jag::MakeSharedPoolRefCounter<oldscape::DBTableIndex, MakeSharedPool<oldscape::DBTableIndex, 64>>::DeleteData(
        MakeSharedPoolRefCounter<oldscape::DBTableIndex, MakeSharedPool<oldscape::DBTableIndex, 64>>* this) {
        if (*(DBTableIndex**)(this + 24) != (DBTableIndex*)0) {
            (*(DBTableIndex**)(this + 24))->~DBTableIndex();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100055610, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<oldscape::DBTableIndex, MakeSharedPool<oldscape::DBTableIndex, 64> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<oldscape::DBTableIndex, MakeSharedPool<oldscape::DBTableIndex, 64>>::DeleteSelf(
        MakeSharedPoolRefCounter<oldscape::DBTableIndex, MakeSharedPool<oldscape::DBTableIndex, 64>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<oldscape::DBTableIndex, 64>::deallocate(pvVar1);
    }

    // 0x100055750, 80 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 3)));
    }

    // 0x1000557a0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x10019f640, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                       unsigned long>::
        resize(FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                        unsigned long>* this,
               ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 << 6, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x10019fb70, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192>::RefCounterAndData, unsigned long>::allocate()
    long jag::FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                       unsigned long>::
        allocate(FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                          unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 64 + lVar3;
    }

    // 0x10019fdc0, 80 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192>::RefCounterAndData const*)
    void jag::FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                       unsigned long>::
        deallocate(FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                            unsigned long>* this,
                   RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 3)));
    }

    // 0x10019fe10, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void jag::FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                       unsigned long>::
        deallocate(FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                            unsigned long>* this,
                   ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1001e5400, 240 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void
    jag::FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>::
        resize(FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData,
                        unsigned long>* this,
               ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(param_1 * 12640, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset(this);
    }

    // 0x1001e59c0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>::allocate()
    long
    jag::FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>::
        allocate(FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData,
                          unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 12640 + lVar3;
    }

    // 0x1001e6c70, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData const*)
    void
    jag::FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>::
        deallocate(FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData,
                            unsigned long>* this,
                   RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 5) * 6864990832494440728));
    }

    // 0x1001e6cd0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void
    jag::FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>::
        deallocate(FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData,
                            unsigned long>* this,
                   ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1001ee220, 240 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(param_1 * 240, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1001ee560, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::allocate()
    long jag::FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 240 + lVar3;
    }

    // 0x1001ee790, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData const*)
    void jag::FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * 8608480567731124088));
    }

    // 0x1001ee7f0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void jag::FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100255230, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 << 6, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100339040, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData,
                       unsigned long>::
        resize(FastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData,
                        unsigned long>* this,
               ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 232, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100388750, 240 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::GeometryBatchInstance, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<graphics::GeometryBatchInstance, unsigned long>::resize(
        FastPool<graphics::GeometryBatchInstance, unsigned long>* this, ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(param_1 * 896, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100388a80, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::GeometryBatchInstance, unsigned long>::deallocate(graphics::GeometryBatchInstance const*)
    void FastPool<graphics::GeometryBatchInstance, unsigned long>::deallocate(
        FastPool<graphics::GeometryBatchInstance, unsigned long>* this, GeometryBatchInstance* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 7) * 7905747460161236408));
    }

    // 0x100388ae0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::GeometryBatchInstance, unsigned long>::deallocate(unsigned long)
    void FastPool<graphics::GeometryBatchInstance, unsigned long>::deallocate(
        FastPool<graphics::GeometryBatchInstance, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x10038cd80, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::GeometryBatchInstance, unsigned long>::allocate()
    long FastPool<graphics::GeometryBatchInstance, unsigned long>::allocate(
        FastPool<graphics::GeometryBatchInstance, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 896 + lVar3;
    }

    // 0x1003e2e00, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::allocate()
    long jag::FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 704 + lVar3;
    }

    // 0x1003e3180, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData const*)
    void jag::FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 6) * 8384883669867978008));
    }

    // 0x1003e31e0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void jag::FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1003e3da0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 120, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1003e4110, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::allocate()
    long jag::FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 120 + lVar3;
    }

    // 0x1003e4ed0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData const*)
    void jag::FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this,
                   *(ulong*)(*(long*)(this + 16) + ((ulong)((long)param_1 - *(long*)this) >> 3) * 8608480567731124088));
    }

    // 0x1003e4f30, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void jag::FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100403500, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 976 + lVar3;
    }

    // 0x1004038b0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<graphics::Model, 3072>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * 9072169216578468008));
    }

    // 0x100403910, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100406670, 240 bytes, inline, placed by __FILE__ string
    // FastPool<SpotAnimation, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<SpotAnimation, unsigned long>::resize(FastPool<SpotAnimation, unsigned long>* this, ulong param_1,
                                                        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(param_1 * 464, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1004069a0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<SpotAnimation, unsigned long>::deallocate(SpotAnimation const*)
    void FastPool<SpotAnimation, unsigned long>::deallocate(FastPool<SpotAnimation, unsigned long>* this,
                                                            SpotAnimation* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * -6360946232313638488));
    }

    // 0x100406a00, 160 bytes, inline, placed by __FILE__ string
    // FastPool<SpotAnimation, unsigned long>::deallocate(unsigned long)
    void FastPool<SpotAnimation, unsigned long>::deallocate(FastPool<SpotAnimation, unsigned long>* this,
                                                            ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x10040a3b0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 1664 + lVar3;
    }

    // 0x10040a700, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 7) * 8513881880173639208));
    }

    // 0x10040a760, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x10041f340, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 912 + lVar3;
    }

    // 0x10041f6f0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::Location, 256>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * 1294508356049793096));
    }

    // 0x10041f750, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100421160, 256 bytes, inline, placed by __FILE__ string
    // FastPool<game::EnvironmentLoader, unsigned long>::resize(unsigned long, unsigned long)
    void
    FastPool<game::EnvironmentLoader, unsigned long>::resize(FastPool<game::EnvironmentLoader, unsigned long>* this,
                                                             ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 56, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100421490, 96 bytes, inline, placed by __FILE__ string
    // FastPool<game::EnvironmentLoader, unsigned long>::deallocate(game::EnvironmentLoader const*)
    void
    FastPool<game::EnvironmentLoader, unsigned long>::deallocate(FastPool<game::EnvironmentLoader, unsigned long>* this,
                                                                 EnvironmentLoader* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this,
                   *(ulong*)(*(long*)(this + 16) + ((ulong)((long)param_1 - *(long*)this) >> 3) * 7905747460161236408));
    }

    // 0x1004214f0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<game::EnvironmentLoader, unsigned long>::deallocate(unsigned long)
    void
    FastPool<game::EnvironmentLoader, unsigned long>::deallocate(FastPool<game::EnvironmentLoader, unsigned long>* this,
                                                                 ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100421ab0, 240 bytes, inline, placed by __FILE__ string
    // FastPool<game::Terrain, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<game::Terrain, unsigned long>::resize(FastPool<game::Terrain, unsigned long>* this, ulong param_1,
                                                        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(param_1 * 1696, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100421de0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<game::Terrain, unsigned long>::deallocate(game::Terrain const*)
    void FastPool<game::Terrain, unsigned long>::deallocate(FastPool<game::Terrain, unsigned long>* this,
                                                            Terrain* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 5) * 1044155324926955752));
    }

    // 0x100421e40, 160 bytes, inline, placed by __FILE__ string
    // FastPool<game::Terrain, unsigned long>::deallocate(unsigned long)
    void FastPool<game::Terrain, unsigned long>::deallocate(FastPool<game::Terrain, unsigned long>* this,
                                                            ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100422090, 96 bytes, inline, placed by __FILE__ string
    // FastPool<game::EnvironmentLoader, unsigned long>::allocate()
    long
    FastPool<game::EnvironmentLoader, unsigned long>::allocate(FastPool<game::EnvironmentLoader, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 56 + lVar3;
    }

    // 0x100422300, 96 bytes, inline, placed by __FILE__ string
    // FastPool<game::Terrain, unsigned long>::allocate()
    long FastPool<game::Terrain, unsigned long>::allocate(FastPool<game::Terrain, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 1696 + lVar3;
    }

    // 0x100422d10, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 496 + lVar3;
    }

    // 0x100423060, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::LightSource, 1024>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * 8925843906633654008));
    }

    // 0x1004230c0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100425290, 240 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>* this, ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(param_1 * 4464, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100435070, 240 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(param_1 * 496, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100437a60, 240 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(param_1 * 912, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100438570, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 152, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100438910, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::allocate()
    long jag::FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 152 + lVar3;
    }

    // 0x1004396a0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData const*)
    void jag::FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this,
                   *(ulong*)(*(long*)(this + 16) + ((ulong)((long)param_1 - *(long*)this) >> 3) * 3883525068149379288));
    }

    // 0x100439700, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void jag::FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x10044ebc0, 240 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(param_1 * 224, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1004514e0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 9872, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100451a40, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::allocate()
    long jag::FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 9872 + lVar3;
    }

    // 0x100452970, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData const*)
    void jag::FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * 4006262084079546056));
    }

    // 0x1004529d0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void jag::FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100454de0, 240 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(param_1 * 704, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100456140, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(param_1 * 1280, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100456490, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 1280 + lVar3;
    }

    // 0x100456670, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::MapSquare, 32>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 8) * 7378697629483820648));
    }

    // 0x1004566d0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x10045c420, 240 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(param_1 * 688, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x10045d020, 240 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(param_1 * 368, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x10045d360, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>::allocate()
    long jag::FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 368 + lVar3;
    }

    // 0x10045d540, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData const*)
    void
    jag::FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * -7218291159277650632));
    }

    // 0x10045d5a0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void
    jag::FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100487020, 240 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(param_1 * 368, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100487360, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 368 + lVar3;
    }

    // 0x100487510, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * -7218291159277650632));
    }

    // 0x100487570, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x10049b290, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 9728, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x10049cc70, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 << 6, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x10049cfe0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>::allocate()
    long jag::FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 64 + lVar3;
    }

    // 0x10049d1d0, 80 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData const*)
    void jag::FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 3)));
    }

    // 0x10049d220, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void jag::FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x10049de70, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 224 + lVar3;
    }

    // 0x10049e0c0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 5) * 7905747460161236408));
    }

    // 0x10049e120, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1004ca880, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 112, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1004cbb70, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 584, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1004d7e90, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 << 7, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1004d91a0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 128 + lVar3;
    }

    // 0x1004d9400, 80 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::VarType, 5504>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4)));
    }

    // 0x1004d9450, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1004e3ac0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 176, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1004e68c0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 232 + lVar3;
    }

    // 0x1004e6c90, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<graphics::Animation, 512>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(
            this, *(ulong*)(*(long*)(this + 16) + ((ulong)((long)param_1 - *(long*)this) >> 3) * -6360946232313638488));
    }

    // 0x1004e6cf0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1004eb700, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 1872, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1004eba50, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 1872 + lVar3;
    }

    // 0x1004ecdd0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::SeqType, 96>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * 9144539797223538408));
    }

    // 0x1004ece30, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1004f07a0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 168 + lVar3;
    }

    // 0x1004f0b60, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this,
                   *(ulong*)(*(long*)(this + 16) + ((ulong)((long)param_1 - *(long*)this) >> 3) * 8784163844623596008));
    }

    // 0x1004f0bc0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1004f1000, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::allocate()
    long jag::FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 184 + lVar3;
    }

    // 0x1004f13c0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData const*)
    void jag::FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(
            this, *(ulong*)(*(long*)(this + 16) + ((ulong)((long)param_1 - *(long*)this) >> 3) * -7218291159277650632));
    }

    // 0x1004f1420, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1004f8c70, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 1040, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1004f9110, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 1040 + lVar3;
    }

    // 0x1004f9350, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::ObjType, 96>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * 9081474005518548488));
    }

    // 0x1004f93b0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1004ffd30, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 136, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x10050c730, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 1176, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x10050fb20, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 1176 + lVar3;
    }

    // 0x10050fd00, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::NPCType, 216>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(
            this, *(ulong*)(*(long*)(this + 16) + ((ulong)((long)param_1 - *(long*)this) >> 3) * -6650866910929294120));
    }

    // 0x10050fd60, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x10051ae50, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 1064, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x10051b5c0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 1064 + lVar3;
    }

    // 0x10051b800, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::LocType, 256>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(
            this, *(ulong*)(*(long*)(this + 16) + ((ulong)((long)param_1 - *(long*)this) >> 3) * -7350958164711325080));
    }

    // 0x10051b860, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x10051f4a0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<game::MapElementType::Polygon, unsigned long>::allocate()
    long FastPool<game::MapElementType::Polygon, unsigned long>::allocate(
        FastPool<game::MapElementType::Polygon, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 144 + lVar3;
    }

    // 0x10052af00, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 136, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x10052b270, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>::allocate()
    long
    jag::FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 136 + lVar3;
    }

    // 0x10052c120, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData const*)
    void
    jag::FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(
            this, *(ulong*)(*(long*)(this + 16) + ((ulong)((long)param_1 - *(long*)this) >> 3) * -8680820740569200760));
    }

    // 0x10052c180, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void
    jag::FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x10053ef80, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 144, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x10053f310, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 144 + lVar3;
    }

    // 0x10053f5a0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<ui::Interface, 128>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * 8198552921648689608));
    }

    // 0x10053f600, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x10055fc80, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 << 6, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100572920, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 144, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100572cf0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 144 + lVar3;
    }

    // 0x100573ae0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::ParamType, 640>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * 8198552921648689608));
    }

    // 0x100573b40, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100578250, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 144, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1005789f0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 144 + lVar3;
    }

    // 0x100579790, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::DBRowType, 128>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * 8198552921648689608));
    }

    // 0x1005797f0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x10057dd20, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 136, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x10057e100, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 136 + lVar3;
    }

    // 0x10057ee70, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::DBTableType, 4>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(
            this, *(ulong*)(*(long*)(this + 16) + ((ulong)((long)param_1 - *(long*)this) >> 3) * -8680820740569200760));
    }

    // 0x10057eed0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100583410, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 152, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1005837e0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 152 + lVar3;
    }

    // 0x100584550, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::InvType, 32>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this,
                   *(ulong*)(*(long*)(this + 16) + ((ulong)((long)param_1 - *(long*)this) >> 3) * 3883525068149379288));
    }

    // 0x1005845b0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100588700, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 112 + lVar3;
    }

    // 0x1005888e0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * 7905747460161236408));
    }

    // 0x100588940, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x10058ce90, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 288, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x10058d280, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 288 + lVar3;
    }

    // 0x10058e090, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::BASType, 96>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 5) * 8198552921648689608));
    }

    // 0x10058e0f0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100592600, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 104, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1005929b0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::allocate()
    long jag::FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 104 + lVar3;
    }

    // 0x100593730, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData const*)
    void jag::FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this,
                   *(ulong*)(*(long*)(this + 16) + ((ulong)((long)param_1 - *(long*)this) >> 3) * 8513881880173639208));
    }

    // 0x100593790, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void jag::FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100597cc0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 136, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100598070, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 136 + lVar3;
    }

    // 0x100598de0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(
            this, *(ulong*)(*(long*)(this + 16) + ((ulong)((long)param_1 - *(long*)this) >> 3) * -8680820740569200760));
    }

    // 0x100598e40, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x10059d440, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 216, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x10059d820, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 216 + lVar3;
    }

    // 0x10059da50, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this,
                   *(ulong*)(*(long*)(this + 16) + ((ulong)((long)param_1 - *(long*)this) >> 3) * 2732850973882896536));
    }

    // 0x10059dab0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1005a2490, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 152, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1005a2840, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 152 + lVar3;
    }

    // 0x1005a35c0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this,
                   *(ulong*)(*(long*)(this + 16) + ((ulong)((long)param_1 - *(long*)this) >> 3) * 3883525068149379288));
    }

    // 0x1005a3620, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1005a7a60, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 296, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1005a7e80, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 296 + lVar3;
    }

    // 0x1005a8dc0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::IDKType, 32>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(
            this, *(ulong*)(*(long*)(this + 16) + ((ulong)((long)param_1 - *(long*)this) >> 3) * -6481288458330383000));
    }

    // 0x1005a8e20, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1005ad3f0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 384, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1005adb00, 256 bytes, inline, placed by __FILE__ string
    // FastPool<game::MapElementType::Polygon, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<game::MapElementType::Polygon, unsigned long>::resize(
        FastPool<game::MapElementType::Polygon, unsigned long>* this, ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 144, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1005ade10, 96 bytes, inline, placed by __FILE__ string
    // FastPool<game::MapElementType::Polygon, unsigned long>::deallocate(game::MapElementType::Polygon const*)
    void FastPool<game::MapElementType::Polygon, unsigned long>::deallocate(
        FastPool<game::MapElementType::Polygon, unsigned long>* this, Polygon* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * 8198552921648689608));
    }

    // 0x1005ade70, 160 bytes, inline, placed by __FILE__ string
    // FastPool<game::MapElementType::Polygon, unsigned long>::deallocate(unsigned long)
    void FastPool<game::MapElementType::Polygon, unsigned long>::deallocate(
        FastPool<game::MapElementType::Polygon, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1005ae100, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 384 + lVar3;
    }

    // 0x1005af020, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::MapElementType, 512>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 7) * 6148914691236517208));
    }

    // 0x1005af080, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1005b3c80, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 104, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1005b4030, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 104 + lVar3;
    }

    // 0x1005b4d70, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::MSIType, 32>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this,
                   *(ulong*)(*(long*)(this + 16) + ((ulong)((long)param_1 - *(long*)this) >> 3) * 8513881880173639208));
    }

    // 0x1005b4dd0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1005b96b0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 376, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1005b9d60, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 376 + lVar3;
    }

    // 0x1005bad20, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::QuestType, 128>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(
            this, *(ulong*)(*(long*)(this + 16) + ((ulong)((long)param_1 - *(long*)this) >> 3) * -8242162245700012424));
    }

    // 0x1005bad80, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1005bf2a0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 152, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1005bf690, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 152 + lVar3;
    }

    // 0x1005c0440, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this,
                   *(ulong*)(*(long*)(this + 16) + ((ulong)((long)param_1 - *(long*)this) >> 3) * 3883525068149379288));
    }

    // 0x1005c04a0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1005c49d0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 144, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1005c4d80, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 144 + lVar3;
    }

    // 0x1005c5af0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::LightType, 32>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * 8198552921648689608));
    }

    // 0x1005c5b50, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1005ca160, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 136, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1005ca530, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 136 + lVar3;
    }

    // 0x1005cb290, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(
            this, *(ulong*)(*(long*)(this + 16) + ((ulong)((long)param_1 - *(long*)this) >> 3) * -8680820740569200760));
    }

    // 0x1005cb2f0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1005cfb50, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 584 + lVar3;
    }

    // 0x1005cfd30, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::WaterType, 16>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(
            this, *(ulong*)(*(long*)(this + 16) + ((ulong)((long)param_1 - *(long*)this) >> 3) * -1010780497189564472));
    }

    // 0x1005cfd90, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1005d4290, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 96, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1005d4640, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 96 + lVar3;
    }

    // 0x1005d53a0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::CursorType, 64>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 5) * 6148914691236517208));
    }

    // 0x1005d5400, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1005d9850, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 240, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1005d9ba0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 240 + lVar3;
    }

    // 0x1005da990, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * 8608480567731124088));
    }

    // 0x1005da9f0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1005df170, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 312, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1005df8e0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 312 + lVar3;
    }

    // 0x1005e0cd0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::EnumType, 128>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this,
                   *(ulong*)(*(long*)(this + 16) + ((ulong)((long)param_1 - *(long*)this) >> 3) * 8986875317961063608));
    }

    // 0x1005e0d30, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1005e5500, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 224, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1005e58f0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 224 + lVar3;
    }

    // 0x1005e66f0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 5) * 7905747460161236408));
    }

    // 0x1005e6750, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1005eb230, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 88, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1005eb5e0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 88 + lVar3;
    }

    // 0x1005ec340, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::StructType, 1024>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this,
                   *(ulong*)(*(long*)(this + 16) + ((ulong)((long)param_1 - *(long*)this) >> 3) * 8384883669867978008));
    }

    // 0x1005ec3a0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1005f08c0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 728, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1005f1090, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 728 + lVar3;
    }

    // 0x1005f2290, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::AchievementType, 256>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this,
                   *(ulong*)(*(long*)(this + 16) + ((ulong)((long)param_1 - *(long*)this) >> 3) * 9122016300186042008));
    }

    // 0x1005f22f0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100634c50, 240 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void
    jag::FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(param_1 << 7, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100634f90, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>::allocate()
    long
    jag::FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 128 + lVar3;
    }

    // 0x100635d30, 80 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData const*)
    void jag::FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>::
        deallocate(
            FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>* this,
            RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4)));
    }

    // 0x100635d80, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void jag::FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>::
        deallocate(
            FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>* this,
            ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100638310, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 << 7, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1006386f0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>::allocate()
    long jag::FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 128 + lVar3;
    }

    // 0x1006394d0, 80 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData const*)
    void jag::FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4)));
    }

    // 0x100639520, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void jag::FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100639a50, 240 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(param_1 * 12704, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100639e10, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::allocate()
    long
    jag::FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 12704 + lVar3;
    }

    // 0x10063ac40, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData const*)
    void
    jag::FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 5) * 1486891209971550760));
    }

    // 0x10063aca0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void
    jag::FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x10063c2e0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(param_1 * 144, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x10063c670, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>::allocate()
    long
    jag::FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 144 + lVar3;
    }

    // 0x10063d400, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData const*)
    void
    jag::FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * 8198552921648689608));
    }

    // 0x10063d460, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void
    jag::FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x10063e960, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 112, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x10063ed00, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 112 + lVar3;
    }

    // 0x10063fa50, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * 7905747460161236408));
    }

    // 0x10063fab0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100646180, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 40, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1006464a0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::allocate()
    long jag::FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 40 + lVar3;
    }

    // 0x100647230, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData const*)
    void jag::FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this,
                   *(ulong*)(*(long*)(this + 16) + ((ulong)((long)param_1 - *(long*)this) >> 3) * 7378697629483820648));
    }

    // 0x100647290, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void jag::FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100648120, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 48, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100648f50, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::allocate()
    long jag::FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 48 + lVar3;
    }

    // 0x100649130, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData const*)
    void jag::FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * 6148914691236517208));
    }

    // 0x100649190, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void jag::FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100650810, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>::allocate()
    long jag::FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 48 + lVar3;
    }

    // 0x100650b30, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData const*)
    void
    jag::FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * 6148914691236517208));
    }

    // 0x100650b90, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void
    jag::FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100652930, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 688 + lVar3;
    }

    // 0x100652b10, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * 1715976192903214104));
    }

    // 0x100652b70, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1006534f0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void
    jag::FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 << 7, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100653970, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>::allocate()
    long jag::FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>::
        allocate(FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData,
                          unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 128 + lVar3;
    }

    // 0x100654880, 80 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData const*)
    void jag::FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>::
        deallocate(
            FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>* this,
            RefCounterAndData* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4)));
    }

    // 0x1006548d0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void jag::FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>::
        deallocate(
            FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>* this,
            ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x10065c7a0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::AnimationParameters, unsigned long>::allocate()
    long FastPool<graphics::AnimationParameters, unsigned long>::allocate(
        FastPool<graphics::AnimationParameters, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 192 + lVar3;
    }

    // 0x100661ab0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 48, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x10066af90, 272 bytes, inline, placed by __FILE__ string
    // FastPool<audio::SoundInstance, int>::resize(int, int)
    void FastPool<audio::SoundInstance, int>::resize(FastPool<audio::SoundInstance, int>* this, int param_1,
                                                     int param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((0 < param_1) && (*(int*)(this + 28) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if ((uint)param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc((long)param_1 * 192, (long)param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = (long)param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(4), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(4), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(int*)(this + 28) = param_1;
        }
        Reset();
    }

    // 0x10066eda0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<audio::SoundInstance, int>::Destroy(audio::SoundInstance*)
    void FastPool<audio::SoundInstance, int>::Destroy(FastPool<audio::SoundInstance, int>* this,
                                                      SoundInstance* param_1) {
        char cVar1;

        if (param_1 != (SoundInstance*)0) {
            cVar1 = is_owner(param_1);
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("is_owner(entity)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          42, (char*)0);
            }
            (**(code**)param_1->field_0)(param_1);
            deallocate(this, param_1);
        }
    }

    // 0x10066ee30, 96 bytes, inline, placed by __FILE__ string
    // FastPool<audio::SoundInstance, int>::deallocate(audio::SoundInstance const*)
    void FastPool<audio::SoundInstance, int>::deallocate(FastPool<audio::SoundInstance, int>* this,
                                                         SoundInstance* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(int*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 6) * -6148914691236517204));
    }

    // 0x10066ee90, 160 bytes, inline, placed by __FILE__ string
    // FastPool<audio::SoundInstance, int>::deallocate(int)
    void FastPool<audio::SoundInstance, int>::deallocate(FastPool<audio::SoundInstance, int>* this, int param_1) {
        int iVar1;
        long lVar2;

        if ((param_1 < 0) || (*(int*)(this + 28) <= param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(int*)(this + 24) < 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar2 = *(long*)(this + 8);
        iVar1 = *(int*)(lVar2 + (long)param_1 * 4);
        *(undefined4*)(*(long*)(this + 16) + (long)*(int*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4) * 4) =
            *(undefined4*)(*(long*)(this + 16) + (long)iVar1 * 4);
        *(undefined4*)(lVar2 + (long)param_1 * 4) = *(undefined4*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4);
        *(int*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + -1;
    }

    // 0x10066faa0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<audio::SoundInstance, int>::allocate()
    long FastPool<audio::SoundInstance, int>::allocate(FastPool<audio::SoundInstance, int>* this) {
        int iVar1;
        long lVar2;
        long lVar3;

        iVar1 = *(int*)(this + 24);
        if (*(int*)(this + 28) <= iVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar3 = (long)*(int*)(*(long*)(this + 8) + (long)iVar1 * 4);
        lVar2 = *(long*)this;
        *(int*)(*(long*)(this + 16) + lVar3 * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + 1;
        return lVar3 * 192 + lVar2;
    }

    // 0x100671640, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 3816, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100671990, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::allocate()
    long jag::FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 3816 + lVar3;
    }

    // 0x100671b70, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData const*)
    void jag::FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(
            this, *(ulong*)(*(long*)(this + 16) + ((ulong)((long)param_1 - *(long*)this) >> 3) * -1933620972086955096));
    }

    // 0x100671bd0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100672530, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(param_1 * 192, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100672b80, 256 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::AnimationParameters, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<graphics::AnimationParameters, unsigned long>::resize(
        FastPool<graphics::AnimationParameters, unsigned long>* this, ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(param_1 * 192, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100672ec0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::AnimationParameters, unsigned long>::deallocate(graphics::AnimationParameters const*)
    void FastPool<graphics::AnimationParameters, unsigned long>::deallocate(
        FastPool<graphics::AnimationParameters, unsigned long>* this, AnimationParameters* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 6) * 6148914691236517208));
    }

    // 0x100672f20, 160 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::AnimationParameters, unsigned long>::deallocate(unsigned long)
    void FastPool<graphics::AnimationParameters, unsigned long>::deallocate(
        FastPool<graphics::AnimationParameters, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100673120, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 192 + lVar3;
    }

    // 0x100673330, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 6) * 6148914691236517208));
    }

    // 0x100673390, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100682c60, 80 bytes, inline, placed by __FILE__ string
    // FastPool<ui::ConsoleSnow::SnowFlake, int>::deallocate(ui::ConsoleSnow::SnowFlake const*)
    void FastPool<ui::ConsoleSnow::SnowFlake, int>::deallocate(FastPool<ui::ConsoleSnow::SnowFlake, int>* this,
                                                               SnowFlake* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(int*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 3)));
    }

    // 0x1006b3a20, 256 bytes, inline, placed by __FILE__ string
    // FastPool<ui::ConsoleSnow::SnowFlake, int>::resize(int, int)
    void FastPool<ui::ConsoleSnow::SnowFlake, int>::resize(FastPool<ui::ConsoleSnow::SnowFlake, int>* this, int param_1,
                                                           int param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((0 < param_1) && (*(int*)(this + 28) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if ((uint)param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc((long)param_1 << 5, (long)param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = (long)param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(4), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(4), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(int*)(this + 28) = param_1;
        }
        Reset(this);
    }

    // 0x1006b3be0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<ui::ConsoleSnow::SnowFlake, int>::deallocate(int)
    void FastPool<ui::ConsoleSnow::SnowFlake, int>::deallocate(FastPool<ui::ConsoleSnow::SnowFlake, int>* this,
                                                               int param_1) {
        int iVar1;
        long lVar2;

        if ((param_1 < 0) || (*(int*)(this + 28) <= param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(int*)(this + 24) < 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar2 = *(long*)(this + 8);
        iVar1 = *(int*)(lVar2 + (long)param_1 * 4);
        *(undefined4*)(*(long*)(this + 16) + (long)*(int*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4) * 4) =
            *(undefined4*)(*(long*)(this + 16) + (long)iVar1 * 4);
        *(undefined4*)(lVar2 + (long)param_1 * 4) = *(undefined4*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4);
        *(int*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + -1;
    }

    // 0x1006b3c80, 96 bytes, inline, placed by __FILE__ string
    // FastPool<ui::ConsoleSnow::SnowFlake, int>::allocate()
    long FastPool<ui::ConsoleSnow::SnowFlake, int>::allocate(FastPool<ui::ConsoleSnow::SnowFlake, int>* this) {
        int iVar1;
        long lVar2;
        long lVar3;

        iVar1 = *(int*)(this + 24);
        if (*(int*)(this + 28) <= iVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar3 = (long)*(int*)(*(long*)(this + 8) + (long)iVar1 * 4);
        lVar2 = *(long*)this;
        *(int*)(*(long*)(this + 16) + lVar3 * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + 1;
        return lVar3 * 32 + lVar2;
    }

    // 0x1006c52e0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 1032, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1006c6da0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 584, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1006c7f40, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 1568, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1006d2120, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 776, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1006d3260, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 968, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1006d4560, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData, unsigned long>* this, ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 1440, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1006d78e0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 520, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1006d8a70, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 648, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1006daa30, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 864, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1007a36c0, 272 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::WaterPatch_DE, int>::resize(int, int)
    void FastPool<graphics::WaterPatch_DE, int>::resize(FastPool<graphics::WaterPatch_DE, int>* this, int param_1,
                                                        int param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((0 < param_1) && (*(int*)(this + 28) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if ((uint)param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc((long)param_1 * 192, (long)param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = (long)param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(4), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(4), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(int*)(this + 28) = param_1;
        }
        Reset();
    }

    // 0x1007c5e00, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::TerrainPatch_DE, int>::allocate()
    long FastPool<graphics::TerrainPatch_DE, int>::allocate(FastPool<graphics::TerrainPatch_DE, int>* this) {
        int iVar1;
        long lVar2;
        long lVar3;

        iVar1 = *(int*)(this + 24);
        if (*(int*)(this + 28) <= iVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar3 = (long)*(int*)(*(long*)(this + 8) + (long)iVar1 * 4);
        lVar2 = *(long*)this;
        *(int*)(*(long*)(this + 16) + lVar3 * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + 1;
        return lVar3 * 544 + lVar2;
    }

    // 0x1007c64c0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::TerrainPatch_DE, int>::Destroy(graphics::TerrainPatch_DE*)
    void FastPool<graphics::TerrainPatch_DE, int>::Destroy(FastPool<graphics::TerrainPatch_DE, int>* this,
                                                           TerrainPatch_DE* param_1) {
        if (param_1 != (TerrainPatch_DE*)0) {
            if (is_owner(this, param_1) == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("is_owner(entity)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          42, (char*)0);
            }
            (**(code**)param_1->field_0)(param_1);
            deallocate(this, param_1);
        }
    }

    // 0x1007c6520, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::TerrainPatch_DE, int>::deallocate(graphics::TerrainPatch_DE const*)
    void FastPool<graphics::TerrainPatch_DE, int>::deallocate(FastPool<graphics::TerrainPatch_DE, int>* this,
                                                              TerrainPatch_DE* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(int*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 5) * -4340410370284600380));
    }

    // 0x1007c6580, 160 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::TerrainPatch_DE, int>::deallocate(int)
    void FastPool<graphics::TerrainPatch_DE, int>::deallocate(FastPool<graphics::TerrainPatch_DE, int>* this,
                                                              int param_1) {
        int iVar1;
        long lVar2;

        if ((param_1 < 0) || (*(int*)(this + 28) <= param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(int*)(this + 24) < 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar2 = *(long*)(this + 8);
        iVar1 = *(int*)(lVar2 + (long)param_1 * 4);
        *(undefined4*)(*(long*)(this + 16) + (long)*(int*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4) * 4) =
            *(undefined4*)(*(long*)(this + 16) + (long)iVar1 * 4);
        *(undefined4*)(lVar2 + (long)param_1 * 4) = *(undefined4*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4);
        *(int*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + -1;
    }

    // 0x1007c6ca0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::TerrainPatch_DE, int>::resize(int, int)
    void FastPool<graphics::TerrainPatch_DE, int>::resize(FastPool<graphics::TerrainPatch_DE, int>* this, int param_1,
                                                          int param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((0 < param_1) && (*(int*)(this + 28) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if ((uint)param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc((long)param_1 * 544, (long)param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = (long)param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(4), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(4), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(int*)(this + 28) = param_1;
        }
        Reset();
    }

    // 0x1007c7d20, 240 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(param_1 * 1664, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1007c89d0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::WaterPatch_DE, int>::allocate()
    long FastPool<graphics::WaterPatch_DE, int>::allocate(FastPool<graphics::WaterPatch_DE, int>* this) {
        int iVar1;
        long lVar2;
        long lVar3;

        iVar1 = *(int*)(this + 24);
        if (*(int*)(this + 28) <= iVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar3 = (long)*(int*)(*(long*)(this + 8) + (long)iVar1 * 4);
        lVar2 = *(long*)this;
        *(int*)(*(long*)(this + 16) + lVar3 * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + 1;
        return lVar3 * 192 + lVar2;
    }

    // 0x1007c8c00, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::WaterPatch_DE, int>::Destroy(graphics::WaterPatch_DE*)
    void FastPool<graphics::WaterPatch_DE, int>::Destroy(FastPool<graphics::WaterPatch_DE, int>* this,
                                                         WaterPatch_DE* param_1) {
        if (param_1 != (WaterPatch_DE*)0) {
            if (is_owner(this, param_1) == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("is_owner(entity)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          42, (char*)0);
            }
            (**(code**)param_1->field_0)(param_1);
            deallocate(this, param_1);
        }
    }

    // 0x1007c8c60, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::WaterPatch_DE, int>::deallocate(graphics::WaterPatch_DE const*)
    void FastPool<graphics::WaterPatch_DE, int>::deallocate(FastPool<graphics::WaterPatch_DE, int>* this,
                                                            WaterPatch_DE* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(int*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 6) * -6148914691236517204));
    }

    // 0x1007c8cc0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::WaterPatch_DE, int>::deallocate(int)
    void FastPool<graphics::WaterPatch_DE, int>::deallocate(FastPool<graphics::WaterPatch_DE, int>* this, int param_1) {
        int iVar1;
        long lVar2;

        if ((param_1 < 0) || (*(int*)(this + 28) <= param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(int*)(this + 24) < 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar2 = *(long*)(this + 8);
        iVar1 = *(int*)(lVar2 + (long)param_1 * 4);
        *(undefined4*)(*(long*)(this + 16) + (long)*(int*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4) * 4) =
            *(undefined4*)(*(long*)(this + 16) + (long)iVar1 * 4);
        *(undefined4*)(lVar2 + (long)param_1 * 4) = *(undefined4*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4);
        *(int*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + -1;
    }

    // 0x1007ea100, 240 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(param_1 << 8, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1007f53e0, 240 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(param_1 * 42976, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1007f6e10, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::ParticleSystem_DE, int>::allocate()
    long FastPool<graphics::ParticleSystem_DE, int>::allocate(FastPool<graphics::ParticleSystem_DE, int>* this) {
        int iVar1;
        long lVar2;
        long lVar3;

        iVar1 = *(int*)(this + 24);
        if (*(int*)(this + 28) <= iVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar3 = (long)*(int*)(*(long*)(this + 8) + (long)iVar1 * 4);
        lVar2 = *(long*)this;
        *(int*)(*(long*)(this + 16) + lVar3 * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + 1;
        return lVar3 * 144 + lVar2;
    }

    // 0x1007f7060, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::ParticleSystem_DE, int>::Destroy(graphics::ParticleSystem_DE*)
    void FastPool<graphics::ParticleSystem_DE, int>::Destroy(FastPool<graphics::ParticleSystem_DE, int>* this,
                                                             ParticleSystem_DE* param_1) {
        if (param_1 != (ParticleSystem_DE*)0) {
            if (is_owner(this, param_1) == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("is_owner(entity)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          42, (char*)0);
            }
            (**(code**)param_1->field_0)(param_1);
            deallocate(this, param_1);
        }
    }

    // 0x1007f70c0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::ParticleSystem_DE, int>::deallocate(graphics::ParticleSystem_DE const*)
    void FastPool<graphics::ParticleSystem_DE, int>::deallocate(FastPool<graphics::ParticleSystem_DE, int>* this,
                                                                ParticleSystem_DE* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(int*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * 4099276460824344804));
    }

    // 0x1007f7120, 160 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::ParticleSystem_DE, int>::deallocate(int)
    void FastPool<graphics::ParticleSystem_DE, int>::deallocate(FastPool<graphics::ParticleSystem_DE, int>* this,
                                                                int param_1) {
        int iVar1;
        long lVar2;

        if ((param_1 < 0) || (*(int*)(this + 28) <= param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(int*)(this + 24) < 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar2 = *(long*)(this + 8);
        iVar1 = *(int*)(lVar2 + (long)param_1 * 4);
        *(undefined4*)(*(long*)(this + 16) + (long)*(int*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4) * 4) =
            *(undefined4*)(*(long*)(this + 16) + (long)iVar1 * 4);
        *(undefined4*)(lVar2 + (long)param_1 * 4) = *(undefined4*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4);
        *(int*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + -1;
    }

    // 0x1007f75f0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::allocate()
    long jag::FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 42976 + lVar3;
    }

    // 0x1007f77d0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData const*)
    void jag::FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 5) * 8529730506160559608));
    }

    // 0x1007f7830, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1007f7b90, 272 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::ParticleSystem_DE, int>::resize(int, int)
    void FastPool<graphics::ParticleSystem_DE, int>::resize(FastPool<graphics::ParticleSystem_DE, int>* this,
                                                            int param_1, int param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((0 < param_1) && (*(int*)(this + 28) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if ((uint)param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc((long)param_1 * 144, (long)param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = (long)param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(4), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(4), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(int*)(this + 28) = param_1;
        }
        Reset();
    }

    // 0x100831210, 240 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(param_1 * 2240, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1008364f0, 272 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::GeometryBatch_DE, int>::resize(int, int)
    void FastPool<graphics::GeometryBatch_DE, int>::resize(FastPool<graphics::GeometryBatch_DE, int>* this, int param_1,
                                                           int param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((0 < param_1) && (*(int*)(this + 28) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if ((uint)param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc((long)param_1 * 160, (long)param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = (long)param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(4), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(4), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(int*)(this + 28) = param_1;
        }
        Reset();
    }

    // 0x1008367c0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::allocate()
    long jag::FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 2240 + lVar3;
    }

    // 0x100836a30, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData const*)
    void jag::FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 6) * 8959847121516067928));
    }

    // 0x100836a90, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100838290, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::GeometryBatch_DE, int>::allocate()
    long FastPool<graphics::GeometryBatch_DE, int>::allocate(FastPool<graphics::GeometryBatch_DE, int>* this) {
        int iVar1;
        long lVar2;
        long lVar3;

        iVar1 = *(int*)(this + 24);
        if (*(int*)(this + 28) <= iVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar3 = (long)*(int*)(*(long*)(this + 8) + (long)iVar1 * 4);
        lVar2 = *(long*)this;
        *(int*)(*(long*)(this + 16) + lVar3 * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + 1;
        return lVar3 * 160 + lVar2;
    }

    // 0x1008384a0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::GeometryBatch_DE, int>::Destroy(graphics::GeometryBatch_DE*)
    void FastPool<graphics::GeometryBatch_DE, int>::Destroy(FastPool<graphics::GeometryBatch_DE, int>* this,
                                                            GeometryBatch_DE* param_1) {
        if (param_1 != (GeometryBatch_DE*)0) {
            if (is_owner(this, param_1) == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("is_owner(entity)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          42, (char*)0);
            }
            (**(code**)param_1->field_0)(param_1);
            deallocate(this, param_1);
        }
    }

    // 0x100838500, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::GeometryBatch_DE, int>::deallocate(graphics::GeometryBatch_DE const*)
    void FastPool<graphics::GeometryBatch_DE, int>::deallocate(FastPool<graphics::GeometryBatch_DE, int>* this,
                                                               GeometryBatch_DE* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(int*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 5) * 3689348814741910324));
    }

    // 0x100838560, 160 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::GeometryBatch_DE, int>::deallocate(int)
    void FastPool<graphics::GeometryBatch_DE, int>::deallocate(FastPool<graphics::GeometryBatch_DE, int>* this,
                                                               int param_1) {
        int iVar1;
        long lVar2;

        if ((param_1 < 0) || (*(int*)(this + 28) <= param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(int*)(this + 24) < 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar2 = *(long*)(this + 8);
        iVar1 = *(int*)(lVar2 + (long)param_1 * 4);
        *(undefined4*)(*(long*)(this + 16) + (long)*(int*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4) * 4) =
            *(undefined4*)(*(long*)(this + 16) + (long)iVar1 * 4);
        *(undefined4*)(lVar2 + (long)param_1 * 4) = *(undefined4*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4);
        *(int*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + -1;
    }

    // 0x1008431c0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::BillboardBatchInstance, unsigned long>::deallocate(graphics::BillboardBatchInstance const*)
    void FastPool<graphics::BillboardBatchInstance, unsigned long>::deallocate(
        FastPool<graphics::BillboardBatchInstance, unsigned long>* this, BillboardBatchInstance* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 8) * 6148914691236517208));
    }

    // 0x100843220, 160 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::BillboardBatchInstance, unsigned long>::deallocate(unsigned long)
    void FastPool<graphics::BillboardBatchInstance, unsigned long>::deallocate(
        FastPool<graphics::BillboardBatchInstance, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1008442f0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::BillboardBatchInstance, unsigned long>::allocate()
    long FastPool<graphics::BillboardBatchInstance, unsigned long>::allocate(
        FastPool<graphics::BillboardBatchInstance, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 768 + lVar3;
    }

    // 0x100844d20, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 112, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100845070, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>::allocate()
    long jag::FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 112 + lVar3;
    }

    // 0x100845260, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData const*)
    void
    jag::FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * 7905747460161236408));
    }

    // 0x1008452c0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void
    jag::FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100845560, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::allocate()
    long jag::FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 256 + lVar3;
    }

    // 0x100845880, 80 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData const*)
    void jag::FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 5)));
    }

    // 0x1008458d0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x10084b3e0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::Billboard, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<graphics::Billboard, unsigned long>::resize(FastPool<graphics::Billboard, unsigned long>* this,
                                                              ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 4) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 68, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1008734c0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::allocate()
    long
    jag::FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 80 + lVar3;
    }

    // 0x1008738b0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData const*)
    void
    jag::FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * 7378697629483820648));
    }

    // 0x100873910, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void
    jag::FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1008813f0, 240 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(param_1 * 800, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100884ac0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::BillboardBatch_DE, int>::resize(int, int)
    void FastPool<graphics::BillboardBatch_DE, int>::resize(FastPool<graphics::BillboardBatch_DE, int>* this,
                                                            int param_1, int param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((0 < param_1) && (*(int*)(this + 28) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if ((uint)param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc((long)param_1 << 7, (long)param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = (long)param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(4), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(4), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(int*)(this + 28) = param_1;
        }
        Reset();
    }

    // 0x100884da0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::allocate()
    long jag::FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 800 + lVar3;
    }

    // 0x100884fb0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData const*)
    void jag::FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 5) * 8854437155380584776));
    }

    // 0x100885010, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100885d20, 256 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::BillboardBatchInstance, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<graphics::BillboardBatchInstance, unsigned long>::resize(
        FastPool<graphics::BillboardBatchInstance, unsigned long>* this, ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(param_1 * 768, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100887ae0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::BillboardBatch_DE, int>::allocate()
    long FastPool<graphics::BillboardBatch_DE, int>::allocate(FastPool<graphics::BillboardBatch_DE, int>* this) {
        int iVar1;
        long lVar2;
        long lVar3;

        iVar1 = *(int*)(this + 24);
        if (*(int*)(this + 28) <= iVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar3 = (long)*(int*)(*(long*)(this + 8) + (long)iVar1 * 4);
        lVar2 = *(long*)this;
        *(int*)(*(long*)(this + 16) + lVar3 * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + 1;
        return lVar3 * 128 + lVar2;
    }

    // 0x100887cf0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::BillboardBatch_DE, int>::Destroy(graphics::BillboardBatch_DE*)
    void FastPool<graphics::BillboardBatch_DE, int>::Destroy(FastPool<graphics::BillboardBatch_DE, int>* this,
                                                             BillboardBatch_DE* param_1) {
        char cVar1;

        if (param_1 != (BillboardBatch_DE*)0) {
            cVar1 = is_owner(param_1);
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("is_owner(entity)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          42, (char*)0);
            }
            (**(code**)param_1->field_0)(param_1);
            deallocate(this, param_1);
        }
    }

    // 0x100887d50, 80 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::BillboardBatch_DE, int>::deallocate(graphics::BillboardBatch_DE const*)
    void FastPool<graphics::BillboardBatch_DE, int>::deallocate(FastPool<graphics::BillboardBatch_DE, int>* this,
                                                                BillboardBatch_DE* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(int*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 5)));
    }

    // 0x100887da0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::BillboardBatch_DE, int>::deallocate(int)
    void FastPool<graphics::BillboardBatch_DE, int>::deallocate(FastPool<graphics::BillboardBatch_DE, int>* this,
                                                                int param_1) {
        int iVar1;
        long lVar2;

        if ((param_1 < 0) || (*(int*)(this + 28) <= param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(int*)(this + 24) < 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar2 = *(long*)(this + 8);
        iVar1 = *(int*)(lVar2 + (long)param_1 * 4);
        *(undefined4*)(*(long*)(this + 16) + (long)*(int*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4) * 4) =
            *(undefined4*)(*(long*)(this + 16) + (long)iVar1 * 4);
        *(undefined4*)(lVar2 + (long)param_1 * 4) = *(undefined4*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4);
        *(int*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + -1;
    }

    // 0x1008d2c00, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::allocate()
    long
    jag::FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 160 + lVar3;
    }

    // 0x1008d2f80, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData const*)
    void
    jag::FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 5) * 7378697629483820648));
    }

    // 0x1008d2fe0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void
    jag::FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1008d7c50, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 336, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1008dc980, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 72, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1008dccd0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::allocate()
    long
    jag::FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 72 + lVar3;
    }

    // 0x1008dcf00, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData const*)
    void
    jag::FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this,
                   *(ulong*)(*(long*)(this + 16) + ((ulong)((long)param_1 - *(long*)this) >> 3) * 8198552921648689608));
    }

    // 0x1008dcf60, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void
    jag::FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1008dd310, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 336 + lVar3;
    }

    // 0x1008dd520, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * 8784163844623596008));
    }

    // 0x1008dd580, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1008f84a0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::GUIAnimationInstance, int>::Destroy(graphics::GUIAnimationInstance*)
    void FastPool<graphics::GUIAnimationInstance, int>::Destroy(FastPool<graphics::GUIAnimationInstance, int>* this,
                                                                GUIAnimationInstance* param_1) {
        if (param_1 != (GUIAnimationInstance*)0) {
            if (is_owner(this, param_1) == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("is_owner(entity)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          42, (char*)0);
            }
            param_1->~GUIAnimationInstance();
            deallocate(this, param_1);
        }
    }

    // 0x100907cb0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 13728, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100908000, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 13728 + lVar3;
    }

    // 0x100908240, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 5) * 9201872335137165608));
    }

    // 0x1009082a0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x10090e970, 256 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::GUIAnimationInstance, int>::resize(int, int)
    void FastPool<graphics::GUIAnimationInstance, int>::resize(FastPool<graphics::GUIAnimationInstance, int>* this,
                                                               int param_1, int param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((0 < param_1) && (*(int*)(this + 28) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if ((uint)param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc((long)param_1 * 368, (long)param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = (long)param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(4), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(4), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(int*)(this + 28) = param_1;
        }
        Reset();
    }

    // 0x1009103f0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::GUIAnimationInstance, int>::allocate()
    long FastPool<graphics::GUIAnimationInstance, int>::allocate(FastPool<graphics::GUIAnimationInstance, int>* this) {
        int iVar1;
        long lVar2;
        long lVar3;

        iVar1 = *(int*)(this + 24);
        if (*(int*)(this + 28) <= iVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar3 = (long)*(int*)(*(long*)(this + 8) + (long)iVar1 * 4);
        lVar2 = *(long*)this;
        *(int*)(*(long*)(this + 16) + lVar3 * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + 1;
        return lVar3 * 368 + lVar2;
    }

    // 0x1009110d0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::GUIAnimationInstance, int>::deallocate(graphics::GUIAnimationInstance const*)
    void FastPool<graphics::GUIAnimationInstance, int>::deallocate(FastPool<graphics::GUIAnimationInstance, int>* this,
                                                                   GUIAnimationInstance* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(int*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * 5614226457215950492));
    }

    // 0x100911130, 160 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::GUIAnimationInstance, int>::deallocate(int)
    void FastPool<graphics::GUIAnimationInstance, int>::deallocate(FastPool<graphics::GUIAnimationInstance, int>* this,
                                                                   int param_1) {
        int iVar1;
        long lVar2;

        if ((param_1 < 0) || (*(int*)(this + 28) <= param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(int*)(this + 24) < 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar2 = *(long*)(this + 8);
        iVar1 = *(int*)(lVar2 + (long)param_1 * 4);
        *(undefined4*)(*(long*)(this + 16) + (long)*(int*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4) * 4) =
            *(undefined4*)(*(long*)(this + 16) + (long)iVar1 * 4);
        *(undefined4*)(lVar2 + (long)param_1 * 4) = *(undefined4*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4);
        *(int*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + -1;
    }

    // 0x100922880, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::SkyBox_DE, int>::allocate()
    long FastPool<graphics::SkyBox_DE, int>::allocate(FastPool<graphics::SkyBox_DE, int>* this) {
        int iVar1;
        long lVar2;
        long lVar3;

        iVar1 = *(int*)(this + 24);
        if (*(int*)(this + 28) <= iVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar3 = (long)*(int*)(*(long*)(this + 8) + (long)iVar1 * 4);
        lVar2 = *(long*)this;
        *(int*)(*(long*)(this + 16) + lVar3 * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + 1;
        return lVar3 * 128 + lVar2;
    }

    // 0x100927390, 240 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(param_1 * 784, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100928320, 256 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::SkyBox_DE, int>::resize(int, int)
    void FastPool<graphics::SkyBox_DE, int>::resize(FastPool<graphics::SkyBox_DE, int>* this, int param_1,
                                                    int param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((0 < param_1) && (*(int*)(this + 28) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if ((uint)param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc((long)param_1 << 7, (long)param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = (long)param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(4), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(4), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(int*)(this + 28) = param_1;
        }
        Reset();
    }

    // 0x1009288d0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 784 + lVar3;
    }

    // 0x100928b10, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * -1505856659078330744));
    }

    // 0x100928b70, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100929b60, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::SkyBox_DE, int>::Destroy(graphics::SkyBox_DE*)
    void FastPool<graphics::SkyBox_DE, int>::Destroy(FastPool<graphics::SkyBox_DE, int>* this, SkyBox_DE* param_1) {
        if (param_1 != (SkyBox_DE*)0) {
            if (is_owner(this, param_1) == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("is_owner(entity)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          42, (char*)0);
            }
            (*(code*)*param_1->field_0)(param_1);
            deallocate(this, param_1);
        }
    }

    // 0x100929bc0, 80 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::SkyBox_DE, int>::deallocate(graphics::SkyBox_DE const*)
    void FastPool<graphics::SkyBox_DE, int>::deallocate(FastPool<graphics::SkyBox_DE, int>* this, SkyBox_DE* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(int*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 5)));
    }

    // 0x100929c10, 149 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::SkyBox_DE, int>::deallocate(int)
    void FastPool<graphics::SkyBox_DE, int>::deallocate(FastPool<graphics::SkyBox_DE, int>* this, int param_1) {
        int iVar1;
        long lVar2;

        if ((param_1 < 0) || (*(int*)(this + 28) <= param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(int*)(this + 24) < 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar2 = *(long*)(this + 8);
        iVar1 = *(int*)(lVar2 + (long)param_1 * 4);
        *(undefined4*)(*(long*)(this + 16) + (long)*(int*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4) * 4) =
            *(undefined4*)(*(long*)(this + 16) + (long)iVar1 * 4);
        *(undefined4*)(lVar2 + (long)param_1 * 4) = *(undefined4*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4);
        *(int*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + -1;
    }

    // 0x10093f060, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::LightProbe_DE, int>::allocate()
    long FastPool<graphics::LightProbe_DE, int>::allocate(FastPool<graphics::LightProbe_DE, int>* this) {
        int iVar1;
        long lVar2;
        long lVar3;

        iVar1 = *(int*)(this + 24);
        if (*(int*)(this + 28) <= iVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar3 = (long)*(int*)(*(long*)(this + 8) + (long)iVar1 * 4);
        lVar2 = *(long*)this;
        *(int*)(*(long*)(this + 16) + lVar3 * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + 1;
        return lVar3 * 112 + lVar2;
    }

    // 0x10093f280, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::LightProbe_DE, int>::Destroy(graphics::LightProbe_DE*)
    void FastPool<graphics::LightProbe_DE, int>::Destroy(FastPool<graphics::LightProbe_DE, int>* this,
                                                         LightProbe_DE* param_1) {
        if (param_1 != (LightProbe_DE*)0) {
            if (is_owner(this, param_1) == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("is_owner(entity)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          42, (char*)0);
            }
            (**(code**)param_1->field_0)(param_1);
            deallocate(this, param_1);
        }
    }

    // 0x10093f2e0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::LightProbe_DE, int>::deallocate(graphics::LightProbe_DE const*)
    void FastPool<graphics::LightProbe_DE, int>::deallocate(FastPool<graphics::LightProbe_DE, int>* this,
                                                            LightProbe_DE* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(int*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * -5270498306774157604));
    }

    // 0x10093f340, 160 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::LightProbe_DE, int>::deallocate(int)
    void FastPool<graphics::LightProbe_DE, int>::deallocate(FastPool<graphics::LightProbe_DE, int>* this, int param_1) {
        int iVar1;
        long lVar2;

        if ((param_1 < 0) || (*(int*)(this + 28) <= param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(int*)(this + 24) < 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar2 = *(long*)(this + 8);
        iVar1 = *(int*)(lVar2 + (long)param_1 * 4);
        *(undefined4*)(*(long*)(this + 16) + (long)*(int*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4) * 4) =
            *(undefined4*)(*(long*)(this + 16) + (long)iVar1 * 4);
        *(undefined4*)(lVar2 + (long)param_1 * 4) = *(undefined4*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4);
        *(int*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + -1;
    }

    // 0x10093f4a0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::LightProbe_DE, int>::resize(int, int)
    void FastPool<graphics::LightProbe_DE, int>::resize(FastPool<graphics::LightProbe_DE, int>* this, int param_1,
                                                        int param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((0 < param_1) && (*(int*)(this + 28) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if ((uint)param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc((long)param_1 * 112, (long)param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = (long)param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(4), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(4), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(int*)(this + 28) = param_1;
        }
        Reset();
    }

    // 0x10094be30, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(param_1 * 160, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100967f70, 256 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::AnimState, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<graphics::AnimState, unsigned long>::resize(FastPool<graphics::AnimState, unsigned long>* this,
                                                              ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 160, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100968280, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::AnimState, unsigned long>::deallocate(graphics::AnimState const*)
    void FastPool<graphics::AnimState, unsigned long>::deallocate(FastPool<graphics::AnimState, unsigned long>* this,
                                                                  AnimState* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 5) * 7378697629483820648));
    }

    // 0x1009682e0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::AnimState, unsigned long>::deallocate(unsigned long)
    void FastPool<graphics::AnimState, unsigned long>::deallocate(FastPool<graphics::AnimState, unsigned long>* this,
                                                                  ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100968460, 96 bytes, inline, placed by __FILE__ string
    // FastPool<graphics::AnimState, unsigned long>::allocate()
    long FastPool<graphics::AnimState, unsigned long>::allocate(FastPool<graphics::AnimState, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 160 + lVar3;
    }

    // 0x100993d60, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 304, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100995ca0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 168, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1009963e0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 304 + lVar3;
    }

    // 0x100996650, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * 3883525068149379288));
    }

    // 0x1009966b0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100996ee0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 96, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100997270, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>::allocate()
    long jag::FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 96 + lVar3;
    }

    // 0x100997460, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData const*)
    void
    jag::FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 5) * 6148914691236517208));
    }

    // 0x1009974c0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void
    jag::FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100999b50, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 232, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x10099bcc0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 80, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x10099c300, 240 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(param_1 * 976, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x10099e030, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 112, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x10099f0c0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 184, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1009a2660, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 160, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x1009a29b0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>::allocate()
    long jag::FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 160 + lVar3;
    }

    // 0x1009a2cb0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData const*)
    void jag::FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 5) * 7378697629483820648));
    }

    // 0x1009a2d10, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x1009faba0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 104, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100a00fb0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>::allocate()
    long FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 104 + lVar3;
    }

    // 0x100a011b0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData const*)
    void FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this,
                   *(ulong*)(*(long*)(this + 16) + ((ulong)((long)param_1 - *(long*)this) >> 3) * 8513881880173639208));
    }

    // 0x100a01210, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100b98d40, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 8>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData,
                       unsigned long>::
        resize(FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData,
                        unsigned long>* this,
               ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 << 6, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100b9a0f0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 2048>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::RefCounterAndData,
                       unsigned long>::
        resize(FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::RefCounterAndData,
                        unsigned long>* this,
               ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 << 6, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100ba2740, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 8>::RefCounterAndData, unsigned long>::allocate()
    long jag::FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData,
                       unsigned long>::
        allocate(FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData,
                          unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 64 + lVar3;
    }

    // 0x100ba2900, 80 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 8>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 8>::RefCounterAndData const*)
    void jag::FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData,
                       unsigned long>::
        deallocate(FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData,
                            unsigned long>* this,
                   RefCounterAndData* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 3)));
    }

    // 0x100ba2950, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 8>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void jag::FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData,
                       unsigned long>::
        deallocate(FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData,
                            unsigned long>* this,
                   ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100ba3470, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 2048>::RefCounterAndData, unsigned long>::allocate()
    long jag::FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::RefCounterAndData,
                       unsigned long>::
        allocate(FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::RefCounterAndData,
                          unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 64 + lVar3;
    }

    // 0x100ba3630, 80 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 2048>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 2048>::RefCounterAndData const*)
    void jag::FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::RefCounterAndData,
                       unsigned long>::
        deallocate(FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::RefCounterAndData,
                            unsigned long>* this,
                   RefCounterAndData* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 3)));
    }

    // 0x100ba3680, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 2048>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void jag::FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::RefCounterAndData,
                       unsigned long>::
        deallocate(FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::RefCounterAndData,
                            unsigned long>* this,
                   ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100bd3ed0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::allocate()
    long jag::FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::allocate(
        FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 40 + lVar3;
    }

    // 0x100bd4980, 96 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::deallocate(MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData const*)
    void jag::FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this,
                   *(ulong*)(*(long*)(this + 16) + ((ulong)((long)param_1 - *(long*)this) >> 3) * 7378697629483820648));
    }

    // 0x100bd49e0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::deallocate(unsigned long)
    void jag::FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::deallocate(
        FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100bd5c70, 224 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::Prefetch(unsigned long, unsigned long) const
    void jag::FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::Prefetch(
        FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        long lVar1;
        long lVar3;
        char* pcVar4;

        if (param_1 != 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("cacheLines == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      155, (char*)0);
        }
        if (param_2 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("offset == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      156, (char*)0);
        }
        lVar1 = *(long*)this;
        pcVar4 = (char*)(lVar1 + 63U & 18446744073709551552);
        lVar3 = size();
        lVar3 = aligned_size(lVar3 * 40, 64);
        while (true) {
            if ((char*)(lVar3 + lVar1) <= pcVar4) {
                return;
            }
            if (!is_aligned<char>(pcVar4, 64))
                break;
            pcVar4 = pcVar4 + 64;
        }
        /* WARNING: Subroutine does not return */
        LogAssert("is_aligned(pData, 64)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/core/memory/Utils.h", 56,
                  (char*)0);
    }

    // 0x100c0b660, 96 bytes, inline, placed by __FILE__ string
    // FastPool<render::ComputePipelineState, unsigned long>::Destroy(render::ComputePipelineState*)
    void FastPool<render::ComputePipelineState, unsigned long>::Destroy(
        FastPool<render::ComputePipelineState, unsigned long>* this, ComputePipelineState* param_1) {
        if (param_1 != (ComputePipelineState*)0) {
            if (is_owner(this, param_1) == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("is_owner(entity)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          42, (char*)0);
            }
            param_1->~ComputePipelineState();
            deallocate(this, param_1);
        }
    }

    // 0x100c0b6c0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<render::ComputePipelineState, unsigned long>::deallocate(render::ComputePipelineState const*)
    void FastPool<render::ComputePipelineState, unsigned long>::deallocate(
        FastPool<render::ComputePipelineState, unsigned long>* this, ComputePipelineState* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 7) * 7378697629483820648));
    }

    // 0x100c0b720, 160 bytes, inline, placed by __FILE__ string
    // FastPool<render::ComputePipelineState, unsigned long>::deallocate(unsigned long)
    void FastPool<render::ComputePipelineState, unsigned long>::deallocate(
        FastPool<render::ComputePipelineState, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100c0b870, 96 bytes, inline, placed by __FILE__ string
    // FastPool<render::InputAssemblerState, unsigned long>::Destroy(render::InputAssemblerState*)
    void FastPool<render::InputAssemblerState, unsigned long>::Destroy(
        FastPool<render::InputAssemblerState, unsigned long>* this, InputAssemblerState* param_1) {
        char cVar1;

        if (param_1 != (InputAssemblerState*)0) {
            cVar1 = is_owner(param_1);
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("is_owner(entity)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          42, (char*)0);
            }
            param_1->~InputAssemblerState();
            deallocate(this, param_1);
        }
    }

    // 0x100c0b8d0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<render::InputAssemblerState, unsigned long>::deallocate(render::InputAssemblerState const*)
    void FastPool<render::InputAssemblerState, unsigned long>::deallocate(
        FastPool<render::InputAssemblerState, unsigned long>* this, InputAssemblerState* param_1) {
        char cVar1;

        cVar1 = is_owner(param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 6) * 6148914691236517208));
    }

    // 0x100c0b930, 160 bytes, inline, placed by __FILE__ string
    // FastPool<render::InputAssemblerState, unsigned long>::deallocate(unsigned long)
    void FastPool<render::InputAssemblerState, unsigned long>::deallocate(
        FastPool<render::InputAssemblerState, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100c0ba00, 96 bytes, inline, placed by __FILE__ string
    // FastPool<render::RenderPipelineState, unsigned long>::Destroy(render::RenderPipelineState*)
    void FastPool<render::RenderPipelineState, unsigned long>::Destroy(
        FastPool<render::RenderPipelineState, unsigned long>* this, RenderPipelineState* param_1) {
        if (param_1 != (RenderPipelineState*)0) {
            if (is_owner(this, param_1) == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("is_owner(entity)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          42, (char*)0);
            }
            param_1->~RenderPipelineState();
            deallocate(this, param_1);
        }
    }

    // 0x100c0ba60, 96 bytes, inline, placed by __FILE__ string
    // FastPool<render::RenderPipelineState, unsigned long>::deallocate(render::RenderPipelineState const*)
    void FastPool<render::RenderPipelineState, unsigned long>::deallocate(
        FastPool<render::RenderPipelineState, unsigned long>* this, RenderPipelineState* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * -8555011744329067416));
    }

    // 0x100c0bac0, 160 bytes, inline, placed by __FILE__ string
    // FastPool<render::RenderPipelineState, unsigned long>::deallocate(unsigned long)
    void FastPool<render::RenderPipelineState, unsigned long>::deallocate(
        FastPool<render::RenderPipelineState, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100c0bb90, 96 bytes, inline, placed by __FILE__ string
    // FastPool<render::OutputMergerState, unsigned long>::Destroy(render::OutputMergerState*)
    void FastPool<render::OutputMergerState, unsigned long>::Destroy(
        FastPool<render::OutputMergerState, unsigned long>* this, OutputMergerState* param_1) {
        if (param_1 != (OutputMergerState*)0) {
            if (is_owner(this, param_1) == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("is_owner(entity)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          42, (char*)0);
            }
            param_1->~OutputMergerState();
            deallocate(this, param_1);
        }
    }

    // 0x100c0bbf0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<render::OutputMergerState, unsigned long>::deallocate(render::OutputMergerState const*)
    void FastPool<render::OutputMergerState, unsigned long>::deallocate(
        FastPool<render::OutputMergerState, unsigned long>* this, OutputMergerState* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(ulong*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 4) * 8513881880173639208));
    }

    // 0x100c0bc50, 160 bytes, inline, placed by __FILE__ string
    // FastPool<render::OutputMergerState, unsigned long>::deallocate(unsigned long)
    void FastPool<render::OutputMergerState, unsigned long>::deallocate(
        FastPool<render::OutputMergerState, unsigned long>* this, ulong param_1) {
        long lVar1;
        long lVar2;

        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(long*)(this + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar1 = *(long*)(this + 8);
        lVar2 = *(long*)(lVar1 + param_1 * 8);
        *(undefined8*)(*(long*)(this + 16) + *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) * 8) =
            *(undefined8*)(*(long*)(this + 16) + lVar2 * 8);
        *(undefined8*)(lVar1 + param_1 * 8) = *(undefined8*)(lVar1 + -8 + *(long*)(this + 24) * 8);
        *(long*)(lVar1 + -8 + *(long*)(this + 24) * 8) = lVar2;
        *(long*)(this + 24) = *(long*)(this + 24) + -1;
    }

    // 0x100c34750, 256 bytes, inline, placed by __FILE__ string
    // FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::resize(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::resize(
        FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 40, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100c3cfb0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<render::InputAssemblerState, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<render::InputAssemblerState, unsigned long>::resize(
        FastPool<render::InputAssemblerState, unsigned long>* this, ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 192, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100c3d3c0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<render::RenderPipelineState, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<render::RenderPipelineState, unsigned long>::resize(
        FastPool<render::RenderPipelineState, unsigned long>* this, ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 1104, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100c3d7d0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<render::ComputePipelineState, unsigned long>::resize(unsigned long, unsigned long)
    void FastPool<render::ComputePipelineState, unsigned long>::resize(
        FastPool<render::ComputePipelineState, unsigned long>* this, ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 8) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc(param_1 * 640, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100c3dbe0, 240 bytes, inline, placed by __FILE__ string
    // FastPool<render::OutputMergerState, unsigned long>::resize(unsigned long, unsigned long)
    void
    FastPool<render::OutputMergerState, unsigned long>::resize(FastPool<render::OutputMergerState, unsigned long>* this,
                                                               ulong param_1, ulong param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((param_1 != 0) && (*(ulong*)(this + 32) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            uVar2 = aligned_alloc(param_1 * 208, param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(8), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(8), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(ulong*)(this + 32) = param_1;
        }
        Reset();
    }

    // 0x100c42aa0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<render::InputAssemblerState, unsigned long>::allocate()
    long FastPool<render::InputAssemblerState, unsigned long>::allocate(
        FastPool<render::InputAssemblerState, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 192 + lVar3;
    }

    // 0x100c42fe0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<render::RenderPipelineState, unsigned long>::allocate()
    long FastPool<render::RenderPipelineState, unsigned long>::allocate(
        FastPool<render::RenderPipelineState, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 1104 + lVar3;
    }

    // 0x100c43f20, 96 bytes, inline, placed by __FILE__ string
    // FastPool<render::OutputMergerState, unsigned long>::allocate()
    long FastPool<render::OutputMergerState, unsigned long>::allocate(
        FastPool<render::OutputMergerState, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 208 + lVar3;
    }

    // 0x100c454b0, 96 bytes, inline, placed by __FILE__ string
    // FastPool<render::ComputePipelineState, unsigned long>::allocate()
    long FastPool<render::ComputePipelineState, unsigned long>::allocate(
        FastPool<render::ComputePipelineState, unsigned long>* this) {
        ulong uVar1;
        long lVar2;
        long lVar3;

        uVar1 = *(ulong*)(this + 24);
        if (*(ulong*)(this + 32) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar2 = *(long*)(*(long*)(this + 8) + uVar1 * 8);
        lVar3 = *(long*)this;
        *(ulong*)(*(long*)(this + 16) + lVar2 * 8) = uVar1;
        *(long*)(this + 24) = *(long*)(this + 24) + 1;
        return lVar2 * 640 + lVar3;
    }

    // 0x100c80020, 80 bytes, inline, placed by __FILE__ string
    // FastPool<game::console::Snow::SnowFlake, int>::deallocate(game::console::Snow::SnowFlake const*)
    void FastPool<game::console::Snow::SnowFlake, int>::deallocate(FastPool<game::console::Snow::SnowFlake, int>* this,
                                                                   SnowFlake* param_1) {
        if (is_owner(this, param_1) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("is_owner(entity)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 91,
                      (char*)0);
        }
        deallocate(this, *(int*)(*(long*)(this + 16) + ((long)param_1 - *(long*)this >> 3)));
    }

    // 0x100c920a0, 256 bytes, inline, placed by __FILE__ string
    // FastPool<game::console::Snow::SnowFlake, int>::resize(int, int)
    void FastPool<game::console::Snow::SnowFlake, int>::resize(FastPool<game::console::Snow::SnowFlake, int>* this,
                                                               int param_1, int param_2) {
        undefined1 auVar1[16];
        undefined8 uVar2;
        void* pvVar3;
        ulong uVar4;

        clear(this);
        if ((0 < param_1) && (*(int*)(this + 28) != param_1)) {
            safe_delete_array<float>((float**)(this + 16));
            safe_delete_array<float>((float**)(this + 8));
            aligned_dealloc(*(void**)this);
            *(undefined8*)this = 0;
            if ((uint)param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= __alignof(ENTITY)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          130, "Using less strict alignment than that of the entity?");
            }
            if (param_2 < 16) {
                /* WARNING: Subroutine does not return */
                LogAssert("alignment >= NEW_ALIGNMENT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                          131, "Using less strict alignment than the global alignment");
            }
            uVar2 = aligned_alloc((long)param_1 << 5, (long)param_2);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = (long)param_1;
            *(undefined8*)this = uVar2;
            uVar4 = 18446744073709551615;
            if (SUB168(auVar1 * ZEXT816(4), 8) == 0) {
                uVar4 = SUB168(auVar1 * ZEXT816(4), 0);
            }
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 8) = pvVar3;
            pvVar3 = operator_new__(uVar4);
            *(void**)(this + 16) = pvVar3;
            *(int*)(this + 28) = param_1;
        }
        Reset();
    }

    // 0x100c92290, 160 bytes, inline, placed by __FILE__ string
    // FastPool<game::console::Snow::SnowFlake, int>::deallocate(int)
    void FastPool<game::console::Snow::SnowFlake, int>::deallocate(FastPool<game::console::Snow::SnowFlake, int>* this,
                                                                   int param_1) {
        int iVar1;
        long lVar2;

        if ((param_1 < 0) || (*(int*)(this + 28) <= param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 99,
                      (char*)0);
        }
        if (*(int*)(this + 24) < 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_numAllocated > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl",
                      100, (char*)0);
        }
        lVar2 = *(long*)(this + 8);
        iVar1 = *(int*)(lVar2 + (long)param_1 * 4);
        *(undefined4*)(*(long*)(this + 16) + (long)*(int*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4) * 4) =
            *(undefined4*)(*(long*)(this + 16) + (long)iVar1 * 4);
        *(undefined4*)(lVar2 + (long)param_1 * 4) = *(undefined4*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4);
        *(int*)(lVar2 + -4 + (long)*(int*)(this + 24) * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + -1;
    }

    // 0x100c92330, 88 bytes, inline, placed by __FILE__ string
    // FastPool<game::console::Snow::SnowFlake, int>::allocate()
    long FastPool<game::console::Snow::SnowFlake, int>::allocate(FastPool<game::console::Snow::SnowFlake, int>* this) {
        int iVar1;
        long lVar2;
        long lVar3;

        iVar1 = *(int*)(this + 24);
        if (*(int*)(this + 28) <= iVar1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.inl", 83,
                "Run out of pool capacity for allocate()");
        }
        lVar3 = (long)*(int*)(*(long*)(this + 8) + (long)iVar1 * 4);
        lVar2 = *(long*)this;
        *(int*)(*(long*)(this + 16) + lVar3 * 4) = iVar1;
        *(int*)(this + 24) = *(int*)(this + 24) + 1;
        return lVar3 * 32 + lVar2;
    }

} // namespace jag
