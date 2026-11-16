// libs/bytepacking/Packet.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    class PacketError {
    public:
        ~PacketError();
        PacketError(PacketErrorType packetErrorType);
        static PacketError NONE;          // = PacketError(0)
        static PacketError NOTLOADED;     // = PacketError(1)
        static PacketError UNIMPLEMENTED; // = PacketError(2)
        static PacketError MESSAGE;       // = PacketError(3)

    private:
        PacketErrorType field_0;
        uint8_t _unknown_4[12];
    };

    template <
        typename...> // 3 instantiations, e.g. <PacketT<Array<unsigned char>> >, <PacketT<Array<unsigned char>> >, <PacketView>
    class PacketReaderMixin {
    public:
        unsigned long gSmart1or2EncTest(Isaac& isaac);
        unsigned short gSmart1or2Enc(Isaac& isaac);
        void gArrayBufferEncrypted(unsigned char* arg1, int arg2, int arg3, Isaac& isaac);
        void g8();
        unsigned int g3();
        int g2s();
        unsigned int g3s();
        unsigned int gSmart2or4s();
        int gSmart1Or2Minus1();
        PacketReaderMixin<PacketT<Array<unsigned char>>>* gStringNoConversion(bool arg1);
        unsigned long long gT<unsigned long long>();
        short gT<short>();
        unsigned short g2();
        void g4();
        uint8_t g1();
        eastl::string gStringCP1252ToUTF8<eastl::string>(bool arg1);
        int g1s();
        unsigned int gT<unsigned int>();
        unsigned long gStringCP1252ToUTF8<eastl::string>(eastl::string& str, bool arg2);
        unsigned short gT<unsigned short>();
        unsigned short gSmart1or2();
        unsigned long gVarInt();
        PacketReaderMixin<PacketT<Array<unsigned char>>>* gStringNoConversion(bool arg1);
        void g1Arr(unsigned char* arg1, unsigned long arg2);
        float gTPE<float>();
        int gSmart1or2s();
        void g4s();
        int gT<int>();
        void gFloat();
        float gT<float>();
        void g4sArr(int* arg1, unsigned long arg2);
        void g8s();
        eastl::string gStringCP1252ToUTF8<eastl::string>(bool arg1);
        long long gT<long long>();
        unsigned long gStringCP1252ToUTF8<eastl::string>(eastl::string& str, bool arg2);
        unsigned long gStringCP1252ToUTF8<eastl::fixed_string<char, 128>>(eastl::fixed_string<char, 128>& str,
                                                                          bool arg2);
        unsigned long gX(int arg1);
        unsigned long gStringCP1252ToUTF8<eastl::fixed_string<char, 24>>(eastl::fixed_string<char, 24>& str, bool arg2);
        unsigned long gStringCP1252ToUTF8<eastl::fixed_string<char, 8>>(eastl::fixed_string<char, 8>& str, bool arg2);
        unsigned long gStringNoConversion<32, true>(eastl::fixed_string<char, 32>& str, bool arg2);
        int gTPE<int>();
        size_t gStringNoConversion(eastl::string& str, bool arg2);
        unsigned long gStringCP1252ToUTF8<eastl::fixed_string<char, 32>>(eastl::fixed_string<char, 32>& str, bool arg2);
        void gArrayBuffer(unsigned char* arg1, unsigned long arg2, unsigned long arg3);
        void g2ArrLE(unsigned short* arg1, unsigned long arg2);
        void g2sArrLE(short* arg1, unsigned long arg2);
        void g1sArr(signed char* arg1, unsigned long arg2);
        void g2Arr(unsigned short* arg1, unsigned long arg2);
        void g4LE();
        unsigned int gTLE<unsigned int>();
        unsigned short g2LE();
        void gFloatLE();
        int g2sLE();
        unsigned short gTLE<unsigned short>();
        float gTLE<float>();
        short gTLE<short>();
        void gArrayBuffer<PacketT<Array<unsigned char>>>(PacketT<Array<unsigned char>>& arg1, unsigned long arg2);
        unsigned long gStringNoConversion<256, true>(eastl::fixed_string<char, 256>& str, bool arg2);
        unsigned int gSmart2or4();
    };

    template <typename...> // 2 instantiations, e.g. <Array<unsigned char> >, <Array<unsigned char> >
    class PacketT {
    public:
        class Bit;
        long GetSpace() const;
        void p1<oldscape::shared::LoginProt::ID>(oldscape::shared::LoginProt::ID id);
        bool IsValid() const;
        void Skip(unsigned long arg1);
        void p1<oldscape::ClientWindowMode>(oldscape::ClientWindowMode publishingPlatformType);
        void pSize2(unsigned short arg1);
        void p8<unsigned long long>(unsigned long long arg1);
        void p3<int>(int arg1);
        void rsaEncrypt(const math::BigInteger& bigInteger1, const math::BigInteger& bigInteger2);
        void p4 < oldscape::shared::Version::{
            unnamed type #1
        }
        > (oldscape::shared::Version::{ unnamed type #1 } arg1);
        void p1<bool>(bool arg1);
        PacketT(PacketT<Array<unsigned char>>&& arg1);
        PacketT<Array<unsigned char>>* operator=(PacketT<Array<unsigned char>>&& arg1);
        void swap(PacketT<Array<unsigned char>>& arg1);
        unsigned int g4_alt1();
        unsigned int g3_alt3();
        unsigned int g3_alt2();
        unsigned int g4_alt2();
        int g2s_alt1();
        unsigned int g4_alt3();
        int g2s_alt2();
        unsigned int g3s_alt2();
        unsigned int g3s_alt1();
        PacketT(const eastl::vector<unsigned char>& arg1);
        void p2_alt2(int arg1);
        void p1_alt3(int arg1);
        void p2_alt3(int arg1);
        void p1_alt2(int arg1);
        void p2_alt1(int arg1);
        void p4_alt3(int arg1);
        void p4_alt2(int arg1);
        void p1_alt1(int arg1);
        void p3_alt1(int arg1);
        void pSize<unsigned short>(unsigned short arg1);
        void p4_alt1(int arg1);
        void pStringNoConversion<eastl::string>(const eastl::string& str, bool arg2);
        int predictLengthPStringNoConversion<eastl::string>(eastl::string& str, bool arg2);
        void pStringNoConversion(const char* str, unsigned long arg2, bool arg3);
        void chunkRsaEncrypt(const math::BigInteger& bigInteger1, const math::BigInteger& bigInteger2);
        void p6<long long>(long long arg1);
        void pStringUTF8ToCP1252<eastl::string>(const eastl::string& str, bool arg2);
        void SetPos(unsigned long arg1);
        void tinyKeyEncrypt(const std::array<int, 4ul>& arg1, unsigned long arg2, unsigned long arg3);
        void GetSize() const;
        void pArrayBuffer(const unsigned char* arg1, unsigned long arg2, unsigned long arg3);
        void GetDataPtr();
        void p2<unsigned long>(unsigned long arg1);
        void tinyKeyDecrypt(const std::array<int, 4ul>& arg1, unsigned long arg2, unsigned long arg3);
        PacketT<Array<unsigned char>>* GetDataArrayPtr();
        void pSize1(unsigned char arg1);
        int predictLengthPStringUTF8ToCP1252<eastl::string const>(const eastl::string& str, bool arg2);
        void p2<int>(int arg1);
        void pStringUTF8ToCP1252(const char* str, bool arg2);
        PacketT(Array<unsigned char>&& arg1);
        ~PacketT();
        void pArrayBuffer(const PacketT<Array<unsigned char>>& arg1);
        int predictLengthPStringNoConversion(const char* str, unsigned long arg2, bool arg3);
        void pT<signed char>(signed char arg1);
        void pT<short>(short arg1);
        void gArrayBuffer_alt2<PacketT<Array<unsigned char>>>(PacketT<Array<unsigned char>>& arg1, unsigned long arg2);
        void gArrayBuffer_alt2(unsigned char* arg1, unsigned long arg2, unsigned long arg3);
        uint8_t g1_alt1();
        unsigned int g2_alt3();
        unsigned int g2_alt2();
        char g1_alt2();
        char g1_alt3();
        int g1s_alt3();
        unsigned int g1s_alt1();
        uint16_t g2_alt1();
        int g1s_alt2();
        PacketT();
        PacketT(unsigned long arg1);
        void Reserve(unsigned long arg1);
        void pT<int>(int arg1);
        void pT<long long>(long long arg1);
        void pStringUTF8ToCP1252(const char* str, unsigned long arg2, bool arg3);
        void pSize<unsigned char>(unsigned char arg1);
        int predictLengthPStringUTF8ToCP1252(const char* str, unsigned long arg2, bool arg3);
        void p2PlatformEndian(unsigned short arg1);
        void p4PlatformEndian<unsigned int>(unsigned int arg1);
        void p1<signed char>(signed char arg1);
        void p4<unsigned short>(unsigned short arg1);
        void p2<short>(short arg1);
        void pTPE<unsigned short>(unsigned short arg1);
        void pTPE<int>(int arg1);
        void pSmart1or2s(short arg1);
        void pSmart1or2(unsigned short arg1);
        void p8<int>(int arg1);
        void p1Isaac<unsigned char>(unsigned char arg1, Isaac& isaac);
        void p2<float>(float arg1);
        void pVarInt(unsigned long long arg1);
        void pArrayBuffer_alt1(const unsigned char* arg1, unsigned long arg2, unsigned long arg3);
        void pSize4(unsigned int arg1);
        void SetDataRaw(const Array<unsigned char>& arg1);
        PacketT(const unsigned char* arg1, unsigned long arg2);
        void pTPE<float>(float arg1);
        void pSize<unsigned int>(unsigned int arg1);
        PacketT<Array<unsigned char>>* operator=(PacketT<Array<unsigned char>>&& arg1);
        PacketT(const PacketT<Array<unsigned char>>& arg1);
        void swap(PacketT<Array<unsigned char>>& arg1);
        void predictLengthPStringUTF8ToCP1252(const char* str, bool arg2);
        void pX(long long arg1, unsigned int arg2);
        void pStringNoConversion(const char* str, bool arg2);
        void p4<float>(float arg1);
        void Clear();
        PacketT<Array<unsigned char>>* operator=(const PacketT<Array<unsigned char>>& arg1);
        auto ToString() const;
        void pArrayBuffer(const PacketT<Array<unsigned char>>& arg1, unsigned long arg2, unsigned long arg3);
        void pArrayBuffer(const PacketT<Array<unsigned char>>& arg1, unsigned long arg2, unsigned long arg3);
        PacketT(Array<unsigned char>&& arg1);
        void predictLengthPStringNoConversion(const char* str, bool arg2);
        unsigned int ReadUint(const Array<unsigned char>& arg1, unsigned int arg2);
        void p3<unsigned int>(unsigned int arg1);
        auto ToStringPos() const;
        PacketT(PacketT<Array<unsigned char>>&& arg1);
        auto ToString(int arg1, int arg2) const;
        PacketT(const Array<unsigned char>& arg1);
        void pFloatPlatformEndian(float arg1);
        void pFloat(float arg1);
        void pT<float>(float arg1);
    };

    template <typename...> // 1 instantiations, e.g.
    class PacketT::Bit {
    public:
        ~Bit();
        int gBit(unsigned int arg1);
        int bitsLeft(unsigned int arg1) const;
        Bit(PacketT<Array<unsigned char>>& arg1);
    };

    // 0x1039b64a0, set at startup by ___cxx_global_var_init.293
    PacketError PacketError::NONE = PacketError(0);

    // 0x1039b64c8, set at startup by ___cxx_global_var_init.294
    PacketError PacketError::NOTLOADED = PacketError(1);

    // 0x1039b64f0, set at startup by ___cxx_global_var_init.295
    PacketError PacketError::UNIMPLEMENTED = PacketError(2);

    // 0x1039b6518, set at startup by ___cxx_global_var_init.296
    PacketError PacketError::MESSAGE = PacketError(3);

    // 0x1000172a0
    long PacketT<Array<unsigned char, BucketAllocatorEASTL>>::GetSpace() const {
        return end() - *(long*)(this + 24);
    }

    // 0x100135df0
    unsigned long long PacketReaderMixin<PacketT<Array<unsigned char>>>::gT<unsigned long long>() {
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

    // 0x1001375f0
    PacketT<Array<unsigned char>>::PacketT(const eastl::vector<unsigned char>& arg1) : Array<unsigned char>() {
        *(uint64_t*)(this + 24) = 0;
        unsigned long arg1_00 = arg1.size();
        Reserve(this, arg1_00);
        auto pvVar1 = data();
        auto pvVar2 = arg1.HeapBeginPtr();
        size_t sVar3 = arg1.size();
        _memcpy(pvVar1, pvVar2, sVar3);
    }

    // 0x100147f40
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4_alt2(int arg1) {
        long lVar1 = *(long*)(this + 24);
        unsigned long uVar2 = end();
        if (uVar2 < lVar1 + 4U) {
            LogAssert("m_pos + 4 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      783, nullptr);
        }
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        uint8_t* puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)((unsigned int)arg1 >> 8);
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)arg1;
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)((unsigned int)arg1 >> 24);
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)((unsigned int)arg1 >> 16);
    }

    // 0x100148000
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1_alt1(int arg1) {
        long lVar1 = *(long*)(this + 24);
        unsigned long uVar2 = end();
        if (uVar2 < lVar1 + 1U) {
            LogAssert("m_pos + 1 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.h", 619,
                      nullptr);
        }
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        uint8_t* pbVar3 = (uint8_t*)(*this)[uVar2];
        *pbVar3 = (uint8_t)arg1 ^ 128;
    }

    // 0x100148070
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p3_alt1(int arg1) {
        long lVar1 = *(long*)(this + 24);
        unsigned long uVar2 = end();
        if (uVar2 < lVar1 + 3U) {
            LogAssert("m_pos + 3 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      701, nullptr);
        }
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        uint8_t* puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)arg1;
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)((unsigned int)arg1 >> 8);
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)((unsigned int)arg1 >> 16);
    }

    // 0x100148110
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pSize<unsigned short>(unsigned short arg1) {
        uint16_t in_register_00000032;

        long lVar1 = *(long*)(this + 24);
        unsigned short local_1a = arg1;
        ReorderToBE<short>((short*)&local_1a);
        long lVar2 = data();
        *(unsigned short*)((lVar1 - (unsigned long)(((uint32_t)in_register_00000032 << 16) | (uint16_t)arg1)) - 2 +
                           lVar2) = local_1a;
    }

    // 0x10015dae0
    void
    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringNoConversion<eastl::string>(const eastl::string& str,
                                                                                            bool arg2) {
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long arg2_00 = str.size();
        pStringNoConversion(this, str_00, arg2_00, arg2);
    }

    // 0x10015db60
    int PacketT<Array<unsigned char>>::predictLengthPStringNoConversion<eastl::string>(eastl::string& str, bool arg2) {
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long arg2_00 = str.size();
        return predictLengthPStringNoConversion(str_00, arg2_00, arg2);
    }

    // 0x10016fd30
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringNoConversion(const char* str, unsigned long arg2,
                                                                                  bool arg3) {
        uint8_t* puVar2;
        unsigned long uVar3;
        uint64_t in_register_00000009;

        if ((int)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3) != 0) {
            uVar3 = *(unsigned long*)(this + 24);
            *(unsigned long*)(this + 24) = uVar3 + 1;
            puVar2 = (uint8_t*)(*this)[uVar3];
            *puVar2 = 0;
        }
        long lVar1 = *(long*)(this + 24);
        uVar3 = end();
        if (uVar3 < arg2 + lVar1 + 1) {
            LogAssert("m_pos + len + 1 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      311, nullptr);
        }
        _memcpy((void*)(*this)[*(unsigned long*)(this + 24)], str, arg2);
        lVar1 = *(long*)(this + 24);
        *(unsigned long*)(this + 24) = lVar1 + arg2 + 1;
        puVar2 = (uint8_t*)(*this)[lVar1 + arg2];
        *puVar2 = 0;
    }

    // 0x10017cc50
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pSize1(unsigned char arg1) {
        pSize<unsigned char>(this, arg1);
    }

    // 0x100183610
    int PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string const>(const eastl::string& str,
                                                                                             bool arg2) {
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long arg2_00 = str.size();
        return predictLengthPStringUTF8ToCP1252(str_00, arg2_00, arg2);
    }

    // 0x100183690
    void PacketT<Array<unsigned char>>::p2<int>(int arg1) {
        pT<short>(this, arg1);
    }

    // 0x1001836a0
    void PacketT<Array<unsigned char>>::pStringUTF8ToCP1252<eastl::string>(const eastl::string& str, bool arg2) {
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long arg2_00 = str.size();
        pStringUTF8ToCP1252(this, str_00, arg2_00, arg2);
    }

    // 0x100184030
    unsigned short PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::g2() {
        return gT<unsigned short>(this);
    }

    // 0x10018d2a0
    uint8_t PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::g1() {
        unsigned long arg1 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = arg1 + 1;
        uint8_t* puVar1 = (uint8_t*)(*this)[arg1];
        return *puVar1;
    }

    // 0x10018e530
    eastl::string
    PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
        bool arg1) {
        bool in_DL;
        uint64_t in_register_00000031;

        new (this) eastl::string();
        gStringCP1252ToUTF8<eastl::string>(
            (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)(((uint64_t)in_register_00000031
                                                                                       << 8) |
                                                                                      (uint8_t)arg1),
            (eastl::string*)this, in_DL);
        return this;
    }

    // 0x1001a71e0
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pSize<unsigned char>(unsigned char arg1) {
        uint32_t in_register_00000031;

        long lVar1 = *(long*)(this + 24);
        unsigned char local_19 = arg1;
        ReorderToBE<unsigned char>((schar*)&local_19);
        long lVar2 = data();
        *(unsigned char*)(lVar2 + ~(unsigned long)(((uint32_t)in_register_00000031 << 8) | (uint8_t)arg1) + lVar1) =
            local_19;
    }

    // 0x1001a8c60
    unsigned long
    PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
        eastl::string& str, bool arg2) {
        uint8_t bVar1;
        uint8_t* pbVar3;
        unsigned long uVar5;
        uint64_t in_register_00000011;

        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) != 0) {
            uVar5 = *(unsigned long*)(this + 24);
            *(unsigned long*)(this + 24) = uVar5 + 1;
            pbVar3 = (uint8_t*)(*this)[uVar5];
            bVar1 = *pbVar3;
            if (bVar1 != 0) {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                          "PacketMixins.inl",
                          399, "Bad version number in gStringCP1252ToUTF8: %d", (unsigned int)bVar1);
                str.clear();
                return 0;
            }
        }
        char* str1 = (char*)(*this)[*(unsigned long*)(this + 24)];
        size_t sVar4 = _strlen(str1);
        long lVar2 = *(long*)(this + 24);
        uVar5 = end();
        if (uVar5 < lVar2 + sVar4 + 1) {
            LogAssert(
                "self->m_pos + len + 1 <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                407, nullptr);
        }
        if (sVar4 == 0) {
            *(long*)(this + 24) = *(long*)(this + 24) + 1;
            str.clear();
            sVar4 = 0;
        } else {
            stringtools::CP1252ToUTF8<eastl::string>(str1, sVar4 & 4294967295, str);
            *(size_t*)(this + 24) = *(long*)(this + 24) + sVar4 + 1;
        }
        return sVar4;
    }

    // 0x1001a8d70
    unsigned short PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gT<unsigned short>() {
        uint64_t uVar3;
        uint64_t uVar6;

        long lVar4 = data();
        long lVar2 = *(long*)(this + 24);
        unsigned long uVar1 = lVar2 + 2;
        *(unsigned long*)(this + 24) = uVar1;
        if (end() < uVar1) {
            uVar3 = *(uint64_t*)(this + 24);
            uVar6 = end();
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                13, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        return local_2a = *(unsigned short*)(lVar4 + lVar2);
        ReorderToBE<short>((short*)&local_2a);
        return local_2a;
    }

    // 0x1001aaae0
    unsigned short PacketReaderMixin<PacketT<Array<unsigned char>>>::gT<unsigned short>() {
        uint64_t uVar3;
        uint64_t uVar6;

        long lVar4 = data();
        long lVar2 = *(long*)(this + 24);
        unsigned long uVar1 = lVar2 + 2;
        *(unsigned long*)(this + 24) = uVar1;
        if (end() < uVar1) {
            uVar3 = *(uint64_t*)(this + 24);
            uVar6 = end();
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                13, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        return local_2a = *(unsigned short*)(lVar4 + lVar2);
        ReorderToBE<short>((short*)&local_2a);
        return local_2a;
    }

    // 0x1001aafe0
    unsigned long
    PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(eastl::string& str,
                                                                                         bool arg2) {
        uint8_t bVar1;
        uint8_t* pbVar3;
        unsigned long uVar5;
        uint64_t in_register_00000011;

        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) != 0) {
            uVar5 = *(unsigned long*)(this + 24);
            *(unsigned long*)(this + 24) = uVar5 + 1;
            pbVar3 = (uint8_t*)(*this)[uVar5];
            bVar1 = *pbVar3;
            if (bVar1 != 0) {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                          "PacketMixins.inl",
                          399, "Bad version number in gStringCP1252ToUTF8: %d", (unsigned int)bVar1);
                str.clear();
                return 0;
            }
        }
        char* str1 = (char*)(*this)[*(unsigned long*)(this + 24)];
        size_t sVar4 = _strlen(str1);
        long lVar2 = *(long*)(this + 24);
        uVar5 = end();
        if (uVar5 < lVar2 + sVar4 + 1) {
            LogAssert(
                "self->m_pos + len + 1 <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                407, nullptr);
        }
        if (sVar4 == 0) {
            *(long*)(this + 24) = *(long*)(this + 24) + 1;
            str.clear();
            sVar4 = 0;
        } else {
            stringtools::CP1252ToUTF8<eastl::string>(str1, sVar4 & 4294967295, str);
            *(size_t*)(this + 24) = *(long*)(this + 24) + sVar4 + 1;
        }
        return sVar4;
    }

    // 0x1001abe70
    int PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252(const char* str, unsigned long arg2,
                                                                        bool arg3) {
        uint32_t in_register_00000011;

        return stringtools::GetUTF8StringWidth(str, arg2) + (((uint32_t)in_register_00000011 << 8) | (uint8_t)arg3) + 1;
    }

    // 0x1001abef0
    void PacketT<Array<unsigned char>>::pStringUTF8ToCP1252(const char* str, unsigned long arg2, bool arg3) {
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

    // 0x1001ca9f0
    void PacketT<Array<unsigned char>>::p2PlatformEndian(unsigned short arg1) {
        pTPE<unsigned short>(this, arg1);
    }

    // 0x1001caa10
    void PacketT<Array<unsigned char>>::p4PlatformEndian<unsigned int>(unsigned int arg1) {
        pTPE<int>(this, arg1);
    }

    // 0x1001caa20
    void PacketT<Array<unsigned char>>::p2_alt1(int arg1) {
        long lVar1 = *(long*)(this + 24);
        unsigned long uVar2 = end();
        if (uVar2 < lVar1 + 2U) {
            LogAssert("m_pos + 2 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      632, nullptr);
        }
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        uint8_t* puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)arg1;
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)((unsigned int)arg1 >> 8);
    }

    // 0x1001caac0
    void PacketT<Array<unsigned char>>::p1<signed char>(signed char arg1) {
        pT<signed char>(this, arg1);
    }

    // 0x1001cab00
    void PacketT<Array<unsigned char>>::p4_alt1(int arg1) {
        long lVar1 = *(long*)(this + 24);
        unsigned long uVar2 = end();
        if (uVar2 < lVar1 + 4U) {
            LogAssert("m_pos + 4 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      773, nullptr);
        }
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        uint8_t* puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)arg1;
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)((unsigned int)arg1 >> 8);
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)((unsigned int)arg1 >> 16);
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)((unsigned int)arg1 >> 24);
    }

    // 0x10020d2a0
    void PacketT<Array<unsigned char>>::pSmart1or2(unsigned short arg1) {
        uint64_t in_RAX;
        uint64_t in_register_00000032;

        uint32_t uVar1 = (uint32_t)((unsigned long)in_RAX >> 32);
        if (arg1 < 128) {
            p1<unsigned long>(this, arg1 & 255);
        } else if ((short)arg1 < 0) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      201, "pSmart1or2 out of range - val: %u",
                      (((uint64_t)uVar1 << 32) |
                       (uint32_t)((int)(((uint64_t)in_register_00000032 << 16) | (uint16_t)arg1))));
        } else {
            p2<unsigned long>(this, arg1 + 32768);
        }
    }

    // 0x10022e5e0
    int PacketReaderMixin<PacketT<Array<unsigned char>>>::gSmart1Or2Minus1() {
        short sVar2;

        char* pcVar3 = (char*)(*this)[*(unsigned long*)(this + 24)];
        if (*pcVar3 < '\0') {
            sVar2 = g2(this);
            sVar2 = sVar2 + 32767;
        } else {
            sVar2 = g1(this) - 1;
        }
        return (int)sVar2;
    }

    // 0x10023a9d0
    unsigned long PacketReaderMixin<PacketT<Array<unsigned char>>>::gVarInt() {
        uint8_t bVar1;

        unsigned long uVar3 = 0;
        uint8_t bVar2 = 0;
        do {
            bVar1 = g1(this);
            uVar3 = uVar3 | (unsigned long)(bVar1 & 127) << (bVar2 & 63);
            bVar2 = bVar2 + 7;
        } while ((char)bVar1 < '\0');
        return uVar3;
    }

    // 0x100260930
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252(const char* str, bool arg2) {
        size_t arg2_00 = _strlen(str);
        pStringUTF8ToCP1252(this, str, arg2_00, arg2);
    }

    // 0x100263ef0
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<int>(int arg1) {
        pT<long long>(this, (long)arg1);
    }

    // 0x10029a200
    void PacketReaderMixin<PacketT<Array<unsigned char>>>::g1Arr(unsigned char* arg1, unsigned long arg2) {
        long lVar2 = *(long*)(this + 24);
        if (end() < lVar2 + arg2) {
            LogAssert(
                "self->m_pos + sizeof(uint8) * count <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                257, nullptr);
        }
        lVar2 = data();
        _memcpy(arg1, (void*)(lVar2 + *(long*)(this + 24)), arg2);
        *(unsigned long*)(this + 24) = *(long*)(this + 24) + arg2;
    }

    // 0x1002b63b0
    void PacketT<Array<unsigned char>>::tinyKeyDecrypt(const std::array<int, 4ul>& arg1, unsigned long arg2,
                                                       unsigned long arg3) {
        unsigned int arg1_00;
        unsigned int arg1_01;
        int iVar2;
        unsigned long uVar3;
        int* piVar4;
        unsigned long uVar5;
        unsigned int uVar6;

        uint64_t uVar1 = *(uint64_t*)(this + 24);
        *(unsigned long*)(this + 24) = arg2;
        if (7 < arg3 - arg2) {
            uVar5 = arg3 - arg2 >> 3;
            uVar3 = 1;
            if (1 < uVar5) {
                uVar3 = uVar5;
            }
            uVar5 = 0;
            do {
                arg1_00 = g4();
                arg1_01 = g4();
                iVar2 = -32;
                uVar6 = 3337565984;
                do {
                    piVar4 = &arg1[(unsigned long)(uVar6 >> 11 & 3)];
                    arg1_01 = arg1_01 - (*piVar4 + uVar6 ^ (arg1_00 >> 5 ^ arg1_00 << 4) + arg1_00);
                    piVar4 = &arg1[(unsigned long)(uVar6 + 1640531527 & 3)];
                    arg1_00 = arg1_00 - (*piVar4 + uVar6 + 1640531527 ^ (arg1_01 >> 5 ^ arg1_01 * 16) + arg1_01);
                    iVar2 = iVar2 + 1;
                    uVar6 = uVar6 + 1640531527;
                } while (iVar2 != 0);
                *(long*)(this + 24) = *(long*)(this + 24) - 8;
                p4<int>(this, arg1_00);
                p4<int>(this, arg1_01);
                uVar5 = uVar5 + 1;
            } while (uVar5 != uVar3);
        }
        *(uint64_t*)(this + 24) = uVar1;
    }

    // 0x1002cb990
    void PacketT<Array<unsigned char>>::pSize4(unsigned int arg1) {
        pSize<unsigned int>(this, arg1);
    }

    // 0x1002e3530
    void PacketT<Array<unsigned char>>::pTPE<float>(float arg1) {
        long lVar1 = *(long*)(this + 24);
        if (end() < lVar1 + 4U) {
            LogAssert("m_pos + sizeof(T) <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      72, nullptr);
        }
        long lVar3 = data();
        lVar1 = *(long*)(this + 24);
        *(float*)(lVar3 + lVar1) = arg1;
        *(long*)(this + 24) = lVar1 + 4;
    }

    // 0x1002e3650
    float PacketReaderMixin<PacketT<Array<unsigned char>>>::gTPE<float>() {
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
                53, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        return *(float*)(lVar4 + lVar2);
    }

    // 0x1002e4770
    void PacketT<Array<unsigned char>>::pSize<unsigned int>(unsigned int arg1) {
        long lVar1 = *(long*)(this + 24);
        unsigned int local_1c = arg1;
        ReorderToBE<int>(&local_1c);
        long lVar2 = data();
        *(unsigned int*)((lVar1 - (unsigned long)arg1) - 4 + lVar2) = local_1c;
    }

    // 0x100348770
    int PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit::gBit(unsigned int arg1) {
        uint8_t* pbVar1;
        int iVar2;
        unsigned int uVar3;
        unsigned long arg1_01;

        unsigned int uVar4 = *(unsigned int*)(this + 8);
        unsigned int uVar5 = 8 - (uVar4 & 7);
        unsigned long uVar7 = ~(-1L << ((uint8_t)uVar5 & 63));
        unsigned int uVar6 = (unsigned int)uVar7;
        unsigned long arg1_00 = (unsigned long)(uVar4 >> 3);
        *(unsigned int*)(this + 8) = uVar4 + arg1;
        uVar4 = arg1;
        if (uVar5 < arg1) {
            iVar2 = 0;
            arg1_01 = arg1_00;
            uVar3 = uVar5;
            do {
                arg1_00 = arg1_01 + 1;
                pbVar1 = (uint8_t*)(*(*(Array<unsigned char, BucketAllocatorEASTL>**)this))[arg1_01];
                uVar4 = uVar4 - uVar3;
                iVar2 = iVar2 + (((unsigned int)*pbVar1 & (unsigned int)uVar7) << ((uint8_t)uVar4 & 63));
                if (uVar3 != 8) {
                    uVar7 = 255;
                }
                uVar6 = (unsigned int)uVar7;
                uVar3 = 8;
                uVar5 = 8;
                arg1_01 = arg1_00;
            } while (8 < uVar4);
        } else {
            iVar2 = 0;
        }
        pbVar1 = (uint8_t*)(*(*(Array<unsigned char, BucketAllocatorEASTL>**)this))[arg1_00];
        uVar3 =
            (unsigned int)(*pbVar1 >> ((char)uVar5 - (char)uVar4 & 63U)) & ~(unsigned int)(-1L << ((uint8_t)arg1 & 63));
        if (uVar5 == uVar4) {
            uVar3 = uVar6 & *pbVar1;
        }
        return iVar2 + uVar3;
    }

    // 0x1003488a0
    int PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit::bitsLeft(unsigned int arg1) const {
        return arg1 * 8 - *(int*)(this + 8);
    }

    // 0x1003a61f0
    PacketT<Array<unsigned char>>* PacketT<Array<unsigned char>>::operator=(PacketT<Array<unsigned char>>&& arg1) {
        swap(this, arg1);
        return this;
    }

    // 0x1003a6210
    void PacketReaderMixin<PacketT<Array<unsigned char>>>::g4s() {
        gT<int>(this);
    }

    // 0x1003a6f10
    PacketT<Array<unsigned char>>::PacketT(const PacketT<Array<unsigned char>>& arg1) : Array<unsigned char>() {
        *(uint64_t*)(this + 24) = *(uint64_t*)(arg1 + 24);
        unsigned long arg1_00 = arg1.end();
        Reserve(this, arg1_00);
        auto pvVar1 = data();
        auto pvVar2 = arg1.data();
        size_t sVar3 = arg1.end();
        _memcpy(pvVar1, pvVar2, sVar3);
    }

    // 0x1003a6f90
    void PacketT<Array<unsigned char>>::Reserve(unsigned long arg1) {
        set_max_size(arg1, 5);
    }

    // 0x1003b0380
    void PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252(const char* str, bool arg2) {
        size_t arg2_00 = _strlen(str);
        predictLengthPStringUTF8ToCP1252(str, arg2_00, arg2);
    }

    // 0x1004cd940
    void PacketReaderMixin<PacketT<Array<unsigned char>>>::g8s() {
        gT<long long>(this);
    }

    // 0x1004cd980
    void PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::g8s() {
        gT<long long>(this);
    }

    // 0x1004cda90
    eastl::basic_string<char, BucketAllocatorEASTL>
    PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<
        eastl::basic_string<char, BucketAllocatorEASTL>>(bool arg1) {
        bool in_DL;
        uint64_t in_register_00000031;

        new (this) eastl::basic_string<char, BucketAllocatorEASTL>();
        gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(
            (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1),
            (basic_string<char, BucketAllocatorEASTL>*)this, in_DL);
        return this;
    }

    // 0x1004cdb30
    eastl::basic_string<char, BucketAllocatorEASTL>
    PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
        eastl::basic_string<char, BucketAllocatorEASTL>>(bool arg1) {
        bool in_DL;
        uint64_t in_register_00000031;

        new (this) eastl::basic_string<char, BucketAllocatorEASTL>();
        gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(
            (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)(((uint64_t)in_register_00000031
                                                                                       << 8) |
                                                                                      (uint8_t)arg1),
            (basic_string<char, BucketAllocatorEASTL>*)this, in_DL);
        return this;
    }

    // 0x1004d4970
    long long PacketReaderMixin<PacketT<Array<unsigned char>>>::gT<long long>() {
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

    // 0x1004d4b10
    long long PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gT<long long>() {
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

    // 0x1004d4ba0
    void PacketT<Array<unsigned char>>::pT<long long>(long long arg1) {
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

    // 0x1004d4c10
    unsigned long PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<
        eastl::basic_string<char, BucketAllocatorEASTL>>(eastl::basic_string<char, BucketAllocatorEASTL>& str,
                                                         bool arg2) {
        uint8_t bVar1;
        uint8_t* pbVar3;
        unsigned long uVar5;
        uint64_t in_register_00000011;

        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) != 0) {
            uVar5 = *(unsigned long*)(this + 24);
            *(unsigned long*)(this + 24) = uVar5 + 1;
            pbVar3 = (uint8_t*)(*this)[uVar5];
            bVar1 = *pbVar3;
            if (bVar1 != 0) {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                          "PacketMixins.inl",
                          399, "Bad version number in gStringCP1252ToUTF8: %d", (unsigned int)bVar1);
                str.clear();
                return 0;
            }
        }
        char* str1 = (char*)(*this)[*(unsigned long*)(this + 24)];
        size_t sVar4 = _strlen(str1);
        long lVar2 = *(long*)(this + 24);
        uVar5 = end();
        if (uVar5 < lVar2 + sVar4 + 1) {
            LogAssert(
                "self->m_pos + len + 1 <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                407, nullptr);
        }
        if (sVar4 == 0) {
            *(long*)(this + 24) = *(long*)(this + 24) + 1;
            str.clear();
            sVar4 = 0;
        } else {
            stringtools::CP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(str1, sVar4 & 4294967295, str);
            *(size_t*)(this + 24) = *(long*)(this + 24) + sVar4 + 1;
        }
        return sVar4;
    }

    // 0x1004d50d0
    unsigned long PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
        eastl::basic_string<char, BucketAllocatorEASTL>>(eastl::basic_string<char, BucketAllocatorEASTL>& str,
                                                         bool arg2) {
        uint8_t bVar1;
        uint8_t* pbVar3;
        unsigned long uVar5;
        uint64_t in_register_00000011;

        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) != 0) {
            uVar5 = *(unsigned long*)(this + 24);
            *(unsigned long*)(this + 24) = uVar5 + 1;
            pbVar3 = (uint8_t*)(*this)[uVar5];
            bVar1 = *pbVar3;
            if (bVar1 != 0) {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                          "PacketMixins.inl",
                          399, "Bad version number in gStringCP1252ToUTF8: %d", (unsigned int)bVar1);
                str.clear();
                return 0;
            }
        }
        char* str1 = (char*)(*this)[*(unsigned long*)(this + 24)];
        size_t sVar4 = _strlen(str1);
        long lVar2 = *(long*)(this + 24);
        uVar5 = end();
        if (uVar5 < lVar2 + sVar4 + 1) {
            LogAssert(
                "self->m_pos + len + 1 <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                407, nullptr);
        }
        if (sVar4 == 0) {
            *(long*)(this + 24) = *(long*)(this + 24) + 1;
            str.clear();
            sVar4 = 0;
        } else {
            stringtools::CP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(str1, sVar4 & 4294967295, str);
            *(size_t*)(this + 24) = *(long*)(this + 24) + sVar4 + 1;
        }
        return sVar4;
    }

    // 0x1004f4640
    unsigned long PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::fixed_string<char, 128>>(
        eastl::fixed_string<char, 128>& str, bool arg2) {
        uint8_t bVar1;
        uint8_t* pbVar3;
        unsigned long uVar5;
        uint64_t in_register_00000011;

        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) != 0) {
            uVar5 = *(unsigned long*)(this + 24);
            *(unsigned long*)(this + 24) = uVar5 + 1;
            pbVar3 = (uint8_t*)(*this)[uVar5];
            bVar1 = *pbVar3;
            if (bVar1 != 0) {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                          "PacketMixins.inl",
                          399, "Bad version number in gStringCP1252ToUTF8: %d", (unsigned int)bVar1);
                str.clear();
                return 0;
            }
        }
        char* str1 = (char*)(*this)[*(unsigned long*)(this + 24)];
        size_t sVar4 = _strlen(str1);
        long lVar2 = *(long*)(this + 24);
        uVar5 = end();
        if (uVar5 < lVar2 + sVar4 + 1) {
            LogAssert(
                "self->m_pos + len + 1 <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                407, nullptr);
        }
        if (sVar4 == 0) {
            *(long*)(this + 24) = *(long*)(this + 24) + 1;
            str.clear();
            sVar4 = 0;
        } else {
            stringtools::CP1252ToUTF8<24, true>(str1, (unsigned int)sVar4, str);
            *(size_t*)(this + 24) = *(long*)(this + 24) + sVar4 + 1;
        }
        return sVar4;
    }

    // 0x1004f6650
    unsigned long PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gX(int arg1) {
        long lVar1;
        unsigned long arg1_00;
        Logger* this_00;
        unsigned long uVar2;
        uint8_t* pbVar3;
        int iVar4;

        unsigned int uVar5 = arg1 - 1;
        if (uVar5 < 8) {
            lVar1 = *(long*)(this + 24);
            uVar2 = end();
            if (uVar2 < (unsigned long)((int)uVar5 + lVar1)) {
                LogAssert("self->m_pos + bytes <= self->m_data.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                          "PacketMixins.inl",
                          214, nullptr);
            }
            if ((int)uVar5 < 0) {
                uVar2 = 0;
            } else {
                iVar4 = arg1 << 3;
                uVar2 = 0;
                do {
                    iVar4 = iVar4 - 8;
                    arg1_00 = *(unsigned long*)(this + 24);
                    *(unsigned long*)(this + 24) = arg1_00 + 1;
                    pbVar3 = (uint8_t*)(*this)[arg1_00];
                    uVar2 = uVar2 | (unsigned long)*pbVar3 << ((uint8_t)iVar4 & 63);
                } while (7 < iVar4);
            }
        } else {
            this_00 = logger::default_logger();
            uVar2 = 0;
            this_00->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                211, "Illegal number of bytes requested in gx() - must be between 1 and 8! Got %d", uVar5);
        }
        return uVar2;
    }

    // 0x1004f6930
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pX(long long arg1, unsigned int arg2) {
        uint64_t in_RAX;
        uint8_t* puVar3;
        int iVar4;

        uint32_t uVar5 = (uint32_t)((unsigned long)in_RAX >> 32);
        unsigned long uVar1 = *(unsigned long*)(this + 24);
        if (end() - (unsigned long)(arg2 - 1) <= uVar1) {
            LogAssert("m_pos < m_data.size() - (b - 1)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      253, nullptr);
        }
        if (arg2 - 1 < 8) {
            iVar4 = arg2 * 8;
            while (iVar4 = iVar4 - 8, -1 < iVar4) {
                uVar1 = *(unsigned long*)(this + 24);
                *(unsigned long*)(this + 24) = uVar1 + 1;
                puVar3 = (uint8_t*)(*this)[uVar1];
                *puVar3 = (char)(arg1 >> ((uint8_t)iVar4 & 63));
            }
        } else {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      256, "Illegal number of bytes requested in px() - must be between 1 and 8! Got %u",
                      (((uint64_t)uVar5 << 32) | (uint32_t)arg2));
        }
    }

    // 0x100516720
    unsigned long PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::fixed_string<char, 24>>(
        eastl::fixed_string<char, 24>& str, bool arg2) {
        uint8_t bVar1;
        uint8_t* pbVar3;
        unsigned long uVar5;
        uint64_t in_register_00000011;

        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) != 0) {
            uVar5 = *(unsigned long*)(this + 24);
            *(unsigned long*)(this + 24) = uVar5 + 1;
            pbVar3 = (uint8_t*)(*this)[uVar5];
            bVar1 = *pbVar3;
            if (bVar1 != 0) {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                          "PacketMixins.inl",
                          399, "Bad version number in gStringCP1252ToUTF8: %d", (unsigned int)bVar1);
                str.clear();
                return 0;
            }
        }
        char* str1 = (char*)(*this)[*(unsigned long*)(this + 24)];
        size_t sVar4 = _strlen(str1);
        long lVar2 = *(long*)(this + 24);
        uVar5 = end();
        if (uVar5 < lVar2 + sVar4 + 1) {
            LogAssert(
                "self->m_pos + len + 1 <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                407, nullptr);
        }
        if (sVar4 == 0) {
            *(long*)(this + 24) = *(long*)(this + 24) + 1;
            str.clear();
            sVar4 = 0;
        } else {
            stringtools::CP1252ToUTF8<24, true>(str1, (unsigned int)sVar4, str);
            *(size_t*)(this + 24) = *(long*)(this + 24) + sVar4 + 1;
        }
        return sVar4;
    }

    // 0x100516890
    unsigned long PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::fixed_string<char, 8>>(
        eastl::fixed_string<char, 8>& str, bool arg2) {
        uint8_t bVar1;
        uint8_t* pbVar3;
        unsigned long uVar5;
        uint64_t in_register_00000011;

        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) != 0) {
            uVar5 = *(unsigned long*)(this + 24);
            *(unsigned long*)(this + 24) = uVar5 + 1;
            pbVar3 = (uint8_t*)(*this)[uVar5];
            bVar1 = *pbVar3;
            if (bVar1 != 0) {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                          "PacketMixins.inl",
                          399, "Bad version number in gStringCP1252ToUTF8: %d", (unsigned int)bVar1);
                str.clear();
                return 0;
            }
        }
        char* str1 = (char*)(*this)[*(unsigned long*)(this + 24)];
        size_t sVar4 = _strlen(str1);
        long lVar2 = *(long*)(this + 24);
        uVar5 = end();
        if (uVar5 < lVar2 + sVar4 + 1) {
            LogAssert(
                "self->m_pos + len + 1 <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                407, nullptr);
        }
        if (sVar4 == 0) {
            *(long*)(this + 24) = *(long*)(this + 24) + 1;
            str.clear();
            sVar4 = 0;
        } else {
            stringtools::CP1252ToUTF8<24, true>(str1, (unsigned int)sVar4, str);
            *(size_t*)(this + 24) = *(long*)(this + 24) + sVar4 + 1;
        }
        return sVar4;
    }

    // 0x1005228e0
    unsigned long
    PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringNoConversion<32, true>(eastl::fixed_string<char, 32>& str,
                                                                                    bool arg2) {
        uint8_t bVar1;
        uint8_t* pbVar3;
        unsigned long uVar4;
        uint64_t in_register_00000011;

        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) != 0) {
            uVar4 = *(unsigned long*)(this + 24);
            *(unsigned long*)(this + 24) = uVar4 + 1;
            pbVar3 = (uint8_t*)(*this)[uVar4];
            bVar1 = *pbVar3;
            if (bVar1 != 0) {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                          "PacketMixins.inl",
                          460, "Bad version number in gStringNoConversion: %d", (unsigned int)bVar1);
                str.clear();
                return 0;
            }
        }
        char* str_00 = (char*)(*this)[*(unsigned long*)(this + 24)];
        size_t arg2_00 = _strlen(str_00);
        long lVar2 = *(long*)(this + 24);
        uVar4 = end();
        if (uVar4 < lVar2 + arg2_00 + 1) {
            LogAssert(
                "self->m_pos + len + 1 <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                468, nullptr);
        }
        str.assign(str_00, arg2_00);
        *(size_t*)(this + 24) = *(long*)(this + 24) + arg2_00 + 1;
        return arg2_00;
    }

    // 0x100541530
    int PacketReaderMixin<PacketT<Array<unsigned char>>>::gTPE<int>() {
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
                53, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        return *(int*)(lVar4 + lVar2);
    }

    // 0x1005f9670
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pSmart1or2(unsigned short arg1) {
        uint64_t in_RAX;
        int iVar2;
        uint64_t in_register_00000032;

        uint32_t uVar1 = (uint32_t)((unsigned long)in_RAX >> 32);
        if (arg1 < 128) {
            p1<oldscape::shared::LoginProt::ID>(this, arg1 & 255);
        } else {
            iVar2 = (int)(((uint64_t)in_register_00000032 << 16) | (uint16_t)arg1);
            if ((short)arg1 < 0) {
                (logger::default_logger())
                    ->Log(
                        false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                        201, "pSmart1or2 out of range - val: %u", (((uint64_t)uVar1 << 32) | (uint32_t)iVar2));
            } else {
                p2<int>(this, iVar2 + 32768);
            }
        }
    }

    // 0x1006936d0
    unsigned long PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::fixed_string<char, 32>>(
        eastl::fixed_string<char, 32>& str, bool arg2) {
        uint8_t bVar1;
        uint8_t* pbVar3;
        unsigned long uVar5;
        uint64_t in_register_00000011;

        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) != 0) {
            uVar5 = *(unsigned long*)(this + 24);
            *(unsigned long*)(this + 24) = uVar5 + 1;
            pbVar3 = (uint8_t*)(*this)[uVar5];
            bVar1 = *pbVar3;
            if (bVar1 != 0) {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                          "PacketMixins.inl",
                          399, "Bad version number in gStringCP1252ToUTF8: %d", (unsigned int)bVar1);
                str.clear();
                return 0;
            }
        }
        char* str1 = (char*)(*this)[*(unsigned long*)(this + 24)];
        size_t sVar4 = _strlen(str1);
        long lVar2 = *(long*)(this + 24);
        uVar5 = end();
        if (uVar5 < lVar2 + sVar4 + 1) {
            LogAssert(
                "self->m_pos + len + 1 <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                407, nullptr);
        }
        if (sVar4 == 0) {
            *(long*)(this + 24) = *(long*)(this + 24) + 1;
            str.clear();
            sVar4 = 0;
        } else {
            stringtools::CP1252ToUTF8<24, true>(str1, (unsigned int)sVar4, str);
            *(size_t*)(this + 24) = *(long*)(this + 24) + sVar4 + 1;
        }
        return sVar4;
    }

    // 0x1006e5000
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p3<int>(int arg1) {
        long lVar1 = *(long*)(this + 24);
        unsigned long uVar2 = end();
        if (uVar2 < lVar1 + 3U) {
            LogAssert("m_pos + 3 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      114, nullptr);
        }
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        uint8_t* puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)((unsigned int)arg1 >> 16);
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)((unsigned int)arg1 >> 8);
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)arg1;
    }

    // 0x1006e5d00
    void PacketT<Array<unsigned char>>::p4<float>(float arg1) {
        pT<int>(this, (int)arg1);
    }

    // 0x1006e5d80
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<float>(float arg1) {
        pT<int>(this, (int)arg1);
    }

    // 0x100806cc0
    void PacketReaderMixin<PacketView>::g2ArrLE(unsigned short* arg1, unsigned long arg2) {
        size_t sVar1 = arg2 * 2;
        long lVar3 = *(long*)(this + 16);
        if (HeapBeginPtr() < lVar3 + sVar1) {
            LogAssert(
                "self->m_pos + sizeof(uint16) * count <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                278, nullptr);
        }
        lVar3 = end();
        _memcpy(arg1, (void*)(lVar3 + *(long*)(this + 16)), sVar1);
        *(size_t*)(this + 16) = *(long*)(this + 16) + sVar1;
        ReorderArrFromLE<short>(arg1, arg2);
    }

    // 0x100806d70
    void PacketReaderMixin<PacketView>::g1Arr(unsigned char* arg1, unsigned long arg2) {
        long lVar2 = *(long*)(this + 16);
        if (HeapBeginPtr() < lVar2 + arg2) {
            LogAssert(
                "self->m_pos + sizeof(uint8) * count <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                257, nullptr);
        }
        lVar2 = end();
        _memcpy(arg1, (void*)(lVar2 + *(long*)(this + 16)), arg2);
        *(unsigned long*)(this + 16) = *(long*)(this + 16) + arg2;
    }

    // 0x100806e00
    void PacketReaderMixin<PacketView>::g2sArrLE(short* arg1, unsigned long arg2) {
        size_t sVar1 = arg2 * 2;
        long lVar3 = *(long*)(this + 16);
        if (HeapBeginPtr() < lVar3 + sVar1) {
            LogAssert(
                "self->m_pos + sizeof(int16) * count <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                320, nullptr);
        }
        lVar3 = end();
        _memcpy(arg1, (void*)(lVar3 + *(long*)(this + 16)), sVar1);
        *(size_t*)(this + 16) = *(long*)(this + 16) + sVar1;
        ReorderArrFromLE<short>((unsigned short*)arg1, arg2);
    }

    // 0x100807040
    void PacketReaderMixin<PacketView>::g1sArr(signed char* arg1, unsigned long arg2) {
        long lVar2 = *(long*)(this + 16);
        if (HeapBeginPtr() < lVar2 + arg2) {
            LogAssert(
                "self->m_pos + sizeof(int8) * count <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                299, nullptr);
        }
        lVar2 = end();
        _memcpy(arg1, (void*)(lVar2 + *(long*)(this + 16)), arg2);
        *(unsigned long*)(this + 16) = *(long*)(this + 16) + arg2;
    }

    // 0x1008070c0
    void PacketReaderMixin<PacketView>::g2Arr(unsigned short* arg1, unsigned long arg2) {
        size_t sVar1 = arg2 * 2;
        long lVar3 = *(long*)(this + 16);
        if (HeapBeginPtr() < lVar3 + sVar1) {
            LogAssert(
                "self->m_pos + sizeof(uint16) * count <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                267, nullptr);
        }
        lVar3 = end();
        _memcpy(arg1, (void*)(lVar3 + *(long*)(this + 16)), sVar1);
        *(size_t*)(this + 16) = *(long*)(this + 16) + sVar1;
        ReorderArrFromBE<unsigned short>(arg1, arg2);
    }

    // 0x100807150
    void PacketReaderMixin<PacketView>::g4LE() {
        gTLE<unsigned int>(this);
    }

    // 0x100856630
    unsigned int PacketT<Array<unsigned char>>::g4_alt1() {
        long lVar4 = *(long*)(this + 24);
        *(long*)(this + 24) = lVar4 + 4;
        uint8_t* pbVar5 = (uint8_t*)(*this)[lVar4 + 3];
        uint8_t bVar1 = *pbVar5;
        pbVar5 = (uint8_t*)(*this)[*(long*)(this + 24) - 2];
        uint8_t bVar2 = *pbVar5;
        pbVar5 = (uint8_t*)(*this)[*(long*)(this + 24) - 3];
        uint8_t bVar3 = *pbVar5;
        pbVar5 = (uint8_t*)(*this)[*(long*)(this + 24) - 4];
        return (unsigned int)*pbVar5 | (unsigned int)bVar3 << 8 | (unsigned int)bVar2 << 16 | (unsigned int)bVar1 << 24;
    }

    // 0x100882200
    unsigned short PacketReaderMixin<PacketView>::gTLE<unsigned short>() {
        uint64_t uVar3;
        uint64_t uVar6;

        long lVar4 = end();
        long lVar2 = *(long*)(this + 16);
        unsigned long uVar1 = lVar2 + 2;
        *(unsigned long*)(this + 16) = uVar1;
        if (HeapBeginPtr() < uVar1) {
            uVar3 = *(uint64_t*)(this + 16);
            uVar6 = HeapBeginPtr();
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                33, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        return local_2a = *(unsigned short*)(lVar4 + lVar2);
        ReorderFromLE<short>(&local_2a);
        return local_2a;
    }

    // 0x100882480
    float PacketReaderMixin<PacketView>::gTLE<float>() {
        uint64_t uVar3;
        uint64_t uVar6;

        long lVar4 = end();
        long lVar2 = *(long*)(this + 16);
        unsigned long uVar1 = lVar2 + 4;
        *(unsigned long*)(this + 16) = uVar1;
        if (HeapBeginPtr() < uVar1) {
            uVar3 = *(uint64_t*)(this + 16);
            uVar6 = HeapBeginPtr();
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                33, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        return local_2c = *(float*)(lVar4 + lVar2);
        ReorderFromLE<float>(&local_2c);
        return local_2c;
    }

    // 0x100882540
    short PacketReaderMixin<PacketView>::gTLE<short>() {
        uint64_t uVar3;
        uint64_t uVar6;

        long lVar4 = end();
        long lVar2 = *(long*)(this + 16);
        unsigned long uVar1 = lVar2 + 2;
        *(unsigned long*)(this + 16) = uVar1;
        if (HeapBeginPtr() < uVar1) {
            uVar3 = *(uint64_t*)(this + 16);
            uVar6 = HeapBeginPtr();
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                33, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        return local_2a = *(unsigned short*)(lVar4 + lVar2);
        ReorderFromLE<short>(&local_2a);
        return local_2a;
    }

    // 0x1009df6c0
    void PacketT<Array<unsigned char>>::Clear() {
        *(uint64_t*)(this + 24) = 0;
        clear();
    }

    // 0x1009df6e0
    void PacketReaderMixin<PacketT<Array<unsigned char>>>::gArrayBuffer(unsigned char* arg1, unsigned long arg2,
                                                                        unsigned long arg3) {
        long lVar1;
        void* pvVar3;

        if (arg3 != 0) {
            lVar1 = *(long*)(this + 24);
            if (end() < lVar1 + arg3) {
                LogAssert("self->m_pos + length <= self->m_data.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                          "PacketMixins.inl",
                          507, nullptr);
            }
            pvVar3 = (void*)(*this)[*(unsigned long*)(this + 24)];
            _memcpy(arg1 + arg2, pvVar3, arg3);
            *(unsigned long*)(this + 24) = *(long*)(this + 24) + arg3;
        }
    }

    // 0x1009dfb80
    uint8_t PacketReaderMixin<PacketView>::g1() {
        unsigned long arg1 = *(unsigned long*)(this + 16);
        *(unsigned long*)(this + 16) = arg1 + 1;
        uint8_t* puVar1 = (uint8_t*)(*this)[arg1];
        return *puVar1;
    }

    // 0x1009dfba0
    void PacketReaderMixin<PacketView>::g4() {
        gT<unsigned int>(this);
    }

    // 0x1009dfbc0
    PacketT<Array<unsigned char>>* PacketT<Array<unsigned char>>::operator=(const PacketT<Array<unsigned char>>& arg1) {
        *(uint64_t*)(this + 24) = *(uint64_t*)(arg1 + 24);
        unsigned long arg1_00 = arg1.end();
        Reserve(this, arg1_00);
        auto pvVar1 = data();
        auto pvVar2 = arg1.data();
        size_t sVar3 = arg1.end();
        _memcpy(pvVar1, pvVar2, sVar3);
        return this;
    }

    // 0x1009e0ba0
    void PacketT<Array<unsigned char>>::pArrayBuffer(const PacketT<Array<unsigned char>>& arg1, unsigned long arg2,
                                                     unsigned long arg3) {
        auto arg1_00 = GetDataPtr((PacketT<Array<unsigned char>>*)arg1);
        pArrayBuffer(this, arg1_00, arg2, arg3);
    }

    // 0x1009e7050
    void PacketT<Array<unsigned char>>::predictLengthPStringNoConversion(const char* str, bool arg2) {
        size_t arg2_00 = _strlen(str);
        predictLengthPStringNoConversion(str, arg2_00, arg2);
    }

    // 0x1009e7080
    void PacketT<Array<unsigned char>>::pStringNoConversion(const char* str, bool arg2) {
        size_t arg2_00 = _strlen(str);
        pStringNoConversion(this, str, arg2_00, arg2);
    }

    // 0x1009e7b70
    void PacketReaderMixin<PacketT<Array<unsigned char>>>::gArrayBuffer<PacketT<Array<unsigned char>>>(
        PacketT<Array<unsigned char>>& arg1, unsigned long arg2) {
        unsigned long uVar1;
        long lVar2;
        void* pvVar3;
        void* pvVar4;

        if (arg2 != 0) {
            lVar2 = *(long*)(this + 24);
            uVar1 = end();
            if (uVar1 < lVar2 + arg2) {
                LogAssert("(self->m_pos + length) <= self->m_data.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                          "PacketMixins.inl",
                          521, nullptr);
            }
            lVar2 = arg1.size();
            uVar1 = arg1.GetTextureAtlas();
            if (uVar1 < lVar2 + arg2) {
                LogAssert("(p.GetPos() + length) <= p.GetSize()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                          "PacketMixins.inl",
                          522, nullptr);
            }
            pvVar3 = (void*)arg1.GetDataPtr();
            pvVar4 = (void*)(*this)[*(unsigned long*)(this + 24)];
            _memcpy(pvVar3, pvVar4, arg2);
            *(unsigned long*)(this + 24) = *(long*)(this + 24) + arg2;
            lVar2 = arg1.size();
            arg1.SetPos(arg2 + lVar2);
        }
    }

    // 0x1009e7c60
    unsigned long PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringNoConversion<256, true>(
        eastl::fixed_string<char, 256>& str, bool arg2) {
        uint8_t bVar1;
        uint8_t* pbVar3;
        unsigned long uVar4;
        uint64_t in_register_00000011;

        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) != 0) {
            uVar4 = *(unsigned long*)(this + 24);
            *(unsigned long*)(this + 24) = uVar4 + 1;
            pbVar3 = (uint8_t*)(*this)[uVar4];
            bVar1 = *pbVar3;
            if (bVar1 != 0) {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                          "PacketMixins.inl",
                          460, "Bad version number in gStringNoConversion: %d", (unsigned int)bVar1);
                str.clear();
                return 0;
            }
        }
        char* str_00 = (char*)(*this)[*(unsigned long*)(this + 24)];
        size_t arg2_00 = _strlen(str_00);
        long lVar2 = *(long*)(this + 24);
        uVar4 = end();
        if (uVar4 < lVar2 + arg2_00 + 1) {
            LogAssert(
                "self->m_pos + len + 1 <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                468, nullptr);
        }
        str.assign(str_00, arg2_00);
        *(size_t*)(this + 24) = *(long*)(this + 24) + arg2_00 + 1;
        return arg2_00;
    }

    // 0x1009ef300
    unsigned int PacketT<Array<unsigned char>>::ReadUint(const Array<unsigned char>& arg1, unsigned int arg2) {
        if (arg1.end() <= arg2) {
            LogAssert("index < m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      1001, nullptr);
        }
        unsigned int* puVar2 = &arg1[(unsigned long)arg2];
        return local_1c = *puVar2;
        ReorderToBE<int>(&local_1c);
        return local_1c;
    }

    // 0x1009f0570
    unsigned int PacketReaderMixin<PacketT<Array<unsigned char>>>::gSmart2or4() {
        unsigned short uVar1;
        unsigned int uVar2;

        char* pcVar3 = (char*)(*this)[*(unsigned long*)(this + 24)];
        if (*pcVar3 < '\0') {
            uVar2 = g4(this);
            uVar2 = uVar2 & 2147483647;
        } else {
            uVar1 = g2(this);
            uVar2 = (unsigned int)uVar1;
        }
        return uVar2;
    }

    // 0x1009f1220
    auto PacketT<Array<unsigned char, BucketAllocatorEASTL>>::ToString() const {
        auto result;

        auto enumOptionToggle2 = size();
        int arg2 = eastl::min<graphics::GraphicsQuality>(20, enumOptionToggle2);
        ToString(&result, this, 0, arg2);
        return result;
    }

    // 0x1009f13a0
    void PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::g4s() {
        gT<int>(this);
    }

    // 0x1009f2650
    void PacketT<Array<unsigned char>>::p3<unsigned int>(unsigned int arg1) {
        long lVar1 = *(long*)(this + 24);
        unsigned long uVar2 = end();
        if (uVar2 < lVar1 + 3U) {
            LogAssert("m_pos + 3 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      114, nullptr);
        }
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        uint8_t* puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)(arg1 >> 16);
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)(arg1 >> 8);
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)arg1;
    }

    // 0x100a06dc0
    auto PacketT<Array<unsigned char, BucketAllocatorEASTL>>::ToString(int arg1, int arg2) const {
        uint8_t arg1_00;
        unsigned char arg1_01;
        uint64_t uVar1;
        bool cVar2;
        uint64_t uVar4;
        unsigned long uVar5;
        uint8_t* pbVar6;
        unsigned char* puVar7;
        unsigned long arg1_02;
        char* pcVar8;
        unsigned long arg1_03;
        eastl::string local_a8;
        unsigned int local_84;
        fixed_string<char, 20> local_78;

        if (GetTextureAtlas() == 0) {
            auto result("{ Packet : empty }");
        } else {
            local_a8 = eastl::string();
            local_a8.reserve(512);
            uVar1 = *(uint64_t*)(this + 24);
            uVar4 = end();
            local_a8.sprintf("{ Packet: pos=%llu/%llu:", uVar1, uVar4);
            if (0 < arg2) {
                local_84 = arg2 + arg1;
                uVar5 = (unsigned long)(int)local_84;
                do {
                    arg1_03 = (unsigned long)(unsigned int)arg1;
                    pcVar8 = " ";
                    if (arg1 == *(unsigned int*)(this + 24)) {
                        pcVar8 = "^";
                    }
                    local_a8 += pcVar8;
                    arg1_02 = (unsigned long)arg1;
                    pbVar6 = (uint8_t*)(*this)[arg1_02];
                    arg1_00 = *pbVar6;
                    cVar2 = isVeryInterestingCharacter(arg1_00);
                    if ((!cVar2) || ((int)local_84 <= (int)(arg1 + 2U))) {
                    LAB_100a06f80:
                        local_78 = eastl::fixed_string<char, 20>();
                        local_78.sprintf("%02X", (unsigned long)arg1_00);
                        pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        local_a8 += pcVar8;
                    }
                    puVar7 = (unsigned char*)(*this)[(long)(int)(arg1 + 1)];
                    cVar2 = isInterestingCharacter(*puVar7);
                    if (!cVar2)
                        goto LAB_100a06f80;
                    puVar7 = (unsigned char*)(*this)[(long)(int)(arg1 + 2U)];
                    cVar2 = isInterestingCharacter(*puVar7);
                    if (!cVar2)
                        goto LAB_100a06f80;
                    if (arg1 < (int)local_84) {
                        arg1_03 = arg1_02;
                        do {
                            puVar7 = (unsigned char*)(*this)[arg1_03];
                            arg1_01 = *puVar7;
                            cVar2 = isInterestingCharacter(arg1_01);
                            if (!cVar2)
                                goto LAB_100a06fd3;
                            if (((long)arg1_02 < (long)arg1_03) && ((int)arg1_03 == *(int*)(this + 24))) {
                                local_a8 += '^';
                            }
                            local_a8 += arg1_01;
                            arg1_03 = arg1_03 + 1;
                        } while (uVar5 != arg1_03);
                        arg1 = local_84;
                    } else {
                    LAB_100a06fd3:
                        arg1 = (int)arg1_03;
                    }
                } while (arg1 < (int)local_84);
            }
            pcVar8 = " ";
            if (arg1 == *(unsigned int*)(this + 24)) {
                pcVar8 = "^";
            }
            local_a8 += pcVar8;
            local_a8 += "}";
            new (&result) eastl::string(local_a8);
        }
        return result;
    }

    // 0x100a072b0
    int PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gT<int>() {
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

    // 0x100a0c4e0
    void PacketReaderMixin<PacketView>::gArrayBuffer(unsigned char* arg1, unsigned long arg2, unsigned long arg3) {
        long lVar1;
        void* pvVar3;

        if (arg3 != 0) {
            lVar1 = *(long*)(this + 16);
            if (HeapBeginPtr() < lVar1 + arg3) {
                LogAssert("self->m_pos + length <= self->m_data.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                          "PacketMixins.inl",
                          507, nullptr);
            }
            pvVar3 = (void*)(*this)[*(unsigned long*)(this + 16)];
            _memcpy(arg1 + arg2, pvVar3, arg3);
            *(unsigned long*)(this + 16) = *(long*)(this + 16) + arg3;
        }
    }

    // 0x100a0d170
    unsigned short PacketReaderMixin<PacketView>::g2() {
        return gT<unsigned short>(this);
    }

    // 0x100a0d1e0
    unsigned int PacketReaderMixin<PacketView>::g3() {
        unsigned long arg1 = *(unsigned long*)(this + 16);
        *(unsigned long*)(this + 16) = arg1 + 3;
        uint8_t* pbVar3 = (uint8_t*)(*this)[arg1];
        uint8_t bVar1 = *pbVar3;
        pbVar3 = (uint8_t*)(*this)[*(long*)(this + 16) - 2];
        uint8_t bVar2 = *pbVar3;
        pbVar3 = (uint8_t*)(*this)[*(long*)(this + 16) - 1];
        return (unsigned int)*pbVar3 | (unsigned int)bVar2 << 8 | (unsigned int)bVar1 << 16;
    }

    // 0x100a0efa0
    unsigned short PacketReaderMixin<PacketView>::gT<unsigned short>() {
        uint64_t uVar3;
        uint64_t uVar6;

        long lVar4 = end();
        long lVar2 = *(long*)(this + 16);
        unsigned long uVar1 = lVar2 + 2;
        *(unsigned long*)(this + 16) = uVar1;
        if (HeapBeginPtr() < uVar1) {
            uVar3 = *(uint64_t*)(this + 16);
            uVar6 = HeapBeginPtr();
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                13, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        return local_2a = *(unsigned short*)(lVar4 + lVar2);
        ReorderToBE<short>((short*)&local_2a);
        return local_2a;
    }

    // 0x100c6ef20
    void PacketT<Array<unsigned char>>::pT<float>(float arg1) {
        long lVar1 = *(long*)(this + 24);
        float local_1c = arg1;
        if (end() < lVar1 + 4U) {
            LogAssert("m_pos + sizeof(T) <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      56, nullptr);
        }
        ReorderToBE<float>(&local_1c);
        long lVar3 = data();
        lVar1 = *(long*)(this + 24);
        *(float*)(lVar3 + lVar1) = local_1c;
        *(long*)(this + 24) = lVar1 + 4;
    }

} // namespace jag
