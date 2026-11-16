// libs/hal/render/textures/ImageData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    // 0x100938500
    DrawableElementInfo::DrawableElementInfo(DrawableElementInfo&& drawableElementInfo)
        : field_0(drawableElementInfo.field_0), field_8(drawableElementInfo.field_8),
          field_16(drawableElementInfo.field_16) {}

    // 0x1009387e0
    DrawableElementInfo::DrawableElementInfo(DrawableSortKey drawableSortKey,
                                             std::unique_ptr<DrawableElement, DrawableElementDeleter>&& drawableElement,
                                             Drawable* drawable)
        : field_0(drawableElement), field_8(*drawable), field_16(in_RCX) {
        uint64_t in_RCX;
    }

    // 0x100938810
    DrawableElementInfo::~DrawableElementInfo() {
        field_8.~unique_ptr();
    }

    // 0x100938d80
    RT7PixelShaderSourceStream::~RT7PixelShaderSourceStream() {
        ~RT7PixelShaderSourceStream(this);
        operator delete(this);
    }

    // 0x100939e20
    void DrawableElementDeleter::operator()(DrawableElement* drawableElement) const {
        drawableElement->slot2();
    }

} // namespace jag::graphics

namespace jag::render {
    class ImageData {
    public:
        ~ImageData();
        ImageData();
        ImageData(ImageData&& imageData);

    private:
        uint8_t _unknown_0[24];
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100938260
    ImageData::~ImageData() {}

    // 0x10093ed70
    ImageData::ImageData() : ResourceDataT(nullptr, 0, 0, false), field_24(0), field_32(0) {}

    // 0x10093efb0
    ImageData::ImageData(ImageData&& imageData) : ResourceDataT(imageData) {
        uint64_t uVar1 = imageData.field_32;
        field_24 = imageData.field_24;
        field_32 = uVar1;
    }

} // namespace jag::render

namespace jag::math {
    // 0x10093a400
    Vector3T<float> Lerp<Vector3T<float>, float>(const Vector3T<float>& vector31, const Vector3T<float>& vector32,
                                                 float arg3) {
        uint64_t local_30[2];

        uint64_t local_20 = vector32 - vector31;
        local_30[0] = arg3 * &local_20;
        vector31 + *local_30;
    }

} // namespace jag::math
