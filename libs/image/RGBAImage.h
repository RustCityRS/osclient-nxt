// libs/image/RGBAImage.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class RGBAImage {
    public:
        void GetMargins() const;
        uint8_t* GetColourData();
        uint8_t* GetColourData() const;
        int GetHeight() const;
        int GetWidth() const;
        void GetColourDataPtr();
        bool IsValid() const;
        ~RGBAImage();
        uint64_t Create(int arg1, int arg2, const void* arg3);
        void Destroy();
        void SetMargins(int arg1, int arg2, int arg3, int arg4, int arg5);
        RGBAImage* operator=(RGBAImage&& rgbaImage);
        RGBAImage();
        RGBAImage(const RGBAImage& rgbaImage);
        RGBAImage(RGBAImage&& rgbaImage);
        RGBAImage* operator=(const RGBAImage& rgbaImage);
        uint64_t CreateFromARGB(int arg1, int arg2, const unsigned int* arg3);
        void Upscale(int arg1);
        auto PadImage(int arg1, bool arg2) const;
        void SetMargins(const eastl::fixed_vector<int, 4ul>& arg1, int arg2);
        auto AddOutline(unsigned int arg1);
        auto AddShadow(unsigned int arg1);
        void FlipVertical();
        void FlipHorizontal();

    private:
        int m_width;
        int m_height;
        uint8_t _unknown_8[64];
    };

    // 0x1001cb3e0
    void RGBAImage::GetColourDataPtr() {
        field_64.data();
    }

    // 0x1008c92a0
    bool RGBAImage::IsValid() const {
        return field_64.data() != 0;
    }

    // 0x1009f6bf0
    RGBAImage::~RGBAImage() {
        field_64.~Array();
        field_8.~fixed_vector();
    }

    // 0x100a0d3a0
    void RGBAImage::SetMargins(int arg1, int arg2, int arg3, int arg4, int arg5) {
        uint8_t* this_00 = &field_8;
        int* piVar1 = (int*)(*this_00)[0];
        *piVar1 = arg1 + arg5;
        piVar1 = (int*)(*this_00)[1];
        *piVar1 = arg2 + arg5;
        piVar1 = (int*)(*this_00)[2];
        *piVar1 = arg3 + arg5;
        piVar1 = (int*)(*this_00)[3];
        *piVar1 = arg4 + arg5;
    }

    // 0x100a0e000
    void RGBAImage::SetMargins(const eastl::fixed_vector<int, 4ul>& arg1, int arg2) {
        int* piVar2 = &arg1[0];
        int iVar1 = *piVar2;
        uint8_t* this_00 = &field_8;
        piVar2 = (int*)(*this_00)[0];
        *piVar2 = iVar1 + arg2;
        piVar2 = &arg1[1];
        iVar1 = *piVar2;
        piVar2 = (int*)(*this_00)[1];
        *piVar2 = iVar1 + arg2;
        piVar2 = &arg1[2];
        iVar1 = *piVar2;
        piVar2 = (int*)(*this_00)[2];
        *piVar2 = iVar1 + arg2;
        piVar2 = &arg1[3];
        iVar1 = *piVar2;
        piVar2 = (int*)(*this_00)[3];
        *piVar2 = arg2 + iVar1;
    }

} // namespace jag
