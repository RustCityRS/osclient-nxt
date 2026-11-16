// libs/ui/components/ComponentEnums.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

namespace jag::ui {
    // 0x1006926f0
    void CalculatePositionValue(ComponentPositionMode componentPositionMode, int arg2, int arg3, int arg4) {
        uint32_t in_register_00000034;
        char* char;

        if (5 < (uint8_t)componentPositionMode) {
            char = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                   "ComponentEnums.cpp";
            LogFatalError("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                          "ComponentEnums.cpp",
                          40, 0, nullptr);
            char->~OptionStore();
        }
        (*(void (*)(...))(&DAT_10069276c + *(int*)(&DAT_10069276c + (unsigned long)componentPositionMode * 4)))(
            &DAT_10069276c, (((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2));
    }

    // 0x100692870
    void CalculateSizeValue(ComponentSizeMode componentSizeMode, int arg2, int arg3) {
        uint32_t in_register_00000034;
        uint32_t in_register_0000003c;
        char* char;

        if (4 < (uint8_t)componentSizeMode) {
            char = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                   "ComponentEnums.cpp";
            LogFatalError("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                          "ComponentEnums.cpp",
                          19, 0, nullptr);
            char->~OptionStore();
        }
        (*(void (*)(...))(&DAT_1006928bc + *(int*)(&DAT_1006928bc + (unsigned long)componentSizeMode * 4)))(
            (((uint64_t)in_register_0000003c << 32) | (uint32_t)componentSizeMode),
            (((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2));
    }

} // namespace jag::ui
