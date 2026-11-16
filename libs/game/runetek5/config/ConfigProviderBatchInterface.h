// libs/game/runetek5/config/ConfigProviderBatchInterface.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class ConfigProviderBatchInterface {
    public:
        // virtual methods in vtable order
        virtual ~ConfigProviderBatchInterface();
        ConfigProviderBatchInterface(ConfigProvider*, Js5ResourceProvider*, Js5ArchiveSettings*);
        void IncrementLoaded();

        // data members, from how the methods use this: 52 bytes
        undefined* field_0;            // offset 0, vtable pointer
        ConfigProvider* field_8;       // offset 8
        Js5ResourceProvider* field_16; // offset 16
        Js5ArchiveSettings* field_24;  // offset 24
        undefined8 field_32;           // offset 32
        char _unknown_40[4];
        int field_44; // offset 44
        char _unknown_48[4];
    };

    // 0x1005611d0, 96 bytes, base-object constructor, inline, placed by class name and debug map
    // ConfigProviderBatchInterface::ConfigProviderBatchInterface(ConfigProvider*, Js5ResourceProvider*, Js5ArchiveSettings*)
    void ConfigProviderBatchInterface::ConfigProviderBatchInterface(ConfigProvider* param_1,
                                                                    Js5ResourceProvider* param_2,
                                                                    Js5ArchiveSettings* param_3) {
        field_0 = PTR_vtable_100ee82f0 + 16;
        field_8 = param_1;
        field_16 = param_2;
        field_24 = param_3;
        field_32 = 0;
        *(undefined8*)&field_40 = 0;
        if (((param_1 == (ConfigProvider*)0) || (param_2 == (Js5ResourceProvider*)0)) ||
            (param_3 == (Js5ArchiveSettings*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("configProvider && resourceProvider && archive",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigProviderBatchInterface.h",
                      21, (char*)0);
        }
    }

} // namespace jag::game
