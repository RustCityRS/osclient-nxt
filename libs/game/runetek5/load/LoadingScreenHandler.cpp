// libs/game/runetek5/load/LoadingScreenHandler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game {
    class LoadingScreenHandler {
    public:
        void SetLoadingState(int, bool);
        void MainLogic();
        void GetLowestPercentageThisTick() const;

        // data members, from how the methods use this: 24 bytes
        int field_0;         // offset 0
        int field_4;         // offset 4
        int field_8;         // offset 8
        undefined4 field_12; // offset 12
        int field_16;        // offset 16
        undefined1 field_20; // offset 20
        char _unknown_21[3];
    };

    // 0x1004b3760, 160 bytes, placed by class name and debug map
    // LoadingScreenHandler::SetLoadingState(int, bool)
    void LoadingScreenHandler::SetLoadingState(int param_1, bool param_2) {
        undefined8 uVar2;

        field_8 = param_1;
        field_12 = eastl::min<graphics::GraphicsQuality>(param_1, field_12);
        if (field_20 == '\0') {
            if ((field_8 < field_0) && (param_2)) {
                field_20 = 1;
                uVar2 = logger::default_logger();
                logger::Logger::Log(uVar2, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/load/LoadingScreenHandler.cpp",
                                    18, "Begin loading screen");
            }
        } else if (field_4 <= field_8) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "load/LoadingScreenHandler.cpp",
                                22, "End loading screen");
            field_20 = 0;
            field_16 = 0;
        }
    }

    // 0x1004b3800, 32 bytes, placed by class name and debug map
    // LoadingScreenHandler::MainLogic()
    void LoadingScreenHandler::MainLogic() {
        field_12 = 100;
        if (field_20 != '\0') {
            field_16 = field_16 + 1;
        }
    }

    // 0x1004b3820, 32 bytes, placed by class name and debug map
    // LoadingScreenHandler::GetLowestPercentageThisTick() const
    void LoadingScreenHandler::GetLowestPercentageThisTick() {
        eastl::min<graphics::GraphicsQuality>(field_8, field_12);
    }

} // namespace jag::game
