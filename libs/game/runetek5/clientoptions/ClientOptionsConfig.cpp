// libs/game/runetek5/clientoptions/ClientOptionsConfig.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game {
    class ClientOptionsConfig {
    public:
        bool ShouldDowngradeFromBaseline(ClientOptionsConfig const&) const;
        void PrintComparison(ClientOptionsConfig const&) const;
        void DowngradeToTarget(ClientOptionsConfig const&);

        // data members, from how the methods use this: 80 bytes
        int field_0;         // offset 0
        int field_4;         // offset 4
        int field_8;         // offset 8
        int field_12;        // offset 12
        int field_16;        // offset 16
        int field_20;        // offset 20
        int field_24;        // offset 24
        int field_28;        // offset 28
        int field_32;        // offset 32
        int field_36;        // offset 36
        int field_40;        // offset 40
        int field_44;        // offset 44
        int field_48;        // offset 48
        int field_52;        // offset 52
        int field_56;        // offset 56
        int field_60;        // offset 60
        int field_64;        // offset 64
        int field_68;        // offset 68
        undefined4 field_72; // offset 72
        char _unknown_76[4];
    };

    // 0x100603250, 544 bytes, placed by class name and debug map
    // ClientOptionsConfig::ShouldDowngradeFromBaseline(ClientOptionsConfig const&) const
    bool ClientOptionsConfig::ShouldDowngradeFromBaseline(ClientOptionsConfig* param_1) {
        bool bVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        int iVar11;
        int iVar12;
        int iVar13;

        bVar1 = true;
        if (((((param_1->field_0 <= field_0) && (param_1->field_12 <= field_12)) && (param_1->field_16 <= field_16)) &&
             ((param_1->field_24 <= field_24 && (param_1->field_32 <= field_32)))) &&
            ((param_1->field_20 <= field_20 && ((field_48 != 0 || (param_1->field_48 < 1)))))) {
            iVar2 = eastl::max<int>(0, param_1->field_4 - field_4);
            iVar3 = eastl::max<int>(0, param_1->field_8 - field_8);
            iVar4 = eastl::max<int>(0, param_1->field_28 - field_28);
            iVar5 = eastl::max<int>(0, param_1->field_36 - field_36);
            iVar6 = eastl::max<int>(0, param_1->field_48 - field_48);
            iVar7 = eastl::max<int>(0, param_1->field_52 - field_52);
            iVar8 = eastl::max<int>(0, param_1->field_56 - field_56);
            iVar9 = eastl::max<int>(0, param_1->field_60 - field_60);
            iVar10 = eastl::max<int>(0, param_1->field_64 - field_64);
            iVar11 = eastl::max<int>(0, param_1->field_68 - field_68);
            iVar12 = eastl::max<int>(0, param_1->field_40 - field_40);
            iVar13 = eastl::max<int>(0, param_1->field_44 - field_44);
            bVar1 = 1.0 < ((float)iVar10 + (float)iVar9 + (float)iVar8 + (float)iVar6 + (float)iVar5 + (float)iVar4 +
                           (float)iVar3 + (float)iVar2) *
                                  0.5 +
                              (float)iVar13 * 0.25 + (float)iVar12 * 0.7 + (float)iVar11 * 0.75 + (float)iVar7 * 0.4;
        }
        return bVar1;
    }

    // 0x100603470, 1088 bytes, placed by class name and debug map
    // ClientOptionsConfig::PrintComparison(ClientOptionsConfig const&) const
    void ClientOptionsConfig::PrintComparison(ClientOptionsConfig* param_1) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/ClientOptionsConfig.cpp",
                            54, "--------------------------------------");
        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/ClientOptionsConfig.cpp",
                            55, "Setting \'aa\' - %d (vs %d)", field_0, param_1->field_0);
        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/ClientOptionsConfig.cpp",
                            56, "Setting \'aa quality\' - %d (vs %d)", field_4, param_1->field_4);
        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/ClientOptionsConfig.cpp",
                            57, "Setting \'bloom\' - %d (vs %d)", field_8, param_1->field_8);
        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/ClientOptionsConfig.cpp",
                            58, "Setting \'dof\' - %d (vs %d)", field_12, param_1->field_12);
        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/ClientOptionsConfig.cpp",
                            59, "Setting \'draw distance\' - %d (vs %d)", field_16, param_1->field_16);
        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/ClientOptionsConfig.cpp",
                            60, "Setting \'lighting\' - %d (vs %d)", field_20, param_1->field_20);
        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/ClientOptionsConfig.cpp",
                            61, "Setting \'shadows\' - %d (vs %d)", field_24, param_1->field_24);
        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/ClientOptionsConfig.cpp",
                            62, "Setting \'shadow quality\' - %d (vs %d)", field_28, param_1->field_28);
        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/ClientOptionsConfig.cpp",
                            63, "Setting \'textures\' - %d (vs %d)", field_32, param_1->field_32);
        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/ClientOptionsConfig.cpp",
                            64, "Setting \'reflections\' - %d (vs %d)", field_36, param_1->field_36);
        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/ClientOptionsConfig.cpp",
                            65, "Setting \'ao\' - %d (vs %d)", field_40, param_1->field_40);
        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/ClientOptionsConfig.cpp",
                            66, "Setting \'anisotropic filtering\' - %d (vs %d)", field_44, param_1->field_44);
        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/ClientOptionsConfig.cpp",
                            67, "Setting \'volumetric lighting\' - %d (vs %d)", field_48, param_1->field_48);
        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/ClientOptionsConfig.cpp",
                            68, "Setting \'ground decor\' - %d (vs %d)", field_52, param_1->field_52);
        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/ClientOptionsConfig.cpp",
                            69, "Setting \'smooth clip fade\' - %d (vs %d)", field_56, param_1->field_56);
        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/ClientOptionsConfig.cpp",
                            70, "Setting \'canopy cutout\' - %d (vs %d)", field_60, param_1->field_60);
        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/ClientOptionsConfig.cpp",
                            71, "Setting \'entity highlights\' - %d (vs %d)", field_64, param_1->field_64);
        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/ClientOptionsConfig.cpp",
                            72, "Setting \'particle quality\' - %d (vs %d)", field_68, param_1->field_68);
        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "clientoptions/ClientOptionsConfig.cpp",
                            73, "--------------------------------------");
    }

    // 0x1006038b0, 304 bytes, placed by class name and debug map
    // ClientOptionsConfig::DowngradeToTarget(ClientOptionsConfig const&)
    void ClientOptionsConfig::DowngradeToTarget(ClientOptionsConfig* param_1) {
        int iVar1;

        iVar1 = eastl::min<graphics::GraphicsQuality>(field_0, param_1->field_0);
        field_0 = iVar1;
        iVar1 = eastl::min<graphics::GraphicsQuality>(field_4, param_1->field_4);
        field_4 = iVar1;
        iVar1 = eastl::min<graphics::GraphicsQuality>(field_8, param_1->field_8);
        field_8 = iVar1;
        iVar1 = eastl::min<graphics::GraphicsQuality>(field_12, param_1->field_12);
        field_12 = iVar1;
        iVar1 = eastl::min<graphics::GraphicsQuality>(field_16, param_1->field_16);
        field_16 = iVar1;
        iVar1 = eastl::min<graphics::GraphicsQuality>(field_20, param_1->field_20);
        field_20 = iVar1;
        iVar1 = eastl::min<graphics::GraphicsQuality>(field_24, param_1->field_24);
        field_24 = iVar1;
        iVar1 = eastl::min<graphics::GraphicsQuality>(field_28, param_1->field_28);
        field_28 = iVar1;
        iVar1 = eastl::min<graphics::GraphicsQuality>(field_32, param_1->field_32);
        field_32 = iVar1;
        iVar1 = eastl::min<graphics::GraphicsQuality>(field_36, param_1->field_36);
        field_36 = iVar1;
        iVar1 = eastl::min<graphics::GraphicsQuality>(field_40, param_1->field_40);
        field_40 = iVar1;
        iVar1 = eastl::min<graphics::GraphicsQuality>(field_44, param_1->field_44);
        field_44 = iVar1;
        iVar1 = eastl::min<graphics::GraphicsQuality>(field_48, param_1->field_48);
        field_48 = iVar1;
        iVar1 = eastl::min<graphics::GraphicsQuality>(field_52, param_1->field_52);
        field_52 = iVar1;
        iVar1 = eastl::min<graphics::GraphicsQuality>(field_56, param_1->field_56);
        field_56 = iVar1;
        iVar1 = eastl::min<graphics::GraphicsQuality>(field_60, param_1->field_60);
        field_60 = iVar1;
        iVar1 = eastl::min<graphics::GraphicsQuality>(field_64, param_1->field_64);
        field_64 = iVar1;
        iVar1 = eastl::min<graphics::GraphicsQuality>(field_68, param_1->field_68);
        field_68 = iVar1;
        field_72 = eastl::min<graphics::GraphicsQuality>(field_72, param_1->field_72);
    }

} // namespace jag::game
