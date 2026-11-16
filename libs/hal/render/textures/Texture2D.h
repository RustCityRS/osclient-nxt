// libs/hal/render/textures/Texture2D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class Texture2D {
    public:
        // virtual methods in vtable order
        virtual ~Texture2D();
        virtual void Destroy();
        virtual void Update(unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4,
                            unsigned int arg5, Format format, const void* arg7);
        Texture2D(const char* str);
        uint32_t Create(const Texture::Desc& desc, const ResourceDataT<unsigned char const>* resourceData,
                        unsigned int arg3);
        void UpdateOnCurrentThread(unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4,
                                   unsigned int arg5, Format format, const void* arg7);
        void CreateSubLevelMips(unsigned int arg1, const ResourceDataT<unsigned char const>* resourceData,
                                unsigned int arg3);
        void BindExternalTexture(unsigned int arg1, TextureType textureType, const Texture::Desc& desc);
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullTexture; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()

    private:
        RenderResource field_8;
        uint8_t _unknown_13[3];
        int field_16;
        uint8_t _unknown_20[4];
        unsigned int field_24;
        unsigned int field_28;
        unsigned int field_32;
        unsigned int field_36;
        uint8_t _unknown_40[48];
        unsigned int field_88;
        uint8_t field_92;
        uint8_t _unknown_93[171];
        uint32_t field_264;
        uint8_t _unknown_268[4];
        RadialHighlightState field_272;
        int field_296;
        uint8_t _unknown_300[132];
        uint8_t field_432;
        uint8_t _unknown_433[23];
    };

    // 0x100c27570
    void Texture2D::Destroy() {
        Texture::ReleaseNativeResources(this);
    }

    // 0x100c34c00
    Texture2D::~Texture2D() {
        Destroy();
    }

} // namespace jag::render
