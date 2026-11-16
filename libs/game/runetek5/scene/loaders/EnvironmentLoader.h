// libs/game/runetek5/scene/loaders/EnvironmentLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class EnvironmentLoader {
    public:
        EnvironmentLoader(unsigned int, unsigned int, shared_ptr<ClientCompositeData> const&);
        bool IsLoaded() const;
        GetEnvironmentSettings(shared_ptr<MapEnvironmentSettings>&, unsigned int, unsigned int, unsigned int) const;
        Load(Js5ResourceProvider*);
        LoadMapSquare(Js5ResourceProvider*, unsigned int, unsigned int);
        ~EnvironmentLoader();
        static /* 16 bytes */ DEFAULT_ENVIRONMENT_SETTINGS;

        // data members, from how the methods use this: 56 bytes
        uint field_0;        // offset 0
        uint field_4;        // offset 4
        shared_ptr field_8;  // offset 8
        shared_ptr field_24; // offset 24
        shared_ptr field_40; // offset 40
    };

    // 0x100420d20, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // EnvironmentLoader::~EnvironmentLoader(): jumps straight to the base-object destructor

    // 0x100420e60, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // EnvironmentLoader::~EnvironmentLoader()
    void EnvironmentLoader::~EnvironmentLoader() {
        field_40->~shared_ptr();
        field_24->~shared_ptr();
        field_8->~shared_ptr();
    }

} // namespace jag::game
