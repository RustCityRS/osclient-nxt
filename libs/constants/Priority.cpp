// libs/constants/Priority.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.constants

namespace jag {
    class Priority {
    public:
        Priority(unsigned int arg1, const char* str);
        void GetByID(unsigned int arg1);
        static Priority const* HIGHEST; // = &enumArray
        static Priority const* HIGH;    // = &enumArray[1] /* Priority(1, "high") */
        static Priority const* LOW;     // = &enumArray[2] /* Priority(2, "low") */
        static Priority const* NONE;    // = &enumArray[3] /* Priority(3, "none") */
        static Priority enumArray[4];   // initialised in its definition
    };

    // 0x100f48290
    Priority const* Priority::HIGHEST = &enumArray;

    // 0x100f48298
    Priority const* Priority::HIGH = &enumArray[1] /* Priority(1, "high") */;

    // 0x100f482a0
    Priority const* Priority::LOW = &enumArray[2] /* Priority(2, "low") */;

    // 0x100f482a8
    Priority const* Priority::NONE = &enumArray[3] /* Priority(3, "none") */;

    // 0x103bc25c8, set at startup by ___cxx_global_var_init.67
    Priority Priority::enumArray[4] = {
        /* [0] */ Priority(0, "highest"),
        /* [1] */ Priority(1, "high"),
        /* [2] */ Priority(2, "low"),
        /* [3] */ Priority(3, "none"),
    };

    // 0x1004a2ca0: Priority::Priority(unsigned int, char const*) has the same machine code as MoveSpeed::MoveSpeed(int, char const*)

    // 0x100b89560
    void Priority::GetByID(unsigned int arg1) {
        uint32_t in_register_00000034;

        if (3 < (unsigned int)this) {
            LogAssert("id>=0 && id <Priority::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/constants/Priority.cpp",
                      33, "Priority: Invalid Priority ID requested");
        }
        (*((array<Priority, 4ul>*)((unsigned long)this &
                                   4294967295)))[(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)];
    }

} // namespace jag
