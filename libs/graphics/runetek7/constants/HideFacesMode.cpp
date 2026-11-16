// libs/graphics/runetek7/constants/HideFacesMode.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class HideFacesMode {
    public:
        HideFacesMode(unsigned int arg1, const char* str);
        void GetByID(unsigned int arg1);
        static HideFacesMode const* NEVER;        // = &enumArray
        static HideFacesMode const* TEXTURES_ON;  // = &enumArray[1] /* HideFacesMode(1, "textures on") */
        static HideFacesMode const* TEXTURES_OFF; // = &enumArray[2] /* HideFacesMode(2, "textures off") */
        static HideFacesMode enumArray[3];        // initialised in its definition
    };

    // 0x100f44638
    HideFacesMode const* HideFacesMode::NEVER = &enumArray;

    // 0x100f44640
    HideFacesMode const* HideFacesMode::TEXTURES_ON = &enumArray[1] /* HideFacesMode(1, "textures on") */;

    // 0x100f44648
    HideFacesMode const* HideFacesMode::TEXTURES_OFF = &enumArray[2] /* HideFacesMode(2, "textures off") */;

    // 0x103bc06c0, set at startup by ___cxx_global_var_init.16
    HideFacesMode HideFacesMode::enumArray[3] = {
        /* [0] */ HideFacesMode(0, "never"),
        /* [1] */ HideFacesMode(1, "textures on"),
        /* [2] */ HideFacesMode(2, "textures off"),
    };

    // 0x1004a2ca0: HideFacesMode::HideFacesMode(unsigned int, char const*) has the same machine code as MoveSpeed::MoveSpeed(int, char const*)

    // 0x10092a6e0
    void HideFacesMode::GetByID(unsigned int arg1) {
        uint32_t in_register_00000034;

        if (2 < (unsigned int)this) {
            LogAssert("id >= 0 && id < HideFacesMode::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "constants/HideFacesMode.cpp",
                      34, "HideFacesMode: Invalid HideFacesMode ID requested");
        }
        (*((array<HideFacesMode, 3ul>*)((unsigned long)this &
                                        4294967295)))[(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)];
    }

} // namespace jag::graphics
