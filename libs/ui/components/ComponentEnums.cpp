// libs/ui/components/ComponentEnums.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

namespace jag::ui {
    // 0x1006926f0, 160 bytes, placed by debug map only (low confidence)
    // CalculatePositionValue(ComponentPositionMode, int, int, int)
    void CalculatePositionValue(ulong param_1) {
        char* this;

        if (5 < (byte)param_1) {
            this = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                   "ComponentEnums.cpp";
            LogFatalError("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                          "ComponentEnums.cpp",
                          40, 0, (char*)0);
            /* WARNING: Subroutine does not return */
            ~OptionStore();
        }
        /* WARNING: Could not recover jumptable at 4301858570. Too many branches */
        /* WARNING: Treating indirect jump as call */
        (*(code*)(&DAT_10069276c + *(int*)(&DAT_10069276c + (param_1 & 4294967295) * 4)))();
    }

    // 0x100692870, 96 bytes, placed by debug map only (low confidence)
    // CalculateSizeValue(ComponentSizeMode, int, int)
    void CalculateSizeValue(ulong param_1) {
        char* this;

        if (4 < (byte)param_1) {
            this = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                   "ComponentEnums.cpp";
            LogFatalError("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                          "ComponentEnums.cpp",
                          19, 0, (char*)0);
            /* WARNING: Subroutine does not return */
            ~OptionStore();
        }
        /* WARNING: Could not recover jumptable at 4301858954. Too many branches */
        /* WARNING: Treating indirect jump as call */
        (*(code*)(&DAT_1006928bc + *(int*)(&DAT_1006928bc + (param_1 & 4294967295) * 4)))();
    }

} // namespace jag::ui
