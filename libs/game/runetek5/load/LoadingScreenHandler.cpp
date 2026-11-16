// libs/game/runetek5/load/LoadingScreenHandler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game {
    class LoadingScreenHandler {
    public:
        void SetLoadingState(int arg1, bool arg2);
        void MainLogic();
        void GetLowestPercentageThisTick() const;

    private:
        int field_0;
        int field_4;
        int field_8;
        EnumOptionToggle field_12;
        int field_16;
        uint8_t field_20;
        uint8_t _unknown_21[3];
    };

    // 0x1004b3760
    void LoadingScreenHandler::SetLoadingState(int arg1, bool arg2) {
        Logger* pLVar2;

        field_8 = arg1;
        field_12 = eastl::min<graphics::GraphicsQuality>(arg1, field_12);
        if (field_20 == '\0') {
            if ((field_8 < field_0) && (arg2)) {
                field_20 = 1;
                pLVar2 = logger::default_logger();
                pLVar2->Log(false, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/load/"
                            "LoadingScreenHandler.cpp",
                            18, "Begin loading screen");
            }
        } else if (field_4 <= field_8) {
            pLVar2 = logger::default_logger();
            pLVar2->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/load/"
                        "LoadingScreenHandler.cpp",
                        22, "End loading screen");
            field_20 = 0;
            field_16 = 0;
        }
    }

    // 0x1004b3800
    void LoadingScreenHandler::MainLogic() {
        field_12 = 100;
        if (field_20 != '\0') {
            field_16 = field_16 + 1;
        }
    }

    // 0x1004b3820
    void LoadingScreenHandler::GetLowestPercentageThisTick() const {
        eastl::min<graphics::GraphicsQuality>(field_8, field_12);
    }

} // namespace jag::game
