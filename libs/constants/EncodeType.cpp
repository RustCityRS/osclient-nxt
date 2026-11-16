// libs/constants/EncodeType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.constants

namespace jag {
    class EncodeType {
    public:
        EncodeType(unsigned int arg1, const char* str);
        void GetByID(unsigned int arg1);
        static EncodeType const* NONE;       // = &enumArray
        static EncodeType const* PNG;        // = &enumArray[1] /* EncodeType(1, "png") */
        static EncodeType const* DXT;        // = &enumArray[2] /* EncodeType(2, "dxt") */
        static EncodeType const* PNG_MIPPED; // = &enumArray[3] /* EncodeType(3, "png mipped") */
        static EncodeType const* ETC;        // = &enumArray[4] /* EncodeType(4, "etc") */
        static EncodeType enumArray[5];      // initialised in its definition
    };

    // 0x100f481c0
    EncodeType const* EncodeType::NONE = &enumArray;

    // 0x100f481c8
    EncodeType const* EncodeType::PNG = &enumArray[1] /* EncodeType(1, "png") */;

    // 0x100f481d0
    EncodeType const* EncodeType::DXT = &enumArray[2] /* EncodeType(2, "dxt") */;

    // 0x100f481d8
    EncodeType const* EncodeType::PNG_MIPPED = &enumArray[3] /* EncodeType(3, "png mipped") */;

    // 0x100f481e0
    EncodeType const* EncodeType::ETC = &enumArray[4] /* EncodeType(4, "etc") */;

    // 0x103bc22f0, set at startup by ___cxx_global_var_init.6
    EncodeType EncodeType::enumArray[5] = {
        /* [0] */ EncodeType(0, "none"),
        /* [1] */ EncodeType(1, "png"),
        /* [2] */ EncodeType(2, "dxt"),
        /* [3] */ EncodeType(3, "png mipped"),
        /* [4] */ EncodeType(4, "etc"),
    };

    // 0x1004a2ca0: EncodeType::EncodeType(unsigned int, char const*) has the same machine code as MoveSpeed::MoveSpeed(int, char const*)

    // 0x100b89320
    void EncodeType::GetByID(unsigned int arg1) {
        uint32_t in_register_00000034;

        if (4 < (unsigned int)this) {
            LogAssert("id >= 0 && id <EncodeType::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/constants/EncodeType.cpp",
                      36, "EncodeType: Invalid EncodeType ID requested");
        }
        (*((array<EncodeType, 5ul>*)((unsigned long)this &
                                     4294967295)))[(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)];
    }

} // namespace jag
