// libs/game/runetek5/config/loctype/LocData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::game {
    class LocData {
    public:
        uint8_t GetShape() const;
        uint8_t GetRot() const;
        Vector2T<int>* GetTransform() const;
        LocData<PacketT<Array<unsigned char>>>(unsigned int arg1, PacketT<Array<unsigned char>>& arg2);
        void Deserialise<PacketT<Array<unsigned char>>>(unsigned int arg1, PacketT<Array<unsigned char>>& arg2,
                                                        bool arg3);
        LocData(LocShape locShape, Rotation90 rotation90, const math::RotTransScale& rotTransScale);
        LocData(const LocData& locData);
        LocData(LocData&& locData);
        LocData* operator=(const LocData& locData);
        LocData(LocShape locShape, Rotation90 rotation90);

    private:
        uint8_t m_shape;
        uint8_t m_rot;
        uint8_t _unknown_2[2];
        unsigned int field_4;
        uint8_t _unknown_8[4];
        unsigned int field_12;
        uint8_t _unknown_16[8];
        unsigned int field_24;
        uint8_t _unknown_28[4];
    };

    // 0x1000b7680: LocData::GetShape() const has the same machine code as oldscape::LocInfo::GetLevel() const

    // 0x1000b7690: LocData::GetRot() const has the same machine code as oldscape::LocInfo::GetX() const

    // 0x10014e180: LocData::GetTransform() const has the same machine code as math::Vector2T<float>::y() const

    // 0x1003e5090
    LocData::LocData<PacketT<Array<unsigned char>>>(unsigned int arg1, PacketT<Array<unsigned char>>& arg2) {
        new (&field_4) math::RotTransScale();
        Deserialise<PacketT<Array<unsigned char>>>(this, arg1, arg2, true);
    }

    // 0x1003e50d0
    void LocData::Deserialise<PacketT<Array<unsigned char>>>(unsigned int arg1, PacketT<Array<unsigned char>>& arg2,
                                                             bool arg3) {
        uint8_t local_50[48];

        m_shape = (uint8_t)(arg1 >> 2) & 31;
        m_rot = (uint8_t)arg1 & 3;
        if ((char)(uint8_t)arg1 < '\0') {
            new (local_50) math::RotTransScale(arg2);
            field_4 = *local_50;
            if (arg3) {
                field_4 = field_4 ^ 2147483648;
                field_12 = field_12 ^ 2147483648;
                field_24 = field_24 ^ 2147483648;
            }
        }
    }

    // 0x10041cb60
    LocData::LocData(LocShape locShape, Rotation90 rotation90, const math::RotTransScale& rotTransScale) {
        m_shape = (uint8_t)locShape;
        m_rot = (uint8_t)rotation90;
        new (&field_4) math::RotTransScale(rotTransScale);
    }

    // 0x100431c40
    LocData::LocData(const LocData& locData) {
        uint8_t bVar1 = locData.m_rot;
        m_shape = locData.m_shape;
        m_rot = bVar1;
        new (&field_4) math::RotTransScale(locData.field_4);
    }

    // 0x100431c40: LocData::LocData(LocData&&) has the same machine code as LocData::LocData(LocData const&)

    // 0x10064b6b0
    LocData* LocData::operator=(const LocData& locData) {
        uint8_t bVar1 = locData.m_rot;
        m_shape = locData.m_shape;
        m_rot = bVar1;
        field_4 = locData.field_4;
        return this;
    }

    // 0x100651900
    LocData::LocData(LocShape locShape, Rotation90 rotation90) {
        m_shape = (uint8_t)locShape;
        m_rot = (uint8_t)rotation90;
        new (&field_4) math::RotTransScale();
    }

} // namespace jag::game
