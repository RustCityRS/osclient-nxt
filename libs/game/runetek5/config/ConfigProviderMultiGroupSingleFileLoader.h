// libs/game/runetek5/config/ConfigProviderMultiGroupSingleFileLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class ConfigProviderMultiGroupSingleFileLoader {
    public:
        // virtual methods in vtable order
        virtual ~ConfigProviderMultiGroupSingleFileLoader();
        virtual ulong Service();
        ConfigProviderMultiGroupSingleFileLoader(
            ConfigProvider*, Js5ResourceProvider*, Js5ArchiveSettings*,
            Array<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*);
        ConfigProviderMultiGroupSingleFileLoader(ConfigProvider*, Js5ResourceProvider*, Js5ArchiveSettings*);

        // data members, from how the methods use this: 72 bytes
        undefined** field_0;           // offset 0, vtable pointer
        ConfigProvider* field_8;       // offset 8
        Js5ResourceProvider* field_16; // offset 16
        Js5ArchiveSettings* field_24;  // offset 24
        AnimationParameters* field_32; // offset 32
        int field_40;                  // offset 40
        int field_44;                  // offset 44
        Array* field_48;               // offset 48
        char* field_56;                // offset 56
        char _unknown_64[8];
    };

    // 0x1005629a0, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigProviderMultiGroupSingleFileLoader::~ConfigProviderMultiGroupSingleFileLoader(): jumps straight to the base-object destructor

    // 0x1005629b0, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigProviderMultiGroupSingleFileLoader::~ConfigProviderMultiGroupSingleFileLoader()
    void ConfigProviderMultiGroupSingleFileLoader::~ConfigProviderMultiGroupSingleFileLoader() {
        ~ConfigProviderMultiGroupSingleFileLoader(this);
        operator_delete(this);
    }

    // 0x100562a70, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigProviderMultiGroupSingleFileLoader::~ConfigProviderMultiGroupSingleFileLoader()
    void ConfigProviderMultiGroupSingleFileLoader::~ConfigProviderMultiGroupSingleFileLoader() {
        field_0 = &PTR__ConfigProviderMultiGroupSingleFileLoader_100f04488;
        (&field_64)->~unique_ptr();
        ~AutoSingleton();
    }

} // namespace jag::game
