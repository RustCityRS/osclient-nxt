// libs/oldscape/jagex3/core/bytepacking/Packet.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::oldscape {
    template <typename...> // 2 instantiations, e.g. <Array<unsigned char> >, <Array<unsigned char> >
    class PacketJ {
    public:
        char g1Enc(Isaac& isaac);
        bool CheckCrc();
        void PacketT(const Array<unsigned char>& arg1);
        PacketJ();
        PacketJ(PacketJ<Array<unsigned char>>&& packetJ);
        PacketJ<Array<unsigned char>>* operator=(PacketJ<Array<unsigned char>>&& packetJ);
        void PacketT(const eastl::vector<unsigned char>& arg1);
        void GetCrc(const Array<unsigned char>& arg1, int arg2, int arg3);
        void PacketT(Array<unsigned char>&& arg1);
        ~PacketJ();
        void PacketT(unsigned long arg1);
        uint16_t gSmarts();
        void pSmartInt2(int arg1);
        void PacketT(const unsigned char* arg1, unsigned long arg2);
        PacketJ<Array<unsigned char>>* operator=(const PacketJ<Array<unsigned char>>& packetJ);
        unsigned int gMidiVarLen();
        void pMidiVarLen(int arg1);
        PacketJ(const PacketJ<Array<unsigned char>>& packetJ);
        PacketJ(PacketJ<Array<unsigned char>>&& packetJ);
        int gSmartsExtend();
        int gSmart();
    };

    // 0x1000bc380
    char PacketJ<Array<unsigned char>>::g1Enc(Isaac& isaac) {
        int iVar3 = size();
        auto this_00 = SSOBeginPtr();
        char* pcVar4 = (char*)(*this_00)[(long)iVar3];
        bool cVar1 = *pcVar4;
        bool cVar2 = isaac.TakeNextValue();
        SetPos((long)(iVar3 + 1));
        return cVar1 - cVar2;
    }

    // 0x1001375d0
    void PacketJ<Array<unsigned char>>::PacketT(const eastl::vector<unsigned char>& arg1) {
        new (this) PacketT(arg1);
    }

    // 0x1001375e0
    void PacketJ<Array<unsigned char>>::PacketT(const eastl::vector<unsigned char>& arg1) {
        PacketT(this, arg1);
    }

    // 0x100183680
    void PacketJ<Array<unsigned char>>::PacketT(unsigned long arg1) {
        new (this) PacketT(arg1);
    }

    // 0x10018e5e0
    uint16_t PacketJ<Array<unsigned char, BucketAllocatorEASTL>>::gSmarts() {
        return gSmart1or2();
    }

    // 0x100198180
    void PacketJ<Array<unsigned char>>::PacketT(unsigned long arg1) {
        PacketT(this, arg1);
    }

    // 0x100198190
    PacketJ<Array<unsigned char>>::~PacketJ() {}

    // 0x10020f810
    uint16_t PacketJ<Array<unsigned char>>::gSmarts() {
        return gSmart1or2();
    }

    // 0x100210ae0
    void PacketJ<Array<unsigned char>>::pSmartInt2(int arg1) {
        int iVar1;
        Array<unsigned char>* this_00;
        uint8_t* pbVar2;

        if (arg1 < -1) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "core/bytepacking/Packet.h",
                            54, "psmartint out of range - val: %i");
        }
        if (arg1 == -1) {
            p2<unsigned long>(32767);
        } else if (arg1 < 32767) {
            p2<unsigned long>((unsigned short)arg1);
        } else {
            p4<int>(arg1);
            iVar1 = size();
            this_00 = (Array<unsigned char>*)SSOBeginPtr();
            pbVar2 = (uint8_t*)(*this_00)[(long)(iVar1 - 4)];
            *pbVar2 = *pbVar2 | 128;
        }
    }

    // 0x1002b6390
    PacketJ<Array<unsigned char>>*
    PacketJ<Array<unsigned char>>::operator=(const PacketJ<Array<unsigned char>>& packetJ) {
        *this = packetJ;
        return this;
    }

    // 0x1002bdbc0
    void PacketJ<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(const unsigned char* arg1, unsigned long arg2) {
        new (this) PacketT(arg1, arg2);
    }

    // 0x1002cb700
    unsigned int PacketJ<Array<unsigned char>>::gMidiVarLen() {
        unsigned int uVar4;
        unsigned long arg1;

        long lVar2 = size();
        auto this_00 = SSOBeginPtr();
        uint8_t* pbVar3 = (uint8_t*)(*this_00)[(long)(int)lVar2];
        uint8_t bVar1 = *pbVar3;
        if ((char)bVar1 < '\0') {
            arg1 = (lVar2 << 32) + 4294967296 >> 32;
            uVar4 = 0;
            do {
                uVar4 = (bVar1 & 127 | uVar4) << 7;
                pbVar3 = (uint8_t*)(*this_00)[arg1];
                bVar1 = *pbVar3;
                arg1 = arg1 + 1;
            } while ((char)bVar1 < '\0');
        } else {
            arg1 = lVar2 + 1;
            uVar4 = 0;
        }
        SetPos((long)(int)arg1);
        return (int)(char)bVar1 | uVar4;
    }

    // 0x1002cb7a0
    void PacketJ<Array<unsigned char>>::pMidiVarLen(int arg1) {
        if (127 < (unsigned int)arg1) {
            if (16383 < (unsigned int)arg1) {
                if (2097151 < (unsigned int)arg1) {
                    if (268435455 < (unsigned int)arg1) {
                        p1<unsigned long>(arg1 >> 28 | 128);
                    }
                    p1<unsigned long>(arg1 >> 21 | 128);
                }
                p1<unsigned long>(arg1 >> 14 | 128);
            }
            p1<unsigned long>(arg1 >> 7 | 128);
        }
        p1<unsigned long>(arg1 & 127);
    }

} // namespace jag::oldscape

namespace jag::oldscape::shared {
    class PacketPool {
    public:
        PacketPool(unsigned int arg1);
        ~PacketPool();
        bool Fetch(PacketJ<Array<unsigned char>>& packetJ);
        void Return(PacketJ<Array<unsigned char>>&& packetJ);
        static int32_t SIZES[4];      // = { 100, 5000, 30000, 0 }
        static PacketPool g_pools[2]; // initialised in its definition

    private:
        uint8_t _unknown_0[320];
        int field_320;
        unsigned int field_324;
        uint8_t _unknown_328[4];
    };

    // 0x100d40140
    int32_t PacketPool::SIZES[4] = {100, 5000, 30000, 0};

    // 0x1016c1910, set at startup by ___cxx_global_var_init.14
    PacketPool PacketPool::g_pools[2] = {
        /* [0] */ PacketPool(*puVar1),
        /* [1] */ PacketPool(*puVar1),
    };

    // 0x100292f60
    bool PacketPool::Fetch(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        PacketJ<Array<unsigned char, BucketAllocatorEASTL> _>* packetJ_00;

        int iVar1 = field_320;
        if ((long)iVar1 < 10) {
            packetJ_00 = (PacketJ<Array<unsigned char, BucketAllocatorEASTL> _>*)(*this)[(long)iVar1];
            packetJ = *packetJ_00;
            field_320 = field_320 + 1;
        }
        return iVar1 < 10;
    }

    // 0x100293070
    void PacketPool::Return(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&& packetJ) {
        PacketJ<Array<unsigned char, BucketAllocatorEASTL>>* this_00;

        unsigned long uVar1 = packetJ.GetTextureAtlas();
        if ((uVar1 == field_324) && (0 < (long)field_320)) {
            uVar1 = (long)field_320 - 1;
            field_320 = (int)uVar1;
            this_00 = (PacketJ<Array<unsigned char, BucketAllocatorEASTL>>*)(*this)[uVar1];
            *this_00 = packetJ;
        }
    }

} // namespace jag::oldscape::shared

namespace jag {
    // 0x1000bc3e0
    void PacketReaderMixin<PacketT<Array<unsigned char>>>::g8() {
        gT<unsigned long long>(this);
    }

    // 0x1000bca00
    void PacketReaderMixin<PacketT<Array<unsigned char>>>::gArrayBufferEncrypted(unsigned char* arg1, int arg2,
                                                                                 int arg3, Isaac& isaac) {
        bool cVar1;
        unsigned long arg1_00;
        bool cVar2;
        char* pcVar3;
        long lVar4;

        if (0 < arg3) {
            lVar4 = 0;
            do {
                arg1_00 = *(unsigned long*)(this + 24);
                *(unsigned long*)(this + 24) = arg1_00 + 1;
                pcVar3 = (char*)(*this)[arg1_00];
                cVar1 = *pcVar3;
                cVar2 = isaac.TakeNextValue();
                arg1[lVar4 + arg2] = cVar1 - cVar2;
                lVar4 = lVar4 + 1;
            } while (arg3 != (int)lVar4);
        }
    }

} // namespace jag
