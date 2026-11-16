// libs/game/runetek5/scene/loaders/EnvironmentLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class EnvironmentLoader {
    public:
        EnvironmentLoader(unsigned int arg1, unsigned int arg2,
                          const shared_ptr<ClientCompositeData>& clientCompositeData);
        bool IsLoaded() const;
        uint8_t* GetEnvironmentSettings(shared_ptr<MapEnvironmentSettings>& mapEnvironmentSettings, unsigned int arg2,
                                        unsigned int arg3, unsigned int arg4) const;
        uint8_t* Load(Js5ResourceProvider* js5ResourceProvider);
        auto LoadMapSquare(Js5ResourceProvider* js5ResourceProvider, unsigned int arg2, unsigned int arg3);
        ~EnvironmentLoader();
        static shared_ptr<MapEnvironmentSettings> DEFAULT_ENVIRONMENT_SETTINGS;

    private:
        unsigned int field_0;
        unsigned int field_4;
        shared_ptr field_8;
        uint8_t _unknown_24[24];
    };

    // 0x100420e60
    EnvironmentLoader::~EnvironmentLoader() {
        field_40.~shared_ptr();
        field_24.~shared_ptr();
        field_8->~shared_ptr();
    }

} // namespace jag::game
