// libs/hal/render/textures/Texture3D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.render

namespace jag::render {
    class Texture3D {
    public:
        // virtual methods in vtable order
        virtual ~Texture3D();
        virtual void Destroy();
        Texture3D(char const*);
        Create(Texture::Desc const&, ResourceDataT<unsigned char const> const*);
        void CreateSubLevelMips(unsigned int, ResourceDataT<unsigned char const> const*);
        void Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                    Format, void const*);

        // data members, from how the methods use this: 456 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined4 field_8;  // offset 8
        char _unknown_12[4];
        int field_16; // offset 16
        char _unknown_20[4];
        uint field_24;       // offset 24
        uint field_28;       // offset 28
        uint field_32;       // offset 32
        undefined4 field_36; // offset 36
        char _unknown_40[51];
        char field_91;       // offset 91
        undefined1 field_92; // offset 92
        char _unknown_93[171];
        float field_264; // offset 264
        char _unknown_268[4];
        RadialHighlightState field_272; // offset 272
        int field_296;                  // offset 296
        char _unknown_300[132];
        undefined1 field_432; // offset 432
        char _unknown_433[23];
    };

    // 0x100bd14b0: the linker folded this into Texture2DArray::Destroy(), which has identical code
    Texture3D::Destroy();

    // 0x100bd14c0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // Texture3D::~Texture3D(): jumps straight to the base-object destructor

    // 0x100bd14d0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // Texture3D::~Texture3D()
    void Texture3D::~Texture3D() {
        ~Texture3D(this);
        operator_delete(this);
    }

    // 0x100bd2140, 16 bytes, base-object destructor, placed by class name
    // Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_8::~$_8()
    /* ~$_8() */

    void Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                           unsigned int, Format, void_const*)::$_8::~__8() {
        (&field_40)->~WrapArrayValueCopy();
    }

    // 0x100bdb570, 64 bytes, base-object destructor, inline, placed by class name
    // Texture3D::~Texture3D()
    void Texture3D::~Texture3D() {
        field_0 = (undefined**)(PTR_vtable_100ee86d0 + 16);
        Destroy(this);
        ~Texture();
    }

} // namespace jag::render
