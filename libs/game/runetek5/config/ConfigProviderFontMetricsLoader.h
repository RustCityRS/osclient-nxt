// libs/game/runetek5/config/ConfigProviderFontMetricsLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class ConfigProviderFontMetricsLoader {
    public:
        // virtual methods in vtable order
        virtual ~ConfigProviderFontMetricsLoader();
        virtual uint64_t Service();
        uint64_t EnsureInitialised();
        unsigned int PreloadVectorFontSources();
        unsigned long ProcessFontMetrics();
        void ConfigProviderBatchInterface(ConfigProvider* configProvider, Js5ResourceProvider* js5ResourceProvider,
                                          Js5ArchiveSettings* js5ArchiveSettings);

    private:
        ConfigProvider* field_8;
        Js5ResourceProvider* field_16;
        CoordMapSquare* field_24;
        AnimationParameters* field_32;
        int field_40;
        uint8_t _unknown_44[84];
        AnimationParameters* field_128;
    };

    // 0x10056d760
    ConfigProviderFontMetricsLoader::~ConfigProviderFontMetricsLoader() {
        field_104.~Array();
        field_96.~unique_ptr();
        field_88.~unique_ptr();
        field_48.~vector_map();
    }

    // 0x100571010
    void ConfigProviderFontMetricsLoader::ConfigProviderBatchInterface(ConfigProvider* configProvider,
                                                                       Js5ResourceProvider* js5ResourceProvider,
                                                                       Js5ArchiveSettings* js5ArchiveSettings) {
        ConfigProviderBatchInterface(configProvider, js5ResourceProvider, js5ArchiveSettings);
    }

    // 0x100571020
    void ConfigProviderFontMetricsLoader::ConfigProviderBatchInterface(ConfigProvider* configProvider,
                                                                       Js5ResourceProvider* js5ResourceProvider,
                                                                       Js5ArchiveSettings* js5ArchiveSettings) {
        new (this) game::ConfigProviderBatchInterface(configProvider, js5ResourceProvider, js5ArchiveSettings);
        this->_vptr = (ConfigProviderFontMetricsLoader_vtbl*)&PTR__ConfigProviderFontMetricsLoader_100f04880;
        new (&field_48) eastl::vector_map<int, shared_ptr<graphics::FontMetrics>>();
        field_88.unique_ptr<true, void>();
        field_96.unique_ptr<true, void>();
        new (&field_104) Array<shared_ptr<PacketT<Array<unsigned char>>>>();
        field_128 = nullptr;
    }

} // namespace jag::game
