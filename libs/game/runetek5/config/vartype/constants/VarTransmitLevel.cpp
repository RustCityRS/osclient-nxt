// libs/game/runetek5/config/vartype/constants/VarTransmitLevel.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game {
    class VarTransmitLevel {
    public:
        VarTransmitLevel(unsigned int arg1, const char* str);
        void GetByID(unsigned int arg1);
        static VarTransmitLevel const* NEVER;            // = &enumArray
        static VarTransmitLevel const* ON_SET_DIFFERENT; // = &enumArray[1] /* VarTransmitLevel(1, "onsetdiff") */
        static VarTransmitLevel const* ON_SET_ALWAYS;    // = &enumArray[2] /* VarTransmitLevel(2, "onsetalways") */
        static VarTransmitLevel enumArray[3];            // initialised in its definition
    };

    // 0x100f3c138
    VarTransmitLevel const* VarTransmitLevel::NEVER = &enumArray;

    // 0x100f3c140
    VarTransmitLevel const* VarTransmitLevel::ON_SET_DIFFERENT = &enumArray[1] /* VarTransmitLevel(1, "onsetdiff") */;

    // 0x100f3c148
    VarTransmitLevel const* VarTransmitLevel::ON_SET_ALWAYS = &enumArray[2] /* VarTransmitLevel(2, "onsetalways") */;

    // 0x1039bb7a0, set at startup by ___cxx_global_var_init.14
    VarTransmitLevel VarTransmitLevel::enumArray[3] = {
        /* [0] */ VarTransmitLevel(0, "never"),
        /* [1] */ VarTransmitLevel(1, "onsetdiff"),
        /* [2] */ VarTransmitLevel(2, "onsetalways"),
    };

    // 0x1004a2ca0: VarTransmitLevel::VarTransmitLevel(unsigned int, char const*) has the same machine code as MoveSpeed::MoveSpeed(int, char const*)

    // 0x1004c6040
    void VarTransmitLevel::GetByID(unsigned int arg1) {
        uint32_t in_register_00000034;

        if (2 < (unsigned int)this) {
            LogAssert("id>=0 && id <VarTransmitLevel::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "vartype/constants/VarTransmitLevel.cpp",
                      32, "VarTransmitLevel: Invalid VarTransmitLevel ID requested");
        }
        (*((array<VarTransmitLevel, 3ul>*)((unsigned long)this &
                                           4294967295)))[(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)];
    }

} // namespace jag::game
