// libs/graphics/runetek7/constants/AlphaMode.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class AlphaMode {
    public:
        AlphaMode(unsigned int arg1, const char* str);
        void GetByID(unsigned int arg1);
        static AlphaMode const* ALPHA_OPAQUE;  // = &enumArray
        static AlphaMode const* ALPHA_TESTED;  // = &enumArray[1] /* AlphaMode(1, "alpha tested") */
        static AlphaMode const* ALPHA_BLENDED; // = &enumArray[2] /* AlphaMode(2, "alpha blended") */
        static AlphaMode enumArray[3];         // initialised in its definition
    };

    // 0x100f445f0
    AlphaMode const* AlphaMode::ALPHA_OPAQUE = &enumArray;

    // 0x100f445f8
    AlphaMode const* AlphaMode::ALPHA_TESTED = &enumArray[1] /* AlphaMode(1, "alpha tested") */;

    // 0x100f44600
    AlphaMode const* AlphaMode::ALPHA_BLENDED = &enumArray[2] /* AlphaMode(2, "alpha blended") */;

    // 0x103bc0630, set at startup by ___cxx_global_var_init
    AlphaMode AlphaMode::enumArray[3] = {
        /* [0] */ AlphaMode(0, "opaque"),
        /* [1] */ AlphaMode(1, "alpha tested"),
        /* [2] */ AlphaMode(2, "alpha blended"),
    };

    // 0x1004a2ca0: AlphaMode::AlphaMode(unsigned int, char const*) has the same machine code as MoveSpeed::MoveSpeed(int, char const*)

    // 0x10092a620
    void AlphaMode::GetByID(unsigned int arg1) {
        uint32_t in_register_00000034;

        if (2 < (unsigned int)this) {
            LogAssert("id >= 0 && id < AlphaMode::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "constants/AlphaMode.cpp",
                      34, "AlphaMode: Invalid AlphaMode ID requested");
        }
        (*((array<AlphaMode, 3ul>*)((unsigned long)this &
                                    4294967295)))[(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)];
    }

} // namespace jag::graphics
