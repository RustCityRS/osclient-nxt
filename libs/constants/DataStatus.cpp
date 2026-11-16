// libs/constants/DataStatus.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.constants

namespace jag {
    class DataStatus {
    public:
        DataStatus(unsigned int, char const*);
        void GetByID(unsigned int);
        static DataStatus const* /* 8 bytes */ MISSING;   // = &enumArray
        static DataStatus const* /* 8 bytes */ NOTLOADED; // = &enumArray[1] /* DataStatus(1, "not loaded") */
        static DataStatus const* /* 8 bytes */ READY;     // = &enumArray[2] /* DataStatus(2, "ready") */
        static DataStatus /* 48 bytes */ enumArray[3];    // initialised in its definition
    };

    // 0x100f481a8, 8 bytes, __data
    DataStatus const* DataStatus::MISSING = &enumArray;

    // 0x100f481b0, 8 bytes, __data
    DataStatus const* DataStatus::NOTLOADED = &enumArray[1] /* DataStatus(1, "not loaded") */;

    // 0x100f481b8, 8 bytes, __data
    DataStatus const* DataStatus::READY = &enumArray[2] /* DataStatus(2, "ready") */;

    // 0x103bc22c0, 48 bytes, __common; constructor folded by the linker, Ghidra calls it game::VarLifetime::VarLifetime; set at startup by ___cxx_global_var_init
    DataStatus DataStatus::enumArray[3] = {
        /* [0] */ DataStatus(0, "missing"),
        /* [1] */ DataStatus(1, "not loaded"),
        /* [2] */ DataStatus(2, "ready"),
    };

    // 0x1004a1f80: the linker folded this into MoveSpeed::MoveSpeed(int, char const*), which has identical code
    DataStatus::DataStatus(unsigned int, char const*);

    // 0x1004a2ca0: the linker folded this into MoveSpeed::MoveSpeed(int, char const*), which has identical code
    DataStatus::DataStatus(unsigned int, char const*);

    // 0x100b892c0, 64 bytes, placed by class name and debug map
    // DataStatus::GetByID(unsigned int)
    void DataStatus::GetByID(uint param_1) {
        if (2 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("id>=0 && id <DataStatus::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/constants/DataStatus.cpp",
                      30, "DataStatus: Invalid DataStatus ID requested");
        }
        std::array<DataStatus, 3ul>::operator[]((ulong)param_1);
    }

    // 0x100b89b50, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        new (&DataStatus::enumArray) game::VarLifetime(0, "missing");
        new (&DAT_103bc22d0) game::VarLifetime(1, "not loaded");
        new (&DAT_103bc22e0) game::VarLifetime(2, "ready");
    }

} // namespace jag
