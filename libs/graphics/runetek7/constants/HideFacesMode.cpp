// libs/graphics/runetek7/constants/HideFacesMode.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class HideFacesMode {
    public:
        HideFacesMode(unsigned int, char const*);
        void GetByID(unsigned int);
        static HideFacesMode const* /* 8 bytes */ NEVER;       // = &enumArray
        static HideFacesMode const* /* 8 bytes */ TEXTURES_ON; // = &enumArray[1] /* HideFacesMode(1, "textures on") */
        static HideFacesMode const*                            /* 8 bytes */
            TEXTURES_OFF;                                      // = &enumArray[2] /* HideFacesMode(2, "textures off") */
        static HideFacesMode /* 48 bytes */ enumArray[3];      // initialised in its definition
    };

    // 0x100f44638, 8 bytes, __data
    HideFacesMode const* HideFacesMode::NEVER = &enumArray;

    // 0x100f44640, 8 bytes, __data
    HideFacesMode const* HideFacesMode::TEXTURES_ON = &enumArray[1] /* HideFacesMode(1, "textures on") */;

    // 0x100f44648, 8 bytes, __data
    HideFacesMode const* HideFacesMode::TEXTURES_OFF = &enumArray[2] /* HideFacesMode(2, "textures off") */;

    // 0x103bc06c0, 48 bytes, __common; constructor folded by the linker, Ghidra calls it game::VarLifetime::VarLifetime; set at startup by ___cxx_global_var_init.16
    HideFacesMode HideFacesMode::enumArray[3] = {
        /* [0] */ HideFacesMode(0, "never"),
        /* [1] */ HideFacesMode(1, "textures on"),
        /* [2] */ HideFacesMode(2, "textures off"),
    };

    // 0x1004a1f80: the linker folded this into MoveSpeed::MoveSpeed(int, char const*), which has identical code
    HideFacesMode::HideFacesMode(unsigned int, char const*);

    // 0x1004a2ca0: the linker folded this into MoveSpeed::MoveSpeed(int, char const*), which has identical code
    HideFacesMode::HideFacesMode(unsigned int, char const*);

    // 0x10092a6e0, 64 bytes, placed by class name and debug map
    // HideFacesMode::GetByID(unsigned int)
    void HideFacesMode::GetByID(uint param_1) {
        if (2 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("id >= 0 && id < HideFacesMode::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "constants/HideFacesMode.cpp",
                      34, "HideFacesMode: Invalid HideFacesMode ID requested");
        }
        std::array<HideFacesMode, 3ul>::operator[]((ulong)param_1);
    }

    // 0x10094cd30, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.16
    void ___cxx_global_var_init_16() {
        new (&HideFacesMode::enumArray) game::VarLifetime(0, "never");
        new (&DAT_103bc06d0) game::VarLifetime(1, "textures on");
        new (&DAT_103bc06e0) game::VarLifetime(2, "textures off");
    }

} // namespace jag::graphics
