// libs/graphics/runetek7/effects/skybox/SkyBoxMaterial.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class SkyBoxMaterial {
    public:
        // virtual methods in vtable order
        virtual ~SkyBoxMaterial();
        SkyBoxMaterial();
        void Init();
        void InitRenderPassEffects();

    private:
        uint8_t _unknown_8[8];
        uint8_t* field_16;
        uint8_t* field_24;
        unsigned char field_32;
        uint8_t _unknown_33[3];
        uint32_t field_36;
        uint32_t field_40;
        uint8_t _unknown_44[484];
        Callstack field_528;
    };

    // 0x100922680
    SkyBoxMaterial::SkyBoxMaterial() : RenderMaterial() {}

} // namespace jag::graphics
