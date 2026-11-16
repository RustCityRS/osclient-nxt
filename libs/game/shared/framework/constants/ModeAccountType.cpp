// libs/game/shared/framework/constants/ModeAccountType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.shared

namespace jag {
    class ModeAccountType {
    public:
        ModeAccountType(unsigned int arg1, const char* str);
        void GetByID(unsigned int arg1);
        static ModeAccountType const* FREE;    // = &enumArray
        static ModeAccountType const* MEMBERS; // = &enumArray[1] /* ModeAccountType(1, "members") */
        static ModeAccountType enumArray[2];   // initialised in its definition
    };

    // 0x100f3f128
    ModeAccountType const* ModeAccountType::FREE = &enumArray;

    // 0x100f3f130
    ModeAccountType const* ModeAccountType::MEMBERS = &enumArray[1] /* ModeAccountType(1, "members") */;

    // 0x1039bd070, set at startup by ___cxx_global_var_init.105
    ModeAccountType ModeAccountType::enumArray[2] = {
        /* [0] */ ModeAccountType(0, "free"),
        /* [1] */ ModeAccountType(1, "members"),
    };

    // 0x1004a2ca0: ModeAccountType::ModeAccountType(unsigned int, char const*) has the same machine code as MoveSpeed::MoveSpeed(int, char const*)

    // 0x1006e1850
    void ModeAccountType::GetByID(unsigned int arg1) {
        uint32_t in_register_00000034;

        if (1 < (unsigned int)this) {
            LogAssert("id>=0 && id <ModeAccountType::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/framework/"
                      "constants/ModeAccountType.cpp",
                      27, "ModeAccountType: Invalid ModeAccountType ID requested");
        }
        (*((array<ModeAccountType, 2ul>*)((unsigned long)this &
                                          4294967295)))[(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)];
    }

} // namespace jag
