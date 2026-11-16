// libs/game/runetek5/config/ConfigProviderDefaultsLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class ConfigProviderDefaultsLoader {
    public:
        // virtual methods in vtable order
        virtual ~ConfigProviderDefaultsLoader();
        virtual Service();
        void ProvideDefault(DefaultsGroup, PacketT<Array<unsigned char, eastl::allocator>>&);
        void ConfigProviderBatchInterface(ConfigProvider*, Js5ResourceProvider*, Js5ArchiveSettings*);

        // data members, from how the methods use this: 88 bytes
        undefined** field_0;           // offset 0, vtable pointer
        ConfigProvider* field_8;       // offset 8
        Js5ResourceProvider* field_16; // offset 16
        Js5ArchiveSettings* field_24;  // offset 24
        long field_32;                 // offset 32
        undefined8 field_40;           // offset 40
        undefined8 field_48;           // offset 48
        undefined8 field_56;           // offset 56
        undefined8 field_64;           // offset 64
        undefined8 field_72;           // offset 72
        char _unknown_80[8];
    };

    // 0x1005712a0, 16 bytes, inline, placed by class name and debug map
    // ConfigProviderDefaultsLoader::ConfigProviderBatchInterface(ConfigProvider*, Js5ResourceProvider*, Js5ArchiveSettings*)
    void ConfigProviderDefaultsLoader::ConfigProviderBatchInterface(ConfigProvider* param_1,
                                                                    Js5ResourceProvider* param_2,
                                                                    Js5ArchiveSettings* param_3) {
        ConfigProviderBatchInterface(this, param_1, param_2, param_3);
    }

    // 0x1005712b0, 64 bytes, inline, placed by class name and debug map
    // ConfigProviderDefaultsLoader::ConfigProviderBatchInterface(ConfigProvider*, Js5ResourceProvider*, Js5ArchiveSettings*)
    void ConfigProviderDefaultsLoader::ConfigProviderBatchInterface(ConfigProvider* param_1,
                                                                    Js5ResourceProvider* param_2,
                                                                    Js5ArchiveSettings* param_3) {
        new (this) game::ConfigProviderBatchInterface(param_1, param_2, param_3);
        field_0 = &PTR__ScriptOption_100f048d0;
        field_48 = 12884901889;
        field_56 = 25769803780;
        field_64 = 38654705671;
        field_72 = 51539607562;
    }

} // namespace jag::game

namespace jag {
    // 0x1005712f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::ConfigProviderDefaultsLoader>::ref_counter_shared(unsigned long, game::ConfigProviderDefaultsLoader*): jumps straight to the base-object constructor

    // 0x100571300, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::ConfigProviderDefaultsLoader>::ref_counter_shared(unsigned long, game::ConfigProviderDefaultsLoader*)
    void
    ref_counter_shared<game::ConfigProviderDefaultsLoader>::ref_counter_shared(ulong param_1,
                                                                               ConfigProviderDefaultsLoader* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7380 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ConfigProviderDefaultsLoader**)(this + 24) = param_2;
    }

} // namespace jag
