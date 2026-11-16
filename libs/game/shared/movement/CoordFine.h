// libs/game/shared/movement/CoordFine.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class CoordFine {
    public:
        CoordFine* operator=(CoordFine&&);
        CoordFine* operator=(CoordFine const&);
        void ToString() const;
        CoordFine();
        bool operator==(CoordFine const&) const;
        char const* ToString<64, true>(eastl::fixed_string<char, 64, true, eastl::allocator>&) const;
        int GetMapSquareX() const;
        int GetMapSquareZ() const;
        uint GetLocalX() const;
        uint GetLocalZ() const;
        CoordFine<double>(int, math::Vector3T<double> const&);
        char const* ToString<32, true>(eastl::fixed_string<char, 32, true, eastl::allocator>&) const;
        CoordFine(int, float, float, float);
        CoordFine(int, float, float);
        CoordFine(int, math::Vector3T<float> const&);
        CoordFine(CoordGrid const&, bool);
        CoordFine(PacketT<Array<unsigned char, eastl::allocator>>&);
        CoordFine(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&);
        void Serialise(PacketT<Array<unsigned char, eastl::allocator>>&) const;
        void Serialise(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&) const;
        bool operator<(CoordFine const&) const;
        ulong FromString(StringView);

        // data members, from how the methods use this: 20 bytes
        uint field_0;   // offset 0
        float field_4;  // offset 4
        float field_8;  // offset 8
        float field_12; // offset 12
        char _unknown_16[4];
    };

    // 0x1001a1d80, 48 bytes, inline, placed by class name and debug map
    // CoordFine::operator=(CoordFine&&)
    /* CoordFine::TEMPNAMEPLACEHOLDERVALUE(CoordFine const&) */

    CoordFine* CoordFine::operator=(CoordFine* param_1) {
        field_0 = param_1->field_0;
        (&field_4, (Vector3T*)&param_1->field_4)->SetXYZ();
        return this;
    }

    // 0x1003e81e0, 320 bytes, inline, placed by class name
    // CoordFine::ToString() const
    void CoordFine::ToString() {
        uint uVar1;
        uint uVar2;
        uint uVar3;
        uint uVar4;
        undefined4 uVar5;
        int iVar6;

        if ((*PTR_temp_100ee5100 == '\0') && (iVar6 = ___cxa_guard_acquire(PTR_temp_100ee5100), iVar6 != 0)) {
            new (PTR_temp_100ee9d70) eastl::fixed_string<char, 64, true, eastl::allocator>();
            ___cxa_atexit(PTR__fixed_string_100ee6ca0, PTR_temp_100ee9d70, 4294967296);
            ___cxa_guard_release(PTR_temp_100ee5100);
        }
        uVar1 = field_0;
        uVar2 = GetMapSquareX(this);
        uVar3 = GetMapSquareZ(this);
        uVar4 = GetLocalX(this);
        uVar5 = GetLocalZ(this);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            PTR_temp_100ee9d70, "%d,%d,%d,%d,%d (+%d,+%d,Y=%d)", (ulong)uVar1, (ulong)uVar2, (ulong)uVar3, (ulong)uVar4,
            uVar5, (int)field_4 % 512, (int)field_12 % 512, (int)field_8);
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x1003f0640, 16 bytes, complete-object constructor, inline, placed by class name
    // CoordFine::CoordFine(): jumps straight to the base-object constructor

    // 0x1003f5e40, 32 bytes, inline, placed by class name
    // CoordFine::operator==(CoordFine const&) const
    /* CoordFine::TEMPNAMEPLACEHOLDERVALUE(CoordFine const&) const */

    bool CoordFine::operator==(CoordFine* param_1) {
        if (field_0 == param_1->field_0) {
            return math::operator==((Vector3T*)&field_4, (Vector3T*)&param_1->field_4);
        }
        return false;
    }

    // 0x1003fea40, 32 bytes, base-object constructor, inline, placed by class name
    // CoordFine::CoordFine()
    void CoordFine::CoordFine() {
        field_0 = 4294967295;
        new (&field_4) math::Vector3T<int>();
    }

    // 0x10042fd60, 192 bytes, inline, placed by class name
    // char const* CoordFine::ToString<64, true>(eastl::fixed_string<char, 64, true, eastl::allocator>&) const
    char* CoordFine::ToString<64, true>(fixed_string* param_1) {
        uint uVar1;
        uint uVar2;
        uint uVar3;
        uint uVar4;
        uint uVar5;

        uVar1 = field_0;
        uVar2 = GetMapSquareX(this);
        uVar3 = GetMapSquareZ(this);
        uVar4 = GetLocalX(this);
        uVar5 = GetLocalZ(this);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)param_1, "%d,%d,%d,%d,%d (+%d,+%d,Y=%d)", uVar1, (ulong)uVar2, (ulong)uVar3, (ulong)uVar4,
            (ulong)uVar5, (ulong)(uint)((int)field_4 % 512), (ulong)(uint)((int)field_12 % 512),
            (ulong)(uint)(int)field_8);
        return (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x100439960, 32 bytes, inline, placed by class name
    // CoordFine::GetMapSquareX() const
    int CoordFine::GetMapSquareX() {
        vector* pvVar1;
        type* in_RSI;

        pvVar1 = (&field_4, in_RSI)->SSOBeginPtr();
        return (int)*(float*)pvVar1 >> 13;
    }

    // 0x100439980, 32 bytes, inline, placed by class name
    // CoordFine::GetMapSquareZ() const
    int CoordFine::GetMapSquareZ() {
        float* pfVar1;

        pfVar1 = (float*)(&field_4)->second();
        return (int)*pfVar1 >> 13;
    }

    // 0x1004399a0, 32 bytes, inline, placed by class name
    // CoordFine::GetLocalX() const
    uint CoordFine::GetLocalX() {
        vector* pvVar1;
        type* in_RSI;

        pvVar1 = (&field_4, in_RSI)->SSOBeginPtr();
        return (uint)(int)*(float*)pvVar1 >> 7 & 63;
    }

    // 0x1004399c0, 32 bytes, inline, placed by class name
    // CoordFine::GetLocalZ() const
    uint CoordFine::GetLocalZ() {
        float* pfVar1;

        pfVar1 = (float*)(&field_4)->second();
        return (uint)(int)*pfVar1 >> 7 & 63;
    }

    // 0x10061d5a0, 48 bytes, complete-object constructor, inline, placed by class name
    // CoordFine::CoordFine<double>(int, math::Vector3T<double> const&)
    void CoordFine::CoordFine<double>(int param_1, Vector3T* param_2) {
        CoordFine(this, param_1, (float)*(double*)param_2, (float)*(double*)(param_2 + 8),
                  (float)*(double*)(param_2 + 16));
    }

    // 0x10061d5d0, 192 bytes, inline, placed by class name
    // char const* CoordFine::ToString<32, true>(eastl::fixed_string<char, 32, true, eastl::allocator>&) const
    char* CoordFine::ToString<32, true>(fixed_string* param_1) {
        uint uVar1;
        uint uVar2;
        uint uVar3;
        uint uVar4;
        uint uVar5;

        uVar1 = field_0;
        uVar2 = GetMapSquareX(this);
        uVar3 = GetMapSquareZ(this);
        uVar4 = GetLocalX(this);
        uVar5 = GetLocalZ(this);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 32ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)param_1, "%d,%d,%d,%d,%d (+%d,+%d,Y=%d)", uVar1, (ulong)uVar2, (ulong)uVar3, (ulong)uVar4,
            (ulong)uVar5, (ulong)(uint)((int)field_4 % 512), (ulong)(uint)((int)field_12 % 512),
            (ulong)(uint)(int)field_8);
        return (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

} // namespace jag::game

namespace jag {
    // 0x1001a2110, 48 bytes, inline, placed by debug map only (low confidence)
    // void PacketT<Array<unsigned char, BucketAllocatorEASTL> >::gArrayBuffer_alt2<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&, unsigned long)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::gArrayBuffer_alt2<
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>>(PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this,
                                                             PacketT* param_1, ulong param_2) {
        uchar* puVar1;

        puVar1 = (uchar*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)param_1, 0);
        gArrayBuffer_alt2(this, puVar1, 0, param_2);
    }

    // 0x1001a2140, 160 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::gArrayBuffer_alt2(unsigned char*, unsigned long, unsigned long)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::gArrayBuffer_alt2(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, uchar* param_1, ulong param_2, ulong param_3) {
        long lVar1;
        ulong uVar2;
        ulong uVar3;
        byte* pbVar4;

        if (param_3 != 0) {
            lVar1 = *(long*)(this + 24);
            uVar3 = end();
            if (uVar3 < lVar1 + param_3) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "m_pos + length <= m_data.size()",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl", 975,
                    (char*)0);
            }
            if (param_2 < param_3 + param_2) {
                uVar3 = 0;
                do {
                    uVar2 = *(ulong*)(this + 24);
                    *(ulong*)(this + 24) = uVar2 + 1;
                    pbVar4 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                        (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
                    param_1[uVar3 + param_2] = *pbVar4 ^ 128;
                    uVar3 = uVar3 + 1;
                } while (param_3 != uVar3);
            }
        }
    }

    // 0x1001a21e0, 32 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::g1_alt1()
    byte PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g1_alt1(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this) {
        ulong uVar1;
        byte* pbVar2;

        uVar1 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar1 + 1;
        pbVar2 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar1);
        return *pbVar2 ^ 128;
    }

    // 0x1001a2200, 80 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::g2_alt3()
    uint PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g2_alt3(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this) {
        byte bVar1;
        long lVar2;
        byte* pbVar3;

        lVar2 = *(long*)(this + 24);
        *(long*)(this + 24) = lVar2 + 2;
        pbVar3 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, lVar2 + 1);
        bVar1 = *pbVar3;
        pbVar3 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(long*)(this + 24) - 2);
        return *pbVar3 ^ 128 | (uint)bVar1 << 8;
    }

    // 0x1001a2250, 80 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::g2_alt2()
    uint PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g2_alt2(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this) {
        byte bVar1;
        ulong uVar2;
        byte* pbVar3;

        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 2;
        pbVar3 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        bVar1 = *pbVar3;
        pbVar3 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(long*)(this + 24) - 1);
        return *pbVar3 ^ 128 | (uint)bVar1 << 8;
    }

    // 0x1001a22a0, 32 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::g1_alt2()
    char PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g1_alt2(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this) {
        ulong uVar1;
        char* pcVar2;

        uVar1 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar1 + 1;
        pcVar2 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar1);
        return -*pcVar2;
    }

    // 0x1001a2860, 32 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::g1_alt3()
    char PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g1_alt3(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this) {
        ulong uVar1;
        char* pcVar2;

        uVar1 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar1 + 1;
        pcVar2 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar1);
        return -128 - *pcVar2;
    }

    // 0x1001a2880, 32 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::g1s_alt3()
    int PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g1s_alt3(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this) {
        ulong uVar1;
        char* pcVar2;

        uVar1 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar1 + 1;
        pcVar2 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar1);
        return (int)(char)(-128 - *pcVar2);
    }

    // 0x1001a28a0, 32 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::g1s_alt1()
    uint PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g1s_alt1(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this) {
        ulong uVar1;
        char* pcVar2;

        uVar1 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar1 + 1;
        pcVar2 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar1);
        return (int)*pcVar2 ^ 4294967168;
    }

    // 0x1001a28c0, 80 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::g2_alt1()
    undefined2 PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g2_alt1(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this) {
        undefined1 uVar1;
        long lVar2;
        undefined1* puVar3;

        lVar2 = *(long*)(this + 24);
        *(long*)(this + 24) = lVar2 + 2;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, lVar2 + 1);
        uVar1 = *puVar3;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(long*)(this + 24) - 2);
        return CONCAT11(uVar1, *puVar3);
    }

    // 0x1001a2910, 32 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::g1s_alt2()
    int PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g1s_alt2(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this) {
        ulong uVar1;
        char* pcVar2;

        uVar1 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar1 + 1;
        pcVar2 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar1);
        return (int)-*pcVar2;
    }

} // namespace jag

namespace jag::math {
    // 0x1001a1dd0, 48 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Vector3T<float>::operator=(Vector3T<float> const&)
    /* Vector4T<float>::SetXYZ(Vector3T<float> const&) */

    Vector4T<float>* Vector4T<float>::SetXYZ(Vector3T* param_1) {
        *(undefined4*)this = *(undefined4*)param_1;
        *(undefined4*)(this + 4) = *(undefined4*)(param_1 + 4);
        *(undefined4*)(this + 8) = *(undefined4*)(param_1 + 8);
        return this;
    }

} // namespace jag::math
