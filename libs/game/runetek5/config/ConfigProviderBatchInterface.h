// libs/game/runetek5/config/ConfigProviderBatchInterface.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class ConfigProviderBatchInterface {
    public:
        // virtual methods in vtable order
        virtual ~ConfigProviderBatchInterface();
        ConfigProviderBatchInterface(ConfigProvider* configProvider, Js5ResourceProvider* js5ResourceProvider,
                                     Js5ArchiveSettings* js5ArchiveSettings);
        void IncrementLoaded();

    private:
        ConfigProvider* field_8;
        Js5ResourceProvider* field_16;
        Js5ArchiveSettings* field_24;
        uint64_t field_32;
        uint8_t _unknown_40[4];
        int field_44;
        uint8_t _unknown_48[4];
    };

    // 0x1005611d0
    ConfigProviderBatchInterface::ConfigProviderBatchInterface(ConfigProvider* configProvider,
                                                               Js5ResourceProvider* js5ResourceProvider,
                                                               Js5ArchiveSettings* js5ArchiveSettings)
        : field_8(configProvider), field_16(js5ResourceProvider), field_24(js5ArchiveSettings), field_32(0) {
        *(uint64_t*)&field_40 = 0;
        if (((configProvider == nullptr) || (js5ResourceProvider == nullptr)) || (js5ArchiveSettings == nullptr)) {
            LogAssert("configProvider && resourceProvider && archive",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigProviderBatchInterface.h",
                      21, nullptr);
        }
    }

} // namespace jag::game
