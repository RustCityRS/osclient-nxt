// libs/image/RGBAImage.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class RGBAImage {
    public:
        GetMargins() const;
        GetColourData();
        GetColourData() const;
        uint GetHeight() const;
        uint GetWidth() const;
        void GetColourDataPtr();
        bool IsValid() const;
        ~RGBAImage();
        Create(int, int, void const*);
        void Destroy();
        void SetMargins(int, int, int, int, int);
        RGBAImage* operator=(RGBAImage&&);
        RGBAImage();
        RGBAImage(RGBAImage const&);
        RGBAImage(RGBAImage&&);
        RGBAImage* operator=(RGBAImage const&);
        CreateFromARGB(int, int, unsigned int const*);
        void Upscale(int);
        PadImage(int, bool) const;
        void SetMargins(eastl::fixed_vector<int, 4ul, true, eastl::allocator> const&, int);
        AddOutline(unsigned int);
        AddShadow(unsigned int);
        void FlipVertical();
        void FlipHorizontal();

        // data members, from how the methods use this: 72 bytes
        uint m_width;  // offset 0
        uint m_height; // offset 4
        char _unknown_8[64];
    };

    // 0x1001cb3e0, 16 bytes, inline, placed by class name and debug map
    // RGBAImage::GetColourDataPtr()
    void RGBAImage::GetColourDataPtr() {
        (&field_64)->data();
    }

    // 0x1008c92a0, 32 bytes, inline, placed by class name
    // RGBAImage::IsValid() const
    bool RGBAImage::IsValid() {
        long lVar1;

        lVar1 = (&field_64)->data();
        return lVar1 != 0;
    }

    // 0x1009dfbb0, 16 bytes, complete-object destructor, inline, placed by class name
    // RGBAImage::~RGBAImage(): jumps straight to the base-object destructor

    // 0x1009f6bf0, 48 bytes, base-object destructor, inline, placed by class name
    // RGBAImage::~RGBAImage()
    void RGBAImage::~RGBAImage() {
        (&field_64)->~Array();
        (&field_8)->~fixed_vector();
    }

    // 0x100a0d3a0, 128 bytes, inline, placed by class name
    // RGBAImage::SetMargins(int, int, int, int, int)
    void RGBAImage::SetMargins(int param_1, int param_2, int param_3, int param_4, int param_5) {
        int* piVar1;
        undefined1* this_00;

        this_00 = &field_8;
        piVar1 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)this_00, 0);
        *piVar1 = param_1 + param_5;
        piVar1 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)this_00, 1);
        *piVar1 = param_2 + param_5;
        piVar1 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)this_00, 2);
        *piVar1 = param_3 + param_5;
        piVar1 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)this_00, 3);
        *piVar1 = param_4 + param_5;
    }

    // 0x100a0e000, 160 bytes, inline, placed by class name
    // RGBAImage::SetMargins(eastl::fixed_vector<int, 4ul, true, eastl::allocator> const&, int)
    void RGBAImage::SetMargins(fixed_vector* param_1, int param_2) {
        int iVar1;
        int* piVar2;
        undefined1* this_00;

        piVar2 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)param_1, 0);
        iVar1 = *piVar2;
        this_00 = &field_8;
        piVar2 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)this_00, 0);
        *piVar2 = iVar1 + param_2;
        piVar2 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)param_1, 1);
        iVar1 = *piVar2;
        piVar2 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)this_00, 1);
        *piVar2 = iVar1 + param_2;
        piVar2 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)param_1, 2);
        iVar1 = *piVar2;
        piVar2 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)this_00, 2);
        *piVar2 = iVar1 + param_2;
        piVar2 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)param_1, 3);
        iVar1 = *piVar2;
        piVar2 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)this_00, 3);
        *piVar2 = param_2 + iVar1;
    }

} // namespace jag
