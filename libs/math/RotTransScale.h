// libs/math/RotTransScale.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::math {
    class RotTransScale {
    public:
        RotTransScale(PacketT<Array<unsigned char, eastl::allocator>>&);
        RotTransScale* operator=(RotTransScale&&);
        RotTransScale* operator=(RotTransScale const&);
        void
        Deserialise<PacketT<Array<unsigned char, eastl::allocator>>>(PacketT<Array<unsigned char, eastl::allocator>>&);
        RotTransScale(RotTransScale const&);
        RotTransScale(RotTransScale&&);
        RotTransScale();

        // data members, from how the methods use this: 52 bytes
        undefined4 field_0;  // offset 0
        undefined4 field_4;  // offset 4
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        undefined8 field_16; // offset 16
        undefined4 field_24; // offset 24
        undefined4 field_28; // offset 28
        undefined8 field_32; // offset 32
        undefined4 field_40; // offset 40
        undefined4 field_44; // offset 44
        char _unknown_48[4];
    };

    // 0x1003e5160, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // RotTransScale::RotTransScale(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x1003e5170, 80 bytes, inline, placed by class name and debug map
    // RotTransScale::operator=(RotTransScale&&)
    /* RotTransScale::TEMPNAMEPLACEHOLDERVALUE(RotTransScale const&) */

    RotTransScale* RotTransScale::operator=(RotTransScale* param_1) {
        Rect<float>::operator=((Rect<float>*)this, (Rect*)param_1);
        (&field_16, (Vector3T*)&param_1->field_16)->SetXYZ();
        field_28 = param_1->field_28;
        (&field_32, (Vector3T*)&param_1->field_32)->SetXYZ();
        field_44 = param_1->field_44;
        return this;
    }

    // 0x1003e5170: the linker folded this into RotTransScale::operator=(RotTransScale&&), which has identical code
    RotTransScale::operator=(RotTransScale const&);

    // 0x1003e51c0, 80 bytes, base-object constructor, inline, placed by class name and debug map
    // RotTransScale::RotTransScale(PacketT<Array<unsigned char, eastl::allocator> >&)
    void RotTransScale::RotTransScale(PacketT* param_1) {
        new (this) QuaternionT<float>();
        new (&field_16) Vector3T<int>();
        field_28 = 0;
        new (&field_32) Vector3T<int>();
        field_44 = 0;
        Deserialise<PacketT<Array<unsigned char, eastl::allocator>>>(this, param_1);
    }

    // 0x100431c60, 16 bytes, complete-object constructor, inline, placed by class name
    // RotTransScale::RotTransScale(RotTransScale const&): jumps straight to the base-object constructor

    // 0x100431c60: the linker folded this into RotTransScale::RotTransScale(RotTransScale const&), which has identical code
    RotTransScale::RotTransScale(RotTransScale&&);

    // 0x100431c70, 48 bytes, base-object constructor, inline, placed by class name
    // RotTransScale::RotTransScale(RotTransScale const&)
    /* RotTransScale::RotTransScale(RotTransScale&&) */

    void RotTransScale::RotTransScale(RotTransScale* param_1) {
        undefined8 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        undefined4 uVar5;

        new (this) QuaternionT<float>(param_1);
        uVar1 = param_1->field_16;
        uVar4 = param_1->field_24;
        uVar5 = param_1->field_28;
        uVar2 = param_1->field_40;
        uVar3 = param_1->field_44;
        field_32 = param_1->field_32;
        field_40 = uVar2;
        field_44 = uVar3;
        field_16 = uVar1;
        field_24 = uVar4;
        field_28 = uVar5;
    }

    // 0x100431c70: the linker folded this into RotTransScale::RotTransScale(RotTransScale const&), which has identical code
    RotTransScale::RotTransScale(RotTransScale&&);

    // 0x100449d40, 16 bytes, complete-object constructor, inline, placed by class name
    // RotTransScale::RotTransScale(): jumps straight to the base-object constructor

    // 0x10044d6c0, 80 bytes, base-object constructor, inline, placed by class name
    // RotTransScale::RotTransScale()
    void RotTransScale::RotTransScale() {
        new (this) QuaternionT<float>();
        new (&field_16) Vector3T<int>();
        field_28 = 0;
        new (&field_32, 1.0, 1.0, 1.0) ColourHSL();
        field_44 = 0;
    }

} // namespace jag::math
