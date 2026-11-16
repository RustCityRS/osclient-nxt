// libs/game/runetek5/config/ConfigProviderMultiGroupSingleFileLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class ConfigProviderMultiGroupSingleFileLoader {
    public:
        // virtual methods in vtable order
        virtual ~ConfigProviderMultiGroupSingleFileLoader();
        virtual unsigned long Service();
        ConfigProviderMultiGroupSingleFileLoader(ConfigProvider* configProvider,
                                                 Js5ResourceProvider* js5ResourceProvider,
                                                 Js5ArchiveSettings* js5ArchiveSettings,
                                                 Array<PacketT<Array<unsigned char>>>* arg4);
        ConfigProviderMultiGroupSingleFileLoader(ConfigProvider* configProvider,
                                                 Js5ResourceProvider* js5ResourceProvider,
                                                 Js5ArchiveSettings* js5ArchiveSettings);

    private:
        ConfigProvider* field_8;
        Js5ResourceProvider* field_16;
        Js5ArchiveSettings* field_24;
        AnimationParameters* field_32;
        int field_40;
        int field_44;
        Array<PacketT<Array<unsigned char>>>* field_48;
        char* field_56;
        uint8_t _unknown_64[8];
    };

    // 0x100562a70
    ConfigProviderMultiGroupSingleFileLoader::~ConfigProviderMultiGroupSingleFileLoader() {
        field_64.~unique_ptr();
    }

} // namespace jag::game
