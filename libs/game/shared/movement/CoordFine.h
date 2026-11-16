// libs/game/shared/movement/CoordFine.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class CoordFine {
    public:
        CoordFine* operator=(CoordFine&& coordFine);
        CoordFine* operator=(const CoordFine& coordFine);
        void ToString() const;
        CoordFine();
        bool operator==(const CoordFine& coordFine) const;
        char const* ToString<64, true>(eastl::fixed_string<char, 64>& str) const;
        int GetMapSquareX() const;
        int GetMapSquareZ() const;
        unsigned int GetLocalX() const;
        unsigned int GetLocalZ() const;
        CoordFine<double>(int arg1, const math::Vector3T<double>& vector3);
        char const* ToString<32, true>(eastl::fixed_string<char, 32>& str) const;
        CoordFine(int arg1, float arg2, float arg3, float arg4);
        CoordFine(int arg1, float arg2, float arg3);
        CoordFine(int arg1, const math::Vector3T<float>& vector3);
        CoordFine(const CoordGrid& coordGrid, bool arg2);
        CoordFine(PacketT<Array<unsigned char>>& arg1);
        CoordFine(PacketT<Array<unsigned char>>& arg1);
        void Serialise(PacketT<Array<unsigned char>>& arg1) const;
        void Serialise(PacketT<Array<unsigned char>>& arg1) const;
        bool operator<(const CoordFine& coordFine) const;
        unsigned long FromString(StringView stringView);

    private:
        unsigned int field_0;
        float field_4;
        float field_8;
        float field_12;
        uint8_t _unknown_16[4];
    };

    // 0x1001a1d80
    CoordFine* CoordFine::operator=(CoordFine&& coordFine) {
        field_0 = coordFine.field_0;
        field_4.SetXYZ(coordFine.field_4);
        return this;
    }

    // 0x1003e81e0
    void CoordFine::ToString() const {
        int iVar6;

        if ((*PTR_temp_100ee5100 == '\0') && (iVar6 = ___cxa_guard_acquire(PTR_temp_100ee5100), iVar6 != 0)) {
            new (PTR_temp_100ee9d70) eastl::fixed_string<char, 64>();
            ___cxa_atexit(PTR__fixed_string_100ee6ca0, PTR_temp_100ee9d70, 4294967296);
            ___cxa_guard_release(PTR_temp_100ee5100);
        }
        unsigned int uVar1 = field_0;
        unsigned int uVar2 = GetMapSquareX();
        unsigned int uVar3 = GetMapSquareZ();
        unsigned int uVar4 = GetLocalX();
        uint32_t uVar5 = GetLocalZ();
        PTR_temp_100ee9d70->sprintf("%d,%d,%d,%d,%d (+%d,+%d,Y=%d)", (unsigned long)uVar1, (unsigned long)uVar2,
                                    (unsigned long)uVar3, (unsigned long)uVar4, uVar5, (int)field_4 % 512,
                                    (int)field_12 % 512, (int)field_8);
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x1003f5e40
    bool CoordFine::operator==(const CoordFine& coordFine) const {
        if (field_0 == coordFine.field_0) {
            return field_4 == coordFine.field_4;
        }
        return false;
    }

    // 0x1003fea40
    CoordFine::CoordFine() : field_0(4294967295) {}

    // 0x10042fd60
    char const* CoordFine::ToString<64, true>(eastl::fixed_string<char, 64>& str) const {
        unsigned int uVar1 = field_0;
        unsigned int uVar2 = GetMapSquareX();
        unsigned int uVar3 = GetMapSquareZ();
        unsigned int uVar4 = GetLocalX();
        unsigned int uVar5 = GetLocalZ();
        str.sprintf("%d,%d,%d,%d,%d (+%d,+%d,Y=%d)", uVar1, (unsigned long)uVar2, (unsigned long)uVar3,
                    (unsigned long)uVar4, (unsigned long)uVar5, (unsigned long)(unsigned int)((int)field_4 % 512),
                    (unsigned long)(unsigned int)((int)field_12 % 512), (unsigned long)(unsigned int)(int)field_8);
        return (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x100439960
    int CoordFine::GetMapSquareX() const {
        auto pfVar1 = field_4.SSOBeginPtr();
        return (int)*pfVar1 >> 13;
    }

    // 0x100439980
    int CoordFine::GetMapSquareZ() const {
        auto pfVar1 = field_4.second();
        return (int)*pfVar1 >> 13;
    }

    // 0x1004399a0
    unsigned int CoordFine::GetLocalX() const {
        auto pfVar1 = field_4.SSOBeginPtr();
        return (unsigned int)(int)*pfVar1 >> 7 & 63;
    }

    // 0x1004399c0
    unsigned int CoordFine::GetLocalZ() const {
        auto pfVar1 = field_4.second();
        return (unsigned int)(int)*pfVar1 >> 7 & 63;
    }

    // 0x10061d5a0
    CoordFine::CoordFine<double>(int arg1, const math::Vector3T<double>& vector3) {
        CoordFine(arg1, (float)*(double*)vector3, (float)*(double*)(vector3 + 8), (float)*(double*)(vector3 + 16));
    }

    // 0x10061d5d0
    char const* CoordFine::ToString<32, true>(eastl::fixed_string<char, 32>& str) const {
        unsigned int uVar1 = field_0;
        unsigned int uVar2 = GetMapSquareX();
        unsigned int uVar3 = GetMapSquareZ();
        unsigned int uVar4 = GetLocalX();
        unsigned int uVar5 = GetLocalZ();
        str.sprintf("%d,%d,%d,%d,%d (+%d,+%d,Y=%d)", uVar1, (unsigned long)uVar2, (unsigned long)uVar3,
                    (unsigned long)uVar4, (unsigned long)uVar5, (unsigned long)(unsigned int)((int)field_4 % 512),
                    (unsigned long)(unsigned int)((int)field_12 % 512), (unsigned long)(unsigned int)(int)field_8);
        return (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

} // namespace jag::game

namespace jag {
    // 0x1001a2110
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::gArrayBuffer_alt2<
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>>(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1,
                                                             unsigned long arg2) {
        unsigned char* arg1_00 = &arg1[0];
        gArrayBuffer_alt2(this, arg1_00, 0, arg2);
    }

    // 0x1001a2140
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::gArrayBuffer_alt2(unsigned char* arg1, unsigned long arg2,
                                                                                unsigned long arg3) {
        long lVar1;
        unsigned long arg1_00;
        unsigned long uVar2;
        uint8_t* pbVar3;

        if (arg3 != 0) {
            lVar1 = *(long*)(this + 24);
            uVar2 = end();
            if (uVar2 < lVar1 + arg3) {
                LogAssert(
                    "m_pos + length <= m_data.size()",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl", 975,
                    nullptr);
            }
            if (arg2 < arg3 + arg2) {
                uVar2 = 0;
                do {
                    arg1_00 = *(unsigned long*)(this + 24);
                    *(unsigned long*)(this + 24) = arg1_00 + 1;
                    pbVar3 = (uint8_t*)(*this)[arg1_00];
                    arg1[uVar2 + arg2] = *pbVar3 ^ 128;
                    uVar2 = uVar2 + 1;
                } while (arg3 != uVar2);
            }
        }
    }

    // 0x1001a21e0
    uint8_t PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g1_alt1() {
        unsigned long arg1 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = arg1 + 1;
        uint8_t* pbVar1 = (uint8_t*)(*this)[arg1];
        return *pbVar1 ^ 128;
    }

    // 0x1001a2200
    unsigned int PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g2_alt3() {
        long lVar2 = *(long*)(this + 24);
        *(long*)(this + 24) = lVar2 + 2;
        uint8_t* pbVar3 = (uint8_t*)(*this)[lVar2 + 1];
        uint8_t bVar1 = *pbVar3;
        pbVar3 = (uint8_t*)(*this)[*(long*)(this + 24) - 2];
        return *pbVar3 ^ 128 | (unsigned int)bVar1 << 8;
    }

    // 0x1001a2250
    unsigned int PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g2_alt2() {
        unsigned long arg1 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = arg1 + 2;
        uint8_t* pbVar2 = (uint8_t*)(*this)[arg1];
        uint8_t bVar1 = *pbVar2;
        pbVar2 = (uint8_t*)(*this)[*(long*)(this + 24) - 1];
        return *pbVar2 ^ 128 | (unsigned int)bVar1 << 8;
    }

    // 0x1001a22a0
    char PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g1_alt2() {
        unsigned long arg1 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = arg1 + 1;
        char* pcVar1 = (char*)(*this)[arg1];
        return -*pcVar1;
    }

    // 0x1001a2860
    char PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g1_alt3() {
        unsigned long arg1 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = arg1 + 1;
        char* pcVar1 = (char*)(*this)[arg1];
        return -128 - *pcVar1;
    }

    // 0x1001a2880
    int PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g1s_alt3() {
        unsigned long arg1 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = arg1 + 1;
        char* pcVar1 = (char*)(*this)[arg1];
        return (int)(char)(-128 - *pcVar1);
    }

    // 0x1001a28a0
    unsigned int PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g1s_alt1() {
        unsigned long arg1 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = arg1 + 1;
        char* pcVar1 = (char*)(*this)[arg1];
        return (int)*pcVar1 ^ 4294967168;
    }

    // 0x1001a28c0
    uint16_t PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g2_alt1() {
        long lVar2 = *(long*)(this + 24);
        *(long*)(this + 24) = lVar2 + 2;
        uint8_t* puVar3 = (uint8_t*)(*this)[lVar2 + 1];
        uint8_t uVar1 = *puVar3;
        puVar3 = (uint8_t*)(*this)[*(long*)(this + 24) - 2];
        return *puVar3;
    }

    // 0x1001a2910
    int PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g1s_alt2() {
        unsigned long arg1 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = arg1 + 1;
        char* pcVar1 = (char*)(*this)[arg1];
        return (int)-*pcVar1;
    }

} // namespace jag

namespace jag::math {
    // 0x1001a1dd0
    Vector4T<float>* Vector3T<float>::operator=(const Vector3T<float>& vector3) {
        *(uint32_t*)this = *(uint32_t*)vector3;
        *(uint32_t*)(this + 4) = *(uint32_t*)(vector3 + 4);
        *(uint32_t*)(this + 8) = *(uint32_t*)(vector3 + 8);
        return this;
    }

} // namespace jag::math
