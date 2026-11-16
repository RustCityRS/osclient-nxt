// libs/oldscape/jagex3/graphics/Pix2D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::graphics {
    class Pix2D {
    public:
        Pix2D* operator=(Pix2D&& pix2D);
        Pix2D(int arg1, int arg2);
        ~Pix2D();
        void SetPixels(SharedArray<unsigned int>& sharedArray, int arg2, int arg3);
        Pix2D(SharedArray<unsigned int>& sharedArray, int arg2, int arg3);
        void ResetClipping();
        void SetClipping(int arg1, int arg2, int arg3, int arg4);
        void SetSubClipping(int arg1, int arg2, int arg3, int arg4);
        void SaveClipping(std::array<int, 4ul>& arg1);
        void RestoreClipping(std::array<int, 4ul>& arg1);
        void SetPixel(int arg1, int arg2, unsigned int arg3);
        void FillRectVGrad(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, unsigned int arg6);
        void DrawRect(int arg1, int arg2, int arg3, int arg4, unsigned int arg5);
        void DrawRectTrans(int arg1, int arg2, int arg3, int arg4, unsigned int arg5, unsigned int arg6);
        void FillScanLine(int arg1, int arg2, unsigned int arg3, const Array<int>& arg4, const Array<int>& arg5);
        void PixelPerfectRotateScalePlotSprite(const Pix32& pix32, int arg2, int arg3, int arg4, int arg5);

    private:
        int field_8;
        int field_12;
        int field_16;
        int field_20;
        int field_24;
        int field_28;
        uint8_t _unknown_32[8];
    };

    // 0x100078480
    Pix2D* Pix2D::operator=(Pix2D&& pix2D) {
        int iVar1 = pix2D.field_28;
        field_24 = pix2D.field_24;
        field_28 = iVar1;
        iVar1 = pix2D.field_12;
        int iVar2 = pix2D.field_16;
        int iVar3 = pix2D.field_20;
        field_8 = pix2D.field_8;
        field_12 = iVar1;
        field_16 = iVar2;
        field_20 = iVar3;
        field_32 = pix2D.field_32;
        return this;
    }

    // 0x100217740
    Pix2D::Pix2D(int arg1, int arg2) {
        field_0 = PTR_vtable_100ee8c58 + 16;
        field_8 = arg1;
        field_12 = arg2;
        field_16 = 0;
        field_20 = 0;
        field_24 = 0;
        field_28 = 0;
        new (&field_32) SharedArray((long)(arg2 * arg1));
    }

    // 0x100217960
    Pix2D::~Pix2D() {
        field_0 = PTR_vtable_100ee8c58 + 16;
        field_32.~SharedArray();
    }

} // namespace jag::oldscape::graphics
