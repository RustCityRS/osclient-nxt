// libs/oldscape/jagex3/dash3d/Texture.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::dash3d {
    class Texture {
    public:
        // virtual methods in vtable order
        virtual ~Texture();
        Texture(PacketJ<Array<unsigned char>>& packetJ, ErrorCapture& errorCapture);
        unsigned long Construct(double arg1, int arg2, jagex3::Js5& js5, ErrorCapture& errorCapture);
        void Deconstruct();
        void RunAnim(int arg1);
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>
            m_tempData; // = shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>()

    private:
        uint8_t _unknown_8[16];
        uint64_t field_24;
        mach_header* field_32;
        uint64_t field_40;
        unsigned int field_48;
        bool field_52;
        uint8_t _unknown_53[99];
        unsigned int field_152;
        unsigned int field_156;
        unsigned int field_160;
        unsigned int field_164;
        uint8_t _unknown_168[16];
        uint8_t field_184;
    };

    // 0x100303300
    void Texture::Deconstruct() {

        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        field_168 = local_28;
    }

    // 0x10033dd80
    Texture::~Texture() {
        field_168.~shared_ptr();
        field_128.~Array();
        field_104.~Array();
        field_80.~Array();
        field_56.~Array();
    }

} // namespace jag::oldscape::dash3d

namespace jag::render {
    class Texture {
    public:
        class Desc;
        void GetDesc() const;
        TextureType GetType() const;
        unsigned int GetFaceMipLevels() const;
        uint8_t* GetGLWriteMutex() const;
        uint8_t* GetSamplerState() const;
        void ValidateUpdateParams(unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4,
                                  unsigned int arg5, unsigned int arg6, unsigned int arg7);
        void GetImageDataSize() const;
        Texture(const char* str);
        void GenerateBindTextures(TextureType textureType);
        void SetFaceMipLevels(const Desc& desc);
        void FinaliseCreate(const char* str, const Desc& desc);
        Texture* GetNativeTextureId() const;
        bool UseGLWriteMutex();
        void GetName() const;
        ~Texture();
        bool IsCreated() const;
        Texture* Lock(unsigned int arg1, LockType lockType, unsigned int arg3);
        void Unlock(unsigned int arg1);
        void SetSamplerState(const SamplerState& samplerState, bool arg2);
        void SetSamplerStateInternal(const SamplerState& samplerState, bool arg2);
        void SetMaxMipLevel(unsigned int arg1);
        void SetTemporarySamplerState(const SamplerState* samplerState);
        void ReleaseNativeResources(const char* str);
        void GenerateMipMaps();
        unsigned long IsCreatedNative() const;
        void SetBaseMipLevel(unsigned int arg1);
        void Invalidate() const;

    private:
        uint32_t field_8;
        uint8_t _unknown_12[4];
        TextureType m_type;
        uint8_t _unknown_20[4];
        unsigned int field_24;
        unsigned int field_28;
        unsigned int field_32;
        uint32_t field_36;
        uint8_t _unknown_40[12];
        unsigned int field_52;
        uint8_t field_56;
        uint8_t _unknown_57[27];
        int field_84;
        unsigned int m_faceMipLevels;
        uint8_t field_92;
        uint8_t _unknown_93[171];
        float field_264;
        uint8_t _unknown_268[4];
        RadialHighlightState field_272;
        uint32_t m_nativeTextureId;
        uint8_t _unknown_300[132];
        uint8_t field_432;
        uint8_t _unknown_433[23];
    };

    class Texture::Desc {
    public:
        uint64_t operator==(const Desc& desc) const;
        Desc();
        void SetToDefault();

    private:
        int field_0;
        int field_4;
        int field_8;
        int field_12;
        uint32_t field_16;
        int field_20;
        int field_24;
        int field_28;
        uint8_t field_32;
        uint8_t _unknown_33[3];
        uint32_t field_36;
        uint8_t field_40;
        uint8_t _unknown_41[7];
        uint64_t field_48;
        char field_56;
        uint8_t _unknown_57[3];
        uint32_t field_60;
        uint8_t _unknown_64[4];
    };

} // namespace jag::render

namespace jag {
    class TextureType {
    public:
        TextureType(unsigned int arg1, const char* str);
        void GetByID(unsigned int arg1);
        static TextureType const* TEXTURE; // = &enumArray
        static TextureType const* CUBEMAP; // = &enumArray[1] /* TextureType(1, "cubemap") */
        static TextureType const* SPRITE;  // = &enumArray[2] /* TextureType(2, "sprite") */
        static TextureType enumArray[3];   // initialised in its definition
    };

} // namespace jag
