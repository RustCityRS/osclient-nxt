// libs/hal/render/textures/Texture2D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class Texture2D {
    public:
        // virtual methods in vtable order
        virtual ~Texture2D();
        virtual void Destroy();
        virtual void Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*);
        Texture2D(char const*);
        Create(Texture::Desc const&, ResourceDataT<unsigned char const> const*, unsigned int);
        void UpdateOnCurrentThread(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                                   void const*);
        void CreateSubLevelMips(unsigned int, ResourceDataT<unsigned char const> const*, unsigned int);
        void BindExternalTexture(unsigned int, TextureType, Texture::Desc const&);
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullTexture;

        // data members, from how the methods use this: 504 bytes
        undefined** field_0;    // offset 0, vtable pointer
        RenderResource field_8; // offset 8
        char _unknown_13[3];
        int field_16; // offset 16
        char _unknown_20[4];
        uint field_24; // offset 24
        uint field_28; // offset 28
        uint field_32; // offset 32
        uint field_36; // offset 36
        char _unknown_40[51];
        char field_91;       // offset 91
        undefined1 field_92; // offset 92
        char _unknown_93[171];
        undefined4 field_264; // offset 264
        char _unknown_268[4];
        RadialHighlightState field_272; // offset 272
        $_11 field_296;                 // offset 296
        char _unknown_300[4];
        SamplerState field_304; // offset 304
        char _unknown_360[72];
        undefined1 field_432; // offset 432
        char _unknown_433[15];
        SamplerState field_448; // offset 448
    };

    // 0x100bd13f0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // Texture2D::~Texture2D()
    void Texture2D::~Texture2D() {
        ~Texture2D(this);
        operator_delete(this);
    }

    // 0x100c26ba0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // Texture2D::~Texture2D(): jumps straight to the base-object destructor

    // 0x100c26d40, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // RenderContextStateCache::~RenderContextStateCache(): jumps straight to the base-object destructor

    // 0x100c27570, 32 bytes, inline, placed by class name and debug map
    // Texture2D::Destroy()
    void Texture2D::Destroy() {
        Texture::ReleaseNativeResources((char*)this);
    }

    // 0x100c34c00, 64 bytes, base-object destructor, inline, placed by class name
    // Texture2D::~Texture2D()
    void Texture2D::~Texture2D() {
        field_0 = &PTR__Texture2D_100f27c60;
        Destroy(this);
        ~Texture();
    }

} // namespace jag::render
