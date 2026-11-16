// libs/constants/DataStatus.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.constants

namespace jag {
    class DataStatus {
    public:
        DataStatus(unsigned int arg1, const char* str);
        void GetByID(unsigned int arg1);
        static DataStatus const* MISSING;   // = &enumArray
        static DataStatus const* NOTLOADED; // = &enumArray[1] /* DataStatus(1, "not loaded") */
        static DataStatus const* READY;     // = &enumArray[2] /* DataStatus(2, "ready") */
        static DataStatus enumArray[3];     // initialised in its definition
    };

    // 0x100f481a8
    DataStatus const* DataStatus::MISSING = &enumArray;

    // 0x100f481b0
    DataStatus const* DataStatus::NOTLOADED = &enumArray[1] /* DataStatus(1, "not loaded") */;

    // 0x100f481b8
    DataStatus const* DataStatus::READY = &enumArray[2] /* DataStatus(2, "ready") */;

    // 0x103bc22c0, set at startup by ___cxx_global_var_init
    DataStatus DataStatus::enumArray[3] = {
        /* [0] */ DataStatus(0, "missing"),
        /* [1] */ DataStatus(1, "not loaded"),
        /* [2] */ DataStatus(2, "ready"),
    };

    // 0x1004a2ca0: DataStatus::DataStatus(unsigned int, char const*) has the same machine code as MoveSpeed::MoveSpeed(int, char const*)

    // 0x100b892c0
    void DataStatus::GetByID(unsigned int arg1) {
        uint32_t in_register_00000034;

        if (2 < (unsigned int)this) {
            LogAssert("id>=0 && id <DataStatus::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/constants/DataStatus.cpp",
                      30, "DataStatus: Invalid DataStatus ID requested");
        }
        (*((array<DataStatus, 3ul>*)((unsigned long)this &
                                     4294967295)))[(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)];
    }

} // namespace jag
