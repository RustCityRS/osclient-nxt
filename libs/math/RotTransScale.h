// libs/math/RotTransScale.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::math {
    class RotTransScale {
    public:
        RotTransScale(PacketT<Array<unsigned char>>& arg1);
        RotTransScale* operator=(RotTransScale&& rotTransScale);
        RotTransScale* operator=(const RotTransScale& rotTransScale);
        void Deserialise<PacketT<Array<unsigned char>>>(PacketT<Array<unsigned char>>& arg1);
        RotTransScale(const RotTransScale& rotTransScale);
        RotTransScale(RotTransScale&& rotTransScale);
        RotTransScale();

    private:
        uint32_t field_0;
        uint32_t field_4;
        uint32_t field_8;
        uint32_t field_12;
        uint64_t field_16;
        uint32_t field_24;
        uint32_t field_28;
        uint64_t field_32;
        uint32_t field_40;
        uint32_t field_44;
        uint8_t _unknown_48[4];
    };

    // 0x1003e5170
    RotTransScale* RotTransScale::operator=(RotTransScale&& rotTransScale) {
        *this = rotTransScale;
        field_16.SetXYZ(rotTransScale.field_16);
        field_28 = rotTransScale.field_28;
        field_32.SetXYZ(rotTransScale.field_32);
        field_44 = rotTransScale.field_44;
        return this;
    }

    // 0x1003e5170: RotTransScale::operator=(RotTransScale const&) has the same machine code as RotTransScale::operator=(RotTransScale&&)

    // 0x1003e51c0
    RotTransScale::RotTransScale(PacketT<Array<unsigned char>>& arg1) : QuaternionT<float>(), field_28(0), field_44(0) {
        Deserialise<PacketT<Array<unsigned char>>>(this, arg1);
    }

    // 0x100431c70
    RotTransScale::RotTransScale(const RotTransScale& rotTransScale) : QuaternionT<float>(rotTransScale) {
        uint64_t uVar1 = rotTransScale.field_16;
        uint32_t uVar4 = rotTransScale.field_24;
        uint32_t uVar5 = rotTransScale.field_28;
        uint32_t uVar2 = rotTransScale.field_40;
        uint32_t uVar3 = rotTransScale.field_44;
        field_32 = rotTransScale.field_32;
        field_40 = uVar2;
        field_44 = uVar3;
        field_16 = uVar1;
        field_24 = uVar4;
        field_28 = uVar5;
    }

    // 0x100431c70: RotTransScale::RotTransScale(RotTransScale&&) has the same machine code as RotTransScale::RotTransScale(RotTransScale const&)

    // 0x10044d6c0
    RotTransScale::RotTransScale() : QuaternionT<float>(), field_28(0), field_32(1.0, 1.0, 1.0), field_44(0) {}

} // namespace jag::math
