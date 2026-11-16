// libs/oldscape/jagex3/dash3d/Texture.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::dash3d {
    class Texture {
    public:
        // virtual methods in vtable order
        virtual ~Texture();
        Texture(PacketJ<Array<unsigned char, eastl::allocator>>&, ErrorCapture&);
        ulong Construct(double, int, jagex3::Js5&, ErrorCapture&);
        void Deconstruct();
        void RunAnim(int);
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ m_tempData;

        // data members, from how the methods use this: 185 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        undefined8 field_24;   // offset 24
        mach_header* field_32; // offset 32
        undefined8 field_40;   // offset 40
        uint field_48;         // offset 48
        bool field_52;         // offset 52
        char _unknown_53[99];
        uint field_152;       // offset 152
        uint field_156;       // offset 156
        uint field_160;       // offset 160
        uint field_164;       // offset 164
        shared_ptr field_168; // offset 168
        undefined1 field_184; // offset 184
    };

    // 0x100303300, 96 bytes, inline, placed by class name
    // Texture::Deconstruct()
    void Texture::Deconstruct() {
        shared_ptr local_28;

        new (&local_28) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<Array<unsigned int, eastl::allocator>>::operator=(
            (shared_ptr<Array<unsigned int, eastl::allocator>>*)field_168, &local_28);
        local_28.~shared_ptr();
    }

    // 0x100324e00, 16 bytes, complete-object destructor, inline, placed by class name
    // Texture::~Texture(): jumps straight to the base-object destructor

    // 0x100324e10, 32 bytes, deleting destructor, inline, placed by class name
    // Texture::~Texture()
    void Texture::~Texture() {
        ~Texture(this);
        operator_delete(this);
    }

    // 0x10033dd80, 89 bytes, base-object destructor, inline, placed by class name
    // Texture::~Texture()
    void Texture::~Texture() {
        field_0 = PTR_vtable_100ee89e0 + 16;
        field_168->~shared_ptr();
        (&field_128)->~Array();
        (&field_104)->~Array();
        (&field_80)->~Array();
        (&field_56)->~Array();
        ~Linkable();
    }

} // namespace jag::oldscape::dash3d

namespace jag::render {
    class Texture {
    public:
        class Desc;
        GetDesc() const;
        int GetType() const;
        uint GetFaceMipLevels() const;
        GetGLWriteMutex() const;
        GetSamplerState() const;
        void ValidateUpdateParams(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                  unsigned int);
        void GetImageDataSize() const;
        Texture(char const*);
        void GenerateBindTextures(TextureType);
        void SetFaceMipLevels(Desc const&);
        void FinaliseCreate(char const*, Desc const&);
        GetNativeTextureId() const;
        bool UseGLWriteMutex();
        void GetName() const;
        ~Texture();
        bool IsCreated() const;
        ResourceDataT<unsigned char const>* Lock(unsigned int, LockType, unsigned int);
        void Unlock(unsigned int);
        void SetSamplerState(SamplerState const&, bool);
        void SetSamplerStateInternal(SamplerState const&, bool);
        void SetMaxMipLevel(unsigned int);
        void SetTemporarySamplerState(SamplerState const*);
        void ReleaseNativeResources(char const*);
        void GenerateMipMaps();
        ulong IsCreatedNative() const;
        void SetBaseMipLevel(unsigned int);
        void Invalidate() const;

        // data members, from how the methods use this: 456 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined4 field_8;  // offset 8
        char _unknown_12[4];
        int m_type; // offset 16
        char _unknown_20[4];
        uint field_24;       // offset 24
        uint field_28;       // offset 28
        uint field_32;       // offset 32
        undefined4 field_36; // offset 36
        char _unknown_40[12];
        uint field_52;       // offset 52
        undefined1 field_56; // offset 56
        char _unknown_57[27];
        int field_84;         // offset 84
        uint m_faceMipLevels; // offset 88
        undefined1 field_92;  // offset 92
        char _unknown_93[171];
        float field_264; // offset 264
        char _unknown_268[4];
        RadialHighlightState field_272; // offset 272
        undefined4 m_nativeTextureId;   // offset 296
        char _unknown_300[132];
        undefined1 field_432; // offset 432
        char _unknown_433[23];
    };

    class Texture::Desc {
    public:
        operator==(Desc const&) const;
        Desc();
        void SetToDefault();

        // data members, from how the methods use this: 68 bytes
        int field_0;         // offset 0
        int field_4;         // offset 4
        int field_8;         // offset 8
        int field_12;        // offset 12
        undefined4 field_16; // offset 16
        int field_20;        // offset 20
        int field_24;        // offset 24
        int field_28;        // offset 28
        undefined1 field_32; // offset 32
        char _unknown_33[3];
        undefined4 field_36; // offset 36
        undefined1 field_40; // offset 40
        char _unknown_41[7];
        undefined8 field_48; // offset 48
        char field_56;       // offset 56
        char _unknown_57[3];
        undefined4 field_60; // offset 60
        char _unknown_64[4];
    };

} // namespace jag::render

namespace jag {
    class TextureType {
    public:
        TextureType(unsigned int, char const*);
        void GetByID(unsigned int);
        static TextureType const* /* 8 bytes */ TEXTURE; // = &enumArray
        static TextureType const* /* 8 bytes */ CUBEMAP; // = &enumArray[1] /* TextureType(1, "cubemap") */
        static TextureType const* /* 8 bytes */ SPRITE;  // = &enumArray[2] /* TextureType(2, "sprite") */
        static TextureType /* 48 bytes */ enumArray[3];  // initialised in its definition
    };

} // namespace jag
