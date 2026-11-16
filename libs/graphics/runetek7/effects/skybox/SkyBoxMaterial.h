// libs/graphics/runetek7/effects/skybox/SkyBoxMaterial.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class SkyBoxMaterial {
    public:
        // virtual methods in vtable order
        virtual ~SkyBoxMaterial();
        SkyBoxMaterial();
        void Init();
        void InitRenderPassEffects();

        // data members, from how the methods use this: 544 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[8];
        undefined* field_16; // offset 16
        undefined* field_24; // offset 24
        uchar field_32;      // offset 32
        char _unknown_33[3];
        undefined4 field_36; // offset 36
        undefined4 field_40; // offset 40
        char _unknown_44[484];
        Callstack field_528; // offset 528
    };

    // 0x10091a4a0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // SkyBoxMaterial::SkyBoxMaterial(): jumps straight to the base-object constructor

    // 0x10091a510, 16 bytes, complete-object destructor, inline, placed by class name
    // SkyBoxMaterial::~SkyBoxMaterial(): jumps straight to the base-object destructor

    // 0x100922680, 48 bytes, base-object constructor, inline, placed by class name
    // SkyBoxMaterial::SkyBoxMaterial()
    void SkyBoxMaterial::SkyBoxMaterial() {
        new (this) RenderMaterial();
        field_0 = (undefined**)(PTR_vtable_100ee8768 + 16);
    }

    // 0x1009226b0, 32 bytes, deleting destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SkyBoxMaterial::~SkyBoxMaterial()
    /* LightProbeMaterial::~LightProbeMaterial() */

    void LightProbeMaterial::~LightProbeMaterial() {
        ~LightProbeMaterial(this);
        operator_delete(this);
    }

} // namespace jag::graphics
