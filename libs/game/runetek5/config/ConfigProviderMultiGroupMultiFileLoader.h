// libs/game/runetek5/config/ConfigProviderMultiGroupMultiFileLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class ConfigProviderMultiGroupMultiFileLoader {
    public:
        // virtual methods in vtable order
        virtual ~ConfigProviderMultiGroupMultiFileLoader();
        virtual unsigned long Service();
        ConfigProviderMultiGroupMultiFileLoader(ConfigProvider* configProvider,
                                                Js5ResourceProvider* js5ResourceProvider,
                                                Js5ArchiveSettings* js5ArchiveSettings,
                                                Array<eastl::vector<PacketT<Array<unsigned char>>>>* arg4);
        ConfigProviderMultiGroupMultiFileLoader(ConfigProvider* configProvider,
                                                Js5ResourceProvider* js5ResourceProvider,
                                                Js5ArchiveSettings* js5ArchiveSettings);

    private:
        ConfigProvider* field_8;
        Js5ResourceProvider* field_16;
        Js5ArchiveSettings* field_24;
        AnimationParameters* field_32;
        uint8_t _unknown_40[4];
        int field_44;
        Array<eastl::vector<PacketT<Array<unsigned char>>>>* field_48;
        char* field_56;
        uint8_t _unknown_64[8];
    };

    // 0x10056de20
    ConfigProviderMultiGroupMultiFileLoader::~ConfigProviderMultiGroupMultiFileLoader() {
        field_64.~unique_ptr();
    }

} // namespace jag::game
