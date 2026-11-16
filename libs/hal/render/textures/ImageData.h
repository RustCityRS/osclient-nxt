// libs/hal/render/textures/ImageData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    // 0x1009383b0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DrawableElementInfo::DrawableElementInfo(DrawableSortKey, std::unique_ptr<DrawableElement, DrawableElementDeleter>&&, Drawable*): jumps straight to the base-object constructor

    // 0x1009383c0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // DrawableElementInfo::~DrawableElementInfo(): jumps straight to the base-object destructor

    // 0x1009383d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DrawableElementInfo::DrawableElementInfo(DrawableElementInfo&&): jumps straight to the base-object constructor

    // 0x100938500, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DrawableElementInfo::DrawableElementInfo(DrawableElementInfo&&)
    void DrawableElementInfo::DrawableElementInfo(DrawableElementInfo* param_1) {
        field_0 = param_1->field_0;
        new (&field_8, (unique_ptr*)&param_1->field_8) std::unique_ptr<DrawableElement, DrawableElementDeleter>();
        field_16 = param_1->field_16;
    }

    // 0x1009387e0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DrawableElementInfo::DrawableElementInfo(DrawableSortKey, std::unique_ptr<DrawableElement, DrawableElementDeleter>&&, Drawable*)
    /* DrawableElementInfo::DrawableElementInfo(DrawableSortKey,
   std::unique_ptr<DrawableElement, DrawableElementDeleter>&&,
   Drawable*) */

    void DrawableElementInfo::DrawableElementInfo(DrawableSortKey param_1, unique_ptr* param_2, Drawable* param_3) {
        undefined8 in_RCX;

        field_0 = param_2;
        new (&field_8, (unique_ptr*)param_3) std::unique_ptr<DrawableElement, DrawableElementDeleter>();
        field_16 = in_RCX;
    }

    // 0x100938810, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // DrawableElementInfo::~DrawableElementInfo()
    void DrawableElementInfo::~DrawableElementInfo() {
        (&field_8)->~unique_ptr();
    }

    // 0x100938d80, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // RT7PixelShaderSourceStream::~RT7PixelShaderSourceStream()
    void RT7PixelShaderSourceStream::~RT7PixelShaderSourceStream() {
        ~RT7PixelShaderSourceStream(this);
        operator_delete(this);
    }

    // 0x100939e20, 16 bytes, inline, placed by debug map only (low confidence)
    // DrawableElementDeleter::operator()(DrawableElement*) const
    /* DrawableElementDeleter::TEMPNAMEPLACEHOLDERVALUE(DrawableElement*)
   const */

    void DrawableElementDeleter::operator()(DrawableElement* param_1) {
        (**(code**)(param_1->field_0 + 16))(param_1);
    }

} // namespace jag::graphics

namespace jag::render {
    class ImageData {
    public:
        ~ImageData();
        ImageData();
        ImageData(ImageData&&);

        // data members, from how the methods use this: 40 bytes
        char _unknown_0[24];
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100938250, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ImageData::~ImageData(): jumps straight to the base-object destructor

    // 0x100938260, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // ImageData::~ImageData()
    void ImageData::~ImageData() {
        ~ResourceDataT();
    }

    // 0x10093ec80, 16 bytes, complete-object constructor, inline, placed by class name
    // ImageData::ImageData(): jumps straight to the base-object constructor

    // 0x10093ed70, 48 bytes, base-object constructor, inline, placed by class name
    // ImageData::ImageData()
    void ImageData::ImageData() {
        new (this) ResourceDataT<unsigned char const>(0, 0, 0, false);
        field_24 = 0;
        field_32 = 0;
    }

    // 0x10093ee20, 16 bytes, complete-object constructor, inline, placed by class name
    // ImageData::ImageData(ImageData&&): jumps straight to the base-object constructor

    // 0x10093efb0, 32 bytes, base-object constructor, inline, placed by class name
    // ImageData::ImageData(ImageData&&)
    void ImageData::ImageData(ImageData* param_1) {
        undefined8 uVar1;

        new (this) ResourceDataT<unsigned char const>(param_1);
        uVar1 = param_1->field_32;
        field_24 = param_1->field_24;
        field_32 = uVar1;
    }

} // namespace jag::render

namespace jag::math {
    // 0x10093a400, 80 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float> Lerp<Vector3T<float>, float>(Vector3T<float> const&, Vector3T<float> const&, float)
    void Lerp<Vector3T<float>, float>(Vector3T* param_1, Vector3T* param_2, float param_3) {
        undefined8 local_30[2];
        undefined8 local_20;

        local_20 = operator-(param_1, (Vector3T*)this);
        local_30[0] = operator*((Vector3T*)&local_20, param_3);
        operator+((Vector3T*)this, (Vector3T*)local_30);
    }

} // namespace jag::math
