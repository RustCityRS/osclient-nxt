// libs/graphics/runetek7/constants/TextureInclusionMode.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class TextureInclusionMode {
    public:
        TextureInclusionMode(unsigned int, char const*);
        void GetByID(unsigned int);
        static TextureInclusionMode const* /* 8 bytes */ DEFAULT; // = &enumArray
        static TextureInclusionMode const*                        /* 8 bytes */
            FORCE_INCLUDE;                 // = &enumArray[1] /* TextureInclusionMode(1, "force_include") */
        static TextureInclusionMode const* /* 8 bytes */
            FORCE_EXCLUDE;                 // = &enumArray[2] /* TextureInclusionMode(2, "force_exclude") */
        static TextureInclusionMode /* 48 bytes */ enumArray[3]; // initialised in its definition
    };

    // 0x100f44650, 8 bytes, __data
    TextureInclusionMode const* TextureInclusionMode::DEFAULT = &enumArray;

    // 0x100f44658, 8 bytes, __data
    TextureInclusionMode const* TextureInclusionMode::FORCE_INCLUDE =
        &enumArray[1] /* TextureInclusionMode(1, "force_include") */;

    // 0x100f44660, 8 bytes, __data
    TextureInclusionMode const* TextureInclusionMode::FORCE_EXCLUDE =
        &enumArray[2] /* TextureInclusionMode(2, "force_exclude") */;

    // 0x103bc06f0, 48 bytes, __common; constructor folded by the linker, Ghidra calls it game::VarLifetime::VarLifetime; set at startup by ___cxx_global_var_init.23
    TextureInclusionMode TextureInclusionMode::enumArray[3] = {
        /* [0] */ TextureInclusionMode(0, "default"),
        /* [1] */ TextureInclusionMode(1, "force_include"),
        /* [2] */ TextureInclusionMode(2, "force_exclude"),
    };

    // 0x1004a1f80: the linker folded this into MoveSpeed::MoveSpeed(int, char const*), which has identical code
    TextureInclusionMode::TextureInclusionMode(unsigned int, char const*);

    // 0x1004a2ca0: the linker folded this into MoveSpeed::MoveSpeed(int, char const*), which has identical code
    TextureInclusionMode::TextureInclusionMode(unsigned int, char const*);

    // 0x10092a740, 64 bytes, placed by class name and debug map
    // TextureInclusionMode::GetByID(unsigned int)
    void TextureInclusionMode::GetByID(uint param_1) {
        if (2 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("id >= 0 && id < TextureInclusionMode::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "constants/TextureInclusionMode.cpp",
                      34, "TextureInclusionMode: Invalid TextureInclusionMode ID requested");
        }
        std::array<TextureInclusionMode, 3ul>::operator[]((ulong)param_1);
    }

    // 0x10094cd80, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.23
    void ___cxx_global_var_init_23() {
        new (&TextureInclusionMode::enumArray) game::VarLifetime(0, "default");
        new (&DAT_103bc0700) game::VarLifetime(1, "force_include");
        new (&DAT_103bc0710) game::VarLifetime(2, "force_exclude");
    }

} // namespace jag::graphics
