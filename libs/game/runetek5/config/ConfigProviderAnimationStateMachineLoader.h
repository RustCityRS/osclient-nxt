// libs/game/runetek5/config/ConfigProviderAnimationStateMachineLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class ConfigProviderAnimationStateMachineLoader {
    public:
        // virtual methods in vtable order
        virtual ~ConfigProviderAnimationStateMachineLoader();
        virtual unsigned long Service();
        void ConfigProviderBatchInterface(ConfigProvider* configProvider, Js5ResourceProvider* js5ResourceProvider,
                                          Js5ArchiveSettings* js5ArchiveSettings);

    private:
        ConfigProvider* field_8;
        Js5ResourceProvider* field_16;
        Js5ArchiveSettings* field_24;
        uint64_t field_32;
        uint64_t field_40;
        uint8_t _unknown_48[48];
        AnimationParameters* field_96;
    };

    // 0x10056dde0
    ConfigProviderAnimationStateMachineLoader::~ConfigProviderAnimationStateMachineLoader() {
        field_88.~unique_ptr();
        field_48.~vector_map();
    }

    // 0x1005711a0
    void
    ConfigProviderAnimationStateMachineLoader::ConfigProviderBatchInterface(ConfigProvider* configProvider,
                                                                            Js5ResourceProvider* js5ResourceProvider,
                                                                            Js5ArchiveSettings* js5ArchiveSettings) {
        ConfigProviderBatchInterface(configProvider, js5ResourceProvider, js5ArchiveSettings);
    }

    // 0x1005711b0
    void
    ConfigProviderAnimationStateMachineLoader::ConfigProviderBatchInterface(ConfigProvider* configProvider,
                                                                            Js5ResourceProvider* js5ResourceProvider,
                                                                            Js5ArchiveSettings* js5ArchiveSettings) {
        new (this) game::ConfigProviderBatchInterface(configProvider, js5ResourceProvider, js5ArchiveSettings);
        this->_vptr =
            (ConfigProviderAnimationStateMachineLoader_vtbl*)&PTR__ConfigProviderAnimationStateMachineLoader_100f048a8;
        new (&field_48) eastl::vector_map<int, shared_ptr<graphics::AnimationStateMachineProvider>>();
        field_88.unique_ptr<true, void>();
        field_96 = nullptr;
    }

} // namespace jag::game

namespace jag {
    // 0x10056d8a0
    ConfigDecoderInfo* ConfigDecoderInfo::operator=(ConfigDecoderInfo&& configDecoderInfo) {
        field_0 = configDecoderInfo.field_0;
        field_8 = configDecoderInfo.field_8;
        field_40 = configDecoderInfo.field_40;
        return this;
    }

} // namespace jag
