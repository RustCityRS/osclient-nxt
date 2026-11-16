// libs/hal/render/textures/Texture3D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.render

namespace jag::render {
    class Texture3D {
    public:
        // virtual methods in vtable order
        virtual ~Texture3D();
        virtual void Destroy();
        Texture3D(const char* str);
        uint32_t Create(const Texture::Desc& desc, const ResourceDataT<unsigned char const>* resourceData);
        void CreateSubLevelMips(unsigned int arg1, const ResourceDataT<unsigned char const>* resourceData);
        void Update(unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4, unsigned int arg5,
                    unsigned int arg6, unsigned int arg7, Format format, const void* arg9);

    private:
        uint32_t field_8;
        uint8_t _unknown_12[4];
        TextureType field_16;
        uint8_t _unknown_20[4];
        unsigned int field_24;
        unsigned int field_28;
        unsigned int field_32;
        uint32_t field_36;
        uint8_t _unknown_40[51];
        char field_91;
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

    // 0x100bd14b0: Texture3D::Destroy() has the same machine code as Texture2DArray::Destroy()

    // 0x100bd2140
    Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                      Format, void const*)::$_8::~$_8() {
        field_40.~WrapArrayValueCopy();
    }

    // 0x100bdb570
    Texture3D::~Texture3D() {
        Destroy();
    }

} // namespace jag::render
