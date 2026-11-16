// libs/hal/render/textures/Texture2DArray.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class Texture2DArray {
    public:
        // virtual methods in vtable order
        virtual ~Texture2DArray();
        virtual void Destroy();
        Texture2DArray(const char* str);
        uint32_t Create(const Texture::Desc& desc, const ResourceDataT<unsigned char const>* resourceData);
        void Update(unsigned int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, Format format,
                    const void* arg9);
        void CreateSubLevelMips(unsigned int arg1, const ResourceDataT<unsigned char const>* resourceData);

    private:
        uint32_t field_8;
        uint8_t _unknown_12[4];
        int field_16;
        uint8_t _unknown_20[4];
        unsigned int field_24;
        unsigned int field_28;
        unsigned int field_32;
        uint32_t field_36;
        uint8_t _unknown_40[8];
        unsigned int field_48;
        uint8_t _unknown_52[36];
        unsigned int field_88;
        uint8_t field_92;
        uint8_t _unknown_93[171];
        uint32_t field_264;
        uint8_t _unknown_268[4];
        RadialHighlightState field_272;
        uint32_t field_296;
        uint8_t _unknown_300[132];
        uint8_t field_432;
        uint8_t _unknown_433[23];
    };

    // 0x100bd14b0
    void Texture2DArray::Destroy() {
        Texture::ReleaseNativeResources(this);
    }

    // 0x100bdb530
    Texture2DArray::~Texture2DArray() {
        Destroy();
    }

} // namespace jag::render
