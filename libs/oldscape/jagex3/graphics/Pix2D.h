// libs/oldscape/jagex3/graphics/Pix2D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::graphics {
    class Pix2D {
    public:
        Pix2D* operator=(Pix2D&&);
        Pix2D(int, int);
        ~Pix2D();
        void SetPixels(SharedArray<unsigned int>&, int, int);
        Pix2D(SharedArray<unsigned int>&, int, int);
        void ResetClipping();
        void SetClipping(int, int, int, int);
        void SetSubClipping(int, int, int, int);
        void SaveClipping(std::array<int, 4ul>&);
        void RestoreClipping(std::array<int, 4ul>&);
        void SetPixel(int, int, unsigned int);
        void FillRectVGrad(int, int, int, int, unsigned int, unsigned int);
        void DrawRect(int, int, int, int, unsigned int);
        void DrawRectTrans(int, int, int, int, unsigned int, unsigned int);
        void FillScanLine(int, int, unsigned int, Array<int, eastl::allocator> const&,
                          Array<int, eastl::allocator> const&);
        void PixelPerfectRotateScalePlotSprite(Pix32 const&, int, int, int, int);

        // data members, from how the methods use this: 40 bytes
        undefined* field_0; // offset 0, vtable pointer
        int field_8;        // offset 8
        int field_12;       // offset 12
        int field_16;       // offset 16
        int field_20;       // offset 20
        int m_subClipping;  // offset 24
        uint field_28;      // offset 28
        char _unknown_32[8];
    };

    // 0x100078480, 48 bytes, inline, placed by class name and debug map
    // Pix2D::operator=(Pix2D&&)
    /* Pix2D::TEMPNAMEPLACEHOLDERVALUE(Pix2D&&) */

    Pix2D* Pix2D::operator=(Pix2D* param_1) {
        uint uVar1;
        int iVar2;
        int iVar3;
        int iVar4;

        uVar1 = param_1->field_28;
        m_subClipping = param_1->m_subClipping;
        field_28 = uVar1;
        iVar2 = param_1->field_12;
        iVar3 = param_1->field_16;
        iVar4 = param_1->field_20;
        field_8 = param_1->field_8;
        field_12 = iVar2;
        field_16 = iVar3;
        field_20 = iVar4;
        SharedArray<unsigned int>::operator=((SharedArray<unsigned int>*)&field_32, (SharedArray*)&param_1->field_32);
        return this;
    }

    // 0x100217740, 48 bytes, base-object constructor, inline, placed by class name
    // Pix2D::Pix2D(int, int)
    void Pix2D::Pix2D(int param_1, int param_2) {
        field_0 = PTR_vtable_100ee8c58 + 16;
        field_8 = param_1;
        field_12 = param_2;
        field_16 = 0;
        field_20 = 0;
        m_subClipping = 0;
        field_28 = 0;
        new (&field_32, (long)(param_2 * param_1)) SharedArray<unsigned int>();
    }

    // 0x100217960, 32 bytes, base-object destructor, inline, placed by class name
    // Pix2D::~Pix2D()
    void Pix2D::~Pix2D() {
        field_0 = PTR_vtable_100ee8c58 + 16;
        (&field_32)->~SharedArray();
    }

} // namespace jag::oldscape::graphics
