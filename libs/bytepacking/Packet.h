// libs/bytepacking/Packet.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag {
    class PacketError {
    public:
        ~PacketError();
        PacketError(PacketErrorType);
        static PacketError /* 40 bytes */ NONE;          // = PacketError(0)
        static PacketError /* 40 bytes */ NOTLOADED;     // = PacketError(1)
        static PacketError /* 40 bytes */ UNIMPLEMENTED; // = PacketError(2)
        static PacketError /* 40 bytes */ MESSAGE;       // = PacketError(3)

        // data members, from how the methods use this: 16 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[12];
    };

    template <
        typename...> // 3 instantiations, e.g. <PacketT<Array<unsigned char, eastl::allocator> > >, <PacketT<Array<unsigned char, BucketAllocatorEASTL> > >, <PacketView>
    class PacketReaderMixin {
    public:
        ulong gSmart1or2EncTest(Isaac&);
        ushort gSmart1or2Enc(Isaac&);
        void gArrayBufferEncrypted(unsigned char*, int, int, Isaac&);
        void g8();
        uint g3();
        int g2s();
        uint g3s();
        uint gSmart2or4s();
        int gSmart1Or2Minus1();
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* gStringNoConversion(bool);
        unsigned long long gT<unsigned long long>();
        short gT<short>();
        ushort g2();
        void g4();
        g1();
        eastl::string gStringCP1252ToUTF8<eastl::string>(bool);
        int g1s();
        unsigned int gT<unsigned int>();
        unsigned long gStringCP1252ToUTF8<eastl::string>(eastl::string&, bool);
        unsigned short gT<unsigned short>();
        ushort gSmart1or2();
        ulong gVarInt();
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* gStringNoConversion(bool);
        void g1Arr(unsigned char*, unsigned long);
        float gTPE<float>();
        int gSmart1or2s();
        void g4s();
        int gT<int>();
        void gFloat();
        float gT<float>();
        void g4sArr(int*, unsigned long);
        void g8s();
        eastl::basic_string<char, BucketAllocatorEASTL>
        gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(bool);
        long long gT<long long>();
        unsigned long gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(
            eastl::basic_string<char, BucketAllocatorEASTL>&, bool);
        unsigned long gStringCP1252ToUTF8<eastl::fixed_string<char, 128, true, eastl::allocator>>(
            eastl::fixed_string<char, 128, true, eastl::allocator>&, bool);
        ulong gX(int);
        unsigned long gStringCP1252ToUTF8<eastl::fixed_string<char, 24, true, eastl::allocator>>(
            eastl::fixed_string<char, 24, true, eastl::allocator>&, bool);
        unsigned long gStringCP1252ToUTF8<eastl::fixed_string<char, 8, true, eastl::allocator>>(
            eastl::fixed_string<char, 8, true, eastl::allocator>&, bool);
        unsigned long gStringNoConversion<32, true>(eastl::fixed_string<char, 32, true, eastl::allocator>&, bool);
        int gTPE<int>();
        size_t gStringNoConversion(eastl::string&, bool);
        unsigned long gStringCP1252ToUTF8<eastl::fixed_string<char, 32, true, eastl::allocator>>(
            eastl::fixed_string<char, 32, true, eastl::allocator>&, bool);
        void gArrayBuffer(unsigned char*, unsigned long, unsigned long);
        void g2ArrLE(unsigned short*, unsigned long);
        void g2sArrLE(short*, unsigned long);
        void g1sArr(signed char*, unsigned long);
        void g2Arr(unsigned short*, unsigned long);
        void g4LE();
        unsigned int gTLE<unsigned int>();
        ushort g2LE();
        void gFloatLE();
        int g2sLE();
        unsigned short gTLE<unsigned short>();
        float gTLE<float>();
        short gTLE<short>();
        void
        gArrayBuffer<PacketT<Array<unsigned char, eastl::allocator>>>(PacketT<Array<unsigned char, eastl::allocator>>&,
                                                                      unsigned long);
        unsigned long gStringNoConversion<256, true>(eastl::fixed_string<char, 256, true, eastl::allocator>&, bool);
        uint gSmart2or4();
    };

    template <
        typename...> // 2 instantiations, e.g. <Array<unsigned char, eastl::allocator> >, <Array<unsigned char, BucketAllocatorEASTL> >
    class PacketT {
    public:
        class Bit;
        long GetSpace() const;
        void p1<oldscape::shared::LoginProt::ID>(oldscape::shared::LoginProt::ID);
        bool IsValid() const;
        void Skip(unsigned long);
        void p1<oldscape::ClientWindowMode>(oldscape::ClientWindowMode);
        void pSize2(unsigned short);
        void p8<unsigned long long>(unsigned long long);
        void p3<int>(int);
        void rsaEncrypt(math::BigInteger const&, math::BigInteger const&);
        void p4 < oldscape::shared::Version::{
            unnamed type #1
        }
        > (oldscape::shared::Version::{ unnamed type #1 });
        void p1<bool>(bool);
        PacketT(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&&);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>*
        operator=(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&&);
        void swap(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&);
        uint g4_alt1();
        uint g3_alt3();
        uint g3_alt2();
        uint g4_alt2();
        int g2s_alt1();
        g4_alt3();
        int g2s_alt2();
        uint g3s_alt2();
        uint g3s_alt1();
        PacketT(eastl::vector<unsigned char, eastl::allocator> const&);
        void p2_alt2(int);
        void p1_alt3(int);
        void p2_alt3(int);
        void p1_alt2(int);
        void p2_alt1(int);
        void p4_alt3(int);
        void p4_alt2(int);
        void p1_alt1(int);
        void p3_alt1(int);
        void pSize<unsigned short>(unsigned short);
        void p4_alt1(int);
        void pStringNoConversion<eastl::string>(eastl::string const&, bool);
        int predictLengthPStringNoConversion<eastl::string>(eastl::string&, bool);
        void pStringNoConversion(char const*, unsigned long, bool);
        void chunkRsaEncrypt(math::BigInteger const&, math::BigInteger const&);
        void p6<long long>(long long);
        void pStringUTF8ToCP1252<eastl::string>(eastl::string const&, bool);
        void SetPos(unsigned long);
        void tinyKeyEncrypt(std::array<int, 4ul> const&, unsigned long, unsigned long);
        GetSize() const;
        void pArrayBuffer(unsigned char const*, unsigned long, unsigned long);
        void GetDataPtr();
        void p2<unsigned long>(unsigned long);
        void tinyKeyDecrypt(std::array<int, 4ul> const&, unsigned long, unsigned long);
        PacketT<Array<unsigned char, eastl::allocator>>* GetDataArrayPtr();
        void pSize1(unsigned char);
        int predictLengthPStringUTF8ToCP1252<eastl::string const>(eastl::string const&, bool);
        void p2<int>(int);
        void pStringUTF8ToCP1252(char const*, bool);
        PacketT(Array<unsigned char, BucketAllocatorEASTL>&&);
        ~PacketT();
        void pArrayBuffer(PacketT<Array<unsigned char, eastl::allocator>> const&);
        int predictLengthPStringNoConversion(char const*, unsigned long, bool);
        void pT<signed char>(signed char);
        void pT<short>(short);
        void gArrayBuffer_alt2<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>(
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, unsigned long);
        void gArrayBuffer_alt2(unsigned char*, unsigned long, unsigned long);
        byte g1_alt1();
        uint g2_alt3();
        uint g2_alt2();
        char g1_alt2();
        char g1_alt3();
        int g1s_alt3();
        uint g1s_alt1();
        g2_alt1();
        int g1s_alt2();
        PacketT();
        PacketT(unsigned long);
        void Reserve(unsigned long);
        void pT<int>(int);
        void pT<long long>(long long);
        void pStringUTF8ToCP1252(char const*, unsigned long, bool);
        void pSize<unsigned char>(unsigned char);
        int predictLengthPStringUTF8ToCP1252(char const*, unsigned long, bool);
        void p2PlatformEndian(unsigned short);
        void p4PlatformEndian<unsigned int>(unsigned int);
        void p1<signed char>(signed char);
        void p4<unsigned short>(unsigned short);
        void p2<short>(short);
        void pTPE<unsigned short>(unsigned short);
        void pTPE<int>(int);
        void pSmart1or2s(short);
        void pSmart1or2(unsigned short);
        void p8<int>(int);
        void p1Isaac<unsigned char>(unsigned char, Isaac&);
        void p2<float>(float);
        void pVarInt(unsigned long long);
        void pArrayBuffer_alt1(unsigned char const*, unsigned long, unsigned long);
        void pSize4(unsigned int);
        void SetDataRaw(Array<unsigned char, eastl::allocator> const&);
        PacketT(unsigned char const*, unsigned long);
        void pTPE<float>(float);
        void pSize<unsigned int>(unsigned int);
        PacketT<Array<unsigned char, eastl::allocator>>* operator=(PacketT<Array<unsigned char, eastl::allocator>>&&);
        PacketT(PacketT<Array<unsigned char, eastl::allocator>> const&);
        void swap(PacketT<Array<unsigned char, eastl::allocator>>&);
        void predictLengthPStringUTF8ToCP1252(char const*, bool);
        void pX(long long, unsigned int);
        void pStringNoConversion(char const*, bool);
        void p4<float>(float);
        void Clear();
        PacketT<Array<unsigned char, eastl::allocator>>*
        operator=(PacketT<Array<unsigned char, eastl::allocator>> const&);
        PacketT<Array<unsigned char, eastl::allocator>>* ToString() const;
        void pArrayBuffer(PacketT<Array<unsigned char, eastl::allocator>> const&, unsigned long, unsigned long);
        void pArrayBuffer(PacketT<Array<unsigned char, BucketAllocatorEASTL>> const&, unsigned long, unsigned long);
        PacketT(Array<unsigned char, eastl::allocator>&&);
        void predictLengthPStringNoConversion(char const*, bool);
        int ReadUint(Array<unsigned char, eastl::allocator> const&, unsigned int);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* ToString() const;
        void p3<unsigned int>(unsigned int);
        PacketT<Array<unsigned char, eastl::allocator>>* ToStringPos() const;
        PacketT(PacketT<Array<unsigned char, eastl::allocator>>&&);
        PacketT<Array<unsigned char, eastl::allocator>>* ToString(int, int) const;
        PacketT(Array<unsigned char, eastl::allocator> const&);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* ToString(int, int) const;
        void pFloatPlatformEndian(float);
        void pFloat(float);
        void pT<float>(float);
    };

    template <typename...> // 1 instantiations, e.g.
    class PacketT::Bit {
    public:
        ~Bit();
        int gBit(unsigned int);
        int bitsLeft(unsigned int) const;
        Bit(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&);
    };

    // 0x1039b64a0, 40 bytes, __common; set at startup by ___cxx_global_var_init.293
    PacketError PacketError::NONE = PacketError(0);

    // 0x1039b64c8, 40 bytes, __common; set at startup by ___cxx_global_var_init.294
    PacketError PacketError::NOTLOADED = PacketError(1);

    // 0x1039b64f0, 40 bytes, __common; set at startup by ___cxx_global_var_init.295
    PacketError PacketError::UNIMPLEMENTED = PacketError(2);

    // 0x1039b6518, 40 bytes, __common; set at startup by ___cxx_global_var_init.296
    PacketError PacketError::MESSAGE = PacketError(3);

    // 0x1000172a0, 32 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::GetSpace() const
    /* PacketT<Array<unsigned char, eastl::allocator> >::GetSpace() const */

    long
    PacketT<Array<unsigned char, eastl::allocator>>::GetSpace(PacketT<Array<unsigned char, eastl::allocator>>* this) {
        long lVar1;

        lVar1 = end();
        return lVar1 - *(long*)(this + 24);
    }

    // 0x100135df0, 144 bytes, inline, placed by class header (inline)
    // unsigned long long PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gT<unsigned long long>()
    ulonglong PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gT<unsigned long long>(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this) {
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

    // 0x1001375f0, 128 bytes, base-object constructor, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, eastl::allocator> >::PacketT(eastl::vector<unsigned char, eastl::allocator> const&)
    void PacketT<Array<unsigned char, eastl::allocator>>::PacketT(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                                  vector* param_1) {
        ulong uVar1;
        void* pvVar2;
        void* pvVar3;
        size_t sVar4;

        new (this) Array<unsigned char, eastl::allocator>();
        *(undefined8*)(this + 24) = 0;
        uVar1 = param_1->size();
        Reserve(this, uVar1);
        pvVar2 = (void*)data();
        pvVar3 = (void*)param_1->HeapBeginPtr();
        sVar4 = param_1->size();
        _memcpy(pvVar2, pvVar3, sVar4);
    }

    // 0x100147f40, 192 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::p4_alt2(int)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4_alt2(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, int param_1) {
        long lVar1;
        ulong uVar2;
        undefined1* puVar3;

        lVar1 = *(long*)(this + 24);
        uVar2 = end();
        if (uVar2 < lVar1 + 4U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + 4 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      783, (char*)0);
        }
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *puVar3 = (char)((uint)param_1 >> 8);
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *puVar3 = (char)param_1;
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *puVar3 = (char)((uint)param_1 >> 24);
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *puVar3 = (char)((uint)param_1 >> 16);
    }

    // 0x100148000, 112 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::p1_alt1(int)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1_alt1(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, int param_1) {
        long lVar1;
        ulong uVar2;
        byte* pbVar3;

        lVar1 = *(long*)(this + 24);
        uVar2 = end();
        if (uVar2 < lVar1 + 1U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + 1 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.h", 619,
                      (char*)0);
        }
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        pbVar3 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *pbVar3 = (byte)param_1 ^ 128;
    }

    // 0x100148070, 160 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::p3_alt1(int)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p3_alt1(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, int param_1) {
        long lVar1;
        ulong uVar2;
        undefined1* puVar3;

        lVar1 = *(long*)(this + 24);
        uVar2 = end();
        if (uVar2 < lVar1 + 3U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + 3 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      701, (char*)0);
        }
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *puVar3 = (char)param_1;
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *puVar3 = (char)((uint)param_1 >> 8);
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *puVar3 = (char)((uint)param_1 >> 16);
    }

    // 0x100148110, 64 bytes, inline, placed by class header (inline)
    // void PacketT<Array<unsigned char, BucketAllocatorEASTL> >::pSize<unsigned short>(unsigned short)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pSize<unsigned short>(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, ushort param_1) {
        long lVar1;
        long lVar2;
        undefined2 in_register_00000032;
        ushort local_1a;

        lVar1 = *(long*)(this + 24);
        local_1a = param_1;
        ReorderToBE<short>((short*)&local_1a);
        lVar2 = data();
        *(ushort*)((lVar1 - (ulong)CONCAT22(in_register_00000032, param_1)) + -2 + lVar2) = local_1a;
    }

    // 0x10015dae0, 80 bytes, inline, placed by class header (inline)
    // void PacketT<Array<unsigned char, BucketAllocatorEASTL> >::pStringNoConversion<eastl::string >(eastl::string const&, bool)
    /* void PacketT<Array<unsigned char, BucketAllocatorEASTL>
   >::pStringNoConversion<eastl::fixed_string<char, 32, true, eastl::allocator>
   >(eastl::fixed_string<char, 32, true, eastl::allocator> const&, bool) */

    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringNoConversion<
        eastl::fixed_string<char, 32, true, eastl::allocator>>(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, fixed_string* param_1, bool param_2) {
        char* pcVar1;
        ulong uVar2;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        pStringNoConversion(this, pcVar1, uVar2, param_2);
    }

    // 0x10015db60, 64 bytes, inline, placed by class header (inline)
    // int PacketT<Array<unsigned char, eastl::allocator> >::predictLengthPStringNoConversion<eastl::string >(eastl::string&, bool)
    /* int PacketT<Array<unsigned char, eastl::allocator>
   >::predictLengthPStringNoConversion<eastl::string
   const>(eastl::string const&, bool) */

    int PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringNoConversion<eastl::stringconst>(
        basic_string* param_1, bool param_2) {
        char* pcVar1;
        ulong uVar2;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        return predictLengthPStringNoConversion(pcVar1, uVar2, param_2);
    }

    // 0x10016fd30, 176 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::pStringNoConversion(char const*, unsigned long, bool)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringNoConversion(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, char* param_1, ulong param_2, bool param_3) {
        long lVar1;
        undefined1* puVar2;
        ulong uVar3;
        void* pvVar4;
        undefined7 in_register_00000009;

        if ((int)CONCAT71(in_register_00000009, param_3) != 0) {
            uVar3 = *(ulong*)(this + 24);
            *(ulong*)(this + 24) = uVar3 + 1;
            puVar2 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar3);
            *puVar2 = 0;
        }
        lVar1 = *(long*)(this + 24);
        uVar3 = end();
        if (uVar3 < param_2 + lVar1 + 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + len + 1 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      311, (char*)0);
        }
        pvVar4 = (void*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(ulong*)(this + 24));
        _memcpy(pvVar4, param_1, param_2);
        lVar1 = *(long*)(this + 24);
        *(ulong*)(this + 24) = lVar1 + param_2 + 1;
        puVar2 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, lVar1 + param_2);
        *puVar2 = 0;
    }

    // 0x10017cc50, 16 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::pSize1(unsigned char)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pSize1(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, uchar param_1) {
        pSize<unsigned char>(this, param_1);
    }

    // 0x100183610, 64 bytes, inline, placed by class header (inline)
    // int PacketT<Array<unsigned char, eastl::allocator> >::predictLengthPStringUTF8ToCP1252<eastl::string const>(eastl::string const&, bool)
    /* int PacketT<Array<unsigned char, eastl::allocator>
   >::predictLengthPStringUTF8ToCP1252<eastl::string
   >(eastl::string&, bool) */

    int PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<eastl::string>(
        basic_string* param_1, bool param_2) {
        char* pcVar1;
        ulong uVar2;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        return predictLengthPStringUTF8ToCP1252(pcVar1, uVar2, param_2);
    }

    // 0x100183690, 16 bytes, inline, placed by class header (inline)
    // void PacketT<Array<unsigned char, eastl::allocator> >::p2<int>(int)
    /* void PacketT<Array<unsigned char, eastl::allocator> >::p2<unsigned long>(unsigned long)
    */

    void PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
        PacketT<Array<unsigned char, eastl::allocator>>* this, ulong param_1) {
        pT<short>(this, (short)param_1);
    }

    // 0x1001836a0, 80 bytes, inline, placed by class header (inline)
    // void PacketT<Array<unsigned char, eastl::allocator> >::pStringUTF8ToCP1252<eastl::string >(eastl::string const&, bool)
    /* void PacketT<Array<unsigned char, eastl::allocator>
   >::pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>
   >(eastl::basic_string<char, BucketAllocatorEASTL> const&, bool) */

    void PacketT<Array<unsigned char, eastl::allocator>>::pStringUTF8ToCP1252<
        eastl::basic_string<char, BucketAllocatorEASTL>>(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                         basic_string* param_1, bool param_2) {
        char* pcVar1;
        ulong uVar2;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        pStringUTF8ToCP1252(this, pcVar1, uVar2, param_2);
    }

    // 0x100184030, 16 bytes, inline, placed by class header (inline)
    // PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::g2()
    ushort PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::g2(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this) {
        return gT<unsigned short>(this);
    }

    // 0x10018d2a0, 32 bytes, inline, placed by class header (inline)
    // PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::g1()
    undefined1 PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::g1(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this) {
        ulong uVar1;
        undefined1* puVar2;

        uVar1 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar1 + 1;
        puVar2 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar1);
        return *puVar2;
    }

    // 0x10018e530, 80 bytes, inline, placed by class header (inline)
    // eastl::string PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::gStringCP1252ToUTF8<eastl::string >(bool)
    PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*
    PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this, bool param_1) {
        bool in_DL;
        undefined7 in_register_00000031;

        new (this) eastl::string();
        gStringCP1252ToUTF8<eastl::string>((PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)
                                               CONCAT71(in_register_00000031, param_1),
                                           (basic_string*)this, in_DL);
        return this;
    }

    // 0x1001a71e0, 64 bytes, inline, placed by class header (inline)
    // void PacketT<Array<unsigned char, BucketAllocatorEASTL> >::pSize<unsigned char>(unsigned char)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pSize<unsigned char>(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, uchar param_1) {
        long lVar1;
        long lVar2;
        undefined3 in_register_00000031;
        undefined4 in_register_00000034;
        jag local_19;

        lVar1 = *(long*)(this + 24);
        local_19 = (jag)param_1;
        ReorderToBE<unsigned char>(&local_19,
                                   (uchar*)CONCAT44(in_register_00000034, CONCAT31(in_register_00000031, param_1)));
        lVar2 = data();
        *(jag*)(lVar2 + ~(ulong)CONCAT31(in_register_00000031, param_1) + lVar1) = local_19;
    }

    // 0x1001a8c60, 272 bytes, inline, placed by class header (inline)
    // unsigned long PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::gStringCP1252ToUTF8<eastl::string >(eastl::string&, bool)
    ulong PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this, basic_string* param_1,
        bool param_2) {
        char cVar1;
        long lVar2;
        char* pcVar3;
        undefined8 uVar4;
        size_t sVar5;
        ulong uVar6;
        undefined7 in_register_00000011;

        if ((int)CONCAT71(in_register_00000011, param_2) != 0) {
            uVar6 = *(ulong*)(this + 24);
            *(ulong*)(this + 24) = uVar6 + 1;
            pcVar3 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar6);
            cVar1 = *pcVar3;
            if (cVar1 != '\0') {
                uVar4 = logger::default_logger();
                logger::Logger::Log(uVar4, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                                    "PacketMixins.inl",
                                    399, "Bad version number in gStringCP1252ToUTF8: %d", cVar1);
                eastl::string::clear();
                return 0;
            }
        }
        pcVar3 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(ulong*)(this + 24));
        sVar5 = _strlen(pcVar3);
        lVar2 = *(long*)(this + 24);
        uVar6 = end();
        if (uVar6 < lVar2 + sVar5 + 1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos + len + 1 <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                407, (char*)0);
        }
        if (sVar5 == 0) {
            *(long*)(this + 24) = *(long*)(this + 24) + 1;
            eastl::string::clear();
            sVar5 = 0;
        } else {
            stringtools::CP1252ToUTF8<eastl::string>(pcVar3, sVar5 & 4294967295, param_1);
            *(size_t*)(this + 24) = *(long*)(this + 24) + sVar5 + 1;
        }
        return sVar5;
    }

    // 0x1001a8d70, 144 bytes, inline, placed by class header (inline)
    // unsigned short PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::gT<unsigned short>()
    ushort PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gT<unsigned short>(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this) {
        ulong uVar1;
        long lVar2;
        undefined8 uVar3;
        long lVar4;
        ulong uVar5;
        undefined8 uVar6;
        ushort local_2a;

        lVar4 = data();
        lVar2 = *(long*)(this + 24);
        uVar1 = lVar2 + 2;
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
        local_2a = *(ushort*)(lVar4 + lVar2);
        ReorderToBE<short>((short*)&local_2a);
        return local_2a;
    }

    // 0x1001aaae0, 144 bytes, inline, placed by class header (inline)
    // unsigned short PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gT<unsigned short>()
    ushort PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gT<unsigned short>(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this) {
        ulong uVar1;
        long lVar2;
        undefined8 uVar3;
        long lVar4;
        ulong uVar5;
        undefined8 uVar6;
        ushort local_2a;

        lVar4 = data();
        lVar2 = *(long*)(this + 24);
        uVar1 = lVar2 + 2;
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
        local_2a = *(ushort*)(lVar4 + lVar2);
        ReorderToBE<short>((short*)&local_2a);
        return local_2a;
    }

    // 0x1001aafe0, 272 bytes, inline, placed by class header (inline)
    // unsigned long PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gStringCP1252ToUTF8<eastl::string >(eastl::string&, bool)
    ulong PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this, basic_string* param_1, bool param_2) {
        char cVar1;
        long lVar2;
        char* pcVar3;
        undefined8 uVar4;
        size_t sVar5;
        ulong uVar6;
        undefined7 in_register_00000011;

        if ((int)CONCAT71(in_register_00000011, param_2) != 0) {
            uVar6 = *(ulong*)(this + 24);
            *(ulong*)(this + 24) = uVar6 + 1;
            pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                (Array<unsigned char, eastl::allocator>*)this, uVar6);
            cVar1 = *pcVar3;
            if (cVar1 != '\0') {
                uVar4 = logger::default_logger();
                logger::Logger::Log(uVar4, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                                    "PacketMixins.inl",
                                    399, "Bad version number in gStringCP1252ToUTF8: %d", cVar1);
                eastl::string::clear();
                return 0;
            }
        }
        pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, *(ulong*)(this + 24));
        sVar5 = _strlen(pcVar3);
        lVar2 = *(long*)(this + 24);
        uVar6 = end();
        if (uVar6 < lVar2 + sVar5 + 1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos + len + 1 <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                407, (char*)0);
        }
        if (sVar5 == 0) {
            *(long*)(this + 24) = *(long*)(this + 24) + 1;
            eastl::string::clear();
            sVar5 = 0;
        } else {
            stringtools::CP1252ToUTF8<eastl::string>(pcVar3, sVar5 & 4294967295, param_1);
            *(size_t*)(this + 24) = *(long*)(this + 24) + sVar5 + 1;
        }
        return sVar5;
    }

    // 0x1001abe70, 32 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, eastl::allocator> >::predictLengthPStringUTF8ToCP1252(char const*, unsigned long, bool)
    int PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252(char* param_1, ulong param_2,
                                                                                          bool param_3) {
        undefined3 in_register_00000011;

        return stringtools::GetUTF8StringWidth(param_1, param_2) + CONCAT31(in_register_00000011, param_3) + 1;
    }

    // 0x1001abef0, 176 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, eastl::allocator> >::pStringUTF8ToCP1252(char const*, unsigned long, bool)
    void PacketT<Array<unsigned char, eastl::allocator>>::pStringUTF8ToCP1252(
        PacketT<Array<unsigned char, eastl::allocator>>* this, char* param_1, ulong param_2, bool param_3) {
        ulong uVar1;
        undefined1 uVar2;
        wchar16 wVar3;
        undefined1* puVar4;
        undefined3 in_register_00000009;
        ulong local_38;

        if (CONCAT31(in_register_00000009, param_3) != 0) {
            uVar1 = *(ulong*)(this + 24);
            *(ulong*)(this + 24) = uVar1 + 1;
            puVar4 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                (Array<unsigned char, eastl::allocator>*)this, uVar1);
            *puVar4 = 0;
        }
        local_38 = 0;
        if (param_2 != 0) {
            do {
                wVar3 = stringtools::GetUTF8NextChar(param_1, &local_38, param_2);
                uVar2 = stringtools::WideToCP1252(wVar3);
                uVar1 = *(ulong*)(this + 24);
                *(ulong*)(this + 24) = uVar1 + 1;
                puVar4 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                    (Array<unsigned char, eastl::allocator>*)this, uVar1);
                *puVar4 = uVar2;
            } while (local_38 < param_2);
        }
        uVar1 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar1 + 1;
        puVar4 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, uVar1);
        *puVar4 = 0;
    }

    // 0x1001ca9f0, 16 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, eastl::allocator> >::p2PlatformEndian(unsigned short)
    void PacketT<Array<unsigned char, eastl::allocator>>::p2PlatformEndian(
        PacketT<Array<unsigned char, eastl::allocator>>* this, ushort param_1) {
        pTPE<unsigned short>(this, param_1);
    }

    // 0x1001caa10, 16 bytes, inline, placed by class header (inline)
    // void PacketT<Array<unsigned char, eastl::allocator> >::p4PlatformEndian<unsigned int>(unsigned int)
    void PacketT<Array<unsigned char, eastl::allocator>>::p4PlatformEndian<unsigned int>(
        PacketT<Array<unsigned char, eastl::allocator>>* this, uint param_1) {
        pTPE<int>(this, param_1);
    }

    // 0x1001caa20, 128 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, eastl::allocator> >::p2_alt1(int)
    void PacketT<Array<unsigned char, eastl::allocator>>::p2_alt1(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                                  int param_1) {
        long lVar1;
        ulong uVar2;
        undefined1* puVar3;

        lVar1 = *(long*)(this + 24);
        uVar2 = end();
        if (uVar2 < lVar1 + 2U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + 2 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      632, (char*)0);
        }
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, uVar2);
        *puVar3 = (char)param_1;
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, uVar2);
        *puVar3 = (char)((uint)param_1 >> 8);
    }

    // 0x1001caac0, 16 bytes, inline, placed by class header (inline)
    // void PacketT<Array<unsigned char, eastl::allocator> >::p1<signed char>(signed char)
    /* void PacketT<Array<unsigned char, eastl::allocator> >::p1<bool>(bool) */

    void PacketT<Array<unsigned char, eastl::allocator>>::p1<bool>(bool param_1) {
        pT<signed char>();
    }

    // 0x1001cab00, 192 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, eastl::allocator> >::p4_alt1(int)
    void PacketT<Array<unsigned char, eastl::allocator>>::p4_alt1(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                                  int param_1) {
        long lVar1;
        ulong uVar2;
        undefined1* puVar3;

        lVar1 = *(long*)(this + 24);
        uVar2 = end();
        if (uVar2 < lVar1 + 4U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + 4 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      773, (char*)0);
        }
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, uVar2);
        *puVar3 = (char)param_1;
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, uVar2);
        *puVar3 = (char)((uint)param_1 >> 8);
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, uVar2);
        *puVar3 = (char)((uint)param_1 >> 16);
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, uVar2);
        *puVar3 = (char)((uint)param_1 >> 24);
    }

    // 0x10020d2a0, 96 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, eastl::allocator> >::pSmart1or2(unsigned short)
    void
    PacketT<Array<unsigned char, eastl::allocator>>::pSmart1or2(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                                ushort param_1) {
        undefined8 in_RAX;
        undefined4 uVar2;
        undefined8 uVar1;
        int iVar3;
        undefined6 in_register_00000032;

        uVar2 = (undefined4)((ulong)in_RAX >> 32);
        if (param_1 < 128) {
            p1<unsigned long>(this, (ulong)param_1 & 255);
        } else {
            iVar3 = (int)CONCAT62(in_register_00000032, param_1);
            if ((short)param_1 < 0) {
                uVar1 = logger::default_logger();
                logger::Logger::Log(
                    uVar1, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl", 201,
                    "pSmart1or2 out of range - val: %u", CONCAT44(uVar2, iVar3));
            } else {
                p2<unsigned long>(this, (ulong)(iVar3 + 32768));
            }
        }
    }

    // 0x10022e5e0, 64 bytes, inline, placed by class header (inline)
    // PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gSmart1Or2Minus1()
    int PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gSmart1Or2Minus1(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this) {
        short sVar2;
        char* pcVar3;

        pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, *(ulong*)(this + 24));
        if (*pcVar3 < '\0') {
            sVar2 = g2(this);
            sVar2 = sVar2 + 32767;
        } else {
            sVar2 = g1(this) - 1;
        }
        return (int)sVar2;
    }

    // 0x10023a9d0, 80 bytes, inline, placed by class header (inline)
    // PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gVarInt()
    ulong PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gVarInt(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this) {
        byte bVar1;
        byte bVar2;
        ulong uVar3;

        uVar3 = 0;
        bVar2 = 0;
        do {
            bVar1 = g1(this);
            uVar3 = uVar3 | (ulong)(bVar1 & 127) << (bVar2 & 63);
            bVar2 = bVar2 + 7;
        } while ((char)bVar1 < '\0');
        return uVar3;
    }

    // 0x100260930, 64 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::pStringUTF8ToCP1252(char const*, bool)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, char* param_1, bool param_2) {
        size_t sVar1;

        sVar1 = _strlen(param_1);
        pStringUTF8ToCP1252(this, param_1, sVar1, param_2);
    }

    // 0x100263ef0, 16 bytes, inline, placed by class header (inline)
    // void PacketT<Array<unsigned char, BucketAllocatorEASTL> >::p8<int>(int)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<int>(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, int param_1) {
        pT<long long>(this, (long)param_1);
    }

    // 0x10029a200, 112 bytes, inline, placed by class header (inline)
    // PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::g1Arr(unsigned char*, unsigned long)
    void PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::g1Arr(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this, uchar* param_1, ulong param_2) {
        ulong uVar1;
        long lVar2;

        lVar2 = *(long*)(this + 24);
        uVar1 = end();
        if (uVar1 < lVar2 + param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos + sizeof(uint8) * count <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                257, (char*)0);
        }
        lVar2 = data();
        _memcpy(param_1, (void*)(lVar2 + *(long*)(this + 24)), param_2);
        *(ulong*)(this + 24) = *(long*)(this + 24) + param_2;
    }

    // 0x1002b63b0, 336 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, eastl::allocator> >::tinyKeyDecrypt(std::array<int, 4ul> const&, unsigned long, unsigned long)
    /* PacketT<Array<unsigned char, eastl::allocator> >::tinyKeyDecrypt(std::array<int, 4ul>
   const&, unsigned long, unsigned long) */

    void PacketT<Array<unsigned char, eastl::allocator>>::tinyKeyDecrypt(
        PacketT<Array<unsigned char, eastl::allocator>>* this, array* param_1, ulong param_2, ulong param_3) {
        undefined8 uVar1;
        uint uVar2;
        uint uVar3;
        int iVar4;
        ulong uVar5;
        int* piVar6;
        ulong uVar7;
        uint uVar8;

        uVar1 = *(undefined8*)(this + 24);
        *(ulong*)(this + 24) = param_2;
        if (7 < param_3 - param_2) {
            uVar7 = param_3 - param_2 >> 3;
            uVar5 = 1;
            if (1 < uVar7) {
                uVar5 = uVar7;
            }
            uVar7 = 0;
            do {
                uVar2 = g4();
                uVar3 = g4();
                iVar4 = -32;
                uVar8 = 3337565984;
                do {
                    piVar6 =
                        (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)param_1, (ulong)(uVar8 >> 11 & 3));
                    uVar3 = uVar3 - (*piVar6 + uVar8 ^ (uVar2 >> 5 ^ uVar2 << 4) + uVar2);
                    piVar6 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)param_1,
                                                                    (ulong)(uVar8 + 1640531527 & 3));
                    uVar2 = uVar2 - (*piVar6 + uVar8 + 1640531527 ^ (uVar3 >> 5 ^ uVar3 * 16) + uVar3);
                    iVar4 = iVar4 + 1;
                    uVar8 = uVar8 + 1640531527;
                } while (iVar4 != 0);
                *(long*)(this + 24) = *(long*)(this + 24) + -8;
                p4<int>(this, uVar2);
                p4<int>(this, uVar3);
                uVar7 = uVar7 + 1;
            } while (uVar7 != uVar5);
        }
        *(undefined8*)(this + 24) = uVar1;
    }

    // 0x1002cb990, 16 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, eastl::allocator> >::pSize4(unsigned int)
    /* PacketT<Array<unsigned char, BucketAllocatorEASTL> >::pSize4(unsigned int) */

    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pSize4(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, uint param_1) {
        pSize<unsigned int>(this, param_1);
    }

    // 0x1002e3530, 112 bytes, inline, placed by class header (inline)
    // void PacketT<Array<unsigned char, eastl::allocator> >::pTPE<float>(float)
    void
    PacketT<Array<unsigned char, eastl::allocator>>::pTPE<float>(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                                 float param_1) {
        long lVar1;
        ulong uVar2;
        long lVar3;

        lVar1 = *(long*)(this + 24);
        uVar2 = end();
        if (uVar2 < lVar1 + 4U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + sizeof(T) <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      72, (char*)0);
        }
        lVar3 = data();
        lVar1 = *(long*)(this + 24);
        *(float*)(lVar3 + lVar1) = param_1;
        *(long*)(this + 24) = lVar1 + 4;
    }

    // 0x1002e3650, 128 bytes, inline, placed by class header (inline)
    // float PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gTPE<float>()
    float PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gTPE<float>(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this) {
        ulong uVar1;
        long lVar2;
        undefined8 uVar3;
        long lVar4;
        ulong uVar5;
        undefined8 uVar6;

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
                53, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        return *(float*)(lVar4 + lVar2);
    }

    // 0x1002e4770, 64 bytes, inline, placed by class header (inline)
    // void PacketT<Array<unsigned char, eastl::allocator> >::pSize<unsigned int>(unsigned int)
    /* void PacketT<Array<unsigned char, BucketAllocatorEASTL> >::pSize<unsigned
   int>(unsigned int) */

    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pSize<unsigned int>(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, uint param_1) {
        long lVar1;
        long lVar2;
        uint local_1c;

        lVar1 = *(long*)(this + 24);
        local_1c = param_1;
        ReorderToBE<int>((int*)&local_1c);
        lVar2 = data();
        *(uint*)((lVar1 - (ulong)param_1) + -4 + lVar2) = local_1c;
    }

    // 0x100348770, 256 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::Bit::gBit(unsigned int)
    int PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit::gBit(uint param_1) {
        byte* pbVar1;
        int iVar2;
        uint uVar3;
        ulong uVar4;
        uint uVar5;
        ulong uVar6;
        uint uVar7;
        uint uVar8;
        ulong uVar9;

        uVar5 = *(uint*)(this + 8);
        uVar7 = 8 - (uVar5 & 7);
        uVar9 = ~(-1L << ((byte)uVar7 & 63));
        uVar8 = (uint)uVar9;
        uVar4 = (ulong)(uVar5 >> 3);
        *(uint*)(this + 8) = uVar5 + param_1;
        uVar5 = param_1;
        if (uVar7 < param_1) {
            iVar2 = 0;
            uVar6 = uVar4;
            uVar3 = uVar7;
            do {
                uVar4 = uVar6 + 1;
                pbVar1 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                    *(Array<unsigned char, BucketAllocatorEASTL>**)this, uVar6);
                uVar5 = uVar5 - uVar3;
                iVar2 = iVar2 + (((uint)*pbVar1 & (uint)uVar9) << ((byte)uVar5 & 63));
                if (uVar3 != 8) {
                    uVar9 = 255;
                }
                uVar8 = (uint)uVar9;
                uVar3 = 8;
                uVar7 = 8;
                uVar6 = uVar4;
            } while (8 < uVar5);
        } else {
            iVar2 = 0;
        }
        pbVar1 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            *(Array<unsigned char, BucketAllocatorEASTL>**)this, uVar4);
        uVar3 = (uint)(*pbVar1 >> ((char)uVar7 - (char)uVar5 & 63U)) & ~(uint)(-1L << ((byte)param_1 & 63));
        if (uVar7 == uVar5) {
            uVar3 = uVar8 & *pbVar1;
        }
        return iVar2 + uVar3;
    }

    // 0x1003488a0, 16 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::Bit::bitsLeft(unsigned int) const
    int PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit::bitsLeft(uint param_1) {
        return param_1 * 8 - *(int*)(this + 8);
    }

    // 0x1003a61f0, 32 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, eastl::allocator> >::operator=(PacketT<Array<unsigned char, eastl::allocator> >&&)
    /* PacketT<Array<unsigned char, eastl::allocator>
   >::TEMPNAMEPLACEHOLDERVALUE(PacketT<Array<unsigned char, eastl::allocator> >&&) */

    PacketT<Array<unsigned char, eastl::allocator>>*
    PacketT<Array<unsigned char, eastl::allocator>>::operator=(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                               PacketT* param_1) {
        swap(this, param_1);
        return this;
    }

    // 0x1003a6210, 16 bytes, inline, placed by class header (inline)
    // PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::g4s()
    void PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::g4s(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this) {
        gT<int>(this);
    }

    // 0x1003a6f10, 128 bytes, base-object constructor, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, eastl::allocator> >::PacketT(PacketT<Array<unsigned char, eastl::allocator> > const&)
    void PacketT<Array<unsigned char, eastl::allocator>>::PacketT(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                                  PacketT* param_1) {
        ulong uVar1;
        void* pvVar2;
        void* pvVar3;
        size_t sVar4;

        new (this) Array<unsigned char, eastl::allocator>();
        *(undefined8*)(this + 24) = *(undefined8*)(param_1 + 24);
        uVar1 = param_1->end();
        Reserve(this, uVar1);
        pvVar2 = (void*)data();
        pvVar3 = (void*)param_1->data();
        sVar4 = param_1->end();
        _memcpy(pvVar2, pvVar3, sVar4);
    }

    // 0x1003a6f90, 16 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, eastl::allocator> >::Reserve(unsigned long)
    void PacketT<Array<unsigned char, eastl::allocator>>::Reserve(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                                  ulong param_1) {
        set_max_size(param_1, 5);
    }

    // 0x1003b0380, 48 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, eastl::allocator> >::predictLengthPStringUTF8ToCP1252(char const*, bool)
    void PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252(char* param_1,
                                                                                           bool param_2) {
        size_t sVar1;

        sVar1 = _strlen(param_1);
        predictLengthPStringUTF8ToCP1252(param_1, sVar1, param_2);
    }

    // 0x1004a6490, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.293
    void ___cxx_global_var_init_293() {
        new (&PacketError::NONE) PacketError(0);
        ___cxa_atexit(PTR__LanguageMessage_100ee5558, &PacketError::NONE, 4294967296);
    }

    // 0x1004a64d0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.294
    void ___cxx_global_var_init_294() {
        new (&PacketError::NOTLOADED) PacketError(1);
        ___cxa_atexit(PTR__LanguageMessage_100ee5558, &PacketError::NOTLOADED, 4294967296);
    }

    // 0x1004a6510, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.295
    void ___cxx_global_var_init_295() {
        new (&PacketError::UNIMPLEMENTED) PacketError(2);
        ___cxa_atexit(PTR__LanguageMessage_100ee5558, &PacketError::UNIMPLEMENTED, 4294967296);
    }

    // 0x1004a6550, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.296
    void ___cxx_global_var_init_296() {
        new (&PacketError::MESSAGE) PacketError(3);
        ___cxa_atexit(PTR__LanguageMessage_100ee5558, &PacketError::MESSAGE, 4294967296);
    }

    // 0x1004cd940, 16 bytes, inline, placed by class header (inline)
    // PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::g8s()
    void PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::g8s(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this) {
        gT<long long>(this);
    }

    // 0x1004cd980, 16 bytes, inline, placed by class header (inline)
    // PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::g8s()
    void PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::g8s(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this) {
        gT<long long>(this);
    }

    // 0x1004cda90, 80 bytes, inline, placed by class header (inline)
    // eastl::basic_string<char, BucketAllocatorEASTL> PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL> >(bool)
    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*
    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
        eastl::basic_string<char, BucketAllocatorEASTL>>(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this, bool param_1) {
        bool in_DL;
        undefined7 in_register_00000031;

        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(
            (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)CONCAT71(in_register_00000031,
                                                                                          param_1),
            (basic_string*)this, in_DL);
        return this;
    }

    // 0x1004cdb30, 80 bytes, inline, placed by class header (inline)
    // eastl::basic_string<char, BucketAllocatorEASTL> PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL> >(bool)
    PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*
    PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
        eastl::basic_string<char, BucketAllocatorEASTL>>(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this, bool param_1) {
        bool in_DL;
        undefined7 in_register_00000031;

        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(
            (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)CONCAT71(in_register_00000031,
                                                                                              param_1),
            (basic_string*)this, in_DL);
        return this;
    }

    // 0x1004d4970, 144 bytes, inline, placed by class header (inline)
    // long long PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gT<long long>()
    longlong PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gT<long long>(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this) {
        ulong uVar1;
        long lVar2;
        undefined8 uVar3;
        long lVar4;
        ulong uVar5;
        undefined8 uVar6;
        longlong local_30;

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
        local_30 = *(longlong*)(lVar4 + lVar2);
        ReorderToBE<long long>(&local_30);
        return local_30;
    }

    // 0x1004d4b10, 144 bytes, inline, placed by class header (inline)
    // long long PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::gT<long long>()
    longlong PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gT<long long>(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this) {
        ulong uVar1;
        long lVar2;
        undefined8 uVar3;
        long lVar4;
        ulong uVar5;
        undefined8 uVar6;
        longlong local_30;

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
        local_30 = *(longlong*)(lVar4 + lVar2);
        ReorderToBE<long long>(&local_30);
        return local_30;
    }

    // 0x1004d4ba0, 112 bytes, inline, placed by class header (inline)
    // void PacketT<Array<unsigned char, eastl::allocator> >::pT<long long>(long long)
    void PacketT<Array<unsigned char, eastl::allocator>>::pT<long long>(
        PacketT<Array<unsigned char, eastl::allocator>>* this, longlong param_1) {
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

    // 0x1004d4c10, 272 bytes, inline, placed by class header (inline)
    // unsigned long PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL> >(eastl::basic_string<char, BucketAllocatorEASTL>&, bool)
    ulong PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
        eastl::basic_string<char, BucketAllocatorEASTL>>(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this, basic_string* param_1, bool param_2) {
        char cVar1;
        long lVar2;
        char* pcVar3;
        undefined8 uVar4;
        size_t sVar5;
        ulong uVar6;
        undefined7 in_register_00000011;

        if ((int)CONCAT71(in_register_00000011, param_2) != 0) {
            uVar6 = *(ulong*)(this + 24);
            *(ulong*)(this + 24) = uVar6 + 1;
            pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                (Array<unsigned char, eastl::allocator>*)this, uVar6);
            cVar1 = *pcVar3;
            if (cVar1 != '\0') {
                uVar4 = logger::default_logger();
                logger::Logger::Log(uVar4, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                                    "PacketMixins.inl",
                                    399, "Bad version number in gStringCP1252ToUTF8: %d", cVar1);
                eastl::string::clear();
                return 0;
            }
        }
        pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, *(ulong*)(this + 24));
        sVar5 = _strlen(pcVar3);
        lVar2 = *(long*)(this + 24);
        uVar6 = end();
        if (uVar6 < lVar2 + sVar5 + 1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos + len + 1 <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                407, (char*)0);
        }
        if (sVar5 == 0) {
            *(long*)(this + 24) = *(long*)(this + 24) + 1;
            eastl::string::clear();
            sVar5 = 0;
        } else {
            stringtools::CP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(pcVar3, sVar5 & 4294967295,
                                                                                       param_1);
            *(size_t*)(this + 24) = *(long*)(this + 24) + sVar5 + 1;
        }
        return sVar5;
    }

    // 0x1004d50d0, 272 bytes, inline, placed by class header (inline)
    // unsigned long PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL> >(eastl::basic_string<char, BucketAllocatorEASTL>&, bool)
    ulong PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
        eastl::basic_string<char, BucketAllocatorEASTL>>(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this, basic_string* param_1,
        bool param_2) {
        char cVar1;
        long lVar2;
        char* pcVar3;
        undefined8 uVar4;
        size_t sVar5;
        ulong uVar6;
        undefined7 in_register_00000011;

        if ((int)CONCAT71(in_register_00000011, param_2) != 0) {
            uVar6 = *(ulong*)(this + 24);
            *(ulong*)(this + 24) = uVar6 + 1;
            pcVar3 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar6);
            cVar1 = *pcVar3;
            if (cVar1 != '\0') {
                uVar4 = logger::default_logger();
                logger::Logger::Log(uVar4, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                                    "PacketMixins.inl",
                                    399, "Bad version number in gStringCP1252ToUTF8: %d", cVar1);
                eastl::string::clear();
                return 0;
            }
        }
        pcVar3 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(ulong*)(this + 24));
        sVar5 = _strlen(pcVar3);
        lVar2 = *(long*)(this + 24);
        uVar6 = end();
        if (uVar6 < lVar2 + sVar5 + 1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos + len + 1 <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                407, (char*)0);
        }
        if (sVar5 == 0) {
            *(long*)(this + 24) = *(long*)(this + 24) + 1;
            eastl::string::clear();
            sVar5 = 0;
        } else {
            stringtools::CP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(pcVar3, sVar5 & 4294967295,
                                                                                       param_1);
            *(size_t*)(this + 24) = *(long*)(this + 24) + sVar5 + 1;
        }
        return sVar5;
    }

    // 0x1004f4640, 272 bytes, inline, placed by class header (inline)
    // unsigned long PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gStringCP1252ToUTF8<eastl::fixed_string<char, 128, true, eastl::allocator> >(eastl::fixed_string<char, 128, true, eastl::allocator>&, bool)
    ulong PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
        eastl::fixed_string<char, 128, true, eastl::allocator>>(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this, fixed_string* param_1, bool param_2) {
        char cVar1;
        long lVar2;
        char* pcVar3;
        undefined8 uVar4;
        size_t sVar5;
        ulong uVar6;
        undefined7 in_register_00000011;

        if ((int)CONCAT71(in_register_00000011, param_2) != 0) {
            uVar6 = *(ulong*)(this + 24);
            *(ulong*)(this + 24) = uVar6 + 1;
            pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                (Array<unsigned char, eastl::allocator>*)this, uVar6);
            cVar1 = *pcVar3;
            if (cVar1 != '\0') {
                uVar4 = logger::default_logger();
                logger::Logger::Log(uVar4, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                                    "PacketMixins.inl",
                                    399, "Bad version number in gStringCP1252ToUTF8: %d", cVar1);
                eastl::string::clear();
                return 0;
            }
        }
        pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, *(ulong*)(this + 24));
        sVar5 = _strlen(pcVar3);
        lVar2 = *(long*)(this + 24);
        uVar6 = end();
        if (uVar6 < lVar2 + sVar5 + 1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos + len + 1 <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                407, (char*)0);
        }
        if (sVar5 == 0) {
            *(long*)(this + 24) = *(long*)(this + 24) + 1;
            eastl::string::clear();
            sVar5 = 0;
        } else {
            stringtools::CP1252ToUTF8<24, true>(pcVar3, (uint)sVar5, param_1);
            *(size_t*)(this + 24) = *(long*)(this + 24) + sVar5 + 1;
        }
        return sVar5;
    }

    // 0x1004f6650, 208 bytes, inline, placed by class header (inline)
    // PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::gX(int)
    ulong PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gX(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this, int param_1) {
        long lVar1;
        ulong uVar2;
        undefined8 uVar3;
        ulong uVar4;
        byte* pbVar5;
        int iVar6;
        uint uVar7;

        uVar7 = param_1 - 1;
        if (uVar7 < 8) {
            lVar1 = *(long*)(this + 24);
            uVar4 = end();
            if (uVar4 < (ulong)((int)uVar7 + lVar1)) {
                /* WARNING: Subroutine does not return */
                LogAssert("self->m_pos + bytes <= self->m_data.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                          "PacketMixins.inl",
                          214, (char*)0);
            }
            if ((int)uVar7 < 0) {
                uVar4 = 0;
            } else {
                iVar6 = param_1 << 3;
                uVar4 = 0;
                do {
                    iVar6 = iVar6 + -8;
                    uVar2 = *(ulong*)(this + 24);
                    *(ulong*)(this + 24) = uVar2 + 1;
                    pbVar5 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                        (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
                    uVar4 = uVar4 | (ulong)*pbVar5 << ((byte)iVar6 & 63);
                } while (7 < iVar6);
            }
        } else {
            uVar3 = logger::default_logger();
            uVar4 = 0;
            logger::Logger::Log(
                uVar3, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                211, "Illegal number of bytes requested in gx() - must be between 1 and 8! Got %d", uVar7);
        }
        return uVar4;
    }

    // 0x1004f6930, 208 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::pX(long long, unsigned int)
    void
    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pX(PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this,
                                                            longlong param_1, uint param_2) {
        ulong uVar1;
        undefined8 in_RAX;
        long lVar2;
        undefined8 uVar3;
        undefined1* puVar4;
        int iVar5;
        undefined4 uVar6;

        uVar6 = (undefined4)((ulong)in_RAX >> 32);
        uVar1 = *(ulong*)(this + 24);
        lVar2 = end();
        if (lVar2 - (ulong)(param_2 - 1) <= uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos < m_data.size() - (b - 1)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      253, (char*)0);
        }
        if (param_2 - 1 < 8) {
            iVar5 = param_2 * 8;
            while (iVar5 = iVar5 + -8, -1 < iVar5) {
                uVar1 = *(ulong*)(this + 24);
                *(ulong*)(this + 24) = uVar1 + 1;
                puVar4 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                    (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar1);
                *puVar4 = (char)(param_1 >> ((byte)iVar5 & 63));
            }
        } else {
            uVar3 = logger::default_logger();
            logger::Logger::Log(
                uVar3, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl", 256,
                "Illegal number of bytes requested in px() - must be between 1 and 8! Got %u",
                CONCAT44(uVar6, param_2));
        }
    }

    // 0x100516720, 272 bytes, inline, placed by class header (inline)
    // unsigned long PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gStringCP1252ToUTF8<eastl::fixed_string<char, 24, true, eastl::allocator> >(eastl::fixed_string<char, 24, true, eastl::allocator>&, bool)
    ulong PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
        eastl::fixed_string<char, 24, true, eastl::allocator>>(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this, fixed_string* param_1, bool param_2) {
        char cVar1;
        long lVar2;
        char* pcVar3;
        undefined8 uVar4;
        size_t sVar5;
        ulong uVar6;
        undefined7 in_register_00000011;

        if ((int)CONCAT71(in_register_00000011, param_2) != 0) {
            uVar6 = *(ulong*)(this + 24);
            *(ulong*)(this + 24) = uVar6 + 1;
            pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                (Array<unsigned char, eastl::allocator>*)this, uVar6);
            cVar1 = *pcVar3;
            if (cVar1 != '\0') {
                uVar4 = logger::default_logger();
                logger::Logger::Log(uVar4, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                                    "PacketMixins.inl",
                                    399, "Bad version number in gStringCP1252ToUTF8: %d", cVar1);
                eastl::string::clear();
                return 0;
            }
        }
        pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, *(ulong*)(this + 24));
        sVar5 = _strlen(pcVar3);
        lVar2 = *(long*)(this + 24);
        uVar6 = end();
        if (uVar6 < lVar2 + sVar5 + 1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos + len + 1 <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                407, (char*)0);
        }
        if (sVar5 == 0) {
            *(long*)(this + 24) = *(long*)(this + 24) + 1;
            eastl::string::clear();
            sVar5 = 0;
        } else {
            stringtools::CP1252ToUTF8<24, true>(pcVar3, (uint)sVar5, param_1);
            *(size_t*)(this + 24) = *(long*)(this + 24) + sVar5 + 1;
        }
        return sVar5;
    }

    // 0x100516890, 272 bytes, inline, placed by class header (inline)
    // unsigned long PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gStringCP1252ToUTF8<eastl::fixed_string<char, 8, true, eastl::allocator> >(eastl::fixed_string<char, 8, true, eastl::allocator>&, bool)
    ulong PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
        eastl::fixed_string<char, 8, true, eastl::allocator>>(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this, fixed_string* param_1, bool param_2) {
        char cVar1;
        long lVar2;
        char* pcVar3;
        undefined8 uVar4;
        size_t sVar5;
        ulong uVar6;
        undefined7 in_register_00000011;

        if ((int)CONCAT71(in_register_00000011, param_2) != 0) {
            uVar6 = *(ulong*)(this + 24);
            *(ulong*)(this + 24) = uVar6 + 1;
            pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                (Array<unsigned char, eastl::allocator>*)this, uVar6);
            cVar1 = *pcVar3;
            if (cVar1 != '\0') {
                uVar4 = logger::default_logger();
                logger::Logger::Log(uVar4, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                                    "PacketMixins.inl",
                                    399, "Bad version number in gStringCP1252ToUTF8: %d", cVar1);
                eastl::string::clear();
                return 0;
            }
        }
        pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, *(ulong*)(this + 24));
        sVar5 = _strlen(pcVar3);
        lVar2 = *(long*)(this + 24);
        uVar6 = end();
        if (uVar6 < lVar2 + sVar5 + 1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos + len + 1 <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                407, (char*)0);
        }
        if (sVar5 == 0) {
            *(long*)(this + 24) = *(long*)(this + 24) + 1;
            eastl::string::clear();
            sVar5 = 0;
        } else {
            stringtools::CP1252ToUTF8<24, true>(pcVar3, (uint)sVar5, param_1);
            *(size_t*)(this + 24) = *(long*)(this + 24) + sVar5 + 1;
        }
        return sVar5;
    }

    // 0x1005228e0, 240 bytes, inline, placed by class header (inline)
    // unsigned long PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gStringNoConversion<32, true>(eastl::fixed_string<char, 32, true, eastl::allocator>&, bool)
    ulong PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringNoConversion<32, true>(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this, fixed_string* param_1, bool param_2) {
        char cVar1;
        long lVar2;
        char* pcVar3;
        undefined8 uVar4;
        size_t sVar5;
        ulong uVar6;
        undefined7 in_register_00000011;

        if ((int)CONCAT71(in_register_00000011, param_2) != 0) {
            uVar6 = *(ulong*)(this + 24);
            *(ulong*)(this + 24) = uVar6 + 1;
            pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                (Array<unsigned char, eastl::allocator>*)this, uVar6);
            cVar1 = *pcVar3;
            if (cVar1 != '\0') {
                uVar4 = logger::default_logger();
                logger::Logger::Log(uVar4, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                                    "PacketMixins.inl",
                                    460, "Bad version number in gStringNoConversion: %d", cVar1);
                eastl::string::clear();
                return 0;
            }
        }
        pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, *(ulong*)(this + 24));
        sVar5 = _strlen(pcVar3);
        lVar2 = *(long*)(this + 24);
        uVar6 = end();
        if (uVar6 < lVar2 + sVar5 + 1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos + len + 1 <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                468, (char*)0);
        }
        param_1->assign(pcVar3, sVar5);
        *(size_t*)(this + 24) = *(long*)(this + 24) + sVar5 + 1;
        return sVar5;
    }

    // 0x100541530, 128 bytes, inline, placed by class header (inline)
    // int PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gTPE<int>()
    int PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gTPE<int>(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this) {
        ulong uVar1;
        long lVar2;
        undefined8 uVar3;
        long lVar4;
        ulong uVar5;
        undefined8 uVar6;

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
                53, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        return *(int*)(lVar4 + lVar2);
    }

    // 0x1005f9670, 96 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::pSmart1or2(unsigned short)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pSmart1or2(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, ushort param_1) {
        undefined8 in_RAX;
        undefined4 uVar2;
        undefined8 uVar1;
        int iVar3;
        undefined6 in_register_00000032;

        uVar2 = (undefined4)((ulong)in_RAX >> 32);
        if (param_1 < 128) {
            p1<oldscape::shared::LoginProt::ID>(this, param_1 & 255);
        } else {
            iVar3 = (int)CONCAT62(in_register_00000032, param_1);
            if ((short)param_1 < 0) {
                uVar1 = logger::default_logger();
                logger::Logger::Log(
                    uVar1, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl", 201,
                    "pSmart1or2 out of range - val: %u", CONCAT44(uVar2, iVar3));
            } else {
                p2<int>(this, iVar3 + 32768);
            }
        }
    }

    // 0x1006936d0, 272 bytes, inline, placed by class header (inline)
    // unsigned long PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gStringCP1252ToUTF8<eastl::fixed_string<char, 32, true, eastl::allocator> >(eastl::fixed_string<char, 32, true, eastl::allocator>&, bool)
    ulong PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
        eastl::fixed_string<char, 32, true, eastl::allocator>>(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this, fixed_string* param_1, bool param_2) {
        char cVar1;
        long lVar2;
        char* pcVar3;
        undefined8 uVar4;
        size_t sVar5;
        ulong uVar6;
        undefined7 in_register_00000011;

        if ((int)CONCAT71(in_register_00000011, param_2) != 0) {
            uVar6 = *(ulong*)(this + 24);
            *(ulong*)(this + 24) = uVar6 + 1;
            pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                (Array<unsigned char, eastl::allocator>*)this, uVar6);
            cVar1 = *pcVar3;
            if (cVar1 != '\0') {
                uVar4 = logger::default_logger();
                logger::Logger::Log(uVar4, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                                    "PacketMixins.inl",
                                    399, "Bad version number in gStringCP1252ToUTF8: %d", cVar1);
                eastl::string::clear();
                return 0;
            }
        }
        pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, *(ulong*)(this + 24));
        sVar5 = _strlen(pcVar3);
        lVar2 = *(long*)(this + 24);
        uVar6 = end();
        if (uVar6 < lVar2 + sVar5 + 1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos + len + 1 <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                407, (char*)0);
        }
        if (sVar5 == 0) {
            *(long*)(this + 24) = *(long*)(this + 24) + 1;
            eastl::string::clear();
            sVar5 = 0;
        } else {
            stringtools::CP1252ToUTF8<24, true>(pcVar3, (uint)sVar5, param_1);
            *(size_t*)(this + 24) = *(long*)(this + 24) + sVar5 + 1;
        }
        return sVar5;
    }

    // 0x1006e5000, 160 bytes, inline, placed by class header (inline)
    // void PacketT<Array<unsigned char, BucketAllocatorEASTL> >::p3<int>(int)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p3<int>(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, int param_1) {
        long lVar1;
        ulong uVar2;
        undefined1* puVar3;

        lVar1 = *(long*)(this + 24);
        uVar2 = end();
        if (uVar2 < lVar1 + 3U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + 3 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      114, (char*)0);
        }
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *puVar3 = (char)((uint)param_1 >> 16);
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *puVar3 = (char)((uint)param_1 >> 8);
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *puVar3 = (char)param_1;
    }

    // 0x1006e5d00, 16 bytes, inline, placed by class header (inline)
    // void PacketT<Array<unsigned char, eastl::allocator> >::p4<float>(float)
    void
    PacketT<Array<unsigned char, eastl::allocator>>::p4<float>(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                               float param_1) {
        pT<int>(this, (int)param_1);
    }

    // 0x1006e5d80, 16 bytes, inline, placed by class header (inline)
    // void PacketT<Array<unsigned char, BucketAllocatorEASTL> >::p4<float>(float)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<float>(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, float param_1) {
        pT<int>(this, (int)param_1);
    }

    // 0x100806cc0, 144 bytes, inline, placed by class header (inline)
    // PacketReaderMixin<PacketView>::g2ArrLE(unsigned short*, unsigned long)
    void PacketReaderMixin<PacketView>::g2ArrLE(ushort* param_1, ulong param_2) {
        size_t sVar1;
        long lVar3;

        sVar1 = param_2 * 2;
        lVar3 = *(long*)(this + 16);
        if (HeapBeginPtr() < lVar3 + sVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos + sizeof(uint16) * count <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                278, (char*)0);
        }
        lVar3 = end();
        _memcpy(param_1, (void*)(lVar3 + *(long*)(this + 16)), sVar1);
        *(size_t*)(this + 16) = *(long*)(this + 16) + sVar1;
        ReorderArrFromLE<short>((short*)param_1, param_2);
    }

    // 0x100806d70, 112 bytes, inline, placed by class header (inline)
    // PacketReaderMixin<PacketView>::g1Arr(unsigned char*, unsigned long)
    void PacketReaderMixin<PacketView>::g1Arr(uchar* param_1, ulong param_2) {
        long lVar2;

        lVar2 = *(long*)(this + 16);
        if (HeapBeginPtr() < lVar2 + param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos + sizeof(uint8) * count <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                257, (char*)0);
        }
        lVar2 = end();
        _memcpy(param_1, (void*)(lVar2 + *(long*)(this + 16)), param_2);
        *(ulong*)(this + 16) = *(long*)(this + 16) + param_2;
    }

    // 0x100806e00, 144 bytes, inline, placed by class header (inline)
    // PacketReaderMixin<PacketView>::g2sArrLE(short*, unsigned long)
    void PacketReaderMixin<PacketView>::g2sArrLE(short* param_1, ulong param_2) {
        size_t sVar1;
        long lVar3;

        sVar1 = param_2 * 2;
        lVar3 = *(long*)(this + 16);
        if (HeapBeginPtr() < lVar3 + sVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos + sizeof(int16) * count <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                320, (char*)0);
        }
        lVar3 = end();
        _memcpy(param_1, (void*)(lVar3 + *(long*)(this + 16)), sVar1);
        *(size_t*)(this + 16) = *(long*)(this + 16) + sVar1;
        ReorderArrFromLE<short>(param_1, param_2);
    }

    // 0x100807040, 112 bytes, inline, placed by class header (inline)
    // PacketReaderMixin<PacketView>::g1sArr(signed char*, unsigned long)
    void PacketReaderMixin<PacketView>::g1sArr(signed* param_1, ulong param_2) {
        long lVar2;

        lVar2 = *(long*)(this + 16);
        if (HeapBeginPtr() < lVar2 + param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos + sizeof(int8) * count <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                299, (char*)0);
        }
        lVar2 = end();
        _memcpy(param_1, (void*)(lVar2 + *(long*)(this + 16)), param_2);
        *(ulong*)(this + 16) = *(long*)(this + 16) + param_2;
    }

    // 0x1008070c0, 144 bytes, inline, placed by class header (inline)
    // PacketReaderMixin<PacketView>::g2Arr(unsigned short*, unsigned long)
    void PacketReaderMixin<PacketView>::g2Arr(ushort* param_1, ulong param_2) {
        size_t sVar1;
        long lVar3;

        sVar1 = param_2 * 2;
        lVar3 = *(long*)(this + 16);
        if (HeapBeginPtr() < lVar3 + sVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos + sizeof(uint16) * count <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                267, (char*)0);
        }
        lVar3 = end();
        _memcpy(param_1, (void*)(lVar3 + *(long*)(this + 16)), sVar1);
        *(size_t*)(this + 16) = *(long*)(this + 16) + sVar1;
        ReorderArrFromBE<unsigned short>(param_1, param_2);
    }

    // 0x100807150, 16 bytes, inline, placed by class header (inline)
    // PacketReaderMixin<PacketView>::g4LE()
    void PacketReaderMixin<PacketView>::g4LE() {
        gTLE<unsigned int>(this);
    }

    // 0x100856630, 128 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, eastl::allocator> >::g4_alt1()
    uint
    PacketT<Array<unsigned char, eastl::allocator>>::g4_alt1(PacketT<Array<unsigned char, eastl::allocator>>* this) {
        byte bVar1;
        byte bVar2;
        byte bVar3;
        long lVar4;
        byte* pbVar5;

        lVar4 = *(long*)(this + 24);
        *(long*)(this + 24) = lVar4 + 4;
        pbVar5 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, lVar4 + 3);
        bVar1 = *pbVar5;
        pbVar5 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, *(long*)(this + 24) - 2);
        bVar2 = *pbVar5;
        pbVar5 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, *(long*)(this + 24) - 3);
        bVar3 = *pbVar5;
        pbVar5 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, *(long*)(this + 24) - 4);
        return (uint)*pbVar5 | (uint)bVar3 << 8 | (uint)bVar2 << 16 | (uint)bVar1 << 24;
    }

    // 0x100882200, 144 bytes, inline, placed by class header (inline)
    // unsigned short PacketReaderMixin<PacketView>::gTLE<unsigned short>()
    ushort PacketReaderMixin<PacketView>::gTLE<unsigned short>() {
        ulong uVar1;
        long lVar2;
        undefined8 uVar3;
        long lVar4;
        undefined8 uVar6;
        ushort local_2a;

        lVar4 = end();
        lVar2 = *(long*)(this + 16);
        uVar1 = lVar2 + 2;
        *(ulong*)(this + 16) = uVar1;
        if (HeapBeginPtr() < uVar1) {
            uVar3 = *(undefined8*)(this + 16);
            uVar6 = HeapBeginPtr();
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                33, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        local_2a = *(ushort*)(lVar4 + lVar2);
        ReorderFromLE<short>((short*)&local_2a);
        return local_2a;
    }

    // 0x100882480, 144 bytes, inline, placed by class header (inline)
    // float PacketReaderMixin<PacketView>::gTLE<float>()
    float PacketReaderMixin<PacketView>::gTLE<float>() {
        ulong uVar1;
        long lVar2;
        undefined8 uVar3;
        long lVar4;
        undefined8 uVar6;
        float local_2c;

        lVar4 = end();
        lVar2 = *(long*)(this + 16);
        uVar1 = lVar2 + 4;
        *(ulong*)(this + 16) = uVar1;
        if (HeapBeginPtr() < uVar1) {
            uVar3 = *(undefined8*)(this + 16);
            uVar6 = HeapBeginPtr();
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                33, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        local_2c = *(float*)(lVar4 + lVar2);
        ReorderFromLE<float>(&local_2c);
        return local_2c;
    }

    // 0x100882540, 144 bytes, inline, placed by class header (inline)
    // short PacketReaderMixin<PacketView>::gTLE<short>()
    short PacketReaderMixin<PacketView>::gTLE<short>() {
        ulong uVar1;
        long lVar2;
        undefined8 uVar3;
        long lVar4;
        undefined8 uVar6;
        short local_2a;

        lVar4 = end();
        lVar2 = *(long*)(this + 16);
        uVar1 = lVar2 + 2;
        *(ulong*)(this + 16) = uVar1;
        if (HeapBeginPtr() < uVar1) {
            uVar3 = *(undefined8*)(this + 16);
            uVar6 = HeapBeginPtr();
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                33, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        local_2a = *(short*)(lVar4 + lVar2);
        ReorderFromLE<short>(&local_2a);
        return local_2a;
    }

    // 0x1009df6c0, 32 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, eastl::allocator> >::Clear()
    void PacketT<Array<unsigned char, eastl::allocator>>::Clear(PacketT<Array<unsigned char, eastl::allocator>>* this) {
        *(undefined8*)(this + 24) = 0;
        clear();
    }

    // 0x1009df6e0, 128 bytes, inline, placed by class header (inline)
    // PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gArrayBuffer(unsigned char*, unsigned long, unsigned long)
    void PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gArrayBuffer(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this, uchar* param_1, ulong param_2,
        ulong param_3) {
        long lVar1;
        ulong uVar2;
        void* pvVar3;

        if (param_3 != 0) {
            lVar1 = *(long*)(this + 24);
            uVar2 = end();
            if (uVar2 < lVar1 + param_3) {
                /* WARNING: Subroutine does not return */
                LogAssert("self->m_pos + length <= self->m_data.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                          "PacketMixins.inl",
                          507, (char*)0);
            }
            pvVar3 = (void*)Array<unsigned char, eastl::allocator>::operator[](
                (Array<unsigned char, eastl::allocator>*)this, *(ulong*)(this + 24));
            _memcpy(param_1 + param_2, pvVar3, param_3);
            *(ulong*)(this + 24) = *(long*)(this + 24) + param_3;
        }
    }

    // 0x1009dfb80, 32 bytes, inline, placed by class header (inline)
    // PacketReaderMixin<PacketView>::g1()
    undefined1 PacketReaderMixin<PacketView>::g1() {
        ulong uVar1;
        undefined1* puVar2;

        uVar1 = *(ulong*)(this + 16);
        *(ulong*)(this + 16) = uVar1 + 1;
        puVar2 = (undefined1*)WrapArray<unsigned char const>::operator[]((WrapArray<unsigned char const>*)this, uVar1);
        return *puVar2;
    }

    // 0x1009dfba0, 16 bytes, inline, placed by class header (inline)
    // PacketReaderMixin<PacketView>::g4()
    void PacketReaderMixin<PacketView>::g4() {
        gT<unsigned int>(this);
    }

    // 0x1009dfbc0, 112 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, eastl::allocator> >::operator=(PacketT<Array<unsigned char, eastl::allocator> > const&)
    /* PacketT<Array<unsigned char, eastl::allocator>
   >::TEMPNAMEPLACEHOLDERVALUE(PacketT<Array<unsigned char, eastl::allocator> > const&) */

    PacketT<Array<unsigned char, eastl::allocator>>*
    PacketT<Array<unsigned char, eastl::allocator>>::operator=(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                               PacketT* param_1) {
        ulong uVar1;
        void* pvVar2;
        void* pvVar3;
        size_t sVar4;

        *(undefined8*)(this + 24) = *(undefined8*)(param_1 + 24);
        uVar1 = param_1->end();
        Reserve(this, uVar1);
        pvVar2 = (void*)data();
        pvVar3 = (void*)param_1->data();
        sVar4 = param_1->end();
        _memcpy(pvVar2, pvVar3, sVar4);
        return this;
    }

    // 0x1009e0ba0, 64 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, eastl::allocator> >::pArrayBuffer(PacketT<Array<unsigned char, eastl::allocator> > const&, unsigned long, unsigned long)
    void
    PacketT<Array<unsigned char, eastl::allocator>>::pArrayBuffer(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                                  PacketT* param_1, ulong param_2, ulong param_3) {
        uchar* puVar1;

        puVar1 = (uchar*)GetDataPtr((PacketT<Array<unsigned char, eastl::allocator>>*)param_1);
        pArrayBuffer(this, puVar1, param_2, param_3);
    }

    // 0x1009e5fb0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, eastl::allocator> >::PacketT(Array<unsigned char, eastl::allocator>&&): jumps straight to the base-object constructor

    // 0x1009e7050, 48 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, eastl::allocator> >::predictLengthPStringNoConversion(char const*, bool)
    void PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringNoConversion(char* param_1,
                                                                                           bool param_2) {
        size_t sVar1;

        sVar1 = _strlen(param_1);
        predictLengthPStringNoConversion(param_1, sVar1, param_2);
    }

    // 0x1009e7080, 64 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, eastl::allocator> >::pStringNoConversion(char const*, bool)
    void PacketT<Array<unsigned char, eastl::allocator>>::pStringNoConversion(
        PacketT<Array<unsigned char, eastl::allocator>>* this, char* param_1, bool param_2) {
        size_t sVar1;

        sVar1 = _strlen(param_1);
        pStringNoConversion(this, param_1, sVar1, param_2);
    }

    // 0x1009e7b70, 208 bytes, inline, placed by class header (inline)
    // void PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gArrayBuffer<PacketT<Array<unsigned char, eastl::allocator> > >(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned long)
    void PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gArrayBuffer<
        PacketT<Array<unsigned char, eastl::allocator>>>(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this, PacketT* param_1, ulong param_2) {
        ulong uVar1;
        long lVar2;
        void* pvVar3;
        void* pvVar4;

        if (param_2 != 0) {
            lVar2 = *(long*)(this + 24);
            uVar1 = end();
            if (uVar1 < lVar2 + param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("(self->m_pos + length) <= self->m_data.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                          "PacketMixins.inl",
                          521, (char*)0);
            }
            lVar2 = param_1->size();
            uVar1 = param_1->GetTextureAtlas();
            if (uVar1 < lVar2 + param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("(p.GetPos() + length) <= p.GetSize()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                          "PacketMixins.inl",
                          522, (char*)0);
            }
            pvVar3 = (void*)param_1->GetDataPtr();
            pvVar4 = (void*)Array<unsigned char, eastl::allocator>::operator[](
                (Array<unsigned char, eastl::allocator>*)this, *(ulong*)(this + 24));
            _memcpy(pvVar3, pvVar4, param_2);
            *(ulong*)(this + 24) = *(long*)(this + 24) + param_2;
            lVar2 = param_1->size();
            param_1->SetPos(param_2 + lVar2);
        }
    }

    // 0x1009e7c60, 240 bytes, inline, placed by class header (inline)
    // unsigned long PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gStringNoConversion<256, true>(eastl::fixed_string<char, 256, true, eastl::allocator>&, bool)
    ulong PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringNoConversion<256, true>(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this, fixed_string* param_1, bool param_2) {
        char cVar1;
        long lVar2;
        char* pcVar3;
        undefined8 uVar4;
        size_t sVar5;
        ulong uVar6;
        undefined7 in_register_00000011;

        if ((int)CONCAT71(in_register_00000011, param_2) != 0) {
            uVar6 = *(ulong*)(this + 24);
            *(ulong*)(this + 24) = uVar6 + 1;
            pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                (Array<unsigned char, eastl::allocator>*)this, uVar6);
            cVar1 = *pcVar3;
            if (cVar1 != '\0') {
                uVar4 = logger::default_logger();
                logger::Logger::Log(uVar4, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                                    "PacketMixins.inl",
                                    460, "Bad version number in gStringNoConversion: %d", cVar1);
                eastl::string::clear();
                return 0;
            }
        }
        pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, *(ulong*)(this + 24));
        sVar5 = _strlen(pcVar3);
        lVar2 = *(long*)(this + 24);
        uVar6 = end();
        if (uVar6 < lVar2 + sVar5 + 1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos + len + 1 <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                468, (char*)0);
        }
        param_1->assign(pcVar3, sVar5);
        *(size_t*)(this + 24) = *(long*)(this + 24) + sVar5 + 1;
        return sVar5;
    }

    // 0x1009ef300, 96 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, eastl::allocator> >::ReadUint(Array<unsigned char, eastl::allocator> const&, unsigned int)
    int PacketT<Array<unsigned char, eastl::allocator>>::ReadUint(Array* param_1, uint param_2) {
        ulong uVar1;
        int* piVar2;
        int local_1c;

        uVar1 = param_1->end();
        if (uVar1 <= param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert("index < m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      1001, (char*)0);
        }
        piVar2 = (int*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)param_1, (ulong)param_2);
        local_1c = *piVar2;
        ReorderToBE<int>(&local_1c);
        return local_1c;
    }

    // 0x1009f0570, 64 bytes, inline, placed by class header (inline)
    // PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gSmart2or4()
    uint PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gSmart2or4(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this) {
        ushort uVar1;
        uint uVar2;
        char* pcVar3;

        pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, *(ulong*)(this + 24));
        if (*pcVar3 < '\0') {
            uVar2 = g4(this);
            uVar2 = uVar2 & 2147483647;
        } else {
            uVar1 = g2(this);
            uVar2 = (uint)uVar1;
        }
        return uVar2;
    }

    // 0x1009f1220, 64 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::ToString() const
    PacketT<Array<unsigned char, BucketAllocatorEASTL>>* PacketT<Array<unsigned char, BucketAllocatorEASTL>>::ToString(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this) {
        undefined4 uVar1;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* in_RSI;

        uVar1 =
            eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::size(in_RSI);
        eastl::min<graphics::GraphicsQuality>(20, uVar1);
        ToString(this, (int)in_RSI, 0);
        return this;
    }

    // 0x1009f13a0, 16 bytes, inline, placed by class header (inline)
    // PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::g4s()
    void PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::g4s(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this) {
        gT<int>(this);
    }

    // 0x1009f2650, 160 bytes, inline, placed by class header (inline)
    // void PacketT<Array<unsigned char, eastl::allocator> >::p3<unsigned int>(unsigned int)
    void PacketT<Array<unsigned char, eastl::allocator>>::p3<unsigned int>(
        PacketT<Array<unsigned char, eastl::allocator>>* this, uint param_1) {
        long lVar1;
        ulong uVar2;
        undefined1* puVar3;

        lVar1 = *(long*)(this + 24);
        uVar2 = end();
        if (uVar2 < lVar1 + 3U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + 3 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      114, (char*)0);
        }
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, uVar2);
        *puVar3 = (char)(param_1 >> 16);
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, uVar2);
        *puVar3 = (char)(param_1 >> 8);
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, uVar2);
        *puVar3 = (char)param_1;
    }

    // 0x100a06dc0, 752 bytes, inline, placed by class header (inline)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::ToString(int, int) const
    PacketT<Array<unsigned char, BucketAllocatorEASTL>>* PacketT<Array<unsigned char, BucketAllocatorEASTL>>::ToString(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, int param_1, int param_2) {
        byte bVar1;
        uchar uVar2;
        undefined8 uVar3;
        TextureAtlasReference* this_00;
        char cVar4;
        undefined8 uVar6;
        ulong uVar7;
        byte* pbVar8;
        uchar* puVar9;
        int in_ECX;
        ulong uVar10;
        undefined4 in_register_00000034;
        char* pcVar11;
        ulong uVar12;
        eastl::string local_a8[36];
        uint local_84;
        TextureAtlasReference* local_80;
        fixed_string<char, 20, true, eastl::allocator> local_78[64];
        long local_38;

        local_80 = (TextureAtlasReference*)CONCAT44(in_register_00000034, param_1);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (local_80->GetTextureAtlas() == 0) {
            new (local_78) eastl::allocator("EASTL basic_string");
            new (this) eastl::string("{ Packet : empty }", local_78);
        } else {
            eastl::string::basic_string(local_a8);
            eastl::string::reserve(local_a8, 512);
            uVar3 = *(undefined8*)&local_80->field_24;
            uVar6 = local_80->end();
            eastl::string::sprintf((char*)local_a8, "{ Packet: pos=%llu/%llu:", uVar3, uVar6);
            if (0 < in_ECX) {
                local_84 = in_ECX + param_2;
                uVar7 = (ulong)(int)local_84;
                do {
                    this_00 = local_80;
                    uVar12 = (ulong)(uint)param_2;
                    pcVar11 = " ";
                    if (param_2 == *(uint*)&local_80->field_24) {
                        pcVar11 = "^";
                    }
                    eastl::string::operator+=(local_a8, pcVar11);
                    uVar10 = (ulong)param_2;
                    pbVar8 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                        (Array<unsigned char, BucketAllocatorEASTL>*)this_00, uVar10);
                    bVar1 = *pbVar8;
                    cVar4 = isVeryInterestingCharacter(bVar1);
                    if ((cVar4 == '\0') || ((int)local_84 <= (int)(param_2 + 2U))) {
                    LAB_100a06f80:
                        eastl::fixed_string<char, 20, true, eastl::allocator>::fixed_string(local_78);
                        eastl::basic_string<char,
                                            eastl::fixed_vector_allocator<1ul, 20ul, 1ul, 0ul, true,
                                                                          eastl::allocator>>::sprintf((char*)local_78,
                                                                                                      &DAT_100e2f3ea,
                                                                                                      (ulong)bVar1);
                        pcVar11 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        eastl::string::operator+=(local_a8, pcVar11);
                        /* WARNING: Subroutine does not return */
                        local_78->~fixed_string();
                    }
                    puVar9 = (uchar*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                        (Array<unsigned char, BucketAllocatorEASTL>*)local_80, (long)(int)(param_2 + 1));
                    cVar4 = isInterestingCharacter(*puVar9);
                    if (cVar4 == '\0')
                        goto LAB_100a06f80;
                    puVar9 = (uchar*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                        (Array<unsigned char, BucketAllocatorEASTL>*)local_80, (long)(int)(param_2 + 2U));
                    cVar4 = isInterestingCharacter(*puVar9);
                    if (cVar4 == '\0')
                        goto LAB_100a06f80;
                    if (param_2 < (int)local_84) {
                        uVar12 = uVar10;
                        do {
                            puVar9 = (uchar*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                                (Array<unsigned char, BucketAllocatorEASTL>*)local_80, uVar12);
                            uVar2 = *puVar9;
                            cVar4 = isInterestingCharacter(uVar2);
                            if (cVar4 == '\0')
                                goto LAB_100a06fd3;
                            if (((long)uVar10 < (long)uVar12) && ((int)uVar12 == *(int*)&local_80->field_24)) {
                                eastl::string::operator+=(local_a8, '^');
                            }
                            eastl::string::operator+=(local_a8, uVar2);
                            uVar12 = uVar12 + 1;
                        } while (uVar7 != uVar12);
                        param_2 = local_84;
                    } else {
                    LAB_100a06fd3:
                        param_2 = (int)uVar12;
                    }
                } while (param_2 < (int)local_84);
            }
            pcVar11 = " ";
            if (param_2 == *(uint*)&local_80->field_24) {
                pcVar11 = "^";
            }
            eastl::string::operator+=(local_a8, pcVar11);
            eastl::string::operator+=(local_a8, "}");
            new (this) eastl::string(local_a8);
            eastl::string::~basic_string(local_a8);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x100a072b0, 144 bytes, inline, placed by class header (inline)
    // int PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::gT<int>()
    int PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gT<int>(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this) {
        ulong uVar1;
        long lVar2;
        undefined8 uVar3;
        long lVar4;
        ulong uVar5;
        undefined8 uVar6;
        int local_2c;

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
        local_2c = *(int*)(lVar4 + lVar2);
        ReorderToBE<int>(&local_2c);
        return local_2c;
    }

    // 0x100a0c4e0, 128 bytes, inline, placed by class header (inline)
    // PacketReaderMixin<PacketView>::gArrayBuffer(unsigned char*, unsigned long, unsigned long)
    void PacketReaderMixin<PacketView>::gArrayBuffer(uchar* param_1, ulong param_2, ulong param_3) {
        long lVar1;
        void* pvVar3;

        if (param_3 != 0) {
            lVar1 = *(long*)(this + 16);
            if (HeapBeginPtr() < lVar1 + param_3) {
                /* WARNING: Subroutine does not return */
                LogAssert("self->m_pos + length <= self->m_data.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                          "PacketMixins.inl",
                          507, (char*)0);
            }
            pvVar3 = (void*)WrapArray<unsigned char const>::operator[]((WrapArray<unsigned char const>*)this,
                                                                       *(ulong*)(this + 16));
            _memcpy(param_1 + param_2, pvVar3, param_3);
            *(ulong*)(this + 16) = *(long*)(this + 16) + param_3;
        }
    }

    // 0x100a0d170, 16 bytes, inline, placed by class header (inline)
    // PacketReaderMixin<PacketView>::g2()
    ushort PacketReaderMixin<PacketView>::g2() {
        return gT<unsigned short>(this);
    }

    // 0x100a0d1e0, 96 bytes, inline, placed by class header (inline)
    // PacketReaderMixin<PacketView>::g3()
    uint PacketReaderMixin<PacketView>::g3() {
        byte bVar1;
        byte bVar2;
        ulong uVar3;
        byte* pbVar4;

        uVar3 = *(ulong*)(this + 16);
        *(ulong*)(this + 16) = uVar3 + 3;
        pbVar4 = (byte*)WrapArray<unsigned char const>::operator[]((WrapArray<unsigned char const>*)this, uVar3);
        bVar1 = *pbVar4;
        pbVar4 = (byte*)WrapArray<unsigned char const>::operator[]((WrapArray<unsigned char const>*)this,
                                                                   *(long*)(this + 16) - 2);
        bVar2 = *pbVar4;
        pbVar4 = (byte*)WrapArray<unsigned char const>::operator[]((WrapArray<unsigned char const>*)this,
                                                                   *(long*)(this + 16) - 1);
        return (uint)*pbVar4 | (uint)bVar2 << 8 | (uint)bVar1 << 16;
    }

    // 0x100a0efa0, 144 bytes, inline, placed by class header (inline)
    // unsigned short PacketReaderMixin<PacketView>::gT<unsigned short>()
    ushort PacketReaderMixin<PacketView>::gT<unsigned short>() {
        ulong uVar1;
        long lVar2;
        undefined8 uVar3;
        long lVar4;
        undefined8 uVar6;
        ushort local_2a;

        lVar4 = end();
        lVar2 = *(long*)(this + 16);
        uVar1 = lVar2 + 2;
        *(ulong*)(this + 16) = uVar1;
        if (HeapBeginPtr() < uVar1) {
            uVar3 = *(undefined8*)(this + 16);
            uVar6 = HeapBeginPtr();
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                13, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        local_2a = *(ushort*)(lVar4 + lVar2);
        ReorderToBE<short>((short*)&local_2a);
        return local_2a;
    }

    // 0x100c6ef20, 128 bytes, inline, placed by class header (inline)
    // void PacketT<Array<unsigned char, eastl::allocator> >::pT<float>(float)
    void
    PacketT<Array<unsigned char, eastl::allocator>>::pT<float>(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                               float param_1) {
        long lVar1;
        ulong uVar2;
        long lVar3;
        float local_1c;

        lVar1 = *(long*)(this + 24);
        local_1c = param_1;
        uVar2 = end();
        if (uVar2 < lVar1 + 4U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + sizeof(T) <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      56, (char*)0);
        }
        ReorderToBE<float>(&local_1c);
        lVar3 = data();
        lVar1 = *(long*)(this + 24);
        *(float*)(lVar3 + lVar1) = local_1c;
        *(long*)(this + 24) = lVar1 + 4;
    }

} // namespace jag
