// libs/game/runetek5/config/vartype/constants/VarLifetime.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game {
    class VarLifetime {
    public:
        VarLifetime(unsigned int arg1, const char* str);
        void GetByID(unsigned int arg1);
        static VarLifetime const* TEMPORARY;       // = &enumArray
        static VarLifetime const* PERMANENT;       // = &enumArray[1] /* VarLifetime(1, "permanent") */
        static VarLifetime const* SERVERPERMANENT; // = &enumArray[2] /* VarLifetime(2, "serverpermanent") */
        static VarLifetime enumArray[3];           // initialised in its definition

    private:
        PlayerDataComparator<oldscape::social::FriendChatUser>* field_0;
        unsigned int field_8;
        uint8_t _unknown_12[4];
    };

    // 0x100f3c120
    VarLifetime const* VarLifetime::TEMPORARY = &enumArray;

    // 0x100f3c128
    VarLifetime const* VarLifetime::PERMANENT = &enumArray[1] /* VarLifetime(1, "permanent") */;

    // 0x100f3c130
    VarLifetime const* VarLifetime::SERVERPERMANENT = &enumArray[2] /* VarLifetime(2, "serverpermanent") */;

    // 0x1039bb770, set at startup by ___cxx_global_var_init.7
    VarLifetime VarLifetime::enumArray[3] = {
        /* [0] */ VarLifetime(0, "temporary"),
        /* [1] */ VarLifetime(1, "permanent"),
        /* [2] */ VarLifetime(2, "serverpermanent"),
    };

    // 0x1004a2ca0: VarLifetime::VarLifetime(unsigned int, char const*) has the same machine code as MoveSpeed::MoveSpeed(int, char const*)

    // 0x1004c5fe0
    void VarLifetime::GetByID(unsigned int arg1) {
        uint32_t in_register_00000034;

        if (2 < (unsigned int)this) {
            LogAssert("id>=0 && id <VarLifetime::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "vartype/constants/VarLifetime.cpp",
                      32, "VarLifetime: Invalid VarLifetime ID requested");
        }
        (*((array<VarLifetime, 3ul>*)((unsigned long)this &
                                      4294967295)))[(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)];
    }

} // namespace jag::game
