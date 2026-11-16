// libs/graphics/runetek7/effects/refraction/Refraction.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class Refraction {
    public:
        // virtual methods in vtable order
        virtual ~Refraction();
        virtual bool Initialise();
        virtual bool IsSupported() const;
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        virtual void DestroyRenderingResources();
        void GetRefractionRT() const;
        Refraction(RT7Core& rt7Core);
        bool CreateRefractionTexture(const std::array<render::Texture::Desc, 2ul>& descs,
                                     const render::Texture::Desc& desc);
        void DestroyRefractionTexture();

    private:
        GraphicsQuality field_8;
        uint8_t _unknown_12[4];
        RT7Core* field_16;
        unsigned int field_24;
        unsigned int field_28;
        uint64_t field_32;
        shared_ptr field_40;
    };

    // 0x100921ea0
    void Refraction::DestroyRenderingResources() {
        DestroyRefractionTexture();
    }

    // 0x100923350
    Refraction::~Refraction() {
        field_40->~shared_ptr();
        destruct<oldscape::highlight::NpcUID*>();
    }

} // namespace jag::graphics
