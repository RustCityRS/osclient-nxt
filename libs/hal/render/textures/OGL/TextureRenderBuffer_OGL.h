// libs/hal/render/textures/OGL/TextureRenderBuffer_OGL.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class TextureRenderBuffer {
    public:
        // virtual methods in vtable order
        virtual ~TextureRenderBuffer();
        virtual void Destroy();
        virtual unsigned long IsCreatedNative() const;
        TextureRenderBuffer(const char* str);
        void Create(const Texture::Desc& desc);
        void BindNativeBackBuffer(unsigned int arg1);
        void GetBackBufferFormat(unsigned int arg1);
        bool IsNativeBackBuffer() const;
        void SetNativeBackBufferSize(unsigned int arg1, unsigned int arg2);
        void GetNativeRenderBufferId() const;
        void BindBackColourRenderBuffer();
        void BindBackDepthRenderBuffer();

    private:
        uint32_t field_8;
        uint8_t _unknown_12[4];
        TextureType field_16;
        uint8_t _unknown_20[4];
        unsigned int field_24;
        unsigned int field_28;
        uint32_t field_32;
        uint32_t field_36;
        uint32_t field_40;
        uint32_t field_44;
        uint32_t field_48;
        uint32_t field_52;
        uint32_t field_56;
        uint32_t field_60;
        uint32_t field_64;
        uint32_t field_68;
        uint32_t field_72;
        uint32_t field_76;
        uint32_t field_80;
        uint32_t field_84;
        unsigned int field_88;
        uint8_t field_92;
        uint8_t _unknown_93[171];
        uint32_t field_264;
        uint8_t _unknown_268[4];
        RadialHighlightState field_272;
        int field_296;
        uint8_t _unknown_300[132];
        uint8_t field_432;
        uint8_t _unknown_433[16];
    };

    // 0x100be6f50
    void TextureRenderBuffer::GetNativeRenderBufferId() const {
        GetNativeTextureId();
    }

} // namespace jag::render
