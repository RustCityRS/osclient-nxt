// libs/game/runetek5/config/ConfigProviderDefaultsLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class ConfigProviderDefaultsLoader {
    public:
        // virtual methods in vtable order
        virtual ~ConfigProviderDefaultsLoader();
        virtual uint64_t Service();
        void ProvideDefault(DefaultsGroup defaultsGroup, PacketT<Array<unsigned char>>& arg2);
        void ConfigProviderBatchInterface(ConfigProvider* configProvider, Js5ResourceProvider* js5ResourceProvider,
                                          Js5ArchiveSettings* js5ArchiveSettings);

    private:
        ConfigProvider* field_8;
        Js5ResourceProvider* field_16;
        Js5ArchiveSettings* field_24;
        long field_32;
        uint8_t _unknown_40[4];
        int field_44;
        uint64_t field_48;
        uint64_t field_56;
        uint64_t field_64;
        uint64_t field_72;
        uint8_t _unknown_80[8];
    };

    // 0x1005712a0
    void ConfigProviderDefaultsLoader::ConfigProviderBatchInterface(ConfigProvider* configProvider,
                                                                    Js5ResourceProvider* js5ResourceProvider,
                                                                    Js5ArchiveSettings* js5ArchiveSettings) {
        ConfigProviderBatchInterface(configProvider, js5ResourceProvider, js5ArchiveSettings);
    }

    // 0x1005712b0
    void ConfigProviderDefaultsLoader::ConfigProviderBatchInterface(ConfigProvider* configProvider,
                                                                    Js5ResourceProvider* js5ResourceProvider,
                                                                    Js5ArchiveSettings* js5ArchiveSettings) {
        new (this) game::ConfigProviderBatchInterface(configProvider, js5ResourceProvider, js5ArchiveSettings);
        this->_vptr = (ConfigProviderDefaultsLoader_vtbl*)&PTR__ScriptOption_100f048d0;
        field_48 = 12884901889;
        field_56 = 25769803780;
        field_64 = 38654705671;
        field_72 = 51539607562;
    }

} // namespace jag::game

namespace jag {
    // 0x100571300
    ref_counter_shared<game::ConfigProviderDefaultsLoader>::ref_counter_shared(
        unsigned long arg1, game::ConfigProviderDefaultsLoader* configProviderDefaultsLoader)
        : ref_counter_base() {}

} // namespace jag
