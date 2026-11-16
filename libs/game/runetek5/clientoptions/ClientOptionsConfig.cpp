// libs/game/runetek5/clientoptions/ClientOptionsConfig.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game {
    class ClientOptionsConfig {
    public:
        bool ShouldDowngradeFromBaseline(const ClientOptionsConfig& clientOptionsConfig) const;
        void PrintComparison(const ClientOptionsConfig& clientOptionsConfig) const;
        void DowngradeToTarget(const ClientOptionsConfig& clientOptionsConfig);

    private:
        unsigned int field_0;
        unsigned int field_4;
        unsigned int field_8;
        unsigned int field_12;
        unsigned int field_16;
        unsigned int field_20;
        unsigned int field_24;
        unsigned int field_28;
        unsigned int field_32;
        unsigned int field_36;
        unsigned int field_40;
        unsigned int field_44;
        unsigned int field_48;
        unsigned int field_52;
        unsigned int field_56;
        unsigned int field_60;
        unsigned int field_64;
        unsigned int field_68;
        EnumOptionToggle field_72;
        uint8_t _unknown_76[4];
    };

    // 0x100603250
    bool ClientOptionsConfig::ShouldDowngradeFromBaseline(const ClientOptionsConfig& clientOptionsConfig) const {
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

        bool bVar1 = true;
        if ((((((int)clientOptionsConfig.field_0 <= (int)field_0) &&
               ((int)clientOptionsConfig.field_12 <= (int)field_12)) &&
              ((int)clientOptionsConfig.field_16 <= (int)field_16)) &&
             (((int)clientOptionsConfig.field_24 <= (int)field_24 &&
               ((int)clientOptionsConfig.field_32 <= (int)field_32)))) &&
            (((int)clientOptionsConfig.field_20 <= (int)field_20 &&
              ((field_48 != 0 || ((int)clientOptionsConfig.field_48 < 1)))))) {
            iVar2 = eastl::max<int>(0, clientOptionsConfig.field_4 - field_4);
            iVar3 = eastl::max<int>(0, clientOptionsConfig.field_8 - field_8);
            iVar4 = eastl::max<int>(0, clientOptionsConfig.field_28 - field_28);
            iVar5 = eastl::max<int>(0, clientOptionsConfig.field_36 - field_36);
            iVar6 = eastl::max<int>(0, clientOptionsConfig.field_48 - field_48);
            iVar7 = eastl::max<int>(0, clientOptionsConfig.field_52 - field_52);
            iVar8 = eastl::max<int>(0, clientOptionsConfig.field_56 - field_56);
            iVar9 = eastl::max<int>(0, clientOptionsConfig.field_60 - field_60);
            iVar10 = eastl::max<int>(0, clientOptionsConfig.field_64 - field_64);
            iVar11 = eastl::max<int>(0, clientOptionsConfig.field_68 - field_68);
            iVar12 = eastl::max<int>(0, clientOptionsConfig.field_40 - field_40);
            iVar13 = eastl::max<int>(0, clientOptionsConfig.field_44 - field_44);
            bVar1 = 1.0 < ((float)iVar10 + (float)iVar9 + (float)iVar8 + (float)iVar6 + (float)iVar5 + (float)iVar4 +
                           (float)iVar3 + (float)iVar2) *
                                  0.5 +
                              (float)iVar13 * 0.25 + (float)iVar12 * 0.7 + (float)iVar11 * 0.75 + (float)iVar7 * 0.4;
        }
        return bVar1;
    }

    // 0x100603470
    void ClientOptionsConfig::PrintComparison(const ClientOptionsConfig& clientOptionsConfig) const {
        auto pLVar1 = logger::default_logger();
        pLVar1->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                    "ClientOptionsConfig.cpp",
                    54, "--------------------------------------");
        pLVar1 = logger::default_logger();
        pLVar1->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                    "ClientOptionsConfig.cpp",
                    55, "Setting \'aa\' - %d (vs %d)", (unsigned long)field_0,
                    (unsigned long)clientOptionsConfig.field_0);
        pLVar1 = logger::default_logger();
        pLVar1->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                    "ClientOptionsConfig.cpp",
                    56, "Setting \'aa quality\' - %d (vs %d)", (unsigned long)field_4,
                    (unsigned long)clientOptionsConfig.field_4);
        pLVar1 = logger::default_logger();
        pLVar1->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                    "ClientOptionsConfig.cpp",
                    57, "Setting \'bloom\' - %d (vs %d)", (unsigned long)field_8,
                    (unsigned long)clientOptionsConfig.field_8);
        pLVar1 = logger::default_logger();
        pLVar1->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                    "ClientOptionsConfig.cpp",
                    58, "Setting \'dof\' - %d (vs %d)", (unsigned long)field_12,
                    (unsigned long)clientOptionsConfig.field_12);
        pLVar1 = logger::default_logger();
        pLVar1->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                    "ClientOptionsConfig.cpp",
                    59, "Setting \'draw distance\' - %d (vs %d)", (unsigned long)field_16,
                    (unsigned long)clientOptionsConfig.field_16);
        pLVar1 = logger::default_logger();
        pLVar1->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                    "ClientOptionsConfig.cpp",
                    60, "Setting \'lighting\' - %d (vs %d)", (unsigned long)field_20,
                    (unsigned long)clientOptionsConfig.field_20);
        pLVar1 = logger::default_logger();
        pLVar1->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                    "ClientOptionsConfig.cpp",
                    61, "Setting \'shadows\' - %d (vs %d)", (unsigned long)field_24,
                    (unsigned long)clientOptionsConfig.field_24);
        pLVar1 = logger::default_logger();
        pLVar1->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                    "ClientOptionsConfig.cpp",
                    62, "Setting \'shadow quality\' - %d (vs %d)", (unsigned long)field_28,
                    (unsigned long)clientOptionsConfig.field_28);
        pLVar1 = logger::default_logger();
        pLVar1->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                    "ClientOptionsConfig.cpp",
                    63, "Setting \'textures\' - %d (vs %d)", (unsigned long)field_32,
                    (unsigned long)clientOptionsConfig.field_32);
        pLVar1 = logger::default_logger();
        pLVar1->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                    "ClientOptionsConfig.cpp",
                    64, "Setting \'reflections\' - %d (vs %d)", (unsigned long)field_36,
                    (unsigned long)clientOptionsConfig.field_36);
        pLVar1 = logger::default_logger();
        pLVar1->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                    "ClientOptionsConfig.cpp",
                    65, "Setting \'ao\' - %d (vs %d)", (unsigned long)field_40,
                    (unsigned long)clientOptionsConfig.field_40);
        pLVar1 = logger::default_logger();
        pLVar1->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                    "ClientOptionsConfig.cpp",
                    66, "Setting \'anisotropic filtering\' - %d (vs %d)", (unsigned long)field_44,
                    (unsigned long)clientOptionsConfig.field_44);
        pLVar1 = logger::default_logger();
        pLVar1->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                    "ClientOptionsConfig.cpp",
                    67, "Setting \'volumetric lighting\' - %d (vs %d)", (unsigned long)field_48,
                    (unsigned long)clientOptionsConfig.field_48);
        pLVar1 = logger::default_logger();
        pLVar1->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                    "ClientOptionsConfig.cpp",
                    68, "Setting \'ground decor\' - %d (vs %d)", (unsigned long)field_52,
                    (unsigned long)clientOptionsConfig.field_52);
        pLVar1 = logger::default_logger();
        pLVar1->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                    "ClientOptionsConfig.cpp",
                    69, "Setting \'smooth clip fade\' - %d (vs %d)", (unsigned long)field_56,
                    (unsigned long)clientOptionsConfig.field_56);
        pLVar1 = logger::default_logger();
        pLVar1->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                    "ClientOptionsConfig.cpp",
                    70, "Setting \'canopy cutout\' - %d (vs %d)", (unsigned long)field_60,
                    (unsigned long)clientOptionsConfig.field_60);
        pLVar1 = logger::default_logger();
        pLVar1->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                    "ClientOptionsConfig.cpp",
                    71, "Setting \'entity highlights\' - %d (vs %d)", (unsigned long)field_64,
                    (unsigned long)clientOptionsConfig.field_64);
        pLVar1 = logger::default_logger();
        pLVar1->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                    "ClientOptionsConfig.cpp",
                    72, "Setting \'particle quality\' - %d (vs %d)", (unsigned long)field_68,
                    (unsigned long)clientOptionsConfig.field_68);
        pLVar1 = logger::default_logger();
        pLVar1->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/clientoptions/"
                    "ClientOptionsConfig.cpp",
                    73, "--------------------------------------");
    }

    // 0x1006038b0
    void ClientOptionsConfig::DowngradeToTarget(const ClientOptionsConfig& clientOptionsConfig) {
        unsigned int uVar1 = eastl::min<graphics::GraphicsQuality>(field_0, clientOptionsConfig.field_0);
        field_0 = uVar1;
        uVar1 = eastl::min<graphics::GraphicsQuality>(field_4, clientOptionsConfig.field_4);
        field_4 = uVar1;
        uVar1 = eastl::min<graphics::GraphicsQuality>(field_8, clientOptionsConfig.field_8);
        field_8 = uVar1;
        uVar1 = eastl::min<graphics::GraphicsQuality>(field_12, clientOptionsConfig.field_12);
        field_12 = uVar1;
        uVar1 = eastl::min<graphics::GraphicsQuality>(field_16, clientOptionsConfig.field_16);
        field_16 = uVar1;
        uVar1 = eastl::min<graphics::GraphicsQuality>(field_20, clientOptionsConfig.field_20);
        field_20 = uVar1;
        uVar1 = eastl::min<graphics::GraphicsQuality>(field_24, clientOptionsConfig.field_24);
        field_24 = uVar1;
        uVar1 = eastl::min<graphics::GraphicsQuality>(field_28, clientOptionsConfig.field_28);
        field_28 = uVar1;
        uVar1 = eastl::min<graphics::GraphicsQuality>(field_32, clientOptionsConfig.field_32);
        field_32 = uVar1;
        uVar1 = eastl::min<graphics::GraphicsQuality>(field_36, clientOptionsConfig.field_36);
        field_36 = uVar1;
        uVar1 = eastl::min<graphics::GraphicsQuality>(field_40, clientOptionsConfig.field_40);
        field_40 = uVar1;
        uVar1 = eastl::min<graphics::GraphicsQuality>(field_44, clientOptionsConfig.field_44);
        field_44 = uVar1;
        uVar1 = eastl::min<graphics::GraphicsQuality>(field_48, clientOptionsConfig.field_48);
        field_48 = uVar1;
        uVar1 = eastl::min<graphics::GraphicsQuality>(field_52, clientOptionsConfig.field_52);
        field_52 = uVar1;
        uVar1 = eastl::min<graphics::GraphicsQuality>(field_56, clientOptionsConfig.field_56);
        field_56 = uVar1;
        uVar1 = eastl::min<graphics::GraphicsQuality>(field_60, clientOptionsConfig.field_60);
        field_60 = uVar1;
        uVar1 = eastl::min<graphics::GraphicsQuality>(field_64, clientOptionsConfig.field_64);
        field_64 = uVar1;
        uVar1 = eastl::min<graphics::GraphicsQuality>(field_68, clientOptionsConfig.field_68);
        field_68 = uVar1;
        field_72 = eastl::min<graphics::GraphicsQuality>(field_72, clientOptionsConfig.field_72);
    }

} // namespace jag::game
