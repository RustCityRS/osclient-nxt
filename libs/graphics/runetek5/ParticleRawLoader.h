// libs/graphics/runetek5/ParticleRawLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class ParticleRawLoader {
    public:
        Option<float>* GetEmitterTypes() const;
        uint8_t* GetEffectorTypes() const;
        int GetMaxEffectorID() const;
        int GetMaxEmitterID() const;
        ParticleRawLoader();
        ~ParticleRawLoader();
        void Initialise(Js5ResourceProvider* js5ResourceProvider, const Js5ArchiveSettings* js5ArchiveSettings,
                        unsigned int arg3, unsigned int arg4);
        void Destruct();
        bool MainLogic();

    private:
        Js5ResourceProvider* field_0;
        Js5ArchiveSettings* field_8;
        unsigned int field_16;
        unsigned int field_20;
        uint8_t _unknown_24[4];
        int m_maxEmitterID;
        uint8_t _unknown_32[24];
        int field_56;
        int m_maxEffectorID;
        uint8_t _unknown_64[8];
    };

    // 0x1007e5850
    ParticleRawLoader::ParticleRawLoader() : field_16(0), field_20(0) {
        *(uint64_t*)&field_24 = 0;
        field_0 = nullptr;
        field_8 = nullptr;
        new (&field_32) Array<ParticleEmitterRaw>();
        field_56 = 0;
        m_maxEffectorID = 0;
        new (&field_64) Array<ParticleEffectorRaw>();
    }

    // 0x1007e5990
    ParticleRawLoader::~ParticleRawLoader() {
        Destruct();
        field_64.~Array();
        field_32.~Array();
    }

} // namespace jag::graphics
