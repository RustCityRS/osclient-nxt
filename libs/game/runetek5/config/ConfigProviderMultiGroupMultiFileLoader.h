// libs/game/runetek5/config/ConfigProviderMultiGroupMultiFileLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class ConfigProviderMultiGroupMultiFileLoader {
    public:
        // virtual methods in vtable order
        virtual ~ConfigProviderMultiGroupMultiFileLoader();
        virtual ulong Service();
        ConfigProviderMultiGroupMultiFileLoader(
            ConfigProvider*, Js5ResourceProvider*, Js5ArchiveSettings*,
            Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>, eastl::allocator>*);
        ConfigProviderMultiGroupMultiFileLoader(ConfigProvider*, Js5ResourceProvider*, Js5ArchiveSettings*);

        // data members, from how the methods use this: 72 bytes
        undefined** field_0;           // offset 0, vtable pointer
        ConfigProvider* field_8;       // offset 8
        Js5ResourceProvider* field_16; // offset 16
        Js5ArchiveSettings* field_24;  // offset 24
        AnimationParameters* field_32; // offset 32
        char _unknown_40[4];
        int field_44;    // offset 44
        Array* field_48; // offset 48
        char* field_56;  // offset 56
        char _unknown_64[8];
    };

    // 0x10056c830, 16 bytes, complete-object destructor, inline, placed by class name
    // ConfigProviderMultiGroupMultiFileLoader::~ConfigProviderMultiGroupMultiFileLoader(): jumps straight to the base-object destructor

    // 0x10056c840, 32 bytes, deleting destructor, inline, placed by class name
    // ConfigProviderMultiGroupMultiFileLoader::~ConfigProviderMultiGroupMultiFileLoader()
    void ConfigProviderMultiGroupMultiFileLoader::~ConfigProviderMultiGroupMultiFileLoader() {
        ~ConfigProviderMultiGroupMultiFileLoader(this);
        operator_delete(this);
    }

    // 0x10056de20, 48 bytes, base-object destructor, inline, placed by class name
    // ConfigProviderMultiGroupMultiFileLoader::~ConfigProviderMultiGroupMultiFileLoader()
    void ConfigProviderMultiGroupMultiFileLoader::~ConfigProviderMultiGroupMultiFileLoader() {
        field_0 = &PTR__ConfigProviderMultiGroupMultiFileLoader_100f04858;
        (&field_64)->~unique_ptr();
        ~AutoSingleton();
    }

} // namespace jag::game
