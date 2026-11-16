// libs/game/runetek5/config/ConfigProviderFontMetricsLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class ConfigProviderFontMetricsLoader {
    public:
        // virtual methods in vtable order
        virtual ~ConfigProviderFontMetricsLoader();
        virtual Service();
        EnsureInitialised();
        uint PreloadVectorFontSources();
        ulong ProcessFontMetrics();
        void ConfigProviderBatchInterface(ConfigProvider*, Js5ResourceProvider*, Js5ArchiveSettings*);

        // data members, from how the methods use this: 136 bytes
        undefined** field_0;           // offset 0, vtable pointer
        ConfigProvider* field_8;       // offset 8
        Js5ResourceProvider* field_16; // offset 16
        CoordMapSquare* field_24;      // offset 24
        AnimationParameters* field_32; // offset 32
        int field_40;                  // offset 40
        char _unknown_44[84];
        AnimationParameters* field_128; // offset 128
    };

    // 0x10056c670, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ConfigProviderFontMetricsLoader::~ConfigProviderFontMetricsLoader(): jumps straight to the base-object destructor

    // 0x10056c680, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // ConfigProviderFontMetricsLoader::~ConfigProviderFontMetricsLoader()
    void ConfigProviderFontMetricsLoader::~ConfigProviderFontMetricsLoader() {
        ~ConfigProviderFontMetricsLoader(this);
        operator_delete(this);
    }

    // 0x10056d760, 80 bytes, base-object destructor, inline, placed by class name
    // ConfigProviderFontMetricsLoader::~ConfigProviderFontMetricsLoader()
    void ConfigProviderFontMetricsLoader::~ConfigProviderFontMetricsLoader() {
        field_0 = &PTR__ConfigProviderFontMetricsLoader_100f04880;
        (&field_104)->~Array();
        (&field_96)->~unique_ptr();
        (&field_88)->~unique_ptr();
        (&field_48)->~vector_map();
        ~AutoSingleton();
    }

    // 0x100571010, 16 bytes, inline, placed by class name
    // ConfigProviderFontMetricsLoader::ConfigProviderBatchInterface(ConfigProvider*, Js5ResourceProvider*, Js5ArchiveSettings*)
    void ConfigProviderFontMetricsLoader::ConfigProviderBatchInterface(ConfigProvider* param_1,
                                                                       Js5ResourceProvider* param_2,
                                                                       Js5ArchiveSettings* param_3) {
        ConfigProviderBatchInterface(this, param_1, param_2, param_3);
    }

    // 0x100571020, 160 bytes, inline, placed by class name
    // ConfigProviderFontMetricsLoader::ConfigProviderBatchInterface(ConfigProvider*, Js5ResourceProvider*, Js5ArchiveSettings*)
    void ConfigProviderFontMetricsLoader::ConfigProviderBatchInterface(ConfigProvider* param_1,
                                                                       Js5ResourceProvider* param_2,
                                                                       Js5ArchiveSettings* param_3) {
        new (this) game::ConfigProviderBatchInterface(param_1, param_2, param_3);
        field_0 = &PTR__ConfigProviderFontMetricsLoader_100f04880;
        new (&field_48)
            eastl::vector_map<int, shared_ptr<graphics::FontMetrics>, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, shared_ptr<graphics::FontMetrics>>, eastl::allocator>>();
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)&field_88);
        std::unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>::unique_ptr<true, void>(
            (unique_ptr<DownloadWaitHandler, std::default_delete<DownloadWaitHandler>>*)&field_96);
        new (&field_104) Array<shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>, eastl::allocator>();
        field_128 = (AnimationParameters*)0;
    }

} // namespace jag::game
