// libs/oldscape/jagex3/core/bytepacking/Packet.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::oldscape {
    template <
        typename...> // 2 instantiations, e.g. <Array<unsigned char, eastl::allocator> >, <Array<unsigned char, BucketAllocatorEASTL> >
    class PacketJ {
    public:
        char g1Enc(Isaac&);
        bool CheckCrc();
        void PacketT(Array<unsigned char, eastl::allocator> const&);
        PacketJ();
        PacketJ(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&&);
        PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*
        operator=(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&&);
        void PacketT(eastl::vector<unsigned char, eastl::allocator> const&);
        void GetCrc(Array<unsigned char, eastl::allocator> const&, int, int);
        void PacketT(Array<unsigned char, BucketAllocatorEASTL>&&);
        ~PacketJ();
        void PacketT(unsigned long);
        gSmarts();
        void pSmartInt2(int);
        void PacketT(unsigned char const*, unsigned long);
        PacketJ<Array<unsigned char, eastl::allocator>>*
        operator=(PacketJ<Array<unsigned char, eastl::allocator>> const&);
        uint gMidiVarLen();
        void pMidiVarLen(int);
        PacketJ(PacketJ<Array<unsigned char, eastl::allocator>> const&);
        PacketJ(PacketJ<Array<unsigned char, eastl::allocator>>&&);
        int gSmartsExtend();
        int gSmart();
    };

    // 0x1000bc380, 96 bytes, inline, placed by debug map only (low confidence)
    // PacketJ<Array<unsigned char, eastl::allocator> >::g1Enc(Isaac&)
    char PacketJ<Array<unsigned char, eastl::allocator>>::g1Enc(PacketJ<Array<unsigned char, eastl::allocator>>* this,
                                                                Isaac* param_1) {
        char cVar1;
        char cVar2;
        int iVar3;
        vector* this_00;
        char* pcVar4;

        iVar3 = size();
        this_00 = SSOBeginPtr(param_1);
        pcVar4 = (char*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this_00, (long)iVar3);
        cVar1 = *pcVar4;
        cVar2 = param_1->TakeNextValue();
        SetPos((long)(iVar3 + 1));
        return cVar1 - cVar2;
    }

    // 0x1001375d0, 16 bytes, inline, placed by class header (inline)
    // PacketJ<Array<unsigned char, eastl::allocator> >::PacketT(eastl::vector<unsigned char, eastl::allocator> const&)
    void PacketJ<Array<unsigned char, eastl::allocator>>::PacketT(PacketJ<Array<unsigned char, eastl::allocator>>* this,
                                                                  vector* param_1) {
        new (this) PacketT<Array<unsigned char, eastl::allocator>>(param_1);
    }

    // 0x1001375e0, 16 bytes, inline, placed by class header (inline)
    // PacketJ<Array<unsigned char, eastl::allocator> >::PacketT(eastl::vector<unsigned char, eastl::allocator> const&)
    /* PacketT<Array<unsigned char, eastl::allocator> >::PacketT(eastl::vector<unsigned char,
   eastl::allocator> const&) */

    void PacketT<Array<unsigned char, eastl::allocator>>::PacketT(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                                  vector* param_1) {
        PacketT(this, param_1);
    }

    // 0x100183680, 16 bytes, inline, placed by class header (inline)
    // PacketJ<Array<unsigned char, eastl::allocator> >::PacketT(unsigned long)
    void PacketJ<Array<unsigned char, eastl::allocator>>::PacketT(PacketJ<Array<unsigned char, eastl::allocator>>* this,
                                                                  ulong param_1) {
        new (this) PacketT<Array<unsigned char, eastl::allocator>>(param_1);
    }

    // 0x100183720, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // PacketJ<Array<unsigned char, eastl::allocator> >::~PacketJ(): jumps straight to the base-object destructor

    // 0x10018e5e0, 16 bytes, inline, placed by class header (inline)
    // PacketJ<Array<unsigned char, BucketAllocatorEASTL> >::gSmarts()
    undefined2 PacketJ<Array<unsigned char, BucketAllocatorEASTL>>::gSmarts(
        PacketJ<Array<unsigned char, BucketAllocatorEASTL>>* this) {
        undefined2 uVar1;

        uVar1 = gSmart1or2();
        return uVar1;
    }

    // 0x100198180, 16 bytes, inline, placed by class header (inline)
    // PacketJ<Array<unsigned char, eastl::allocator> >::PacketT(unsigned long)
    /* PacketT<Array<unsigned char, eastl::allocator> >::PacketT(unsigned long) */

    void PacketT<Array<unsigned char, eastl::allocator>>::PacketT(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                                  ulong param_1) {
        PacketT(this, param_1);
    }

    // 0x100198190, 16 bytes, base-object destructor, inline, placed by class header (inline)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // PacketJ<Array<unsigned char, eastl::allocator> >::~PacketJ()
    /* VBOMapper::~VBOMapper() */

    void VBOMapper::~VBOMapper() {
        ~AudioDataContainer();
    }

    // 0x10020f810, 16 bytes, inline, placed by class header (inline)
    // PacketJ<Array<unsigned char, eastl::allocator> >::gSmarts()
    undefined2
    PacketJ<Array<unsigned char, eastl::allocator>>::gSmarts(PacketJ<Array<unsigned char, eastl::allocator>>* this) {
        undefined2 uVar1;

        uVar1 = gSmart1or2();
        return uVar1;
    }

    // 0x100210ae0, 144 bytes, inline, placed by class header (inline)
    // PacketJ<Array<unsigned char, eastl::allocator> >::pSmartInt2(int)
    void
    PacketJ<Array<unsigned char, eastl::allocator>>::pSmartInt2(PacketJ<Array<unsigned char, eastl::allocator>>* this,
                                                                int param_1) {
        int iVar1;
        vector* this_00;
        byte* pbVar2;
        type* ptVar3;

        ptVar3 = (type*)(ulong)(uint)param_1;
        if (param_1 < -1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "core/bytepacking/Packet.h",
                            54, "psmartint out of range - val: %i");
        }
        if (param_1 == -1) {
            PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)this, 32767);
        } else if (param_1 < 32767) {
            PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)this, (ulong)ptVar3);
        } else {
            PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)this, param_1);
            iVar1 = size();
            this_00 = SSOBeginPtr(ptVar3);
            pbVar2 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                (Array<unsigned char, eastl::allocator>*)this_00, (long)(iVar1 + -4));
            *pbVar2 = *pbVar2 | 128;
        }
    }

    // 0x1002ad770, 160 bytes, placed by the data it initialises
    // ___cxx_global_var_init.14
    void ___cxx_global_var_init_14() {
        uint* puVar1;

        puVar1 = (uint*)std::array<int, 3ul>::operator[](0);
        new (&shared::PacketPool::g_pools) shared::PacketPool(*puVar1);
        puVar1 = (uint*)std::array<int, 3ul>::operator[](1);
        new (&DAT_1016c1a58) shared::PacketPool(*puVar1);
        ___cxa_atexit(___cxx_global_array_dtor, 0, 4294967296);
    }

    // 0x1002b6390, 32 bytes, inline, placed by class header (inline)
    // PacketJ<Array<unsigned char, eastl::allocator> >::operator=(PacketJ<Array<unsigned char, eastl::allocator> > const&)
    /* PacketJ<Array<unsigned char, eastl::allocator>
   >::TEMPNAMEPLACEHOLDERVALUE(PacketJ<Array<unsigned char, eastl::allocator> >
   const&) */

    PacketJ<Array<unsigned char, eastl::allocator>>*
    PacketJ<Array<unsigned char, eastl::allocator>>::operator=(PacketJ<Array<unsigned char, eastl::allocator>>* this,
                                                               PacketJ* param_1) {
        PacketT<Array<unsigned char, eastl::allocator>>::operator=(
            (PacketT<Array<unsigned char, eastl::allocator>>*)this, (PacketT*)param_1);
        return this;
    }

    // 0x1002bdbc0, 16 bytes, inline, placed by class header (inline)
    // PacketJ<Array<unsigned char, BucketAllocatorEASTL> >::PacketT(unsigned char const*, unsigned long)
    void PacketJ<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(
        PacketJ<Array<unsigned char, BucketAllocatorEASTL>>* this, uchar* param_1, ulong param_2) {
        new (this) PacketT<Array<unsigned char, BucketAllocatorEASTL>>(param_1, param_2);
    }

    // 0x1002cb700, 160 bytes, inline, placed by class header (inline)
    // PacketJ<Array<unsigned char, eastl::allocator> >::gMidiVarLen()
    uint PacketJ<Array<unsigned char, eastl::allocator>>::gMidiVarLen(
        PacketJ<Array<unsigned char, eastl::allocator>>* this) {
        byte bVar1;
        long lVar2;
        vector* this_00;
        byte* pbVar3;
        uint uVar4;
        type* in_RSI;
        ulong uVar5;

        lVar2 = size();
        this_00 = SSOBeginPtr(in_RSI);
        pbVar3 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this_00, (long)(int)lVar2);
        bVar1 = *pbVar3;
        if ((char)bVar1 < '\0') {
            uVar5 = (lVar2 << 32) + 4294967296 >> 32;
            uVar4 = 0;
            do {
                uVar4 = (bVar1 & 127 | uVar4) << 7;
                pbVar3 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                    (Array<unsigned char, eastl::allocator>*)this_00, uVar5);
                bVar1 = *pbVar3;
                uVar5 = uVar5 + 1;
            } while ((char)bVar1 < '\0');
        } else {
            uVar5 = lVar2 + 1;
            uVar4 = 0;
        }
        SetPos((long)(int)uVar5);
        return (int)(char)bVar1 | uVar4;
    }

    // 0x1002cb7a0, 144 bytes, inline, placed by class header (inline)
    // PacketJ<Array<unsigned char, eastl::allocator> >::pMidiVarLen(int)
    void
    PacketJ<Array<unsigned char, eastl::allocator>>::pMidiVarLen(PacketJ<Array<unsigned char, eastl::allocator>>* this,
                                                                 int param_1) {
        if (127 < (uint)param_1) {
            if (16383 < (uint)param_1) {
                if (2097151 < (uint)param_1) {
                    if (268435455 < (uint)param_1) {
                        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                            (PacketT<Array<unsigned char, eastl::allocator>>*)this, (ulong)(param_1 >> 28 | 128));
                    }
                    PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                        (PacketT<Array<unsigned char, eastl::allocator>>*)this, (ulong)(param_1 >> 21 | 128));
                }
                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                    (PacketT<Array<unsigned char, eastl::allocator>>*)this, (ulong)(param_1 >> 14 | 128));
            }
            PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)this, (ulong)(param_1 >> 7 | 128));
        }
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)this, (ulong)(param_1 & 127));
    }

} // namespace jag::oldscape

namespace jag::oldscape::shared {
    class PacketPool {
    public:
        PacketPool(unsigned int);
        ~PacketPool();
        bool Fetch(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        void Return(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&&);
        static /* 16 bytes */ SIZES;                  // = { 100, 5000, 30000, 0 }
        static PacketPool /* 656 bytes */ g_pools[2]; // initialised in its definition

        // data members, from how the methods use this: 332 bytes
        char _unknown_0[320];
        int field_320;  // offset 320
        uint field_324; // offset 324
        char _unknown_328[4];
    };

    // 0x100d40140, 16 bytes, __const
    PacketPool::SIZES = {100, 5000, 30000, 0};

    // 0x1016c1910, 656 bytes, __common; set at startup by ___cxx_global_var_init.14
    PacketPool PacketPool::g_pools[2] = {
        /* [0] */ PacketPool(*puVar1),
        /* [1] */ PacketPool(*puVar1),
    };

    // 0x100292d80, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // PacketPool::PacketPool(unsigned int): jumps straight to the base-object constructor

    // 0x100292d90, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // PacketPool::~PacketPool(): jumps straight to the base-object destructor

    // 0x100292f60, 80 bytes, inline, placed by class header (inline)
    // PacketPool::Fetch(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    bool PacketPool::Fetch(PacketJ* param_1) {
        int iVar1;
        PacketJ* pPVar2;

        iVar1 = field_320;
        if ((long)iVar1 < 10) {
            pPVar2 = (PacketJ*)std::array<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, 10ul>::operator[](
                (array<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, 10ul>*)this, (long)iVar1);
            PacketJ<Array<unsigned char, BucketAllocatorEASTL>>::operator=(
                (PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, pPVar2);
            field_320 = field_320 + 1;
        }
        return iVar1 < 10;
    }

    // 0x100293070, 80 bytes, inline, placed by class header (inline)
    // PacketPool::Return(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&&)
    void PacketPool::Return(PacketJ* param_1) {
        ulong uVar1;
        PacketJ<Array<unsigned char, BucketAllocatorEASTL>>* this_00;

        uVar1 = param_1->GetTextureAtlas();
        if ((uVar1 == field_324) && (0 < (long)field_320)) {
            uVar1 = (long)field_320 - 1;
            field_320 = (int)uVar1;
            this_00 = (PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)
                std::array<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, 10ul>::operator[](
                    (array<PacketJ<Array<unsigned char, BucketAllocatorEASTL>>, 10ul>*)this, uVar1);
            PacketJ<Array<unsigned char, BucketAllocatorEASTL>>::operator=(this_00, param_1);
        }
    }

} // namespace jag::oldscape::shared

namespace jag {
    // 0x1000bc3e0, 16 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::g8()
    void PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::g8(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this) {
        gT<unsigned long long>(this);
    }

    // 0x1000bca00, 112 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gArrayBufferEncrypted(unsigned char*, int, int, Isaac&)
    void PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gArrayBufferEncrypted(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this, uchar* param_1, int param_2,
        int param_3, Isaac* param_4) {
        char cVar1;
        ulong uVar2;
        char cVar3;
        char* pcVar4;
        long lVar5;

        if (0 < param_3) {
            lVar5 = 0;
            do {
                uVar2 = *(ulong*)(this + 24);
                *(ulong*)(this + 24) = uVar2 + 1;
                pcVar4 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                    (Array<unsigned char, eastl::allocator>*)this, uVar2);
                cVar1 = *pcVar4;
                cVar3 = param_4->TakeNextValue();
                param_1[lVar5 + param_2] = cVar1 - cVar3;
                lVar5 = lVar5 + 1;
            } while (param_3 != (int)lVar5);
        }
    }

} // namespace jag
