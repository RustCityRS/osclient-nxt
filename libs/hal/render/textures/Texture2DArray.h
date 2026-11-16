// libs/hal/render/textures/Texture2DArray.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class Texture2DArray {
    public:
        // virtual methods in vtable order
        virtual ~Texture2DArray();
        virtual void Destroy();
        Texture2DArray(char const*);
        Create(Texture::Desc const&, ResourceDataT<unsigned char const> const*);
        void Update(unsigned int, int, int, int, int, int, int, Format, void const*);
        void CreateSubLevelMips(unsigned int, ResourceDataT<unsigned char const> const*);

        // data members, from how the methods use this: 504 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined4 field_8;  // offset 8
        char _unknown_12[4];
        int field_16; // offset 16
        char _unknown_20[4];
        uint field_24;       // offset 24
        uint field_28;       // offset 28
        uint field_32;       // offset 32
        undefined4 field_36; // offset 36
        char _unknown_40[8];
        uint field_48; // offset 48
        char _unknown_52[36];
        uint field_88;       // offset 88
        undefined1 field_92; // offset 92
        char _unknown_93[171];
        undefined4 field_264; // offset 264
        char _unknown_268[4];
        RadialHighlightState field_272; // offset 272
        undefined4 field_296;           // offset 296
        char _unknown_300[4];
        SamplerState field_304; // offset 304
        char _unknown_360[72];
        undefined1 field_432; // offset 432
        char _unknown_433[15];
        SamplerState field_448; // offset 448
    };

    // 0x100bd1480, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // Texture2DArray::~Texture2DArray(): jumps straight to the base-object destructor

    // 0x100bd1490, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // Texture2DArray::~Texture2DArray()
    void Texture2DArray::~Texture2DArray() {
        ~Texture2DArray(this);
        operator_delete(this);
    }

    // 0x100bd14b0, 16 bytes, inline, placed by class name and debug map
    // Texture2DArray::Destroy()
    /* Texture3D::Destroy() */

    void Texture3D::Destroy() {
        Texture::ReleaseNativeResources((char*)this);
    }

    // 0x100bdb530, 64 bytes, base-object destructor, inline, placed by class name
    // Texture2DArray::~Texture2DArray()
    void Texture2DArray::~Texture2DArray() {
        field_0 = (undefined**)(PTR_vtable_100ee8668 + 16);
        Destroy();
        ~Texture();
    }

} // namespace jag::render
