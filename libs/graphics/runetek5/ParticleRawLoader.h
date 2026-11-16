// libs/graphics/runetek5/ParticleRawLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ParticleRawLoader {
    public:
        GetEmitterTypes() const;
        GetEffectorTypes() const;
        GetMaxEffectorID() const;
        GetMaxEmitterID() const;
        ParticleRawLoader();
        ~ParticleRawLoader();
        void Initialise(Js5ResourceProvider*, Js5ArchiveSettings const*, unsigned int, unsigned int);
        void Destruct();
        bool MainLogic();

        // data members, from how the methods use this: 72 bytes
        Js5ResourceProvider* field_0; // offset 0
        Js5ArchiveSettings* field_8;  // offset 8
        uint field_16;                // offset 16
        uint field_20;                // offset 20
        char _unknown_24[4];
        int field_28; // offset 28
        char _unknown_32[24];
        int field_56; // offset 56
        int field_60; // offset 60
        char _unknown_64[8];
    };

    // 0x1007ce3a0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ParticleRawLoader::ParticleRawLoader(): jumps straight to the base-object constructor

    // 0x1007ce560, 16 bytes, complete-object destructor, inline, placed by class name
    // ParticleRawLoader::~ParticleRawLoader(): jumps straight to the base-object destructor

    // 0x1007e5850, 80 bytes, base-object constructor, inline, placed by class name
    // ParticleRawLoader::ParticleRawLoader()
    void ParticleRawLoader::ParticleRawLoader() {
        field_16 = 0;
        field_20 = 0;
        *(undefined8*)&field_24 = 0;
        field_0 = (Js5ResourceProvider*)0;
        field_8 = (Js5ArchiveSettings*)0;
        new (&field_32) Array<ParticleEmitterRaw, eastl::allocator>();
        field_56 = 0;
        field_60 = 0;
        new (&field_64) Array<ParticleEffectorRaw, eastl::allocator>();
    }

    // 0x1007e5990, 80 bytes, base-object destructor, inline, placed by class name
    // ParticleRawLoader::~ParticleRawLoader()
    void ParticleRawLoader::~ParticleRawLoader() {
        Destruct(this);
        (&field_64)->~Array();
        (&field_32)->~Array();
    }

} // namespace jag::graphics
