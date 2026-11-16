// libs/game/runetek5/config/loctype/LocData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::game {
    class LocData {
    public:
        byte GetShape() const;
        byte GetRot() const;
        GetTransform() const;
        LocData<PacketT<Array<unsigned char, eastl::allocator>>>(unsigned int,
                                                                 PacketT<Array<unsigned char, eastl::allocator>>&);
        void Deserialise<PacketT<Array<unsigned char, eastl::allocator>>>(
            unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&, bool);
        LocData(LocShape, Rotation90, math::RotTransScale const&);
        LocData(LocData const&);
        LocData(LocData&&);
        LocData* operator=(LocData const&);
        LocData(LocShape, Rotation90);

        // data members, from how the methods use this: 32 bytes
        byte m_shape; // offset 0
        byte m_rot;   // offset 1
        char _unknown_2[2];
        uint field_4; // offset 4
        char _unknown_8[4];
        uint field_12; // offset 12
        char _unknown_16[8];
        uint field_24; // offset 24
        char _unknown_28[4];
    };

    // 0x1000b7680: the linker folded this into oldscape::LocInfo::GetLevel() const, which has identical code
    byte LocData::GetShape() const;

    // 0x1000b7690: the linker folded this into oldscape::LocInfo::GetX() const, which has identical code
    byte LocData::GetRot() const;

    // 0x10014e180: the linker folded this into math::Vector2T<float>::y() const, which has identical code
    LocData::GetTransform() const;

    // 0x1003dcea0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // LocData::LocData<PacketT<Array<unsigned char, eastl::allocator> > >(unsigned int, PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x1003e5090, 64 bytes, base-object constructor, inline, placed by class name
    // LocData::LocData<PacketT<Array<unsigned char, eastl::allocator> > >(unsigned int, PacketT<Array<unsigned char, eastl::allocator> >&)
    void LocData::LocData<PacketT<Array<unsigned char, eastl::allocator>>>(uint param_1, PacketT* param_2) {
        new (&field_4) math::RotTransScale();
        Deserialise<PacketT<Array<unsigned char, eastl::allocator>>>(this, param_1, param_2, true);
    }

    // 0x1003e50d0, 144 bytes, inline, placed by class name
    // void LocData::Deserialise<PacketT<Array<unsigned char, eastl::allocator> > >(unsigned int, PacketT<Array<unsigned char, eastl::allocator> >&, bool)
    void LocData::Deserialise<PacketT<Array<unsigned char, eastl::allocator>>>(uint param_1, PacketT* param_2,
                                                                               bool param_3) {
        undefined1 local_50[48];

        m_shape = (byte)(param_1 >> 2) & 31;
        m_rot = (byte)param_1 & 3;
        if ((char)(byte)param_1 < '\0') {
            new (local_50) math::RotTransScale(param_2);
            math::RotTransScale::operator=((RotTransScale*)&field_4, (RotTransScale*)local_50);
            if (param_3) {
                field_4 = field_4 ^ 2147483648;
                field_12 = field_12 ^ 2147483648;
                field_24 = field_24 ^ 2147483648;
            }
        }
    }

    // 0x10040f410, 16 bytes, complete-object constructor, inline, placed by class name
    // LocData::LocData(LocShape, Rotation90, math::RotTransScale const&): jumps straight to the base-object constructor

    // 0x10041cb60, 32 bytes, base-object constructor, inline, placed by class name
    // LocData::LocData(LocShape, Rotation90, math::RotTransScale const&)
    void LocData::LocData(byte param_2, byte param_3, RotTransScale* param_4) {
        m_shape = param_2;
        m_rot = param_3;
        new (&field_4, param_4) math::RotTransScale();
    }

    // 0x10042ade0, 16 bytes, complete-object constructor, inline, placed by class name
    // LocData::LocData(LocData const&): jumps straight to the base-object constructor

    // 0x10042ade0: the linker folded this into LocData::LocData(LocData const&), which has identical code
    LocData::LocData(LocData&&);

    // 0x100431c40, 32 bytes, base-object constructor, inline, placed by class name
    // LocData::LocData(LocData const&)
    /* LocData::LocData(LocData&&) */

    void LocData::LocData(LocData* param_1) {
        byte bVar1;

        bVar1 = param_1->m_rot;
        m_shape = param_1->m_shape;
        m_rot = bVar1;
        new (&field_4, (RotTransScale*)&param_1->field_4) math::RotTransScale();
    }

    // 0x100431c40: the linker folded this into LocData::LocData(LocData const&), which has identical code
    LocData::LocData(LocData&&);

    // 0x10064b6b0, 48 bytes, inline, placed by class name
    // LocData::operator=(LocData const&)
    /* LocData::TEMPNAMEPLACEHOLDERVALUE(LocData const&) */

    LocData* LocData::operator=(LocData* param_1) {
        byte bVar1;

        bVar1 = param_1->m_rot;
        m_shape = param_1->m_shape;
        m_rot = bVar1;
        math::RotTransScale::operator=((RotTransScale*)&field_4, (RotTransScale*)&param_1->field_4);
        return this;
    }

    // 0x1006518f0, 16 bytes, complete-object constructor, inline, placed by class name
    // LocData::LocData(LocShape, Rotation90): jumps straight to the base-object constructor

    // 0x100651900, 32 bytes, base-object constructor, inline, placed by class name
    // LocData::LocData(LocShape, Rotation90)
    void LocData::LocData(byte param_2, byte param_3) {
        m_shape = param_2;
        m_rot = param_3;
        new (&field_4) math::RotTransScale();
    }

} // namespace jag::game
