// libs/oldscape/jagex3/graphics/Pix32.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::graphics {
    class Pix32 {
    public:
        Pix32(Pix32&& pix32);
        Pix32();
        Pix32* operator=(Pix32&& pix32);
        ~Pix32();
        Pix32(int arg1, int arg2);
        Pix32(SharedArray<unsigned int>&& sharedArray, int arg2, int arg3);
        void Create(int arg1, int arg2);
        auto CopyHFlip();
        auto Copy();
        auto CopyUntrim();
        void RgbAdjust(int arg1, int arg2, int arg3);
        void Multiply(unsigned int arg1);
        void Trim();
        void Untrim();
        void Untrim(int arg1);
        void Rotate90Clockwise();
        void Rotate90AntiClockwise();
        void HFlip();
        void VFlip();
        void HVFlip();
        void AddOutline(int arg1);
        void AddShadow(unsigned int arg1);
        void ScaleImageBounds(int arg1);

    private:
        unsigned long field_0;
        uint8_t _unknown_8[16];
        unsigned int field_24;
        unsigned int field_28;
        unsigned int field_32;
        unsigned int field_36;
        unsigned int field_40;
        unsigned int field_44;
        uint8_t _unknown_48[4];
    };

    class pix32multi {
    public:
        pix32multi(Array<Pix32>&& pix32s);
        ~pix32multi();

        uint8_t _unknown_0[1];
    };

    // 0x10002a3e0
    Pix32::Pix32(Pix32&& pix32) : SharedArray(pix32) {
        unsigned int uVar1 = pix32.field_44;
        field_40 = pix32.field_40;
        field_44 = uVar1;
        uVar1 = pix32.field_28;
        unsigned int uVar2 = pix32.field_32;
        unsigned int uVar3 = pix32.field_36;
        field_24 = pix32.field_24;
        field_28 = uVar1;
        field_32 = uVar2;
        field_36 = uVar3;
    }

    // 0x100030580
    Pix32::Pix32() : SharedArray() {}

    // 0x10006c510
    Pix32* Pix32::operator=(Pix32&& pix32) {
        *this = pix32;
        unsigned int uVar1 = pix32.field_28;
        unsigned int uVar2 = pix32.field_32;
        unsigned int uVar3 = pix32.field_36;
        field_24 = pix32.field_24;
        field_28 = uVar1;
        field_32 = uVar2;
        field_36 = uVar3;
        uVar1 = pix32.field_44;
        field_40 = pix32.field_40;
        field_44 = uVar1;
        return this;
    }

    // 0x1001327e0
    Pix32::~Pix32() {}

} // namespace jag::oldscape::graphics
