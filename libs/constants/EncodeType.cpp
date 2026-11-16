// libs/constants/EncodeType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.constants

namespace jag {
    class EncodeType {
    public:
        EncodeType(unsigned int, char const*);
        void GetByID(unsigned int);
        static EncodeType const* /* 8 bytes */ NONE;       // = &enumArray
        static EncodeType const* /* 8 bytes */ PNG;        // = &enumArray[1] /* EncodeType(1, "png") */
        static EncodeType const* /* 8 bytes */ DXT;        // = &enumArray[2] /* EncodeType(2, "dxt") */
        static EncodeType const* /* 8 bytes */ PNG_MIPPED; // = &enumArray[3] /* EncodeType(3, "png mipped") */
        static EncodeType const* /* 8 bytes */ ETC;        // = &enumArray[4] /* EncodeType(4, "etc") */
        static EncodeType /* 80 bytes */ enumArray[5];     // initialised in its definition
    };

    // 0x100f481c0, 8 bytes, __data
    EncodeType const* EncodeType::NONE = &enumArray;

    // 0x100f481c8, 8 bytes, __data
    EncodeType const* EncodeType::PNG = &enumArray[1] /* EncodeType(1, "png") */;

    // 0x100f481d0, 8 bytes, __data
    EncodeType const* EncodeType::DXT = &enumArray[2] /* EncodeType(2, "dxt") */;

    // 0x100f481d8, 8 bytes, __data
    EncodeType const* EncodeType::PNG_MIPPED = &enumArray[3] /* EncodeType(3, "png mipped") */;

    // 0x100f481e0, 8 bytes, __data
    EncodeType const* EncodeType::ETC = &enumArray[4] /* EncodeType(4, "etc") */;

    // 0x103bc22f0, 80 bytes, __common; constructor folded by the linker, Ghidra calls it game::VarLifetime::VarLifetime; set at startup by ___cxx_global_var_init.6
    EncodeType EncodeType::enumArray[5] = {
        /* [0] */ EncodeType(0, "none"),
        /* [1] */ EncodeType(1, "png"),
        /* [2] */ EncodeType(2, "dxt"),
        /* [3] */ EncodeType(3, "png mipped"),
        /* [4] */ EncodeType(4, "etc"),
    };

    // 0x1004a1f80: the linker folded this into MoveSpeed::MoveSpeed(int, char const*), which has identical code
    EncodeType::EncodeType(unsigned int, char const*);

    // 0x1004a2ca0: the linker folded this into MoveSpeed::MoveSpeed(int, char const*), which has identical code
    EncodeType::EncodeType(unsigned int, char const*);

    // 0x100b89320, 64 bytes, placed by class name and debug map
    // EncodeType::GetByID(unsigned int)
    void EncodeType::GetByID(uint param_1) {
        if (4 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("id >= 0 && id <EncodeType::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/constants/EncodeType.cpp",
                      36, "EncodeType: Invalid EncodeType ID requested");
        }
        std::array<EncodeType, 5ul>::operator[]((ulong)param_1);
    }

    // 0x100b89ba0, 128 bytes, placed by the data it initialises
    // ___cxx_global_var_init.6
    void ___cxx_global_var_init_6() {
        new (&EncodeType::enumArray) game::VarLifetime(0, "none");
        new (&DAT_103bc2300) game::VarLifetime(1, "png");
        new (&DAT_103bc2310) game::VarLifetime(2, "dxt");
        new (&DAT_103bc2320) game::VarLifetime(3, "png mipped");
        new (&DAT_103bc2330) game::VarLifetime(4, "etc");
    }

} // namespace jag
