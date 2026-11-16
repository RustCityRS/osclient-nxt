// libs/oldscape/jagex3/graphics/Pix32.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::graphics {
    class Pix32 {
    public:
        Pix32(Pix32&&);
        Pix32();
        Pix32* operator=(Pix32&&);
        ~Pix32();
        Pix32(int, int);
        Pix32(SharedArray<unsigned int>&&, int, int);
        void Create(int, int);
        CopyHFlip();
        Copy();
        CopyUntrim();
        void RgbAdjust(int, int, int);
        void Multiply(unsigned int);
        void Trim();
        void Untrim();
        void Untrim(int);
        void Rotate90Clockwise();
        void Rotate90AntiClockwise();
        void HFlip();
        void VFlip();
        void HVFlip();
        void AddOutline(int);
        void AddShadow(unsigned int);
        void ScaleImageBounds(int);

        // data members, from how the methods use this: 52 bytes
        ulong field_0; // offset 0
        long field_8;  // offset 8
        char _unknown_16[8];
        uint field_24; // offset 24
        uint field_28; // offset 28
        uint field_32; // offset 32
        uint field_36; // offset 36
        uint field_40; // offset 40
        uint field_44; // offset 44
        char _unknown_48[4];
    };

    class pix32multi {
    public:
        pix32multi(Array<Pix32, eastl::allocator>&&);
        ~pix32multi();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x10002a3d0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // Pix32::Pix32(Pix32&&): jumps straight to the base-object constructor

    // 0x10002a3e0, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // Pix32::Pix32(Pix32&&)
    void Pix32::Pix32(Pix32* param_1) {
        uint uVar1;
        uint uVar2;
        uint uVar3;

        new (this) SharedArray<Array<unsigned char, eastl::allocator>>(param_1);
        uVar1 = param_1->field_44;
        field_40 = param_1->field_40;
        field_44 = uVar1;
        uVar1 = param_1->field_28;
        uVar2 = param_1->field_32;
        uVar3 = param_1->field_36;
        field_24 = param_1->field_24;
        field_28 = uVar1;
        field_32 = uVar2;
        field_36 = uVar3;
    }

    // 0x100030570, 16 bytes, complete-object constructor, inline, placed by class name
    // Pix32::Pix32(): jumps straight to the base-object constructor

    // 0x100030580, 16 bytes, base-object constructor, inline, placed by class name
    // Pix32::Pix32()
    void Pix32::Pix32() {
        new (this) SharedArray<unsigned int>();
    }

    // 0x10006c510, 48 bytes, inline, placed by class name
    // Pix32::operator=(Pix32&&)
    /* Pix32::TEMPNAMEPLACEHOLDERVALUE(Pix32&&) */

    Pix32* Pix32::operator=(Pix32* param_1) {
        uint uVar1;
        uint uVar2;
        uint uVar3;

        SharedArray<unsigned int>::operator=((SharedArray<unsigned int>*)this, (SharedArray*)param_1);
        uVar1 = param_1->field_28;
        uVar2 = param_1->field_32;
        uVar3 = param_1->field_36;
        field_24 = param_1->field_24;
        field_28 = uVar1;
        field_32 = uVar2;
        field_36 = uVar3;
        uVar1 = param_1->field_44;
        field_40 = param_1->field_40;
        field_44 = uVar1;
        return this;
    }

    // 0x1001327d0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // Pix32::~Pix32(): jumps straight to the base-object destructor

    // 0x1001327e0, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Pix32::~Pix32()
    /* rs2lib::worldmap::BlendedGround::~BlendedGround() */

    void rs2lib::worldmap::BlendedGround::~BlendedGround() {
        ~SharedArray();
    }

} // namespace jag::oldscape::graphics
