// libs/graphics/runetek7/effects/refraction/Refraction.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class Refraction {
    public:
        // virtual methods in vtable order
        virtual ~Refraction();
        virtual bool Initialise();
        virtual bool IsSupported() const;
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        virtual void DestroyRenderingResources();
        GetRefractionRT() const;
        Refraction(RT7Core&);
        bool CreateRefractionTexture(std::array<render::Texture::Desc, 2ul> const&, render::Texture::Desc const&);
        void DestroyRefractionTexture();

        // data members, from how the methods use this: 56 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        RT7Core* field_16;   // offset 16
        uint field_24;       // offset 24
        uint field_28;       // offset 28
        undefined8 field_32; // offset 32
        shared_ptr field_40; // offset 40
    };

    // 0x100921e70, 16 bytes, complete-object destructor, inline, placed by class name
    // Refraction::~Refraction(): jumps straight to the base-object destructor

    // 0x100921e80, 32 bytes, deleting destructor, inline, placed by class name
    // Refraction::~Refraction()
    void Refraction::~Refraction() {
        ~Refraction(this);
        operator_delete(this);
    }

    // 0x100921ea0, 16 bytes, inline, placed by class name
    // Refraction::DestroyRenderingResources()
    void Refraction::DestroyRenderingResources() {
        DestroyRefractionTexture(this);
    }

    // 0x100923350, 48 bytes, base-object destructor, inline, placed by class name
    // Refraction::~Refraction()
    void Refraction::~Refraction() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = &PTR__Refraction_100f191f0;
        field_40->~shared_ptr();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

} // namespace jag::graphics
