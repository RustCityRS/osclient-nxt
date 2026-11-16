// libs/graphics/runetek7/constants/TextureInclusionMode.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class TextureInclusionMode {
    public:
        TextureInclusionMode(unsigned int arg1, const char* str);
        void GetByID(unsigned int arg1);
        static TextureInclusionMode const* DEFAULT; // = &enumArray
        static TextureInclusionMode const*
            FORCE_INCLUDE; // = &enumArray[1] /* TextureInclusionMode(1, "force_include") */
        static TextureInclusionMode const*
            FORCE_EXCLUDE;                        // = &enumArray[2] /* TextureInclusionMode(2, "force_exclude") */
        static TextureInclusionMode enumArray[3]; // initialised in its definition
    };

    // 0x100f44650
    TextureInclusionMode const* TextureInclusionMode::DEFAULT = &enumArray;

    // 0x100f44658
    TextureInclusionMode const* TextureInclusionMode::FORCE_INCLUDE =
        &enumArray[1] /* TextureInclusionMode(1, "force_include") */;

    // 0x100f44660
    TextureInclusionMode const* TextureInclusionMode::FORCE_EXCLUDE =
        &enumArray[2] /* TextureInclusionMode(2, "force_exclude") */;

    // 0x103bc06f0, set at startup by ___cxx_global_var_init.23
    TextureInclusionMode TextureInclusionMode::enumArray[3] = {
        /* [0] */ TextureInclusionMode(0, "default"),
        /* [1] */ TextureInclusionMode(1, "force_include"),
        /* [2] */ TextureInclusionMode(2, "force_exclude"),
    };

    // 0x1004a2ca0: TextureInclusionMode::TextureInclusionMode(unsigned int, char const*) has the same machine code as MoveSpeed::MoveSpeed(int, char const*)

    // 0x10092a740
    void TextureInclusionMode::GetByID(unsigned int arg1) {
        uint32_t in_register_00000034;

        if (2 < (unsigned int)this) {
            LogAssert("id >= 0 && id < TextureInclusionMode::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "constants/TextureInclusionMode.cpp",
                      34, "TextureInclusionMode: Invalid TextureInclusionMode ID requested");
        }
        (*((array<TextureInclusionMode, 3ul>*)((unsigned long)this &
                                               4294967295)))[(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)];
    }

} // namespace jag::graphics
